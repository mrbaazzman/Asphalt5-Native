/* Client vertex arrays and the OES matrix-palette surface.
 *
 * Split out of the original monolithic gles1.c during the
 * 2026-10 project reorganisation.  Shared state lives in gl_globals.c
 * and is declared in gl_internal.h.
 */

#include "gl_internal.h"


void gl_EnableClientState(CPU *c)
{
    GLenum cap = (GLenum)A(0);
    if (cap == GL_TEXTURE_COORD_ARRAY && g_client_tex_unit >= 0 && g_client_tex_unit < 4)
        g_tc_enabled_u[g_client_tex_unit] = 1;
    else if (cap == GL_NORMAL_ARRAY)
        g_np_enabled = 1;
    else if (cap == GL_MATRIX_INDEX_ARRAY_OES) { g_matrix_index_enabled = 1; return; }
    else if (cap == GL_WEIGHT_ARRAY_OES) { g_weight_enabled = 1; return; }
    glEnableClientState(cap);
}


void gl_DisableClientState(CPU *c)
{
    GLenum cap = (GLenum)A(0);
    if (cap == GL_TEXTURE_COORD_ARRAY && g_client_tex_unit >= 0 && g_client_tex_unit < 4)
        g_tc_enabled_u[g_client_tex_unit] = 0;
    else if (cap == GL_NORMAL_ARRAY)
        g_np_enabled = 0;
    else if (cap == GL_MATRIX_INDEX_ARRAY_OES) { g_matrix_index_enabled = 0; return; }
    else if (cap == GL_WEIGHT_ARRAY_OES) { g_weight_enabled = 0; return; }
    glDisableClientState(cap);
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
    g_nrm_stride = (GLsizei)A(1);
    g_nrm_ptr = A(2);
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
    if (A(0) < OES_MAX_PALETTE_MATRICES)
        g_cur_palette_mtx = A(0);
    if (gl_stats_env() && g_oes_log < 16) {
        fprintf(stderr, "[gl] CurrentPaletteMatrixOES idx=%d\n", (int)A(0));
        g_oes_log++;
    }
}


