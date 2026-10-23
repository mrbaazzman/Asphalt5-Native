// pvrtc.c - PVRTC decoder, ported from mikunyan ext/decoders/native/pvrtc.c
// (MIT license). Output: RGBA8888 bytes. The uint32 "color" packing is
// little-endian r|g<<8|b<<16|a<<24, i.e. byte order [r,g,b,a].
#include "pvrtc.h"
#include <stdlib.h>
#include <string.h>

typedef struct { int r, g, b, a; } TexelColor;
typedef struct {
    TexelColor a, b;
    int weight[32];
    uint32_t punch;
} TexelInfo;

static const int W_STANDARD[4] = {0, 3, 5, 8};
static const int W_PUNCHTHROUGH[4] = {0, 4, 4, 8};

static long morton_index(long x, long y, long min_dim) {
    long offset = 0, shift = 0;
    for (long mask = 1; mask < min_dim; mask <<= 1, shift++)
        offset |= ((y & mask) | ((x & mask) << 1)) << shift;
    offset |= ((x | y) >> shift) << (shift * 2);
    return offset;
}

static uint16_t rd16(const uint8_t* p) { return (uint16_t)(p[0] | (p[1] << 8)); }
static uint32_t rd32(const uint8_t* p) {
    return (uint32_t)p[0] | ((uint32_t)p[1] << 8) | ((uint32_t)p[2] << 16) | ((uint32_t)p[3] << 24);
}
static uint32_t pack_rgba(int r, int g, int b, int a) {
    return ((uint32_t)(r & 0xff)) | ((uint32_t)(g & 0xff) << 8) |
           ((uint32_t)(b & 0xff) << 16) | ((uint32_t)(a & 0xff) << 24);
}

static void get_texel_colors(const uint8_t* d, TexelInfo* info) {
    uint16_t ca = rd16(d + 4);
    uint16_t cb = rd16(d + 6);
    if (ca & 0x8000) {
        info->a.r = ca >> 10 & 0x1f; info->a.g = ca >> 5 & 0x1f;
        info->a.b = (ca & 0x1e) | (ca >> 4 & 1); info->a.a = 0xf;
    } else {
        info->a.r = (ca >> 7 & 0x1e) | (ca >> 11 & 1);
        info->a.g = (ca >> 3 & 0x1e) | (ca >> 7 & 1);
        info->a.b = (ca << 1 & 0x1c) | (ca >> 2 & 3);
        info->a.a = ca >> 11 & 0xe;
    }
    if (cb & 0x8000) {
        info->b.r = cb >> 10 & 0x1f; info->b.g = cb >> 5 & 0x1f;
        info->b.b = cb & 0x1f; info->b.a = 0xf;
    } else {
        info->b.r = (cb >> 7 & 0x1e) | (cb >> 11 & 1);
        info->b.g = (cb >> 3 & 0x1e) | (cb >> 7 & 1);
        info->b.b = (cb << 1 & 0x1e) | (cb >> 3 & 1);
        info->b.a = cb >> 11 & 0xe;
    }
}

static void get_weights_4bpp(const uint8_t* d, TexelInfo* info) {
    info->punch = 0;
    int mod_mode = d[4] & 1;
    uint32_t bits = rd32(d);
    if (mod_mode) {
        for (int i = 0; i < 16; i++, bits >>= 2) {
            info->weight[i] = W_PUNCHTHROUGH[bits & 3];
            if ((bits & 3) == 2) info->punch |= 1u << i;
        }
    } else {
        for (int i = 0; i < 16; i++, bits >>= 2)
            info->weight[i] = W_STANDARD[bits & 3];
    }
}

