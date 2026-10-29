/* DrawArrays/DrawElements plus index bounds validation.
 *
 * Split out of the original monolithic gles1.c during the
 * 2026-10 project reorganisation.  Shared state lives in gl_globals.c
 * and is declared in gl_internal.h.
 */

#include "gl_internal.h"


void gl_DrawArrays(CPU *c)
{
    g_draw_calls++;
    if (g_weight_ptr || g_matrix_index_ptr) g_skinned_draws++;
    draw_note_state();
    probe_draw((GLenum)A(0), (GLsizei)A(2), 0, 0);
    unsigned id = ++g_draw_serial;
    int solid = solid_env() || draw_id_env();
    SolidSave sv;
    if (solid) solid_begin(&sv);
    if (draw_id_env()) draw_id_color(id);
    draw_log_arrays(id, (GLenum)A(0), (GLint)A(1), (GLsizei)A(2));
    bind_client_tex_units();
    glDrawArrays((GLenum)A(0), (GLint)A(1), (GLsizei)A(2));
    if (solid) solid_end(&sv);
}


void gl_DrawElements(CPU *c)
{
    g_draw_calls++;
    if (g_weight_ptr || g_matrix_index_ptr) g_skinned_draws++;
    draw_note_state();
    probe_draw((GLenum)A(0), (GLsizei)A(1), A(3), (GLenum)A(2));
    if (!validate_draw_elements((GLsizei)A(1), (GLenum)A(2), A(3))) return;
    const void *ind = draw_indices((GLenum)A(0), (GLsizei)A(1), (GLenum)A(2), A(3));
    unsigned id = ++g_draw_serial;
    draw_log(c, id, (GLsizei)A(1), (GLenum)A(0), (GLenum)A(2), A(3));
    if ((c->r[14] >> 16) == 0x13u || (c->r[14] >> 16) == 0x12u) force_section_visible();
    int solid = solid_env() || draw_id_env();
    SolidSave sv;
    if (solid) solid_begin(&sv);
    if (draw_id_env()) draw_id_color(id);
    bind_client_tex_units();
    glDrawElements((GLenum)A(0), (GLsizei)A(1), (GLenum)A(2), ind ? ind : AP(3));
    if (solid) solid_end(&sv);
}


int idx_type_size(GLenum t)
{
    return t == GL_UNSIGNED_BYTE ? 1 : (t == GL_UNSIGNED_SHORT ? 2 : 4);
}


int guest_range_ok(uint32_t addr, uint64_t len)
{
    uint64_t end = (uint64_t)addr + len;
    if (end > 0x100000000ull) return 0;
    uint64_t p = addr;
    while (p < end) {
        MEMORY_BASIC_INFORMATION mbi;
        if (!VirtualQuery(g_mem + p, &mbi, sizeof(mbi))) return 0;
        if (mbi.State != MEM_COMMIT) return 0;
        if (mbi.Protect & (PAGE_NOACCESS | PAGE_GUARD)) return 0;
        uint64_t next = (uint64_t)(uintptr_t)mbi.BaseAddress - (uintptr_t)g_mem + mbi.RegionSize;
        if (next <= p) return 0;
        p = next;
    }
    return 1;
}


int validate_draw_elements(GLsizei count, GLenum type, uint32_t idx)
{
    static int enabled = -1;
    if (enabled < 0) enabled = getenv("RECOMP_VALIDATE_DRAWS") ? 1 : 0;
    if (!enabled) return 1;
    int isz = idx_type_size(type);
    if (!guest_range_ok(idx, (uint64_t)count * isz)) {
        fprintf(stderr, "[gl] BAD indices ptr=%x count=%d type=%x\n", idx, (int)count, (unsigned)type);
        return 0;
    }
    uint32_t maxidx = 0;
    for (GLsizei i = 0; i < count; i++) {
        uint32_t v = type == GL_UNSIGNED_BYTE ? rd8(idx + (uint32_t)i)
                 : type == GL_UNSIGNED_SHORT ? rd16(idx + (uint32_t)i * 2)
                 : rd32(idx + (uint32_t)i * 4);
        if (v > maxidx) maxidx = v;
    }
    int vts = probe_type_size((GLenum)g_vp_type);
    uint64_t vbytes = (uint64_t)(maxidx + 1) * (g_vp_stride ? (uint32_t)g_vp_stride
                                                        : (uint32_t)(g_vp_size * vts));
    uint32_t vh = g_vp_ptr - 16;
    uint32_t vsz = rd32(vh), vmagic = rd32(vh + 4);
    if (vmagic == 0x47554850u && vbytes > (uint64_t)(vsz - 16)) {
        static int sz_logs;
        if (sz_logs++ < 8) {
            fprintf(stderr, "[gl] OOB vertices ptr=%x maxidx=%u bytes=%llu alloc=%x (idx=%x count=%d) tex=%d\n",
                    g_vp_ptr, maxidx, (unsigned long long)vbytes, vsz, idx, (int)count, (int)g_cur_tex_binding);
            for (int i = 0; i < 12 && i < count; i++) {
                uint32_t raw = type == GL_UNSIGNED_SHORT ? rd16(idx + (uint32_t)i * 2) : rd32(idx + (uint32_t)i * 4);
                uint32_t sw = ((raw & 0xff) << 8) | ((raw >> 8) & 0xff);
                fprintf(stderr, "[gl]   idx%d raw=%u swap=%u\n", i, raw, sw);
            }
            for (int i = 0; i < 3; i++) {
                uint32_t a = g_vp_ptr + (uint32_t)i * (g_vp_stride ? (uint32_t)g_vp_stride : 12u);
                fprintf(stderr, "[gl]   v%d = %.3f %.3f %.3f\n", i,
                        probe_comp(a, (GLenum)g_vp_type),
                        probe_comp(a + 4, (GLenum)g_vp_type),
                        probe_comp(a + 8, (GLenum)g_vp_type));
            }
            for (int h = 0; h < 3; h++) {
                int i = (g_vp_hist_n - 1 - h) & 7;
                fprintf(stderr, "[gl]   vhist-%d ptr=%x size=%d type=%x stride=%d\n",
                        h, g_vp_hist[i].ptr, g_vp_hist[i].size,
                        (unsigned)g_vp_hist[i].type, g_vp_hist[i].stride);
            }
        }
        return 0;
    }
    if (!guest_range_ok(g_vp_ptr, vbytes)) {
        static int bad_logs;
        uint32_t ih = idx - 16;
        uint32_t isz2 = rd32(ih), imagic = rd32(ih + 4);
        MEMORY_BASIC_INFORMATION mb;
        VirtualQuery(g_mem + g_vp_ptr + vbytes - 1, &mb, sizeof(mb));
        if (bad_logs++ < 8) {
            fprintf(stderr, "[gl] BAD vertices ptr=%x maxidx=%u bytes=%llu stride=%d size=%d type=%x (idx=%x count=%d)\n",
                    g_vp_ptr, maxidx, (unsigned long long)vbytes, (int)g_vp_stride,
                    (int)g_vp_size, (unsigned)g_vp_type, idx, (int)count);
            fprintf(stderr, "[gl]   valloc=%x magic=%08x  ialloc=%x magic=%08x  endstate=%lx endbase=%p endsize=%llx\n",
                    vsz, vmagic, isz2, imagic, (unsigned long)mb.State,
                    mb.BaseAddress, (unsigned long long)mb.RegionSize);
            for (int h = 0; h < 6; h++) {
                int i = (g_vp_hist_n - 1 - h) & 7;
                fprintf(stderr, "[gl]   vhist-%d ptr=%x size=%d type=%x stride=%d\n",
                        h, g_vp_hist[i].ptr, g_vp_hist[i].size,
                        (unsigned)g_vp_hist[i].type, g_vp_hist[i].stride);
            }
        }
        return 0;
    }
    return 1;
}


