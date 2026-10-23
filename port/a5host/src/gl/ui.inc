static void ui_dump_line(const char* kind, uint32_t mode, int count, ArrSpec* va, ArrSpec* ta,
                         const unsigned char* ib, int isz) {
    if (ui_frame != a5gl_ui_dump_frame || !va->size || count <= 0) return;
    static int cap = 0;
    if (cap > 400) return;
    cap++;
    int esz = (va->type == GL_BYTE || va->type == GL_UNSIGNED_BYTE) ? 1 :
              (va->type == GL_SHORT || va->type == GL_UNSIGNED_SHORT) ? 2 : 4;
    float minx = 1e9f, miny = 1e9f, maxx = -1e9f, maxy = -1e9f;
    int stride = va->stride ? va->stride : va->size * esz;
    unsigned char raw[16];
    for (int i = 0; i < count && i < 4096; i++) {
        int vi = i;
        if (ib) vi = (isz == 2) ? ((const unsigned short*)ib)[i] : ib[i];
        read_mem(va->ptr + (uint32_t)(vi * stride), raw, 8);
        float x, y;
        if (esz == 2) { x = (float)(*(int16_t*)raw); y = (float)(*(int16_t*)(raw+2)); }
        else if (esz == 1) { x = (float)raw[0]; y = (float)raw[1]; }
        else { x = *(float*)raw; y = *(float*)(raw+4); }
        if (x < minx) minx = x; if (x > maxx) maxx = x;
        if (y < miny) miny = y; if (y > maxy) maxy = y;
    }
    printf("[ui] %s n=%d tex=%u box=(%.0f,%.0f)-(%.0f,%.0f)", kind, count, last_bound_emu, minx, miny, maxx, maxy);
    if (kind[0] == 'E') {
        int b0 = 0;
        void (*act0)(int) = (void(*)(int))gl_load("glActiveTexture");
        if (act0) act0(0x84C0);   // query unit0 explicitly (the active unit may be 1 here)
        ((void(*)(unsigned,int*))gl_load("glGetIntegerv"))(0x8069, &b0);
        int b1 = 0;
        if (act0) {
            act0(0x84C1);
            ((void(*)(unsigned,int*))gl_load("glGetIntegerv"))(0x8069, &b1);
            act0(0x84C0);
        }
        unsigned char (*ie3)(unsigned) = (unsigned char(*)(unsigned))gl_load("glIsEnabled");
        float curcol[4] = {0,0,0,0};
        ((void(*)(unsigned,float*))gl_load("glGetFloatv"))(0x0B00, curcol);
        printf(" realbind=%d bind1=%d light=%d l0=%d carr=%d varr=%d curcol=(%.2f,%.2f,%.2f,%.2f)",
               b0, b1, ie3(0x0B50), ie3(0x4000), ie3(0x8076), ie3(0x8074),
               curcol[0], curcol[1], curcol[2], curcol[3]);
        {
            // read the engine's staticForced globals from emulated memory
            float fv[4] = {0,0,0,0};
            if (p_uc_mem_read(g_uc, 0x101f7c30, fv, 16) == 0) {
                printf(" staticForced=(%.2f,%.2f,%.2f,%.2f)", fv[0], fv[1], fv[2], fv[3]);
            }
        }
        // dump the vertex color range (the baked paint/shading)
        if (carr.size >= 3 && carr.type == 0x1401) {
            int cstride = carr.stride ? carr.stride : carr.size;
            int rmin = 255, gmin = 255, bmin = 255, rmax = 0, gmax = 0, bmax = 0;
            long rs = 0, gs = 0, bs = 0;
            for (int i = 0; i < count; i++) {
                unsigned char c[4];
                read_mem(carr.ptr + (uint32_t)(i * cstride), c, 4);
                if (c[0] < rmin) rmin = c[0]; if (c[0] > rmax) rmax = c[0];
                if (c[1] < gmin) gmin = c[1]; if (c[1] > gmax) gmax = c[1];
                if (c[2] < bmin) bmin = c[2]; if (c[2] > bmax) bmax = c[2];
                rs += c[0]; gs += c[1]; bs += c[2];
            }
            printf(" colrange=(%d,%d,%d)-(%d,%d,%d) colmean=(%ld,%ld,%ld)",
                   rmin, gmin, bmin, rmax, gmax, bmax, rs / count, gs / count, bs / count);
        }
        // one-shot GPU texture dump for a car submesh draw (the ground truth)
        {
            static int car_tex_dumped = 0;
            static int rim_tex_dumped = 0;
            static int body_tex_dumped = 0;
            int want_rim = (count == 6) && !rim_tex_dumped;
            int want_body = (count > 800) && !body_tex_dumped;
            // only car-local draws (the world meshes use 8.8 coords in the tens of thousands)
            if (maxx > 300 || minx < -300 || maxy > 300 || miny < -300) { want_rim = 0; want_body = 0; }
            if (GL_DEBUG && !car_tex_dumped && count == 354) {
                car_tex_dumped = 1;
                int tw = 0, th = 0;
                ((void(*)(unsigned,int,unsigned,int*))gl_load("glGetTexLevelParameteriv"))(0x0DE1, 0, 0x1000, &tw);
                ((void(*)(unsigned,int,unsigned,int*))gl_load("glGetTexLevelParameteriv"))(0x0DE1, 0, 0x1001, &th);
                printf(" gpudump: bound tex %dx%d", tw, th);
                if (tw > 0 && tw <= 1024 && th > 0 && th <= 1024) {
                    unsigned char* px = (unsigned char*)malloc((size_t)tw * th * 4);
                    ((void(*)(unsigned,int,unsigned,unsigned,void*))gl_load("glGetTexImage"))(0x0DE1, 0, 0x1908, 0x1401, px);
                    FILE* f = fopen("..\\turntable\\gpu_car_body.rgba", "wb");
                    if (f) { fwrite(px, 1, (size_t)tw * th * 4, f); fclose(f); printf(" dumped ..\\turntable\\gpu_car_body.rgba"); }
                    printf(" px(0,0)=%u,%u,%u,%u px(mid)=%u,%u,%u,%u",
                           px[0], px[1], px[2], px[3],
                           px[((size_t)(th/2)*tw + tw/2)*4], px[((size_t)(th/2)*tw + tw/2)*4+1],
                           px[((size_t)(th/2)*tw + tw/2)*4+2], px[((size_t)(th/2)*tw + tw/2)*4+3]);
                    free(px);
                }
            }
            if (GL_DEBUG && (want_rim || want_body)) {
                int tw = 0, th = 0;
                void (*act0)(int) = (void(*)(int))gl_load("glActiveTexture");
                if (act0) act0(0x84C0);
                ((void(*)(unsigned,int,unsigned,int*))gl_load("glGetTexLevelParameteriv"))(0x0DE1, 0, 0x1000, &tw);
                ((void(*)(unsigned,int,unsigned,int*))gl_load("glGetTexLevelParameteriv"))(0x0DE1, 0, 0x1001, &th);
                const char* which = want_rim ? "rim" : "body";
                if (want_rim) rim_tex_dumped = 1; else body_tex_dumped = 1;
                printf(" gpudump-%s: bound tex %dx%d count=%d", which, tw, th, count);
                if (tw > 0 && tw <= 1024 && th > 0 && th <= 1024) {
                    unsigned char* px = (unsigned char*)malloc((size_t)tw * th * 4);
                    ((void(*)(unsigned,int,unsigned,unsigned,void*))gl_load("glGetTexImage"))(0x0DE1, 0, 0x1908, 0x1401, px);
                    char gp[160];
                    snprintf(gp, sizeof(gp), "..\\turntable\\gpu_%s.rgba", which);
                    FILE* f = fopen(gp, "wb");
                    if (f) { fwrite(px, 1, (size_t)tw * th * 4, f); fclose(f); printf(" dumped %s", gp); }
                    printf(" px(0,0)=%u,%u,%u,%u px(mid)=%u,%u,%u,%u",
                           px[0], px[1], px[2], px[3],
                           px[((size_t)(th/2)*tw + tw/2)*4], px[((size_t)(th/2)*tw + tw/2)*4+1],
                           px[((size_t)(th/2)*tw + tw/2)*4+2], px[((size_t)(th/2)*tw + tw/2)*4+3]);
                    free(px);
                }
            }
        }
    }
    if (ta && ta->size) {
        // full UV range over all vertices (first/last alone can mislead)
        float umin = 1e9f, vmin = 1e9f, umax = -1e9f, vmax = -1e9f;
        double usum = 0, vsum = 0;
        int stride2 = ta->stride ? ta->stride : (ta->size == 2 && ta->type == GL_FLOAT ? 8 : 0);
        if (stride2) {
            for (int i = 0; i < count; i++) {
                unsigned char raw[8];
                read_mem(ta->ptr + (uint32_t)(i * stride2), raw, 8);
                float u = *(float*)raw, v = *(float*)(raw + 4);
                if (u < umin) umin = u; if (u > umax) umax = u;
                if (v < vmin) vmin = v; if (v > vmax) vmax = v;
                usum += u; vsum += v;
            }
            printf(" uvfull=(%.3f,%.3f)-(%.3f,%.3f) uvmean=(%.3f,%.3f)", umin, vmin, umax, vmax,
                   usum / count, vsum / count);
        } else {
            float u0 = 0, v0 = 0, u1 = 0, v1 = 0;
            if (ta->type == GL_FLOAT) {
                u0 = uf32m(ta->ptr); v0 = uf32m(ta->ptr+4);
                int off = (count - 1) * (ta->stride ? ta->stride : 8);
                u1 = uf32m(ta->ptr + off); v1 = uf32m(ta->ptr + off + 4);
            }
            printf(" uv=(%.3f,%.3f)-(%.3f,%.3f)", u0, v0, u1, v1);
        }
    }
    {
        unsigned char (*ie)(unsigned) = (unsigned char(*)(unsigned))gl_load("glIsEnabled");
        void (*gi)(unsigned,int*) = (void(*)(unsigned,int*))gl_load("glGetIntegerv");
        void (*gf)(unsigned,float*) = (void(*)(unsigned,float*))gl_load("glGetFloatv");
        void (*act)(int) = (void(*)(int))gl_load("glActiveTexture");
        void (*gte)(unsigned,unsigned,int*) = (void(*)(unsigned,unsigned,int*))gl_load("glGetTexEnviv");
        int bs = 0, bd = 0; float aref = 0;
        gi(0x0BE0, &bs); gi(0x0BE1, &bd); gf(0x0BC2, &aref);
        int vp[4] = {0,0,0,0}; gi(0x0BA2, vp);
        act(0x84C1); int t2d1 = ie(0x0DE1); act(0x84C0);
        printf(" vp=[%d,%d,%d,%d] tex2d1=%d depth=%d depthw=%d", vp[0], vp[1], vp[2], vp[3], t2d1, ie(0x0B71), (int)({int m=0; gi(0x0B72,&m); m;}));
        int m0 = -1; 
        act(0x84C0); gte(0x2300, 0x2200, &m0); act(0x84C0);
        float mv[16], pr[16];
        gf(0x0BA6, mv); gf(0x0BA7, pr);
        printf(" mv=[%.2f %.2f %.2f %.2f | %.2f %.2f %.2f %.2f | %.2f %.2f %.2f %.2f | %.2f %.2f %.2f %.2f]",
               mv[0],mv[1],mv[2],mv[3],mv[4],mv[5],mv[6],mv[7],mv[8],mv[9],mv[10],mv[11],mv[12],mv[13],mv[14],mv[15]);
        printf(" pr=[%.4f %.4f %.4f %.4f | %.4f %.4f %.4f %.4f]", pr[0],pr[1],pr[2],pr[3],pr[4],pr[5],pr[6],pr[7]);
        printf(" atest=%d(%.2f) blend=%d[%#x,%#x] tex2d0=%d env0=%#x", ie(0x0BC0), aref, ie(0x0BE2), bs, bd, ie(0x0DE1), m0);
    }
    if (carr.size) {
        unsigned char col[4] = {0,0,0,0};
        read_mem(carr.ptr, col, carr.size < 4 ? carr.size : 4);
        printf(" col=(%u,%u,%u,%u)", col[0], col[1], col[2], col[3]);
    }
    printf("\n");
}
