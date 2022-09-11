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
};

#endif //OPENGLPRJ_PAWN_HPP
