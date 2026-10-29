#include "functions.h"

/* _ZN9gxAniMesh22computeMeshMtx_SkinnedEifP11gxAnimation @ 00139e84 (arm) */
void fn_00139e84(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00139e84:;
    {
        cpu->r[13] -= 36u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[9]);
        wr32(cpu->r[13] + 24u, cpu->r[10]);
        wr32(cpu->r[13] + 28u, cpu->r[11]);
        wr32(cpu->r[13] + 32u, cpu->r[14]);
    }
L_00139e88:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00139e8c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_00139e90:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00139e94:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 5u, &shc); cpu->r[12] = v;
    }
L_00139e98:;
    {
        uint32_t v = cpu->r[1] & 0x0000001fu; cpu->r[0] = v;
    }
L_00139e9c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_00139ea0:;
    {
        cpu->r[11] = cpu->r[2];
    }
L_00139ea4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x44u);
    }
L_00139ea8:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_00139eac:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_00139eb0:;
    {
        cpu->r[9] = cpu->r[3];
    }
L_00139eb4:;
    {
        uint32_t v = shifter(cpu->r[12], 2, (cpu->r[0] & 0xffu), &shc); cpu->r[12] = v;
    }
L_00139eb8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_00139ebc:;
    {
        cpu->r[3] = rd32(cpu->r[1] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_00139ec0:;
    {
        { uint32_t v = cpu->r[12] & cpu->r[3]; set_nz(cpu, v); }
    }
L_00139ec4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013a024;
        }
    }
L_00139ec8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00139ecc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00139edc;
        }
    }
L_00139ed0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_00139ed4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_00139ed8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00139f10;
        }
    }
L_00139edc:;
    {
        cpu->r[1] = rd32(0x00139ee4u + + 0x1b8u);
    }
L_00139ee0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00139ee4:;
    {
        cpu->r[12] = rd32(0x00139eecu + + 0x1b4u);
    }
L_00139ee8:;
    {
        cpu->r[14] = 0x000001ffu;
    }
L_00139eec:;
    {
        cpu->r[2] = rd32(0x00139ef4u + + 0x1b0u);
    }
L_00139ef0:;
    {
        cpu->r[1] = add_flags(cpu, 0x00139ef8u, cpu->r[1], 0, 0);
    }
L_00139ef4:;
    {
        cpu->r[3] = rd32(0x00139efcu + + 0x1acu);
    }
L_00139ef8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00139f00u, cpu->r[12], 0, 0);
    }
L_00139efc:;
    {
        cpu->r[2] = add_flags(cpu, 0x00139f04u, cpu->r[2], 0, 0);
    }
L_00139f00:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000078u, 0, 0);
    }
L_00139f04:;
    {
        cpu->r[3] = add_flags(cpu, 0x00139f0cu, cpu->r[3], 0, 0);
    }
L_00139f08:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00139f0c:;
    {
        cpu->r[14] = 0x00139f10u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00139f10:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_00139f14:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 8u, &shc); cpu->r[8] = v;
    }
L_00139f18:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x40u);
    }
L_00139f1c:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], shifter(cpu->r[5], 2, 2u, &shc), 1, 0);
    }
L_00139f20:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x158u);
    }
L_00139f24:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], cpu->r[8], 0, 0);
    }
L_00139f28:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[6], 0x000000b8u, 0, 0);
    }
L_00139f2c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_00139f30:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00139f34:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013a02c;
        }
    }
L_00139f38:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_00139f3c:;
    {
        cpu->r[5] = (uint32_t)(int32_t)s16(cpu->r[6] + + 0x4u);
    }
L_00139f40:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_00139f44:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00139f48:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_00139f4c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
    }
L_00139f50:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
        }
    }
L_00139f54:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[4] + + 0x10u);
        }
    }
L_00139f58:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_00139f5c:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_00139f60:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_00139f64:;
    {
        cpu->r[14] = 0x00139f68u; guest_call(cpu, cpu->r[12]);
    }
L_00139f68:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x34u);
    }
L_00139f6c:;
    {
        cpu->r[1] = 0x0000008cu;
    }
L_00139f70:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_00139f74:;
    {
        uint32_t v = cpu->r[1] * cpu->r[5] + cpu->r[2]; cpu->r[1] = v;
    }
L_00139f78:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00139f7c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000048u, 0, 0);
    }
L_00139f80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013a090;
        }
    }
L_00139f84:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_00139f88:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x40u);
    }
L_00139f8c:;
    {
        cpu->r[14] = 0x00139f90u; fn_00152ef8(cpu);
    }
L_00139f90:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_00139f94:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00139f98:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013a074;
        }
    }
L_00139f9c:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_00139fa0:;
    {
        cpu->r[5] = 0x00000001u;
    }
L_00139fa4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_00139fa8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], shifter(cpu->r[5], 2, 1u, &shc), 0, 0);
    }
L_00139fac:;
    {
        cpu->r[10] = rd32(cpu->r[7] + + 0x44u);
    }
L_00139fb0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00139fb4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00139fb8:;
    {
        cpu->r[8] = (uint32_t)(int32_t)s16(cpu->r[2] + + 0x4u);
    }
L_00139fbc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 1, 1u, &shc), 0, 0);
    }
L_00139fc0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_00139fc4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[3], 1, 1u, &shc));
        }
    }
L_00139fc8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00139fcc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
        }
    }
L_00139fd0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[4] + + 0x10u);
        }
    }
L_00139fd4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_00139fd8:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_00139fdc:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_00139fe0:;
    {
        cpu->r[14] = 0x00139fe4u; guest_call(cpu, cpu->r[12]);
    }
L_00139fe4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x34u);
    }
L_00139fe8:;
    {
        cpu->r[3] = 0x0000008cu;
    }
L_00139fec:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_00139ff0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_00139ff4:;
    {
        uint32_t v = cpu->r[3] * cpu->r[8] + cpu->r[1]; cpu->r[1] = v;
    }
L_00139ff8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000048u, 0, 0);
    }
L_00139ffc:;
    {
        cpu->r[14] = 0x0013a000u; fn_001530b0(cpu);
    }
L_0013a000:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0013a004:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0013a008:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00139fa4;
        }
    }
L_0013a00c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x44u);
    }
L_0013a010:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_0013a014:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_0013a018:;
    {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_0013a01c:;
    {
        uint32_t v = cpu->r[2] | cpu->r[1]; cpu->r[2] = v;
    }
L_0013a020:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[12], 2, 2u, &shc), cpu->r[2]);
    }
L_0013a024:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_0013a028:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        uint32_t v6 = rd32(cpu->r[13] + 24u);
        uint32_t v7 = rd32(cpu->r[13] + 28u);
        uint32_t v8 = rd32(cpu->r[13] + 32u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        cpu->r[9] = v5;
        cpu->r[10] = v6;
        cpu->r[11] = v7;
        uint32_t t = v8;
        cpu->r[13] += 36u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013a02cu)) return;
    }
L_0013a02c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_0013a030:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0013a034:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_0013a038:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0013a03c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_0013a040:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0013a044:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
        }
    }
L_0013a048:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[4] + + 0x10u);
        }
    }
L_0013a04c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_0013a050:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_0013a054:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_0013a058:;
    {
        cpu->r[14] = 0x0013a05cu; guest_call(cpu, cpu->r[12]);
    }
L_0013a05c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x34u);
    }
L_0013a060:;
    {
        cpu->r[1] = 0x0000008cu;
    }
L_0013a064:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_0013a068:;
    {
        uint32_t v = cpu->r[1] * cpu->r[5] + cpu->r[3]; cpu->r[1] = v;
    }
L_0013a06c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000048u, 0, 0);
    }
L_0013a070:;
    {
        cpu->r[14] = 0x0013a074u; fn_00153624(cpu);
    }
L_0013a074:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x44u);
    }
L_0013a078:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_0013a07c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_0013a080:;
    {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_0013a084:;
    {
        uint32_t v = cpu->r[2] | cpu->r[1]; cpu->r[2] = v;
    }
L_0013a088:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[12], 2, 2u, &shc), cpu->r[2]);
    }
L_0013a08c:;
    {
        goto L_0013a024;
    }
L_0013a090:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_0013a094:;
    {
        cpu->r[14] = 0x0013a098u; fn_00153624(cpu);
    }
L_0013a098:;
    {
        goto L_00139f90;
    }
}

/* _ZN9gxAniMeshD1Ev @ 0013a0ac (arm) */
void fn_0013a0ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013a0ac:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x20u);
    }
L_0013a0b0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0013a0b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013a0b8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0013a0bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013a104;
        }
    }
L_0013a0c0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + - 0x4u);
    }
L_0013a0c4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_0013a0c8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 4u, &shc), 0, 0);
    }
L_0013a0cc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_0013a0d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013a0dc;
        }
    }
L_0013a0d4:;
    {
        goto L_0013a0f4;
    }
L_0013a0d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013a0dc:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000030u, 1, 0);
    }
L_0013a0e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013a0e4:;
    {
        cpu->r[14] = 0x0013a0e8u; fn_00138fb0(cpu);
    }
L_0013a0e8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x20u);
    }
L_0013a0ec:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_0013a0f0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013a0d8;
        }
    }
L_0013a0f4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 0);
    }
L_0013a0f8:;
    {
        cpu->r[14] = 0x0013a0fcu; fn_0018ba60(cpu);
    }
L_0013a0fc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013a100:;
    {
        wr32(cpu->r[5] + + 0x20u, cpu->r[3]);
    }
L_0013a104:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x34u);
    }
L_0013a108:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013a10c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013a180;
        }
    }
L_0013a110:;
    {
        cpu->r[3] = rd32(cpu->r[0] + - 0x4u);
    }
L_0013a114:;
    {
        cpu->r[4] = 0x0000008cu;
    }
L_0013a118:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0013a11c:;
    {
        uint32_t v = cpu->r[4] * cpu->r[3] + cpu->r[0]; cpu->r[4] = v;
    }
L_0013a120:;
    {
        goto L_0013a168;
    }
L_0013a124:;
    {
        cpu->r[6] = rd32(cpu->r[4] + - 0x4u);
    }
L_0013a128:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0013a12c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0013a130:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013a144;
        }
    }
L_0013a134:;
    {
        cpu->r[14] = 0x0013a138u; fn_000b2bc8(cpu);
    }
L_0013a138:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0013a13c:;
    {
        cpu->r[14] = 0x0013a140u; fn_0018ba20(cpu);
    }
L_0013a140:;
    {
        wr32(cpu->r[4] + - 0x4u, cpu->r[7]);
    }
L_0013a144:;
    {
        cpu->r[6] = rd32(cpu->r[4] + - 0x48u);
    }
L_0013a148:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0013a14c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013a160;
        }
    }
L_0013a150:;
    {
        cpu->r[14] = 0x0013a154u; fn_000b2bc8(cpu);
    }
L_0013a154:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0013a158:;
    {
        cpu->r[14] = 0x0013a15cu; fn_0018ba20(cpu);
    }
L_0013a15c:;
    {
        wr32(cpu->r[4] + - 0x48u, cpu->r[7]);
    }
L_0013a160:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x34u);
    }
L_0013a164:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x0000008cu, 1, 0);
    }
L_0013a168:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_0013a16c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013a124;
        }
    }
L_0013a170:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 0);
    }
L_0013a174:;
    {
        cpu->r[14] = 0x0013a178u; fn_0018ba60(cpu);
    }
L_0013a178:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013a17c:;
    {
        wr32(cpu->r[5] + + 0x34u, cpu->r[3]);
    }
L_0013a180:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x40u);
    }
L_0013a184:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013a188:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013a1e4;
        }
    }
L_0013a18c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + - 0x4u);
    }
L_0013a190:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0013a194:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 8u, &shc); cpu->r[4] = v;
    }
L_0013a198:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 1, 0);
    }
L_0013a19c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_0013a1a0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_0013a1a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013a1d4;
        }
    }
L_0013a1a8:;
    {
        cpu->r[6] = rd32(cpu->r[4] + - 0x4u);
    }
L_0013a1ac:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0013a1b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013a1c8;
        }
    }
L_0013a1b4:;
    {
        cpu->r[14] = 0x0013a1b8u; fn_000b2bc8(cpu);
    }
L_0013a1b8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0013a1bc:;
    {
        cpu->r[14] = 0x0013a1c0u; fn_0018ba20(cpu);
    }
L_0013a1c0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x40u);
    }
L_0013a1c4:;
    {
        wr32(cpu->r[4] + - 0x4u, cpu->r[7]);
    }
L_0013a1c8:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x000000fcu, 1, 0);
    }
L_0013a1cc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_0013a1d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013a1a8;
        }
    }
L_0013a1d4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 0);
    }
L_0013a1d8:;
    {
        cpu->r[14] = 0x0013a1dcu; fn_0018ba60(cpu);
    }
L_0013a1dc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013a1e0:;
    {
        wr32(cpu->r[5] + + 0x40u, cpu->r[3]);
    }
L_0013a1e4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x38u);
    }
L_0013a1e8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013a1ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013a1fc;
        }
    }
L_0013a1f0:;
    {
        cpu->r[14] = 0x0013a1f4u; fn_0018ba60(cpu);
    }
L_0013a1f4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013a1f8:;
    {
        wr32(cpu->r[5] + + 0x38u, cpu->r[3]);
    }
L_0013a1fc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x44u);
    }
L_0013a200:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013a204:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013a214;
        }
    }
L_0013a208:;
    {
        cpu->r[14] = 0x0013a20cu; fn_0018ba60(cpu);
    }
L_0013a20c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013a210:;
    {
        wr32(cpu->r[5] + + 0x44u, cpu->r[3]);
    }
L_0013a214:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x50u);
    }
L_0013a218:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013a21c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013a22c;
        }
    }
L_0013a220:;
    {
        cpu->r[14] = 0x0013a224u; fn_0018ba60(cpu);
    }
L_0013a224:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013a228:;
    {
        wr32(cpu->r[5] + + 0x50u, cpu->r[3]);
    }
L_0013a22c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x4cu);
    }
L_0013a230:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013a234:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013a244;
        }
    }
L_0013a238:;
    {
        cpu->r[14] = 0x0013a23cu; fn_0018ba60(cpu);
    }
L_0013a23c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013a240:;
    {
        wr32(cpu->r[5] + + 0x4cu, cpu->r[3]);
    }
L_0013a244:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x58u);
    }
L_0013a248:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013a24c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013a25c;
        }
    }
L_0013a250:;
    {
        cpu->r[14] = 0x0013a254u; fn_0018ba60(cpu);
    }
L_0013a254:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013a258:;
    {
        wr32(cpu->r[5] + + 0x58u, cpu->r[3]);
    }
L_0013a25c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013a260:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        uint32_t t = v5;
        cpu->r[13] += 24u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013a264u)) return;
    }
}

/* _ZN9gxAniMeshD2Ev @ 0013a264 (arm) */
void fn_0013a264(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013a264:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x20u);
    }
L_0013a268:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0013a26c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013a270:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0013a274:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013a2bc;
        }
    }
L_0013a278:;
    {
        cpu->r[0] = rd32(cpu->r[3] + - 0x4u);
    }
L_0013a27c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_0013a280:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 4u, &shc), 0, 0);
    }
L_0013a284:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_0013a288:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013a294;
        }
    }
L_0013a28c:;
    {
        goto L_0013a2ac;
    }
L_0013a290:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013a294:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000030u, 1, 0);
    }
L_0013a298:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013a29c:;
    {
        cpu->r[14] = 0x0013a2a0u; fn_00138fb0(cpu);
    }
L_0013a2a0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x20u);
    }
L_0013a2a4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_0013a2a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013a290;
        }
    }
L_0013a2ac:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 0);
    }
L_0013a2b0:;
    {
        cpu->r[14] = 0x0013a2b4u; fn_0018ba60(cpu);
    }
L_0013a2b4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013a2b8:;
    {
        wr32(cpu->r[5] + + 0x20u, cpu->r[3]);
    }
L_0013a2bc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x34u);
    }
L_0013a2c0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013a2c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013a338;
        }
    }
L_0013a2c8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + - 0x4u);
    }
L_0013a2cc:;
    {
        cpu->r[4] = 0x0000008cu;
    }
L_0013a2d0:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0013a2d4:;
    {
        uint32_t v = cpu->r[4] * cpu->r[3] + cpu->r[0]; cpu->r[4] = v;
    }
L_0013a2d8:;
    {
        goto L_0013a320;
    }
L_0013a2dc:;
    {
        cpu->r[6] = rd32(cpu->r[4] + - 0x4u);
    }
L_0013a2e0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0013a2e4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0013a2e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013a2fc;
        }
    }
L_0013a2ec:;
    {
        cpu->r[14] = 0x0013a2f0u; fn_000b2bc8(cpu);
    }
L_0013a2f0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0013a2f4:;
    {
        cpu->r[14] = 0x0013a2f8u; fn_0018ba20(cpu);
    }
L_0013a2f8:;
    {
        wr32(cpu->r[4] + - 0x4u, cpu->r[7]);
    }
L_0013a2fc:;
    {
        cpu->r[6] = rd32(cpu->r[4] + - 0x48u);
    }
L_0013a300:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0013a304:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013a318;
        }
    }
L_0013a308:;
    {
        cpu->r[14] = 0x0013a30cu; fn_000b2bc8(cpu);
    }
L_0013a30c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0013a310:;
    {
        cpu->r[14] = 0x0013a314u; fn_0018ba20(cpu);
    }
L_0013a314:;
    {
        wr32(cpu->r[4] + - 0x48u, cpu->r[7]);
    }
L_0013a318:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x34u);
    }
L_0013a31c:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x0000008cu, 1, 0);
    }
L_0013a320:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_0013a324:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013a2dc;
        }
    }
L_0013a328:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 0);
    }
L_0013a32c:;
    {
        cpu->r[14] = 0x0013a330u; fn_0018ba60(cpu);
    }
L_0013a330:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013a334:;
    {
        wr32(cpu->r[5] + + 0x34u, cpu->r[3]);
    }
L_0013a338:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x40u);
    }
L_0013a33c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013a340:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013a39c;
        }
    }
L_0013a344:;
    {
        cpu->r[2] = rd32(cpu->r[3] + - 0x4u);
    }
L_0013a348:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0013a34c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 8u, &shc); cpu->r[4] = v;
    }
L_0013a350:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 1, 0);
    }
L_0013a354:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_0013a358:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_0013a35c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013a38c;
        }
    }
L_0013a360:;
    {
        cpu->r[6] = rd32(cpu->r[4] + - 0x4u);
    }
L_0013a364:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0013a368:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013a380;
        }
    }
L_0013a36c:;
    {
        cpu->r[14] = 0x0013a370u; fn_000b2bc8(cpu);
    }
L_0013a370:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0013a374:;
    {
        cpu->r[14] = 0x0013a378u; fn_0018ba20(cpu);
    }
L_0013a378:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x40u);
    }
L_0013a37c:;
    {
        wr32(cpu->r[4] + - 0x4u, cpu->r[7]);
    }
L_0013a380:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x000000fcu, 1, 0);
    }
L_0013a384:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_0013a388:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013a360;
        }
    }
L_0013a38c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 0);
    }
L_0013a390:;
    {
        cpu->r[14] = 0x0013a394u; fn_0018ba60(cpu);
    }
L_0013a394:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013a398:;
    {
        wr32(cpu->r[5] + + 0x40u, cpu->r[3]);
    }
L_0013a39c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x38u);
    }
L_0013a3a0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013a3a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013a3b4;
        }
    }
L_0013a3a8:;
    {
        cpu->r[14] = 0x0013a3acu; fn_0018ba60(cpu);
    }
L_0013a3ac:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013a3b0:;
    {
        wr32(cpu->r[5] + + 0x38u, cpu->r[3]);
    }
L_0013a3b4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x44u);
    }
L_0013a3b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013a3bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013a3cc;
        }
    }
L_0013a3c0:;
    {
        cpu->r[14] = 0x0013a3c4u; fn_0018ba60(cpu);
    }
L_0013a3c4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013a3c8:;
    {
        wr32(cpu->r[5] + + 0x44u, cpu->r[3]);
    }
L_0013a3cc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x50u);
    }
L_0013a3d0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013a3d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013a3e4;
        }
    }
L_0013a3d8:;
    {
        cpu->r[14] = 0x0013a3dcu; fn_0018ba60(cpu);
    }
L_0013a3dc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013a3e0:;
    {
        wr32(cpu->r[5] + + 0x50u, cpu->r[3]);
    }
L_0013a3e4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x4cu);
    }
L_0013a3e8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013a3ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013a3fc;
        }
    }
L_0013a3f0:;
    {
        cpu->r[14] = 0x0013a3f4u; fn_0018ba60(cpu);
    }
L_0013a3f4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013a3f8:;
    {
        wr32(cpu->r[5] + + 0x4cu, cpu->r[3]);
    }
L_0013a3fc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x58u);
    }
L_0013a400:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013a404:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013a414;
        }
    }
L_0013a408:;
    {
        cpu->r[14] = 0x0013a40cu; fn_0018ba60(cpu);
    }
L_0013a40c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013a410:;
    {
        wr32(cpu->r[5] + + 0x58u, cpu->r[3]);
    }
L_0013a414:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013a418:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        uint32_t t = v5;
        cpu->r[13] += 24u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013a41cu)) return;
    }
}

/* _ZN9AniObj_v411GetFrmCountEi @ 0013a41c (arm) */
void fn_0013a41c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013a41c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x48u);
    }
L_0013a420:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_0013a424:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 4u, &shc), 0, 0);
    }
L_0013a428:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x10u);
    }
L_0013a42c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9AniObj_v47GetTypeEv @ 0013a430 (arm) */
void fn_0013a430(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013a430:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x24u);
    }
L_0013a434:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9AniObj_v417GetMeshGroupCountEi @ 0013a438 (arm) */
void fn_0013a438(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013a438:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x20u);
    }
L_0013a43c:;
    {
        cpu->r[2] = 0x0000005cu;
    }
L_0013a440:;
    {
        uint32_t v = cpu->r[2] * cpu->r[1] + cpu->r[3]; cpu->r[3] = v;
    }
L_0013a444:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x1cu);
    }
L_0013a448:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9AniObj_v418GetMeshGroupShaderEii @ 0013a44c (arm) */
void fn_0013a44c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013a44c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x20u);
    }
L_0013a450:;
    {
        cpu->r[0] = 0x0000005cu;
    }
L_0013a454:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_0013a458:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[3]; cpu->r[3] = v;
    }
L_0013a45c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x20u);
    }
L_0013a460:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 4u, &shc), 0, 0);
    }
L_0013a464:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_0013a468:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x8u);
    }
L_0013a46c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9AniObj_v417GetBoundingCenterEv @ 0013a470 (arm) */
void fn_0013a470(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013a470:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0013a474:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9AniObj_v417GetBoundingRadiusEv @ 0013a478 (arm) */
void fn_0013a478(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013a478:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0013a47c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9AniMgr_v413ClearAniQueueEv @ 0013a480 (arm) */
void fn_0013a480(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013a480:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013a484:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0013a488:;
    {
        wr32(cpu->r[0] + + 0xd8u, cpu->r[3]);
    }
L_0013a48c:;
    {
        wr8(cpu->r[0] + + 0xe0u, cpu->r[2]);
    }
L_0013a490:;
    {
        wr32(cpu->r[0] + + 0xdcu, cpu->r[3]);
    }
L_0013a494:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9AniMgr_v49GetAniObjEv @ 0013a498 (arm) */
void fn_0013a498(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013a498:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_0013a49c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9AniMgr_v410GetCrtAnimEv @ 0013a4a0 (arm) */
void fn_0013a4a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013a4a0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x18u);
    }
L_0013a4a4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9AniMgr_v411GetCrtFrameEv @ 0013a4a8 (arm) */
void fn_0013a4a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013a4a8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x10u);
    }
L_0013a4ac:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9AniMgr_v48SetFrameEf @ 0013a4b0 (arm) */
void fn_0013a4b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013a4b0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8u);
    }
L_0013a4b4:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[1];
    }
L_0013a4b8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x18u);
    }
L_0013a4bc:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[1]);
    }
L_0013a4c0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x48u);
    }
L_0013a4c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0013a4c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 4u, &shc), 0, 0);
    }
L_0013a4cc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0x10u);
    }
L_0013a4d0:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0013a4d4:;
    {
        vfp_vdiv(cpu, 15, 15, 14);
    }
L_0013a4d8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013a4dc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9AniMgr_v417GetBoundingCenterEv @ 0013a4e0 (arm) */
void fn_0013a4e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013a4e0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000030u, 0, 0);
    }
L_0013a4e4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9AniMgr_v417GetBoundingRadiusEv @ 0013a4e8 (arm) */
void fn_0013a4e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013a4e8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x3cu);
    }
L_0013a4ec:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9AniObj_v417GetMeshGroupVertsEii @ 0013a4f0 (arm) */
void fn_0013a4f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013a4f0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x20u);
    }
L_0013a4f4:;
    {
        cpu->r[0] = 0x0000005cu;
    }
L_0013a4f8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_0013a4fc:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[3]; cpu->r[3] = v;
    }
L_0013a500:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x20u);
    }
L_0013a504:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 4u, &shc), 0, 0);
    }
L_0013a508:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[2] + + 0xcu);
    }
L_0013a50c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0013a510:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0013a514:;
    {
        if (cond_test(cpu, 14)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_0013a518:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013a51c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x10u);
    }
L_0013a520:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0013a524:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0013a528:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x20u);
    }
L_0013a52c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_0013a530:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000038u, 0, 0);
    }
L_0013a534:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_0013a538:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0013a524;
        }
    }
L_0013a53c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9AniObj_v417GetMeshGroupFacesEii @ 0013a540 (arm) */
void fn_0013a540(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013a540:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x20u);
    }
L_0013a544:;
    {
        cpu->r[0] = 0x0000005cu;
    }
L_0013a548:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_0013a54c:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1] + cpu->r[3]; cpu->r[3] = v;
    }
L_0013a550:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x20u);
    }
L_0013a554:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 4u, &shc), 0, 0);
    }
L_0013a558:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[2] + + 0xcu);
    }
L_0013a55c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0013a560:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0013a564:;
    {
        if (cond_test(cpu, 14)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_0013a568:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0013a56c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x10u);
    }
L_0013a570:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0013a574:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0013a578:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x1cu);
    }
L_0013a57c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_0013a580:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000038u, 0, 0);
    }
L_0013a584:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_0013a588:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0013a574;
        }
    }
L_0013a58c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9AniObj_v411LoadMinimalEP8LZMAFile @ 0013a590 (arm) */
void fn_0013a590(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013a590:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0013a594:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9AniMgr_v49SetTexMapEiPP7Texture @ 0013a598 (arm) */
void fn_0013a598(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013a598:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_0013a59c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
    }
L_0013a5a0:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0x4u);
    }
L_0013a5a4:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0013a5a8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013a5f4;
        }
    }
L_0013a5ac:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x20u);
    }
L_0013a5b0:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[1] = v;
    }
L_0013a5b4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0013a5b8:;
    {
        cpu->r[4] = rd32(cpu->r[6] + + 0x1cu);
    }
L_0013a5bc:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0013a5c0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013a5e4;
        }
    }
L_0013a5c4:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x1cu);
    }
L_0013a5c8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013a5cc:;
    {
        cpu->r[12] = rd32(cpu->r[12] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_0013a5d0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[1], 0, 0);
    }
L_0013a5d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0013a5d8:;
    {
        uint32_t wb_tmp = cpu->r[12] + 0x00000010u;
        wr32(cpu->r[12], cpu->r[2]);
        cpu->r[12] = wb_tmp;
    }
L_0013a5dc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_0013a5e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013a5d4;
        }
    }
L_0013a5e4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0013a5e8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000005cu, 0, 0);
    }
L_0013a5ec:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[7], 1, 1);
    }
L_0013a5f0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013a5b8;
        }
    }
L_0013a5f4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[13] += 16u;
    }
L_0013a5f8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9AniMgr_v417ComputeMeshPivotsEi @ 0013a5fc (arm) */
void fn_0013a5fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013a5fc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_0013a600:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0013a604:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_0013a608:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_0013a60c:;
    {
        if (cond_test(cpu, 11)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        uint32_t t = v3;
        cpu->r[13] += 16u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013a610u)) return;
        }
    }
L_0013a610:;
    {
        cpu->r[2] = 0x0000005cu;
    }
L_0013a614:;
    {
        cpu->r[14] = rd32(cpu->r[0] + + 0x18u);
    }
L_0013a618:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x20u);
    }
L_0013a61c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[1]; cpu->r[1] = v;
    }
L_0013a620:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x48u);
    }
L_0013a624:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x14u);
    }
L_0013a628:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], shifter(cpu->r[14], 2, 1u, &shc), 0, 0);
    }
L_0013a62c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[1], 0, 0);
    }
L_0013a630:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[14], 2, 4u, &shc), 0, 0);
    }
L_0013a634:;
    {
        cpu->r[14] = rd32(cpu->r[0] + + 0x4u);
    }
L_0013a638:;
    {
        { uint32_t v = cpu->r[14] & 0x00000001u; set_nz(cpu, v); }
    }
L_0013a63c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[14], 1, 1u, &shc), 0, 0);
        }
    }
L_0013a640:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = rd32(cpu->r[0] + shifter(cpu->r[14], 1, 1u, &shc));
        }
    }
L_0013a644:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[14], 1, 1u, &shc), 0, 0);
        }
    }
L_0013a648:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[1]);
        }
    }
L_0013a64c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[1]);
        }
    }
L_0013a650:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_0013a654:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
        }
    }
L_0013a658:;
    {
        cpu->r[14] = 0x0013a65cu; guest_call(cpu, cpu->r[3]);
    }
L_0013a65c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        uint32_t t = v3;
        cpu->r[13] += 16u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013a660u)) return;
    }
}

/* _ZN9AniMgr_v418GetLastAnimInQueueEv @ 0013a660 (arm) */
void fn_0013a660(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013a660:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0xe0u);
    }
L_0013a664:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013a668:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[0] + + 0xdcu);
        }
    }
L_0013a66c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[0] + + 0x18u);
        }
    }
L_0013a670:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
        }
    }
L_0013a674:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[3] & 0x0000000fu; cpu->r[3] = v;
        }
    }
L_0013a678:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000bu, 0, 0);
        }
    }
L_0013a67c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = rd32(cpu->r[0] + shifter(cpu->r[3], 2, 3u, &shc));
        }
    }
L_0013a680:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9AniMgr_v412RayIntersectEiP8Vector3dS1_S1_PfPP7TextureS2_S2_ @ 0013a684 (arm) */
void fn_0013a684(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013a684:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0013a688:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9AniMgr_v419ClearBuffersFromGPUEv @ 0013a68c (arm) */
void fn_0013a68c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013a68c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_0013a690:;
    {
        return fn_0013dff4(cpu);
    }
}

/* _ZN9AniMgr_v416SendBuffersToGPUEbii @ 0013a694 (arm) */
void fn_0013a694(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013a694:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_0013a698:;
    {
        return fn_0013e0b8(cpu);
    }
}

/* _ZN9AniMgr_v49IsVisibleEP7CMatrix @ 0013a69c (arm) */
void fn_0013a69c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013a69c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0013a6a0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0013a6a8u + + 0x4cu);
    }
L_0013a6a4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_0013a6a8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013a6ac:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0013a6b0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_0013a6b4:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_0013a6b8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x00000030u, 0, 0);
    }
L_0013a6bc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0013a6c0:;
    {
        cpu->r[4] = rd32(0x0013a6c8u + + 0x30u);
    }
L_0013a6c4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013a6c8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013a6cc:;
    {
        cpu->r[14] = 0x0013a6d0u; fn_001533e4(cpu);
    }
L_0013a6d0:;
    {
        cpu->r[3] = rd32(0x0013a6d8u + + 0x24u);
    }
L_0013a6d4:;
    {
        cpu->r[4] = add_flags(cpu, 0x0013a6dcu, cpu->r[4], 0, 0);
    }
L_0013a6d8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0013a6dc:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x3cu);
    }
L_0013a6e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0013a6e4:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0013a6e8:;
    {
        cpu->r[14] = 0x0013a6ecu; fn_0012de90(cpu);
    }
L_0013a6ec:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_0013a6f0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        uint32_t t = v3;
        cpu->r[13] += 16u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013a6f4u)) return;
    }
}

/* _ZN9AniMgr_v49QueueAnimEib @ 0013a700 (arm) */
void fn_0013a700(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013a700:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0xe0u);
    }
L_0013a704:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0013a708:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013a70c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0013a710:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0013a714:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_0013a718:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_0013a71c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013a730;
        }
    }
L_0013a720:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xd8u);
    }
L_0013a724:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xdcu);
    }
L_0013a728:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0013a72c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013a7dc;
        }
    }
L_0013a730:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x2cu);
    }
L_0013a734:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013a738:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013a76c;
        }
    }
L_0013a73c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0xe0u);
    }
L_0013a740:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013a744:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013a7a4;
        }
    }
L_0013a748:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013a74c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0013a750:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0013a754:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_0013a758:;
    {
        cpu->r[3] = 0x00000064u;
    }
L_0013a75c:;
    {
        cpu->r[14] = 0x0013a764u;
    }
L_0013a760:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0013a764u)) return;
    }
L_0013a764:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0013a768:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        uint32_t t = v3;
        cpu->r[13] += 16u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013a76cu)) return;
    }
L_0013a76c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xdcu);
    }
L_0013a770:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0013a774:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[2]);
    }
L_0013a778:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000bu, 0, 0);
    }
L_0013a77c:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[3], 2, 3u, &shc), cpu->r[6]);
    }
L_0013a780:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xdcu);
    }
L_0013a784:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_0013a788:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_0013a78c:;
    {
        uint32_t v = cpu->r[2] & 0x0000000fu; cpu->r[2] = v;
    }
L_0013a790:;
    {
        wr32(cpu->r[4] + + 0xdcu, cpu->r[2]);
    }
L_0013a794:;
    {
        wr8(cpu->r[3] + + 0x5cu, cpu->r[5]);
    }
L_0013a798:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013a79c:;
    {
        wr8(cpu->r[4] + + 0xe0u, cpu->r[3]);
    }
L_0013a7a0:;
    {
        goto L_0013a764;
    }
L_0013a7a4:;
    {
        cpu->r[1] = rd32(0x0013a7acu + + 0x68u);
    }
L_0013a7a8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0013a7ac:;
    {
        cpu->r[2] = rd32(0x0013a7b4u + + 0x64u);
    }
L_0013a7b0:;
    {
        cpu->r[14] = 0x000004acu;
    }
L_0013a7b4:;
    {
        cpu->r[3] = rd32(0x0013a7bcu + + 0x60u);
    }
L_0013a7b8:;
    {
        cpu->r[1] = add_flags(cpu, 0x0013a7c0u, cpu->r[1], 0, 0);
    }
