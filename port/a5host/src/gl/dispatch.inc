// ---------------------------------------------------------------- dispatch
static struct { char name[32]; int count; } glstats[96]; static int glstats_n = 0;
static int stat_slot(const char* name) {
    for (int i = 0; i < glstats_n; i++)
        if (strcmp(glstats[i].name, name) == 0) return i;
    if (glstats_n < 96) {
        snprintf(glstats[glstats_n].name, sizeof(glstats[glstats_n].name), "%s", name);
        glstats[glstats_n].count = 0;
        return glstats_n++;
    }
    return -1;
}

// Per-name cache: the host always passes the same (static) name pointers, so
// resolving the GL entry point + the stat slot + the handler tag once per name
// removes the per-call linear string searches from the ~1.2M calls per race.
typedef struct { const char* name; GLFunc* g; int stat; int tag; int nargs; } GLCacheEntry;
static GLCacheEntry glcache[160]; static int glcache_n = 0;

// Handler tags: assigned once per name. The hot ones are handled by a switch in
// a5gl_call_inner (skipping the strcmp chain below); TAG_TAIL means no special
// handler (go straight to the spec-driven passthrough); anything else falls
// through to the chain, which is only reached for the cold load-time calls.
enum {
    TAG_TAIL = 0, TAG_ACTIVETEX, TAG_DRAWELEM, TAG_DRAWARR, TAG_LOADMAT,
    TAG_ENABLECS, TAG_DISABLECS, TAG_BINDTEX, TAG_CLIENTAT, TAG_TEXCOORDPTR,
    TAG_VERTEXPTR, TAG_COLORPTR, TAG_NORMALPTR, TAG_TEXENVI, TAG_MATRIXMODE,
    TAG_COLOR4F, TAG_BLENDFUNC, TAG_TEXPARAM, TAG_TEXENVFV,
    TAG_ENABLE, TAG_DISABLE,
    TAG_GETSTRING, TAG_GETERROR, TAG_GENTEX, TAG_DELTEX, TAG_COMPTEX,
    TAG_TEXIMAGE, TAG_TEXSUB, TAG_GETFLOATV, TAG_CLEARDEPTH, TAG_MATERIAL,
    TAG_LIGHT, TAG_LIGHTMODEL, TAG_FOG, TAG_STUB,
};
// Keep this table in sync with the handler conditions below.
static const struct { const char* name; int tag; } gl_tags[] = {
    {"glActiveTexture", TAG_ACTIVETEX}, {"glDrawElements", TAG_DRAWELEM},
    {"glDrawArrays", TAG_DRAWARR}, {"glLoadMatrixf", TAG_LOADMAT},
    {"glEnableClientState", TAG_ENABLECS}, {"glDisableClientState", TAG_DISABLECS},
    {"glBindTexture", TAG_BINDTEX}, {"glClientActiveTexture", TAG_CLIENTAT},
    {"glTexCoordPointer", TAG_TEXCOORDPTR}, {"glVertexPointer", TAG_VERTEXPTR},
    {"glColorPointer", TAG_COLORPTR}, {"glNormalPointer", TAG_NORMALPTR},
    {"glTexEnvi", TAG_TEXENVI}, {"glMatrixMode", TAG_MATRIXMODE},
    {"glColor4f", TAG_COLOR4F}, {"glBlendFunc", TAG_BLENDFUNC},
    {"glEnable", TAG_ENABLE}, {"glDisable", TAG_DISABLE},
    {"glTexParameterf", TAG_TEXPARAM}, {"glTexParameteri", TAG_TEXPARAM},
    {"glTexEnvfv", TAG_TEXENVFV}, {"glGetString", TAG_GETSTRING},
    {"glGetError", TAG_GETERROR}, {"glGenTextures", TAG_GENTEX},
    {"glDeleteTextures", TAG_DELTEX}, {"glCompressedTexImage2D", TAG_COMPTEX},
    {"glTexImage2D", TAG_TEXIMAGE}, {"glTexSubImage2D", TAG_TEXSUB},
    {"glGetFloatv", TAG_GETFLOATV}, {"glClearDepthf", TAG_CLEARDEPTH},
    {"glMaterialfv", TAG_MATERIAL}, {"glLightfv", TAG_LIGHT},
    {"glLightModelfv", TAG_LIGHTMODEL}, {"glFogfv", TAG_FOG},
    {"glCurrentPaletteMatrixOES", TAG_STUB}, {"glMatrixIndexPointerOES", TAG_STUB},
    {"glWeightPointerOES", TAG_STUB}, {"glBindBuffer", TAG_STUB},
};
static GLCacheEntry* gl_cache_for(const char* name) {
    for (int i = 0; i < glcache_n; i++)
        if (glcache[i].name == name) return &glcache[i];
    if (glcache_n >= 160) return NULL;
    GLCacheEntry* c = &glcache[glcache_n++];
    c->name = name;
    c->g = gl_find(name);
    c->stat = stat_slot(name);
    c->nargs = c->g ? (int)strlen(c->g->spec) : 0;
    c->tag = TAG_TAIL;
    for (size_t i = 0; i < sizeof(gl_tags)/sizeof(gl_tags[0]); i++)
        if (strcmp(gl_tags[i].name, name) == 0) { c->tag = gl_tags[i].tag; break; }
    return c;
}
static long long gl_bridge_ticks = 0, gl_bridge_calls = 0;
static long long tag_ticks[48]; static long long tag_calls[48];
static int gl_prof_on = -1;

