/* Draw probes, solid/ID debug modes and draw tracing.
 *
 * Split out of the original monolithic gles1.c during the
 * 2026-10 project reorganisation.  Shared state lives in gl_globals.c
 * and is declared in gl_internal.h.
 */

#include "gl_internal.h"


int gl_stats_env(void)
{
    static int v = -1;
    if (v < 0) v = getenv("RECOMP_GL_STATS") ? 1 : 0;
    return v;
}


int probe_type_size(GLenum t)
{
    switch (t) { case GL_BYTE: case GL_UNSIGNED_BYTE: return 1;
                 case GL_SHORT: case GL_UNSIGNED_SHORT: return 2; default: return 4; }
}


float probe_comp(uint32_t addr, GLenum type)
{
    switch (type) {
    case GL_BYTE: return (float)(int8_t)rd8(addr);
    case GL_UNSIGNED_BYTE: return (float)rd8(addr);
    case GL_SHORT: return (float)s16(addr);
    case GL_UNSIGNED_SHORT: return (float)rd16(addr);
    case 0x140c: return (float)((int32_t)rd32(addr) / 65536.0);
    case GL_FLOAT: { uint32_t b = rd32(addr); float f; memcpy(&f, &b, 4); return f; }
    default: return 0.0f;
    }
}


