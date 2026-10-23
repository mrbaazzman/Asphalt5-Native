// natives.inc - recompiled engine functions running natively in the host.
//
// These are bit-exact translations of libasphalt5.so functions, validated
// against the real ARM code with analysis/tools/recomp_mult_test.py
// (1969/1969 bit-exact including denormals, infinities and NaN semantics).
//
// The ARM matrix multiplies use the VFP vector mode (FPSCR.LEN=3), which the
// host's Unicorn CPU model cannot execute, so the host has always intercepted
// them with hand-written C. These translations replicate the exact op order
// and the FPSCR FZ/DN semantics, and run on direct host pointers (no Unicorn
// memory API calls).
#include <xmmintrin.h>
#include <pmmintrin.h>

// The ARM functions set FPSCR = 0x83030010: FZ (flush-to-zero) + DN (default
// NaN). FZ maps to the SSE FTZ+DAZ bits in MXCSR; DN means every NaN result
// becomes the positive default NaN 0x7FC00000.
static inline float arm_default_nan(float v) {
    uint32_t u;
    memcpy(&u, &v, 4);
    if ((u & 0x7F800000u) == 0x7F800000u && (u & 0x007FFFFFu)) {
        u = 0x7FC00000u;
        memcpy(&v, &u, 4);
    }
    return v;
}

// double-precision counterpart (the game's DN mode gives the default double NaN)
static inline double arm_default_nan_d(double v) {
    uint64_t u;
    memcpy(&u, &v, 8);
    if ((u & 0x7FF0000000000000ull) == 0x7FF0000000000000ull &&
        (u & 0x000FFFFFFFFFFFFFull)) {
        u = 0x7FF8000000000000ull;
        memcpy(&v, &u, 8);
    }
    return v;
}

// FPSCR.DN mirror for the auto-translated code.  CMatrix::Mult / PreMult /
// SetMult set FPSCR = 0x83030010 (FZ+DN) at entry and leave 0x83000010 at
// exit -- permanently (they never restore it).  So the real device runs with
// DN=0 (IEEE NaN propagation) until the first matrix multiply and DN=1
// (default NaN 0x7FC00000) for the rest of the run.  The host sets g_vfp_dn
// when the native matrix path runs (the only writer of FPSCR in the game);
// generated code uses these conditional wrappers so both phases match the
// device bit-exactly.  With DN=0 a plain C float op already matches the ARM's
// NaN propagation (first NaN operand, quieted, sign preserved).
static int g_vfp_dn = 0;
// arm_vfp_nan/vcvt_* now live in autogen_api.h (shared with the chunks)


// dst = a * b, row-major 4x4, op order matching the ARM VMLA sequence
// (b's column x a's row, single precision, non-fused multiply-add).
static void cmat_mul4(float* dst, const float* a, const float* b) {
    unsigned oldcsr = _mm_getcsr();
    _mm_setcsr(oldcsr | 0x8040u);          // FTZ (bit 15) + DAZ (bit 6)
    float out[16];
    for (int r = 0; r < 4; r++) {
        const float* ar = a + r * 4;
        float* o = out + r * 4;
        for (int c = 0; c < 4; c++)
            o[c] = arm_default_nan(b[0 + c] * ar[0] + b[4 + c] * ar[1] +
                                   b[8 + c] * ar[2] + b[12 + c] * ar[3]);
    }
    _mm_setcsr(oldcsr);
    memcpy(dst, out, sizeof(out));
}

// CMatrix::TransformVector @0x13e118: out = m * (x,y,z,1) (3 rows, affine).
// Op order exactly as the ARM (vmul m1*v1; vmla m0*v0; vmla m2*v2; vadd m3).
// The function does not touch FPSCR, so no FZ/DN here.
static int native_cmat_transform_vector(uint32_t mptr, uint32_t optr, uint32_t vptr) {
    const float* m = (const float*)mem_host(mptr);
    float* out = (float*)mem_host(optr);
    const float* v = (const float*)mem_host(vptr);
    if (!m || !out || !v) return 0;
    out[0] = ((m[1] * v[1] + m[0] * v[0]) + m[2] * v[2]) + m[3];
    out[1] = ((m[5] * v[1] + m[4] * v[0]) + m[6] * v[2]) + m[7];
    out[2] = ((m[9] * v[1] + m[8] * v[0]) + m[10] * v[2]) + m[11];
    return 1;
}

// CMatrix::Load(CMatrix*)/Load(float*) @0x13e36c/0x13e380: a straight 64-byte
// copy (the VFP load/store pair does no math).
static int native_cmat_load(uint32_t dptr, uint32_t sptr) {
    float* d = (float*)mem_host(dptr);
    const float* s = (const float*)mem_host(sptr);
    if (!d || !s) return 0;
    memcpy(d, s, 64);
    return 1;
}

// CMatrix::LoadIdentity @0x13e340 and CMatrix::Zero @0x13e314: both copy the
// identity template (verified from the .so's constant pools at 0x1c9e68 and
// 0x1c9ea8 - both are the identity).
static int native_cmat_identity(uint32_t mptr) {
    float* m = (float*)mem_host(mptr);
    if (!m) return 0;
    static const float ident[16] = {1,0,0,0, 0,1,0,0, 0,0,1,0, 0,0,0,1};
    memcpy(m, ident, 64);
    return 1;
}

// Vector3d::CrossProduct @0x140644: out = a x b. Op order as the ARM
// (vmul a2*b1; vnmls a1*b2 etc.). No FPSCR change.
static int native_vec3d_cross(uint32_t optr, uint32_t aptr, uint32_t bptr) {
    float* o = (float*)mem_host(optr);
    const float* a = (const float*)mem_host(aptr);
    const float* b = (const float*)mem_host(bptr);
    if (!o || !a || !b) return 0;
    o[0] = a[1] * b[2] - a[2] * b[1];
    o[1] = a[2] * b[0] - a[0] * b[2];
    o[2] = a[0] * b[1] - a[1] * b[0];
    return 1;
}

// Vector3d::Normalize @0x141194: v = v / |v| when |v| > 1e-5 (the ARM compares
// against the +-1e-5 constants at 0x141210/0x141218). Op order as the ARM.
static int native_vec3d_normalize(uint32_t vptr) {
    float* v = (float*)mem_host(vptr);
    if (!v) return 0;
    float x = v[0], y = v[1], z = v[2];
    float len = sqrtf((y * y + x * x) + z * z);
    int r3;
    if (len < 0.0f) r3 = (len < -9.999999747378752e-06f);
    else r3 = (len > 9.999999747378752e-06f);
    if (r3) {
        float s = 1.0f / len;
        v[2] = z * s;
        v[0] = x * s;
        v[1] = y * s;
    }
    return 1;
}

// CMatrix::SetQuaternion @0x13e3a4 (translated in port/recomp, 3983/3983
// bit-exact) - the exact variable order from the validated translation.
static void native_cmat_set_quaternion(uint32_t mptr, uint32_t xb, uint32_t yb, uint32_t zb, uint32_t wb) {
    float* m = (float*)mem_host(mptr);
    if (!m) return;
    float x, y, z, w;
    memcpy(&x, &xb, 4); memcpy(&y, &yb, 4); memcpy(&z, &zb, 4); memcpy(&w, &wb, 4);
    float s5 = z * w;
    float s1 = y * w;
    float s11 = x * y;
    float s10 = y * z;
    float s8 = y * y;
    float one = 1.0f;
    float s6 = s11 + s5;
    s11 = s11 - s5;
    s5 = one;
    float s3 = z * z;
    float s7 = x * x;
    float s9 = x * z;
    float s2 = s7 + s8;
    float neg2 = -2.0f;
    s8 = s8 + s3;
    s7 = s7 + s3;
    s5 = s5 + s8 * neg2;
    s3 = one;
    float s4 = x * w;
    float s12 = s10 + s4;
    float s13 = s9 - s1;
    s10 = s10 - s4;
    s9 = s9 + s1;
    s3 = s3 + s2 * neg2;
    s11 = s11 + s11;
    s9 = s9 + s9;
    s6 = s6 + s6;
    s8 = one + s7 * neg2;
    s10 = s10 + s10;
    s13 = s13 + s13;
    s12 = s12 + s12;
    m[0x3c / 4] = one;
    m[0x00 / 4] = s5;
    m[0x04 / 4] = s11;
    m[0x08 / 4] = s9;
    m[0x10 / 4] = s6;
    m[0x14 / 4] = s8;
    m[0x18 / 4] = s10;
    m[0x20 / 4] = s13;
    m[0x24 / 4] = s12;
    m[0x28 / 4] = s3;
    m[0x38 / 4] = 0.0f;
    m[0x0c / 4] = 0.0f;
    m[0x1c / 4] = 0.0f;
    m[0x2c / 4] = 0.0f;
    m[0x30 / 4] = 0.0f;
    m[0x34 / 4] = 0.0f;
}

// RoadStruct::GetSection(int) const @0x16e3e0: section = data + idx*0x1d0.
// (The ARM also runs a bounds assert through the log function on the error
// path; the returned pointer is identical either way, so the native skips the
// assert.)  The rest of the real behaviour is reproduced exactly: the
// push {r4,r5,r6,lr} frame (the caller can read those slots) and the r2/r3
// clobbers - the shipped game runs this probe, so it must be 1:1.
static int native_roadstruct_getsection(uint32_t thisp, uint32_t idx, uint32_t lr, uint32_t sp) {
    uint8_t* th = mem_host(thisp);
    if (!th) return 0;
    uw32(sp - 16, ureg(UC_ARM_REG_R4));
    uw32(sp - 12, ureg(UC_ARM_REG_R5));
    uw32(sp - 8, ureg(UC_ARM_REG_R6));
    uw32(sp - 4, lr);
    uint32_t base = rd32(thisp + 0xc);
    usetreg(UC_ARM_REG_R0, base + idx * 0x1d0u);
    usetreg(UC_ARM_REG_R2, base);
    usetreg(UC_ARM_REG_R3, 0x1d0);
    usetreg(UC_ARM_REG_PC, lr);
    return 1;
}

// readIdx(unsigned char*&, int) @0x131f4c: read `count` bytes from *pp,
// pack them little-endian into a 32-bit value, advance *pp.
static int native_readidx(uint32_t pptr, uint32_t count, uint32_t lr) {
    uint32_t* pp = (uint32_t*)mem_host(pptr);
    if (!pp) return 0;
    uint32_t p = *pp;
    uint8_t* data = (uint8_t*)mem_host(p);
    if (!data) return 0;
    uint32_t v = 0;
    for (uint32_t i = 0; i < count && i < 4; i++) v |= (uint32_t)data[i] << (i * 8);
    uw32(pptr, p + count);   // logged: the differential must restore it
    usetreg(UC_ARM_REG_R0, v);
    usetreg(UC_ARM_REG_PC, lr);
    return 1;
}

// IdxVert::operator==(IdxVert&) @0x131d88: field compare with a 0.001 float
// epsilon (the ARM: |d| <= 0.001 with the sign-split compare, NaN = mismatch).
// Layout: short@0, shorts@0x12/0x14/0x16/0x18, byte@0x1a, then 30 x (byte@0x1b+i,
// float@0x3c+4i), then 8 shorts@0x2..0x10.
static int native_idxvert_eq(uint32_t a, uint32_t b, uint32_t lr) {
    uint8_t* pa = (uint8_t*)mem_host(a);
    uint8_t* pb = (uint8_t*)mem_host(b);
    int eq = 1;
    if (pa && pb) {
        if (*(uint16_t*)(pa + 0x00) != *(uint16_t*)(pb + 0x00)) eq = 0;
        if (eq && *(uint16_t*)(pa + 0x12) != *(uint16_t*)(pb + 0x12)) eq = 0;
        if (eq && *(uint16_t*)(pa + 0x14) != *(uint16_t*)(pb + 0x14)) eq = 0;
        if (eq && *(uint16_t*)(pa + 0x16) != *(uint16_t*)(pb + 0x16)) eq = 0;
        if (eq && *(uint16_t*)(pa + 0x18) != *(uint16_t*)(pb + 0x18)) eq = 0;
        if (eq && pa[0x1a] != pb[0x1a]) eq = 0;
        for (int i = 0; eq && i < 0x1e; i++) {
            if (pa[0x1b + i] != pb[0x1b + i]) { eq = 0; break; }
            float d = *(float*)(pa + 0x3c + i * 4) - *(float*)(pb + 0x3c + i * 4);
            int ok = (d >= 0.0f) ? (d <= 0.001f) : (d >= -0.001f);
            if (!ok) eq = 0;
        }
        for (int i = 0; eq && i < 8; i++)
            if (*(uint16_t*)(pa + 0x02 + i * 2) != *(uint16_t*)(pb + 0x02 + i * 2)) eq = 0;
    } else {
        return 0;
    }
    usetreg(UC_ARM_REG_R0, (uint32_t)eq);
    usetreg(UC_ARM_REG_PC, lr);
    return 1;
}

// CMatrix::RotateZ/Y/X @0x13fc8c/0x13fcdc/0x13fd7c: this = this * R(angle).
// The ARM code builds the rotation matrix into a cached temp (this+0x40) with
// sinf/cosf and calls CMatrix::Mult. Builder layouts verified against the real
// code (recomp_rot_test.py: 1989/1989 bit-exact):
//   Z: [c,-s,0,0, s,c,0,0, 0,0,1,0, 0,0,0,1]   (element 1 = a negated s)
//   Y: [c,0,s,0, 0,1,0,0, -s,0,c,0, 0,0,0,1]
//   X: [1,0,0,0, 0,c,-s,0, 0,s,c,0, 0,0,0,1]
static void cmat_build_rot(float* t, float angle, int axis) {
    float s = sinf(angle), c = cosf(angle);
    if (axis == 2) {
        t[0]=c; t[1]=-s; t[2]=0.0f; t[3]=0.0f;
        t[4]=s; t[5]=c;  t[6]=0.0f; t[7]=0.0f;
        t[8]=0.0f; t[9]=0.0f; t[10]=1.0f; t[11]=0.0f;
        t[12]=0.0f; t[13]=0.0f; t[14]=0.0f; t[15]=1.0f;
    } else if (axis == 1) {
        t[0]=c; t[1]=0.0f; t[2]=s; t[3]=0.0f;
        t[4]=0.0f; t[5]=1.0f; t[6]=0.0f; t[7]=0.0f;
        t[8]=-s; t[9]=0.0f; t[10]=c; t[11]=0.0f;
        t[12]=0.0f; t[13]=0.0f; t[14]=0.0f; t[15]=1.0f;
    } else {
        t[0]=1.0f; t[1]=0.0f; t[2]=0.0f; t[3]=0.0f;
        t[4]=0.0f; t[5]=c; t[6]=-s; t[7]=0.0f;
        t[8]=0.0f; t[9]=s; t[10]=c; t[11]=0.0f;
        t[12]=0.0f; t[13]=0.0f; t[14]=0.0f; t[15]=1.0f;
    }
}

