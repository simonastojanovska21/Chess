#include <OpenGLPrj.hpp>

#include <GLFW/glfw3.h>

#include <Camera.hpp>
#include <Shader.hpp>

#include <iostream>
#include <string>
#include <vector>
#include "Board.hpp"

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

  Shader ourShader(shader_location + used_shaders + std::string(".vert"),
                   shader_location + used_shaders + std::string(".frag"));

  Board* board = new Board();
  std::vector<glm::vec3> boardVertices = board->getBoardCoordinates();
  std::vector<glm::vec3> boardSquareVertices = board->getBoardSquareCoordinates();


  unsigned int VBOs[2], VAOs[2], EBO;
  glGenVertexArrays(2, VAOs); // we can also generate multiple VAOs or buffers at the same time
  glGenBuffers(2, VBOs);
  glGenBuffers(1, &EBO);

  //Buffers for chess board
  glBindVertexArray(VAOs[0]);
  glBindBuffer(GL_ARRAY_BUFFER, VBOs[0]);
  glBufferData(GL_ARRAY_BUFFER, sizeof(boardVertices) * boardVertices.size(),&boardVertices[0],  GL_STATIC_DRAW);
  glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, (void*)0);
  glEnableVertexAttribArray(0);

  //Buffers for chess square
  glBindVertexArray(VAOs[1]);
  glBindBuffer(GL_ARRAY_BUFFER, VBOs[1]);
  glBufferData(GL_ARRAY_BUFFER, sizeof(boardSquareVertices)*boardSquareVertices.size(), &boardSquareVertices[0], GL_STATIC_DRAW);
  glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, (void*)0);
  glEnableVertexAttribArray(0);

  // -------------------------------------------------------------------------------------------
  ourShader.use();

  // render loop
  // -----------
  while (!glfwWindowShouldClose(window)) {

    // input
    // -----
    processInput(window);

    // render
    // ------
    glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    ourShader.use();

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
    ourShader.setVec4("ourColor", glm::vec4(0.333f,0.333f,0.333f, 1.0f));
    glDrawArrays(GL_TRIANGLES, 0, 36);

    //Drawing the squares on the board

    glBindVertexArray(VAOs[1]);
    glm::vec3 squarePositions= glm::vec3(0.0f,0.0f,0.0f);
    for(int i=0;i<8;i++){
        for(int j=0;j<8;j++){
            glm::mat4 model = glm::mat4(1.0f);
            model = glm::translate(model, squarePositions);
            model =glm::rotate(model, glm::radians(-40.0f), glm::vec3(1.0f, 0.0f, 0.0f));
            ourShader.setMat4("model", model);

            if(i==selectedSquare.x && j==selectedSquare.y)
                ourShader.setVec4("ourColor", glm::vec4(1.0f,0.0f,0.0f, 1.0f));
            else if( (i+j) % 2 == 0 )
                ourShader.setVec4("ourColor", glm::vec4(0.0f,0.0f,0.0f, 1.0f));
            else
                ourShader.setVec4("ourColor", glm::vec4(1.0f,1.0f,1.0f, 1.0f));
            glDrawArrays(GL_TRIANGLES, 0,6);
            squarePositions.x = squarePositions.x+0.2f;
        }
        squarePositions.y = squarePositions.y + 0.15f;
        squarePositions.z = squarePositions.z - 0.11f;
        squarePositions.x = 0.0f;
    }



    // -------------------------------------------------------------------------------
    glfwSwapBuffers(window);
    glfwPollEvents();
  }

  //std::cout << exec(R"(..\res\stockfish\stockfish.exe position startpos moves e2e4 \\n go depth 10)");

  //std::cout << exec("..\\res\\stockfish\\stockfish.exe position startpos moves e2e4 \ngo depth 10");
    // optional: de-allocate all resources once they've outlived their purpose:
  // ------------------------------------------------------------------------
  glDeleteVertexArrays(1, VAOs);
  glDeleteBuffers(1, VBOs);

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