L_0013a7bc:;
    {
        cpu->r[12] = rd32(0x0013a7c4u + + 0x5cu);
    }
L_0013a7c0:;
    {
        cpu->r[2] = add_flags(cpu, 0x0013a7c8u, cpu->r[2], 0, 0);
    }
L_0013a7c4:;
    {
        cpu->r[3] = add_flags(cpu, 0x0013a7ccu, cpu->r[3], 0, 0);
    }
L_0013a7c8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_0013a7cc:;
    {
        cpu->r[12] = add_flags(cpu, 0x0013a7d4u, cpu->r[12], 0, 0);
    }
L_0013a7d0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0013a7d4:;
    {
        cpu->r[14] = 0x0013a7d8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0013a7d8:;
    {
        goto L_0013a748;
    }
L_0013a7dc:;
    {
        cpu->r[1] = rd32(0x0013a7e4u + + 0x40u);
    }
L_0013a7e0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0013a7e4:;
    {
        cpu->r[2] = rd32(0x0013a7ecu + + 0x3cu);
    }
L_0013a7e8:;
    {
        cpu->r[14] = 0x000004a6u;
    }
L_0013a7ec:;
    {
        cpu->r[3] = rd32(0x0013a7f4u + + 0x38u);
    }
L_0013a7f0:;
    {
        cpu->r[1] = add_flags(cpu, 0x0013a7f8u, cpu->r[1], 0, 0);
    }
L_0013a7f4:;
    {
        cpu->r[12] = rd32(0x0013a7fcu + + 0x34u);
    }
L_0013a7f8:;
    {
        cpu->r[2] = add_flags(cpu, 0x0013a800u, cpu->r[2], 0, 0);
    }
L_0013a7fc:;
    {
        cpu->r[3] = add_flags(cpu, 0x0013a804u, cpu->r[3], 0, 0);
    }
L_0013a800:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_0013a804:;
    {
        cpu->r[12] = add_flags(cpu, 0x0013a80cu, cpu->r[12], 0, 0);
    }
L_0013a808:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0013a80c:;
    {
        cpu->r[14] = 0x0013a810u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0013a810:;
    {
        goto L_0013a730;
    }
}

/* _ZN9AniMgr_v421GetMeshGroupTextureIdEii @ 0013a834 (arm) */
void fn_0013a834(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013a834:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_0013a838:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0013a83c:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_0013a840:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_0013a844:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0013a848:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0013a84c:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0013a850:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_0013a854:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0013a890;
        }
    }
L_0013a858:;
    {
        cpu->r[1] = rd32(0x0013a860u + + 0x54u);
    }
L_0013a85c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0013a860:;
    {
        cpu->r[12] = rd32(0x0013a868u + + 0x50u);
    }
L_0013a864:;
    {
        cpu->r[14] = 0x000003c3u;
    }
L_0013a868:;
    {
        cpu->r[2] = rd32(0x0013a870u + + 0x4cu);
    }
L_0013a86c:;
    {
        cpu->r[1] = add_flags(cpu, 0x0013a874u, cpu->r[1], 0, 0);
    }
L_0013a870:;
    {
        cpu->r[3] = rd32(0x0013a878u + + 0x48u);
    }
L_0013a874:;
    {
        cpu->r[12] = add_flags(cpu, 0x0013a87cu, cpu->r[12], 0, 0);
    }
L_0013a878:;
    {
        cpu->r[2] = add_flags(cpu, 0x0013a880u, cpu->r[2], 0, 0);
    }
L_0013a87c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000000cu, 0, 0);
    }
L_0013a880:;
    {
        cpu->r[3] = add_flags(cpu, 0x0013a888u, cpu->r[3], 0, 0);
    }
L_0013a884:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0013a888:;
    {
        cpu->r[14] = 0x0013a88cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0013a88c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_0013a890:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x20u);
    }
L_0013a894:;
    {
        cpu->r[2] = 0x0000005cu;
    }
L_0013a898:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 1u, &shc), 0, 0);
    }
L_0013a89c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[4] + cpu->r[3]; cpu->r[4] = v;
    }
L_0013a8a0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
    }
L_0013a8a4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 4u, &shc), 0, 0);
    }
L_0013a8a8:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x16u);
    }
L_0013a8ac:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0013a8b0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        uint32_t t = v3;
        cpu->r[13] += 16u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013a8b4u)) return;
    }
}

/* _ZN9AniMgr_v48HasAlphaEv @ 0013a8c4 (arm) */
void fn_0013a8c4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013a8c4:;
    {
        cpu->r[3] = rd32(0x0013a8ccu + + 0xf4u);
    }
L_0013a8c8:;
    {
        cpu->r[1] = rd32(0x0013a8d0u + + 0xf4u);
    }
L_0013a8cc:;
    {
        cpu->r[3] = add_flags(cpu, 0x0013a8d4u, cpu->r[3], 0, 0);
    }
L_0013a8d0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8u);
    }
L_0013a8d4:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0013a8d8:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_0013a8dc:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0013a8e0:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_0013a8e4:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_0013a8e8:;
    {
        cpu->r[7] = rd32(cpu->r[1]);
    }
L_0013a8ec:;
    {
        cpu->r[14] = 0x0013a8f4u;
    }
L_0013a8f0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0013a8f4u)) return;
    }
L_0013a8f4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000062u, 1, 1);
    }
L_0013a8f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013a960;
        }
    }
L_0013a8fc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_0013a900:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0013a904:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0013a908:;
    {
        cpu->r[14] = 0x0013a910u;
    }
L_0013a90c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0013a910u)) return;
    }
L_0013a910:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000065u, 1, 1);
    }
L_0013a914:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013a960;
        }
    }
L_0013a918:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_0013a91c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_0013a920:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013a924:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013a958;
        }
    }
L_0013a928:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x20u);
    }
L_0013a92c:;
    {
        cpu->r[3] = rd8(cpu->r[2] + + 0x54u);
    }
L_0013a930:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013a934:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013a948;
        }
    }
L_0013a938:;
    {
        goto L_0013a9b8;
    }
L_0013a93c:;
    {
        cpu->r[1] = rd8(cpu->r[2] + + 0x54u);
    }
L_0013a940:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0013a944:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013a9b8;
        }
    }
L_0013a948:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0013a94c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000005cu, 0, 0);
    }
L_0013a950:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_0013a954:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013a93c;
        }
    }
L_0013a958:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0013a95c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        uint32_t t = v5;
        cpu->r[13] += 24u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013a960u)) return;
    }
L_0013a960:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_0013a964:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x40u);
    }
L_0013a968:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0013a96c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013a958;
        }
    }
L_0013a970:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0013a974:;
    {
        cpu->r[8] = 0x00001288u;
    }
L_0013a978:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_0013a97c:;
    {
        goto L_0013a990;
    }
L_0013a980:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_0013a984:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x40u);
    }
L_0013a988:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_0013a98c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0013a958;
        }
    }
L_0013a990:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x44u);
    }
L_0013a994:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0013a998:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_0013a99c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_0013a9a0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000028u, 0, 0);
    }
L_0013a9a4:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x8u);
    }
L_0013a9a8:;
    {
        cpu->r[14] = 0x0013a9acu; fn_00147cd8(cpu);
    }
L_0013a9ac:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x2cu);
    }
L_0013a9b0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013a9b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013a980;
        }
    }
L_0013a9b8:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_0013a9bc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        uint32_t t = v5;
        cpu->r[13] += 24u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013a9c0u)) return;
    }
}

/* _ZN9AniMgr_v411SetTexturesEv @ 0013a9c8 (arm) */
void fn_0013a9c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013a9c8:;
    {
        cpu->r[2] = rd32(0x0013a9d0u + + 0x144u);
    }
L_0013a9cc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_0013a9d0:;
    {
        cpu->r[1] = rd32(0x0013a9d8u + + 0x140u);
    }
L_0013a9d4:;
    {
        cpu->r[2] = add_flags(cpu, 0x0013a9dcu, cpu->r[2], 0, 0);
    }
L_0013a9d8:;
    {
        cpu->r[13] -= 36u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[9]);
        wr32(cpu->r[13] + 24u, cpu->r[10]);
        wr32(cpu->r[13] + 28u, cpu->r[11]);
        wr32(cpu->r[13] + 32u, cpu->r[14]);
    }
L_0013a9dc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_0013a9e0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_0013a9e4:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0013a9e8:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_0013a9ec:;
    {
        cpu->r[9] = rd32(cpu->r[3] + + 0x14u);
    }
L_0013a9f0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0013a9f4:;
    {
        cpu->r[10] = rd32(cpu->r[2]);
    }
L_0013a9f8:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_0013a9fc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013ab0c;
        }
    }
L_0013aa00:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0013aa04:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_0013aa08:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_0013aa0c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x20u);
    }
L_0013aa10:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_0013aa14:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_0013aa18:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_0013aa1c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x1cu);
    }
L_0013aa20:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0013aa24:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_0013aa28:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013aae4;
        }
    }
L_0013aa2c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_0013aa30:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0013aa34:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_0013aa38:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_0013aa3c:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[3] = v;
    }
L_0013aa40:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_0013aa44:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_0013aa48:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_0013aa4c:;
    {
        cpu->r[11] = rd32(cpu->r[12] + + 0x20u);
    }
L_0013aa50:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[1], 0, 0);
    }
L_0013aa54:;
    {
        cpu->r[3] = rd8(cpu->r[11] + + 0x15u);
    }
L_0013aa58:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013aa5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013aac0;
        }
    }
L_0013aa60:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_0013aa64:;
    {
        cpu->r[6] = cpu->r[11];
    }
L_0013aa68:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0013aa6c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 4u, &shc); cpu->r[5] = v;
    }
L_0013aa70:;
    {
        cpu->r[7] = rd16(cpu->r[6] + + 0x16u);
    }
L_0013aa74:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0013aa78:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0013aa7c:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_0013aa80:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0013aa84:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[2], 0, 0);
    }
L_0013aa88:;
    {
        cpu->r[14] = 0x0013aa8cu; fn_00135d9c(cpu);
    }
L_0013aa8c:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x1cu);
    }
L_0013aa90:;
    {
        cpu->r[12] = rd32(cpu->r[13]);
    }
L_0013aa94:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0013aa98:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0013aa9c:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_0013aaa0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000002u, 0, 0);
    }
L_0013aaa4:;
    {
        cpu->r[7] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_0013aaa8:;
    {
        cpu->r[14] = 0x0013aaacu; fn_00135cf4(cpu);
    }
L_0013aaac:;
    {
        wr32(cpu->r[7] + cpu->r[5], cpu->r[0]);
    }
L_0013aab0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_0013aab4:;
    {
        cpu->r[3] = rd8(cpu->r[11] + + 0x15u);
    }
L_0013aab8:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_0013aabc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0013aa70;
        }
    }
L_0013aac0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_0013aac4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_0013aac8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0013aacc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_0013aad0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_0013aad4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_0013aad8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000030u, 0, 0);
    }
L_0013aadc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_0013aae0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013aa44;
        }
    }
L_0013aae4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_0013aae8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0013aaec:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0013aaf0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_0013aaf4:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_0013aaf8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_0013aafc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000005cu, 0, 0);
    }
L_0013ab00:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_0013ab04:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[8] + + 0x8u);
        }
    }
L_0013ab08:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013aa0c;
        }
    }
L_0013ab0c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_0013ab10:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        uint32_t v6 = rd32(cpu->r[13] + 24u);
        uint32_t v7 = rd32(cpu->r[13] + 28u);
        uint32_t v8 = rd32(cpu->r[13] + 32u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        cpu->r[9] = v5;
        cpu->r[10] = v6;
        cpu->r[11] = v7;
        uint32_t t = v8;
        cpu->r[13] += 36u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013ab14u)) return;
    }
}

/* _ZN9AniMgr_v419ReplaceColorTextureEiib @ 0013ab1c (arm) */
void fn_0013ab1c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013ab1c:;
    {
        cpu->r[13] -= 36u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[9]);
        wr32(cpu->r[13] + 24u, cpu->r[10]);
        wr32(cpu->r[13] + 28u, cpu->r[11]);
        wr32(cpu->r[13] + 32u, cpu->r[14]);
    }
L_0013ab20:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_0013ab24:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0013ab28:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_0013ab2c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_0013ab30:;
    {
        cpu->r[0] = rd32(0x0013ab38u + + 0x1dcu);
    }
L_0013ab34:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_0013ab38:;
    {
        cpu->r[3] = rd32(0x0013ab40u + + 0x1d8u);
    }
L_0013ab3c:;
    {
        cpu->r[0] = add_flags(cpu, 0x0013ab44u, cpu->r[0], 0, 0);
    }
L_0013ab40:;
    {
        cpu->r[1] = rd32(cpu->r[12] + + 0x8u);
    }
L_0013ab44:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0013ab48:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x4u);
    }
L_0013ab4c:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x14u);
    }
L_0013ab50:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0013ab54:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013ab58:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[0]);
    }
L_0013ab5c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0013ab60:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_0013ab64:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013ad0c;
        }
    }
L_0013ab68:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0013ab6c:;
    {
        cpu->r[2] = (uint32_t)((uint16_t)cpu->r[2]);
    }
L_0013ab70:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_0013ab74:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_0013ab78:;
    {
        cpu->r[2] = (uint32_t)((uint16_t)cpu->r[4]);
    }
L_0013ab7c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[0]);
    }
L_0013ab80:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_0013ab84:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x20u);
    }
L_0013ab88:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_0013ab8c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_0013ab90:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_0013ab94:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x1cu);
    }
L_0013ab98:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013ab9c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_0013aba0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013ac58;
        }
    }
L_0013aba4:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_0013aba8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_0013abac:;
    {
        cpu->r[9] = cpu->r[11];
    }
L_0013abb0:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_0013abb4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_0013abb8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0013abbc:;
    {
        cpu->r[8] = rd32(cpu->r[3] + + 0x20u);
    }
L_0013abc0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[11], 0, 0);
    }
L_0013abc4:;
    {
        cpu->r[3] = rd8(cpu->r[8] + + 0x15u);
    }
L_0013abc8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013abcc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013ac44;
        }
    }
L_0013abd0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_0013abd4:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0013abd8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013ac88;
        }
    }
L_0013abdc:;
    {
        cpu->r[6] = cpu->r[8];
    }
L_0013abe0:;
    {
        uint32_t v = shifter(cpu->r[9], 2, 4u, &shc); cpu->r[7] = v;
    }
L_0013abe4:;
    {
        cpu->r[5] = cpu->r[12];
    }
L_0013abe8:;
    {
        cpu->r[10] = cpu->r[8];
    }
L_0013abec:;
    {
        goto L_0013abfc;
    }
L_0013abf0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_0013abf4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_0013abf8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0013ac44;
        }
    }
L_0013abfc:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[6] + + 0x16u);
    }
L_0013ac00:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0013ac04:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000002u, 0, 0);
    }
L_0013ac08:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_0013ac0c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013abf0;
        }
    }
L_0013ac10:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_0013ac14:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_0013ac18:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_0013ac1c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x1cu);
    }
L_0013ac20:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_0013ac24:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_0013ac28:;
    {
        cpu->r[8] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_0013ac2c:;
    {
        cpu->r[14] = 0x0013ac30u; fn_00135cf4(cpu);
    }
L_0013ac30:;
    {
        wr32(cpu->r[8] + cpu->r[7], cpu->r[0]);
    }
L_0013ac34:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_0013ac38:;
    {
        cpu->r[3] = rd8(cpu->r[10] + + 0x15u);
    }
L_0013ac3c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_0013ac40:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0013abfc;
        }
    }
L_0013ac44:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_0013ac48:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_0013ac4c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000030u, 0, 0);
    }
L_0013ac50:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[0], 1, 1);
    }
L_0013ac54:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013abb8;
        }
    }
L_0013ac58:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_0013ac5c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0013ac60:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0013ac64:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_0013ac68:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_0013ac6c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_0013ac70:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000005cu, 0, 0);
    }
L_0013ac74:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_0013ac78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013ad0c;
        }
    }
L_0013ac7c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_0013ac80:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x8u);
    }
L_0013ac84:;
    {
        goto L_0013ab84;
    }
L_0013ac88:;
    {
        cpu->r[6] = cpu->r[8];
    }
L_0013ac8c:;
    {
        uint32_t v = shifter(cpu->r[9], 2, 4u, &shc); cpu->r[7] = v;
    }
L_0013ac90:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0013ac94:;
    {
        cpu->r[10] = cpu->r[8];
    }
L_0013ac98:;
    {
        goto L_0013aca8;
    }
L_0013ac9c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_0013aca0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_0013aca4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0013ac44;
        }
    }
L_0013aca8:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[6] + + 0x16u);
    }
L_0013acac:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0013acb0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000002u, 0, 0);
    }
L_0013acb4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_0013acb8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013ac9c;
        }
    }
L_0013acbc:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_0013acc0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_0013acc4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_0013acc8:;
    {
        cpu->r[14] = 0x0013acccu; fn_00135d64(cpu);
    }
L_0013accc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_0013acd0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_0013acd4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0013acd8:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_0013acdc:;
    {
        cpu->r[14] = 0x0013ace0u; fn_00135d9c(cpu);
    }
L_0013ace0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_0013ace4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_0013ace8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_0013acec:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x1cu);
    }
L_0013acf0:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_0013acf4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_0013acf8:;
    {
        cpu->r[8] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_0013acfc:;
    {
        cpu->r[14] = 0x0013ad00u; fn_00135cf4(cpu);
    }
L_0013ad00:;
    {
        wr32(cpu->r[8] + cpu->r[7], cpu->r[0]);
    }
L_0013ad04:;
    {
        cpu->r[3] = rd8(cpu->r[10] + + 0x15u);
    }
L_0013ad08:;
    {
        goto L_0013ac9c;
    }
L_0013ad0c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_0013ad10:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        uint32_t v6 = rd32(cpu->r[13] + 24u);
        uint32_t v7 = rd32(cpu->r[13] + 28u);
        uint32_t v8 = rd32(cpu->r[13] + 32u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        cpu->r[9] = v5;
        cpu->r[10] = v6;
        cpu->r[11] = v7;
        uint32_t t = v8;
        cpu->r[13] += 36u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013ad14u)) return;
    }
}

/* _ZN9AniMgr_v44InitEv @ 0013ad1c (arm) */
void fn_0013ad1c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013ad1c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_0013ad20:;
    {
        cpu->r[13] -= 32u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[9]);
        wr32(cpu->r[13] + 24u, cpu->r[10]);
        wr32(cpu->r[13] + 28u, cpu->r[14]);
    }
L_0013ad24:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0013ad28:;
    {
        cpu->r[5] = rd32(cpu->r[3] + + 0x4u);
    }
L_0013ad2c:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[6] = v;
    }
L_0013ad30:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0013ad34:;
    {
        cpu->r[14] = 0x0013ad38u; imp__Znaj(cpu); /* _Znaj */
    }
L_0013ad38:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013ad3c:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[0]);
    }
L_0013ad40:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_0013ad44:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        uint32_t v6 = rd32(cpu->r[13] + 24u);
        uint32_t v7 = rd32(cpu->r[13] + 28u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        cpu->r[9] = v5;
        cpu->r[10] = v6;
        uint32_t t = v7;
        cpu->r[13] += 32u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013ad48u)) return;
        }
    }
L_0013ad48:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0013ad4c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0013ad50:;
    {
        cpu->r[14] = 0x0013ad54u; imp_memset(cpu); /* memset */
    }
L_0013ad54:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0013ad58:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
        }
    }
L_0013ad5c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013add0;
        }
    }
L_0013ad60:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0013ad64:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_0013ad68:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x1cu);
    }
L_0013ad6c:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_0013ad70:;
    {
        cpu->r[8] = cpu->r[6];
    }
L_0013ad74:;
    {
        cpu->r[9] = cpu->r[6];
    }
L_0013ad78:;
    {
        goto L_0013ad94;
    }
L_0013ad7c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_0013ad80:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_0013ad84:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000005cu, 0, 0);
    }
L_0013ad88:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[5], 1, 1);
    }
L_0013ad8c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_0013ad90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013add0;
        }
    }
L_0013ad94:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x20u);
    }
L_0013ad98:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[7], 0, 0);
    }
L_0013ad9c:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x1cu);
    }
L_0013ada0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013ada4:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[10] + cpu->r[6], cpu->r[9]);
        }
    }
L_0013ada8:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 4u, &shc); cpu->r[0] = v;
    }
L_0013adac:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013ad80;
        }
    }
L_0013adb0:;
    {
        cpu->r[14] = 0x0013adb4u; imp__Znaj(cpu); /* _Znaj */
    }
L_0013adb4:;
    {
        wr32(cpu->r[10] + cpu->r[6], cpu->r[0]);
    }
L_0013adb8:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x1cu);
    }
L_0013adbc:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[6]);
    }
L_0013adc0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013adc4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013ad7c;
        }
    }
L_0013adc8:;
    {
        cpu->r[0] = (~0x00000001u);
    }
L_0013adcc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        uint32_t v6 = rd32(cpu->r[13] + 24u);
        uint32_t v7 = rd32(cpu->r[13] + 28u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        cpu->r[9] = v5;
        cpu->r[10] = v6;
        uint32_t t = v7;
        cpu->r[13] += 32u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013add0u)) return;
    }
L_0013add0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x50u);
    }
L_0013add4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4cu);
    }
L_0013add8:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[3] = v;
    }
L_0013addc:;
    {
        cpu->r[0] = rd16(cpu->r[2] + cpu->r[3]);
    }
L_0013ade0:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0013ade4:;
    {
        cpu->r[14] = 0x0013ade8u; imp__Znaj(cpu); /* _Znaj */
    }
L_0013ade8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013adec:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[0]);
    }
L_0013adf0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000004u);
        }
    }
L_0013adf4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0013adf8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        uint32_t v6 = rd32(cpu->r[13] + 24u);
        uint32_t v7 = rd32(cpu->r[13] + 28u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        cpu->r[9] = v5;
        cpu->r[10] = v6;
        uint32_t t = v7;
        cpu->r[13] += 32u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013adfcu)) return;
    }
}

/* _ZN9AniObj_v419clearComputedPivotsEv @ 0013adfc (arm) */
void fn_0013adfc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013adfc:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x28u);
    }
L_0013ae00:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0013ae04:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0013ae08:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0013ae0c:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 5u, &shc); cpu->r[2] = v;
    }
L_0013ae10:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x30u);
    }
L_0013ae14:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0013ae18:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_0013ae1c:;
    {
        cpu->r[14] = 0x0013ae20u; imp_memset(cpu); /* memset */
    }
L_0013ae20:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_0013ae24:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013ae28:;
    {
        if (cond_test(cpu, 14)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        uint32_t t = v3;
        cpu->r[13] += 16u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013ae2cu)) return;
        }
    }
L_0013ae2c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0013ae30:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_0013ae34:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x20u);
    }
L_0013ae38:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0013ae3c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0013ae40:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_0013ae44:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x30u);
    }
L_0013ae48:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x38u);
    }
L_0013ae4c:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 5u, &shc); cpu->r[2] = v;
    }
L_0013ae50:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0013ae54:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_0013ae58:;
    {
        cpu->r[14] = 0x0013ae5cu; imp_memset(cpu); /* memset */
    }
L_0013ae5c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x20u);
    }
L_0013ae60:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0013ae64:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_0013ae68:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000005cu, 0, 0);
    }
L_0013ae6c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x3cu);
    }
L_0013ae70:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x44u);
    }
L_0013ae74:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 5u, &shc); cpu->r[2] = v;
    }
L_0013ae78:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0013ae7c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_0013ae80:;
    {
        cpu->r[14] = 0x0013ae84u; imp_memset(cpu); /* memset */
    }
L_0013ae84:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_0013ae88:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_0013ae8c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0013ae34;
        }
    }
L_0013ae90:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        uint32_t t = v3;
        cpu->r[13] += 16u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013ae94u)) return;
    }
}

/* _ZN9AniMgr_v419ClearComputedPivotsEv @ 0013ae94 (arm) */
void fn_0013ae94(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013ae94:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_0013ae98:;
    {
        return fn_0013adfc(cpu);
    }
}

/* _ZN9AniMgr_v4D1Ev @ 0013ae9c (arm) */
void fn_0013ae9c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013ae9c:;
    {
        cpu->r[3] = rd32(0x0013aea4u + + 0xb0u);
    }
L_0013aea0:;
    {
        cpu->r[2] = rd32(0x0013aea8u + + 0xb0u);
    }
L_0013aea4:;
    {
        cpu->r[3] = add_flags(cpu, 0x0013aeacu, cpu->r[3], 0, 0);
    }
L_0013aea8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0013aeac:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0013aeb0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x20u);
    }
L_0013aeb4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0013aeb8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013aebc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0013aec0:;
    {
        wr32(cpu->r[5], cpu->r[2]);
    }
L_0013aec4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013aed4;
        }
    }
L_0013aec8:;
    {
        cpu->r[14] = 0x0013aeccu; fn_0018ba60(cpu);
    }
L_0013aecc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013aed0:;
    {
        wr32(cpu->r[5] + + 0x20u, cpu->r[3]);
    }
L_0013aed4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x1cu);
    }
L_0013aed8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0013aedc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013af3c;
        }
    }
L_0013aee0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x8u);
    }
L_0013aee4:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x4u);
    }
L_0013aee8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013aeec:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013af2c;
        }
    }
L_0013aef0:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0013aef4:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_0013aef8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_0013aefc:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013af00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013af14;
        }
    }
L_0013af04:;
    {
        cpu->r[14] = 0x0013af08u; fn_0018ba60(cpu);
    }
L_0013af08:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x1cu);
    }
L_0013af0c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x8u);
    }
L_0013af10:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[6]);
    }
L_0013af14:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x4u);
    }
L_0013af18:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0013af1c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_0013af20:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0013aef8;
        }
    }
L_0013af24:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0013af28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013af34;
        }
    }
L_0013af2c:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_0013af30:;
    {
        cpu->r[14] = 0x0013af34u; fn_0018ba60(cpu);
    }
L_0013af34:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013af38:;
    {
        wr32(cpu->r[5] + + 0x1cu, cpu->r[3]);
    }
L_0013af3c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013af40:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013af44:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[3]);
    }
L_0013af48:;
    {
        cpu->r[14] = 0x0013af4cu; fn_0014101c(cpu);
    }
L_0013af4c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013af50:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        uint32_t t = v3;
        cpu->r[13] += 16u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013af54u)) return;
    }
}

/* _ZN9AniMgr_v4D0Ev @ 0013af5c (arm) */
void fn_0013af5c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013af5c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0013af60:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0013af64:;
    {
        cpu->r[14] = 0x0013af68u; fn_0013ae9c(cpu);
    }
L_0013af68:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013af6c:;
    {
        cpu->r[14] = 0x0013af70u; fn_0018ba20(cpu);
    }
L_0013af70:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013af74:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013af78u)) return;
    }
}

/* _ZN9AniMgr_v4D2Ev @ 0013af78 (arm) */
void fn_0013af78(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013af78:;
    {
        cpu->r[3] = rd32(0x0013af80u + + 0xb0u);
    }
L_0013af7c:;
    {
        cpu->r[2] = rd32(0x0013af84u + + 0xb0u);
    }
L_0013af80:;
    {
        cpu->r[3] = add_flags(cpu, 0x0013af88u, cpu->r[3], 0, 0);
    }
L_0013af84:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0013af88:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0013af8c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x20u);
    }
L_0013af90:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0013af94:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013af98:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0013af9c:;
    {
        wr32(cpu->r[5], cpu->r[2]);
    }
L_0013afa0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013afb0;
        }
    }
L_0013afa4:;
    {
        cpu->r[14] = 0x0013afa8u; fn_0018ba60(cpu);
    }
L_0013afa8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013afac:;
    {
        wr32(cpu->r[5] + + 0x20u, cpu->r[3]);
    }
L_0013afb0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x1cu);
    }
L_0013afb4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0013afb8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013b018;
        }
    }
L_0013afbc:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x8u);
    }
L_0013afc0:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x4u);
    }
L_0013afc4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013afc8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013b008;
        }
    }
L_0013afcc:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0013afd0:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_0013afd4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_0013afd8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013afdc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013aff0;
        }
    }
L_0013afe0:;
    {
        cpu->r[14] = 0x0013afe4u; fn_0018ba60(cpu);
    }
L_0013afe4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x1cu);
    }
L_0013afe8:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x8u);
    }
L_0013afec:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[6]);
    }
L_0013aff0:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x4u);
    }
L_0013aff4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0013aff8:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_0013affc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0013afd4;
        }
    }
L_0013b000:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0013b004:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013b010;
        }
    }
L_0013b008:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_0013b00c:;
    {
        cpu->r[14] = 0x0013b010u; fn_0018ba60(cpu);
    }
L_0013b010:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013b014:;
    {
        wr32(cpu->r[5] + + 0x1cu, cpu->r[3]);
    }
L_0013b018:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013b01c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013b020:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[3]);
    }
L_0013b024:;
    {
        cpu->r[14] = 0x0013b028u; fn_0014101c(cpu);
    }
L_0013b028:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013b02c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        uint32_t t = v3;
        cpu->r[13] += 16u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013b030u)) return;
    }
}

/* _ZN9AniMgr_v4C1EP9AniObj_v4 @ 0013b038 (arm) */
void fn_0013b038(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013b038:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0013b03c:;
    {
        cpu->r[4] = rd32(0x0013b044u + + 0x90u);
    }
L_0013b040:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0013b044:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_0013b048:;
    {
        cpu->r[14] = 0x0013b04cu; fn_00140fc4(cpu);
    }
L_0013b04c:;
    {
        cpu->r[3] = rd32(0x0013b054u + + 0x84u);
    }
L_0013b050:;
    {
        cpu->r[4] = add_flags(cpu, 0x0013b058u, cpu->r[4], 0, 0);
    }
L_0013b054:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0013b05cu + + 0x70u);
    }
L_0013b058:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0013b05c:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013b060:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0013b064:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013b068:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013b06c:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013b070:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0013b074:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x40u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013b078:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0013b07c:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x44u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013b080:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013b084:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x48u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013b088:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x4cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013b08c:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x50u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013b090:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x54u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013b094:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013b098:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013b09c:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[6]);
    }
L_0013b0a0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0013b0a8u + + 0x28u);
    }
L_0013b0a4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013b0a8:;
    {
        wr32(cpu->r[5] + + 0xd8u, cpu->r[3]);
    }
L_0013b0ac:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013b0b0:;
    {
        wr32(cpu->r[5] + + 0x18u, cpu->r[3]);
    }
L_0013b0b4:;
    {
        wr32(cpu->r[5] + + 0x1cu, cpu->r[3]);
    }
L_0013b0b8:;
    {
        wr32(cpu->r[5] + + 0x20u, cpu->r[3]);
    }
L_0013b0bc:;
    {
        wr8(cpu->r[5] + + 0xe0u, cpu->r[2]);
    }
L_0013b0c0:;
    {
        wr32(cpu->r[5] + + 0x2cu, cpu->r[3]);
    }
L_0013b0c4:;
    {
        wr32(cpu->r[5] + + 0xdcu, cpu->r[3]);
    }
L_0013b0c8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        uint32_t t = v3;
        cpu->r[13] += 16u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013b0ccu)) return;
    }
}

/* _ZN9AniMgr_v4C2EP9AniObj_v4 @ 0013b0dc (arm) */
void fn_0013b0dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013b0dc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0013b0e0:;
    {
        cpu->r[4] = rd32(0x0013b0e8u + + 0x90u);
    }
L_0013b0e4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0013b0e8:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_0013b0ec:;
    {
        cpu->r[14] = 0x0013b0f0u; fn_00140fc4(cpu);
    }
L_0013b0f0:;
    {
        cpu->r[3] = rd32(0x0013b0f8u + + 0x84u);
    }
L_0013b0f4:;
    {
        cpu->r[4] = add_flags(cpu, 0x0013b0fcu, cpu->r[4], 0, 0);
    }
L_0013b0f8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0013b100u + + 0x70u);
    }
L_0013b0fc:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0013b100:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013b104:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0013b108:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013b10c:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013b110:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013b114:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0013b118:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x40u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013b11c:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0013b120:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x44u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013b124:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013b128:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x48u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013b12c:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x4cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013b130:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x50u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013b134:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x54u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013b138:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013b13c:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013b140:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[6]);
    }
L_0013b144:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0013b14cu + + 0x28u);
    }
L_0013b148:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013b14c:;
    {
        wr32(cpu->r[5] + + 0xd8u, cpu->r[3]);
    }
L_0013b150:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013b154:;
    {
        wr32(cpu->r[5] + + 0x18u, cpu->r[3]);
    }
L_0013b158:;
    {
        wr32(cpu->r[5] + + 0x1cu, cpu->r[3]);
    }
L_0013b15c:;
    {
        wr32(cpu->r[5] + + 0x20u, cpu->r[3]);
    }
L_0013b160:;
    {
        wr8(cpu->r[5] + + 0xe0u, cpu->r[2]);
    }
L_0013b164:;
    {
        wr32(cpu->r[5] + + 0x2cu, cpu->r[3]);
    }
L_0013b168:;
    {
        wr32(cpu->r[5] + + 0xdcu, cpu->r[3]);
    }
L_0013b16c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        uint32_t t = v3;
        cpu->r[13] += 16u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013b170u)) return;
    }
}

/* _ZN9AniObj_v416renderMeshGroupsEiPPP7TexturePh @ 0013b180 (arm) */
void fn_0013b180(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013b180:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x20u);
    }
L_0013b184:;
    {
        cpu->r[12] = 0x0000005cu;
    }
L_0013b188:;
    {
        uint32_t v = cpu->r[12] * cpu->r[1] + cpu->r[0]; cpu->r[0] = v;
    }
L_0013b18c:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_0013b190:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_0013b194:;
    {
        return fn_001393c8(cpu);
    }
}

/* _ZN9AniObj_v410renderMeshEiPPP7Texturej @ 0013b198 (arm) */
void fn_0013b198(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013b198:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x20u);
    }
L_0013b19c:;
    {
        cpu->r[12] = 0x0000005cu;
    }
L_0013b1a0:;
    {
        uint32_t v = cpu->r[12] * cpu->r[1] + cpu->r[0]; cpu->r[0] = v;
    }
L_0013b1a4:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_0013b1a8:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_0013b1ac:;
    {
        return fn_0013e6ec(cpu);
    }
}

/* _ZN9AniObj_v414LoadAnimationsEP8LZMAFile @ 0013b1b0 (arm) */
void fn_0013b1b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013b1b0:;
    {
        cpu->r[13] -= 28u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[10]);
        wr32(cpu->r[13] + 24u, cpu->r[14]);
    }
L_0013b1b4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0013b1b8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0013b1bc:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_0013b1c0:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0013b1c4:;
    {
        cpu->r[14] = 0x0013b1c8u; fn_000fc650(cpu);
    }
L_0013b1c8:;
    {
        cpu->r[10] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_0013b1cc:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[10]);
    }
