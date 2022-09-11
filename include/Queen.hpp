//
// Created by Simona on 09-Sep-22.
//

#ifndef OPENGLPRJ_QUEEN_HPP
#define OPENGLPRJ_QUEEN_HPP
#include <vector>
#include <iostream>
#include "glm/gtc/type_ptr.hpp"

class Queen{
private:

public:
    Queen();
    std::vector<glm::vec3> getQueenCoordinates();
};
#endif //OPENGLPRJ_QUEEN_HPP
