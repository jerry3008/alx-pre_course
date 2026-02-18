# Viewport Resize Callback (GLFW + GLAD)

This module adds support for window resizing by updating the OpenGL viewport whenever the window dimensions change.

---

## Objective

Implement proper resize handling by:

1. Creating a framebuffer size callback function
2. Calling `glViewport(0, 0, width, height)` inside the callback
3. Registering the callback with GLFW so it triggers on resize events

---

## Requirements

- Define a callback function compatible with GLFW framebuffer callbacks
- Inside the callback:
  - Update the OpenGL viewport using the new width and height
- Register the callback after creating the window
- Ensure the render loop continues to function normally

---

## Expected Behavior

- Resizing the window updates the OpenGL rendering area automatically
- Future rendering remains correctly scaled and not clipped
- The application remains responsive during resizing

---

## Key Concepts

- Framebuffer size vs window size
- GLFW callbacks
- OpenGL viewport management with `glViewport`
- Resize-safe rendering foundations

---

## Notes

- Use the framebuffer resize callback (not just window size) to handle high-DPI displays correctly.
- The viewport should always match the framebuffer dimensions for correct rendering.
