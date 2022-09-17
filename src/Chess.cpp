//
// Created by Simona on 12-Sep-22.
//

#include <vector>
#include "glm/gtc/type_ptr.hpp"
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

void Chess::updateAvailablePositions(std::string legalMoves, std::string start,int x, int y) {
    std::string end;
    end = getUciFormat(x, y);
    if(legalMoves.find(start+end) != std::string::npos)
        availablePositions[x][y] = true;
}

void Chess::getWhitePawnAvailableMoves(std::string legalMoves){
    std::string start = getUciFormat(selectedSquare.x,selectedSquare.y);
    std::string end;
    //The first move of the pawn can be 2 squares forward
    updateAvailablePositions(legalMoves, start, selectedSquare.x + 2, selectedSquare.y);

    //By default, the pawn moves 1 square forward
    updateAvailablePositions(legalMoves, start, selectedSquare.x + 1, selectedSquare.y);

    //The pawn can move diagonally to capture a piece of opposite color
    updateAvailablePositions(legalMoves, start, selectedSquare.x + 1, selectedSquare.y -1);
    updateAvailablePositions(legalMoves, start, selectedSquare.x + 1, selectedSquare.y -1);
}

void Chess::getBlackPawnAvailableMoves(std::string legalMoves) {
    std::string start = getUciFormat(selectedSquare.x,selectedSquare.y);;
    std::string end;
    //The first move of the pawn can be 2 squares forward
    updateAvailablePositions(legalMoves, start, selectedSquare.x - 2, selectedSquare.y);

    //By default, the pawn moves 1 square forward
    updateAvailablePositions(legalMoves, start, selectedSquare.x - 1, selectedSquare.y);

    //The pawn can move diagonally to capture a piece of opposite color
    updateAvailablePositions(legalMoves, start, selectedSquare.x - 1,  selectedSquare.y - 1);
    updateAvailablePositions(legalMoves, start, selectedSquare.x - 1, selectedSquare.y + 1);
}

void Chess::getRookAvailableMoves(std::string legalMoves){
    //Move forward until a figure is reached
    std::string start = getUciFormat(selectedSquare.x,selectedSquare.y);;
    std::string end;
    for(int i=(int)selectedSquare.x+1; i < 8;i++){
        end = getUciFormat(i,selectedSquare.y);
        if(legalMoves.find(start+end) != std::string::npos)
            availablePositions[i][(int) selectedSquare.y] = true;
        else
            break;
    }

    //Move backwards until a figure is reached
    for(int i=(int)selectedSquare.x-1; i >= 0;i-- ){
        end = getUciFormat(i,selectedSquare.y);
        if(legalMoves.find(start+end) != std::string::npos)
            availablePositions[i][(int) selectedSquare.y] = true;
        else
            break;
    }

    //Move to the left
    for(int i=(int)selectedSquare.y-1;i>=0;i--){
        end = getUciFormat(selectedSquare.x, i);
        if(legalMoves.find(start+end) != std::string::npos)
            availablePositions[(int) selectedSquare.x][i] = true;
        else
            break;
    }

    //Move to the right
    for(int i = (int)selectedSquare.y+1;i<8;i++){
        end = getUciFormat(selectedSquare.x, i);
        if(legalMoves.find(start+end) != std::string::npos)
            availablePositions[(int) selectedSquare.x][i] = true;
        else
            break;
    }
}

void Chess::getBishopAvailableMoves(std::string legalMoves) {
    std::string start = getUciFormat(selectedSquare.x,selectedSquare.y);
    std::string end;
    int x = (int) selectedSquare.x + 1;
    int y = (int) selectedSquare.y - 1;
    for(int i=x,j=y; i<8 && j>=0;i++,j--){
        end = getUciFormat(i,j);
        if(legalMoves.find(start+end) != std::string::npos)
            availablePositions[i][j] = true;
        else
            break;
    }

    //Move forward right
    x = (int) selectedSquare.x + 1;
    y = (int) selectedSquare.y + 1;
    for(int i=x,j=y; i<8 && j<8;i++,j++){
        end = getUciFormat(i,j);
        if(legalMoves.find(start+end) != std::string::npos)
            availablePositions[i][j] = true;
        else
            break;
    }

    //Move backward left
    x = (int) selectedSquare.x - 1;
    y = (int) selectedSquare.y - 1;
    for(int i=x,j=y; i>=0 && j>=0;i--,j--){
        end = getUciFormat(i,j);
        if(legalMoves.find(start+end) != std::string::npos)
            availablePositions[i][j] = true;
        else
            break;
    }

    //Move backward right
    x = (int) selectedSquare.x - 1;
    y = (int) selectedSquare.y + 1;
    for(int i=x,j=y; i>=0 && j<8;i--,j++){
        end = getUciFormat(i,j);
        if(legalMoves.find(start+end) != std::string::npos)
            availablePositions[i][j] = true;
        else
            break;
    }
}