// The temp matrix cache at this+0x40 is replicated (the engine allocates it
// once and frees it in ~CMatrix); when the native cannot map the memory the
// emulation is left to run (the function is scalar ARM the engine can execute).
// Returns 1 when the native ran (the caller then returns via LR).
static int native_cmat_rotate(uint32_t addr, uint32_t thisp, uint32_t angle_bits, uint32_t lr) {
    float* m = (float*)mem_host(thisp);
    if (!m) return 0;
    uint32_t tmp = rd32(thisp + 0x40);
    float* t = tmp ? (float*)mem_host(tmp) : NULL;
    if (!t) {
        tmp = heap_alloc(0x44);
        if (!tmp) return 0;
        uw32(thisp + 0x40, tmp);
        t = (float*)mem_host(tmp);
        if (!t) return 0;
    }
    float angle;
    memcpy(&angle, &angle_bits, 4);
    cmat_build_rot(t, angle, addr == BASE + 0x13fc8c ? 2 : (addr == BASE + 0x13fcdc ? 1 : 0));
    cmat_mul4(m, m, t);
    usetreg(UC_ARM_REG_PC, lr);
    return 1;
}

// CMatrix::SetTranslation @0x13e394: m[3]=x, m[7]=y, m[11]=z (the store order
// in the ARM code is z, x, y but the slots differ).
static int native_cmat_set_translation(uint32_t thisp, uint32_t xb, uint32_t yb, uint32_t zb) {
    float* m = (float*)mem_host(thisp);
    if (!m) return 0;
    float x, y, z;
    memcpy(&x, &xb, 4); memcpy(&y, &yb, 4); memcpy(&z, &zb, 4);
    m[0x2c / 4] = z;
    m[0x0c / 4] = x;
    m[0x1c / 4] = y;
    return 1;
}

static void native_cmat_mul(uc_engine* u, uint32_t addr, uint32_t r0, uint32_t r1,
                            uint32_t r2, uint32_t lr) {
    float* m0 = (float*)mem_host(r0);
    float* m1 = (float*)mem_host(r1);
    float* m2 = (float*)mem_host(r2);
    int ok = 0;
    if (addr == BASE + 0x13e1ac) {
        if (m0 && m1) { cmat_mul4(m0, m0, m1); ok = 1; }        // this = this * param
    } else if (addr == BASE + 0x13e224) {
        if (m0 && m1) { cmat_mul4(m0, m1, m0); ok = 1; }        // this = param * this
    } else {
        if (m0 && m1 && m2) { cmat_mul4(m0, m1, m2); ok = 1; }  // dest = a * b
    }
    if (!ok) {   // fallback: matrices outside the host-backed regions
        float A[16], B[16], C[16];
        if (addr == BASE + 0x13e1ac) {
            p_uc_mem_read(u, r0, A, 64); p_uc_mem_read(u, r1, B, 64);
            cmat_mul4(C, A, B); p_uc_mem_write(u, r0, C, 64);
        } else if (addr == BASE + 0x13e224) {
            p_uc_mem_read(u, r0, A, 64); p_uc_mem_read(u, r1, B, 64);
            cmat_mul4(C, B, A); p_uc_mem_write(u, r0, C, 64);
        } else {
            p_uc_mem_read(u, r1, A, 64); p_uc_mem_read(u, r2, B, 64);
            cmat_mul4(C, A, B); p_uc_mem_write(u, r0, C, 64);
        }
    }
    usetreg(UC_ARM_REG_PC, lr);
}

// ---------------------------------------------------------------------------
// The physics/collision batch (the race's dominant cost: ~63% of the sampled
// time). Fixed-point (13.13) 32-bit arithmetic throughout - every operation
// below wraps exactly like the ARM mul/dd/sub instructions.
// ---------------------------------------------------------------------------

// CCollideCar::TestSpheres @0x168358: squared-distance sphere overlap test on
// two fixed-point Vector4s (int32 x,y,z at +0/+4/+8) with the ARM's early
// axis rejects. Returns 1 (overlap) / 0. Validated vs the real ARM code by
// analysis/tools/recomp_spheres_test.py (bit-exact incl. wrap/INT_MIN cases).
// NOTE: the ARM abs is `eor r3, r2, r2, asr #31; sub r3, r3, r2, asr #31` -
// the asr#31 is an ARITHMETIC shift (0xFFFFFFFF for negatives), which the
// first version got wrong with a logical shift (caught by the diff-test).
static inline uint32_t arm_asr31(uint32_t v) {
    return (v & 0x80000000u) ? 0xFFFFFFFFu : 0u;
}
static int native_collidecar_test_spheres(uint32_t aptr, int32_t ra, uint32_t bptr, int32_t rb) {
    const int32_t* a = (const int32_t*)mem_host(aptr);
    const int32_t* b = (const int32_t*)mem_host(bptr);
    if (!a || !b) return -1;   // unmapped -> fall back to the interpreter
    uint32_t rsum = (uint32_t)rb + (uint32_t)ra;
    uint32_t dx = (uint32_t)b[0] - (uint32_t)a[0];
    uint32_t sx = arm_asr31(dx);
    uint32_t ax = dx ^ sx; ax -= sx;                          // ARM branchless abs
    if ((int32_t)rsum < (int32_t)ax) return 0;
    uint32_t dz = (uint32_t)b[2] - (uint32_t)a[2];
    uint32_t sz = arm_asr31(dz);
    uint32_t az = dz ^ sz; az -= sz;
    if ((int32_t)rsum < (int32_t)az) return 0;
    uint32_t d2 = dx * dx + dz * dz;
    uint32_t r2 = rsum * rsum;
    if ((int32_t)r2 < (int32_t)d2) return 0;
    uint32_t dy = (uint32_t)b[1] - (uint32_t)a[1];
    uint32_t sy = arm_asr31(dy);
    uint32_t ay = dy ^ sy; ay -= sy;
    if ((int32_t)rsum < (int32_t)ay) return 0;
    uint32_t d3 = dy * dy + d2;
    return (int32_t)r2 >= (int32_t)d3 ? 1 : 0;
}

// ---------------------------------------------------------------------------
// The collision cluster. These three call each other directly in C (no
// interpreter round-trips); only the genuinely rare helpers (CollideBodies,
// NoteWallImpact, the virtual vtable[0x20]) go back through call_emulated.
// All coordinates are fixed-point 13.13 int32.
//
// The "emulated frame" trick: the ARM originals keep their locals on the
// stack and pass POINTERS to the emulated helpers, so the natives allocate a
// frame in emulated memory below the caller's SP (the call_emulated helpers
// use a fixed stack top fclip above, so there is no overlap).
// ---------------------------------------------------------------------------

// CCarBase::ComputeCollisionBody @0x161a2c - build the car's collision box.
// Guarded by this[0x250]. Validated in-game by the A5_TRACE state diff.
static int g_coll_dbg = -1;               // A5_COLLIDE_DEBUG=1 trace
static int native_ccarbase_compute_collision_body(uint32_t thisp, uint32_t sp) {
    uint8_t* th = mem_host(thisp);
    if (!th) return 0;
    if (th[0x250] != 0) return 1;         // already computed this frame
    uw8(thisp + 0x250, 1);                // logged (differential restores it)
    // The original frame: push 6 regs + sub sp,#0x30 -> callee SP = sp-0x48.
    // Mimic it exactly (the callees read stale stack slots, e.g. InvSqrt's
    // Newton seed), so the memory layout matches the interpreter's.
    uint32_t fr = sp - 0x48;
    if (!mem_host(fr) || !mem_host(fr + 0x30)) return 0;
    // the virtual vtable[0x20](this, extents=fr+0x24, pos=fr+0x18)
    uint32_t vfn = rd32(rd32(thisp) + 0x20);
    if (!vfn) return 0;
    if (g_coll_dbg) printf("[coll]  vtable[0x20] = %#x (this=%#x)\n", vfn, thisp);
    call_emulated_keep(vfn, (uint32_t[]){ thisp, fr + 0x24, fr + 0x18 }, 3, fr);
    if (g_coll_dbg) printf("[coll]  vtable done\n");
    uint32_t lens = rd32(thisp + 0x548);  // the CCarAspect pointer
    int lf = (int32_t)rd32(lens + 0x24);  // GetLengthFront
    int lr = (int32_t)rd32(lens + 0x28);  // GetLengthRear
    int r5 = lf + lr;
    int r4 = lf - lr;
    int ex = (int32_t)rd32(fr + 0x24);    // extents.x
    int ey = (int32_t)rd32(fr + 0x28);    // extents.y
    int ez = (int32_t)rd32(fr + 0x2c);    // extents.z
    // center = this[0x3d4..0x3dc] + (extents * (lf-lr)) >> 13   (wrapping mul, asr 13)
    int32_t px = (int32_t)((uint32_t)ex * (uint32_t)r4);
    int32_t py = (int32_t)((uint32_t)ey * (uint32_t)r4);
    int32_t pz = (int32_t)((uint32_t)ez * (uint32_t)r4);
    uw32(fr + 0x0c, rd32(thisp + 0x3d4) + (uint32_t)(px >> 13));
    uw32(fr + 0x10, rd32(thisp + 0x3d8) + (uint32_t)(py >> 13));
    uw32(fr + 0x14, rd32(thisp + 0x3dc) + (uint32_t)(pz >> 13));
    int hw = (int32_t)rd32(lens + 0x2c);  // GetHalfWidth
    // CCollisionBody::SetBox(this+0x214, center, extents, pos, (lf+lr)>>1, hw)
    call_emulated_keep(BASE + 0x168ce8, (uint32_t[]){
        thisp + 0x214, fr + 0x0c, fr + 0x24, fr + 0x18,
        (uint32_t)(r5 >> 1), (uint32_t)hw }, 6, fr);
    int hgt = (int32_t)rd32(lens + 0x30); // GetHeight
    uw32(thisp + 0x240, (uint32_t)(hgt / 2));
    return 1;
}

