//
// Created by Simona on 01-Sep-22.
//

#ifndef OPENGLPRJ_STOCKFISH_HPP
#define OPENGLPRJ_STOCKFISH_HPP

#include <iostream>
#include <string>
#include <vector>
#include "glm/gtc/type_ptr.hpp"

class Stockfish{
private:
    std::string exec(const char* cmd);
public:

    //Constructor
    Stockfish();

    std::string getNextComputerMove(std::string moves);

    glm::vec2 convertUciFormatToChessBoardCoordinates(std::string position);

    std::string getLegalMovesFromScript(std::string moves);
};

#endif //OPENGLPRJ_STOCKFISH_HPP