static void get_weights_2bpp(const uint8_t* d, TexelInfo* info) {
    info->punch = 0;
    int mod_mode = d[4] & 1;
    uint32_t bits = rd32(d);
    if (mod_mode) {
        int fillflag = d[0] & 1 ? (d[2] & 0x10 ? -1 : -2) : -3;
        for (int y = 0, i = 1; y < 4; ++y & 1 ? --i : ++i)
            for (int x = 0; x < 4; x++, i += 2) info->weight[i] = fillflag;
        for (int y = 0, i = 0; y < 4; ++y & 1 ? ++i : --i)
            for (int x = 0; x < 4; x++, i += 2, bits >>= 2)
                info->weight[i] = W_STANDARD[bits & 3];
        info->weight[0] = (info->weight[0] + 3) & 8;
        if (d[0] & 1) info->weight[20] = (info->weight[20] + 3) & 8;
    } else {
        for (int i = 0; i < 32; i++, bits >>= 1) info->weight[i] = bits & 1 ? 8 : 0;
    }
}

static void apply_color_4bpp(TexelInfo* const info[9], uint32_t buf[32]) {
    static const int IW[4][3] = {{2, 2, 0}, {1, 3, 0}, {0, 4, 0}, {0, 3, 1}};
    TexelColor ca[16], cb[16];
    memset(ca, 0, sizeof(ca)); memset(cb, 0, sizeof(cb));
    for (int y = 0, i = 0; y < 4; y++) {
        for (int x = 0; x < 4; x++, i++) {
            for (int acy = 0, ac = 0; acy < 3; acy++)
                for (int acx = 0; acx < 3; acx++, ac++) {
                    int w = IW[x][acx] * IW[y][acy];
                    ca[i].r += info[ac]->a.r * w; ca[i].g += info[ac]->a.g * w;
                    ca[i].b += info[ac]->a.b * w; ca[i].a += info[ac]->a.a * w;
                    cb[i].r += info[ac]->b.r * w; cb[i].g += info[ac]->b.g * w;
                    cb[i].b += info[ac]->b.b * w; cb[i].a += info[ac]->b.a * w;
                }
            ca[i].r = (ca[i].r >> 1) + (ca[i].r >> 6);
            ca[i].g = (ca[i].g >> 1) + (ca[i].g >> 6);
            ca[i].b = (ca[i].b >> 1) + (ca[i].b >> 6);
            ca[i].a = ca[i].a + (ca[i].a >> 4);
            cb[i].r = (cb[i].r >> 1) + (cb[i].r >> 6);
            cb[i].g = (cb[i].g >> 1) + (cb[i].g >> 6);
            cb[i].b = (cb[i].b >> 1) + (cb[i].b >> 6);
            cb[i].a = cb[i].a + (cb[i].a >> 4);
        }
    }
    TexelInfo* self = info[4];
    uint32_t punch = self->punch;
    for (int i = 0; i < 16; i++, punch >>= 1) {
        int w = self->weight[i];
        buf[i] = pack_rgba((ca[i].r * (8 - w) + cb[i].r * w) / 8,
                           (ca[i].g * (8 - w) + cb[i].g * w) / 8,
                           (ca[i].b * (8 - w) + cb[i].b * w) / 8,
                           punch & 1 ? 0 : (ca[i].a * (8 - w) + cb[i].a * w) / 8);
    }
}

