# FPS Limiting Foundation (GLFW + OpenGL)

This module establishes the foundational constants and configuration required for frame rate limiting in an OpenGL application.

---

## Objective

1. Define two constants at the top of the file (after includes):

   - TARGET_FPS = 30.0f
   - TARGET_FRAME_TIME = 1.0f / TARGET_FPS

2. Disable V-Sync by setting the swap interval to 0 after the OpenGL context is made current.

---

## Why This Matters

Frame rate limiting requires:

- A target frame rate (FPS)
- A calculated frame duration in seconds
- Manual control over buffer swapping timing

By disabling V-Sync, the application is no longer locked to the monitor's refresh rate, allowing full control over frame timing logic.

---

## Key Concepts

- FPS (Frames Per Second)
- Frame time (seconds per frame)
- Relationship:
  
  TARGET_FRAME_TIME = 1 / TARGET_FPS

- V-Sync (vertical synchronization)
- Swap interval control

---

## Expected Behavior

- Application runs without V-Sync
- Frame timing constants are defined and ready
- No actual frame limiting logic is implemented yet (foundation only)

---

## Notes

- The swap interval must be set after making the OpenGL context current.
- This module prepares the codebase for implementing actual frame timing logic in the next lesson.
- Disabling V-Sync allows manual frame pacing.
