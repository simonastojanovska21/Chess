#include <OpenGLPrj.hpp>

#include <GLFW/glfw3.h>

#include <Shader.hpp>

#include <iostream>
#include <string>
#include <vector>
#include "Board.hpp"
#include "Pawn.hpp"
#include "Bishop.hpp"
#include "King.hpp"
#include "Knight.hpp"
#include "Queen.hpp"
#include "Rook.hpp"

const std::string program_name = ("Chess");

void framebuffer_size_callback(GLFWwindow *window, int width, int height);
void processInput(GLFWwindow *window);
void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods);
std::string exec(const char* cmd);
// settings
const unsigned int SCR_WIDTH = 800;
const unsigned int SCR_HEIGHT = 800;

//If the value is true that the start color is black
bool whiteTurn = true;
glm::vec2 selectedSquare = glm::vec2(0,0);

// lighting
//glm::vec3 lightPos(1.0f, 0.3f, -1.5f);
glm::vec3 lightPos(0.0f, -0.5f, -1.2f);

//Colors
glm::vec3 creamColor = glm::vec3(0.875,0.725,0.584);
glm::vec3 brownColor = glm::vec3(0.302,0.173,0.149);
glm::vec3 redColor =glm::vec3(1.0f,0.0f,0.0f);
glm::vec3 blackColor = glm::vec3(0.0f,0.0f,0.0f);
glm::vec3 whiteColor = glm::vec3(1.0f,1.0f,1.0f);

int main() {
  // glfw: initialize and configure
  // ------------------------------
  glfwInit();
  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
  glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

#ifdef __APPLE__
  glfwWindowHint(
      GLFW_OPENGL_FORWARD_COMPAT,
      GL_TRUE); // uncomment this statement to fix compilation on OS X
#endif

  // glfw window creation
  // --------------------
  GLFWwindow *window = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT,
                                        program_name.c_str(), nullptr, nullptr);
  if (window == nullptr) {
    std::cout << "Failed to create GLFW window" << std::endl;
    glfwTerminate();
    return -1;
  }
  glfwMakeContextCurrent(window);
  glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);
  //Used for processing keyboard input and moving the selected square
  glfwSetKeyCallback(window, key_callback);

  // glad: load all OpenGL function pointers
  // ---------------------------------------
  if (!gladLoadGLLoader(reinterpret_cast<GLADloadproc>(glfwGetProcAddress))) {
    std::cout << "Failed to initialize GLAD" << std::endl;
    return -1;
  }

  // configure global opengl state
  // -----------------------------
  glEnable(GL_DEPTH_TEST);

  // build and compile our shader program
  // ------------------------------------
  std::string shader_location("../res/shaders/");

  std::string used_shaders("shader");
  std::string light_shader("light");

  Shader ourShader(shader_location + used_shaders + std::string(".vert"),
                   shader_location + used_shaders + std::string(".frag"));

  Shader lightShader(shader_location + light_shader + std::string(".vert"),
                     shader_location + light_shader + std::string(".frag"));

  Board* board = new Board();
  std::vector<glm::vec3> boardVertices = board->getBoardCoordinates();
  std::vector<glm::vec3> boardSquareVertices = board->getBoardSquareCoordinates();

  Pawn* pawn = new Pawn();
  std::vector<glm::vec3> pawnVertices = pawn->getPawnCoordinates();

  Bishop* bishop = new Bishop();
  std::vector<glm::vec3> bishopVertices = bishop->getBishopCoordinates();

  King* king = new King();
  std::vector<glm::vec3> kingVertices = king->getKingCoordinates();

  Knight* knight = new Knight();
  std::vector<glm::vec3> knightVertices = knight->getKnightCoordinates();

  Queen* queen = new Queen();
  std::vector<glm::vec3> queenVertices = queen->getQueenCoordinates();

  Rook* rook = new Rook();
  std::vector<glm::vec3> rookVertices = rook->getRookCoordinates();

  unsigned int VBOs[8], VAOs[8];
  glGenVertexArrays(8, VAOs);
  glGenBuffers(8, VBOs);

  //Buffers for chess board
  glBindVertexArray(VAOs[0]);
  glBindBuffer(GL_ARRAY_BUFFER, VBOs[0]);
  glBufferData(GL_ARRAY_BUFFER, sizeof(boardVertices) * boardVertices.size(),&boardVertices[0],  GL_STATIC_DRAW);
  glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)0);
  glEnableVertexAttribArray(0);
  glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)(3 * sizeof(float)));
  glEnableVertexAttribArray(1);