void probe_draw(GLenum mode, GLsizei count, uint32_t indices, GLenum itype)
{
    if (!gl_stats_env() || g_probe_n >= 8 || g_swap_count < 120) return;
    if (!glIsEnabled(GL_NORMAL_ARRAY)) return;
    if (!glIsEnabled(GL_VERTEX_ARRAY)) return;
    g_probe_n++;
    GLint vbo = 0;
    glGetIntegerv(GL_ARRAY_BUFFER_BINDING, &vbo);
    fprintf(stderr, "[probe] draw mode=%x count=%d vbo=%d vtype=%x vsize=%d vstride=%d "
                    "tctype=%x tcsize=%d tcbind=%d\n",
            (unsigned)mode, (int)count, (int)vbo, (unsigned)g_vp_type, (int)g_vp_size,
            (int)g_vp_stride, (unsigned)g_tc_type, (int)g_tc_size, (int)g_cur_tex_binding);
    if (vbo == 0) {
        int stride = g_vp_stride ? g_vp_stride : (g_vp_size * probe_type_size((GLenum)g_vp_type));
        for (int i = 0; i < 6 && i < count; i++) {
            uint32_t a = g_vp_ptr + (uint32_t)i * (uint32_t)stride;
            float x = probe_comp(a, (GLenum)g_vp_type);
            float y = probe_comp(a + probe_type_size((GLenum)g_vp_type), (GLenum)g_vp_type);
            float z = g_vp_size > 2 ? probe_comp(a + 2 * probe_type_size((GLenum)g_vp_type), (GLenum)g_vp_type) : 0;
            fprintf(stderr, "[probe]  v%d %.3f %.3f %.3f\n", i, x, y, z);
        }
    }
    if (indices && !vbo) {
        for (int i = 0; i < 6 && i < count; i++) {
            uint32_t idx = 0;
            if (itype == GL_UNSIGNED_BYTE) idx = rd8(indices + i);
            else if (itype == GL_UNSIGNED_SHORT) idx = rd16(indices + i * 2);
            else idx = rd32(indices + i * 4);
            fprintf(stderr, "[probe]  idx%d=%u\n", i, idx);
        }
    }
    GLfloat mv[16], pr[16];
    glGetFloatv(GL_MODELVIEW_MATRIX, mv);
    glGetFloatv(GL_PROJECTION_MATRIX, pr);
    fprintf(stderr, "[probe] mv %.2f %.2f %.2f %.2f | %.2f %.2f %.2f %.2f | %.2f %.2f %.2f %.2f | %.2f %.2f %.2f %.2f\n",
            mv[0],mv[1],mv[2],mv[3],mv[4],mv[5],mv[6],mv[7],mv[8],mv[9],mv[10],mv[11],mv[12],mv[13],mv[14],mv[15]);
    fprintf(stderr, "[probe] pr %.2f %.2f %.2f %.2f | %.2f %.2f %.2f %.2f | %.2f %.2f %.2f %.2f | %.2f %.2f %.2f %.2f\n",
            pr[0],pr[1],pr[2],pr[3],pr[4],pr[5],pr[6],pr[7],pr[8],pr[9],pr[10],pr[11],pr[12],pr[13],pr[14],pr[15]);
    GLfloat tm[16];
    glGetFloatv(GL_TEXTURE_MATRIX, tm);
    fprintf(stderr, "[probe] tm %.2f %.2f %.2f %.2f | %.2f %.2f %.2f %.2f | %.2f %.2f %.2f %.2f | %.2f %.2f %.2f %.2f\n",
            tm[0],tm[1],tm[2],tm[3],tm[4],tm[5],tm[6],tm[7],tm[8],tm[9],tm[10],tm[11],tm[12],tm[13],tm[14],tm[15]);
    if (g_tc_ptr) {
        int ts = probe_type_size((GLenum)g_tc_type);
        int tstride = g_tc_stride ? g_tc_stride : g_tc_size * ts;
        for (int i = 0; i < 6 && i < count; i++) {
            uint32_t a = g_tc_ptr + (uint32_t)i * (uint32_t)tstride;
            float u = probe_comp(a, (GLenum)g_tc_type);
            float v = probe_comp(a + ts, (GLenum)g_tc_type);
            fprintf(stderr, "[probe]  tc%d %.3f %.3f\n", i, u, v);
        }
    }
    {
        GLint fogon = glIsEnabled(GL_FOG), lighton = glIsEnabled(GL_LIGHTING);
        GLint blend = glIsEnabled(GL_BLEND), alpha = glIsEnabled(GL_ALPHA_TEST);
        GLfloat fc[4] = { 0,0,0,0 }, fs[1] = { 0 }, fe[1] = { 0 };
        glGetFloatv(GL_FOG_COLOR, fc);
        glGetFloatv(GL_FOG_START, fs);
        glGetFloatv(GL_FOG_END, fe);
        GLint binds[4], modes[4], ens[4];
        for (int u = 0; u < 4; u++) {
            if (pglActiveTexture) pglActiveTexture(0x84C0 + u);
            binds[u] = 0; modes[u] = 0; ens[u] = glIsEnabled(GL_TEXTURE_2D);
            glGetIntegerv(0x8069 /* GL_TEXTURE_BINDING_2D */, &binds[u]);
            glGetTexEnviv(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, &modes[u]);
        }
        if (pglActiveTexture) pglActiveTexture(0x84C0 + (GLenum)(g_active_tex_unit >= 0 ? g_active_tex_unit : 0));
        fprintf(stderr, "[probe] state fog=%d(%.2f %.2f %.2f @%.1f..%.1f) light=%d blend=%d alpha=%d\n",
                fogon, fc[0], fc[1], fc[2], fs[0], fe[0], lighton, blend, alpha);
        GLint cullon = glIsEnabled(GL_CULL_FACE), cullmode = 0, frontface = 0;
        GLint depthon = glIsEnabled(GL_DEPTH_TEST), depthfunc = 0;
        glGetIntegerv(GL_CULL_FACE_MODE, &cullmode);
        glGetIntegerv(GL_FRONT_FACE, &frontface);
        glGetIntegerv(GL_DEPTH_FUNC, &depthfunc);
        fprintf(stderr, "[probe] cull=%d mode=%x front=%x depth=%d func=%x\n",
                cullon, (unsigned)cullmode, (unsigned)frontface, depthon, (unsigned)depthfunc);
        fprintf(stderr, "[probe] units en=%d/%d/%d/%d bind=%d/%d/%d/%d mode=%x/%x/%x/%x\n",
                ens[0], ens[1], ens[2], ens[3], binds[0], binds[1], binds[2], binds[3],
                (unsigned)modes[0], (unsigned)modes[1], (unsigned)modes[2], (unsigned)modes[3]);
    }
}


void draw_note_state(void)
{
    if (g_cur_tex_binding) g_draw_tex++; else g_draw_notex++;
    if ((g_draw_calls & 7) == 0) {
        if (glIsEnabled(GL_NORMAL_ARRAY)) g_draw_nrm++;
        if (glIsEnabled(GL_COLOR_ARRAY)) g_draw_col++;
        if (glIsEnabled(GL_TEXTURE_COORD_ARRAY)) g_draw_tc++;
        g_draw_sampled++;
    }
    if (glIsEnabled(GL_NORMAL_ARRAY) && g_swap_count > 120) dump_bound_texture();
}


int solid_env(void)
{
    static int v = -1;
    if (v < 0) v = getenv("RECOMP_SOLID") ? 1 : 0;
    return v;
}


