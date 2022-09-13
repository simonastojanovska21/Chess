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

void Chess::getWhitePawnAvailableMoves() {
    //The first move of the pawn can be 2 squares forward
    if(selectedSquare.x == 1 &&
       getFigureAtBoard(selectedSquare.x+1, selectedSquare.y) == '0' &&
       getFigureAtBoard(selectedSquare.x+2, selectedSquare.y) == '0' )
        availablePositions[(int)selectedSquare.x + 2][(int)selectedSquare.y] = true;

    //By default, the pawn moves 1 square forward
    if(getFigureAtBoard(selectedSquare.x+1, selectedSquare.y) == '0')
        availablePositions[(int) selectedSquare.x + 1][(int) selectedSquare.y] = true;

    //The pawn can move diagonally to capture a piece of opposite color
    if(checkValidIndex(selectedSquare.x+1) && checkValidIndex(selectedSquare.y-1) &&
    std::islower(getFigureAtBoard(selectedSquare.x+1, selectedSquare.y-1)))
        availablePositions[(int) selectedSquare.x + 1][(int) selectedSquare.y - 1] = true;
    if(checkValidIndex(selectedSquare.x+1) && checkValidIndex(selectedSquare.y+1) &&
    std::islower(getFigureAtBoard(selectedSquare.x+1, selectedSquare.y+1)))
        availablePositions[(int) selectedSquare.x + 1][(int) selectedSquare.y + 1] = true;
}

void Chess::getBlackPawnAvailableMoves() {
//The first move of the pawn can be 2 squares forward
    if(selectedSquare.x == 6 &&
       getFigureAtBoard(selectedSquare.x-1, selectedSquare.y) == '0' &&
       getFigureAtBoard(selectedSquare.x-2, selectedSquare.y) == '0' )
        availablePositions[(int) selectedSquare.x - 2][(int) selectedSquare.y] = true;

    //By default, the pawn moves 1 square forward
    if(getFigureAtBoard(selectedSquare.x-1, selectedSquare.y) == '0')
        availablePositions[(int) selectedSquare.x - 1][(int) selectedSquare.y] = true;

    //The pawn can move diagonally to capture a piece of opposite color
    if(checkValidIndex(selectedSquare.x-1) && checkValidIndex(selectedSquare.y-1) &&
       std::isupper(getFigureAtBoard(selectedSquare.x-1, selectedSquare.y-1)))
        availablePositions[(int) selectedSquare.x - 1][(int) selectedSquare.y - 1] = true;
    if(checkValidIndex(selectedSquare.x-1) && checkValidIndex(selectedSquare.y+1) &&
       std::isupper(getFigureAtBoard(selectedSquare.x-1, selectedSquare.y+1)))
        availablePositions[(int) selectedSquare.x - 1][(int) selectedSquare.y + 1] = true;
}

void Chess::getWhiteRookAvailableMoves() {
    //Move forward until a figure is reached
    for(int i=(int)selectedSquare.x+1; i < 8;i++){
        if(getFigureAtBoard( i,selectedSquare.y) == '0')
            availablePositions[i][(int) selectedSquare.y] = true;
        else if(std::islower(getFigureAtBoard( i,selectedSquare.y))){
            availablePositions[ i][(int)selectedSquare.y] = true;
            break;
        }
        else
            break;
    }
    //Move backwards until a figure is reached
    for(int i=(int)selectedSquare.x-1; i >= 0;i-- ){
        if(getFigureAtBoard( i,selectedSquare.y) == '0')
            availablePositions[i][(int) selectedSquare.y] = true;
        else if(std::islower(getFigureAtBoard( i,selectedSquare.y))){
            availablePositions[ i][(int)selectedSquare.y] = true;
            break;
        }
        else
            break;
    }
    //Move to the left
    for(int i=(int)selectedSquare.y-1;i>=0;i--){
        if(getFigureAtBoard(selectedSquare.x,i) == '0')
            availablePositions[(int) selectedSquare.x][i] = true;
        else if(std::islower(getFigureAtBoard( selectedSquare.x,i))){
            availablePositions[(int)selectedSquare.x][i] = true;
            break;
        }
        else
            break;
    }
    //Move to the right
    for(int i = (int)selectedSquare.y+1;i<8;i++){
        if(getFigureAtBoard(selectedSquare.x,i) == '0')
            availablePositions[(int) selectedSquare.x][i] = true;
        else if(std::islower(getFigureAtBoard( selectedSquare.x,i))){
            availablePositions[(int)selectedSquare.x][i] = true;
            break;
        }
        else
            break;
    }
}