//
//    unsigned int lightCubeVAO;
//    glGenVertexArrays(1, &lightCubeVAO);
//    glBindVertexArray(lightCubeVAO);
//    glBindBuffer(GL_ARRAY_BUFFER, VBOs[0]);
//    // note that we update the lamp's position attribute's stride to reflect the updated buffer data
//    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)0);
//    glEnableVertexAttribArray(0);


  //Buffers for chess square
  glBindVertexArray(VAOs[1]);
  glBindBuffer(GL_ARRAY_BUFFER, VBOs[1]);
  glBufferData(GL_ARRAY_BUFFER, sizeof(boardSquareVertices)*boardSquareVertices.size(), &boardSquareVertices[0], GL_STATIC_DRAW);
  glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)0);
  glEnableVertexAttribArray(0);
  glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)(3 * sizeof(float)));
  glEnableVertexAttribArray(1);

  //Buffers for pawn
  glBindVertexArray(VAOs[2]);
  glBindBuffer(GL_ARRAY_BUFFER, VBOs[2]);
  glBufferData(GL_ARRAY_BUFFER, sizeof(pawnVertices)*pawnVertices.size(), &pawnVertices[0], GL_STATIC_DRAW);
  glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)0);
  glEnableVertexAttribArray(0);
  glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)(3 * sizeof(float)));
  glEnableVertexAttribArray(1);

  //Buffers for bishop
  glBindVertexArray(VAOs[3]);
  glBindBuffer(GL_ARRAY_BUFFER, VBOs[3]);
  glBufferData(GL_ARRAY_BUFFER, sizeof(bishopVertices)*bishopVertices.size(), &bishopVertices[0], GL_STATIC_DRAW);
  glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)0);
  glEnableVertexAttribArray(0);
  glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)(3 * sizeof(float)));
  glEnableVertexAttribArray(1);

  //Buffers for king
  glBindVertexArray(VAOs[4]);
  glBindBuffer(GL_ARRAY_BUFFER, VBOs[4]);
  glBufferData(GL_ARRAY_BUFFER, sizeof(kingVertices)*kingVertices.size(), &kingVertices[0], GL_STATIC_DRAW);
  glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)0);
  glEnableVertexAttribArray(0);
  glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)(3 * sizeof(float)));
  glEnableVertexAttribArray(1);

  //Buffers for knight
  glBindVertexArray(VAOs[5]);
  glBindBuffer(GL_ARRAY_BUFFER, VBOs[5]);
  glBufferData(GL_ARRAY_BUFFER, sizeof(knightVertices)*knightVertices.size(), &knightVertices[0], GL_STATIC_DRAW);
  glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)0);
  glEnableVertexAttribArray(0);
  glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)(3 * sizeof(float)));
  glEnableVertexAttribArray(1);

  //Buffers for queen
  glBindVertexArray(VAOs[6]);
  glBindBuffer(GL_ARRAY_BUFFER, VBOs[6]);
  glBufferData(GL_ARRAY_BUFFER, sizeof(queenVertices)*queenVertices.size(), &queenVertices[0], GL_STATIC_DRAW);
  glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)0);
  glEnableVertexAttribArray(0);
  glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)(3 * sizeof(float)));
  glEnableVertexAttribArray(1);

  //Buffers for rook
  glBindVertexArray(VAOs[7]);
  glBindBuffer(GL_ARRAY_BUFFER, VBOs[7]);
  glBufferData(GL_ARRAY_BUFFER, sizeof(rookVertices)*rookVertices.size(), &rookVertices[0], GL_STATIC_DRAW);
  glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)0);
  glEnableVertexAttribArray(0);
  glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)(3 * sizeof(float)));
  glEnableVertexAttribArray(1);

  // glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);

  char chessBoard[8][8] = {{'R','N','B','Q','K','B','N','R'},
                           {'P','P','P','P','P','P','P','P'},
                           {'0','0','0','0','0','0','0','0'},
                           {'0','0','0','0','0','0','0','0'},
                           {'0','0','0','0','0','0','0','0'},
                           {'0','0','0','0','0','0','0','0'},
                           {'r','n','b','q','k','b','n','r'},
                           {'p','p','p','p','p','p','p','p'}};

