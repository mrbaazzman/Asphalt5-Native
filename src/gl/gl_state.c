/* Fixed-function render state entry points.
 *
 * Split out of the original monolithic gles1.c during the
 * 2026-10 project reorganisation.  Shared state lives in gl_globals.c
 * and is declared in gl_internal.h.
 */

#include "gl_internal.h"


void gl_ClearColor(CPU *c)
{
    g_last_clear[0] = AF(0); g_last_clear[1] = AF(1);
    g_last_clear[2] = AF(2); g_last_clear[3] = AF(3);
    if (getenv("RECOMP_BLACK_CLEAR")) {
        g_last_clear[0] = g_last_clear[1] = g_last_clear[2] = 0.0f;
        g_last_clear[3] = 1.0f;
    }
    glClearColor(g_last_clear[0], g_last_clear[1], g_last_clear[2], g_last_clear[3]);
}


void gl_ClearDepthf(CPU *c) { glClearDepth((GLclampd)AF(0)); }


void gl_Color4f(CPU *c)
{
    if (g_verbose && g_state_log < 6)
        fprintf(stderr, "[gl] Color4f %.2f %.2f %.2f %.2f\n", AF(0), AF(1), AF(2), AF(3));
    glColor4f(AF(0), AF(1), AF(2), AF(3));
}


void gl_Color4ub(CPU *c) { glColor4ub((GLubyte)A(0), (GLubyte)A(1), (GLubyte)A(2), (GLubyte)A(3)); }


void gl_Clear(CPU *c)
{
    g_clear_calls++;
    const char *rgb = getenv("RECOMP_CLEAR_RGB");
    if (rgb) {
        int r = 0, g = 0, b = 0;
        if (sscanf(rgb, "%d,%d,%d", &r, &g, &b) == 3)
            glClearColor(r / 255.0f, g / 255.0f, b / 255.0f, 1.0f);
    }
    glClear((GLbitfield)A(0));
}


void gl_Enable(CPU *c)
{
    if (g_verbose && g_state_log < 20)
        fprintf(stderr, "[gl] Enable %x\n", (unsigned)A(0));
    if ((GLenum)A(0) == GL_CULL_FACE && getenv("RECOMP_NO_CULL")) return;
    glEnable((GLenum)A(0));
}


void gl_Disable(CPU *c)
{
    if (g_verbose && g_state_log < 20)
        fprintf(stderr, "[gl] Disable %x\n", (unsigned)A(0));
    glDisable((GLenum)A(0));
}


void gl_BlendFunc(CPU *c) { glBlendFunc((GLenum)A(0), (GLenum)A(1)); }


void gl_AlphaFunc(CPU *c) { glAlphaFunc((GLenum)A(0), AF(1)); }


void gl_ShadeModel(CPU *c) { glShadeModel((GLenum)A(0)); }


void gl_DepthFunc(CPU *c)
{
    if (g_verbose && g_state_log < 20) fprintf(stderr, "[gl] DepthFunc %x\n", (unsigned)A(0));
    glDepthFunc((GLenum)A(0));
}


void gl_DepthMask(CPU *c)
{
    if (g_verbose && g_state_log < 20) fprintf(stderr, "[gl] DepthMask %d\n", (int)A(0));
    glDepthMask((GLboolean)A(0));
}


void gl_ColorMask(CPU *c)
{
    if (g_verbose && g_draw_log < 3)
        fprintf(stderr, "[gl] ColorMask %d %d %d %d\n", (int)A(0), (int)A(1), (int)A(2), (int)A(3));
    glColorMask((GLboolean)A(0), (GLboolean)A(1), (GLboolean)A(2), (GLboolean)A(3));
}


void gl_CullFace(CPU *c) { glCullFace((GLenum)A(0)); }


void gl_FrontFace(CPU *c) { glFrontFace((GLenum)A(0)); }


void gl_Hint(CPU *c) { glHint((GLenum)A(0), (GLenum)A(1)); }


void gl_Finish(CPU *c) { glFinish(); }


void gl_PixelStorei(CPU *c) { glPixelStorei((GLenum)A(0), (GLint)A(1)); }


/* The engine lays out its UI and camera in a fixed logical canvas (854x480
 * for 3.2.4, 1024x600 for 3.3.7).  When the window is larger, scale
 * viewports/scissors so that canvas fills the real framebuffer.  The 3D
 * projection keeps the same aspect, so geometry is rasterised at the real
 * resolution. */
static void scale_view_rect(int *x, int *y, int *w, int *h)
{
    int cw = g_client_w, ch = g_client_h;
    int lw = g_logical_w > 0 ? g_logical_w : 854;
    int lh = g_logical_h > 0 ? g_logical_h : 480;
    if (cw < 1 || ch < 1 || (cw == lw && ch == lh)) return;
    int nx = (int)((int64_t)*x * cw / lw);
    int ny = (int)((int64_t)*y * ch / lh);
    int nw = (int)((int64_t)*w * cw / lw);
    int nh = (int)((int64_t)*h * ch / lh);
    if (nx < 0) nx = 0;
    if (ny < 0) ny = 0;
    if (nw < 0) nw = 0;
    if (nh < 0) nh = 0;
    if (nx + nw > cw) nw = cw - nx;
    if (ny + nh > ch) nh = ch - ny;
    *x = nx; *y = ny; *w = nw; *h = nh;
}

void gl_Viewport(CPU *c)
{
    int x = (int)A(0), y = (int)A(1), w = (int)A(2), h = (int)A(3);
    if (g_verbose && g_draw_log < 3)
        fprintf(stderr, "[gl] Viewport %d %d %d %d\n", x, y, w, h);
    if (getenv("RECOMP_VP_LOG") && g_swap_count > 1000)
        fprintf(stderr, "[vp] swap=%d %d %d %d %d\n", g_swap_count, x, y, w, h);
    scale_view_rect(&x, &y, &w, &h);
    glViewport((GLint)x, (GLint)y, (GLsizei)w, (GLsizei)h);
}


void gl_Scissor(CPU *c)
{
    int x = (int)A(0), y = (int)A(1), w = (int)A(2), h = (int)A(3);
    scale_view_rect(&x, &y, &w, &h);
    glScissor((GLint)x, (GLint)y, (GLsizei)w, (GLsizei)h);
}
