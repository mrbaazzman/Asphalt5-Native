// ---------------------------------------------------------------- jni
typedef struct { uint32_t id; char name[64]; } MethodID;
static MethodID* mids = NULL; static int nmids = 0, mcap = 0;
typedef struct { uint32_t addr; size_t len; uint8_t* data; } ByteArr;
static ByteArr* barrs = NULL; static int nbarrs = 0, bcap = 0;

static uint32_t make_byte_array(const uint8_t* data, size_t len) {
    uint32_t addr = heap_alloc(16);
    // The engine loads hundreds of resources per race; the registry must grow
    // (a fixed 256-entry table silently stopped registering, so GetArrayLength
    // returned 4 and reads came back as zeros -> "SD card error" on race 2).
    if (nbarrs == bcap) {
        bcap = bcap ? bcap * 2 : 256;
        barrs = (ByteArr*)realloc(barrs, sizeof(ByteArr) * (size_t)bcap);
    }
    barrs[nbarrs].addr = addr; barrs[nbarrs].len = len;
    barrs[nbarrs].data = (uint8_t*)malloc(len ? len : 1);
    if (data) memcpy(barrs[nbarrs].data, data, len);
    else memset(barrs[nbarrs].data, 0, len);
    nbarrs++;
    if ((nbarrs % 100) == 0) { printf("[jni] byte arrays: %d\n", nbarrs); fflush(stdout); }
    return addr;
}
static ByteArr* find_barr(uint32_t addr) {
    for (int i = 0; i < nbarrs; i++) if (barrs[i].addr == addr) return &barrs[i];
    return NULL;
}

