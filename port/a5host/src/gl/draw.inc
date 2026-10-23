// ---------------------------------------------------------------- draws
static long long de_pre_ticks = 0, de_call_ticks = 0, de_n = 0;
static long long de_ib_ticks = 0, de_ba_ticks = 0;
static void draw_elements(uint32_t mode, int count, unsigned itype, uint32_t iptr) {
    if (count <= 0) return;
    long long _t0 = qpc_freq_gl > 0 ? qpc_gl() : 0;
    { // debug: skip a specific submesh draw to identify it on screen
        static int skip_n = -2;
        if (skip_n == -2) { const char* s = getenv("A5GL_SKIP"); skip_n = s ? atoi(s) : -1; }
        if (skip_n == count) return;
    }
    // dump the wheel draw's UVs once (maps the wheel mesh onto the atlas)
    size_t isz = (itype == GL_UNSIGNED_SHORT) ? 2 : 1;
    size_t need = (size_t)count * isz;
    // reusable index buffer (was malloc/free per draw - 113k draws per race)
    static unsigned char* ib_buf = NULL;
    static size_t ib_cap = 0;
    if (need > ib_cap) {
        free(ib_buf);
        ib_buf = (unsigned char*)malloc(need ? need : 16);
        ib_cap = ib_buf ? need : 0;
    }
    unsigned char* ib = ib_buf;
    read_mem(iptr, ib, (size_t)count * isz);
    if ((count == 114 || count == 1752 || count == 6) && getenv("A5_DUMP_WHEEL_UV") && tarr_valid[0] && tarr[0].size == 2) {
        static int wd = 0;
        if (wd < 80) {
            wd++;
            FILE* f = fopen("..\\turntable\\wheel_uvs.txt", wd == 1 ? "w" : "a");
            if (f) {
                fprintf(f, "# draw %d count=%d tex=%u stride=%d itype=%#x\n", wd, count, last_bound_emu, tarr[0].stride, itype);
                int stride = tarr[0].stride ? tarr[0].stride : 8;
                for (int i = 0; i < count; i++) {
                    int vi = (isz == 2) ? ((unsigned short*)ib)[i] : ib[i];
                    float u = uf32m(tarr[0].ptr + vi * stride), v = uf32m(tarr[0].ptr + vi * stride + 4);
                    fprintf(f, "%d idx=%d uv=%.4f %.4f", i, vi, u, v);
                    if (count == 6 && i < 4) {
                        // full raw record for the rim quads
                        unsigned char rec[44]; read_mem(varr.ptr + (uint32_t)vi * stride, rec, 44);
                        fprintf(f, " rec=");
                        for (int k = 0; k < 44; k++) fprintf(f, "%02x", rec[k]);
                    }
                    fprintf(f, "\n");
                }
                fclose(f);
            }
        }
    }
    // Dense remap: the engine's indices point into big shared vertex buffers
    // (maxidx ~20k for ~300-vertex draws). Remapping the used vertices to dense
    // indices lets every array be gathered tight - the old value-indexed span
    // copy was the single biggest cost in the frame (~150us per draw).
    int maxidx = 0;
    for (int i = 0; i < count; i++) {
        int v = (isz == 2) ? ((unsigned short*)ib)[i] : ib[i];
        if (v > maxidx) maxidx = v;
    }
    if ((uint32_t)(maxidx + 1) > vmap_cap) {
        free(vmap_tab); free(vgen_tab);
        vmap_cap = (uint32_t)maxidx + 1 + 1024;
        vmap_tab = (uint32_t*)malloc(vmap_cap * sizeof(uint32_t));
        vgen_tab = (uint32_t*)calloc(vmap_cap, sizeof(uint32_t));
    }
    if (need > remap_ib_cap) {
        free(remap_ib);
        remap_ib = (unsigned char*)malloc(need ? need : 16);
        remap_ib_cap = remap_ib ? need : 0;
    }
    int nv = count;
    if (remap_ib && vmap_tab && vgen_tab) {
        vmap_gen++;
        nv = 0;
        for (int i = 0; i < count; i++) {
            int v = (isz == 2) ? ((unsigned short*)ib)[i] : ib[i];
            if (vgen_tab[v] != vmap_gen) { vgen_tab[v] = vmap_gen; vmap_tab[v] = (uint32_t)nv++; }
            if (isz == 2) ((unsigned short*)remap_ib)[i] = (unsigned short)vmap_tab[v];
            else remap_ib[i] = (unsigned char)vmap_tab[v];
        }
    }
    long long _ta = qpc_freq_gl > 0 ? qpc_gl() : 0;
    if (remap_ib && vmap_tab && vgen_tab)
        bind_arrays(ib, remap_ib, (int)isz, count, 0, nv);
    else
        bind_arrays(ib, NULL, (int)isz, count, 0, maxidx + 1);
    ui_dump_line("E", mode, count, &varr, tarr_valid[0] ? &tarr[0] : NULL, ib, (int)isz);
    long long _t1 = qpc_freq_gl > 0 ? qpc_gl() : 0;
    if (qpc_freq_gl > 0) { de_ib_ticks += _ta - _t0; de_ba_ticks += _t1 - _ta; }
    typedef void (*de_t)(unsigned,int,unsigned,const void*);
    static de_t de = NULL;                       // cached (was a string search per draw)
    if (!de) de = (de_t)gl_find("glDrawElements")->fn;
    const unsigned char* draw_ib = (remap_ib && vmap_tab && vgen_tab) ? remap_ib : ib;
    if (vbo_ok) {
        // stream the indices through the element VBO (the driver's fast path)
        if (!vbo_idx) vbo_GenBuffers(1, &vbo_idx);
        vbo_BindBuffer(0x8893, vbo_idx);         // GL_ELEMENT_ARRAY_BUFFER
        vbo_BufferData(0x8893, need, NULL, 0x88E0);
        vbo_BufferSubData(0x8893, 0, need, draw_ib);
        de(mode, count, itype, (const void*)0);
    } else {
        de(mode, count, itype, draw_ib);
    }
    if (qpc_freq_gl > 0) {
        long long _t2 = qpc_gl();
        de_pre_ticks += _t1 - _t0; de_call_ticks += _t2 - _t1; de_n++;
    }
    static int etrace_n = 0;
    if (GL_DEBUG && etrace_n < 400 && varr.size) {
        etrace_n++;
        int16_t v0x = 0, v0y = 0;
        if (varr.type == GL_SHORT || varr.type == GL_UNSIGNED_SHORT) {
            unsigned char raw[8]; read_mem(varr.ptr, raw, 4);
            v0x = *(int16_t*)raw; v0y = *(int16_t*)(raw+2);
        }
        if (v0x > 1000 || v0y < 0 || (v0x > 600 && count <= 64)) {
            printf("[draw] Elem mode=%#x count=%d v0=(%d,%d) tex_emu=%u", mode, count, v0x, v0y, last_bound_emu);
            if (tarr_valid[0]) {
                float tu = uf32m(tarr[0].ptr), tv = uf32m(tarr[0].ptr + 4);
                printf(" uv0=%.3f,%.3f", tu, tv);
            }
            printf("\n");
        }
    }
    // ib is a reused static buffer - no free
    keep_flush();
}

