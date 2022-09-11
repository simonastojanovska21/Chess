//
// Created by Simona on 09-Sep-22.
//
#include <vector>
#include "glm/gtc/type_ptr.hpp"
#include "Bishop.hpp"

Bishop::Bishop() {

}

std::vector<glm::vec3> Bishop::getBishopCoordinates() {
    std::vector< glm::vec3 > vertices;

    //Top part back
    vertices.push_back(glm::vec3( -0.76f, -0.64f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, 0.7593f, 0.6508f));
    vertices.push_back(glm::vec3( -0.7f, -0.7f, 0.36f));
    vertices.push_back(glm::vec3( -0.0f, 0.7593f, 0.6508f));
    vertices.push_back(glm::vec3( -0.64f, -0.64f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, 0.7593f, 0.6508f));
    //Top part right
    vertices.push_back(glm::vec3( -0.64f, -0.64f, 0.29f));
    vertices.push_back(glm::vec3( -0.7593f, -0.0f, -0.6508f));
    vertices.push_back(glm::vec3( -0.64f, -0.76f, 0.29f));
    vertices.push_back(glm::vec3( -0.7593f, -0.0f, -0.6508f));
    vertices.push_back(glm::vec3( -0.7f, -0.7f, 0.36f));
    vertices.push_back(glm::vec3( -0.7593f, -0.0f, -0.6508f));
    //Top part front
    vertices.push_back(glm::vec3( -0.64f, -0.76f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, 0.7593f, -0.6508f));
    vertices.push_back(glm::vec3( -0.76f, -0.76f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, 0.7593f, -0.6508f));
    vertices.push_back(glm::vec3( -0.7f, -0.7f, 0.36f));
    vertices.push_back(glm::vec3( -0.0f, 0.7593f, -0.6508f));
    //Top part left
    vertices.push_back(glm::vec3( -0.76f, -0.64f, 0.29f));
    vertices.push_back(glm::vec3( 0.7593f, -0.0f, -0.6508f));
    vertices.push_back(glm::vec3( -0.7f, -0.7f, 0.36f));
    vertices.push_back(glm::vec3( 0.7593f, -0.0f, -0.6508f));
    vertices.push_back(glm::vec3( -0.76f, -0.76f, 0.29f));
    vertices.push_back(glm::vec3( 0.7593f, -0.0f, -0.6508f));

    //Middle part back
    vertices.push_back(glm::vec3( -0.74f, -0.66f, 0.17f));
    vertices.push_back(glm::vec3( -0.0f, -0.9864f, 0.1644f));
    vertices.push_back(glm::vec3( -0.66f, -0.66f, 0.17f));
    vertices.push_back(glm::vec3( -0.0f, -0.9864f, 0.1644f));
    vertices.push_back(glm::vec3( -0.64f, -0.64f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -0.9864f, 0.1644f));
    vertices.push_back(glm::vec3( -0.64f, -0.64f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -0.9864f, 0.1644f));
    vertices.push_back(glm::vec3( -0.76f, -0.64f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, -0.9864f, 0.1644f));
    vertices.push_back(glm::vec3( -0.74f, -0.66f, 0.17f));
    vertices.push_back(glm::vec3( -0.0f, -0.9864f, 0.1644f));
    //Middle part right
    vertices.push_back(glm::vec3( -0.66f, -0.66f, 0.17f));
    vertices.push_back(glm::vec3( -0.9864f, -0.0f, 0.1644f));
    vertices.push_back(glm::vec3( -0.66f, -0.74f, 0.17f));
    vertices.push_back(glm::vec3( -0.9864f, -0.0f, 0.1644f));
    vertices.push_back(glm::vec3( -0.64f, -0.76f, 0.29f));
    vertices.push_back(glm::vec3( -0.9864f, -0.0f, 0.1644f));
    vertices.push_back(glm::vec3( -0.64f, -0.76f, 0.29f));
    vertices.push_back(glm::vec3( -0.9864f, -0.0f, 0.1644f));
    vertices.push_back(glm::vec3( -0.64f, -0.64f, 0.29f));
    vertices.push_back(glm::vec3( -0.9864f, -0.0f, 0.1644f));
    vertices.push_back(glm::vec3( -0.66f, -0.66f, 0.17f));
    vertices.push_back(glm::vec3( -0.9864f, -0.0f, 0.1644f));
    //Middle part front
    vertices.push_back(glm::vec3( -0.66f, -0.74f, 0.17f));
    vertices.push_back(glm::vec3( -0.0f, 0.9864f, 0.1644f));
    vertices.push_back(glm::vec3( -0.74f, -0.74f, 0.17f));
    vertices.push_back(glm::vec3( -0.0f, 0.9864f, 0.1644f));
    vertices.push_back(glm::vec3( -0.76f, -0.76f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, 0.9864f, 0.1644f));
    vertices.push_back(glm::vec3( -0.76f, -0.76f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, 0.9864f, 0.1644f));
    vertices.push_back(glm::vec3( -0.64f, -0.76f, 0.29f));
    vertices.push_back(glm::vec3( -0.0f, 0.9864f, 0.1644f));
    vertices.push_back(glm::vec3( -0.66f, -0.74f, 0.17f));
    vertices.push_back(glm::vec3( -0.0f, 0.9864f, 0.1644f));
    //Middle part left
    vertices.push_back(glm::vec3( -0.74f, -0.66f, 0.17f));
    vertices.push_back(glm::vec3( 0.9864f, -0.0f, 0.1644f));
    vertices.push_back(glm::vec3( -0.76f, -0.64f, 0.29f));
    vertices.push_back(glm::vec3( 0.9864f, -0.0f, 0.1644f));
    vertices.push_back(glm::vec3( -0.76f, -0.76f, 0.29f));
    vertices.push_back(glm::vec3( 0.9864f, -0.0f, 0.1644f));
    vertices.push_back(glm::vec3( -0.76f, -0.76f, 0.29f));
    vertices.push_back(glm::vec3( 0.9864f, -0.0f, 0.1644f));
    vertices.push_back(glm::vec3( -0.74f, -0.74f, 0.17f));
    vertices.push_back(glm::vec3( 0.9864f, -0.0f, 0.1644f));
    vertices.push_back(glm::vec3( -0.74f, -0.66f, 0.17f));
    vertices.push_back(glm::vec3( 0.9864f, -0.0f, 0.1644f));

    //Bottom part back
    vertices.push_back(glm::vec3( -0.62f, -0.62f, 0.11f));
    vertices.push_back(glm::vec3( -0.0f, -0.8321f, -0.5547f));
    vertices.push_back(glm::vec3( -0.66f, -0.66f, 0.17f));
    vertices.push_back(glm::vec3( -0.0f, -0.8321f, -0.5547f));
    vertices.push_back(glm::vec3( -0.74f, -0.66f, 0.17f));
    vertices.push_back(glm::vec3( -0.0f, -0.8321f, -0.5547f));
    vertices.push_back(glm::vec3( -0.74f, -0.66f, 0.17f));
    vertices.push_back(glm::vec3( -0.0f, -0.8321f, -0.5547f));
    vertices.push_back(glm::vec3( -0.78f, -0.62f, 0.11f));
    vertices.push_back(glm::vec3( -0.0f, -0.8321f, -0.5547f));
    vertices.push_back(glm::vec3( -0.62f, -0.62f, 0.11f));
    vertices.push_back(glm::vec3( -0.0f, -0.8321f, -0.5547f));
    //Bottom part right
    vertices.push_back(glm::vec3( -0.62f, -0.62f, 0.11f));
    vertices.push_back(glm::vec3( -0.8321f, -0.0f, -0.5547f));
    vertices.push_back(glm::vec3( -0.62f, -0.78f, 0.11f));
    vertices.push_back(glm::vec3( -0.8321f, -0.0f, -0.5547f));
    vertices.push_back(glm::vec3( -0.66f, -0.74f, 0.17f));
    vertices.push_back(glm::vec3( -0.8321f, -0.0f, -0.5547f));
    vertices.push_back(glm::vec3( -0.66f, -0.74f, 0.17f));
    vertices.push_back(glm::vec3( -0.8321f, -0.0f, -0.5547f));
    vertices.push_back(glm::vec3( -0.66f, -0.66f, 0.17f));
    vertices.push_back(glm::vec3( -0.8321f, -0.0f, -0.5547f));
    vertices.push_back(glm::vec3( -0.62f, -0.62f, 0.11f));
    vertices.push_back(glm::vec3( -0.8321f, -0.0f, -0.5547f));
    //Bottom part front
    vertices.push_back(glm::vec3( -0.62f, -0.78f, 0.11f));
    vertices.push_back(glm::vec3( -0.0f, 0.8321f, -0.5547f));
    vertices.push_back(glm::vec3( -0.78f, -0.78f, 0.11f));
    vertices.push_back(glm::vec3( -0.0f, 0.8321f, -0.5547f));
    vertices.push_back(glm::vec3( -0.74f, -0.74f, 0.17f));
    vertices.push_back(glm::vec3( -0.0f, 0.8321f, -0.5547f));
    vertices.push_back(glm::vec3( -0.74f, -0.74f, 0.17f));
    vertices.push_back(glm::vec3( -0.0f, 0.8321f, -0.5547f));
    vertices.push_back(glm::vec3( -0.66f, -0.74f, 0.17f));
    vertices.push_back(glm::vec3( -0.0f, 0.8321f, -0.5547f));
    vertices.push_back(glm::vec3( -0.62f, -0.78f, 0.11f));
    vertices.push_back(glm::vec3( -0.0f, 0.8321f, -0.5547f));
    //Bottom part left
    vertices.push_back(glm::vec3( -0.78f, -0.62f, 0.11f));
    vertices.push_back(glm::vec3( 0.8321f, -0.0f, -0.5547f));
    vertices.push_back(glm::vec3( -0.74f, -0.66f, 0.17f));
    vertices.push_back(glm::vec3( 0.8321f, -0.0f, -0.5547f));
    vertices.push_back(glm::vec3( -0.74f, -0.74f, 0.17f));
    vertices.push_back(glm::vec3( 0.8321f, -0.0f, -0.5547f));
    vertices.push_back(glm::vec3( -0.74f, -0.74f, 0.17f));
    vertices.push_back(glm::vec3( 0.8321f, -0.0f, -0.5547f));
    vertices.push_back(glm::vec3( -0.78f, -0.78f, 0.11f));
    vertices.push_back(glm::vec3( 0.8321f, -0.0f, -0.5547f));
    vertices.push_back(glm::vec3( -0.78f, -0.62f, 0.11f));
    vertices.push_back(glm::vec3( 0.8321f, -0.0f, -0.5547f));

    return vertices;
}
