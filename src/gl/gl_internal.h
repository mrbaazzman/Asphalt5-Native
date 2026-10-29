/* Shared declarations for the GLES1 -> desktop GL compatibility layer.
 *
 * Layout:
 *   gl_state.c     render state (enable/clear/blend/depth/cull/viewport)
 *   gl_matrix.c    matrix stack entry points
 *   gl_texture.c   texture objects, parameters, uploads, tex-env
 *   gl_light.c     fog / lights / materials
 *   gl_arrays.c    client vertex arrays + OES matrix-palette entry points
 *   gl_draw.c      DrawArrays/DrawElements, index validation + OOB filtering
 *   gl_query.c     glGet and glIs surface and the gles1_* status accessors
 *   gl_diag.c      capture, scene dump, probes, draw logs, solid/ID modes
 *   gl_dispatch.c  name -> handler table used by imports.c
 *   gl_globals.c   the shared state/variables, defined exactly once
 *
 * Every entry point has the signature void fn(CPU *c) and reads guest
 * arguments through A(i) / AF(i) / AP(i).
 */
#ifndef ASPHALT5_GL_INTERNAL_H
#define ASPHALT5_GL_INTERNAL_H

#define _CRT_SECURE_NO_WARNINGS
#include "guest.h"

#include <windows.h>
#include <GL/gl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* ---- GLES tokens missing from the desktop headers ---------------------- */
#ifndef GL_TEXTURE0
#define GL_TEXTURE0 0x84C0
#endif
#ifndef GL_TEXTURE1
#define GL_TEXTURE1 0x84C1
#endif
#ifndef GL_GENERATE_MIPMAP
#define GL_GENERATE_MIPMAP 0x8191
#endif
#ifndef GL_CLAMP_TO_EDGE
#define GL_CLAMP_TO_EDGE 0x812F
#endif
#ifndef GL_ARRAY_BUFFER
#define GL_ARRAY_BUFFER 0x8892
#endif
#ifndef GL_ARRAY_BUFFER_BINDING
#define GL_ARRAY_BUFFER_BINDING 0x8894
#endif
#ifndef GL_ETC1_RGB8_OES
#define GL_ETC1_RGB8_OES 0x8D64
#endif

/* ---- dynamically loaded desktop GL entry points ------------------------ */
typedef void (APIENTRY *PFNGLACTIVETEXTURE)(GLenum);
typedef void (APIENTRY *PFNGLCLIENTACTIVETEXTURE)(GLenum);
typedef void (APIENTRY *PFNGLBINDBUFFER)(GLenum, GLuint);
typedef void (APIENTRY *PFNGLCOMPRESSEDTEXIMAGE2D)(GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const void *);
typedef BOOL (APIENTRY *PFNWGLSWAPINTERVALEXT)(int);

/* ---- diagnostics types ------------------------------------------------- */
#define GLR_MAX 64
typedef struct { const char *name; uint32_t a[8]; } GLRec;

typedef struct { uint32_t ptr; int size, type, stride; } VPHist;

typedef struct SolidSave {
    GLboolean tex[4];
    GLboolean col_array, alpha_test, blend, lighting, fog, color_mat;
    GLint active;
    GLfloat color[4];
} SolidSave;

#define IDX_CACHE_MAX 96

typedef struct {
    uint32_t idx;
    GLsizei count;
    GLenum type;
    GLenum mode;
    uint32_t vcount;
    int state;              /* 0 = all indices valid, 1 = filtered copy */
    unsigned char *copy;
} IdxCache;

/* ---- guest argument helpers ------------------------------------------- */
#define A(i) (c->r[(i)])
#define AP(i) (A(i) ? G(A(i)) : NULL)
#define AF(i) f32_from_bits(A(i))

/* ---- shared state (defined once in gl_globals.c) ---------------------- */
extern PFNGLACTIVETEXTURE pglActiveTexture;
extern PFNGLCLIENTACTIVETEXTURE pglClientActiveTexture;
extern PFNGLBINDBUFFER pglBindBuffer;
extern PFNGLCOMPRESSEDTEXIMAGE2D pglCompressedTexImage2D;
extern PFNWGLSWAPINTERVALEXT pwglSwapIntervalEXT;