void a5gl_dump_stats(void) {
    for (int i = 0; i < glstats_n; i++)
        if (glstats[i].count > 0) printf("[glstat] %-28s %d\n", glstats[i].name, glstats[i].count);
    if (gl_bridge_ticks)
        printf("[prof] gl bridge: %lld us in %lld calls (%.0f ns/call)\n",
               qpc_freq_gl ? (long long)gl_bridge_ticks * 1000000 / qpc_freq_gl : 0,
               (long long)gl_bridge_calls,
               (qpc_freq_gl && gl_bridge_calls) ? (double)gl_bridge_ticks * 1e9 / qpc_freq_gl / (double)gl_bridge_calls : 0.0);
    for (int t = 1; t < 48; t++)
        if (tag_calls[t]) {
            static const char* tn[] = {"tail","ActiveTex","DrawElem","DrawArr","LoadMat","EnableCS",
                "DisableCS","BindTex","ClientAT","TexCoordPtr","VertexPtr","ColorPtr","NormalPtr",
                "TexEnvi","MatrixMode","Color4f","BlendFunc","TexParam","TexEnvfv","Enable","Disable",
                "GetString","GetError","GenTex","DelTex","CompTex","TexImage","TexSub","GetFloatv",
                "ClearDepth","Material","Light","LightModel","Fog","Stub"};
            const char* nm = (t < (int)(sizeof(tn)/sizeof(tn[0]))) ? tn[t] : "?";
            printf("[prof] tag %-12s %8lld calls %9lld us (%.0f ns/call)\n", nm,
                   tag_calls[t], qpc_freq_gl ? tag_ticks[t] * 1000000 / qpc_freq_gl : 0,
                   (qpc_freq_gl && tag_calls[t]) ? (double)tag_ticks[t] * 1e9 / qpc_freq_gl / (double)tag_calls[t] : 0.0);
        }
    if (de_n)
        printf("[prof] draw split: ib+scan %.0f us, bind_arrays %.0f us, driver %.0f us (%lld draws)\n",
               qpc_freq_gl ? (double)de_ib_ticks * 1e6 / qpc_freq_gl / (double)de_n : 0.0,
               qpc_freq_gl ? (double)de_ba_ticks * 1e6 / qpc_freq_gl / (double)de_n : 0.0,
               qpc_freq_gl ? (double)de_call_ticks * 1e6 / qpc_freq_gl / (double)de_n : 0.0, de_n);
}

uint32_t a5gl_last_bound_emu(void) { return last_bound_emu; }

static uint32_t arg_i(const uint32_t* raw, int i) { return raw[i]; }
static float arg_f(const uint32_t* raw, int i) { float f; memcpy(&f, &raw[i], 4); return f; }

static uint32_t a5gl_call_inner(const char* name, const uint32_t* raw, uint32_t lr);

// timing wrapper (A5_PROF=1): how much of the frame is spent in the GL bridge
uint32_t a5gl_call(const char* name, const uint32_t* raw, uint32_t lr) {
    if (gl_prof_on == -1) {
        gl_prof_on = getenv("A5_PROF") ? 1 : 0;
        if (gl_prof_on && !qpc_freq_gl) {
            LARGE_INTEGER f; QueryPerformanceFrequency(&f); qpc_freq_gl = f.QuadPart;
        }
    }
    if (!gl_prof_on) return a5gl_call_inner(name, raw, lr);
    long long t0 = qpc_gl();
    uint32_t r = a5gl_call_inner(name, raw, lr);
    long long dt = qpc_gl() - t0;
    gl_bridge_ticks += dt;
    gl_bridge_calls++;
    GLCacheEntry* ce = gl_cache_for(name);
    int tag = ce ? ce->tag : 0;
    tag_ticks[tag] += dt; tag_calls[tag]++;
    return r;
}

