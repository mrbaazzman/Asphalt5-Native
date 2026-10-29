/* Frame capture and scene/texture dumps.
 *
 * Split out of the original monolithic gles1.c during the
 * 2026-10 project reorganisation.  Shared state lives in gl_globals.c
 * and is declared in gl_internal.h.
 */

#include "gl_internal.h"

/* Create "work/captures" / "work/textures" on demand so diagnostic dumps work
 * on a fresh checkout where work/ does not exist yet. */
static void ensure_dir(const char *path)
{
    char tmp[260];
    snprintf(tmp, sizeof(tmp), "%s", path);
    for (char *p = tmp + 1; *p; p++) {
        if (*p == '/' || *p == '\\') {
            char sep = *p;
            *p = 0;
            CreateDirectoryA(tmp, NULL);
            *p = sep;
        }
    }
    CreateDirectoryA(tmp, NULL);
}


void scene_dump(void)
{
    static int frame = -2;
    if (frame == -2) {
        const char *s = getenv("RECOMP_SCENE_DUMP");
        frame = s ? atoi(s) : -1;
    }
    if (frame < 0 || (int)g_swap_count != frame) return;
    uint32_t gsym = guest_symbol("g_pMainGameClass");
    if (!gsym) return;
    uint32_t game = rd32(gsym);
    uint32_t scene = game ? rd32(game + 0x1bc8) : 0;
    if (!scene) { fprintf(stderr, "[scene] no scene\n"); return; }
    uint32_t n = rd32(scene + 0x11c64);
    uint32_t arr = rd32(scene + 0x11c60);
    uint32_t n194 = 0, n178 = 0;
    uint32_t l3d = rd32(guest_symbol("g_pLib3D"));
    uint32_t cam = l3d ? rd32(l3d + 0x1314) : 0;
    float eye[3] = {0,0,0}, m[16] = {0};
    if (cam && guest_range_ok(cam, 0x200)) {
        eye[0] = f32_from_bits(rd32(cam + 0x48));
        eye[1] = f32_from_bits(rd32(cam + 0x84));
        eye[2] = f32_from_bits(rd32(cam + 0xc0));
        for (int k = 0; k < 16; k++) m[k] = f32_from_bits(rd32(cam + k * 4));
    }
    fprintf(stderr, "[scene] scene=%x n=%u arr=%x sections=%u l3d=%x cam=%x idx=%d eye=%.1f,%.1f,%.1f\n",
            scene, n, arr, rd32(scene + 0x18c38), l3d, cam,
            game ? (int)rd32(game + 0x1bd0) : -1, eye[0], eye[1], eye[2]);
    for (uint32_t i = 0; i < n && i < 4000; i++) {
        uint32_t ob = rd32(arr + i * 4);
        if (!ob || !guest_range_ok(ob, 0x1ac)) continue;
        uint32_t id = rd16(ob + 0xe8);
        uint32_t ani = rd32(ob + 0x17c);
        uint32_t vt = (ani && guest_range_ok(ani, 0x40)) ? rd32(ani) : 0;
        uint32_t v194 = rd8(ob + 0x194), v178 = rd8(ob + 0x178);
        if (v194) n194++;
        if (v178) n178++;
        uint32_t cls = vt == 0x247098 ? 1 : 0;
        float px = f32_from_bits(rd32(ob + 0x10));
        float py = f32_from_bits(rd32(ob + 0x20));
        float pz = f32_from_bits(rd32(ob + 0x30));
        float rad0 = f32_from_bits(rd32(ob + 0x18c));
        fprintf(stderr, "[all] i=%u id=%u cls=%u v194=%u v178=%u r=%.0f p=%.0f,%.0f,%.0f f=%02x/%02x\n",
                i, id, cls, v194, v178, rad0, px, py, pz, rd8(ob + 0x185), rd8(ob + 0x186));
        if (rd8(ob + 0x186) == 4) {
            fprintf(stderr, "[flag4] i=%u id=%u", i, id);
            for (int k = 0; k < 16; k++) fprintf(stderr, " %.3f", f32_from_bits(rd32(ob + 4 + k * 4)));
            fprintf(stderr, " |");
            for (int k = 0; k < 16; k++) fprintf(stderr, " %.3f", f32_from_bits(rd32(ob + 0x134 + k * 4)));
            fprintf(stderr, "\n");
        }
        if (v194 || v178) {
            float cx = f32_from_bits(rd32(ob + 0x68));
            float cy = f32_from_bits(rd32(ob + 0x6c));
            float cz = f32_from_bits(rd32(ob + 0x70));
            float rad = f32_from_bits(rd32(ob + 0x18c));
            float vx = m[0]*cx + m[1]*cy + m[2]*cz + m[3];
            float vy = m[4]*cx + m[5]*cy + m[6]*cz + m[7];
            float vz = m[8]*cx + m[9]*cy + m[10]*cz + m[11];
            fprintf(stderr,
                    "[scene] i=%u ob=%x id=%u cls=%u vt=%x v194=%u v178=%u f=%02x/%02x "
                    "p=%.1f,%.1f,%.1f c=%.1f,%.1f,%.1f r=%.1f v=%.1f,%.1f,%.1f\n",
                    i, ob, id, cls, vt, v194, v178, rd8(ob + 0x185), rd8(ob + 0x186),
                    px, py, pz, cx, cy, cz, rad, vx, vy, vz);
        }
    }
    {
        const char *ids = getenv("RECOMP_DUMP_TEX_ID");
        while (ids && *ids) {
            int id = atoi(ids);
            GLint w = 0, h = 0;
            glBindTexture(GL_TEXTURE_2D, (GLuint)id);
            glGetTexLevelParameteriv(GL_TEXTURE_2D, 0, GL_TEXTURE_WIDTH, &w);
            glGetTexLevelParameteriv(GL_TEXTURE_2D, 0, GL_TEXTURE_HEIGHT, &h);
            if (w > 0 && h > 0 && w <= 4096 && h <= 4096) {
                unsigned char *px = malloc((size_t)w * h * 4);
                if (px) {
                    glGetTexImage(GL_TEXTURE_2D, 0, GL_RGBA, GL_UNSIGNED_BYTE, px);
                    double ar = 0, ag = 0, ab = 0, aa = 0; int a0 = 0;
                    for (int k = 0; k < w * h; k++) {
                        ar += px[k*4]; ag += px[k*4+1]; ab += px[k*4+2]; aa += px[k*4+3];
                        if (px[k*4+3] == 0) a0++;
                    }
                    double n = (double)w * h;
                    fprintf(stderr, "[texdump] id=%d %dx%d avg=%.1f,%.1f,%.1f,%.1f alpha0=%.1f%%\n",
                            id, w, h, ar/n, ag/n, ab/n, aa/n, 100.0 * a0 / n);
                    char path[180];
                    ensure_dir("work/captures");
                    snprintf(path, sizeof(path), "work/captures/texdump_%d_%dx%d.ppm", id, w, h);
                    FILE *f = fopen(path, "wb");
                    if (f) {
                        fprintf(f, "P6\n%d %d\n255\n", w, h);
                        for (int k = 0; k < w * h; k++) fwrite(&px[k*4], 1, 3, f);
                        fclose(f);
                    }
                    free(px);
                }
            }
            const char *comma = strchr(ids, ',');
            if (!comma) break;
            ids = comma + 1;
        }
    }
    if (l3d) {
        uint32_t rnd = rd32(l3d + 0x11e8);
        uint32_t vt = (rnd && guest_range_ok(rnd, 0x40)) ? rd32(rnd) : 0;
        fprintf(stderr, "[rnd] l3d=%x rnd=%x vt=%x f18=%x f1c=%x cam=%x\n",
                l3d, rnd, vt, (vt && guest_range_ok(vt + 0x20, 4)) ? rd32(vt + 0x18) : 0,
                (vt && guest_range_ok(vt + 0x20, 4)) ? rd32(vt + 0x1c) : 0, cam);
        for (int k = 0; k < 16; k++)
            fprintf(stderr, "[cam] m[%d]=%.4f\n", k, f32_from_bits(rd32(cam + k * 4)));
        fprintf(stderr, "[frust] 12a8=%.4f 12ac=%.4f 12b0=%.4f 12b4=%.4f 12b8=%.4f far=%.1f\n",
                f32_from_bits(rd32(l3d + 0x12a8)), f32_from_bits(rd32(l3d + 0x12ac)),
                f32_from_bits(rd32(l3d + 0x12b0)), f32_from_bits(rd32(l3d + 0x12b4)),
                f32_from_bits(rd32(l3d + 0x12b8)), f32_from_bits(rd32(l3d + 0x1310)));
        {
            GLfloat pr[16];
            glGetFloatv(GL_PROJECTION_MATRIX, pr);
            fprintf(stderr, "[proj] %.4f %.4f %.4f %.4f | %.4f %.4f %.4f %.4f\n",
                    pr[0], pr[5], pr[10], pr[14], pr[2], pr[6], pr[11], pr[15]);
        }
    }
    fprintf(stderr, "[show] road=%u opaque=%u reflb=%u refla=%u transp=%u sky=%u skyrefl=%u\n",
            rd32(0x24ba60), rd32(0x24ba6c), rd32(0x24ba64), rd32(0x24ba68),
            rd32(0x24ba78), rd32(0x24ba98), rd32(0x25127c));
    fprintf(stderr, "[vis] n194=%u n178=%u\n", n194, n178);
    {
        uint32_t rg = scene + 0xa154;
        uint32_t items = rd32(rg);
        uint32_t ni = rd32(rg + 0xa4);
        unsigned hist[8] = {0};
        for (uint32_t i = 0; i < ni && i < 20000; i++) {
            uint32_t t = rd32(items + i * 0x20);
            if (t < 8) hist[t]++;
        }
        uint32_t g_total = guest_symbol("s_xx_total");
        uint32_t g_op = guest_symbol("s_xx_opaque");
        uint32_t g_ab = guest_symbol("s_xx_alpha_blend");
        uint32_t g_ra = guest_symbol("s_xx_reflection_add");
        uint32_t g_rb = guest_symbol("s_xx_reflection_blend");
        uint32_t g_at = guest_symbol("s_xx_alpha_test");
        fprintf(stderr,
                "[items] ni=%u hist=%u,%u,%u,%u,%u,%u,%u,%u counters=%d/%d/%d/%d/%d/%d\n",
                ni, hist[0],hist[1],hist[2],hist[3],hist[4],hist[5],hist[6],hist[7],
                g_total?rd32(g_total):-1, g_op?rd32(g_op):-1, g_ab?rd32(g_ab):-1,
                g_ra?rd32(g_ra):-1, g_rb?rd32(g_rb):-1, g_at?rd32(g_at):-1);
        for (uint32_t i = 0; i < ni && i < 40; i++) {
            uint32_t it = items + i * 0x20;
            uint32_t t = rd32(it);
            uint32_t ob = rd32(it + 4);
            uint32_t id = (ob && guest_range_ok(ob + 0xe8, 2)) ? rd16(ob + 0xe8) : 0;
            fprintf(stderr, "[item] i=%u t=%u ob=%x id=%u grp=%x off=%x flg=%x\n",
                    i, t, ob, id, rd32(it + 0xc), rd32(it + 0x18), rd32(it + 0x14));
        }
    }
    uint32_t rn = rd32(scene + 0x64270);
    uint32_t ra = rd32(scene + 0x64274);
    fprintf(stderr, "[render] n=%u arr=%x\n", rn, ra);
    for (uint32_t i = 0; i < rn && i < 4000; i++) {
        uint32_t ob = rd32(ra + i * 4);
        if (!ob || !guest_range_ok(ob, 0x1ac)) continue;
        fprintf(stderr, "[render] i=%u ob=%x id=%u\n", i, ob, rd16(ob + 0x3a));
    }
}


