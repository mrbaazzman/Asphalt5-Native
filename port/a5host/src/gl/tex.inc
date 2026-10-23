// ---------------------------------------------------------------- textures
static void convert_pixels(unsigned fmt, unsigned type, int w, int h,
                           const unsigned char* in, unsigned char* out) {
    int n = w * h;
    if (fmt == GL_RGBA && type == GL_UNSIGNED_BYTE) { memcpy(out, in, (size_t)n * 4); return; }
    if (type == GL_UNSIGNED_BYTE) {
        if (fmt == GL_RGB) { for (int i = 0; i < n; i++) { out[i*4]=in[i*3]; out[i*4+1]=in[i*3+1]; out[i*4+2]=in[i*3+2]; out[i*4+3]=255; } }
        else if (fmt == GL_LUMINANCE) { for (int i = 0; i < n; i++) { unsigned char v=in[i]; out[i*4]=v;out[i*4+1]=v;out[i*4+2]=v;out[i*4+3]=255; } }
        else if (fmt == GL_LUMINANCE_ALPHA) { for (int i = 0; i < n; i++) { unsigned char v=in[i*2],a=in[i*2+1]; out[i*4]=v;out[i*4+1]=v;out[i*4+2]=v;out[i*4+3]=a; } }
        else if (fmt == GL_ALPHA) { for (int i = 0; i < n; i++) { out[i*4]=0;out[i*4+1]=0;out[i*4+2]=0;out[i*4+3]=in[i]; } }
        else memset(out, 0, (size_t)n * 4);
    } else if (type == GL_UNSIGNED_SHORT_4_4_4_4) {
        const unsigned short* v = (const unsigned short*)in;
        for (int i = 0; i < n; i++) { unsigned x=v[i]; out[i*4]=(x>>12&15)*17; out[i*4+1]=(x>>8&15)*17; out[i*4+2]=(x>>4&15)*17; out[i*4+3]=(x&15)*17; }
    } else if (type == GL_UNSIGNED_SHORT_5_5_5_1) {
        const unsigned short* v = (const unsigned short*)in;
        for (int i = 0; i < n; i++) { unsigned x=v[i]; out[i*4]=(x>>11&31)<<3; out[i*4+1]=(x>>6&31)<<3; out[i*4+2]=(x>>1&31)<<3; out[i*4+3]=(x&1)?255:0; }
    } else if (type == GL_UNSIGNED_SHORT_5_6_5) {
        const unsigned short* v = (const unsigned short*)in;
        for (int i = 0; i < n; i++) { unsigned x=v[i]; out[i*4]=(x>>11&31)<<3; out[i*4+1]=(x>>5&63)<<2; out[i*4+2]=(x&31)<<3; out[i*4+3]=255; }
    } else memset(out, 0, (size_t)n * 4);
}

static int tex_data_size(unsigned fmt, unsigned type, int w, int h) {
    int n = w * h;
    if (type == GL_UNSIGNED_SHORT_4_4_4_4 || type == GL_UNSIGNED_SHORT_5_5_5_1 || type == GL_UNSIGNED_SHORT_5_6_5)
        return n * 2;
    int per = 4;
    if (fmt == GL_RGB) per = 3;
    else if (fmt == GL_LUMINANCE_ALPHA) per = 2;
    else if (fmt == GL_LUMINANCE || fmt == GL_ALPHA) per = 1;
    return n * per;
}

