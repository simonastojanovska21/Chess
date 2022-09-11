//
// Created by Simona on 09-Sep-22.
//

#ifndef OPENGLPRJ_KNIGHT_HPP
#define OPENGLPRJ_KNIGHT_HPP
#include <vector>
#include <iostream>
#include "glm/gtc/type_ptr.hpp"
class Knight{
private:

public:
    Knight();
    std::vector<glm::vec3> getKnightCoordinates();
};
#endif //OPENGLPRJ_KNIGHT_HPP