//  bool ans = chessBoard[0][1] == 'n';
//    std::cout<<ans;
  while (!glfwWindowShouldClose(window)) {

    // input
    // -----
    processInput(window);

    // render
    // ------
    glClearColor(0.22f,0.0f,0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    ourShader.use();
    ourShader.setVec3("lightColor", 1.0f, 1.0f, 1.0f);
    ourShader.setVec3("lightPos", lightPos);
    glm::mat4 projection = glm::perspective(glm::radians(48.0f), SCR_WIDTH * 1.0f / SCR_HEIGHT, 0.1f, 100.0f);
    ourShader.setMat4("projection", projection);

    glm::mat4 view = glm::mat4(1.0f);
    view = glm::translate(view, glm::vec3(0.0f, 0.0f, -3.0f));
    ourShader.setMat4("view", view);

    glBindVertexArray(VAOs[0]);
    glm::mat4 model = glm::mat4(1.0f);
    model =glm::rotate(model, glm::radians(-40.0f), glm::vec3(1.0f, 0.0f, 0.0f));
    ourShader.setMat4("model", model);
    //Drawing the chess board
    ourShader.setVec3("ourColor", glm::vec3(0.333f,0.333f,0.333f));
    glDrawArrays(GL_TRIANGLES, 0, boardVertices.size()/2);

    //Drawing the squares on the board

    glBindVertexArray(VAOs[1]);
    glm::vec3 squarePositions= glm::vec3(0.0f,0.0f,0.0f);
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            model = glm::mat4(1.0f);
            model = glm::translate(model, squarePositions);

            model =glm::rotate(model, glm::radians(-40.0f), glm::vec3(1.0f, 0.0f, 0.0f));
            ourShader.setMat4("model", model);

            if(i==selectedSquare.x && j==selectedSquare.y)
                ourShader.setVec3("ourColor", redColor);
            else if( (i+j) % 2 == 0 )
                ourShader.setVec3("ourColor", blackColor);
            else
                ourShader.setVec3("ourColor", whiteColor);
            glDrawArrays(GL_TRIANGLES, 0,6);
            squarePositions.x = squarePositions.x+0.2f;
        }
        squarePositions.y = squarePositions.y + 0.15f;
        squarePositions.z = squarePositions.z - 0.11f;
        squarePositions.x = 0.0f;
    }


    squarePositions= glm::vec3(0.0f,0.0f,0.0f);
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            model = glm::mat4(1.0f);
            model = glm::translate(model, squarePositions);
            float angle = glm::radians(-40.0f);
            model =glm::rotate(model, chessBoard[i][j] == 'K' ? angle : glm::radians(-40.0f), glm::vec3(1.0f, 0.0f, 0.0f));
            ourShader.setMat4("model", model);

            if(chessBoard[i][j] == 'P' || chessBoard[i][j] == 'p'){
                glBindVertexArray(VAOs[2]);
                ourShader.setVec3("ourColor", chessBoard[i][j] == 'P' ? creamColor : brownColor );
                glDrawArrays(GL_TRIANGLES,0, pawnVertices.size()/2);
            }
            if(chessBoard[i][j] == 'B' || chessBoard[i][j] == 'b'){
                glBindVertexArray(VAOs[3]);
                ourShader.setVec3("ourColor", chessBoard[i][j] == 'B' ? creamColor : brownColor );
                glDrawArrays(GL_TRIANGLES,0, bishopVertices.size()/2);
            }
            if(chessBoard[i][j] == 'K' || chessBoard[i][j] == 'k'){
                glBindVertexArray(VAOs[4]);
                ourShader.setVec3("ourColor", chessBoard[i][j] == 'K' ? creamColor : brownColor );
                glDrawArrays(GL_TRIANGLES,0, kingVertices.size()/2);
            }
            if(chessBoard[i][j] == 'N' || chessBoard[i][j] == 'n'){
                glBindVertexArray(VAOs[5]);
                ourShader.setVec3("ourColor", chessBoard[i][j] == 'N' ? creamColor : brownColor );
                glDrawArrays(GL_TRIANGLES,0, knightVertices.size()/2);
            }
            if(chessBoard[i][j] == 'Q' || chessBoard[i][j] == 'q'){
                glBindVertexArray(VAOs[6]);
                ourShader.setVec3("ourColor", chessBoard[i][j] == 'Q' ? creamColor : brownColor );
                glDrawArrays(GL_TRIANGLES,0, queenVertices.size()/2);
            }
            if(chessBoard[i][j] == 'R' || chessBoard[i][j] == 'r'){
                glBindVertexArray(VAOs[7]);
                ourShader.setVec3("ourColor", chessBoard[i][j] == 'R' ? creamColor : brownColor );
                glDrawArrays(GL_TRIANGLES,0, rookVertices.size()/2);
            }

            squarePositions.x = squarePositions.x+0.2f;
        }
        squarePositions.y = squarePositions.y + 0.15f;
        squarePositions.z = squarePositions.z - 0.11f;
        squarePositions.x = 0.0f;
    }