static void decode_paletted(unsigned fmt, int w, int h, const unsigned char* d, unsigned char* out) {
    int pal4 = (fmt == GL_PALETTE4_RGB8 || fmt == GL_PALETTE4_RGBA8 || fmt == GL_PALETTE4_R5_G6_B5 ||
                fmt == GL_PALETTE4_RGBA4 || fmt == GL_PALETTE4_RGB5_A1);
    int npal = pal4 ? 16 : 256;
    int entries = 2;
    if (fmt == GL_PALETTE4_RGB8 || fmt == GL_PALETTE8_RGB8) entries = 3;
    else if (fmt == GL_PALETTE4_RGBA8 || fmt == GL_PALETTE8_RGBA8) entries = 4;
    unsigned char pal[256][4];
    int off = 0;
    for (int i = 0; i < npal; i++) {
        if (entries == 3) { pal[i][0]=d[off]; pal[i][1]=d[off+1]; pal[i][2]=d[off+2]; pal[i][3]=255; }
        else if (entries == 4) { pal[i][0]=d[off]; pal[i][1]=d[off+1]; pal[i][2]=d[off+2]; pal[i][3]=d[off+3]; }
        else {
            unsigned v = d[off] | (d[off+1] << 8);
            if (fmt == GL_PALETTE4_R5_G6_B5 || fmt == GL_PALETTE8_R5_G6_B5) {
                pal[i][0]=(v>>11&31)<<3; pal[i][1]=(v>>5&63)<<2; pal[i][2]=(v&31)<<3; pal[i][3]=255;
            } else if (fmt == GL_PALETTE4_RGBA4 || fmt == GL_PALETTE8_RGBA4) {
                pal[i][0]=(v>>12&15)*17; pal[i][1]=(v>>8&15)*17; pal[i][2]=(v>>4&15)*17; pal[i][3]=(v&15)*17;
            } else {
                pal[i][0]=(v>>11&31)<<3; pal[i][1]=(v>>6&31)<<3; pal[i][2]=(v>>1&31)<<3; pal[i][3]=(v&1)?255:0;
            }
        }
        off += entries;
    }
    const unsigned char* px = d + off;
    int n = w * h;
    if (pal4) {
        for (int i = 0; i < n; i++) {
            unsigned char b = px[i / 2];
            int idx = (i % 2 == 0) ? (b >> 4) : (b & 15);
            memcpy(out + i * 4, pal[idx], 4);
        }
    } else {
        for (int i = 0; i < n; i++) memcpy(out + i * 4, pal[px[i]], 4);
    }
}

static void padfix_dilate(int w, int h, unsigned char* rgba, const char* tag) {
    // Atlas edge sanitization (default on; A5_NO_PADFIX=1 disables): dilates the
    // magenta padding into island edges so bilinear filtering and the mip chain
    // never bleed magenta into visible texels.
    //
    // The old version copied the whole image and rescanned every pixel on each
    // of the 10 passes - on the 1024x1024 atlases that was a 6-second stall in
    // the loading screen.  Only magenta pixels ever change, so keep a compact
    // list of them: the result is byte-identical but the work is proportional
    // to the padding area (~1-2% of the texture).
    if (getenv("A5_NO_PADFIX") || w < 64 || h < 64) return;
    long npix = (long)w * h, mag = 0;
    for (long i = 0; i < npix; i++) {
        unsigned char* p = rgba + i * 4;
        if (p[0] > 200 && p[1] < 80 && p[2] > 200) mag++;
    }
    if (mag < npix * 15 / 1000 || mag > npix * 25 / 100) return;

    unsigned char* ismag = (unsigned char*)calloc((size_t)npix, 1);
    int* slot = (int*)malloc((size_t)npix * sizeof(int));
    int* list = (int*)malloc((size_t)mag * sizeof(int));
    unsigned char* old = (unsigned char*)malloc((size_t)mag * 4);
    if (!ismag || !slot || !list || !old) {
        free(ismag); free(slot); free(list); free(old);
        return;
    }
    long nm = 0;
    for (long i = 0; i < npix; i++) {
        unsigned char* p = rgba + i * 4;
        if (p[0] > 200 && p[1] < 80 && p[2] > 200) {
            ismag[i] = 1;
            slot[i] = (int)nm;
            list[nm++] = (int)i;
        }
    }
    for (int pass = 0; pass < 10; pass++) {
        // snapshot the previous pass's values for the magenta pixels only
        for (long k = 0; k < nm; k++)
            memcpy(old + k * 4, rgba + (long)list[k] * 4, 4);
        for (long k = 0; k < nm; k++) {
            int pi = list[k];
            if (!ismag[pi]) continue;
            int x = pi % w, y = pi / w;
            int r = 0, g = 0, b = 0, a = 0, n = 0;
            for (int dy = -1; dy <= 1; dy++)
                for (int dx = -1; dx <= 1; dx++) {
                    int yy = y + dy, xx = x + dx;
                    if (xx < 0 || yy < 0 || xx >= w || yy >= h) continue;
                    long qi = (long)yy * w + xx;
                    const unsigned char* q;
                    if (ismag[qi]) q = old + (long)slot[qi] * 4;
                    else q = rgba + qi * 4;
                    if (q[0] > 200 && q[1] < 80 && q[2] > 200) continue;
                    r += q[0]; g += q[1]; b += q[2]; a += q[3]; n++;
                }
            if (n) {
                unsigned char* d = rgba + (long)pi * 4;
                d[0] = (unsigned char)(r / n); d[1] = (unsigned char)(g / n);
                d[2] = (unsigned char)(b / n); d[3] = (unsigned char)(a / n);
            }
        }
        // a filled pixel stops being a source once its new colour is not magenta
        for (long k = 0; k < nm; k++) {
            int pi = list[k];
            unsigned char* p = rgba + (long)pi * 4;
            ismag[pi] = (p[0] > 200 && p[1] < 80 && p[2] > 200) ? 1 : 0;
        }
    }
    free(ismag); free(slot); free(list); free(old);
    printf("[padfix] %s %dx%d: dilated %ld magenta px\n", tag, w, h, mag);
}