void Chess::getKingAvailableMoves(std::string legalMoves) {
    std::string start = getUciFormat(selectedSquare.x,selectedSquare.y);

    //Move left and right
    if(checkValidIndex(selectedSquare.y-1))
        updateAvailablePositions(legalMoves, start, selectedSquare.x, selectedSquare.y-1);
    if( checkValidIndex(selectedSquare.y+1))
        updateAvailablePositions(legalMoves, start, selectedSquare.x, selectedSquare.y+1);

    //Move up and down
    if(checkValidIndex(selectedSquare.x+1))
        updateAvailablePositions(legalMoves, start, selectedSquare.x+1, selectedSquare.y);
    if(checkValidIndex(selectedSquare.x-1))
        updateAvailablePositions(legalMoves, start, selectedSquare.x-1, selectedSquare.y);

    //Move forward left and right
    if(checkValidIndex(selectedSquare.x+1) &&checkValidIndex(selectedSquare.y-1))
        updateAvailablePositions(legalMoves, start, selectedSquare.x+1, selectedSquare.y-1);
    if(checkValidIndex(selectedSquare.x+1) && checkValidIndex(selectedSquare.y+1))
        updateAvailablePositions(legalMoves, start, selectedSquare.x+1, selectedSquare.y+1);

    //Move backward left and right
    if(checkValidIndex(selectedSquare.x-1) &&checkValidIndex(selectedSquare.y-1))
        updateAvailablePositions(legalMoves, start, selectedSquare.x-1, selectedSquare.y-1);
    if(checkValidIndex(selectedSquare.x-1) && checkValidIndex(selectedSquare.y+1))
        updateAvailablePositions(legalMoves, start, selectedSquare.x-1, selectedSquare.y+1);
}

void Chess::getKnightAvailableMoves(std::string legalMoves) {
    std::string start = getUciFormat(selectedSquare.x,selectedSquare.y);
    //Move forward left in L shape
    if(checkValidIndex(selectedSquare.x+1) && checkValidIndex(selectedSquare.y-2))
        updateAvailablePositions(legalMoves, start, selectedSquare.x+1, selectedSquare.y-2);
    if(checkValidIndex(selectedSquare.x+2) && checkValidIndex(selectedSquare.y-1))
        updateAvailablePositions(legalMoves, start, selectedSquare.x+2, selectedSquare.y-1);

    //Move forward right in L shape
    if(checkValidIndex(selectedSquare.x+1) && checkValidIndex(selectedSquare.y+2))
        updateAvailablePositions(legalMoves, start, selectedSquare.x+1, selectedSquare.y+2);
    if(checkValidIndex(selectedSquare.x+2) && checkValidIndex(selectedSquare.y+1))
        updateAvailablePositions(legalMoves, start, selectedSquare.x+2, selectedSquare.y+1);

    //Move backwards left in L shape
    if(checkValidIndex(selectedSquare.x-1) && checkValidIndex(selectedSquare.y-2))
        updateAvailablePositions(legalMoves, start, selectedSquare.x-1, selectedSquare.y-2);
    if(checkValidIndex(selectedSquare.x-2) && checkValidIndex(selectedSquare.y-1))
        updateAvailablePositions(legalMoves, start, selectedSquare.x-2, selectedSquare.y-1);

    //Move backwards right in L shape
    if(checkValidIndex(selectedSquare.x-1) && checkValidIndex(selectedSquare.y+2))
        updateAvailablePositions(legalMoves, start, selectedSquare.x-1, selectedSquare.y+2);
    if(checkValidIndex(selectedSquare.x-2) && checkValidIndex(selectedSquare.y+1))
        updateAvailablePositions(legalMoves, start, selectedSquare.x-2, selectedSquare.y+1);
}

void Chess::getLegalMoves() {
    std::string legalMoves = stockfish ->getLegalMovesFromScript(moves);
    if(getFigureAtBoard(selectedSquare.x, selectedSquare.y) == 'P')
        getWhitePawnAvailableMoves(legalMoves);
    if(getFigureAtBoard(selectedSquare.x, selectedSquare.y) == 'p')
        getBlackPawnAvailableMoves(legalMoves);
    if(getFigureAtBoard(selectedSquare.x, selectedSquare.y) == 'R' || getFigureAtBoard(selectedSquare.x, selectedSquare.y) == 'r')
        getRookAvailableMoves(legalMoves);
    if(getFigureAtBoard(selectedSquare.x, selectedSquare.y) == 'B' || getFigureAtBoard(selectedSquare.x, selectedSquare.y) == 'b')
        getBishopAvailableMoves(legalMoves);
    if(getFigureAtBoard(selectedSquare.x, selectedSquare.y) == 'K' || getFigureAtBoard(selectedSquare.x, selectedSquare.y) == 'k')
        getKingAvailableMoves(legalMoves);
    if(getFigureAtBoard(selectedSquare.x, selectedSquare.y) == 'N' || getFigureAtBoard(selectedSquare.x, selectedSquare.y) == 'n')
        getKnightAvailableMoves(legalMoves);
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

        selectedFigure = stockfish->convertUciFormatToChessBoardCoordinates(computerMove.substr(0,2));
        selectedSquare = stockfish->convertUciFormatToChessBoardCoordinates(computerMove.substr(2,4));
        makeMove();
        selectedFigure = glm::vec2(-1,-1);
        selectedSquare = glm::vec2 (0,0);
        NEXT_TURN = WHITE;
    }
}
