/* Matrix stack entry points.
 *
 * Split out of the original monolithic gles1.c during the
 * 2026-10 project reorganisation.  Shared state lives in gl_globals.c
 * and is declared in gl_internal.h.
 */

#include "gl_internal.h"


void gl_Translatef(CPU *c)
{
    if (g_matrix_mode == GL_MATRIX_PALETTE_OES) return;
    glTranslatef(AF(0), AF(1), AF(2));
}


void gl_Rotatef(CPU *c)
{
    if (g_matrix_mode == GL_MATRIX_PALETTE_OES) return;
    glRotatef(AF(0), AF(1), AF(2), AF(3));
}


void gl_LoadMatrixf(CPU *c)
{
    const GLfloat *m = (const GLfloat *)AP(0);
    if (g_matrix_mode == GL_MATRIX_PALETTE_OES) {
        if (m && guest_range_ok(A(0), 16 * sizeof(GLfloat)) && g_cur_palette_mtx < OES_MAX_PALETTE_MATRICES)
            memcpy(g_palette_mtx[g_cur_palette_mtx], m, 16 * sizeof(GLfloat));
        return;
    }
    if (g_verbose && g_state_log < 6) {
        fprintf(stderr, "[gl] LoadMatrixf [%d] %.2f %.2f %.2f %.2f / %.2f %.2f %.2f %.2f / %.2f %.2f %.2f %.2f / %.2f %.2f %.2f %.2f\n",
                g_state_log, m?m[0]:0, m?m[1]:0, m?m[2]:0, m?m[3]:0,
                m?m[4]:0, m?m[5]:0, m?m[6]:0, m?m[7]:0,
                m?m[8]:0, m?m[9]:0, m?m[10]:0, m?m[11]:0,
                m?m[12]:0, m?m[13]:0, m?m[14]:0, m?m[15]:0);
        g_state_log++;
    }
    if (gl_stats_env() && g_swap_count > 400 && g_mtx_probe < 12) {
        GLint mode = 0;
        glGetIntegerv(GL_MATRIX_MODE, &mode);
        fprintf(stderr, "[mtx] lr=%x mode=%x m=%.3f %.3f %.3f %.3f %.3f %.3f %.3f %.3f %.3f %.3f %.3f %.3f %.3f %.3f %.3f %.3f\n",
                c->r[14], (unsigned)mode,
                m?m[0]:0, m?m[1]:0, m?m[2]:0, m?m[3]:0,
                m?m[4]:0, m?m[5]:0, m?m[6]:0, m?m[7]:0,
                m?m[8]:0, m?m[9]:0, m?m[10]:0, m?m[11]:0,
                m?m[12]:0, m?m[13]:0, m?m[14]:0, m?m[15]:0);
        g_mtx_probe++;
    }
    glLoadMatrixf(m);
}


void gl_MatrixMode(CPU *c)
{
    GLenum mode = (GLenum)A(0);
    g_matrix_mode = mode;
    if (mode != GL_MATRIX_PALETTE_OES) {
        g_gl_matrix_mode = mode;
        glMatrixMode(mode);
    }
}


void gl_LoadIdentity(CPU *c)
{
    (void)c;
    if (g_matrix_mode == GL_MATRIX_PALETTE_OES) {
        if (g_cur_palette_mtx < OES_MAX_PALETTE_MATRICES) {
            GLfloat *p = g_palette_mtx[g_cur_palette_mtx];
            memset(p, 0, 16 * sizeof(GLfloat));
            p[0] = p[5] = p[10] = p[15] = 1.0f;
        }
        return;
    }
    glLoadIdentity();
}


void gl_PushMatrix(CPU *c)
{
    (void)c;
    if (g_matrix_mode == GL_MATRIX_PALETTE_OES) return;
    glPushMatrix();
}


void gl_PopMatrix(CPU *c)
{
    (void)c;
    if (g_matrix_mode == GL_MATRIX_PALETTE_OES) return;
    glPopMatrix();
}