static void apply_color_2bpp(TexelInfo* const info[9], uint32_t buf[32]) {
    static const int IWX[8][3] = {{4,4,0},{3,5,0},{2,6,0},{1,7,0},{0,8,0},{0,7,1},{0,6,2},{0,5,3}};
    static const int IWY[4][3] = {{2,2,0},{1,3,0},{0,4,0},{0,3,1}};
    TexelColor ca[32], cb[32];
    memset(ca, 0, sizeof(ca)); memset(cb, 0, sizeof(cb));
    for (int y = 0, i = 0; y < 4; y++)
        for (int x = 0; x < 8; x++, i++) {
            for (int acy = 0, ac = 0; acy < 3; acy++)
                for (int acx = 0; acx < 3; acx++, ac++) {
                    int w = IWX[x][acx] * IWY[y][acy];
                    ca[i].r += info[ac]->a.r * w; ca[i].g += info[ac]->a.g * w;
                    ca[i].b += info[ac]->a.b * w; ca[i].a += info[ac]->a.a * w;
                    cb[i].r += info[ac]->b.r * w; cb[i].g += info[ac]->b.g * w;
                    cb[i].b += info[ac]->b.b * w; cb[i].a += info[ac]->b.a * w;
                }
            ca[i].r = (ca[i].r >> 2) + (ca[i].r >> 7);
            ca[i].g = (ca[i].g >> 2) + (ca[i].g >> 7);
            ca[i].b = (ca[i].b >> 2) + (ca[i].b >> 7);
            ca[i].a = (ca[i].a >> 1) + (ca[i].a >> 5);
            cb[i].r = (cb[i].r >> 2) + (cb[i].r >> 7);
            cb[i].g = (cb[i].g >> 2) + (cb[i].g >> 7);
            cb[i].b = (cb[i].b >> 2) + (cb[i].b >> 7);
            cb[i].a = (cb[i].a >> 1) + (cb[i].a >> 5);
        }
    static const int POSYA[4][2] = {{1,24},{4,-8},{4,-8},{4,-8}};
    static const int POSYB[4][2] = {{4,8},{4,8},{4,8},{7,-24}};
    static const int POSXL[8][2] = {{3,7},{4,-1},{4,-1},{4,-1},{4,-1},{4,-1},{4,-1},{4,-1}};
    static const int POSXR[8][2] = {{4,1},{4,1},{4,1},{4,1},{4,1},{4,1},{4,1},{5,-7}};
    TexelInfo* self = info[4];
    uint32_t punch = self->punch;
    for (int y = 0, i = 0; y < 4; y++)
        for (int x = 0; x < 8; x++, i++, punch >>= 1) {
            switch (self->weight[i]) {
            case -1:
                self->weight[i] = (info[POSYA[y][0]]->weight[i + POSYA[y][1]] +
                                   info[POSYB[y][0]]->weight[i + POSYB[y][1]] + 1) / 2;
                break;
            case -2:
                self->weight[i] = (info[POSXL[x][0]]->weight[i + POSXL[x][1]] +
                                   info[POSXR[x][0]]->weight[i + POSXR[x][1]] + 1) / 2;
                break;
            case -3:
                self->weight[i] = (info[POSYA[y][0]]->weight[i + POSYA[y][1]] +
                                   info[POSYB[y][0]]->weight[i + POSYB[y][1]] +
                                   info[POSXL[x][0]]->weight[i + POSXL[x][1]] +
                                   info[POSXR[x][0]]->weight[i + POSXR[x][1]] + 2) / 4;
                break;
            }
            int w = self->weight[i];
            buf[i] = pack_rgba((ca[i].r * (8 - w) + cb[i].r * w) / 8,
                               (ca[i].g * (8 - w) + cb[i].g * w) / 8,
                               (ca[i].b * (8 - w) + cb[i].b * w) / 8,
                               punch & 1 ? 0 : (ca[i].a * (8 - w) + cb[i].a * w) / 8);
        }
}

// ---------------------------------------------------------------- ATC
// Ported from Perfare/AssetStudio Texture2DDecoderNative (atc.cpp/bcn.cpp, MIT).
static void copy_block(long bx, long by, long w, long h, long bw, long bh,
                       const uint32_t* buffer, uint32_t* image);
static uint8_t atc_expand_quantized(uint8_t v, int bits) {
    v = (uint8_t)(v << (8 - bits));
    return (uint8_t)(v | (v >> bits));
}