static void compressed_tex_image(unsigned target, int level, unsigned ifmt, int w, int h,
                                 int border, int size, uint32_t ptr) {
    static int tex_time = -1;
    if (tex_time < 0) tex_time = getenv("A5_TEX_TIME") ? 1 : 0;
    clock_t tt0 = clock();
    unsigned char* data = (unsigned char*)malloc(size > 0 ? size : 1);
    read_mem(ptr, data, size);
    if (GL_DEBUG) printf("[tex] compressed fmt=%#x %dx%d size=%d bound_real=%u bound_emu=%u\n", ifmt, w, h, size, last_bound_real, last_bound_emu);
    unsigned char* rgba = (unsigned char*)malloc((size_t)w * h * 4);
    int handled = 1;
    if (ifmt == GL_COMPRESSED_RGB_PVRTC_4BPPV1 || ifmt == GL_COMPRESSED_RGBA_PVRTC_4BPPV1 ||
        ifmt == GL_COMPRESSED_RGB_PVRTC_2BPPV1 || ifmt == GL_COMPRESSED_RGBA_PVRTC_2BPPV1) {
        int is2 = (ifmt == GL_COMPRESSED_RGB_PVRTC_2BPPV1 || ifmt == GL_COMPRESSED_RGBA_PVRTC_2BPPV1);
        if (!pvrtc_decode(data, w, h, rgba, is2)) { memset(rgba, 0, (size_t)w * h * 4); handled = 0; }
    } else if (ifmt == 0x8C92 || ifmt == 0x8C93) {
        atc_decode(data, w, h, rgba, ifmt == 0x8C93);
    } else if (ifmt >= GL_PALETTE4_RGB8 && ifmt <= GL_PALETTE8_RGB5_A1) {
        decode_paletted(ifmt, w, h, data, rgba);
    } else {
        memset(rgba, 0, (size_t)w * h * 4);
        handled = 0;
    }
    if (!handled) printf("[gl] compressed format %#x not handled (w=%d h=%d)\n", ifmt, w, h);
    double t_dec = (double)(clock() - tt0) / CLOCKS_PER_SEC;
    // The engine's texture data is stored top-down (row 0 = the image top) like
    // its own raw-RGBA textures; GL wants v=0 at the bottom. Flip decoded rows
    // so compressed textures match the uncompressed ones (fixes flipped glyphs).
    if (handled && h > 1 && !getenv("A5_NO_TEXFLIP")) {
        unsigned char* tmp = (unsigned char*)malloc((size_t)w * 4);
        for (int y = 0; y < h / 2; y++) {
            unsigned char* a = rgba + (size_t)y * w * 4;
            unsigned char* b = rgba + (size_t)(h - 1 - y) * w * 4;
            memcpy(tmp, a, (size_t)w * 4);
            memcpy(a, b, (size_t)w * 4);
            memcpy(b, tmp, (size_t)w * 4);
        }
        free(tmp);
    }
    // A5_BLACKOUT=36,37,38: zero specific emulated textures (draw-time debug:
    // identifies which texture a visual artifact comes from)
    if (handled && getenv("A5_BLACKOUT")) {
        char pat[16], list[128];
        snprintf(pat, sizeof(pat), ",%u,", last_bound_emu);
        snprintf(list, sizeof(list), ",%s,", getenv("A5_BLACKOUT"));
        if (strstr(list, pat)) {
            memset(rgba, 0, (size_t)w * h * 4);
            printf("[blackout] emu=%u %dx%d\n", last_bound_emu, w, h);
        }
    }
    padfix_dilate(w, h, rgba, "compressed");
    double t_conv = (double)(clock() - tt0) / CLOCKS_PER_SEC;
    static int cdump_n = 0;
    int dumpall = getenv("A5GL_DUMPALL") != NULL;
    int want_dump = GL_DEBUG && level == 0 && handled &&
                    ((cdump_n < 6 && w >= 128) || last_bound_emu == 6 || last_bound_emu == 39 || dumpall ||
                     last_bound_emu == 33 || last_bound_emu == 34 || last_bound_emu == 35 ||
                     last_bound_emu == 40 || last_bound_emu == 41);
    if (want_dump) {
        cdump_n++;
        char path[160];
        if (dumpall)
            snprintf(path, sizeof(path), "..\\turntable\\a5host_emu_%u_%dx%d.bmp", last_bound_emu, w, h);
        else
            snprintf(path, sizeof(path), "..\\turntable\\a5host_c_%d_%dx%d.bmp", cdump_n, w, h);
        if (last_bound_emu == 39 || last_bound_emu == 6 || last_bound_emu == 7 ||
            last_bound_emu == 33 || last_bound_emu == 34 || last_bound_emu == 35 ||
            last_bound_emu == 40 || last_bound_emu == 41 || dumpall) {
            char rgapath[160];
            snprintf(rgapath, sizeof(rgapath), "..\\turntable\\a5host_emu_%u.rgba", last_bound_emu);
            FILE* rf = fopen(rgapath, "wb");
            if (rf) { fwrite(rgba, 1, (size_t)w * h * 4, rf); fclose(rf); }
            char rawpath[160];
            snprintf(rawpath, sizeof(rawpath), "..\\turntable\\a5host_emu_%u.raw", last_bound_emu);
            rf = fopen(rawpath, "wb");
            if (rf) { fwrite(data, 1, size, rf); fclose(rf); printf("[tex] saved raw emu=%u size=%d fmt=%#x\n", last_bound_emu, size, ifmt); }
        }
        {
            char rawpath[128];
            snprintf(rawpath, sizeof(rawpath), "..\\turntable\\a5host_c_%d.raw", cdump_n);
            FILE* rf = fopen(rawpath, "wb");
            if (rf) { fwrite(data, 1, size, rf); fclose(rf); }
        }
        FILE* ff = fopen(path, "wb");
        if (ff) {
            int row = (w * 3 + 3) & ~3;
            unsigned char hdr[54]; memset(hdr, 0, 54);
            hdr[0]='B'; hdr[1]='M';
            int size2 = 54 + row * h;
            *(int*)(hdr+2)=size2; *(int*)(hdr+10)=54; *(int*)(hdr+14)=40;
            *(int*)(hdr+18)=w; *(int*)(hdr+22)=h; *(short*)(hdr+26)=1; *(short*)(hdr+28)=24;
            fwrite(hdr, 1, 54, ff);
            unsigned char* line = (unsigned char*)malloc(row);
            for (int y = h - 1; y >= 0; y--) {
                for (int x = 0; x < w; x++) {
                    const unsigned char* p = rgba + (y * w + x) * 4;
                    line[x*3+0]=p[2]; line[x*3+1]=p[1]; line[x*3+2]=p[0];
                }
                fwrite(line, 1, row, ff);
            }
            free(line);
            fclose(ff);
            printf("[tex] dumped %s\n", path);
        }
    }
    typedef void (*ti_t)(unsigned,int,int,int,int,int,unsigned,unsigned,const void*);
    ti_t ti = (ti_t)gl_find("glTexImage2D")->fn;
    ti(target, level, GL_RGBA, w, h, 0, GL_RGBA, GL_UNSIGNED_BYTE, rgba);
    if (tex_time) {
        double t_all = (double)(clock() - tt0) / CLOCKS_PER_SEC;
        if (t_all > 0.03)
            printf("[textime] %dx%d fmt=%#x dec=%.3fs conv=%.3fs upload=%.3fs\n",
                   w, h, ifmt, t_dec, t_conv - t_dec, t_all - t_conv);
    }
    free(rgba); free(data);
}
