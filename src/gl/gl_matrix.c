/* Matrix stack entry points.
 *
 * Split out of the original monolithic gles1.c during the
 * 2026-10 project reorganisation.  Shared state lives in gl_globals.c
 * and is declared in gl_internal.h.
 */

#include "gl_internal.h"


void gl_Translatef(CPU *c) { glTranslatef(AF(0), AF(1), AF(2)); }


void gl_Rotatef(CPU *c) { glRotatef(AF(0), AF(1), AF(2), AF(3)); }


void gl_LoadMatrixf(CPU *c)
{
    const GLfloat *m = (const GLfloat *)AP(0);
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


void gl_MatrixMode(CPU *c) { glMatrixMode((GLenum)A(0)); }


void gl_LoadIdentity(CPU *c) { glLoadIdentity(); }


void gl_PushMatrix(CPU *c) { glPushMatrix(); }


void gl_PopMatrix(CPU *c) { glPopMatrix(); }