L_0013b1d0:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0013b1d4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013b2a8;
        }
    }
L_0013b1d8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[10], shifter(cpu->r[10], 2, 1u, &shc), 0, 0);
    }
L_0013b1dc:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 4u, &shc); cpu->r[0] = v;
    }
L_0013b1e0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_0013b1e4:;
    {
        cpu->r[14] = 0x0013b1e8u; imp__Znaj(cpu); /* _Znaj */
    }
L_0013b1e8:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0013b1ec:;
    {
        cpu->r[3] = 0x00000030u;
    }
L_0013b1f0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_0013b1f4:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[3]);
        wr32(ea + 4u, cpu->r[10]);
    }
L_0013b1f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013b21c;
        }
    }
L_0013b1fc:;
    {
        cpu->r[7] = cpu->r[8];
    }
L_0013b200:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0013b204:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0013b208:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0013b20c:;
    {
        cpu->r[14] = 0x0013b210u; fn_00140224(cpu);
    }
L_0013b210:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[6], 1, 1);
    }
L_0013b214:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000030u, 0, 0);
    }
L_0013b218:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013b204;
        }
    }
L_0013b21c:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0013b220:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[8]);
    }
L_0013b224:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_0013b228:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013b298;
        }
    }
L_0013b22c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_0013b230:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013b234:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013b2a0;
        }
    }
L_0013b238:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0013b23c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4cu);
    }
L_0013b240:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_0013b244:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0013b248:;
    {
        goto L_0013b270;
    }
L_0013b24c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x48u);
    }
L_0013b250:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8u);
    }
L_0013b254:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
    }
L_0013b258:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0013b25c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 1);
    }
L_0013b260:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000030u, 0, 0);
    }
L_0013b264:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x24u);
    }
L_0013b268:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
    }
L_0013b26c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013b2a0;
        }
    }
L_0013b270:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[6], 0, 0);
    }
L_0013b274:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
    }
L_0013b278:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0013b27c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0013b280:;
    {
        wr32(cpu->r[8] + + 0x24u, cpu->r[3]);
    }
L_0013b284:;
    {
        cpu->r[14] = 0x0013b288u; fn_001404e8(cpu);
    }
L_0013b288:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013b28c:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[0]);
    }
L_0013b290:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0013b24c;
        }
    }
L_0013b294:;
    {
        cpu->r[0] = (~0x00000001u);
    }
L_0013b298:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0013b29c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        uint32_t v6 = rd32(cpu->r[13] + 24u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        cpu->r[10] = v5;
        uint32_t t = v6;
        cpu->r[13] += 28u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013b2a0u)) return;
    }
L_0013b2a0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0013b2a4:;
    {
        goto L_0013b298;
    }
L_0013b2a8:;
    {
        cpu->r[1] = rd32(0x0013b2b0u + + 0x34u);
    }
L_0013b2ac:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0013b2b0:;
    {
        cpu->r[12] = rd32(0x0013b2b8u + + 0x30u);
    }
L_0013b2b4:;
    {
        cpu->r[14] = 0x000002a3u;
    }
L_0013b2b8:;
    {
        cpu->r[2] = rd32(0x0013b2c0u + + 0x2cu);
    }
L_0013b2bc:;
    {
        cpu->r[1] = add_flags(cpu, 0x0013b2c4u, cpu->r[1], 0, 0);
    }
L_0013b2c0:;
    {
        cpu->r[3] = rd32(0x0013b2c8u + + 0x28u);
    }
L_0013b2c4:;
    {
        cpu->r[12] = add_flags(cpu, 0x0013b2ccu, cpu->r[12], 0, 0);
    }
L_0013b2c8:;
    {
        cpu->r[2] = add_flags(cpu, 0x0013b2d0u, cpu->r[2], 0, 0);
    }
L_0013b2cc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000024u, 0, 0);
    }
L_0013b2d0:;
    {
        cpu->r[3] = add_flags(cpu, 0x0013b2d8u, cpu->r[3], 0, 0);
    }
L_0013b2d4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0013b2d8:;
    {
        cpu->r[14] = 0x0013b2dcu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0013b2dc:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x8u);
    }
L_0013b2e0:;
    {
        goto L_0013b1d8;
    }
}

/* _ZN9AniObj_v415LoadAnimatablesEP8LZMAFile @ 0013b2f4 (arm) */
void fn_0013b2f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013b2f4:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0013b2f8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0013b2fc:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_0013b300:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_0013b304:;
    {
        cpu->r[14] = 0x0013b308u; fn_000fc650(cpu);
    }
L_0013b308:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0013b30c:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_0013b310:;
    {
        wr16(cpu->r[4] + + 0xb0u, cpu->r[0]);
    }
L_0013b314:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0013b318:;
    {
        cpu->r[14] = 0x0013b31cu; fn_000fc650(cpu);
    }
L_0013b31c:;
    {
        wr16(cpu->r[4] + + 0xb2u, cpu->r[0]);
    }
L_0013b320:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0013b324:;
    {
        cpu->r[14] = 0x0013b328u; fn_000fc650(cpu);
    }
L_0013b328:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], cpu->r[6], 0, 0);
    }
L_0013b32c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000002u, 0, 0);
    }
L_0013b330:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000010u, 1, 1);
    }
L_0013b334:;
    {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_0013b338:;
    {
        wr16(cpu->r[3] + + 0xb4u, cpu->r[0]);
    }
L_0013b33c:;
    {
        cpu->r[7] = cpu->r[7] + (uint32_t)((int16_t)cpu->r[0]);
    }
L_0013b340:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013b320;
        }
    }
L_0013b344:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0013b348:;
    {
        cpu->r[14] = 0x0013b34cu; fn_000fc650(cpu);
    }
L_0013b34c:;
    {
        wr16(cpu->r[4] + + 0xc4u, cpu->r[0]);
    }
L_0013b350:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0013b354:;
    {
        cpu->r[14] = 0x0013b358u; fn_000fc650(cpu);
    }
L_0013b358:;
    {
        cpu->r[5] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0xb2u);
    }
L_0013b35c:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0xb0u);
    }
L_0013b360:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0xc4u);
    }
L_0013b364:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_0013b368:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_0013b36c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[5], cpu->r[7], 0, 0);
    }
L_0013b370:;
    {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_0013b374:;
    {
        wr16(cpu->r[4] + + 0xc6u, cpu->r[0]);
    }
L_0013b378:;
    {
        cpu->r[5] = cpu->r[7] + (uint32_t)((int16_t)cpu->r[0]);
    }
L_0013b37c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0013b380:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013b38c;
        }
    }
L_0013b384:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0013b388:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        uint32_t t = v5;
        cpu->r[13] += 24u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013b38cu)) return;
    }
L_0013b38c:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[6] = v;
    }
L_0013b390:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0013b394:;
    {
        cpu->r[14] = 0x0013b398u; imp__Znaj(cpu); /* _Znaj */
    }
L_0013b398:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013b39c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0013b3a0:;
    {
        wr32(cpu->r[4] + + 0xf8u, cpu->r[0]);
    }
L_0013b3a4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_0013b3a8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        uint32_t t = v5;
        cpu->r[13] += 24u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013b3acu)) return;
        }
    }
L_0013b3ac:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0013b3b0:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0013b3b4:;
    {
        cpu->r[14] = 0x0013b3b8u; fn_000fc5f4(cpu);
    }
L_0013b3b8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0013b3bc:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = rd32(cpu->r[4] + + 0xf8u);
        }
    }
L_0013b3c0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013b3f8;
        }
    }
L_0013b3c4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xf8u);
    }
L_0013b3c8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013b3cc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x54u);
    }
L_0013b3d0:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_0013b3d4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0013b3d8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0013b3dc:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[2] + + 0x2u);
    }
L_0013b3e0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_0013b3e4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
        }
    }
L_0013b3e8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = cpu->r[12];
        }
    }
L_0013b3ec:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0013b3f0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013b3d4;
        }
    }
L_0013b3f4:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[0]);
    }
L_0013b3f8:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0xb0u);
    }
L_0013b3fc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x000000b4u, 0, 0);
    }
L_0013b400:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013b404:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013b408:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0xc8u, cpu->r[1]);
        }
    }
L_0013b40c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_0013b410:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0xb2u);
    }
L_0013b414:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013b418:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0xccu, cpu->r[1]);
        }
    }
L_0013b41c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_0013b420:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013b424:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[2]);
    }
L_0013b428:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0013b42c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_0013b430:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0013b434:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0xd0u, cpu->r[1]);
        }
    }
L_0013b438:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
        }
    }
L_0013b43c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 1);
    }
L_0013b440:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_0013b444:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013b424;
        }
    }
L_0013b448:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0xc4u);
    }
L_0013b44c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013b450:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0xf0u, cpu->r[1]);
        }
    }
L_0013b454:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_0013b458:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0xc6u);
    }
L_0013b45c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013b460:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0xf4u, cpu->r[1]);
        }
    }
L_0013b464:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0013b468:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        uint32_t t = v5;
        cpu->r[13] += 24u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013b46cu)) return;
        }
    }
L_0013b46c:;
    {
        goto L_0013b384;
    }
}

/* _ZN9AniObj_v415LoadGeomBuffersEP8LZMAFile @ 0013b470 (arm) */
void fn_0013b470(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013b470:;
    {
        cpu->r[13] -= 32u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[9]);
        wr32(cpu->r[13] + 24u, cpu->r[10]);
        wr32(cpu->r[13] + 28u, cpu->r[14]);
    }
L_0013b474:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0013b478:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_0013b47c:;
    {
        cpu->r[10] = cpu->r[1];
    }
L_0013b480:;
    {
        cpu->r[14] = 0x0013b484u; fn_000fc650(cpu);
    }
L_0013b484:;
    {
        cpu->r[4] = 0x00000003u;
    }
L_0013b488:;
    {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_0013b48c:;
    {
        wr16(cpu->r[7] + + 0x60u, cpu->r[0]);
    }
L_0013b490:;
    {
        cpu->r[0] = (uint32_t)((int32_t)(int16_t)(cpu->r[0] & 0xffff) * (int32_t)(int16_t)(cpu->r[4] & 0xffff));
    }
L_0013b494:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[5] = v;
    }
L_0013b498:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013b49c:;
    {
        cpu->r[14] = 0x0013b4a0u; imp__Znaj(cpu); /* _Znaj */
    }
L_0013b4a0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013b4a4:;
    {
        wr32(cpu->r[7] + + 0x64u, cpu->r[0]);
    }
L_0013b4a8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_0013b4ac:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        uint32_t v6 = rd32(cpu->r[13] + 24u);
        uint32_t v7 = rd32(cpu->r[13] + 28u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        cpu->r[9] = v5;
        cpu->r[10] = v6;
        uint32_t t = v7;
        cpu->r[13] += 32u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013b4b0u)) return;
        }
    }
L_0013b4b0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0013b4b4:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0013b4b8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0013b4bc:;
    {
        cpu->r[14] = 0x0013b4c0u; fn_000fc5f4(cpu);
    }
L_0013b4c0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0013b4c4:;
    {
        cpu->r[14] = 0x0013b4c8u; fn_000fc650(cpu);
    }
L_0013b4c8:;
    {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_0013b4cc:;
    {
        wr16(cpu->r[7] + + 0x68u, cpu->r[0]);
    }
L_0013b4d0:;
    {
        cpu->r[4] = (uint32_t)((int32_t)(int16_t)(cpu->r[0] & 0xffff) * (int32_t)(int16_t)(cpu->r[4] & 0xffff));
    }
L_0013b4d4:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0013b4d8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013b5dc;
        }
    }
L_0013b4dc:;
    {
        cpu->r[6] = cpu->r[7];
    }
L_0013b4e0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[7], 0x00000010u, 0, 0);
    }
L_0013b4e4:;
    {
        cpu->r[4] = cpu->r[7];
    }
L_0013b4e8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013b4ec:;
    {
        wr32(cpu->r[7] + + 0x5cu, cpu->r[3]);
    }
L_0013b4f0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0013b4f4:;
    {
        cpu->r[14] = 0x0013b4f8u; fn_000fc650(cpu);
    }
L_0013b4f8:;
    {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_0013b4fc:;
    {
        wr16(cpu->r[4] + + 0x70u, cpu->r[0]);
    }
L_0013b500:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013b504:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000002u, 0, 0);
    }
L_0013b508:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[7] + + 0x5cu);
        }
    }
L_0013b50c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_0013b510:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[7] + + 0x5cu, cpu->r[3]);
        }
    }
L_0013b514:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 1);
    }
L_0013b518:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013b4f0;
        }
    }
L_0013b51c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x5cu);
    }
L_0013b520:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013b524:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013b578;
        }
    }
L_0013b528:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0013b52c:;
    {
        cpu->r[5] = cpu->r[7];
    }
L_0013b530:;
    {
        cpu->r[8] = cpu->r[4];
    }
L_0013b534:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 1);
    }
L_0013b538:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0013b53c:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x70u);
    }
L_0013b540:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013b5ac;
        }
    }
L_0013b544:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 3u, &shc); cpu->r[1] = v;
    }
L_0013b548:;
    {
        cpu->r[14] = 0x0013b54cu; fn_000fc5ec(cpu);
    }
L_0013b54c:;
    {
        wr32(cpu->r[6] + + 0x80u, cpu->r[8]);
    }
L_0013b550:;
    {
        wr16(cpu->r[5] + + 0x70u, cpu->r[8]);
    }
L_0013b554:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x5cu);
    }
L_0013b558:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0013b55c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000002u, 0, 0);
    }
L_0013b560:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_0013b564:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_0013b568:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0013b534;
        }
    }
L_0013b56c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0013b570:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000002u;
        }
    }
L_0013b574:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[7] + + 0x5cu, cpu->r[3]);
        }
    }
L_0013b578:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0013b57c:;
    {
        cpu->r[14] = 0x0013b580u; fn_000fc650(cpu);
    }
L_0013b580:;
    {
        wr16(cpu->r[7] + + 0xa0u, cpu->r[0]);
    }
L_0013b584:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0013b588:;
    {
        cpu->r[14] = 0x0013b58cu; fn_000fc650(cpu);
    }
L_0013b58c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0xa0u);
    }
L_0013b590:;
    {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_0013b594:;
    {
        wr16(cpu->r[7] + + 0xa8u, cpu->r[0]);
    }
L_0013b598:;
    {
        cpu->r[3] = cpu->r[3] + (uint32_t)((int16_t)cpu->r[0]);
    }
L_0013b59c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 1);
    }
L_0013b5a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013b608;
        }
    }
L_0013b5a4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0013b5a8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        uint32_t v6 = rd32(cpu->r[13] + 24u);
        uint32_t v7 = rd32(cpu->r[13] + 28u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        cpu->r[9] = v5;
        cpu->r[10] = v6;
        uint32_t t = v7;
        cpu->r[13] += 32u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013b5acu)) return;
    }
L_0013b5ac:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 3u, &shc); cpu->r[9] = v;
    }
L_0013b5b0:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0013b5b4:;
    {
        cpu->r[14] = 0x0013b5b8u; imp__Znaj(cpu); /* _Znaj */
    }
L_0013b5b8:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_0013b5bc:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0013b5c0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0013b5c4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013b5c8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0013b5cc:;
    {
        wr32(cpu->r[6] + + 0x80u, cpu->r[3]);
    }
L_0013b5d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013b660;
        }
    }
L_0013b5d4:;
    {
        cpu->r[14] = 0x0013b5d8u; fn_000fc5f4(cpu);
    }
L_0013b5d8:;
    {
        goto L_0013b554;
    }
L_0013b5dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013b5e0:;
    {
        cpu->r[14] = 0x0013b5e4u; imp__Znaj(cpu); /* _Znaj */
    }
L_0013b5e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013b5e8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0013b5ec:;
    {
        wr32(cpu->r[7] + + 0x6cu, cpu->r[0]);
    }
L_0013b5f0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000001u);
        }
    }
L_0013b5f4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        uint32_t v6 = rd32(cpu->r[13] + 24u);
        uint32_t v7 = rd32(cpu->r[13] + 28u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        cpu->r[9] = v5;
        cpu->r[10] = v6;
        uint32_t t = v7;
        cpu->r[13] += 32u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013b5f8u)) return;
        }
    }
L_0013b5f8:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0013b5fc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0013b600:;
    {
        cpu->r[14] = 0x0013b604u; fn_000fc5f4(cpu);
    }
L_0013b604:;
    {
        goto L_0013b4dc;
    }
L_0013b608:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[4] = v;
    }
L_0013b60c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013b610:;
    {
        cpu->r[14] = 0x0013b614u; imp__Znaj(cpu); /* _Znaj */
    }
L_0013b614:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013b618:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0013b61c:;
    {
        wr32(cpu->r[7] + + 0xa4u, cpu->r[0]);
    }
L_0013b620:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000003u);
        }
    }
L_0013b624:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        uint32_t v6 = rd32(cpu->r[13] + 24u);
        uint32_t v7 = rd32(cpu->r[13] + 28u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        cpu->r[9] = v5;
        cpu->r[10] = v6;
        uint32_t t = v7;
        cpu->r[13] += 32u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013b628u)) return;
        }
    }
L_0013b628:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0013b62c:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0013b630:;
    {
        cpu->r[14] = 0x0013b634u; fn_000fc5f4(cpu);
    }
L_0013b634:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0xa8u);
    }
L_0013b638:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013b63c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013b5a4;
        }
    }
L_0013b640:;
    {
        cpu->r[1] = rd16(cpu->r[7] + + 0xa0u);
    }
L_0013b644:;
    {
        cpu->r[3] = 0x0000000cu;
    }
L_0013b648:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0xa4u);
    }
L_0013b64c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0013b650:;
    {
        cpu->r[3] = (uint32_t)((int32_t)(int16_t)(cpu->r[1] & 0xffff) * (int32_t)(int16_t)(cpu->r[3] & 0xffff));
    }
L_0013b654:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_0013b658:;
    {
        wr32(cpu->r[7] + + 0xacu, cpu->r[3]);
    }
L_0013b65c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        uint32_t v6 = rd32(cpu->r[13] + 24u);
        uint32_t v7 = rd32(cpu->r[13] + 28u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        cpu->r[9] = v5;
        cpu->r[10] = v6;
        uint32_t t = v7;
        cpu->r[13] += 32u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013b660u)) return;
    }
L_0013b660:;
    {
        cpu->r[0] = (~0x00000002u);
    }
L_0013b664:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        uint32_t v6 = rd32(cpu->r[13] + 24u);
        uint32_t v7 = rd32(cpu->r[13] + 28u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        cpu->r[9] = v5;
        cpu->r[10] = v6;
        uint32_t t = v7;
        cpu->r[13] += 32u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013b668u)) return;
    }
}

/* _ZN9AniObj_v415LoadLocalPivotsEP8LZMAFile @ 0013b668 (arm) */
void fn_0013b668(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013b668:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_0013b66c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0013b670:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013b674:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0013b678:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_0013b67c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013b6c4;
        }
    }
L_0013b680:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0013b684:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_0013b688:;
    {
        goto L_0013b698;
    }
L_0013b68c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_0013b690:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_0013b694:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013b6c4;
        }
    }
L_0013b698:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x20u);
    }
L_0013b69c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0013b6a0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x2cu);
    }
L_0013b6a4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0013b6a8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[4], 0, 0);
    }
L_0013b6ac:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000005cu, 0, 0);
    }
L_0013b6b0:;
    {
        cpu->r[14] = 0x0013b6b4u; fn_0013943c(cpu);
    }
L_0013b6b4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013b6b8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0013b68c;
        }
    }
L_0013b6bc:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_0013b6c0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        uint32_t t = v5;
        cpu->r[13] += 24u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013b6c4u)) return;
    }
L_0013b6c4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0013b6c8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        uint32_t t = v5;
        cpu->r[13] += 24u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013b6ccu)) return;
    }
}

/* _ZN7gxPCH__4loadEP8LZMAFilei @ 0013b6cc (arm) */
void fn_0013b6cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013b6cc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000064u, 1, 1);
    }
L_0013b6d0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0013b6d4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0013b6d8:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0013b6dc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0013b700;
        }
    }
L_0013b6e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013b6e4:;
    {
        cpu->r[14] = 0x0013b6e8u; fn_000fc650(cpu);
    }
L_0013b6e8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0013b6ec:;
    {
        cpu->r[2] = 0x0000001cu;
    }
L_0013b6f0:;
    {
        uint32_t wb_tmp = cpu->r[1] + 0x00000004u;
        wr16(cpu->r[1], cpu->r[0]);
        cpu->r[1] = wb_tmp;
    }
L_0013b6f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013b6f8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[14] = v3;
        cpu->r[13] += 16u;
    }
L_0013b6fc:;
    {
        return fn_000fc5f4(cpu);
    }
L_0013b700:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_0013b704:;
    {
        cpu->r[14] = 0x0013b708u; fn_000fc678(cpu);
    }
L_0013b708:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_0013b70c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013b710:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013b6e0;
        }
    }
L_0013b714:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_0013b718:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0013b71c:;
    {
        cpu->r[14] = 0x0013b720u; imp__Znaj(cpu); /* _Znaj */
    }
L_0013b720:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0013b724:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0013b728:;
    {
        wr32(cpu->r[5] + + 0x20u, cpu->r[0]);
    }
L_0013b72c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013b730:;
    {
        cpu->r[14] = 0x0013b734u; fn_000fc5f4(cpu);
    }
L_0013b734:;
    {
        goto L_0013b6e0;
    }
}

/* _ZN9AniObj_v416LoadPlaceholdersEP8LZMAFile @ 0013b738 (arm) */
void fn_0013b738(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013b738:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0013b73c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0013b740:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_0013b744:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0013b748:;
    {
        cpu->r[14] = 0x0013b74cu; fn_000fc678(cpu);
    }
L_0013b74c:;
    {
        cpu->r[7] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_0013b750:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[7]);
    }
L_0013b754:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0013b758:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013b764;
        }
    }
L_0013b75c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0013b760:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        uint32_t t = v5;
        cpu->r[13] += 24u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013b764u)) return;
    }
L_0013b764:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 3u, &shc), 0, 0);
    }
L_0013b768:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0013b76c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_0013b770:;
    {
        cpu->r[14] = 0x0013b774u; imp__Znaj(cpu); /* _Znaj */
    }
L_0013b774:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013b778:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_0013b77c:;
    {
        cpu->r[12] = 0x00000024u;
    }
L_0013b780:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0013b784:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_0013b788:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[7]);
    }
L_0013b78c:;
    {
        wr32(cpu->r[0], cpu->r[12]);
    }
L_0013b790:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0013b794:;
    {
        wr32(cpu->r[2] + + 0x28u, cpu->r[6]);
    }
L_0013b798:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_0013b79c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000024u, 0, 0);
    }
L_0013b7a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013b790;
        }
    }
L_0013b7a4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0013b7a8:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[1]);
    }
L_0013b7ac:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_0013b7b0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        uint32_t t = v5;
        cpu->r[13] += 24u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013b7b4u)) return;
        }
    }
L_0013b7b4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x38u);
    }
L_0013b7b8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013b7bc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013b75c;
        }
    }
L_0013b7c0:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_0013b7c4:;
    {
        goto L_0013b7cc;
    }
L_0013b7c8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x3cu);
    }
L_0013b7cc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], cpu->r[6], 0, 0);
    }
L_0013b7d0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x24u);
    }
L_0013b7d4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0013b7d8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0013b7dc:;
    {
        cpu->r[14] = 0x0013b7e0u; fn_0013b6cc(cpu);
    }
L_0013b7e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x38u);
    }
L_0013b7e4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000024u, 0, 0);
    }
L_0013b7e8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_0013b7ec:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0013b7c8;
        }
    }
L_0013b7f0:;
    {
        goto L_0013b75c;
    }
}

/* _ZN9AniObj_v416LoadGlobalPivotsEP8LZMAFile @ 0013b7f4 (arm) */
void fn_0013b7f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013b7f4:;
    {
        cpu->r[13] -= 32u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[9]);
        wr32(cpu->r[13] + 24u, cpu->r[10]);
        wr32(cpu->r[13] + 28u, cpu->r[14]);
    }
L_0013b7f8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0013b7fc:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_0013b800:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0013b804:;
    {
        cpu->r[14] = 0x0013b808u; fn_000fc678(cpu);
    }
L_0013b808:;
    {
        cpu->r[6] = 0x0000004cu;
    }
L_0013b80c:;
    {
        cpu->r[8] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_0013b810:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[8]);
    }
L_0013b814:;
    {
        uint32_t v = cpu->r[6] * cpu->r[8]; cpu->r[0] = v;
    }
L_0013b818:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_0013b81c:;
    {
        cpu->r[14] = 0x0013b820u; imp__Znaj(cpu); /* _Znaj */
    }
L_0013b820:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0013b824:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_0013b828:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[6]);
        wr32(ea + 4u, cpu->r[8]);
    }
L_0013b82c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013b850;
        }
    }
L_0013b830:;
    {
        cpu->r[7] = cpu->r[10];
    }
L_0013b834:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0013b838:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0013b83c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0013b840:;
    {
        cpu->r[14] = 0x0013b844u; fn_00140dbc(cpu);
    }
L_0013b844:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[8], 1, 1);
    }
L_0013b848:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000004cu, 0, 0);
    }
L_0013b84c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013b838;
        }
    }
L_0013b850:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0013b854:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[10]);
    }
L_0013b858:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_0013b85c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        uint32_t v6 = rd32(cpu->r[13] + 24u);
        uint32_t v7 = rd32(cpu->r[13] + 28u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        cpu->r[9] = v5;
        cpu->r[10] = v6;
        uint32_t t = v7;
        cpu->r[13] += 32u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013b860u)) return;
        }
    }
L_0013b860:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x28u);
    }
L_0013b864:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 5u, &shc); cpu->r[0] = v;
    }
L_0013b868:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_0013b86c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0013b870:;
    {
        cpu->r[14] = 0x0013b874u; imp__Znaj(cpu); /* _Znaj */
    }
L_0013b874:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013b878:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[0]);
    }
L_0013b87c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000001u);
        }
    }
L_0013b880:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        uint32_t v6 = rd32(cpu->r[13] + 24u);
        uint32_t v7 = rd32(cpu->r[13] + 28u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        cpu->r[9] = v5;
        cpu->r[10] = v6;
        uint32_t t = v7;
        cpu->r[13] += 32u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013b884u)) return;
        }
    }
L_0013b884:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x28u);
    }
L_0013b888:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0013b88c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013b904;
        }
    }
L_0013b890:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0013b894:;
    {
        cpu->r[6] = cpu->r[7];
    }
L_0013b898:;
    {
        goto L_0013b8d4;
    }
L_0013b89c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013b8a0:;
    {
        cpu->r[14] = 0x0013b8a4u; fn_000fc678(cpu);
    }
L_0013b8a4:;
    {
        cpu->r[8] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_0013b8a8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013b8ac:;
    {
        cpu->r[14] = 0x0013b8b0u; fn_000fc678(cpu);
    }
L_0013b8b0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x28u);
    }
L_0013b8b4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x2cu);
    }
L_0013b8b8:;
    {
        cpu->r[1] = (uint32_t)((int8_t)cpu->r[8]);
    }
L_0013b8bc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[6], 1, 1);
    }
L_0013b8c0:;
    {
        uint32_t wb_tmp = cpu->r[3] + cpu->r[7];
        wr16(cpu->r[3] + cpu->r[7], cpu->r[1]);
        cpu->r[3] = wb_tmp;
    }
L_0013b8c4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000004cu, 0, 0);
    }
L_0013b8c8:;
    {
        cpu->r[0] = (uint32_t)((int8_t)cpu->r[0]);
    }
L_0013b8cc:;
    {
        wr16(cpu->r[3] + + 0x2u, cpu->r[0]);
    }
L_0013b8d0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013b904;
        }
    }
L_0013b8d4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0013b8d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013b8dc:;
    {
        cpu->r[14] = 0x0013b8e4u;
    }
L_0013b8e0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0013b8e4u)) return;
    }
L_0013b8e4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0013b8e8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000065u, 1, 1);
    }
L_0013b8ec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013b89c;
        }
    }
L_0013b8f0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x2cu);
    }
L_0013b8f4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0013b8f8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[7], 0, 0);
    }
L_0013b8fc:;
    {
        cpu->r[14] = 0x0013b900u; fn_001404a4(cpu);
    }
L_0013b900:;
    {
        goto L_0013b89c;
    }
L_0013b904:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x54u);
    }
L_0013b908:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_0013b90c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0013b910:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0013b914:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[4] + + 0x54u, cpu->r[3]);
        }
    }
L_0013b918:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + + 0x54u, cpu->r[2]);
        }
    }
L_0013b91c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        uint32_t v6 = rd32(cpu->r[13] + 24u);
        uint32_t v7 = rd32(cpu->r[13] + 28u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        cpu->r[9] = v5;
        cpu->r[10] = v6;
        uint32_t t = v7;
        cpu->r[13] += 32u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013b920u)) return;
    }
}

/* _ZN9AniObj_v414LoadTopologiesEP8LZMAFile @ 0013b920 (arm) */
void fn_0013b920(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013b920:;
    {
        cpu->r[13] -= 32u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[9]);
        wr32(cpu->r[13] + 24u, cpu->r[10]);
        wr32(cpu->r[13] + 28u, cpu->r[14]);
    }
L_0013b924:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0013b928:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_0013b92c:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_0013b930:;
    {
        cpu->r[14] = 0x0013b934u; fn_000fc678(cpu);
    }
L_0013b934:;
    {
        cpu->r[10] = (uint32_t)((int8_t)cpu->r[0]);
    }
L_0013b938:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_0013b93c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 3u, &shc); cpu->r[0] = v;
    }
L_0013b940:;
    {
        cpu->r[14] = 0x0013b944u; imp__Znaj(cpu); /* _Znaj */
    }
L_0013b944:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013b948:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0013b94c:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[0]);
    }
L_0013b950:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_0013b954:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        uint32_t v6 = rd32(cpu->r[13] + 24u);
        uint32_t v7 = rd32(cpu->r[13] + 28u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        cpu->r[9] = v5;
        cpu->r[10] = v6;
        uint32_t t = v7;
        cpu->r[13] += 32u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013b958u)) return;
        }
    }
L_0013b958:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0013b95c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013b9a8;
        }
    }
L_0013b960:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0013b964:;
    {
        goto L_0013b96c;
    }
L_0013b968:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x58u);
    }
L_0013b96c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0013b970:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 3u, &shc); cpu->r[8] = v;
    }
L_0013b974:;
    {
        cpu->r[14] = 0x0013b978u; fn_000fc678(cpu);
    }
L_0013b978:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x58u);
    }
L_0013b97c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_0013b980:;
    {
        cpu->r[0] = (uint32_t)((int8_t)cpu->r[0]);
    }
L_0013b984:;
    {
        wr32(cpu->r[7] + shifter(cpu->r[5], 2, 3u, &shc), cpu->r[0]);
    }
L_0013b988:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0013b98c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0013b990:;
    {
        cpu->r[14] = 0x0013b994u; fn_000fc678(cpu);
    }
L_0013b994:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[5], 1, 1);
    }
L_0013b998:;
    {
        cpu->r[0] = (uint32_t)((int8_t)cpu->r[0]);
    }
L_0013b99c:;
    {
        wr32(cpu->r[8] + + 0x4u, cpu->r[0]);
    }
L_0013b9a0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0013b968;
        }
    }
L_0013b9a4:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x58u);
    }
L_0013b9a8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_0013b9ac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], shifter(cpu->r[10], 2, 3u, &shc), 0, 0);
    }
L_0013b9b0:;
    {
        cpu->r[1] = 0x000000ffu;
    }
L_0013b9b4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0013b9b8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0013b9bc:;
    {
        wr32(cpu->r[7] + shifter(cpu->r[10], 2, 3u, &shc), cpu->r[1]);
    }
L_0013b9c0:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[5]);
    }
L_0013b9c4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013ba10;
        }
    }
L_0013b9c8:;
    {
        cpu->r[7] = cpu->r[5];
    }
L_0013b9cc:;
    {
        goto L_0013b9dc;
    }
L_0013b9d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_0013b9d4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_0013b9d8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013ba10;
        }
    }
L_0013b9dc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
    }
L_0013b9e0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0013b9e4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10u);
    }
L_0013b9e8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0013b9ec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_0013b9f0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000005cu, 0, 0);
    }
L_0013b9f4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0013b9f8:;
    {
        wr32(cpu->r[3] + + 0x18u, cpu->r[4]);
    }
L_0013b9fc:;
    {
        cpu->r[14] = 0x0013ba00u; fn_00139c1c(cpu);
    }
L_0013ba00:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013ba04:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0013b9d0;
        }
    }
L_0013ba08:;
    {
        cpu->r[0] = (~0x00000001u);
    }
L_0013ba0c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        uint32_t v6 = rd32(cpu->r[13] + 24u);
        uint32_t v7 = rd32(cpu->r[13] + 28u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        cpu->r[9] = v5;
        cpu->r[10] = v6;
        uint32_t t = v7;
        cpu->r[13] += 32u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013ba10u)) return;
    }
L_0013ba10:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0013ba14:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        uint32_t v6 = rd32(cpu->r[13] + 24u);
        uint32_t v7 = rd32(cpu->r[13] + 28u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        cpu->r[9] = v5;
        cpu->r[10] = v6;
        uint32_t t = v7;
        cpu->r[13] += 32u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013ba18u)) return;
    }
}

/* _ZN9AniObj_v44LoadEP8LZMAFilePttPssS3_sbit @ 0013ba18 (arm) */
void fn_0013ba18(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013ba18:;
    {
        cpu->r[13] -= 36u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[9]);
        wr32(cpu->r[13] + 24u, cpu->r[10]);
        wr32(cpu->r[13] + 28u, cpu->r[11]);
        wr32(cpu->r[13] + 32u, cpu->r[14]);
    }
L_0013ba1c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000001d4u, 1, 0);
    }
L_0013ba20:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000200u, 0, 0);
    }
L_0013ba24:;
    {
        cpu->r[5] = rd32(0x0013ba2cu + + 0x348u);
    }
L_0013ba28:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0013ba2c:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0013ba30:;
    {
        cpu->r[8] = rd16(cpu->r[3] + + 0x10u);
    }
L_0013ba34:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_0013ba38:;
    {
        cpu->r[5] = add_flags(cpu, 0x0013ba40u, cpu->r[5], 0, 0);
    }
L_0013ba3c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013ba40:;
    {
        cpu->r[14] = 0x0013ba44u; fn_000fc678(cpu);
    }