void Chess::getBlackRookAvailableMoves() {
    //Move forward until a figure is reached
    for(int i=(int)selectedSquare.x-1; i >= 0;i-- ){
        std::cout<<"Forward"<<i<<std::endl;
        if(getFigureAtBoard( i,selectedSquare.y) == '0')
            availablePositions[ i][(int)selectedSquare.y] = true;
        else if(std::isupper(getFigureAtBoard( i,selectedSquare.y))){
            availablePositions[ i][(int)selectedSquare.y] = true;
            break;
        }
        else
            break;
    }
    //Move backwards until a figure is reached
    for(int i=(int)selectedSquare.x+1; i < 8;i++){
        if(getFigureAtBoard( i,selectedSquare.y) == '0')
            availablePositions[i][(int)selectedSquare.y] = true;
        else if(std::isupper(getFigureAtBoard( i,selectedSquare.y))){
            availablePositions[ i][(int)selectedSquare.y] = true;
            break;
        }
        else
            break;
    }
    //Move to the left
    for(int i=(int)selectedSquare.y-1;i>=0;i--){
        if(getFigureAtBoard(selectedSquare.x,i) == '0')
            availablePositions[(int)selectedSquare.x][i] = true;
        else if(std::isupper(getFigureAtBoard( selectedSquare.x,i))){
            availablePositions[(int)selectedSquare.x][i] = true;
            break;
        }
        else
            break;
    }
    //Move to the right
    for(int i = (int)selectedSquare.y+1;i<8;i++){
        if(getFigureAtBoard(selectedSquare.x,i) == '0')
            availablePositions[(int)selectedSquare.x][i] = true;
        else if(std::isupper(getFigureAtBoard( selectedSquare.x,i))){
            availablePositions[(int)selectedSquare.x][i] = true;
            break;
        }
        else
            break;
    }
}

void Chess::getWhiteBishopAvailableMoves() {
    //Move forward left
    int x = (int) selectedSquare.x + 1;
    int y = (int) selectedSquare.y - 1;
    for(int i=x,j=y; i<8 && j>=0;i++,j--){
        if(getFigureAtBoard(i,j) == '0')
            availablePositions[i][j] = true;
        else if(std::islower(getFigureAtBoard( i,j))){
            availablePositions[i][j] = true;
            break;
        }
        else
            break;
    }
    //Move forward right
    x = (int) selectedSquare.x + 1;
    y = (int) selectedSquare.y + 1;
    for(int i=x,j=y; i<8 && j<8;i++,j++){
        if(getFigureAtBoard(i,j) == '0')
            availablePositions[i][j] = true;
        else if(std::islower(getFigureAtBoard( i,j))){
            availablePositions[i][j] = true;
            break;
        }
        else
            break;
    }
    //Move backward left
    x = (int) selectedSquare.x - 1;
    y = (int) selectedSquare.y - 1;
    for(int i=x,j=y; i>=0 && j>=0;i--,j--){
        if(getFigureAtBoard(i,j) == '0')
            availablePositions[i][j] = true;
        else if(std::islower(getFigureAtBoard( i,j))){
            availablePositions[i][j] = true;
            break;
        }
        else
            break;
    }
    //Move backward right
    x = (int) selectedSquare.x - 1;
    y = (int) selectedSquare.y + 1;
    for(int i=x,j=y; i>=0 && j<8;i--,j++){
        if(getFigureAtBoard(i,j) == '0')
            availablePositions[i][j] = true;
        else if(std::islower(getFigureAtBoard( i,j))){
            availablePositions[i][j] = true;
            break;
        }
        else
            break;
    }
}

