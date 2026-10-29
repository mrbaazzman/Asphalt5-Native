#include "functions.h"

/* _ZN4CCar20ComputeAITargetSpeedEv @ 00164bd8 (arm) */
void fn_00164bd8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00164bd8:;
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
L_00164bdc:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00164be0:;
    {
        cpu->r[5] = rd32(0x00164be8u + + 0x890u);
    }
L_00164be4:;
    {
        cpu->r[9] = rd32(0x00164becu + + 0x890u);
    }
L_00164be8:;
    {
        cpu->r[2] = 0x00001820u;
    }
L_00164bec:;
    {
        cpu->r[5] = add_flags(cpu, 0x00164bf4u, cpu->r[5], 0, 0);
    }
L_00164bf0:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_00164bf4:;
    {
        cpu->r[2] = rd8(cpu->r[0] + cpu->r[2]);
    }
L_00164bf8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00164bfc:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_00164c00:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_00164c04:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00164c08:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_00164c0c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00164c10:;
    {
        cpu->r[6] = rd32(cpu->r[1]);
    }
L_00164c14:;
    {
        cpu->r[1] = 0x00001be4u;
    }
L_00164c18:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_00164c1c:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[1]);
    }
L_00164c20:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00164c24:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00164c28:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_00164c2c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_00164c30:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_00164c34:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00164c38:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0x4u);
    }
L_00164c3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00164cec;
        }
    }
L_00164c40:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00164c44:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00164c48:;
    {
        uint32_t v = cpu->r[0] & 0x00004000u; cpu->r[0] = v;
        set_nz(cpu, v);
    }
L_00164c4c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00164cec;
        }
    }
L_00164c50:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_00164c54:;
    {
        cpu->r[8] = 0x00000064u;
    }
L_00164c58:;
    {
        uint32_t v = cpu->r[8] * cpu->r[0]; cpu->r[0] = v;
    }
L_00164c5c:;
    {
        cpu->r[14] = 0x00164c60u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00164c60:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_00164c64:;
    {
        cpu->r[3] = rd8(cpu->r[6] + cpu->r[3]);
    }
L_00164c68:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00164c6c:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_00164c70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00164cfc;
        }
    }
L_00164c74:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00164c78:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00164c7c:;
    {
        cpu->r[1] = 0x00000055u;
    }
L_00164c80:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00164c84:;
    {
        cpu->r[14] = 0x00164c88u; fn_0015e144(cpu);
    }
L_00164c88:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_00164c8c:;
    {
        cpu->r[2] = 0x000040b0u;
    }
L_00164c90:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x464u);
    }
L_00164c94:;
    {
        cpu->r[12] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_00164c98:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_00164c9c:;
    {
        cpu->r[3] = 0x0000851fu;
    }
L_00164ca0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00164ca4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x51ebu << 16);
    }
L_00164ca8:;
    {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_00164cac:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[1], 2, 4u, &shc), cpu->r[1], 1, 0);
    }
L_00164cb0:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[2]; cpu->r[5] = (uint32_t)v; cpu->r[1] = (uint32_t)(v >> 32); }
    }
L_00164cb4:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 31u, &shc); cpu->r[2] = v;
    }
L_00164cb8:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[1], 1, 5u, &shc), cpu->r[2], 1, 0);
    }
L_00164cbc:;
    {
        cpu->r[1] = 0x000017c4u;
    }
L_00164cc0:;
    {
        uint32_t v = cpu->r[12] * cpu->r[0]; cpu->r[12] = v;
    }
L_00164cc4:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[12]; cpu->r[11] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_00164cc8:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 31u, &shc); cpu->r[12] = v;
    }
L_00164ccc:;
    {
        cpu->r[12] = sub_flags(cpu, shifter(cpu->r[3], 1, 5u, &shc), cpu->r[12], 1, 0);
    }
L_00164cd0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_00164cd4:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[2]);
        }
    }
L_00164cd8:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[12]);
        }
    }
L_00164cdc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00164ce0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_00164ce4:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00164ce8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00164cecu)) return;
    }
L_00164cec:;
    {
        cpu->r[3] = 0x0000173cu;
    }
L_00164cf0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00164cf4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_00164cf8:;
    {
        goto L_00164c50;
    }
L_00164cfc:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00164d00:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00164d04:;
    {
        cpu->r[14] = 0x00164d0cu;
    }
L_00164d08:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00164d0cu)) return;
    }
L_00164d0c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x484u);
    }
L_00164d10:;
    {
        cpu->r[14] = rd32(cpu->r[7] + + 0x464u);
    }
L_00164d14:;
    {
        { uint32_t v = cpu->r[3] & 0x00001000u; set_nz(cpu, v); }
    }
L_00164d18:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_00164d1c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[0]);
    }
L_00164d20:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
        }
    }
L_00164d24:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00164f04;
        }
    }
L_00164d28:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_00164d2c:;
    {
        cpu->r[8] = 0x0000851fu;
    }
L_00164d30:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x51ebu << 16);
    }
L_00164d34:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00164d38:;
    {
        cpu->r[14] = 0x00164d3cu; fn_000a04f8(cpu);
    }
L_00164d3c:;
    {
        cpu->r[3] = 0x00006667u;
    }
L_00164d40:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x6666u << 16);
    }
L_00164d44:;
    {
        cpu->r[12] = rd32(0x00164d4cu + + 0x734u);
    }
L_00164d48:;
    {
        cpu->r[1] = 0x0000005fu;
    }
L_00164d4c:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_00164d50:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_00164d54:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[0]; cpu->r[14] = (uint32_t)v; cpu->r[11] = (uint32_t)(v >> 32); }
    }
L_00164d58:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 31u, &shc); cpu->r[2] = v;
    }
L_00164d5c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_00164d60:;
    {
        cpu->r[0] = 0x000017b4u;
    }
L_00164d64:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x10u);
    }
L_00164d68:;
    {
        cpu->r[2] = 0x000017c0u;
    }
L_00164d6c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_00164d70:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_00164d74:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00164d78:;
    {
        cpu->r[12] = sub_flags(cpu, shifter(cpu->r[11], 1, 1u, &shc), cpu->r[14], 1, 0);
    }
L_00164d7c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x4u);
    }
L_00164d80:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_00164d84:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00164d88:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xcu);
    }
L_00164d8c:;
    {
        uint32_t v = cpu->r[11] * cpu->r[12]; cpu->r[11] = v;
    }
L_00164d90:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_00164d94:;
    {
        cpu->r[2] = 0x00000063u;
    }
L_00164d98:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[11]);
    }
L_00164d9c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x14u);
    }
L_00164da0:;
    {
        wr32(cpu->r[11], cpu->r[14]);
    }
L_00164da4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_00164da8:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x10u);
    }
L_00164dac:;
    {
        uint32_t v = cpu->r[14] * cpu->r[12]; cpu->r[12] = v;
    }
L_00164db0:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[8] * (int64_t)(int32_t)cpu->r[11]; cpu->r[14] = (uint32_t)v; cpu->r[11] = (uint32_t)(v >> 32); }
    }
L_00164db4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[11]);
    }
L_00164db8:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x10u);
    }
L_00164dbc:;
    {
        uint32_t v = shifter(cpu->r[11], 1, 31u, &shc); cpu->r[11] = v;
    }
L_00164dc0:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_00164dc4:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[8] * (int64_t)(int32_t)cpu->r[12]; cpu->r[11] = (uint32_t)v; cpu->r[14] = (uint32_t)(v >> 32); }
    }
L_00164dc8:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 31u, &shc); cpu->r[12] = v;
    }
L_00164dcc:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00164dd0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_00164dd4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[14]);
    }
L_00164dd8:;
    {
        cpu->r[14] = rd32(cpu->r[13]);
    }
L_00164ddc:;
    {
        cpu->r[12] = sub_flags(cpu, shifter(cpu->r[11], 1, 5u, &shc), cpu->r[14], 1, 0);
    }
L_00164de0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x4u);
    }
L_00164de4:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x24u);
    }
L_00164de8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[14], 0, 0);
    }
L_00164dec:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_00164df0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_00164df4:;
    {
        uint32_t v = cpu->r[11] * cpu->r[12]; cpu->r[12] = v;
    }
L_00164df8:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x10u);
    }
L_00164dfc:;
    {
        cpu->r[14] = sub_flags(cpu, shifter(cpu->r[11], 1, 5u, &shc), cpu->r[14], 1, 0);
    }
L_00164e00:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[14]);
    }
L_00164e04:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[8] * (int64_t)(int32_t)cpu->r[12]; cpu->r[11] = (uint32_t)v; cpu->r[14] = (uint32_t)(v >> 32); }
    }
L_00164e08:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 31u, &shc); cpu->r[12] = v;
    }
L_00164e0c:;
    {
        cpu->r[12] = sub_flags(cpu, shifter(cpu->r[14], 1, 5u, &shc), cpu->r[12], 1, 0);
    }
L_00164e10:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_00164e14:;
    {
        cpu->r[14] = 0x00164e18u; fn_0015e144(cpu);
    }
L_00164e18:;
    {
        cpu->r[1] = 0x0000005fu;
    }
L_00164e1c:;
    {
        cpu->r[2] = 0x00000064u;
    }
L_00164e20:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_00164e24:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_00164e28:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00164e2c:;
    {
        cpu->r[14] = 0x00164e30u; fn_0015e144(cpu);
    }
L_00164e30:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_00164e34:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_00164e38:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00164e3c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[14], cpu->r[1], 0, 0);
    }
L_00164e40:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_00164e44:;
    {
        cpu->r[1] = 0x00000051u;
    }
L_00164e48:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[2], 0, 0);
    }
L_00164e4c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_00164e50:;
    {
        uint32_t v = cpu->r[11] * cpu->r[3]; cpu->r[12] = v;
    }
L_00164e54:;
    {
        cpu->r[2] = 0x00000056u;
    }
L_00164e58:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_00164e5c:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[8] * (int64_t)(int32_t)cpu->r[12]; cpu->r[11] = (uint32_t)v; cpu->r[14] = (uint32_t)(v >> 32); }
    }
L_00164e60:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 31u, &shc); cpu->r[12] = v;
    }
L_00164e64:;
    {
        cpu->r[12] = sub_flags(cpu, shifter(cpu->r[14], 1, 5u, &shc), cpu->r[12], 1, 0);
    }
L_00164e68:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_00164e6c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_00164e70:;
    {
        uint32_t v = cpu->r[0] * cpu->r[14]; cpu->r[12] = v;
    }
L_00164e74:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00164e78:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[8] * (int64_t)(int32_t)cpu->r[12]; cpu->r[14] = (uint32_t)v; cpu->r[11] = (uint32_t)(v >> 32); }
    }
L_00164e7c:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 31u, &shc); cpu->r[12] = v;
    }
L_00164e80:;
    {
        cpu->r[11] = sub_flags(cpu, shifter(cpu->r[11], 1, 5u, &shc), cpu->r[12], 1, 0);
    }
L_00164e84:;
    {
        cpu->r[14] = 0x00164e88u; fn_0015e144(cpu);
    }
L_00164e88:;
    {
        cpu->r[1] = 0x00000058u;
    }
L_00164e8c:;
    {
        cpu->r[2] = 0x0000005du;
    }
L_00164e90:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_00164e94:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_00164e98:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00164e9c:;
    {
        cpu->r[14] = 0x00164ea0u; fn_0015e144(cpu);
    }
L_00164ea0:;
    {
        cpu->r[1] = 0x0000005bu;
    }
L_00164ea4:;
    {
        cpu->r[2] = 0x00000060u;
    }
L_00164ea8:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_00164eac:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_00164eb0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00164eb4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_00164eb8:;
    {
        cpu->r[14] = 0x00164ebcu; fn_0015e144(cpu);
    }
L_00164ebc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_00164ec0:;
    {
        cpu->r[1] = 0x000017b4u;
    }
L_00164ec4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_00164ec8:;
    {
        uint32_t v = cpu->r[12] * cpu->r[11]; cpu->r[12] = v;
    }
L_00164ecc:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[8] * (int64_t)(int32_t)cpu->r[12]; cpu->r[2] = (uint32_t)v; cpu->r[8] = (uint32_t)(v >> 32); }
    }
L_00164ed0:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 31u, &shc); cpu->r[12] = v;
    }
L_00164ed4:;
    {
        cpu->r[8] = sub_flags(cpu, shifter(cpu->r[8], 1, 5u, &shc), cpu->r[12], 1, 0);
    }
L_00164ed8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000007u, 1, 1);
    }
L_00164edc:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[3]) {
        case 0: goto L_00165154;
        case 1: goto L_00164f30;
        case 2: goto L_001652d0;
        case 3: goto L_00164ff8;
        case 4: goto L_00165348;
        case 5: goto L_00165110;
        case 6: goto L_001653a4;
        case 7: goto L_00165178;
        default: guest_unimplemented(cpu, 0x00164edcu); return; }
        }
    }
L_00164ee0:;
    {
        goto L_00164f8c;
    }
L_00164f04:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_00164f08:;
    {
        cpu->r[3] = 0x0000851fu;
    }
L_00164f0c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x51ebu << 16);
    }
L_00164f10:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_00164f14:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 3u, &shc); cpu->r[2] = v;
    }
L_00164f18:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[2]; cpu->r[1] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_00164f1c:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 31u, &shc); cpu->r[2] = v;
    }
L_00164f20:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 1, 5u, &shc), cpu->r[2], 1, 0);
    }
L_00164f24:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_00164f28:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_00164f2c:;
    {
        goto L_00164d28;
    }
L_00164f30:;
    {
        cpu->r[6] = 0x0000851fu;
    }
L_00164f34:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_00164f38:;
    {
        uint32_t v = cpu->r[0] * cpu->r[11]; cpu->r[11] = v;
    }
L_00164f3c:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x51ebu << 16);
    }
L_00164f40:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00164f44:;
    {
        cpu->r[1] = 0x0000006bu;
    }
L_00164f48:;
    {
        cpu->r[2] = 0x00000070u;
    }
L_00164f4c:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[6] * (int64_t)(int32_t)cpu->r[11]; cpu->r[14] = (uint32_t)v; cpu->r[12] = (uint32_t)(v >> 32); }
    }
L_00164f50:;
    {
        uint32_t v = shifter(cpu->r[11], 1, 31u, &shc); cpu->r[11] = v;
    }
L_00164f54:;
    {
        cpu->r[11] = sub_flags(cpu, shifter(cpu->r[12], 1, 5u, &shc), cpu->r[11], 1, 0);
    }
L_00164f58:;
    {
        cpu->r[14] = 0x00164f5cu; fn_0015e144(cpu);
    }
L_00164f5c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_00164f60:;
    {
        cpu->r[3] = 0x000017c4u;
    }
L_00164f64:;
    {
        uint32_t v = cpu->r[1] * cpu->r[0]; cpu->r[0] = v;
    }
L_00164f68:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[6] * (int64_t)(int32_t)cpu->r[0]; cpu->r[2] = (uint32_t)v; cpu->r[6] = (uint32_t)(v >> 32); }
    }
L_00164f6c:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 31u, &shc); cpu->r[0] = v;
    }
L_00164f70:;
    {
        cpu->r[6] = sub_flags(cpu, shifter(cpu->r[6], 1, 5u, &shc), cpu->r[0], 1, 0);
    }
L_00164f74:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[6]);
    }
L_00164f78:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[6], 1, 1);
    }
L_00164f7c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001653e4;
        }
    }
L_00164f80:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[11]);
    }
L_00164f84:;
    {
        cpu->r[3] = 0x000017b4u;
    }
L_00164f88:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00164f8c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000005u, 1, 1);
    }
L_00164f90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00164fbc;
        }
    }
L_00164f94:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00164f98:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00164f9c:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_00164fa0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00164fbc;
        }
    }
L_00164fa4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1dcu);
    }
L_00164fa8:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_00164fac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001653f0;
        }
    }
L_00164fb0:;
    {
        cpu->r[3] = 0x000018ecu;
    }
L_00164fb4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00164fb8:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_00164fbc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x000003d4u, 0, 0);
    }
L_00164fc0:;
    {
        cpu->r[12] = rd32(0x00164fc8u + + 0x4bcu);
    }
L_00164fc4:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_00164fc8:;
    {
        cpu->r[3] = 0x000017c4u;
    }
L_00164fcc:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_00164fd0:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00164fd4:;
    {
        cpu->r[12] = rd32(0x00164fdcu + + 0x4acu);
    }
L_00164fd8:;
    {
        cpu->r[3] = rd32(0x00164fe0u + + 0x4acu);
    }
L_00164fdc:;
    {
        cpu->r[4] = rd32(cpu->r[4] + + 0x45cu);
    }
L_00164fe0:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_00164fe4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00164fe8:;
    {
        wr32(cpu->r[6], cpu->r[7]);
    }
L_00164fec:;
    {
        wr32(cpu->r[12], cpu->r[4]);
    }
L_00164ff0:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_00164ff4:;
    {
        goto L_00164cdc;
    }
L_00164ff8:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00164ffc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00165000:;
    {
        cpu->r[14] = 0x00165008u;
    }
L_00165004:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00165008u)) return;
    }
L_00165008:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0016500c:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00165010:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00165014:;
    {
        cpu->r[14] = 0x0016501cu;
    }
L_00165018:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x50u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0016501cu)) return;
    }
L_0016501c:;
    {
        cpu->r[3] = 0x00005556u;
    }
L_00165020:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x5555u << 16);
    }
L_00165024:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[0] = v;
    }
L_00165028:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[0]; cpu->r[1] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_0016502c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 31u, &shc), 1, 0);
    }
L_00165030:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[0], 1, 1);
    }
L_00165034:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0016535c;
        }
    }
L_00165038:;
    {
        cpu->r[3] = 0x00001774u;
    }
L_0016503c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00165040:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_00165044:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00165508;
        }
    }
L_00165048:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016549c;
        }
    }
L_0016504c:;
    {
        cpu->r[3] = 0x00008736u;
    }
L_00165050:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000410u, 0, 0);
    }
L_00165054:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], 0x00000410u, 0, 0);
    }
L_00165058:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_0016505c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[6] + cpu->r[3]);
    }
L_00165060:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[3];
    }
L_00165064:;
    {
        cpu->r[3] = 0x0000873cu;
    }
L_00165068:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_0016506c:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_00165070:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[6] + cpu->r[3]);
    }
L_00165074:;
    {
        cpu->r[14] = 0x00165078u; fn_00164ba0(cpu);
    }
L_00165078:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 1);
    }
L_0016507c:;
    {
        if (cond_test(cpu, 14)) {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[6];
        }
    }
L_00165080:;
    {
        if (cond_test(cpu, 13)) {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[0];
        }
    }
L_00165084:;
    {
        if (cond_test(cpu, 13)) {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[6];
        }
    }
L_00165088:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
        }
    }
L_0016508c:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,12);
        }
    }
L_00165090:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu,14) = *vfp_s(cpu,15);
        }
    }
L_00165094:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
        }
    }
L_00165098:;
    {
        vfp_vmul(cpu, 13, 14, 16);
    }
L_0016509c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001650a4u + + 0x3c0u);
    }
L_001650a0:;
    {
        vfp_vdiv(cpu, 15, 13, 15);
    }
L_001650a4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_001650a8:;
    {
        vfp_sync_flags(cpu);
    }
L_001650ac:;
    {
        if (cond_test(cpu, 5)) {
        *vfp_s(cpu,15) = *vfp_s(cpu,14);
        }
    }
L_001650b0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001650b8u + + 0x3e0u);
    }
L_001650b4:;
    {
        vfp_vdiv(cpu, 14, 15, 14);
    }
L_001650b8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001650c0u + + 0x3a8u);
    }
L_001650bc:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0x20u);
    }
L_001650c0:;
    {
        cpu->r[2] = 0x000017c4u;
    }
L_001650c4:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_001650c8:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_001650cc:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_001650d0:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_001650d4:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001650d8:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_001650dc:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x464u);
    }
L_001650e0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001650e4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001653e4;
        }
    }
L_001650e8:;
    {
        cpu->r[3] = 0x000018ecu;
    }
L_001650ec:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_001650f0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001650f4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001653e4;
        }
    }
L_001650f8:;
    {
        cpu->r[3] = 0x000017b4u;
    }
L_001650fc:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x20u);
    }
L_00165100:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00165108u + + 0x364u);
    }
L_00165104:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00165108:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016510c:;
    {
        goto L_0016538c;
    }
L_00165110:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_00165114:;
    {
        cpu->r[1] = 0x00000046u;
    }
L_00165118:;
    {
        cpu->r[2] = 0x00000082u;
    }
L_0016511c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00165120:;
    {
        cpu->r[14] = 0x00165124u; fn_0015e144(cpu);
    }
L_00165124:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x464u);
    }
L_00165128:;
    {
        cpu->r[2] = 0x0000851fu;
    }
L_0016512c:;
    {
        cpu->r[3] = 0x000017b4u;
    }
L_00165130:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x51ebu << 16);
    }
L_00165134:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00165138:;
    {
        uint32_t v = cpu->r[1] * cpu->r[0]; cpu->r[1] = v;
    }
L_0016513c:;
    {
        cpu->r[0] = 0x000017c4u;
    }
L_00165140:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[2] * (int64_t)(int32_t)cpu->r[1]; cpu->r[11] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_00165144:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 31u, &shc); cpu->r[1] = v;
    }
L_00165148:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[2], 1, 5u, &shc), cpu->r[1], 1, 0);
    }
L_0016514c:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[2]);
    }
L_00165150:;
    {
        goto L_00164f8c;
    }
L_00165154:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x10u);
    }
L_00165158:;
    {
        cpu->r[6] = 0x0000851fu;
    }
L_0016515c:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x51ebu << 16);
    }
L_00165160:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_00165164:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00165168:;
    {
        cpu->r[1] = 0x00000050u;
    }
L_0016516c:;
    {
        uint32_t v = cpu->r[14] * cpu->r[11]; cpu->r[11] = v;
    }
L_00165170:;
    {
        cpu->r[2] = 0x0000005au;
    }
L_00165174:;
    {
        goto L_00164f4c;
    }
L_00165178:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_0016517c:;
    {
        cpu->r[1] = 0x00001bc8u;
    }
L_00165180:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_00165184:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_00165188:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0016518c:;
    {
        cpu->r[3] = 0x00001774u;
    }
L_00165190:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00165194:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[1]);
    }
L_00165198:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0016519c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_001651a0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_001651a4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_001651a8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_001651ac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001651b0:;
    {
        cpu->r[8] = rd32(cpu->r[3] + + 0x4u);
    }
L_001651b4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001651d0;
        }
    }
L_001651b8:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], shifter(cpu->r[11], 3, 31u, &shc), 0, 0);
    }
L_001651bc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_001651c0:;
    {
        uint32_t v = shifter(cpu->r[11], 1, 1u, &shc); cpu->r[11] = v;
    }
L_001651c4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[11], 1, 1);
    }
L_001651c8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = cpu->r[11];
        }
    }
L_001651cc:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_001651d0:;
    {
        cpu->r[3] = 0x00001824u;
    }
L_001651d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001651d8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001651dc:;
    {
        cpu->r[14] = 0x001651e0u; fn_001615c0(cpu);
    }
L_001651e0:;
    {
        cpu->r[3] = 0x000018b8u;
    }
L_001651e4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001651e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_001651ec:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x000000c8u;
        }
    }
L_001651f0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001651f4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 0);
    }
L_001651f8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000031u, 0, 0);
    }
L_001651fc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000062u, 1, 1);
    }
L_00165200:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00165434;
        }
    }
L_00165204:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00165208:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00165518;
        }
    }
L_0016520c:;
    {
        cpu->r[2] = 0x00008736u;
    }
L_00165210:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[6] + cpu->r[2]);
    }
L_00165214:;
    {
        cpu->r[2] = 0x0000873cu;
    }
L_00165218:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[6] + cpu->r[2]);
    }
L_0016521c:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[1] = v;
    }
L_00165220:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[1];
    }
L_00165224:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00165228:;
    {
        if (cond_test(cpu, 11)) {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[2];
        }
    }
L_0016522c:;
    {
        if (cond_test(cpu, 12)) {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
        }
    }
L_00165230:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00165234:;
    {
        if (cond_test(cpu, 12)) {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[2];
        }
    }
L_00165238:;
    {
        if (cond_test(cpu, 11)) {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
        }
    }
L_0016523c:;
    {
        if (cond_test(cpu, 12)) {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,15);
        }
    }
L_00165240:;
    {
        if (cond_test(cpu, 11)) {
        *vfp_s(cpu,13) = *vfp_s(cpu,15);
        }
    }
L_00165244:;
    {
        vfp_vmul(cpu, 13, 13, 14);
    }
L_00165248:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00165250u + + 0x220u);
    }
L_0016524c:;
    {
        if (cond_test(cpu, 12)) {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,12);
        }
    }
L_00165250:;
    {
        vfp_vdiv(cpu, 15, 13, 15);
    }
L_00165254:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_00165258:;
    {
        vfp_sync_flags(cpu);
    }
L_0016525c:;
    {
        if (cond_test(cpu, 5)) {
        *vfp_s(cpu,15) = *vfp_s(cpu,14);
        }
    }
L_00165260:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00165268u + + 0x228u);
    }
L_00165264:;
    {
        vfp_vdiv(cpu, 14, 15, 14);
    }
L_00165268:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00165270u + + 0x1f8u);
    }
L_0016526c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0x20u);
    }
L_00165270:;
    {
        cpu->r[2] = 0x000017c4u;
    }
L_00165274:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_00165278:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_0016527c:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_00165280:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00165284:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00165288:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_0016528c:;
    {
        cpu->r[2] = 0x000018b8u;
    }
L_00165290:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00165294:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000007u, 1, 1);
    }
L_00165298:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00165444;
        }
    }
L_0016529c:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x464u);
    }
L_001652a0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001652a4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001653e4;
        }
    }
L_001652a8:;
    {
        cpu->r[3] = 0x000018ecu;
    }
L_001652ac:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_001652b0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001652b4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001653e4;
        }
    }
L_001652b8:;
    {
        cpu->r[3] = 0x000017b4u;
    }
L_001652bc:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x20u);
    }
L_001652c0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001652c8u + + 0x1acu);
    }
L_001652c4:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_001652c8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001652cc:;
    {
        goto L_0016538c;
    }
L_001652d0:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_001652d4:;
    {
        cpu->r[1] = 0x0000005fu;
    }
L_001652d8:;
    {
        cpu->r[2] = 0x00000063u;
    }
L_001652dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001652e0:;
    {
        cpu->r[14] = 0x001652e4u; fn_0015e144(cpu);
    }
L_001652e4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_001652e8:;
    {
        cpu->r[2] = 0x0000851fu;
    }
L_001652ec:;
    {
        cpu->r[6] = 0x000017c4u;
    }
L_001652f0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x51ebu << 16);
    }
L_001652f4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001652f8:;
    {
        uint32_t v = cpu->r[1] * cpu->r[0]; cpu->r[12] = v;
    }
L_001652fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00165300:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[2] * (int64_t)(int32_t)cpu->r[12]; cpu->r[11] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_00165304:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 31u, &shc); cpu->r[12] = v;
    }
L_00165308:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[2], 1, 5u, &shc), cpu->r[12], 1, 0);
    }
L_0016530c:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[2], 1, 1);
    }
L_00165310:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[4] + cpu->r[6], cpu->r[8]);
        }
    }
L_00165314:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + cpu->r[6], cpu->r[2]);
        }
    }
L_00165318:;
    {
        cpu->r[14] = 0x00165320u;
    }
L_0016531c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00165320u)) return;
    }
L_00165320:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00165324:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_00165328:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001653e4;
        }
    }
L_0016532c:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_00165330:;
    {
        cpu->r[3] = 0x000017b4u;
    }
L_00165334:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00165338:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016533c:;
    {
        uint32_t v = cpu->r[1] & ~ 0x08000001u; cpu->r[1] = v;
    }
L_00165340:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_00165344:;
    {
        goto L_00164f8c;
    }
L_00165348:;
    {
        cpu->r[3] = 0x0000173cu;
    }
L_0016534c:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_00165350:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00165354:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00165358:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00164f94;
        }
    }
L_0016535c:;
    {
        cpu->r[3] = 0x00008736u;
    }
L_00165360:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00165368u + + 0x128u);
    }
L_00165364:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[11];
    }
L_00165368:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_0016536c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[6] + cpu->r[3]);
    }
L_00165370:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[3];
    }
L_00165374:;
    {
        cpu->r[3] = 0x000017b4u;
    }
L_00165378:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016537c:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00165380:;
    {
        vfp_vdiv(cpu, 13, 13, 15);
    }
L_00165384:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0016538cu + + 0xdcu);
    }
L_00165388:;
    {
        vfp_vadd(cpu, 15, 13, 15);
    }
L_0016538c:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_00165390:;
    {
        cpu->r[2] = 0x000017c4u;
    }
L_00165394:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00165398:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0016539c:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[0]);
    }
L_001653a0:;
    {
        goto L_00164f8c;
    }
L_001653a4:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_001653a8:;
    {
        cpu->r[1] = 0x0000005fu;
    }
L_001653ac:;
    {
        cpu->r[2] = 0x00000063u;
    }
L_001653b0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001653b4:;
    {
        cpu->r[14] = 0x001653b8u; fn_0015e144(cpu);
    }
L_001653b8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_001653bc:;
    {
        cpu->r[3] = 0x0000851fu;
    }
L_001653c0:;
    {
        cpu->r[2] = 0x000017c4u;
    }
L_001653c4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x51ebu << 16);
    }
L_001653c8:;
    {
        uint32_t v = cpu->r[1] * cpu->r[0]; cpu->r[0] = v;
    }
L_001653cc:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[0]; cpu->r[11] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_001653d0:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 31u, &shc); cpu->r[0] = v;
    }
L_001653d4:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 1, 5u, &shc), cpu->r[0], 1, 0);
    }
L_001653d8:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_001653dc:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_001653e0:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[8]);
        }
    }
L_001653e4:;
    {
        cpu->r[3] = 0x000017b4u;
    }
L_001653e8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001653ec:;
    {
        goto L_00164f8c;
    }
L_001653f0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x498u);
    }
L_001653f4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001653f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00164fb0;
        }
    }
L_001653fc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00165400:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00165404:;
    {
        cpu->r[14] = 0x0016540cu;
    }
L_00165408:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0016540cu)) return;
    }
L_0016540c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x464u);
    }
L_00165410:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000au, 0, 0);
    }
L_00165414:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_00165418:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00164fb0;
        }
    }
L_0016541c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00165420:;
    {
        wr32(cpu->r[4] + + 0x55cu, cpu->r[3]);
    }
L_00165424:;
    {
        cpu->r[3] = 0x000018ecu;
    }
L_00165428:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0016542c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_00165430:;
    {
        goto L_00164fbc;
    }
L_00165434:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_00165438:;
    {
        cpu->r[2] = 0x000017c4u;
    }
L_0016543c:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_00165440:;
    {
        goto L_0016528c;
    }
L_00165444:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x464u);
    }
L_00165448:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0016544c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001653e4;
        }
    }
L_00165450:;
    {
        cpu->r[3] = 0x000017c4u;
    }
L_00165454:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_00165458:;
    {
        cpu->r[3] = 0x000017b4u;
    }
L_0016545c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00165460:;
    {
        goto L_00164f8c;
    }
L_0016549c:;
    {
        cpu->r[3] = 0x00008736u;
    }
L_001654a0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000410u, 0, 0);
    }
L_001654a4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], 0x00000410u, 0, 0);
    }
L_001654a8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_001654ac:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[6] + cpu->r[3]);
    }
L_001654b0:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[3];
    }
L_001654b4:;
    {
        cpu->r[3] = 0x0000873cu;
    }
L_001654b8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_001654bc:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_001654c0:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[6] + cpu->r[3]);
    }
L_001654c4:;
    {
        cpu->r[14] = 0x001654c8u; fn_00164ba0(cpu);
    }
L_001654c8:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 1);
    }
L_001654cc:;
    {
        if (cond_test(cpu, 14)) {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[6];
        }
    }
L_001654d0:;
    {
        if (cond_test(cpu, 13)) {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
        }
    }
L_001654d4:;
    {
        if (cond_test(cpu, 13)) {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[6];
        }
    }
L_001654d8:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
        }
    }
L_001654dc:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,13);
        }
    }
L_001654e0:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu,14) = *vfp_s(cpu,15);
        }
    }
L_001654e4:;
    {
        vfp_vmul(cpu, 13, 14, 16);
    }
L_001654e8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001654f0u + - 0x5cu);
    }
L_001654ec:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,12);
        }
    }
L_001654f0:;
    {
        vfp_vdiv(cpu, 15, 13, 15);
    }
L_001654f4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_001654f8:;
    {
        vfp_sync_flags(cpu);
    }
L_001654fc:;
    {
        if (cond_test(cpu, 5)) {
        *vfp_s(cpu,15) = *vfp_s(cpu,14);
        }
    }
L_00165500:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00165508u + - 0x78u);
    }
L_00165504:;
    {
        goto L_001650b4;
    }
L_00165508:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_0016550c:;
    {
        cpu->r[2] = 0x000017c4u;
    }
L_00165510:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_00165514:;
    {
        goto L_001650dc;
    }
L_00165518:;
    {
        cpu->r[2] = 0x00008736u;
    }
L_0016551c:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_00165520:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[6] + cpu->r[2]);
    }
L_00165524:;
    {
        cpu->r[2] = 0x0000873cu;
    }
L_00165528:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[6] + cpu->r[2]);
    }
L_0016552c:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[1] = v;
    }
L_00165530:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[1];
    }
L_00165534:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00165538:;
    {
        if (cond_test(cpu, 14)) {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[2];
        }
    }
L_0016553c:;
    {
        if (cond_test(cpu, 13)) {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[3];
        }
    }
L_00165540:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00165544:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
        }
    }
L_00165548:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,12);
        }
    }
L_0016554c:;
    {
        if (cond_test(cpu, 13)) {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[2];
        }
    }
L_00165550:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu,13) = *vfp_s(cpu,15);
        }
    }
L_00165554:;
    {
        vfp_vmul(cpu, 13, 13, 14);
    }
L_00165558:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00165560u + - 0xccu);
    }
L_0016555c:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,12);
        }
    }
L_00165560:;
    {
        vfp_vdiv(cpu, 15, 13, 15);
    }
L_00165564:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_00165568:;
    {
        vfp_sync_flags(cpu);
    }
L_0016556c:;
    {
        if (cond_test(cpu, 5)) {
        *vfp_s(cpu,15) = *vfp_s(cpu,14);
        }
    }
L_00165570:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00165578u + - 0xe0u);
    }
L_00165574:;
    {
        goto L_00165264;
    }
}

/* _ZN4CCar13ActivateCrashEPK10RoadStruct @ 00165578 (arm) */
void fn_00165578(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00165578:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x1b0u);
    }
L_0016557c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x10u);
    }
L_00165580:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_00165584:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00165588:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0016558c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00165590:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00165594:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00165640;
        }
    }
L_00165598:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0016559c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001655a0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001655a4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00000208u, 0, 0);
    }
L_001655a8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001655ac:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001655b0:;
    {
        uint32_t v = cpu->r[3] ^ 0x00002000u; cpu->r[3] = v;
    }