void capture_frame(void)
{
    static const char *path;
    static int frames[16], nframes = -1;
    static unsigned done_mask;
    if (!path) {
        path = getenv("RECOMP_CAPTURE");
        if (!path) return;
        const char *list = getenv("RECOMP_CAPTURE_FRAMES");
        if (list) {
            nframes = 0;
            while (*list && nframes < 16) {
                frames[nframes++] = atoi(list);
                const char *comma = strchr(list, ',');
                if (!comma) break;
                list = comma + 1;
            }
        } else {
            const char *f = getenv("RECOMP_CAPTURE_FRAME");
            frames[0] = f ? atoi(f) : 300;
            nframes = 1;
        }
    }
    if (nframes <= 0) return;
    int idx = -1;
    for (int i = 0; i < nframes; i++)
        if (!(done_mask & (1u << i)) && g_swap_count == frames[i]) idx = i;
    if (idx < 0) return;
    done_mask |= 1u << idx;
    char name[512];
    if (strstr(path, "%d")) snprintf(name, sizeof(name), path, frames[idx]);
    else if (nframes > 1) snprintf(name, sizeof(name), "%s_%d.ppm", path, frames[idx]);
    else snprintf(name, sizeof(name), "%s", path);
    /* Capture the whole window, not the engine's current sub-viewport. */
    int w = g_client_w, h = g_client_h;
    if (w < 1 || h < 1 || w > 7680 || h > 4320) return;
    unsigned char *buf = malloc((size_t)w * h * 4);
    if (!buf) return;
    glPixelStorei(GL_PACK_ALIGNMENT, 1);
    glReadPixels(0, 0, w, h, GL_RGBA, GL_UNSIGNED_BYTE, buf);
    FILE *f = fopen(name, "wb");
    if (f) {
        fprintf(f, "P6\n%d %d\n255\n", w, h);
        for (int y = h - 1; y >= 0; y--)
            for (int x = 0; x < w; x++)
                fwrite(&buf[((size_t)y * w + x) * 4], 1, 3, f);
        fclose(f);
        fprintf(stderr, "[gl] captured %s %dx%d at swap %d\n", name, w, h, g_swap_count);
    }
    free(buf);
}


