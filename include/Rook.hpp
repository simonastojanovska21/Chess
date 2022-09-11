//
// Created by Simona on 09-Sep-22.
//

#ifndef OPENGLPRJ_ROOK_HPP
#define OPENGLPRJ_ROOK_HPP
#include <vector>
#include <iostream>
#include "glm/gtc/type_ptr.hpp"
class Rook{
private:

public:
    Rook();
    std::vector<glm::vec3> getRookCoordinates();
};
#endif //OPENGLPRJ_ROOK_HPP