L_001655b4:;
    {
        cpu->r[3] = (cpu->r[3] >> 13) & 0x1u;
    }
L_001655b8:;
    {
        cpu->r[14] = 0x001655bcu; fn_00175be4(cpu);
    }
L_001655bc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1dcu);
    }
L_001655c0:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_001655c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00165654;
        }
    }
L_001655c8:;
    {
        cpu->r[3] = 0x000016e8u;
    }
L_001655cc:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x484u);
    }
L_001655d0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_001655d4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_001655d8:;
    {
        cpu->r[3] = 0x00004000u;
    }
L_001655dc:;
    {
        wr32(cpu->r[4] + + 0x484u, cpu->r[3]);
    }
L_001655e0:;
    {
        cpu->r[3] = 0x000016e4u;
    }
L_001655e4:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001655e8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001655ec:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001655f0:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001655f4:;
    {
        cpu->r[14] = 0x001655f8u; fn_00175128(cpu);
    }
L_001655f8:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_001655fc:;
    {
        cpu->r[1] = 0x00001654u;
    }
L_00165600:;
    {
        cpu->r[0] = 0x00001000u;
    }
L_00165604:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00165608:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[0]);
    }
L_0016560c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00165610:;
    {
        uint32_t v = cpu->r[2] | 0x00000040u; cpu->r[2] = v;
    }
L_00165614:;
    {
        wr32(cpu->r[4] + + 0x484u, cpu->r[5]);
    }
L_00165618:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_0016561c:;
    {
        cpu->r[14] = 0x00165620u; fn_0015d920(cpu);
    }
L_00165620:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00165624:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00165630;
        }
    }
L_00165628:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0016562c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00165630u)) return;
    }
L_00165630:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00165634:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00165638:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_0016563c:;
    {
        return fn_00160698(cpu);
    }
L_00165640:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_00165644:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00165648:;
    {
        cpu->r[14] = 0x0016564cu; fn_00180968(cpu);
    }
L_0016564c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00165650:;
    {
        goto L_00165598;
    }
L_00165654:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x498u);
    }
L_00165658:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016565c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001655c8;
        }
    }
L_00165660:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00165664:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00165668:;
    {
        cpu->r[14] = 0x0016566cu; fn_0015e194(cpu);
    }
L_0016566c:;
    {
        goto L_001655c8;
    }
}

/* _ZN4CCar20FinishCrashAnimationEv @ 00165670 (arm) */
void fn_00165670(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00165670:;
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
L_00165674:;
    {
        cpu->r[6] = rd32(0x0016567cu + + 0x70cu);
    }
L_00165678:;
    {
        cpu->r[7] = rd32(0x00165680u + + 0x70cu);
    }
L_0016567c:;
    {
        cpu->r[5] = 0x00001bc8u;
    }
L_00165680:;
    {
        cpu->r[6] = add_flags(cpu, 0x00165688u, cpu->r[6], 0, 0);
    }
L_00165684:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x58cu);
    }
L_00165688:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0016568c:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_00165690:;
    {
        cpu->r[10] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_00165694:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00004700u, 0, 0);
    }
L_00165698:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000002au, 0, 0);
    }
L_0016569c:;
    {
        wr32(cpu->r[0] + + 0x198u, cpu->r[3]);
    }
L_001656a0:;
    {
        wr32(cpu->r[0] + + 0x1f8u, cpu->r[3]);
    }
L_001656a4:;
    {
        cpu->r[0] = 0x000018ecu;
    }
L_001656a8:;
    {
        cpu->r[1] = rd32(cpu->r[10]);
    }
L_001656ac:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_001656b0:;
    {
        wr32(cpu->r[4] + + 0x398u, cpu->r[3]);
    }
L_001656b4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000074u, 1, 0);
    }
L_001656b8:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[8]);
    }
L_001656bc:;
    {
        cpu->r[9] = 0x00001788u;
    }
L_001656c0:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[5]);
    }
L_001656c4:;
    {
        wr32(cpu->r[4] + + 0x39cu, cpu->r[3]);
    }
L_001656c8:;
    {
        wr32(cpu->r[4] + + 0x3a0u, cpu->r[3]);
    }
L_001656cc:;
    {
        cpu->r[0] = rd32(cpu->r[1] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001656d0:;
    {
        wr32(cpu->r[4] + + 0x380u, cpu->r[8]);
    }
L_001656d4:;
    {
        wr32(cpu->r[4] + + 0x608u, cpu->r[8]);
    }
L_001656d8:;
    {
        wr32(cpu->r[4] + + 0x620u, cpu->r[8]);
    }
L_001656dc:;
    {
        cpu->r[14] = 0x001656e0u; fn_000b0480(cpu);
    }
L_001656e0:;
    {
        cpu->r[2] = rd32(cpu->r[10]);
    }
L_001656e4:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_001656e8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001656ec:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[5]);
    }
L_001656f0:;
    {
        cpu->r[5] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001656f4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[5], 0x0000000cu, 0, 0);
    }
L_001656f8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_001656fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_00165700:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_00165704:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00165708:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_0016570c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_00165710:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00004344u;
        }
    }
L_00165714:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
        }
    }
L_00165718:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[2] + cpu->r[3], cpu->r[8]);
        }
    }
L_0016571c:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_00165720:;
    {
        wr32(cpu->r[4] + + 0x1dcu, cpu->r[3]);
    }
L_00165724:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_00165728:;
    {
        uint32_t v = cpu->r[3] & 0x00004000u; cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_0016572c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00165980;
        }
    }
L_00165730:;
    {
        cpu->r[1] = 0x00001820u;
    }
L_00165734:;
    {
        cpu->r[1] = rd8(cpu->r[4] + cpu->r[1]);
    }
L_00165738:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0016573c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00165980;
        }
    }
L_00165740:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_00165744:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_00165748:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_0016574c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_00165750:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_00165754:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_00165758:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_0016575c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_00165760:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_00165764:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00165768:;
    {
        cpu->r[8] = rd32(cpu->r[3] + + 0x4u);
    }
L_0016576c:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[9]);
    }
L_00165770:;
    {
        { uint32_t v = cpu->r[3] & 0x00000040u; set_nz(cpu, v); }
    }
L_00165774:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00165c98;
        }
    }
L_00165778:;
    {
        { uint32_t v = cpu->r[3] & 0x20000000u; set_nz(cpu, v); }
    }
L_0016577c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00165c58;
        }
    }
L_00165780:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_00165784:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_00165788:;
    {
        cpu->r[1] = 0x00008c50u;
    }
L_0016578c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x0000006cu, 0, 0);
    }
L_00165790:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_00165794:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000003d4u, 0, 0);
    }
L_00165798:;
    {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0016579c:;
    {
        cpu->r[2] = 0x00000fa0u;
    }
L_001657a0:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_001657a4:;
    {
        cpu->r[1] = rd32(cpu->r[12] + cpu->r[1]);
    }
L_001657a8:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x8u);
    }
L_001657ac:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00006300u, 0, 0);
    }
L_001657b0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000001eu, 0, 0);
    }
L_001657b4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_001657b8:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_001657bc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x000003d4u, 0, 0);
    }
L_001657c0:;
    {
        cpu->r[14] = 0x001657c4u; fn_0017a640(cpu);
    }
L_001657c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001657c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00165cbc;
        }
    }
L_001657cc:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x1e4u);
    }
L_001657d0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001657d4:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], 0x00000001u, 1, 1);
    }
L_001657d8:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[3] = rd32(cpu->r[5] + + 0x1cu);
        }
    }
L_001657dc:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[3], 0, 0);
        }
    }
L_001657e0:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001657e4:;
    {
        cpu->r[14] = 0x001657e8u; fn_00180c78(cpu);
    }
L_001657e8:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001657ec:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001657f0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000048u, 0, 0);
    }
L_001657f4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001657f8:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x48u);
    }
L_001657fc:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_00165800:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x8u);
    }
L_00165804:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_00165808:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_0016580c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_00165810:;
    {
        cpu->r[14] = 0x00165814u; fn_00180c78(cpu);
    }
L_00165814:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1e4u);
    }
L_00165818:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_0016581c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00165820:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00165824:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x8u);
    }
L_00165828:;
    {
        cpu->r[11] = rd32(cpu->r[2] + + 0x18u);
    }
L_0016582c:;
    {
        cpu->r[5] = rd32(cpu->r[3] + + 0x4u);
    }
L_00165830:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00165834:;
    {
        cpu->r[14] = 0x00165838u; fn_00180c78(cpu);
    }
L_00165838:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1e4u);
    }
L_0016583c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 1u, &shc), 0, 0);
    }
L_00165840:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000048u, 0, 0);
    }
L_00165844:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00165848:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0016584c:;
    {
        cpu->r[14] = rd32(cpu->r[3] + + 0x8u);
    }
L_00165850:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x48u);
    }
L_00165854:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_00165858:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[14]);
    }
L_0016585c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_00165860:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_00165864:;
    {
        cpu->r[14] = 0x00165868u; fn_00180c78(cpu);
    }
L_00165868:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_0016586c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[11], shifter(cpu->r[11], 2, 1u, &shc), 0, 0);
    }
L_00165870:;
    {
        cpu->r[12] = rd32(cpu->r[13]);
    }
L_00165874:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_00165878:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x18u);
    }
L_0016587c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000018u, 0, 0);
    }
L_00165880:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], cpu->r[14], 0, 0);
    }
L_00165884:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_00165888:;
    {
        cpu->r[11] = rd32(cpu->r[3] + + 0x8u);
    }
L_0016588c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_00165890:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00165894:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_00165898:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_0016589c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[5], 0, 0);
    }
L_001658a0:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0xcu);
    }
L_001658a4:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], shifter(cpu->r[11], 2, 1u, &shc), 0, 0);
    }
L_001658a8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x1d8u);
    }
L_001658ac:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[5], 0, 0);
    }
L_001658b0:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x10u);
    }
L_001658b4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001658b8:;
    {
        { int32_t v = (int32_t)(cpu->r[1] << 10); cpu->r[1] = (uint32_t)(v >> 12); }
    }
L_001658bc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_001658c0:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x8u);
    }
L_001658c4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_001658c8:;
    {
        cpu->r[1] = 0x00001bc8u;
    }
L_001658cc:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[5], 0, 0);
    }
L_001658d0:;
    {
        { int32_t v = (int32_t)(cpu->r[3] << 10); cpu->r[3] = (uint32_t)(v >> 12); }
    }
L_001658d4:;
    {
        { int32_t v = (int32_t)(cpu->r[11] << 10); cpu->r[11] = (uint32_t)(v >> 12); }
    }
L_001658d8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[11]);
    }
L_001658dc:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_001658e0:;
    {
        { int32_t v = (int32_t)(cpu->r[0] << 10); cpu->r[5] = (uint32_t)(v >> 12); }
    }
L_001658e4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_001658e8:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_001658ec:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001658f0:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00001000u, cpu->r[2], 1, 0);
    }
L_001658f4:;
    {
        cpu->r[1] = rd32(cpu->r[11] + cpu->r[1]);
    }
L_001658f8:;
    {
        { int32_t v = (int32_t)(cpu->r[14] << 10); cpu->r[14] = (uint32_t)(v >> 12); }
    }
L_001658fc:;
    {
        { int32_t v = (int32_t)(cpu->r[12] << 10); cpu->r[12] = (uint32_t)(v >> 12); }
    }
L_00165900:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[14]);
    }
L_00165904:;
    {
        uint32_t v = cpu->r[0] * cpu->r[5]; cpu->r[5] = v;
    }
L_00165908:;
    {
        cpu->r[11] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_0016590c:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_00165910:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0xcu);
    }
L_00165914:;
    {
        uint32_t v = cpu->r[0] * cpu->r[12]; cpu->r[12] = v;
    }
L_00165918:;
    {
        uint32_t v = cpu->r[2] * cpu->r[9] + cpu->r[5]; cpu->r[5] = v;
    }
L_0016591c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x10u);
    }
L_00165920:;
    {
        uint32_t v = cpu->r[0] * cpu->r[14]; cpu->r[14] = v;
    }
L_00165924:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_00165928:;
    {
        uint32_t v = cpu->r[2] * cpu->r[9] + cpu->r[14]; cpu->r[14] = v;
    }
L_0016592c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[0] + cpu->r[12]; cpu->r[12] = v;
    }
L_00165930:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 12u, &shc); cpu->r[5] = v;
    }
L_00165934:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[5]);
    }
L_00165938:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000060u, 0, 0);
    }
L_0016593c:;
    {
        cpu->r[2] = 0x00000fa0u;
    }
L_00165940:;
    {
        uint32_t v = shifter(cpu->r[14], 1, 12u, &shc); cpu->r[14] = v;
    }
L_00165944:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[14]);
    }
L_00165948:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 12u, &shc); cpu->r[12] = v;
    }
L_0016594c:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[12]);
    }
L_00165950:;
    {
        cpu->r[12] = rd32(cpu->r[11] + + 0x8u);
    }
L_00165954:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00006300u, 0, 0);
    }
L_00165958:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000001eu, 0, 0);
    }
L_0016595c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_00165960:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_00165964:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x000003d4u, 0, 0);
    }
L_00165968:;
    {
        cpu->r[14] = 0x0016596cu; fn_0017a640(cpu);
    }
L_0016596c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00165970:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00165cbc;
        }
    }
L_00165974:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00165978:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016597c:;
    {
        uint32_t v = cpu->r[3] & 0x00004000u; cpu->r[2] = v;
    }
L_00165980:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00165984:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_00165988:;
    {
        uint32_t v = cpu->r[3] & ~ 0x00000840u; cpu->r[3] = v;
    }
L_0016598c:;
    {
        uint32_t v = cpu->r[3] & ~ 0x00000008u; cpu->r[3] = v;
    }
L_00165990:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_00165994:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00165b50;
        }
    }
L_00165998:;
    {
        cpu->r[1] = 0x00001820u;
    }
L_0016599c:;
    {
        cpu->r[1] = rd8(cpu->r[4] + cpu->r[1]);
    }
L_001659a0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001659a4:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[3] | 0x00100000u; cpu->r[3] = v;
        }
    }
L_001659a8:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
        }
    }
L_001659ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00165b48;
        }
    }
L_001659b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1e8u);
    }
L_001659b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001659b8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1e4u);
    }
L_001659bc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x1ecu);
    }
L_001659c0:;
    {
        wr32(cpu->r[4] + + 0x1b8u, cpu->r[3]);
    }
L_001659c4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001659c8:;
    {
        wr32(cpu->r[4] + + 0x1b0u, cpu->r[1]);
    }
L_001659cc:;
    {
        wr32(cpu->r[4] + + 0x1b4u, cpu->r[2]);
    }
L_001659d0:;
    {
        wr8(cpu->r[4] + + 0x204u, cpu->r[3]);
    }
L_001659d4:;
    {
        cpu->r[14] = 0x001659d8u; fn_0015d920(cpu);
    }
L_001659d8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001659dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00165b6c;
        }
    }
L_001659e0:;
    {
        cpu->r[8] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_001659e4:;
    {
        cpu->r[9] = 0x00001bc8u;
    }
L_001659e8:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001659ec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001659f0:;
    {
        cpu->r[1] = 0x00000c00u;
    }
L_001659f4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x0000003cu, 0, 0);
    }
L_001659f8:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001659fc:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00165a00:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[9]);
    }
L_00165a04:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00018c00u, 0, 0);
    }
L_00165a08:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000000b8u, 0, 0);
    }
L_00165a0c:;
    {
        cpu->r[14] = 0x00165a10u; fn_00162ae4(cpu);
    }
L_00165a10:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00165a14:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00165a18:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00165a1c:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[5]);
    }
L_00165a20:;
    {
        cpu->r[11] = rd32(cpu->r[3] + + 0x30u);
    }
L_00165a24:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[5]);
    }
L_00165a28:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[5]);
    }
L_00165a2c:;
    {
        cpu->r[14] = 0x00165a30u; fn_00161548(cpu);
    }
L_00165a30:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00165a34:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000048u, 0, 0);
    }
L_00165a38:;
    {
        cpu->r[14] = 0x00165a3cu; fn_00180008(cpu);
    }
L_00165a3c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_00165a40:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[5]);
    }
L_00165a44:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[5]);
    }
L_00165a48:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000400u, 0, 0);
    }
L_00165a4c:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[0]);
    }
L_00165a50:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00165a54:;
    {
        cpu->r[14] = 0x00165a58u; guest_call(cpu, cpu->r[11]);
    }
L_00165a58:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_00165a5c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00165a60:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[5]);
    }
L_00165a64:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[5]);
    }
L_00165a68:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[5]);
    }
L_00165a6c:;
    {
        cpu->r[14] = 0x00165a70u; fn_00173920(cpu);
    }
L_00165a70:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00165a74:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_00165a78:;
    {
        wr32(cpu->r[4] + + 0x364u, cpu->r[5]);
    }
L_00165a7c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00165a80:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00165a84:;
    {
        wr32(cpu->r[4] + + 0x340u, cpu->r[3]);
    }
L_00165a88:;
    {
        { uint32_t v = cpu->r[1] & 0x00004000u; set_nz(cpu, v); }
    }
L_00165a8c:;
    {
        cpu->r[1] = 0x00001664u;
    }
L_00165a90:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x418u);
    }
L_00165a94:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[5]);
    }
L_00165a98:;
    {
        cpu->r[1] = 0x00001c80u;
    }
L_00165a9c:;
    {
        wr32(cpu->r[4] + + 0x484u, cpu->r[5]);
    }
L_00165aa0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_00165aa4:;
    {
        wr32(cpu->r[4] + + 0x380u, cpu->r[5]);
    }
L_00165aa8:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_00165aac:;
    {
        wr32(cpu->r[4] + + 0x608u, cpu->r[5]);
    }
L_00165ab0:;
    {
        wr32(cpu->r[4] + + 0x620u, cpu->r[5]);
    }
L_00165ab4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00165c6c;
        }
    }
L_00165ab8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00165abc:;
    {
        cpu->r[14] = 0x00165ac0u; fn_0015d920(cpu);
    }
L_00165ac0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00165ac4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00165b78;
        }
    }
L_00165ac8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_00165acc:;
    {
        cpu->r[1] = 0x0000433cu;
    }
L_00165ad0:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_00165ad4:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_00165ad8:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_00165adc:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_00165ae0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[1]);
    }
L_00165ae4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00165ae8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00165b04;
        }
    }
L_00165aec:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x490u);
    }
L_00165af0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00165af4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_00165af8:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[3] + + 0x490u, cpu->r[2]);
        }
    }
L_00165afc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[1]);
        }
    }
L_00165b00:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[3] + + 0x490u, cpu->r[2]);
        }
    }
L_00165b04:;
    {
        cpu->r[1] = 0x00001bc8u;
    }
L_00165b08:;
    {
        cpu->r[2] = 0x0000433cu;
    }
L_00165b0c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_00165b10:;
    {
        cpu->r[3] = 0x00004340u;
    }
L_00165b14:;
    {
        cpu->r[1] = rd32(cpu->r[12] + cpu->r[1]);
    }
L_00165b18:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_00165b1c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00165b20:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[12]);
    }
L_00165b24:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00165b28:;
    {
        wr32(cpu->r[1] + cpu->r[3], cpu->r[12]);
    }
L_00165b2c:;
    {
        cpu->r[5] = 0x00001788u;
    }
L_00165b30:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00165b34:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00165b38:;
    {
        cpu->r[14] = 0x00165b3cu; fn_000ba68c(cpu);
    }
L_00165b3c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00165b40:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_00165b44:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00165c10;
        }
    }
L_00165b48:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000074u, 0, 0);
    }
L_00165b4c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00165b50u)) return;
    }
L_00165b50:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x204u);
    }
L_00165b54:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00165b58:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001659b0;
        }
    }
L_00165b5c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00165b60:;
    {
        cpu->r[14] = 0x00165b64u; fn_0015d920(cpu);
    }
L_00165b64:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00165b68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001659e0;
        }
    }
L_00165b6c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00165b70:;
    {
        cpu->r[14] = 0x00165b74u; fn_00160dac(cpu);
    }
L_00165b74:;
    {
        goto L_001659e0;
    }
L_00165b78:;
    {
        cpu->r[10] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_00165b7c:;
    {
        cpu->r[8] = 0x00001bc8u;
    }
L_00165b80:;
    {
        cpu->r[5] = 0x0000433cu;
    }
L_00165b84:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0006u << 16);
    }
L_00165b88:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00165b8c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_00165b90:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[5]);
    }
L_00165b94:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00165b98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00165b2c;
        }
    }
L_00165b9c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x490u);
    }
L_00165ba0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00165ba4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00165b2c;
        }
    }
L_00165ba8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00165bac:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00165bb0:;
    {
        cpu->r[14] = 0x00165bb8u;
    }
L_00165bb4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00165bb8u)) return;
    }
L_00165bb8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00165bbc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00165bec;
        }
    }
L_00165bc0:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00165bc4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_00165bc8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_00165bcc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x490u);
    }
L_00165bd0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00165bd4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00165bd8:;
    {
        cpu->r[14] = 0x00165be0u;
    }
L_00165bdc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00165be0u)) return;
    }
L_00165be0:;
    {
        cpu->r[14] = 0x00165be4u; fn_0015d920(cpu);
    }
L_00165be4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00165be8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00165ac8;
        }
    }
L_00165bec:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00165bf0:;
    {
        cpu->r[5] = 0x00001788u;
    }
L_00165bf4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00165bf8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00165bfc:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_00165c00:;
    {
        cpu->r[14] = 0x00165c04u; fn_000ba68c(cpu);
    }
L_00165c04:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00165c08:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_00165c0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00165b48;
        }
    }
L_00165c10:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00165c14:;
    {
        cpu->r[14] = 0x00165c18u; fn_0015ed78(cpu);
    }
L_00165c18:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_00165c1c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00165c20:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_00165c24:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_00165c28:;
    {
        cpu->r[0] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_00165c2c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_00165c30:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00165c34:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00018c00u, 0, 0);
    }
L_00165c38:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x9cu);
    }
L_00165c3c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00165c40:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[5]);
        }
    }
L_00165c44:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[1] | 0x00100000u; cpu->r[1] = v;
        }
    }
L_00165c48:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[2] + cpu->r[5], cpu->r[1]);
        }
    }
L_00165c4c:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000001cu, 1, 1);
    }
L_00165c50:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00165c2c;
        }
    }
L_00165c54:;
    {
        goto L_00165b48;
    }
L_00165c58:;
    {
        cpu->r[3] = 0x0000182cu;
    }
L_00165c5c:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_00165c60:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00165c64:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00165780;
        }
    }
L_00165c68:;
    {
        goto L_00165974;
    }
L_00165c6c:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[9]);
    }
L_00165c70:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_00165c74:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_00165c78:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_00165c7c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_00165c80:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_00165c84:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_00165c88:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00165c8c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_00165c90:;
    {
        cpu->r[14] = 0x00165c94u; fn_0015eda0(cpu);
    }
L_00165c94:;
    {
        goto L_00165ab8;
    }
L_00165c98:;
    {
        cpu->r[0] = rd32(cpu->r[8] + + 0x4d4u);
    }
L_00165c9c:;
    {
        cpu->r[11] = rd32(cpu->r[8] + + 0x1dcu);
    }
L_00165ca0:;
    {
        cpu->r[14] = 0x00165ca4u; fn_00171b64(cpu);
    }
L_00165ca4:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00165ca8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00165cac:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[3], 1, 1);
    }
L_00165cb0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00165974;
        }
    }
L_00165cb4:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[9]);
    }
L_00165cb8:;
    {
        goto L_00165778;
    }
L_00165cbc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_00165cc0:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_00165cc4:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_00165cc8:;
    {
        cpu->r[1] = 0x0000423fu;
    }
L_00165ccc:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_00165cd0:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x000fu << 16);
    }
L_00165cd4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00165cd8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x6cu);
    }
L_00165cdc:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_00165ce0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00165ce4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_00165ce8:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_00165cec:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_00165cf0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_00165cf4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_00165cf8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_00165cfc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00165d00:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_00165d04:;
    {
        cpu->r[14] = rd32(cpu->r[3] + + 0x3dcu);
    }
L_00165d08:;
    {
        cpu->r[9] = rd32(cpu->r[3] + + 0x3d4u);
    }
L_00165d0c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x3d8u);
    }
L_00165d10:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_00165d14:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00165d30;
        }
    }
L_00165d18:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4d4u);
    }
L_00165d1c:;
    {
        cpu->r[14] = 0x00165d20u; fn_00171b64(cpu);
    }
L_00165d20:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00165d24:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00165d28:;
    {
        wr32(cpu->r[4] + + 0x1dcu, cpu->r[3]);
    }
L_00165d2c:;
    {
        goto L_00165b48;
    }
L_00165d30:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00165d34:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_00165d38:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000054u, 0, 0);
    }
L_00165d3c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_00165d40:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00165d44:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[11], cpu->r[9], 1, 0);
    }
L_00165d48:;
    {
        cpu->r[14] = 0x00165d50u;
    }
L_00165d4c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00165d50u)) return;
    }
L_00165d50:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_00165d54:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x54u);
    }
L_00165d58:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x58u);
    }
L_00165d5c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 0);
    }
L_00165d60:;
    {
        cpu->r[12] = rd32(cpu->r[13]);
    }
L_00165d64:;
    {
        uint32_t v = cpu->r[3] * cpu->r[9]; cpu->r[3] = v;
    }
L_00165d68:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_00165d6c:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2] + cpu->r[3]; cpu->r[2] = v;
    }
L_00165d70:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00165d74:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 0);
    }
L_00165d78:;
    {
        uint32_t v = cpu->r[3] * cpu->r[12] + cpu->r[2]; cpu->r[3] = v;
    }
L_00165d7c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00165d80:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00165d18;
        }
    }
L_00165d84:;
    {
        goto L_00165974;
    }
}

/* _ZN4CCar16UpdateDriveSpeedEv @ 00165d90 (arm) */
void fn_00165d90(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00165d90:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x198u);
    }
L_00165d94:;
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
L_00165d98:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00165d9c:;
    {
        cpu->r[5] = rd32(0x00165da4u + + 0x444u);
    }
L_00165da0:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_00165da4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00165da8:;
    {
        cpu->r[5] = add_flags(cpu, 0x00165db0u, cpu->r[5], 0, 0);
    }
L_00165dac:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00165db0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00165dc0;
        }
    }
L_00165db4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00165db8:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00165dbc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00165dc0u)) return;
    }
L_00165dc0:;
    {
        cpu->r[6] = rd32(0x00165dc8u + + 0x424u);
    }
L_00165dc4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00165dc8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00165dcc:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x424u);
    }
L_00165dd0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00165dd4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00165db4;
        }
    }
L_00165dd8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x340u);
    }
L_00165ddc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00165de0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00165de4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x29cu);
    }
L_00165de8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00165dec:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00165fb4;
        }
    }
L_00165df0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x364u);
    }
L_00165df4:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[3];
    }
L_00165df8:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00165dfc:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x00165e04u + + 0x3d0u);
    }
L_00165e00:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00165e04:;
    {
        vfp_vdiv(cpu, 16, 14, 15);
    }
L_00165e08:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,17));
    }
L_00165e0c:;
    {
        vfp_sync_flags(cpu);
    }
L_00165e10:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,16) = *vfp_s(cpu,17);
        }
    }
L_00165e14:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00166014;
        }
    }
L_00165e18:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00165e20u + + 0x3b8u);
    }
L_00165e1c:;
    {
        vfp_vmul(cpu, 14, 16, 15);
    }
L_00165e20:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_00165e24:;
    {
        cpu->r[8] = 0x00001788u;
    }
L_00165e28:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00165e2c:;
    {
        cpu->r[14] = 0x00165e30u; fn_000960b4(cpu);
    }
L_00165e30:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x340u);
    }
L_00165e34:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_00165e38:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00165e3c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00165e40:;
    {
        uint32_t v = cpu->r[7] & 0x00004000u; cpu->r[7] = v;
        set_nz(cpu, v);
    }
L_00165e44:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_00165e48:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00165e4c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_00165e50:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x298u);
    }
L_00165e54:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x298u);
    }
L_00165e58:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[3];
    }
L_00165e5c:;
    {
        *vfp_s(cpu,17) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00165e60:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_00165e64:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[1];
    }
L_00165e68:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00165e6c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_00165e70:;
    {
        vfp_vmul(cpu, 14, 13, 15);
    }
L_00165e74:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00165e7cu + + 0x360u);
    }
L_00165e78:;
    {
        vfp_vmla(cpu, 17, 14, 15);
    }
L_00165e7c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x354u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_00165e80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00165ea4;
        }
    }
L_00165e84:;
    {
        cpu->r[3] = 0x000018ecu;
    }
L_00165e88:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00165e8c:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000002u, 1, 1);
    }
L_00165e90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00166210;
        }
    }
L_00165e94:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000003u, 1, 1);
    }
L_00165e98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016618c;
        }
    }
L_00165e9c:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000001u, 1, 1);
    }
L_00165ea0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00166130;
        }
    }
L_00165ea4:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x598u);
    }
L_00165ea8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00165eac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00165ec0;
        }
    }
L_00165eb0:;
    {
        cpu->r[2] = 0x000017b4u;
    }
L_00165eb4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00165eb8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000005u, 1, 1);
    }
L_00165ebc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001660a4;
        }
    }
L_00165ec0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00165ec4:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00165ec8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = rd32(cpu->r[4] + + 0x464u);
        }
    }
L_00165ecc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00165eec;
        }
    }
L_00165ed0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00165ed4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00165f5c;
        }
    }
L_00165ed8:;
    {
        cpu->r[3] = 0x00001820u;
    }
L_00165edc:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x464u);
    }
L_00165ee0:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_00165ee4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00165ee8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001660c0;
        }
    }
L_00165eec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x460u);
    }
L_00165ef0:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[5];
    }
L_00165ef4:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[3];
    }
L_00165ef8:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00165efc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x354u);
    }
L_00165f00:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00165f04:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00165f08:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_00165f0c:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00165f10:;
    {
        vfp_vdiv(cpu, 14, 13, 14);
    }
L_00165f14:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_00165f18:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x354u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00165f1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00165f38;
        }
    }
L_00165f20:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x464u);
    }
L_00165f24:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[2];
    }
L_00165f28:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00165f2c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_00165f30:;
    {
        vfp_sync_flags(cpu);
    }
L_00165f34:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0016611c;
        }
    }
L_00165f38:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00165f3c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00165f40:;
    {
        cpu->r[14] = 0x00165f48u;
    }
L_00165f44:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x50u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00165f48u)) return;
    }
L_00165f48:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00165f4c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00165f50:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_00165f54:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00165fdc;
        }
    }
L_00165f58:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x598u);
    }
L_00165f5c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x354u);
    }
L_00165f60:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00165f64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00165f78;
        }
    }
L_00165f68:;
    {
        cpu->r[3] = 0x000017b4u;
    }
L_00165f6c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00165f70:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000005u, 1, 1);
    }
L_00165f74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00166178;
        }
    }
L_00165f78:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00165f7c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00165f80:;
    {
        { uint32_t v = cpu->r[3] & 0x00000010u; set_nz(cpu, v); }
    }
L_00165f84:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00165fbc;
        }
    }
L_00165f88:;
    {
        vfp_vneg(cpu, 15, 15);
    }
L_00165f8c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_00165f90:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x354u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00165f94:;
    {
        vfp_sync_flags(cpu);
    }
L_00165f98:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00165fbc;
        }
    }
L_00165f9c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x364u);
    }
L_00165fa0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00165fa4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00165fc8;
        }
    }
L_00165fa8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00165fb0u + + 0x230u);
    }
L_00165fac:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x354u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00165fb0:;
    {
        goto L_00165db4;
    }
L_00165fb4:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x00165fbcu + + 0x228u);
    }
L_00165fb8:;
    {
        goto L_00165e18;
    }
L_00165fbc:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_00165fc0:;
    {
        vfp_sync_flags(cpu);
    }
L_00165fc4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00165db4;
        }
    }
L_00165fc8:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00165fcc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00165fd0:;
    {
        uint32_t v = cpu->r[2] & ~ 0x00000004u; cpu->r[2] = v;
    }
L_00165fd4:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_00165fd8:;
    {
        goto L_00165db4;
    }
L_00165fdc:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_00165fe0:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00165fe4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x354u);
    }
L_00165fe8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_00165fec:;
    {
        vfp_sync_flags(cpu);
    }
L_00165ff0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001660b8;
        }
    }
L_00165ff4:;
    {
        cpu->r[3] = 0x000018ecu;
    }
L_00165ff8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00165ffc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00166000:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001660b8;
        }
    }
L_00166004:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x598u);
    }
L_00166008:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x354u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0016600c:;
    {
        *vfp_s(cpu,15) = *vfp_s(cpu,14);
    }
L_00166010:;
    {
        goto L_00165f60;
    }
L_00166014:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), 0.0f);
    }
L_00166018:;
    {
        vfp_sync_flags(cpu);
    }
L_0016601c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00166054;
        }
    }
L_00166020:;
    {
        cpu->r[1] = rd32(0x00166028u + + 0x1c8u);
    }
L_00166024:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00166028:;
    {
        cpu->r[12] = rd32(0x00166030u + + 0x1c4u);
    }
L_0016602c:;
    {
        cpu->r[14] = 0x00000c8bu;
    }
L_00166030:;
    {
        cpu->r[2] = rd32(0x00166038u + + 0x1c0u);
    }
L_00166034:;
    {
        cpu->r[1] = add_flags(cpu, 0x0016603cu, cpu->r[1], 0, 0);
    }
L_00166038:;
    {
        cpu->r[3] = rd32(0x00166040u + + 0x1bcu);
    }
L_0016603c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00166044u, cpu->r[12], 0, 0);
    }
L_00166040:;
    {
        cpu->r[2] = add_flags(cpu, 0x00166048u, cpu->r[2], 0, 0);
    }
L_00166044:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000108u, 0, 0);
    }
L_00166048:;
    {
        cpu->r[3] = add_flags(cpu, 0x00166050u, cpu->r[3], 0, 0);
    }
L_0016604c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00166050:;
    {
        cpu->r[14] = 0x00166054u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00166054:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,17));
    }
L_00166058:;
    {
        vfp_sync_flags(cpu);
    }
L_0016605c:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00166060:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_00166064:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00166068:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00165e18;
        }
    }
L_0016606c:;
    {
        cpu->r[1] = rd32(0x00166074u + + 0x18cu);
    }
L_00166070:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00166074:;
    {
        cpu->r[12] = rd32(0x0016607cu + + 0x188u);
    }
L_00166078:;
    {
        cpu->r[14] = 0x00000c8cu;
    }
L_0016607c:;
    {
        cpu->r[2] = rd32(0x00166084u + + 0x184u);
    }
L_00166080:;
    {
        cpu->r[1] = add_flags(cpu, 0x00166088u, cpu->r[1], 0, 0);
    }
L_00166084:;
    {
        cpu->r[3] = rd32(0x0016608cu + + 0x180u);
    }
L_00166088:;
    {
        cpu->r[12] = add_flags(cpu, 0x00166090u, cpu->r[12], 0, 0);
    }
