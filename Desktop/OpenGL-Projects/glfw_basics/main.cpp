#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>

int main()
{
    if(!glfwInit())
    {
        std::cerr<<"Glfw init failed \n";
        return -1;
    }
    glfwTerminate();
    return 0;
}