void solid_begin(SolidSave *s)
{
    s->col_array = glIsEnabled(GL_COLOR_ARRAY);
    s->alpha_test = glIsEnabled(GL_ALPHA_TEST);
    s->blend = glIsEnabled(GL_BLEND);
    s->lighting = glIsEnabled(GL_LIGHTING);
    s->fog = glIsEnabled(GL_FOG);
    s->color_mat = glIsEnabled(GL_COLOR_MATERIAL);
    glGetFloatv(GL_CURRENT_COLOR, s->color);
    glGetIntegerv(0x84E0 /* GL_ACTIVE_TEXTURE */, &s->active);
    for (int u = 0; u < 4; u++) {
        if (pglActiveTexture) pglActiveTexture(GL_TEXTURE0 + u);
        s->tex[u] = glIsEnabled(GL_TEXTURE_2D);
        glDisable(GL_TEXTURE_2D);
    }
    if (pglActiveTexture) pglActiveTexture((GLenum)(s->active ? s->active : GL_TEXTURE0));
    glDisableClientState(GL_COLOR_ARRAY);
    glDisable(GL_ALPHA_TEST);
    glDisable(GL_BLEND);
    glDisable(GL_LIGHTING);
    glDisable(GL_FOG);
    glDisable(GL_COLOR_MATERIAL);
    glColor4f(1.0f, 1.0f, 1.0f, 1.0f);
}


void solid_end(const SolidSave *s)
{
    glColor4f(s->color[0], s->color[1], s->color[2], s->color[3]);
    if (s->col_array) glEnableClientState(GL_COLOR_ARRAY);
    if (s->alpha_test) glEnable(GL_ALPHA_TEST);
    if (s->blend) glEnable(GL_BLEND);
    if (s->lighting) glEnable(GL_LIGHTING);
    if (s->fog) glEnable(GL_FOG);
    if (s->color_mat) glEnable(GL_COLOR_MATERIAL);
    for (int u = 0; u < 4; u++) {
        if (pglActiveTexture) pglActiveTexture(GL_TEXTURE0 + u);
        if (s->tex[u]) glEnable(GL_TEXTURE_2D);
    }
    if (pglActiveTexture) pglActiveTexture((GLenum)(s->active ? s->active : GL_TEXTURE0));
}


int draw_id_env(void)
{
    static int v = -1;
    if (v < 0) v = getenv("RECOMP_DRAW_ID") ? 1 : 0;
    return v;
}


void draw_id_color(unsigned id)
{
    unsigned v = id + 1;
    int r = v & 7, g = (v >> 3) & 7, b = (v >> 6) & 7;
    glColor4f((16.0f + r * 32.0f) / 255.0f,
              (16.0f + g * 32.0f) / 255.0f,
              (16.0f + b * 32.0f) / 255.0f, 1.0f);
}


void force_section_visible(void)
{
    if (g_force_vis_frame == g_swap_count) return;
    static int en = -1, target = -1;
    if (en < 0) {
        const char *v = getenv("RECOMP_FORCE_VISIBLE");
        en = v ? 1 : 0;
        target = v ? atoi(v) : -1;
    }
    if (!en) return;
    if (target >= 0 && (int)g_swap_count != target) return;
    g_force_vis_frame = g_swap_count;
    uint32_t gsym = guest_symbol("g_pMainGameClass");
    uint32_t game = gsym ? rd32(gsym) : 0;
    uint32_t scene = game ? rd32(game + 0x1bc8) : 0;
    if (!scene) return;
    uint32_t n = rd32(scene + 0x11c64), arr = rd32(scene + 0x11c60);
    uint32_t forced = 0;
    int all = getenv("RECOMP_FORCE_VISIBLE_ALL") ? 1 : 0;
    for (uint32_t i = 0; i < n && i < 4000; i++) {
        uint32_t ob = rd32(arr + i * 4);
        if (!ob || !guest_range_ok(ob, 0x1ac)) continue;
        if (all || rd8(ob + 0x194)) {
            if (all) wr32(ob + 0x12c, 0);
            wr8(ob + 0x178, 1);
            forced++;
        }
    }
    static int logged;
    if (!logged++) fprintf(stderr, "[vis] forced %u section objects at swap %u\n", forced, g_swap_count);
}