static void atc_decode_block(const uint8_t* src, uint32_t* dst) {
    uint8_t colors[4 * 4];
    uint32_t c0 = (uint32_t)(src[0] | (src[1] << 8));
    uint32_t c1 = (uint32_t)(src[2] | (src[3] << 8));
    if (0 == (c0 & 0x8000)) {
        colors[0] = atc_expand_quantized((c0 >> 0) & 0x1f, 5);
        colors[1] = atc_expand_quantized((c0 >> 5) & 0x1f, 5);
        colors[2] = atc_expand_quantized((c0 >> 10) & 0x1f, 5);
        colors[12] = atc_expand_quantized((c1 >> 0) & 0x1f, 5);
        colors[13] = atc_expand_quantized((c1 >> 5) & 0x3f, 6);
        colors[14] = atc_expand_quantized((c1 >> 11) & 0x1f, 5);
        colors[4] = (5 * colors[0] + 3 * colors[12]) / 8;
        colors[5] = (5 * colors[1] + 3 * colors[13]) / 8;
        colors[6] = (5 * colors[2] + 3 * colors[14]) / 8;
        colors[8] = (3 * colors[0] + 5 * colors[12]) / 8;
        colors[9] = (3 * colors[1] + 5 * colors[13]) / 8;
        colors[10] = (3 * colors[2] + 5 * colors[14]) / 8;
    } else {
        colors[0] = 0; colors[1] = 0; colors[2] = 0;
        colors[8] = atc_expand_quantized((c0 >> 0) & 0x1f, 5);
        colors[9] = atc_expand_quantized((c0 >> 5) & 0x1f, 5);
        colors[10] = atc_expand_quantized((c0 >> 10) & 0x1f, 5);
        colors[12] = atc_expand_quantized((c1 >> 0) & 0x1f, 5);
        colors[13] = atc_expand_quantized((c1 >> 5) & 0x3f, 6);
        colors[14] = atc_expand_quantized((c1 >> 11) & 0x1f, 5);
        colors[4] = (uint8_t)(colors[8] > colors[12] / 4 ? colors[8] - colors[12] / 4 : 0);
        colors[5] = (uint8_t)(colors[9] > colors[13] / 4 ? colors[9] - colors[13] / 4 : 0);
        colors[6] = (uint8_t)(colors[10] > colors[14] / 4 ? colors[10] - colors[14] / 4 : 0);
    }
    for (uint32_t i = 0, next = 8 * 4; i < 16; i++, next += 2) {
        int32_t idx = ((src[next >> 3] >> (next & 7)) & 3) * 4;
        dst[i] = pack_rgba(colors[idx + 2], colors[idx + 1], colors[idx + 0], 255);
    }
}

static void atc_bc3_alpha(const uint8_t* data, uint32_t* outbuf, int channel) {
    uint8_t a[8];
    a[0] = data[0]; a[1] = data[1];
    if (a[0] > a[1]) {
        a[2] = (uint8_t)((a[0] * 6 + a[1]) / 7);
        a[3] = (uint8_t)((a[0] * 5 + a[1] * 2) / 7);
        a[4] = (uint8_t)((a[0] * 4 + a[1] * 3) / 7);
        a[5] = (uint8_t)((a[0] * 3 + a[1] * 4) / 7);
        a[6] = (uint8_t)((a[0] * 2 + a[1] * 5) / 7);
        a[7] = (uint8_t)((a[0] + a[1] * 6) / 7);
    } else {
        a[2] = (uint8_t)((a[0] * 4 + a[1]) / 5);
        a[3] = (uint8_t)((a[0] * 3 + a[1] * 2) / 5);
        a[4] = (uint8_t)((a[0] * 2 + a[1] * 3) / 5);
        a[5] = (uint8_t)((a[0] + a[1] * 4) / 5);
        a[6] = 0;
        a[7] = 255;
    }
    uint8_t* dst = (uint8_t*)outbuf;
    uint64_t d = 0;
    memcpy(&d, data, 8);
    d >>= 16;
    for (int i = 0; i < 16; i++, d >>= 3) dst[i * 4 + channel] = a[d & 7];
}