// CCollideCar::CollideCarWithStaticCollider(car, body2, p3, p4) @0x16adb8.
// Returns 1 when a collision response was applied. Validated in-game by the
// A5_TRACE state diff (this function mutates the car's position).
static int native_collidecar_collide_static(uint32_t thisp, uint32_t body2,
                                            uint32_t p3, uint32_t p4, uint32_t sp) {
    uint8_t* th = mem_host(thisp);
    uint8_t* b2 = mem_host(body2);
    extern uint32_t g_trace_car;
    if (!g_trace_car) g_trace_car = thisp;   // A5_TRACE: remember the first car seen
    static int dbg = -1;
    if (dbg == -1) { dbg = getenv("A5_COLLIDE_DEBUG") ? 1 : 0; g_coll_dbg = dbg; }
    if (dbg) printf("[coll] enter car=%#x body=%#x p3=%d p4=%d sp=%#x vt=%#x slot20=%#x\n",
                    thisp, body2, (int)p3, (int)p4, sp, rd32(thisp), rd32(rd32(thisp) + 0x20));
    if (!th || !b2) return -1;                       // unmapped -> interpreter
    if ((int32_t)rd32(body2 + 0x30) == 0) return 0;  // collider radius 0
    // A5_COLL_VERIFY=1: per-call differential - run the native, snapshot, then
    // run the REAL emulated function on the restored state and diff. Only at
    // the top nesting level (the chain recurses via JumpCarWithStaticCollider).
    static int verify = -1;
    static int depth = 0;
    if (verify == -1) verify = getenv("A5_COLL_VERIFY") ? 1 : 0;
    int is_top = (depth == 0);
    depth++;
    if (verify && is_top) {
        static uint8_t snap_car[0x600], snap_car2[0x600], snap_b2[0x100], snap_b2_2[0x100];
        memcpy(snap_car, th, 0x600);
        memcpy(snap_b2, b2, 0x100);
        int res_native = native_collidecar_collide_static(thisp, body2, p3, p4, sp);
        memcpy(snap_car2, th, 0x600);
        memcpy(snap_b2_2, b2, 0x100);
        // restore, then run the real ARM code (bypassing this hook)
        memcpy(th, snap_car, 0x600);
        memcpy(b2, snap_b2, 0x100);
        extern int g_coll_bypass;
        g_coll_bypass = 1;
        uint32_t res_emu = call_emulated(BASE + 0x16adb8, (uint32_t[]){ thisp, body2, p3, p4 }, 4);
        g_coll_bypass = 0;
        // compare
        int diffs = 0;
        for (int i = 0; i < 0x600; i++)
            if (snap_car[i] != th[i]) {
                if (diffs < 12)
                    printf("[collv] car+%#x native=%02x emu=%02x\n", i, snap_car2[i], th[i]);
                diffs++;
            }
        for (int i = 0; i < 0x100; i++)
            if (snap_b2[i] != b2[i]) {
                if (diffs < 24) printf("[collv] body+%#x native=%02x emu=%02x\n", i, snap_b2_2[i], b2[i]);
                diffs++;
            }
        static int n_checked = 0, n_bad = 0;
        n_checked++;
        if (diffs) n_bad++;
        if (diffs || n_checked <= 5 || (n_checked % 2000) == 0)
            printf("[collv] call#%d car=%#x body=%#x p3=%d p4=%d | native=%d emu=%d | diffs=%d (bad %d/%d)\n",
                   n_checked, thisp, body2, (int)p3, (int)p4, res_native, (int)res_emu, diffs, n_bad, n_checked);
        // keep the native's result (restore its post-state)
        memcpy(th, snap_car2, 0x600);
        memcpy(b2, snap_b2_2, 0x100);
        return res_native;
    }
    uint32_t fr = sp - 0xc8;   // the original frame: push 9 regs + sub sp,#0x9c
    if (!mem_host(fr) || !mem_host(fr + 0xa0)) return -1;
    if (!native_ccarbase_compute_collision_body(thisp, fr)) return -1;
    // TestSpheres(this+0x214, this[0x244], body2, body2[0x30])
    if (native_collidecar_test_spheres(thisp + 0x214, (int32_t)rd32(thisp + 0x244),
                                       body2, (int32_t)rd32(body2 + 0x30)) != 1)
        return 0;
    int l38, iVar1;
    if ((int32_t)p4 == 0 || fabsf(*(float*)(th + 0xb4)) >= 100.0f) {
        l38 = (int32_t)rd32(thisp + 0x3d8);
        iVar1 = (int32_t)rd32(thisp + 0x3cc);
    } else {
        l38 = (int32_t)rd32(thisp + 0x3d8);
        iVar1 = (int32_t)rd32(thisp + 0x3cc);
        int iVar5 = (int32_t)rd32(body2 + 0x2c) + (int32_t)rd32(body2 + 4);
        int iVar2 = (int32_t)rd32(thisp + 0x240) + (int32_t)rd32(thisp + 0x218);
        int iVar3 = (iVar2 - iVar5 < 1) ? -1 : 1;
        int iVar4 = ((iVar2 - (l38 - iVar1)) - iVar5 < 1) ? -1 : 1;
        if (iVar3 == iVar4) {
            iVar5 = iVar5 - iVar2;
            if (iVar5 < 0) iVar5 = -iVar5;
            if ((int32_t)rd32(thisp + 0x240) + (int32_t)rd32(body2 + 0x2c) < iVar5) return 0;
        }
    }
    l38 = l38 - iVar1;
    int l34 = (int32_t)rd32(thisp + 0x3dc) - (int32_t)rd32(thisp + 0x3d0);
    int l3c = (int32_t)rd32(thisp + 0x3d4) - (int32_t)rd32(thisp + 0x3c8);
    // delta vector (fr+0x84..0x8c), zero vector (fr+0x48..0x50)
    uw32(fr + 0x84, (uint32_t)l3c);
    uw32(fr + 0x88, (uint32_t)l38);
    uw32(fr + 0x8c, (uint32_t)l34);
    uw32(fr + 0x48, 0); uw32(fr + 0x4c, 0); uw32(fr + 0x50, 0);
    // CollideBodies(this+0x214, &delta, 0x1000, body2, &zero, 0,
    //   &resp(fr+0x6c), &a(fr+0x60), &b(fr+0x78), &f94, &f90, &c(fr+0x54), p4, 0, false)
    if (dbg) printf("[coll]  CollideBodies(this=%#x delta=(%d,%d,%d) body=%#x)\n",
                    thisp + 0x214, l3c, l38, l34, body2);
    static int no_bodies = -1;
    if (no_bodies == -1) no_bodies = getenv("A5_COLL_NO_BODIES") ? 1 : 0;
    if (no_bodies) return 0;
    uint32_t r = call_emulated_keep(BASE + 0x16913c, (uint32_t[]){
        thisp + 0x214, fr + 0x84, 0x1000, body2,
        fr + 0x48, 0, fr + 0x6c, fr + 0x60, fr + 0x78,
        fr + 0x94, fr + 0x90, fr + 0x54, p4, 0, 0 }, 15, fr);
    if (dbg) printf("[coll]  CollideBodies -> %d\n", (int)r);
    if ((int32_t)r == 0) return 0;
    if ((int32_t)p3 != 0) {
        // A5_COLL_NO_WRITES=1: diagnostic - skip the response writes
        static int no_writes = -1;
        if (no_writes == -1) no_writes = getenv("A5_COLL_NO_WRITES") ? 1 : 0;
        if (no_writes) return 1;
        uint32_t respx = rd32(fr + 0x6c), respy = rd32(fr + 0x70), respz = rd32(fr + 0x74);
        uw32(thisp + 0x484, rd32(fr + 0x94) | rd32(thisp + 0x484) | 0x2000 | (rd32(fr + 0x90) << 4));
        uw32(thisp + 0x3cc, respy + rd32(thisp + 0x3d8));
        uw32(thisp + 0x3d0, respz + rd32(thisp + 0x3dc));
        uw32(thisp + 0x3c8, respx + rd32(thisp + 0x3d4));
        uw32(thisp + 0x4b4, rd32(fr + 0x5c));
        uw32(thisp + 0x4b0, rd32(fr + 0x54));
        uw32(thisp + 0x3dc, respz + rd32(thisp + 0x3dc));
        uw32(thisp + 0x3d8, respy + rd32(thisp + 0x3d8));
        uw32(fr + 0x3c, (uint32_t)(-(int32_t)l3c));   // -delta for NoteWallImpact
        uw32(fr + 0x40, (uint32_t)(-(int32_t)l38));
        uw32(fr + 0x44, (uint32_t)(-(int32_t)l34));
        uw32(thisp + 0x3d4, respx + rd32(thisp + 0x3d4));
        uw8(thisp + 0x250, 0);
        call_emulated_keep(BASE + 0x162660, (uint32_t[]){ thisp, fr + 0x3c, fr + 0x54 }, 3, fr);
    }
    return 1;
}

// ---------------------------------------------------------------------------
// AniObj_v4::UpdateSphericalTexCoord @0x12bc60 - the #1 sampled hotspot
// (~21% of the race).  Computes the spherical reflection UVs for the car
// meshes: per vertex it transforms the normal (param_1), normalises it,
// transforms the light vector (param_1 with the translation cleared), reflects
// and writes the UVs.  The whole function is self-contained (it only calls the
// already-native CMatrix functions), so no emulated helpers - and no stack
// mimicry - are needed.  Validated in-game by A5_TEXCOORD_VERIFY=1.
// ---------------------------------------------------------------------------

// The engine's InvSqrt reads its Newton seed from [sp-4]; the host's InvSqrt
// hook injects the classic bit-trick seed there (see hooks.inc), so the
// effective computation is this - replicated bit-exactly.
// the CMatrix::TransformVector math (identical op order to the validated
// native_cmat_transform_vector, on host pointers)
static inline void a5_xform3(const float* m, const float* v, float* out) {
    out[0] = ((m[1] * v[1] + m[0] * v[0]) + m[2] * v[2]) + m[3];
    out[1] = ((m[5] * v[1] + m[4] * v[0]) + m[6] * v[2]) + m[7];
    out[2] = ((m[9] * v[1] + m[8] * v[0]) + m[10] * v[2]) + m[11];
}

static inline float a5_inv_sqrt_host(float x) {
    uint32_t ux; memcpy(&ux, &x, 4);
    uint32_t seed = 0x5f3759dfu - (ux >> 1);
    float y; memcpy(&y, &seed, 4);
    float s14 = x * 0.5f;        // vmul  s14, s12, s15   (x * 0.5)
    float s12 = s14 * y;         // vmul  s12, s14, s13
    float s15 = 1.5f - y * s12;  // vmls  s15, s13, s12
    return y * s15;              // vmul  s14, s13, s15
}

static int native_aniobj_v4_update_spherical_texcoord(uint32_t thisp, uint32_t mptr,
                                                      uint32_t meshesptr, int n,
                                                      float fu, float fv) {
    uint8_t* th = mem_host(thisp);
    if (!th) return 0;
    uint32_t base = rd32(thisp + 0x10c);
    uint32_t idxbase = rd32(thisp + 0x110);
    uint32_t flagsb = rd32(thisp + 0x154);
    if (!base || !idxbase || !flagsb) return 1;         // the guard returns
    if ((int32_t)rd32(thisp + 0x5c) <= 1) return 1;
    const int32_t* meshes = (const int32_t*)mem_host(meshesptr);
    const float* m = (const float*)mem_host(mptr);
    if (!meshes || !m) return -1;
    // f0 = *m with the translation cleared (SetTranslation(f0,0,0,0))
    float f0[16];
    memcpy(f0, m, 64);
    f0[3] = 0.0f; f0[7] = 0.0f; f0[11] = 0.0f;

    int cnt = (int32_t)rd32(thisp + 0x5c);
    uint32_t local68[8];
    if (cnt > 8) cnt = 8;
    for (int i = 0; i < cnt; i++) local68[i] = rd32(thisp + 0x128 + (uint32_t)i * 4) + base;
    uint32_t src1b = base + rd32(thisp + 0x120);
    uint32_t src2b = base + rd32(thisp + 0x148);
    uint32_t outb = local68[1];
    int stride = (int32_t)rd32(thisp + 0x104);

    for (int mi = 0; mi < n; mi++) {
        uint32_t mesh = rd32(thisp + 0x20) + (uint32_t)meshes[mi] * 0x5c;
        int prims = (int32_t)rd32(mesh + 0x1c);
        for (int p = 0; p < prims; p++) {
            uint32_t prim = rd32(mesh + 0x20) + (uint32_t)p * 0x30;
            int type = (int16_t)ur16(rd32(prim + 8) + 8);
            if (type != 6 && type != 7) continue;
            int subn = (int16_t)ur16(prim + 0xc);
            for (int s = 0; s < subn; s++) {
                uint32_t sub = rd32(prim + 0x10) + (uint32_t)s * 0x38;
                int groups = (int32_t)rd32(sub + 0x2c);
                for (int g = 0; g < groups; g++) {
                    uint32_t idxarr = rd32(sub + 0x30);
                    int start = (int32_t)rd32(idxarr + (uint32_t)g * 4);
                    int end = (int32_t)rd32(idxarr + (uint32_t)g * 4 + 4) - 1;
                    int nv = end - start;
                    if (nv + 1 <= 0) continue;
                    const uint16_t* ip = (const uint16_t*)mem_host(idxbase + (uint32_t)start * 2);
                    if (!ip) continue;
                    for (int v = 0; v <= nv; v++) {
                        uint32_t vi = *ip++;
                        uint8_t* fl = mem_host(flagsb + vi);
                        if (!fl || fl[0]) continue;
                        fl[0] = 1;
                        uint32_t off = (uint32_t)stride * vi;
                        const float* v1 = (const float*)mem_host(src1b + off);
                        if (!v1) return -1;
                        float nrm[3];
                        a5_xform3(m, v1, nrm);
                        // the exact VFP order: ((y*y) + x*x) + z*z
                        float len2 = ((nrm[1] * nrm[1]) + nrm[0] * nrm[0]) + nrm[2] * nrm[2];
                        float inv = a5_inv_sqrt_host(len2);
                        float nx = nrm[0] * inv, ny = nrm[1] * inv, nz = nrm[2] * inv;
                        const float* v2 = (const float*)mem_host(src2b + off);
                        if (!v2) return -1;
                        float lit[3];
                        a5_xform3(f0, v2, lit);
                        // the dot: ((ny*ly + lx*nx) + nz*lz) * 2
                        float dot2 = (((ny * lit[1]) + lit[0] * nx) + nz * lit[2]) * 2.0f;
                        float rx = nx - lit[0] * dot2;
                        float ry = ny - lit[1] * dot2;
                        float rz = nz - lit[2] * dot2;
                        float u = 0.5f + rx * 0.5f;
                        float vv = 0.5f + ry * 0.5f;
                        float* outp = (float*)mem_host(outb + off);
                        if (!outp) return -1;
                        outp[0] = u + fu;
                        outp[1] = vv + fv;
                    }
                }
            }
        }
    }
    return 1;
}

