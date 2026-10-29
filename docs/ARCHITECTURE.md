# Architecture

## Goal

Run the original ARMv7 game code as native x86-64. The ARM instructions are
translated to C at build time; the runtime does not execute ARM code.

## Pipeline

```
libasphalt5.so
  -> pyelftools: sections, symbols, relocations, init_array, PLT
  -> armrecomp.py: Capstone recursive decode (ARM, Thumb-2, VFPv2)
  -> generated/functions_*.c + table.c + import/PLT tables
  -> CMake + Ninja + MinGW-w64
  -> Asphalt5.exe
```

Current output: 6,802 functions, 903,832 instructions, split over 89 C files.

## Guest memory

`src/core/guest.c` reserves one 4 GiB region. Guest pointers are 32-bit offsets
into that region, so the original structs, vtables and pointer arithmetic keep
working.

| Range | Use |
|---|---|
| `0x00000000-0x01000000` | ELF image, headers, BSS |
| `0x10000000-0x40000000` | guest heap |
| `0x70000000-0x70010000` | JNI environment and import objects |
| `0x71000000+` | synthetic import stubs |
| `0x72000000+` | synthetic JNI stubs |
| `0xb0000000-0xc0000000` | guest stacks |

The heap uses a locked size-class free list so scene changes can reuse memory.
Installed builds append the user's ELF to the executable; repository builds
load it from `original/apk/`.

## Generated code

Each guest function becomes one C function:

```c
/* _ZN5Scene6RenderEv @ 000dbe60 (arm) */
void fn_000dbe60(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000dbe60:;
    /* translated instructions */
}
```

Direct branches become labels or tail calls. Indirect calls use
`guest_call()`. Imports use `imp_<name>` veneers. `generated/table.c` maps
guest addresses to functions.

The translator is split into ~500 KB units under `generated/`. They are
compiled in parallel and keep editors usable. Do not edit them by hand.

## Host layers

- `src/core/guest.c` - CPU state, 4 GiB memory, ELF loader, guest heap, abort
  reporting.
- `src/core/imports.c` - libc/libm/libstdc++/ELF imports and guest callbacks.
- `src/core/jni.c` - Android JNI environment for resource, file, billing and
  lifecycle calls.
- `src/platform/win32.c` - window, input, timing, crashes, input mapping.
- `src/platform/audio.c` - engine vox mixer to WinMM, Ogg music and voices.
- `src/platform/movie.c` - Media Foundation H.264 playback.
- `src/gl/` - OpenGL ES 1.x compatibility layer on desktop OpenGL.
- `src/main.c` - boot flow, frame loop, camera filter, diagnostics.

## Timing

The engine keeps its original 25 Hz fixed-step physics. Rendering is unlocked.
The final camera view matrix is smoothed over real time so steering remains
stable at high frame rates; physics is not changed.

## Rendering

The engine's layout stays at 854x480 logical pixels. `glViewport` and
`glScissor` scale that canvas to the client area (1920x1080 by default). 3D
geometry is rasterized at the real resolution; HUD sprites keep the original
layout.

## Input

Keyboard events go through `notifyKeyPressed` / `notifyKeyReleased` to
`Game::InputKeyBoard`. Mouse clicks use the engine's touch path. During a race
the port forces the buttons control mode and maps mouse zones and gamepad
buttons to the same GamePad bits as the on-screen HUD.

Race actions are tracked per device (`KEY`, `PAD`, `MOUSE`) and re-asserted in
the engine's current GamePad word each frame so chords survive engine state
updates. See [CONTROLS.md](CONTROLS.md).