void gl_MatrixIndexPointerOES(CPU *c)
{
    g_oes_index++;
    g_mi_size = (GLint)A(0);
    g_mi_type = (GLenum)A(1);
    g_mi_stride = (GLsizei)A(2);
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
    g_wt_size = (GLint)A(0);
    g_wt_type = (GLenum)A(1);
    g_wt_stride = (GLsizei)A(2);
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


static int gl_type_bytes(GLenum t)
{
    switch (t) {
    case GL_BYTE:
    case GL_UNSIGNED_BYTE:  return 1;
    case GL_SHORT:
    case GL_UNSIGNED_SHORT: return 2;
    case GL_FLOAT:
    case GL_INT:
    case GL_UNSIGNED_INT:   return 4;
    default:                return 4;
    }
}


static float read_gl_coord(const uint8_t *p, GLenum type)
{
    if (type == GL_FLOAT) {
        float v; memcpy(&v, p, 4); return v;
    }
    if (type == GL_SHORT) {
        int16_t v; memcpy(&v, p, 2); return (float)v;
    }
    if (type == GL_BYTE) {
        return (float)(int8_t)p[0];
    }
    return 0.0f;
}


static float read_gl_norm(const uint8_t *p, GLenum type)
{
    if (type == GL_FLOAT) {
        float v; memcpy(&v, p, 4); return v;
    }
    if (type == GL_SHORT) {
        int16_t v; memcpy(&v, p, 2); return (float)v / 32767.0f;
    }
    if (type == GL_BYTE) {
        return (float)(int8_t)p[0] / 127.0f;
    }
    return 0.0f;
}


int gl_skin_draw_elements(GLenum mode, GLsizei count, GLenum type, const void *indices)
{
    if (count <= 0 || !indices || !g_vp_ptr || !g_matrix_index_ptr || !g_weight_ptr)
        return 0;
    if (g_vp_size < 2 || g_vp_size > 4 || g_wt_type != GL_FLOAT)
        return 0;

    int units = g_mi_size < g_wt_size ? g_mi_size : g_wt_size;
    if (units <= 0) return 0;
    if (units > OES_MAX_PALETTE_MATRICES) units = OES_MAX_PALETTE_MATRICES;

    uint32_t max_idx = 0;
    for (GLsizei i = 0; i < count; i++) {
        uint32_t idx;
        if (type == GL_UNSIGNED_SHORT)      idx = ((const uint16_t *)indices)[i];
        else if (type == GL_UNSIGNED_BYTE)  idx = ((const uint8_t *)indices)[i];
        else if (type == GL_UNSIGNED_INT)   idx = ((const uint32_t *)indices)[i];
        else return 0;
        if (idx > max_idx) max_idx = idx;
    }
    if (max_idx >= 65536u) return 0;

    GLsizei v_sz = gl_type_bytes((GLenum)g_vp_type);
    GLsizei v_stride = g_vp_stride ? g_vp_stride : g_vp_size * v_sz;
    GLsizei mi_sz = gl_type_bytes(g_mi_type);
    GLsizei mi_stride = g_mi_stride ? g_mi_stride : g_mi_size * mi_sz;
    GLsizei wt_stride = g_wt_stride ? g_wt_stride : g_wt_size * 4;
    int do_nrm = g_np_enabled && g_nrm_ptr;
    GLsizei n_sz = do_nrm ? gl_type_bytes((GLenum)g_nrm_type) : 0;
    GLsizei n_stride = do_nrm ? (g_nrm_stride ? g_nrm_stride : 3 * n_sz) : 0;

    if (!guest_range_ok(g_vp_ptr, (uint64_t)max_idx * (uint64_t)v_stride + (uint64_t)(g_vp_size * v_sz)) ||
        !guest_range_ok(g_matrix_index_ptr, (uint64_t)max_idx * (uint64_t)mi_stride + (uint64_t)(units * mi_sz)) ||
        !guest_range_ok(g_weight_ptr, (uint64_t)max_idx * (uint64_t)wt_stride + (uint64_t)(units * 4)))
        return 0;
    if (do_nrm && !guest_range_ok(g_nrm_ptr, (uint64_t)max_idx * (uint64_t)n_stride + (uint64_t)(3 * n_sz)))
        do_nrm = 0;

    static GLfloat *s_skin_v = NULL;
    static GLfloat *s_skin_n = NULL;
    static uint8_t *s_skin_seen = NULL;
    static uint32_t s_skin_cap = 0;
    uint32_t need = max_idx + 1u;
    if (need > s_skin_cap) {
        GLfloat *nv = (GLfloat *)realloc(s_skin_v, (size_t)need * 3 * sizeof(GLfloat));
        GLfloat *nn = (GLfloat *)realloc(s_skin_n, (size_t)need * 3 * sizeof(GLfloat));
        uint8_t *ns = (uint8_t *)realloc(s_skin_seen, (size_t)need);
        if (!nv || !nn || !ns) return 0;
        s_skin_v = nv; s_skin_n = nn; s_skin_seen = ns;
        s_skin_cap = need;
    }
    memset(s_skin_seen, 0, need);

    const uint8_t *vp_base = G(g_vp_ptr);
    const uint8_t *np_base = do_nrm ? G(g_nrm_ptr) : NULL;
    const uint8_t *mi_base = G(g_matrix_index_ptr);
    const uint8_t *wt_base = G(g_weight_ptr);

    for (GLsizei i = 0; i < count; i++) {
        uint32_t v;
        if (type == GL_UNSIGNED_SHORT)      v = ((const uint16_t *)indices)[i];
        else if (type == GL_UNSIGNED_BYTE)  v = ((const uint8_t *)indices)[i];
        else                                v = ((const uint32_t *)indices)[i];
        if (s_skin_seen[v]) continue;
        s_skin_seen[v] = 1;

        const uint8_t *pv = vp_base + (size_t)v * (size_t)v_stride;
        float vx = read_gl_coord(pv, (GLenum)g_vp_type);
        float vy = read_gl_coord(pv + v_sz, (GLenum)g_vp_type);
        float vz = (g_vp_size >= 3) ? read_gl_coord(pv + 2 * v_sz, (GLenum)g_vp_type) : 0.0f;

        float nx = 0.0f, ny = 0.0f, nz = 0.0f;
        if (do_nrm) {
            const uint8_t *pn = np_base + (size_t)v * (size_t)n_stride;
            nx = read_gl_norm(pn, (GLenum)g_nrm_type);
            ny = read_gl_norm(pn + n_sz, (GLenum)g_nrm_type);
            nz = read_gl_norm(pn + 2 * n_sz, (GLenum)g_nrm_type);
        }

        const uint8_t *pmi = mi_base + (size_t)v * (size_t)mi_stride;
        const uint8_t *pwt = wt_base + (size_t)v * (size_t)wt_stride;
        float px = 0.0f, py = 0.0f, pz = 0.0f;
        float onx = 0.0f, ony = 0.0f, onz = 0.0f;
        for (int k = 0; k < units; k++) {
            float w; memcpy(&w, pwt + k * 4, 4);
            if (w == 0.0f) continue;
            uint32_t b = (g_mi_type == GL_UNSIGNED_SHORT)
                         ? ((const uint16_t *)pmi)[k]
                         : pmi[k];
            if (b >= OES_MAX_PALETTE_MATRICES) b = 0;
            const GLfloat *M = g_palette_mtx[b];
            px += w * (M[0] * vx + M[4] * vy + M[8]  * vz + M[12]);
            py += w * (M[1] * vx + M[5] * vy + M[9]  * vz + M[13]);
            pz += w * (M[2] * vx + M[6] * vy + M[10] * vz + M[14]);
            if (do_nrm) {
                onx += w * (M[0] * nx + M[4] * ny + M[8]  * nz);
                ony += w * (M[1] * nx + M[5] * ny + M[9]  * nz);
                onz += w * (M[2] * nx + M[6] * ny + M[10] * nz);
            }
        }
        s_skin_v[v * 3 + 0] = px;
        s_skin_v[v * 3 + 1] = py;
        s_skin_v[v * 3 + 2] = pz;
        if (do_nrm) {
            s_skin_n[v * 3 + 0] = onx;
            s_skin_n[v * 3 + 1] = ony;
            s_skin_n[v * 3 + 2] = onz;
        }
    }

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glLoadIdentity();
    glVertexPointer(3, GL_FLOAT, 0, s_skin_v);
    if (do_nrm) glNormalPointer(GL_FLOAT, 0, s_skin_n);

    glDrawElements(mode, count, type, indices);

    glVertexPointer(g_vp_size, (GLenum)g_vp_type, g_vp_stride, G(g_vp_ptr));
    if (do_nrm) glNormalPointer((GLenum)g_nrm_type, g_nrm_stride, G(g_nrm_ptr));
    glPopMatrix();
    return 1;
}