L_0013ba44:;
    {
        cpu->r[3] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_0013ba48:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013ba4c:;
    {
        wr32(cpu->r[10] + - 0x10u, cpu->r[3]);
    }
L_0013ba50:;
    {
        cpu->r[14] = 0x0013ba54u; fn_000fc678(cpu);
    }
L_0013ba54:;
    {
        cpu->r[3] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_0013ba58:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013ba5c:;
    {
        wr32(cpu->r[10] + - 0xcu, cpu->r[3]);
    }
L_0013ba60:;
    {
        cpu->r[14] = 0x0013ba64u; fn_000fc678(cpu);
    }
L_0013ba64:;
    {
        cpu->r[3] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_0013ba68:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013ba6c:;
    {
        wr32(cpu->r[10] + - 0x8u, cpu->r[3]);
    }
L_0013ba70:;
    {
        cpu->r[14] = 0x0013ba74u; fn_000fc678(cpu);
    }
L_0013ba74:;
    {
        wr8(cpu->r[10] + - 0x4u, cpu->r[0]);
    }
L_0013ba78:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000010u, 0, 0);
    }
L_0013ba7c:;
    {
        cpu->r[3] = rd32(cpu->r[10] + - 0x20u);
    }
L_0013ba80:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000ffu, 1, 1);
    }
L_0013ba84:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013ba3c;
        }
    }
L_0013ba88:;
    {
        cpu->r[3] = rd32(0x0013ba90u + + 0x2e8u);
    }
L_0013ba8c:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_0013ba90:;
    {
        cpu->r[7] = rd32(0x0013ba98u + + 0x2e4u);
    }
L_0013ba94:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0013ba98:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0013ba9c:;
    {
        cpu->r[14] = 0x0013baa0u; fn_0012f2c4(cpu);
    }
L_0013baa0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0013baa4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0013baa8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x490u);
    }
L_0013baac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013bab0:;
    {
        wr32(cpu->r[6] + + 0x10u, cpu->r[0]);
    }
L_0013bab4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013bac8;
        }
    }
L_0013bab8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0013babc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0013bac0:;
    {
        cpu->r[14] = 0x0013bac8u;
    }
L_0013bac4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0013bac8u)) return;
    }
L_0013bac8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0013bacc:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0013bad0:;
    {
        cpu->r[14] = 0x0013bad4u; fn_0013d838(cpu);
    }
L_0013bad4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013bad8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x0000000au);
        }
    }
L_0013badc:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0013bae8;
        }
    }
L_0013bae0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000001d4u, 0, 0);
    }
L_0013bae4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        uint32_t v6 = rd32(cpu->r[13] + 24u);
        uint32_t v7 = rd32(cpu->r[13] + 28u);
        uint32_t v8 = rd32(cpu->r[13] + 32u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        cpu->r[9] = v5;
        cpu->r[10] = v6;
        cpu->r[11] = v7;
        uint32_t t = v8;
        cpu->r[13] += 36u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013bae8u)) return;
    }
L_0013bae8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0013baec:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0013baf0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x490u);
    }
L_0013baf4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013baf8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013bb0c;
        }
    }
L_0013bafc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0013bb00:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0013bb04:;
    {
        cpu->r[14] = 0x0013bb0cu;
    }
L_0013bb08:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0013bb0cu)) return;
    }
L_0013bb0c:;
    {
        wr32(cpu->r[6] + + 0x14u, cpu->r[8]);
    }
L_0013bb10:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013bb14:;
    {
        cpu->r[14] = 0x0013bb18u; fn_000fc678(cpu);
    }
L_0013bb18:;
    {
        cpu->r[8] = 0x0000005cu;
    }
L_0013bb1c:;
    {
        cpu->r[9] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_0013bb20:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[9]);
    }
L_0013bb24:;
    {
        uint32_t v = cpu->r[8] * cpu->r[9]; cpu->r[0] = v;
    }
L_0013bb28:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_0013bb2c:;
    {
        cpu->r[14] = 0x0013bb30u; imp__Znaj(cpu); /* _Znaj */
    }
L_0013bb30:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_0013bb34:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_0013bb38:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[8]);
        wr32(ea + 4u, cpu->r[9]);
    }
L_0013bb3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013bb60;
        }
    }
L_0013bb40:;
    {
        cpu->r[10] = cpu->r[11];
    }
L_0013bb44:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_0013bb48:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0013bb4c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_0013bb50:;
    {
        cpu->r[14] = 0x0013bb54u; fn_00138ac4(cpu);
    }
L_0013bb54:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[8], 1, 1);
    }
L_0013bb58:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x0000005cu, 0, 0);
    }
L_0013bb5c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013bb48;
        }
    }
L_0013bb60:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_0013bb64:;
    {
        wr32(cpu->r[6] + + 0x20u, cpu->r[11]);
    }
L_0013bb68:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_0013bb6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013bae0;
        }
    }
L_0013bb70:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x4u);
    }
L_0013bb74:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 3u, &shc); cpu->r[0] = v;
    }
L_0013bb78:;
    {
        cpu->r[14] = 0x0013bb7cu; imp__Znaj(cpu); /* _Znaj */
    }
L_0013bb7c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013bb80:;
    {
        wr32(cpu->r[6] + + 0x34u, cpu->r[0]);
    }
L_0013bb84:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x0000006eu);
        }
    }
L_0013bb88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013bae0;
        }
    }
L_0013bb8c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0013bb90:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0013bb94:;
    {
        cpu->r[14] = 0x0013bb98u; fn_0013b920(cpu);
    }
L_0013bb98:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013bb9c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x00000001u);
        }
    }
L_0013bba0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0013bae0;
        }
    }
L_0013bba4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0013bba8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0013bbac:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x490u);
    }
L_0013bbb0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013bbb4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013bbc8;
        }
    }
L_0013bbb8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0013bbbc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0013bbc0:;
    {
        cpu->r[14] = 0x0013bbc8u;
    }
L_0013bbc4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0013bbc8u)) return;
    }
L_0013bbc8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0013bbcc:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0013bbd0:;
    {
        cpu->r[14] = 0x0013bbd4u; fn_0013b2f4(cpu);
    }
L_0013bbd4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013bbd8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x00000002u);
        }
    }
L_0013bbdc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0013bae0;
        }
    }
L_0013bbe0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0013bbe4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0013bbe8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x490u);
    }
L_0013bbec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013bbf0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013bc04;
        }
    }
L_0013bbf4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0013bbf8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0013bbfc:;
    {
        cpu->r[14] = 0x0013bc04u;
    }
L_0013bc00:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0013bc04u)) return;
    }
L_0013bc04:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0013bc08:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0013bc0c:;
    {
        cpu->r[14] = 0x0013bc10u; fn_0013b7f4(cpu);
    }
L_0013bc10:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013bc14:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x00000003u);
        }
    }
L_0013bc18:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0013bae0;
        }
    }
L_0013bc1c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0013bc20:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0013bc24:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x490u);
    }
L_0013bc28:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013bc2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013bc40;
        }
    }
L_0013bc30:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0013bc34:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0013bc38:;
    {
        cpu->r[14] = 0x0013bc40u;
    }
L_0013bc3c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0013bc40u)) return;
    }
L_0013bc40:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0013bc44:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0013bc48:;
    {
        cpu->r[14] = 0x0013bc4cu; fn_0013b738(cpu);
    }
L_0013bc4c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013bc50:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x00000028u);
        }
    }
L_0013bc54:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0013bae0;
        }
    }
L_0013bc58:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0013bc5c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0013bc60:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x490u);
    }
L_0013bc64:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013bc68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013bc7c;
        }
    }
L_0013bc6c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0013bc70:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0013bc74:;
    {
        cpu->r[14] = 0x0013bc7cu;
    }
L_0013bc78:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0013bc7cu)) return;
    }
L_0013bc7c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0013bc80:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0013bc84:;
    {
        cpu->r[14] = 0x0013bc88u; fn_0013b668(cpu);
    }
L_0013bc88:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013bc8c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x00000004u);
        }
    }
L_0013bc90:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0013bae0;
        }
    }
L_0013bc94:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0013bc98:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0013bc9c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x490u);
    }
L_0013bca0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013bca4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013bcb8;
        }
    }
L_0013bca8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0013bcac:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0013bcb0:;
    {
        cpu->r[14] = 0x0013bcb8u;
    }
L_0013bcb4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0013bcb8u)) return;
    }
L_0013bcb8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0013bcbc:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0013bcc0:;
    {
        cpu->r[14] = 0x0013bcc4u; fn_0013b470(cpu);
    }
L_0013bcc4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013bcc8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x00000005u);
        }
    }
L_0013bccc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0013bae0;
        }
    }
L_0013bcd0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0013bcd4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0013bcd8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x490u);
    }
L_0013bcdc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013bce0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013bcf4;
        }
    }
L_0013bce4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0013bce8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0013bcec:;
    {
        cpu->r[14] = 0x0013bcf4u;
    }
L_0013bcf0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0013bcf4u)) return;
    }
L_0013bcf4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0013bcf8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0013bcfc:;
    {
        cpu->r[14] = 0x0013bd00u; fn_0013b1b0(cpu);
    }
L_0013bd00:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013bd04:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x00000006u);
        }
    }
L_0013bd08:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0013bae0;
        }
    }
L_0013bd0c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0013bd10:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0013bd14:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x490u);
    }
L_0013bd18:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013bd1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013bd30;
        }
    }
L_0013bd20:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0013bd24:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0013bd28:;
    {
        cpu->r[14] = 0x0013bd30u;
    }
L_0013bd2c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0013bd30u)) return;
    }
L_0013bd30:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0013bd34:;
    {
        cpu->r[14] = 0x0013bd38u; fn_0013e758(cpu);
    }
L_0013bd38:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013bd3c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x00000007u);
        }
    }
L_0013bd40:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0013bae0;
        }
    }
L_0013bd44:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0013bd48:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0013bd4c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x490u);
    }
L_0013bd50:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013bd54:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_0013bd58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013bae0;
        }
    }
L_0013bd5c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0013bd60:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0013bd64:;
    {
        cpu->r[14] = 0x0013bd6cu;
    }
L_0013bd68:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0013bd6cu)) return;
    }
L_0013bd6c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0013bd70:;
    {
        goto L_0013bae0;
    }
}

/* _ZN9AniObj_v4C1Ei @ 0013bd80 (arm) */
void fn_0013bd80(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013bd80:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0013bd84:;
    {
        cpu->r[4] = rd32(0x0013bd8cu + + 0x184u);
    }
L_0013bd88:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0013bd8c:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_0013bd90:;
    {
        cpu->r[14] = 0x0013bd94u; fn_00140f34(cpu);
    }
L_0013bd94:;
    {
        cpu->r[3] = rd32(0x0013bd9cu + + 0x178u);
    }
L_0013bd98:;
    {
        cpu->r[4] = add_flags(cpu, 0x0013bda0u, cpu->r[4], 0, 0);
    }
L_0013bd9c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0013bda0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000015cu, 0, 0);
    }
L_0013bda4:;
    {
        wr32(cpu->r[5] + + 0x19cu, cpu->r[6]);
    }
L_0013bda8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0013bdac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0013bdb0:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0013bdb4:;
    {
        cpu->r[14] = 0x0013bdb8u; fn_001535e0(cpu);
    }
L_0013bdb8:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0013bdbc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0013bdc0:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0013bdc4:;
    {
        wr32(cpu->r[5] + + 0x24u, cpu->r[7]);
    }
L_0013bdc8:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_0013bdcc:;
    {
        wr32(cpu->r[5] + + 0x18u, cpu->r[6]);
    }
L_0013bdd0:;
    {
        wr32(cpu->r[5] + + 0x54u, cpu->r[0]);
    }
L_0013bdd4:;
    {
        wr32(cpu->r[5] + + 0x1cu, cpu->r[6]);
    }
L_0013bdd8:;
    {
        wr32(cpu->r[5] + + 0x20u, cpu->r[6]);
    }
L_0013bddc:;
    {
        wr32(cpu->r[5] + + 0x28u, cpu->r[6]);
    }
L_0013bde0:;
    {
        wr32(cpu->r[5] + + 0x2cu, cpu->r[6]);
    }
L_0013bde4:;
    {
        wr32(cpu->r[5] + + 0x48u, cpu->r[6]);
    }
L_0013bde8:;
    {
        wr32(cpu->r[5] + + 0x4cu, cpu->r[6]);
    }
L_0013bdec:;
    {
        wr32(cpu->r[5] + + 0x30u, cpu->r[6]);
    }
L_0013bdf0:;
    {
        wr32(cpu->r[5] + + 0x50u, cpu->r[6]);
    }
L_0013bdf4:;
    {
        wr32(cpu->r[5] + + 0x3cu, cpu->r[6]);
    }
L_0013bdf8:;
    {
        wr32(cpu->r[5] + + 0x38u, cpu->r[6]);
    }
L_0013bdfc:;
    {
        wr32(cpu->r[5] + + 0x44u, cpu->r[6]);
    }
L_0013be00:;
    {
        wr32(cpu->r[5] + + 0x40u, cpu->r[6]);
    }
L_0013be04:;
    {
        wr32(cpu->r[5] + + 0x58u, cpu->r[6]);
    }
L_0013be08:;
    {
        wr16(cpu->r[5] + + 0x60u, cpu->r[6]);
    }
L_0013be0c:;
    {
        wr32(cpu->r[5] + + 0x64u, cpu->r[6]);
    }
L_0013be10:;
    {
        wr16(cpu->r[5] + + 0x68u, cpu->r[6]);
    }
L_0013be14:;
    {
        wr32(cpu->r[5] + + 0x6cu, cpu->r[6]);
    }
L_0013be18:;
    {
        wr32(cpu->r[5] + + 0x70u, cpu->r[6]);
    }
L_0013be1c:;
    {
        wr32(cpu->r[5] + + 0x74u, cpu->r[6]);
    }
L_0013be20:;
    {
        wr32(cpu->r[5] + + 0x78u, cpu->r[6]);
    }
L_0013be24:;
    {
        wr32(cpu->r[5] + + 0x7cu, cpu->r[6]);
    }
L_0013be28:;
    {
        wr32(cpu->r[5] + + 0x80u, cpu->r[6]);
    }
L_0013be2c:;
    {
        wr32(cpu->r[5] + + 0x84u, cpu->r[6]);
    }
L_0013be30:;
    {
        wr32(cpu->r[5] + + 0x88u, cpu->r[6]);
    }
L_0013be34:;
    {
        wr32(cpu->r[5] + + 0x8cu, cpu->r[6]);
    }
L_0013be38:;
    {
        wr32(cpu->r[5] + + 0x90u, cpu->r[6]);
    }
L_0013be3c:;
    {
        wr32(cpu->r[5] + + 0x94u, cpu->r[6]);
    }
L_0013be40:;
    {
        wr32(cpu->r[5] + + 0x98u, cpu->r[6]);
    }
L_0013be44:;
    {
        wr32(cpu->r[5] + + 0x9cu, cpu->r[6]);
    }
L_0013be48:;
    {
        wr16(cpu->r[5] + + 0xa0u, cpu->r[6]);
    }
L_0013be4c:;
    {
        wr32(cpu->r[5] + + 0xa4u, cpu->r[6]);
    }
L_0013be50:;
    {
        wr8(cpu->r[5] + + 0x100u, cpu->r[6]);
    }
L_0013be54:;
    {
        wr16(cpu->r[5] + + 0xa8u, cpu->r[6]);
    }
L_0013be58:;
    {
        wr32(cpu->r[5] + + 0xacu, cpu->r[6]);
    }
L_0013be5c:;
    {
        wr32(cpu->r[5] + + 0x5cu, cpu->r[6]);
    }
L_0013be60:;
    {
        wr16(cpu->r[5] + + 0xb0u, cpu->r[6]);
    }
L_0013be64:;
    {
        wr16(cpu->r[5] + + 0xb2u, cpu->r[6]);
    }
L_0013be68:;
    {
        wr16(cpu->r[5] + + 0xc4u, cpu->r[6]);
    }
L_0013be6c:;
    {
        wr16(cpu->r[5] + + 0xc6u, cpu->r[6]);
    }
L_0013be70:;
    {
        wr32(cpu->r[5] + + 0xc8u, cpu->r[6]);
    }
L_0013be74:;
    {
        wr32(cpu->r[5] + + 0xccu, cpu->r[6]);
    }
L_0013be78:;
    {
        wr32(cpu->r[5] + + 0xf0u, cpu->r[6]);
    }
L_0013be7c:;
    {
        wr32(cpu->r[5] + + 0xf4u, cpu->r[6]);
    }
L_0013be80:;
    {
        wr32(cpu->r[5] + + 0xf8u, cpu->r[6]);
    }
L_0013be84:;
    {
        wr32(cpu->r[5] + + 0xb4u, cpu->r[6]);
    }
L_0013be88:;
    {
        wr32(cpu->r[5] + + 0xb8u, cpu->r[6]);
    }
L_0013be8c:;
    {
        wr32(cpu->r[5] + + 0xbcu, cpu->r[6]);
    }
L_0013be90:;
    {
        wr32(cpu->r[5] + + 0xc0u, cpu->r[6]);
    }
L_0013be94:;
    {
        wr32(cpu->r[5] + + 0xd0u, cpu->r[6]);
    }
L_0013be98:;
    {
        wr32(cpu->r[5] + + 0xd4u, cpu->r[6]);
    }
L_0013be9c:;
    {
        wr32(cpu->r[5] + + 0xd8u, cpu->r[6]);
    }
L_0013bea0:;
    {
        wr32(cpu->r[5] + + 0xdcu, cpu->r[6]);
    }
L_0013bea4:;
    {
        wr32(cpu->r[5] + + 0xe0u, cpu->r[6]);
    }
L_0013bea8:;
    {
        wr32(cpu->r[5] + + 0xe4u, cpu->r[6]);
    }
L_0013beac:;
    {
        wr32(cpu->r[5] + + 0xe8u, cpu->r[6]);
    }
L_0013beb0:;
    {
        wr32(cpu->r[5] + + 0xecu, cpu->r[6]);
    }
L_0013beb4:;
    {
        wr32(cpu->r[5] + + 0xfcu, cpu->r[6]);
    }
L_0013beb8:;
    {
        wr32(cpu->r[5] + + 0x34u, cpu->r[6]);
    }
L_0013bebc:;
    {
        wr32(cpu->r[5] + + 0x104u, cpu->r[6]);
    }
L_0013bec0:;
    {
        wr32(cpu->r[5] + + 0x10cu, cpu->r[6]);
    }
L_0013bec4:;
    {
        wr32(cpu->r[5] + + 0x108u, cpu->r[6]);
    }
L_0013bec8:;
    {
        wr32(cpu->r[5] + + 0x110u, cpu->r[6]);
    }
L_0013becc:;
    {
        wr32(cpu->r[5] + + 0x114u, cpu->r[6]);
    }
L_0013bed0:;
    {
        wr32(cpu->r[5] + + 0x118u, cpu->r[6]);
    }
L_0013bed4:;
    {
        wr32(cpu->r[5] + + 0x11cu, cpu->r[6]);
    }
L_0013bed8:;
    {
        wr32(cpu->r[5] + + 0x120u, cpu->r[6]);
    }
L_0013bedc:;
    {
        wr32(cpu->r[5] + + 0x124u, cpu->r[6]);
    }
L_0013bee0:;
    {
        wr32(cpu->r[5] + + 0x148u, cpu->r[6]);
    }
L_0013bee4:;
    {
        wr32(cpu->r[5] + + 0x14cu, cpu->r[6]);
    }
L_0013bee8:;
    {
        wr32(cpu->r[5] + + 0x150u, cpu->r[6]);
    }
L_0013beec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0013bef0:;
    {
        wr32(cpu->r[1] + + 0x128u, cpu->r[3]);
    }
L_0013bef4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000008u, 1, 1);
    }
L_0013bef8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_0013befc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013beec;
        }
    }
L_0013bf00:;
    {
        wr32(cpu->r[5] + + 0x154u, cpu->r[3]);
    }
L_0013bf04:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013bf08:;
    {
        wr8(cpu->r[5] + + 0x158u, cpu->r[3]);
    }
L_0013bf0c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        uint32_t t = v5;
        cpu->r[13] += 24u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013bf10u)) return;
    }
}

/* _ZN9AniObj_v4C2Ei @ 0013bf18 (arm) */
void fn_0013bf18(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013bf18:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0013bf1c:;
    {
        cpu->r[4] = rd32(0x0013bf24u + + 0x184u);
    }
L_0013bf20:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0013bf24:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_0013bf28:;
    {
        cpu->r[14] = 0x0013bf2cu; fn_00140f34(cpu);
    }
L_0013bf2c:;
    {
        cpu->r[3] = rd32(0x0013bf34u + + 0x178u);
    }
L_0013bf30:;
    {
        cpu->r[4] = add_flags(cpu, 0x0013bf38u, cpu->r[4], 0, 0);
    }
L_0013bf34:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0013bf38:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000015cu, 0, 0);
    }
L_0013bf3c:;
    {
        wr32(cpu->r[5] + + 0x19cu, cpu->r[6]);
    }
L_0013bf40:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0013bf44:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0013bf48:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0013bf4c:;
    {
        cpu->r[14] = 0x0013bf50u; fn_001535e0(cpu);
    }
L_0013bf50:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0013bf54:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0013bf58:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0013bf5c:;
    {
        wr32(cpu->r[5] + + 0x24u, cpu->r[7]);
    }
L_0013bf60:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_0013bf64:;
    {
        wr32(cpu->r[5] + + 0x18u, cpu->r[6]);
    }
L_0013bf68:;
    {
        wr32(cpu->r[5] + + 0x54u, cpu->r[0]);
    }
L_0013bf6c:;
    {
        wr32(cpu->r[5] + + 0x1cu, cpu->r[6]);
    }
L_0013bf70:;
    {
        wr32(cpu->r[5] + + 0x20u, cpu->r[6]);
    }
L_0013bf74:;
    {
        wr32(cpu->r[5] + + 0x28u, cpu->r[6]);
    }
L_0013bf78:;
    {
        wr32(cpu->r[5] + + 0x2cu, cpu->r[6]);
    }
L_0013bf7c:;
    {
        wr32(cpu->r[5] + + 0x48u, cpu->r[6]);
    }
L_0013bf80:;
    {
        wr32(cpu->r[5] + + 0x4cu, cpu->r[6]);
    }
L_0013bf84:;
    {
        wr32(cpu->r[5] + + 0x30u, cpu->r[6]);
    }
L_0013bf88:;
    {
        wr32(cpu->r[5] + + 0x50u, cpu->r[6]);
    }
L_0013bf8c:;
    {
        wr32(cpu->r[5] + + 0x3cu, cpu->r[6]);
    }
L_0013bf90:;
    {
        wr32(cpu->r[5] + + 0x38u, cpu->r[6]);
    }
L_0013bf94:;
    {
        wr32(cpu->r[5] + + 0x44u, cpu->r[6]);
    }
L_0013bf98:;
    {
        wr32(cpu->r[5] + + 0x40u, cpu->r[6]);
    }
L_0013bf9c:;
    {
        wr32(cpu->r[5] + + 0x58u, cpu->r[6]);
    }
L_0013bfa0:;
    {
        wr16(cpu->r[5] + + 0x60u, cpu->r[6]);
    }
L_0013bfa4:;
    {
        wr32(cpu->r[5] + + 0x64u, cpu->r[6]);
    }
L_0013bfa8:;
    {
        wr16(cpu->r[5] + + 0x68u, cpu->r[6]);
    }
L_0013bfac:;
    {
        wr32(cpu->r[5] + + 0x6cu, cpu->r[6]);
    }
L_0013bfb0:;
    {
        wr32(cpu->r[5] + + 0x70u, cpu->r[6]);
    }
L_0013bfb4:;
    {
        wr32(cpu->r[5] + + 0x74u, cpu->r[6]);
    }
L_0013bfb8:;
    {
        wr32(cpu->r[5] + + 0x78u, cpu->r[6]);
    }
L_0013bfbc:;
    {
        wr32(cpu->r[5] + + 0x7cu, cpu->r[6]);
    }
L_0013bfc0:;
    {
        wr32(cpu->r[5] + + 0x80u, cpu->r[6]);
    }
L_0013bfc4:;
    {
        wr32(cpu->r[5] + + 0x84u, cpu->r[6]);
    }
L_0013bfc8:;
    {
        wr32(cpu->r[5] + + 0x88u, cpu->r[6]);
    }
L_0013bfcc:;
    {
        wr32(cpu->r[5] + + 0x8cu, cpu->r[6]);
    }
L_0013bfd0:;
    {
        wr32(cpu->r[5] + + 0x90u, cpu->r[6]);
    }
L_0013bfd4:;
    {
        wr32(cpu->r[5] + + 0x94u, cpu->r[6]);
    }
L_0013bfd8:;
    {
        wr32(cpu->r[5] + + 0x98u, cpu->r[6]);
    }
L_0013bfdc:;
    {
        wr32(cpu->r[5] + + 0x9cu, cpu->r[6]);
    }
L_0013bfe0:;
    {
        wr16(cpu->r[5] + + 0xa0u, cpu->r[6]);
    }
L_0013bfe4:;
    {
        wr32(cpu->r[5] + + 0xa4u, cpu->r[6]);
    }
L_0013bfe8:;
    {
        wr8(cpu->r[5] + + 0x100u, cpu->r[6]);
    }
L_0013bfec:;
    {
        wr16(cpu->r[5] + + 0xa8u, cpu->r[6]);
    }
L_0013bff0:;
    {
        wr32(cpu->r[5] + + 0xacu, cpu->r[6]);
    }
L_0013bff4:;
    {
        wr32(cpu->r[5] + + 0x5cu, cpu->r[6]);
    }
L_0013bff8:;
    {
        wr16(cpu->r[5] + + 0xb0u, cpu->r[6]);
    }
L_0013bffc:;
    {
        wr16(cpu->r[5] + + 0xb2u, cpu->r[6]);
    }
L_0013c000:;
    {
        wr16(cpu->r[5] + + 0xc4u, cpu->r[6]);
    }
L_0013c004:;
    {
        wr16(cpu->r[5] + + 0xc6u, cpu->r[6]);
    }
L_0013c008:;
    {
        wr32(cpu->r[5] + + 0xc8u, cpu->r[6]);
    }
L_0013c00c:;
    {
        wr32(cpu->r[5] + + 0xccu, cpu->r[6]);
    }
L_0013c010:;
    {
        wr32(cpu->r[5] + + 0xf0u, cpu->r[6]);
    }
L_0013c014:;
    {
        wr32(cpu->r[5] + + 0xf4u, cpu->r[6]);
    }
L_0013c018:;
    {
        wr32(cpu->r[5] + + 0xf8u, cpu->r[6]);
    }
L_0013c01c:;
    {
        wr32(cpu->r[5] + + 0xb4u, cpu->r[6]);
    }
L_0013c020:;
    {
        wr32(cpu->r[5] + + 0xb8u, cpu->r[6]);
    }
L_0013c024:;
    {
        wr32(cpu->r[5] + + 0xbcu, cpu->r[6]);
    }
L_0013c028:;
    {
        wr32(cpu->r[5] + + 0xc0u, cpu->r[6]);
    }
L_0013c02c:;
    {
        wr32(cpu->r[5] + + 0xd0u, cpu->r[6]);
    }
L_0013c030:;
    {
        wr32(cpu->r[5] + + 0xd4u, cpu->r[6]);
    }
L_0013c034:;
    {
        wr32(cpu->r[5] + + 0xd8u, cpu->r[6]);
    }
L_0013c038:;
    {
        wr32(cpu->r[5] + + 0xdcu, cpu->r[6]);
    }
L_0013c03c:;
    {
        wr32(cpu->r[5] + + 0xe0u, cpu->r[6]);
    }
L_0013c040:;
    {
        wr32(cpu->r[5] + + 0xe4u, cpu->r[6]);
    }
L_0013c044:;
    {
        wr32(cpu->r[5] + + 0xe8u, cpu->r[6]);
    }
L_0013c048:;
    {
        wr32(cpu->r[5] + + 0xecu, cpu->r[6]);
    }
L_0013c04c:;
    {
        wr32(cpu->r[5] + + 0xfcu, cpu->r[6]);
    }
L_0013c050:;
    {
        wr32(cpu->r[5] + + 0x34u, cpu->r[6]);
    }
L_0013c054:;
    {
        wr32(cpu->r[5] + + 0x104u, cpu->r[6]);
    }
L_0013c058:;
    {
        wr32(cpu->r[5] + + 0x10cu, cpu->r[6]);
    }
L_0013c05c:;
    {
        wr32(cpu->r[5] + + 0x108u, cpu->r[6]);
    }
L_0013c060:;
    {
        wr32(cpu->r[5] + + 0x110u, cpu->r[6]);
    }
L_0013c064:;
    {
        wr32(cpu->r[5] + + 0x114u, cpu->r[6]);
    }
L_0013c068:;
    {
        wr32(cpu->r[5] + + 0x118u, cpu->r[6]);
    }
L_0013c06c:;
    {
        wr32(cpu->r[5] + + 0x11cu, cpu->r[6]);
    }
L_0013c070:;
    {
        wr32(cpu->r[5] + + 0x120u, cpu->r[6]);
    }
L_0013c074:;
    {
        wr32(cpu->r[5] + + 0x124u, cpu->r[6]);
    }
L_0013c078:;
    {
        wr32(cpu->r[5] + + 0x148u, cpu->r[6]);
    }
L_0013c07c:;
    {
        wr32(cpu->r[5] + + 0x14cu, cpu->r[6]);
    }
L_0013c080:;
    {
        wr32(cpu->r[5] + + 0x150u, cpu->r[6]);
    }
L_0013c084:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0013c088:;
    {
        wr32(cpu->r[1] + + 0x128u, cpu->r[3]);
    }
L_0013c08c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000008u, 1, 1);
    }
L_0013c090:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_0013c094:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013c084;
        }
    }
L_0013c098:;
    {
        wr32(cpu->r[5] + + 0x154u, cpu->r[3]);
    }
L_0013c09c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013c0a0:;
    {
        wr8(cpu->r[5] + + 0x158u, cpu->r[3]);
    }
L_0013c0a4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        uint32_t t = v5;
        cpu->r[13] += 24u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013c0a8u)) return;
    }
}

/* _ZN9AniObj_v415SaveAnimatablesEfP11gxAnimationPf @ 0013c0b0 (arm) */
void fn_0013c0b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013c0b0:;
    {
        cpu->r[13] -= 36u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[9]);
        wr32(cpu->r[13] + 24u, cpu->r[10]);
        wr32(cpu->r[13] + 28u, cpu->r[11]);
        wr32(cpu->r[13] + 32u, cpu->r[14]);
    }
L_0013c0b4:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_0013c0b8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x28u);
    }
L_0013c0bc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_0013c0c0:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_0013c0c4:;
    {
        cpu->r[11] = cpu->r[1];
    }
L_0013c0c8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013c0cc:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_0013c0d0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013c194;
        }
    }
L_0013c0d4:;
    {
        cpu->r[10] = 0x00000001u;
    }
L_0013c0d8:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_0013c0dc:;
    {
        cpu->r[5] = cpu->r[13];
    }
L_0013c0e0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x18u);
    }
L_0013c0e4:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 1u, &shc); cpu->r[1] = v;
    }
L_0013c0e8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_0013c0ec:;
    {
        cpu->r[2] = rd32(cpu->r[2] + shifter(cpu->r[8], 2, 3u, &shc));
    }
L_0013c0f0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0013c0f4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 1, 1u, &shc), 0, 0);
    }
L_0013c0f8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_0013c0fc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[4]);
        }
    }
L_0013c100:;
    {
        cpu->r[7] = rd8(cpu->r[2] + + 0x4u);
    }
L_0013c104:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[3], 1, 1u, &shc));
        }
    }
L_0013c108:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[4]);
        }
    }
L_0013c10c:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 2u, &shc); cpu->r[7] = v;
    }
L_0013c110:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_0013c114:;
    {
        cpu->r[3] = cpu->r[13];
    }
L_0013c118:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_0013c11c:;
    {
        cpu->r[14] = 0x0013c120u; guest_call(cpu, cpu->r[12]);
    }
L_0013c120:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0013c124:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0013c128:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_0013c12c:;
    {
        cpu->r[14] = 0x0013c130u; imp_memcpy(cpu); /* memcpy */
    }
L_0013c130:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x18u);
    }
L_0013c134:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_0013c138:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[7], 0, 0);
    }
L_0013c13c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_0013c140:;
    {
        cpu->r[2] = rd32(cpu->r[2] + shifter(cpu->r[10], 2, 2u, &shc));
    }
L_0013c144:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0013c148:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 1, 1u, &shc), 0, 0);
    }
L_0013c14c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000002u, 0, 0);
    }
L_0013c150:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[4] + + 0x8u);
        }
    }
L_0013c154:;
    {
        cpu->r[7] = rd8(cpu->r[2] + + 0x4u);
    }
L_0013c158:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[3], 1, 1u, &shc));
        }
    }
L_0013c15c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
        }
    }
L_0013c160:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 2u, &shc); cpu->r[7] = v;
    }
L_0013c164:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_0013c168:;
    {
        cpu->r[3] = cpu->r[13];
    }
L_0013c16c:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_0013c170:;
    {
        cpu->r[14] = 0x0013c174u; guest_call(cpu, cpu->r[12]);
    }
L_0013c174:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0013c178:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_0013c17c:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0013c180:;
    {
        cpu->r[14] = 0x0013c184u; imp_memcpy(cpu); /* memcpy */
    }
L_0013c184:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x28u);
    }
L_0013c188:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[7], 0, 0);
    }
L_0013c18c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_0013c190:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0013c0e0;
        }
    }
L_0013c194:;
    {
        cpu->r[2] = rd32(cpu->r[9] + + 0x50u);
    }
L_0013c198:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[7] = v;
    }
L_0013c19c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 1);
    }
L_0013c1a0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013c210;
        }
    }
L_0013c1a4:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 3u, &shc); cpu->r[8] = v;
    }
L_0013c1a8:;
    {
        cpu->r[5] = cpu->r[13];
    }
L_0013c1ac:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x18u);
    }
L_0013c1b0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0013c1b4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_0013c1b8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0013c1bc:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[8]);
    }
L_0013c1c0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0013c1c4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 1, 1u, &shc), 0, 0);
    }
L_0013c1c8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_0013c1cc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[4]);
        }
    }
L_0013c1d0:;
    {
        cpu->r[10] = rd8(cpu->r[2] + + 0x4u);
    }
L_0013c1d4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[3], 1, 1u, &shc));
        }
    }
L_0013c1d8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[4]);
        }
    }
L_0013c1dc:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 2u, &shc); cpu->r[10] = v;
    }
L_0013c1e0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_0013c1e4:;
    {
        cpu->r[3] = cpu->r[13];
    }
L_0013c1e8:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_0013c1ec:;
    {
        cpu->r[14] = 0x0013c1f0u; guest_call(cpu, cpu->r[12]);
    }
L_0013c1f0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0013c1f4:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_0013c1f8:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_0013c1fc:;
    {
        cpu->r[14] = 0x0013c200u; imp_memcpy(cpu); /* memcpy */
    }