// ATC_RGBA_EXPLICIT_ALPHA_AMD (0x8C93): the alpha block is 16 raw 4-bit
// values (sequential nibbles), NOT BC3-interpolated endpoints. Using the
// interpolated decode here scrambles glyph/edge alpha badly.
static void atc_explicit_alpha(const uint8_t* data, uint32_t* outbuf, int channel) {
    uint8_t* dst = (uint8_t*)outbuf;
    for (int i = 0; i < 16; i++) {
        int byte = i >> 1;
        int nib = (i & 1) ? (data[byte] >> 4) : (data[byte] & 0x0F);
        dst[i * 4 + channel] = (uint8_t)(nib * 17);
    }
}

int atc_decode(const uint8_t* data, long w, long h, uint8_t* out_rgba, int is_rgba) {
    long nbx = (w + 3) / 4, nby = (h + 3) / 4;
    uint32_t* image = (uint32_t*)out_rgba;
    uint32_t buffer[16];
    const uint8_t* d = data;
    for (long by = 0; by < nby; by++)
        for (long bx = 0; bx < nbx; bx++) {
            if (is_rgba) {
                atc_decode_block(d + 8, buffer);
                atc_explicit_alpha(d, buffer, 3);
                d += 16;
            } else {
                atc_decode_block(d, buffer);
                d += 8;
            }
            copy_block(bx, by, w, h, 4, 4, buffer, image);
        }
    return 1;
}

static void copy_block(long bx, long by, long w, long h, long bw, long bh,
                       const uint32_t* buffer, uint32_t* image) {
    long x = bw * bx;
    long xl = (bw * (bx + 1) > w ? w - bw * bx : bw) * 4;
    const uint32_t* end = buffer + bw * bh;
    for (long y = h - by * bh; buffer < end && y-- > 0; buffer += bw)
        memcpy(image + y * w + x, buffer, (size_t)xl);
}

int pvrtc_decode(const uint8_t* data, long w, long h, uint8_t* out_rgba, int is2bpp) {
    long bw = is2bpp ? 8 : 4;
    long nbx = is2bpp ? (w + 7) / 8 : (w + 3) / 4;
    long nby = (h + 3) / 4;
    long nblocks = nbx * nby;
    long min_blocks = nbx <= nby ? nbx : nby;
    if ((nbx & (nbx - 1)) || (nby & (nby - 1))) return 0;  // power of two

    TexelInfo* texels = (TexelInfo*)malloc(sizeof(TexelInfo) * (size_t)nblocks);
    if (!texels) return 0;

    const uint8_t* d = data;
    for (long i = 0; i < nblocks; i++, d += 8) {
        get_texel_colors(d, &texels[i]);
        if (is2bpp) get_weights_2bpp(d, &texels[i]);
        else get_weights_4bpp(d, &texels[i]);
    }

    uint32_t* image = (uint32_t*)out_rgba;
    uint32_t buffer[32];
    TexelInfo* local[9];
    long pos_x[3], pos_y[3];
    for (long by = 0; by < nby; by++) {
        pos_y[0] = by == 0 ? nby - 1 : by - 1;
        pos_y[1] = by;
        pos_y[2] = by == nby - 1 ? 0 : by + 1;
        for (long bx = 0; bx < nbx; bx++) {
            pos_x[0] = bx == 0 ? nbx - 1 : bx - 1;
            pos_x[1] = bx;
            pos_x[2] = bx == nbx - 1 ? 0 : bx + 1;
            for (long cy = 0, c = 0; cy < 3; cy++)
                for (long cx = 0; cx < 3; cx++, c++)
                    local[c] = &texels[morton_index(pos_x[cx], pos_y[cy], min_blocks)];
            if (is2bpp) apply_color_2bpp(local, buffer);
            else apply_color_4bpp(local, buffer);
            copy_block(bx, by, w, h, bw, 4, buffer, image);
        }
    }
    free(texels);
    return 1;
}
