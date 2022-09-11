//
// Created by Simona on 09-Sep-22.
//

#ifndef OPENGLPRJ_KING_HPP
#define OPENGLPRJ_KING_HPP
#include <vector>
#include <iostream>
#include "glm/gtc/type_ptr.hpp"
class King{
private:

public:
    King();
    std::vector<glm::vec3> getKingCoordinates();
};
#endif //OPENGLPRJ_KING_HPP
