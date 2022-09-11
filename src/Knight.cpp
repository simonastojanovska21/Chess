//
// Created by Simona on 09-Sep-22.
//
#include <vector>
#include "glm/gtc/type_ptr.hpp"
#include "Knight.hpp"

Knight::Knight() {

}

std::vector<glm::vec3> Knight::getKnightCoordinates() {
    std::vector< glm::vec3 > vertices;
    //Back
    vertices.push_back(glm::vec3( -0.64f, -0.64f, 0.3f));
    vertices.push_back(glm::vec3( -0.0f, 0.9701f, 0.2425f));
    vertices.push_back(glm::vec3( -0.64f, -0.625f, 0.24f));
    vertices.push_back(glm::vec3( -0.0f, 0.9701f, 0.2425f));
    vertices.push_back(glm::vec3( -0.76f, -0.625f, 0.24f));
    vertices.push_back(glm::vec3( -0.0f, 0.9701f, 0.2425f));
    vertices.push_back(glm::vec3( -0.76f, -0.625f, 0.24f));
    vertices.push_back(glm::vec3( -0.0f, 0.9701f, 0.2425f));
    vertices.push_back(glm::vec3( -0.76f, -0.64f, 0.3f));
    vertices.push_back(glm::vec3( -0.0f, 0.9701f, 0.2425f));
    vertices.push_back(glm::vec3( -0.64f, -0.64f, 0.3f));
    vertices.push_back(glm::vec3( -0.0f, 0.9701f, 0.2425f));
    //Bottom back
    vertices.push_back(glm::vec3( -0.78f, -0.62f, 0.11f));
    vertices.push_back(glm::vec3( -0.0f, 0.9993f, 0.0384f));
    vertices.push_back(glm::vec3( -0.76f, -0.625f, 0.24f));
    vertices.push_back(glm::vec3( -0.0f, 0.9993f, 0.0384f));
    vertices.push_back(glm::vec3( -0.64f, -0.625f, 0.24f));
    vertices.push_back(glm::vec3( -0.0f, 0.9993f, 0.0384f));
    vertices.push_back(glm::vec3( -0.64f, -0.625f, 0.24f));
    vertices.push_back(glm::vec3( -0.0f, 0.9993f, 0.0384f));
    vertices.push_back(glm::vec3( -0.62f, -0.62f, 0.11f));
    vertices.push_back(glm::vec3( -0.0f, 0.9993f, 0.0384f));
    vertices.push_back(glm::vec3( -0.78f, -0.62f, 0.11f));
    vertices.push_back(glm::vec3( -0.0f, 0.9993f, 0.0384f));
    //Side face right
    vertices.push_back(glm::vec3( -0.64f, -0.64f, 0.3f));
    vertices.push_back(glm::vec3( -1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.64f, -0.72f, 0.3f));
    vertices.push_back(glm::vec3( -1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.64f, -0.72f, 0.34f));
    vertices.push_back(glm::vec3( -1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.64f, -0.72f, 0.34f));
    vertices.push_back(glm::vec3( -1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.64f, -0.68f, 0.35f));
    vertices.push_back(glm::vec3( -1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.64f, -0.64f, 0.3f));
    vertices.push_back(glm::vec3( -1.0f, -0.0f, -0.0f));
    //Side face right
    vertices.push_back(glm::vec3( -0.64f, -0.72f, 0.24f));
    vertices.push_back(glm::vec3( 1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.64f, -0.625f, 0.24f));
    vertices.push_back(glm::vec3( 1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.64f, -0.64f, 0.3f));
    vertices.push_back(glm::vec3( 1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.64f, -0.64f, 0.3f));
    vertices.push_back(glm::vec3( 1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.64f, -0.72f, 0.3f));
    vertices.push_back(glm::vec3( 1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.64f, -0.72f, 0.24f));
    vertices.push_back(glm::vec3( 1.0f, -0.0f, -0.0f));
    //Side face right
    vertices.push_back(glm::vec3( -0.64f, -0.72f, 0.24f));
    vertices.push_back(glm::vec3( 1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.64f, -0.72f, 0.34f));
    vertices.push_back(glm::vec3( 1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.64f, -0.8f, 0.25f));
    vertices.push_back(glm::vec3( 1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.64f, -0.8f, 0.25f));
    vertices.push_back(glm::vec3( 1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.64f, -0.77f, 0.23f));
    vertices.push_back(glm::vec3( 1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.64f, -0.72f, 0.24f));
    vertices.push_back(glm::vec3( 1.0f, -0.0f, -0.0f));
    //Side face left
    vertices.push_back(glm::vec3( -0.76f, -0.72f, 0.34f));
    vertices.push_back(glm::vec3( -1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.76f, -0.72f, 0.24f));
    vertices.push_back(glm::vec3( -1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.76f, -0.77f, 0.23f));
    vertices.push_back(glm::vec3( -1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.76f, -0.77f, 0.23f));
    vertices.push_back(glm::vec3( -1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.76f, -0.8f, 0.25f));
    vertices.push_back(glm::vec3( -1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.76f, -0.72f, 0.34f));
    vertices.push_back(glm::vec3( -1.0f, -0.0f, -0.0f));
    //Side face left
    vertices.push_back(glm::vec3( -0.76f, -0.72f, 0.24f));
    vertices.push_back(glm::vec3( -1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.76f, -0.72f, 0.3f));
    vertices.push_back(glm::vec3( -1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.76f, -0.64f, 0.3f));
    vertices.push_back(glm::vec3( -1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.76f, -0.64f, 0.3f));
    vertices.push_back(glm::vec3( -1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.76f, -0.625f, 0.24f));
    vertices.push_back(glm::vec3( -1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.76f, -0.72f, 0.24f));
    vertices.push_back(glm::vec3( -1.0f, -0.0f, -0.0f));
    //Side face left
    vertices.push_back(glm::vec3( -0.76f, -0.64f, 0.3f));
    vertices.push_back(glm::vec3( -1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.76f, -0.72f, 0.3f));
    vertices.push_back(glm::vec3( -1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.76f, -0.72f, 0.34f));
    vertices.push_back(glm::vec3( -1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.76f, -0.72f, 0.34f));
    vertices.push_back(glm::vec3( -1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.76f, -0.68f, 0.35f));
    vertices.push_back(glm::vec3( -1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.76f, -0.64f, 0.3f));
    vertices.push_back(glm::vec3( -1.0f, -0.0f, -0.0f));
    //Back
    vertices.push_back(glm::vec3( -0.64f, -0.64f, 0.3f));
    vertices.push_back(glm::vec3( -0.0f, -0.7809f, -0.6247f));
    vertices.push_back(glm::vec3( -0.64f, -0.68f, 0.35f));
    vertices.push_back(glm::vec3( -0.0f, -0.7809f, -0.6247f));
    vertices.push_back(glm::vec3( -0.76f, -0.68f, 0.35f));
    vertices.push_back(glm::vec3( -0.0f, -0.7809f, -0.6247f));
    vertices.push_back(glm::vec3( -0.76f, -0.68f, 0.35f));
    vertices.push_back(glm::vec3( -0.0f, -0.7809f, -0.6247f));
    vertices.push_back(glm::vec3( -0.76f, -0.64f, 0.3f));
    vertices.push_back(glm::vec3( -0.0f, -0.7809f, -0.6247f));
    vertices.push_back(glm::vec3( -0.64f, -0.64f, 0.3f));
    vertices.push_back(glm::vec3( -0.0f, -0.7809f, -0.6247f));
    //Top
    vertices.push_back(glm::vec3( -0.64f, -0.68f, 0.35f));
    vertices.push_back(glm::vec3( -0.0f, 0.2425f, -0.9701f));
    vertices.push_back(glm::vec3( -0.64f, -0.72f, 0.34f));
    vertices.push_back(glm::vec3( -0.0f, 0.2425f, -0.9701f));
    vertices.push_back(glm::vec3( -0.76f, -0.72f, 0.34f));
    vertices.push_back(glm::vec3( -0.0f, 0.2425f, -0.9701f));
    vertices.push_back(glm::vec3( -0.76f, -0.72f, 0.34f));
    vertices.push_back(glm::vec3( -0.0f, 0.2425f, -0.9701f));
    vertices.push_back(glm::vec3( -0.76f, -0.68f, 0.35f));
    vertices.push_back(glm::vec3( -0.0f, 0.2425f, -0.9701f));
    vertices.push_back(glm::vec3( -0.64f, -0.68f, 0.35f));
    vertices.push_back(glm::vec3( -0.0f, 0.2425f, -0.9701f));
    //Front
    vertices.push_back(glm::vec3( -0.64f, -0.72f, 0.34f));
    vertices.push_back(glm::vec3( -0.0f, -0.7474f, 0.6644f));
    vertices.push_back(glm::vec3( -0.76f, -0.72f, 0.34f));
    vertices.push_back(glm::vec3( -0.0f, -0.7474f, 0.6644f));
    vertices.push_back(glm::vec3( -0.76f, -0.8f, 0.25f));
    vertices.push_back(glm::vec3( -0.0f, -0.7474f, 0.6644f));
    vertices.push_back(glm::vec3( -0.76f, -0.8f, 0.25f));
    vertices.push_back(glm::vec3( -0.0f, -0.7474f, 0.6644f));
    vertices.push_back(glm::vec3( -0.64f, -0.8f, 0.25f));
    vertices.push_back(glm::vec3( -0.0f, -0.7474f, 0.6644f));
    vertices.push_back(glm::vec3( -0.64f, -0.72f, 0.34f));
    vertices.push_back(glm::vec3( -0.0f, -0.7474f, 0.6644f));
    //Front down
    vertices.push_back(glm::vec3( -0.64f, -0.8f, 0.25f));
    vertices.push_back(glm::vec3( -0.0f, -0.5547f, -0.8321f));
    vertices.push_back(glm::vec3( -0.76f, -0.8f, 0.25f));
    vertices.push_back(glm::vec3( -0.0f, -0.5547f, -0.8321f));
    vertices.push_back(glm::vec3( -0.76f, -0.77f, 0.23f));
    vertices.push_back(glm::vec3( -0.0f, -0.5547f, -0.8321f));
    vertices.push_back(glm::vec3( -0.76f, -0.77f, 0.23f));
    vertices.push_back(glm::vec3( -0.0f, -0.5547f, -0.8321f));
    vertices.push_back(glm::vec3( -0.64f, -0.77f, 0.23f));
    vertices.push_back(glm::vec3( -0.0f, -0.5547f, -0.8321f));
    vertices.push_back(glm::vec3( -0.64f, -0.8f, 0.25f));
    vertices.push_back(glm::vec3( -0.0f, -0.5547f, -0.8321f));
    //Front down
    vertices.push_back(glm::vec3( -0.64f, -0.72f, 0.24f));
    vertices.push_back(glm::vec3( -0.0f, 0.1961f, -0.9806f));
    vertices.push_back(glm::vec3( -0.64f, -0.77f, 0.23f));
    vertices.push_back(glm::vec3( -0.0f, 0.1961f, -0.9806f));
    vertices.push_back(glm::vec3( -0.76f, -0.77f, 0.23f));
    vertices.push_back(glm::vec3( -0.0f, 0.1961f, -0.9806f));
    vertices.push_back(glm::vec3( -0.76f, -0.77f, 0.23f));
    vertices.push_back(glm::vec3( -0.0f, 0.1961f, -0.9806f));
    vertices.push_back(glm::vec3( -0.76f, -0.72f, 0.24f));
    vertices.push_back(glm::vec3( -0.0f, 0.1961f, -0.9806f));
    vertices.push_back(glm::vec3( -0.64f, -0.72f, 0.24f));
    vertices.push_back(glm::vec3( -0.0f, 0.1961f, -0.9806f));
    //Bottom left
    vertices.push_back(glm::vec3( -0.78f, -0.62f, 0.11f));
    vertices.push_back(glm::vec3( -0.9884f, -0.0f, 0.1521f));
    vertices.push_back(glm::vec3( -0.78f, -0.78f, 0.11f));
    vertices.push_back(glm::vec3( -0.9884f, -0.0f, 0.1521f));
    vertices.push_back(glm::vec3( -0.76f, -0.72f, 0.24f));
    vertices.push_back(glm::vec3( -0.9884f, -0.0f, 0.1521f));
    vertices.push_back(glm::vec3( -0.76f, -0.72f, 0.24f));
    vertices.push_back(glm::vec3( -0.9884f, -0.0f, 0.1521f));
    vertices.push_back(glm::vec3( -0.76f, -0.625f, 0.24f));
    vertices.push_back(glm::vec3( -0.9884f, -0.0f, 0.1521f));
    vertices.push_back(glm::vec3( -0.78f, -0.62f, 0.11f));
    vertices.push_back(glm::vec3( -0.9884f, -0.0f, 0.1521f));
    //Bottom front
    vertices.push_back(glm::vec3( -0.78f, -0.78f, 0.11f));
    vertices.push_back(glm::vec3( -0.0f, -0.908f, 0.4191f));
    vertices.push_back(glm::vec3( -0.62f, -0.78f, 0.11f));
    vertices.push_back(glm::vec3( -0.0f, -0.908f, 0.4191f));
    vertices.push_back(glm::vec3( -0.64f, -0.72f, 0.24f));
    vertices.push_back(glm::vec3( -0.0f, -0.908f, 0.4191f));
    vertices.push_back(glm::vec3( -0.64f, -0.72f, 0.24f));
    vertices.push_back(glm::vec3( -0.0f, -0.908f, 0.4191f));
    vertices.push_back(glm::vec3( -0.76f, -0.72f, 0.24f));
    vertices.push_back(glm::vec3( -0.0f, -0.908f, 0.4191f));
    vertices.push_back(glm::vec3( -0.78f, -0.78f, 0.11f));
    vertices.push_back(glm::vec3( -0.0f, -0.908f, 0.4191f));
    //Bottom right
    vertices.push_back(glm::vec3( -0.62f, -0.62f, 0.11f));
    vertices.push_back(glm::vec3( 0.9884f, -0.0f, 0.1521f));
    vertices.push_back(glm::vec3( -0.64f, -0.625f, 0.24f));
    vertices.push_back(glm::vec3( 0.9884f, -0.0f, 0.1521f));
    vertices.push_back(glm::vec3( -0.64f, -0.72f, 0.24f));
    vertices.push_back(glm::vec3( 0.9884f, -0.0f, 0.1521f));
    vertices.push_back(glm::vec3( -0.64f, -0.72f, 0.24f));
    vertices.push_back(glm::vec3( 0.9884f, -0.0f, 0.1521f));
    vertices.push_back(glm::vec3( -0.62f, -0.78f, 0.11f));
    vertices.push_back(glm::vec3( 0.9884f, -0.0f, 0.1521f));
    vertices.push_back(glm::vec3( -0.62f, -0.62f, 0.11f));
    vertices.push_back(glm::vec3( 0.9884f, -0.0f, 0.1521f));

    return vertices;
}
