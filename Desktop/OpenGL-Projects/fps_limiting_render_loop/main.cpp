#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>

const float TARGET_FPS = 30.0f;
const float TARGET_FRAME_TIME = 1.0f / TARGET_FPS;

void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
    glViewport(0, 0, width, height);
}

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
    
    glfwMakeContextCurrent(window);

    if (!gladLoadGLLoader((GLADloadproc) glfwGetProcAddress))
    {
        std::cerr << "Failed to init GLAD\n";
        glfwTerminate();
        return -1;
    }
    
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);
    
    glfwSwapInterval(0);
    
    glClearColor(0.1f, 0.1f, 0.1f, 1.0f);

    float lastRenderTime = 0.0f;

    while (!glfwWindowShouldClose(window))
    {
        float currentTime = (float)glfwGetTime();
        
        if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
            glfwSetWindowShouldClose(window, true);
        
        if (currentTime - lastRenderTime < TARGET_FRAME_TIME)
        {
            glfwPollEvents();
            continue ;
        } 
        
        lastRenderTime = currentTime;
            
        glClear(GL_COLOR_BUFFER_BIT);

        glfwSwapBuffers(window);
        glfwPollEvents();
    }
    glfwDestroyWindow(window);
    glfwTerminate();
    return 0;
}