L_0013c200:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x50u);
    }
L_0013c204:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[10], 0, 0);
    }
L_0013c208:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_0013c20c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0013c1ac;
        }
    }
L_0013c210:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_0013c214:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        uint32_t v6 = rd32(cpu->r[13] + 24u);
        uint32_t v7 = rd32(cpu->r[13] + 28u);
        uint32_t v8 = rd32(cpu->r[13] + 32u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        cpu->r[9] = v5;
        cpu->r[10] = v6;
        cpu->r[11] = v7;
        uint32_t t = v8;
        cpu->r[13] += 36u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013c218u)) return;
    }
}

/* _ZN9AniMgr_v47SetAnimEibi @ 0013c218 (arm) */
void fn_0013c218(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013c218:;
    {
        cpu->r[13] -= 32u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[9]);
        wr32(cpu->r[13] + 24u, cpu->r[10]);
        wr32(cpu->r[13] + 28u, cpu->r[14]);
    }
L_0013c21c:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_0013c220:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x8u);
    }
L_0013c224:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_0013c228:;
    {
        cpu->r[5] = rd32(0x0013c230u + + 0xc0u);
    }
L_0013c22c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0013c230:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x8u);
    }
L_0013c234:;
    {
        cpu->r[5] = add_flags(cpu, 0x0013c23cu, cpu->r[5], 0, 0);
    }
L_0013c238:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 1);
    }
L_0013c23c:;
    {
        if (cond_test(cpu, 11)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        uint32_t v6 = rd32(cpu->r[13] + 24u);
        uint32_t v7 = rd32(cpu->r[13] + 28u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        cpu->r[9] = v5;
        cpu->r[10] = v6;
        uint32_t t = v7;
        cpu->r[13] += 32u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013c240u)) return;
        }
    }
L_0013c240:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x18u);
    }
L_0013c244:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_0013c248:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0013c24c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0013c2d8;
        }
    }
L_0013c250:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x48u);
    }
L_0013c254:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_0013c258:;
    {
        cpu->r[10] = rd32(cpu->r[0] + + 0x2cu);
    }
L_0013c25c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 4u, &shc), 0, 0);
    }
L_0013c260:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0013c264:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[3]);
    }
L_0013c268:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0013c26c:;
    {
        cpu->r[14] = 0x0013c274u;
    }
L_0013c270:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0013c274u)) return;
    }
L_0013c274:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0013c278:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
    }
L_0013c27c:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[10]);
    }
L_0013c280:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_0013c284:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x14u);
    }
L_0013c288:;
    {
        cpu->r[14] = 0x0013c28cu; fn_0013c0b0(cpu);
    }
L_0013c28c:;
    {
        cpu->r[3] = rd32(0x0013c294u + + 0x60u);
    }
L_0013c290:;
    {
        cpu->r[2] = 0x000014fcu;
    }
L_0013c294:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0013c29cu + + 0x4cu);
    }
L_0013c298:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013c29c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0013c2a0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0013c2a4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0013c2a8:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[2]);
    }
L_0013c2ac:;
    {
        cpu->r[2] = 0x000014fcu;
    }
L_0013c2b0:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0013c2b4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = 0x00000002u;
        }
    }
L_0013c2b8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = 0x00000001u;
        }
    }
L_0013c2bc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0013c2c0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0013c2c8u + + 0x24u);
    }
L_0013c2c4:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[7]);
    }
L_0013c2c8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013c2cc:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[6]);
    }
L_0013c2d0:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_0013c2d4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        uint32_t v6 = rd32(cpu->r[13] + 24u);
        uint32_t v7 = rd32(cpu->r[13] + 28u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        cpu->r[9] = v5;
        cpu->r[10] = v6;
        uint32_t t = v7;
        cpu->r[13] += 32u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013c2d8u)) return;
    }
L_0013c2d8:;
    {
        cpu->r[3] = rd32(0x0013c2e0u + + 0x14u);
    }
L_0013c2dc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0013c2e0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0013c2e4:;
    {
        goto L_0013c2ac;
    }
}

/* _ZN9AniMgr_v416ComputeBasePivotEv @ 0013c2f8 (arm) */
void fn_0013c2f8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013c2f8:;
    {
        cpu->r[13] -= 32u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[9]);
        wr32(cpu->r[13] + 24u, cpu->r[10]);
        wr32(cpu->r[13] + 28u, cpu->r[14]);
    }
L_0013c2fc:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x8u);
    }
L_0013c300:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0x18u);
    }
L_0013c304:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0013c308:;
    {
        cpu->r[3] = rd32(0x0013c310u + + 0xe8u);
    }
L_0013c30c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000018u, 1, 0);
    }
L_0013c310:;
    {
        cpu->r[8] = rd32(cpu->r[1] + + 0x48u);
    }
L_0013c314:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0013c318:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_0013c31c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x14u);
    }
L_0013c320:;
    {
        cpu->r[0] = rd32(0x0013c328u + + 0xd4u);
    }
L_0013c324:;
    {
        cpu->r[3] = add_flags(cpu, 0x0013c32cu, cpu->r[3], 0, 0);
    }
L_0013c328:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[8], shifter(cpu->r[7], 2, 4u, &shc), 0, 0);
    }
L_0013c32c:;
    {
        cpu->r[6] = rd32(cpu->r[1] + + 0x2cu);
    }
L_0013c330:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_0013c334:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_0013c338:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0013c33c:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_0013c340:;
    {
        cpu->r[9] = rd32(cpu->r[3]);
    }
L_0013c344:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0013c348:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd32(cpu->r[4] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_0013c34c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0013c350:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
        }
    }
L_0013c354:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[4] + + 0x8u);
        }
    }
L_0013c358:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[1] + cpu->r[3]);
        }
    }
L_0013c35c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0013c360:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_0013c364:;
    {
        cpu->r[14] = 0x0013c368u; guest_call(cpu, cpu->r[12]);
    }
L_0013c368:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_0013c36c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_0013c370:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0013c374:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_0013c378:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x14u);
    }
L_0013c37c:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013c380:;
    {
        cpu->r[14] = 0x0013c384u; fn_00153678(cpu);
    }
L_0013c384:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_0013c388:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x14u);
    }
L_0013c38c:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_0013c390:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0013c394:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd32(cpu->r[4] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_0013c398:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0013c39c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[8] + shifter(cpu->r[7], 2, 4u, &shc));
        }
    }
L_0013c3a0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[8] + shifter(cpu->r[7], 2, 4u, &shc));
        }
    }
L_0013c3a4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[1] + cpu->r[3]);
        }
    }
L_0013c3a8:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_0013c3ac:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0013c3b0:;
    {
        cpu->r[14] = 0x0013c3b4u; guest_call(cpu, cpu->r[12]);
    }
L_0013c3b4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_0013c3b8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0013c3bc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_0013c3c0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_0013c3c4:;
    {
        cpu->r[14] = 0x0013c3c8u; fn_0015364c(cpu);
    }
L_0013c3c8:;
    {
        cpu->r[3] = 0x000011e8u;
    }
L_0013c3cc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0013c3d0:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_0013c3d4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
    }
L_0013c3d8:;
    {
        cpu->r[14] = 0x0013c3dcu; fn_001534f0(cpu);
    }
L_0013c3dc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_0013c3e0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x30u);
    }
L_0013c3e4:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_0013c3e8:;
    {
        uint32_t v = cpu->r[2] | 0x00000001u; cpu->r[2] = v;
    }
L_0013c3ec:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_0013c3f0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_0013c3f4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        uint32_t v6 = rd32(cpu->r[13] + 24u);
        uint32_t v7 = rd32(cpu->r[13] + 28u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        cpu->r[9] = v5;
        cpu->r[10] = v6;
        uint32_t t = v7;
        cpu->r[13] += 32u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013c3f8u)) return;
    }
}

/* _ZN9AniObj_v416getLocalPivotMtxEifP11gxAnimationR7CMatrix @ 0013c400 (arm) */
void fn_0013c400(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013c400:;
    {
        cpu->r[13] -= 28u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[10]);
        wr32(cpu->r[13] + 24u, cpu->r[14]);
    }
L_0013c404:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0013c408:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_0013c40c:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_0013c410:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_0013c414:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x38u);
    }
L_0013c418:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0013c4d0;
        }
    }
L_0013c41c:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[7] = v;
    }
L_0013c420:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x18u);
    }
L_0013c424:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0013c428:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0013c42c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[10], 2, 2u, &shc));
    }
L_0013c430:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0013c434:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0013c438:;
    {
        cpu->r[14] = 0x0013c440u;
    }
L_0013c43c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0013c440u)) return;
    }
L_0013c440:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0013c444:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_0013c448:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_0013c44c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0013c450:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_0013c454:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0013c458:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
        }
    }
L_0013c45c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[4] + + 0x8u);
        }
    }
L_0013c460:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_0013c464:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0013c468:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0013c46c:;
    {
        cpu->r[14] = 0x0013c470u; guest_call(cpu, cpu->r[12]);
    }
L_0013c470:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_0013c474:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_0013c478:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0013c47c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_0013c480:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x14u);
    }
L_0013c484:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013c488:;
    {
        cpu->r[14] = 0x0013c48cu; fn_00153678(cpu);
    }
L_0013c48c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_0013c490:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0013c494:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_0013c498:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0013c49c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_0013c4a0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0013c4a4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[4]);
        }
    }
L_0013c4a8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[4]);
        }
    }
L_0013c4ac:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_0013c4b0:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0013c4b4:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0013c4b8:;
    {
        cpu->r[14] = 0x0013c4bcu; guest_call(cpu, cpu->r[12]);
    }
L_0013c4bc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0013c4c0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_0013c4c4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_0013c4c8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_0013c4cc:;
    {
        cpu->r[14] = 0x0013c4d0u; fn_0015364c(cpu);
    }
L_0013c4d0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_0013c4d4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        uint32_t v6 = rd32(cpu->r[13] + 24u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        cpu->r[10] = v5;
        uint32_t t = v6;
        cpu->r[13] += 28u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013c4d8u)) return;
    }
}

/* _ZN9AniMgr_v416GetLocalPivotMtxEiR7CMatrix @ 0013c4d8 (arm) */
void fn_0013c4d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013c4d8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x18u);
    }
L_0013c4dc:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x8u);
    }
L_0013c4e0:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[14]);
        cpu->r[13] = wb_tmp;
    }
L_0013c4e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0013c4e8:;
    {
        cpu->r[14] = rd32(cpu->r[0] + + 0x14u);
    }
L_0013c4ec:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0013c4f0:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_0013c4f4:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x48u);
    }
L_0013c4f8:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_0013c4fc:;
    {
        cpu->r[2] = cpu->r[14];
    }
L_0013c500:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], shifter(cpu->r[3], 2, 4u, &shc), 0, 0);
    }
L_0013c504:;
    {
        cpu->r[14] = 0x0013c508u; fn_0013c400(cpu);
    }
L_0013c508:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0013c50c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t t = v0;
        cpu->r[13] = base + 4u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013c510u)) return;
    }
}

/* _ZN9AniMgr_v418ComputeRelativePCHEiP7CMatrixb @ 0013c510 (arm) */
void fn_0013c510(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013c510:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_0013c514:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_0013c518:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_0013c51c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x38u);
    }
L_0013c520:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000054u, 1, 0);
    }
L_0013c524:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_0013c528:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0013c598;
        }
    }
L_0013c52c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_0013c530:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x3cu);
    }
L_0013c534:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0013c538:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_0013c53c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013c540:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013c544:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[3]);
    }
L_0013c548:;
    {
        cpu->r[14] = 0x0013c54cu; fn_001535e0(cpu);
    }
L_0013c54c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[5], 0x00000010u, 0, 0);
    }
L_0013c550:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_0013c554:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x10u);
    }
L_0013c558:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x4u);
    }
L_0013c55c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013c560:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x8u);
    }
L_0013c564:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12] + + 0xcu);
    }
L_0013c568:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013c56c:;
    {
        cpu->r[14] = 0x0013c570u; fn_00153678(cpu);
    }
L_0013c570:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013c574:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x8u);
    }
L_0013c578:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x4u);
    }
L_0013c57c:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x4u);
    }
L_0013c580:;
    {
        cpu->r[14] = 0x0013c584u; fn_0015364c(cpu);
    }
L_0013c584:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0013c588:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0013c58c:;
    {
        cpu->r[14] = 0x0013c590u; fn_00153624(cpu);
    }
L_0013c590:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013c594:;
    {
        cpu->r[14] = 0x0013c598u; fn_000b2bc8(cpu);
    }
L_0013c598:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000054u, 0, 0);
    }
L_0013c59c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        uint32_t t = v4;
        cpu->r[13] += 20u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013c5a0u)) return;
    }
}

/* _ZN9AniObj_v4D1Ev @ 0013c5a0 (arm) */
void fn_0013c5a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013c5a0:;
    {
        cpu->r[3] = rd32(0x0013c5a8u + + 0x364u);
    }
L_0013c5a4:;
    {
        cpu->r[1] = rd32(0x0013c5acu + + 0x364u);
    }
L_0013c5a8:;
    {
        cpu->r[3] = add_flags(cpu, 0x0013c5b0u, cpu->r[3], 0, 0);
    }
L_0013c5ac:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x20u);
    }
L_0013c5b0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0013c5b4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_0013c5b8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0013c5bc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0013c5c0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_0013c5c4:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_0013c5c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013c610;
        }
    }
L_0013c5cc:;
    {
        cpu->r[3] = rd32(cpu->r[2] + - 0x4u);
    }
L_0013c5d0:;
    {
        cpu->r[0] = 0x0000005cu;
    }
L_0013c5d4:;
    {
        uint32_t v = cpu->r[0] * cpu->r[3] + cpu->r[2]; cpu->r[0] = v;
    }
L_0013c5d8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_0013c5dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013c5e8;
        }
    }
L_0013c5e0:;
    {
        goto L_0013c600;
    }
L_0013c5e4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013c5e8:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x0000005cu, 1, 0);
    }
L_0013c5ec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013c5f0:;
    {
        cpu->r[14] = 0x0013c5f4u; fn_0013a0ac(cpu);
    }
L_0013c5f4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x20u);
    }
L_0013c5f8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_0013c5fc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013c5e4;
        }
    }
L_0013c600:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 0);
    }
L_0013c604:;
    {
        cpu->r[14] = 0x0013c608u; fn_0018ba60(cpu);
    }
L_0013c608:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013c60c:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[3]);
    }
L_0013c610:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x2cu);
    }
L_0013c614:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013c618:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013c660;
        }
    }
L_0013c61c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + - 0x4u);
    }
L_0013c620:;
    {
        cpu->r[0] = 0x0000004cu;
    }
L_0013c624:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2] + cpu->r[3]; cpu->r[0] = v;
    }
L_0013c628:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_0013c62c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013c638;
        }
    }
L_0013c630:;
    {
        goto L_0013c650;
    }
L_0013c634:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013c638:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x0000004cu, 1, 0);
    }
L_0013c63c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013c640:;
    {
        cpu->r[14] = 0x0013c644u; fn_00140e78(cpu);
    }
L_0013c644:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x2cu);
    }
L_0013c648:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_0013c64c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013c634;
        }
    }
L_0013c650:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 0);
    }
L_0013c654:;
    {
        cpu->r[14] = 0x0013c658u; fn_0018ba60(cpu);
    }
L_0013c658:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013c65c:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_0013c660:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x48u);
    }
L_0013c664:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013c668:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013c6b0;
        }
    }
L_0013c66c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + - 0x4u);
    }
L_0013c670:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_0013c674:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 4u, &shc), 0, 0);
    }
L_0013c678:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_0013c67c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013c688;
        }
    }
L_0013c680:;
    {
        goto L_0013c6a0;
    }
L_0013c684:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013c688:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000030u, 1, 0);
    }
L_0013c68c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013c690:;
    {
        cpu->r[14] = 0x0013c694u; fn_00140b44(cpu);
    }
L_0013c694:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x48u);
    }
L_0013c698:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_0013c69c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013c684;
        }
    }
L_0013c6a0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 0);
    }
L_0013c6a4:;
    {
        cpu->r[14] = 0x0013c6a8u; fn_0018ba60(cpu);
    }
L_0013c6a8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013c6ac:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[3]);
    }
L_0013c6b0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4cu);
    }
L_0013c6b4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013c6b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013c6c8;
        }
    }
L_0013c6bc:;
    {
        cpu->r[14] = 0x0013c6c0u; fn_0018ba60(cpu);
    }
L_0013c6c0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013c6c4:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
    }
L_0013c6c8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x30u);
    }
L_0013c6cc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013c6d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013c6e0;
        }
    }
L_0013c6d4:;
    {
        cpu->r[14] = 0x0013c6d8u; fn_0018ba60(cpu);
    }
L_0013c6d8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013c6dc:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[3]);
    }
L_0013c6e0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3cu);
    }
L_0013c6e4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0013c6e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013c738;
        }
    }
L_0013c6ec:;
    {
        cpu->r[5] = rd32(cpu->r[2] + - 0x4u);
    }
L_0013c6f0:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0013c6f4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 3u, &shc), 0, 0);
    }
L_0013c6f8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[2], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_0013c6fc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_0013c700:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013c728;
        }
    }
L_0013c704:;
    {
        cpu->r[3] = rd32(cpu->r[5] + - 0x4u);
    }
L_0013c708:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013c70c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013c71c;
        }
    }
L_0013c710:;
    {
        cpu->r[14] = 0x0013c714u; fn_0018ba60(cpu);
    }
L_0013c714:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3cu);
    }
L_0013c718:;
    {
        wr32(cpu->r[5] + - 0x4u, cpu->r[6]);
    }
L_0013c71c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000024u, 1, 0);
    }
L_0013c720:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_0013c724:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013c704;
        }
    }
L_0013c728:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x00000008u, 1, 0);
    }
L_0013c72c:;
    {
        cpu->r[14] = 0x0013c730u; fn_0018ba60(cpu);
    }
L_0013c730:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013c734:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[3]);
    }
L_0013c738:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x58u);
    }
L_0013c73c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013c740:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013c750;
        }
    }
L_0013c744:;
    {
        cpu->r[14] = 0x0013c748u; fn_0018ba60(cpu);
    }
L_0013c748:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013c74c:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[3]);
    }
L_0013c750:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x64u);
    }
L_0013c754:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013c758:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013c768;
        }
    }
L_0013c75c:;
    {
        cpu->r[14] = 0x0013c760u; fn_0018ba60(cpu);
    }
L_0013c760:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013c764:;
    {
        wr32(cpu->r[4] + + 0x64u, cpu->r[3]);
    }
L_0013c768:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x6cu);
    }
L_0013c76c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013c770:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013c780;
        }
    }
L_0013c774:;
    {
        cpu->r[14] = 0x0013c778u; fn_0018ba60(cpu);
    }
L_0013c778:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013c77c:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[3]);
    }
L_0013c780:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0013c784:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_0013c788:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_0013c78c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x80u);
    }
L_0013c790:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0013c794:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013c798:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013c7a4;
        }
    }
L_0013c79c:;
    {
        cpu->r[14] = 0x0013c7a0u; fn_0018ba60(cpu);
    }
L_0013c7a0:;
    {
        wr32(cpu->r[5] + + 0x80u, cpu->r[7]);
    }
L_0013c7a4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000008u, 1, 1);
    }
L_0013c7a8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_0013c7ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013c78c;
        }
    }
L_0013c7b0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xa4u);
    }
L_0013c7b4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013c7b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013c7c8;
        }
    }
L_0013c7bc:;
    {
        cpu->r[14] = 0x0013c7c0u; fn_0018ba60(cpu);
    }
L_0013c7c0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013c7c4:;
    {
        wr32(cpu->r[4] + + 0xa4u, cpu->r[3]);
    }
L_0013c7c8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x44u);
    }
L_0013c7cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013c7d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013c818;
        }
    }
L_0013c7d4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + - 0x4u);
    }
L_0013c7d8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_0013c7dc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 3u, &shc), 0, 0);
    }
L_0013c7e0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_0013c7e4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013c7f0;
        }
    }
L_0013c7e8:;
    {
        goto L_0013c808;
    }
L_0013c7ec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013c7f0:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000028u, 1, 0);
    }
L_0013c7f4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013c7f8:;
    {
        cpu->r[14] = 0x0013c7fcu; fn_0013d544(cpu);
    }
L_0013c7fc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x44u);
    }
L_0013c800:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_0013c804:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013c7ec;
        }
    }
L_0013c808:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 0);
    }
L_0013c80c:;
    {
        cpu->r[14] = 0x0013c810u; fn_0018ba60(cpu);
    }
L_0013c810:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013c814:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[3]);
    }
L_0013c818:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xf8u);
    }
L_0013c81c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013c820:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013c830;
        }
    }
L_0013c824:;
    {
        cpu->r[14] = 0x0013c828u; fn_0018ba60(cpu);
    }
L_0013c828:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013c82c:;
    {
        wr32(cpu->r[4] + + 0xf8u, cpu->r[3]);
    }
L_0013c830:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0013c834:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013c838:;
    {
        wr32(cpu->r[4] + + 0xc8u, cpu->r[5]);
    }
L_0013c83c:;
    {
        wr32(cpu->r[4] + + 0xccu, cpu->r[5]);
    }
L_0013c840:;
    {
        wr32(cpu->r[4] + + 0xd0u, cpu->r[5]);
    }
L_0013c844:;
    {
        wr32(cpu->r[4] + + 0xd4u, cpu->r[5]);
    }
L_0013c848:;
    {
        wr32(cpu->r[4] + + 0xd8u, cpu->r[5]);
    }
L_0013c84c:;
    {
        wr32(cpu->r[4] + + 0xdcu, cpu->r[5]);
    }
L_0013c850:;
    {
        wr32(cpu->r[4] + + 0xe0u, cpu->r[5]);
    }
L_0013c854:;
    {
        wr32(cpu->r[4] + + 0xe4u, cpu->r[5]);
    }
L_0013c858:;
    {
        wr32(cpu->r[4] + + 0xe8u, cpu->r[5]);
    }
L_0013c85c:;
    {
        wr32(cpu->r[4] + + 0xecu, cpu->r[5]);
    }
L_0013c860:;
    {
        cpu->r[14] = 0x0013c864u; fn_0013dc6c(cpu);
    }
L_0013c864:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x34u);
    }
L_0013c868:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_0013c86c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013c878;
        }
    }
L_0013c870:;
    {
        cpu->r[14] = 0x0013c874u; fn_0018ba60(cpu);
    }
L_0013c874:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[5]);
    }
L_0013c878:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x108u);
    }
L_0013c87c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013c880:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013c890;
        }
    }
L_0013c884:;
    {
        cpu->r[14] = 0x0013c888u; fn_0018ba60(cpu);
    }
L_0013c888:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013c88c:;
    {
        wr32(cpu->r[4] + + 0x108u, cpu->r[3]);
    }
L_0013c890:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x10cu);
    }
L_0013c894:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013c898:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013c8a8;
        }
    }
L_0013c89c:;
    {
        cpu->r[14] = 0x0013c8a0u; fn_0018ba60(cpu);
    }
L_0013c8a0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013c8a4:;
    {
        wr32(cpu->r[4] + + 0x10cu, cpu->r[3]);
    }
L_0013c8a8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x110u);
    }
L_0013c8ac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013c8b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013c8c0;
        }
    }
L_0013c8b4:;
    {
        cpu->r[14] = 0x0013c8b8u; fn_0018ba60(cpu);
    }
L_0013c8b8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013c8bc:;
    {
        wr32(cpu->r[4] + + 0x110u, cpu->r[3]);
    }
L_0013c8c0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x154u);
    }
L_0013c8c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013c8c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013c8d8;
        }
    }
L_0013c8cc:;
    {
        cpu->r[14] = 0x0013c8d0u; fn_0018ba60(cpu);
    }
L_0013c8d0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013c8d4:;
    {
        wr32(cpu->r[4] + + 0x154u, cpu->r[3]);
    }
L_0013c8d8:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x19cu);
    }
L_0013c8dc:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0013c8e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013c8fc;
        }
    }
L_0013c8e4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013c8e8:;
    {
        cpu->r[14] = 0x0013c8ecu; fn_000b2bc8(cpu);
    }
L_0013c8ec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013c8f0:;
    {
        cpu->r[14] = 0x0013c8f4u; fn_0018ba20(cpu);
    }
L_0013c8f4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013c8f8:;
    {
        wr32(cpu->r[4] + + 0x19cu, cpu->r[3]);
    }
L_0013c8fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013c900:;
    {
        cpu->r[14] = 0x0013c904u; fn_00140fb4(cpu);
    }
L_0013c904:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013c908:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        uint32_t t = v5;
        cpu->r[13] += 24u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013c90cu)) return;
    }
}

/* _ZN9AniObj_v4D0Ev @ 0013c914 (arm) */
void fn_0013c914(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013c914:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0013c918:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0013c91c:;
    {
        cpu->r[14] = 0x0013c920u; fn_0013c5a0(cpu);
    }
L_0013c920:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013c924:;
    {
        cpu->r[14] = 0x0013c928u; fn_0018ba20(cpu);
    }
L_0013c928:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013c92c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013c930u)) return;
    }
}

/* _ZN9AniObj_v4D2Ev @ 0013c930 (arm) */
void fn_0013c930(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013c930:;
    {
        cpu->r[3] = rd32(0x0013c938u + + 0x364u);
    }
L_0013c934:;
    {
        cpu->r[1] = rd32(0x0013c93cu + + 0x364u);
    }
L_0013c938:;
    {
        cpu->r[3] = add_flags(cpu, 0x0013c940u, cpu->r[3], 0, 0);
    }
L_0013c93c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x20u);
    }
L_0013c940:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0013c944:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_0013c948:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0013c94c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0013c950:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_0013c954:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_0013c958:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013c9a0;
        }
    }
L_0013c95c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + - 0x4u);
    }
L_0013c960:;
    {
        cpu->r[0] = 0x0000005cu;
    }
L_0013c964:;
    {
        uint32_t v = cpu->r[0] * cpu->r[3] + cpu->r[2]; cpu->r[0] = v;
    }
L_0013c968:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_0013c96c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013c978;
        }
    }
L_0013c970:;
    {
        goto L_0013c990;
    }
L_0013c974:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013c978:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x0000005cu, 1, 0);
    }
L_0013c97c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013c980:;
    {
        cpu->r[14] = 0x0013c984u; fn_0013a0ac(cpu);
    }
L_0013c984:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x20u);
    }
L_0013c988:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_0013c98c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013c974;
        }
    }
L_0013c990:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 0);
    }
L_0013c994:;
    {
        cpu->r[14] = 0x0013c998u; fn_0018ba60(cpu);
    }
L_0013c998:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013c99c:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[3]);
    }
L_0013c9a0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x2cu);
    }
L_0013c9a4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013c9a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013c9f0;
        }
    }
L_0013c9ac:;
    {
        cpu->r[2] = rd32(cpu->r[3] + - 0x4u);
    }
L_0013c9b0:;
    {
        cpu->r[0] = 0x0000004cu;
    }
L_0013c9b4:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2] + cpu->r[3]; cpu->r[0] = v;
    }
L_0013c9b8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_0013c9bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013c9c8;
        }
    }
L_0013c9c0:;
    {
        goto L_0013c9e0;
    }
L_0013c9c4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013c9c8:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x0000004cu, 1, 0);
    }
L_0013c9cc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013c9d0:;
    {
        cpu->r[14] = 0x0013c9d4u; fn_00140e78(cpu);
    }
L_0013c9d4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x2cu);
    }
L_0013c9d8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_0013c9dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013c9c4;
        }
    }
L_0013c9e0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 0);
    }
L_0013c9e4:;
    {
        cpu->r[14] = 0x0013c9e8u; fn_0018ba60(cpu);
    }
L_0013c9e8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013c9ec:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_0013c9f0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x48u);
    }
L_0013c9f4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013c9f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013ca40;
        }
    }
L_0013c9fc:;
    {
        cpu->r[0] = rd32(cpu->r[3] + - 0x4u);
    }
L_0013ca00:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_0013ca04:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 4u, &shc), 0, 0);
    }
L_0013ca08:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_0013ca0c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013ca18;
        }
    }
L_0013ca10:;
    {
        goto L_0013ca30;
    }
L_0013ca14:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013ca18:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000030u, 1, 0);
    }
L_0013ca1c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013ca20:;
    {
        cpu->r[14] = 0x0013ca24u; fn_00140b44(cpu);
    }
L_0013ca24:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x48u);
    }
L_0013ca28:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_0013ca2c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013ca14;
        }
    }
L_0013ca30:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 0);
    }
L_0013ca34:;
    {
        cpu->r[14] = 0x0013ca38u; fn_0018ba60(cpu);
    }
L_0013ca38:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013ca3c:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[3]);
    }
L_0013ca40:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4cu);
    }
L_0013ca44:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013ca48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013ca58;
        }
    }
L_0013ca4c:;
    {
        cpu->r[14] = 0x0013ca50u; fn_0018ba60(cpu);
    }
L_0013ca50:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013ca54:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
    }
L_0013ca58:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x30u);
    }
L_0013ca5c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013ca60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013ca70;
        }
    }
L_0013ca64:;
    {
        cpu->r[14] = 0x0013ca68u; fn_0018ba60(cpu);
    }
L_0013ca68:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013ca6c:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[3]);
    }
L_0013ca70:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3cu);
    }
L_0013ca74:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0013ca78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013cac8;
        }
    }
L_0013ca7c:;
    {
        cpu->r[5] = rd32(cpu->r[2] + - 0x4u);
    }
L_0013ca80:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0013ca84:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 3u, &shc), 0, 0);
    }
L_0013ca88:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[2], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_0013ca8c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_0013ca90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013cab8;
        }
    }
L_0013ca94:;
    {
        cpu->r[3] = rd32(cpu->r[5] + - 0x4u);
    }
L_0013ca98:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013ca9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013caac;
        }
    }
L_0013caa0:;
    {
        cpu->r[14] = 0x0013caa4u; fn_0018ba60(cpu);
    }
L_0013caa4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3cu);
    }
L_0013caa8:;
    {
        wr32(cpu->r[5] + - 0x4u, cpu->r[6]);
    }
L_0013caac:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000024u, 1, 0);
    }
L_0013cab0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_0013cab4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013ca94;
        }
    }
L_0013cab8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x00000008u, 1, 0);
    }
L_0013cabc:;
    {
        cpu->r[14] = 0x0013cac0u; fn_0018ba60(cpu);
    }
L_0013cac0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013cac4:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[3]);
    }
L_0013cac8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x58u);
    }
L_0013cacc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013cad0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013cae0;
        }
    }
L_0013cad4:;
    {
        cpu->r[14] = 0x0013cad8u; fn_0018ba60(cpu);
    }
L_0013cad8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013cadc:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[3]);
    }
L_0013cae0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x64u);
    }
L_0013cae4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013cae8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013caf8;
        }
    }
L_0013caec:;
    {
        cpu->r[14] = 0x0013caf0u; fn_0018ba60(cpu);
    }
L_0013caf0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013caf4:;
    {
        wr32(cpu->r[4] + + 0x64u, cpu->r[3]);
    }
L_0013caf8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x6cu);
    }
L_0013cafc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013cb00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013cb10;
        }
    }
L_0013cb04:;
    {
        cpu->r[14] = 0x0013cb08u; fn_0018ba60(cpu);
    }
L_0013cb08:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013cb0c:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[3]);
    }
L_0013cb10:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0013cb14:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_0013cb18:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_0013cb1c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x80u);
    }
L_0013cb20:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0013cb24:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013cb28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013cb34;
        }
    }
L_0013cb2c:;
    {
        cpu->r[14] = 0x0013cb30u; fn_0018ba60(cpu);
    }
L_0013cb30:;
    {
        wr32(cpu->r[5] + + 0x80u, cpu->r[7]);
    }
L_0013cb34:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000008u, 1, 1);
    }
L_0013cb38:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_0013cb3c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013cb1c;
        }
    }
L_0013cb40:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xa4u);
    }
L_0013cb44:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013cb48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013cb58;
        }
    }
L_0013cb4c:;
    {
        cpu->r[14] = 0x0013cb50u; fn_0018ba60(cpu);
    }
L_0013cb50:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013cb54:;
    {
        wr32(cpu->r[4] + + 0xa4u, cpu->r[3]);
    }
L_0013cb58:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x44u);
    }
L_0013cb5c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013cb60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013cba8;
        }
    }
L_0013cb64:;
    {
        cpu->r[0] = rd32(cpu->r[3] + - 0x4u);
    }
L_0013cb68:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_0013cb6c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 3u, &shc), 0, 0);
    }
L_0013cb70:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_0013cb74:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013cb80;
        }
    }
L_0013cb78:;
    {
        goto L_0013cb98;
    }
L_0013cb7c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013cb80:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000028u, 1, 0);
    }
L_0013cb84:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013cb88:;
    {
        cpu->r[14] = 0x0013cb8cu; fn_0013d544(cpu);
    }
L_0013cb8c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x44u);
    }
L_0013cb90:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_0013cb94:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013cb7c;
        }
    }
L_0013cb98:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 0);
    }
L_0013cb9c:;
    {
        cpu->r[14] = 0x0013cba0u; fn_0018ba60(cpu);
    }
L_0013cba0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013cba4:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[3]);
    }
L_0013cba8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xf8u);
    }
L_0013cbac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013cbb0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013cbc0;
        }
    }
L_0013cbb4:;
    {
        cpu->r[14] = 0x0013cbb8u; fn_0018ba60(cpu);
    }
L_0013cbb8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013cbbc:;
    {
        wr32(cpu->r[4] + + 0xf8u, cpu->r[3]);
    }
L_0013cbc0:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0013cbc4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013cbc8:;
    {
        wr32(cpu->r[4] + + 0xc8u, cpu->r[5]);
    }
L_0013cbcc:;
    {
        wr32(cpu->r[4] + + 0xccu, cpu->r[5]);
    }
L_0013cbd0:;
    {
        wr32(cpu->r[4] + + 0xd0u, cpu->r[5]);
    }
L_0013cbd4:;
    {
        wr32(cpu->r[4] + + 0xd4u, cpu->r[5]);
    }
L_0013cbd8:;
    {
        wr32(cpu->r[4] + + 0xd8u, cpu->r[5]);
    }
L_0013cbdc:;
    {
        wr32(cpu->r[4] + + 0xdcu, cpu->r[5]);
    }
L_0013cbe0:;
    {
        wr32(cpu->r[4] + + 0xe0u, cpu->r[5]);
    }
L_0013cbe4:;
    {
        wr32(cpu->r[4] + + 0xe4u, cpu->r[5]);
    }
L_0013cbe8:;
    {
        wr32(cpu->r[4] + + 0xe8u, cpu->r[5]);
    }
L_0013cbec:;
    {
        wr32(cpu->r[4] + + 0xecu, cpu->r[5]);
    }
