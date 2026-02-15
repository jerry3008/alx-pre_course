# GLFW Window Creation (OpenGL 4.5 Core Profile)

This module builds on GLFW initialization and configures an OpenGL 4.5 core profile context.
It creates an 800x600 window and includes proper error handling and cleanup.

## Objective

Implement the following steps in `main()`:

1. Set GLFW window hints:
   - OpenGL major version: 4
   - OpenGL minor version: 5
   - Core profile
2. Create a window:
   - Width: 800
   - Height: 600
   - Title: "OpenGL Window"
3. Check if window creation fails
4. If it fails:
   - Print an error message
   - Call `glfwTerminate()`
   - Return a non-zero error code
5. If successful:
   - Properly terminate GLFW
   - Return 0


## Expected Behavior

When executed successfully:

- A window appears briefly
- The program exits immediately
- No crashes or resource leaks occur

If something fails:

- An error message is printed
- The program exits safely


## Key Concepts

- GLFW window hints
- OpenGL context version configuration
- Core profile selection
- Defensive programming
- Resource cleanup


## Build Example (Linux)

```bash
g++ main.cpp -lglfw -lGL -o app
./app
