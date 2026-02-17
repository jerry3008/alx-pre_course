# GLAD Loading and Clear Color Test (OpenGL 4.5)

This module integrates GLAD into the GLFW-based OpenGL setup to load OpenGL function pointers.
After successfully loading GLAD, the program clears the window to a cyan color to confirm OpenGL functions are working.

---

## Objective

After creating a window and making the OpenGL context current:

1. Initialize GLAD to load OpenGL function pointers
2. Add error handling if GLAD fails to initialize:
   - Print an error message
   - Destroy the window if needed
   - Terminate GLFW
   - Return a non-zero error code
3. Verify OpenGL is working by:
   - Setting the clear color to cyan (0.0f, 1.0f, 1.0f)
   - Clearing the color buffer
   - Swapping buffers to display the result
4. Keep the window visible for 2 seconds before exiting

---

## Expected Behavior

When executed successfully:

- A window appears with a cyan background
- The window stays visible for about 2 seconds
- The program exits cleanly with proper cleanup

If GLAD fails to load:

- An error message is printed
- The program cleans up resources and exits with a non-zero code

---

## Key Concepts

- GLAD function pointer loading
- OpenGL function availability depends on context + loader
- Clear color and buffer clearing
- Buffer swapping for displaying rendered output
- Correct cleanup order:
  1. Destroy window
  2. Terminate GLFW

---

## Notes

- GLAD initialization must occur after making the OpenGL context current.
- This module prepares the foundation for viewport setup, render loops, and shaders.