// ---------------------------------------------------------------------------
// CMap::CollideCarsWithBGObjects @0x16f6d4 - the collision driver (#1 sampled
// hotspot).  Phase 1 walks the background objects (this+0x40, count this+0x48)
// against the cars and calls the (now native) CollideCarWithStaticCollider;
// phase 2 walks the collidable bodies (this+0x50, count this+0x1050), calls
// Collide/Update and the collision notification.  The rare helpers
// (OnBodyCollided, NotifyEvent, IsWoodenObject, CCollidableBody::Collide/
// Update) stay emulated via call_emulated_at with the driver's own frame SP
// (sp-0x38: push 9 regs + sub 0x14), matching the interpreter's stack layout.
// ---------------------------------------------------------------------------
static int native_map_collide_cars_with_bg(uint32_t thisp, uint32_t carsptr, uint32_t sp) {
    uint8_t* th = mem_host(thisp);
    if (!th) return -1;
    uint32_t game = rd32(BASE + 0x1fa798);
    uint32_t scene = game ? rd32(game + 0x1bc8) : 0;
    if (scene && (int32_t)rd32(scene + 0x6432c) > 0) return 1;   // the gate
    uint32_t fr = sp - 0x38;              // the frame the interpreter would use
    uint8_t* fp = mem_host(fr);
    if (!fp) return -1;

    // ---- phase 1: background objects vs cars
    uw32(thisp + 0x34, 0x85);
    int n1 = (int32_t)rd32(thisp + 0x48);
    for (int i = 0; i < n1; i++) {
        uint32_t arr = rd32(thisp + 0x40);
        if (!arr) break;
        uint32_t body = rd32(arr + (uint32_t)i * 4);
        int c1 = (int32_t)rd32(carsptr + 4);
        int c2 = (int32_t)rd32(carsptr + 0xc);
        for (int j = 0; j < c1 + c2; j++) {
            uint32_t car = (j < c1) ? rd32(rd32(carsptr) + (uint32_t)j * 4)
                                    : rd32(rd32(carsptr + 8) + (uint32_t)(j - c1) * 4);
            if (!car) continue;
            int cvar1;
            if (i < (int32_t)rd32(thisp + 0x4c)) cvar1 = 0;
            else {
                uint8_t* ob = mem_host(body + 0x44);
                if (!ob || ob[0] == 0) continue;
                if ((rd32(car + 0x178c) & 8) == 0) cvar1 = 0;
                else {
                    uint8_t* sb2 = mem_host(rd32(body + 0x3c) + 0x128);
                    cvar1 = sb2 ? sb2[0] : 0;
                }
            }
            if ((rd32(car + 0x16b8) != 0 && (int32_t)rd32(car + 0x16a4) > 0) || cvar1 != 0) continue;
            int res = native_collidecar_collide_static(car, body, 1, 1, fr);
            if (res != 1) continue;
            uw32(thisp + 0x34, 0x85);
            if (i < (int32_t)rd32(thisp + 0x4c)) continue;
            // the post-collision: Vector2s::Length2 -> float -> sqrt ->
            // StaticSceneObject::OnBodyCollided(obj, car, dist)
            int l30 = (int32_t)rd32(body) - (int32_t)rd32(car + 0x214);
            int l2c = (int32_t)rd32(body + 8) - (int32_t)rd32(car + 0x21c);
            int a = l30 < 0 ? -l30 : l30;
            int b = l2c < 0 ? -l2c : l2c;
            uint32_t len2 = (uint32_t)(b * b) + (uint32_t)(a * a);
            float f = sqrtf((float)len2);
            call_emulated_keep(BASE + 0xb5adc, (uint32_t[]){ rd32(body + 0x3c), car, *(uint32_t*)&f }, 3, fr);
            if ((int32_t)rd32(car + 0x1dc) != -1 || rd32(car + 0x498) != 0)
                uw32(car + 0x3d8, rd32(car + 0x3d8) + rd32(car + 0x1bc));
            if ((rd32(car + 0x178c) & 8) == 0 ||
                (int32_t)rd32(car + 0x3d8) >= (int32_t)rd32(car + 0x3cc)) continue;
            uw32(car + 0x484, rd32(car + 0x484) | 0x10000);
        }
    }

    // ---- phase 2: collidable bodies vs cars
    int n2 = (int32_t)rd32(thisp + 0x1050);
    for (int i = 0; i < n2; i++) {
        uint32_t body = rd32(thisp + 0x50 + (uint32_t)i * 4);
        if (!body) continue;
        uint8_t* b76 = mem_host(body + 0x76);
        if (!b76 || b76[0] == 0) continue;
        uint8_t* b75 = mem_host(body + 0x75);
        if (b75 && b75[0] != 0) {
            int c1 = (int32_t)rd32(carsptr + 4);
            int c2 = (int32_t)rd32(carsptr + 0xc);
            for (int j = 0; j < c1 + c2; j++) {
                uint32_t car = (j < c1) ? rd32(rd32(carsptr) + (uint32_t)j * 4)
                                        : rd32(rd32(carsptr + 8) + (uint32_t)(j - c1) * 4);
                if (!car) continue;
                if (rd32(car + 0x16b8) != 0 && (int32_t)rd32(car + 0x16a4) >= 1) continue;
                if (native_collidecar_collide_static(car, body, 0, 0, fr) != 1) continue;
                int32_t v = (int32_t)rd32(car + 0x1d20);
                if (v == (v / 10) * 10)
                    call_emulated_keep(BASE + 0x14ad40, (uint32_t[]){ car, 0x16, 1 }, 3, fr);
                uint32_t type = 0;
                if (scene) {
                    uint32_t entry = rd32(rd32(scene + 0x11c60) + rd32(body + 0x70) * 4);
                    if (entry) type = ur16(entry + 0xe8);
                }
                if (type == 0xa78 || type == 0xa81) uw32(thisp + 0x34, 0x87);
                else {
                    uint32_t r = call_emulated_keep(BASE + 0x16dd30, (uint32_t[]){ thisp, type }, 2, fr);
                    uw32(thisp + 0x34, r ? 0x88 : 0x85);
                }
                call_emulated_keep(BASE + 0x1683ec, (uint32_t[]){ body, car }, 2, fr);
            }
        } else {
            call_emulated_keep(BASE + 0x16873c, (uint32_t[]){ body }, 1, fr);
        }
    }
    return 1;
}

// ---------------------------------------------------------------------------
// gxRenderGroup cluster - the render-group sorting (~14% of the top-200).
// All four functions are self-contained leaves (Compare/IsSimilar are pure
// comparators; InsertItem is a sorted linked-list insert; OrderRenderGroups
// drives them and assigns the draw-order indices).  The native versions call
// each other directly in C; only OrderRenderGroups and the RenderPowerups
// InsertItem entry are hooked.
// ---------------------------------------------------------------------------

// gxRenderGroup::Compare(gxRenderItem* a, gxRenderItem* b) @0x1187c4
static int native_gxrg_compare(uint32_t a, uint32_t b) {
    uint32_t mb = rd32(b + 0xc);          // b's material
    uint32_t ma = rd32(a + 0xc);          // a's material
    int16_t sb = (int16_t)ur16(mb + 4);
    int16_t sa = (int16_t)ur16(ma + 4);
    if (sb < sa) return 0;
    if (sb > sa) return 1;
    return rd8(mb + 0x30) > rd8(ma + 0x30);
}

// gxRenderGroup::IsSimilar(gxRenderItem* a, gxRenderItem* b) @0x118740
static int native_gxrg_is_similar(uint32_t a, uint32_t b) {
    if (b == 0) return 0;
    uint32_t bf = rd32(b + 0x14);
    if (bf & 0x40000000u) return 0;
    uint32_t af = rd32(a + 0x14);
    if (af & 0x40000000u) return 0;
    uint32_t bmesh = rd32(b + 4);
    if (rd8(bmesh + 0x186) == 4) return 0;
    uint32_t bmat = rd32(b + 0xc);
    uint32_t amat = rd32(a + 0xc);
    if (bmat == 0) return 0;
    if (rd8(bmat + 0x30) != rd8(amat + 0x30)) return 0;
    if (bf != af) return 0;
    return (int16_t)ur16(bmat + 4) == (int16_t)ur16(amat + 4);
}

// gxRenderGroup::InsertItem(gxRenderItem*) @0x1189d0
static int native_gxrg_insert_item(uint32_t thisp, uint32_t item) {
    uint32_t mesh = rd32(item + 4);
    if (mesh == 0)
        printf("[assert] gxRenderGroup::InsertItem: item->mesh == NULL\n");
    int32_t idx = (int32_t)rd32(item);
    int bvar1;
    if (idx == 4) {
        if (rd8(thisp + 0xa8) != 0) {
            bvar1 = 0;
        } else {
            if (rd8(mesh + 0x178) == 0) return 1;
            bvar1 = 1;
        }
    } else {
        if (rd8(thisp + 0xa8) == 0) return 1;
        bvar1 = 0;
    }
    uw32(item + 0x10, 0);
    uint32_t head = rd32(thisp + (uint32_t)idx * 0x20 + 0x14);
    if (head == 0) {
        uw32(item + 0x10, 0);
        uw32(thisp + (uint32_t)idx * 0x20 + 0x14, item);
        return 1;
    }
    // prev is chosen so that prev+0x10 is the next-pointer slot to patch
    // (this+idx*0x20+4 -> +0x10 = the head slot; a node -> +0x10 = its next).
    uint32_t prev = thisp + (uint32_t)idx * 0x20 + 4;
    uint32_t cur = head;
    for (;;) {
        int ins;
        if (bvar1) {
            float idist = uf32(rd32(item + 4) + 0x188);
            float ndist = uf32(rd32(cur + 4) + 0x188);
            ins = (idist > ndist);
        } else {
            ins = (native_gxrg_compare(cur, item) != 0);
        }
        if (ins) {
            uw32(item + 0x10, rd32(prev + 0x10));
            uw32(prev + 0x10, item);
            return 1;
        }
        uint32_t next = rd32(cur + 0x10);
        prev = cur;
        if (next == 0) {
            uw32(item + 0x10, 0);
            uw32(cur + 0x10, item);
            return 1;
        }
        cur = next;
    }
}

// gxRenderGroup::OrderRenderGroups(StaticSceneObject**, int) @0x118b54
static int native_gxrg_order(uint32_t thisp) {
    static const uint32_t SXX[7] = {
        0xafcda8, 0xafcdac, 0xafcdb0, 0xafcdb4, 0xafcdb8, 0xafcdbc, 0xafcdc0
    };
    uint8_t c = rd8(thisp + 0xa8);
    for (int i = 0; i < 7; i++) uw32(BASE + SXX[i], 0);
    if (c != 0) {
        uw32(thisp + 0x94, 0);
        uw32(thisp + 0x14, 0);
        uw32(thisp + 0x34, 0);
        uw32(thisp + 0x54, 0);
        uw32(thisp + 0x74, 0);
    }
    uw32(thisp + 0x94, 0);
    int32_t n = (int32_t)rd32(thisp + 0xa4);
    if (n > 0) {
        for (int32_t i = 0; i < n; i++) {
            uint32_t item = rd32(thisp) + (uint32_t)i * 0x20;
            native_gxrg_insert_item(thisp, item);
            n = (int32_t)rd32(thisp + 0xa4);     // the interpreter re-reads it
        }
        c = rd8(thisp + 0xa8);
    }
    if (c != 0) {
        uw8(thisp + 0xa8, 0);
        uint32_t r6 = thisp;
        int32_t idx = 0;
        do {
            uint32_t item = rd32(r6 + 0x14);
            while (item != 0) {
                uw32(item + 0x1c, (uint32_t)idx);
                int32_t r = native_gxrg_is_similar(item, rd32(item + 0x10));
                item = rd32(item + 0x10);
                if (r == 0) idx++;
            }
            r6 += 0x20;
        } while (r6 != thisp + 0xa0);
    }
    return 1;
}

// ---------------------------------------------------------------------------
// The visibility/sort cluster: Scene::SortObjectsDrawOrder @0x8dae0 (8.8% of
// the top-200), StaticSceneObject::IsVisible2 @0xb5ff4 (6.5%) and the frustum
// leaf Lib3D::SphereInFrustum @0x11a1f4.  SortObjectsDrawOrder is the only
// caller of IsVisible2, and IsVisible2 is the only caller of SphereInFrustum,
// so the three collapse into plain C calls - no per-object hook overhead.
// Only SortObjectsDrawOrder itself is hooked (once per frame).
// ---------------------------------------------------------------------------

// Lib3D::SphereInFrustum(Vector3d&, float) @0x11a1f4.  Exact op order from the
// ARM (vmul b0*x; vmul z*b8; vadd/vsub; then the same for y with a8/ac).
static int sphere_in_frustum_h(const float* v, float r, const float* lf) {
    float fclip = lf[0x1310 / 4];
    float z = v[2];
    if (z + r < -fclip) return 0;
    if (z - r > -32.0f) return 0;
    float nr = -r;
    float b0 = lf[0x12b0 / 4];
    float b8 = lf[0x12b8 / 4];
    float t1 = b0 * v[0];
    float t2 = z * b8;
    if (nr > t2 + t1) return 0;
    if (nr > t2 - t1) return 0;
    float a8 = lf[0x12a8 / 4];
    float ac = lf[0x12ac / 4];
    float t3 = a8 * v[1];
    float t4 = z * ac;
    if (nr > t4 + t3) return 0;
    return !(nr > t4 - t3);
}
static int native_lib3d_sphere_in_frustum(uint32_t l3d, uint32_t vptr, uint32_t rbits) {
    const float* v = (const float*)mem_host(vptr);
    const float* lf = (const float*)mem_host(l3d);
    if (!v || !lf) return -1;
    float r; memcpy(&r, &rbits, 4);
    return sphere_in_frustum_h(v, r, lf);
}

// CAniMgrDLists::IsVisible(CMatrix*) @0x12e08c - the vtable+0x18 method of the
// animated objects (the +0x5c slot is a `bx lr` no-op stub).  Fully native.
static int native_animgr_is_visible(uint32_t thisp, uint32_t mptr) {
    const float* m = (const float*)mem_host(mptr);
    uint32_t p = rd32(thisp + 8);
    const uint8_t* ph = mem_host(p);
    uint32_t l3d = rd32(BASE + 0x1fa79c);
    const float* lf = (const float*)mem_host(l3d);
    if (!m || !ph || !lf) return 0;
    const float* v = (const float*)(ph + 0x64);
    float local[3];
    local[0] = ((m[1] * v[1] + m[0] * v[0]) + m[2] * v[2]) + m[3];
    local[1] = ((m[5] * v[1] + m[4] * v[0]) + m[6] * v[2]) + m[7];
    local[2] = ((m[9] * v[1] + m[8] * v[0]) + m[10] * v[2]) + m[11];
    float radius = *(const float*)(ph + 0x70);
    return sphere_in_frustum_h(local, radius, lf) != 0;
}