void dump_bound_texture(void)
{
    static int enabled = -1;
    if (enabled < 0) enabled = getenv("RECOMP_DUMP_TEX") ? 1 : 0;
    if (!enabled || g_tex_dump_n >= 24) return;
    GLint id = 0, w = 0, h = 0;
    glGetIntegerv(GL_TEXTURE_BINDING_2D, &id);
    if (id <= 0) return;
    for (int i = 0; i < g_tex_dump_n; i++) if (g_tex_dumped[i] == id) return;
    glGetTexLevelParameteriv(GL_TEXTURE_2D, 0, GL_TEXTURE_WIDTH, &w);
    glGetTexLevelParameteriv(GL_TEXTURE_2D, 0, GL_TEXTURE_HEIGHT, &h);
    if (w <= 0 || h <= 0 || w > 4096 || h > 4096) return;
    unsigned char *buf = malloc((size_t)w * h * 4);
    if (!buf) return;
    glGetTexImage(GL_TEXTURE_2D, 0, GL_RGBA, GL_UNSIGNED_BYTE, buf);
    char path[160];
    ensure_dir("work/textures");
    snprintf(path, sizeof(path), "work/textures/tex_%d_%dx%d.ppm", (int)id, (int)w, (int)h);
    {
        char rp[180];
        snprintf(rp, sizeof(rp), "work/textures/tex_%d_%dx%d.rgba", (int)id, (int)w, (int)h);
        FILE *rf = fopen(rp, "wb");
        if (rf) { fwrite(buf, 4, (size_t)w * h, rf); fclose(rf); }
    }
    FILE *f = fopen(path, "wb");
    if (f) {
        fprintf(f, "P6\n%d %d\n255\n", (int)w, (int)h);
        for (int i = 0; i < w * h; i++) fwrite(&buf[i * 4], 1, 3, f);
        fclose(f);
    }
    free(buf);
    g_tex_dumped[g_tex_dump_n++] = (int)id;
    fprintf(stderr, "[gl] dumped tex %d %dx%d\n", (int)id, (int)w, (int)h);
}