L_0016608c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00166094u, cpu->r[2], 0, 0);
    }
L_00166090:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000108u, 0, 0);
    }
L_00166094:;
    {
        cpu->r[3] = add_flags(cpu, 0x0016609cu, cpu->r[3], 0, 0);
    }
L_00166098:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0016609c:;
    {
        cpu->r[14] = 0x001660a0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001660a0:;
    {
        goto L_00165e18;
    }
L_001660a4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x340u);
    }
L_001660a8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000005u, 1, 1);
    }
L_001660ac:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001660b0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_001660b4:;
    {
        goto L_00165ec4;
    }
L_001660b8:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x598u);
    }
L_001660bc:;
    {
        goto L_00165f60;
    }
L_001660c0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_001660c4:;
    {
        cpu->r[3] = 0x00001be4u;
    }
L_001660c8:;
    {
        cpu->r[0] = 0x00000064u;
    }
L_001660cc:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001660d0:;
    {
        cpu->r[3] = 0x0000173cu;
    }
L_001660d4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001660d8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001660dc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_001660e0:;
    {
        uint32_t v = cpu->r[3] * cpu->r[0] + cpu->r[0]; cpu->r[0] = v;
    }
L_001660e4:;
    {
        cpu->r[14] = 0x001660e8u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001660e8:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_001660ec:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001660f0:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001660f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001660f8:;
    {
        cpu->r[14] = 0x001660fcu; fn_0015e144(cpu);
    }
L_001660fc:;
    {
        cpu->r[3] = 0x0000851fu;
    }
L_00166100:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x51ebu << 16);
    }
L_00166104:;
    {
        uint32_t v = cpu->r[5] * cpu->r[0]; cpu->r[0] = v;
    }
L_00166108:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[0]; cpu->r[2] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_0016610c:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 31u, &shc); cpu->r[0] = v;
    }
L_00166110:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 1, 5u, &shc), cpu->r[0], 1, 0);
    }
L_00166114:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_00166118:;
    {
        goto L_00165eec;
    }
L_0016611c:;
    {
        cpu->r[3] = 0x000018ecu;
    }
L_00166120:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00166124:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00166128:;
    {
        if (cond_test(cpu, 1)) {
        *(uint32_t*)G(cpu->r[4] + + 0x354u) = *(uint32_t*)vfp_s(cpu, 14);
        }
    }
L_0016612c:;
    {
        goto L_00165f38;
    }
L_00166130:;
    {
        cpu->r[0] = 0x0000000au;
    }
L_00166134:;
    {
        cpu->r[14] = 0x00166138u; fn_00093f34(cpu);
    }
L_00166138:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0016613c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00166140:;
    {
        cpu->r[2] = 0x00001900u;
    }
L_00166144:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[4], 0, 0);
    }
L_00166148:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[2]);
    }
L_0016614c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00166150:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00166154:;
    {
        vfp_vadd(cpu, 16, 14, 16);
    }
L_00166158:;
    {
        cpu->r[14] = 0x0016615cu; fn_000a2a00(cpu);
    }
L_0016615c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_00166160:;
    {
        uint32_t v = cpu->r[7] & 0x00004000u; cpu->r[7] = v;
    }
L_00166164:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_00166168:;
    {
        vfp_vadd(cpu, 16, 16, 15);
    }
L_0016616c:;
    {
        vfp_vmul(cpu, 15, 17, 16);
    }
L_00166170:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x354u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00166174:;
    {
        goto L_00165ea4;
    }
L_00166178:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x340u);
    }
L_0016617c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000005u, 1, 1);
    }
L_00166180:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00166184:;
    {
        if (cond_test(cpu, 13)) {
        wr8(cpu->r[4] + + 0x598u, cpu->r[3]);
        }
    }
L_00166188:;
    {
        goto L_00165f78;
    }
L_0016618c:;
    {
        cpu->r[0] = 0x00000014u;
    }
L_00166190:;
    {
        cpu->r[14] = 0x00166194u; fn_00093f34(cpu);
    }
L_00166194:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00166198:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0016619c:;
    {
        cpu->r[2] = 0x00001900u;
    }
L_001661a0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[4], 0, 0);
    }
L_001661a4:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[2]);
    }
L_001661a8:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_001661ac:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001661b0:;
    {
        vfp_vadd(cpu, 16, 15, 16);
    }
L_001661b4:;
    {
        cpu->r[14] = 0x001661b8u; fn_000a2a00(cpu);
    }
L_001661b8:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_001661bc:;
    {
        uint32_t v = cpu->r[7] & 0x00004000u; cpu->r[7] = v;
    }
L_001661c0:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_001661c4:;
    {
        vfp_vadd(cpu, 16, 16, 13);
    }
L_001661c8:;
    {
        vfp_vmul(cpu, 15, 17, 16);
    }
L_001661cc:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x354u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001661d0:;
    {
        goto L_00165ea4;
    }
L_00166210:;
    {
        cpu->r[0] = 0x0000000fu;
    }
L_00166214:;
    {
        cpu->r[14] = 0x00166218u; fn_00093f34(cpu);
    }
L_00166218:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0016621c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00166220:;
    {
        cpu->r[2] = 0x00001900u;
    }
L_00166224:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[4], 0, 0);
    }
L_00166228:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[2]);
    }
L_0016622c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_00166230:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00166234:;
    {
        vfp_vadd(cpu, 16, 13, 16);
    }
L_00166238:;
    {
        cpu->r[14] = 0x0016623cu; fn_000a2a00(cpu);
    }
L_0016623c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_00166240:;
    {
        uint32_t v = cpu->r[7] & 0x00004000u; cpu->r[7] = v;
    }
L_00166244:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00166248:;
    {
        vfp_vadd(cpu, 16, 16, 14);
    }
L_0016624c:;
    {
        vfp_vmul(cpu, 15, 17, 16);
    }
L_00166250:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x354u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00166254:;
    {
        goto L_00165ea4;
    }
}

/* _ZN4CCar25SetTimeCursorByDriveSpeedEi @ 00166258 (arm) */
void fn_00166258(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00166258:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x340u);
    }
L_0016625c:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[1];
    }
L_00166260:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_00166264:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0016626cu + + 0x9cu);
    }
L_00166268:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0016626c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00166270:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_00166274:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00166278:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0016627c:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x298u);
    }
L_00166280:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x298u);
    }
L_00166284:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[2];
    }
L_00166288:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_0016628c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_00166290:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[1];
    }
L_00166294:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00166298:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0016629c:;
    {
        vfp_vsub(cpu, 13, 12, 13);
    }
L_001662a0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_001662a4:;
    {
        vfp_vdiv(cpu, 13, 13, 15);
    }
L_001662a8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001662b0u + + 0x5cu);
    }
L_001662ac:;
    {
        vfp_vmul(cpu, 13, 13, 15);
    }
L_001662b0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001662b8u + + 0x58u);
    }
L_001662b4:;
    {
        vfp_vmla(cpu, 14, 13, 15);
    }
L_001662b8:;
    {
        vfp_vsqrt(cpu, 15, 14);
    }
L_001662bc:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,15));
    }
L_001662c0:;
    {
        vfp_sync_flags(cpu);
    }
L_001662c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001662d8;
        }
    }
L_001662c8:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,14);
    }
L_001662cc:;
    {
        cpu->r[14] = 0x001662d0u; imp_sqrtf(cpu); /* sqrtf */
    }
L_001662d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x340u);
    }
L_001662d4:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_001662d8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001662e0u + + 0x34u);
    }
L_001662dc:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_001662e0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001662e8u + + 0x30u);
    }
L_001662e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001662e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001662ec:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + + 0x29cu);
    }
L_001662f0:;
    {
        vfp_vnmul(cpu, 14, 15, 14);
    }
L_001662f4:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_001662f8:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_001662fc:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00166300:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x364u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00166304:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00166308u)) return;
    }
}

/* _ZN4CCar11UpdateDriftERi @ 0016631c (arm) */
void fn_0016631c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0016631c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x1dcu);
    }
L_00166320:;
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
L_00166324:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00166328:;
    {
        cpu->r[5] = rd32(0x00166330u + + 0x3fcu);
    }
L_0016632c:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_00166330:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00166334:;
    {
        cpu->r[5] = add_flags(cpu, 0x0016633cu, cpu->r[5], 0, 0);
    }
L_00166338:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0016633c:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00166340:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00166350;
        }
    }
L_00166344:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00166348:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0016634c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00166350u)) return;
    }
L_00166350:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x498u);
    }
L_00166354:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00166358:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00166344;
        }
    }
L_0016635c:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_00166360:;
    {
        cpu->r[3] = 0x00000400u;
    }
L_00166364:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x8000u << 16);
    }
L_00166368:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_0016636c:;
    {
        uint32_t v = cpu->r[2] & cpu->r[3]; cpu->r[3] = v;
    }
L_00166370:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00166374:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0x624u, cpu->r[3]);
        }
    }
L_00166378:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_0016637c:;
    {
        cpu->r[2] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_00166380:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00166384:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016641c;
        }
    }
L_00166388:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x624u);
    }
L_0016638c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x354u);
    }
L_00166390:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x620u);
    }
L_00166394:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0016639cu + + 0x38cu);
    }
L_00166398:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x62cu);
    }
L_0016639c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_001663a0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001663a4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_001663a8:;
    {
        wr32(cpu->r[4] + + 0x620u, cpu->r[3]);
    }
L_001663ac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_001663b0:;
    {
        wr32(cpu->r[4] + + 0x62cu, cpu->r[3]);
    }
L_001663b4:;
    {
        cpu->r[3] = 0x00000008u;
    }
L_001663b8:;
    {
        wr32(cpu->r[6], cpu->r[3]);
    }
L_001663bc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x62cu);
    }
L_001663c0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x608u);
    }
L_001663c4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001663c8:;
    {
        uint32_t v = cpu->r[2] ^ shifter(cpu->r[2], 1, 31u, &shc); cpu->r[3] = v;
    }
L_001663cc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[2], 1, 31u, &shc), 1, 0);
    }
L_001663d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000800u, 1, 1);
    }
L_001663d4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], 0x00000800u, 1, 0);
        }
    }
L_001663d8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = cpu->r[3];
        }
    }
L_001663dc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
        }
    }
L_001663e0:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = shifter(cpu->r[1], 3, 11u, &shc); cpu->r[1] = v;
        }
    }
L_001663e4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[1], 2, 11u, &shc), 1, 0);
        }
    }
L_001663e8:;
    {
        vfp_sync_flags(cpu);
    }
L_001663ec:;
    {
        if (cond_test(cpu, 6)) {
        goto L_00166344;
        }
    }
L_001663f0:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 11u, &shc); cpu->r[3] = v;
    }
L_001663f4:;
    {
        cpu->r[1] = 0x00000096u;
    }
L_001663f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_001663fc:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[3] = v;
    }
L_00166400:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00166404:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00166344;
        }
    }
L_00166408:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016640c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00166410:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00166414:;
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
        cpu->r[14] = v7;
        cpu->r[13] += 32u;
    }
L_00166418:;
    {
        return fn_00162488(cpu);
    }
L_0016641c:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00166420:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00166424:;
    {
        { uint32_t v = cpu->r[3] & 0x00000008u; set_nz(cpu, v); }
    }
L_00166428:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001666b4;
        }
    }
L_0016642c:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_00166430:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x374u);
    }
L_00166434:;
    {
        uint32_t v = cpu->r[2] & 0x00000008u; cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_00166438:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[4] + + 0x5e4u, cpu->r[2]);
        }
    }
L_0016643c:;
    {
        { uint32_t v = cpu->r[3] & 0x04000000u; set_nz(cpu, v); }
    }
L_00166440:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001664a4;
        }
    }
L_00166444:;
    {
        cpu->r[7] = rd32(0x0016644cu + + 0x2f4u);
    }
L_00166448:;
    {
        cpu->r[2] = 0x00000400u;
    }
L_0016644c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x8000u << 16);
    }
L_00166450:;
    {
        uint32_t v = cpu->r[3] & cpu->r[2]; cpu->r[2] = v;
    }
L_00166454:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00166458:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00166464;
        }
    }
L_0016645c:;
    {
        uint32_t v = cpu->r[3] & 0x00000008u; cpu->r[4] = v;
        set_nz(cpu, v);
    }
L_00166460:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00166868;
        }
    }
L_00166464:;
    {
        cpu->r[4] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00166468:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0016646c:;
    {
        cpu->r[1] = 0x00000078u;
    }
L_00166470:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00166474:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_00166478:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0016647c:;
    {
        cpu->r[14] = 0x00166480u; fn_000fd224(cpu);
    }
L_00166480:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_00166484:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00166344;
        }
    }
L_00166488:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0016648c:;
    {
        cpu->r[1] = 0x00000078u;
    }
L_00166490:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_00166494:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00166498:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0016649c:;
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
        cpu->r[14] = v7;
        cpu->r[13] += 32u;
    }
L_001664a0:;
    {
        return fn_000fd218(cpu);
    }
L_001664a4:;
    {
        cpu->r[2] = 0x00000400u;
    }
L_001664a8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_001664ac:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x8000u << 16);
    }
L_001664b0:;
    {
        uint32_t v = cpu->r[3] & cpu->r[2]; cpu->r[2] = v;
    }
L_001664b4:;
    {
        cpu->r[3] = 0x0000851fu;
    }
L_001664b8:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 3u, &shc); cpu->r[0] = v;
    }
L_001664bc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x51ebu << 16);
    }
L_001664c0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001664c4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x628u);
    }
L_001664c8:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[0]; cpu->r[9] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_001664cc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
        }
    }
L_001664d0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
        }
    }
L_001664d4:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 31u, &shc); cpu->r[0] = v;
    }
L_001664d8:;
    {
        uint32_t v = cpu->r[2] ^ shifter(cpu->r[2], 1, 31u, &shc); cpu->r[12] = v;
    }
L_001664dc:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[2], 1, 31u, &shc), 1, 0);
    }
L_001664e0:;
    {
        wr32(cpu->r[4] + + 0x628u, cpu->r[2]);
    }
L_001664e4:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000005u, 1, 1);
    }
L_001664e8:;
    {
        cpu->r[8] = sub_flags(cpu, shifter(cpu->r[3], 1, 5u, &shc), cpu->r[0], 1, 0);
    }
L_001664ec:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00166560;
        }
    }
L_001664f0:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001664f4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000008u; set_nz(cpu, v); }
    }
L_001664f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016656c;
        }
    }
L_001664fc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x380u);
    }
L_00166500:;
    {
        uint32_t v = cpu->r[0] ^ shifter(cpu->r[0], 1, 31u, &shc); cpu->r[12] = v;
    }
L_00166504:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[0], 1, 31u, &shc), 1, 0);
    }
L_00166508:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000400u, 1, 1);
    }
L_0016650c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0016651c;
        }
    }
L_00166510:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x624u);
    }
L_00166514:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00166518:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016683c;
        }
    }
L_0016651c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[8];
    }
L_00166520:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00166524:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x354u);
    }
L_00166528:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,16));
    }
L_0016652c:;
    {
        vfp_sync_flags(cpu);
    }
L_00166530:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016683c;
        }
    }
L_00166534:;
    {
        cpu->r[14] = 0x00001788u;
    }
L_00166538:;
    {
        cpu->r[12] = 0x00000400u;
    }
L_0016653c:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x8000u << 16);
    }
L_00166540:;
    {
        cpu->r[14] = rd32(cpu->r[4] + cpu->r[14]);
    }
L_00166544:;
    {
        uint32_t v = cpu->r[14] & cpu->r[12]; cpu->r[12] = v;
    }
L_00166548:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0016654c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00166ba4;
        }
    }
L_00166550:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000005u, 1, 1);
    }
L_00166554:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00166844;
        }
    }
L_00166558:;
    {
        cpu->r[7] = rd32(0x00166560u + + 0x1e0u);
    }
L_0016655c:;
    {
        goto L_00166764;
    }
L_00166560:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_00166564:;
    {
        { uint32_t v = cpu->r[3] & 0x00000008u; set_nz(cpu, v); }
    }
L_00166568:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016683c;
        }
    }
L_0016656c:;
    {
        cpu->r[7] = rd32(0x00166574u + + 0x1ccu);
    }
L_00166570:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_00166574:;
    {
        cpu->r[3] = 0x00000400u;
    }
L_00166578:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x8000u << 16);
    }
L_0016657c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00166580:;
    {
        uint32_t v = cpu->r[2] & cpu->r[3]; cpu->r[3] = v;
    }
L_00166584:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00166588:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00166758;
        }
    }
L_0016658c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x374u);
    }
L_00166590:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x354u);
    }
L_00166594:;
    {
        cpu->r[12] = 0x00001c98u;
    }
L_00166598:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x620u);
    }
L_0016659c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x62cu);
    }
L_001665a0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001665a4:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[3]);
    }
L_001665a8:;
    {
        cpu->r[12] = 0x00001c94u;
    }
L_001665ac:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[3]);
    }
L_001665b0:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[1];
    }
L_001665b4:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_001665b8:;
    {
        cpu->r[0] = sub_flags(cpu, shifter(cpu->r[0], 2, 4u, &shc), cpu->r[0], 1, 0);
    }
L_001665bc:;
    {
        cpu->r[12] = 0x00001788u;
    }
L_001665c0:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[2], 2, 4u, &shc), cpu->r[2], 1, 0);
    }
L_001665c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001665c8:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[0], 0x0000000fu, 0, 0);
    }
L_001665cc:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_001665d0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = cpu->r[14];
        }
    }
L_001665d4:;
    {
        cpu->r[3] = 0x00000400u;
    }
L_001665d8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001665dc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], 0x0000000fu, 0, 0);
    }
L_001665e0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[12];
        }
    }
L_001665e4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x8000u << 16);
    }
L_001665e8:;
    {
        uint32_t v = cpu->r[6] & cpu->r[3]; cpu->r[3] = v;
    }
L_001665ec:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_001665f0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001665f4:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 4u, &shc); cpu->r[0] = v;
    }
L_001665f8:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 4u, &shc); cpu->r[3] = v;
    }
L_001665fc:;
    {
        wr32(cpu->r[4] + + 0x62cu, cpu->r[3]);
    }
L_00166600:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
        }
    }
L_00166604:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x62cu, cpu->r[3]);
        }
    }
L_00166608:;
    {
        vfp_sync_flags(cpu);
    }
L_0016660c:;
    {
        wr32(cpu->r[4] + + 0x620u, cpu->r[0]);
    }
L_00166610:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
        }
    }
L_00166614:;
    {
        if (cond_test(cpu, 14)) {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
        }
    }
L_00166618:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[4] + + 0x62cu, cpu->r[3]);
        }
    }
L_0016661c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00166638;
        }
    }
L_00166620:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 2, 3u, &shc), cpu->r[3], 1, 0);
    }
L_00166624:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000007u, 0, 0);
    }
L_00166628:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016662c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_00166630:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 3u, &shc); cpu->r[3] = v;
    }
L_00166634:;
    {
        wr32(cpu->r[4] + + 0x62cu, cpu->r[3]);
    }
L_00166638:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x61cu);
    }
L_0016663c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00166640:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x0000000fu, 0, 0);
    }
L_00166644:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = cpu->r[2];
        }
    }
L_00166648:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = cpu->r[1];
        }
    }
L_0016664c:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 4u, &shc); cpu->r[0] = v;
    }
L_00166650:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_00166654:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00166674;
        }
    }
L_00166658:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0016665c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_00166660:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000003u, 0, 0);
    }
L_00166664:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00166668:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_0016666c:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 2u, &shc); cpu->r[3] = v;
    }
L_00166670:;
    {
        wr32(cpu->r[4] + + 0x62cu, cpu->r[3]);
    }
L_00166674:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00166678:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[1];
        }
    }
L_0016667c:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 4u, &shc); cpu->r[2] = v;
    }
L_00166680:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000000u, cpu->r[2], 1, 0);
    }
L_00166684:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00166688:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00166830;
        }
    }
L_0016668c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_00166690:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_00166694:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00166698:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x00000003u, 0, 0);
    }
L_0016669c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001666a0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[1];
        }
    }
L_001666a4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001666a8:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[2] = v;
    }
L_001666ac:;
    {
        wr32(cpu->r[4] + + 0x62cu, cpu->r[2]);
    }
L_001666b0:;
    {
        goto L_00166448;
    }
L_001666b4:;
    {
        cpu->r[7] = rd32(0x001666bcu + + 0x84u);
    }
L_001666b8:;
    {
        cpu->r[1] = 0x00000078u;
    }
L_001666bc:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001666c0:;
    {
        cpu->r[4] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_001666c4:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001666c8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_001666cc:;
    {
        cpu->r[14] = 0x001666d0u; fn_000fd224(cpu);
    }
L_001666d0:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001666d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001666e8;
        }
    }
L_001666d8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001666dc:;
    {
        cpu->r[1] = 0x00000078u;
    }
L_001666e0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_001666e4:;
    {
        cpu->r[14] = 0x001666e8u; fn_000fd218(cpu);
    }
L_001666e8:;
    {
        cpu->r[4] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_001666ec:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001666f0:;
    {
        cpu->r[1] = 0x00000077u;
    }
L_001666f4:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001666f8:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001666fc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00166700:;
    {
        cpu->r[14] = 0x00166704u; fn_000fd224(cpu);
    }
L_00166704:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_00166708:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00166344;
        }
    }
L_0016670c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00166710:;
    {
        cpu->r[1] = 0x00000077u;
    }
L_00166714:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_00166718:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0016671c:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00166720:;
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
        cpu->r[14] = v7;
        cpu->r[13] += 32u;
    }
L_00166724:;
    {
        return fn_000fd218(cpu);
    }
L_00166758:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[8];
    }
L_0016675c:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00166760:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_00166764:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x624u);
    }
L_00166768:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_0016676c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00166854;
        }
    }
L_00166770:;
    {
        { uint32_t v = cpu->r[3] & 0x00000002u; set_nz(cpu, v); }
    }
L_00166774:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016685c;
        }
    }
L_00166778:;
    {
        cpu->r[14] = 0x0016677cu; fn_0009b4d0(cpu);
    }
L_0016677c:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00166780:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_00166784:;
    {
        cpu->r[14] = 0x00166788u; fn_000960ec(cpu);
    }
L_00166788:;
    {
        cpu->r[14] = 0x0016678cu; fn_000929b8(cpu);
    }
L_0016678c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x354u);
    }
L_00166790:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,16));
    }
L_00166794:;
    {
        vfp_sync_flags(cpu);
    }
L_00166798:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0016679c:;
    {
        if (cond_test(cpu, 6)) {
        goto L_001668ac;
        }
    }
L_001667a0:;
    {
        cpu->r[5] = 0x00001788u;
    }
L_001667a4:;
    {
        cpu->r[3] = 0x00000400u;
    }
L_001667a8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x8000u << 16);
    }
L_001667ac:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001667b0:;
    {
        uint32_t v = cpu->r[0] & cpu->r[3]; cpu->r[3] = v;
    }
L_001667b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001667b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001667c8;
        }
    }
L_001667bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001667c0:;
    {
        cpu->r[14] = 0x001667c4u; fn_00162254(cpu);
    }
L_001667c4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001667c8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x620u);
    }
L_001667cc:;
    {
        cpu->r[3] = 0x00005556u;
    }
L_001667d0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x5555u << 16);
    }
L_001667d4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x62cu);
    }
L_001667d8:;
    {
        uint32_t v = cpu->r[0] & ~ 0x80000000u; cpu->r[0] = v;
    }
L_001667dc:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_001667e0:;
    {
        uint32_t v = cpu->r[0] & ~ 0x00000400u; cpu->r[0] = v;
    }
L_001667e4:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_001667e8:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[1]; cpu->r[6] = (uint32_t)v; cpu->r[5] = (uint32_t)(v >> 32); }
    }
L_001667ec:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[2]; cpu->r[9] = (uint32_t)v; cpu->r[12] = (uint32_t)(v >> 32); }
    }
L_001667f0:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_001667f4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[5], shifter(cpu->r[1], 1, 31u, &shc), 1, 0);
    }
L_001667f8:;
    {
        wr32(cpu->r[4] + + 0x620u, cpu->r[1]);
    }
L_001667fc:;
    {
        cpu->r[1] = 0x00001c98u;
    }
L_00166800:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_00166804:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00166808:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_0016680c:;
    {
        cpu->r[1] = 0x00001c90u;
    }
L_00166810:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[2], 1, 31u, &shc), 1, 0);
    }
L_00166814:;
    {
        wr32(cpu->r[4] + + 0x62cu, cpu->r[2]);
    }
L_00166818:;
    {
        wr8(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_0016681c:;
    {
        cpu->r[2] = 0x00001c94u;
    }
L_00166820:;
    {
        cpu->r[1] = 0x00001c8cu;
    }
L_00166824:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_00166828:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_0016682c:;
    {
        goto L_00166344;
    }
L_00166830:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00166834:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00166838:;
    {
        goto L_00166448;
    }
L_0016683c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000005u, 1, 1);
    }
L_00166840:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016656c;
        }
    }
L_00166844:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00166848:;
    {
        cpu->r[7] = rd32(0x00166850u + - 0x110u);
    }
L_0016684c:;
    {
        cpu->r[14] = 0x00166850u; fn_00162488(cpu);
    }
L_00166850:;
    {
        goto L_00166570;
    }
L_00166854:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00166858:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00166778;
        }
    }
L_0016685c:;
    {
        cpu->r[14] = 0x00166860u; fn_0009b4d0(cpu);
    }
L_00166860:;
    {
        wr32(cpu->r[4] + + 0x640u, cpu->r[0]);
    }
L_00166864:;
    {
        goto L_00166778;
    }
L_00166868:;
    {
        cpu->r[5] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0016686c:;
    {
        cpu->r[1] = 0x00000078u;
    }
L_00166870:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00166874:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_00166878:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_0016687c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00166880:;
    {
        cpu->r[14] = 0x00166884u; fn_000fd224(cpu);
    }
L_00166884:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_00166888:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00166344;
        }
    }
L_0016688c:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_00166890:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_00166894:;
    {
        cpu->r[1] = 0x00000078u;
    }
L_00166898:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0016689c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_001668a0:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_001668a4:;
    {
        cpu->r[14] = 0x001668a8u; fn_000fd248(cpu);
    }
L_001668a8:;
    {
        goto L_00166344;
    }
L_001668ac:;
    {
        cpu->r[2] = 0x00001c9cu;
    }
L_001668b0:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001668b4:;
    {
        cpu->r[0] = 0x000015e0u;
    }
L_001668b8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001668bc:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[2];
    }
L_001668c0:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_001668c4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x418u);
    }
L_001668c8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_001668cc:;
    {
        vfp_vsub(cpu, 16, 16, 15);
    }
L_001668d0:;
    {
        cpu->r[14] = 0x001668d4u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001668d4:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_001668d8:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_001668dc:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,15));
    }
L_001668e0:;
    {
        vfp_sync_flags(cpu);
    }
L_001668e4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001667a0;
        }
    }
L_001668e8:;
    {
        cpu->r[14] = 0x001668ecu; fn_0009b4d0(cpu);
    }
L_001668ec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x640u);
    }
L_001668f0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_001668f4:;
    {
        sub_flags(cpu, cpu->r[3], 0x000003e8u, 1, 1);
    }
L_001668f8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001667a0;
        }
    }
L_001668fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000630u, 0, 0);
    }
L_00166900:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[6];
    }
L_00166904:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_00166908:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3]);
    }
L_0016690c:;
    {
        vfp_vsub(cpu, 14, 13, 14);
    }
L_00166910:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00166918u + - 0x1c4u);
    }
L_00166914:;
    {
        vfp_vabs(cpu, 14, 14);
    }
L_00166918:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_0016691c:;
    {
        vfp_sync_flags(cpu);
    }
L_00166920:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001667a0;
        }
    }
L_00166924:;
    {
        cpu->r[2] = 0x00001648u;
    }
L_00166928:;
    {
        cpu->r[3] = 0x00001c98u;
    }
L_0016692c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1b0u);
    }
L_00166930:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00166934:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00166938:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_0016693c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00166940:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_00166944:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001669cc;
        }
    }
L_00166948:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016694c:;
    {
        cpu->r[14] = 0x00166950u; fn_00178e50(cpu);
    }
L_00166950:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_00166954:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1b0u);
        }
    }
L_00166958:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001669cc;
        }
    }
L_0016695c:;
    {
        cpu->r[6] = 0x00001644u;
    }
L_00166960:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00166964:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00166968:;
    {
        sub_flags(cpu, cpu->r[2], 0x000003fcu, 1, 1);
    }
L_0016696c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_00166970:;
    {
        wr32(cpu->r[2] + + 0x644u, cpu->r[0]);
    }
L_00166974:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00166d08;
        }
    }
L_00166978:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016697c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001669b8;
        }
    }
L_00166980:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00166984:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00166988:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x644u);
    }
L_0016698c:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x640u);
    }
L_00166990:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[2], 0, 1);
    }
L_00166994:;
    {
        if (cond_test(cpu, 5)) {
        goto L_00166d78;
        }
    }
L_00166998:;
    {
        cpu->r[3] = 0x0000164cu;
    }
L_0016699c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001669a0:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 1);
    }
L_001669a4:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[6]);
        }
    }
L_001669a8:;
    {
        cpu->r[3] = 0x00001650u;
    }
L_001669ac:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001669b0:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 1);
    }
L_001669b4:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[6]);
        }
    }
L_001669b8:;
    {
        cpu->r[3] = 0x00001644u;
    }
L_001669bc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1b0u);
    }
L_001669c0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001669c4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001669c8:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001669cc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x624u);
    }
L_001669d0:;
    {
        cpu->r[2] = 0x00001648u;
    }
L_001669d4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001669d8:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_001669dc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00166b28;
        }
    }
L_001669e0:;
    {
        cpu->r[1] = 0x00001c8cu;
    }
L_001669e4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x380u);
    }
L_001669e8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_001669ec:;
    {
        add_flags(cpu, cpu->r[2], 0x00000400u, 0, 1);
    }
L_001669f0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
        }
    }
L_001669f4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
        }
    }
L_001669f8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000c00u, 1, 1);
    }
L_001669fc:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[0]);
    }
L_00166a00:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00166b4c;
        }
    }
L_00166a04:;
    {
        cpu->r[2] = 0x00001c94u;
    }
L_00166a08:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00166a0c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00166a10:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_00166a14:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00166a18:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00001c94u;
        }
    }
L_00166a1c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_00166a20:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
        }
    }
L_00166a24:;
    {
        cpu->r[3] = 0x00001c8cu;
    }
L_00166a28:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00166a2c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00166a30:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_00166a34:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
        }
    }
L_00166a38:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_00166a3c:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_00166a40:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00166a44:;
    {
        cpu->r[14] = 0x00166a48u; fn_000b9d1c(cpu);
    }
L_00166a48:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00166a4c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00166b00;
        }
    }
L_00166a50:;
    {
        cpu->r[3] = 0x0000003cu;
    }
L_00166a54:;
    {
        cpu->r[2] = 0x00001c8cu;
    }
L_00166a58:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00166a5c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00166a60:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00166b70;
        }
    }
L_00166a64:;
    {
        cpu->r[3] = 0x00001c94u;
    }
L_00166a68:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00166a6c:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000001eu, 1, 1);
    }
L_00166a70:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00166b90;
        }
    }
L_00166a74:;
    {
        cpu->r[6] = 0x00001788u;
    }
L_00166a78:;
    {
        cpu->r[3] = 0x00000400u;
    }
L_00166a7c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x8000u << 16);
    }
L_00166a80:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00166a84:;
    {
        uint32_t v = cpu->r[1] & cpu->r[3]; cpu->r[3] = v;
    }
L_00166a88:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00166a8c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00166cf8;
        }
    }
L_00166a90:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x62cu);
    }
L_00166a94:;
    {
        cpu->r[3] = 0x00005556u;
    }
L_00166a98:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x620u);
    }
L_00166a9c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x5555u << 16);
    }
L_00166aa0:;
    {
        uint32_t v = cpu->r[1] & ~ 0x80000000u; cpu->r[1] = v;
    }
L_00166aa4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x354u);
    }
L_00166aa8:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_00166aac:;
    {
        uint32_t v = cpu->r[1] & ~ 0x00000400u; cpu->r[1] = v;
    }
L_00166ab0:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[0] = v;
    }
L_00166ab4:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[2]; cpu->r[12] = (uint32_t)v; cpu->r[14] = (uint32_t)(v >> 32); }
    }
L_00166ab8:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[0]; cpu->r[6] = (uint32_t)v; cpu->r[12] = (uint32_t)(v >> 32); }
    }
L_00166abc:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00166ac0:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[1]);
    }
L_00166ac4:;
    {
        cpu->r[1] = 0x00001c98u;
    }
L_00166ac8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00166acc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[14], shifter(cpu->r[2], 1, 31u, &shc), 1, 0);
    }
L_00166ad0:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_00166ad4:;
    {
        cpu->r[1] = 0x00001c90u;
    }
L_00166ad8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[0], 1, 31u, &shc), 1, 0);
    }
L_00166adc:;
    {
        wr32(cpu->r[4] + + 0x62cu, cpu->r[2]);
    }
L_00166ae0:;
    {
        wr8(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_00166ae4:;
    {
        cpu->r[1] = 0x00001c8cu;
    }
L_00166ae8:;
    {
        wr32(cpu->r[4] + + 0x620u, cpu->r[0]);
    }
L_00166aec:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_00166af0:;
    {
        cpu->r[1] = 0x00001c94u;
    }
L_00166af4:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_00166af8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x374u);
    }
L_00166afc:;
    {
        goto L_001665b0;
    }
L_00166b00:;
    {
        cpu->r[14] = 0x00166b04u; fn_000979a0(cpu);
    }
L_00166b04:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[0] + + 0x12u);
    }
L_00166b08:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000005u, 1, 1);
    }
L_00166b0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00166a50;
        }
    }
L_00166b10:;
    {
        cpu->r[14] = 0x00166b14u; fn_000979a0(cpu);
    }
L_00166b14:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[0] + + 0x12u);
    }
L_00166b18:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00166b1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00166a50;
        }
    }
L_00166b20:;
    {
        cpu->r[3] = 0x0000001eu;
    }
L_00166b24:;
    {
        goto L_00166a54;
    }
L_00166b28:;
    {
        cpu->r[1] = 0x00001c8cu;
    }
L_00166b2c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x380u);
    }
L_00166b30:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_00166b34:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000400u, 1, 1);
    }
L_00166b38:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
        }
    }
L_00166b3c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
        }
    }
L_00166b40:;
    {
        add_flags(cpu, cpu->r[2], 0x00000c00u, 0, 1);
    }
L_00166b44:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[0]);
    }
L_00166b48:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00166a04;
        }
    }
L_00166b4c:;
    {
        cpu->r[2] = 0x00001c94u;
    }
L_00166b50:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x620u);
    }
L_00166b54:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_00166b58:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00166b5c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_00166b60:;
    {
        wr32(cpu->r[4] + + 0x620u, cpu->r[3]);
    }
L_00166b64:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_00166b68:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_00166b6c:;
    {
        goto L_00166a14;
    }
L_00166b70:;
    {
        cpu->r[1] = 0x00001c90u;
    }
