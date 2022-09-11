////
//// Created by Simona on 09-Sep-22.
////
//
////
//// Created by Simona on 07-Sep-22.
////
////
//// Created by Simona on 29-May-22.
////
//
////
//// Created by Simona on 29-May-22.
////
//#include <glad/glad.h>
//#include <GLFW/glfw3.h>
//#include <glm/gtc/constants.hpp>
//#include <glm/trigonometric.hpp>
//#include <vector>
//#include <iostream>
//#include "glm/ext/matrix_transform.hpp"
//#include "glm/gtc/type_ptr.hpp"
//
//
//void framebuffer_size_callback(GLFWwindow* window, int width, int height);
//void processInput(GLFWwindow *window);
//bool loadOBJ(
//        const char * path,
//        std::vector < glm::vec3 > & out_vertices
//);
//// settings
//const unsigned int SCR_WIDTH = 800;
//const unsigned int SCR_HEIGHT = 800;
//
//
//static const char *vertexShaderSource = "#version 330 core\n"
//                                        "\n"
//                                        "layout (location = 0) in vec3 aPos;"
//                                        "\n"
//                                        "uniform mat4 model;\n"
//                                        "uniform mat4 view;\n"
//                                        "uniform mat4 projection;"
//                                        "out vec3 ourColor;\n"
//                                        "\n"
//                                        "void main(){\n"
//                                        " gl_Position = projection * view * model * vec4(aPos, 1.0);"
//                                        "\t\n"
//                                        "}";
//static const char *fragmentShaderSource = "#version 330 core\n"
//                                          "out vec4 FragColor;\n"
//                                          "uniform vec4 ourColor;\n"
//                                          "\n"
//                                          "void main(){\n"
//                                          "   FragColor = ourColor;\n"
//                                          "}";
//
//int main()
//{
//    // glfw: initialize and configure
//    // ------------------------------
//    glfwInit();
//    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
//    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
//    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
//
//#ifdef __APPLE__
//    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE); // uncomment this statement to fix compilation on OS X
//#endif
//
//    // glfw window creation
//    // --------------------
//    GLFWwindow* window = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, "LearnOpenGL", nullptr, nullptr);
//    if (window == nullptr)
//    {
//        std::cout << "Failed to create GLFW window" << std::endl;
//        glfwTerminate();
//        return -1;
//    }
//    glfwMakeContextCurrent(window);
//    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);
//
//    // glad: load all OpenGL function pointers
//    // ---------------------------------------
//    if (!gladLoadGLLoader(GLADloadproc(glfwGetProcAddress)))
//    {
//        std::cout << "Failed to initialize GLAD" << std::endl;
//        return -1;
//    }
//
//
//    // build and compile our shader program
//    // ------------------------------------
//    // vertex shader
//    GLuint vertexShader = glCreateShader(GL_VERTEX_SHADER);
//    glShaderSource(vertexShader, 1, &vertexShaderSource, nullptr);
//    glCompileShader(vertexShader);
//    // check for shader compile errors
//    int success;
//    char infoLog[512];
//    glGetShaderiv(vertexShader, GL_COMPILE_STATUS, &success);
//    if (!success)
//    {
//        glGetShaderInfoLog(vertexShader, 512, nullptr, infoLog);
//        std::cout << "ERROR::SHADER::VERTEX::COMPILATION_FAILED\n" << infoLog << std::endl;
//    }
//    // fragment shader
//    GLuint fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
//    glShaderSource(fragmentShader, 1, &fragmentShaderSource, nullptr);
//    glCompileShader(fragmentShader);
//    // check for shader compile errors
//    glGetShaderiv(fragmentShader, GL_COMPILE_STATUS, &success);
//    if (!success)
//    {
//        glGetShaderInfoLog(fragmentShader, 512, nullptr, infoLog);
//        std::cout << "ERROR::SHADER::FRAGMENT::COMPILATION_FAILED\n" << infoLog << std::endl;
//    }
//    // link shaders
//    GLuint shaderProgram = glCreateProgram();
//    glAttachShader(shaderProgram, vertexShader);
//    glAttachShader(shaderProgram, fragmentShader);
//    glLinkProgram(shaderProgram);
//    // check for linking errors
//    glGetProgramiv(shaderProgram, GL_LINK_STATUS, &success);
//    if (!success) {
//        glGetProgramInfoLog(shaderProgram, 512, nullptr, infoLog);
//        std::cout << "ERROR::SHADER::PROGRAM::LINKING_FAILED\n" << infoLog << std::endl;
//    }
//    glDeleteShader(vertexShader);
//    glDeleteShader(fragmentShader);
//
//    // set up vertex data (and buffer(s)) and configure vertex attributes
//    // ------------------------------------------------------------------
//    std::vector< glm::vec3 > front;
//    front.push_back(glm::vec3(-0.8f, -0.8f,  0.11f));
//    front.push_back(glm::vec3(-0.6f, -0.8f,  0.11f));
//    front.push_back(glm::vec3( -0.6f,  -0.6f,  0.11f));
//    front.push_back(glm::vec3( -0.6f,  -0.6f,  0.11f));
//    front.push_back(glm::vec3( -0.8f,  -0.6f,  0.11f));
//    front.push_back(glm::vec3( -0.8f, -0.8f,  0.11f));
//
//    std::vector< glm::vec3 > vertices;
//
//
//
//
//
//
//
//
//    std::vector< glm::vec3 > normals;
//    bool res = loadOBJ("C:\\Users\\Simona\\Desktop\\rook.obj", normals);
//
//    unsigned int VBOs[2], VAOs[2];
//    glGenVertexArrays(2, VAOs); // we can also generate multiple VAOs or buffers at the same time
//    glGenBuffers(2, VBOs);
//    // one of the logo
//    // --------------------
//    glBindVertexArray(VAOs[0]);
//    glBindBuffer(GL_ARRAY_BUFFER, VBOs[0]);
//    glBufferData(GL_ARRAY_BUFFER, vertices.size() * sizeof(glm::vec3), &vertices[0], GL_STATIC_DRAW);
//
//
//    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);	// Vertex attributes stay the same
//    glEnableVertexAttribArray(0);
//    // glBindVertexArray(0); // no need to unbind at all as we directly bind a different VAO the next few lines
//    // zero of the logo
//    // ---------------------
//    glBindVertexArray(VAOs[1]);	// note that we bind to a different VAO now
//    glBindBuffer(GL_ARRAY_BUFFER, VBOs[1]);	// and a different VBO
//    glBufferData(GL_ARRAY_BUFFER, front.size()  * sizeof(glm::vec3), &front[0], GL_STATIC_DRAW);
//    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 0, (void*)0); // because the vertex data is tightly packed we can also specify 0 as the vertex attribute's stride to let OpenGL figure it out
//    glEnableVertexAttribArray(0);
//    // glBindVertexArray(0); // not really necessary as well, but beware of calls that could affect VAOs while this one is bound (like binding element buffer objects, or enabling/disabling vertex attributes)
//
//
//    //glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
//
//    glEnable(GL_DEPTH_TEST);
//    while (!glfwWindowShouldClose(window))
//    {
//        // input
//        // -----
//        processInput(window);
//        // render
//        // ------
//        glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
//        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//
//
//        // draw
//        glUseProgram(shaderProgram);
//        glm::mat4 model = glm::mat4(1.0f);
//        glm::mat4 view = glm::mat4(1.0f);
//        glm::mat4 projection = glm::mat4(1.0f);
//        //model =glm::rotate(model,   glm::radians(-40.0f),glm::vec3(1.0f, 0.0f, 0.0f));
////        glm::vec3 squarePositions= glm::vec3(-0.55f,-0.3f,0.85f);
////        model = glm::translate(model, squarePositions);
//        model =glm::rotate(model, glm::radians(-40.0f), glm::vec3(1.0f, 0.0f, 0.0f));
//        view = glm::translate(view, glm::vec3(0.0f, 0.0f, -3.0f));
//        projection =
//                glm::perspective(glm::radians(45.0f),
//                                 (float)SCR_WIDTH / (float)SCR_HEIGHT, 0.1f, 100.0f);
//        // retrieve the matrix uniform locations
//        unsigned int modelLoc = glGetUniformLocation(shaderProgram, "model");
//        unsigned int viewLoc = glGetUniformLocation(shaderProgram,"view");
//        unsigned int projectionLoc = glGetUniformLocation(shaderProgram, "projection");
//        // pass them to the shaders (3 different ways)
//        glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));
//        glUniformMatrix4fv(viewLoc, 1, GL_FALSE, &view[0][0]);
//        glUniformMatrix4fv(projectionLoc,1,GL_FALSE, &projection[0][0]);
//
//
//        glBindVertexArray(VAOs[0]);
//        int vertexColorLocation = glGetUniformLocation(shaderProgram, "ourColor");
//        glUniform4f(vertexColorLocation, 0.192f, 0.192f, 0.514f, 1.0f);
//        glDrawArrays(GL_TRIANGLES, 0, vertices.size());
//
//        glBindVertexArray(VAOs[1]);
//        model = glm::mat4(1.0f);
//        model =glm::rotate(model, glm::radians(-40.0f), glm::vec3(1.0f, 0.0f, 0.0f));
//        glUniformMatrix4fv(modelLoc, 1, GL_FALSE, glm::value_ptr(model));
//        vertexColorLocation = glGetUniformLocation(shaderProgram, "ourColor");
//        glUniform4f(vertexColorLocation, 1.0f, 1.0f, 1.0f, 1.0f);
//        glDrawArrays(GL_TRIANGLES,0,front.size());
//
//
////        glBindVertexArray(VAOs[1]);
////        glUniform4f(vertexColorLocation,0.165f,0.58f,0.82f,1.0f);
////        glDrawArrays(GL_TRIANGLE_STRIP,0,front.size()/3);
//
//        // glfw: swap buffers and poll IO events (keys pressed/released, mouse moved etc.)
//        // -------------------------------------------------------------------------------
//        glfwSwapBuffers(window);
//        glfwPollEvents();
//    }
//
//    // optional: de-allocate all resources once they've outlived their purpose:
//    // ------------------------------------------------------------------------
//    glDeleteVertexArrays(2, VAOs);
//    glDeleteBuffers(2, VBOs);
//
//    // glfw: terminate, clearing all previously allocated GLFW resources.
//    // ------------------------------------------------------------------
//    glfwTerminate();
//    return 0;
//}
//
//
//// process all input: query GLFW whether relevant keys are pressed/released this frame and react accordingly
//// ---------------------------------------------------------------------------------------------------------
//void processInput(GLFWwindow *window)
//{
//    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
//        glfwSetWindowShouldClose(window, true);
//
//}
//
//// glfw: whenever the window size changed (by OS or user resize) this callback function executes
//// ---------------------------------------------------------------------------------------------
//void framebuffer_size_callback(GLFWwindow* window, int width, int height)
//{
//    // make sure the viewport matches the new window dimensions; note that width and
//    // height will be significantly larger than specified on retina displays.
//    glViewport(0, 0, width, height);
//}
//
//
//bool loadOBJ(const char * path,std::vector < glm::vec3 > & out_vertices) {
//    std::vector< unsigned int > vertexIndices, uvIndices, normalIndices;
//    std::vector< glm::vec3 > temp_vertices;
//    std::vector< glm::vec2 > temp_uvs;
//    std::vector< glm::vec3 > temp_normals;
//    std::cout<<path<<std::endl;
//    FILE *file = fopen(path, "r");
//    if (file == NULL) {
//        printf("Impossible to open the file !\n");
//        return false;
//    }
//    while (1) {
//
//        char lineHeader[128];
//        // read the first word of the line
//        int res = fscanf(file, "%s", lineHeader);
//        if (res == EOF)
//            break; // EOF = End Of File. Quit the loop.
//
//        // else : parse lineHeader
//        if (strcmp(lineHeader, "v") == 0) {
//            glm::vec3 vertex;
//            fscanf(file, "%f %f %f\n", &vertex.x, &vertex.y, &vertex.z);
//            temp_vertices.push_back(vertex);
//        }else if ( strcmp( lineHeader, "vn" ) == 0 ){
//            glm::vec3 normal;
//            fscanf(file, "%f %f %f\n", &normal.x, &normal.y, &normal.z );
//            temp_normals.push_back(normal);
//        } else if ( strcmp( lineHeader, "f" ) == 0 ){
//            std::string vertex1, vertex2, vertex3;
//            unsigned int vertexIndex[4], normalIndex[4];
//            int matches = fscanf(file, "%d//%d %d//%d %d//%d %d//%d\n",
//                                 &vertexIndex[0], &normalIndex[0],
//                                 &vertexIndex[1], &normalIndex[1],
//                                 &vertexIndex[2], &normalIndex[2],
//                                 &vertexIndex[3], &normalIndex[3]);
//            if (matches != 8){
//                printf("File can't be read by our simple parser : ( Try exporting with other options\n");
//                return false;
//            }
//            vertexIndices.push_back(vertexIndex[0]);
//            vertexIndices.push_back(vertexIndex[1]);
//            vertexIndices.push_back(vertexIndex[2]);
//            vertexIndices.push_back(vertexIndex[3]);
//
//            normalIndices.push_back(normalIndex[0]);
//            normalIndices.push_back(normalIndex[1]);
//            normalIndices.push_back(normalIndex[2]);
//            normalIndices.push_back(normalIndex[3]);
//        }
//    }
//    // For each vertex of each triangle
//    //vertices.push_back(glm::vec3(  -0.04f,0.04f,-0.04f));
//    for( unsigned int i=0; i<=vertexIndices.size()-4; i+=4 ){
//        unsigned int vertexIndex = vertexIndices[i];
//        unsigned int vertexIndex1 = vertexIndices[i+1];
//        unsigned int vertexIndex2 = vertexIndices[i+2];
//        unsigned int vertexIndex3 = vertexIndices[i+3];
//
//        unsigned int normalIndex = normalIndices[i];
//        unsigned int normalIndex1 = normalIndices[i+1];
//        unsigned int normalIndex2 = normalIndices[i+2];
//        unsigned int normalIndex3 = normalIndices[i+3];
//
//        if (vertexIndex3 == 0){
//            glm::vec3 vertex = temp_vertices[ vertexIndex-1 ];
//            glm::vec3 vertex1 = temp_vertices[ vertexIndex1-1 ];
//            glm::vec3 vertex2 = temp_vertices[ vertexIndex2-1 ];
//
//            glm::vec3 normal = temp_normals [normalIndex-1];
//            glm::vec3 normal1 = temp_normals [normalIndex1-1];
//            glm::vec3 normal2 = temp_normals [normalIndex2-1];
//
//            std::cout<<"vertices.push_back(glm::vec3( "<<vertex.x<<"f, "<<vertex.y<<"f, "<<vertex.z<<"f));"<<std::endl;
//            std::cout<<"vertices.push_back(glm::vec3( "<<normal.x<<"f, "<<normal.y<<"f, "<<normal.z<<"f));"<<std::endl;
//
//            std::cout<<"vertices.push_back(glm::vec3( "<<vertex1.x<<"f, "<<vertex1.y<<"f, "<<vertex1.z<<"f));"<<std::endl;
//            std::cout<<"vertices.push_back(glm::vec3( "<<normal1.x<<"f, "<<normal1.y<<"f, "<<normal1.z<<"f));"<<std::endl;
//
//            std::cout<<"vertices.push_back(glm::vec3( "<<vertex2.x<<"f, "<<vertex2.y<<"f, "<<vertex2.z<<"f));"<<std::endl;
//            std::cout<<"vertices.push_back(glm::vec3( "<<normal2.x<<"f, "<<normal2.y<<"f, "<<normal2.z<<"f));"<<std::endl;
//            std::cout<<std::endl;
//        }
//        else{
//
//            glm::vec3 vertex = temp_vertices[ vertexIndex-1 ];
//            glm::vec3 vertex1 = temp_vertices[ vertexIndex1-1 ];
//            glm::vec3 vertex2 = temp_vertices[ vertexIndex2-1 ];
//            glm::vec3 vertex3 = temp_vertices[ vertexIndex3-1 ];
//
//            glm::vec3 normal = temp_normals [normalIndex-1];
//            glm::vec3 normal1 = temp_normals [normalIndex1-1];
//            glm::vec3 normal2 = temp_normals [normalIndex2-1];
//            glm::vec3 normal3 = temp_normals [normalIndex3-1];
//
//            std::cout<<"vertices.push_back(glm::vec3( "<<vertex.x<<"f, "<<vertex.y<<"f, "<<vertex.z<<"f));"<<std::endl;
//            std::cout<<"vertices.push_back(glm::vec3( "<<normal.x<<"f, "<<normal.y<<"f, "<<normal.z<<"f));"<<std::endl;
//
//            std::cout<<"vertices.push_back(glm::vec3( "<<vertex1.x<<"f, "<<vertex1.y<<"f, "<<vertex1.z<<"f));"<<std::endl;
//            std::cout<<"vertices.push_back(glm::vec3( "<<normal1.x<<"f, "<<normal1.y<<"f, "<<normal1.z<<"f));"<<std::endl;
//
//            std::cout<<"vertices.push_back(glm::vec3( "<<vertex2.x<<"f, "<<vertex2.y<<"f, "<<vertex2.z<<"f));"<<std::endl;
//            std::cout<<"vertices.push_back(glm::vec3( "<<normal2.x<<"f, "<<normal2.y<<"f, "<<normal2.z<<"f));"<<std::endl;
//
//            std::cout<<"vertices.push_back(glm::vec3( "<<vertex2.x<<"f, "<<vertex2.y<<"f, "<<vertex2.z<<"f));"<<std::endl;
//            std::cout<<"vertices.push_back(glm::vec3( "<<normal2.x<<"f, "<<normal2.y<<"f, "<<normal2.z<<"f));"<<std::endl;
//
//            std::cout<<"vertices.push_back(glm::vec3( "<<vertex3.x<<"f, "<<vertex3.y<<"f, "<<vertex3.z<<"f));"<<std::endl;
//            std::cout<<"vertices.push_back(glm::vec3( "<<normal3.x<<"f, "<<normal3.y<<"f, "<<normal3.z<<"f));"<<std::endl;
//
//            std::cout<<"vertices.push_back(glm::vec3( "<<vertex.x<<"f, "<<vertex.y<<"f, "<<vertex.z<<"f));"<<std::endl;
//            std::cout<<"vertices.push_back(glm::vec3( "<<normal.x<<"f, "<<normal.y<<"f, "<<normal.z<<"f));"<<std::endl;
//            std::cout<<std::endl;
//        }
////        //std::cout<<i<<": "<<i+1<<": "<<i+2<<": "<<i+3<<std::endl;
//        //std::cout<<i<<": "<<vertex.x<<", "<<vertex.y<<", "<<vertex.z<<std::endl;
//    }
//}