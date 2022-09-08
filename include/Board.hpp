//
// Created by Simona on 03-Sep-22.
//

#ifndef OPENGLPRJ_BOARD_HPP
#define OPENGLPRJ_BOARD_HPP
#include <vector>
#include <iostream>
#include "glm/gtc/type_ptr.hpp"

class Board{
private:

public:
    Board();
    std::vector<glm::vec3> getBoardCoordinates();
    std::vector<glm::vec3> getBoardSquareCoordinates();
};

#endif //OPENGLPRJ_BOARD_HPP