L_0013cbf0:;
    {
        cpu->r[14] = 0x0013cbf4u; fn_0013dc6c(cpu);
    }
L_0013cbf4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x34u);
    }
L_0013cbf8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_0013cbfc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013cc08;
        }
    }
L_0013cc00:;
    {
        cpu->r[14] = 0x0013cc04u; fn_0018ba60(cpu);
    }
L_0013cc04:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[5]);
    }
L_0013cc08:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x108u);
    }
L_0013cc0c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013cc10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013cc20;
        }
    }
L_0013cc14:;
    {
        cpu->r[14] = 0x0013cc18u; fn_0018ba60(cpu);
    }
L_0013cc18:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013cc1c:;
    {
        wr32(cpu->r[4] + + 0x108u, cpu->r[3]);
    }
L_0013cc20:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x10cu);
    }
L_0013cc24:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013cc28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013cc38;
        }
    }
L_0013cc2c:;
    {
        cpu->r[14] = 0x0013cc30u; fn_0018ba60(cpu);
    }
L_0013cc30:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013cc34:;
    {
        wr32(cpu->r[4] + + 0x10cu, cpu->r[3]);
    }
L_0013cc38:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x110u);
    }
L_0013cc3c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013cc40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013cc50;
        }
    }
L_0013cc44:;
    {
        cpu->r[14] = 0x0013cc48u; fn_0018ba60(cpu);
    }
L_0013cc48:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013cc4c:;
    {
        wr32(cpu->r[4] + + 0x110u, cpu->r[3]);
    }
L_0013cc50:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x154u);
    }
L_0013cc54:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013cc58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013cc68;
        }
    }
L_0013cc5c:;
    {
        cpu->r[14] = 0x0013cc60u; fn_0018ba60(cpu);
    }
L_0013cc60:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013cc64:;
    {
        wr32(cpu->r[4] + + 0x154u, cpu->r[3]);
    }
L_0013cc68:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x19cu);
    }
L_0013cc6c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0013cc70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013cc8c;
        }
    }
L_0013cc74:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013cc78:;
    {
        cpu->r[14] = 0x0013cc7cu; fn_000b2bc8(cpu);
    }
L_0013cc7c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013cc80:;
    {
        cpu->r[14] = 0x0013cc84u; fn_0018ba20(cpu);
    }
L_0013cc84:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013cc88:;
    {
        wr32(cpu->r[4] + + 0x19cu, cpu->r[3]);
    }
L_0013cc8c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013cc90:;
    {
        cpu->r[14] = 0x0013cc94u; fn_00140fb4(cpu);
    }
L_0013cc94:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013cc98:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        uint32_t t = v5;
        cpu->r[13] += 24u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013cc9cu)) return;
    }
}

/* _ZN9AniMgr_v418ComputeBoundingBoxEPfS0_ @ 0013cca4 (arm) */
void fn_0013cca4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013cca4:;
    {
        cpu->r[13] -= 32u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[9]);
        wr32(cpu->r[13] + 24u, cpu->r[10]);
        wr32(cpu->r[13] + 28u, cpu->r[14]);
    }
L_0013cca8:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0x18u);
    }
L_0013ccac:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_0013ccb0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8u);
    }
L_0013ccb4:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_0013ccb8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0013ccbc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_0013ccc0:;
    {
        cpu->r[6] = rd32(cpu->r[2] + + 0x48u);
    }
L_0013ccc4:;
    {
        cpu->r[10] = rd32(cpu->r[2] + + 0x54u);
    }
L_0013ccc8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[6], shifter(cpu->r[7], 2, 4u, &shc), 0, 0);
    }
L_0013cccc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], 0x00000002u, 0, 0);
    }
L_0013ccd0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x20u);
    }
L_0013ccd4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_0013ccd8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0013ccdc:;
    {
        if (cond_test(cpu, 11)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        uint32_t v6 = rd32(cpu->r[13] + 24u);
        uint32_t v7 = rd32(cpu->r[13] + 28u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        cpu->r[9] = v5;
        cpu->r[10] = v6;
        uint32_t t = v7;
        cpu->r[13] += 32u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013cce0u)) return;
        }
    }
L_0013cce0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_0013cce4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000003u, 0, 0);
    }
L_0013cce8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x14u);
    }
L_0013ccec:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_0013ccf0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0013ccf4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[14] = rd32(cpu->r[4] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_0013ccf8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0013ccfc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[6] + shifter(cpu->r[7], 2, 4u, &shc));
        }
    }
L_0013cd00:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[6] + shifter(cpu->r[7], 2, 4u, &shc));
        }
    }
L_0013cd04:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[14] + cpu->r[12]);
        }
    }
L_0013cd08:;
    {
        cpu->r[14] = 0x0013cd0cu; guest_call(cpu, cpu->r[12]);
    }
L_0013cd0c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_0013cd10:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x14u);
    }
L_0013cd14:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_0013cd18:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0013cd1c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd32(cpu->r[4] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_0013cd20:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0013cd24:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[6] + shifter(cpu->r[7], 2, 4u, &shc));
        }
    }
L_0013cd28:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[6] + shifter(cpu->r[7], 2, 4u, &shc));
        }
    }
L_0013cd2c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[1] + cpu->r[3]);
        }
    }
L_0013cd30:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_0013cd34:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_0013cd38:;
    {
        cpu->r[14] = 0x0013cd3cu; guest_call(cpu, cpu->r[12]);
    }
L_0013cd3c:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_0013cd40:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        uint32_t v6 = rd32(cpu->r[13] + 24u);
        uint32_t v7 = rd32(cpu->r[13] + 28u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        cpu->r[9] = v5;
        cpu->r[10] = v6;
        uint32_t t = v7;
        cpu->r[13] += 32u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013cd44u)) return;
    }
}

/* _ZN9AniMgr_v410UpdateAnimEv @ 0013cd44 (arm) */
void fn_0013cd44(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013cd44:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0013cd48:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0x18u);
    }
L_0013cd4c:;
    {
        cpu->r[3] = rd32(0x0013cd54u + + 0x2e8u);
    }
L_0013cd50:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0013cd54:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0013cd58:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0013cd5c:;
    {
        cpu->r[3] = add_flags(cpu, 0x0013cd64u, cpu->r[3], 0, 0);
    }
L_0013cd60:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0013cf3c;
        }
    }
L_0013cd64:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x2cu);
    }
L_0013cd68:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0013cd6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013cf3c;
        }
    }
L_0013cd70:;
    {
        cpu->r[1] = rd32(0x0013cd78u + + 0x2c8u);
    }
L_0013cd74:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x0013cd7cu + + 0x2a8u);
    }
L_0013cd78:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0xcu);
    }
L_0013cd7c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x28u);
    }
L_0013cd80:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x4u);
    }
L_0013cd84:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0013cd8cu + + 0x29cu);
    }
L_0013cd88:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_0013cd8c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_0013cd90:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_0013cd94:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_0013cd98:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_0013cd9c:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x48u);
    }
L_0013cda0:;
    {
        cpu->r[0] = 0x000014fcu;
    }
L_0013cda4:;
    {
        vfp_sync_flags(cpu);
    }
L_0013cda8:;
    {
        cpu->r[0] = rd32(cpu->r[1] + cpu->r[0]);
    }
L_0013cdac:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], shifter(cpu->r[7], 2, 4u, &shc), 0, 0);
    }
L_0013cdb0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[5] + + 0x10u);
    }
L_0013cdb4:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 0);
    }
L_0013cdb8:;
    {
        uint32_t v = cpu->r[2] * cpu->r[12]; cpu->r[12] = v;
    }
L_0013cdbc:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[12];
    }
L_0013cdc0:;
    {
        *vfp_s(cpu,12) = (float)*(uint32_t*)vfp_s(cpu,12);
    }
L_0013cdc4:;
    {
        vfp_vdiv(cpu, 11, 12, 13);
    }
L_0013cdc8:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x0013cdd0u + + 0x25cu);
    }
L_0013cdcc:;
    {
        *(uint32_t*)vfp_s(cpu,11) = (uint32_t)*vfp_s(cpu,11);
    }
L_0013cdd0:;
    {
        *vfp_s(cpu,11) = (float)*(uint32_t*)vfp_s(cpu,11);
    }
L_0013cdd4:;
    {
        vfp_vmul(cpu, 11, 11, 12);
    }
L_0013cdd8:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x0013cde0u + + 0x250u);
    }
L_0013cddc:;
    {
        vfp_vmul(cpu, 12, 11, 12);
    }
L_0013cde0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_0013cde4:;
    {
        if (cond_test(cpu, 6)) {
        goto L_0013cf44;
        }
    }
L_0013cde8:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x24u);
    }
L_0013cdec:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x0013cdf4u + + 0x240u);
    }
L_0013cdf0:;
    {
        *vfp_s(cpu, 10) = *(float*)G(0x0013cdf8u + + 0x240u);
    }
L_0013cdf4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 0);
    }
L_0013cdf8:;
    {
        cpu->r[12] = 0x00008508u;
    }
L_0013cdfc:;
    {
        uint32_t v = cpu->r[2] * cpu->r[0]; cpu->r[0] = v;
    }
L_0013ce00:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[0];
    }
L_0013ce04:;
    {
        *vfp_s(cpu,11) = (float)*(uint32_t*)vfp_s(cpu,11);
    }
L_0013ce08:;
    {
        cpu->r[12] = rd32(cpu->r[1] + cpu->r[12]);
    }
L_0013ce0c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x20u);
    }
L_0013ce10:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0013ce14:;
    {
        wr32(cpu->r[5] + + 0x28u, cpu->r[1]);
    }
L_0013ce18:;
    {
        vfp_vdiv(cpu, 13, 11, 13);
    }
L_0013ce1c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = (uint32_t)*vfp_s(cpu,13);
    }
L_0013ce20:;
    {
        *vfp_s(cpu,13) = (float)*(uint32_t*)vfp_s(cpu,13);
    }
L_0013ce24:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu,12) = *vfp_s(cpu,10);
        }
    }
L_0013ce28:;
    {
        vfp_vdiv(cpu, 13, 13, 12);
    }
L_0013ce2c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), *vfp_s(cpu,15));
    }
L_0013ce30:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0013ce34:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0013ce38:;
    {
        vfp_sync_flags(cpu);
    }
L_0013ce3c:;
    {
        if (cond_test(cpu, 6)) {
        goto L_0013cf54;
        }
    }
L_0013ce40:;
    {
        cpu->r[1] = rd32(0x0013ce48u + + 0x1fcu);
    }
L_0013ce44:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0013ce48:;
    {
        cpu->r[0] = rd32(0x0013ce50u + + 0x1f8u);
    }
L_0013ce4c:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[2]);
    }
L_0013ce50:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_0013ce54:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_0013ce58:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[2]);
    }
L_0013ce5c:;
    {
        wr32(cpu->r[6] + shifter(cpu->r[7], 2, 4u, &shc), cpu->r[1]);
    }
L_0013ce60:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[3]);
    }
L_0013ce64:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0013ce68:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0x10u);
    }
L_0013ce6c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), *vfp_s(cpu,15));
    }
L_0013ce70:;
    {
        vfp_sync_flags(cpu);
    }
L_0013ce74:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0013ceb8;
        }
    }
L_0013ce78:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x2cu);
    }
L_0013ce7c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0013ce80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013cf74;
        }
    }
L_0013ce84:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0013ceb8;
        }
    }
L_0013ce88:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_0013ce8c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0013ceb8;
        }
    }
L_0013ce90:;
    {
        vfp_vdiv(cpu, 15, 13, 15);
    }
L_0013ce94:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,14);
    }
L_0013ce98:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0013ce9c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0013cea0:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[2] = v;
    }
L_0013cea4:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[2];
    }
L_0013cea8:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0013ceac:;
    {
        vfp_vsub(cpu, 15, 13, 15);
    }
L_0013ceb0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013ceb4:;
    {
        goto L_0013cebc;
    }
L_0013ceb8:;
    {
        *vfp_s(cpu,15) = *vfp_s(cpu,13);
    }
L_0013cebc:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0013cec0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8u);
    }
L_0013cec4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x20u);
    }
L_0013cec8:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x54u);
    }
L_0013cecc:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_0013ced0:;
    {
        vfp_vdiv(cpu, 15, 15, 14);
    }
L_0013ced4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013ced8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0013cfec;
        }
    }
L_0013cedc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x4u);
    }
L_0013cee0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000030u, 0, 0);
    }
L_0013cee4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0013cee8:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_0013ceec:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[5], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0013cef0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[5] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_0013cef4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[5], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0013cef8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[6] + shifter(cpu->r[7], 2, 4u, &shc));
        }
    }
L_0013cefc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[6] + shifter(cpu->r[7], 2, 4u, &shc));
        }
    }
L_0013cf00:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[2]);
        }
    }
L_0013cf04:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0013cf08:;
    {
        cpu->r[14] = 0x0013cf0cu; guest_call(cpu, cpu->r[12]);
    }
L_0013cf0c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x4u);
    }
L_0013cf10:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x0000003cu, 0, 0);
    }
L_0013cf14:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x14u);
    }
L_0013cf18:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_0013cf1c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[5], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0013cf20:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[5] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_0013cf24:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[5], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0013cf28:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd32(cpu->r[6] + shifter(cpu->r[7], 2, 4u, &shc));
        }
    }
L_0013cf2c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[6] + shifter(cpu->r[7], 2, 4u, &shc));
        }
    }
L_0013cf30:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[1]);
        }
    }
L_0013cf34:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_0013cf38:;
    {
        cpu->r[14] = 0x0013cf3cu; guest_call(cpu, cpu->r[12]);
    }
L_0013cf3c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0013cf40:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        uint32_t t = v5;
        cpu->r[13] += 24u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013cf44u)) return;
    }
L_0013cf44:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x20u);
    }
L_0013cf48:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013cf4c:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013cf50:;
    {
        wr32(cpu->r[5] + + 0x28u, cpu->r[2]);
    }
L_0013cf54:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0013cf58:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[2]);
    }
L_0013cf5c:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[2]);
    }
L_0013cf60:;
    {
        cpu->r[2] = rd32(0x0013cf68u + + 0xe4u);
    }
L_0013cf64:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0013cf68:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[3]);
    }
L_0013cf6c:;
    {
        wr32(cpu->r[6] + shifter(cpu->r[7], 2, 4u, &shc), cpu->r[3]);
    }
L_0013cf70:;
    {
        goto L_0013ce64;
    }
L_0013cf74:;
    {
        cpu->r[0] = rd8(cpu->r[4] + + 0xe0u);
    }
L_0013cf78:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013cf7c:;
    {
        if (cond_test(cpu, 2)) {
        *(uint32_t*)G(cpu->r[4] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_0013cf80:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_0013cf84:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
        }
    }
L_0013cf88:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013cebc;
        }
    }
L_0013cf8c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xd8u);
    }
L_0013cf90:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xdcu);
    }
L_0013cf94:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0013cf98:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000bu, 0, 0);
    }
L_0013cf9c:;
    {
        uint32_t v = cpu->r[12] & 0x0000000fu; cpu->r[12] = v;
    }
L_0013cfa0:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 3u, &shc), 0, 0);
    }
L_0013cfa4:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_0013cfa8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + shifter(cpu->r[2], 2, 3u, &shc));
    }
L_0013cfac:;
    {
        cpu->r[2] = rd8(cpu->r[14] + + 0x4u);
    }
L_0013cfb0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = cpu->r[0];
        }
    }
L_0013cfb4:;
    {
        wr32(cpu->r[4] + + 0xd8u, cpu->r[12]);
    }
L_0013cfb8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013cfbc:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[4] + + 0xe0u, cpu->r[3]);
        }
    }
L_0013cfc0:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_0013cfc4:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_0013cfc8:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_0013cfcc:;
    {
        cpu->r[3] = 0x00000064u;
    }
L_0013cfd0:;
    {
        cpu->r[14] = 0x0013cfd8u;
    }
L_0013cfd4:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0013cfd8u)) return;
    }
L_0013cfd8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013cfdc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0013cfe0:;
    {
        cpu->r[14] = 0x0013cfe8u;
    }
L_0013cfe4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x5cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0013cfe8u)) return;
    }
L_0013cfe8:;
    {
        goto L_0013cf3c;
    }
L_0013cfec:;
    {
        cpu->r[1] = rd32(0x0013cff4u + + 0x5cu);
    }
L_0013cff0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0013cff4:;
    {
        cpu->r[12] = rd32(0x0013cffcu + + 0x58u);
    }
L_0013cff8:;
    {
        cpu->r[14] = 0x00000515u;
    }
L_0013cffc:;
    {
        cpu->r[2] = rd32(0x0013d004u + + 0x54u);
    }
L_0013d000:;
    {
        cpu->r[1] = add_flags(cpu, 0x0013d008u, cpu->r[1], 0, 0);
    }
L_0013d004:;
    {
        cpu->r[3] = rd32(0x0013d00cu + + 0x50u);
    }
L_0013d008:;
    {
        cpu->r[12] = add_flags(cpu, 0x0013d010u, cpu->r[12], 0, 0);
    }
L_0013d00c:;
    {
        cpu->r[2] = add_flags(cpu, 0x0013d014u, cpu->r[2], 0, 0);
    }
L_0013d010:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000034u, 0, 0);
    }
L_0013d014:;
    {
        cpu->r[3] = add_flags(cpu, 0x0013d01cu, cpu->r[3], 0, 0);
    }
L_0013d018:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0013d01c:;
    {
        cpu->r[14] = 0x0013d020u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0013d020:;
    {
        goto L_0013cf3c;
    }
}

/* _ZN9AniObj_v418computeGlobalPivotEifP11gxAnimation @ 0013d060 (arm) */
void fn_0013d060(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013d060:;
    {
        cpu->r[13] -= 36u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[9]);
        wr32(cpu->r[13] + 24u, cpu->r[10]);
        wr32(cpu->r[13] + 28u, cpu->r[11]);
        wr32(cpu->r[13] + 32u, cpu->r[14]);
    }
L_0013d064:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0013d068:;
    {
        cpu->r[4] = rd32(0x0013d070u + + 0x2d0u);
    }
L_0013d06c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000084u, 1, 0);
    }
L_0013d070:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0013d074:;
    {
        cpu->r[11] = cpu->r[2];
    }
L_0013d078:;
    {
        cpu->r[4] = add_flags(cpu, 0x0013d080u, cpu->r[4], 0, 0);
    }
L_0013d07c:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_0013d080:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0013d0a8;
        }
    }
L_0013d084:;
    {
        cpu->r[8] = rd32(cpu->r[0] + + 0x30u);
    }
L_0013d088:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 5u, &shc); cpu->r[7] = v;
    }
L_0013d08c:;
    {
        uint32_t v = cpu->r[1] & 0x0000001fu; cpu->r[12] = v;
    }
L_0013d090:;
    {
        cpu->r[10] = rd32(cpu->r[8] + shifter(cpu->r[7], 2, 2u, &shc));
    }
L_0013d094:;
    {
        cpu->r[8] = 0x00000001u;
    }
L_0013d098:;
    {
        uint32_t v = shifter(cpu->r[8], 2, (cpu->r[12] & 0xffu), &shc); cpu->r[8] = v;
    }
L_0013d09c:;
    {
        uint32_t v = cpu->r[8] & cpu->r[10]; cpu->r[10] = v;
        set_nz(cpu, v);
    }
L_0013d0a0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[10]);
    }
L_0013d0a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013d0b0;
        }
    }
L_0013d0a8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000084u, 0, 0);
    }
L_0013d0ac:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        uint32_t v6 = rd32(cpu->r[13] + 24u);
        uint32_t v7 = rd32(cpu->r[13] + 28u);
        uint32_t v8 = rd32(cpu->r[13] + 32u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        cpu->r[9] = v5;
        cpu->r[10] = v6;
        cpu->r[11] = v7;
        uint32_t t = v8;
        cpu->r[13] += 36u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013d0b0u)) return;
    }
L_0013d0b0:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[14] = v;
    }
L_0013d0b4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[14]);
    }
L_0013d0b8:;
    {
        cpu->r[14] = 0x0000004cu;
    }
L_0013d0bc:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x2cu);
    }
L_0013d0c0:;
    {
        uint32_t v = cpu->r[14] * cpu->r[1]; cpu->r[10] = v;
    }
L_0013d0c4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_0013d0c8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_0013d0cc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0013d0d0:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_0013d0d4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[12], cpu->r[10], 0, 0);
    }
L_0013d0d8:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_0013d0dc:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[14]);
    }
L_0013d0e0:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[12] + cpu->r[10]);
    }
L_0013d0e4:;
    {
        cpu->r[14] = 0x0013d0e8u; fn_0013d060(cpu);
    }
L_0013d0e8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013d0ec:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[9] + + 0x2u);
    }
L_0013d0f0:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_0013d0f4:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0013d0f8:;
    {
        cpu->r[14] = 0x0013d0fcu; fn_0013d060(cpu);
    }
L_0013d0fc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_0013d100:;
    {
        cpu->r[3] = 0x0000004cu;
    }
L_0013d104:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x18u);
    }
L_0013d108:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x2cu);
    }
L_0013d10c:;
    {
        cpu->r[1] = rd16(cpu->r[12] + cpu->r[10]);
    }
L_0013d110:;
    {
        cpu->r[10] = rd16(cpu->r[9] + + 0x2u);
    }
L_0013d114:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_0013d118:;
    {
        cpu->r[1] = (uint32_t)((int32_t)(int16_t)(cpu->r[1] & 0xffff) * (int32_t)(int16_t)(cpu->r[3] & 0xffff));
    }
L_0013d11c:;
    {
        cpu->r[10] = (uint32_t)((int32_t)(int16_t)(cpu->r[10] & 0xffff) * (int32_t)(int16_t)(cpu->r[3] & 0xffff));
    }
L_0013d120:;
    {
        cpu->r[3] = rd32(cpu->r[0] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_0013d124:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_0013d128:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_0013d12c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0013d130:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0013d134:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[2], cpu->r[10], 0, 0);
    }
L_0013d138:;
    {
        cpu->r[14] = 0x0013d140u;
    }
L_0013d13c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0013d140u)) return;
    }
L_0013d140:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000005u, 1, 1);
    }
L_0013d144:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013d270;
        }
    }
L_0013d148:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000006u, 1, 1);
    }
L_0013d14c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013d224;
        }
    }
L_0013d150:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0xcu);
    }
L_0013d154:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000064u, 0, 0);
    }
L_0013d158:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_0013d15c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], 0x0000015cu, 0, 0);
    }
L_0013d160:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_0013d164:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[6], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0013d168:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[6] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_0013d16c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[6], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0013d170:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
        }
    }
L_0013d174:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[6] + + 0x8u);
        }
    }
L_0013d178:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_0013d17c:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_0013d180:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_0013d184:;
    {
        cpu->r[14] = 0x0013d188u; guest_call(cpu, cpu->r[12]);
    }
L_0013d188:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x68u);
    }
L_0013d18c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x64u);
    }
L_0013d190:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013d194:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0013d198:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x70u);
    }
L_0013d19c:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013d1a0:;
    {
        cpu->r[14] = 0x0013d1a4u; fn_00153678(cpu);
    }
L_0013d1a4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0013d1a8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_0013d1ac:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0013d1b0:;
    {
        cpu->r[14] = 0x0013d1b4u; fn_00153624(cpu);
    }
L_0013d1b4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_0013d1b8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0013d1bc:;
    {
        cpu->r[14] = 0x0013d1c0u; fn_00153478(cpu);
    }
L_0013d1c0:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x4u);
    }
L_0013d1c4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_0013d1c8:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_0013d1cc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[6], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0013d1d0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[6] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_0013d1d4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[6], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0013d1d8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[6]);
        }
    }
L_0013d1dc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[6]);
        }
    }
L_0013d1e0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_0013d1e4:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_0013d1e8:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_0013d1ec:;
    {
        cpu->r[14] = 0x0013d1f0u; guest_call(cpu, cpu->r[12]);
    }
L_0013d1f0:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_0013d1f4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[10], 0x00000004u, 0, 0);
    }
L_0013d1f8:;
    {
        cpu->r[14] = 0x0013d1fcu; fn_00153c38(cpu);
    }
L_0013d1fc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_0013d200:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x64u);
    }
L_0013d204:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x68u);
    }
L_0013d208:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0013d20c:;
    {
        cpu->r[14] = 0x0013d210u; fn_0015364c(cpu);
    }
L_0013d210:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x30u);
    }
L_0013d214:;
    {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[7], 2, 2u, &shc));
    }
L_0013d218:;
    {
        uint32_t v = cpu->r[2] | cpu->r[8]; cpu->r[8] = v;
    }
L_0013d21c:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[7], 2, 2u, &shc), cpu->r[8]);
    }
L_0013d220:;
    {
        goto L_0013d0a8;
    }
L_0013d224:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0013d228:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000064u, 0, 0);
    }
L_0013d22c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_0013d230:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[14], 0x00000004u, 0, 0);
    }
L_0013d234:;
    {
        cpu->r[14] = 0x0013d238u; fn_00153624(cpu);
    }
L_0013d238:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x4u);
    }
L_0013d23c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_0013d240:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_0013d244:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[6], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0013d248:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[6] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_0013d24c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[6], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0013d250:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[6]);
        }
    }
L_0013d254:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[6]);
        }
    }
L_0013d258:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_0013d25c:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_0013d260:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_0013d264:;
    {
        cpu->r[14] = 0x0013d268u; guest_call(cpu, cpu->r[12]);
    }
L_0013d268:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0013d26c:;
    {
        goto L_0013d1f4;
    }
L_0013d270:;
    {
        cpu->r[3] = rd32(0x0013d278u + + 0xccu);
    }
L_0013d274:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_0013d278:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xcu);
    }
L_0013d27c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0013d280:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0013d284:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000074u, 0, 0);
    }
L_0013d288:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[14]);
    }
L_0013d28c:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_0013d290:;
    {
        cpu->r[3] = 0x00001314u;
    }
L_0013d294:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0013d298:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000128u, 0, 0);
    }
L_0013d29c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_0013d2a0:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_0013d2a4:;
    {
        cpu->r[14] = 0x0013d2a8u; fn_00153624(cpu);
    }
L_0013d2a8:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0013d2ac:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], 0x00000004u, 0, 0);
    }
L_0013d2b0:;
    {
        cpu->r[14] = 0x0013d2b4u; fn_00153478(cpu);
    }
L_0013d2b4:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x4u);
    }
L_0013d2b8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0013d2c0u + + 0x7cu);
    }
L_0013d2bc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x7cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013d2c0:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_0013d2c4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x74u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013d2c8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x78u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013d2cc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000064u, 0, 0);
    }
L_0013d2d0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[6] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_0013d2d4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[6], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0013d2d8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[6]);
        }
    }
L_0013d2dc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[6], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0013d2e0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[6]);
        }
    }
L_0013d2e4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_0013d2e8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[2]);
        }
    }
L_0013d2ec:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_0013d2f0:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_0013d2f4:;
    {
        cpu->r[14] = 0x0013d2f8u; guest_call(cpu, cpu->r[12]);
    }
L_0013d2f8:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_0013d2fc:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0013d300:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0013d304:;
    {
        cpu->r[14] = 0x0013d308u; fn_001533e4(cpu);
    }
L_0013d308:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_0013d30c:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x18u);
    }
L_0013d310:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_0013d314:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_0013d318:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_0013d31c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_0013d320:;
    {
        cpu->r[14] = 0x0013d324u; fn_00145044(cpu);
    }
L_0013d324:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_0013d328:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0013d32c:;
    {
        cpu->r[14] = 0x0013d330u; fn_001534f0(cpu);
    }
L_0013d330:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0013d334:;
    {
        cpu->r[14] = 0x0013d338u; fn_000b2bc8(cpu);
    }
L_0013d338:;
    {
        goto L_0013d210;
    }
}

/* _ZN9AniMgr_v418ComputeGlobalPivotEi @ 0013d348 (arm) */
void fn_0013d348(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013d348:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_0013d34c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0013d350:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x18u);
    }
L_0013d354:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0013d358:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x14u);
    }
L_0013d35c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x48u);
    }
L_0013d360:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_0013d364:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[12], 2, 4u, &shc), 0, 0);
    }
L_0013d368:;
    {
        return fn_0013d060(cpu);
    }
}

/* _ZN9AniMgr_v410ComputePCHEiP7CMatrixb @ 0013d36c (arm) */
void fn_0013d36c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013d36c:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x8u);
    }
L_0013d370:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_0013d374:;
    {
        cpu->r[13] -= 32u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[9]);
        wr32(cpu->r[13] + 24u, cpu->r[10]);
        wr32(cpu->r[13] + 28u, cpu->r[14]);
    }
L_0013d378:;
    {
        cpu->r[9] = cpu->r[3];
    }
L_0013d37c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x18u);
    }
L_0013d380:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[6] = v;
    }
L_0013d384:;
    {
        cpu->r[7] = rd32(cpu->r[12] + + 0x3cu);
    }
L_0013d388:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0013d38c:;
    {
        cpu->r[1] = rd32(cpu->r[12] + + 0x48u);
    }
L_0013d390:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000050u, 1, 0);
    }
L_0013d394:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0013d398:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_0013d39c:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_0013d3a0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x14u);
    }
L_0013d3a4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 4u, &shc), 0, 0);
    }
L_0013d3a8:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[7] + cpu->r[6]);
    }
L_0013d3ac:;
    {
        cpu->r[14] = 0x0013d3b0u; fn_0013d060(cpu);
    }
L_0013d3b0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_0013d3b4:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[7] + cpu->r[6]);
    }
L_0013d3b8:;
    {
        cpu->r[1] = 0x0000004cu;
    }
L_0013d3bc:;
    {
        cpu->r[8] = rd32(0x0013d3c4u + + 0xc4u);
    }
L_0013d3c0:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_0013d3c4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x2cu);
    }
L_0013d3c8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[7], cpu->r[6], 0, 0);
    }
L_0013d3cc:;
    {
        cpu->r[8] = add_flags(cpu, 0x0013d3d4u, cpu->r[8], 0, 0);
    }
L_0013d3d0:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2] + cpu->r[3]; cpu->r[2] = v;
    }
L_0013d3d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013d478;
        }
    }
L_0013d3d8:;
    {
        cpu->r[3] = rd32(0x0013d3e0u + + 0xacu);
    }
L_0013d3dc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_0013d3e0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0013d3e4:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_0013d3e8:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_0013d3ec:;
    {
        cpu->r[3] = 0x00001314u;
    }
L_0013d3f0:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_0013d3f4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000128u, 0, 0);
    }
L_0013d3f8:;
    {
        cpu->r[14] = 0x0013d3fcu; fn_00153568(cpu);
    }
L_0013d3fc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0013d400:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013d404:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013d408:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[3]);
    }
L_0013d40c:;
    {
        cpu->r[14] = 0x0013d410u; fn_001535e0(cpu);
    }
L_0013d410:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00000010u, 0, 0);
    }
L_0013d414:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_0013d418:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x10u);
    }
L_0013d41c:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x4u);
    }
L_0013d420:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013d424:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x8u);
    }
L_0013d428:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12] + + 0xcu);
    }
L_0013d42c:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013d430:;
    {
        cpu->r[14] = 0x0013d434u; fn_00153678(cpu);
    }
L_0013d434:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4u);
    }
L_0013d438:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013d43c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_0013d440:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x4u);
    }
L_0013d444:;
    {
        cpu->r[14] = 0x0013d448u; fn_0015364c(cpu);
    }
L_0013d448:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0013d44c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0013d450:;
    {
        cpu->r[14] = 0x0013d454u; fn_00153478(cpu);
    }
L_0013d454:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x4cu);
    }
L_0013d458:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0013d45c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013d470;
        }
    }
L_0013d460:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013d464:;
    {
        cpu->r[14] = 0x0013d468u; fn_000b2bc8(cpu);
    }
L_0013d468:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013d46c:;
    {
        cpu->r[14] = 0x0013d470u; fn_0018ba20(cpu);
    }
L_0013d470:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000050u, 0, 0);
    }
L_0013d474:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        uint32_t v6 = rd32(cpu->r[13] + 24u);
        uint32_t v7 = rd32(cpu->r[13] + 28u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        cpu->r[9] = v5;
        cpu->r[10] = v6;
        uint32_t t = v7;
        cpu->r[13] += 32u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013d478u)) return;
    }
L_0013d478:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_0013d47c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0013d480:;
    {
        cpu->r[14] = 0x0013d484u; fn_00153624(cpu);
    }
L_0013d484:;
    {
        goto L_0013d3fc;
    }
}

/* _ZN8gxAniMtlC2Ev @ 0013d490 (arm) */
void fn_0013d490(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013d490:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_0013d494:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0013d49cu + + 0x48u);
    }