void Chess::getBlackBishopAvailableMoves() {
    //Move backward left
    int x = (int) selectedSquare.x + 1;
    int y = (int) selectedSquare.y - 1;
    for(int i=x,j=y; i<8 && j>=0;i++,j--){
        if(getFigureAtBoard(i,j) == '0')
            availablePositions[i][j] = true;
        else if(std::isupper(getFigureAtBoard( i,j))){
            availablePositions[i][j] = true;
            break;
        }
        else
            break;
    }
    //Move backward right
    x = (int) selectedSquare.x + 1;
    y = (int) selectedSquare.y + 1;
    for(int i=x,j=y; i<8 && j<8;i++,j++){
        if(getFigureAtBoard(i,j) == '0')
            availablePositions[i][j] = true;
        else if(std::isupper(getFigureAtBoard( i,j))){
            availablePositions[i][j] = true;
            break;
        }
        else
            break;
    }
    //Move forward left
    x = (int) selectedSquare.x - 1;
    y = (int) selectedSquare.y - 1;
    for(int i=x,j=y; i>=0 && j>=0;i--,j--){
        if(getFigureAtBoard(i,j) == '0')
            availablePositions[i][j] = true;
        else if(std::isupper(getFigureAtBoard( i,j))){
            availablePositions[i][j] = true;
            break;
        }
        else
            break;
    }
    //Move forward right
    x = (int) selectedSquare.x - 1;
    y = (int) selectedSquare.y + 1;
    for(int i=x,j=y; i>=0 && j<8;i--,j++){
        if(getFigureAtBoard(i,j) == '0')
            availablePositions[i][j] = true;
        else if(std::isupper(getFigureAtBoard( i,j))){
            availablePositions[i][j] = true;
            break;
        }
        else
            break;
    }
}

void Chess::getWhiteKingAvailableMoves() {
    //Move left and right
    if( checkValidIndex(selectedSquare.y-1) && !std::isupper(getFigureAtBoard(selectedSquare.x,selectedSquare.y-1)))
        availablePositions[(int)selectedSquare.x][(int)selectedSquare.y-1] = true;
    if( checkValidIndex(selectedSquare.y+1) && !std::isupper(getFigureAtBoard(selectedSquare.x,selectedSquare.y-1)))
        availablePositions[(int)selectedSquare.x][(int)selectedSquare.y+1] = true;

    //Move up and down
    if(checkValidIndex(selectedSquare.x+1) && !std::isupper(getFigureAtBoard(selectedSquare.x+1,selectedSquare.y)))
        availablePositions[(int)selectedSquare.x+1][(int)selectedSquare.y] = true;
    if(checkValidIndex(selectedSquare.x-1) && !std::isupper(getFigureAtBoard(selectedSquare.x-1,selectedSquare.y)))
        availablePositions[(int)selectedSquare.x-1][(int)selectedSquare.y] = true;
    //Move forward left and right
    if(checkValidIndex(selectedSquare.x+1) &&checkValidIndex(selectedSquare.y-1)
       && !std::isupper(getFigureAtBoard(selectedSquare.x+1,selectedSquare.y-1)))
        availablePositions[(int)selectedSquare.x+1][(int)selectedSquare.y-1] = true;
    if(checkValidIndex(selectedSquare.x+1) && checkValidIndex(selectedSquare.y+1)
       && !std::isupper(getFigureAtBoard(selectedSquare.x+1,selectedSquare.y+1)))
        availablePositions[(int)selectedSquare.x+1][(int)selectedSquare.y+1] = true;

    //Move backward left and right
    if(checkValidIndex(selectedSquare.x-1) &&checkValidIndex(selectedSquare.y-1)
       && !std::isupper(getFigureAtBoard(selectedSquare.x-1,selectedSquare.y-1)))
        availablePositions[(int)selectedSquare.x-1][(int)selectedSquare.y-1] = true;

    if(checkValidIndex(selectedSquare.x-1) && checkValidIndex(selectedSquare.y+1)
       && !std::isupper(getFigureAtBoard(selectedSquare.x-1,selectedSquare.y+1)))
        availablePositions[(int)selectedSquare.x-1][(int)selectedSquare.y+1] = true;
}

