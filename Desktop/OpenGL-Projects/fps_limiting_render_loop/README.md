# FPS Limiting Render Loop (GLFW + OpenGL)

This module implements frame rate limiting using a simple timing check within the render loop.
The application targets 30 FPS using a target frame time and skips rendering when frames occur too early, while still processing input and window events.

---

## Objective

Implement core FPS limiting logic by:

1. Getting the current time each loop iteration using a GLFW timing function
2. Comparing elapsed time against `TARGET_FRAME_TIME`
3. Skipping rendering if not enough time has passed, but still polling events
4. Rendering only when the frame time condition is met
5. Updating the timing reference variable when rendering occurs

---

## Requirements

- Use `glfwGetTime()` to get the current time
- Maintain a timing variable (e.g., last frame time or last render time)
- If elapsed time is less than `TARGET_FRAME_TIME`:
  - Do not render
  - Still process input and events
- If enough time has passed:
  - Clear the screen
  - Swap buffers
  - Update the timing variable

---

## Expected Behavior

- The application remains responsive (events are processed continuously)
- Rendering is limited to approximately 30 FPS
- CPU/GPU usage decreases compared to an unlimited render loop
- Visual output remains stable and smooth

---

## Key Concepts

- Frame timing and throttling
- Using `TARGET_FRAME_TIME` to control frequency of rendering
- Separating event processing from rendering frequency
- Manual FPS control with V-Sync disabled

---

## Notes

- This approach limits rendering frequency but does not sleep; it relies on skipping frames.
- A future improvement is adding sleep-based frame pacing for better CPU efficiency.
