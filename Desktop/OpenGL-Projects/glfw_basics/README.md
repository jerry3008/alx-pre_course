# GLFW Initialization Foundation (C++ / OpenGL)

This module implements the foundational setup for an OpenGL application using GLFW.

The goal is to properly initialize the GLFW library and establish correct error handling from the beginning.

---

## Objective

Implement the `main()` function to:

- Initialize GLFW using `glfwInit()`
- Check whether initialization succeeds
- Print an error message if initialization fails
- Return a non-zero exit code on failure
- Properly terminate GLFW using `glfwTerminate()`
- Return success (0) when initialization completes correctly

---

## Why This Matters

GLFW initialization is the first step in any OpenGL application.
Proper error handling ensures:

- Stable program behavior
- Easier debugging
- Clean resource management
- Safe program shutdown

This pattern will be reused in future OpenGL projects.

---

## Expected Behavior

- If `glfwInit()` fails:
  - Print an error message
  - Exit with non-zero return code
- If initialization succeeds:
  - Clean up using `glfwTerminate()`
  - Return 0

---

## Debugging

If initialization fails, check:

- `OpenGL.log` in the project root
- Installed GPU drivers
- Proper GLFW installation
- Linking configuration

---

## Build Example (Linux)

```bash
g++ main.cpp -lglfw -lGL -o app
./app