void Chess::getBlackKingAvailableMoves() {
    //Move left and right
    if( checkValidIndex(selectedSquare.y-1) && !std::islower(getFigureAtBoard(selectedSquare.x,selectedSquare.y-1)))
        availablePositions[(int)selectedSquare.x][(int)selectedSquare.y-1] = true;
    if( checkValidIndex(selectedSquare.y+1) && !std::islower(getFigureAtBoard(selectedSquare.x,selectedSquare.y-1)))
        availablePositions[(int)selectedSquare.x][(int)selectedSquare.y+1] = true;

    //Move up and down
    if(checkValidIndex(selectedSquare.x-1) && !std::islower(getFigureAtBoard(selectedSquare.x-1,selectedSquare.y)))
        availablePositions[(int)selectedSquare.x-1][(int)selectedSquare.y] = true;
    if(checkValidIndex(selectedSquare.x+1) && !std::islower(getFigureAtBoard(selectedSquare.x+1,selectedSquare.y)))
        availablePositions[(int)selectedSquare.x+1][(int)selectedSquare.y] = true;

    //Move forward left and right
    if(checkValidIndex(selectedSquare.x-1) &&checkValidIndex(selectedSquare.y-1)
       && !std::islower(getFigureAtBoard(selectedSquare.x-1,selectedSquare.y-1)))
        availablePositions[(int)selectedSquare.x-1][(int)selectedSquare.y-1] = true;
    if(checkValidIndex(selectedSquare.x-1) && checkValidIndex(selectedSquare.y+1)
       && !std::islower(getFigureAtBoard(selectedSquare.x-1,selectedSquare.y+1)))
        availablePositions[(int)selectedSquare.x-1][(int)selectedSquare.y+1] = true;

    //Move backward left and right
    if(checkValidIndex(selectedSquare.x+1) &&checkValidIndex(selectedSquare.y-1)
       && !std::islower(getFigureAtBoard(selectedSquare.x+1,selectedSquare.y-1)))
        availablePositions[(int)selectedSquare.x+1][(int)selectedSquare.y-1] = true;
    if(checkValidIndex(selectedSquare.x+1) && checkValidIndex(selectedSquare.y+1)
       && !std::islower(getFigureAtBoard(selectedSquare.x+1,selectedSquare.y+1)))
        availablePositions[(int)selectedSquare.x+1][(int)selectedSquare.y+1] = true;
}

void Chess::getWhiteKnightAvailableMoves() {
    //Move forward left in L shape
    if(checkValidIndex(selectedSquare.x+1) && checkValidIndex(selectedSquare.y-2) &&
       !std::isupper(getFigureAtBoard(selectedSquare.x+1, selectedSquare.y-2)))
        availablePositions[(int)selectedSquare.x+1][(int)selectedSquare.y-2] = true;
    if(checkValidIndex(selectedSquare.x+2) && checkValidIndex(selectedSquare.y-1) &&
       !std::isupper(getFigureAtBoard(selectedSquare.x+2, selectedSquare.y-1)))
        availablePositions[(int)selectedSquare.x+2][(int)selectedSquare.y-1] = true;

    //Move forward right in L shape
    if(checkValidIndex(selectedSquare.x+1) && checkValidIndex(selectedSquare.y+2) &&
       !std::isupper(getFigureAtBoard(selectedSquare.x+1, selectedSquare.y+2)))
        availablePositions[(int)selectedSquare.x+1][(int)selectedSquare.y+2] = true;
    if(checkValidIndex(selectedSquare.x+2) && checkValidIndex(selectedSquare.y+1) &&
       !std::isupper(getFigureAtBoard(selectedSquare.x+2, selectedSquare.y+1)))
        availablePositions[(int)selectedSquare.x+2][(int)selectedSquare.y+1] = true;

    //Move backwards left in L shape
    if(checkValidIndex(selectedSquare.x-1) && checkValidIndex(selectedSquare.y-2) &&
       !std::isupper(getFigureAtBoard(selectedSquare.x-1, selectedSquare.y-2)))
        availablePositions[(int)selectedSquare.x-1][(int)selectedSquare.y-2] = true;
    if(checkValidIndex(selectedSquare.x-2) && checkValidIndex(selectedSquare.y-1) &&
       !std::isupper(getFigureAtBoard(selectedSquare.x-2, selectedSquare.y-1)))
        availablePositions[(int)selectedSquare.x-2][(int)selectedSquare.y-1] = true;

    //Move backwards right in L shape
    if(checkValidIndex(selectedSquare.x-1) && checkValidIndex(selectedSquare.y+2) &&
       !std::isupper(getFigureAtBoard(selectedSquare.x-1, selectedSquare.y+2)))
        availablePositions[(int)selectedSquare.x-1][(int)selectedSquare.y+2] = true;
    if(checkValidIndex(selectedSquare.x-2) && checkValidIndex(selectedSquare.y+1) &&
       !std::isupper(getFigureAtBoard(selectedSquare.x-2, selectedSquare.y+1)))
        availablePositions[(int)selectedSquare.x-2][(int)selectedSquare.y+1] = true;
}