//    glBindVertexArray(VAOs[2]);
//    model = glm::mat4(1.0f);
//    //model = glm::translate(model, squarePositions);
//    model =glm::rotate(model, glm::radians(-40.0f), glm::vec3(1.0f, 0.0f, 0.0f));
//    //model = glm::scale(model, glm::vec3(1.2f));
//    ourShader.setMat4("model", model);
//    ourShader.setVec3("ourColor", glm::vec3(1.0f,0.0f,1.0f));
//    glDrawArrays(GL_TRIANGLES,0, pawnVertices.size()/2);

//    glBindVertexArray(VAOs[3]);
//    model = glm::mat4(1.0f);
//    //model = glm::translate(model, squarePositions);
//    model =glm::rotate(model, glm::radians(-40.0f), glm::vec3(1.0f, 0.0f, 0.0f));
//    //model = glm::scale(model, glm::vec3(1.2f));
//    ourShader.setMat4("model", model);
//    ourShader.setVec3("ourColor", glm::vec3(1.0f,0.0f,1.0f));
//    glDrawArrays(GL_TRIANGLES,0, bishopVertices.size()/2);

    lightShader.use();
    lightShader.setMat4("projection", projection);
    lightShader.setMat4("view", view);
    model = glm::mat4(1.0f);
    model =glm::rotate(model, glm::radians(-40.0f), glm::vec3(1.0f, 0.0f, 0.0f));
    model = glm::translate(model, lightPos);
    lightShader.setMat4("model", model);

    //glBindVertexArray(lightCubeVAO);
    // glDrawArrays(GL_TRIANGLES, 0, 36);

    // -------------------------------------------------------------------------------
    glfwSwapBuffers(window);
    glfwPollEvents();
  }

  //std::cout << exec(R"(..\res\stockfish\stockfish.exe position startpos moves e2e4 \\n go depth 10)");

  //std::cout << exec("..\\res\\stockfish\\stockfish.exe position startpos moves e2e4 \ngo depth 10");
    // optional: de-allocate all resources once they've outlived their purpose:
  // ------------------------------------------------------------------------
  glDeleteVertexArrays(8, VAOs);
  glDeleteBuffers(8, VBOs);

  glfwTerminate();
  return 0;
}

// process all input: query GLFW whether relevant keys are pressed/released this
// frame and react accordingly
// ---------------------------------------------------------------------------------------------------------
void processInput(GLFWwindow *window) {
  if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
    glfwSetWindowShouldClose(window, true);
}

void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods){
    if(key == GLFW_KEY_R && action == GLFW_PRESS){
        whiteTurn = false;
        selectedSquare.x = 7.0f;
        selectedSquare.y = 0.0f;
    }
    if (key == GLFW_KEY_RIGHT && action == GLFW_PRESS){
        if(selectedSquare.y < 8)
            selectedSquare.y = selectedSquare.y + 1.0f;
    }
    if(key == GLFW_KEY_LEFT && action == GLFW_PRESS){
        if(selectedSquare.y > 0)
            selectedSquare.y = selectedSquare.y - 1.0f;
    }
    if(key == GLFW_KEY_UP && action == GLFW_PRESS){
        if(selectedSquare.x < 8)
            selectedSquare.x = selectedSquare.x + 1.0f;
    }
    if(key == GLFW_KEY_DOWN && action == GLFW_PRESS){
        if(selectedSquare.x > 0)
            selectedSquare.x = selectedSquare.x -1.0f;
    }
}

// glfw: whenever the window size changed (by OS or user resize) this callback
// function executes
// ---------------------------------------------------------------------------------------------
void framebuffer_size_callback(GLFWwindow *window, int width, int height) {
  // make sure the viewport matches the new window dimensions; note that width
  // and height will be significantly larger than specified on retina displays.
  glViewport(0, 0, width, height);
}

// glfw: whenever the mouse moves, this callback is called
// -------------------------------------------------------
//void mouse_callback(GLFWwindow *window, double xposd, double yposd) {
//  float xpos = static_cast<float>(xposd);
//  float ypos = static_cast<float>(yposd);
//  if (firstMouse) {
//    lastX = xpos;
//    lastY = ypos;
//    firstMouse = false;
//  }
//
//  float xoffset = xpos - lastX;
//  float yoffset =
//      lastY - ypos; // reversed since y-coordinates go from bottom to top
//
//  lastX = xpos;
//  lastY = ypos;
//
//  camera.ProcessMouseMovement(xoffset, yoffset);
//}

// glfw: whenever the mouse scroll wheel scrolls, this callback is called
// ----------------------------------------------------------------------
//void scroll_callback(GLFWwindow *window, double xoffset, double yoffset) {
//  camera.ProcessMouseScroll(static_cast<float>(yoffset));
//}