extern HWND g_hwnd;
extern HDC g_hdc;
extern HGLRC g_hrc;
extern int g_win_w, g_win_h;
extern int g_client_w, g_client_h;
extern int g_logical_w, g_logical_h;
extern int g_quit;
extern CPU *g_cpu;
extern int g_mouse_down;
extern int g_last_mx, g_last_my;

extern uint32_t g_gl_string_buf;

extern uint64_t g_draw_calls, g_clear_calls, g_tex_uploads, g_tex_gen;
extern unsigned g_draw_serial;

extern float g_last_clear[4];
extern int g_last_tex_w, g_last_tex_h, g_last_tex_fmt, g_last_tex_ifmt;
extern int g_gl_error_logs;
extern const char *g_last_gl;

extern GLRec g_ring[GLR_MAX];
extern volatile int g_ring_pos;

extern int g_draw_log;
extern GLint g_vp_size, g_vp_type, g_vp_stride;
extern uint32_t g_vp_ptr;
extern VPHist g_vp_hist[8];
extern int g_vp_hist_n;
extern int g_idx_log;
extern int g_state_log;

extern uint64_t g_oes_current, g_oes_index, g_oes_weight, g_skinned_draws;
extern uint64_t g_draw_tex, g_draw_notex, g_draw_nrm, g_draw_col, g_draw_tc, g_draw_sampled;
extern uint32_t g_weight_ptr, g_matrix_index_ptr;
extern int g_oes_log;
extern int g_swap_count;

extern GLint g_cur_tex_binding;
extern GLint g_active_tex_unit;
extern GLint g_client_tex_unit;
extern GLint g_tex_bind[4];
extern GLint g_tex_env_mode[4];
extern GLint g_tc_size_u[4], g_tc_type_u[4], g_tc_stride_u[4], g_tc_enabled_u[4];
extern uint32_t g_tc_ptr_u[4];

extern GLint g_nrm_type, g_col_size, g_col_type, g_tc_size, g_tc_type, g_tc_stride;
extern uint32_t g_tc_ptr;
extern uint32_t g_col_ptr;
extern uint64_t g_fixed_ptrs;

extern int g_mtx_probe;
extern int g_tex_dumped[64], g_tex_dump_n;
extern IdxCache g_idx_cache[IDX_CACHE_MAX];
extern int g_idx_cache_next;
extern int g_oob_filtered;
extern int g_probe_n;
extern unsigned g_force_vis_frame;

/* ---- platform ---------------------------------------------------------- */
void *glproc(const char *name);
LONG WINAPI gl_crash_filter(EXCEPTION_POINTERS *ep);
int platform_init(int width, int height);
void platform_set_cpu(CPU *cpu);
int platform_should_close(void);
void platform_pump(void);
void platform_swap(void);
int  platform_movie_pump(void);
int platform_client_width(void);
int platform_client_height(void);
void touch(const char *sym, int x, int y, int id);

/* ---- state ------------------------------------------------------------- */
void gl_ClearColor(CPU *c);
void gl_ClearDepthf(CPU *c);
void gl_Color4f(CPU *c);
void gl_Color4ub(CPU *c);
void gl_Clear(CPU *c);
void gl_Enable(CPU *c);
void gl_Disable(CPU *c);
void gl_BlendFunc(CPU *c);
void gl_AlphaFunc(CPU *c);
void gl_ShadeModel(CPU *c);
void gl_DepthFunc(CPU *c);
void gl_DepthMask(CPU *c);
void gl_ColorMask(CPU *c);
void gl_CullFace(CPU *c);
void gl_FrontFace(CPU *c);
void gl_Hint(CPU *c);
void gl_Finish(CPU *c);
void gl_PixelStorei(CPU *c);
void gl_Viewport(CPU *c);
void gl_Scissor(CPU *c);