// StaticSceneObject::IsVisible2 @0xb5ff4.  sp = the caller's SP at the bl
// (the interpreter frame is sp-0x3c: push 5 + fstmdbx d8-d10 + sub 0x10).
// Host pointers are cached - the per-field mem_host() scans dominated the
// first version (the interpreter's soft-TLB was faster than them).
static int native_ssc_isvisible2(uint32_t thisp, uint32_t sp) {
    uint32_t fr = sp - 0x3c;
    uint8_t* th = mem_host(thisp);
    if (!th) return 0;
    uint32_t l3d = rd32(BASE + 0x1fa79c);
    uint8_t* lh = mem_host(l3d);
    if (!lh) return 0;
    uint32_t cam = *(uint32_t*)(lh + 0x1314);
    uint8_t* ch = mem_host(cam);
    if (!ch) return 0;
    uw8(thisp + 0x178, 0);
    if (th[0x17a] != 0) return 0;
    if (th[0x194] == 0 && th[0x186] != 4) return 0;
    float fclip = *(float*)(lh + 0x1310);
    float dx = *(float*)(ch + 0x48) - *(float*)(th + 0x10);
    float dz = *(float*)(ch + 0x84) - *(float*)(th + 0x20);
    uw8(thisp + 0x178, 1);
    float cy = *(float*)(ch + 0xc0);
    if (!(*(float*)(th + 0x18c) < fclip * 0.8f)) {
        uw8(thisp + 0x178, 0);
        if (dx > fclip || dx < -fclip || dz > fclip || dz < -fclip) return 0;
    }
    int32_t res;
    if (th[0x186] == 4) {
        // the special path: this[0x134] = cam * this[4], then the object's own
        // vtable methods.  For this class +0x5c is a `bx lr` stub and +0x18 is
        // CAniMgrDLists::IsVisible - both native; anything else falls back to
        // the interpreter.
        native_cmat_load(thisp + 0x134, cam);
        float* m0 = (float*)mem_host(thisp + 0x134);
        float* m1 = (float*)mem_host(thisp + 4);
        if (m0 && m1) cmat_mul4(m0, m0, m1);
        uint32_t vt = rd32(thisp + 0x17c);
        uint32_t vtab = rd32(vt);
        uint32_t f5c = rd32(vtab + 0x5c);
        if (f5c != BASE + 0x12cb20)
            call_emulated_keep(f5c, (uint32_t[]){ vt }, 1, fr);
        uw8(thisp + 0x178, 0);
        uint32_t f18 = rd32(vtab + 0x18);
        if (f18 == BASE + 0x12e08c)
            res = native_animgr_is_visible(vt, thisp + 0x134);
        else
            res = (int32_t)call_emulated_keep(f18, (uint32_t[]){ vt, thisp + 0x134 }, 2, fr);
    } else {
        uw8(thisp + 0x178, 0);
        uint32_t* lv = (uint32_t*)mem_host(fr + 4);
        if (!lv) return 0;
        lv[0] = 0; lv[1] = 0; lv[2] = 0;
        native_cmat_transform_vector(cam, fr + 4, thisp + 0x68);
        res = native_lib3d_sphere_in_frustum(l3d, fr + 4, *(uint32_t*)(th + 0x18c));
    }
    if (res != 0) {
        float d3 = cy - *(float*)(th + 0x30);
        // the ARM order: (dz*dz) + dx*dx + d3*d3
        float d2 = ((dz * dz) + dx * dx) + d3 * d3;
        { uint32_t _fb_; memcpy(&_fb_, &d2, 4); uw32(thisp + 0x188, _fb_); }
        uw8(thisp + 0x178, 1);
        return 1;
    }
    return 0;
}

// Scene::SortObjectsDrawOrder @0x8dae0.  sp = the entry SP (frame = sp-0x28:
// push 9 regs + sub 4).  Cached host pointers throughout.
static int native_scene_sort_draw_order(uint32_t thisp, uint32_t sp) {
    uint32_t fr = sp - 0x28;
    uint8_t* th = mem_host(thisp);
    if (!th) return 1;
    uint32_t l3d = rd32(BASE + 0x1fa79c);
    uint8_t* lh = mem_host(l3d);
    uint32_t list = *(uint32_t*)(th + 0x11c60);
    uint32_t* larr = (uint32_t*)mem_host(list);
    *(uint32_t*)(th + 0x11c78) = 0;
    *(uint32_t*)(th + 0x11c7c) = 0;
    *(uint32_t*)(th + 0x11c84) = 0;
    *(uint32_t*)(th + 0x11c88) = 0;
    if (!larr || !lh) return 1;
    int32_t n;
    if (th[0x18c44] == 0) {
        n = *(int32_t*)(th + 0x11c64);
        if (n < 1) return 1;
        for (int32_t i = 0; i < n; i++) {
            uint32_t obj = larr[i];
            if (obj) {
                uint8_t* oh = mem_host(obj);
                if (oh) oh[0x194] = 1;
            }
            n = *(int32_t*)(th + 0x11c64);
        }
    } else {
        n = *(int32_t*)(th + 0x11c64);
        if (n > 0) {
            for (int32_t i = 0; i < n; i++) {
                uint32_t obj = larr[i];
                if (obj) {
                    uint8_t* oh = mem_host(obj);
                    if (oh) oh[0x194] = 0;
                }
                n = *(int32_t*)(th + 0x11c64);
            }
        }
        uint32_t scene = rd32(rd32(BASE + 0x1fa798) + 0x1bc8);
        int32_t sec = (int32_t)call_emulated_keep(BASE + 0x895fc, (uint32_t[]){ scene }, 1, fr);
        scene = rd32(rd32(BASE + 0x1fa798) + 0x1bc8);
        uint8_t* sh = mem_host(scene);
        if (!sh) return 1;
        int32_t cnt = (int16_t)ur16(*(uint32_t*)(sh + 0x18c3c) + (uint32_t)sec * 2);
        if (cnt > 0) {
            int32_t k = 0;
            do {
                uint32_t arr = *(uint32_t*)(sh + 0x18c40);
                uint8_t* ah = mem_host(arr + (uint32_t)sec * 4);
                if (!ah) break;
                int32_t idx = (int16_t)ur16(*(uint32_t*)ah + (uint32_t)k * 2);
                uint32_t obj = larr[(uint32_t)idx];
                if (obj) {
                    uint8_t* oh = mem_host(obj);
                    if (oh) oh[0x194] = 1;
                }
                k++;
                scene = rd32(rd32(BASE + 0x1fa798) + 0x1bc8);
                sh = mem_host(scene);
                if (!sh) break;
                cnt = (int16_t)ur16(*(uint32_t*)(sh + 0x18c3c) + (uint32_t)sec * 2);
            } while (k < cnt);
        }
    }
    // the per-object pass: set the far clip, then the visibility test
    n = *(int32_t*)(th + 0x11c64);
    if (n > 0) {
        for (int32_t i = 0; i < n; i++) {
            uint32_t obj = larr[i];
            if (obj) {
                uint8_t* oh = mem_host(obj);
                if (oh) {
                    uint8_t ty = oh[0x186];
                    if ((uint8_t)(ty - 2) <= 1)
                        *(uint32_t*)(lh + 0x1310) = 0x461c4000;  // g_far_clip_reflection() = 10000.0f
                    else
                        *(uint32_t*)(lh + 0x1310) = 0x469c4000;  // 20000.0f
                    if (native_ssc_isvisible2(obj, fr) != 0)
                        *(uint32_t*)(lh + 0x1310) = 0x469c4000;
                }
            }
            n = *(int32_t*)(th + 0x11c64);
        }
    }
    return 1;
}


// ---------------------------------------------------------------------------
// Lib3D_NameSpace::ISqrt @0x16d4b8 - the table-based integer sqrt (1.39% of
// the race, used by Vector2s::Length and the whole collision family).
// Four magnitude branches index one 4096-entry table at ELF 0x1d5d2c with
// different arithmetic shifts.  Verified against the .so's table statically
// (T[16]>>4 = 256 = sqrt(0x10000); T[0x100] = 16384 = sqrt(0x10000000)) and at
// runtime with A5_ISQRT_TEST=1 (native vs interpreter over the range).
// ---------------------------------------------------------------------------
static uint32_t native_isqrt(uint32_t x) {
    const int32_t* T = (const int32_t*)mem_host(BASE + 0x1d5d2c);
    if (!T) return 0;
    if ((x >> 16) != 0) {
        if (x & 0xff000000u) return (uint32_t)T[(x >> 20) & 0xFFFu];
        return (uint32_t)(T[(x >> 12) & 0xFFFu] >> 4);
    }
    if (x & 0xf000u) return (uint32_t)(T[(x >> 4) & 0xFFFu] >> 8);
    return (uint32_t)(T[x & 0xFFFu] >> 10);
}

// ---------------------------------------------------------------------------
// CCollideCar::CollideCarWithPlane @0x16b338 (2.9% of the race).
// int CollideCarWithPlane(CCarBase* car, Vector2s* p2, Vector2s* p3, int* p4,
//                         bool p5, bool p6)
// Frame: push 9 + fstmdbx d8 + sub 0x98 -> callee SP = entry SP - 0xc4.
// The four car-corner virtuals (vtable[0x18]/[0x1c], args (out, car)) write
// 12-byte structs at fr+0x84/0x78/0x6c/0x60; the components used are the 1st
// corner's x, the 2nd's 3rd int, the 3rd's x and the 4th's 3rd int (exact
// offsets from the asm).  The corner polygon (4 or 6 points) is built at
// fr+0x30 (8 bytes per point) and the per-point projection loop uses the
// ARM's int->double product range guards + __aeabi_idiv.  Validated with a
// per-call differential against the interpreter (A5_PLANE_VERIFY=1).
// ---------------------------------------------------------------------------
static int native_ccollidecar_collide_with_plane(uint32_t car, uint32_t p2, uint32_t p3,
                                                 uint32_t p4, uint32_t sp) {
    // Frame = sp - 0xc8 (measured).  The stores mirror the interpreter's exact
    // ORDER (early prologue stores -> Length -> car fields -> the virtuals with
    // the 1st-corner copy interleaved -> the corner construction -> *p4 = 0 ->
    // the mid points -> the point-array base LAST) because the corner virtuals
    // and getters run with callee SP = fr and write into the caller's low frame
    // slots; only the post-call store set determines the final frame.
    uint32_t fr = sp - 0xc8;
    if (!mem_host(fr) || !mem_host(car)) return -1;
    // the interpreter's prologue push: {r4-r8,sb,sl,fp,lr} at fr+0xa4.. and the
    // VFP d8 slot at fr+0x9c (the caller's entry values - read them first)
    uw32(fr + 0xa4, ureg(UC_ARM_REG_R4));
    uw32(fr + 0xa8, ureg(UC_ARM_REG_R5));
    uw32(fr + 0xac, ureg(UC_ARM_REG_R6));
    uw32(fr + 0xb0, ureg(UC_ARM_REG_R7));
    uw32(fr + 0xb4, ureg(UC_ARM_REG_R8));
    uw32(fr + 0xb8, ureg(UC_ARM_REG_R9));
    uw32(fr + 0xbc, ureg(UC_ARM_REG_R10));
    uw32(fr + 0xc0, ureg(UC_ARM_REG_R11));
    uw32(fr + 0xc4, ureg(UC_ARM_REG_LR));
    uw32(fr + 0x98, 0);              // a deep local the interpreter leaves 0
    {
        // the fstmdbx sp!,{d8} push: the caller's d8 (double) at fr+0x9c
        uint64_t d8v = 0;
        uint32_t s16 = 0, s17 = 0;
        p_uc_reg_read(g_uc, UC_ARM_REG_S0 + 16, &s16);
        p_uc_reg_read(g_uc, UC_ARM_REG_S0 + 17, &s17);
        d8v = (uint64_t)s16 | ((uint64_t)s17 << 32);
        if (1) {
            uw32(fr + 0x9c, (uint32_t)d8v);
            uw32(fr + 0xa0, (uint32_t)(d8v >> 32));
        } else {
            uw32(fr + 0x9c, 0);
            uw32(fr + 0xa0, 0);
        }
    }
    int32_t p5 = (int32_t)rd8(sp + 0);
    int32_t p6 = (int32_t)rd8(sp + 4);
    int32_t iVar14 = (int32_t)rd32(p2) - (int32_t)rd32(p3);
    int32_t iVar11 = (int32_t)rd32(p2 + 4) - (int32_t)rd32(p3 + 4);
    uw32(fr + 0x1c, (uint32_t)iVar14);
    uw32(fr + 0x20, (uint32_t)iVar11);
    int32_t px, py;
    if (p5) { px = -iVar14; py = iVar11; } else { px = iVar14; py = -iVar11; }
    uw32(fr + 0x90, (uint32_t)px);
    uw32(fr + 0x94, (uint32_t)py);
    // the interpreter's early prologue stores (before any call)
    {
        uint32_t lit = rd32(BASE + 0x16b830);
        uw32(fr + 0x08, BASE + 0x16b398 + lit);   // the GOT base
    }
    uw32(fr + 0x10, p4);
    uw8(fr + 0x0c, rd8(sp + 4));
    int32_t ax = px < 0 ? -px : px;
    int32_t ay = py < 0 ? -py : py;
    uint32_t uVar6 = native_isqrt((uint32_t)(ay * ay) + (uint32_t)(ax * ax));
    uw32(fr + 0x14, uVar6);
    int32_t iVar13 = (int32_t)rd32(car + 0x3d4);
    int32_t iVar15 = (int32_t)rd32(car + 0x3dc);
    uw32(fr + 0x28, (uint32_t)iVar15);
    uw32(fr + 0x2c, (uint32_t)iVar13);
    // the four "corner virtuals" inlined (CCar::GetCarForwardShifted12 @0x14cb70
    // = {car[0x17c], car[0x180], car[0x184]}; CCar::GetCarRightShifted12
    // @0x14cb54 = {car[0x188], car[0x18c], car[0x190]}).  Each callee also does
    // `str lr,[sp,#-4]!` -> the caller's [fr-4] gets the LR; replicate that.
    uw32(fr - 4, ureg(UC_ARM_REG_LR));
    uw32(fr + 0x84, rd32(car + 0x17c));
    uw32(fr + 0x88, rd32(car + 0x180));
    uw32(fr + 0x8c, rd32(car + 0x184));
    int32_t c1x = (int32_t)rd32(fr + 0x84);
    uw32(fr + 0x24, (uint32_t)c1x);               // the 1st corner's x copy
    uw32(fr + 0x78, rd32(car + 0x17c));
    uw32(fr + 0x7c, rd32(car + 0x180));
    uw32(fr + 0x80, rd32(car + 0x184));
    uw32(fr + 0x6c, rd32(car + 0x188));
    uw32(fr + 0x70, rd32(car + 0x18c));
    uw32(fr + 0x74, rd32(car + 0x190));
    uw32(fr + 0x60, rd32(car + 0x188));
    uw32(fr + 0x64, rd32(car + 0x18c));
    uw32(fr + 0x68, rd32(car + 0x190));
    // the getters inlined: *(int*)(*(int*)(car+0x548) + 0x24/0x28/0x2c)
    uint32_t dims = rd32(car + 0x548);
    int32_t lenFront = (int32_t)rd32(dims + 0x24);
    int32_t lenRear = (int32_t)rd32(dims + 0x28);
    int32_t halfW = (int32_t)rd32(dims + 0x2c);
    int32_t c2z = (int32_t)rd32(fr + 0x80);
    int32_t c3x = (int32_t)rd32(fr + 0x6c);
    int32_t c4z = (int32_t)rd32(fr + 0x68);
    int32_t c4x = (int32_t)rd32(fr + 0x60);
    int32_t p0x, p0y, p1x, p1y, p2x, p2y, p3x, p3y;
    if (rd8(car + 5) == 0 && (rd32(car + 0x178c) & 0x10)) {
        halfW = halfW / 10 + halfW;
        lenRear = lenRear / 10 + lenRear;
        lenFront = lenFront / 10 + lenFront;
        int32_t a = iVar13 - ((lenRear * c1x) >> 12);
        int32_t b = iVar15 - ((c2z * lenRear) >> 12);
        int32_t xa = iVar13 + ((lenFront * c1x) >> 12);
        int32_t ya = iVar15 + ((c2z * lenFront) >> 12);
        int32_t k1 = (c3x * halfW) >> 12;
        int32_t k2 = (c4x * halfW) >> 12;
        p2x = a - k1;  p2y = b - k2;
        p3x = a + k1;  p3y = b + k2;
        p1x = xa - k1; p1y = ya - k2;
        p0x = xa + k1; p0y = ya + k2;
    } else {
        int32_t f9 = lenFront / 10 + lenFront;
        int32_t h10 = halfW / 10 + halfW;
        int32_t rear2 = lenRear * 2;
        int32_t t80 = iVar13 - ((rear2 * c1x) >> 12);
        int32_t t7c = iVar15 - ((c2z * rear2) >> 12);
        int32_t xa = iVar13 + ((f9 * c1x) >> 12);
        int32_t ya = iVar15 + ((c2z * f9) >> 12);
        int32_t k11 = (c3x * h10) >> 12;
        int32_t k11b = (c4z * h10) >> 12;
        int32_t k2 = (c3x * (halfW * 2)) >> 12;
        int32_t k2b = (c4z * (halfW * 2)) >> 12;
        p0x = xa - k11;  p0y = ya - k11b;
        p1x = xa + k11;  p1y = ya + k11b;
        p2x = t80 - k2;  p2y = t7c - k2b;
        p3x = t80 + k2;  p3y = t7c + k2b;
    }
    uw32(fr + 0x30, (uint32_t)p0x); uw32(fr + 0x34, (uint32_t)p0y);
    uw32(fr + 0x38, (uint32_t)p1x); uw32(fr + 0x3c, (uint32_t)p1y);
    uw32(fr + 0x40, (uint32_t)p2x); uw32(fr + 0x44, (uint32_t)p2y);
    uw32(fr + 0x48, (uint32_t)p3x); uw32(fr + 0x4c, (uint32_t)p3y);
    uw32(p4, 0);
    int32_t nb;
    if (!p6) {
        nb = 4;
        uw32(fr + 0x18, 4);
    } else {
        int32_t m4x = (p0x + p1x) / 2;
        int32_t m4y = (p0y + p1y) / 2;
        int32_t m5x = (p2x + p3x) / 2;
        int32_t m5y = (p2y + p3y) / 2;
        uw32(fr + 0x50, (uint32_t)m4x); uw32(fr + 0x54, (uint32_t)m4y);
        uw32(fr + 0x58, (uint32_t)m5x); uw32(fr + 0x5c, (uint32_t)m5y);
        nb = 6;
        uw32(fr + 0x18, 6);
    }
    uw32(fr + 0x04, fr + 0x30);      // the point-array base - stored LAST
    int32_t v2y = (int32_t)rd32(p2 + 4);
    int32_t v2x = (int32_t)rd32(p2);
    uint32_t game = rd32(BASE + 0x1fa798);
    uint32_t scene = game ? rd32(game + 0x1bc8) : 0;
    int32_t iVar7 = 0, best = 0;
    for (int32_t iVar8 = 0; iVar8 < nb; iVar8++) {
        int32_t ptX = (int32_t)rd32(fr + 0x30 + (uint32_t)iVar8 * 8);
        int32_t ptY = (int32_t)rd32(fr + 0x34 + (uint32_t)iVar8 * 8);
        int32_t iVar15b = v2y - ptX;
        int32_t iVar10 = v2x - ptY;
        int32_t iVar16 = 0;
        double d17 = (double)px * (double)iVar15b;
        if (!(d17 < 2147483647.0)) iVar16 = 0;
        else if (d17 <= -2147483648.0) iVar16 = 0;
        else {
            double d18 = (double)py * (double)iVar10;
            if (!(d18 < 2147483647.0)) iVar16 = 0;
            else if (d18 <= -2147483648.0) iVar16 = 0;
            else {
                int32_t num = (int32_t)((uint32_t)(iVar10 * py) + (uint32_t)(iVar15b * px));
                iVar16 = num / (int32_t)uVar6;
            }
        }
        int32_t lr = iVar16 > 0 ? 1 : 0;
        if (iVar16 > best) {
            int32_t ahead = (int32_t)((uint32_t)(iVar10 * iVar14) + (uint32_t)(iVar15b * iVar11));
            if (ahead > 0 || (scene && (int32_t)rd32(scene + 0x6432c) > 0)) {
                best = iVar16;
                uw32(p4, (uint32_t)iVar16);
            }
        }
        if (iVar8 == 4 && lr) iVar7 = 2;
        if (iVar8 == 5 && lr) iVar7 = 3;
        best = (int32_t)rd32(p4);
    }
    if (iVar7 == 0) iVar7 = best < 1 ? 0 : 1;
    return iVar7;
}

