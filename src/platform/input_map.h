#ifndef ASPHALT_INPUT_MAP_H
#define ASPHALT_INPUT_MAP_H

#include <windows.h>
#include "core/guest.h"

/* Host-side PC input mapper.  The game menu only exposes an entry point; the
 * actual binding screen is drawn by the host so it works the same on all
 * three engine builds. */
enum {
    HACT_STEER_L, HACT_STEER_R, HACT_BRAKE, HACT_ACCEL,
    HACT_NITRO, HACT_CAMERA, HACT_PAUSE, HACT_COUNT
};
#define HOST_SRC_KEY 1u
#define HOST_SRC_PAD 2u

int  host_game_in_race(void);
int  host_pause_context(void);
void host_input_action(int act, int down, unsigned src);
int  input_map_try_stock_click(int x, int y);

void input_map_init(HWND hwnd);
void input_map_pump(void);
int  input_map_handle_message(HWND hwnd, UINT msg, WPARAM wp, LPARAM lp);
int  input_map_overlay_open(void);
void input_map_draw(void);
void input_map_cover_capture(void);
void input_map_cover_draw(void);
void input_map_toggle(void);

/* Runtime-patch hooks called from GS_CarOptionsControlMenu. */
int  guest_control_menu_label(CPU *cpu);
int  guest_control_menu_action(CPU *cpu);

#endif
