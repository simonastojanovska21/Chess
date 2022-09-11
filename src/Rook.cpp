//
// Created by Simona on 09-Sep-22.
//
#include <vector>
#include "glm/gtc/type_ptr.hpp"
#include "Rook.hpp"
Rook::Rook(){
}

std::vector<glm::vec3> Rook::getRookCoordinates() {
    std::vector< glm::vec3 > vertices;

    //Left top part back
    vertices.push_back(glm::vec3( -0.725f, -0.64f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, 1.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.75f, -0.64f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, 1.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.75f, -0.64f, 0.32f));
    vertices.push_back(glm::vec3( -0.0f, 1.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.75f, -0.64f, 0.32f));
    vertices.push_back(glm::vec3( -0.0f, 1.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.725f, -0.64f, 0.32f));
    vertices.push_back(glm::vec3( -0.0f, 1.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.725f, -0.64f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, 1.0f, -0.0f));

    //Left top part right
    vertices.push_back(glm::vec3( -0.725f, -0.76f, 0.29f));
    vertices.push_back(glm::vec3( 1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.725f, -0.64f, 0.29f));
    vertices.push_back(glm::vec3( 1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.725f, -0.64f, 0.32f));
    vertices.push_back(glm::vec3( 1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.725f, -0.64f, 0.32f));
    vertices.push_back(glm::vec3( 1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.725f, -0.76f, 0.32f));
    vertices.push_back(glm::vec3( 1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.725f, -0.76f, 0.29f));
    vertices.push_back(glm::vec3( 1.0f, -0.0f, -0.0f));
    //Left top part left
    vertices.push_back(glm::vec3( -0.75f, -0.64f, 0.32f));
    vertices.push_back(glm::vec3( -1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.75f, -0.64f, 0.29f));
    vertices.push_back(glm::vec3( -1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.75f, -0.76f, 0.29f));
    vertices.push_back(glm::vec3( -1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.75f, -0.76f, 0.29f));
    vertices.push_back(glm::vec3( -1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.75f, -0.76f, 0.32f));
    vertices.push_back(glm::vec3( -1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.75f, -0.64f, 0.32f));
    vertices.push_back(glm::vec3( -1.0f, -0.0f, -0.0f));
    //Left top part front
    vertices.push_back(glm::vec3( -0.75f, -0.76f, 0.32f));
    vertices.push_back(glm::vec3( -0.0f, -1.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.75f, -0.76f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -1.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.725f, -0.76f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -1.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.725f, -0.76f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -1.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.725f, -0.76f, 0.32f));
    vertices.push_back(glm::vec3( -0.0f, -1.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.75f, -0.76f, 0.32f));
    vertices.push_back(glm::vec3( -0.0f, -1.0f, -0.0f));
    //Left top part cover
    vertices.push_back(glm::vec3( -0.725f, -0.76f, 0.32f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, 1.0f));
    vertices.push_back(glm::vec3( -0.725f, -0.64f, 0.32f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, 1.0f));
    vertices.push_back(glm::vec3( -0.75f, -0.64f, 0.32f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, 1.0f));
    vertices.push_back(glm::vec3( -0.75f, -0.64f, 0.32f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, 1.0f));
    vertices.push_back(glm::vec3( -0.75f, -0.76f, 0.32f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, 1.0f));
    vertices.push_back(glm::vec3( -0.725f, -0.76f, 0.32f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, 1.0f));

    //Right top part back
    vertices.push_back(glm::vec3( -0.65f, -0.64f, 0.32f));
    vertices.push_back(glm::vec3( -0.0f, 1.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.65f, -0.64f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, 1.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.675f, -0.64f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, 1.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.675f, -0.64f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, 1.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.675f, -0.64f, 0.32f));
    vertices.push_back(glm::vec3( -0.0f, 1.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.65f, -0.64f, 0.32f));
    vertices.push_back(glm::vec3( -0.0f, 1.0f, -0.0f));
    //Right top part right
    vertices.push_back(glm::vec3( -0.65f, -0.64f, 0.32f));
    vertices.push_back(glm::vec3( 1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.65f, -0.76f, 0.32f));
    vertices.push_back(glm::vec3( 1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.65f, -0.76f, 0.29f));
    vertices.push_back(glm::vec3( 1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.65f, -0.76f, 0.29f));
    vertices.push_back(glm::vec3( 1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.65f, -0.64f, 0.29f));
    vertices.push_back(glm::vec3( 1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.65f, -0.64f, 0.32f));
    vertices.push_back(glm::vec3( 1.0f, -0.0f, -0.0f));
    //Right top part left
    vertices.push_back(glm::vec3( -0.675f, -0.76f, 0.29f));
    vertices.push_back(glm::vec3( -1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.675f, -0.76f, 0.32f));
    vertices.push_back(glm::vec3( -1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.675f, -0.64f, 0.32f));
    vertices.push_back(glm::vec3( -1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.675f, -0.64f, 0.32f));
    vertices.push_back(glm::vec3( -1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.675f, -0.64f, 0.29f));
    vertices.push_back(glm::vec3( -1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.675f, -0.76f, 0.29f));
    vertices.push_back(glm::vec3( -1.0f, -0.0f, -0.0f));
    //Right top part front
    vertices.push_back(glm::vec3( -0.675f, -0.76f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -1.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.65f, -0.76f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -1.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.65f, -0.76f, 0.32f));
    vertices.push_back(glm::vec3( -0.0f, -1.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.65f, -0.76f, 0.32f));
    vertices.push_back(glm::vec3( -0.0f, -1.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.675f, -0.76f, 0.32f));
    vertices.push_back(glm::vec3( -0.0f, -1.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.675f, -0.76f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -1.0f, -0.0f));
    //Right top part cover
    vertices.push_back(glm::vec3( -0.65f, -0.76f, 0.32f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, 1.0f));
    vertices.push_back(glm::vec3( -0.65f, -0.64f, 0.32f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, 1.0f));
    vertices.push_back(glm::vec3( -0.675f, -0.64f, 0.32f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, 1.0f));
    vertices.push_back(glm::vec3( -0.675f, -0.64f, 0.32f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, 1.0f));
    vertices.push_back(glm::vec3( -0.675f, -0.76f, 0.32f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, 1.0f));
    vertices.push_back(glm::vec3( -0.65f, -0.76f, 0.32f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, 1.0f));

    //Top cover
    vertices.push_back(glm::vec3( -0.675f, -0.76f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, 1.0f));
    vertices.push_back(glm::vec3( -0.675f, -0.64f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, 1.0f));
    vertices.push_back(glm::vec3( -0.725f, -0.64f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, 1.0f));
    vertices.push_back(glm::vec3( -0.725f, -0.64f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, 1.0f));
    vertices.push_back(glm::vec3( -0.725f, -0.76f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, 1.0f));
    vertices.push_back(glm::vec3( -0.675f, -0.76f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, 1.0f));
    //Big cube left
    vertices.push_back(glm::vec3( -0.78f, -0.62f, 0.11f));
    vertices.push_back(glm::vec3( -0.9864f, -0.0f, 0.1644f));
    vertices.push_back(glm::vec3( -0.78f, -0.78f, 0.11f));
    vertices.push_back(glm::vec3( -0.9864f, -0.0f, 0.1644f));
    vertices.push_back(glm::vec3( -0.75f, -0.76f, 0.29f));
    vertices.push_back(glm::vec3( -0.9864f, -0.0f, 0.1644f));
    vertices.push_back(glm::vec3( -0.75f, -0.76f, 0.29f));
    vertices.push_back(glm::vec3( -0.9864f, -0.0f, 0.1644f));
    vertices.push_back(glm::vec3( -0.75f, -0.64f, 0.29f));
    vertices.push_back(glm::vec3( -0.9864f, -0.0f, 0.1644f));
    vertices.push_back(glm::vec3( -0.78f, -0.62f, 0.11f));
    vertices.push_back(glm::vec3( -0.9864f, -0.0f, 0.1644f));
    //Big cube back
    vertices.push_back(glm::vec3( -0.78f, -0.62f, 0.11f));
    vertices.push_back(glm::vec3( -0.0f, 0.9939f, 0.1104f));
    vertices.push_back(glm::vec3( -0.75f, -0.64f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, 0.9939f, 0.1104f));
    vertices.push_back(glm::vec3( -0.65f, -0.64f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, 0.9939f, 0.1104f));
    vertices.push_back(glm::vec3( -0.65f, -0.64f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, 0.9939f, 0.1104f));
    vertices.push_back(glm::vec3( -0.62f, -0.62f, 0.11f));
    vertices.push_back(glm::vec3( -0.0f, 0.9939f, 0.1104f));
    vertices.push_back(glm::vec3( -0.78f, -0.62f, 0.11f));
    vertices.push_back(glm::vec3( -0.0f, 0.9939f, 0.1104f));
    //Big cube right
    vertices.push_back(glm::vec3( -0.62f, -0.62f, 0.11f));
    vertices.push_back(glm::vec3( 0.9864f, -0.0f, 0.1644f));
    vertices.push_back(glm::vec3( -0.65f, -0.64f, 0.29f));
    vertices.push_back(glm::vec3( 0.9864f, -0.0f, 0.1644f));
    vertices.push_back(glm::vec3( -0.65f, -0.76f, 0.29f));
    vertices.push_back(glm::vec3( 0.9864f, -0.0f, 0.1644f));
    vertices.push_back(glm::vec3( -0.65f, -0.76f, 0.29f));
    vertices.push_back(glm::vec3( 0.9864f, -0.0f, 0.1644f));
    vertices.push_back(glm::vec3( -0.62f, -0.78f, 0.11f));
    vertices.push_back(glm::vec3( 0.9864f, -0.0f, 0.1644f));
    vertices.push_back(glm::vec3( -0.62f, -0.62f, 0.11f));
    vertices.push_back(glm::vec3( 0.9864f, -0.0f, 0.1644f));
    //Big cube front
    vertices.push_back(glm::vec3( -0.78f, -0.78f, 0.11f));
    vertices.push_back(glm::vec3( -0.0f, -0.9939f, 0.1104f));
    vertices.push_back(glm::vec3( -0.62f, -0.78f, 0.11f));
    vertices.push_back(glm::vec3( -0.0f, -0.9939f, 0.1104f));
    vertices.push_back(glm::vec3( -0.65f, -0.76f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -0.9939f, 0.1104f));
    vertices.push_back(glm::vec3( -0.65f, -0.76f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -0.9939f, 0.1104f));
    vertices.push_back(glm::vec3( -0.75f, -0.76f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -0.9939f, 0.1104f));
    vertices.push_back(glm::vec3( -0.78f, -0.78f, 0.11f));
    vertices.push_back(glm::vec3( -0.0f, -0.9939f, 0.1104f));

    return vertices;
}
