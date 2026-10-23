// input.h - PC input for the Asphalt 5 recomp (keyboard + mouse).
#ifndef A5_INPUT_H
#define A5_INPUT_H

#include <stdint.h>

// Host services the input module needs from a5host.c.
typedef uint32_t (*a5_call_fn)(uint32_t fn, const uint32_t* args, int nargs);
typedef uint32_t (*a5_rd32_fn)(uint32_t addr);
typedef void     (*a5_wr32_fn)(uint32_t addr, uint32_t val);
typedef int      (*a5_poll_fn)(int* type, int* x, int* y);
typedef void     (*a5_size_fn)(int* w, int* h);
typedef const char* (*a5_state_fn)(void);
typedef uint32_t    (*a5_state_ptr_fn)(void);

void a5input_init(a5_call_fn call, a5_rd32_fn rd32, a5_wr32_fn wr32,
                  a5_poll_fn poll, a5_size_fn size, a5_state_fn state, a5_state_ptr_fn state_ptr,
                  uint32_t env_table, int screen_w, int screen_h);
void a5input_frame(int frame);
int  a5input_paused(void);

#endif
