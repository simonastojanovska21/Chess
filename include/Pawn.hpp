//
// Created by Simona on 09-Sep-22.
//

#ifndef OPENGLPRJ_PAWN_HPP
#define OPENGLPRJ_PAWN_HPP
#include <vector>
#include <iostream>
#include "glm/gtc/type_ptr.hpp"
class Pawn{
private:

public:
    Pawn();
    std::vector<glm::vec3> getPawnCoordinates();
    std::vector<glm::vec2> getPawnAvailableMoves(char chessBoard[8][8], glm::vec2 selectedSquare);
};

#endif //OPENGLPRJ_PAWN_HPP
