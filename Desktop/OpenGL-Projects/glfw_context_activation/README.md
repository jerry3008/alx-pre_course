# GLFW Context Activation and Window Lifetime (OpenGL 4.5)

This module builds on window creation and activates the OpenGL context.
It ensures the window remains visible for a short period before closing.

---

## Objective

Extend the program to:

1. Make the OpenGL context current after window creation
2. Add a 2-second delay so the window remains visible
3. Properly destroy the window before terminating GLFW

---

## Required Steps

- Call the function to make the OpenGL context current
- Add a 2-second pause (for example, using sleep or time-based delay)
- Destroy the created window before calling `glfwTerminate()`
- Maintain proper error handling

---

## Expected Behavior

When executed successfully:

- A window appears
- It stays open for 2 seconds
- The window closes cleanly
- The program exits without errors

---

## Key Concepts

- OpenGL context activation
- Resource lifecycle management
- Controlled program delay
- Proper cleanup sequence:
  1. Destroy window
  2. Terminate GLFW

---

## Notes

- The context must be made current before issuing any OpenGL commands.
- Always destroy created resources explicitly.
- This step prepares the foundation for adding rendering and event loops.