L_0013d498:;
    {
        wr16(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_0013d49c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013d4a0:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013d4a4:;
    {
        wr8(cpu->r[0], cpu->r[2]);
    }
L_0013d4a8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013d4ac:;
    {
        wr8(cpu->r[0] + + 0x1u, cpu->r[2]);
    }
L_0013d4b0:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013d4b4:;
    {
        wr8(cpu->r[0] + + 0x2u, cpu->r[2]);
    }
L_0013d4b8:;
    {
        wr8(cpu->r[0] + + 0x3u, cpu->r[2]);
    }
L_0013d4bc:;
    {
        wr8(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_0013d4c0:;
    {
        wr8(cpu->r[0] + + 0x5u, cpu->r[2]);
    }
L_0013d4c4:;
    {
        wr8(cpu->r[0] + + 0x6u, cpu->r[2]);
    }
L_0013d4c8:;
    {
        wr8(cpu->r[0] + + 0x7u, cpu->r[2]);
    }
L_0013d4cc:;
    {
        wr16(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_0013d4d0:;
    {
        wr16(cpu->r[0] + + 0xau, cpu->r[2]);
    }
L_0013d4d4:;
    {
        wr16(cpu->r[0] + + 0xeu, cpu->r[2]);
    }
L_0013d4d8:;
    {
        wr16(cpu->r[0] + + 0x12u, cpu->r[2]);
    }
L_0013d4dc:;
    {
        wr16(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_0013d4e0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8gxAniMtlC1Ev @ 0013d4e8 (arm) */
void fn_0013d4e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013d4e8:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_0013d4ec:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0013d4f4u + + 0x48u);
    }
L_0013d4f0:;
    {
        wr16(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_0013d4f4:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013d4f8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013d4fc:;
    {
        wr8(cpu->r[0], cpu->r[2]);
    }
L_0013d500:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013d504:;
    {
        wr8(cpu->r[0] + + 0x1u, cpu->r[2]);
    }
L_0013d508:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013d50c:;
    {
        wr8(cpu->r[0] + + 0x2u, cpu->r[2]);
    }
L_0013d510:;
    {
        wr8(cpu->r[0] + + 0x3u, cpu->r[2]);
    }
L_0013d514:;
    {
        wr8(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_0013d518:;
    {
        wr8(cpu->r[0] + + 0x5u, cpu->r[2]);
    }
L_0013d51c:;
    {
        wr8(cpu->r[0] + + 0x6u, cpu->r[2]);
    }
L_0013d520:;
    {
        wr8(cpu->r[0] + + 0x7u, cpu->r[2]);
    }
L_0013d524:;
    {
        wr16(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_0013d528:;
    {
        wr16(cpu->r[0] + + 0xau, cpu->r[2]);
    }
L_0013d52c:;
    {
        wr16(cpu->r[0] + + 0xeu, cpu->r[2]);
    }
L_0013d530:;
    {
        wr16(cpu->r[0] + + 0x12u, cpu->r[2]);
    }
L_0013d534:;
    {
        wr16(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_0013d538:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8gxAniMtlD2Ev @ 0013d540 (arm) */
void fn_0013d540(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013d540:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8gxAniMtlD1Ev @ 0013d544 (arm) */
void fn_0013d544(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013d544:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8gxAniMtl18ResetTextureMatrixEv @ 0013d548 (arm) */
void fn_0013d548(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013d548:;
    {
        cpu->r[3] = rd32(0x0013d550u + + 0x74u);
    }
L_0013d54c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x18u);
    }
L_0013d550:;
    {
        cpu->r[2] = rd32(0x0013d558u + + 0x70u);
    }
L_0013d554:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_0013d558:;
    {
        cpu->r[3] = add_flags(cpu, 0x0013d560u, cpu->r[3], 0, 0);
    }
L_0013d55c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0013d560:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0013d564:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0013d568:;
    {
        vfp_sync_flags(cpu);
    }
L_0013d56c:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_0013d570:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013d5b4;
        }
    }
L_0013d574:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x20u);
    }
L_0013d578:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_0013d57c:;
    {
        vfp_sync_flags(cpu);
    }
L_0013d580:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013d5b4;
        }
    }
L_0013d584:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x1cu);
    }
L_0013d588:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_0013d58c:;
    {
        vfp_sync_flags(cpu);
    }
L_0013d590:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013d5a4;
        }
    }
L_0013d594:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x24u);
    }
L_0013d598:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_0013d59c:;
    {
        vfp_sync_flags(cpu);
    }
L_0013d5a0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        uint32_t t = v3;
        cpu->r[13] += 16u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013d5a4u)) return;
        }
    }
L_0013d5a4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013d5a8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0013d5ac:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[14] = v3;
        cpu->r[13] += 16u;
    }
L_0013d5b0:;
    {
        return fn_0012e304(cpu);
    }
L_0013d5b4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013d5b8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0013d5bc:;
    {
        cpu->r[14] = 0x0013d5c0u; fn_0012e304(cpu);
    }
L_0013d5c0:;
    {
        goto L_0013d584;
    }
}

/* _ZN8gxAniMtl3SetEv @ 0013d5cc (arm) */
void fn_0013d5cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013d5cc:;
    {
        cpu->r[3] = rd32(0x0013d5d4u + + 0xe4u);
    }
L_0013d5d0:;
    {
        cpu->r[2] = rd32(0x0013d5d8u + + 0xe4u);
    }
L_0013d5d4:;
    {
        cpu->r[3] = add_flags(cpu, 0x0013d5dcu, cpu->r[3], 0, 0);
    }
L_0013d5d8:;
    {
        cpu->r[12] = rd16(cpu->r[0] + + 0x8u);
    }
L_0013d5dc:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_0013d5e0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0013d5e4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0013d5e8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0013d5ec:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_0013d5f0:;
    {
        cpu->r[3] = 0x0000128cu;
    }
L_0013d5f4:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0013d5f8:;
    {
        cpu->r[3] = 0x00001288u;
    }
L_0013d5fc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0013d600:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0013d604:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = (uint32_t)((int16_t)cpu->r[12]);
        }
    }
L_0013d608:;
    {
        cpu->r[14] = 0x0013d60cu; fn_0014814c(cpu);
    }
L_0013d60c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0xau);
    }
L_0013d610:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013d614:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013d6a4;
        }
    }
L_0013d618:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x18u);
    }
L_0013d61c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_0013d620:;
    {
        vfp_sync_flags(cpu);
    }
L_0013d624:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013d680;
        }
    }
L_0013d628:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x20u);
    }
L_0013d62c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), 0.0f);
    }
L_0013d630:;
    {
        vfp_sync_flags(cpu);
    }
L_0013d634:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013d684;
        }
    }
L_0013d638:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x1cu);
    }
L_0013d63c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_0013d640:;
    {
        vfp_sync_flags(cpu);
    }
L_0013d644:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x24u);
        }
    }
L_0013d648:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013d65c;
        }
    }
L_0013d64c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x24u);
    }
L_0013d650:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), 0.0f);
    }
L_0013d654:;
    {
        vfp_sync_flags(cpu);
    }
L_0013d658:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013d678;
        }
    }
L_0013d65c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013d660:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0013d664:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,14);
    }
L_0013d668:;
    {
        cpu->r[3] = 0x3f800000u;
    }
L_0013d66c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0013d670:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0013d674:;
    {
        cpu->r[14] = 0x0013d678u; fn_0012e32c(cpu);
    }
L_0013d678:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0013d67c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013d680u)) return;
    }
L_0013d680:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x20u);
    }
L_0013d684:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0013d688:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,14);
    }
L_0013d68c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013d690:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013d694:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0013d698:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0013d69c:;
    {
        cpu->r[14] = 0x0013d6a0u; fn_0012e32c(cpu);
    }
L_0013d6a0:;
    {
        goto L_0013d638;
    }
L_0013d6a4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013d6a8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0013d6ac:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0013d6b0:;
    {
        cpu->r[14] = 0x0013d6b4u; fn_0012ef84(cpu);
    }
L_0013d6b4:;
    {
        goto L_0013d618;
    }
}

/* _ZN8gxAniMtl4loadEP8LZMAFileRi @ 0013d6c0 (arm) */
void fn_0013d6c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013d6c0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0013d6c4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0013d6c8:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_0013d6cc:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0013d6d0:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_0013d6d4:;
    {
        cpu->r[14] = 0x0013d6d8u; fn_000fc650(cpu);
    }
L_0013d6d8:;
    {
        cpu->r[3] = rd32(0x0013d6e0u + + 0x150u);
    }
L_0013d6dc:;
    {
        cpu->r[2] = rd32(0x0013d6e4u + + 0x150u);
    }
L_0013d6e0:;
    {
        cpu->r[3] = add_flags(cpu, 0x0013d6e8u, cpu->r[3], 0, 0);
    }
L_0013d6e4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0013d6e8:;
    {
        cpu->r[7] = rd32(cpu->r[3]);
    }
L_0013d6ec:;
    {
        wr16(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_0013d6f0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013d6f4:;
    {
        cpu->r[14] = 0x0013d6f8u; fn_000fc650(cpu);
    }
L_0013d6f8:;
    {
        cpu->r[3] = 0x00001288u;
    }
L_0013d6fc:;
    {
        cpu->r[1] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_0013d700:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_0013d704:;
    {
        cpu->r[14] = 0x0013d708u; fn_00147ca4(cpu);
    }
L_0013d708:;
    {
        wr16(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_0013d70c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013d710:;
    {
        cpu->r[14] = 0x0013d714u; fn_000fc5fc(cpu);
    }
L_0013d714:;
    {
        cpu->r[2] = 0x3f800000u;
    }
L_0013d718:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0013d71c:;
    {
        cpu->r[14] = 0x0013d720u; fn_000963c0(cpu);
    }
L_0013d720:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0013d728u + + 0x104u);
    }
L_0013d724:;
    {
        cpu->r[3] = rd16(cpu->r[4] + + 0xcu);
    }
L_0013d728:;
    {
        cpu->r[2] = (uint32_t)((int16_t)cpu->r[3]);
    }
L_0013d72c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0013d730:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0013d734:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_0013d738:;
    {
        *(uint32_t*)vfp_s(cpu,15) = (uint32_t)*vfp_s(cpu,15);
    }
L_0013d73c:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0013d740:;
    {
        wr8(cpu->r[4] + + 0x3u, cpu->r[2]);
    }
L_0013d744:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013d7f8;
        }
    }
L_0013d748:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_0013d74c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0013d750:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013d800;
        }
    }
L_0013d754:;
    {
        { uint32_t v = cpu->r[3] & 0x00000002u; set_nz(cpu, v); }
    }
L_0013d758:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013d7a8;
        }
    }
L_0013d75c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013d760:;
    {
        cpu->r[14] = 0x0013d764u; fn_000fc650(cpu);
    }
L_0013d764:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0013d768:;
    {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_0013d76c:;
    {
        wr16(cpu->r[4] + + 0xeu, cpu->r[0]);
    }
L_0013d770:;
    {
        cpu->r[0] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_0013d774:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0013d778:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
        }
    }
L_0013d77c:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[6], cpu->r[0]);
        }
    }
L_0013d780:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013d784:;
    {
        cpu->r[14] = 0x0013d788u; fn_000fc650(cpu);
    }
L_0013d788:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0013d78c:;
    {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_0013d790:;
    {
        wr16(cpu->r[4] + + 0x10u, cpu->r[0]);
    }
L_0013d794:;
    {
        cpu->r[0] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_0013d798:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_0013d79c:;
    {
        cpu->r[3] = rd16(cpu->r[4] + + 0xcu);
    }
L_0013d7a0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
        }
    }
L_0013d7a4:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[6], cpu->r[0]);
        }
    }
L_0013d7a8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000004u; set_nz(cpu, v); }
    }
L_0013d7ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013d7f8;
        }
    }
L_0013d7b0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013d7b4:;
    {
        cpu->r[14] = 0x0013d7b8u; fn_000fc650(cpu);
    }
L_0013d7b8:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0013d7bc:;
    {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_0013d7c0:;
    {
        wr16(cpu->r[4] + + 0x12u, cpu->r[0]);
    }
L_0013d7c4:;
    {
        cpu->r[0] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_0013d7c8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_0013d7cc:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
        }
    }
L_0013d7d0:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[6], cpu->r[0]);
        }
    }
L_0013d7d4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013d7d8:;
    {
        cpu->r[14] = 0x0013d7dcu; fn_000fc650(cpu);
    }
L_0013d7dc:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0013d7e0:;
    {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_0013d7e4:;
    {
        wr16(cpu->r[4] + + 0x14u, cpu->r[0]);
    }
L_0013d7e8:;
    {
        cpu->r[0] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_0013d7ec:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_0013d7f0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
        }
    }
L_0013d7f4:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[6], cpu->r[0]);
        }
    }
L_0013d7f8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0013d7fc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        uint32_t t = v5;
        cpu->r[13] += 24u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013d800u)) return;
    }
L_0013d800:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013d804:;
    {
        cpu->r[14] = 0x0013d808u; fn_000fc650(cpu);
    }
L_0013d808:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0013d80c:;
    {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_0013d810:;
    {
        wr16(cpu->r[4] + + 0xau, cpu->r[0]);
    }
L_0013d814:;
    {
        cpu->r[0] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_0013d818:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_0013d81c:;
    {
        cpu->r[3] = rd16(cpu->r[4] + + 0xcu);
    }
L_0013d820:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
        }
    }
L_0013d824:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[6], cpu->r[0]);
        }
    }
L_0013d828:;
    {
        goto L_0013d754;
    }
}

/* _ZN9AniObj_v413LoadMaterialsEP8LZMAFile @ 0013d838 (arm) */
void fn_0013d838(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013d838:;
    {
        cpu->r[13] -= 32u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[9]);
        wr32(cpu->r[13] + 24u, cpu->r[10]);
        wr32(cpu->r[13] + 28u, cpu->r[14]);
    }
L_0013d83c:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0013d840:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0013d844:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0013d848:;
    {
        cpu->r[14] = 0x0013d850u;
    }
L_0013d84c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0013d850u)) return;
    }
L_0013d850:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000062u, 1, 1);
    }
L_0013d854:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013d878;
        }
    }
L_0013d858:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0013d85c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013d860:;
    {
        cpu->r[14] = 0x0013d868u;
    }
L_0013d864:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0013d868u)) return;
    }
L_0013d868:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000065u, 1, 1);
    }
L_0013d86c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013d878;
        }
    }
L_0013d870:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0013d874:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        uint32_t v6 = rd32(cpu->r[13] + 24u);
        uint32_t v7 = rd32(cpu->r[13] + 28u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        cpu->r[9] = v5;
        cpu->r[10] = v6;
        uint32_t t = v7;
        cpu->r[13] += 32u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013d878u)) return;
    }
L_0013d878:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013d87c:;
    {
        cpu->r[14] = 0x0013d880u; fn_000fc650(cpu);
    }
L_0013d880:;
    {
        cpu->r[6] = (uint32_t)((int16_t)cpu->r[0]);
    }
L_0013d884:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[6]);
    }
L_0013d888:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_0013d88c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_0013d890:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 3u, &shc); cpu->r[0] = v;
    }
L_0013d894:;
    {
        cpu->r[14] = 0x0013d898u; imp__Znaj(cpu); /* _Znaj */
    }
L_0013d898:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0013d89c:;
    {
        cpu->r[3] = 0x00000028u;
    }
L_0013d8a0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = 0x00000000u;
        }
    }
L_0013d8a4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_0013d8a8:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[3]);
        wr32(ea + 4u, cpu->r[6]);
    }
L_0013d8ac:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[8] = cpu->r[10];
        }
    }
L_0013d8b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013d8cc;
        }
    }
L_0013d8b4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0013d8b8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0013d8bc:;
    {
        cpu->r[14] = 0x0013d8c0u; fn_0013d4e8(cpu);
    }
L_0013d8c0:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 1);
    }
L_0013d8c4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000028u, 0, 0);
    }
L_0013d8c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013d8b4;
        }
    }
L_0013d8cc:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0013d8d0:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[10]);
    }
L_0013d8d4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_0013d8d8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        uint32_t v6 = rd32(cpu->r[13] + 24u);
        uint32_t v7 = rd32(cpu->r[13] + 28u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        cpu->r[9] = v5;
        cpu->r[10] = v6;
        uint32_t t = v7;
        cpu->r[13] += 32u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013d8dcu)) return;
        }
    }
L_0013d8dc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x40u);
    }
L_0013d8e0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013d8e4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013d870;
        }
    }
L_0013d8e8:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0013d8ec:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[4], 0x00000054u, 0, 0);
    }
L_0013d8f0:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_0013d8f4:;
    {
        goto L_0013d908;
    }
L_0013d8f8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x40u);
    }
L_0013d8fc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_0013d900:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013d870;
        }
    }
L_0013d904:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x44u);
    }
L_0013d908:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[10], cpu->r[6], 0, 0);
    }
L_0013d90c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0013d910:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0013d914:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0013d918:;
    {
        cpu->r[14] = 0x0013d91cu; fn_0013d6c0(cpu);
    }
L_0013d91c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000028u, 0, 0);
    }
L_0013d920:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013d924:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0013d8f8;
        }
    }
L_0013d928:;
    {
        cpu->r[0] = (~0x00000001u);
    }
L_0013d92c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        uint32_t v6 = rd32(cpu->r[13] + 24u);
        uint32_t v7 = rd32(cpu->r[13] + 28u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        cpu->r[9] = v5;
        cpu->r[10] = v6;
        uint32_t t = v7;
        cpu->r[13] += 32u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013d930u)) return;
    }
}

/* _ZN8gxAniMtl4evalEP11gxAnimationf @ 0013d930 (arm) */
void fn_0013d930(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013d930:;
    {
        cpu->r[13] -= 28u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[10]);
        wr32(cpu->r[13] + 24u, cpu->r[14]);
    }
L_0013d934:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0013d938:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0013d93c:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[0] + + 0xau);
    }
L_0013d940:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0013d944:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0013d948:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_0013d94c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0013d950:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0013d9a8;
        }
    }
L_0013d954:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_0013d958:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_0013d95c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0013d960:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_0013d964:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0013d968:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[4]);
        }
    }
L_0013d96c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[4]);
        }
    }
L_0013d970:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_0013d974:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_0013d978:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_0013d97c:;
    {
        cpu->r[14] = 0x0013d980u; guest_call(cpu, cpu->r[12]);
    }
L_0013d980:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_0013d984:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0013d988:;
    {
        cpu->r[2] = 0x3f800000u;
    }
L_0013d98c:;
    {
        cpu->r[14] = 0x0013d990u; fn_000963c0(cpu);
    }
L_0013d990:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0013d998u + + 0xc0u);
    }
L_0013d994:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0013d998:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_0013d99c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = (uint32_t)*vfp_s(cpu,15);
    }
L_0013d9a0:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0013d9a4:;
    {
        wr8(cpu->r[8] + + 0x3u, cpu->r[3]);
    }
L_0013d9a8:;
    {
        cpu->r[7] = cpu->r[8];
    }
L_0013d9ac:;
    {
        cpu->r[6] = cpu->r[8];
    }
L_0013d9b0:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0013d9b4:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x0013d9bcu + + 0xa0u);
    }
L_0013d9b8:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[6] + + 0xeu);
    }
L_0013d9bc:;
    {
        *(uint32_t*)G(cpu->r[7] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0013d9c0:;
    {
        *(uint32_t*)G(cpu->r[7] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0013d9c4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0013d9c8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0013d9fc;
        }
    }
L_0013d9cc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_0013d9d0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000006u, 0, 0);
    }
L_0013d9d4:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_0013d9d8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0013d9dc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0013d9e0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[4] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_0013d9e4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0013d9e8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[4]);
        }
    }
L_0013d9ec:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[4]);
        }
    }
L_0013d9f0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[2]);
        }
    }
L_0013d9f4:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_0013d9f8:;
    {
        cpu->r[14] = 0x0013d9fcu; guest_call(cpu, cpu->r[12]);
    }
L_0013d9fc:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[6] + + 0x12u);
    }
L_0013da00:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0013da04:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0013da38;
        }
    }
L_0013da08:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_0013da0c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_0013da10:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_0013da14:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0013da18:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0013da1c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[4] + shifter(cpu->r[0], 1, 1u, &shc));
        }
    }
L_0013da20:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[4], shifter(cpu->r[0], 1, 1u, &shc), 0, 0);
        }
    }
L_0013da24:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[4]);
        }
    }
L_0013da28:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = rd32(cpu->r[4]);
        }
    }
L_0013da2c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[2]);
        }
    }
L_0013da30:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_0013da34:;
    {
        cpu->r[14] = 0x0013da38u; guest_call(cpu, cpu->r[12]);
    }
L_0013da38:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0013da3c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_0013da40:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000002u, 1, 1);
    }
L_0013da44:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000002u, 0, 0);
    }
L_0013da48:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013d9b8;
        }
    }
L_0013da4c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0013da50:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0013da54:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        uint32_t v6 = rd32(cpu->r[13] + 24u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        cpu->r[10] = v5;
        uint32_t t = v6;
        cpu->r[13] += 28u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013da58u)) return;
    }
}

/* _ZN9AniObj_v48EvalMtlsEP11gxAnimationf @ 0013da60 (arm) */
void fn_0013da60(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013da60:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x40u);
    }
L_0013da64:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0013da68:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013da6c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0013da70:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_0013da74:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_0013da78:;
    {
        if (cond_test(cpu, 14)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        uint32_t t = v5;
        cpu->r[13] += 24u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013da7cu)) return;
        }
    }
L_0013da7c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0013da80:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_0013da84:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x44u);
    }
L_0013da88:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0013da8c:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0013da90:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0013da94:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[4], 0, 0);
    }
L_0013da98:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000028u, 0, 0);
    }
L_0013da9c:;
    {
        cpu->r[14] = 0x0013daa0u; fn_0013d930(cpu);
    }
L_0013daa0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x40u);
    }
L_0013daa4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0013daa8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0013da84;
        }
    }
L_0013daac:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        uint32_t t = v5;
        cpu->r[13] += 24u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013dab0u)) return;
    }
}

/* _ZN9AniMgr_v48EvalMtlsEv @ 0013dab0 (arm) */
void fn_0013dab0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013dab0:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x8u);
    }
L_0013dab4:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0013dab8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x18u);
    }
L_0013dabc:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_0013dac0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x14u);
    }
L_0013dac4:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x48u);
    }
L_0013dac8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0013dacc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 4u, &shc), 0, 0);
    }
L_0013dad0:;
    {
        return fn_0013da60(cpu);
    }
}

/* _ZN9AniObj_v413IsVtxAnimatedEi @ 0013dad4 (arm) */
void fn_0013dad4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013dad4:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[0] + + 0xb0u);
    }
L_0013dad8:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0013dadc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013db14;
        }
    }
L_0013dae0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xc8u);
    }
L_0013dae4:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[0]);
    }
L_0013dae8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0013daec:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_0013daf0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013db04;
        }
    }
L_0013daf4:;
    {
        goto L_0013db1c;
    }
L_0013daf8:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[2]);
    }
L_0013dafc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_0013db00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013db1c;
        }
    }
L_0013db04:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0013db08:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_0013db0c:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[2] = v;
    }
L_0013db10:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0013daf8;
        }
    }
L_0013db14:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0013db18:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0013db1c:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_0013db20:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9AniObj_v414IsVClrAnimatedEi @ 0013db24 (arm) */
void fn_0013db24(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013db24:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[0] + + 0xb2u);
    }
L_0013db28:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0013db2c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013db64;
        }
    }
L_0013db30:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xccu);
    }
L_0013db34:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[0]);
    }
L_0013db38:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0013db3c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_0013db40:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013db54;
        }
    }
L_0013db44:;
    {
        goto L_0013db6c;
    }
L_0013db48:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[2]);
    }
L_0013db4c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_0013db50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013db6c;
        }
    }
L_0013db54:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0013db58:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_0013db5c:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[2] = v;
    }
L_0013db60:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0013db48;
        }
    }
L_0013db64:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0013db68:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0013db6c:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_0013db70:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9AniObj_v413IsTexAnimatedEii @ 0013db74 (arm) */
void fn_0013db74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013db74:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_0013db78:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0xb4u);
    }
L_0013db7c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0013db80:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013dbbc;
        }
    }
L_0013db84:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000034u, 0, 0);
    }
L_0013db88:;
    {
        cpu->r[0] = rd32(cpu->r[0] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_0013db8c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[0]);
    }
L_0013db90:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0013db94:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_0013db98:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013dbac;
        }
    }
L_0013db9c:;
    {
        goto L_0013dbc4;
    }
L_0013dba0:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[1]);
    }
L_0013dba4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_0013dba8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013dbc4;
        }
    }
L_0013dbac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0013dbb0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_0013dbb4:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[1] = v;
    }
L_0013dbb8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0013dba0;
        }
    }
L_0013dbbc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0013dbc0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0013dbc4:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_0013dbc8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9AniObj_v413IsNrmAnimatedEi @ 0013dbcc (arm) */
void fn_0013dbcc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013dbcc:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[0] + + 0xc4u);
    }
L_0013dbd0:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0013dbd4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013dc0c;
        }
    }
L_0013dbd8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xf0u);
    }
L_0013dbdc:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[0]);
    }
L_0013dbe0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0013dbe4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_0013dbe8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013dbfc;
        }
    }
L_0013dbec:;
    {
        goto L_0013dc14;
    }
L_0013dbf0:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[2]);
    }
L_0013dbf4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_0013dbf8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013dc14;
        }
    }
L_0013dbfc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0013dc00:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_0013dc04:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[2] = v;
    }
L_0013dc08:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0013dbf0;
        }
    }
L_0013dc0c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0013dc10:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0013dc14:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_0013dc18:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9AniObj_v413IsTgtAnimatedEi @ 0013dc1c (arm) */
void fn_0013dc1c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013dc1c:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[0] + + 0xc6u);
    }
L_0013dc20:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0013dc24:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013dc5c;
        }
    }
L_0013dc28:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xf4u);
    }
L_0013dc2c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[0]);
    }
L_0013dc30:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0013dc34:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_0013dc38:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013dc4c;
        }
    }
L_0013dc3c:;
    {
        goto L_0013dc64;
    }
L_0013dc40:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[2]);
    }
L_0013dc44:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_0013dc48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013dc64;
        }
    }
L_0013dc4c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0013dc50:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_0013dc54:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[2] = v;
    }
L_0013dc58:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0013dc40;
        }
    }
L_0013dc5c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0013dc60:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0013dc64:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_0013dc68:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9AniObj_v417DelAnimatableCmdsEv @ 0013dc6c (arm) */
void fn_0013dc6c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013dc6c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0013dc70:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0013dc74:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xfcu);
    }
L_0013dc78:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013dc7c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        uint32_t t = v3;
        cpu->r[13] += 16u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013dc80u)) return;
        }
    }
L_0013dc80:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0013dc84:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0013dc88:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013dc8c:;
    {
        cpu->r[4] = rd32(cpu->r[4] + + 0xcu);
    }
L_0013dc90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013dc9c;
        }
    }
L_0013dc94:;
    {
        cpu->r[14] = 0x0013dc98u; fn_0018ba20(cpu);
    }
L_0013dc98:;
    {
        wr32(cpu->r[5] + + 0xfcu, cpu->r[6]);
    }
L_0013dc9c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0013dca0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013dca4:;
    {
        wr32(cpu->r[5] + + 0xfcu, cpu->r[4]);
    }
L_0013dca8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013dc88;
        }
    }
L_0013dcac:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        uint32_t t = v3;
        cpu->r[13] += 16u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013dcb0u)) return;
    }
}

/* _ZN9AniObj_v427InitUpdateSphericalTexCoordEv @ 0013dcb0 (arm) */
void fn_0013dcb0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013dcb0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0013dcb4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0013dcb8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x154u);
    }
L_0013dcbc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013dcc0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013dcd4;
        }
    }
L_0013dcc4:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x60u);
    }
L_0013dcc8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0013dccc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_0013dcd0:;
    {
        imp_memset(cpu); /* tail memset */ return;
    }
L_0013dcd4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x114u);
    }
L_0013dcd8:;
    {
        cpu->r[14] = 0x0013dcdcu; imp__Znaj(cpu); /* _Znaj */
    }
L_0013dcdc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0013dce0:;
    {
        wr32(cpu->r[4] + + 0x154u, cpu->r[0]);
    }
L_0013dce4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013dce8u)) return;
        }
    }
L_0013dce8:;
    {
        goto L_0013dcc4;
    }
}

/* _ZN9AniMgr_v416RenderMeshGroupsEiPh @ 0013dcec (arm) */
void fn_0013dcec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013dcec:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_0013dcf0:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_0013dcf4:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x4u);
    }
L_0013dcf8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_0013dcfc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0013dd08;
        }
    }
L_0013dd00:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_0013dd04:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0013dd08:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x1cu);
    }
L_0013dd0c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0013dd10:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0013dd14:;
    {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_0013dd18:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_0013dd1c:;
    {
        return fn_0013b180(cpu);
    }
}

/* _ZN9AniMgr_v410RenderMeshEij @ 0013dd20 (arm) */
void fn_0013dd20(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013dd20:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_0013dd24:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_0013dd28:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x4u);
    }
L_0013dd2c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_0013dd30:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0013dd3c;
        }
    }
L_0013dd34:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_0013dd38:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0013dd3c:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x1cu);
    }
L_0013dd40:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0013dd44:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0013dd48:;
    {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_0013dd4c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_0013dd50:;
    {
        return fn_0013b198(cpu);
    }
}

/* _ZN9AniObj_v417RunAnimatableCmdsEv @ 0013dd54 (arm) */
void fn_0013dd54(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013dd54:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0013dd58:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0xfcu);
    }
L_0013dd5c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0013dd60:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013dd64u)) return;
        }
    }
L_0013dd64:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_0013dd68:;
    {
        cpu->r[14] = 0x0013dd6cu; imp_memcpy(cpu); /* memcpy */
    }
L_0013dd6c:;
    {
        cpu->r[4] = rd32(cpu->r[4] + + 0xcu);
    }
L_0013dd70:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0013dd74:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013dd64;
        }
    }
L_0013dd78:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013dd7cu)) return;
    }
}

/* _ZN10gxAniGroup14renderDList_v2Eij @ 0013dd7c (arm) */
void fn_0013dd7c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013dd7c:;
    {
        cpu->r[13] -= 36u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[9]);
        wr32(cpu->r[13] + 24u, cpu->r[10]);
        wr32(cpu->r[13] + 28u, cpu->r[11]);
        wr32(cpu->r[13] + 32u, cpu->r[14]);
    }
L_0013dd80:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0013dd84:;
    {
        cpu->r[6] = rd32(0x0013dd8cu + + 0x230u);
    }
L_0013dd88:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_0013dd8c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0013dd90:;
    {
        cpu->r[6] = add_flags(cpu, 0x0013dd98u, cpu->r[6], 0, 0);
    }
L_0013dd94:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0013df3c;
        }
    }
L_0013dd98:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[0] + + 0xcu);
    }
L_0013dd9c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_0013dda0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0013df3c;
        }
    }
L_0013dda4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x4u);
    }
L_0013dda8:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 6u, &shc); cpu->r[2] = v;
    }
L_0013ddac:;
    {
        cpu->r[4] = rd32(cpu->r[7] + + 0x10u);
    }
L_0013ddb0:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[5], 2, 3u, &shc), 1, 0);
    }
L_0013ddb4:;
    {
        cpu->r[2] = rd32(0x0013ddbcu + + 0x204u);
    }
L_0013ddb8:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x18u);
    }
L_0013ddbc:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_0013ddc0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[4], cpu->r[5], 0, 0);
    }
L_0013ddc4:;
    {
        cpu->r[10] = rd8(cpu->r[1] + + 0x100u);
    }
L_0013ddc8:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0013ddcc:;
    {
        cpu->r[8] = rd32(cpu->r[2]);
    }
L_0013ddd0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013df74;
        }
    }
L_0013ddd4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013ddd8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013df84;
        }
    }
L_0013dddc:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[5]);
    }
L_0013dde0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013dde4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013de90;
        }
    }
L_0013dde8:;
    {
        cpu->r[9] = rd32(0x0013ddf0u + + 0x1d4u);
    }
L_0013ddec:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0013ddf0:;
    {
        cpu->r[11] = rd32(0x0013ddf8u + + 0x1d0u);
    }
L_0013ddf4:;
    {
        cpu->r[3] = rd32(0x0013ddfcu + + 0x1d0u);
    }
L_0013ddf8:;
    {
        cpu->r[9] = add_flags(cpu, 0x0013de00u, cpu->r[9], 0, 0);
    }
L_0013ddfc:;
    {
        cpu->r[11] = add_flags(cpu, 0x0013de04u, cpu->r[11], 0, 0);
    }
L_0013de00:;
    {
        cpu->r[3] = add_flags(cpu, 0x0013de08u, cpu->r[3], 0, 0);
    }
L_0013de04:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_0013de08:;
    {
        cpu->r[3] = rd32(0x0013de10u + + 0x1c0u);
    }
L_0013de0c:;
    {
        cpu->r[3] = add_flags(cpu, 0x0013de14u, cpu->r[3], 0, 0);
    }
L_0013de10:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_0013de14:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
    }
L_0013de18:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_0013de1c:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_0013de20:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_0013de24:;
    {
        cpu->r[5] = (uint32_t)(int32_t)s16(cpu->r[0] + + 0x2u);
    }
L_0013de28:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0013de2c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0013de30:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0013de44;
        }
    }
L_0013de34:;
    {
        cpu->r[12] = rd32(cpu->r[7] + + 0x4u);
    }
L_0013de38:;
    {
        cpu->r[14] = rd32(cpu->r[12] + + 0x3cu);
    }
L_0013de3c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[14], 1, 1);
    }
L_0013de40:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0013de5c;
        }
    }
L_0013de44:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_0013de48:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0013de4c:;
    {
        cpu->r[12] = 0x00000412u;
    }
L_0013de50:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0013de54:;
    {
        cpu->r[14] = 0x0013de58u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0013de58:;
    {
        cpu->r[12] = rd32(cpu->r[7] + + 0x4u);
    }
L_0013de5c:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 8u, &shc); cpu->r[14] = v;
    }
L_0013de60:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x40u);
    }
L_0013de64:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0013de68:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_0013de6c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[14], shifter(cpu->r[5], 2, 2u, &shc), 1, 0);
    }
L_0013de70:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0013de74:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[5], 0, 0);
    }
L_0013de78:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0013de7c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x000000b8u, 0, 0);
    }
L_0013de80:;
    {
        cpu->r[14] = 0x0013de84u; fn_0012f078(cpu);
    }
L_0013de84:;
    {
        cpu->r[3] = rd8(cpu->r[6]);
    }
L_0013de88:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_0013de8c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0013de14;
        }
    }
L_0013de90:;
    {
        cpu->r[3] = 0x00001288u;
    }
L_0013de94:;
    {
        cpu->r[0] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_0013de98:;
    {
        cpu->r[14] = 0x0013de9cu; fn_00147cd0(cpu);
    }
L_0013de9c:;
    {
        cpu->r[2] = 0x00001738u;
    }
L_0013dea0:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x1cu);
    }
L_0013dea4:;
    {
        cpu->r[3] = 0x0000173cu;
    }
L_0013dea8:;
    {
        cpu->r[12] = rd32(cpu->r[8] + cpu->r[2]);
    }
L_0013deac:;
    {
        cpu->r[1] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_0013deb0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], cpu->r[0], 0, 0);
    }
L_0013deb4:;
    {
        wr32(cpu->r[8] + cpu->r[2], cpu->r[0]);
    }
L_0013deb8:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x20u);
    }
L_0013debc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_0013dec0:;
    {
        wr32(cpu->r[8] + cpu->r[3], cpu->r[2]);
    }
L_0013dec4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x2cu);
    }
L_0013dec8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013decc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013df18;
        }
    }
L_0013ded0:;
    {
        cpu->r[5] = 0x00000004u;
    }
L_0013ded4:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0013ded8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x4u);
    }
L_0013dedc:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_0013dee0:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x30u);
    }
L_0013dee4:;
    {
        cpu->r[2] = 0x00001403u;
    }
L_0013dee8:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x18u);
    }
L_0013deec:;
    {
        cpu->r[3] = rd32(cpu->r[1] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_0013def0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0013def4:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[5]);
    }
L_0013def8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[0], 0, 0);
    }
L_0013defc:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x110u);
    }
L_0013df00:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_0013df04:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0013df08:;
    {
        cpu->r[14] = 0x0013df0cu; imp_glDrawElements(cpu); /* glDrawElements */
    }
L_0013df0c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x2cu);
    }
L_0013df10:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_0013df14:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0013ded8;
        }
    }
L_0013df18:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0013df1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013df28;
        }
    }
L_0013df20:;
    {
        cpu->r[0] = 0x00001700u;
    }
L_0013df24:;
    {
        cpu->r[14] = 0x0013df28u; imp_glMatrixMode(cpu); /* glMatrixMode */
    }
L_0013df28:;
    {
        cpu->r[3] = 0x00001288u;
    }
