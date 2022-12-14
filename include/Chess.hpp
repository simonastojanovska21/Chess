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
    std::string getUciFormat(int x, int y);
    void getLegalMoves();
//    void updateAvailablePositions(std::string legalMoves, std::string start, int x, int y);
//    void getWhitePawnAvailableMoves(std::string legalMoves);
//    void getBlackPawnAvailableMoves(std::string legalMoves);
//    void getRookAvailableMoves(std::string legalMoves);
//    void getBishopAvailableMoves(std::string legalMoves);
//    void getKingAvailableMoves(std::string legalMoves);
//    void getKnightAvailableMoves(std::string legalMoves);
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

    void resetBoard();

    //Matrix for the chess board
    char chessBoard[8][8] = {{'R','N','B','Q','K','B','N','R'},
                             {'P','P','P','P','P','P','P','P'},
                             {'0','0','0','0','0','0','0','0'},
                             {'0','0','0','0','0','0','0','0'},
                             {'0','0','0','0','0','0','0','0'},
                             {'0','0','0','0','0','0','0','0'},
                             {'p','p','p','p','p','p','p','p'},
                             {'r','n','b','q','k','b','n','r'}};

    char defaultBoard[8][8] = {{'R','N','B','Q','K','B','N','R'},
                             {'P','P','P','P','P','P','P','P'},
                             {'0','0','0','0','0','0','0','0'},
                             {'0','0','0','0','0','0','0','0'},
                             {'0','0','0','0','0','0','0','0'},
                             {'0','0','0','0','0','0','0','0'},
                             {'p','p','p','p','p','p','p','p'},
                             {'r','n','b','q','k','b','n','r'}};

    std::string uciFormat[8][8] = { {"a1","b1","c1","d1","e1","f1","g1","h1"},
                                    {"a2","b2","c2","d2","e2","f2","g2","h2"},
                                    {"a3","b3","c3","d3","e3","f3","g3","h3"},
                                    {"a4","b4","c4","d4","e4","f4","g4","h4"},
                                    {"a5","b5","c5","d5","e5","f5","g5","h5"},
                                    {"a6","b6","c6","d6","e6","f6","g6","h6"},
                                    {"a7","b7","c7","d7","e7","f7","g7","h7"},
                                    {"a8","b8","c8","d8","e8","f8","g8","h8"}};
    //Matrix for available position for moving the chess figure
    bool availablePositions[8][8]={};

    //Vector representing the selected square from the chess board
    glm::vec2 selectedSquare = glm::vec2(0,0);

    //Vector representing the selected figure from the board. If the value is -1,-1 than there is not selected piece
    glm::vec2 selectedFigure = glm::vec2(-1,-1);

    //String representing the moves made by the player and computer, used for communication with Stockfish engine.
    std::string moves = "";

    bool checkMate = false;

    char checkKing='0';

    const std::string TWO_PLAYERS = "TWO PLAYERS";
    const std::string PLAYER_COMPUTER = "PLAYER COMPUTER";
    std::string GAME_MODE = "";

    const std::string WHITE = "WHITE";
    const std::string BLACK = "BLACK";
    const std::string COMPUTER = "COMPUTER";
    std::string NEXT_TURN = "WHITE";
};


#endif //OPENGLPRJ_CHESS_HPP