L_00166b74:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00166b78:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_00166b7c:;
    {
        cpu->r[2] = 0x00001c94u;
    }
L_00166b80:;
    {
        wr8(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_00166b84:;
    {
        cpu->r[1] = 0x00001c98u;
    }
L_00166b88:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_00166b8c:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_00166b90:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x620u);
    }
L_00166b94:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x354u);
    }
L_00166b98:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x62cu);
    }
L_00166b9c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x374u);
    }
L_00166ba0:;
    {
        goto L_001665b0;
    }
L_00166ba4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4acu);
    }
L_00166ba8:;
    {
        cpu->r[7] = rd32(0x00166bb0u + - 0x470u);
    }
L_00166bac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_00166bb0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00166594;
        }
    }
L_00166bb4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x000003fcu, 0, 0);
    }
L_00166bb8:;
    {
        cpu->r[3] = 0x000007feu;
    }
L_00166bbc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000003u, 0, 0);
    }
L_00166bc0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00166bc4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00166d44;
        }
    }
L_00166bc8:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x5e4u);
    }
L_00166bcc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00166bd0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_00166bd4:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[4] + + 0x5e4u, cpu->r[3]);
        }
    }
L_00166bd8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00166d54;
        }
    }
L_00166bdc:;
    {
        cpu->r[14] = 0x00166be0u; fn_0009b4d0(cpu);
    }
L_00166be0:;
    {
        cpu->r[7] = rd32(0x00166be8u + - 0x4a8u);
    }
L_00166be4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00166be8:;
    {
        wr32(cpu->r[4] + + 0x638u, cpu->r[0]);
    }
L_00166bec:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00166bf0:;
    {
        cpu->r[14] = 0x00166bf4u; fn_000960ec(cpu);
    }
L_00166bf4:;
    {
        cpu->r[14] = 0x00166bf8u; fn_000929b8(cpu);
    }
L_00166bf8:;
    {
        wr32(cpu->r[4] + + 0x63cu, cpu->r[0]);
    }
L_00166bfc:;
    {
        cpu->r[14] = 0x00166c00u; fn_0009b4d0(cpu);
    }
L_00166c00:;
    {
        cpu->r[2] = 0x00001650u;
    }
L_00166c04:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00166c08:;
    {
        cpu->r[1] = 0x00000012u;
    }
L_00166c0c:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_00166c10:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000004u, 1, 0);
    }
L_00166c14:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x354u);
    }
L_00166c18:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_00166c1c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000004u, 1, 0);
    }
L_00166c20:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_00166c24:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_00166c28:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000004u, 1, 0);
    }
L_00166c2c:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_00166c30:;
    {
        wr32(cpu->r[4] + + 0x640u, cpu->r[0]);
    }
L_00166c34:;
    {
        cpu->r[3] = 0x00001c8cu;
    }
L_00166c38:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00166c3c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00166c40:;
    {
        cpu->r[1] = 0x00001788u;
    }
L_00166c44:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00166c48:;
    {
        cpu->r[14] = 0x00001c94u;
    }
L_00166c4c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_00166c50:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_00166c54:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_00166c58:;
    {
        wr32(cpu->r[4] + cpu->r[14], cpu->r[10]);
    }
L_00166c5c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 3, 31u, &shc), 0, 0);
    }
L_00166c60:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000008u, 0, 0);
    }
L_00166c64:;
    {
        uint32_t v = cpu->r[12] | 0x80000000u; cpu->r[12] = v;
    }
L_00166c68:;
    {
        uint32_t v = cpu->r[12] | 0x00000400u; cpu->r[12] = v;
    }
L_00166c6c:;
    {
        cpu->r[9] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00166c70:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_00166c74:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[12]);
    }
L_00166c78:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_00166c7c:;
    {
        cpu->r[1] = 0x00000078u;
    }
L_00166c80:;
    {
        wr32(cpu->r[4] + cpu->r[14], cpu->r[9]);
    }
L_00166c84:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_00166c88:;
    {
        wr32(cpu->r[4] + + 0x628u, cpu->r[10]);
    }
L_00166c8c:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_00166c90:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00166c94:;
    {
        cpu->r[14] = 0x00166c98u; fn_000fd224(cpu);
    }
L_00166c98:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_00166c9c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00166570;
        }
    }
L_00166ca0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_00166ca4:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_00166ca8:;
    {
        cpu->r[1] = 0x00000077u;
    }
L_00166cac:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_00166cb0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00166cb4:;
    {
        cpu->r[14] = 0x00166cb8u; fn_000fd224(cpu);
    }
L_00166cb8:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_00166cbc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00166cd0;
        }
    }
L_00166cc0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_00166cc4:;
    {
        cpu->r[1] = 0x00000077u;
    }
L_00166cc8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_00166ccc:;
    {
        cpu->r[14] = 0x00166cd0u; fn_000fd218(cpu);
    }
L_00166cd0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00166cd4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00166cd8:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_00166cdc:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00166ce0:;
    {
        cpu->r[1] = 0x00000078u;
    }
L_00166ce4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00166ce8:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_00166cec:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00166cf0:;
    {
        cpu->r[14] = 0x00166cf4u; fn_000fd248(cpu);
    }
L_00166cf4:;
    {
        goto L_00166570;
    }
L_00166cf8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00166cfc:;
    {
        cpu->r[14] = 0x00166d00u; fn_00162254(cpu);
    }
L_00166d00:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00166d04:;
    {
        goto L_00166a90;
    }
L_00166d08:;
    {
        cpu->r[1] = rd32(0x00166d10u + - 0x5e0u);
    }
L_00166d0c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00166d10:;
    {
        cpu->r[12] = rd32(0x00166d18u + - 0x5e4u);
    }
L_00166d14:;
    {
        cpu->r[14] = 0x00000645u;
    }
L_00166d18:;
    {
        cpu->r[2] = rd32(0x00166d20u + - 0x5e8u);
    }
L_00166d1c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00166d24u, cpu->r[1], 0, 0);
    }
L_00166d20:;
    {
        cpu->r[3] = rd32(0x00166d28u + - 0x5ecu);
    }
L_00166d24:;
    {
        cpu->r[12] = add_flags(cpu, 0x00166d2cu, cpu->r[12], 0, 0);
    }
L_00166d28:;
    {
        cpu->r[2] = add_flags(cpu, 0x00166d30u, cpu->r[2], 0, 0);
    }
L_00166d2c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000011cu, 0, 0);
    }
L_00166d30:;
    {
        cpu->r[3] = add_flags(cpu, 0x00166d38u, cpu->r[3], 0, 0);
    }
L_00166d34:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00166d38:;
    {
        cpu->r[14] = 0x00166d3cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00166d3c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00166d40:;
    {
        goto L_00166978;
    }
L_00166d44:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00166d48:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = (~0x00000000u);
        }
    }
L_00166d4c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_00166d50:;
    {
        wr32(cpu->r[4] + + 0x624u, cpu->r[3]);
    }
L_00166d54:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_00166d58:;
    {
        cpu->r[3] = 0x00000400u;
    }
L_00166d5c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x8000u << 16);
    }
L_00166d60:;
    {
        cpu->r[7] = rd32(0x00166d68u + - 0x628u);
    }
L_00166d64:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00166d68:;
    {
        uint32_t v = cpu->r[2] & cpu->r[3]; cpu->r[3] = v;
    }
L_00166d6c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00166d70:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00166c34;
        }
    }
L_00166d74:;
    {
        goto L_00166bdc;
    }
L_00166d78:;
    {
        cpu->r[1] = rd32(0x00166d80u + - 0x63cu);
    }
L_00166d7c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00166d80:;
    {
        cpu->r[12] = rd32(0x00166d88u + - 0x640u);
    }
L_00166d84:;
    {
        cpu->r[14] = 0x0000064au;
    }
L_00166d88:;
    {
        cpu->r[2] = rd32(0x00166d90u + - 0x644u);
    }
L_00166d8c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00166d94u, cpu->r[1], 0, 0);
    }
L_00166d90:;
    {
        cpu->r[3] = rd32(0x00166d98u + - 0x648u);
    }
L_00166d94:;
    {
        cpu->r[12] = add_flags(cpu, 0x00166d9cu, cpu->r[12], 0, 0);
    }
L_00166d98:;
    {
        cpu->r[2] = add_flags(cpu, 0x00166da0u, cpu->r[2], 0, 0);
    }
L_00166d9c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000011cu, 0, 0);
    }
L_00166da0:;
    {
        cpu->r[3] = add_flags(cpu, 0x00166da8u, cpu->r[3], 0, 0);
    }
L_00166da4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00166da8:;
    {
        cpu->r[14] = 0x00166dacu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00166dac:;
    {
        goto L_00166998;
    }
}

/* _ZN4CCarD1Ev @ 00166db0 (arm) */
void fn_00166db0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00166db0:;
    {
        cpu->r[3] = rd32(0x00166db8u + + 0xdcu);
    }
L_00166db4:;
    {
        cpu->r[2] = rd32(0x00166dbcu + + 0xdcu);
    }
L_00166db8:;
    {
        cpu->r[3] = add_flags(cpu, 0x00166dc0u, cpu->r[3], 0, 0);
    }
L_00166dbc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00166dc0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00166dc4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00166dc8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00166dcc:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00166dd0:;
    {
        cpu->r[14] = 0x00166dd4u; fn_00160bd8(cpu);
    }
L_00166dd4:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x5acu);
    }
L_00166dd8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00166ddc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00166df0;
        }
    }
L_00166de0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00166de4:;
    {
        cpu->r[14] = 0x00166de8u; fn_0017ed80(cpu);
    }
L_00166de8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00166dec:;
    {
        cpu->r[14] = 0x00166df0u; fn_0018ba20(cpu);
    }
L_00166df0:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x5b0u);
    }
L_00166df4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00166df8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00166e0c;
        }
    }
L_00166dfc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00166e00:;
    {
        cpu->r[14] = 0x00166e04u; fn_0017ed80(cpu);
    }
L_00166e04:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00166e08:;
    {
        cpu->r[14] = 0x00166e0cu; fn_0018ba20(cpu);
    }
L_00166e0c:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x5b4u);
    }
L_00166e10:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00166e14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00166e28;
        }
    }
L_00166e18:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00166e1c:;
    {
        cpu->r[14] = 0x00166e20u; fn_0017ed80(cpu);
    }
L_00166e20:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00166e24:;
    {
        cpu->r[14] = 0x00166e28u; fn_0018ba20(cpu);
    }
L_00166e28:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x5b8u);
    }
L_00166e2c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00166e30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00166e44;
        }
    }
L_00166e34:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00166e38:;
    {
        cpu->r[14] = 0x00166e3cu; fn_0017ed80(cpu);
    }
L_00166e3c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00166e40:;
    {
        cpu->r[14] = 0x00166e44u; fn_0018ba20(cpu);
    }
L_00166e44:;
    {
        cpu->r[3] = 0x00001e10u;
    }
L_00166e48:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00166e4c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00166e50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00166e84;
        }
    }
L_00166e54:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00166e58:;
    {
        cpu->r[14] = 0x00166e5cu; fn_001905ec(cpu);
    }
L_00166e5c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00166e60:;
    {
        cpu->r[14] = 0x00166e64u; fn_0018ba20(cpu);
    }
L_00166e64:;
    {
        cpu->r[3] = 0x00001e14u;
    }
L_00166e68:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00166e6c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00166e70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00166e84;
        }
    }
L_00166e74:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00166e78:;
    {
        cpu->r[14] = 0x00166e7cu; fn_0018ea18(cpu);
    }
L_00166e7c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00166e80:;
    {
        cpu->r[14] = 0x00166e84u; fn_0018ba20(cpu);
    }
L_00166e84:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00166e88:;
    {
        cpu->r[14] = 0x00166e8cu; fn_0017213c(cpu);
    }
L_00166e8c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00166e90:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00166e94u)) return;
    }
}

/* _ZN4CCarD0Ev @ 00166e9c (arm) */
void fn_00166e9c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00166e9c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00166ea0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00166ea4:;
    {
        cpu->r[14] = 0x00166ea8u; fn_00166db0(cpu);
    }
L_00166ea8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00166eac:;
    {
        cpu->r[14] = 0x00166eb0u; fn_0018ba20(cpu);
    }
L_00166eb0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00166eb4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00166eb8u)) return;
    }
}

/* _ZN4CCarD2Ev @ 00166eb8 (arm) */
void fn_00166eb8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00166eb8:;
    {
        cpu->r[3] = rd32(0x00166ec0u + + 0xdcu);
    }
L_00166ebc:;
    {
        cpu->r[2] = rd32(0x00166ec4u + + 0xdcu);
    }
L_00166ec0:;
    {
        cpu->r[3] = add_flags(cpu, 0x00166ec8u, cpu->r[3], 0, 0);
    }
L_00166ec4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00166ec8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00166ecc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00166ed0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00166ed4:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00166ed8:;
    {
        cpu->r[14] = 0x00166edcu; fn_00160bd8(cpu);
    }
L_00166edc:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x5acu);
    }
L_00166ee0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00166ee4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00166ef8;
        }
    }
L_00166ee8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00166eec:;
    {
        cpu->r[14] = 0x00166ef0u; fn_0017ed80(cpu);
    }
L_00166ef0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00166ef4:;
    {
        cpu->r[14] = 0x00166ef8u; fn_0018ba20(cpu);
    }
L_00166ef8:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x5b0u);
    }
L_00166efc:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00166f00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00166f14;
        }
    }
L_00166f04:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00166f08:;
    {
        cpu->r[14] = 0x00166f0cu; fn_0017ed80(cpu);
    }
L_00166f0c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00166f10:;
    {
        cpu->r[14] = 0x00166f14u; fn_0018ba20(cpu);
    }
L_00166f14:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x5b4u);
    }
L_00166f18:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00166f1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00166f30;
        }
    }
L_00166f20:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00166f24:;
    {
        cpu->r[14] = 0x00166f28u; fn_0017ed80(cpu);
    }
L_00166f28:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00166f2c:;
    {
        cpu->r[14] = 0x00166f30u; fn_0018ba20(cpu);
    }
L_00166f30:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x5b8u);
    }
L_00166f34:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00166f38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00166f4c;
        }
    }
L_00166f3c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00166f40:;
    {
        cpu->r[14] = 0x00166f44u; fn_0017ed80(cpu);
    }
L_00166f44:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00166f48:;
    {
        cpu->r[14] = 0x00166f4cu; fn_0018ba20(cpu);
    }
L_00166f4c:;
    {
        cpu->r[3] = 0x00001e10u;
    }
L_00166f50:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00166f54:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00166f58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00166f8c;
        }
    }
L_00166f5c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00166f60:;
    {
        cpu->r[14] = 0x00166f64u; fn_001905ec(cpu);
    }
L_00166f64:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00166f68:;
    {
        cpu->r[14] = 0x00166f6cu; fn_0018ba20(cpu);
    }
L_00166f6c:;
    {
        cpu->r[3] = 0x00001e14u;
    }
L_00166f70:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00166f74:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00166f78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00166f8c;
        }
    }
L_00166f7c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00166f80:;
    {
        cpu->r[14] = 0x00166f84u; fn_0018ea18(cpu);
    }
L_00166f84:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00166f88:;
    {
        cpu->r[14] = 0x00166f8cu; fn_0018ba20(cpu);
    }
L_00166f8c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00166f90:;
    {
        cpu->r[14] = 0x00166f94u; fn_0017213c(cpu);
    }
L_00166f94:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00166f98:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00166f9cu)) return;
    }
}

/* _ZN4CCarC1Ei @ 00166fa4 (arm) */
void fn_00166fa4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00166fa4:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00166fa8:;
    {
        cpu->r[4] = rd32(0x00166fb0u + + 0x1bcu);
    }
L_00166fac:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00166fb0:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00166fb4:;
    {
        cpu->r[14] = 0x00166fb8u; fn_001781cc(cpu);
    }
L_00166fb8:;
    {
        cpu->r[12] = rd32(0x00166fc0u + + 0x1b0u);
    }
L_00166fbc:;
    {
        cpu->r[4] = add_flags(cpu, 0x00166fc4u, cpu->r[4], 0, 0);
    }
L_00166fc0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00166fc4:;
    {
        wr32(cpu->r[5] + + 0x58cu, cpu->r[6]);
    }
L_00166fc8:;
    {
        cpu->r[6] = 0x00001670u;
    }
L_00166fcc:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_00166fd0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00001d00u, 0, 0);
    }
L_00166fd4:;
    {
        wr32(cpu->r[5] + cpu->r[6], cpu->r[0]);
    }
L_00166fd8:;
    {
        cpu->r[6] = 0x000016d8u;
    }
L_00166fdc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_00166fe0:;
    {
        wr32(cpu->r[5], cpu->r[12]);
    }
L_00166fe4:;
    {
        cpu->r[12] = 0x00001674u;
    }
L_00166fe8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00166ff0u + + 0x174u);
    }
L_00166fec:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00166ff0:;
    {
        cpu->r[7] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00166ff4:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[0]);
    }
L_00166ff8:;
    {
        cpu->r[12] = 0x00001678u;
    }
L_00166ffc:;
    {
        wr32(cpu->r[5] + cpu->r[6], cpu->r[7]);
    }
L_00167000:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000018u, 0, 0);
    }
L_00167004:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[0]);
    }
L_00167008:;
    {
        cpu->r[12] = 0x0000167cu;
    }
L_0016700c:;
    {
        cpu->r[6] = 0x000016e4u;
    }
L_00167010:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00167014:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[0]);
    }
L_00167018:;
    {
        cpu->r[12] = 0x000016dcu;
    }
L_0016701c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00167024u + + 0x144u);
    }
L_00167020:;
    {
        cpu->r[7] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00167024:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[0]);
    }
L_00167028:;
    {
        cpu->r[12] = 0x0000176cu;
    }
L_0016702c:;
    {
        wr32(cpu->r[5] + cpu->r[6], cpu->r[7]);
    }
L_00167030:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[0]);
    }
L_00167034:;
    {
        cpu->r[12] = 0x00001770u;
    }
L_00167038:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[0]);
    }
L_0016703c:;
    {
        cpu->r[12] = 0x00001820u;
    }
L_00167040:;
    {
        wr8(cpu->r[5] + cpu->r[12], cpu->r[0]);
    }
L_00167044:;
    {
        cpu->r[12] = 0x00001824u;
    }
L_00167048:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[0]);
    }
L_0016704c:;
    {
        cpu->r[12] = 0x00001828u;
    }
L_00167050:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[0]);
    }
L_00167054:;
    {
        cpu->r[12] = 0x000018c4u;
    }
L_00167058:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[0]);
    }
L_0016705c:;
    {
        cpu->r[12] = 0x00001cfcu;
    }
L_00167060:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[0]);
    }
L_00167064:;
    {
        cpu->r[12] = 0x00001d00u;
    }
L_00167068:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[0]);
    }
L_0016706c:;
    {
        cpu->r[12] = 0x00001d04u;
    }
L_00167070:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[0]);
    }
L_00167074:;
    {
        cpu->r[12] = 0x00001d08u;
    }
L_00167078:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[0]);
    }
L_0016707c:;
    {
        cpu->r[12] = 0x00001d0cu;
    }
L_00167080:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[0]);
    }
L_00167084:;
    {
        cpu->r[12] = 0x00001d10u;
    }
L_00167088:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[0]);
    }
L_0016708c:;
    {
        cpu->r[12] = 0x00001d14u;
    }
L_00167090:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[0]);
    }
L_00167094:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00167098:;
    {
        wr32(cpu->r[3], cpu->r[1]);
    }
L_0016709c:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000001fu, 1, 1);
    }
L_001670a0:;
    {
        wr32(cpu->r[3] + + 0x7cu, cpu->r[1]);
    }
L_001670a4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001670a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00167094;
        }
    }
L_001670ac:;
    {
        cpu->r[3] = rd32(0x001670b4u + + 0xc0u);
    }
L_001670b0:;
    {
        cpu->r[2] = 0x00001648u;
    }
L_001670b4:;
    {
        cpu->r[0] = 0x00000008u;
    }
L_001670b8:;
    {
        wr32(cpu->r[5] + + 0x5e8u, cpu->r[1]);
    }
L_001670bc:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[1]);
    }
L_001670c0:;
    {
        cpu->r[2] = 0x00001e40u;
    }
L_001670c4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001670c8:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[0]);
    }
L_001670cc:;
    {
        wr32(cpu->r[5] + + 0x5ecu, cpu->r[1]);
    }
L_001670d0:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001670d4:;
    {
        cpu->r[3] = 0x00001e34u;
    }
L_001670d8:;
    {
        wr32(cpu->r[5] + + 0x5f0u, cpu->r[1]);
    }
L_001670dc:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[1]);
    }
L_001670e0:;
    {
        cpu->r[3] = 0x00001644u;
    }
L_001670e4:;
    {
        wr32(cpu->r[5] + + 0x5f4u, cpu->r[1]);
    }
L_001670e8:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[1]);
    }
L_001670ec:;
    {
        cpu->r[3] = 0x00001be0u;
    }
L_001670f0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001670f4:;
    {
        cpu->r[2] = 0x00001e38u;
    }
L_001670f8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001670fc:;
    {
        cpu->r[3] = 0x00001860u;
    }
L_00167100:;
    {
        wr8(cpu->r[5] + cpu->r[2], cpu->r[1]);
    }
L_00167104:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[1]);
    }
L_00167108:;
    {
        cpu->r[3] = 0x00001880u;
    }
L_0016710c:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[1]);
    }
L_00167110:;
    {
        cpu->r[3] = 0x00001854u;
    }
L_00167114:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[1]);
    }
L_00167118:;
    {
        cpu->r[3] = 0x00001874u;
    }
L_0016711c:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[1]);
    }
L_00167120:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00167138;
        }
    }
L_00167124:;
    {
        cpu->r[3] = 0x00001918u;
    }
L_00167128:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0016712c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00167130:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_00167134:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00167138u)) return;
    }
L_00167138:;
    {
        cpu->r[3] = 0x00001d04u;
    }
L_0016713c:;
    {
        cpu->r[2] = 0x00000005u;
    }
L_00167140:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00167144:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_00167148:;
    {
        cpu->r[3] = 0x00001d08u;
    }
L_0016714c:;
    {
        cpu->r[2] = 0x00002710u;
    }
L_00167150:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_00167154:;
    {
        cpu->r[3] = 0x00001918u;
    }
L_00167158:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0016715c:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_00167160:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00167164u)) return;
    }
}

/* _ZN4CCarC2Ei @ 00167178 (arm) */
void fn_00167178(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00167178:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0016717c:;
    {
        cpu->r[4] = rd32(0x00167184u + + 0x1bcu);
    }
L_00167180:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00167184:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00167188:;
    {
        cpu->r[14] = 0x0016718cu; fn_001781cc(cpu);
    }
L_0016718c:;
    {
        cpu->r[12] = rd32(0x00167194u + + 0x1b0u);
    }
L_00167190:;
    {
        cpu->r[4] = add_flags(cpu, 0x00167198u, cpu->r[4], 0, 0);
    }
L_00167194:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00167198:;
    {
        wr32(cpu->r[5] + + 0x58cu, cpu->r[6]);
    }
L_0016719c:;
    {
        cpu->r[6] = 0x00001670u;
    }
L_001671a0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_001671a4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00001d00u, 0, 0);
    }
L_001671a8:;
    {
        wr32(cpu->r[5] + cpu->r[6], cpu->r[0]);
    }
L_001671ac:;
    {
        cpu->r[6] = 0x000016d8u;
    }
L_001671b0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_001671b4:;
    {
        wr32(cpu->r[5], cpu->r[12]);
    }
L_001671b8:;
    {
        cpu->r[12] = 0x00001674u;
    }
L_001671bc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001671c4u + + 0x174u);
    }
L_001671c0:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001671c4:;
    {
        cpu->r[7] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001671c8:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[0]);
    }
L_001671cc:;
    {
        cpu->r[12] = 0x00001678u;
    }
L_001671d0:;
    {
        wr32(cpu->r[5] + cpu->r[6], cpu->r[7]);
    }
L_001671d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000018u, 0, 0);
    }
L_001671d8:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[0]);
    }
L_001671dc:;
    {
        cpu->r[12] = 0x0000167cu;
    }
L_001671e0:;
    {
        cpu->r[6] = 0x000016e4u;
    }
L_001671e4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001671e8:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[0]);
    }
L_001671ec:;
    {
        cpu->r[12] = 0x000016dcu;
    }
L_001671f0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001671f8u + + 0x144u);
    }
L_001671f4:;
    {
        cpu->r[7] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001671f8:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[0]);
    }
L_001671fc:;
    {
        cpu->r[12] = 0x0000176cu;
    }
L_00167200:;
    {
        wr32(cpu->r[5] + cpu->r[6], cpu->r[7]);
    }
L_00167204:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[0]);
    }
L_00167208:;
    {
        cpu->r[12] = 0x00001770u;
    }
L_0016720c:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[0]);
    }
L_00167210:;
    {
        cpu->r[12] = 0x00001820u;
    }
L_00167214:;
    {
        wr8(cpu->r[5] + cpu->r[12], cpu->r[0]);
    }
L_00167218:;
    {
        cpu->r[12] = 0x00001824u;
    }
L_0016721c:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[0]);
    }
L_00167220:;
    {
        cpu->r[12] = 0x00001828u;
    }
L_00167224:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[0]);
    }
L_00167228:;
    {
        cpu->r[12] = 0x000018c4u;
    }
L_0016722c:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[0]);
    }
L_00167230:;
    {
        cpu->r[12] = 0x00001cfcu;
    }
L_00167234:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[0]);
    }
L_00167238:;
    {
        cpu->r[12] = 0x00001d00u;
    }
L_0016723c:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[0]);
    }
L_00167240:;
    {
        cpu->r[12] = 0x00001d04u;
    }
L_00167244:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[0]);
    }
L_00167248:;
    {
        cpu->r[12] = 0x00001d08u;
    }
L_0016724c:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[0]);
    }
L_00167250:;
    {
        cpu->r[12] = 0x00001d0cu;
    }
L_00167254:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[0]);
    }
L_00167258:;
    {
        cpu->r[12] = 0x00001d10u;
    }
L_0016725c:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[0]);
    }
L_00167260:;
    {
        cpu->r[12] = 0x00001d14u;
    }
L_00167264:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[0]);
    }
L_00167268:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0016726c:;
    {
        wr32(cpu->r[3], cpu->r[1]);
    }
L_00167270:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000001fu, 1, 1);
    }
L_00167274:;
    {
        wr32(cpu->r[3] + + 0x7cu, cpu->r[1]);
    }
L_00167278:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0016727c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00167268;
        }
    }
L_00167280:;
    {
        cpu->r[3] = rd32(0x00167288u + + 0xc0u);
    }
L_00167284:;
    {
        cpu->r[2] = 0x00001648u;
    }
L_00167288:;
    {
        cpu->r[0] = 0x00000008u;
    }
L_0016728c:;
    {
        wr32(cpu->r[5] + + 0x5e8u, cpu->r[1]);
    }
L_00167290:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[1]);
    }
L_00167294:;
    {
        cpu->r[2] = 0x00001e40u;
    }
L_00167298:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016729c:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[0]);
    }
L_001672a0:;
    {
        wr32(cpu->r[5] + + 0x5ecu, cpu->r[1]);
    }
L_001672a4:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_001672a8:;
    {
        cpu->r[3] = 0x00001e34u;
    }
L_001672ac:;
    {
        wr32(cpu->r[5] + + 0x5f0u, cpu->r[1]);
    }
L_001672b0:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[1]);
    }
L_001672b4:;
    {
        cpu->r[3] = 0x00001644u;
    }
L_001672b8:;
    {
        wr32(cpu->r[5] + + 0x5f4u, cpu->r[1]);
    }
L_001672bc:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[1]);
    }
L_001672c0:;
    {
        cpu->r[3] = 0x00001be0u;
    }
L_001672c4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001672c8:;
    {
        cpu->r[2] = 0x00001e38u;
    }
L_001672cc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001672d0:;
    {
        cpu->r[3] = 0x00001860u;
    }
L_001672d4:;
    {
        wr8(cpu->r[5] + cpu->r[2], cpu->r[1]);
    }
L_001672d8:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[1]);
    }
L_001672dc:;
    {
        cpu->r[3] = 0x00001880u;
    }
L_001672e0:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[1]);
    }
L_001672e4:;
    {
        cpu->r[3] = 0x00001854u;
    }
L_001672e8:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[1]);
    }
L_001672ec:;
    {
        cpu->r[3] = 0x00001874u;
    }
L_001672f0:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[1]);
    }
L_001672f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016730c;
        }
    }
L_001672f8:;
    {
        cpu->r[3] = 0x00001918u;
    }
L_001672fc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00167300:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00167304:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_00167308:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0016730cu)) return;
    }
L_0016730c:;
    {
        cpu->r[3] = 0x00001d04u;
    }
L_00167310:;
    {
        cpu->r[2] = 0x00000005u;
    }
L_00167314:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00167318:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_0016731c:;
    {
        cpu->r[3] = 0x00001d08u;
    }
L_00167320:;
    {
        cpu->r[2] = 0x00002710u;
    }
L_00167324:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_00167328:;
    {
        cpu->r[3] = 0x00001918u;
    }
L_0016732c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00167330:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_00167334:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00167338u)) return;
    }
}

/* _ZN4CCar13ComputeExtendEv @ 0016734c (arm) */
void fn_0016734c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0016734c:;
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
L_00167350:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x548u);
    }
L_00167354:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_00167358:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_0016735c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00167360:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001674e8;
        }
    }
L_00167364:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x8u);
    }
L_00167368:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016736c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = cpu->r[4];
        }
    }
L_00167370:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001674a0;
        }
    }
L_00167374:;
    {
        cpu->r[1] = rd32(0x0016737cu + + 0x1b4u);
    }
L_00167378:;
    {
        cpu->r[10] = 0x000086a0u;
    }
L_0016737c:;
    {
        cpu->r[3] = rd32(0x00167384u + + 0x1b0u);
    }
L_00167380:;
    {
        cpu->r[9] = 0x00007960u;
    }
L_00167384:;
    {
        cpu->r[1] = add_flags(cpu, 0x0016738cu, cpu->r[1], 0, 0);
    }
L_00167388:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_0016738c:;
    {
        cpu->r[1] = rd32(0x00167394u + + 0x1a4u);
    }
L_00167390:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_00167394:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0xfffeu << 16);
    }
L_00167398:;
    {
        cpu->r[3] = add_flags(cpu, 0x001673a0u, cpu->r[3], 0, 0);
    }
L_0016739c:;
    {
        cpu->r[1] = add_flags(cpu, 0x001673a4u, cpu->r[1], 0, 0);
    }
L_001673a0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_001673a4:;
    {
        cpu->r[1] = rd32(0x001673acu + + 0x190u);
    }
L_001673a8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000128u, 0, 0);
    }
L_001673ac:;
    {
        cpu->r[4] = rd32(cpu->r[4] + + 0xcu);
    }
L_001673b0:;
    {
        cpu->r[7] = cpu->r[10];
    }
L_001673b4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001673bcu, cpu->r[1], 0, 0);
    }
L_001673b8:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_001673bc:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_001673c0:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001673c4:;
    {
        cpu->r[11] = cpu->r[9];
    }
L_001673c8:;
    {
        cpu->r[6] = cpu->r[10];
    }
L_001673cc:;
    {
        cpu->r[8] = cpu->r[9];
    }
L_001673d0:;
    {
        goto L_00167440;
    }
L_001673d4:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[2] + + 0x8u);
    }
L_001673d8:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_001673dc:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00167480;
        }
    }
L_001673e0:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_001673e4:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[1], 1, 1);
    }
L_001673e8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001673f8;
        }
    }
L_001673ec:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[1], 1, 1);
    }
L_001673f0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[9] = cpu->r[1];
        }
    }
L_001673f4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001673f8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001673fc:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_00167400:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[10] = cpu->r[3];
        }
    }
L_00167404:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = cpu->r[8];
        }
    }
L_00167408:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00167414;
        }
    }
L_0016740c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_00167410:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[8];
        }
    }
L_00167414:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_00167418:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 1);
    }
L_0016741c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0016742c;
        }
    }
L_00167420:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[0], 1, 1);
    }
L_00167424:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[11] = cpu->r[0];
        }
    }
L_00167428:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0016742c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00167430:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000000cu, 0, 0);
    }
L_00167434:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_00167438:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0016743c:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_00167440:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00167444:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001673d4;
        }
    }
L_00167448:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0016744c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00167450:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_00167454:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[1] = v0;
        cpu->r[2] = v1;
        cpu->r[3] = v2;
    }
L_00167458:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_0016745c:;
    {
        cpu->r[14] = 0x000000f3u;
    }
L_00167460:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_00167464:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_00167468:;
    {
        cpu->r[14] = 0x0016746cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0016746c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_00167470:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x548u);
    }
L_00167474:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[2] + + 0x8u);
    }
L_00167478:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_0016747c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001673e0;
        }
    }
L_00167480:;
    {
        wr32(cpu->r[12] + + 0x5d0u, cpu->r[11]);
    }
L_00167484:;
    {
        wr32(cpu->r[12] + + 0x5bcu, cpu->r[7]);
    }
L_00167488:;
    {
        wr32(cpu->r[12] + + 0x5c0u, cpu->r[10]);
    }
L_0016748c:;
    {
        wr32(cpu->r[12] + + 0x5c4u, cpu->r[6]);
    }
L_00167490:;
    {
        wr32(cpu->r[12] + + 0x5c8u, cpu->r[9]);
    }
L_00167494:;
    {
        wr32(cpu->r[12] + + 0x5ccu, cpu->r[8]);
    }
L_00167498:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_0016749c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001674a0u)) return;
    }
L_001674a0:;
    {
        cpu->r[1] = rd32(0x001674a8u + + 0x98u);
    }
L_001674a4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001674a8:;
    {
        cpu->r[14] = rd32(0x001674b0u + + 0x94u);
    }
L_001674ac:;
    {
        cpu->r[5] = 0x00000037u;
    }
L_001674b0:;
    {
        cpu->r[2] = rd32(0x001674b8u + + 0x90u);
    }
L_001674b4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001674bcu, cpu->r[1], 0, 0);
    }
L_001674b8:;
    {
        cpu->r[3] = rd32(0x001674c0u + + 0x8cu);
    }
L_001674bc:;
    {
        cpu->r[14] = add_flags(cpu, 0x001674c4u, cpu->r[14], 0, 0);
    }
L_001674c0:;
    {
        cpu->r[2] = add_flags(cpu, 0x001674c8u, cpu->r[2], 0, 0);
    }
L_001674c4:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000130u, 0, 0);
    }
L_001674c8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001674d0u, cpu->r[3], 0, 0);
    }
L_001674cc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001674d0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_001674d4:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_001674d8:;
    {
        cpu->r[14] = 0x001674dcu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001674dc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_001674e0:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x548u);
    }
L_001674e4:;
    {
        goto L_00167374;
    }
L_001674e8:;
    {
        cpu->r[1] = rd32(0x001674f0u + + 0x60u);
    }
L_001674ec:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001674f0:;
    {
        cpu->r[14] = rd32(0x001674f8u + + 0x5cu);
    }
