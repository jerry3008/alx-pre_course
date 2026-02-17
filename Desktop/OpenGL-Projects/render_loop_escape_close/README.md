# OpenGL Render Loop with Input and Event Handling (GLFW + GLAD)

This module replaces the temporary delay-based window lifetime with a continuous render loop.
The application stays open until the user closes the window, and supports closing via the Escape key.

---

## Objective

Remove the fixed delay and implement a proper render loop that:

1. Runs continuously while the window should remain open
2. Handles the Escape key to close the window
3. Clears the screen each frame
4. Swaps buffers each frame
5. Polls window events to keep the application responsive

---

## Requirements

Inside the loop:
- Check keyboard input:
  - If Escape is pressed, signal the window to close
- Clear the color buffer each frame
- Swap buffers to display the updated frame
- Poll events to process input and OS window messages

Outside the loop:
- Cleanly destroy the window
- Terminate GLFW

---

## Expected Behavior

- Window remains open indefinitely until closed
- Pressing Escape closes the window
- Background color remains consistently cleared each frame
- No hanging or unresponsive behavior (events are processed)

---

## Key Concepts

- Real-time render loop
- Input handling via GLFW
- Per-frame clearing and buffer swapping
- Event polling for responsiveness
- Proper cleanup order

---

## Notes

- The loop condition should rely on the window close state.
- Clearing and swapping should happen every frame.
- Event polling is required even if you are not actively rendering complex scenes yet.