static const char* JNI_NAMES[] = {
    "reserved0","reserved1","reserved2","reserved3",
    "GetVersion","DefineClass","FindClass","FromReflectedMethod","FromReflectedField",
    "ToReflectedMethod","GetSuperclass","IsAssignableFrom","ToReflectedField","Throw",
    "ThrowNew","ExceptionOccurred","ExceptionDescribe","ExceptionClear","FatalError",
    "PushLocalFrame","PopLocalFrame","NewGlobalRef","DeleteGlobalRef","DeleteLocalRef",
    "IsSameObject","NewLocalRef","EnsureLocalCapacity","AllocObject","NewObject",
    "NewObjectV","NewObjectA","GetObjectClass","IsInstanceOf","GetMethodID",
    "CallObjectMethod","CallObjectMethodV","CallObjectMethodA","CallBooleanMethod",
    "CallBooleanMethodV","CallBooleanMethodA","CallByteMethod","CallByteMethodV",
    "CallByteMethodA","CallCharMethod","CallCharMethodV","CallCharMethodA","CallShortMethod",
    "CallShortMethodV","CallShortMethodA","CallIntMethod","CallIntMethodV","CallIntMethodA",
    "CallLongMethod","CallLongMethodV","CallLongMethodA","CallFloatMethod","CallFloatMethodV",
    "CallFloatMethodA","CallDoubleMethod","CallDoubleMethodV","CallDoubleMethodA",
    "CallVoidMethod","CallVoidMethodV","CallVoidMethodA","CallNonvirtualObjectMethod",
    "CallNonvirtualObjectMethodV","CallNonvirtualObjectMethodA","CallNonvirtualBooleanMethod",
    "CallNonvirtualBooleanMethodV","CallNonvirtualBooleanMethodA","CallNonvirtualByteMethod",
    "CallNonvirtualByteMethodV","CallNonvirtualByteMethodA","CallNonvirtualCharMethod",
    "CallNonvirtualCharMethodV","CallNonvirtualCharMethodA","CallNonvirtualShortMethod",
    "CallNonvirtualShortMethodV","CallNonvirtualShortMethodA","CallNonvirtualIntMethod",
    "CallNonvirtualIntMethodV","CallNonvirtualIntMethodA","CallNonvirtualLongMethod",
    "CallNonvirtualLongMethodV","CallNonvirtualLongMethodA","CallNonvirtualFloatMethod",
    "CallNonvirtualFloatMethodV","CallNonvirtualFloatMethodA","CallNonvirtualDoubleMethod",
    "CallNonvirtualDoubleMethodV","CallNonvirtualDoubleMethodA","CallNonvirtualVoidMethod",
    "CallNonvirtualVoidMethodV","CallNonvirtualVoidMethodA","GetFieldID","GetObjectField",
    "GetBooleanField","GetByteField","GetCharField","GetShortField","GetIntField",
    "GetLongField","GetFloatField","GetDoubleField","SetObjectField","SetBooleanField",
    "SetByteField","SetCharField","SetShortField","SetIntField","SetLongField",
    "SetFloatField","SetDoubleField","GetStaticMethodID","CallStaticObjectMethod",
    "CallStaticObjectMethodV","CallStaticObjectMethodA","CallStaticBooleanMethod",
    "CallStaticBooleanMethodV","CallStaticBooleanMethodA","CallStaticByteMethod",
    "CallStaticByteMethodV","CallStaticByteMethodA","CallStaticCharMethod",
    "CallStaticCharMethodV","CallStaticCharMethodA","CallStaticShortMethod",
    "CallStaticShortMethodV","CallStaticShortMethodA","CallStaticIntMethod",
    "CallStaticIntMethodV","CallStaticIntMethodA","CallStaticLongMethod",
    "CallStaticLongMethodV","CallStaticLongMethodA","CallStaticFloatMethod",
    "CallStaticFloatMethodV","CallStaticFloatMethodA","CallStaticDoubleMethod",
    "CallStaticDoubleMethodV","CallStaticDoubleMethodA","CallStaticVoidMethod",
    "CallStaticVoidMethodV","CallStaticVoidMethodA","GetStaticFieldID","GetStaticObjectField",
    "GetStaticBooleanField","GetStaticByteField","GetStaticCharField","GetStaticShortField",
    "GetStaticIntField","GetStaticLongField","GetStaticFloatField","GetStaticDoubleField",
    "SetStaticObjectField","SetStaticBooleanField","SetStaticByteField","SetStaticCharField",
    "SetStaticShortField","SetStaticIntField","SetStaticLongField","SetStaticFloatField",
    "SetStaticDoubleField","NewString","GetStringLength","GetStringChars",
    "ReleaseStringChars","NewStringUTF","GetStringUTFLength","GetStringUTFChars",
    "ReleaseStringUTFChars","GetArrayLength","NewObjectArray","GetObjectArrayElement",
    "SetObjectArrayElement","NewBooleanArray","NewByteArray","NewCharArray","NewShortArray",
    "NewIntArray","NewLongArray","NewFloatArray","NewDoubleArray","GetBooleanArrayElements",
    "GetByteArrayElements","GetCharArrayElements","GetShortArrayElements","GetIntArrayElements",
    "GetLongArrayElements","GetFloatArrayElements","GetDoubleArrayElements",
    "ReleaseBooleanArrayElements","ReleaseByteArrayElements","ReleaseCharArrayElements",
    "ReleaseShortArrayElements","ReleaseIntArrayElements","ReleaseLongArrayElements",
    "ReleaseFloatArrayElements","ReleaseDoubleArrayElements","GetBooleanArrayRegion",
    "GetByteArrayRegion","GetCharArrayRegion","GetShortArrayRegion","GetIntArrayRegion",
    "GetLongArrayRegion","GetFloatArrayRegion","GetDoubleArrayRegion","SetBooleanArrayRegion",
    "SetByteArrayRegion","SetCharArrayRegion","SetShortArrayRegion","SetIntArrayRegion",
    "SetLongArrayRegion","SetFloatArrayRegion","SetDoubleArrayRegion","RegisterNatives",
    "UnregisterNatives","MonitorEnter","MonitorExit","GetJavaVM","GetStringRegion",
    "GetStringUTFRegion","GetPrimitiveArrayCritical","ReleasePrimitiveArrayCritical",
    "GetStringCritical","ReleaseStringCritical","NewWeakGlobalRef","DeleteWeakGlobalRef",
    "ExceptionCheck","NewDirectByteBuffer","GetDirectBufferAddress","GetDirectBufferCapacity",
    "GetObjectRefType"
};
#define JNI_N ((int)(sizeof(JNI_NAMES)/sizeof(JNI_NAMES[0])))

// first double vararg (used by the sound calls: playSound(IIF)V etc.)
static double ureg_d(int reg) { double d = 0.0; p_uc_reg_read(g_uc, reg, &d); return d; }

// load a sound asset (raw_%03d.glsnd = Ogg Vorbis) for the engine's sound id
static int a5_jni_load_sound(int id, int is_big) {
    char name[64];
    snprintf(name, sizeof(name), "raw_%03d.glsnd", id);
    size_t len = 0;
    uint8_t* d = resolve_res(name, &len);
    if (!d || len == 0) {
        // 3.3.x's installer manifest ships the sounds as raw_NNN.ogg; 3.4.x
        // stores the same resources as .glsnd.  Try both.
        snprintf(name, sizeof(name), "raw_%03d.ogg", id);
        d = resolve_res(name, &len);
    }
    if (!d || len == 0) { printf("[snd] asset %s not found\n", name); return 0; }
    printf("[snd] load %s (%zu bytes, %s)\n", name, len, is_big ? "music" : "sfx");
    a5audio_load(id, d, (int)len, is_big);
    return 1;
}