static uint32_t a5gl_call_inner(const char* name, const uint32_t* raw, uint32_t lr) {
    glring_add(name, raw);
    GLCacheEntry* ce = gl_cache_for(name);
    if (ce && ce->stat >= 0) glstats[ce->stat].count++;
    GLFunc* g = ce ? ce->g : gl_find(name);
    if (!g) { if (GL_DEBUG) printf("[gl] unknown: %s\n", name); return 0; }
    const char* spec = g->spec;
    int n = ce ? ce->nargs : (int)strlen(spec);

    if (strcmp(name, "glViewport") == 0 || strcmp(name, "glScissor") == 0) {
        int x = (int)arg_i(raw, 0), y = (int)arg_i(raw, 1);
        int w = (int)arg_i(raw, 2), h = (int)arg_i(raw, 3);
        int rx = x, ry = y, rw = w, rh = h;
        // The engine's UI is authored in 854x480.  Scale its viewport and
        // scissor rectangles to the real window; leave already-window-sized
        // rectangles alone (raw movie/installer paths use those).
        if (gl_logical_w > 0 && gl_logical_h > 0 &&
            win_w > 0 && win_h > 0 &&
            !(w == win_w && h == win_h)) {
            int x0 = (int)((long long)x * win_w / gl_logical_w);
            int x1 = (int)((long long)(x + w) * win_w / gl_logical_w);
            int y0 = (int)((long long)y * win_h / gl_logical_h);
            int y1 = (int)((long long)(y + h) * win_h / gl_logical_h);
            rx = x0; ry = y0; rw = x1 - x0; rh = y1 - y0;
        }
        if (getenv("A5_GL_VIEWPORT_DEBUG"))
            printf("[gl] %s logical(%d,%d,%d,%d) real(%d,%d,%d,%d) window=%dx%d\n",
                   name, x, y, w, h, rx, ry, rw, rh, win_w, win_h);
        ((void(*)(int,int,int,int))g->fn)(rx, ry, rw, rh);
        return 0;
    }

    // ---- hot handlers (tag-cached: no per-call string comparisons) ----
    switch (ce ? ce->tag : TAG_TAIL) {
    case TAG_ACTIVETEX: {
        server_unit = (int)arg_i(raw, 0);
        if (GL_DEBUG) callring_add("ActiveTexture(unit=%d)", server_unit - GL_TEXTURE0);
        if (server_unit != srv_unit_real) {       // shadow: skip redundant
            srv_unit_real = server_unit;
            ((void(*)(unsigned))g->fn)((unsigned)server_unit);
        }
        return 0;
    }
    case TAG_DRAWELEM: draw_elements(arg_i(raw,0),(int)arg_i(raw,1),arg_i(raw,2),arg_i(raw,3)); return 0;
    case TAG_DRAWARR: draw_arrays(arg_i(raw,0),(int)arg_i(raw,1),(int)arg_i(raw,2)); return 0;
    case TAG_LOADMAT: {
        uint32_t p = raw[0];
        float data[16];
        if (p) read_mem(p, data, 64);
        if (gl_matrix_mode == 0x1701 && getenv("A5_GL_PROJ_DEBUG")) {
            static int pn = 0;
            if (pn++ < 24) {
                printf("[proj] caller=%#x m=", lr);
                for (int mi = 0; mi < 16; mi++) printf("%.4f%s", data[mi], mi == 15 ? "\n" : ",");
            }
        }
        ((void(*)(const float*))g->fn)(data);
        return 0;
    }
    case TAG_ENABLECS: {
        int st = (int)arg_i(raw, 0);
        if (st == GL_TEXTURE_COORD_ARRAY) { tc_enabled[client_unit] = 1; if (GL_DEBUG) callring_add("EnableClientState(TEXCOORD, unit=%d)", client_unit); return 0; }
        if (arr_enabled(st)) return 0;            // shadow: already enabled
        arr_set(st, 1); ((void(*)(unsigned))g->fn)((unsigned)st); return 0;
    }
    case TAG_DISABLECS: {
        int st = (int)arg_i(raw, 0);
        if (st == GL_TEXTURE_COORD_ARRAY) { tc_enabled[client_unit] = 0; if (GL_DEBUG) callring_add("DisableClientState(TEXCOORD, unit=%d)", client_unit); return 0; }
        if (!arr_enabled(st)) return 0;           // shadow: already disabled
        arr_set(st, 0); ((void(*)(unsigned))g->fn)((unsigned)st); return 0;
    }
    case TAG_BINDTEX: {
        unsigned target = arg_i(raw, 0), id = arg_i(raw, 1);
        last_bound_real = id;
        last_bound_emu = id;
        if (GL_DEBUG) callring_add("BindTexture(unit=%d id=%u)", server_unit - GL_TEXTURE0, id);
        if (target == 0x0DE1) {                   // GL_TEXTURE_2D: per-unit shadow
            int u = (server_unit - GL_TEXTURE0) & 3;
            if (bound_tex_real[u] == id) return 0;
            bound_tex_real[u] = id;
        }
        ((void(*)(unsigned,unsigned))g->fn)(target, id);
        return 0;
    }
    case TAG_CLIENTAT: {
        client_unit = (int)arg_i(raw, 0) - GL_TEXTURE0;
        if (client_unit < 0 || client_unit > 3) client_unit = 0;
        if (GL_DEBUG) callring_add("ClientActiveTexture(unit=%d)", client_unit);
        return 0;
    }
    case TAG_TEXCOORDPTR: {
        int u = client_unit;
        tarr[u].size=(int)arg_i(raw,0); tarr[u].type=(int)arg_i(raw,1); tarr[u].stride=(int)arg_i(raw,2); tarr[u].ptr=arg_i(raw,3);
        tarr_valid[u] = 1;
        if (GL_DEBUG) callring_add("TexCoordPointer(unit=%d size=%d type=%#x stride=%d ptr=%#x)", u, tarr[u].size, tarr[u].type, tarr[u].stride, tarr[u].ptr);
        return 0;
    }
    case TAG_VERTEXPTR: { varr.size=(int)arg_i(raw,0); varr.type=(int)arg_i(raw,1); varr.stride=(int)arg_i(raw,2); varr.ptr=arg_i(raw,3); if (GL_DEBUG) callring_add("VertexPointer(size=%d type=%#x stride=%d ptr=%#x)", varr.size, varr.type, varr.stride, varr.ptr); return 0; }
    case TAG_NORMALPTR: { narr.size=3; narr.type=(int)arg_i(raw,0); narr.stride=(int)arg_i(raw,1); narr.ptr=arg_i(raw,2); return 0; }
    case TAG_COLORPTR: { carr.size=(int)arg_i(raw,0); carr.type=(int)arg_i(raw,1); carr.stride=(int)arg_i(raw,2); carr.ptr=arg_i(raw,3); if (GL_DEBUG) callring_add("ColorPointer(size=%d type=%#x stride=%d ptr=%#x)", carr.size, carr.type, carr.stride, carr.ptr); return 0; }
    case TAG_TEXENVI: {
        if (GL_DEBUG) callring_add("TexEnvi(unit=%d target=%#x pname=%#x param=%#x)", server_unit - GL_TEXTURE0, arg_i(raw,0), arg_i(raw,1), arg_i(raw,2));
        ((void(*)(unsigned,unsigned,int))g->fn)(arg_i(raw,0), arg_i(raw,1), (int)arg_i(raw,2));
        return 0;
    }
    case TAG_MATRIXMODE: {
        gl_matrix_mode = (int)arg_i(raw, 0);
        if (gl_matrix_mode != mmode_real) {       // shadow: skip redundant
            mmode_real = gl_matrix_mode;
            ((void(*)(unsigned))g->fn)((unsigned)gl_matrix_mode);
        }
        return 0;
    }
    case TAG_COLOR4F: {
        if (GL_DEBUG) {
            static int c4_log = 0;
            float r = arg_f(raw, 0), gg = arg_f(raw, 1), b = arg_f(raw, 2), a = arg_f(raw, 3);
            if (c4_log < 100 && (r != 1.0f || gg != 1.0f || b != 1.0f)) {
                c4_log++;
                printf("[color4f] (%.2f,%.2f,%.2f,%.2f) caller=%#x\n", r, gg, b, a, lr);
            }
        }
        ((void(*)(float,float,float,float))g->fn)(arg_f(raw, 0), arg_f(raw, 1), arg_f(raw, 2), arg_f(raw, 3));
        return 0;
    }
    case TAG_BLENDFUNC: {
        if (GL_DEBUG) {
            static int bn = 0;
            if (bn < 60) { bn++; printf("[blend] func(%#x, %#x)\n", arg_i(raw,0), arg_i(raw,1)); }
        }
        blend_src_real = arg_i(raw, 0) & 0xffff;
        blend_dst_real = arg_i(raw, 1) & 0xffff;
        ((void(*)(unsigned,unsigned))g->fn)(arg_i(raw,0), arg_i(raw,1));
        return 0;
    }
    case TAG_TEXPARAM: {
        unsigned target = arg_i(raw, 0), pname = arg_i(raw, 1);
        uint32_t val = raw[2];
        if (pname == 0x2801) {  // GL_TEXTURE_MIN_FILTER: strip mipmap modes
            unsigned iv = val;
            if (iv == 0x2700) val = 0x2600;
            else if (iv == 0x2701 || iv == 0x2702 || iv == 0x2703) val = 0x2601;
        }
        if (spec[2] == 'f') ((void(*)(unsigned,unsigned,float))g->fn)(target, pname, arg_f(raw, 2));
        else ((void(*)(unsigned,unsigned,unsigned))g->fn)(target, pname, val);
        return 0;
    }
    case TAG_ENABLE: {
        unsigned cap = arg_i(raw, 0);
        int b = cap_bit(cap);
        if (b >= 0) {
            if (caps_real & (1u << b)) return 0;  // shadow: already enabled
            caps_real |= (1u << b);
        }
        ((void(*)(unsigned))g->fn)(cap);
        return 0;
    }
    case TAG_DISABLE: {
        unsigned cap = arg_i(raw, 0);
        int b = cap_bit(cap);
        if (b >= 0) {
            if (!(caps_real & (1u << b))) return 0;  // shadow: already disabled
            caps_real &= ~(1u << b);
        }
        ((void(*)(unsigned))g->fn)(cap);
        return 0;
    }
    case TAG_TAIL: goto tail;      // no special handler: straight to the spec path
    default: break;                // cold handler: fall into the chain below
    }

    // ---- special handlers ----
    if (strcmp(name, "glGetString") == 0) {
        unsigned e = arg_i(raw, 0);
        if (e == 0x1F00) return alloc_str("Qualcomm");
        if (e == 0x1F01) return alloc_str("Adreno 200");
        if (e == 0x1F02) return alloc_str("OpenGL ES-CM 1.1");
        if (e == 0x1F03) return alloc_str(
            "GL_OES_compressed_paletted_texture GL_OES_compressed_ETC1_RGB8_texture "
            "GL_EXT_texture_compression_PVRTC GL_IMG_texture_compression_pvrtc "
            "GL_OES_draw_texture GL_OES_point_sprite GL_OES_point_size_array "
            "GL_OES_byte_coordinates GL_OES_fixed_point GL_OES_single_precision");
        return alloc_str("shim");
    }
    if (strcmp(name, "glGetError") == 0) {
        unsigned e = ((unsigned(*)())g->fn)();
        if (e && GL_DEBUG) printf("[gl] glGetError -> %#x\n", e);
        return e;
    }
    if (strcmp(name, "glGenTextures") == 0) {
        int cnt = (int)arg_i(raw, 0); uint32_t ptr = arg_i(raw, 1);
        unsigned ids[64];
        if (cnt > 64) cnt = 64;
        ((void(*)(int,unsigned*))g->fn)(cnt, ids);
        // hand the ENGINE the driver's real ids - no emu->real map at all, so
        // driver id recycling can never make our map stale.
        for (int i = 0; i < cnt; i++) uw32(ptr + i * 4, ids[i]);
        return 0;
    }
    if (strcmp(name, "glDeleteTextures") == 0) {
        int cnt = (int)arg_i(raw, 0); uint32_t ptr = arg_i(raw, 1);
        unsigned ids[64];
        if (cnt > 64) cnt = 64;
        for (int i = 0; i < cnt; i++) ids[i] = ur32(ptr + i * 4);
        ((void(*)(int,const unsigned*))g->fn)(cnt, ids);
        return 0;
    }
    if (strcmp(name, "glBlendFunc") == 0) {
        if (GL_DEBUG) {
            static int bn = 0;
            if (bn < 60) { bn++; printf("[blend] func(%#x, %#x)\n", arg_i(raw,0), arg_i(raw,1)); }
        }
        blend_src_real = arg_i(raw, 0) & 0xffff;
        blend_dst_real = arg_i(raw, 1) & 0xffff;
        ((void(*)(unsigned,unsigned))g->fn)(arg_i(raw,0), arg_i(raw,1));
        return 0;
    }
    if (strcmp(name, "glBindTexture") == 0) {
        unsigned target = arg_i(raw, 0), id = arg_i(raw, 1);
        last_bound_real = id;
        last_bound_emu = id;
        if (GL_DEBUG) callring_add("BindTexture(unit=%d id=%u)", server_unit - GL_TEXTURE0, id);
        ((void(*)(unsigned,unsigned))g->fn)(target, id);
        if (GL_DEBUG && id == 5) {
            void (*gi)(unsigned,int*) = (void(*)(unsigned,int*))gl_load("glGetIntegerv");
            typedef void (*bt_t)(unsigned, unsigned);
            bt_t btf = (bt_t)GetProcAddress(gl_dll, "glBindTexture");
            int b1 = -1; gi(0x0DE1, &b1);
            btf(0x0DE1, 7);
            int b7 = -1; gi(0x0DE1, &b7);
            btf(0x0DE1, 5);
            int b5 = -1; gi(0x0DE1, &b5);
            unsigned e = ((unsigned(*)())gl_load("glGetError"))();
            printf("[bind-test] before=%d direct7=%d direct5=%d err=%#x\n", b1, b7, b5, e);
        }
        return 0;
    }
    if (strcmp(name, "glActiveTexture") == 0) {
        server_unit = (int)arg_i(raw, 0);
        if (GL_DEBUG) callring_add("ActiveTexture(unit=%d)", server_unit - GL_TEXTURE0);
        ((void(*)(unsigned))g->fn)((unsigned)server_unit);
        return 0;
    }
    if (strcmp(name, "glTexEnvi") == 0) {
        if (GL_DEBUG) callring_add("TexEnvi(unit=%d target=%#x pname=%#x param=%#x)", server_unit - GL_TEXTURE0, arg_i(raw,0), arg_i(raw,1), arg_i(raw,2));
        ((void(*)(unsigned,unsigned,int))g->fn)(arg_i(raw,0), arg_i(raw,1), (int)arg_i(raw,2));
        return 0;
    }
    if (strcmp(name, "glClientActiveTexture") == 0) {
        client_unit = (int)arg_i(raw, 0) - GL_TEXTURE0;
        if (client_unit < 0 || client_unit > 3) client_unit = 0;
        if (GL_DEBUG) callring_add("ClientActiveTexture(unit=%d)", client_unit);
        return 0;
    }
    if (strcmp(name, "glVertexPointer") == 0) { varr.size=(int)arg_i(raw,0); varr.type=(int)arg_i(raw,1); varr.stride=(int)arg_i(raw,2); varr.ptr=arg_i(raw,3); if (GL_DEBUG) callring_add("VertexPointer(size=%d type=%#x stride=%d ptr=%#x)", varr.size, varr.type, varr.stride, varr.ptr); return 0; }
    if (strcmp(name, "glNormalPointer") == 0) { narr.size=3; narr.type=(int)arg_i(raw,0); narr.stride=(int)arg_i(raw,1); narr.ptr=arg_i(raw,2); return 0; }
    if (strcmp(name, "glColorPointer") == 0) { carr.size=(int)arg_i(raw,0); carr.type=(int)arg_i(raw,1); carr.stride=(int)arg_i(raw,2); carr.ptr=arg_i(raw,3); if (GL_DEBUG) callring_add("ColorPointer(size=%d type=%#x stride=%d ptr=%#x)", carr.size, carr.type, carr.stride, carr.ptr); return 0; }
    if (strcmp(name, "glTexCoordPointer") == 0) {
        int u = client_unit;
        tarr[u].size=(int)arg_i(raw,0); tarr[u].type=(int)arg_i(raw,1); tarr[u].stride=(int)arg_i(raw,2); tarr[u].ptr=arg_i(raw,3);
        tarr_valid[u] = 1;
        if (GL_DEBUG) callring_add("TexCoordPointer(unit=%d size=%d type=%#x stride=%d ptr=%#x)", u, tarr[u].size, tarr[u].type, tarr[u].stride, tarr[u].ptr);
        return 0;
    }
    if (strcmp(name, "glEnableClientState") == 0) {
        int st = (int)arg_i(raw, 0);
        if (st == GL_TEXTURE_COORD_ARRAY) { tc_enabled[client_unit] = 1; if (GL_DEBUG) callring_add("EnableClientState(TEXCOORD, unit=%d)", client_unit); return 0; }
        arr_set(st, 1); ((void(*)(unsigned))g->fn)((unsigned)st); return 0;
    }
    if (strcmp(name, "glDisableClientState") == 0) {
        int st = (int)arg_i(raw, 0);
        if (st == GL_TEXTURE_COORD_ARRAY) { tc_enabled[client_unit] = 0; if (GL_DEBUG) callring_add("DisableClientState(TEXCOORD, unit=%d)", client_unit); return 0; }
        arr_set(st, 0); ((void(*)(unsigned))g->fn)((unsigned)st); return 0;
    }
    if (strcmp(name, "glDrawElements") == 0) { draw_elements(arg_i(raw,0),(int)arg_i(raw,1),arg_i(raw,2),arg_i(raw,3)); return 0; }
    if (strcmp(name, "glDrawArrays") == 0) { draw_arrays(arg_i(raw,0),(int)arg_i(raw,1),(int)arg_i(raw,2)); return 0; }
    if (strcmp(name, "glCompressedTexImage2D") == 0) {
        compressed_tex_image(arg_i(raw,0),(int)arg_i(raw,1),arg_i(raw,2),(int)arg_i(raw,3),
                             (int)arg_i(raw,4),(int)arg_i(raw,5),(int)arg_i(raw,6),arg_i(raw,7));
        return 0;
    }
    if (strcmp(name, "glTexImage2D") == 0) {
        unsigned target=arg_i(raw,0); int level=(int)arg_i(raw,1); int w=(int)arg_i(raw,3), h=(int)arg_i(raw,4);
        unsigned fmt=arg_i(raw,6), type=arg_i(raw,7); uint32_t ptr=arg_i(raw,8);
        if (GL_DEBUG) printf("[tex] image fmt=%#x type=%#x %dx%d bound_emu=%u bound_real=%u\n", fmt, type, w, h, last_bound_emu, last_bound_real);
        typedef void (*ti_t)(unsigned,int,int,int,int,int,unsigned,unsigned,const void*);
        ti_t ti = (ti_t)g->fn;
        if (ptr) {
            int sz = tex_data_size(fmt, type, w, h);
            unsigned char* d = (unsigned char*)malloc(sz);
            read_mem(ptr, d, sz);
            unsigned char* rgba = (unsigned char*)malloc((size_t)w * h * 4);
            convert_pixels(fmt, type, w, h, d, rgba);
            // Chroma recolor (default on; A5_NO_CHROMA=1 disables): the car
            // atlases' magenta padding would bleed into island edges under
            // bilinear filtering; substitute the paint color (default white -
            // the starter Mini's roof; A5_PAINT=r,g,b overrides) so any bleed
            // is invisible. With the per-client-unit texcoord fix the magenta
            // never shows in the default flow, so this is belt-and-braces.
            if (getenv("A5_NO_CHROMA") == NULL && w == 256 && h == 256) {
                int pr = 255, pg = 255, pb = 255;
                if (getenv("A5_PAINT")) sscanf(getenv("A5_PAINT"), "%d,%d,%d", &pr, &pg, &pb);
                long npix = (long)w * h, nrec = 0;
                for (long i = 0; i < npix; i++) {
                    unsigned char* p = rgba + i * 4;
                    if (p[0] > 200 && p[1] < 80 && p[2] > 200) {
                        p[0] = (unsigned char)pr; p[1] = (unsigned char)pg; p[2] = (unsigned char)pb;
                        nrec++;
                    }
                }
                if (nrec) printf("[chroma] %dx%d: recolored %ld px to paint (%d,%d,%d)\n", w, h, nrec, pr, pg, pb);
            }
            if (getenv("A5_TINT")) {
                unsigned tid = 0, tr = 255, tg = 0, tb = 0;
                sscanf(getenv("A5_TINT"), "%u,%u,%u,%u", &tid, &tr, &tg, &tb);
                if (tid == last_bound_emu) {
                    for (int k = 0; k < w * h; k++) { rgba[k*4]=(unsigned char)tr; rgba[k*4+1]=(unsigned char)tg; rgba[k*4+2]=(unsigned char)tb; rgba[k*4+3]=255; }
                    printf("[tint] raw emu=%u %dx%d tinted\n", last_bound_emu, w, h);
                }
            }
            if (getenv("A5_BLACKOUT")) {
                char pat[16], list[128];
                snprintf(pat, sizeof(pat), ",%u,", last_bound_emu);
                snprintf(list, sizeof(list), ",%s,", getenv("A5_BLACKOUT"));
                if (strstr(list, pat)) { memset(rgba, 0, (size_t)w * h * 4); printf("[blackout] raw emu=%u %dx%d\n", last_bound_emu, w, h); }
            }
            padfix_dilate(w, h, rgba, "raw");
            // Server packs carry a few textures as near-flat placeholders (a
            // repeated color with tiny noise, e.g. d9ebeb00 / e0dee0de).
            // Detect + optionally tint them to map which parts use them.
            int is_placeholder = 0;
            if (sz >= 8) {
                long same = 0, total = 0;
                for (int k = 0; k + 4 <= sz; k += 4) {
                    total++;
                    int dr = abs((int)d[k] - (int)d[0]), dg = abs((int)d[k+1] - (int)d[1]);
                    int db = abs((int)d[k+2] - (int)d[2]), da = abs((int)d[k+3] - (int)d[3]);
                    if (dr <= 24 && dg <= 24 && db <= 24 && da <= 24) same++;
                }
                is_placeholder = (total > 0 && same * 100 >= total * 97);
                if (is_placeholder && GL_DEBUG)
                    printf("[tex] placeholder %dx%d color=%02x%02x%02x%02x (%.1f%% flat)\n",
                           w, h, d[0], d[1], d[2], d[3], 100.0 * same / total);
            }
            if (is_placeholder) {
                static int ph_n = 0;
                ph_n++;
                if (GL_DEBUG) printf("[tex] placeholder #%d %dx%d color=%02x%02x%02x%02x\n",
                                     ph_n, w, h, d[0], d[1], d[2], d[3]);
                if (getenv("A5_TINT_PLACEHOLDERS")) {
                    static const unsigned char tc[8][3] = {{255,0,0},{0,255,0},{0,0,255},{255,255,0},{255,0,255},{0,255,255},{255,128,0},{128,0,255}};
                    int ci = (ph_n - 1) % 8;
                    for (int k = 0; k < w * h; k++) { rgba[k*4] = tc[ci][0]; rgba[k*4+1] = tc[ci][1]; rgba[k*4+2] = tc[ci][2]; rgba[k*4+3] = 255; }
                }
            }
            ti(target, level, GL_RGBA, w, h, 0, GL_RGBA, GL_UNSIGNED_BYTE, rgba);
            static int dump_n = 0;
            int dumpall2 = getenv("A5GL_DUMPALL") != NULL;
            if (GL_DEBUG && level == 0 && w >= 64 && (dump_n < 8 || dumpall2)) {
                dump_n++;
                printf("[tex] raw %dx%d fmt=%#x type=%#x first64:", w, h, fmt, type);
                for (int k = 0; k < 64 && k < sz; k++) printf(" %02x", d[k]);
                printf("\n");
                char path[128];
                if (dumpall2)
                    snprintf(path, sizeof(path), "..\\turntable\\a5host_img_%u_%dx%d.bmp", last_bound_emu, w, h);
                else
                    snprintf(path, sizeof(path), "..\\turntable\\a5host_tex_%d_%dx%d.bmp", dump_n, w, h);
                FILE* ff = fopen(path, "wb");
                if (ff) {
                    int row = (w * 3 + 3) & ~3;
                    unsigned char hdr[54]; memset(hdr, 0, 54);
                    hdr[0]='B'; hdr[1]='M';
                    int size = 54 + row * h;
                    *(int*)(hdr+2)=size; *(int*)(hdr+10)=54; *(int*)(hdr+14)=40;
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
            free(rgba); free(d);
        } else {
            ti(target, level, GL_RGBA, w, h, 0, GL_RGBA, GL_UNSIGNED_BYTE, NULL);
        }
        return 0;
    }
    if (strcmp(name, "glTexSubImage2D") == 0) {
        unsigned target=arg_i(raw,0); int level=(int)arg_i(raw,1);
        int xo=(int)arg_i(raw,2), yo=(int)arg_i(raw,3), w=(int)arg_i(raw,4), h=(int)arg_i(raw,5);
        unsigned fmt=arg_i(raw,6), type=arg_i(raw,7); uint32_t ptr=arg_i(raw,8);
        int sz = tex_data_size(fmt, type, w, h);
        unsigned char* d = (unsigned char*)malloc(sz);
        read_mem(ptr, d, sz);
        unsigned char* rgba = (unsigned char*)malloc((size_t)w * h * 4);
        convert_pixels(fmt, type, w, h, d, rgba);
        typedef void (*tsi_t)(unsigned,int,int,int,int,int,unsigned,unsigned,const void*);
        ((tsi_t)g->fn)(target, level, xo, yo, w, h, GL_RGBA, GL_UNSIGNED_BYTE, rgba);
        free(rgba); free(d);
        return 0;
    }
    if (strcmp(name, "glGetFloatv") == 0) {
        unsigned pname = arg_i(raw, 0); uint32_t ptr = arg_i(raw, 1);
        int cnt = (pname == 0x0BA6 || pname == 0x0BA7) ? 16 : 4;
        float v[16];
        ((void(*)(unsigned,float*))g->fn)(pname, v);
        p_uc_mem_write(GL_UC, ptr, v, cnt * 4);
        return 0;
    }
    if (strcmp(name, "glClearDepthf") == 0) {
        typedef void (*cd_t)(double);
        cd_t cd = (cd_t)gl_load("glClearDepth");
        if (cd) cd((double)arg_f(raw, 0));
        return 0;
    }
    if (strcmp(name, "glTexParameterf") == 0 || strcmp(name, "glTexParameteri") == 0) {
        unsigned target = arg_i(raw, 0), pname = arg_i(raw, 1);
        uint32_t val = raw[2];
        if (pname == 0x2801) {  // GL_TEXTURE_MIN_FILTER: strip mipmap modes
            unsigned iv = val;
            if (iv == 0x2700) val = 0x2600;
            else if (iv == 0x2701 || iv == 0x2702 || iv == 0x2703) val = 0x2601;
        }
        if (strcmp(name, "glTexParameterf") == 0) ((void(*)(unsigned,unsigned,float))g->fn)(target, pname, arg_f(raw, 2));
        else ((void(*)(unsigned,unsigned,unsigned))g->fn)(target, pname, val);
        return 0;
    }
    if (strcmp(name, "glMatrixMode") == 0) {
        gl_matrix_mode = (int)arg_i(raw, 0);
        ((void(*)(unsigned))g->fn)((unsigned)gl_matrix_mode);
        return 0;
    }
    if (strcmp(name, "glColor4f") == 0) {
        if (GL_DEBUG) {
            static int c4_log = 0;
            float r = arg_f(raw, 0), gg = arg_f(raw, 1), b = arg_f(raw, 2), a = arg_f(raw, 3);
            if (c4_log < 100 && (r != 1.0f || gg != 1.0f || b != 1.0f)) {
                c4_log++;
                printf("[color4f] (%.2f,%.2f,%.2f,%.2f) caller=%#x\n", r, gg, b, a, lr);
            }
        }
        ((void(*)(float,float,float,float))g->fn)(arg_f(raw, 0), arg_f(raw, 1), arg_f(raw, 2), arg_f(raw, 3));
        return 0;
    }
    if (strcmp(name, "glLoadMatrixf") == 0 || strcmp(name, "glMaterialfv") == 0 ||
        strcmp(name, "glLightfv") == 0 || strcmp(name, "glLightModelfv") == 0 ||
        strcmp(name, "glFogfv") == 0 || strcmp(name, "glTexEnvfv") == 0) {
        int pidx = 0, nbytes = 64;
        if (strcmp(name, "glLoadMatrixf") == 0) { pidx = 0; nbytes = 64; }
        else if (strcmp(name, "glMaterialfv") == 0) { pidx = 2; nbytes = 64; }
        else if (strcmp(name, "glLightfv") == 0) { pidx = 2; nbytes = 64; }
        else if (strcmp(name, "glLightModelfv") == 0) { pidx = 1; nbytes = 64; }
        else if (strcmp(name, "glFogfv") == 0) { pidx = 1; nbytes = 64; }
        else { pidx = 2; nbytes = 16; }  // glTexEnvfv
        uint32_t p = raw[pidx];
        float data[16];
        if (p) read_mem(p, data, nbytes);
        if (strcmp(name, "glLoadMatrixf") == 0) {
            if (GL_DEBUG && gl_matrix_mode == 0x1702) {
                printf("[texmat] load: [%.4f %.4f %.4f %.4f | %.4f %.4f %.4f %.4f | %.4f %.4f %.4f %.4f | %.4f %.4f %.4f %.4f]\n",
                       data[0], data[1], data[2], data[3], data[4], data[5], data[6], data[7],
                       data[8], data[9], data[10], data[11], data[12], data[13], data[14], data[15]);
            }
            ((void(*)(const float*))g->fn)(data);
        }
        else if (strcmp(name, "glMaterialfv") == 0) ((void(*)(unsigned,unsigned,const float*))g->fn)(arg_i(raw,0), arg_i(raw,1), data);
        else if (strcmp(name, "glLightfv") == 0) ((void(*)(unsigned,unsigned,const float*))g->fn)(arg_i(raw,0), arg_i(raw,1), data);
        else if (strcmp(name, "glLightModelfv") == 0) ((void(*)(unsigned,const float*))g->fn)(arg_i(raw,0), data);
        else if (strcmp(name, "glFogfv") == 0) ((void(*)(unsigned,const float*))g->fn)(arg_i(raw,0), data);
        else ((void(*)(unsigned,unsigned,const float*))g->fn)(arg_i(raw,0), arg_i(raw,1), data);
        return 0;
    }
    if (strcmp(name, "glCurrentPaletteMatrixOES") == 0 || strcmp(name, "glMatrixIndexPointerOES") == 0 ||
        strcmp(name, "glWeightPointerOES") == 0 || strcmp(name, "glBindBuffer") == 0) {
        return 0;  // stubbed (desktop GL has no equivalent)
    }

    // ---- passthrough by spec ----
tail:
    if (n == 0) { ((void(*)())g->fn)(); return 0; }
    if (n == 1) {
        if (spec[0] == 'i') ((void(*)(unsigned))g->fn)(arg_i(raw,0));
        else if (spec[0] == 'f') ((void(*)(float))g->fn)(arg_f(raw,0));
        return 0;
    }
    if (n == 2) {
        if (spec[0]=='i'&&spec[1]=='i') ((void(*)(unsigned,unsigned))g->fn)(arg_i(raw,0),arg_i(raw,1));
        else if (spec[0]=='i'&&spec[1]=='f') ((void(*)(unsigned,float))g->fn)(arg_i(raw,0),arg_f(raw,1));
        else if (spec[0]=='f'&&spec[1]=='f') ((void(*)(float,float))g->fn)(arg_f(raw,0),arg_f(raw,1));
        return 0;
    }
    if (n == 3) {
        if (strcmp(spec,"iii")==0) ((void(*)(unsigned,unsigned,unsigned))g->fn)(arg_i(raw,0),arg_i(raw,1),arg_i(raw,2));
        else if (strcmp(spec,"iif")==0) ((void(*)(unsigned,unsigned,float))g->fn)(arg_i(raw,0),arg_i(raw,1),arg_f(raw,2));
        else if (strcmp(spec,"fff")==0) ((void(*)(float,float,float))g->fn)(arg_f(raw,0),arg_f(raw,1),arg_f(raw,2));
        return 0;
    }
    if (n == 4) {
        if (strcmp(spec,"iiii")==0) ((void(*)(unsigned,unsigned,unsigned,unsigned))g->fn)(arg_i(raw,0),arg_i(raw,1),arg_i(raw,2),arg_i(raw,3));
        else if (strcmp(spec,"ffff")==0) ((void(*)(float,float,float,float))g->fn)(arg_f(raw,0),arg_f(raw,1),arg_f(raw,2),arg_f(raw,3));
        return 0;
    }
    if (n == 7) {
        ((void(*)(unsigned,unsigned,unsigned,unsigned,unsigned,unsigned,unsigned))g->fn)(
            arg_i(raw,0),arg_i(raw,1),arg_i(raw,2),arg_i(raw,3),arg_i(raw,4),arg_i(raw,5),arg_i(raw,6));
        return 0;
    }
    return 0;
}
