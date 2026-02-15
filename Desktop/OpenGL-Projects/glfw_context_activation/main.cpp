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
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    GLFWwindow *window = glfwCreateWindow(800, 600, "OpenGL Window", nullptr, nullptr);
    if (!window)
    {
        std::cerr << "Window creation failed\n";
        glfwTerminate();
        return -1;
    }
    
    // TODO: Make the OpenGL context current
    glfwMakeContextCurrent(window);
    if(!gladLoadGLLoader((GLADloadproc) glfwGetProcAddress))
    {
        std::cerr<<"failed to init Glad \n";
        glfwTerminate();
        return -1;
    }
    
    // TODO: Keep the window open for 2 seconds to verify it's working
    
   
    double start = glfwGetTime();
    while (glfwGetTime() - start < 2.0) 
    {
         /* do nothing */ 
    }
    glfwDestroyWindow(window);
    // TODO: Destroy the window before terminating GLFW
    glfwTerminate();
    return 0;
}