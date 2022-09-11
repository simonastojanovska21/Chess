//
// Created by Simona on 09-Sep-22.
//
#include <vector>
#include "glm/gtc/type_ptr.hpp"
#include "King.hpp"

King::King() {

}

std::vector<glm::vec3> King::getKingCoordinates() {

    std::vector< glm::vec3 > vertices;

    //Top back
    vertices.push_back(glm::vec3( -0.63f, -0.63f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -0.9923f, -0.124f));
    vertices.push_back(glm::vec3( -0.64f, -0.64f, 0.37f));
    vertices.push_back(glm::vec3( -0.0f, -0.9923f, -0.124f));
    vertices.push_back(glm::vec3( -0.76f, -0.64f, 0.37f));
    vertices.push_back(glm::vec3( -0.0f, -0.9923f, -0.124f));
    vertices.push_back(glm::vec3( -0.76f, -0.64f, 0.37f));
    vertices.push_back(glm::vec3( -0.0f, -0.9923f, -0.124f));
    vertices.push_back(glm::vec3( -0.77f, -0.63f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -0.9923f, -0.124f));
    vertices.push_back(glm::vec3( -0.63f, -0.63f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -0.9923f, -0.124f));
    //Top back down
    vertices.push_back(glm::vec3( -0.66f, -0.66f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, 1.0f));
    vertices.push_back(glm::vec3( -0.63f, -0.63f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, 1.0f));
    vertices.push_back(glm::vec3( -0.77f, -0.63f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, 1.0f));
    vertices.push_back(glm::vec3( -0.77f, -0.63f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, 1.0f));
    vertices.push_back(glm::vec3( -0.74f, -0.66f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, 1.0f));
    vertices.push_back(glm::vec3( -0.66f, -0.66f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, 1.0f));
    //Top right
    vertices.push_back(glm::vec3( -0.63f, -0.63f, 0.29f));
    vertices.push_back(glm::vec3( -0.9923f, -0.0f, -0.124f));
    vertices.push_back(glm::vec3( -0.63f, -0.77f, 0.29f));
    vertices.push_back(glm::vec3( -0.9923f, -0.0f, -0.124f));
    vertices.push_back(glm::vec3( -0.64f, -0.76f, 0.37f));
    vertices.push_back(glm::vec3( -0.9923f, -0.0f, -0.124f));
    vertices.push_back(glm::vec3( -0.64f, -0.76f, 0.37f));
    vertices.push_back(glm::vec3( -0.9923f, -0.0f, -0.124f));
    vertices.push_back(glm::vec3( -0.64f, -0.64f, 0.37f));
    vertices.push_back(glm::vec3( -0.9923f, -0.0f, -0.124f));
    vertices.push_back(glm::vec3( -0.63f, -0.63f, 0.29f));
    vertices.push_back(glm::vec3( -0.9923f, -0.0f, -0.124f));
    //Top right down
    vertices.push_back(glm::vec3( -0.66f, -0.66f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, 1.0f));
    vertices.push_back(glm::vec3( -0.66f, -0.74f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, 1.0f));
    vertices.push_back(glm::vec3( -0.63f, -0.77f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, 1.0f));
    vertices.push_back(glm::vec3( -0.63f, -0.77f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, 1.0f));
    vertices.push_back(glm::vec3( -0.63f, -0.63f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, 1.0f));
    vertices.push_back(glm::vec3( -0.66f, -0.66f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, 1.0f));
    //Top front
    vertices.push_back(glm::vec3( -0.63f, -0.77f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, 0.9923f, -0.124f));
    vertices.push_back(glm::vec3( -0.77f, -0.77f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, 0.9923f, -0.124f));
    vertices.push_back(glm::vec3( -0.76f, -0.76f, 0.37f));
    vertices.push_back(glm::vec3( -0.0f, 0.9923f, -0.124f));
    vertices.push_back(glm::vec3( -0.76f, -0.76f, 0.37f));
    vertices.push_back(glm::vec3( -0.0f, 0.9923f, -0.124f));
    vertices.push_back(glm::vec3( -0.64f, -0.76f, 0.37f));
    vertices.push_back(glm::vec3( -0.0f, 0.9923f, -0.124f));
    vertices.push_back(glm::vec3( -0.63f, -0.77f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, 0.9923f, -0.124f));
    //Top front down
    vertices.push_back(glm::vec3( -0.66f, -0.74f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, 1.0f));
    vertices.push_back(glm::vec3( -0.74f, -0.74f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, 1.0f));
    vertices.push_back(glm::vec3( -0.77f, -0.77f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, 1.0f));
    vertices.push_back(glm::vec3( -0.77f, -0.77f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, 1.0f));
    vertices.push_back(glm::vec3( -0.63f, -0.77f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, 1.0f));
    vertices.push_back(glm::vec3( -0.66f, -0.74f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, 1.0f));
    //Top left
    vertices.push_back(glm::vec3( -0.77f, -0.77f, 0.29f));
    vertices.push_back(glm::vec3( 0.9923f, -0.0f, -0.124f));
    vertices.push_back(glm::vec3( -0.77f, -0.63f, 0.29f));
    vertices.push_back(glm::vec3( 0.9923f, -0.0f, -0.124f));
    vertices.push_back(glm::vec3( -0.76f, -0.64f, 0.37f));
    vertices.push_back(glm::vec3( 0.9923f, -0.0f, -0.124f));
    vertices.push_back(glm::vec3( -0.76f, -0.64f, 0.37f));
    vertices.push_back(glm::vec3( 0.9923f, -0.0f, -0.124f));
    vertices.push_back(glm::vec3( -0.76f, -0.76f, 0.37f));
    vertices.push_back(glm::vec3( 0.9923f, -0.0f, -0.124f));
    vertices.push_back(glm::vec3( -0.77f, -0.77f, 0.29f));
    vertices.push_back(glm::vec3( 0.9923f, -0.0f, -0.124f));
    //Top left down
    vertices.push_back(glm::vec3( -0.74f, -0.74f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, 1.0f));
    vertices.push_back(glm::vec3( -0.74f, -0.66f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, 1.0f));
    vertices.push_back(glm::vec3( -0.77f, -0.63f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, 1.0f));
    vertices.push_back(glm::vec3( -0.77f, -0.63f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, 1.0f));
    vertices.push_back(glm::vec3( -0.77f, -0.77f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, 1.0f));
    vertices.push_back(glm::vec3( -0.74f, -0.74f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, 1.0f));

    //Top
    vertices.push_back(glm::vec3( -0.64f, -0.76f, 0.37f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, -1.0f));
    vertices.push_back(glm::vec3( -0.76f, -0.76f, 0.37f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, -1.0f));
    vertices.push_back(glm::vec3( -0.76f, -0.64f, 0.37f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, -1.0f));
    vertices.push_back(glm::vec3( -0.76f, -0.64f, 0.37f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, -1.0f));
    vertices.push_back(glm::vec3( -0.64f, -0.64f, 0.37f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, -1.0f));
    vertices.push_back(glm::vec3( -0.64f, -0.76f, 0.37f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, -1.0f));

    //Bottom back
    vertices.push_back(glm::vec3( -0.78f, -0.62f, 0.11f));
    vertices.push_back(glm::vec3( -0.0f, -0.9762f, -0.2169f));
    vertices.push_back(glm::vec3( -0.62f, -0.62f, 0.11f));
    vertices.push_back(glm::vec3( -0.0f, -0.9762f, -0.2169f));
    vertices.push_back(glm::vec3( -0.66f, -0.66f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -0.9762f, -0.2169f));
    vertices.push_back(glm::vec3( -0.66f, -0.66f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -0.9762f, -0.2169f));
    vertices.push_back(glm::vec3( -0.74f, -0.66f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -0.9762f, -0.2169f));
    vertices.push_back(glm::vec3( -0.78f, -0.62f, 0.11f));
    vertices.push_back(glm::vec3( -0.0f, -0.9762f, -0.2169f));
    //Bottom right
    vertices.push_back(glm::vec3( -0.62f, -0.62f, 0.11f));
    vertices.push_back(glm::vec3( -0.9762f, -0.0f, -0.2169f));
    vertices.push_back(glm::vec3( -0.62f, -0.78f, 0.11f));
    vertices.push_back(glm::vec3( -0.9762f, -0.0f, -0.2169f));
    vertices.push_back(glm::vec3( -0.66f, -0.74f, 0.29f));
    vertices.push_back(glm::vec3( -0.9762f, -0.0f, -0.2169f));
    vertices.push_back(glm::vec3( -0.66f, -0.74f, 0.29f));
    vertices.push_back(glm::vec3( -0.9762f, -0.0f, -0.2169f));
    vertices.push_back(glm::vec3( -0.66f, -0.66f, 0.29f));
    vertices.push_back(glm::vec3( -0.9762f, -0.0f, -0.2169f));
    vertices.push_back(glm::vec3( -0.62f, -0.62f, 0.11f));
    vertices.push_back(glm::vec3( -0.9762f, -0.0f, -0.2169f));
    //Bottom front
    vertices.push_back(glm::vec3( -0.62f, -0.78f, 0.11f));
    vertices.push_back(glm::vec3( -0.0f, 0.9762f, -0.2169f));
    vertices.push_back(glm::vec3( -0.78f, -0.78f, 0.11f));
    vertices.push_back(glm::vec3( -0.0f, 0.9762f, -0.2169f));
    vertices.push_back(glm::vec3( -0.74f, -0.74f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, 0.9762f, -0.2169f));
    vertices.push_back(glm::vec3( -0.74f, -0.74f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, 0.9762f, -0.2169f));
    vertices.push_back(glm::vec3( -0.66f, -0.74f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, 0.9762f, -0.2169f));
    vertices.push_back(glm::vec3( -0.62f, -0.78f, 0.11f));
    vertices.push_back(glm::vec3( -0.0f, 0.9762f, -0.2169f));
    //Bottom left
    vertices.push_back(glm::vec3( -0.78f, -0.62f, 0.11f));
    vertices.push_back(glm::vec3( 0.9762f, -0.0f, -0.2169f));
    vertices.push_back(glm::vec3( -0.74f, -0.66f, 0.29f));
    vertices.push_back(glm::vec3( 0.9762f, -0.0f, -0.2169f));
    vertices.push_back(glm::vec3( -0.74f, -0.74f, 0.29f));
    vertices.push_back(glm::vec3( 0.9762f, -0.0f, -0.2169f));
    vertices.push_back(glm::vec3( -0.74f, -0.74f, 0.29f));
    vertices.push_back(glm::vec3( 0.9762f, -0.0f, -0.2169f));
    vertices.push_back(glm::vec3( -0.78f, -0.78f, 0.11f));
    vertices.push_back(glm::vec3( 0.9762f, -0.0f, -0.2169f));
    vertices.push_back(glm::vec3( -0.78f, -0.62f, 0.11f));
    vertices.push_back(glm::vec3( 0.9762f, -0.0f, -0.2169f));

    return vertices;

}