L_001674f4:;
    {
        cpu->r[4] = 0x000000f3u;
    }
L_001674f8:;
    {
        cpu->r[2] = rd32(0x00167500u + + 0x58u);
    }
L_001674fc:;
    {
        cpu->r[1] = add_flags(cpu, 0x00167504u, cpu->r[1], 0, 0);
    }
L_00167500:;
    {
        cpu->r[3] = rd32(0x00167508u + + 0x54u);
    }
L_00167504:;
    {
        cpu->r[14] = add_flags(cpu, 0x0016750cu, cpu->r[14], 0, 0);
    }
L_00167508:;
    {
        cpu->r[2] = add_flags(cpu, 0x00167510u, cpu->r[2], 0, 0);
    }
L_0016750c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_00167510:;
    {
        cpu->r[3] = add_flags(cpu, 0x00167518u, cpu->r[3], 0, 0);
    }
L_00167514:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000128u, 0, 0);
    }
L_00167518:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_0016751c:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_00167520:;
    {
        cpu->r[14] = 0x00167524u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00167524:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_00167528:;
    {
        cpu->r[4] = rd32(cpu->r[12] + + 0x548u);
    }
L_0016752c:;
    {
        goto L_00167364;
    }
}

/* _ZN4CCar18GetAiOpponentsLaneERiS0_S0_S0_ @ 00167560 (arm) */
void fn_00167560(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00167560:;
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
L_00167564:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00167568:;
    {
        cpu->r[1] = rd32(0x00167570u + + 0x4acu);
    }
L_0016756c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_00167570:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00167574:;
    {
        cpu->r[4] = rd32(0x0016757cu + + 0x4a4u);
    }
L_00167578:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_0016757c:;
    {
        cpu->r[9] = 0x00008cbcu;
    }
L_00167580:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_00167584:;
    {
        cpu->r[4] = add_flags(cpu, 0x0016758cu, cpu->r[4], 0, 0);
    }
L_00167588:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_0016758c:;
    {
        cpu->r[14] = 0x00167590u; fn_00173e08(cpu);
    }
L_00167590:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00167594:;
    {
        cpu->r[10] = 0x00008cc4u;
    }
L_00167598:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x24u);
    }
L_0016759c:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0001u << 16);
    }
L_001675a0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_001675a4:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_001675a8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001675ac:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001675b0:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x58u);
    }
L_001675b4:;
    {
        cpu->r[12] = (~0x00000001u);
    }
L_001675b8:;
    {
        wr32(cpu->r[5], cpu->r[1]);
    }
L_001675bc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001675c0:;
    {
        wr32(cpu->r[7], cpu->r[1]);
    }
L_001675c4:;
    {
        wr32(cpu->r[8], cpu->r[12]);
    }
L_001675c8:;
    {
        wr32(cpu->r[14], cpu->r[1]);
    }
L_001675cc:;
    {
        cpu->r[7] = rd32(cpu->r[6] + + 0x1b0u);
    }
L_001675d0:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[7]);
    }
L_001675d4:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_001675d8:;
    {
        cpu->r[0] = 0x00001bc8u;
    }
L_001675dc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_001675e0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[9]);
    }
L_001675e4:;
    {
        cpu->r[14] = rd32(cpu->r[3] + cpu->r[10]);
    }
L_001675e8:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[2], cpu->r[14], 0, 0);
    }
L_001675ec:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000001u, 1, 1);
    }
L_001675f0:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
        }
    }
L_001675f4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016773c;
        }
    }
L_001675f8:;
    {
        cpu->r[8] = 0x0000423fu;
    }
L_001675fc:;
    {
        cpu->r[14] = 0x00008cb8u;
    }
L_00167600:;
    {
        cpu->r[7] = 0x00008cc0u;
    }
L_00167604:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x000fu << 16);
    }
L_00167608:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_0016760c:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x0001u << 16);
    }
L_00167610:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[7]);
    }
L_00167614:;
    {
        cpu->r[7] = 0x00000001u;
    }
L_00167618:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[5]);
    }
L_0016761c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[8]);
    }
L_00167620:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[12]);
    }
L_00167624:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_00167628:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[11]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0016762c:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00167630:;
    {
        goto L_0016765c;
    }
L_00167634:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00167638:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_0016763c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_00167640:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00167644:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00167648:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[9]);
    }
L_0016764c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[10]);
    }
L_00167650:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_00167654:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[1], 1, 1);
    }
L_00167658:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00167700;
        }
    }
L_0016765c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 1);
    }
L_00167660:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 0);
    }
L_00167664:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[8] = rd32(cpu->r[13] + + 0xcu);
        }
    }
L_00167668:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[14] = rd32(cpu->r[13] + + 0x8u);
        }
    }
L_0016766c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[8]);
        }
    }
L_00167670:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[14]);
        }
    }
L_00167674:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
        }
    }
L_00167678:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[7], 2, 2u, &shc), 0, 0);
        }
    }
L_0016767c:;
    {
        cpu->r[8] = rd32(cpu->r[1]);
    }
L_00167680:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00167684:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00167634;
        }
    }
L_00167688:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x3d4u);
    }
L_0016768c:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x3d4u);
    }
L_00167690:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x3dcu);
    }
L_00167694:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x3dcu);
    }
L_00167698:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 4u, &shc); cpu->r[1] = v;
    }
L_0016769c:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[0], 1, 4u, &shc), cpu->r[1], 1, 0);
    }
L_001676a0:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 4u, &shc); cpu->r[2] = v;
    }
L_001676a4:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[3], 1, 4u, &shc), cpu->r[2], 1, 0);
    }
L_001676a8:;
    {
        uint32_t v = cpu->r[1] * cpu->r[1]; cpu->r[1] = v;
    }
L_001676ac:;
    {
        uint32_t v = cpu->r[2] * cpu->r[2] + cpu->r[1]; cpu->r[0] = v;
    }
L_001676b0:;
    {
        cpu->r[14] = 0x001676b4u; fn_0017fa74(cpu);
    }
L_001676b4:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_001676b8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001676bc:;
    {
        cpu->r[14] = 0x001676c0u; fn_00173e08(cpu);
    }
L_001676c0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_001676c4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_001676c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00167634;
        }
    }
L_001676cc:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[6], 1, 1);
    }
L_001676d0:;
    {
        uint32_t v = shifter(cpu->r[11], 2, 4u, &shc); cpu->r[11] = v;
    }
L_001676d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00167634;
        }
    }
L_001676d8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_001676dc:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001676e0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_001676e4:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[2], 1, 1);
    }
L_001676e8:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[13] + + 0x10u, cpu->r[11]);
        }
    }
L_001676ec:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = 0x00001794u;
        }
    }
L_001676f0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[14] = cpu->r[3];
        }
    }
L_001676f4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[8] = rd32(cpu->r[8] + cpu->r[1]);
        }
    }
L_001676f8:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[13] + + 0x20u, cpu->r[8]);
        }
    }
L_001676fc:;
    {
        goto L_00167634;
    }
L_00167700:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_00167704:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x4u);
    }
L_00167708:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016770c:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x28u);
    }
L_00167710:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016773c;
        }
    }
L_00167714:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x20u);
    }
L_00167718:;
    {
        add_flags(cpu, cpu->r[7], 0x00000001u, 0, 1);
    }
L_0016771c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001679ec;
        }
    }
L_00167720:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x20u);
    }
L_00167724:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000000u, 1, 1);
    }
L_00167728:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00167a00;
        }
    }
L_0016772c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_00167730:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_00167734:;
    {
        uint32_t v = cpu->r[3] | 0x00000002u; cpu->r[3] = v;
    }
L_00167738:;
    {
        wr32(cpu->r[1], cpu->r[3]);
    }
L_0016773c:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_00167740:;
    {
        cpu->r[9] = 0x0000176fu;
    }
L_00167744:;
    {
        cpu->r[7] = cpu->r[10];
    }
L_00167748:;
    {
        cpu->r[8] = cpu->r[10];
    }
L_0016774c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00167750:;
    {
        goto L_00167758;
    }
L_00167754:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_00167758:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xb8u);
    }
L_0016775c:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_00167760:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[3], 0, 0);
    }
L_00167764:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001677a4;
        }
    }
L_00167768:;
    {
        cpu->r[10] = rd32(cpu->r[5]);
    }
L_0016776c:;
    {
        cpu->r[3] = rd16(cpu->r[0] + + 0xbcu);
    }
L_00167770:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00167774:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[10] | 0x00000001u; cpu->r[10] = v;
        }
    }
L_00167778:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[5], cpu->r[10]);
        }
    }
L_0016777c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000002u; set_nz(cpu, v); }
    }
L_00167780:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[10] | 0x00000002u; cpu->r[10] = v;
        }
    }
L_00167784:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[5], cpu->r[10]);
        }
    }
L_00167788:;
    {
        { uint32_t v = cpu->r[3] & 0x00000004u; set_nz(cpu, v); }
    }
L_0016778c:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[10] | 0x00000004u; cpu->r[10] = v;
        }
    }
L_00167790:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[5], cpu->r[10]);
        }
    }
L_00167794:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[10] = 0x00000001u;
        }
    }
L_00167798:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001677a4;
        }
    }
L_0016779c:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001677a0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[10] = 0x00000001u;
        }
    }
L_001677a4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001677a8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001677ac:;
    {
        cpu->r[14] = 0x001677b0u; fn_00173e84(cpu);
    }
L_001677b0:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[9], 1, 1);
    }
L_001677b4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00167754;
        }
    }
L_001677b8:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001677bc:;
    {
        cpu->r[12] = 0x00001bc8u;
    }
L_001677c0:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x5d4u);
    }
L_001677c4:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_001677c8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001677cc:;
    {
        cpu->r[2] = 0x000082a0u;
    }
L_001677d0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_001677d4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_001677d8:;
    {
        cpu->r[7] = rd32(cpu->r[1]);
    }
L_001677dc:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_001677e0:;
    {
        cpu->r[7] = rd32(cpu->r[7] + cpu->r[12]);
    }
L_001677e4:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_001677e8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_001677ec:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_001677f0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x1cu);
    }
L_001677f4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_001677f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001678a8;
        }
    }
L_001677fc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00167800:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00167804:;
    {
        cpu->r[3] = 0x000017c8u;
    }
L_00167808:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0016780c:;
    {
        cpu->r[3] = 0x0000270fu;
    }
L_00167810:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00167814:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00167858;
        }
    }
L_00167818:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0016781c:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_00167820:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_00167824:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x58u);
    }
L_00167828:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0016782c:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_00167830:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_00167834:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_00167838:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_0016783c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_00167840:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_00167844:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_00167848:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0016784c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_00167850:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x1d0u);
    }
L_00167854:;
    {
        wr32(cpu->r[8], cpu->r[3]);
    }
L_00167858:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0016785c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_00167860:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = (~0x00000001u);
        }
    }
L_00167864:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x4u);
    }
L_00167868:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[5]);
        }
    }
L_0016786c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00167870:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x18u);
    }
L_00167874:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
        }
    }
L_00167878:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_0016787c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = (~0x00000001u);
        }
    }
L_00167880:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[2]);
        }
    }
L_00167884:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00167888:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_0016788c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
        }
    }
L_00167890:;
    {
        wr32(cpu->r[8], cpu->r[3]);
    }
L_00167894:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = (~0x00000001u);
        }
    }
L_00167898:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[1]);
        }
    }
L_0016789c:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_001678a0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_001678a4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001678a8u)) return;
    }
L_001678a8:;
    {
        cpu->r[3] = 0x000082a4u;
    }
L_001678ac:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001678b0:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_001678b4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001678b8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001677fc;
        }
    }
L_001678bc:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x8u);
    }
L_001678c0:;
    {
        cpu->r[2] = 0x000082a8u;
    }
L_001678c4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_001678c8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[10]);
    }
L_001678cc:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[4]);
    }
L_001678d0:;
    {
        cpu->r[11] = cpu->r[2];
    }
L_001678d4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[8], shifter(cpu->r[8], 3, 31u, &shc), 0, 0);
    }
L_001678d8:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_001678dc:;
    {
        cpu->r[9] = cpu->r[8];
    }
L_001678e0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_001678e4:;
    {
        uint32_t v = shifter(cpu->r[7], 1, 1u, &shc); cpu->r[7] = v;
    }
L_001678e8:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001678ec:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[7]);
    }
L_001678f0:;
    {
        cpu->r[4] = cpu->r[8];
    }
L_001678f4:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[5]);
    }
L_001678f8:;
    {
        goto L_00167900;
    }
L_001678fc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000680u, 0, 0);
    }
L_00167900:;
    {
        cpu->r[5] = rd32(cpu->r[1] + cpu->r[11]);
    }
L_00167904:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[8], 0, 0);
    }
L_00167908:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x62cu);
    }
L_0016790c:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_00167910:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001679c4;
        }
    }
L_00167914:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x1b0u);
    }
L_00167918:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xcu);
    }
L_0016791c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[7], cpu->r[10], 1, 0);
    }
L_00167920:;
    {
        uint32_t v = cpu->r[1] ^ shifter(cpu->r[1], 1, 31u, &shc); cpu->r[2] = v;
    }
L_00167924:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[1], 1, 31u, &shc), 1, 0);
    }
L_00167928:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[2], 1, 1);
    }
L_0016792c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00167944;
        }
    }
L_00167930:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[10], 1, 1);
    }
L_00167934:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
        }
    }
L_00167938:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
        }
    }
L_0016793c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[1], 0, 0);
        }
    }
L_00167940:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[2], 0, 0);
        }
    }
L_00167944:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x3d4u);
    }
L_00167948:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x3d4u);
    }
L_0016794c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x3dcu);
    }
L_00167950:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x3dcu);
    }
L_00167954:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 4u, &shc); cpu->r[0] = v;
    }
L_00167958:;
    {
        cpu->r[12] = sub_flags(cpu, shifter(cpu->r[12], 1, 4u, &shc), cpu->r[0], 1, 0);
    }
L_0016795c:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_00167960:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 4u, &shc); cpu->r[1] = v;
    }
L_00167964:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[2], 1, 4u, &shc), cpu->r[1], 1, 0);
    }
L_00167968:;
    {
        uint32_t v = cpu->r[12] * cpu->r[12]; cpu->r[12] = v;
    }
L_0016796c:;
    {
        uint32_t v = cpu->r[1] * cpu->r[1] + cpu->r[12]; cpu->r[0] = v;
    }
L_00167970:;
    {
        cpu->r[14] = 0x00167974u; fn_0017fa74(cpu);
    }
L_00167974:;
    {
        cpu->r[1] = 0x0000176fu;
    }
L_00167978:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_0016797c:;
    {
        sub_flags(cpu, cpu->r[1], shifter(cpu->r[0], 2, 4u, &shc), 1, 1);
    }
L_00167980:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_00167984:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_00167988:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[10], 1, 1);
    }
L_0016798c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = 0x00000000u;
        }
    }
L_00167990:;
    {
        if (cond_test(cpu, 11)) {
        uint32_t v = cpu->r[2] & 0x00000001u; cpu->r[7] = v;
        }
    }
L_00167994:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00167998:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = rd32(cpu->r[6] + + 0x5d4u);
        }
    }
L_0016799c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001679c4;
        }
    }
L_001679a0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x62cu);
    }
L_001679a4:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x24u);
    }
L_001679a8:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x5d4u);
    }
L_001679ac:;
    {
        { uint32_t v = cpu->r[2] & 0x00000002u; set_nz(cpu, v); }
    }
L_001679b0:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[4] | 0x00000002u; cpu->r[4] = v;
        }
    }
L_001679b4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] | 0x00000001u; cpu->r[4] = v;
        }
    }
L_001679b8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001679bc:;
    {
        wr32(cpu->r[7], cpu->r[4]);
    }
L_001679c0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_001679c4:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_001679c8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_001679cc:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_001679d0:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_001679d4:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[2], 1, 1);
    }
L_001679d8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001678fc;
        }
    }
L_001679dc:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x10u);
    }
L_001679e0:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x20u);
    }
L_001679e4:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x28u);
    }
L_001679e8:;
    {
        goto L_00167804;
    }
L_001679ec:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x18u);
    }
L_001679f0:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001679f4:;
    {
        uint32_t v = cpu->r[3] | 0x00000001u; cpu->r[3] = v;
    }
L_001679f8:;
    {
        wr32(cpu->r[8], cpu->r[3]);
    }
L_001679fc:;
    {
        goto L_0016773c;
    }
L_00167a00:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_00167a04:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_00167a08:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = rd32(cpu->r[13] + + 0x18u);
        }
    }
L_00167a0c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[7]);
        }
    }
L_00167a10:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[3] | 0x00000004u; cpu->r[3] = v;
        }
    }
L_00167a14:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[7], cpu->r[3]);
        }
    }
L_00167a18:;
    {
        goto L_0016773c;
    }
}

/* _ZN4CCar16GetAiOptimalLaneERi @ 00167a24 (arm) */
void fn_00167a24(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00167a24:;
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
L_00167a28:;
    {
        cpu->r[4] = rd32(0x00167a30u + + 0x3acu);
    }
L_00167a2c:;
    {
        cpu->r[6] = rd32(0x00167a34u + + 0x3acu);
    }
L_00167a30:;
    {
        cpu->r[14] = 0x00008c50u;
    }
L_00167a34:;
    {
        cpu->r[4] = add_flags(cpu, 0x00167a3cu, cpu->r[4], 0, 0);
    }
L_00167a38:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x0001u << 16);
    }
L_00167a3c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_00167a40:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00167a44:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00167a48:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00167a4c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_00167a50:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_00167a54:;
    {
        cpu->r[7] = rd32(cpu->r[12]);
    }
L_00167a58:;
    {
        cpu->r[12] = 0x00001bc8u;
    }
L_00167a5c:;
    {
        cpu->r[7] = rd32(cpu->r[7] + cpu->r[12]);
    }
L_00167a60:;
    {
        cpu->r[12] = rd32(cpu->r[7] + cpu->r[14]);
    }
L_00167a64:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x8u);
    }
L_00167a68:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00006300u, 0, 0);
    }
L_00167a6c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000001eu, 0, 0);
    }
L_00167a70:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[7], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_00167a74:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x4u);
    }
L_00167a78:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_00167a7c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_00167a80:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00167a84:;
    {
        cpu->r[14] = 0x00167a88u; fn_00167560(cpu);
    }
L_00167a88:;
    {
        cpu->r[3] = 0x000017b4u;
    }
L_00167a8c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00167a90:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000005u, 1, 1);
    }
L_00167a94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00167d6c;
        }
    }
L_00167a98:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_00167a9c:;
    {
        add_flags(cpu, cpu->r[0], 0x00000002u, 0, 1);
    }
L_00167aa0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_00167aa4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = rd32(cpu->r[13] + + 0x10u);
        }
    }
L_00167aa8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_00167aac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00167ac8;
        }
    }
L_00167ab0:;
    {
        { uint32_t v = cpu->r[0] & 0x00000004u; set_nz(cpu, v); }
    }
L_00167ab4:;
    {
        uint32_t v = cpu->r[0] ^ 0x00000001u; cpu->r[2] = v;
    }
L_00167ab8:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x10u);
    }
L_00167abc:;
    {
        uint32_t v = cpu->r[2] & 0x00000001u; cpu->r[2] = v;
    }
L_00167ac0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_00167ac4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00167ac8:;
    {
        cpu->r[12] = rd32(0x00167ad0u + + 0x314u);
    }
L_00167acc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_00167ad0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_00167ad4:;
    {
        add_flags(cpu, cpu->r[1], 0x00000002u, 0, 1);
    }
L_00167ad8:;
    {
        wr32(cpu->r[12], cpu->r[0]);
    }
L_00167adc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00167af0;
        }
    }
L_00167ae0:;
    {
        { uint32_t v = cpu->r[1] & 0x00000001u; set_nz(cpu, v); }
    }
L_00167ae4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00167ae8:;
    {
        { uint32_t v = cpu->r[1] & 0x00000002u; set_nz(cpu, v); }
    }
L_00167aec:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_00167af0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00167af4:;
    {
        cpu->r[0] = 0x00008c50u;
    }
L_00167af8:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_00167afc:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x1b0u);
    }
L_00167b00:;
    {
        cpu->r[10] = rd32(cpu->r[12]);
    }
L_00167b04:;
    {
        cpu->r[12] = rd32(0x00167b0cu + + 0x2dcu);
    }
L_00167b08:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_00167b0c:;
    {
        cpu->r[12] = 0x00001bc8u;
    }
L_00167b10:;
    {
        cpu->r[12] = rd32(cpu->r[10] + cpu->r[12]);
    }
L_00167b14:;
    {
        wr32(cpu->r[8], cpu->r[1]);
    }
L_00167b18:;
    {
        cpu->r[8] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_00167b1c:;
    {
        cpu->r[0] = rd32(cpu->r[8] + + 0x8u);
    }
L_00167b20:;
    {
        cpu->r[8] = rd32(cpu->r[8] + + 0x1cu);
    }
L_00167b24:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00006300u, 0, 0);
    }
L_00167b28:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000001eu, 0, 0);
    }
L_00167b2c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[8], shifter(cpu->r[8], 3, 31u, &shc), 0, 0);
    }
L_00167b30:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_00167b34:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_00167b38:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x1b0u);
    }
L_00167b3c:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 0);
    }
L_00167b40:;
    {
        uint32_t v = cpu->r[9] ^ shifter(cpu->r[9], 1, 31u, &shc); cpu->r[10] = v;
    }
L_00167b44:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], shifter(cpu->r[9], 1, 31u, &shc), 1, 0);
    }
L_00167b48:;
    {
        sub_flags(cpu, cpu->r[10], shifter(cpu->r[11], 1, 1u, &shc), 1, 1);
    }
L_00167b4c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00167b5c;
        }
    }
L_00167b50:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 1);
    }
L_00167b54:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[8], 0, 0);
        }
    }
L_00167b58:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[8], 0, 0);
        }
    }
L_00167b5c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00167b60:;
    {
        add_flags(cpu, cpu->r[10], 0x00000002u, 0, 1);
    }
L_00167b64:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = 0x00000001u;
        }
    }
L_00167b68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00167b84;
        }
    }
L_00167b6c:;
    {
        { uint32_t v = cpu->r[10] & 0x00000001u; set_nz(cpu, v); }
    }
L_00167b70:;
    {
        uint32_t v = cpu->r[10] ^ 0x00000002u; cpu->r[8] = v;
    }
L_00167b74:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_00167b78:;
    {
        { uint32_t v = cpu->r[10] & 0x00000004u; set_nz(cpu, v); }
    }
L_00167b7c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00167b80:;
    {
        cpu->r[8] = (cpu->r[8] >> 1) & 0x1u;
    }
L_00167b84:;
    {
        cpu->r[9] = rd32(0x00167b8cu + + 0x260u);
    }
L_00167b88:;
    {
        add_flags(cpu, cpu->r[7], 0x00000002u, 0, 1);
    }
L_00167b8c:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_00167b90:;
    {
        wr32(cpu->r[9], cpu->r[10]);
    }
L_00167b94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00167bac;
        }
    }
L_00167b98:;
    {
        cpu->r[10] = 0x00004328u;
    }
L_00167b9c:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0006u << 16);
    }
L_00167ba0:;
    {
        cpu->r[10] = rd32(cpu->r[12] + cpu->r[10]);
    }
L_00167ba4:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_00167ba8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00167cb4;
        }
    }
L_00167bac:;
    {
        cpu->r[10] = rd32(0x00167bb4u + + 0x23cu);
    }
L_00167bb0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00167bb4:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_00167bb8:;
    {
        wr32(cpu->r[10], cpu->r[7]);
    }
L_00167bbc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00167c84;
        }
    }
L_00167bc0:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 1);
    }
L_00167bc4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00167d1c;
        }
    }
L_00167bc8:;
    {
        cpu->r[0] = 0x00001794u;
    }
L_00167bcc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00167bd0:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_00167bd4:;
    {
        cpu->r[0] = rd32(0x00167bdcu + + 0x218u);
    }
L_00167bd8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_00167bdc:;
    {
        wr32(cpu->r[0], cpu->r[6]);
    }
L_00167be0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00167d80;
        }
    }
L_00167be4:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_00167be8:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_00167bec:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00167bf0:;
    {
        cpu->r[9] = cpu->r[2];
    }
L_00167bf4:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00167bf8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[11] = cpu->r[8];
        }
    }
L_00167bfc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[11] = 0x0000000au;
        }
    }
L_00167c00:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00167c04:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[11], cpu->r[9], 0, 0);
    }
L_00167c08:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[9]);
    }
L_00167c0c:;
    {
        cpu->r[9] = rd32(0x00167c14u + + 0x1e4u);
    }
L_00167c10:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[11] = cpu->r[3];
        }
    }
L_00167c14:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[11] = 0x00000064u;
        }
    }
L_00167c18:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_00167c1c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x8u);
    }
L_00167c20:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_00167c24:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[10], cpu->r[11], 0, 0);
    }
L_00167c28:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[9]);
    }
L_00167c2c:;
    {
        cpu->r[9] = rd32(0x00167c34u + + 0x1c8u);
    }
L_00167c30:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0xcu);
    }
L_00167c34:;
    {
        cpu->r[4] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_00167c38:;
    {
        wr32(cpu->r[10], cpu->r[11]);
    }
L_00167c3c:;
    {
        wr32(cpu->r[4], cpu->r[7]);
    }
L_00167c40:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00167c5c;
        }
    }
L_00167c44:;
    {
        add_flags(cpu, cpu->r[6], 0x00000001u, 0, 1);
    }
L_00167c48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00167da4;
        }
    }
L_00167c4c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00167c50:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00167d8c;
        }
    }
L_00167c54:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00167c58:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00167d9c;
        }
    }
L_00167c5c:;
    {
        cpu->r[3] = 0x000040a4u;
    }
L_00167c60:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_00167c64:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_00167c68:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00167c6c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00167c7c;
        }
    }
L_00167c70:;
    {
        add_flags(cpu, cpu->r[1], 0x00000002u, 0, 1);
    }
L_00167c74:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x000017a8u;
        }
    }
L_00167c78:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[3]);
        }
    }
L_00167c7c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_00167c80:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00167c84u)) return;
    }
L_00167c84:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00167c88:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[10] = cpu->r[3];
        }
    }
L_00167c8c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_00167c90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00167cd8;
        }
    }
L_00167c94:;
    {
        cpu->r[7] = rd32(0x00167c9cu + + 0x158u);
    }
L_00167c98:;
    {
        cpu->r[6] = 0x00001794u;
    }
L_00167c9c:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00167ca0:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00167ca4:;
    {
        wr32(cpu->r[7], cpu->r[6]);
    }
L_00167ca8:;
    {
        cpu->r[7] = cpu->r[10];
    }
L_00167cac:;
    {
        cpu->r[9] = 0x00000001u;
    }
L_00167cb0:;
    {
        goto L_00167bf4;
    }
L_00167cb4:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 1);
    }
L_00167cb8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00167d48;
        }
    }
L_00167cbc:;
    {
        cpu->r[10] = rd32(0x00167cc4u + + 0x13cu);
    }
L_00167cc0:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_00167cc4:;
    {
        cpu->r[10] = rd32(0x00167cccu + + 0x138u);
    }
L_00167cc8:;
    {
        wr32(cpu->r[9], cpu->r[6]);
    }
L_00167ccc:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_00167cd0:;
    {
        wr32(cpu->r[10], cpu->r[0]);
    }
L_00167cd4:;
    {
        goto L_00167bac;
    }
L_00167cd8:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00167cdc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = cpu->r[2];
        }
    }
L_00167ce0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00167cf8;
        }
    }
L_00167ce4:;
    {
        add_flags(cpu, cpu->r[7], 0x00000001u, 0, 1);
    }
L_00167ce8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00167cf4;
        }
    }
L_00167cec:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00167cf0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00167db0;
        }
    }
L_00167cf4:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00167cf8:;
    {
        cpu->r[9] = rd32(0x00167d00u + + 0xf4u);
    }
L_00167cfc:;
    {
        cpu->r[6] = 0x00001794u;
    }
L_00167d00:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_00167d04:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00167d08:;
    {
        cpu->r[10] = cpu->r[7];
    }
L_00167d0c:;
    {
        cpu->r[11] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_00167d10:;
    {
        cpu->r[9] = cpu->r[7];
    }
L_00167d14:;
    {
        wr32(cpu->r[11], cpu->r[6]);
    }
L_00167d18:;
    {
        goto L_00167bf4;
    }
L_00167d1c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x8u);
    }
L_00167d20:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x1d4u);
    }
L_00167d24:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_00167d28:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00167bc8;
        }
    }
L_00167d2c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00167d30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00167db8;
        }
    }
L_00167d34:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_00167d38:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[10] = cpu->r[0];
        }
    }
L_00167d3c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_00167d40:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = 0x00000000u;
        }
    }
L_00167d44:;
    {
        goto L_00167c94;
    }
L_00167d48:;
    {
        add_flags(cpu, cpu->r[7], 0x00000001u, 0, 1);
    }
L_00167d4c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = cpu->r[10];
        }
    }
L_00167d50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00167cbc;
        }
    }
L_00167d54:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00167d58:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = cpu->r[7];
        }
    }
L_00167d5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00167cbc;
        }
    }
L_00167d60:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_00167d64:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00167d68:;
    {
        goto L_00167cbc;
    }
L_00167d6c:;
    {
        cpu->r[7] = (~0x00000001u);
    }
L_00167d70:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00167d74:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00167d78:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00167d7c:;
    {
        goto L_00167ac8;
    }
L_00167d80:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_00167d84:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00167d88:;
    {
        goto L_00167ca8;
    }
L_00167d8c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_00167d90:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00167c5c;
        }
    }
L_00167d94:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00167d98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00167c5c;
        }
    }
L_00167d9c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00167da0:;
    {
        goto L_00167c5c;
    }
L_00167da4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00167da8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = cpu->r[6];
        }
    }
L_00167dac:;
    {
        goto L_00167c5c;
    }
L_00167db0:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_00167db4:;
    {
        goto L_00167cf8;
    }
L_00167db8:;
    {
        cpu->r[9] = rd32(0x00167dc0u + + 0x34u);
    }
L_00167dbc:;
    {
        cpu->r[6] = 0x00001794u;
    }
L_00167dc0:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_00167dc4:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_00167dc8:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00167dcc:;
    {
        cpu->r[11] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_00167dd0:;
    {
        cpu->r[9] = cpu->r[2];
    }
L_00167dd4:;
    {
        wr32(cpu->r[11], cpu->r[6]);
    }
L_00167dd8:;
    {
        goto L_00167bf4;
    }
}

/* _ZN4CCar11GetPushQuatER6Quat4s @ 00167e08 (arm) */
void fn_00167e08(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00167e08:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00167e0c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00167e10:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4d8u);
    }
L_00167e14:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00167e18:;
    {
        cpu->r[14] = 0x00167e1cu; fn_00171b64(cpu);
    }
L_00167e1c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x1f8u);
    }
L_00167e20:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00167e24:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4d8u);
    }
L_00167e28:;
    {
        cpu->r[14] = 0x00167e2cu; fn_00171b64(cpu);
    }
L_00167e2c:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00167e30:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00167e34:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_00167e38:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1f8u);
        }
    }
L_00167e3c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00167e50;
        }
    }
L_00167e40:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4d8u);
    }
L_00167e44:;
    {
        cpu->r[14] = 0x00167e48u; fn_00171b64(cpu);
    }
L_00167e48:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00167e4c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00167e50:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 5u, &shc); cpu->r[2] = v;
    }
L_00167e54:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4d8u);
    }
L_00167e58:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 1, 0);
    }
L_00167e5c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[3], 0, 0);
    }
L_00167e60:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_00167e64:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x4u);
    }
L_00167e68:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0xcu);
    }
L_00167e6c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x8u);
    }
L_00167e70:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[3]);
    }
L_00167e74:;
    {
        wr32(cpu->r[5], cpu->r[12]);
    }
L_00167e78:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[1]);
    }
L_00167e7c:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[2]);
    }
L_00167e80:;
    {
        cpu->r[14] = 0x00167e84u; fn_00171b64(cpu);
    }
L_00167e84:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4d8u);
    }
L_00167e88:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x1f8u);
    }
L_00167e8c:;
    {
        cpu->r[14] = 0x00167e90u; fn_00171b64(cpu);
    }
L_00167e90:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00167e94:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00167e98:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_00167e9c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00167ea8;
        }
    }
L_00167ea0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4d8u);
    }
L_00167ea4:;
    {
        cpu->r[14] = 0x00167ea8u; fn_00171b64(cpu);
    }
L_00167ea8:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x1fcu);
    }
L_00167eac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00167eb0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[5]);
        }
    }
L_00167eb4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
        }
    }
L_00167eb8:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[5], cpu->r[3]);
        }
    }
L_00167ebc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00167ec0u)) return;
    }
}

/* _ZN4CCar16ComputeEnveloppeEv @ 00167ec0 (arm) */
void fn_00167ec0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00167ec0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x5d0u);
    }
L_00167ec4:;
    {
        cpu->r[3] = 0x00005556u;
    }
L_00167ec8:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x5c4u);
    }
L_00167ecc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x5555u << 16);
    }
L_00167ed0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00167ed4:;
    {
        cpu->r[8] = rd32(cpu->r[0] + + 0x548u);
    }
L_00167ed8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00167edc:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
    }
L_00167ee0:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00167ee4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00167ee8:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[0]; cpu->r[12] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_00167eec:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 31u, &shc); cpu->r[0] = v;
    }
L_00167ef0:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_00167ef4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 0);
    }
L_00167ef8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_00167efc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_00167f00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016825c;
        }
    }
L_00167f04:;
    {
        cpu->r[0] = 0x00000020u;
    }
L_00167f08:;
    {
        cpu->r[14] = 0x00167f0cu; fn_0018ba6c(cpu);
    }
L_00167f0c:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00167f10:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00167f14:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00167f18:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00167f1c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00167f20:;
    {
        cpu->r[14] = 0x00167f24u; fn_0017f6f4(cpu);
    }
L_00167f24:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x548u);
    }
L_00167f28:;
    {
        wr32(cpu->r[4] + + 0x5acu, cpu->r[6]);
    }
L_00167f2c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00167f30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00168298;
        }
    }
L_00167f34:;
    {
        cpu->r[0] = 0x00000020u;
    }
L_00167f38:;
    {
        cpu->r[14] = 0x00167f3cu; fn_0018ba6c(cpu);
    }
L_00167f3c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x5d0u);
    }
L_00167f40:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_00167f44:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00167f48:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00167f4c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00167f50:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00167f54:;
    {
        cpu->r[14] = 0x00167f58u; fn_0017f6f4(cpu);
    }
L_00167f58:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x5c0u);
    }
L_00167f5c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5ccu);
    }
L_00167f60:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x548u);
    }
L_00167f64:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_00167f68:;
    {
        wr32(cpu->r[4] + + 0x5b0u, cpu->r[6]);
    }
L_00167f6c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00167f70:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 3, 31u, &shc), 0, 0);
    }
L_00167f74:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 1u, &shc); cpu->r[5] = v;
    }
L_00167f78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001682d4;
        }
    }
