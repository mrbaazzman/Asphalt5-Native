// a5gl.h - GLES1 -> desktop OpenGL bridge for the native host.
#pragma once
#include <stdint.h>
#include "ucapi.h"

int      a5gl_init(uc_engine* uc, int w, int h, const char* title);
uint32_t a5gl_call(const char* name, const uint32_t* raw, uint32_t lr);
void     a5gl_swap(void);
int      a5gl_poll(void);           // returns 0 when the window was closed
void     a5gl_state_invalidate(void);  // reset the state shadow after raw-GL screens (installer/movie)
void     a5gl_state_restore(void);     // re-apply the engine's cached state after a raw-GL movie
int      a5gl_poll_input(int* type, int* x, int* y);  // 0=none, 1=event
void     a5gl_screenshot_bmp(const char* path);
void     a5gl_probe_pixels(void);
void     a5gl_dump_stats(void);
uint32_t a5gl_last_bound_emu(void);
void     a5gl_set_frame(int f);
extern int a5gl_ui_dump_frame;
// optional direct-memory resolver set by the host (emulated regions backed by
// host buffers): returns the host pointer for an emulated address or NULL.
extern uint8_t* (*a5gl_mem_direct)(uint64_t addr);
void     a5gl_client_size(int* w, int* h);
void     a5gl_pause_overlay(int on);
void     a5gl_request_close(void);   // SH_EXIT: close the window / stop the loop
void     a5gl_pump(void);             // service the message queue during long load calls
void     a5gl_set_title_progress(int pct);  // pct < 0 restores the normal title
void     a5gl_set_title_text(const char* s);