// ---------------------------------------------------------------------------
// CCollideCar::UpdateSection @0x16896c (1.7%) - which road section the car is
// in.  Frame = sp - 0x50 (push 9 + sub 0x2c); the bool arg at [sp+0x50].
// The section-tracking loops (the two cross-product side tests), the section
// triple moves, then the CheckShortcutSwitch tail with the player-car shortcut
// flag, the game-mode switch and the final section update.  Helpers via
// call_emulated_at (RoadStruct::GetSection 0x16e3e0, GetPrevSectionIndex
// 0x16dff4, GetNextSectionIndex 0x16df8c, CheckShortcutSwitch 0x16eca4, the
// car's vtable[0x3c]).  Validated by the per-call differential + the trace.
// ---------------------------------------------------------------------------
static int native_ccollidecar_update_section(uint32_t car, uint32_t road, uint32_t pos,
                                             uint32_t outp, uint32_t sp) {
    uint32_t fr = sp - 0x50;
    if (!mem_host(fr) || !mem_host(car)) return -1;
    int32_t flag = rd8(sp + 0);
    // the interpreter's prologue push {r4-r8,sb,sl,fp,lr} at fr+0x2c..fr+0x50
    // (the caller's entry values)
    uw32(fr + 0x2c, ureg(UC_ARM_REG_R4));
    uw32(fr + 0x30, ureg(UC_ARM_REG_R5));
    uw32(fr + 0x34, ureg(UC_ARM_REG_R6));
    uw32(fr + 0x38, ureg(UC_ARM_REG_R7));
    uw32(fr + 0x3c, ureg(UC_ARM_REG_R8));
    uw32(fr + 0x40, ureg(UC_ARM_REG_R9));
    uw32(fr + 0x44, ureg(UC_ARM_REG_R10));
    uw32(fr + 0x48, ureg(UC_ARM_REG_R11));
    uw32(fr + 0x4c, ureg(UC_ARM_REG_LR));
    // the interpreter's prologue stores
    uw32(fr + 4, outp);
    uw32(fr + 8, road);
    uw32(fr + 0, (uint32_t)rd8(sp + 0));
    uint32_t uVar8 = rd32(car + 0x1b0);
    uint32_t uVar2 = rd32(car + 0x1b8);
    uint32_t uVar3 = rd32(car + 0x1b4);
    uw32(fr + 0xc, uVar8);
    uw32(fr + 0x10, uVar2);
    uw32(fr + 0x14, uVar3);
    int32_t local_34 = (int32_t)rd32(pos);
    int32_t local_2c = (int32_t)rd32(pos + 8);
    uint32_t rp = rd32(car + 0x1ac);
    for (;;) {
        uint32_t cur, prev;
        for (;;) {
            rp = rd32(car + 0x1ac);
            cur = call_emulated_keep(BASE + 0x16e3e0, (uint32_t[]){ rp, rd32(car + 0x1b0) }, 2, fr);
            prev = call_emulated_keep(BASE + 0x16e3e0, (uint32_t[]){ rp, rd32(car + 0x1b4) }, 2, fr);
            local_34 = (int32_t)rd32(pos);
            local_2c = (int32_t)rd32(pos + 8);
            int32_t t = (local_34 - (int32_t)rd32(prev + 0x54)) * ((int32_t)rd32(prev + 0x14) - (int32_t)rd32(prev + 0x5c))
                      - (local_2c - (int32_t)rd32(prev + 0x5c)) * ((int32_t)rd32(prev + 0xc) - (int32_t)rd32(prev + 0x54));
            if (t >= 0) break;
            uint32_t a = rd32(car + 0x1b4);
            uint32_t b = rd32(car + 0x1b0);
            uint32_t c = call_emulated_keep(BASE + 0x16dff4, (uint32_t[]){ rp, rd32(car + 0x1b4), 1 }, 3, fr);
            uw32(car + 0x1b0, a);
            uw32(car + 0x1b8, b);
            uw32(car + 0x1b4, c);
        }
        int32_t t2 = (local_34 - (int32_t)rd32(cur + 0x54)) * ((int32_t)rd32(cur + 0x14) - (int32_t)rd32(cur + 0x5c))
                   - (local_2c - (int32_t)rd32(cur + 0x5c)) * ((int32_t)rd32(cur + 0xc) - (int32_t)rd32(cur + 0x54));
        if (t2 < 0) break;
        uint32_t nx2 = call_emulated_keep(BASE + 0x16df8c, (uint32_t[]){ rp, rd32(car + 0x1b8), 1 }, 3, fr);
        uint32_t old0 = rd32(car + 0x1b0);
        uint32_t nx1 = rd32(car + 0x1b8);
        uw32(car + 0x1b8, nx2);
        uw32(car + 0x1b0, nx1);
        uw32(car + 0x1b4, old0);
    }
    if (!flag) {
        uw32(outp, rd32(car + 0x1b0));
        uw32(car + 0x1b4, uVar3);
        uw32(car + 0x1b0, uVar8);
        uw32(car + 0x1b8, uVar2);
        return 1;
    }
    // ---- the flag path
    uint32_t iVar5 = rd32(car + 0x1b0);
    uw32(fr + 0x1c, rd32(pos));
    uw32(fr + 0x20, rd32(pos + 4));
    uw32(fr + 0x24, rd32(pos + 8));
    int32_t iVar4 = (int32_t)call_emulated_keep(BASE + 0x16eca4,
                       (uint32_t[]){ road, fr + 0x1c, iVar5 }, 3, fr);
    uint32_t game = rd32(BASE + 0x1fa798);
    uint32_t scene = game ? rd32(game + 0x1bc8) : 0;
    if (scene) {
        uint32_t pl = rd32(scene + 0x4b88);
        uint32_t idx = pl ? rd32(pl + 8) : 0;
        if (rd32(scene + idx * 4 + 0x4bb4) == car) {
            if (iVar4 >= 0) uw8(scene + 0x4b74 + (uint32_t)iVar4, 1);
            goto tail_default;
        }
        switch (rd32(scene + 0x4b70)) {
        case 0:
            iVar4 = (int32_t)iVar5;
            break;
        case 1:
            if (rd8(scene + 0x4b74 + (uint32_t)iVar4) == 0) iVar4 = (int32_t)iVar5;
            break;
        case 2:
            if (rd8(car + 5) == 0 &&
                (int32_t)rd32(car + 0x1688) < (int32_t)rd32(scene + 0x4b78))
                iVar4 = (int32_t)iVar5;
            break;
        case 3: {
            uint32_t vt = rd32(car);
            int32_t v = (int32_t)call_emulated_keep(rd32(vt + 0x3c), (uint32_t[]){ car }, 1, fr);
            int32_t bVar1;
            if (v == 0) bVar1 = 0;
            else if (rd8(game + 0x5f57) == 0) {
                v = (int32_t)call_emulated_keep(rd32(vt + 0x3c), (uint32_t[]){ car }, 1, fr);
                bVar1 = (int32_t)rd32((uint32_t)v + 0x58c) < (int32_t)rd32(game + 0x63f4);
            } else {
                v = (int32_t)call_emulated_keep(rd32(vt + 0x3c), (uint32_t[]){ car }, 1, fr);
                bVar1 = (int32_t)rd32((uint32_t)v + 0x58c) <= (int32_t)rd32(game + 0x63f4);
            }
            if (!(rd8(game + 0x5f64) != 0 && bVar1)) iVar4 = (int32_t)iVar5;
            break;
        }
        default:
            break;
        }
    }
tail_default:
    if (iVar4 != (int32_t)rd32(car + 0x1b0)) {
        uw32(outp, (uint32_t)iVar4);
        uint32_t nx = call_emulated_keep(BASE + 0x16df8c, (uint32_t[]){ rp, (uint32_t)iVar4, 1 }, 3, fr);
        uint32_t pv = call_emulated_keep(BASE + 0x16dff4, (uint32_t[]){ rp, (uint32_t)iVar4, 1 }, 3, fr);
        uw32(car + 0x1b0, (uint32_t)iVar4);
        uw32(car + 0x1b4, pv);
        uw32(car + 0x1b8, nx);
    }
    return 1;
}