L_00167f7c:;
    {
        cpu->r[0] = 0x00000020u;
    }
L_00167f80:;
    {
        cpu->r[14] = 0x00167f84u; fn_0018ba6c(cpu);
    }
L_00167f84:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5c0u);
    }
L_00167f88:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00167f8c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00167f90:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00167f94:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00167f98:;
    {
        cpu->r[14] = 0x00167f9cu; fn_0017f6f4(cpu);
    }
L_00167f9c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x548u);
    }
L_00167fa0:;
    {
        wr32(cpu->r[4] + + 0x5b4u, cpu->r[6]);
    }
L_00167fa4:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00167fa8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001681a4;
        }
    }
L_00167fac:;
    {
        cpu->r[0] = 0x00000020u;
    }
L_00167fb0:;
    {
        cpu->r[14] = 0x00167fb4u; fn_0018ba6c(cpu);
    }
L_00167fb4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x5ccu);
    }
L_00167fb8:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_00167fbc:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00167fc0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00167fc4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00167fc8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00167fcc:;
    {
        cpu->r[14] = 0x00167fd0u; fn_0017f6f4(cpu);
    }
L_00167fd0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5bcu);
    }
L_00167fd4:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x5c8u);
    }
L_00167fd8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x548u);
    }
L_00167fdc:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
    }
L_00167fe0:;
    {
        wr32(cpu->r[4] + + 0x5b8u, cpu->r[6]);
    }
L_00167fe4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00167fe8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x00000003u, 0, 0);
    }
L_00167fec:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[5] = cpu->r[2];
        }
    }
L_00167ff0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00167ff4:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x5b4u);
    }
L_00167ff8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 1, 2u, &shc), 0, 0);
    }
L_00167ffc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001681e0;
        }
    }
L_00168000:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00168004:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00168008:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_0016800c:;
    {
        cpu->r[14] = 0x00168010u; fn_0017f2c0(cpu);
    }
L_00168010:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_00168014:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016803c;
        }
    }
L_00168018:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x548u);
    }
L_0016801c:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x5b4u);
    }
L_00168020:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00168024:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016812c;
        }
    }
L_00168028:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5bcu);
    }
L_0016802c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00168030:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00168034:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00168038:;
    {
        cpu->r[14] = 0x0016803cu; fn_0017f398(cpu);
    }
L_0016803c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x548u);
    }
L_00168040:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x5b8u);
    }
L_00168044:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00168048:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00168168;
        }
    }
L_0016804c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5bcu);
    }
L_00168050:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00168054:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00168058:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_0016805c:;
    {
        cpu->r[14] = 0x00168060u; fn_0017f2c0(cpu);
    }
L_00168060:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_00168064:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016808c;
        }
    }
L_00168068:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x548u);
    }
L_0016806c:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x5b8u);
    }
L_00168070:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00168074:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001680f0;
        }
    }
L_00168078:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5bcu);
    }
L_0016807c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00168080:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00168084:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_00168088:;
    {
        cpu->r[14] = 0x0016808cu; fn_0017f398(cpu);
    }
L_0016808c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x548u);
    }
L_00168090:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x5c4u);
    }
L_00168094:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00168098:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x5b4u);
    }
L_0016809c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00168220;
        }
    }
L_001680a0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x5d0u);
    }
L_001680a4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001680a8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001680ac:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001680b0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001680b4:;
    {
        cpu->r[14] = 0x001680b8u; fn_0017f2c0(cpu);
    }
L_001680b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_001680bc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001680e8;
        }
    }
L_001680c0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x548u);
    }
L_001680c4:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x5b4u);
    }
L_001680c8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001680cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00168310;
        }
    }
L_001680d0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x5d0u);
    }
L_001680d4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001680d8:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001680dc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001680e0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001680e4:;
    {
        cpu->r[14] = 0x001680e8u; fn_0017f398(cpu);
    }
L_001680e8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001680ec:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001680f0u)) return;
    }
L_001680f0:;
    {
        cpu->r[1] = rd32(0x001680f8u + + 0x254u);
    }
L_001680f4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001680f8:;
    {
        cpu->r[12] = rd32(0x00168100u + + 0x250u);
    }
L_001680fc:;
    {
        cpu->r[14] = 0x000000f3u;
    }
L_00168100:;
    {
        cpu->r[2] = rd32(0x00168108u + + 0x24cu);
    }
L_00168104:;
    {
        cpu->r[1] = add_flags(cpu, 0x0016810cu, cpu->r[1], 0, 0);
    }
L_00168108:;
    {
        cpu->r[3] = rd32(0x00168110u + + 0x248u);
    }
L_0016810c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00168114u, cpu->r[12], 0, 0);
    }
L_00168110:;
    {
        cpu->r[2] = add_flags(cpu, 0x00168118u, cpu->r[2], 0, 0);
    }
L_00168114:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000128u, 0, 0);
    }
L_00168118:;
    {
        cpu->r[3] = add_flags(cpu, 0x00168120u, cpu->r[3], 0, 0);
    }
L_0016811c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00168120:;
    {
        cpu->r[14] = 0x00168124u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00168124:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x548u);
    }
L_00168128:;
    {
        goto L_00168078;
    }
L_0016812c:;
    {
        cpu->r[1] = rd32(0x00168134u + + 0x228u);
    }
L_00168130:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00168134:;
    {
        cpu->r[12] = rd32(0x0016813cu + + 0x224u);
    }
L_00168138:;
    {
        cpu->r[14] = 0x000000f3u;
    }
L_0016813c:;
    {
        cpu->r[2] = rd32(0x00168144u + + 0x220u);
    }
L_00168140:;
    {
        cpu->r[1] = add_flags(cpu, 0x00168148u, cpu->r[1], 0, 0);
    }
L_00168144:;
    {
        cpu->r[3] = rd32(0x0016814cu + + 0x21cu);
    }
L_00168148:;
    {
        cpu->r[12] = add_flags(cpu, 0x00168150u, cpu->r[12], 0, 0);
    }
L_0016814c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00168154u, cpu->r[2], 0, 0);
    }
L_00168150:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000128u, 0, 0);
    }
L_00168154:;
    {
        cpu->r[3] = add_flags(cpu, 0x0016815cu, cpu->r[3], 0, 0);
    }
L_00168158:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0016815c:;
    {
        cpu->r[14] = 0x00168160u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00168160:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x548u);
    }
L_00168164:;
    {
        goto L_00168028;
    }
L_00168168:;
    {
        cpu->r[1] = rd32(0x00168170u + + 0x1fcu);
    }
L_0016816c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00168170:;
    {
        cpu->r[12] = rd32(0x00168178u + + 0x1f8u);
    }
L_00168174:;
    {
        cpu->r[14] = 0x000000f3u;
    }
L_00168178:;
    {
        cpu->r[2] = rd32(0x00168180u + + 0x1f4u);
    }
L_0016817c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00168184u, cpu->r[1], 0, 0);
    }
L_00168180:;
    {
        cpu->r[3] = rd32(0x00168188u + + 0x1f0u);
    }
L_00168184:;
    {
        cpu->r[12] = add_flags(cpu, 0x0016818cu, cpu->r[12], 0, 0);
    }
L_00168188:;
    {
        cpu->r[2] = add_flags(cpu, 0x00168190u, cpu->r[2], 0, 0);
    }
L_0016818c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000128u, 0, 0);
    }
L_00168190:;
    {
        cpu->r[3] = add_flags(cpu, 0x00168198u, cpu->r[3], 0, 0);
    }
L_00168194:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00168198:;
    {
        cpu->r[14] = 0x0016819cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0016819c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x548u);
    }
L_001681a0:;
    {
        goto L_0016804c;
    }
L_001681a4:;
    {
        cpu->r[1] = rd32(0x001681acu + + 0x1d0u);
    }
L_001681a8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001681ac:;
    {
        cpu->r[12] = rd32(0x001681b4u + + 0x1ccu);
    }
L_001681b0:;
    {
        cpu->r[14] = 0x000000f3u;
    }
L_001681b4:;
    {
        cpu->r[2] = rd32(0x001681bcu + + 0x1c8u);
    }
L_001681b8:;
    {
        cpu->r[1] = add_flags(cpu, 0x001681c0u, cpu->r[1], 0, 0);
    }
L_001681bc:;
    {
        cpu->r[3] = rd32(0x001681c4u + + 0x1c4u);
    }
L_001681c0:;
    {
        cpu->r[12] = add_flags(cpu, 0x001681c8u, cpu->r[12], 0, 0);
    }
L_001681c4:;
    {
        cpu->r[2] = add_flags(cpu, 0x001681ccu, cpu->r[2], 0, 0);
    }
L_001681c8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000128u, 0, 0);
    }
L_001681cc:;
    {
        cpu->r[3] = add_flags(cpu, 0x001681d4u, cpu->r[3], 0, 0);
    }
L_001681d0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_001681d4:;
    {
        cpu->r[14] = 0x001681d8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001681d8:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x548u);
    }
L_001681dc:;
    {
        goto L_00167fac;
    }
L_001681e0:;
    {
        cpu->r[1] = rd32(0x001681e8u + + 0x1a4u);
    }
L_001681e4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001681e8:;
    {
        cpu->r[12] = rd32(0x001681f0u + + 0x1a0u);
    }
L_001681ec:;
    {
        cpu->r[14] = 0x000000f3u;
    }
L_001681f0:;
    {
        cpu->r[2] = rd32(0x001681f8u + + 0x19cu);
    }
L_001681f4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001681fcu, cpu->r[1], 0, 0);
    }
L_001681f8:;
    {
        cpu->r[3] = rd32(0x00168200u + + 0x198u);
    }
L_001681fc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00168204u, cpu->r[12], 0, 0);
    }
L_00168200:;
    {
        cpu->r[2] = add_flags(cpu, 0x00168208u, cpu->r[2], 0, 0);
    }
L_00168204:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000128u, 0, 0);
    }
L_00168208:;
    {
        cpu->r[3] = add_flags(cpu, 0x00168210u, cpu->r[3], 0, 0);
    }
L_0016820c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00168210:;
    {
        cpu->r[14] = 0x00168214u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00168214:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5bcu);
    }
L_00168218:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x548u);
    }
L_0016821c:;
    {
        goto L_00168000;
    }
L_00168220:;
    {
        cpu->r[1] = rd32(0x00168228u + + 0x174u);
    }
L_00168224:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00168228:;
    {
        cpu->r[12] = rd32(0x00168230u + + 0x170u);
    }
L_0016822c:;
    {
        cpu->r[14] = 0x000000f3u;
    }
L_00168230:;
    {
        cpu->r[2] = rd32(0x00168238u + + 0x16cu);
    }
L_00168234:;
    {
        cpu->r[1] = add_flags(cpu, 0x0016823cu, cpu->r[1], 0, 0);
    }
L_00168238:;
    {
        cpu->r[3] = rd32(0x00168240u + + 0x168u);
    }
L_0016823c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00168244u, cpu->r[12], 0, 0);
    }
L_00168240:;
    {
        cpu->r[2] = add_flags(cpu, 0x00168248u, cpu->r[2], 0, 0);
    }
L_00168244:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000128u, 0, 0);
    }
L_00168248:;
    {
        cpu->r[3] = add_flags(cpu, 0x00168250u, cpu->r[3], 0, 0);
    }
L_0016824c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00168250:;
    {
        cpu->r[14] = 0x00168254u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00168254:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x548u);
    }
L_00168258:;
    {
        goto L_001680a0;
    }
L_0016825c:;
    {
        cpu->r[1] = rd32(0x00168264u + + 0x148u);
    }
L_00168260:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00168264:;
    {
        cpu->r[12] = rd32(0x0016826cu + + 0x144u);
    }
L_00168268:;
    {
        cpu->r[14] = 0x000000f3u;
    }
L_0016826c:;
    {
        cpu->r[2] = rd32(0x00168274u + + 0x140u);
    }
L_00168270:;
    {
        cpu->r[1] = add_flags(cpu, 0x00168278u, cpu->r[1], 0, 0);
    }
L_00168274:;
    {
        cpu->r[3] = rd32(0x0016827cu + + 0x13cu);
    }
L_00168278:;
    {
        cpu->r[12] = add_flags(cpu, 0x00168280u, cpu->r[12], 0, 0);
    }
L_0016827c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00168284u, cpu->r[2], 0, 0);
    }
L_00168280:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000128u, 0, 0);
    }
L_00168284:;
    {
        cpu->r[3] = add_flags(cpu, 0x0016828cu, cpu->r[3], 0, 0);
    }
L_00168288:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0016828c:;
    {
        cpu->r[14] = 0x00168290u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00168290:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x548u);
    }
L_00168294:;
    {
        goto L_00167f04;
    }
L_00168298:;
    {
        cpu->r[1] = rd32(0x001682a0u + + 0x11cu);
    }
L_0016829c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001682a0:;
    {
        cpu->r[12] = rd32(0x001682a8u + + 0x118u);
    }
L_001682a4:;
    {
        cpu->r[14] = 0x000000f3u;
    }
L_001682a8:;
    {
        cpu->r[2] = rd32(0x001682b0u + + 0x114u);
    }
L_001682ac:;
    {
        cpu->r[1] = add_flags(cpu, 0x001682b4u, cpu->r[1], 0, 0);
    }
L_001682b0:;
    {
        cpu->r[3] = rd32(0x001682b8u + + 0x110u);
    }
L_001682b4:;
    {
        cpu->r[12] = add_flags(cpu, 0x001682bcu, cpu->r[12], 0, 0);
    }
L_001682b8:;
    {
        cpu->r[2] = add_flags(cpu, 0x001682c0u, cpu->r[2], 0, 0);
    }
L_001682bc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000128u, 0, 0);
    }
L_001682c0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001682c8u, cpu->r[3], 0, 0);
    }
L_001682c4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_001682c8:;
    {
        cpu->r[14] = 0x001682ccu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001682cc:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x548u);
    }
L_001682d0:;
    {
        goto L_00167f34;
    }
L_001682d4:;
    {
        cpu->r[1] = rd32(0x001682dcu + + 0xf0u);
    }
L_001682d8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001682dc:;
    {
        cpu->r[12] = rd32(0x001682e4u + + 0xecu);
    }
L_001682e0:;
    {
        cpu->r[14] = 0x000000f3u;
    }
L_001682e4:;
    {
        cpu->r[2] = rd32(0x001682ecu + + 0xe8u);
    }
L_001682e8:;
    {
        cpu->r[1] = add_flags(cpu, 0x001682f0u, cpu->r[1], 0, 0);
    }
L_001682ec:;
    {
        cpu->r[3] = rd32(0x001682f4u + + 0xe4u);
    }
L_001682f0:;
    {
        cpu->r[12] = add_flags(cpu, 0x001682f8u, cpu->r[12], 0, 0);
    }
L_001682f4:;
    {
        cpu->r[2] = add_flags(cpu, 0x001682fcu, cpu->r[2], 0, 0);
    }
L_001682f8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000128u, 0, 0);
    }
L_001682fc:;
    {
        cpu->r[3] = add_flags(cpu, 0x00168304u, cpu->r[3], 0, 0);
    }
L_00168300:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00168304:;
    {
        cpu->r[14] = 0x00168308u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00168308:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x548u);
    }
L_0016830c:;
    {
        goto L_00167f7c;
    }
L_00168310:;
    {
        cpu->r[1] = rd32(0x00168318u + + 0xc4u);
    }
L_00168314:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00168318:;
    {
        cpu->r[12] = rd32(0x00168320u + + 0xc0u);
    }
L_0016831c:;
    {
        cpu->r[14] = 0x000000f3u;
    }
L_00168320:;
    {
        cpu->r[2] = rd32(0x00168328u + + 0xbcu);
    }
L_00168324:;
    {
        cpu->r[1] = add_flags(cpu, 0x0016832cu, cpu->r[1], 0, 0);
    }
L_00168328:;
    {
        cpu->r[3] = rd32(0x00168330u + + 0xb8u);
    }
L_0016832c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00168334u, cpu->r[12], 0, 0);
    }
L_00168330:;
    {
        cpu->r[2] = add_flags(cpu, 0x00168338u, cpu->r[2], 0, 0);
    }
L_00168334:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000128u, 0, 0);
    }
L_00168338:;
    {
        cpu->r[3] = add_flags(cpu, 0x00168340u, cpu->r[3], 0, 0);
    }
L_0016833c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00168340:;
    {
        cpu->r[14] = 0x00168344u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00168344:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x548u);
    }
L_00168348:;
    {
        goto L_001680d0;
    }
}

/* _ZN4CCar20AddPlayerCarFeaturesEv @ 001683ec (arm) */
void fn_001683ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001683ec:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001683f0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001683f4:;
    {
        cpu->r[14] = 0x001683f8u; fn_0016734c(cpu);
    }
L_001683f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001683fc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_00168400:;
    {
        return fn_00167ec0(cpu);
    }
}

/* _ZN4CCar21ComputePlayerPositionEv @ 00168404 (arm) */
void fn_00168404(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00168404:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x5d4u);
    }
L_00168408:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_0016840c:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_00168410:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_00168414:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_00168418:;
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
L_0016841c:;
    {
        cpu->r[5] = rd32(0x00168424u + + 0x1bcu);
    }
L_00168420:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_00168424:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_00168428:;
    {
        cpu->r[5] = add_flags(cpu, 0x00168430u, cpu->r[5], 0, 0);
    }
L_0016842c:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_00168430:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_00168434:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_00168438:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_0016843c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00168440:;
    {
        cpu->r[9] = rd32(cpu->r[3] + + 0x4u);
    }
L_00168444:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_00168448:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016845c;
        }
    }
L_0016844c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00168450:;
    {
        cpu->r[14] = 0x00168454u; fn_0015d920(cpu);
    }
L_00168454:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00168458:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016855c;
        }
    }
L_0016845c:;
    {
        cpu->r[1] = rd32(0x00168464u + + 0x180u);
    }
L_00168460:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_00168464:;
    {
        cpu->r[4] = rd32(cpu->r[9] + + 0x1b0u);
    }
L_00168468:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0016846c:;
    {
        cpu->r[2] = rd32(cpu->r[10] + + 0x1b0u);
    }
L_00168470:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_00168474:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_00168478:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_0016847c:;
    {
        cpu->r[1] = 0x00001bc8u;
    }
L_00168480:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[1]);
    }
L_00168484:;
    {
        cpu->r[6] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_00168488:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00168598;
        }
    }
L_0016848c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_00168490:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[7] = cpu->r[2];
        }
    }
L_00168494:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = cpu->r[4];
        }
    }
L_00168498:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_0016849c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = cpu->r[2];
        }
    }
L_001684a0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[4] = cpu->r[4];
        }
    }
L_001684a4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[7], 1, 1);
    }
L_001684a8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001685cc;
        }
    }
L_001684ac:;
    {
        cpu->r[3] = rd32(0x001684b4u + + 0x134u);
    }
L_001684b0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[6], 0x0000000cu, 0, 0);
    }
L_001684b4:;
    {
        cpu->r[11] = rd32(0x001684bcu + + 0x130u);
    }
L_001684b8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001684bc:;
    {
        cpu->r[3] = add_flags(cpu, 0x001684c4u, cpu->r[3], 0, 0);
    }
L_001684c0:;
    {
        cpu->r[2] = rd32(0x001684c8u + + 0x128u);
    }
L_001684c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000013cu, 0, 0);
    }
L_001684c8:;
    {
        cpu->r[11] = add_flags(cpu, 0x001684d0u, cpu->r[11], 0, 0);
    }
L_001684cc:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_001684d0:;
    {
        cpu->r[2] = add_flags(cpu, 0x001684d8u, cpu->r[2], 0, 0);
    }
L_001684d4:;
    {
        cpu->r[3] = rd32(0x001684dcu + + 0x118u);
    }
L_001684d8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_001684dc:;
    {
        cpu->r[3] = add_flags(cpu, 0x001684e4u, cpu->r[3], 0, 0);
    }
L_001684e0:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_001684e4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x30u);
    }
L_001684e8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_001684ec:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00168514;
        }
    }
L_001684f0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_001684f4:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001684f8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001684fc:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00168500:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_00168504:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00168508:;
    {
        cpu->r[12] = 0x0000003au;
    }
L_0016850c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00168510:;
    {
        cpu->r[14] = 0x00168514u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00168514:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00168518:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0016851c:;
    {
        cpu->r[14] = 0x00168520u; fn_00180c78(cpu);
    }
L_00168520:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00168524:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[7], 1, 1);
    }
L_00168528:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xb8u);
    }
L_0016852c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_00168530:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001684e4;
        }
    }
L_00168534:;
    {
        cpu->r[3] = 0x000017c8u;
    }
L_00168538:;
    {
        sub_flags(cpu, cpu->r[5], 0x000003e8u, 1, 1);
    }
L_0016853c:;
    {
        wr32(cpu->r[10] + cpu->r[3], cpu->r[5]);
    }
L_00168540:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00168574;
        }
    }
L_00168544:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x1b0u);
    }
L_00168548:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_0016854c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000005u;
        }
    }
L_00168550:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016857c;
        }
    }
L_00168554:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_00168558:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0016855cu)) return;
    }
L_0016855c:;
    {
        cpu->r[3] = 0x00001740u;
    }
L_00168560:;
    {
        cpu->r[3] = rd8(cpu->r[10] + cpu->r[3]);
    }
L_00168564:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00168568:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016845c;
        }
    }
L_0016856c:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_00168570:;
    {
        goto L_00168554;
    }
L_00168574:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_00168578:;
    {
        goto L_00168554;
    }
L_0016857c:;
    {
        cpu->r[3] = 0x000009c3u;
    }
L_00168580:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_00168584:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001685c4;
        }
    }
L_00168588:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000fa0u, 1, 1);
    }
L_0016858c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00168590:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00168554;
        }
    }
L_00168594:;
    {
        goto L_0016856c;
    }
L_00168598:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[9], 0x000003d4u, 0, 0);
    }
L_0016859c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[10], 0x000003d4u, 0, 0);
    }
L_001685a0:;
    {
        cpu->r[14] = 0x001685a4u; fn_00164ba0(cpu);
    }
L_001685a4:;
    {
        cpu->r[3] = 0x000017c8u;
    }
L_001685a8:;
    {
        sub_flags(cpu, cpu->r[0], 0x000003e8u, 1, 1);
    }
L_001685ac:;
    {
        wr32(cpu->r[10] + cpu->r[3], cpu->r[0]);
    }
L_001685b0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00168574;
        }
    }
L_001685b4:;
    {
        cpu->r[3] = 0x000009c3u;
    }
L_001685b8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001685bc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000fa0u;
        }
    }
L_001685c0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00168554;
        }
    }
L_001685c4:;
    {
        cpu->r[0] = 0x00000003u;
    }
L_001685c8:;
    {
        goto L_00168554;
    }
L_001685cc:;
    {
        cpu->r[3] = 0x000017c8u;
    }
L_001685d0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001685d4:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_001685d8:;
    {
        wr32(cpu->r[10] + cpu->r[3], cpu->r[2]);
    }
L_001685dc:;
    {
        goto L_00168554;
    }
}

/* _ZN4CCar12GetCrashQuatER6Quat4s @ 001685f8 (arm) */
void fn_001685f8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001685f8:;
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
L_001685fc:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_00168600:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_00168604:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000005cu, 1, 0);
    }
L_00168608:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4d4u);
    }
L_0016860c:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00168610:;
    {
        cpu->r[14] = 0x00168614u; fn_00171b64(cpu);
    }
L_00168614:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x498u);
    }
L_00168618:;
    {
        cpu->r[9] = rd32(0x00168620u + + 0x248u);
    }
L_0016861c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00168620:;
    {
        cpu->r[9] = add_flags(cpu, 0x00168628u, cpu->r[9], 0, 0);
    }
L_00168624:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00168628:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00168820;
        }
    }
L_0016862c:;
    {
        cpu->r[0] = rd32(cpu->r[10] + + 0x4d4u);
    }
L_00168630:;
    {
        cpu->r[6] = rd32(cpu->r[10] + + 0x1dcu);
    }
L_00168634:;
    {
        cpu->r[14] = 0x00168638u; fn_00171b64(cpu);
    }
L_00168638:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0016863c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00168640:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_00168644:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[10] + + 0x1dcu);
        }
    }
L_00168648:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00168820;
        }
    }
L_0016864c:;
    {
        cpu->r[11] = rd32(0x00168654u + + 0x218u);
    }
L_00168650:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 5u, &shc); cpu->r[1] = v;
    }
L_00168654:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 1, 0);
    }
L_00168658:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[11]);
    }
L_0016865c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_00168660:;
    {
        cpu->r[3] = 0x00008508u;
    }
L_00168664:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x4u);
    }
L_00168668:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0016866c:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x10u);
    }
L_00168670:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0xcu);
    }
L_00168674:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00168678:;
    {
        cpu->r[5] = rd32(cpu->r[5] + + 0x8u);
    }
L_0016867c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00168680:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00168834;
        }
    }
L_00168684:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x1dcu);
    }
L_00168688:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_0016868c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00168834;
        }
    }
L_00168690:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00168694:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00168834;
        }
    }
L_00168698:;
    {
        cpu->r[0] = rd32(cpu->r[10] + + 0x4d4u);
    }
L_0016869c:;
    {
        cpu->r[14] = 0x001686a0u; fn_00171b64(cpu);
    }
L_001686a0:;
    {
        cpu->r[2] = rd32(cpu->r[10] + + 0x498u);
    }
L_001686a4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001686a8:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001686ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016884c;
        }
    }
L_001686b0:;
    {
        cpu->r[2] = rd32(cpu->r[10] + + 0x1dcu);
    }
L_001686b4:;
    {
        cpu->r[0] = rd32(cpu->r[10] + + 0x4d4u);
    }
L_001686b8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001686bc:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_001686c0:;
    {
        cpu->r[14] = 0x001686c4u; fn_00171b64(cpu);
    }
L_001686c4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_001686c8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001686cc:;
    {
        cpu->r[1] = rd32(cpu->r[0]);
    }
L_001686d0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_001686d4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_001686d8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[10] + + 0x1dcu);
        }
    }
L_001686dc:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0016884c;
        }
    }
L_001686e0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_001686e4:;
    {
        cpu->r[0] = rd32(cpu->r[9] + cpu->r[11]);
    }
L_001686e8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_001686ec:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_001686f0:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 5u, &shc); cpu->r[1] = v;
    }
L_001686f4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000048u, 0, 0);
    }
L_001686f8:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001686fc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_00168700:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 2u, &shc), 1, 0);
    }
L_00168704:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_00168708:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_0016870c:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[3] + + 0x10u);
    }
L_00168710:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_00168714:;
    {
        *vfp_s(cpu, 19) = *(float*)G(cpu->r[3] + + 0xcu);
    }
L_00168718:;
    {
        *vfp_s(cpu, 18) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_0016871c:;
    {
        cpu->r[14] = 0x00168720u; fn_00096348(cpu);
    }
L_00168720:;
    {
        *vfp_s(cpu,17) = (float)*(int32_t*)vfp_s(cpu,17);
    }
L_00168724:;
    {
        *vfp_s(cpu,18) = (float)*(int32_t*)vfp_s(cpu,18);
    }
L_00168728:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,17);
    }
L_0016872c:;
    {
        *vfp_s(cpu,19) = (float)*(int32_t*)vfp_s(cpu,19);
    }
L_00168730:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,18);
    }
L_00168734:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_00168738:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,19);
    }
L_0016873c:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00168740:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_00168744:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00168748:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_0016874c:;
    {
        cpu->r[14] = 0x00168750u; fn_00155ab4(cpu);
    }
L_00168750:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[7];
    }
L_00168754:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00168758:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[8];
    }
L_0016875c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00168760:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00168764:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00168768:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[6];
    }
L_0016876c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00168770:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00168774:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[5];
    }
L_00168778:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0016877c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00168780:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00168784:;
    {
        cpu->r[14] = 0x00168788u; fn_00155ab4(cpu);
    }
L_00168788:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0016878c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x4780u << 16);
    }
L_00168790:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00168794:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_00168798:;
    {
        cpu->r[14] = 0x0016879cu; fn_00155b68(cpu);
    }
L_0016879c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001687a0:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001687a4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x4780u << 16);
    }
L_001687a8:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001687ac:;
    {
        cpu->r[14] = 0x001687b0u; fn_00155b68(cpu);
    }
L_001687b0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_001687b4:;
    {
        cpu->r[14] = 0x001687b8u; fn_00155a80(cpu);
    }
L_001687b8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_001687bc:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001687c0:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001687c4:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_001687c8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_001687cc:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001687d0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001687d4:;
    {
        cpu->r[14] = 0x001687d8u; fn_00156198(cpu);
    }
L_001687d8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001687dc:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001687e0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_001687e4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x4780u << 16);
    }
L_001687e8:;
    {
        cpu->r[14] = 0x001687ecu; fn_00155acc(cpu);
    }
L_001687ec:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x28u);
    }
L_001687f0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x2cu);
    }
L_001687f4:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_001687f8:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_001687fc:;
    {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00168800:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x30u);
    }
L_00168804:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00168808:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_0016880c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x34u);
    }
L_00168810:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00168814:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00168818:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0016881c:;
    {
        goto L_00168840;
    }
L_00168820:;
    {
        cpu->r[0] = rd32(cpu->r[10] + + 0x4d4u);
    }
L_00168824:;
    {
        cpu->r[14] = 0x00168828u; fn_00171b64(cpu);
    }
L_00168828:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0016882c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00168830:;
    {
        goto L_0016864c;
    }
L_00168834:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[7]);
    }
L_00168838:;
    {
        wr32(cpu->r[4], cpu->r[6]);
    }
L_0016883c:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[5]);
        wr32(ea + 4u, cpu->r[8]);
    }
L_00168840:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000005cu, 0, 0);
    }
L_00168844:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_00168848:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0016884cu)) return;
    }
L_0016884c:;
    {
        cpu->r[0] = rd32(cpu->r[10] + + 0x4d4u);
    }
L_00168850:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00168854:;
    {
        cpu->r[14] = 0x00168858u; fn_00171b64(cpu);
    }
L_00168858:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_0016885c:;
    {
        cpu->r[2] = rd32(cpu->r[0]);
    }
L_00168860:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_00168864:;
    {
        goto L_001686e0;
    }
}

/* _Z28VectorPartNotInSameDirectionRK8Vector4sS_ @ 00168870 (arm) */
void fn_00168870(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00168870:;
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
L_00168874:;
    {
        cpu->r[5] = rd32(cpu->r[2]);
    }
L_00168878:;
    {
        cpu->r[11] = rd32(cpu->r[1]);
    }
L_0016887c:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00168880:;
    {
        cpu->r[9] = rd32(cpu->r[1] + + 0x4u);
    }
L_00168884:;
    {
        cpu->r[3] = 0x0000afc8u;
    }
L_00168888:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x4u);
    }
L_0016888c:;
    {
        uint32_t v = cpu->r[11] * cpu->r[5]; cpu->r[7] = v;
    }
L_00168890:;
    {
        cpu->r[6] = rd32(cpu->r[2] + + 0x8u);
    }
L_00168894:;
    {
        uint32_t v = cpu->r[9] * cpu->r[0] + cpu->r[7]; cpu->r[7] = v;
    }
L_00168898:;
    {
        cpu->r[10] = rd32(cpu->r[1] + + 0x8u);
    }
L_0016889c:;
    {
        uint32_t v = cpu->r[5] * cpu->r[5]; cpu->r[4] = v;
    }
L_001688a0:;
    {
        uint32_t v = cpu->r[0] * cpu->r[0] + cpu->r[4]; cpu->r[4] = v;
    }
L_001688a4:;
    {
        uint32_t v = cpu->r[10] * cpu->r[6] + cpu->r[7]; cpu->r[7] = v;
    }
L_001688a8:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_001688ac:;
    {
        uint32_t v = cpu->r[6] * cpu->r[6] + cpu->r[4]; cpu->r[4] = v;
    }
L_001688b0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001688c4;
        }
    }
L_001688b4:;
    {
        uint32_t v = shifter(cpu->r[7], 1, 1u, &shc); cpu->r[7] = v;
    }
L_001688b8:;
    {
        uint32_t v = shifter(cpu->r[4], 1, 1u, &shc); cpu->r[4] = v;
    }
L_001688bc:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_001688c0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001688b4;
        }
    }
L_001688c4:;
    {
        uint32_t v = cpu->r[0] ^ shifter(cpu->r[0], 1, 31u, &shc); cpu->r[3] = v;
    }
L_001688c8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 31u, &shc), 1, 0);
    }
L_001688cc:;
    {
        uint32_t v = cpu->r[5] ^ shifter(cpu->r[5], 1, 31u, &shc); cpu->r[12] = v;
    }
L_001688d0:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[5], 1, 31u, &shc), 1, 0);
    }
L_001688d4:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_001688d8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = cpu->r[3];
        }
    }
L_001688dc:;
    {
        uint32_t v = cpu->r[6] ^ shifter(cpu->r[6], 1, 31u, &shc); cpu->r[3] = v;
    }
L_001688e0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[6], 1, 31u, &shc), 1, 0);
    }
L_001688e4:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_001688e8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = cpu->r[3];
        }
    }
L_001688ec:;
    {
        cpu->r[3] = 0x0000afc8u;
    }
L_001688f0:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_001688f4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00168954;
        }
    }
L_001688f8:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 1u, &shc); cpu->r[0] = v;
    }
L_001688fc:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 1u, &shc); cpu->r[6] = v;
    }
L_00168900:;
    {
        uint32_t v = cpu->r[0] ^ shifter(cpu->r[0], 1, 31u, &shc); cpu->r[10] = v;
    }
L_00168904:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], shifter(cpu->r[0], 1, 31u, &shc), 1, 0);
    }
L_00168908:;
    {
        uint32_t v = cpu->r[6] ^ shifter(cpu->r[6], 1, 31u, &shc); cpu->r[12] = v;
    }
L_0016890c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[6], 1, 31u, &shc), 1, 0);
    }
L_00168910:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 1u, &shc); cpu->r[5] = v;
    }
L_00168914:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[12], 1, 1);
    }
L_00168918:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[12] = cpu->r[10];
        }
    }
L_0016891c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = cpu->r[12];
        }
    }
L_00168920:;
    {
        uint32_t v = cpu->r[5] ^ shifter(cpu->r[5], 1, 31u, &shc); cpu->r[10] = v;
    }
L_00168924:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], shifter(cpu->r[5], 1, 31u, &shc), 1, 0);
    }
L_00168928:;
    {
        uint32_t v = shifter(cpu->r[4], 1, 1u, &shc); cpu->r[4] = v;
    }
L_0016892c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[10], 1, 1);
    }
L_00168930:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = cpu->r[10];
        }
    }
L_00168934:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_00168938:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001688f8;
        }
    }
L_0016893c:;
    {
        wr32(cpu->r[2] + + 0x8u, cpu->r[6]);
    }
L_00168940:;
    {
        wr32(cpu->r[2], cpu->r[5]);
    }
L_00168944:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[0]);
    }
L_00168948:;
    {
        cpu->r[10] = rd32(cpu->r[1] + + 0x8u);
    }
L_0016894c:;
    {
        cpu->r[11] = rd32(cpu->r[1]);
    }