/* ---- matrix ------------------------------------------------------------ */
void gl_Translatef(CPU *c);
void gl_Rotatef(CPU *c);
void gl_LoadMatrixf(CPU *c);
void gl_MatrixMode(CPU *c);
void gl_LoadIdentity(CPU *c);
void gl_PushMatrix(CPU *c);
void gl_PopMatrix(CPU *c);

/* ---- textures ---------------------------------------------------------- */
void gl_TexEnvi(CPU *c);
void gl_TexEnvfv(CPU *c);
void gl_ActiveTexture(CPU *c);
void gl_GenTextures(CPU *c);
void gl_DeleteTextures(CPU *c);
void gl_TexParameteri(CPU *c);
void gl_TexParameterf(CPU *c);
void gl_TexImage2D(CPU *c);
void gl_TexSubImage2D(CPU *c);
void gl_CopyTexImage2D(CPU *c);
void gl_CompressedTexImage2D(CPU *c);
void gl_BindBuffer(CPU *c);
void gl_BindTexture(CPU *c);
uint32_t stack_arg(CPU *c, int index);

/* ---- lighting ---------------------------------------------------------- */
void gl_Fogf(CPU *c);
void gl_Fogfv(CPU *c);
void gl_Lightf(CPU *c);
void gl_Lightfv(CPU *c);
void gl_LightModelfv(CPU *c);
void gl_Materialf(CPU *c);
void gl_Materialfv(CPU *c);

/* ---- client arrays ----------------------------------------------------- */
void gl_EnableClientState(CPU *c);
void gl_DisableClientState(CPU *c);
void gl_ClientActiveTexture(CPU *c);
void gl_VertexPointer(CPU *c);
void gl_NormalPointer(CPU *c);
void gl_ColorPointer(CPU *c);
void gl_TexCoordPointer(CPU *c);
void gl_CurrentPaletteMatrixOES(CPU *c);
void gl_MatrixIndexPointerOES(CPU *c);
void gl_WeightPointerOES(CPU *c);
void bind_client_tex_units(void);

/* ---- drawing ----------------------------------------------------------- */
void gl_DrawArrays(CPU *c);
void gl_DrawElements(CPU *c);
int guest_range_ok(uint32_t addr, uint64_t len);
int idx_type_size(GLenum t);
int validate_draw_elements(GLsizei count, GLenum type, uint32_t idx);
unsigned char *filter_index_buffer(GLenum mode, GLsizei count, GLenum type,
                                   uint32_t idx, uint32_t vcount, size_t bytes);
const void *draw_indices(GLenum mode, GLsizei count, GLenum type, uint32_t idx);

/* ---- queries / public status ------------------------------------------ */
void gl_GetFloatv(CPU *c);
void gl_GetError(CPU *c);
void gl_GetString(CPU *c);
uint32_t put_gl_string(const char *s);
const char *gles_extensions(void);
uint64_t gles1_draws(void);
uint64_t gles1_clears(void);
uint64_t gles1_uploaded(void);
uint64_t gles1_generated(void);
const float *gles1_clear_color(void);
int gles1_nonwhite(void);
int gles1_last_tex(int *w, int *h, int *fmt, int *ifmt);

/* ---- diagnostics ------------------------------------------------------- */
int gl_stats_env(void);
void scene_dump(void);
void capture_frame(void);
void dump_bound_texture(void);
int probe_type_size(GLenum t);
float probe_comp(uint32_t addr, GLenum type);
void probe_draw(GLenum mode, GLsizei count, uint32_t indices, GLenum itype);
void draw_note_state(void);
int solid_env(void);
void solid_begin(SolidSave *s);
void solid_end(const SolidSave *s);
int draw_id_env(void);
void draw_id_color(unsigned id);
void force_section_visible(void);
void draw_log_arrays(unsigned id, GLenum mode, GLsizei first, GLsizei count);
int draw_log_frame(void);
void draw_log(CPU *c, unsigned id, GLsizei count, GLenum mode, GLenum itype, uint32_t iptr);

/* ---- dispatch ---------------------------------------------------------- */
int gles1_dispatch(CPU *cpu, const char *name);

#endif /* ASPHALT5_GL_INTERNAL_H */
