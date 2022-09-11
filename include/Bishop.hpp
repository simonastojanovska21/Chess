//
// Created by Simona on 09-Sep-22.
//

#ifndef OPENGLPRJ_BISHOP_HPP
#define OPENGLPRJ_BISHOP_HPP
#include <vector>
#include <iostream>
#include "glm/gtc/type_ptr.hpp"
class Bishop{
private:

public:
    Bishop();
    std::vector<glm::vec3> getBishopCoordinates();
};
#endif //OPENGLPRJ_BISHOP_HPP
