/* Client vertex arrays and the OES matrix-palette surface.
 *
 * Split out of the original monolithic gles1.c during the
 * 2026-10 project reorganisation.  Shared state lives in gl_globals.c
 * and is declared in gl_internal.h.
 */

#include "gl_internal.h"


void gl_EnableClientState(CPU *c)
{
    if ((GLenum)A(0) == GL_TEXTURE_COORD_ARRAY && g_client_tex_unit >= 0 && g_client_tex_unit < 4)
        g_tc_enabled_u[g_client_tex_unit] = 1;
    glEnableClientState((GLenum)A(0));
}


void gl_DisableClientState(CPU *c)
{
    if ((GLenum)A(0) == GL_TEXTURE_COORD_ARRAY && g_client_tex_unit >= 0 && g_client_tex_unit < 4)
        g_tc_enabled_u[g_client_tex_unit] = 0;
    glDisableClientState((GLenum)A(0));
}


void gl_ClientActiveTexture(CPU *c)
{
    GLint u = (GLint)A(0) - 0x84C0;
    if (u >= 0 && u < 4) g_client_tex_unit = u;
    if (pglClientActiveTexture) pglClientActiveTexture((GLenum)A(0));
}


void gl_VertexPointer(CPU *c)
{
    g_vp_size = (GLint)A(0); g_vp_type = (GLenum)A(1);
    g_vp_stride = (GLsizei)A(2); g_vp_ptr = A(3);
    VPHist *h = &g_vp_hist[g_vp_hist_n++ & 7];
    h->ptr = g_vp_ptr; h->size = g_vp_size; h->type = g_vp_type; h->stride = g_vp_stride;
    glVertexPointer(g_vp_size, g_vp_type, g_vp_stride, AP(3));
}


void gl_NormalPointer(CPU *c)
{
    g_nrm_type = (GLint)A(0);
    if (g_nrm_type == 0x140c) g_fixed_ptrs++;
    glNormalPointer((GLenum)A(0), (GLsizei)A(1), AP(2));
}


void gl_ColorPointer(CPU *c)
{
    g_col_size = (GLint)A(0); g_col_type = (GLenum)A(1);
    g_col_ptr = A(3);
    if (g_col_type == 0x140c) g_fixed_ptrs++;
    glColorPointer((GLint)A(0), (GLenum)A(1), (GLsizei)A(2), AP(3));
}


void gl_TexCoordPointer(CPU *c)
{
    g_tc_size = (GLint)A(0); g_tc_type = (GLenum)A(1);
    g_tc_stride = (GLsizei)A(2); g_tc_ptr = A(3);
    if (g_client_tex_unit >= 0 && g_client_tex_unit < 4) {
        g_tc_size_u[g_client_tex_unit] = (GLint)A(0);
        g_tc_type_u[g_client_tex_unit] = (GLenum)A(1);
        g_tc_stride_u[g_client_tex_unit] = (GLsizei)A(2);
        g_tc_ptr_u[g_client_tex_unit] = A(3);
    }
    if (g_tc_type == 0x140c) g_fixed_ptrs++;
    glTexCoordPointer((GLint)A(0), (GLenum)A(1), (GLsizei)A(2), AP(3));
}


void gl_CurrentPaletteMatrixOES(CPU *c)
{
    g_oes_current++;
    if (gl_stats_env() && g_oes_log < 16) {
        fprintf(stderr, "[gl] CurrentPaletteMatrixOES idx=%d\n", (int)A(0));
        g_oes_log++;
    }
}


void gl_MatrixIndexPointerOES(CPU *c)
{
    g_oes_index++;
    g_matrix_index_ptr = A(3);
    if (gl_stats_env() && g_oes_log < 16) {
        fprintf(stderr, "[gl] MatrixIndexPointerOES size=%d type=%x stride=%d ptr=%x\n",
                (int)A(0), (unsigned)A(1), (int)A(2), A(3));
        g_oes_log++;
    }
}


void gl_WeightPointerOES(CPU *c)
{
    g_oes_weight++;
    g_weight_ptr = A(3);
    if (gl_stats_env() && g_oes_log < 16) {
        fprintf(stderr, "[gl] WeightPointerOES size=%d type=%x stride=%d ptr=%x\n",
                (int)A(0), (unsigned)A(1), (int)A(2), A(3));
        g_oes_log++;
    }
}


void bind_client_tex_units(void)
{
    if (!pglClientActiveTexture) return;
    for (int u = 0; u < 4; u++) {
        pglClientActiveTexture(0x84C0 + u);
        if (g_tc_enabled_u[u] && g_tc_ptr_u[u]) {
            glTexCoordPointer(g_tc_size_u[u], g_tc_type_u[u],
                              g_tc_stride_u[u], G(g_tc_ptr_u[u]));
            glEnableClientState(GL_TEXTURE_COORD_ARRAY);
        } else {
            glDisableClientState(GL_TEXTURE_COORD_ARRAY);
        }
    }
    pglClientActiveTexture(0x84C0 + (g_client_tex_unit >= 0 && g_client_tex_unit < 4
                                     ? g_client_tex_unit : 0));
}