// ---------------------------------------------------------------------------
// The CAlterHSV family - pure self-contained math (RGBAtoHSV 1.7% + Decode
// 0.6%).  Validated at boot with A5_HSV_TEST=1 (random inputs, native vs
// interpreter) and in game with the usual trace/A-B.
// ---------------------------------------------------------------------------

// CAlterHSV::RGBAtoHSV @0x11622c: TRgba {r,g,b,a} bytes -> THsv {h,s,v} floats.
static void native_hsv_rgbtohsv(uint32_t in, uint32_t out) {
    const uint8_t* ip = (const uint8_t*)mem_host(in);
    float* op = (float*)mem_host(out);
    if (!ip || !op) return;
    float r = (float)(int)ip[0] / 255.0f;
    float g = (float)(int)ip[1] / 255.0f;
    float b = (float)(int)ip[2] / 255.0f;
    // the ARM's min/max sequence exactly: min1 = (r <= g) ? r : g;
    // mn = (b < min1) ? b : min1; max1 = (g <= r) ? r : g; mx = (b <= max1) ? max1 : b
    float mn1 = (r <= g) ? r : g;
    float mn = (b < mn1) ? b : mn1;
    float mx1 = (g <= r) ? r : g;
    float mx = (b <= mx1) ? mx1 : b;
    op[2] = mx;
    if (mx == 0.0f) {
        op[0] = -1.0f;
        op[1] = 0.0f;
        return;
    }
    float range = mx - mn;
    op[1] = range / mx;
    if (mx == r) op[0] = (g - b) / range;
    else if (mx == g) op[0] = (b - r) / range + 2.0f;
    else op[0] = (r - g) / range + 4.0f;
    float h = op[0] * 60.0f;
    if (h < 0.0f) {
        op[0] = h + 360.0f;
    } else {
        op[0] = h;
    }
}

// CAlterHSV::Decode @0x11613c: 16-bit RGB555/565 -> packed bytes.
static uint32_t native_hsv_decode(uint32_t c, uint32_t flag) {
    uint32_t u = c & 0xffffu;
    if (flag) u &= 0xfffffffeu;
    uint8_t v4, v3, v5, v1;
    if ((u & 0x8000u) == 0) {
        v4 = (uint8_t)((u >> 4) & 0xf0);
        v3 = (uint8_t)((u & 0xfu) << 4);
        v5 = (uint8_t)((u >> 7) & 0xe0);
        v1 = (uint8_t)(u & 0xf0);
    } else {
        v1 = (uint8_t)((u >> 2) & 0xf8);
        v3 = (uint8_t)((u & 0x1fu) << 3);
        v4 = (uint8_t)((u >> 7) & 0xf8);
        v5 = 0xff;
    }
    return ((uint32_t)v5 << 24) | ((uint32_t)v3 << 16) | ((uint32_t)v1 << 8) | (uint32_t)v4;
}

// CAlterHSV::Encode @0x1160c8: TRgba -> 16-bit (RGB555 or RGB565 when flag3).
static uint32_t native_hsv_encode(uint32_t rgba, uint32_t flag2, uint32_t flag3) {
    uint8_t r = (uint8_t)rgba, g = (uint8_t)(rgba >> 8), b = (uint8_t)(rgba >> 16),
            a = (uint8_t)(rgba >> 24);
    uint32_t v;
    if (flag3) {
        // RGB565: (b>>3) | 0x8000 | (r>>3)<<10 | (g>>3)<<5
        v = (uint32_t)(b >> 3) | 0x8000u;
        v = v | ((uint32_t)(r >> 3) << 10) | ((uint32_t)(g >> 3) << 5);
    } else {
        // RGB555: (r>>4)<<8 | (a>>5)<<12 | (b>>4) | (g & 0xf0)
        v = ((uint32_t)(r >> 4) << 8) | ((uint32_t)(a >> 5) << 12) |
            (uint32_t)(b >> 4) | (uint32_t)(g & 0xf0);
    }
    if (flag2) v &= 0xfffeu;
    return v;
}

// CAlterHSV::HSVtoRGBA @0x117b78 (the exact ARM float sequence).
static void native_hsv_torgba(uint32_t hsv, uint32_t rgba_out) {
    const float* h = (const float*)mem_host(hsv);
    uint8_t* o = (uint8_t*)mem_host(rgba_out);
    if (!h || !o) return;
    float s = h[1];
    float v = h[2], r, g, b;
    if (s < 0.001f) {
        r = v; g = v; b = v;
    } else {
        float hh = h[0];
        int i = (int)floorf(hh * 0.016666668f);
        float f = hh * 0.016666668f - (float)i;
        float q = v * (1.0f - s * f);        // the decompiler's fVar5
        float p = v * (1.0f - s);            // the decompiler's fVar4
        float t = v * (1.0f - s * (1.0f - f));
        r = v; g = t; b = q;                 // hmm - defaults are case 0's? no: set per case
        switch (i & 7) {
        case 0: r = v; g = t; b = p; break;
        case 1: r = q; g = v; b = p; break;
        case 2: r = p; g = v; b = t; break;
        case 3: r = p; g = q; b = v; break;
        case 4: r = t; g = p; b = v; break;
        default: r = v; g = p; b = q; break;
        }
    }
    float rv = r * 255.0f, gv = g * 255.0f, bv = b * 255.0f;
    o[0] = (0.0f < rv) ? (uint8_t)(int8_t)(int)rv : 0;
    o[2] = (0.0f < bv) ? (uint8_t)(int8_t)(int)bv : 0;
    o[1] = (0.0f < gv) ? (uint8_t)(int8_t)(int)gv : 0;
}

// CAlterHSV::Alter2 @0x117da0: an HSV tweak + re-encode (0.56%).
static void native_hsv_alter2(uint32_t hsv, uint32_t alpha, uint32_t colorp, uint32_t flag,
                              uint32_t a, uint32_t b, uint32_t c, uint32_t d, uint32_t sp) {
    const float* h = (const float*)mem_host(hsv);
    if (!h) return;
    float fa, fb, fc, fd;
    memcpy(&fa, &a, 4); memcpy(&fb, &b, 4); memcpy(&fc, &c, 4); memcpy(&fd, &d, 4);
    float s = fb + h[1];
    if (s < 0.0f) s = 0.0f;
    else if (s > 1.0f) s = 1.0f;
    float v = (fc * 0.5f - 0.5f) * 0.8f + h[2];
    if (v < 0.0f) v = 0.0f;
    else if (v > 1.0f) v = 1.0f;
    float hh = fa + (h[0] - fd);
    uint32_t tmp = sp - 0x20;                 // the interpreter's own frame
    float* lh = (float*)mem_host(tmp);
    uint8_t* lr = (uint8_t*)mem_host(tmp + 0xc);   // the rgba local (local_14)
    if (!lh || !lr) return;
    lh[0] = hh; lh[1] = s; lh[2] = v;
    native_hsv_torgba(tmp, tmp + 0xc);
    lr[3] = (uint8_t)alpha;
    uint32_t packed; memcpy(&packed, lr, 4);
    uint16_t cur = ur16(colorp);
    uint32_t enc = native_hsv_encode(packed, flag, (uint32_t)(cur >> 15));
    uw16(colorp, (uint16_t)enc);
}

// ---------------------------------------------------------------------------
// CCarBase::UpdateSuspensions @0x16016c (1.35%) - the per-wheel suspension
// springs.  Frame = sp - 0x24 (push 7 + fstmdbx d8, no locals).  The three
// virtuals: vtable[0x3c] = CCar::GetBorderCrashThreshold @0x14c294 (emulated
// via call_emulated_at), vtable[0x4c]/[0x50] = `mov r0,#0` stubs for CCar (0)
// - other classes fall back to the interpreter.  Validated by the per-call
// differential (A5_SUSP_VERIFY=1) + the trace + A/B (A5_NO_SUSP).
// ---------------------------------------------------------------------------
static inline uint32_t fbits_(float f) { uint32_t v; memcpy(&v, &f, 4); return v; }

static int native_ccarbase_update_suspensions(uint32_t car, uint32_t sp) {
    uint32_t fr = sp - 0x24;
    if (!mem_host(fr) || !mem_host(car)) return -1;
    // the prologue: push {r4,r5,r6,r7,r8,sl,lr} + fstmdbx {d8}
    uw32(fr + 0x00, ureg(UC_ARM_REG_R4));
    uw32(fr + 0x04, ureg(UC_ARM_REG_R5));
    uw32(fr + 0x08, ureg(UC_ARM_REG_R6));
    uw32(fr + 0x0c, ureg(UC_ARM_REG_R7));
    uw32(fr + 0x10, ureg(UC_ARM_REG_R8));
    uw32(fr + 0x14, ureg(UC_ARM_REG_R10));
    uw32(fr + 0x18, ureg(UC_ARM_REG_LR));
    {
        uint32_t s16 = 0, s17 = 0;
        p_uc_reg_read(g_uc, UC_ARM_REG_S0 + 16, &s16);
        p_uc_reg_read(g_uc, UC_ARM_REG_S0 + 17, &s17);
        uw32(fr + 0x1c, s16);
        uw32(fr + 0x20, s17);
    }
    uint32_t vt = rd32(car);
    // vtable[0x3c] is a `bx lr` stub -> returns the car itself; the guard is
    // `car != 0 && (car[0x178c] & 0x4000000) == 0`
    if ((rd32(car + 0x178c) & 0x4000000u) != 0) return 1;
    // vtable[0x4c] = car[0x45c], vtable[0x50] = CCar::GetMaxSpeed @0x148314
    uint32_t f4c = rd32(vt + 0x4c), f50 = rd32(vt + 0x50);
    if (f4c != BASE + 0x1480cc || f50 != BASE + 0x148314) return -1;
    uint32_t p9 = car, p8 = car, p7 = car;
    do {
        uint32_t u5 = rd8(p9 + 0x524);
        uint32_t u6 = rd32(p7 + 0x130);
        if (u5 != u6) {
            if (u5 == 6 || u5 == 1 || u6 == 1 || u6 == 6) {
                int32_t d = (int32_t)rd32(p8 + 0x4e4) - (int32_t)rd32(p8 + 0x104);
                float f = (d > 4) ? (float)d : 5.0f;
                uw32(p7 + 0xd0, fbits_(uf32(p7 + 0xd0) + f));
            }
            uw32(p7 + 0x130, u5);
        }
        {
            uint8_t* dst = mem_host(p8 + 0x100);
            const uint8_t* src = mem_host(p8 + 0x4e0);
            if (dst && src) memcpy(dst, src, 12);
        }
        float d0 = uf32(p7 + 0xd0);
        float a0 = fabsf(d0);
        if (!(a0 < 5.0f)) {
            d0 = (d0 < 0.0f) ? -5.0f : 5.0f;
            uw32(p7 + 0xd0, fbits_(d0));
            a0 = fabsf(d0);
        }
        float e0 = uf32(p7 + 0xf0);
        if (fabsf(e0) < a0) {
            e0 = d0;
            uw32(p7 + 0xf0, fbits_(e0));
        }
        float e0n = (e0 * 90.0f + uf32(p7 + 0xe0) * 10.0f) / 100.0f;
        uw32(p7 + 0xe0, fbits_(e0n));
        // the speed factor: vmax = vtable[0x50]() (GetMaxSpeed); if < 1 ->
        // {mult=0x32, f12=50} else {mult = (int)((1-cur/vmax)*20+30); f12 = 100-mult}
        int32_t vmax = (int32_t)call_emulated_keep(BASE + 0x148314, (uint32_t[]){ car }, 1, fr);
        int32_t mult;
        float f12;
        if (vmax < 1) {
            mult = 0x32;
            f12 = 50.0f;
        } else {
            int32_t cur = (int32_t)rd32(car + 0x45c);
            float fa = (float)cur;
            float fb = (float)vmax;
            mult = (int32_t)((1.0f - fa / fb) * 20.0f + 30.0f);
            f12 = 100.0f - (float)mult;
        }
        int32_t iv2 = (int32_t)(e0n + e0n) * mult;
        float f13 = (float)iv2;
        float f12b = (f13 + f12 * uf32(p7 + 0xc0)) / 100.0f;
        uw32(p7 + 0xc0, fbits_(f12b));
        if (f12b < -100000.0f || f12b > 100000.0f) uw32(p7 + 0xc0, 0);
        float f11 = (float)(int32_t)(e0n + e0n);
        if (fabsf(f11 - f12b) < 2.0f) {
            f11 = (uf32(p7 + 0xf0) * -60.0f) / 100.0f;
            uw32(p7 + 0xf0, fbits_(f11));
            if (fabsf(f11) < 2.0f) uw32(p7 + 0xf0, 0);
        }
        uw32(p7 + 0xd0, fbits_((uf32(p7 + 0xd0) * 3.0f) / 10.0f));
        p9 += 1; p8 += 0xc; p7 += 4;
    } while (p9 != car + 4);
    if (uf32(car + 0xd0) != 0.0f && uf32(car + 0xdc) != 0.0f &&
        uf32(car + 0xd0) == uf32(car + 0xdc)) uw32(car + 0xd0, 0x40000000u);
    if (uf32(car + 0xd4) != 0.0f && uf32(car + 0xd8) != 0.0f &&
        uf32(car + 0xd4) == uf32(car + 0xd8)) uw32(car + 0xd4, 0x40000000u);
    return 1;
}