static void draw_arrays(uint32_t mode, int first, int count) {
    if (count <= 0) return;
    if (GL_DEBUG) callring_add("DrawArrays(mode=%#x first=%d count=%d)", mode, first, count);
    static int trace_n = 0;
    if (GL_DEBUG && trace_n < 40000) {
        trace_n++;
        int esz = (varr.type == GL_BYTE || varr.type == GL_UNSIGNED_BYTE) ? 1 :
                  (varr.type == GL_SHORT || varr.type == GL_UNSIGNED_SHORT) ? 2 : 4;
        int16_t v0x = 0, v0y = 0;
        if (varr.size && esz <= 2) {
            unsigned char raw[8];
            read_mem(varr.ptr, raw, 4);
            if (esz == 2) { v0x = *(int16_t*)raw; v0y = *(int16_t*)(raw + 2); }
            else { v0x = raw[0]; v0y = raw[1]; }
        } else if (varr.size && esz == 4) {
            float f[2];
            read_mem(varr.ptr, f, 8);
            v0x = (int16_t)f[0]; v0y = (int16_t)f[1];
        }
        int log_this = (trace_n < 400) || (v0x > 600) || (count == 114) || (count == 354) || (count == 288) || (count == 366) || (count == 1752);  // car + column draws
        if (log_this) {
        printf("[draw] Arrays mode=%#x count=%d v0=(%d,%d) tex_real=%u tex_emu=%u", mode, count, v0x, v0y, last_bound_real, last_bound_emu);
        if (carr.size) {
            unsigned char col[4] = {0,0,0,0};
            read_mem(carr.ptr, col, carr.size < 4 ? carr.size : 4);
            printf(" col=(%u,%u,%u,%u)", col[0], col[1], col[2], col[3]);
        }
        if (glf_count && gl_load("glGetIntegerv")) {
            int sc[4] = {0,0,0,0};
            ((void(*)(unsigned,int*))gl_load("glGetIntegerv"))(0x0C10, sc);
            int en = ((unsigned char(*)(unsigned))gl_load("glIsEnabled"))(0x0C11);
            printf(" scissor=%d[%d,%d,%d,%d]", en, sc[0], sc[1], sc[2], sc[3]);
            if (v0x > 600 && (count == 60 || count == 6)) {
                if (v0x == 708 && count == 6) ui_post_probe = 1;
                if (v0x == 680 && count == 60) { ui_post_text = 1; ui_tc_debug = 1; }
                void (*act)(int) = (void(*)(int))gl_load("glActiveTexture");
                void (*gte)(unsigned,unsigned,int*) = (void(*)(unsigned,unsigned,int*))gl_load("glGetTexEnviv");
                unsigned char (*ie)(unsigned) = (unsigned char(*)(unsigned))gl_load("glIsEnabled");
                int m0 = -1, m1 = -1;
                act(0x84C0); gte(0x2300, 0x2200, &m0);
                act(0x84C1); gte(0x2300, 0x2200, &m1);
                act(0x84C0);
                printf(" env0=%#x env1=%#x atest=%d", m0, m1, ie(0x0BC0));
                for (int u = 0; u < 2; u++) {
                    if (!tarr_valid[u]) { printf(" tc%d=INVALID", u); continue; }
                    ArrSpec* s = &tarr[u];
                    printf(" tc%d[ptr=%#x size=%d type=%#x stride=%d en=%d]", u, s->ptr, s->size, s->type, s->stride, tc_enabled[u]);
                }
                // dump first 12 vertices of the bar quad
                for (int vi = 0; vi < 12; vi++) {
                    unsigned char vb[4]; read_mem(varr.ptr + vi * 4, vb, 4);
                    int16_t x = *(int16_t*)vb, y = *(int16_t*)(vb + 2);
                    float tu = 0, tv = 0;
                    if (tarr_valid[0]) { tu = uf32m(tarr[0].ptr + vi * 8); tv = uf32m(tarr[0].ptr + vi * 8 + 4); }
                    printf(" v%d=(%d,%d)uv=%.2f,%.2f", vi, x, y, tu, tv);
                }
                static int texel_probe_done = 0;
                if (!texel_probe_done && (count == 6 && v0x == 708) && ui_frame == a5gl_ui_dump_frame) {
                    texel_probe_done = 1;
                    callring_dump("panel");
                    int t0 = 0, t1 = 0;
                    act(0x84C0); ((void(*)(unsigned,int*))gl_load("glGetIntegerv"))(0x8069, &t0);
                    act(0x84C1); ((void(*)(unsigned,int*))gl_load("glGetIntegerv"))(0x8069, &t1);
                    act(0x84C0);
                    printf(" unit0_tex=%d unit1_tex=%d", t0, t1);
                    typedef void (*gti_t)(unsigned,int,unsigned,unsigned,void*);
                    gti_t gti = (gti_t)gl_load("glGetTexImage");
                    if (gti && t0) {
                        int tw = 0, th = 0;
                        ((void(*)(unsigned,int,unsigned,int*))gl_load("glGetTexLevelParameteriv"))(0x0DE1, 0, 0x1000, &tw);
                        ((void(*)(unsigned,int,unsigned,int*))gl_load("glGetTexLevelParameteriv"))(0x0DE1, 0, 0x1001, &th);
                        printf(" unit0 dims=%dx%d", tw, th);
                        if (tw > 0 && th > 0 && tw <= 4096 && th <= 4096) {
                            unsigned char* px = (unsigned char*)malloc((size_t)tw * th * 4);
                            gti(0x0DE1, 0, 0x1908, 0x1401, px);
                            char path[160];
                            snprintf(path, sizeof(path), "..\\turntable\\ui_tex_unit0_%d_%dx%d.bmp", t0, tw, th);
                            {
                                char rp[160];
                                snprintf(rp, sizeof(rp), "..\\turntable\\ui_tex_unit0_%d_%dx%d.rgba", t0, tw, th);
                                FILE* rf = fopen(rp, "wb");
                                if (rf) { fwrite(px, 1, (size_t)tw * th * 4, rf); fclose(rf); }
                            }
                            FILE* ff = fopen(path, "wb");
                            if (ff) {
                                int row = (tw * 3 + 3) & ~3;
                                unsigned char hdr[54]; memset(hdr, 0, 54);
                                hdr[0]='B'; hdr[1]='M';
                                int size2 = 54 + row * th;
                                *(int*)(hdr+2)=size2; *(int*)(hdr+10)=54; *(int*)(hdr+14)=40;
                                *(int*)(hdr+18)=tw; *(int*)(hdr+22)=th; *(short*)(hdr+26)=1; *(short*)(hdr+28)=24;
                                fwrite(hdr, 1, 54, ff);
                                unsigned char* line = (unsigned char*)malloc(row);
                                for (int y = th - 1; y >= 0; y--) {
                                    for (int x = 0; x < tw; x++) {
                                        const unsigned char* p = px + ((size_t)y * tw + x) * 4;
                                        line[x*3+0]=p[2]; line[x*3+1]=p[1]; line[x*3+2]=p[0];
                                    }
                                    fwrite(line, 1, row, ff);
                                }
                                free(line);
                                fclose(ff);
                                printf(" dumped %s", path);
                            }
                            free(px);
                        }
                    }
                    if (gti && t1) {
                        act(0x84C1);
                        unsigned char* px = (unsigned char*)malloc(1024u*1024u*4u);
                        gti(0x0DE1, 0, 0x1908, 0x1401, px);
                        printf(" unit1(0,0)=%u,%u,%u,%u (64,64)=%u,%u,%u,%u",
                               px[0], px[1], px[2], px[3],
                               px[(64*1024+64)*4], px[(64*1024+64)*4+1], px[(64*1024+64)*4+2], px[(64*1024+64)*4+3]);
                        free(px);
                        act(0x84C0);
                    }
                }   // end texel probe
                    // mid-frame test: draw tex9's button region as an immediate quad and read it back
                    {
                        typedef void (*b_t)(unsigned); typedef void (*ge_t)(void);
                        typedef void (*c4f_t)(float,float,float,float);
                        typedef void (*v2f_t)(float,float); typedef void (*t2f_t)(float,float);
                        typedef void (*bt_t)(unsigned,unsigned);
                        typedef void (*rp_t)(int,int,int,int,unsigned,unsigned,void*);
                        b_t beg = (b_t)gl_load("glBegin"); ge_t glend_fn = (ge_t)gl_load("glEnd");
                        c4f_t c4f = (c4f_t)gl_load("glColor4f");
                        v2f_t v2f = (v2f_t)gl_load("glVertex2f"); t2f_t t2f = (t2f_t)gl_load("glTexCoord2f");
                        bt_t bt = (bt_t)gl_load("glBindTexture");
                        rp_t rp = (rp_t)gl_load("glReadPixels");
                        // text-specific test: redraw the engine's first glyph quad
                        if (count == 60 && v0x == 680) {
                            unsigned char pxT[4] = {0,0,0,0};
                            if (rp) { rp(686, 480 - 79, 1, 1, 0x1908, 0x1401, pxT);
                                      printf(" enginetext@(686,79)=%u,%u,%u,%u", pxT[0], pxT[1], pxT[2], pxT[3]); }
                            unsigned char (*ie)(unsigned) = (unsigned char(*)(unsigned))gl_load("glIsEnabled");
                            float cur[4] = {0,0,0,0};
                            ((void(*)(unsigned,float*))gl_load("glGetFloatv"))(0x0B00, cur);
                            printf(" arrstate: vtx=%d col=%d nrm=%d tc0=%d curcol=%.2f,%.2f,%.2f,%.2f",
                                   ie(0x8074), ie(0x8076), ie(0x8075), ie(0x8078),
                                   cur[0], cur[1], cur[2], cur[3]);
                            {
                                unsigned char cb[8]; read_mem(carr.ptr, cb, 8);
                                unsigned char vb[8]; read_mem(varr.ptr, vb, 8);
                                float tv[2] = {0,0}; read_mem(tarr[0].ptr, tv, 8);
                                printf(" RAW: carr0=(%u,%u,%u,%u) carr1=(%u,%u,%u,%u) varr0=(%d,%d) tc0=(%.3f,%.3f)",
                                       cb[0],cb[1],cb[2],cb[3], cb[4],cb[5],cb[6],cb[7],
                                       (int)(int16_t)(vb[0] | (vb[1]<<8)), (int)(int16_t)(vb[2] | (vb[3]<<8)), tv[0], tv[1]);
                            }                            // read the quad's own vertices/uvs
                            float qx[4], qy[4], qu[4], qv[4];
                            for (int i = 0; i < 4; i++) {
                                unsigned char vb[4]; read_mem(varr.ptr + i * 4, vb, 4);
                                qx[i] = (float)(*(int16_t*)vb); qy[i] = (float)(*(int16_t*)(vb + 2));
                                qu[i] = uf32m(tarr[0].ptr + i * 8); qv[i] = uf32m(tarr[0].ptr + i * 8 + 4);
                            }
                            ((void(*)(unsigned))gl_load("glDisableClientState"))(0x8074);
                            ((void(*)(unsigned))gl_load("glDisableClientState"))(0x8076);
                            ((void(*)(unsigned))gl_load("glDisableClientState"))(0x8078);
                            c4f(1,1,1,1);
                            beg(0x0007);
                            for (int i = 0; i < 4; i++) { t2f(qu[i], qv[i]); v2f(qx[i], qy[i] + 300); }
                            glend_fn();
                            unsigned char pxC[4] = {0,0,0,0};
                            if (rp) { rp(686, 480 - 379, 1, 1, 0x1908, 0x1401, pxC);
                                      printf(" copytext@(686,379)=%u,%u,%u,%u (uv0=%.3f,%.3f uv3=%.3f,%.3f)",
                                             pxC[0], pxC[1], pxC[2], pxC[3], qu[0], qv[0], qu[3], qv[3]); }
                            // manual array draw: copy the arrays to host memory, bind, glDrawArrays
                            {
                                unsigned char* vb2 = (unsigned char*)malloc(60 * 4);
                                unsigned char* cb2 = (unsigned char*)malloc(60 * 4);
                                unsigned char* tb2 = (unsigned char*)malloc(60 * 8);
                                read_mem(varr.ptr, vb2, 60 * 4);
                                read_mem(carr.ptr, cb2, 60 * 4);
                                read_mem(tarr[0].ptr, tb2, 60 * 8);
                                ((void(*)(unsigned))gl_load("glDisableClientState"))(0x8074);
                                ((void(*)(unsigned))gl_load("glDisableClientState"))(0x8076);
                                ((void(*)(unsigned))gl_load("glDisableClientState"))(0x8078);
                                ((void(*)(int,int,int,const void*))gl_load("glVertexPointer"))(2, 0x1402, 0, vb2);
                                ((void(*)(int,int,int,const void*))gl_load("glColorPointer"))(4, 0x1401, 0, cb2);
                                ((void(*)(int,int,int,const void*))gl_load("glTexCoordPointer"))(2, 0x1406, 0, tb2);
                                ((void(*)(unsigned))gl_load("glEnableClientState"))(0x8074);
                                ((void(*)(unsigned))gl_load("glEnableClientState"))(0x8076);
                                ((void(*)(unsigned))gl_load("glEnableClientState"))(0x8078);
                                ((void(*)(unsigned,int,int))gl_load("glDrawArrays"))(0x0004, 0, 60);
                                unsigned char pxM[4] = {0,0,0,0};
                                if (rp) { rp(686, 480 - 79, 1, 1, 0x1908, 0x1401, pxM);
                                          printf(" manualarray@(686,79)=%u,%u,%u,%u", pxM[0], pxM[1], pxM[2], pxM[3]); }
                                printf(" fn: find=%p load=%p", (void*)gl_find("glDrawArrays")->fn, (void*)gl_load("glDrawArrays"));
                                free(vb2); free(cb2); free(tb2);
                            }
                        }
                        // disable the client arrays for immediate mode
                        ((void(*)(unsigned))gl_load("glDisableClientState"))(0x8074);
                        ((void(*)(unsigned))gl_load("glDisableClientState"))(0x8076);
                        ((void(*)(unsigned))gl_load("glDisableClientState"))(0x8078);
                        bt(0x0DE1, 9);
                        c4f(1,1,1,1);
                        beg(0x0007);
                        t2f(0.581f,0.964f); v2f(100,300);
                        t2f(0.635f,0.964f); v2f(160,300);
                        t2f(0.635f,0.930f); v2f(160,340);
                        t2f(0.581f,0.930f); v2f(100,340);
                        glend_fn();
                        unsigned char px4[4] = {0,0,0,0};
                        if (rp) { rp(130, 480 - 320, 1, 1, 0x1908, 0x1401, px4);
                                  printf(" testquad@(130,320)=%u,%u,%u,%u", px4[0], px4[1], px4[2], px4[3]); }
                        bt(0x0DE1, 10);
                        c4f(1,1,1,1);
                        beg(0x0007);
                        t2f(0.581f,0.964f); v2f(200,300);
                        t2f(0.635f,0.964f); v2f(260,300);
                        t2f(0.635f,0.930f); v2f(260,340);
                        t2f(0.581f,0.930f); v2f(200,340);
                        glend_fn();
                        if (rp) { rp(230, 480 - 320, 1, 1, 0x1908, 0x1401, px4);
                                  printf(" testquad2@(230,320)=%u,%u,%u,%u", px4[0], px4[1], px4[2], px4[3]); }
                    }
                }
            if (v0x > 1000) {
                unsigned char ten = ((unsigned char(*)(unsigned))gl_load("glIsEnabled"))(0x0DE1);
                unsigned char ben = ((unsigned char(*)(unsigned))gl_load("glIsEnabled"))(0x0BE2);
                int bf[2] = {0,0};
                ((void(*)(unsigned,int*))gl_load("glGetIntegerv"))(0x0BE0, bf);
                printf(" tex2d=%d blend=%d[%#x,%#x]", ten, ben, bf[0], bf[1]);
            }
        }
        printf("\n");
        }
    }
    bind_arrays(NULL, NULL, 0, count, first, count);
    ui_dump_line("A", mode, count, &varr, tarr_valid[0] ? &tarr[0] : NULL, NULL, 0);
    typedef void (*da_t)(unsigned,int,int);
    static da_t da = NULL;                       // cached (was a string search per draw)
    if (!da) da = (da_t)gl_find("glDrawArrays")->fn;
    da(mode, 0, count);
    if (GL_DEBUG && ui_post_text) {
        ui_post_text = 0;
        typedef void (*rp_t)(int,int,int,int,unsigned,unsigned,void*);
        rp_t rp = (rp_t)gl_load("glReadPixels");
        unsigned char px4[4] = {0,0,0,0};
        if (rp) { rp(686, 480 - 79, 1, 1, 0x1908, 0x1401, px4);
                  printf("[posttext] after engine text draw @(686,79)=%u,%u,%u,%u", px4[0],px4[1],px4[2],px4[3]); }
        unsigned char (*ie)(unsigned) = (unsigned char(*)(unsigned))gl_load("glIsEnabled");
        int au = 0; ((void(*)(unsigned,int*))gl_load("glGetIntegerv"))(0x84E0, &au);
        printf(" state: vtx=%d col=%d tc=%d active=%#x tracked=%#x tc_en0=%d tc_en1=%d", ie(0x8074), ie(0x8076), ie(0x8078),
               au, server_unit, tc_enabled[0], tc_enabled[1]);
        // manual enable test
        printf(" ptrs: find=%p load=%p", (void*)gl_find("glEnableClientState")->fn, (void*)gl_load("glEnableClientState"));
        ((void(*)(unsigned))gl_load("glEnableClientState"))(0x8078);
        printf(" after manual enable tc=%d", ie(0x8078));
        ((void(*)(unsigned))gl_load("glDisableClientState"))(0x8078);
        ((void(*)(unsigned))gl_load("glEnableClientState"))(0x8078);
        printf(" enable2 tc=%d", ie(0x8078));
        printf("\n");
    }
    if (GL_DEBUG && ui_post_probe) {
        ui_post_probe = 0;
        typedef void (*rp_t)(int,int,int,int,unsigned,unsigned,void*);
        rp_t rp = (rp_t)gl_load("glReadPixels");
        unsigned char px4[4] = {0,0,0,0};
        if (rp) {
            rp(730, 480 - 35, 1, 1, 0x1908, 0x1401, px4);
            printf("[post] after UI draw @(730,35)=%u,%u,%u,%u\n", px4[0], px4[1], px4[2], px4[3]);
        }
        // redraw the same quad via immediate mode at y+300 and compare
        if (count >= 4 && varr.type == GL_SHORT && tarr_valid[0] && tarr[0].type == GL_FLOAT) {
            float vx[4], vy[4], tu[4], tv[4];
            for (int i = 0; i < 4; i++) {
                unsigned char vb[4]; read_mem(varr.ptr + i * 4, vb, 4);
                vx[i] = (float)(*(int16_t*)vb); vy[i] = (float)(*(int16_t*)(vb + 2));
                tu[i] = uf32m(tarr[0].ptr + i * 8); tv[i] = uf32m(tarr[0].ptr + i * 8 + 4);
            }
            typedef void (*b_t)(unsigned); typedef void (*ge_t)(void);
            typedef void (*c4f_t)(float,float,float,float);
            typedef void (*v2f_t)(float,float); typedef void (*t2f_t)(float,float);
            typedef void (*ecs_t)(unsigned);
            b_t beg = (b_t)gl_load("glBegin"); ge_t glend_fn = (ge_t)gl_load("glEnd");
            c4f_t c4f = (c4f_t)gl_load("glColor4f");
            v2f_t v2f = (v2f_t)gl_load("glVertex2f"); t2f_t t2f = (t2f_t)gl_load("glTexCoord2f");
            ecs_t ecs = (ecs_t)gl_load("glDisableClientState");
            ecs(0x8074); ecs(0x8076); ecs(0x8078);
            c4f(1,1,1,1);
            beg(0x0007);
            for (int i = 0; i < 4; i++) { t2f(tu[i], tv[i]); v2f(vx[i], vy[i] + 300); }
            glend_fn();
            if (rp) {
                unsigned char px6[4] = {0,0,0,0};
                rp(730, 480 - 335, 1, 1, 0x1908, 0x1401, px6);
                printf("[post] immediate copy @(730,335)=%u,%u,%u,%u (uv0=%.3f,%.3f uv3=%.3f,%.3f)\n",
                       px6[0], px6[1], px6[2], px6[3], tu[0], tv[0], tu[3], tv[3]);
            }
        }
    }
    // manual test: redraw the bar quad via immediate mode to isolate the array path
    static int did_test = 0;
    if (GL_DEBUG && !did_test && varr.size && count == 60) {
        int16_t v0x2 = 0, v0y2 = 0;
        unsigned char raw[8]; read_mem(varr.ptr, raw, 4);
        if (varr.type == GL_SHORT) { v0x2 = *(int16_t*)raw; v0y2 = *(int16_t*)(raw+2); }
        if (v0x2 > 1000) {
            did_test = 1;
            typedef void (*v2f_t)(float,float); typedef void (*b_t)(unsigned);
            typedef void (*e_t)(void); typedef void (*t2f_t)(float,float);
            typedef void (*ecs_t)(unsigned); typedef void (*c4f_t)(float,float,float,float);
            b_t gb = (b_t)gl_load("glBegin"); e_t ge = (e_t)gl_load("glEnd");
            v2f_t v2f = (v2f_t)gl_load("glVertex2f"); t2f_t t2f = (t2f_t)gl_load("glTexCoord2f");
            ecs_t ecs = (ecs_t)gl_load("glDisableClientState");
            c4f_t c4f = (c4f_t)gl_load("glColor4f");
            // disable the arrays so immediate mode works with our color/texcoords
            ecs(0x8074); ecs(0x8076); ecs(0x8078); ecs(0x8075);
            c4f(1,1,1,1);
            gb(0x0007);
            t2f(0.0f, 1.0f); v2f((float)v0x2, (float)v0y2);
            t2f(1.0f, 1.0f); v2f((float)(v0x2 + 110), (float)v0y2);
            t2f(1.0f, 0.0f); v2f((float)(v0x2 + 110), (float)(v0y2 + 380));
            t2f(0.0f, 0.0f); v2f((float)v0x2, (float)(v0y2 + 380));
            ge();
            typedef void (*rp_t)(int,int,int,int,unsigned,unsigned,void*);
            rp_t rp = (rp_t)gl_load("glReadPixels");
            unsigned char px[4] = {0,0,0,0};
            if (rp) { rp(v0x2 + 55, 480 - v0y2 - 100, 1, 1, GL_RGBA, GL_UNSIGNED_BYTE, px);
                      printf("[manual] bar quad at (%d,%d) -> %u,%u,%u,%u\n", v0x2, v0y2, px[0], px[1], px[2], px[3]); }
        }
    }
    keep_flush();
}