void Chess::getBlackKnightAvailableMoves() {
    //Move backwards left in L shape
    if(checkValidIndex(selectedSquare.x+1) && checkValidIndex(selectedSquare.y-2) &&
       !std::islower(getFigureAtBoard(selectedSquare.x+1, selectedSquare.y-2)))
        availablePositions[(int)selectedSquare.x+1][(int)selectedSquare.y-2] = true;
    if(checkValidIndex(selectedSquare.x+2) && checkValidIndex(selectedSquare.y-1) &&
       !std::islower(getFigureAtBoard(selectedSquare.x+2, selectedSquare.y-1)))
        availablePositions[(int)selectedSquare.x+2][(int)selectedSquare.y-1] = true;

    //Move backwards right in L shape
    if(checkValidIndex(selectedSquare.x+1) && checkValidIndex(selectedSquare.y+2) &&
       !std::islower(getFigureAtBoard(selectedSquare.x+1, selectedSquare.y+2)))
        availablePositions[(int)selectedSquare.x+1][(int)selectedSquare.y+2] = true;
    if(checkValidIndex(selectedSquare.x+2) && checkValidIndex(selectedSquare.y+1) &&
       !std::islower(getFigureAtBoard(selectedSquare.x+2, selectedSquare.y+1)))
        availablePositions[(int)selectedSquare.x+2][(int)selectedSquare.y+1] = true;

    //Move forward left in L shape
    if(checkValidIndex(selectedSquare.x-1) && checkValidIndex(selectedSquare.y-2) &&
       !std::islower(getFigureAtBoard(selectedSquare.x-1, selectedSquare.y-2)))
        availablePositions[(int)selectedSquare.x-1][(int)selectedSquare.y-2] = true;
    if(checkValidIndex(selectedSquare.x-2) && checkValidIndex(selectedSquare.y-1) &&
       !std::islower(getFigureAtBoard(selectedSquare.x-2, selectedSquare.y-1)))
        availablePositions[(int)selectedSquare.x-2][(int)selectedSquare.y-1] = true;

    //Move forward right in L shape
    if(checkValidIndex(selectedSquare.x-1) && checkValidIndex(selectedSquare.y+2) &&
       !std::islower(getFigureAtBoard(selectedSquare.x-1, selectedSquare.y+2)))
        availablePositions[(int)selectedSquare.x-1][(int)selectedSquare.y+2] = true;
    if(checkValidIndex(selectedSquare.x-2) && checkValidIndex(selectedSquare.y+1) &&
       !std::islower(getFigureAtBoard(selectedSquare.x-2, selectedSquare.y+1)))
        availablePositions[(int)selectedSquare.x-2][(int)selectedSquare.y+1] = true;
}

void Chess::getWhiteQueenAvailableMoves() {
    getWhiteBishopAvailableMoves();
    getWhiteRookAvailableMoves();
}

void Chess::getBlackQueenAvailableMoves() {
    getBlackBishopAvailableMoves();
    getBlackRookAvailableMoves();
}

