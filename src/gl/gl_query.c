/* glGet and glIs surface and the gles1_* status accessors.
 *
 * Split out of the original monolithic gles1.c during the
 * 2026-10 project reorganisation.  Shared state lives in gl_globals.c
 * and is declared in gl_internal.h.
 */

#include "gl_internal.h"


uint32_t put_gl_string(const char *s)
{
    if (!s) s = "";
    strncpy((char *)G(g_gl_string_buf), s, 0x1FFF);
    G(g_gl_string_buf)[0x1FFF] = 0;
    return g_gl_string_buf;
}


const char *gles_extensions(void)
{
    return "GL_OES_compressed_paletted_texture "
           "GL_OES_texture_env_crossbar GL_OES_texture_mirrored_repeat "
           "GL_OES_blend_subtract GL_OES_blend_func_separate GL_OES_blend_equation_separate "
           "GL_EXT_texture_compression_s3tc";
}


void gl_GetFloatv(CPU *c) { glGetFloatv((GLenum)A(0), (GLfloat *)AP(1)); }


void gl_GetError(CPU *c)
{
    GLenum e = glGetError();
    if (e && g_gl_error_logs < 20 && g_verbose) {
        fprintf(stderr, "[gl] error 0x%04x after %s\n", (unsigned)e, g_last_gl);
        g_gl_error_logs++;
    }
    c->r[0] = (uint32_t)e;
}


void gl_GetString(CPU *c)
{
    GLenum n = (GLenum)A(0);
    if (n == GL_EXTENSIONS) { c->r[0] = put_gl_string(gles_extensions()); return; }
    if (n == GL_VERSION) { c->r[0] = put_gl_string("OpenGL ES-CM 1.1 (Iyokan recomp)"); return; }
    if (n == GL_VENDOR) { c->r[0] = put_gl_string("Asphalt5 static recompilation"); return; }
    if (n == GL_RENDERER) { c->r[0] = put_gl_string((const char *)glGetString(GL_RENDERER)); return; }
    c->r[0] = put_gl_string((const char *)glGetString(n));
}


uint64_t gles1_draws(void) { return g_draw_calls; }


uint64_t gles1_clears(void) { return g_clear_calls; }


uint64_t gles1_uploaded(void) { return g_tex_uploads; }


uint64_t gles1_generated(void) { return g_tex_gen; }


const float *gles1_clear_color(void) { return g_last_clear; }


int gles1_nonwhite(void)
{
    static unsigned char buf[128 * 128 * 4];
    if (!g_hrc) return -1;
    int w = g_client_w < 128 ? g_client_w : 128;
    int h = g_client_h < 128 ? g_client_h : 128;
    glReadPixels((g_client_w - w) / 2, (g_client_h - h) / 2, w, h,
                 GL_RGBA, GL_UNSIGNED_BYTE, buf);
    int n = 0;
    for (int i = 0; i < w * h * 4; i += 4)
        if (buf[i] != 255 || buf[i+1] != 255 || buf[i+2] != 255) n++;
    return n;
}


int gles1_last_tex(int *w, int *h, int *fmt, int *ifmt)
{
    *w = g_last_tex_w; *h = g_last_tex_h; *fmt = g_last_tex_fmt; *ifmt = g_last_tex_ifmt;
    return g_last_tex_w;
}
