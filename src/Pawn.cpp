//
// Created by Simona on 09-Sep-22.
//

#include <vector>
#include "glm/gtc/type_ptr.hpp"
#include "Pawn.hpp"

Pawn::Pawn() {

}

std::vector<glm::vec3> Pawn::getPawnCoordinates() {
    std::vector< glm::vec3 > vertices;

    //Bottom back
    vertices.push_back(glm::vec3( -0.63f, -0.63f, 0.11f));
    vertices.push_back(glm::vec3( -0.0f, -0.9529f, -0.3032f));
    vertices.push_back(glm::vec3( -0.665f, -0.665f, 0.22f));
    vertices.push_back(glm::vec3( -0.0f, -0.9529f, -0.3032f));
    vertices.push_back(glm::vec3( -0.735f, -0.665f, 0.22f));
    vertices.push_back(glm::vec3( -0.0f, -0.9529f, -0.3032f));
    vertices.push_back(glm::vec3( -0.735f, -0.665f, 0.22f));
    vertices.push_back(glm::vec3( -0.0f, -0.9529f, -0.3032f));
    vertices.push_back(glm::vec3( -0.77f, -0.63f, 0.11f));
    vertices.push_back(glm::vec3( -0.0f, -0.9529f, -0.3032f));
    vertices.push_back(glm::vec3( -0.63f, -0.63f, 0.11f));
    vertices.push_back(glm::vec3( -0.0f, -0.9529f, -0.3032f));

    //Bottom right
    vertices.push_back(glm::vec3( -0.63f, -0.77f, 0.11f));
    vertices.push_back(glm::vec3( -0.9529f, -0.0f, -0.3032f));
    vertices.push_back(glm::vec3( -0.665f, -0.735f, 0.22f));
    vertices.push_back(glm::vec3( -0.9529f, -0.0f, -0.3032f));
    vertices.push_back(glm::vec3( -0.665f, -0.665f, 0.22f));
    vertices.push_back(glm::vec3( -0.9529f, -0.0f, -0.3032f));
    vertices.push_back(glm::vec3( -0.665f, -0.665f, 0.22f));
    vertices.push_back(glm::vec3( -0.9529f, -0.0f, -0.3032f));
    vertices.push_back(glm::vec3( -0.63f, -0.63f, 0.11f));
    vertices.push_back(glm::vec3( -0.9529f, -0.0f, -0.3032f));
    vertices.push_back(glm::vec3( -0.63f, -0.77f, 0.11f));
    vertices.push_back(glm::vec3( -0.9529f, -0.0f, -0.3032f));

    //Bottom left
    vertices.push_back(glm::vec3( -0.77f, -0.77f, 0.11f));
    vertices.push_back(glm::vec3( 0.9529f, -0.0f, -0.3032f));
    vertices.push_back(glm::vec3( -0.77f, -0.63f, 0.11f));
    vertices.push_back(glm::vec3( 0.9529f, -0.0f, -0.3032f));
    vertices.push_back(glm::vec3( -0.735f, -0.665f, 0.22f));
    vertices.push_back(glm::vec3( 0.9529f, -0.0f, -0.3032f));
    vertices.push_back(glm::vec3( -0.735f, -0.665f, 0.22f));
    vertices.push_back(glm::vec3( 0.9529f, -0.0f, -0.3032f));
    vertices.push_back(glm::vec3( -0.735f, -0.735f, 0.22f));
    vertices.push_back(glm::vec3( 0.9529f, -0.0f, -0.3032f));
    vertices.push_back(glm::vec3( -0.77f, -0.77f, 0.11f));
    vertices.push_back(glm::vec3( 0.9529f, -0.0f, -0.3032f));

    //Bottom front
    vertices.push_back(glm::vec3( -0.77f, -0.77f, 0.11f));
    vertices.push_back(glm::vec3( -0.0f, 0.9529f, -0.3032f));
    vertices.push_back(glm::vec3( -0.735f, -0.735f, 0.22f));
    vertices.push_back(glm::vec3( -0.0f, 0.9529f, -0.3032f));
    vertices.push_back(glm::vec3( -0.665f, -0.735f, 0.22f));
    vertices.push_back(glm::vec3( -0.0f, 0.9529f, -0.3032f));
    vertices.push_back(glm::vec3( -0.665f, -0.735f, 0.22f));
    vertices.push_back(glm::vec3( -0.0f, 0.9529f, -0.3032f));
    vertices.push_back(glm::vec3( -0.63f, -0.77f, 0.11f));
    vertices.push_back(glm::vec3( -0.0f, 0.9529f, -0.3032f));
    vertices.push_back(glm::vec3( -0.77f, -0.77f, 0.11f));
    vertices.push_back(glm::vec3( -0.0f, 0.9529f, -0.3032f));

    //Small front
    vertices.push_back(glm::vec3( -0.735f, -0.735f, 0.22f));
    vertices.push_back(glm::vec3( -0.0f, 1.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.735f, -0.735f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, 1.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.665f, -0.735f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, 1.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.665f, -0.735f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, 1.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.665f, -0.735f, 0.22f));
    vertices.push_back(glm::vec3( -0.0f, 1.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.735f, -0.735f, 0.22f));
    vertices.push_back(glm::vec3( -0.0f, 1.0f, -0.0f));

    //Small left
    vertices.push_back(glm::vec3( -0.735f, -0.735f, 0.22f));
    vertices.push_back(glm::vec3( 1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.735f, -0.665f, 0.22f));
    vertices.push_back(glm::vec3( 1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.735f, -0.665f, 0.29f));
    vertices.push_back(glm::vec3( 1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.735f, -0.665f, 0.29f));
    vertices.push_back(glm::vec3( 1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.735f, -0.735f, 0.29f));
    vertices.push_back(glm::vec3( 1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.735f, -0.735f, 0.22f));
    vertices.push_back(glm::vec3( 1.0f, -0.0f, -0.0f));

    //Small back
    vertices.push_back(glm::vec3( -0.665f, -0.665f, 0.22f));
    vertices.push_back(glm::vec3( -0.0f, -1.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.665f, -0.665f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -1.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.735f, -0.665f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -1.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.735f, -0.665f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -1.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.735f, -0.665f, 0.22f));
    vertices.push_back(glm::vec3( -0.0f, -1.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.665f, -0.665f, 0.22f));
    vertices.push_back(glm::vec3( -0.0f, -1.0f, -0.0f));

    //Small right
    vertices.push_back(glm::vec3( -0.665f, -0.735f, 0.22f));
    vertices.push_back(glm::vec3( -1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.665f, -0.735f, 0.29f));
    vertices.push_back(glm::vec3( -1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.665f, -0.665f, 0.29f));
    vertices.push_back(glm::vec3( -1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.665f, -0.665f, 0.29f));
    vertices.push_back(glm::vec3( -1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.665f, -0.665f, 0.22f));
    vertices.push_back(glm::vec3( -1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.665f, -0.735f, 0.22f));
    vertices.push_back(glm::vec3( -1.0f, -0.0f, -0.0f));
    //Top
    vertices.push_back(glm::vec3( -0.735f, -0.735f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, -1.0f));
    vertices.push_back(glm::vec3( -0.735f, -0.665f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, -1.0f));
    vertices.push_back(glm::vec3( -0.665f, -0.665f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, -1.0f));
    vertices.push_back(glm::vec3( -0.665f, -0.665f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, -1.0f));
    vertices.push_back(glm::vec3( -0.665f, -0.735f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, -1.0f));
    vertices.push_back(glm::vec3( -0.735f, -0.735f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, -1.0f));

    return vertices;
}

std::vector<glm::vec2> Pawn::getPawnAvailableMoves(char chessBoard[8][8],glm::vec2 selectedSquare) {

}