void Chess::getAvailableMovesForWhite(){
    if(getFigureAtBoard(selectedSquare.x, selectedSquare.y) == 'P'){
        getWhitePawnAvailableMoves();
    }
    if(getFigureAtBoard(selectedSquare.x, selectedSquare.y) == 'R'){
        getWhiteRookAvailableMoves();
    }
    if(getFigureAtBoard(selectedSquare.x, selectedSquare.y) == 'B'){
        getWhiteBishopAvailableMoves();
    }
    if(getFigureAtBoard(selectedSquare.x, selectedSquare.y) == 'K'){
        getWhiteKingAvailableMoves();
    }
    if(getFigureAtBoard(selectedSquare.x, selectedSquare.y) == 'N'){
        getWhiteKnightAvailableMoves();
    }
    if(getFigureAtBoard(selectedSquare.x, selectedSquare.y) == 'Q'){
        getWhiteQueenAvailableMoves();
    }
}

void Chess::getAvailableMovesForBlack() {
    if(getFigureAtBoard(selectedSquare.x, selectedSquare.y) == 'p'){
        getBlackPawnAvailableMoves();
    }
    if(getFigureAtBoard(selectedSquare.x, selectedSquare.y) == 'r'){
        getBlackRookAvailableMoves();
    }
    if(getFigureAtBoard(selectedSquare.x, selectedSquare.y) == 'b'){
        getBlackBishopAvailableMoves();
    }
    if(getFigureAtBoard(selectedSquare.x, selectedSquare.y) == 'k'){
        getBlackKingAvailableMoves();
    }
    if(getFigureAtBoard(selectedSquare.x, selectedSquare.y) == 'n'){
        getBlackKnightAvailableMoves();
    }
    if(getFigureAtBoard(selectedSquare.x, selectedSquare.y) == 'q'){
        getBlackQueenAvailableMoves();
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
    selectedFigure = glm::vec2(-1,-1);
    resetAvailablePositions();
}

void Chess::handleSpaceButton() {
    if(GAME_MODE == TWO_PLAYERS){
        if(NEXT_TURN == WHITE){
            if(selectedFigure.x ==-1 && getFigureAtBoard(selectedSquare.x, selectedSquare.y) != '0'){
               getAvailableMovesForWhite();
               if(hasNextMove())
                   selectedFigure = selectedSquare;
            }
            else if(selectedFigure.x != -1 && availablePositions[(int)selectedSquare.x][(int) selectedSquare.y]){
                makeMove();
                selectedSquare = glm::vec2 (7,0);
                NEXT_TURN = BLACK;
                return;
            }
            else{
                selectedFigure = glm::vec2(-1,-1);
                resetAvailablePositions();
            }
        }
        if(NEXT_TURN == BLACK){
            if(selectedFigure.x ==-1 && getFigureAtBoard(selectedSquare.x, selectedSquare.y) != '0'){
                getAvailableMovesForBlack();
                if(hasNextMove())
                    selectedFigure = selectedSquare;
            }
            else if(selectedFigure.x != -1 && availablePositions[(int)selectedSquare.x][(int) selectedSquare.y]){
                makeMove();
                selectedSquare = glm::vec2 (0,0);
                NEXT_TURN = WHITE;
            }
            else{
                selectedFigure = glm::vec2(-1,-1);
                resetAvailablePositions();
            }
        }
    }

    if(GAME_MODE == PLAYER_COMPUTER){
        if(NEXT_TURN == WHITE){
            if(selectedFigure.x ==-1 && getFigureAtBoard(selectedSquare.x, selectedSquare.y) != '0'){
                getAvailableMovesForWhite();
                if(hasNextMove())
                    selectedFigure = selectedSquare;
            }
            else if(selectedFigure.x != -1 && availablePositions[(int)selectedSquare.x][(int) selectedSquare.y]){
                makeMove();
                selectedSquare = glm::vec2 (7,0);
                NEXT_TURN = COMPUTER;
                return;
            }
            else{
                selectedFigure = glm::vec2(-1,-1);
                resetAvailablePositions();
            }
        }
        if(NEXT_TURN == COMPUTER){
            std::cout<<"comp"<<std::endl;
        }
    }
}