static uint32_t jni_dispatch(int slot, uint32_t a0, uint32_t a1, uint32_t a2, uint32_t a3, uint32_t sp) {
    const char* name = (slot < JNI_N) ? JNI_NAMES[slot] : "slot?";
    if (strcmp(name, "FindClass") == 0) {
        char buf[200]; rstr(a1, buf, sizeof(buf));
        char cls[220]; snprintf(cls, sizeof(cls), "class:%s", buf);
        printf("[jni] FindClass(%s)\n", buf);
        return alloc_str(cls);
    }
    if (strcmp(name, "GetMethodID") == 0 || strcmp(name, "GetStaticMethodID") == 0) {
        char mn[100], ms[100];
        rstr(a2, mn, sizeof(mn)); rstr(a3, ms, sizeof(ms));
        // Dedupe by method name and grow the table: the engine re-queries the
        // same IDs every time a race/menu loads, and the old fixed 128-entry
        // table silently stopped recording, so resource calls on the second
        // race resolved to "?" and were ignored ("SD card error").
        for (int i = 0; i < nmids; i++)
            if (strcmp(mids[i].name, mn) == 0) return mids[i].id;
        uint32_t id = heap_alloc(16);
        if (nmids == mcap) {
            mcap = mcap ? mcap * 2 : 128;
            mids = (MethodID*)realloc(mids, sizeof(MethodID) * (size_t)mcap);
        }
        mids[nmids].id = id;
        snprintf(mids[nmids].name, sizeof(mids[nmids].name), "%s", mn);
        nmids++;
        printf("[jni] %s(%s, %s)\n", name, mn, ms);
        return id;
    }
    if (strcmp(name, "NewStringUTF") == 0) {
        char buf[512]; rstr(a1, buf, sizeof(buf));
        return alloc_str(buf);
    }
    if (strcmp(name, "GetStringUTFChars") == 0) return a1;
    if (strcmp(name, "GetStringUTFLength") == 0 || strcmp(name, "GetStringLength") == 0) {
        char buf[4096]; rstr(a1, buf, sizeof(buf));
        return (uint32_t)strlen(buf);
    }
    if (strcmp(name, "ReleaseStringUTFChars") == 0 || strcmp(name, "DeleteLocalRef") == 0 ||
        strcmp(name, "DeleteGlobalRef") == 0 || strcmp(name, "ExceptionClear") == 0 ||
        strcmp(name, "ExceptionDescribe") == 0 || strcmp(name, "MonitorEnter") == 0 ||
        strcmp(name, "MonitorExit") == 0 || strcmp(name, "FatalError") == 0 ||
        strcmp(name, "Throw") == 0 || strcmp(name, "ThrowNew") == 0) return 0;
    if (strcmp(name, "NewGlobalRef") == 0 || strcmp(name, "NewLocalRef") == 0) return a1;
    if (strcmp(name, "GetJavaVM") == 0) { uw32(a1, 0x4000F000); return 0; }
    if (strcmp(name, "ExceptionOccurred") == 0 || strcmp(name, "ExceptionCheck") == 0) return 0;
    if (strcmp(name, "GetVersion") == 0) return 0x00010006;
    if (strcmp(name, "RegisterNatives") == 0) return 0;
    if (strcmp(name, "GetObjectClass") == 0) return alloc_str("objclass");
    if (strcmp(name, "IsInstanceOf") == 0 || strcmp(name, "IsSameObject") == 0) return 1;
    if (strcmp(name, "GetFieldID") == 0 || strcmp(name, "GetStaticFieldID") == 0) return heap_alloc(16);
    if (strcmp(name, "GetArrayLength") == 0) {
        ByteArr* b = find_barr(a1);
        return b ? (uint32_t)b->len : 4;
    }
    if (strcmp(name, "GetByteArrayRegion") == 0) {
        ByteArr* b = find_barr(a1);
        int start = (int)a2, len = (int)a3;
        uint32_t buf = rd32(sp);
        if (b) {
            int avail = (int)b->len - start;
            if (avail < 0) avail = 0;
            int copy = len < avail ? len : avail;
            if (copy > 0) p_uc_mem_write(g_uc, buf, b->data + start, (size_t)copy);
            if (copy < len) {
                uint8_t* zeros = (uint8_t*)calloc(1, (size_t)(len - copy));
                p_uc_mem_write(g_uc, buf + copy, zeros, (size_t)(len - copy));
                free(zeros);
            }
        } else {
            uint8_t* zeros = (uint8_t*)calloc(1, (size_t)(len > 0 ? len : 1));
            p_uc_mem_write(g_uc, buf, zeros, (size_t)len);
            free(zeros);
        }
        return 0;
    }
    if (strcmp(name, "GetShortArrayRegion") == 0 || strcmp(name, "GetStringUTFRegion") == 0) {
        uint32_t buf = rd32(sp);
        uint8_t zeros[256]; memset(zeros, 0, sizeof(zeros));
        p_uc_mem_write(g_uc, buf, zeros, 64);
        return 0;
    }
    if (strcmp(name, "SetByteArrayRegion") == 0) return 0;
    if (strcmp(name, "NewByteArray") == 0) return make_byte_array(NULL, a1);
    if (strcmp(name, "NewShortArray") == 0) return heap_alloc(a1 * 2 + 8);
    if (strcmp(name, "GetByteArrayElements") == 0 || strcmp(name, "GetShortArrayElements") == 0) {
        ByteArr* b = find_barr(a1);
        if (b) {
            uint32_t p = heap_alloc((uint32_t)b->len + 8);
            p_uc_mem_write(g_uc, p, b->data, b->len);
            if (a2) uw32(a2, 0);
            return p;
        }
        return heap_alloc(64);
    }
    if (strcmp(name, "ReleaseByteArrayElements") == 0 || strcmp(name, "ReleaseShortArrayElements") == 0) return 0;
    // resource calls
    if (strcmp(name, "CallStaticIntMethod") == 0 || strcmp(name, "CallIntMethod") == 0) {
        const char* mn = "?";
        for (int i = 0; i < nmids; i++) if (mids[i].id == a2) { mn = mids[i].name; break; }
        if (strcmp(mn, "getResourceLength") == 0) {
            char path[512]; rstr(a3, path, sizeof(path));
            size_t len = 0;
            resolve_res(path, &len);
            return (uint32_t)len;
        }
        // GLMediaPlayer.isSoundLoaded(id, instance): -1 = not loaded yet
        // (this is what makes getReadySound call nativeLoadSound!), 0 = ready
        if (strcmp(mn, "isSoundLoaded") == 0 || strcmp(mn, "isSoundLoadedBig") == 0) {
            int id = (int)a3;
            int r = a5audio_loaded(id) ? 0 : -1;
            if (getenv("A5_SND_DEBUG")) printf("[snd] isSoundLoaded(%d) -> %d\n", id, r);
            return (uint32_t)r;
        }
        return 0;
    }
    if (strcmp(name, "CallStaticObjectMethod") == 0 || strcmp(name, "CallObjectMethod") == 0) {
        const char* mn = "?";
        for (int i = 0; i < nmids; i++) if (mids[i].id == a2) { mn = mids[i].name; break; }
        if (strcmp(mn, "getResourceFull") == 0) {
            char path[512]; rstr(a3, path, sizeof(path));
            if (strstr(path, "ia.bar")) {
                printf("[jni] getResourceFull('%s') caller=%#x\n", path, ureg(UC_ARM_REG_LR) - BASE);
            }
            size_t len = 0;
            uint8_t* d = resolve_res(path, &len);
            return make_byte_array(d, d ? len : 0);
        }
        if (strcmp(mn, "getResourceBytes") == 0) {
            char path[512]; rstr(a3, path, sizeof(path));
            uint32_t off = rd32(sp), size = rd32(sp + 4);
            static int rb_log = 0;
            if (rb_log < 30) { rb_log++; printf("[jni] getResourceBytes('%s', off=%u, size=%u)\n", path, off, size); }
            size_t len = 0;
            uint8_t* d = resolve_res(path, &len);
            if (d && off < len) {
                size_t avail = len - off;
                size_t copy = size < avail ? size : avail;
                return make_byte_array(d + off, copy);
            }
            return make_byte_array(NULL, size);
        }
        return make_byte_array(NULL, 0);
    }
    if (strcmp(name, "CallStaticBooleanMethod") == 0 || strcmp(name, "CallBooleanMethod") == 0) return 0;
    if (strcmp(name, "CallStaticFloatMethod") == 0 || strcmp(name, "CallFloatMethod") == 0) return 0;
    if (strcmp(name, "CallStaticDoubleMethod") == 0 || strcmp(name, "CallDoubleMethod") == 0) {
        usetreg(UC_ARM_REG_R1, 0);
        return 0;
    }
    if (strcmp(name, "CallStaticVoidMethod") == 0 || strcmp(name, "CallVoidMethod") == 0) {
        const char* mn = "?";
        for (int i = 0; i < nmids; i++) if (mids[i].id == a2) { mn = mids[i].name; break; }
        // ---- GLMediaPlayer.loadMovie(String): the intro/trailer movies. The
        // real Java launches a MyVideoView activity; the host records the
        // request and plays it between frames (movie.c), then clears the
        // engine's wait flag (game+0x1d72) so the trailer state advances.
        if (strcmp(mn, "loadMovie") == 0) {
            char mname[256]; rstr(a3, mname, sizeof(mname));
            printf("[jni] loadMovie('%s')\n", mname);
            extern char g_movie_path[700];
            extern volatile int g_movie_pending;
            snprintf(g_movie_path, 700, "%s\\%s", game_dir, mname);
            g_movie_pending = 1;
            return 0;
        }
        if (strcmp(mn, "ResumeMovie") == 0) return 0;   // treated as finished
        // The Exit menu item ends in nativeExit -> CallStaticVoidMethod(Exit).
        // This was ignored, so confirming Quit did nothing on the host.
        if (strcmp(mn, "Exit") == 0) {
            printf("[jni] Exit -> closing host\n");
            fflush(stdout);
            a5gl_request_close();
            return 0;
        }
        // ---- GLMediaPlayer sound interface (the Java side, implemented in audio.c)
        if (strncmp(mn, "loadSound", 9) == 0 || strncmp(mn, "playSound", 9) == 0 ||
            strncmp(mn, "stopSound", 9) == 0 || strncmp(mn, "pauseSound", 10) == 0 ||
            strncmp(mn, "resumeSound", 11) == 0 || strncmp(mn, "unloadSound", 11) == 0 ||
            strncmp(mn, "setVolume", 9) == 0 || strncmp(mn, "setPitch", 8) == 0 ||
            strcmp(mn, "resetSound") == 0 || strcmp(mn, "stopAllSounds") == 0 ||
            strcmp(mn, "stopAllPool") == 0 || strcmp(mn, "stopAllBig") == 0 ||
            strcmp(mn, "destroySoundPool") == 0 || strcmp(mn, "initSoundPoolArray") == 0) {
            int id = (int)a3;                 // arg0 -> r3
            int arg1 = (int)rd32(sp);         // arg1 -> stack[0]
            // varargs use the base AAPCS: floats are passed on the stack as
            // doubles, 8-byte aligned. (IIF)V -> sp+8, (IF)V -> sp+0.
            double st0 = 0, st8 = 0;
            p_uc_mem_read(g_uc, sp, &st0, 8);
            p_uc_mem_read(g_uc, sp + 8, &st8, 8);
            int is_big = (strstr(mn, "Big") != NULL) ? 1 : 0;
            float f1 = (float)(is_big ? st0 : st8);
            if (getenv("A5_SND_DEBUG"))
                printf("[snd] jni %s id=%d arg1=%d vol/pitch=%.3f\n", mn, id, arg1, f1);
            if (strncmp(mn, "loadSound", 9) == 0) {
                a5_jni_load_sound(id, is_big);
            } else if (strncmp(mn, "playSound", 9) == 0) {
                a5audio_play(id, arg1, f1 > 0.0f ? f1 : 1.0f, is_big);
            } else if (strncmp(mn, "stopSound", 9) == 0) {
                a5audio_stop(id, arg1, is_big);
            } else if (strncmp(mn, "pauseSound", 10) == 0) {
                a5audio_pause(id, arg1, 1, is_big);
            } else if (strncmp(mn, "resumeSound", 11) == 0) {
                a5audio_pause(id, arg1, 0, is_big);
            } else if (strncmp(mn, "unloadSound", 11) == 0) {
                a5audio_unload(id);
            } else if (strncmp(mn, "setVolume", 9) == 0) {
                a5audio_set_vol(id, arg1, f1, is_big);
            } else if (strncmp(mn, "setPitch", 8) == 0) {
                a5audio_set_pitch(id, arg1, f1, is_big);
            } else if (strcmp(mn, "resetSound") == 0) {
                a5audio_stop_all(0);
            } else if (strcmp(mn, "stopAllSounds") == 0) {
                a5audio_stop_all(0);
            } else if (strcmp(mn, "stopAllPool") == 0) {
                a5audio_stop_all(1);
            } else if (strcmp(mn, "stopAllBig") == 0) {
                a5audio_stop_all(2);
            }
            return 0;
        }
        return 0;
    }
    if (strcmp(name, "NewObject") == 0 || strcmp(name, "AllocObject") == 0 ||
        strcmp(name, "NewObjectArray") == 0 || strcmp(name, "ToReflectedMethod") == 0) return heap_alloc(16);
    return 0;
}
