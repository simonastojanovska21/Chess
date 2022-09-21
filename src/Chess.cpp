//
// Created by Simona on 12-Sep-22.
//

#include <vector>
#include "glm/gtc/type_ptr.hpp"
#include <sstream>
#include "Chess.hpp"

Chess::Chess() {
    stockfish = new Stockfish();
}

char Chess::getFigureAtBoard(int x, int y) {
    return chessBoard[x][y];
}

bool Chess::checkValidIndex(int index) {
    if(index>=0 && index<8)
        return true;
    return false;
}

void Chess::resetAvailablePositions(){
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            availablePositions[i][j] = false;
        }
    }
}

std::string Chess::getUciFormat(int x, int y) {
    return uciFormat[x][y];
}


void Chess::getLegalMoves() {
    std::string result = stockfish ->getLegalMovesFromScript(moves);
    std::string legalMoves = result.substr(0,result.find('\n'));
    std::cout<<legalMoves<<std::endl;
    std::string status = result.substr(result.find('\n')+1);
    std::string checkStatus = status.substr(0,status.find(' '));
    std::string checkMateStatus = status.substr(status.find(' ')+1);

    if(checkMateStatus == "True")
        checkMate = true;
    if(checkStatus == "True"){
        NEXT_TURN == WHITE ? checkKing='K' : checkKing='k';
    } else
        checkKing='0';

    std::string selectedUciFormat = getUciFormat(selectedSquare.x,selectedSquare.y);
    std::stringstream ss(legalMoves);
    std::string legalMove;
    while (!ss.eof()) {
        getline(ss, legalMove, ',');
        if(legalMove.substr(0,2) == selectedUciFormat){
            //std::cout << legalMove.substr(2,4) << std::endl;
            glm::vec2 pos = stockfish ->convertUciFormatToChessBoardCoordinates(legalMove.substr(2,4));
            availablePositions[(int)pos.x][(int)pos.y] = true;
        }

    }

}

bool Chess::hasNextMove() {
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            if(availablePositions[i][j])
                return true;
        }
    }
    return false;
}

void Chess::makeMove() {
    chessBoard[(int)selectedSquare.x][(int)selectedSquare.y] = getFigureAtBoard(selectedFigure.x, selectedFigure.y);
    chessBoard[(int)selectedFigure.x][(int)selectedFigure.y] = '0';
    resetAvailablePositions();
}

void Chess::resetBoard() {
    NEXT_TURN = WHITE;
    resetAvailablePositions();
    selectedSquare = glm::vec2(0,0);
    selectedFigure = glm::vec2(-1,-1);
    moves = "";
    checkKing='0';
    checkMate = false;
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            chessBoard[i][j] = defaultBoard[i][j];
        }
    }
}

void Chess::handleSpaceButton() {

    if(NEXT_TURN == WHITE){
        if(selectedFigure.x ==-1 && getFigureAtBoard(selectedSquare.x, selectedSquare.y) != '0'){
            getLegalMoves();
            if(hasNextMove())
                selectedFigure = selectedSquare;
        }
        else if(selectedFigure.x != -1 && availablePositions[(int)selectedSquare.x][(int) selectedSquare.y]){
            makeMove();

            std::string start = uciFormat[(int)selectedFigure.x][(int)selectedFigure.y];
            std::string end = uciFormat[(int)selectedSquare.x][(int)selectedSquare.y];
            moves.append(start + end + ",");

            getLegalMoves();
            selectedFigure = glm::vec2(-1,-1);
            selectedSquare = glm::vec2 (7,0);
            if(GAME_MODE == TWO_PLAYERS)
                NEXT_TURN = BLACK;
            else
                NEXT_TURN = COMPUTER;
        }
        else{
            selectedFigure = glm::vec2(-1,-1);
            resetAvailablePositions();
        }
    }
    else if(NEXT_TURN == BLACK){
        if(selectedFigure.x ==-1 && getFigureAtBoard(selectedSquare.x, selectedSquare.y) != '0'){
            getLegalMoves();
            if(hasNextMove())
                selectedFigure = selectedSquare;
        }
        else if(selectedFigure.x != -1 && availablePositions[(int)selectedSquare.x][(int) selectedSquare.y]){
            makeMove();

            std::string start = uciFormat[(int)selectedFigure.x][(int)selectedFigure.y];
            std::string end = uciFormat[(int)selectedSquare.x][(int)selectedSquare.y];
            moves.append(start + end + ",");

            getLegalMoves();
            selectedFigure = glm::vec2(-1,-1);
            selectedSquare = glm::vec2 (0,0);
            NEXT_TURN = WHITE;
        }
        else{
            selectedFigure = glm::vec2(-1,-1);
            resetAvailablePositions();
        }
    }
    if(NEXT_TURN == COMPUTER){
        std::string computerMove = stockfish->getNextComputerMove(moves);
        moves.append(computerMove.substr(0,4)+",");

        std::string result = stockfish ->getLegalMovesFromScript(moves);
        std::string status = result.substr(result.find('\n')+1);
        std::string checkStatus = status.substr(0,status.find(' '));
        std::string checkMateStatus = status.substr(status.find(' ')+1);
        if(checkMateStatus == "True")
            checkMate = true;
        if(checkStatus == "True")
            checkKing='K';
        else
            checkKing='0';

        selectedFigure = stockfish->convertUciFormatToChessBoardCoordinates(computerMove.substr(0,2));
        selectedSquare = stockfish->convertUciFormatToChessBoardCoordinates(computerMove.substr(2,4));
        makeMove();
        selectedFigure = glm::vec2(-1,-1);
        selectedSquare = glm::vec2 (0,0);
        NEXT_TURN = WHITE;
    }
}
