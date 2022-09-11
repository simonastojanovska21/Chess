//
// Created by Simona on 03-Sep-22.
//

#include <vector>
#include <iostream>
#include "glm/gtc/type_ptr.hpp"
#include "Board.hpp"
Board::Board() {

}
std::vector<glm::vec3> Board::getBoardCoordinates(){
    std::vector<glm::vec3> vertices;

    vertices.push_back(glm::vec3( -0.9f, 0.9f, 0.1f));
    vertices.push_back(glm::vec3( 1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.9f, -0.9f, 0.1f));
    vertices.push_back(glm::vec3( 1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.9f, -0.9f, -0.1f));
    vertices.push_back(glm::vec3( 1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.9f, -0.9f, -0.1f));
    vertices.push_back(glm::vec3( 1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.9f, 0.9f, -0.1f));
    vertices.push_back(glm::vec3( 1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.9f, 0.9f, 0.1f));
    vertices.push_back(glm::vec3( 1.0f, -0.0f, -0.0f));

    vertices.push_back(glm::vec3( 0.9f, -0.9f, 0.1f));
    vertices.push_back(glm::vec3( -0.0f, 1.0f, -0.0f));
    vertices.push_back(glm::vec3( 0.9f, -0.9f, -0.1f));
    vertices.push_back(glm::vec3( -0.0f, 1.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.9f, -0.9f, -0.1f));
    vertices.push_back(glm::vec3( -0.0f, 1.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.9f, -0.9f, -0.1f));
    vertices.push_back(glm::vec3( -0.0f, 1.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.9f, -0.9f, 0.1f));
    vertices.push_back(glm::vec3( -0.0f, 1.0f, -0.0f));
    vertices.push_back(glm::vec3( 0.9f, -0.9f, 0.1f));
    vertices.push_back(glm::vec3( -0.0f, 1.0f, -0.0f));

    vertices.push_back(glm::vec3( 0.9f, 0.9f, 0.1f));
    vertices.push_back(glm::vec3( -1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( 0.9f, 0.9f, -0.1f));
    vertices.push_back(glm::vec3( -1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( 0.9f, -0.9f, -0.1f));
    vertices.push_back(glm::vec3( -1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( 0.9f, -0.9f, -0.1f));
    vertices.push_back(glm::vec3( -1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( 0.9f, -0.9f, 0.1f));
    vertices.push_back(glm::vec3( -1.0f, -0.0f, -0.0f));
    vertices.push_back(glm::vec3( 0.9f, 0.9f, 0.1f));
    vertices.push_back(glm::vec3( -1.0f, -0.0f, -0.0f));

    vertices.push_back(glm::vec3( -0.9f, 0.9f, 0.1f));
    vertices.push_back(glm::vec3( -0.0f, -1.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.9f, 0.9f, -0.1f));
    vertices.push_back(glm::vec3( -0.0f, -1.0f, -0.0f));
    vertices.push_back(glm::vec3( 0.9f, 0.9f, -0.1f));
    vertices.push_back(glm::vec3( -0.0f, -1.0f, -0.0f));
    vertices.push_back(glm::vec3( 0.9f, 0.9f, -0.1f));
    vertices.push_back(glm::vec3( -0.0f, -1.0f, -0.0f));
    vertices.push_back(glm::vec3( 0.9f, 0.9f, 0.1f));
    vertices.push_back(glm::vec3( -0.0f, -1.0f, -0.0f));
    vertices.push_back(glm::vec3( -0.9f, 0.9f, 0.1f));
    vertices.push_back(glm::vec3( -0.0f, -1.0f, -0.0f));

    vertices.push_back(glm::vec3( 0.9f, 0.9f, -0.1f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, 1.0f));
    vertices.push_back(glm::vec3( -0.9f, 0.9f, -0.1f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, 1.0f));
    vertices.push_back(glm::vec3( -0.9f, -0.9f, -0.1f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, 1.0f));
    vertices.push_back(glm::vec3( -0.9f, -0.9f, -0.1f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, 1.0f));
    vertices.push_back(glm::vec3( 0.9f, -0.9f, -0.1f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, 1.0f));
    vertices.push_back(glm::vec3( 0.9f, 0.9f, -0.1f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, 1.0f));

    vertices.push_back(glm::vec3( 0.9f, 0.9f, 0.1f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, -1.0f));
    vertices.push_back(glm::vec3( 0.9f, -0.9f, 0.1f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, -1.0f));
    vertices.push_back(glm::vec3( -0.9f, -0.9f, 0.1f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, -1.0f));
    vertices.push_back(glm::vec3( -0.9f, -0.9f, 0.1f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, -1.0f));
    vertices.push_back(glm::vec3( -0.9f, 0.9f, 0.1f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, -1.0f));
    vertices.push_back(glm::vec3( 0.9f, 0.9f, 0.1f));
    vertices.push_back(glm::vec3( -0.0f, -0.0f, -1.0f));

    return vertices;

//    std::vector<glm::vec3> positions;
//    positions.push_back(glm::vec3(-0.9f, -0.9f, -0.1f));
//    positions.push_back(glm::vec3(0.9f, -0.9f, -0.1f));
//    positions.push_back(glm::vec3(0.9f,0.9f,-0.1f));
//    positions.push_back(glm::vec3(0.9f,0.9f,-0.1f));
//    positions.push_back(glm::vec3(-0.9f,0.9f,-0.1f));
//    positions.push_back(glm::vec3(-0.9f,-0.9f,-0.1f));
//
//    positions.push_back(glm::vec3(-0.9f, -0.9f,  0.1f));
//    positions.push_back(glm::vec3( 0.9f, -0.9f,  0.1f));
//    positions.push_back(glm::vec3(0.9f,  0.9f,  0.1f ));
//    positions.push_back(glm::vec3( 0.9f,  0.9f,  0.1f));
//    positions.push_back(glm::vec3(  -0.9f,  0.9f,  0.1f));
//    positions.push_back(glm::vec3(  -0.9f, -0.9f,  0.1f));
//
//    positions.push_back(glm::vec3(-0.9f,  0.9f,  0.1f));
//    positions.push_back(glm::vec3( -0.9f,  0.9f, -0.1f));
//    positions.push_back(glm::vec3(-0.9f, -0.9f, -0.1f));
//    positions.push_back(glm::vec3( -0.9f, -0.9f, -0.1f));
//    positions.push_back(glm::vec3(  -0.9f, -0.9f,  0.1f));
//    positions.push_back(glm::vec3(-0.9f,  0.9f,  0.1f));
//
//    positions.push_back(glm::vec3(0.9f,  0.9f,  0.1f));
//    positions.push_back(glm::vec3(0.9f,  0.9f, -0.1f));
//    positions.push_back(glm::vec3(0.9f, -0.9f, -0.1f));
//    positions.push_back(glm::vec3(0.9f, -0.9f, -0.1f));
//    positions.push_back(glm::vec3( 0.9f, -0.9f,  0.1f));
//    positions.push_back(glm::vec3(0.9f,  0.9f,  0.1f));
//
//    positions.push_back(glm::vec3(-0.9f, -0.9f, -0.1f));
//    positions.push_back(glm::vec3(0.9f, -0.9f, -0.1f));
//    positions.push_back(glm::vec3(0.9f, -0.9f,  0.1f));
//    positions.push_back(glm::vec3( 0.9f, -0.9f,  0.1f));
//    positions.push_back(glm::vec3( -0.9f, -0.9f,  0.1f));
//    positions.push_back(glm::vec3(-0.9f, -0.9f, -0.1f));
//
//    positions.push_back(glm::vec3(-0.9f,  0.9f, -0.1f));
//    positions.push_back(glm::vec3( 0.9f,  0.9f, -0.1f));
//    positions.push_back(glm::vec3( 0.9f,  0.9f,  0.1f));
//    positions.push_back(glm::vec3(0.9f,  0.9f,  0.1f));
//    positions.push_back(glm::vec3( -0.9f,  0.9f,  0.1f));
//    positions.push_back(glm::vec3(-0.9f,  0.9f, -0.1f));
//
//    return positions;
}


std::vector<glm::vec3> Board::getBoardSquareCoordinates() {
    std::vector<glm::vec3> positions;

    positions.push_back(glm::vec3( -0.8f, -0.8f,  0.11f));
    positions.push_back(glm::vec3( -0.0f, -0.0f, -1.0f));

    positions.push_back(glm::vec3( -0.6f, -0.8f,  0.11f));
    positions.push_back(glm::vec3( -0.0f, -0.0f, -1.0f));

    positions.push_back(glm::vec3(-0.6f,  -0.6f,  0.11f));
    positions.push_back(glm::vec3( -0.0f, -0.0f, -1.0f));

    positions.push_back(glm::vec3(-0.6f,  -0.6f,  0.11f));
    positions.push_back(glm::vec3( -0.0f, -0.0f, -1.0f));

    positions.push_back(glm::vec3(-0.8f,  -0.6f,  0.11f));
    positions.push_back(glm::vec3( -0.0f, -0.0f, -1.0f));

    positions.push_back(glm::vec3(-0.8f, -0.8f,  0.11f));
    positions.push_back(glm::vec3( -0.0f, -0.0f, -1.0f));
    return positions;
}