void draw_log_arrays(unsigned id, GLenum mode, GLsizei first, GLsizei count)
{
    int lf = -2;
    static int cached = -2;
    if (cached == -2) {
        const char *s = getenv("RECOMP_DRAW_LOG");
        cached = s ? atoi(s) : -1;
    }
    lf = cached;
    if (lf < 0 || (int)g_swap_count < lf || (int)g_swap_count > lf + 1) return;
    GLfloat mv[16], col[4];
    glGetFloatv(GL_MODELVIEW_MATRIX, mv);
    glGetFloatv(GL_CURRENT_COLOR, col);
    fprintf(stderr,
            "[a] id=%u lr=%08x s=%u mode=%x first=%d n=%d st=%d v=%x tex=%d/%d/%d/%d "
            "blend=%d depth=%d alpha=%d cull=%d colarr=%d nrm=%d "
            "mv=%.1f,%.1f,%.1f col=%.2f,%.2f,%.2f,%.2f\n",
            id, g_swap_count, (unsigned)mode, (int)first, (int)count,
            (int)g_vp_stride, g_vp_ptr, g_tex_bind[0], g_tex_bind[1],
            g_tex_bind[2], g_tex_bind[3], glIsEnabled(GL_BLEND),
            glIsEnabled(GL_DEPTH_TEST), glIsEnabled(GL_ALPHA_TEST),
            glIsEnabled(GL_CULL_FACE), glIsEnabled(GL_COLOR_ARRAY),
            glIsEnabled(GL_NORMAL_ARRAY), mv[12], mv[13], mv[14],
            col[0], col[1], col[2], col[3]);
}


int draw_log_frame(void)
{
    static int v = -2;
    if (v == -2) {
        const char *s = getenv("RECOMP_DRAW_LOG");
        v = s ? atoi(s) : -1;
    }
    return v;
}