unsigned char *filter_index_buffer(GLenum mode, GLsizei count,
                                          GLenum type, uint32_t idx,
                                          uint32_t vcount, size_t bytes)
{
    unsigned char *dst = malloc(bytes);
    if (!dst) return NULL;
    memcpy(dst, G(idx), bytes);
    int dropped = 0;
    int prim = (mode == 4 /* GL_TRIANGLES */) ? 3 : 1;
    for (GLsizei i = 0; i + prim <= count; i += prim) {
        int bad = 0;
        for (int k = 0; k < prim; k++) {
            uint32_t v = type == GL_UNSIGNED_BYTE ? ((unsigned char*)dst)[i+k]
                     : type == GL_UNSIGNED_SHORT ? ((uint16_t*)dst)[i+k]
                     : ((uint32_t*)dst)[i+k];
            if (v >= vcount) { bad = 1; break; }
        }
        if (bad) {
            for (int k = 0; k < prim; k++) {
                if (type == GL_UNSIGNED_BYTE) ((unsigned char*)dst)[i+k] = 0;
                else if (type == GL_UNSIGNED_SHORT) ((uint16_t*)dst)[i+k] = 0;
                else ((uint32_t*)dst)[i+k] = 0;
            }
            dropped++;
        }
    }
    if (dropped && g_oob_filtered < 8) {
        fprintf(stderr, "[gl] filtered %d/%d prims (count=%d vcount=%u idx=%x type=%x)\n",
                dropped, (int)(count / prim), (int)count, vcount, idx, (unsigned)type);
        g_oob_filtered++;
    }
    return dst;
}


const void *draw_indices(GLenum mode, GLsizei count, GLenum type, uint32_t idx)
{
    if (count <= 0 || count > 200000) return NULL;
    uint32_t vh = g_vp_ptr - 16;
    if (rd32(vh + 4) != 0x47554850u) return NULL;
    uint32_t stride = g_vp_stride ? (uint32_t)g_vp_stride
                                  : (uint32_t)(g_vp_size * probe_type_size((GLenum)g_vp_type));
    if (!stride) return NULL;
    uint32_t total = rd32(vh);
    if (total <= 16) return NULL;
    uint32_t vcount = (total - 16) / stride;
    if (!vcount) return NULL;

    int isz = idx_type_size(type);
    size_t bytes = (size_t)count * (size_t)isz;

    for (int i = 0; i < IDX_CACHE_MAX; i++) {
        IdxCache *e = &g_idx_cache[i];
        if (e->idx == idx && e->count == count && e->type == type &&
            e->mode == mode && e->vcount == vcount)
            return e->state ? e->copy : NULL;
    }

    uint32_t maxidx = 0;
    for (GLsizei i = 0; i < count; i++) {
        uint32_t v = type == GL_UNSIGNED_BYTE ? rd8(idx + (uint32_t)i)
                 : type == GL_UNSIGNED_SHORT ? rd16(idx + (uint32_t)i * 2)
                 : rd32(idx + (uint32_t)i * 4);
        if (v > maxidx) maxidx = v;
    }
    IdxCache *e = &g_idx_cache[g_idx_cache_next++ % IDX_CACHE_MAX];
    free(e->copy);
    e->idx = idx; e->count = count; e->type = type; e->mode = mode;
    e->vcount = vcount; e->copy = NULL; e->state = 0;
    if (maxidx < vcount) return NULL;
    e->copy = filter_index_buffer(mode, count, type, idx, vcount, bytes);
    if (e->copy) e->state = 1;
    return e->state ? e->copy : NULL;
}
