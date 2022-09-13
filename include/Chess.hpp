//
// Created by Simona on 12-Sep-22.
//

#ifndef OPENGLPRJ_CHESS_HPP
#define OPENGLPRJ_CHESS_HPP
#include <vector>
#include <iostream>
#include "glm/gtc/type_ptr.hpp"
#include "Stockfish.hpp"

class Chess{
private:
    Stockfish *stockfish;
    char getFigureAtBoard(int x, int y);
    bool checkValidIndex(int index);
    void resetAvailablePositions();
    void getWhitePawnAvailableMoves();
    void getBlackPawnAvailableMoves();
    void getWhiteRookAvailableMoves();
    void getBlackRookAvailableMoves();
    void getWhiteBishopAvailableMoves();
    void getBlackBishopAvailableMoves();
    void getWhiteKingAvailableMoves();
    void getBlackKingAvailableMoves();
    void getWhiteKnightAvailableMoves();
    void getBlackKnightAvailableMoves();
    void getWhiteQueenAvailableMoves();
    void getBlackQueenAvailableMoves();
    void getAvailableMovesForWhite();
    void getAvailableMovesForBlack();
    bool hasNextMove();
    void makeMove();
public:
    Chess();
    /*
     * Function for handling pressing the space button. If the user is on a square with chess figure on top and presses
     * the space button, the matrix for available moves is updated and the user sees all available moves in green color.
     * If the user is on one of the available green pieces and presses the space button again then the selected piece
     * is moved to that location and the turn variable is change.
     */
    void handleSpaceButton();


    //Matrix for the chess board
    char chessBoard[8][8] = {{'R','N','B','Q','K','B','N','R'},
                             {'P','P','P','P','P','P','P','P'},
                             {'0','0','0','0','0','0','0','0'},
                             {'0','0','0','0','0','0','0','0'},
                             {'0','0','0','0','0','0','0','0'},
                             {'0','0','0','0','0','0','0','0'},
                             {'p','p','p','p','p','p','p','p'},
                             {'r','n','b','q','k','b','n','r'}};
    //Matrix for available position for moving the chess figure
    bool availablePositions[8][8]={};

    //Vector representing the selected square from the chess board
    glm::vec2 selectedSquare = glm::vec2(0,0);

    //Vector representing the selected figure from the board. If the value is -1,-1 than there is not selected piece
    glm::vec2 selectedFigure = glm::vec2(-1,-1);

    //Vector representing the new location of the figure. If the value is -1, -1 than the move location is not selected
    glm::vec2 moveFigure = glm::vec2 (-1,-1);

    const std::string TWO_PLAYERS = "TWO PLAYERS";
    const std::string PLAYER_COMPUTER = "PLAYER COMPUTER";
    std::string GAME_MODE = "";

    const std::string WHITE = "WHITE";
    const std::string BLACK = "BLACK";
    const std::string COMPUTER = "COMPUTER";
    std::string NEXT_TURN = "WHITE";
};


#endif //OPENGLPRJ_CHESS_HPP
