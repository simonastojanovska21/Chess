//
// Created by Simona on 09-Sep-22.
//
#include <vector>
#include "glm/gtc/type_ptr.hpp"
#include "Queen.hpp"

Queen::Queen() {

}

std::vector<glm::vec3> Queen::getQueenCoordinates() {
    std::vector< glm::vec3 > vertices;

    //Top back
    vertices.push_back(glm::vec3( -0.66f, -0.66f, 0.28f));
    vertices.push_back(glm::vec3( -0.0f, -0.9701f, 0.2425f));
    vertices.push_back(glm::vec3( -0.64f, -0.64f, 0.36f));
    vertices.push_back(glm::vec3( -0.0f, -0.9701f, 0.2425f));
    vertices.push_back(glm::vec3( -0.76f, -0.64f, 0.36f));
    vertices.push_back(glm::vec3( -0.0f, -0.9701f, 0.2425f));
    vertices.push_back(glm::vec3( -0.76f, -0.64f, 0.36f));
    vertices.push_back(glm::vec3( -0.0f, -0.9701f, 0.2425f));
    vertices.push_back(glm::vec3( -0.74f, -0.66f, 0.28f));
    vertices.push_back(glm::vec3( -0.0f, -0.9701f, 0.2425f));
    vertices.push_back(glm::vec3( -0.66f, -0.66f, 0.28f));
    vertices.push_back(glm::vec3( -0.0f, -0.9701f, 0.2425f));
    //Top right
    vertices.push_back(glm::vec3( -0.66f, -0.74f, 0.28f));
    vertices.push_back(glm::vec3( -0.9701f, -0.0f, 0.2425f));
    vertices.push_back(glm::vec3( -0.64f, -0.76f, 0.36f));
    vertices.push_back(glm::vec3( -0.9701f, -0.0f, 0.2425f));
    vertices.push_back(glm::vec3( -0.64f, -0.64f, 0.36f));
    vertices.push_back(glm::vec3( -0.9701f, -0.0f, 0.2425f));
    vertices.push_back(glm::vec3( -0.64f, -0.64f, 0.36f));
    vertices.push_back(glm::vec3( -0.9701f, -0.0f, 0.2425f));
    vertices.push_back(glm::vec3( -0.66f, -0.66f, 0.28f));
    vertices.push_back(glm::vec3( -0.9701f, -0.0f, 0.2425f));
    vertices.push_back(glm::vec3( -0.66f, -0.74f, 0.28f));
    vertices.push_back(glm::vec3( -0.9701f, -0.0f, 0.2425f));
    //Top front
    vertices.push_back(glm::vec3( -0.74f, -0.74f, 0.28f));
    vertices.push_back(glm::vec3( -0.0f, 0.9701f, 0.2425f));
    vertices.push_back(glm::vec3( -0.76f, -0.76f, 0.36f));
    vertices.push_back(glm::vec3( -0.0f, 0.9701f, 0.2425f));
    vertices.push_back(glm::vec3( -0.64f, -0.76f, 0.36f));
    vertices.push_back(glm::vec3( -0.0f, 0.9701f, 0.2425f));
    vertices.push_back(glm::vec3( -0.64f, -0.76f, 0.36f));
    vertices.push_back(glm::vec3( -0.0f, 0.9701f, 0.2425f));
    vertices.push_back(glm::vec3( -0.66f, -0.74f, 0.28f));
    vertices.push_back(glm::vec3( -0.0f, 0.9701f, 0.2425f));
    vertices.push_back(glm::vec3( -0.74f, -0.74f, 0.28f));
    vertices.push_back(glm::vec3( -0.0f, 0.9701f, 0.2425f));
    //Top left
    vertices.push_back(glm::vec3( -0.74f, -0.74f, 0.28f));
    vertices.push_back(glm::vec3( 0.9701f, -0.0f, 0.2425f));
    vertices.push_back(glm::vec3( -0.74f, -0.66f, 0.28f));
    vertices.push_back(glm::vec3( 0.9701f, -0.0f, 0.2425f));
    vertices.push_back(glm::vec3( -0.76f, -0.64f, 0.36f));
    vertices.push_back(glm::vec3( 0.9701f, -0.0f, 0.2425f));
    vertices.push_back(glm::vec3( -0.76f, -0.64f, 0.36f));
    vertices.push_back(glm::vec3( 0.9701f, -0.0f, 0.2425f));
    vertices.push_back(glm::vec3( -0.76f, -0.76f, 0.36f));
    vertices.push_back(glm::vec3( 0.9701f, -0.0f, 0.2425f));
    vertices.push_back(glm::vec3( -0.74f, -0.74f, 0.28f));
    vertices.push_back(glm::vec3( 0.9701f, -0.0f, 0.2425f));

    //Bottom back
    vertices.push_back(glm::vec3( -0.78f, -0.62f, 0.11f));
    vertices.push_back(glm::vec3( -0.0f, -0.9734f, -0.229f));
    vertices.push_back(glm::vec3( -0.62f, -0.62f, 0.11f));
    vertices.push_back(glm::vec3( -0.0f, -0.9734f, -0.229f));
    vertices.push_back(glm::vec3( -0.66f, -0.66f, 0.28f));
    vertices.push_back(glm::vec3( -0.0f, -0.9734f, -0.229f));
    vertices.push_back(glm::vec3( -0.66f, -0.66f, 0.28f));
    vertices.push_back(glm::vec3( -0.0f, -0.9734f, -0.229f));
    vertices.push_back(glm::vec3( -0.74f, -0.66f, 0.28f));
    vertices.push_back(glm::vec3( -0.0f, -0.9734f, -0.229f));
    vertices.push_back(glm::vec3( -0.78f, -0.62f, 0.11f));
    vertices.push_back(glm::vec3( -0.0f, -0.9734f, -0.229f));
    //Bottom right
    vertices.push_back(glm::vec3( -0.62f, -0.62f, 0.11f));
    vertices.push_back(glm::vec3( -0.9734f, -0.0f, -0.229f));
    vertices.push_back(glm::vec3( -0.62f, -0.78f, 0.11f));
    vertices.push_back(glm::vec3( -0.9734f, -0.0f, -0.229f));
    vertices.push_back(glm::vec3( -0.66f, -0.74f, 0.28f));
    vertices.push_back(glm::vec3( -0.9734f, -0.0f, -0.229f));
    vertices.push_back(glm::vec3( -0.66f, -0.74f, 0.28f));
    vertices.push_back(glm::vec3( -0.9734f, -0.0f, -0.229f));
    vertices.push_back(glm::vec3( -0.66f, -0.66f, 0.28f));
    vertices.push_back(glm::vec3( -0.9734f, -0.0f, -0.229f));
    vertices.push_back(glm::vec3( -0.62f, -0.62f, 0.11f));
    vertices.push_back(glm::vec3( -0.9734f, -0.0f, -0.229f));
    //Bottom front
    vertices.push_back(glm::vec3( -0.62f, -0.78f, 0.11f));
    vertices.push_back(glm::vec3( -0.0f, 0.9734f, -0.229f));
    vertices.push_back(glm::vec3( -0.78f, -0.78f, 0.11f));
    vertices.push_back(glm::vec3( -0.0f, 0.9734f, -0.229f));
    vertices.push_back(glm::vec3( -0.74f, -0.74f, 0.28f));
    vertices.push_back(glm::vec3( -0.0f, 0.9734f, -0.229f));
    vertices.push_back(glm::vec3( -0.74f, -0.74f, 0.28f));
    vertices.push_back(glm::vec3( -0.0f, 0.9734f, -0.229f));
    vertices.push_back(glm::vec3( -0.66f, -0.74f, 0.28f));
    vertices.push_back(glm::vec3( -0.0f, 0.9734f, -0.229f));
    vertices.push_back(glm::vec3( -0.62f, -0.78f, 0.11f));
    vertices.push_back(glm::vec3( -0.0f, 0.9734f, -0.229f));
    //Bottom left
    vertices.push_back(glm::vec3( -0.78f, -0.62f, 0.11f));
    vertices.push_back(glm::vec3( 0.9734f, -0.0f, -0.229f));
    vertices.push_back(glm::vec3( -0.74f, -0.66f, 0.28f));
    vertices.push_back(glm::vec3( 0.9734f, -0.0f, -0.229f));
    vertices.push_back(glm::vec3( -0.74f, -0.74f, 0.28f));
    vertices.push_back(glm::vec3( 0.9734f, -0.0f, -0.229f));
    vertices.push_back(glm::vec3( -0.74f, -0.74f, 0.28f));
    vertices.push_back(glm::vec3( 0.9734f, -0.0f, -0.229f));
    vertices.push_back(glm::vec3( -0.78f, -0.78f, 0.11f));
    vertices.push_back(glm::vec3( 0.9734f, -0.0f, -0.229f));
    vertices.push_back(glm::vec3( -0.78f, -0.62f, 0.11f));
    vertices.push_back(glm::vec3( 0.9734f, -0.0f, -0.229f));

    //Top
    vertices.push_back(glm::vec3( -0.64f, -0.76f, 0.36f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, -1.0f));
    vertices.push_back(glm::vec3( -0.76f, -0.76f, 0.36f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, -1.0f));
    vertices.push_back(glm::vec3( -0.76f, -0.64f, 0.36f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, -1.0f));
    vertices.push_back(glm::vec3( -0.76f, -0.64f, 0.36f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, -1.0f));
    vertices.push_back(glm::vec3( -0.64f, -0.64f, 0.36f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, -1.0f));
    vertices.push_back(glm::vec3( -0.64f, -0.76f, 0.36f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, -1.0f));

    return vertices;

}
