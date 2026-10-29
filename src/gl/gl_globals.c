/* Shared GL/platform state.
 *
 * These variables used to live at the top of the monolithic gles1.c.  They are
 * collected here so the behaviour modules (gl_state.c, gl_texture.c, ...) can
 * stay small and focused.  Declarations are in gl_internal.h; nothing else
 * should define these names.
 */
#include "gl_internal.h"

/* ---- dynamically loaded desktop GL entry points ------------------------ */
PFNGLACTIVETEXTURE pglActiveTexture;
PFNGLCLIENTACTIVETEXTURE pglClientActiveTexture;
PFNGLBINDBUFFER pglBindBuffer;
PFNGLCOMPRESSEDTEXIMAGE2D pglCompressedTexImage2D;
PFNWGLSWAPINTERVALEXT pwglSwapIntervalEXT;

/* ---- window / input ---------------------------------------------------- */
HWND g_hwnd;
HDC g_hdc;
HGLRC g_hrc;
int g_win_w = 854, g_win_h = 480;
int g_client_w = 854, g_client_h = 480;
int g_logical_w = 854, g_logical_h = 480;
int g_quit;
CPU *g_cpu;
int g_mouse_down;
int g_last_mx = -1, g_last_my = -1;

/* ---- GL identity string scratch space (guest address) ------------------ */
uint32_t g_gl_string_buf = 0x70003000u;

/* ---- counters ---------------------------------------------------------- */
uint64_t g_draw_calls, g_clear_calls, g_tex_uploads, g_tex_gen;
unsigned g_draw_serial;

/* ---- clear colour / last texture / error tracking ---------------------- */
float g_last_clear[4];
int g_last_tex_w, g_last_tex_h, g_last_tex_fmt, g_last_tex_ifmt;
int g_gl_error_logs;
const char *g_last_gl = "";

/* ---- crash ring -------------------------------------------------------- */
GLRec g_ring[GLR_MAX];
volatile int g_ring_pos;

/* ---- diagnostics toggles ---------------------------------------------- */
int g_draw_log;
int g_idx_log;
int g_state_log;
int g_oes_log;
int g_swap_count;
int g_probe_n;

/* ---- vertex array state ------------------------------------------------ */
GLint g_vp_size, g_vp_type, g_vp_stride;
uint32_t g_vp_ptr;
VPHist g_vp_hist[8];
int g_vp_hist_n;

uint32_t g_weight_ptr, g_matrix_index_ptr;
uint64_t g_oes_current, g_oes_index, g_oes_weight, g_skinned_draws;
uint64_t g_draw_tex, g_draw_notex, g_draw_nrm, g_draw_col, g_draw_tc, g_draw_sampled;
uint64_t g_fixed_ptrs;

/* ---- texture state ----------------------------------------------------- */
GLint g_cur_tex_binding;
GLint g_active_tex_unit;
GLint g_client_tex_unit;
GLint g_tex_bind[4];
GLint g_tex_env_mode[4] = { 0x1701, 0x1701, 0x1701, 0x1701 };
GLint g_tc_size_u[4], g_tc_type_u[4], g_tc_stride_u[4], g_tc_enabled_u[4];
uint32_t g_tc_ptr_u[4];

GLint g_nrm_type, g_col_size, g_col_type, g_tc_size, g_tc_type, g_tc_stride;
uint32_t g_tc_ptr;
uint32_t g_col_ptr;

int g_mtx_probe;
int g_tex_dumped[64], g_tex_dump_n;

/* ---- index-filter cache (used by gl_draw.c) ---------------------------- */
IdxCache g_idx_cache[IDX_CACHE_MAX];
int g_idx_cache_next;
int g_oob_filtered;

/* ---- section-visibility experiment ------------------------------------- */
unsigned g_force_vis_frame = ~0u;