L_00168950:;
    {
        cpu->r[9] = rd32(cpu->r[1] + + 0x4u);
    }
L_00168954:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00168958:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[8], cpu->r[11]);
        }
    }
L_0016895c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[8] + + 0x4u, cpu->r[9]);
        }
    }
L_00168960:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[8] + + 0x8u, cpu->r[10]);
        }
    }
L_00168964:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001689a0;
        }
    }
L_00168968:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0016896c:;
    {
        uint32_t v = cpu->r[7] * cpu->r[0]; cpu->r[0] = v;
    }
L_00168970:;
    {
        cpu->r[14] = 0x00168974u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00168974:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00168978:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[0], 1, 0);
    }
L_0016897c:;
    {
        uint32_t v = cpu->r[7] * cpu->r[6]; cpu->r[0] = v;
    }
L_00168980:;
    {
        cpu->r[14] = 0x00168984u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00168984:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00168988:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[0], 1, 0);
    }
L_0016898c:;
    {
        uint32_t v = cpu->r[7] * cpu->r[5]; cpu->r[0] = v;
    }
L_00168990:;
    {
        cpu->r[14] = 0x00168994u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00168994:;
    {
        uint32_t base = cpu->r[8];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[9]);
        wr32(ea + 4u, cpu->r[10]);
    }
L_00168998:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[11], cpu->r[0], 1, 0);
    }
L_0016899c:;
    {
        wr32(cpu->r[8], cpu->r[0]);
    }
L_001689a0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001689a4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001689a8u)) return;
    }
}

/* _ZN4CCar23UpdateAIDesiredVelocityEPK10RoadStructR11CMultiArrayIPS_E @ 001689a8 (arm) */
void fn_001689a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001689a8:;
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
L_001689ac:;
    {
        cpu->r[6] = rd32(0x001689b4u + + 0xa80u);
    }
L_001689b0:;
    {
        cpu->r[7] = rd32(0x001689b8u + + 0xa80u);
    }
L_001689b4:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_001689b8:;
    {
        cpu->r[6] = add_flags(cpu, 0x001689c0u, cpu->r[6], 0, 0);
    }
L_001689bc:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_001689c0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000b4u, 1, 0);
    }
L_001689c4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001689c8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_001689cc:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_001689d0:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_001689d4:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_001689d8:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_001689dc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_001689e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_001689e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_001689e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001689ec:;
    {
        cpu->r[5] = rd32(cpu->r[3] + + 0x4u);
    }
L_001689f0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001689f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00168a24;
        }
    }
L_001689f8:;
    {
        cpu->r[2] = 0x00001814u;
    }
L_001689fc:;
    {
        cpu->r[3] = 0x00001818u;
    }
L_00168a00:;
    {
        cpu->r[10] = rd32(cpu->r[0] + + 0x484u);
    }
L_00168a04:;
    {
        cpu->r[12] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_00168a08:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00168a0c:;
    {
        uint32_t v = cpu->r[10] & 0x00000001u; cpu->r[10] = v;
        set_nz(cpu, v);
    }
L_00168a10:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_00168a14:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[12]);
    }
L_00168a18:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00168a1c:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_00168a20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00168a2c;
        }
    }
L_00168a24:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000b4u, 0, 0);
    }
L_00168a28:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00168a2cu)) return;
    }
L_00168a2c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00168a30:;
    {
        cpu->r[14] = 0x00168a34u; fn_001615c0(cpu);
    }
L_00168a34:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00168a38:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000a4u, 0, 0);
    }
L_00168a3c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000098u, 0, 0);
    }
L_00168a40:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_00168a44:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00168a48:;
    {
        cpu->r[14] = 0x00168a50u;
    }
L_00168a4c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x20u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00168a50u)) return;
    }
L_00168a50:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x428u);
    }
L_00168a54:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0x42cu);
    }
L_00168a58:;
    {
        cpu->r[1] = 0x000018bcu;
    }
L_00168a5c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x430u);
    }
L_00168a60:;
    {
        uint32_t v = cpu->r[3] * cpu->r[3]; cpu->r[3] = v;
    }
L_00168a64:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_00168a68:;
    {
        uint32_t v = cpu->r[8] * cpu->r[8] + cpu->r[3]; cpu->r[8] = v;
    }
L_00168a6c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 0);
    }
L_00168a70:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x3d4u);
    }
L_00168a74:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_00168a78:;
    {
        cpu->r[9] = rd32(cpu->r[5] + + 0x3dcu);
    }
L_00168a7c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_00168a80:;
    {
        uint32_t v = cpu->r[2] * cpu->r[2] + cpu->r[8]; cpu->r[8] = v;
    }
L_00168a84:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x3d8u);
    }
L_00168a88:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[14]);
    }
L_00168a8c:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_00168a90:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 1);
    }
L_00168a94:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[8] = 0x00000001u;
        }
    }
L_00168a98:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00168a9c:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[3] = 0x0000181cu;
        }
    }
L_00168aa0:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[3] = 0x0000181cu;
        }
    }
L_00168aa4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_00168aa8:;
    {
        cpu->r[1] = 0x00001c90u;
    }
L_00168aac:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_00168ab0:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[2] = cpu->r[10];
        }
    }
L_00168ab4:;
    {
        if (cond_test(cpu, 9)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[10]);
        }
    }
L_00168ab8:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
        }
    }
L_00168abc:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[14]);
    }
L_00168ac0:;
    {
        if (cond_test(cpu, 10)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
        }
    }
L_00168ac4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_00168ac8:;
    {
        cpu->r[0] = rd8(cpu->r[5] + cpu->r[1]);
    }
L_00168acc:;
    {
        cpu->r[1] = 0x00008740u;
    }
L_00168ad0:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_00168ad4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00168ad8:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[3] + cpu->r[1]);
    }
L_00168adc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x418u);
    }
L_00168ae0:;
    {
        uint32_t v = cpu->r[3] * cpu->r[1]; cpu->r[1] = v;
    }
L_00168ae4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_00168ae8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_00168aec:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
        }
    }
L_00168af0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00168b28;
        }
    }
L_00168af4:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00168af8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00168afc:;
    {
        cpu->r[14] = 0x00168b04u;
    }
L_00168b00:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00168b04u)) return;
    }
L_00168b04:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000063u, 1, 1);
    }
L_00168b08:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00168b4c;
        }
    }
L_00168b0c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00168b10:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_00168b14:;
    {
        cpu->r[14] = 0x00168b18u; fn_00161914(cpu);
    }
L_00168b18:;
    {
        cpu->r[3] = 0x000017bcu;
    }
L_00168b1c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00168b20:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_00168b24:;
    {
        goto L_00168a24;
    }
L_00168b28:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00168b2c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00168b30:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00168b34:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_00168b38:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00168b3c:;
    {
        cpu->r[14] = 0x00168b44u;
    }
L_00168b40:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00168b44u)) return;
    }
L_00168b44:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000063u, 1, 1);
    }
L_00168b48:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00168b0c;
        }
    }
L_00168b4c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00168b50:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00168b54:;
    {
        cpu->r[14] = 0x00168b5cu;
    }
L_00168b58:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00168b5cu)) return;
    }
L_00168b5c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00168b60:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_00168b64:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00168b68:;
    {
        cpu->r[14] = 0x00168b70u;
    }
L_00168b6c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00168b70u)) return;
    }
L_00168b70:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[10], cpu->r[0], 1, 0);
    }
L_00168b74:;
    {
        uint32_t v = cpu->r[0] ^ shifter(cpu->r[0], 1, 31u, &shc); cpu->r[3] = v;
    }
L_00168b78:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 31u, &shc), 1, 0);
    }
L_00168b7c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000032u, 1, 1);
    }
L_00168b80:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00168b0c;
        }
    }
L_00168b84:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00168b88:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00168b8c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00168b0c;
        }
    }
L_00168b90:;
    {
        cpu->r[3] = 0x000018bcu;
    }
L_00168b94:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_00168b98:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00168b9c:;
    {
        cpu->r[10] = sub_flags(cpu, 0x00000000u, cpu->r[2], 1, 0);
    }
L_00168ba0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00168ba4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001690b8;
        }
    }
L_00168ba8:;
    {
        uint32_t v = cpu->r[10] ^ shifter(cpu->r[10], 1, 31u, &shc); cpu->r[2] = v;
    }
L_00168bac:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[10], 1, 31u, &shc), 1, 0);
    }
L_00168bb0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000190u, 1, 1);
    }
L_00168bb4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00168bec;
        }
    }
L_00168bb8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00168bbc:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00168bc0:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_00168bc4:;
    {
        cpu->r[3] = 0x00001818u;
    }
L_00168bc8:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[14]);
    }
L_00168bcc:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_00168bd0:;
    {
        cpu->r[6] = 0x00001818u;
    }
L_00168bd4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00168bd8:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_00168bdc:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x418u);
    }
L_00168be0:;
    {
        sub_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 1u, &shc), 1, 1);
    }
L_00168be4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00168be8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001692c0;
        }
    }
L_00168bec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000004u, 1, 1);
    }
L_00168bf0:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
        }
    }
L_00168bf4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00169098;
        }
    }
L_00168bf8:;
    {
        add_flags(cpu, cpu->r[10], 0x000000fau, 0, 1);
    }
L_00168bfc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001690ec;
        }
    }
L_00168c00:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_00168c04:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[9], cpu->r[11], 1, 0);
    }
L_00168c08:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_00168c0c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_00168c10:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_00168c14:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_00168c18:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x9cu);
    }
L_00168c1c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[14], cpu->r[1], 1, 0);
    }
L_00168c20:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x98u);
    }
L_00168c24:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0xa0u);
    }
L_00168c28:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[1] = v;
    }
L_00168c2c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x484u);
    }
L_00168c30:;
    {
        uint32_t v = cpu->r[2] * cpu->r[0] + cpu->r[1]; cpu->r[2] = v;
    }
L_00168c34:;
    {
        uint32_t v = cpu->r[9] * cpu->r[11] + cpu->r[2]; cpu->r[9] = v;
    }
L_00168c38:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_00168c3c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[11] = (~0x00000000u);
        }
    }
L_00168c40:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[11] = 0x00000001u;
        }
    }
L_00168c44:;
    {
        { uint32_t v = cpu->r[3] & 0x00001000u; set_nz(cpu, v); }
    }
L_00168c48:;
    {
        cpu->r[3] = 0x000018bcu;
    }
L_00168c4c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[11] = rd32(cpu->r[4] + + 0x1c4u);
        }
    }
L_00168c50:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00168c54:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[11] = sub_flags(cpu, 0x00000000u, cpu->r[11], 1, 0);
        }
    }
L_00168c58:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00168c5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001693b4;
        }
    }
L_00168c60:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_00168c64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001693d8;
        }
    }
L_00168c68:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_00168c6c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[11] = add_flags(cpu, cpu->r[11], shifter(cpu->r[11], 2, 2u, &shc), 0, 0);
        }
    }
L_00168c70:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[9] = 0x00000000u;
        }
    }
L_00168c74:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[11], 2, 2u, &shc); cpu->r[11] = v;
        }
    }
L_00168c78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016940c;
        }
    }
L_00168c7c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x478u);
    }
L_00168c80:;
    {
        cpu->r[3] = (~0x00000013u);
    }
L_00168c84:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x47cu);
    }
L_00168c88:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000080u, 0, 0);
    }
L_00168c8c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x474u);
    }
L_00168c90:;
    {
        uint32_t v = cpu->r[3] * cpu->r[1]; cpu->r[1] = v;
    }
L_00168c94:;
    {
        uint32_t v = cpu->r[3] * cpu->r[2]; cpu->r[2] = v;
    }
L_00168c98:;
    {
        uint32_t v = cpu->r[3] * cpu->r[12]; cpu->r[3] = v;
    }
L_00168c9c:;
    {
        wr32(cpu->r[13] + + 0x84u, cpu->r[1]);
    }
L_00168ca0:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[2]);
    }
L_00168ca4:;
    {
        wr32(cpu->r[13] + + 0x88u, cpu->r[3]);
    }
L_00168ca8:;
    {
        cpu->r[14] = 0x00168cacu; fn_0018572c(cpu);
    }
L_00168cac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000064u, 1, 1);
    }
L_00168cb0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00168cb4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0016923c;
        }
    }
L_00168cb8:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x80u);
    }
L_00168cbc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x88u);
    }
L_00168cc0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xa4u);
    }
L_00168cc4:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[7], cpu->r[11], 0, 0);
    }
L_00168cc8:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[0], cpu->r[9], 0, 0);
    }
L_00168ccc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x98u);
    }
L_00168cd0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xa0u);
    }
L_00168cd4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00168cd8:;
    {
        uint32_t v = cpu->r[3] * cpu->r[11]; cpu->r[3] = v;
    }
L_00168cdc:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0xa8u);
    }
L_00168ce0:;
    {
        uint32_t v = cpu->r[2] * cpu->r[14]; cpu->r[2] = v;
    }
L_00168ce4:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x9cu);
    }
L_00168ce8:;
    {
        uint32_t v = cpu->r[12] * cpu->r[14]; cpu->r[12] = v;
    }
L_00168cec:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x3d8u);
    }
L_00168cf0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_00168cf4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000068u, 0, 0);
    }
L_00168cf8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xacu);
    }
L_00168cfc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_00168d00:;
    {
        uint32_t v = cpu->r[9] * cpu->r[11]; cpu->r[9] = v;
    }
L_00168d04:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x3dcu);
    }
L_00168d08:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_00168d0c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[11]; cpu->r[11] = v;
    }
L_00168d10:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_00168d14:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_00168d18:;
    {
        uint32_t v = cpu->r[7] * cpu->r[14]; cpu->r[7] = v;
    }
L_00168d1c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[12], 1, 0);
    }
L_00168d20:;
    {
        cpu->r[14] = rd32(cpu->r[5] + + 0x3d4u);
    }
L_00168d24:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_00168d28:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_00168d2c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[14], cpu->r[2], 1, 0);
    }
L_00168d30:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xcu);
    }
L_00168d34:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_00168d38:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[7], 1, 12u, &shc), 0, 0);
    }
L_00168d3c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[14], 1, 12u, &shc), 0, 0);
    }
L_00168d40:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_00168d44:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 1, 12u, &shc), 0, 0);
    }
L_00168d48:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], shifter(cpu->r[9], 1, 12u, &shc), 1, 0);
    }
L_00168d4c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[11], 1, 12u, &shc), 1, 0);
    }
L_00168d50:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[6]);
    }
L_00168d54:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[14], 1, 12u, &shc), 1, 0);
    }
L_00168d58:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[12]);
    }
L_00168d5c:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[3]);
    }
L_00168d60:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00168d64:;
    {
        cpu->r[14] = 0x00168d6cu;
    }
L_00168d68:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00168d6cu)) return;
    }
L_00168d6c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x68u);
    }
L_00168d70:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x74u);
    }
L_00168d74:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x78u);
    }
L_00168d78:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[1] = v;
    }
L_00168d7c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x6cu);
    }
L_00168d80:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3] + cpu->r[1]; cpu->r[2] = v;
    }
L_00168d84:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x7cu);
    }
L_00168d88:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x70u);
    }
L_00168d8c:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3] + cpu->r[2]; cpu->r[3] = v;
    }
L_00168d90:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00168d94:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0016929c;
        }
    }
L_00168d98:;
    {
        cpu->r[3] = 0x000018bcu;
    }
L_00168d9c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00168da0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00168da4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00168da8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_00168dac:;
    {
        uint32_t v = cpu->r[3] & shifter(cpu->r[10], 3, 31u, &shc); cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_00168db0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00168e1c;
        }
    }
L_00168db4:;
    {
        cpu->r[14] = rd32(cpu->r[5] + + 0x428u);
    }
L_00168db8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000050u, 0, 0);
    }
L_00168dbc:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x42cu);
    }
L_00168dc0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000074u, 0, 0);
    }
L_00168dc4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x430u);
    }
L_00168dc8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000005cu, 0, 0);
    }
L_00168dcc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00168dd0:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[14]);
    }
L_00168dd4:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[12]);
    }
L_00168dd8:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[3]);
    }
L_00168ddc:;
    {
        cpu->r[14] = 0x00168de0u; fn_00168870(cpu);
    }
L_00168de0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00168de4:;
    {
        cpu->r[14] = 0x00168de8u; fn_0018572c(cpu);
    }
L_00168de8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00168dec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00168df0:;
    {
        cpu->r[14] = 0x00168df4u; fn_001721fc(cpu);
    }
L_00168df4:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 1);
    }
L_00168df8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00168e1c;
        }
    }
L_00168dfc:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_00168e00:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00168e04:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[3]);
    }
L_00168e08:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00168e0c:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[3]);
    }
L_00168e10:;
    {
        uint32_t v = cpu->r[1] | 0x00000001u; cpu->r[1] = v;
    }
L_00168e14:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_00168e18:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[3]);
    }
L_00168e1c:;
    {
        cpu->r[9] = rd32(cpu->r[5] + + 0x428u);
    }
L_00168e20:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x428u);
    }
L_00168e24:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x42cu);
    }
L_00168e28:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x42cu);
    }
L_00168e2c:;
    {
        uint32_t v = cpu->r[9] * cpu->r[10]; cpu->r[0] = v;
    }
L_00168e30:;
    {
        cpu->r[11] = rd32(cpu->r[5] + + 0x430u);
    }
L_00168e34:;
    {
        uint32_t v = cpu->r[3] * cpu->r[7] + cpu->r[0]; cpu->r[0] = v;
    }
L_00168e38:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x430u);
    }
L_00168e3c:;
    {
        uint32_t v = cpu->r[11] * cpu->r[6] + cpu->r[0]; cpu->r[0] = v;
    }
L_00168e40:;
    {
        uint32_t v = cpu->r[0] ^ shifter(cpu->r[0], 1, 31u, &shc); cpu->r[2] = v;
    }
L_00168e44:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[0], 1, 31u, &shc), 1, 0);
    }
L_00168e48:;
    {
        sub_flags(cpu, cpu->r[2], 0x00080000u, 1, 1);
    }
L_00168e4c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001690d4;
        }
    }
L_00168e50:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00168e54:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00168e58:;
    {
        cpu->r[14] = 0x00168e5cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00168e5c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_00168e60:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 12u, &shc); cpu->r[0] = v;
    }
L_00168e64:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00168e68:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00168a24;
        }
    }
L_00168e6c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00001000u, 1, 1);
    }
L_00168e70:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00001000u;
        }
    }
L_00168e74:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00168e80;
        }
    }
L_00168e78:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000013u, 1, 1);
    }
L_00168e7c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00168a24;
        }
    }
L_00168e80:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_00168e84:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_00168e88:;
    {
        { uint32_t v = cpu->r[1] & 0x00000008u; set_nz(cpu, v); }
    }
L_00168e8c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00168e9c;
        }
    }
L_00168e90:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00168e94:;
    {
        { uint32_t v = cpu->r[2] & 0x00000088u; set_nz(cpu, v); }
    }
L_00168e98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00169330;
        }
    }
L_00168e9c:;
    {
        cpu->r[3] = 0x000018bcu;
    }
L_00168ea0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000074u, 0, 0);
    }
L_00168ea4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00168ea8:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00168eac:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x74u);
    }
L_00168eb0:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000004u, 1, 1);
    }
L_00168eb4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 0);
    }
L_00168eb8:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[3]);
    }
L_00168ebc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x78u);
    }
L_00168ec0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[9] = 0x00000078u;
        }
    }
L_00168ec4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[9] = 0x0000012cu;
        }
    }
L_00168ec8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 0);
    }
L_00168ecc:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[3]);
    }
L_00168ed0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x7cu);
    }
L_00168ed4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 0);
    }
L_00168ed8:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[3]);
    }
L_00168edc:;
    {
        cpu->r[14] = 0x00168ee0u; fn_0018572c(cpu);
    }
L_00168ee0:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[0], 1, 1);
    }
L_00168ee4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001693a4;
        }
    }
L_00168ee8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x74u);
    }
L_00168eec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x000005f0u, 0, 0);
    }
L_00168ef0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_00168ef4:;
    {
        cpu->r[12] = 0x00001654u;
    }
L_00168ef8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[2], cpu->r[10], 0, 0);
    }
L_00168efc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x78u);
    }
L_00168f00:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[10]);
    }
L_00168f04:;
    {
        cpu->r[14] = 0x00001000u;
    }
L_00168f08:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[2], cpu->r[7], 0, 0);
    }
L_00168f0c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x7cu);
    }
L_00168f10:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[7]);
    }
L_00168f14:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[2], cpu->r[6], 0, 0);
    }
L_00168f18:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[6]);
    }
L_00168f1c:;
    {
        uint32_t base = cpu->r[8];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_00168f20:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[14]);
    }
L_00168f24:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_00168f28:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00168f2c:;
    {
        cpu->r[14] = 0x00168f30u; fn_0018572c(cpu);
    }
L_00168f30:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00168f34:;
    {
        cpu->r[14] = 0x00168f38u; fn_0015e48c(cpu);
    }
L_00168f38:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00168f3c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_00168f40:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00168f44:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[3]);
    }
L_00168f48:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[3]);
    }
L_00168f4c:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[3]);
    }
L_00168f50:;
    {
        cpu->r[14] = 0x00168f54u; fn_00180008(cpu);
    }
L_00168f54:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x88u);
    }
L_00168f58:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x00000400u, 0, 0);
    }
L_00168f5c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x00000400u, 0, 0);
    }
L_00168f60:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00168f64:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = (~cpu->r[1]);
        }
    }
L_00168f68:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], 0x00000400u, 1, 0);
        }
    }
L_00168f6c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
        }
    }
L_00168f70:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], 0x00000400u, 1, 0);
    }
L_00168f74:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = shifter(cpu->r[0], 3, 11u, &shc); cpu->r[0] = v;
        }
    }
L_00168f78:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[0], 2, 11u, &shc), 1, 0);
        }
    }
L_00168f7c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00168f80:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
        }
    }
L_00168f84:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = add_flags(cpu, cpu->r[2], 0x00000800u, 0, 0);
        }
    }
L_00168f88:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
        }
    }
L_00168f8c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], 0x00000028u, 1, 0);
    }
L_00168f90:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = shifter(cpu->r[2], 3, 11u, &shc); cpu->r[2] = v;
        }
    }
L_00168f94:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 11u, &shc), 0, 0);
        }
    }
L_00168f98:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00168f9c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00168fb0;
        }
    }
L_00168fa0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x00000028u, 0, 0);
    }
L_00168fa4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00168fa8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_00168fac:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = cpu->r[3];
        }
    }
L_00168fb0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x88u);
    }
L_00168fb4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x00000400u, 0, 0);
    }
L_00168fb8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_00168fbc:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00168fdc;
        }
    }
L_00168fc0:;
    {
        cpu->r[1] = 0x0000fbffu;
    }
L_00168fc4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000800u, 1, 0);
    }
L_00168fc8:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0xffffu << 16);
    }
L_00168fcc:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_00168fd0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_00168fd4:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 11u, &shc); cpu->r[3] = v;
    }
L_00168fd8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 11u, &shc), 1, 0);
    }
L_00168fdc:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[2], 0x00000400u, 1, 0);
    }
L_00168fe0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x74u);
    }
L_00168fe4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00168fe8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
        }
    }
L_00168fec:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000800u, 0, 0);
        }
    }
L_00168ff0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
        }
    }
L_00168ff4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x7cu);
    }
L_00168ff8:;
    {
        uint32_t v = cpu->r[12] * cpu->r[12]; cpu->r[12] = v;
    }
L_00168ffc:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = shifter(cpu->r[3], 3, 11u, &shc); cpu->r[3] = v;
        }
    }
L_00169000:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 11u, &shc), 0, 0);
        }
    }
L_00169004:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x78u);
    }
L_00169008:;
    {
        uint32_t v = cpu->r[0] * cpu->r[0] + cpu->r[12]; cpu->r[0] = v;
    }
L_0016900c:;
    {
        uint32_t v = cpu->r[1] * cpu->r[1] + cpu->r[0]; cpu->r[1] = v;
    }
L_00169010:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000064u, 1, 1);
    }
L_00169014:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001691e8;
        }
    }
L_00169018:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_0016901c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8cu);
    }
L_00169020:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_00169024:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x84u);
    }
L_00169028:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000003u, 0, 0);
    }
L_0016902c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00169030:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_00169034:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[3];
        }
    }
L_00169038:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[0]);
    }
L_0016903c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00169040:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[1]);
    }
L_00169044:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[2] = v;
    }
L_00169048:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x30u);
    }
L_0016904c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_00169050:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[2]);
    }
L_00169054:;
    {
        cpu->r[14] = 0x00169058u; guest_call(cpu, cpu->r[3]);
    }
L_00169058:;
    {
        goto L_00168a24;
    }
L_0016905c:;
    {
        cpu->r[3] = 0x00001818u;
    }
L_00169060:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00169064:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000001eu, 1, 1);
    }
L_00169068:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00168bec;
        }
    }
L_0016906c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00169070:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_00169074:;
    {
        cpu->r[3] = 0x000018bcu;
    }
L_00169078:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_0016907c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_00169080:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x488u);
    }
L_00169084:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00169088:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = cpu->r[3];
        }
    }
L_0016908c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[4] + + 0x48cu);
        }
    }
L_00169090:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_00169094:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00169368;
        }
    }
L_00169098:;
    {
        sub_flags(cpu, cpu->r[10], 0x000000c8u, 1, 1);
    }
L_0016909c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00168bf8;
        }
    }
L_001690a0:;
    {
        cpu->r[2] = 0x00001818u;
    }
L_001690a4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001690a8:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_001690ac:;
    {
        cpu->r[2] = 0x000018bcu;
    }
L_001690b0:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_001690b4:;
    {
        goto L_00168c00;
    }
L_001690b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_001690bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00168bcc;
        }
    }
L_001690c0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000003u, 1, 1);
    }
L_001690c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016905c;
        }
    }
L_001690c8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000004u, 1, 1);
    }
L_001690cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00168bec;
        }
    }
L_001690d0:;
    {
        goto L_00169080;
    }
L_001690d4:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 12u, &shc); cpu->r[0] = v;
    }
L_001690d8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001690dc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001690e0:;
    {
        cpu->r[14] = 0x001690e4u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001690e4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001690e8:;
    {
        goto L_00168e64;
    }
L_001690ec:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001690f0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001690f4:;
    {
        cpu->r[14] = 0x001690fcu;
    }
L_001690f8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001690fcu)) return;
    }
L_001690fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000064u, 1, 1);
    }
L_00169100:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00168c00;
        }
    }
L_00169104:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00169108:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0016910c:;
    {
        cpu->r[14] = 0x00169114u;
    }
L_00169110:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00169114u)) return;
    }
L_00169114:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00169118:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0016911c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00169120:;
    {
        cpu->r[14] = 0x00169128u;
    }
L_00169124:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00169128u)) return;
    }
L_00169128:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 0);
    }
L_0016912c:;
    {
        uint32_t v = cpu->r[0] ^ shifter(cpu->r[0], 1, 31u, &shc); cpu->r[3] = v;
    }
L_00169130:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 31u, &shc), 1, 0);
    }
L_00169134:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000031u, 1, 1);
    }
L_00169138:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00168c00;
        }
    }
L_0016913c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x42cu);
    }
L_00169140:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x0000008cu, 0, 0);
    }
L_00169144:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x430u);
    }
L_00169148:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0016914c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x428u);
    }
L_00169150:;
    {
        cpu->r[1] = sub_flags(cpu, 0x00000000u, cpu->r[1], 1, 0);
    }
L_00169154:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000000u, cpu->r[2], 1, 0);
    }
L_00169158:;
    {
        wr32(cpu->r[13] + + 0x90u, cpu->r[1]);
    }
L_0016915c:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_00169160:;
    {
        wr32(cpu->r[13] + + 0x94u, cpu->r[2]);
    }
L_00169164:;
    {
        wr32(cpu->r[13] + + 0x8cu, cpu->r[3]);
    }
L_00169168:;
    {
        cpu->r[14] = 0x0016916cu; fn_0018572c(cpu);
    }
L_0016916c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000005u, 1, 1);
    }
L_00169170:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00169180;
        }
    }
L_00169174:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00169178:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_0016917c:;
    {
        cpu->r[14] = 0x00169180u; fn_00185554(cpu);
    }
L_00169180:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8cu);
    }
L_00169184:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00169188:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x428u);
    }
L_0016918c:;
    {
        add_flags(cpu, cpu->r[10], 0x000001f4u, 0, 1);
    }
L_00169190:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00169194:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x94u);
    }
L_00169198:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
    }
L_0016919c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x90u);
    }
L_001691a0:;
    {
        uint32_t v = cpu->r[5] | 0x00000001u; cpu->r[5] = v;
    }
L_001691a4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x42cu);
    }
L_001691a8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x430u);
    }
L_001691ac:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], cpu->r[1], 0, 0);
    }
L_001691b0:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_001691b4:;
    {
        wr32(cpu->r[4] + + 0x600u, cpu->r[1]);
    }
L_001691b8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], cpu->r[0], 0, 0);
    }
L_001691bc:;
    {
        wr32(cpu->r[4] + + 0x5fcu, cpu->r[2]);
    }
L_001691c0:;
    {
        wr32(cpu->r[4] + + 0x604u, cpu->r[3]);
    }
L_001691c4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00168a24;
        }
    }
L_001691c8:;
    {
        cpu->r[3] = 0x000018bcu;
    }
L_001691cc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001691d0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001691d4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001691d8:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
        }
    }
L_001691dc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00001818u;
        }
    }
L_001691e0:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
        }
    }
L_001691e4:;
    {
        goto L_00168a24;
    }
L_001691e8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000010u, 1, 1);
    }
L_001691ec:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001692ec;
        }
    }
L_001691f0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001691f4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00168a24;
        }
    }
L_001691f8:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[2], 2, 4u, &shc), cpu->r[2], 1, 0);
    }
L_001691fc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8cu);
    }
L_00169200:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_00169204:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x84u);
    }
L_00169208:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x0000000fu, 0, 0);
    }
L_0016920c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00169210:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_00169214:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[3];
        }
    }
L_00169218:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[0]);
    }
L_0016921c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00169220:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_00169224:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 4u, &shc); cpu->r[2] = v;
    }
L_00169228:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x30u);
    }
L_0016922c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_00169230:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_00169234:;
    {
        cpu->r[14] = 0x00169238u; guest_call(cpu, cpu->r[3]);
    }
L_00169238:;
    {
        goto L_00168a24;
    }
L_0016923c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00169240:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x80u);
    }
L_00169244:;
    {
        cpu->r[3] = 0x00000064u;
    }
L_00169248:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_0016924c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[0]; cpu->r[0] = v;
    }
L_00169250:;
    {
        cpu->r[14] = 0x00169254u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00169254:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_00169258:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0016925c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00169260:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x84u);
    }
L_00169264:;
    {
        uint32_t v = cpu->r[3] * cpu->r[0]; cpu->r[0] = v;
    }
L_00169268:;
    {
        cpu->r[14] = 0x0016926cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0016926c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_00169270:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00169274:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00169278:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x88u);
    }
L_0016927c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_00169280:;
    {
        uint32_t v = cpu->r[3] * cpu->r[0]; cpu->r[0] = v;
    }
L_00169284:;
    {
        cpu->r[14] = 0x00169288u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00169288:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_0016928c:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[7]);
    }
L_00169290:;
    {
        wr32(cpu->r[13] + + 0x84u, cpu->r[2]);
    }
L_00169294:;
    {
        wr32(cpu->r[13] + + 0x88u, cpu->r[0]);
    }
L_00169298:;
    {
        goto L_00168cc0;
    }
L_0016929c:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_001692a0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001692a4:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[3]);
    }
L_001692a8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001692ac:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[3]);
    }
L_001692b0:;
    {
        uint32_t v = cpu->r[1] | 0x00000001u; cpu->r[1] = v;
    }
L_001692b4:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_001692b8:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[3]);
    }
L_001692bc:;
    {
        goto L_00168d98;
    }
L_001692c0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001692c4:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_001692c8:;
    {
        cpu->r[14] = 0x001692ccu; fn_000964c8(cpu);
    }
L_001692cc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001692d0:;
    {
        wr32(cpu->r[4] + cpu->r[6], cpu->r[3]);
    }
L_001692d4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001692d8:;
    {
        cpu->r[3] = 0x000018bcu;
    }
L_001692dc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000002u;
        }
    }
L_001692e0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000003u;
        }
    }
L_001692e4:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_001692e8:;
    {
        goto L_001690c0;
    }
L_001692ec:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[2], 2, 3u, &shc), cpu->r[2], 1, 0);
    }
L_001692f0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8cu);
    }
L_001692f4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_001692f8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x84u);
    }
L_001692fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000007u, 0, 0);
    }
L_00169300:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00169304:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_00169308:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[3];
        }
    }
L_0016930c:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[0]);
    }
L_00169310:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00169314:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[1]);
    }
L_00169318:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 3u, &shc); cpu->r[2] = v;
    }
L_0016931c:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x30u);
    }
L_00169320:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_00169324:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[2]);
    }
L_00169328:;
    {
        cpu->r[14] = 0x0016932cu; guest_call(cpu, cpu->r[3]);
    }
L_0016932c:;
    {
        goto L_00168a24;
    }
L_00169330:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x484u);
    }
L_00169334:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_00169338:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00168e9c;
        }
    }
L_0016933c:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00001000u, cpu->r[0], 1, 0);
    }
L_00169340:;
    {
        uint32_t v = cpu->r[11] * cpu->r[0]; cpu->r[11] = v;
    }
L_00169344:;
    {
        uint32_t v = cpu->r[9] * cpu->r[0]; cpu->r[9] = v;
    }
L_00169348:;
    {
        uint32_t v = cpu->r[3] * cpu->r[0]; cpu->r[3] = v;
    }
L_0016934c:;
    {
        uint32_t v = cpu->r[6] * cpu->r[2] + cpu->r[11]; cpu->r[6] = v;
    }
L_00169350:;
    {
        uint32_t v = cpu->r[10] * cpu->r[2] + cpu->r[9]; cpu->r[10] = v;
    }
L_00169354:;
    {
        uint32_t v = cpu->r[7] * cpu->r[2] + cpu->r[3]; cpu->r[7] = v;
    }
L_00169358:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 12u, &shc); cpu->r[6] = v;
    }
L_0016935c:;
    {
        uint32_t v = shifter(cpu->r[10], 1, 12u, &shc); cpu->r[10] = v;
    }
L_00169360:;
    {
        uint32_t v = shifter(cpu->r[7], 1, 12u, &shc); cpu->r[7] = v;
    }
L_00169364:;
    {
        goto L_00168e9c;
    }
L_00169368:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016936c:;
    {
        cpu->r[2] = 0x00001818u;
    }
L_00169370:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_00169374:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4a0u);
        }
    }
L_00169378:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0016937c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00169380:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00169098;
        }
    }
L_00169384:;
    {
        sub_flags(cpu, cpu->r[3], 0x000001f4u, 1, 1);
    }
L_00169388:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00169098;
        }
    }
L_0016938c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00169390:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_00169394:;
    {
        cpu->r[3] = 0x000018bcu;
    }
