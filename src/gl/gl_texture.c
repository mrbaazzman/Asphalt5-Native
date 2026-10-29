/* Texture objects, parameters, tex-env and uploads.
 *
 * Split out of the original monolithic gles1.c during the
 * 2026-10 project reorganisation.  Shared state lives in gl_globals.c
 * and is declared in gl_internal.h.
 */

#include "gl_internal.h"


void gl_TexEnvi(CPU *c)
{
    if (A(1) == 0x2200 && g_active_tex_unit >= 0 && g_active_tex_unit < 4)
        g_tex_env_mode[g_active_tex_unit] = (GLint)A(2);
    glTexEnvi((GLenum)A(0), (GLenum)A(1), (GLint)A(2));
}


void gl_TexEnvfv(CPU *c)
{
    if (A(1) == 0x2200 && g_active_tex_unit >= 0 && g_active_tex_unit < 4)
        g_tex_env_mode[g_active_tex_unit] = (GLint)((const GLfloat *)AP(2))[0];
    glTexEnvfv((GLenum)A(0), (GLenum)A(1), (const GLfloat *)AP(2));
}


void gl_ActiveTexture(CPU *c)
{
    g_active_tex_unit = (GLint)A(0) - 0x84C0;
    if (pglActiveTexture) pglActiveTexture((GLenum)A(0));
}


void gl_GenTextures(CPU *c) { g_tex_gen++; glGenTextures((GLsizei)A(0), (GLuint *)AP(1)); }


void gl_DeleteTextures(CPU *c) { glDeleteTextures((GLsizei)A(0), (const GLuint *)AP(1)); }


void gl_TexParameteri(CPU *c)
{
    if (getenv("RECOMP_TEX_STATE")) {
        fprintf(stderr, "[tex] param i id=%d pname=%x v=%d\n",
                (int)g_cur_tex_binding, (unsigned)A(1), (int)A(2));
    }
    glTexParameteri((GLenum)A(0), (GLenum)A(1), (GLint)A(2));
}


void gl_TexParameterf(CPU *c)
{
    if (getenv("RECOMP_TEX_STATE")) {
        fprintf(stderr, "[tex] param f id=%d pname=%x v=%.3f\n",
                (int)g_cur_tex_binding, (unsigned)A(1), AF(2));
    }
    glTexParameterf((GLenum)A(0), (GLenum)A(1), AF(2));
}


void gl_TexImage2D(CPU *c)
{
    GLsizei w = (GLsizei)A(3);
    GLsizei h = (GLsizei)stack_arg(c, 0);
    GLint border = (GLint)stack_arg(c, 1);
    GLenum fmt = (GLenum)stack_arg(c, 2);
    GLenum type = (GLenum)stack_arg(c, 3);
    uint32_t pixels = stack_arg(c, 4);

    if (getenv("RECOMP_TEX_STATE")) {
        fprintf(stderr, "[tex] image id=%d level=%d ifmt=%x %dx%d fmt=%x type=%x\n",
                (int)g_cur_tex_binding, (int)A(1), (unsigned)A(2),
                (int)w, (int)h, (unsigned)fmt, (unsigned)type);
    }
    g_tex_uploads++;
    g_last_tex_w = (int)w; g_last_tex_h = (int)h;
    g_last_tex_ifmt = (int)A(2); g_last_tex_fmt = (int)fmt;
    glTexImage2D((GLenum)A(0), (GLint)A(1), (GLint)A(2), w, h, border, fmt, type,
                 pixels ? G(pixels) : NULL);
}


void gl_TexSubImage2D(CPU *c)
{
    GLsizei w = (GLsizei)stack_arg(c, 0);
    GLsizei h = (GLsizei)stack_arg(c, 1);
    GLenum fmt = (GLenum)stack_arg(c, 2);
    GLenum type = (GLenum)stack_arg(c, 3);
    uint32_t pixels = stack_arg(c, 4);
    glTexSubImage2D((GLenum)A(0), (GLint)A(1), (GLint)A(2), (GLint)A(3),
                    w, h, fmt, type, pixels ? G(pixels) : NULL);
}


void gl_CopyTexImage2D(CPU *c)
{
    GLint y = (GLint)stack_arg(c, 0);
    GLsizei w = (GLsizei)stack_arg(c, 1);
    GLsizei h = (GLsizei)stack_arg(c, 2);
    GLint border = (GLint)stack_arg(c, 3);
    glCopyTexImage2D((GLenum)A(0), (GLint)A(1), (GLenum)A(2), (GLint)A(3), y, w, h, border);
}


void gl_CompressedTexImage2D(CPU *c)
{
    if (!pglCompressedTexImage2D) return;
    GLenum fmt = (GLenum)A(2);
    GLsizei w = (GLsizei)A(3);
    GLsizei h = (GLsizei)stack_arg(c, 0);
    GLint border = (GLint)stack_arg(c, 1);
    GLsizei size = (GLsizei)stack_arg(c, 2);
    uint32_t data = stack_arg(c, 3);
    if (fmt == GL_ETC1_RGB8_OES || (fmt >= 0x8C00 && fmt <= 0x8C03)) {
        static int warned;
        if (!warned++) fprintf(stderr, "[gl] compressed texture format %04x (%ux%u) not decoded yet\n",
                               fmt, w, h);
        return;
    }
    pglCompressedTexImage2D((GLenum)A(0), (GLint)A(1), fmt, w, h, border, size,
                            data ? G(data) : NULL);
}


void gl_BindBuffer(CPU *c) { if (pglBindBuffer) pglBindBuffer((GLenum)A(0), (GLuint)A(1)); }


void gl_BindTexture(CPU *c)
{
    if (g_active_tex_unit >= 0 && g_active_tex_unit < 4)
        g_tex_bind[g_active_tex_unit] = (GLint)A(1);
    g_cur_tex_binding = g_tex_bind[0];
    glBindTexture((GLenum)A(0), (GLuint)A(1));
}


uint32_t stack_arg(CPU *c, int index) { return rd32(c->r[13] + (uint32_t)(index * 4)); }
