#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>

int main()
{
    if (!glfwInit())
    {
        std::cerr << "GLFW init failed\n";
        return -1;
    }
    
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 5);
    glfwWindowHint(GLFW_OPENGL_PROFILE,GLFW_OPENGL_CORE_PROFILE);
    
    
    GLFWwindow *window = glfwCreateWindow( 800, 600, "OpenGL Window", nullptr, nullptr);
    
    if(!window)
    {
        std::cerr<<"Window Creation Failed \n";
        glfwTerminate();
        return -1;
    }
    

    
    glfwTerminate();
    return 0;
}