L_00169398:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_0016939c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001693a0:;
    {
        goto L_00168bf8;
    }
L_001693a4:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001693a8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001693ac:;
    {
        cpu->r[14] = 0x001693b0u; fn_00185554(cpu);
    }
L_001693b0:;
    {
        goto L_00168ee8;
    }
L_001693b4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001693b8:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_001693bc:;
    {
        cpu->r[14] = 0x001693c0u; fn_001721e4(cpu);
    }
L_001693c0:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_001693c4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001693c8:;
    {
        cpu->r[14] = 0x001693ccu; fn_001721f0(cpu);
    }
L_001693cc:;
    {
        cpu->r[9] = sub_flags(cpu, 0x00000000u, cpu->r[9], 1, 0);
    }
L_001693d0:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[0], 1, 0);
    }
L_001693d4:;
    {
        goto L_00168c7c;
    }
L_001693d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001693dc:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_001693e0:;
    {
        cpu->r[14] = 0x001693e4u; fn_001721fc(cpu);
    }
L_001693e4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001693e8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001693ec:;
    {
        cpu->r[14] = 0x001693f0u; fn_001721fc(cpu);
    }
L_001693f0:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001693f4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001693f8:;
    {
        cpu->r[14] = 0x001693fcu; fn_001721fc(cpu);
    }
L_001693fc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[7], 0, 0);
    }
L_00169400:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_00169404:;
    {
        uint32_t v = cpu->r[11] * cpu->r[6]; cpu->r[11] = v;
    }
L_00169408:;
    {
        goto L_00168c7c;
    }
L_0016940c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00169410:;
    {
        cpu->r[9] = (~0x00000013u);
    }
L_00169414:;
    {
        cpu->r[14] = 0x00169418u; fn_001721fc(cpu);
    }
L_00169418:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0016941c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00169420:;
    {
        cpu->r[14] = 0x00169424u; fn_001721fc(cpu);
    }
L_00169424:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], cpu->r[0], 0, 0);
    }
L_00169428:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000032u, 1, 0);
    }
L_0016942c:;
    {
        uint32_t v = cpu->r[11] * cpu->r[3]; cpu->r[11] = v;
    }
L_00169430:;
    {
        goto L_00168c7c;
    }
}

/* _ZN4CCar11UpdateAICopER8Vector2sPK10RoadStruct @ 0016943c (arm) */
void fn_0016943c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0016943c:;
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
L_00169440:;
    {
        cpu->r[8] = 0x00001824u;
    }
L_00169444:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000074u, 1, 0);
    }
L_00169448:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_0016944c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[8]);
    }
L_00169450:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00169454:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_00169458:;
    {
        cpu->r[14] = 0x0016945cu; fn_001615c0(cpu);
    }
L_0016945c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_00169460:;
    {
        cpu->r[5] = rd32(0x00169468u + + 0x82cu);
    }
L_00169464:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00169468:;
    {
        cpu->r[5] = add_flags(cpu, 0x00169470u, cpu->r[5], 0, 0);
    }
L_0016946c:;
    {
        cpu->r[7] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
    }
L_00169470:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001697c8;
        }
    }
L_00169474:;
    {
        cpu->r[9] = 0x000018b8u;
    }
L_00169478:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_0016947c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000007u, 1, 1);
    }
L_00169480:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001697c8;
        }
    }
L_00169484:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], 0x000003e4u, 0, 0);
    }
L_00169488:;
    {
        cpu->r[0] = 0x000007ceu;
    }
L_0016948c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000003u, 0, 0);
    }
L_00169490:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_00169494:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001697c8;
        }
    }
L_00169498:;
    {
        cpu->r[2] = 0x00001828u;
    }
L_0016949c:;
    {
        cpu->r[0] = 0x0000182cu;
    }
L_001694a0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000006u, 1, 1);
    }
L_001694a4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001694a8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_001694ac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_001694b0:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[12]);
    }
L_001694b4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001694b8:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[2]);
    }
L_001694bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00169884;
        }
    }
L_001694c0:;
    {
        cpu->r[1] = 0x00001788u;
    }
L_001694c4:;
    {
        cpu->r[2] = 0x00000040u;
    }
L_001694c8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x2000u << 16);
    }
L_001694cc:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001694d0:;
    {
        uint32_t v = cpu->r[1] & cpu->r[2]; cpu->r[2] = v;
    }
L_001694d4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001694d8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016986c;
        }
    }
L_001694dc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x428u);
    }
L_001694e0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x42cu);
    }
L_001694e4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x430u);
    }
L_001694e8:;
    {
        uint32_t v = cpu->r[0] * cpu->r[0]; cpu->r[0] = v;
    }
L_001694ec:;
    {
        uint32_t v = cpu->r[1] * cpu->r[1] + cpu->r[0]; cpu->r[1] = v;
    }
L_001694f0:;
    {
        uint32_t v = cpu->r[2] * cpu->r[2] + cpu->r[1]; cpu->r[2] = v;
    }
L_001694f4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001694f8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[12] = 0x00000001u;
        }
    }
L_001694fc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00169510;
        }
    }
L_00169500:;
    {
        cpu->r[12] = 0x000004e1u;
    }
L_00169504:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_00169508:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_0016950c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[12] = 0x00000001u;
        }
    }
L_00169510:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x428u);
    }
L_00169514:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x42cu);
    }
L_00169518:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x430u);
    }
L_0016951c:;
    {
        uint32_t v = cpu->r[0] * cpu->r[0]; cpu->r[0] = v;
    }
L_00169520:;
    {
        uint32_t v = cpu->r[1] * cpu->r[1] + cpu->r[0]; cpu->r[1] = v;
    }
L_00169524:;
    {
        uint32_t v = cpu->r[2] * cpu->r[2] + cpu->r[1]; cpu->r[2] = v;
    }
L_00169528:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0016952c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_00169530:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00169540;
        }
    }
L_00169534:;
    {
        sub_flags(cpu, cpu->r[2], 0x000001f4u, 1, 1);
    }
L_00169538:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_0016953c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_00169540:;
    {
        { uint32_t v = cpu->r[2] & cpu->r[12]; set_nz(cpu, v); }
    }
L_00169544:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001698bc;
        }
    }
L_00169548:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_0016954c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00169550:;
    {
        { uint32_t v = cpu->r[2] & 0x00000020u; set_nz(cpu, v); }
    }
L_00169554:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001698bc;
        }
    }
L_00169558:;
    {
        cpu->r[3] = 0x000018b8u;
    }
L_0016955c:;
    {
        cpu->r[1] = 0x0000031eu;
    }
L_00169560:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00169564:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000003u, 1, 1);
    }
L_00169568:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x000000c8u;
        }
    }
L_0016956c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00169570:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_00169574:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], 0x0000018cu, 0, 0);
    }
L_00169578:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000003u, 0, 0);
    }
L_0016957c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00169580:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00169864;
        }
    }
L_00169584:;
    {
        cpu->r[3] = 0x00001898u;
    }
L_00169588:;
    {
        cpu->r[1] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_0016958c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00169590:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_00169594:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[1]);
        }
    }
L_00169598:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_0016959c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00169a50;
        }
    }
L_001695a0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_001695a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001699e4;
        }
    }
L_001695a8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000004u, 1, 1);
    }
L_001695ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00169b74;
        }
    }
L_001695b0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000005u, 1, 1);
    }
L_001695b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00169a28;
        }
    }
L_001695b8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x488u);
    }
L_001695bc:;
    {
        cpu->r[3] = 0x00001824u;
    }
L_001695c0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001695c4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001695c8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = cpu->r[2];
        }
    }
L_001695cc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = rd32(cpu->r[4] + + 0x48cu);
        }
    }
L_001695d0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001695d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00169c54;
        }
    }
L_001695d8:;
    {
        uint32_t v = cpu->r[7] ^ shifter(cpu->r[7], 1, 31u, &shc); cpu->r[2] = v;
    }
L_001695dc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[7], 1, 31u, &shc), 1, 0);
    }
L_001695e0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000096u, 1, 1);
    }
L_001695e4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00169608;
        }
    }
L_001695e8:;
    {
        cpu->r[3] = 0x00001824u;
    }
L_001695ec:;
    {
        cpu->r[2] = 0x000018b8u;
    }
L_001695f0:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001695f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001695f8:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_001695fc:;
    {
        cpu->r[2] = 0x0000182cu;
    }
L_00169600:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00169604:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_00169608:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x3d4u);
    }
L_0016960c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000058u, 0, 0);
    }
L_00169610:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x3d8u);
    }
L_00169614:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_00169618:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_0016961c:;
    {
        cpu->r[11] = 0x000018b8u;
    }
L_00169620:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_00169624:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00169628:;
    {
        cpu->r[9] = rd32(cpu->r[3] + + 0x3dcu);
    }
L_0016962c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[14], 1, 0);
    }
L_00169630:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_00169634:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_00169638:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x8u);
    }
L_0016963c:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[12]);
    }
L_00169640:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[9], cpu->r[8], 1, 0);
    }
L_00169644:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00169648:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[12]);
    }
L_0016964c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[14], cpu->r[10], 1, 0);
    }
L_00169650:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[12]);
    }
L_00169654:;
    {
        cpu->r[14] = 0x0016965cu;
    }
L_00169658:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x20u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0016965cu)) return;
    }
L_0016965c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x4cu);
    }
L_00169660:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x64u);
    }
L_00169664:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x68u);
    }
L_00169668:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x50u);
    }
L_0016966c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[10]; cpu->r[3] = v;
    }
L_00169670:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x54u);
    }
L_00169674:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2] + cpu->r[3]; cpu->r[2] = v;
    }
L_00169678:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0016967c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_00169680:;
    {
        uint32_t v = cpu->r[1] * cpu->r[8] + cpu->r[2]; cpu->r[2] = v;
    }
L_00169684:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00169688:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = (~0x00000000u);
        }
    }
L_0016968c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_00169690:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00169694:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00169b1c;
        }
    }
L_00169698:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_0016969c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00169bbc;
        }
    }
L_001696a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_001696a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00169ae0;
        }
    }
L_001696a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000005u, 1, 1);
    }
L_001696ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00169c18;
        }
    }
L_001696b0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001696b4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_001696b8:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001696bc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_001696c0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x58u);
    }
L_001696c4:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[2]);
    }
L_001696c8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001696cc:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[1]);
    }
L_001696d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_001696d4:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[2]);
    }
L_001696d8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000040u, 0, 0);
    }
L_001696dc:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_001696e0:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_001696e4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x60u);
    }
L_001696e8:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_001696ec:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001696f0:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x48u);
    }
L_001696f4:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001696f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00169948;
        }
    }
L_001696fc:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_00169700:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x488u);
    }
L_00169704:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00169708:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00169b04;
        }
    }
L_0016970c:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00169710:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00169714:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_00169718:;
    {
        cpu->r[14] = 0x00169720u;
    }
L_0016971c:;
    {
        uint32_t t = rd32(cpu->r[2] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00169720u)) return;
    }
L_00169720:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x488u);
    }
L_00169724:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_00169728:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0016972c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_00169730:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00169b14;
        }
    }
L_00169734:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00169738:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00169774;
        }
    }
L_0016973c:;
    {
        cpu->r[2] = 0x00001820u;
    }
L_00169740:;
    {
        cpu->r[2] = rd8(cpu->r[0] + cpu->r[2]);
    }
L_00169744:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00169748:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00169774;
        }
    }
L_0016974c:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_00169750:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_00169754:;
    {
        { uint32_t v = cpu->r[2] & 0x00004000u; set_nz(cpu, v); }
    }
L_00169758:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00169774;
        }
    }
L_0016975c:;
    {
        cpu->r[2] = rd32(0x00169764u + + 0x534u);
    }
L_00169760:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_00169764:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_00169768:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x418u);
    }
L_0016976c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_00169770:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00169858;
        }
    }
L_00169774:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_00169778:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0016977c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00169858;
        }
    }
L_00169780:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_00169784:;
    {
        uint32_t v = cpu->r[3] * cpu->r[10]; cpu->r[10] = v;
    }
L_00169788:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_0016978c:;
    {
        uint32_t v = cpu->r[12] * cpu->r[11]; cpu->r[2] = v;
    }
L_00169790:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_00169794:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_00169798:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
    }
L_0016979c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[8]; cpu->r[3] = v;
    }
L_001697a0:;
    {
        uint32_t v = cpu->r[12] * cpu->r[11]; cpu->r[11] = v;
    }
L_001697a4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], shifter(cpu->r[2], 1, 12u, &shc), 1, 0);
    }
L_001697a8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[2], shifter(cpu->r[10], 1, 12u, &shc), 0, 0);
    }
L_001697ac:;
    {
        wr32(cpu->r[6], cpu->r[10]);
    }
L_001697b0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_001697b4:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[2], 1, 0);
    }
L_001697b8:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], shifter(cpu->r[11], 1, 12u, &shc), 1, 0);
    }
L_001697bc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], shifter(cpu->r[3], 1, 12u, &shc), 0, 0);
    }
L_001697c0:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[3]);
    }
L_001697c4:;
    {
        goto L_00169858;
    }
L_001697c8:;
    {
        cpu->r[3] = 0x00001898u;
    }
L_001697cc:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_001697d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001697d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00169840;
        }
    }
L_001697d8:;
    {
        cpu->r[3] = 0x000018b8u;
    }
L_001697dc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001697e0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000007u, 1, 1);
    }
L_001697e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001698f4;
        }
    }
L_001697e8:;
    {
        cpu->r[2] = 0x00001828u;
    }
L_001697ec:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001697f0:;
    {
        cpu->r[2] = rd32(0x001697f8u + + 0x4a0u);
    }
L_001697f4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_001697f8:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001697fc:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x418u);
    }
L_00169800:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_00169804:;
    {
        sub_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 2u, &shc), 1, 1);
    }
L_00169808:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_0016980c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_00169810:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000fa0u, 1, 1);
    }
L_00169814:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[7] = 0x00000000u;
        }
    }
L_00169818:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = cpu->r[2] & 0x00000001u; cpu->r[7] = v;
        }
    }
L_0016981c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00169820:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00169864;
        }
    }
L_00169824:;
    {
        cpu->r[1] = 0x0000182cu;
    }
L_00169828:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0016982c:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_00169830:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[2]);
    }
L_00169834:;
    {
        cpu->r[2] = 0x00000007u;
    }
L_00169838:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_0016983c:;
    {
        goto L_00169858;
    }
L_00169840:;
    {
        cpu->r[2] = 0x0000182cu;
    }
L_00169844:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_00169848:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_0016984c:;
    {
        cpu->r[3] = 0x000018b8u;
    }
L_00169850:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00169854:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_00169858:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0016985c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000074u, 0, 0);
    }
L_00169860:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00169864u)) return;
    }
L_00169864:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_00169868:;
    {
        goto L_00169858;
    }
L_0016986c:;
    {
        { uint32_t v = cpu->r[1] & 0x20000000u; set_nz(cpu, v); }
    }
L_00169870:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00169a34;
        }
    }
L_00169874:;
    {
        cpu->r[3] = 0x00000006u;
    }
L_00169878:;
    {
        wr32(cpu->r[4] + cpu->r[9], cpu->r[3]);
    }
L_0016987c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00169880:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[3]);
    }
L_00169884:;
    {
        cpu->r[1] = 0x00001824u;
    }
L_00169888:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_0016988c:;
    {
        cpu->r[3] = 0x00000040u;
    }
L_00169890:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_00169894:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x2000u << 16);
    }
L_00169898:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_0016989c:;
    {
        uint32_t v = cpu->r[1] & cpu->r[3]; cpu->r[3] = v;
    }
L_001698a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001698a4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = 0x00000008u;
        }
    }
L_001698a8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = 0x00000008u;
        }
    }
L_001698ac:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[2]);
        }
    }
L_001698b0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[3] | 0x00100000u; cpu->r[3] = v;
        }
    }
L_001698b4:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
        }
    }
L_001698b8:;
    {
        goto L_00169858;
    }
L_001698bc:;
    {
        cpu->r[2] = 0x00001828u;
    }
L_001698c0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001698c4:;
    {
        cpu->r[2] = rd32(0x001698ccu + + 0x3ccu);
    }
L_001698c8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_001698cc:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001698d0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x418u);
    }
L_001698d4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 3, 31u, &shc), 0, 0);
    }
L_001698d8:;
    {
        sub_flags(cpu, cpu->r[1], shifter(cpu->r[2], 1, 1u, &shc), 1, 1);
    }
L_001698dc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00169558;
        }
    }
L_001698e0:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001698e4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00169558;
        }
    }
L_001698e8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001698ec:;
    {
        cpu->r[14] = 0x001698f0u; fn_00164a5c(cpu);
    }
L_001698f0:;
    {
        goto L_00169558;
    }
L_001698f4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001698f8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1b0u);
    }
L_001698fc:;
    {
        cpu->r[14] = 0x00169900u; fn_00180c78(cpu);
    }
L_00169900:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xb8u);
    }
L_00169904:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00169908:;
    {
        sub_flags(cpu, cpu->r[7], shifter(cpu->r[3], 2, 1u, &shc), 1, 1);
    }
L_0016990c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00169934;
        }
    }
L_00169910:;
    {
        cpu->r[3] = 0x00001824u;
    }
L_00169914:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00169918:;
    {
        cpu->r[1] = 0x0000000eu;
    }
L_0016991c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00169920:;
    {
        cpu->r[14] = 0x00169924u; fn_00161bec(cpu);
    }
L_00169924:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00169928:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016992c:;
    {
        uint32_t v = cpu->r[2] | 0x00100000u; cpu->r[2] = v;
    }
L_00169930:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_00169934:;
    {
        cpu->r[3] = 0x00001654u;
    }
L_00169938:;
    {
        cpu->r[2] = 0x00100000u;
    }
L_0016993c:;
    {
        cpu->r[7] = 0x00000008u;
    }
L_00169940:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_00169944:;
    {
        goto L_00169858;
    }
L_00169948:;
    {
        cpu->r[2] = 0x0000182cu;
    }
L_0016994c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00169950:;
    {
        cpu->r[2] = rd32(0x00169958u + + 0x340u);
    }
L_00169954:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_00169958:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0016995c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x418u);
    }
L_00169960:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 3, 31u, &shc), 0, 0);
    }
L_00169964:;
    {
        sub_flags(cpu, cpu->r[1], shifter(cpu->r[2], 1, 1u, &shc), 1, 1);
    }
L_00169968:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001696fc;
        }
    }
L_0016996c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000063u, 1, 1);
    }
L_00169970:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001696fc;
        }
    }
L_00169974:;
    {
        cpu->r[14] = 0x00001824u;
    }
L_00169978:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_0016997c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000064u, 0, 0);
    }
L_00169980:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_00169984:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[14]);
    }
L_00169988:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0016998c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00169990:;
    {
        cpu->r[14] = rd32(cpu->r[12] + + 0x430u);
    }
L_00169994:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[14]);
    }
L_00169998:;
    {
        cpu->r[14] = rd32(cpu->r[12] + + 0x428u);
    }
L_0016999c:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x42cu);
    }
L_001699a0:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[14]);
    }
L_001699a4:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[12]);
    }
L_001699a8:;
    {
        cpu->r[14] = 0x001699acu; fn_00168870(cpu);
    }
L_001699ac:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001699b0:;
    {
        cpu->r[14] = 0x001699b4u; fn_0018572c(cpu);
    }
L_001699b4:;
    {
        cpu->r[1] = 0x00001824u;
    }
L_001699b8:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001699bc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_001699c0:;
    {
        cpu->r[14] = 0x001699c4u; fn_001721fc(cpu);
    }
L_001699c4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001699c8:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[0], 1, 1);
    }
L_001699cc:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001696fc;
        }
    }
L_001699d0:;
    {
        cpu->r[2] = 0x00001654u;
    }
L_001699d4:;
    {
        cpu->r[1] = 0x00100000u;
    }
L_001699d8:;
    {
        cpu->r[7] = 0x00000008u;
    }
L_001699dc:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_001699e0:;
    {
        goto L_00169700;
    }
L_001699e4:;
    {
        cpu->r[1] = rd32(0x001699ecu + + 0x2acu);
    }
L_001699e8:;
    {
        cpu->r[3] = 0x0000182cu;
    }
L_001699ec:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001699f0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_001699f4:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_001699f8:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x418u);
    }
L_001699fc:;
    {
        sub_flags(cpu, cpu->r[2], shifter(cpu->r[1], 2, 2u, &shc), 1, 1);
    }
L_00169a00:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00169a28;
        }
    }
L_00169a04:;
    {
        cpu->r[2] = 0x00001850u;
    }
L_00169a08:;
    {
        cpu->r[1] = rd8(cpu->r[4] + cpu->r[2]);
    }
L_00169a0c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00169a10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00169ab4;
        }
    }
L_00169a14:;
    {
        cpu->r[2] = 0x000018b8u;
    }
L_00169a18:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00169a1c:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_00169a20:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00169a24:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_00169a28:;
    {
        cpu->r[3] = 0x00001824u;
    }
L_00169a2c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00169a30:;
    {
        goto L_00169608;
    }
L_00169a34:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00169a38:;
    {
        cpu->r[14] = 0x00169a3cu; fn_00164a5c(cpu);
    }
L_00169a3c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_00169a40:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000006u, 1, 1);
    }
L_00169a44:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
        }
    }
L_00169a48:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001694dc;
        }
    }
L_00169a4c:;
    {
        goto L_00169884;
    }
L_00169a50:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], 0x000000c7u, 0, 0);
    }
L_00169a54:;
    {
        cpu->r[3] = 0x0000018eu;
    }
L_00169a58:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00169a5c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00169a28;
        }
    }
L_00169a60:;
    {
        cpu->r[3] = 0x00001850u;
    }
L_00169a64:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_00169a68:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00169a6c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00169a90;
        }
    }
L_00169a70:;
    {
        cpu->r[3] = 0x00001851u;
    }
L_00169a74:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_00169a78:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00169a7c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00169a90;
        }
    }
L_00169a80:;
    {
        cpu->r[3] = 0x00001852u;
    }
L_00169a84:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_00169a88:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00169a8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00169a28;
        }
    }
L_00169a90:;
    {
        cpu->r[3] = 0x000018b8u;
    }
L_00169a94:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00169a98:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_00169a9c:;
    {
        cpu->r[3] = 0x0000182cu;
    }
L_00169aa0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00169aa4:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_00169aa8:;
    {
        cpu->r[3] = 0x00001824u;
    }
L_00169aac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00169ab0:;
    {
        goto L_00169608;
    }
L_00169ab4:;
    {
        cpu->r[2] = 0x00001852u;
    }
L_00169ab8:;
    {
        cpu->r[2] = rd8(cpu->r[4] + cpu->r[2]);
    }
L_00169abc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00169ac0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00169a28;
        }
    }
L_00169ac4:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[1]);
    }
L_00169ac8:;
    {
        cpu->r[3] = 0x000018b8u;
    }
L_00169acc:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_00169ad0:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_00169ad4:;
    {
        cpu->r[3] = 0x00001824u;
    }
L_00169ad8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00169adc:;
    {
        goto L_00169608;
    }
L_00169ae0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], 0x00000063u, 0, 0);
    }
L_00169ae4:;
    {
        sub_flags(cpu, cpu->r[2], 0x000000c6u, 1, 1);
    }
L_00169ae8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001696b0;
        }
    }
L_00169aec:;
    {
        cpu->r[2] = 0x0000fc18u;
    }
L_00169af0:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_00169af4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00169af8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0xffffu << 16);
    }
L_00169afc:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_00169b00:;
    {
        goto L_001696bc;
    }
L_00169b04:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x48cu);
    }
L_00169b08:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00169b0c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[2];
        }
    }
L_00169b10:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016970c;
        }
    }
L_00169b14:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4a0u);
    }
L_00169b18:;
    {
        goto L_00169734;
    }
L_00169b1c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00169b20:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00169b24:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_00169b28:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_00169b2c:;
    {
        cpu->r[14] = 0x00169b30u; fn_001721fc(cpu);
    }
L_00169b30:;
    {
        cpu->r[3] = 0x00001824u;
    }
L_00169b34:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_00169b38:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00169b3c:;
    {
        cpu->r[14] = 0x00169b40u; fn_001721fc(cpu);
    }
L_00169b40:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00169b44:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00169b48:;
    {
        cpu->r[14] = 0x00169b4cu; fn_001721fc(cpu);
    }
L_00169b4c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[8], cpu->r[10], 0, 0);
    }
L_00169b50:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_00169b54:;
    {
        cpu->r[2] = 0x0000fc18u;
    }
L_00169b58:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_00169b5c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0xffffu << 16);
    }
L_00169b60:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x4cu);
    }
L_00169b64:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x54u);
    }
L_00169b68:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_00169b6c:;
    {
        uint32_t v = cpu->r[1] * cpu->r[0]; cpu->r[1] = v;
    }
L_00169b70:;
    {
        goto L_001696bc;
    }
L_00169b74:;
    {
        cpu->r[3] = rd32(0x00169b7cu + + 0x11cu);
    }
L_00169b78:;
    {
        cpu->r[2] = 0x0000182cu;
    }
L_00169b7c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00169b80:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00169b84:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00169b88:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x418u);
    }
L_00169b8c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_00169b90:;
    {
        sub_flags(cpu, cpu->r[1], shifter(cpu->r[3], 1, 1u, &shc), 1, 1);
    }
L_00169b94:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00169a28;
        }
    }
L_00169b98:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 0);
    }
L_00169b9c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000062u, 1, 1);
    }
L_00169ba0:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[1] = 0x00000005u;
        }
    }
L_00169ba4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00169a28;
        }
    }
L_00169ba8:;
    {
        cpu->r[3] = 0x000018b8u;
    }
L_00169bac:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[1]);
    }
L_00169bb0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00169bb4:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_00169bb8:;
    {
        goto L_00169a28;
    }
L_00169bbc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00169bc0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_00169bc4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00169bc8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_00169bcc:;
    {
        cpu->r[14] = 0x00169bd0u; fn_001721fc(cpu);
    }
L_00169bd0:;
    {
        cpu->r[3] = 0x00001824u;
    }
L_00169bd4:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_00169bd8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00169bdc:;
    {
        cpu->r[14] = 0x00169be0u; fn_001721fc(cpu);
    }
L_00169be0:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00169be4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00169be8:;
    {
        cpu->r[14] = 0x00169becu; fn_001721fc(cpu);
    }
L_00169bec:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[8], cpu->r[10], 0, 0);
    }
L_00169bf0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_00169bf4:;
    {
        cpu->r[2] = 0x0000fc18u;
    }
L_00169bf8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_00169bfc:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0xffffu << 16);
    }
L_00169c00:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x4cu);
    }
L_00169c04:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x54u);
    }
L_00169c08:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_00169c0c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], cpu->r[0], 0, 0);
    }
L_00169c10:;
    {
        uint32_t v = cpu->r[1] * cpu->r[0]; cpu->r[1] = v;
    }
L_00169c14:;
    {
        goto L_001696bc;
    }
L_00169c18:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00169c1c:;
    {
        cpu->r[14] = 0x00000001u;
    }
L_00169c20:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_00169c24:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[14]);
    }
L_00169c28:;
    {
        cpu->r[14] = 0x00169c2cu; fn_001721fc(cpu);
    }
L_00169c2c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_00169c30:;
    {
        cpu->r[2] = 0x0000fc18u;
    }
L_00169c34:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_00169c38:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0xffffu << 16);
    }
L_00169c3c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x4cu);
    }
L_00169c40:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x54u);
    }
L_00169c44:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[0] = v;
    }
L_00169c48:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
    }
L_00169c4c:;
    {
        uint32_t v = cpu->r[1] * cpu->r[0]; cpu->r[1] = v;
    }
L_00169c50:;
    {
        goto L_001696bc;
    }
L_00169c54:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00169c58:;
    {
        cpu->r[2] = 0x0000182cu;
    }
L_00169c5c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00169c60:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4a0u);
        }
    }
L_00169c64:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00169c68:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_00169c6c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001695d8;
        }
    }
L_00169c70:;
    {
        cpu->r[0] = rd32(0x00169c78u + + 0x20u);
    }
L_00169c74:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_00169c78:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_00169c7c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x418u);
    }
L_00169c80:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 3, 31u, &shc), 0, 0);
    }
L_00169c84:;
    {
        sub_flags(cpu, cpu->r[1], shifter(cpu->r[0], 1, 1u, &shc), 1, 1);
    }
L_00169c88:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001695d8;
        }
    }
L_00169c8c:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00169c90:;
    {
        goto L_00169ba8;
    }
}

/* _ZN4CCar24GetCumulatedTuningEffectEiR10TUNING_KIT @ 00169c9c (arm) */
void fn_00169c9c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00169c9c:;
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
L_00169ca0:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00169ca4:;
    {
        cpu->r[5] = rd32(0x00169cacu + + 0x214u);
    }
L_00169ca8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000063u, 1, 1);
    }
L_00169cac:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_00169cb0:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_00169cb4:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00169cb8:;
    {
        cpu->r[5] = add_flags(cpu, 0x00169cc0u, cpu->r[5], 0, 0);
    }
L_00169cbc:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00169e84;
        }
    }
L_00169cc0:;
    {
        cpu->r[11] = rd32(0x00169cc8u + + 0x1fcu);
    }
L_00169cc4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00169cc8:;
    {
        cpu->r[2] = rd32(0x00169cd0u + + 0x1f8u);
    }
L_00169ccc:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_00169cd0:;
    {
        cpu->r[10] = rd32(0x00169cd8u + + 0x1f4u);
    }
L_00169cd4:;
    {
        uint32_t v = shifter(cpu->r[9], 2, 2u, &shc); cpu->r[9] = v;
    }
L_00169cd8:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_00169cdc:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00169ce0:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_00169ce4:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_00169ce8:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_00169cec:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_00169cf0:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_00169cf4:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_00169cf8:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_00169cfc:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[3]);
    }
L_00169d00:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[3]);
    }
L_00169d04:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_00169d08:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_00169d0c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[11]);
    }
L_00169d10:;
    {
        goto L_00169d3c;
    }
L_00169d14:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_00169d18:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x1ecu);
    }
L_00169d1c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[9]);
    }
L_00169d20:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_00169d24:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x1u);
    }
L_00169d28:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00169d2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00169d84;
        }
    }
L_00169d30:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_00169d34:;
    {
        sub_flags(cpu, cpu->r[7], 0x0000001eu, 1, 1);
    }
L_00169d38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00169e3c;
        }
    }
L_00169d3c:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_00169d40:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00169d44:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00169d14;
        }
    }
L_00169d48:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00169d4c:;
    {
        cpu->r[14] = 0x00169d50u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00169d50:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00169d54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00169d14;
        }
    }
L_00169d58:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_00169d5c:;
    {
        cpu->r[14] = 0x00169d60u; fn_00094228(cpu);
    }
L_00169d60:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00169d64:;
    {
        cpu->r[14] = 0x00169d68u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00169d68:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_00169d6c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x1ecu);
    }
L_00169d70:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[9]);
    }
L_00169d74:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
    }
L_00169d78:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x1u);
    }
L_00169d7c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00169d80:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00169d30;
        }
    }
L_00169d84:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_00169d88:;
    {
        cpu->r[11] = 0x0000002cu;
    }
L_00169d8c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00169d90:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_00169d94:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00169d98:;
    {
        uint32_t v = cpu->r[11] * cpu->r[7] + cpu->r[3]; cpu->r[3] = v;
    }
L_00169d9c:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x8u);
    }
L_00169da0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_00169da4:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[3], 0x00008700u, 0, 0);
    }
L_00169da8:;
    {
        cpu->r[12] = cpu->r[14];
    }
L_00169dac:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x0000006cu, 0, 0);
    }
L_00169db0:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_00169db4:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_00169db8:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_00169dbc:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_00169dc0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000058u, 0, 0);
    }
L_00169dc4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000005cu, 0, 0);
    }
L_00169dc8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000060u, 0, 0);
    }
L_00169dcc:;
    {
        cpu->r[14] = rd32(cpu->r[14]);
    }
L_00169dd0:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_00169dd4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000064u, 0, 0);
    }
L_00169dd8:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_00169ddc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000068u, 0, 0);
    }
L_00169de0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[11], cpu->r[12], 0, 0);
    }
L_00169de4:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0xcu);
    }
L_00169de8:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00169dec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[11], cpu->r[0], 0, 0);
    }
L_00169df0:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x10u);
    }
L_00169df4:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_00169df8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[11], cpu->r[1], 0, 0);
    }
L_00169dfc:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x1cu);
    }
L_00169e00:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00169e04:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[12]);
    }
L_00169e08:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[14], 1, 1);
    }
L_00169e0c:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[11]);
        }
    }
L_00169e10:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[14]);
        }
    }
L_00169e14:;
    {
        sub_flags(cpu, cpu->r[7], 0x0000001eu, 1, 1);
    }
L_00169e18:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x14u);
    }
L_00169e1c:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x18u);
    }
L_00169e20:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[14], cpu->r[2], 0, 0);
    }
L_00169e24:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_00169e28:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[11], cpu->r[3], 0, 0);
    }
L_00169e2c:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[1]);
    }
L_00169e30:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[2]);
    }
L_00169e34:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_00169e38:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00169d3c;
        }
    }
L_00169e3c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0xcu);
    }
L_00169e40:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_00169e44:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[4] + + 0x14u);
    }
L_00169e48:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_00169e4c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_00169e50:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00169e54:;
    {
        cpu->r[14] = 0x00169e58u; fn_000a2a00(cpu);
    }
L_00169e58:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00169e60u + + 0x5cu);
    }
L_00169e5c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00169e60:;
    {
        vfp_vmla(cpu, 16, 14, 15);
    }
L_00169e64:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00169e68:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00169e6c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00169e70:;
    {
        *(int32_t*)vfp_s(cpu,16) = (int32_t)*vfp_s(cpu,16);
    }
L_00169e74:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00169e78:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00169e7c:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00169e80:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00169e84u)) return;
    }
L_00169e84:;
    {
        cpu->r[1] = rd32(0x00169e8cu + + 0x44u);
    }
L_00169e88:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00169e8c:;
    {
        cpu->r[12] = rd32(0x00169e94u + + 0x40u);
    }
L_00169e90:;
    {
        cpu->r[14] = 0x00002bfau;
    }
L_00169e94:;
    {
        cpu->r[2] = rd32(0x00169e9cu + + 0x3cu);
    }
L_00169e98:;
    {
        cpu->r[1] = add_flags(cpu, 0x00169ea0u, cpu->r[1], 0, 0);
    }
L_00169e9c:;
    {
        cpu->r[3] = rd32(0x00169ea4u + + 0x38u);
    }
L_00169ea0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00169ea8u, cpu->r[12], 0, 0);
    }
L_00169ea4:;
    {
        cpu->r[2] = add_flags(cpu, 0x00169eacu, cpu->r[2], 0, 0);
    }
L_00169ea8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000014cu, 0, 0);
    }
L_00169eac:;
    {
        cpu->r[3] = add_flags(cpu, 0x00169eb4u, cpu->r[3], 0, 0);
    }
L_00169eb0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00169eb4:;
    {
        cpu->r[14] = 0x00169eb8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00169eb8:;
    {
        goto L_00169cc0;
    }
}
