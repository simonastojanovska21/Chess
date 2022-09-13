//
// Created by Simona on 01-Sep-22.
//

#ifndef OPENGLPRJ_STOCKFISH_HPP
#define OPENGLPRJ_STOCKFISH_HPP

#include <iostream>
#include <string>

class Stockfish{
private:
    std::string moves;
public:
    //Constructor
    Stockfish();

    std::string getNextComputerMove();
};

#endif //OPENGLPRJ_STOCKFISH_HPP