void draw_log(CPU *c, unsigned id, GLsizei count, GLenum mode, GLenum itype, uint32_t iptr)
{
    int lf = draw_log_frame();
    if (lf < 0 || (int)g_swap_count < lf || (int)g_swap_count > lf + 1) return;
    GLfloat mv[16], col[4];
    GLint bsrc = 0, bdst = 0;
    GLboolean dm = 1;
    glGetFloatv(GL_MODELVIEW_MATRIX, mv);
    glGetFloatv(GL_CURRENT_COLOR, col);
    glGetIntegerv(GL_BLEND_SRC, &bsrc);
    glGetIntegerv(GL_BLEND_DST, &bdst);
    glGetBooleanv(GL_DEPTH_WRITEMASK, &dm);
    fprintf(stderr,
            "[d] id=%u lr=%08x s=%u mode=%x n=%d type=%x st=%d v=%x tex=%d/%d/%d/%d "
            "blend=%d(%x,%x) depth=%d dm=%d alpha=%d cull=%d colarr=%d "
            "mv=%.1f,%.1f,%.1f col=%.2f,%.2f,%.2f,%.2f\n",
            id, c->r[14], g_swap_count, (unsigned)mode, (int)count, (unsigned)itype,
            (int)g_vp_stride, g_vp_ptr, g_tex_bind[0], g_tex_bind[1],
            g_tex_bind[2], g_tex_bind[3], glIsEnabled(GL_BLEND),
            (unsigned)bsrc, (unsigned)bdst, glIsEnabled(GL_DEPTH_TEST),
            (int)dm, glIsEnabled(GL_ALPHA_TEST), glIsEnabled(GL_CULL_FACE),
            glIsEnabled(GL_COLOR_ARRAY), mv[12], mv[13], mv[14],
            col[0], col[1], col[2], col[3]);
    if (c->r[14] == 0x0012ce94u) {
        static int wp;
        if (wp < 100000) {
            GLint m0 = 0, m1 = 0;
            GLfloat md[4] = {0}, ma[4] = {0}, cur[4] = {0}, ec[4] = {0};
            glGetTexEnviv(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, &m0);
            glGetTexEnvfv(GL_TEXTURE_ENV, GL_TEXTURE_ENV_COLOR, ec);
            if (pglActiveTexture) {
                pglActiveTexture(GL_TEXTURE1);
                glGetTexEnviv(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, &m1);
                pglActiveTexture(GL_TEXTURE0);
            }
            glGetMaterialfv(GL_FRONT, GL_DIFFUSE, md);
            glGetMaterialfv(GL_FRONT, GL_AMBIENT, ma);
            glGetFloatv(GL_CURRENT_COLOR, cur);
            {
                GLfloat mv[16], pr[16]; GLint vp[4];
                glGetFloatv(GL_MODELVIEW_MATRIX, mv);
                glGetFloatv(GL_PROJECTION_MATRIX, pr);
                glGetIntegerv(GL_VIEWPORT, vp);
                uint32_t i0 = (itype == GL_UNSIGNED_SHORT) ? rd16(iptr)
                            : (itype == GL_UNSIGNED_BYTE) ? rd8(iptr) : rd32(iptr);
                uint32_t v = g_vp_ptr + i0 * (uint32_t)g_vp_stride;
                float x = f32_from_bits(rd32(v)), y = f32_from_bits(rd32(v+4)), z = f32_from_bits(rd32(v+8));
                float ex = mv[0]*x+mv[4]*y+mv[8]*z+mv[12];
                float ey = mv[1]*x+mv[5]*y+mv[9]*z+mv[13];
                float ez = mv[2]*x+mv[6]*y+mv[10]*z+mv[14];
                float cx = pr[0]*ex+pr[4]*ey+pr[8]*ez+pr[12];
                float cy = pr[1]*ex+pr[5]*ey+pr[9]*ez+pr[13];
                float cz = pr[2]*ex+pr[6]*ey+pr[10]*ez+pr[14];
                float cw = pr[3]*ex+pr[7]*ey+pr[11]*ez+pr[15];
                uint32_t l3 = rd32(guest_symbol("g_pLib3D"));
                uint32_t cc = l3 ? rd32(l3 + 0x1314) : 0;
                float ctx=0,cty=0,ctz=0;
                if (cc && guest_range_ok(cc, 0x44)) {
                    ctx = f32_from_bits(rd32(cc + 0x0c));
                    cty = f32_from_bits(rd32(cc + 0x1c));
                    ctz = f32_from_bits(rd32(cc + 0x2c));
                }
                fprintf(stderr, "[wmv] vp=%x i0=%u st=%d v=%.1f,%.1f,%.1f eye=%.1f,%.1f,%.1f clip=%.1f,%.1f,%.1f,%.1f mv=%.1f,%.1f,%.1f cam_t=%.1f,%.1f,%.1f pr=%.3f,%.3f,%.3f,%.3f\n",
                        v, i0, (int)g_vp_stride, x,y,z, ex,ey,ez, cx,cy,cz,cw,
                        mv[12],mv[13],mv[14], ctx,cty,ctz, pr[0],pr[5],pr[10],pr[14]);
                (void)vp;
            }
            wp++;
        }
        uint32_t item = c->r[5], obj = c->r[6];
        uint32_t wob = guest_range_ok(item, 0x20) ? rd32(item + 4) : 0;
        uint32_t grp = guest_range_ok(item, 0x20) ? rd32(item + 0xc) : 0;
        uint32_t off = guest_range_ok(item, 0x20) ? rd32(item + 0x18) : 0;
        uint32_t flg = guest_range_ok(item, 0x20) ? rd32(item + 0x14) : 0;
        uint32_t id = (wob && guest_range_ok(wob + 0xe8, 2)) ? rd16(wob + 0xe8) : 0;
        uint32_t itype = guest_range_ok(item, 0x20) ? rd32(item) : 0;
        {
            uint32_t vp = g_vp_ptr, st = (uint32_t)g_vp_stride;
            float x0=f32_from_bits(rd32(vp)), y0=f32_from_bits(rd32(vp+4)), z0=f32_from_bits(rd32(vp+8));
            float x1=f32_from_bits(rd32(vp+st)), y1=f32_from_bits(rd32(vp+st+4)), z1=f32_from_bits(rd32(vp+st+8));
            fprintf(stderr, "[vtx] vp=%x st=%u v0=%.1f,%.1f,%.1f v1=%.1f,%.1f,%.1f\n",
                    vp, st, x0,y0,z0, x1,y1,z1);
        }
        fprintf(stderr,
                "[obj] t=%u item=%x wob=%x id=%u grp=%x off=%x flg=%x obj=%x o20=%x oB0=%x oC0=%x\n",
                itype, item, wob, id, grp, off, flg, obj,
                guest_range_ok(obj, 0x100) ? rd32(obj + 0x20) : 0,
                guest_range_ok(obj, 0x100) ? rd32(obj + 0xb0) : 0,
                guest_range_ok(obj, 0x100) ? rd32(obj + 0xc0) : 0);
    }
    (void)iptr;
}