L_0013df2c:;
    {
        cpu->r[0] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_0013df30:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_0013df34:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        uint32_t v6 = rd32(cpu->r[13] + 24u);
        uint32_t v7 = rd32(cpu->r[13] + 28u);
        uint32_t v8 = rd32(cpu->r[13] + 32u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        cpu->r[9] = v5;
        cpu->r[10] = v6;
        cpu->r[11] = v7;
        cpu->r[14] = v8;
        cpu->r[13] += 36u;
    }
L_0013df38:;
    {
        return fn_00147cd4(cpu);
    }
L_0013df3c:;
    {
        cpu->r[1] = rd32(0x0013df44u + + 0x90u);
    }
L_0013df40:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0013df44:;
    {
        cpu->r[2] = rd32(0x0013df4cu + + 0x8cu);
    }
L_0013df48:;
    {
        cpu->r[14] = 0x000003fcu;
    }
L_0013df4c:;
    {
        cpu->r[3] = rd32(0x0013df54u + + 0x88u);
    }
L_0013df50:;
    {
        cpu->r[1] = add_flags(cpu, 0x0013df58u, cpu->r[1], 0, 0);
    }
L_0013df54:;
    {
        cpu->r[12] = rd32(0x0013df5cu + + 0x84u);
    }
L_0013df58:;
    {
        cpu->r[2] = add_flags(cpu, 0x0013df60u, cpu->r[2], 0, 0);
    }
L_0013df5c:;
    {
        cpu->r[3] = add_flags(cpu, 0x0013df64u, cpu->r[3], 0, 0);
    }
L_0013df60:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_0013df64:;
    {
        cpu->r[12] = add_flags(cpu, 0x0013df6cu, cpu->r[12], 0, 0);
    }
L_0013df68:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0013df6c:;
    {
        cpu->r[14] = 0x0013df70u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0013df70:;
    {
        goto L_0013dda4;
    }
L_0013df74:;
    {
        cpu->r[0] = 0x00008840u;
    }
L_0013df78:;
    {
        cpu->r[14] = 0x0013df7cu; imp_glMatrixMode(cpu); /* glMatrixMode */
    }
L_0013df7c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x4u);
    }
L_0013df80:;
    {
        goto L_0013ddd4;
    }
L_0013df84:;
    {
        cpu->r[1] = rd32(0x0013df8cu + + 0x58u);
    }
L_0013df88:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0013df8c:;
    {
        cpu->r[2] = rd32(0x0013df94u + + 0x54u);
    }
L_0013df90:;
    {
        cpu->r[14] = 0x0000040du;
    }
L_0013df94:;
    {
        cpu->r[3] = rd32(0x0013df9cu + + 0x50u);
    }
L_0013df98:;
    {
        cpu->r[1] = add_flags(cpu, 0x0013dfa0u, cpu->r[1], 0, 0);
    }
L_0013df9c:;
    {
        cpu->r[12] = rd32(0x0013dfa4u + + 0x4cu);
    }
L_0013dfa0:;
    {
        cpu->r[2] = add_flags(cpu, 0x0013dfa8u, cpu->r[2], 0, 0);
    }
L_0013dfa4:;
    {
        cpu->r[3] = add_flags(cpu, 0x0013dfacu, cpu->r[3], 0, 0);
    }
L_0013dfa8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_0013dfac:;
    {
        cpu->r[12] = add_flags(cpu, 0x0013dfb4u, cpu->r[12], 0, 0);
    }
L_0013dfb0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0013dfb4:;
    {
        cpu->r[14] = 0x0013dfb8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0013dfb8:;
    {
        goto L_0013dddc;
    }
}

/* _ZN9AniObj_v419ClearBuffersFromGPUEv @ 0013dff4 (arm) */
void fn_0013dff4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013dff4:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0013dff8:;
    {
        cpu->r[4] = rd32(0x0013e000u + + 0xb0u);
    }
L_0013dffc:;
    {
        cpu->r[5] = rd32(0x0013e004u + + 0xb0u);
    }
L_0013e000:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0013e004:;
    {
        cpu->r[4] = add_flags(cpu, 0x0013e00cu, cpu->r[4], 0, 0);
    }
L_0013e008:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0013e00c:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0013e010:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_0013e014:;
    {
        cpu->r[14] = 0x0013e018u; fn_0012e1c8(cpu);
    }
L_0013e018:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xa4u);
    }
L_0013e01c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013e020:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013e030;
        }
    }
L_0013e024:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_0013e028:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0013e02c:;
    {
        cpu->r[14] = 0x0013e030u; fn_0012e170(cpu);
    }
L_0013e030:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0013e034:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0013e038:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_0013e03c:;
    {
        cpu->r[14] = 0x0013e040u; fn_0012e19c(cpu);
    }
L_0013e040:;
    {
        cpu->r[4] = rd32(cpu->r[7] + + 0x5cu);
    }
L_0013e044:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0013e048:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013e07c;
        }
    }
L_0013e04c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00008400u, 0, 0);
    }
L_0013e050:;
    {
        cpu->r[6] = 0x000084bfu;
    }
L_0013e054:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x000000bfu, 0, 0);
    }
L_0013e058:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0013e05c:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_0013e060:;
    {
        cpu->r[14] = 0x0013e064u; fn_0012e124(cpu);
    }
L_0013e064:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 0);
    }
L_0013e068:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_0013e06c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0013e070:;
    {
        cpu->r[14] = 0x0013e074u; fn_0012e150(cpu);
    }
L_0013e074:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 1);
    }
L_0013e078:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013e058;
        }
    }
L_0013e07c:;
    {
        cpu->r[2] = rd8(cpu->r[7] + + 0x100u);
    }
L_0013e080:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0013e084:;
    {
        wr32(cpu->r[7] + + 0x1cu, cpu->r[3]);
    }
L_0013e088:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0013e08c:;
    {
        wr32(cpu->r[7] + + 0x18u, cpu->r[3]);
    }
L_0013e090:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        uint32_t t = v5;
        cpu->r[13] += 24u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013e094u)) return;
        }
    }
L_0013e094:;
    {
        cpu->r[0] = 0x000086adu;
    }
L_0013e098:;
    {
        cpu->r[14] = 0x0013e09cu; imp_glDisableClientState(cpu); /* glDisableClientState */
    }
L_0013e09c:;
    {
        cpu->r[0] = 0x00008844u;
    }
L_0013e0a0:;
    {
        cpu->r[14] = 0x0013e0a4u; imp_glDisableClientState(cpu); /* glDisableClientState */
    }
L_0013e0a4:;
    {
        cpu->r[0] = 0x00008840u;
    }
L_0013e0a8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        cpu->r[14] = v5;
        cpu->r[13] += 24u;
    }
L_0013e0ac:;
    {
        imp_glDisable(cpu); /* tail glDisable */ return;
    }
}

/* _ZN9AniObj_v416SendBuffersToGPUEbii @ 0013e0b8 (arm) */
void fn_0013e0b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013e0b8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0013e0bc:;
    {
        cpu->r[5] = rd32(0x0013e0c4u + + 0x26cu);
    }
L_0013e0c0:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0013e0c4:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_0013e0c8:;
    {
        cpu->r[5] = add_flags(cpu, 0x0013e0d0u, cpu->r[5], 0, 0);
    }
L_0013e0cc:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_0013e0d0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0013e0d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013e19c;
        }
    }
L_0013e0d8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x5cu);
    }
L_0013e0dc:;
    {
        add_flags(cpu, cpu->r[2], 0x00000001u, 0, 1);
    }
L_0013e0e0:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
        }
    }
L_0013e0e4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013e13c;
        }
    }
L_0013e0e8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x18u);
    }
L_0013e0ec:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 1);
    }
L_0013e0f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013e13c;
        }
    }
L_0013e0f4:;
    {
        cpu->r[3] = rd32(0x0013e0fcu + + 0x238u);
    }
L_0013e0f8:;
    {
        cpu->r[1] = 0x000084c0u;
    }
L_0013e0fc:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0013e100:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_0013e104:;
    {
        cpu->r[14] = 0x0013e108u; fn_0012e124(cpu);
    }
L_0013e108:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_0013e10c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0013e110:;
    {
        cpu->r[14] = 0x0013e114u; fn_0012e150(cpu);
    }
L_0013e114:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], 0x0000004au, 0, 0);
    }
L_0013e118:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x10cu);
    }
L_0013e11c:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_0013e120:;
    {
        cpu->r[3] = rd32(cpu->r[4] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_0013e124:;
    {
        cpu->r[1] = 0x00001406u;
    }
L_0013e128:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x104u);
    }
L_0013e12c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_0013e130:;
    {
        cpu->r[14] = 0x0013e134u; imp_glTexCoordPointer(cpu); /* glTexCoordPointer */
    }
L_0013e134:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5cu);
    }
L_0013e138:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[7]);
    }
L_0013e13c:;
    {
        add_flags(cpu, cpu->r[6], 0x00000001u, 0, 1);
    }
L_0013e140:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
        }
    }
L_0013e144:;
    {
        if (cond_test(cpu, 14)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        uint32_t t = v5;
        cpu->r[13] += 24u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013e148u)) return;
        }
    }
L_0013e148:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1cu);
    }
L_0013e14c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_0013e150:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        uint32_t t = v5;
        cpu->r[13] += 24u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013e154u)) return;
        }
    }
L_0013e154:;
    {
        cpu->r[3] = rd32(0x0013e15cu + + 0x1d8u);
    }
L_0013e158:;
    {
        cpu->r[1] = 0x000084c1u;
    }
L_0013e15c:;
    {
        cpu->r[5] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0013e160:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_0013e164:;
    {
        cpu->r[14] = 0x0013e168u; fn_0012e124(cpu);
    }
L_0013e168:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_0013e16c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0013e170:;
    {
        cpu->r[14] = 0x0013e174u; fn_0012e150(cpu);
    }
L_0013e174:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], 0x0000004au, 0, 0);
    }
L_0013e178:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x10cu);
    }
L_0013e17c:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_0013e180:;
    {
        cpu->r[3] = rd32(cpu->r[4] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_0013e184:;
    {
        cpu->r[1] = 0x00001406u;
    }
L_0013e188:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x104u);
    }
L_0013e18c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_0013e190:;
    {
        cpu->r[14] = 0x0013e194u; imp_glTexCoordPointer(cpu); /* glTexCoordPointer */
    }
L_0013e194:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[6]);
    }
L_0013e198:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        uint32_t t = v5;
        cpu->r[13] += 24u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013e19cu)) return;
    }
L_0013e19c:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0013e1a0:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[3]);
    }
L_0013e1a4:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[3]);
    }
L_0013e1a8:;
    {
        cpu->r[14] = 0x0013e1acu; fn_0013dd54(cpu);
    }
L_0013e1ac:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x100u);
    }
L_0013e1b0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013e1b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013e2cc;
        }
    }
L_0013e1b8:;
    {
        cpu->r[6] = rd32(0x0013e1c0u + + 0x174u);
    }
L_0013e1bc:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0013e1c0:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0013e1c4:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_0013e1c8:;
    {
        cpu->r[14] = 0x0013e1ccu; fn_0012e1c8(cpu);
    }
L_0013e1cc:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x10cu);
    }
L_0013e1d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x120u);
    }
L_0013e1d4:;
    {
        cpu->r[0] = 0x00000003u;
    }
L_0013e1d8:;
    {
        cpu->r[1] = 0x00001406u;
    }
L_0013e1dc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x104u);
    }
L_0013e1e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_0013e1e4:;
    {
        cpu->r[14] = 0x0013e1e8u; imp_glVertexPointer(cpu); /* glVertexPointer */
    }
L_0013e1e8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xa4u);
    }
L_0013e1ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013e1f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013e218;
        }
    }
L_0013e1f4:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_0013e1f8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0013e1fc:;
    {
        cpu->r[14] = 0x0013e200u; fn_0012e170(cpu);
    }
L_0013e200:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10cu);
    }
L_0013e204:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x148u);
    }
L_0013e208:;
    {
        cpu->r[0] = 0x00001406u;
    }
L_0013e20c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x104u);
    }
L_0013e210:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_0013e214:;
    {
        cpu->r[14] = 0x0013e218u; imp_glNormalPointer(cpu); /* glNormalPointer */
    }
L_0013e218:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_0013e21c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013e220:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013e250;
        }
    }
L_0013e224:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0013e228:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0013e22c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0013e230:;
    {
        cpu->r[14] = 0x0013e234u; fn_0012e19c(cpu);
    }
L_0013e234:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x10cu);
    }
L_0013e238:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x124u);
    }
L_0013e23c:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_0013e240:;
    {
        cpu->r[1] = 0x00001401u;
    }
L_0013e244:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x104u);
    }
L_0013e248:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_0013e24c:;
    {
        cpu->r[14] = 0x0013e250u; imp_glColorPointer(cpu); /* glColorPointer */
    }
L_0013e250:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x5cu);
    }
L_0013e254:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0013e258:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[3]);
    }
L_0013e25c:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000002u, 1, 1);
    }
L_0013e260:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[8] = 0x00000002u;
        }
    }
L_0013e264:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_0013e268:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0013e26c:;
    {
        if (cond_test(cpu, 14)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        uint32_t t = v5;
        cpu->r[13] += 24u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013e270u)) return;
        }
    }
L_0013e270:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0013e274:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_0013e278:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0013e27c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00008400u, 0, 0);
    }
L_0013e280:;
    {
        wr32(cpu->r[6] + + 0x18u, cpu->r[5]);
    }
L_0013e284:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x000000c0u, 0, 0);
    }
L_0013e288:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_0013e28c:;
    {
        cpu->r[14] = 0x0013e290u; fn_0012e124(cpu);
    }
L_0013e290:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0013e294:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_0013e298:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[1], 0, 0);
    }
L_0013e29c:;
    {
        cpu->r[14] = 0x0013e2a0u; fn_0012e150(cpu);
    }
L_0013e2a0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x128u);
    }
L_0013e2a4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x10cu);
    }
L_0013e2a8:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_0013e2ac:;
    {
        cpu->r[1] = 0x00001406u;
    }
L_0013e2b0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x104u);
    }
L_0013e2b4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_0013e2b8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_0013e2bc:;
    {
        cpu->r[14] = 0x0013e2c0u; imp_glTexCoordPointer(cpu); /* glTexCoordPointer */
    }
L_0013e2c0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[8], 1, 1);
    }
L_0013e2c4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013e27c;
        }
    }
L_0013e2c8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        uint32_t t = v5;
        cpu->r[13] += 24u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013e2ccu)) return;
    }
L_0013e2cc:;
    {
        cpu->r[0] = 0x00008840u;
    }
L_0013e2d0:;
    {
        cpu->r[14] = 0x0013e2d4u; imp_glEnable(cpu); /* glEnable */
    }
L_0013e2d4:;
    {
        cpu->r[0] = 0x00008844u;
    }
L_0013e2d8:;
    {
        cpu->r[14] = 0x0013e2dcu; imp_glEnableClientState(cpu); /* glEnableClientState */
    }
L_0013e2dc:;
    {
        cpu->r[0] = 0x000086adu;
    }
L_0013e2e0:;
    {
        cpu->r[14] = 0x0013e2e4u; imp_glEnableClientState(cpu); /* glEnableClientState */
    }
L_0013e2e4:;
    {
        cpu->r[6] = rd8(cpu->r[4] + + 0x158u);
    }
L_0013e2e8:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x108u);
    }
L_0013e2ec:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0013e2f0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0013e2f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x118u);
    }
L_0013e2f8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = 0x0000001eu;
        }
    }
L_0013e2fc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = 0x00000001u;
        }
    }
L_0013e300:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0013e304:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_0013e308:;
    {
        cpu->r[1] = 0x00001401u;
    }
L_0013e30c:;
    {
        cpu->r[14] = 0x0013e310u; imp_glMatrixIndexPointerOES(cpu); /* glMatrixIndexPointerOES */
    }
L_0013e310:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x108u);
    }
L_0013e314:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x11cu);
    }
L_0013e318:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0013e31c:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0013e320:;
    {
        cpu->r[1] = 0x00001406u;
    }
L_0013e324:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_0013e328:;
    {
        cpu->r[14] = 0x0013e32cu; imp_glWeightPointerOES(cpu); /* glWeightPointerOES */
    }
L_0013e32c:;
    {
        goto L_0013e1b8;
    }
}

/* _ZN10gxAniGroup9render_v2EPPP7Texturej @ 0013e338 (arm) */
void fn_0013e338(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013e338:;
    {
        cpu->r[13] -= 40u;
        wr32(cpu->r[13] + 0u, cpu->r[3]);
        wr32(cpu->r[13] + 4u, cpu->r[4]);
        wr32(cpu->r[13] + 8u, cpu->r[5]);
        wr32(cpu->r[13] + 12u, cpu->r[6]);
        wr32(cpu->r[13] + 16u, cpu->r[7]);
        wr32(cpu->r[13] + 20u, cpu->r[8]);
        wr32(cpu->r[13] + 24u, cpu->r[9]);
        wr32(cpu->r[13] + 28u, cpu->r[10]);
        wr32(cpu->r[13] + 32u, cpu->r[11]);
        wr32(cpu->r[13] + 36u, cpu->r[14]);
    }
L_0013e33c:;
    {
        cpu->r[3] = rd32(0x0013e344u + + 0x16cu);
    }
L_0013e340:;
    {
        cpu->r[11] = cpu->r[1];
    }
L_0013e344:;
    {
        cpu->r[1] = rd32(0x0013e34cu + + 0x168u);
    }
L_0013e348:;
    {
        cpu->r[3] = add_flags(cpu, 0x0013e350u, cpu->r[3], 0, 0);
    }
L_0013e34c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0013e350:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_0013e354:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_0013e358:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_0013e35c:;
    {
        cpu->r[2] = rd16(cpu->r[0] + + 0x8u);
    }
L_0013e360:;
    {
        cpu->r[10] = rd32(cpu->r[3]);
    }
L_0013e364:;
    {
        cpu->r[3] = 0x0000128cu;
    }
L_0013e368:;
    {
        cpu->r[1] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_0013e36c:;
    {
        cpu->r[3] = 0x00001288u;
    }
L_0013e370:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0013e374:;
    {
        cpu->r[0] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_0013e378:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = (uint32_t)((int16_t)cpu->r[2]);
        }
    }
L_0013e37c:;
    {
        cpu->r[14] = 0x0013e380u; fn_00147cd8(cpu);
    }
L_0013e380:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_0013e384:;
    {
        cpu->r[14] = 0x0013e388u; fn_00147a48(cpu);
    }
L_0013e388:;
    {
        cpu->r[8] = rd8(cpu->r[4] + + 0x15u);
    }
L_0013e38c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[8], 1, 1);
    }
L_0013e390:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0013e474;
        }
    }
L_0013e394:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0013e398:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013e3d4;
        }
    }
L_0013e39c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[10], 0x00001740u, 0, 0);
    }
L_0013e3a0:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0013e3a4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000001cu, 0, 0);
    }
L_0013e3a8:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_0013e3ac:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_0013e3b0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0013e3b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013e484;
        }
    }
L_0013e3b8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0013e3bc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0013e3c0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0013e3c4:;
    {
        cpu->r[14] = 0x0013e3c8u; fn_0012f12c(cpu);
    }
L_0013e3c8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0013e3cc:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[8], 1, 1);
    }
L_0013e3d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013e3a8;
        }
    }
L_0013e3d4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0013e3d8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_0013e3dc:;
    {
        cpu->r[14] = 0x0013e3e0u; fn_0012e230(cpu);
    }
L_0013e3e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_0013e3e4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0013e3e8:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0013e3ec:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0013e3f0:;
    {
        cpu->r[5] = rd32(cpu->r[3] + + 0x18u);
    }
L_0013e3f4:;
    {
        cpu->r[14] = 0x0013e3f8u; fn_00147a80(cpu);
    }
L_0013e3f8:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0013e3fc:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0013e400:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0013e404:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0013e408:;
    {
        cpu->r[14] = 0x0013e40cu; fn_00147a80(cpu);
    }
L_0013e40c:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0013e410:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0013e414:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0013e418:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0013e41c:;
    {
        cpu->r[14] = 0x0013e420u; fn_0013e0b8(cpu);
    }
L_0013e420:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_0013e424:;
    {
        cpu->r[14] = 0x0013e428u; fn_0013d5cc(cpu);
    }
L_0013e428:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0xcu);
    }
L_0013e42c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013e430:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013e458;
        }
    }
L_0013e434:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0013e438:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0013e43c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013e440:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0013e444:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0013e448:;
    {
        cpu->r[14] = 0x0013e44cu; fn_0013dd7c(cpu);
    }
L_0013e44c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0xcu);
    }
L_0013e450:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0013e454:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0013e438;
        }
    }
L_0013e458:;
    {
        cpu->r[3] = 0x00001288u;
    }
L_0013e45c:;
    {
        cpu->r[0] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_0013e460:;
    {
        cpu->r[14] = 0x0013e464u; fn_00147ccc(cpu);
    }
L_0013e464:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_0013e468:;
    {
        cpu->r[14] = 0x0013e46cu; fn_0013d548(cpu);
    }
L_0013e46c:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_0013e470:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        uint32_t v6 = rd32(cpu->r[13] + 24u);
        uint32_t v7 = rd32(cpu->r[13] + 28u);
        uint32_t v8 = rd32(cpu->r[13] + 32u);
        uint32_t v9 = rd32(cpu->r[13] + 36u);
        cpu->r[3] = v0;
        cpu->r[4] = v1;
        cpu->r[5] = v2;
        cpu->r[6] = v3;
        cpu->r[7] = v4;
        cpu->r[8] = v5;
        cpu->r[9] = v6;
        cpu->r[10] = v7;
        cpu->r[11] = v8;
        uint32_t t = v9;
        cpu->r[13] += 40u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013e474u)) return;
    }
L_0013e474:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0013e478:;
    {
        cpu->r[14] = 0x0013e47cu; fn_00147a48(cpu);
    }
L_0013e47c:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0013e480:;
    {
        goto L_0013e394;
    }
L_0013e484:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0013e488:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x15u);
    }
L_0013e48c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0013e490:;
    {
        cpu->r[14] = 0x0013e494u; fn_00147a50(cpu);
    }
L_0013e494:;
    {
        cpu->r[3] = rd32(cpu->r[11] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_0013e498:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013e49c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013e3c8;
        }
    }
L_0013e4a0:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_0013e4a4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0013e4a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013e3c8;
        }
    }
L_0013e4ac:;
    {
        goto L_0013e3b8;
    }
}

/* _ZN9gxAniMesh9renderXLUEPPP7Texture @ 0013e4b8 (arm) */
void fn_0013e4b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013e4b8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0013e4bc:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x28u);
    }
L_0013e4c0:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0013e4c4:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0013e4c8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        uint32_t t = v3;
        cpu->r[13] += 16u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013e4ccu)) return;
        }
    }
L_0013e4cc:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x2du);
    }
L_0013e4d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013e4d4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0013e4d8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], shifter(cpu->r[1], 2, 4u, &shc), 0, 0);
    }
L_0013e4dc:;
    {
        cpu->r[14] = 0x0013e4e0u; fn_0013e338(cpu);
    }
L_0013e4e0:;
    {
        cpu->r[4] = rd32(cpu->r[4]);
    }
L_0013e4e4:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0013e4e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013e4cc;
        }
    }
L_0013e4ec:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        uint32_t t = v3;
        cpu->r[13] += 16u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013e4f0u)) return;
    }
}

/* _ZN9gxAniMesh9renderOPAEPPP7Texture @ 0013e4f0 (arm) */
void fn_0013e4f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013e4f0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0013e4f4:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x24u);
    }
L_0013e4f8:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0013e4fc:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0013e500:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        uint32_t t = v3;
        cpu->r[13] += 16u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013e504u)) return;
        }
    }
L_0013e504:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x2du);
    }
L_0013e508:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013e50c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0013e510:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], shifter(cpu->r[1], 2, 4u, &shc), 0, 0);
    }
L_0013e514:;
    {
        cpu->r[14] = 0x0013e518u; fn_0013e338(cpu);
    }
L_0013e518:;
    {
        cpu->r[4] = rd32(cpu->r[4]);
    }
L_0013e51c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0013e520:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013e504;
        }
    }
L_0013e524:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        uint32_t t = v3;
        cpu->r[13] += 16u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013e528u)) return;
    }
}

/* _ZN9AniMgr_v415RenderMeshRangeEiib @ 0013e528 (arm) */
void fn_0013e528(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013e528:;
    {
        cpu->r[13] -= 40u;
        wr32(cpu->r[13] + 0u, cpu->r[3]);
        wr32(cpu->r[13] + 4u, cpu->r[4]);
        wr32(cpu->r[13] + 8u, cpu->r[5]);
        wr32(cpu->r[13] + 12u, cpu->r[6]);
        wr32(cpu->r[13] + 16u, cpu->r[7]);
        wr32(cpu->r[13] + 20u, cpu->r[8]);
        wr32(cpu->r[13] + 24u, cpu->r[9]);
        wr32(cpu->r[13] + 28u, cpu->r[10]);
        wr32(cpu->r[13] + 32u, cpu->r[11]);
        wr32(cpu->r[13] + 36u, cpu->r[14]);
    }
L_0013e52c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0013e530:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0013e534:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_0013e538:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        uint32_t v6 = rd32(cpu->r[13] + 24u);
        uint32_t v7 = rd32(cpu->r[13] + 28u);
        uint32_t v8 = rd32(cpu->r[13] + 32u);
        uint32_t v9 = rd32(cpu->r[13] + 36u);
        cpu->r[3] = v0;
        cpu->r[4] = v1;
        cpu->r[5] = v2;
        cpu->r[6] = v3;
        cpu->r[7] = v4;
        cpu->r[8] = v5;
        cpu->r[9] = v6;
        cpu->r[10] = v7;
        cpu->r[11] = v8;
        uint32_t t = v9;
        cpu->r[13] += 40u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013e53cu)) return;
        }
    }
L_0013e53c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_0013e540:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0013e6dc;
        }
    }
L_0013e544:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013e548:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = rd32(cpu->r[0] + + 0x8u);
        }
    }
L_0013e54c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013e69c;
        }
    }
L_0013e550:;
    {
        cpu->r[3] = 0x0000005cu;
    }
L_0013e554:;
    {
        cpu->r[7] = cpu->r[5];
    }
L_0013e558:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[8] = v;
    }
L_0013e55c:;
    {
        cpu->r[10] = rd32(cpu->r[1] + + 0x34u);
    }
L_0013e560:;
    {
        uint32_t v = cpu->r[3] * cpu->r[5]; cpu->r[5] = v;
    }
L_0013e564:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_0013e568:;
    {
        goto L_0013e58c;
    }
L_0013e56c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1cu);
    }
L_0013e570:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0013e574:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0013e578:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_0013e57c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_0013e580:;
    {
        cpu->r[14] = 0x0013e584u; fn_0013e4f0(cpu);
    }
L_0013e584:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 1);
    }
L_0013e588:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013e5f4;
        }
    }
L_0013e58c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0013e590:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0013e594:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013e598:;
    {
        cpu->r[14] = 0x0013e5a0u;
    }
L_0013e59c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0013e5a0u)) return;
    }
L_0013e5a0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_0013e5a4:;
    {
        cpu->r[11] = rd32(cpu->r[3] + + 0x20u);
    }
L_0013e5a8:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[5], 0, 0);
    }
L_0013e5ac:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000005cu, 0, 0);
    }
L_0013e5b0:;
    {
        cpu->r[3] = rd8(cpu->r[11] + + 0x54u);
    }
L_0013e5b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0013e5b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0013e56c;
        }
    }
L_0013e5bc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], shifter(cpu->r[9], 2, 3u, &shc), 0, 0);
    }
L_0013e5c0:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0013e5c4:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[7]);
    }
L_0013e5c8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0013e5cc:;
    {
        cpu->r[14] = 0x0013e5d0u; fn_00139278(cpu);
    }
L_0013e5d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1cu);
    }
L_0013e5d4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_0013e5d8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_0013e5dc:;
    {
        wr32(cpu->r[10] + shifter(cpu->r[9], 2, 3u, &shc), cpu->r[0]);
    }
L_0013e5e0:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0013e5e4:;
    {
        cpu->r[14] = 0x0013e5e8u; fn_0013e4f0(cpu);
    }
L_0013e5e8:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 1);
    }
L_0013e5ec:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_0013e5f0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013e58c;
        }
    }
L_0013e5f4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[9], 0x00000001u, 1, 0);
    }
L_0013e5f8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[10], 0x00000010u, 0, 0);
    }
L_0013e5fc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0013e600:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0013e65c;
        }
    }
L_0013e604:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0013e608:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0013e60c:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_0013e610:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + - 0x8u);
    }
L_0013e614:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + - 0x10u);
    }
L_0013e618:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_0013e61c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0013e620:;
    {
        vfp_sync_flags(cpu);
    }
L_0013e624:;
    {
        if (cond_test(cpu, 6)) {
        goto L_0013e644;
        }
    }
L_0013e628:;
    {
        cpu->r[12] = rd32(cpu->r[3] + - 0x4u);
    }
L_0013e62c:;
    {
        cpu->r[5] = 0x00000001u;
    }
L_0013e630:;
    {
        cpu->r[0] = rd32(cpu->r[3] + - 0xcu);
    }
L_0013e634:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0013e638:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0013e63c:;
    {
        wr32(cpu->r[3] + - 0xcu, cpu->r[12]);
    }
L_0013e640:;
    {
        wr32(cpu->r[3] + - 0x4u, cpu->r[0]);
    }
L_0013e644:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_0013e648:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0013e64c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013e610;
        }
    }
L_0013e650:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0013e654:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_0013e658:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013e5fc;
        }
    }
L_0013e65c:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_0013e660:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        uint32_t v6 = rd32(cpu->r[13] + 24u);
        uint32_t v7 = rd32(cpu->r[13] + 28u);
        uint32_t v8 = rd32(cpu->r[13] + 32u);
        uint32_t v9 = rd32(cpu->r[13] + 36u);
        cpu->r[3] = v0;
        cpu->r[4] = v1;
        cpu->r[5] = v2;
        cpu->r[6] = v3;
        cpu->r[7] = v4;
        cpu->r[8] = v5;
        cpu->r[9] = v6;
        cpu->r[10] = v7;
        cpu->r[11] = v8;
        uint32_t t = v9;
        cpu->r[13] += 40u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013e664u)) return;
        }
    }
L_0013e664:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0013e668:;
    {
        cpu->r[6] = 0x0000005cu;
    }
L_0013e66c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8u);
    }
L_0013e670:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], shifter(cpu->r[5], 2, 3u, &shc), 0, 0);
    }
L_0013e674:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x1cu);
    }
L_0013e678:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0013e67c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_0013e680:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x20u);
    }
L_0013e684:;
    {
        cpu->r[1] = rd32(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_0013e688:;
    {
        uint32_t v = cpu->r[6] * cpu->r[3] + cpu->r[0]; cpu->r[0] = v;
    }
L_0013e68c:;
    {
        cpu->r[14] = 0x0013e690u; fn_0013e4b8(cpu);
    }
L_0013e690:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[9], 1, 1);
    }
L_0013e694:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013e66c;
        }
    }
L_0013e698:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        uint32_t v6 = rd32(cpu->r[13] + 24u);
        uint32_t v7 = rd32(cpu->r[13] + 28u);
        uint32_t v8 = rd32(cpu->r[13] + 32u);
        uint32_t v9 = rd32(cpu->r[13] + 36u);
        cpu->r[3] = v0;
        cpu->r[4] = v1;
        cpu->r[5] = v2;
        cpu->r[6] = v3;
        cpu->r[7] = v4;
        cpu->r[8] = v5;
        cpu->r[9] = v6;
        cpu->r[10] = v7;
        cpu->r[11] = v8;
        uint32_t t = v9;
        cpu->r[13] += 40u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013e69cu)) return;
    }
L_0013e69c:;
    {
        cpu->r[7] = cpu->r[5];
    }
L_0013e6a0:;
    {
        cpu->r[8] = 0x00000001u;
    }
L_0013e6a4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0013e6a8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013e6ac:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0013e6b0:;
    {
        cpu->r[14] = 0x0013e6b4u; fn_0013d348(cpu);
    }
L_0013e6b4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8u);
    }
L_0013e6b8:;
    {
        uint32_t v = shifter(cpu->r[7], 1, 5u, &shc); cpu->r[2] = v;
    }
L_0013e6bc:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 1);
    }
L_0013e6c0:;
    {
        uint32_t v = cpu->r[7] & 0x0000001fu; cpu->r[12] = v;
    }
L_0013e6c4:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x30u);
    }
L_0013e6c8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_0013e6cc:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[8], 2, (cpu->r[12] & 0xffu), &shc); cpu->r[0] = v;
    }
L_0013e6d0:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[0]);
    }
L_0013e6d4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013e6a4;
        }
    }
L_0013e6d8:;
    {
        goto L_0013e550;
    }
L_0013e6dc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_0013e6e0:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_0013e6e4:;
    {
        cpu->r[10] = rd32(cpu->r[3] + + 0x34u);
    }
L_0013e6e8:;
    {
        goto L_0013e5f4;
    }
}

/* _ZN9gxAniMesh6renderEPPP7Texturej @ 0013e6ec (arm) */
void fn_0013e6ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013e6ec:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0013e6f0:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0x1cu);
    }
L_0013e6f4:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0013e6f8:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_0013e6fc:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0013e700:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x20u);
    }
L_0013e704:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        uint32_t t = v5;
        cpu->r[13] += 24u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013e708u)) return;
        }
    }
L_0013e708:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0013e70c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0013e710:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0013e714:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0013e718:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0013e71c:;
    {
        cpu->r[14] = 0x0013e720u; fn_0013e338(cpu);
    }
L_0013e720:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[7], 1, 1);
    }
L_0013e724:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000030u, 0, 0);
    }
L_0013e728:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000010u, 0, 0);
    }
L_0013e72c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0013e70c;
        }
    }
L_0013e730:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        uint32_t v4 = rd32(cpu->r[13] + 16u);
        uint32_t v5 = rd32(cpu->r[13] + 20u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[7] = v3;
        cpu->r[8] = v4;
        uint32_t t = v5;
        cpu->r[13] += 24u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013e734u)) return;
    }
}

/* _ZN9AniObj_v416AddAnimatableCmdEv @ 0013e734 (arm) */
void fn_0013e734(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0013e734:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0013e738:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0013e73c:;
    {
        cpu->r[0] = 0x00000010u;
    }
L_0013e740:;
    {
        cpu->r[14] = 0x0013e744u; fn_0018ba6c(cpu);
    }
L_0013e744:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xfcu);
    }
L_0013e748:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_0013e74c:;
    {
        wr32(cpu->r[4] + + 0xfcu, cpu->r[0]);
    }
L_0013e750:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0013e754u)) return;
    }
}