// ---------------------------------------------------------------------------
// CCarBase::ComputeCarRotation @0x160e50 (0.49%, once per car per frame - a
// good hook ratio).  Frame = sp - 0x28 (push 6 + sub 0x10); the locals are the
// three ints at fr+4/fr+8/fr+0xc.  vtable[0x3c] is the `bx lr` stub (identity,
// guard = car[0x178c] & 8), vtable[0x54] = ComputeGroundRotMtx @0x161b1c
// (call_emulated_at, once per call).  Helpers UpdateLandAnim/UpdateForcedBrake
// Anim via call_emulated_at.  Differential A5_ROT_VERIFY=1, A/B A5_NO_ROT.
// ---------------------------------------------------------------------------
static int native_ccarbase_compute_ground_rot_mtx(uint32_t car, uint32_t p2, uint32_t p3, uint32_t sp);
static int native_ccarbase_compute_car_rotation(uint32_t car, uint32_t p1, uint32_t p2, uint32_t p3,
                                                uint32_t p4, uint32_t p5, uint32_t p6, uint32_t sp) {
    uint32_t fr = sp - 0x28;
    if (!mem_host(fr) || !mem_host(car)) return -1;
    uw32(fr + 0x10, ureg(UC_ARM_REG_R4));
    uw32(fr + 0x14, ureg(UC_ARM_REG_R5));
    uw32(fr + 0x18, ureg(UC_ARM_REG_R6));
    uw32(fr + 0x1c, ureg(UC_ARM_REG_R7));
    uw32(fr + 0x20, ureg(UC_ARM_REG_R8));
    uw32(fr + 0x24, ureg(UC_ARM_REG_LR));
    uw32(fr + 4, 0);
    uw32(fr + 8, 0);
    uw32(fr + 0xc, 0);
    int32_t l1c = 0, l20 = 0, l24 = 0;
    if ((rd32(car + 0x178c) & 8) != 0) {
        int32_t a = (int32_t)rd32(car + 0x38);
        int32_t b = (int32_t)rd32(car + 0x3c);
        int32_t c = (int32_t)rd32(car + 0x40);
        uw32(p1, (uint32_t)a); uw32(p2, (uint32_t)b); uw32(p3, (uint32_t)c);
        uw32(p4, (uint32_t)a); uw32(p5, (uint32_t)b); uw32(p6, (uint32_t)c);
        goto lab_efc;
    }
    if (rd32(rd32(car) + 0x54) != BASE + 0x161b1c) return -1;
    if (native_ccarbase_compute_ground_rot_mtx(car, fr + 4, fr + 8, sp) < 0) return -1;
    l1c = (int32_t)rd32(fr + 4);
    l20 = (int32_t)rd32(fr + 8);
    l24 = (int32_t)rd32(fr + 0xc);
    float f11 = (float)l1c;
    if (!(f11 * 6.2831855f * -0.00048828125f < 0.9f)) {
        l1c = (int32_t)uf32(car + 8);
    } else {
        uw32(car + 8, fbits_(f11));
    }
    if ((int32_t)rd32(car + 0x398) == -1) {
        if ((int32_t)rd32(car + 0x39c) != -1) {
            call_emulated_keep(BASE + 0x1609a8, (uint32_t[]){ car, (uint32_t)l1c, (uint32_t)l20 }, 3, fr);
            goto lab_fd0;
        }
        float fa = uf32(car + 0xa8);
        if (fa == -1.0f) {
            fa = (float)l1c;
            uw32(car + 0xa8, fbits_(fa));
        }
        float fb = uf32(car + 0xac);
        int32_t i4 = 0;
        if (fb == -1.0f) i4 = l20;
        float fc = uf32(car + 0xb0);
        if (fb == -1.0f) {
            fb = (float)i4;
            uw32(car + 0xac, fbits_(fb));
            l20 = i4;
        }
        if (fc == -1.0f) {
            fc = (float)l24;
            uw32(car + 0xb0, fbits_(fc));
        }
        int active = 0;
        for (int i = 0; i < 4; i++)
            if (uf32(car + 0xd0 + (uint32_t)i * 4) != 0.0f) { active = 1; break; }
        float f13 = (float)l1c, f18 = (float)l20, f15 = (float)l24;
        float n11, n8, n7;
        if ((int32_t)rd32(car + 0x380) != 0 || active) {
            n11 = (f13 * 6.0f + fa * 4.0f) / 10.0f;
            n8 = (f15 * 6.0f + fc * 4.0f) / 10.0f;
            n7 = (f18 * 6.0f + fb * 4.0f) / 10.0f;
        } else {
            n11 = (f13 + fa * 19.0f) / 20.0f;
            n8 = (f15 + fc * 19.0f) / 20.0f;
            n7 = (f18 + fb * 19.0f) / 20.0f;
        }
        uw32(p1, (uint32_t)(int32_t)n11);
        uw32(p2, (uint32_t)(int32_t)n7);
        uw32(p3, (uint32_t)(int32_t)n8);
    } else {
        call_emulated_keep(BASE + 0x160b98, (uint32_t[]){ car, (uint32_t)l1c, (uint32_t)l20 }, 3, fr);
    lab_fd0:
        uw32(p1, fbits_((float)(int32_t)uf32(car + 0xc)));
        uw32(p2, (uint32_t)l20);
        uw32(p3, (uint32_t)l24);
    }
    uw32(p4, (uint32_t)l1c);
    uw32(p5, (uint32_t)l20);
    uw32(p6, (uint32_t)l24);
lab_efc:
    uw32(car + 0xa8, fbits_((float)(int32_t)rd32(p1)));
    uw32(car + 0xbc, fbits_((float)l24));
    uw32(car + 0xac, fbits_((float)(int32_t)rd32(p2)));
    uw32(car + 0xb0, fbits_((float)(int32_t)rd32(p3)));
    uw32(car + 0xb4, fbits_((float)l1c));
    uw32(car + 0xb8, fbits_((float)l20));
    return 1;
}

// CCarBase::ComputeGroundRotMtx @0x161b1c (vtable[0x54], once per car per
// frame).  Frame = sp - 0x2c (push 9 + fstmdbx d8).  GetXOrient is inlined
// (dx/dz/dy -> ISqrt(dz*dz+dx*dx) -> Atan2i(len, dy)); Atan2i @0x16d8f4 stays
// emulated (1-2 calls/call).  The vtable[0x3c] stub check = car[0x178c]&0x4000000.
static int native_ccarbase_compute_ground_rot_mtx(uint32_t car, uint32_t p2, uint32_t p3,
                                                  uint32_t sp) {
    uint32_t fr = sp - 0x2c;
    if (!mem_host(fr) || !mem_host(car)) return -1;
    // the two vectors: {car[0x4e0], (int)((float)car[0x4e4] + (float)car[0xc0]), car[0x4e8]}
    // and {car[0x4f8], (int)((float)car[0x4fc] + (float)car[0xc8]), car[0x500]}
    int32_t v1x = (int32_t)rd32(car + 0x4e0);
    int32_t v1y = (int32_t)((float)(int32_t)rd32(car + 0x4e4) + (float)(int32_t)rd32(car + 0xc0));
    int32_t v1z = (int32_t)rd32(car + 0x4e8);
    int32_t v2x = (int32_t)rd32(car + 0x4f8);
    int32_t v2y = (int32_t)((float)(int32_t)rd32(car + 0x4fc) + (float)(int32_t)rd32(car + 0xc8));
    int32_t v2z = (int32_t)rd32(car + 0x500);
    // GetXOrient(v1, v2): dx = v2x-v1x; dz = v2z-v1z; dy = v2y-v1y;
    // len = ISqrt(dz*dz + dx*dx); return Atan2i(len, dy)
    int32_t dx = v2x - v1x;
    int32_t dz = v2z - v1z;
    int32_t dy = v2y - v1y;
    uint32_t len = native_isqrt((uint32_t)((uint32_t)(dz * dz) + (uint32_t)(dx * dx)));
    int32_t iVar1 = (int32_t)call_emulated_keep(BASE + 0x16d8f4, (uint32_t[]){ len, (uint32_t)dy }, 2, fr);
    // the second angle: iVar2 = Atan2i(ISqrt(dz2*dz2 + dx2*dx2), ...)
    int32_t iVar5 = (int32_t)rd32(car + 0x4f8);
    int32_t iVar6 = (int32_t)rd32(car + 0x500);
    int32_t iVar3 = (int32_t)rd32(car + 0x504) - iVar5;
    int32_t iVar4 = (int32_t)rd32(car + 0x50c) - iVar6;
    int32_t iVar2 = (int32_t)rd32(car + 0x508);
    float f8b = (float)iVar2;
    float f9 = (float)(int32_t)rd32(car + 0x4fc);
    float f7 = (float)(int32_t)rd32(car + 0xc8);
    float f10 = (float)(int32_t)rd32(car + 0xcc);
    uint32_t len2 = native_isqrt((uint32_t)((uint32_t)(iVar4 * iVar4) + (uint32_t)(iVar3 * iVar3)));
    int32_t arg2 = (int32_t)(f8b + f10) - (int32_t)(f9 + f7);
    iVar2 = (int32_t)call_emulated_keep(BASE + 0x16d8f4, (uint32_t[]){ len2, (uint32_t)arg2 }, 2, fr);
    while (iVar1 > 0x800) iVar1 -= 0x800;
    while (iVar2 > 0x800) iVar2 -= 0x800;
    while (iVar1 < -0x800) iVar1 += 0x800;
    while (iVar2 < -0x800) iVar2 += 0x800;
    if (iVar1 > 0x400) iVar1 -= 0x800;
    if (iVar2 > 0x400) iVar2 -= 0x800;
    uw32(p2, (uint32_t)iVar1);
    uw32(p3, (uint32_t)iVar2);
    if ((rd32(car + 0x178c) & 0x4000000u) != 0) uw32(p3, 0);
    return 1;
}

// ---------------------------------------------------------------------------
// gxRenderGroup::UpdateSphericalTexCoord(CMatrix*, gxRenderItem*) @0x118c94 -
// the per-render-item env-map pass (a callee of RenderGroups).  Frame = sp-0x50.
// Per vertex: the normal = {x, -2000.0, z} (the y is a CONSTANT -2000, the
// length seed is 2000^2 = 4000000), normalised via the engine InvSqrt; the
// light = this[0x7614] * (vertex+0xc); the reflection is computed but only the
// constants 1.0/0.0 are written to vertex[9]/[10].  InverseXPose (0x13fba4)
// stays emulated (once per call).  Differential A5_RGTEX_VERIFY=1.
// ---------------------------------------------------------------------------
static int native_gxrg_update_spherical_texcoord2(uint32_t thisp, uint32_t m, uint32_t item,
                                                  uint32_t sp) {
    uint32_t fr = sp - 0x50;
    if (!mem_host(fr) || !mem_host(thisp) || !mem_host(item)) return -1;
    uint32_t base = rd32(thisp + 0xbc);
    uint32_t idxbase = rd32(thisp + 0xc0);
    uint32_t flags = rd32(thisp + 0xdc);
    uint32_t stride = rd32(thisp + 0xb8);
    uint32_t mesh = rd32(item + 0xc);
    if (!base || !idxbase || !flags) return 1;
    if ((int32_t)rd8(mesh + 0x24) <= 1) return 1;
    // the matrix at this+0x7614 = *m; the inverse to this+0x7658; the translation cleared
    {
        uint8_t* d = mem_host(thisp + 0x7614);
        const uint8_t* s = mem_host(m);
        if (!d || !s) return -1;
        memcpy(d, s, 64);
    }
    uint32_t inv = (uint32_t)call_emulated_keep(BASE + 0x13fba4, (uint32_t[]){ thisp + 0x7614 }, 1, fr);
    if (inv) {
        uint8_t* d = mem_host(thisp + 0x7658);
        const uint8_t* s = mem_host(inv);
        if (d && s) memcpy(d, s, 64);
    }
    native_cmat_set_translation(thisp + 0x7614, 0, 0, 0);
    const float* mh = (const float*)mem_host(m);
    const float* m2 = (const float*)mem_host(thisp + 0x7614);
    if (!mh || !m2) return -1;
    int32_t groups = (int32_t)rd32(mesh + 0x44);
    uint32_t idxarr = rd32(mesh + 0x48);
    int32_t ioff = (int32_t)rd32(item + 0x18);
    for (int32_t g = 0; g < groups; g++) {
        int32_t start = (int32_t)rd32(idxarr + (uint32_t)g * 4);
        int32_t end = (int32_t)rd32(idxarr + (uint32_t)g * 4 + 4) - 1;
        int32_t nv = end - start;
        if (nv + 1 <= 0) continue;
        const uint16_t* ip = (const uint16_t*)mem_host(idxbase + (uint32_t)(start + ioff) * 2);
        if (!ip) continue;
        for (int32_t v = 0; v <= nv; v++) {
            uint32_t vi = *ip++;
            uint8_t* fl = mem_host(flags + vi);
            if (!fl || fl[0] == 1) continue;
            fl[0] = 1;
            float* vert = (float*)mem_host(base + stride * vi);
            if (!vert) continue;
            float n0 = ((mh[1] * vert[1] + mh[0] * vert[0]) + mh[2] * vert[2]) + mh[3];
            float n2 = ((mh[9] * vert[1] + mh[8] * vert[0]) + mh[10] * vert[2]) + mh[11];
            float n1 = -2000.0f;
            float len2 = ((4000000.0f + n0 * n0) + n2 * n2);
            float inv2 = a5_inv_sqrt_host(len2);
            float nx = n0 * inv2;
            float ny = n1 * inv2;
            float nz = n2 * inv2;
            const float* lv = vert + 3;
            float l0 = ((m2[1] * lv[1] + m2[0] * lv[0]) + m2[2] * lv[2]) + m2[3];
            float l1 = ((m2[5] * lv[1] + m2[4] * lv[0]) + m2[6] * lv[2]) + m2[7];
            float l2 = ((m2[9] * lv[1] + m2[8] * lv[0]) + m2[10] * lv[2]) + m2[11];
            float dot2 = (((ny * l1) + (nx * l0)) + (nz * l2)) * 2.0f;
            float rx = nx - l0 * dot2;
            float ry = ny - l1 * dot2;
            float rz = nz - l2 * dot2;
            (void)rx; (void)ry; (void)rz;    // computed but not written (as the ARM)
            vert[9] = 1.0f;
            vert[10] = 0.0f;
        }
    }
    return 1;
}
