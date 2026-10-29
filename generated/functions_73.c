#include "functions.h"

/* _ZN14GLXPlayerLogin24SendGetGeneralConditionsEPc @ 001b7c14 (arm) */
void fn_001b7c14(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b7c14:;
    {
        cpu->r[3] = rd32(0x001b7c1cu + + 0xa4u);
    }
L_001b7c18:;
    {
        cpu->r[2] = rd32(0x001b7c20u + + 0xa4u);
    }
L_001b7c1c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001b7c24u, cpu->r[3], 0, 0);
    }
L_001b7c20:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_001b7c24:;
    {
        cpu->r[6] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001b7c28:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001b7c2c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b7c30:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000004u, 1, 0);
    }
L_001b7c34:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001b7c38:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001b7c3c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001b7c40:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 0);
    }
L_001b7c44:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b7c48:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b7c4c:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001b7c50:;
    {
        wr32(cpu->r[13] + + 0x80cu, cpu->r[3]);
    }
L_001b7c54:;
    {
        cpu->r[14] = 0x001b7c58u; fn_001d0700(cpu);
    }
L_001b7c58:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_001b7c5c:;
    {
        cpu->r[2] = 0x00000062u;
    }
L_001b7c60:;
    {
        cpu->r[1] = rd32(0x001b7c68u + + 0x60u);
    }
L_001b7c64:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b7c68:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001b7c6c:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b7c74u, cpu->r[1], 0, 0);
    }
L_001b7c70:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001b7c74:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_001b7c78:;
    {
        cpu->r[14] = 0x001b7c7cu; imp_sprintf(cpu); /* sprintf */
    }
L_001b7c7c:;
    {
        cpu->r[0] = rd32(0x001b7c84u + + 0x48u);
    }
L_001b7c80:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b7c84:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b7c8cu, cpu->r[0], 0, 0);
    }
L_001b7c88:;
    {
        cpu->r[14] = 0x001b7c8cu; fn_001d0ac4(cpu);
    }
L_001b7c8c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001b7c90:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b7c94:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b7c98:;
    {
        cpu->r[14] = 0x001b7ca0u;
    }
L_001b7c9c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b7ca0u)) return;
    }
L_001b7ca0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x80cu);
    }
L_001b7ca4:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001b7ca8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001b7cac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b7cbc;
        }
    }
L_001b7cb0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001b7cb4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001b7cb8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b7cbcu)) return;
    }
L_001b7cbc:;
    {
        cpu->r[14] = 0x001b7cc0u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001b7cc0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[9] + (-cpu->r[4]);
        wr64(cpu->r[9], ((uint64_t)cpu->r[3] << 32) | cpu->r[2]);
        cpu->r[9] = wb_tmp;
        }
    }
L_001b7cc4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001b7cc8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 1, 6u, &shc); cpu->r[8] = v;
        }
    }
L_001b7ccc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 1, 6u, &shc); cpu->r[8] = v;
        }
    }
}

/* _ZN14GLXPlayerLogin18SendGetProductInfoEPc @ 001b7cd0 (arm) */
void fn_001b7cd0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b7cd0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001b7cd4:;
    {
        cpu->r[4] = rd32(0x001b7cdcu + + 0xd8u);
    }
L_001b7cd8:;
    {
        cpu->r[7] = rd32(0x001b7ce0u + + 0xd8u);
    }
L_001b7cdc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001b7ce0:;
    {
        cpu->r[4] = add_flags(cpu, 0x001b7ce8u, cpu->r[4], 0, 0);
    }
L_001b7ce4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001b7ce8:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 0);
    }
L_001b7cec:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001b7cf0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001b7cf4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001b7cf8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b7cfc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b7d00:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001b7d04:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b7d08:;
    {
        wr32(cpu->r[13] + + 0x80cu, cpu->r[3]);
    }
L_001b7d0c:;
    {
        cpu->r[14] = 0x001b7d10u; fn_001d0700(cpu);
    }
L_001b7d10:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001b7d14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b7d7c;
        }
    }
L_001b7d18:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0xcu);
    }
L_001b7d1c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b7d20:;
    {
        cpu->r[1] = rd32(0x001b7d28u + + 0x94u);
    }
L_001b7d24:;
    {
        cpu->r[2] = 0x0000005fu;
    }
L_001b7d28:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_001b7d2c:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b7d34u, cpu->r[1], 0, 0);
    }
L_001b7d30:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_001b7d34:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001b7d38:;
    {
        cpu->r[14] = 0x001b7d3cu; imp_sprintf(cpu); /* sprintf */
    }
L_001b7d3c:;
    {
        cpu->r[0] = rd32(0x001b7d44u + + 0x7cu);
    }
L_001b7d40:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b7d44:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b7d4cu, cpu->r[0], 0, 0);
    }
L_001b7d48:;
    {
        cpu->r[14] = 0x001b7d4cu; fn_001d0ac4(cpu);
    }
L_001b7d4c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001b7d50:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b7d54:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b7d58:;
    {
        cpu->r[14] = 0x001b7d60u;
    }
L_001b7d5c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b7d60u)) return;
    }
L_001b7d60:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001b7d64:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x80cu);
    }
L_001b7d68:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b7d6c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001b7d70:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b7db0;
        }
    }
L_001b7d74:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000810u, 0, 0);
    }
L_001b7d78:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b7d7cu)) return;
    }
L_001b7d7c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001b7d80:;
    {
        cpu->r[14] = 0x001b7d84u; fn_001d0434(cpu);
    }
L_001b7d84:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b7d88:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001b7d18;
        }
    }
L_001b7d8c:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0xcu);
    }
L_001b7d90:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b7d94:;
    {
        cpu->r[1] = rd32(0x001b7d9cu + + 0x28u);
    }
L_001b7d98:;
    {
        cpu->r[2] = 0x0000005fu;
    }
L_001b7d9c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_001b7da0:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b7da8u, cpu->r[1], 0, 0);
    }
L_001b7da4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001b7da8:;
    {
        cpu->r[14] = 0x001b7dacu; imp_sprintf(cpu); /* sprintf */
    }
L_001b7dac:;
    {
        goto L_001b7d3c;
    }
L_001b7db0:;
    {
        cpu->r[14] = 0x001b7db4u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001b7db4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[9] & shifter(cpu->r[0], 3, (cpu->r[7] & 0xffu), &shc); cpu->r[2] = v;
        }
    }
L_001b7db8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001b7dbc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 2, 5u, &shc); cpu->r[8] = v;
        }
    }
L_001b7dc0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[12]);
        wr16(cpu->r[7], cpu->r[8]);
        cpu->r[7] = wb_tmp;
        }
    }
L_001b7dc4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] * cpu->r[2]; cpu->r[7] = v;
        }
    }
}

/* _ZN14GLXPlayerLogin15SendGetAPNSInfoEi @ 001b7dc8 (arm) */
void fn_001b7dc8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b7dc8:;
    {
        cpu->r[3] = rd32(0x001b7dd0u + + 0xa4u);
    }
L_001b7dcc:;
    {
        cpu->r[2] = rd32(0x001b7dd4u + + 0xa4u);
    }
L_001b7dd0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001b7dd8u, cpu->r[3], 0, 0);
    }
L_001b7dd4:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_001b7dd8:;
    {
        cpu->r[6] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001b7ddc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001b7de0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b7de4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000004u, 1, 0);
    }
L_001b7de8:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001b7dec:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001b7df0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001b7df4:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 0);
    }
L_001b7df8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b7dfc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b7e00:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001b7e04:;
    {
        wr32(cpu->r[13] + + 0x80cu, cpu->r[3]);
    }
L_001b7e08:;
    {
        cpu->r[14] = 0x001b7e0cu; fn_001d0700(cpu);
    }
L_001b7e0c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_001b7e10:;
    {
        cpu->r[2] = 0x00000053u;
    }
L_001b7e14:;
    {
        cpu->r[1] = rd32(0x001b7e1cu + + 0x60u);
    }
L_001b7e18:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b7e1c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001b7e20:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b7e28u, cpu->r[1], 0, 0);
    }
L_001b7e24:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001b7e28:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_001b7e2c:;
    {
        cpu->r[14] = 0x001b7e30u; imp_sprintf(cpu); /* sprintf */
    }
L_001b7e30:;
    {
        cpu->r[0] = rd32(0x001b7e38u + + 0x48u);
    }
L_001b7e34:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b7e38:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b7e40u, cpu->r[0], 0, 0);
    }
L_001b7e3c:;
    {
        cpu->r[14] = 0x001b7e40u; fn_001d0ac4(cpu);
    }
L_001b7e40:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001b7e44:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b7e48:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b7e4c:;
    {
        cpu->r[14] = 0x001b7e54u;
    }
L_001b7e50:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b7e54u)) return;
    }
L_001b7e54:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x80cu);
    }
L_001b7e58:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001b7e5c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001b7e60:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b7e70;
        }
    }
L_001b7e64:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001b7e68:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001b7e6c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b7e70u)) return;
    }
L_001b7e70:;
    {
        cpu->r[14] = 0x001b7e74u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001b7e74:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[9] & shifter(cpu->r[0], 1, 12u, &shc); cpu->r[2] = v;
        }
    }
L_001b7e78:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001b7e7c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[4], 3, 4u, &shc); cpu->r[8] = v;
        }
    }
L_001b7e80:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[4], 3, 4u, &shc); cpu->r[8] = v;
        }
    }
}

/* _ZN14GLXPlayerLogin13SendKeepAliveEv @ 001b7e84 (arm) */
void fn_001b7e84(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b7e84:;
    {
        cpu->r[3] = rd32(0x001b7e8cu + + 0x9cu);
    }
L_001b7e88:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b7e8c:;
    {
        cpu->r[2] = rd32(0x001b7e94u + + 0x98u);
    }
L_001b7e90:;
    {
        cpu->r[3] = add_flags(cpu, 0x001b7e98u, cpu->r[3], 0, 0);
    }
L_001b7e94:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001b7e98:;
    {
        cpu->r[6] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001b7e9c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001b7ea0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b7ea4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001b7ea8:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001b7eac:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001b7eb0:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 0);
    }
L_001b7eb4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b7eb8:;
    {
        wr32(cpu->r[13] + + 0x80cu, cpu->r[3]);
    }
L_001b7ebc:;
    {
        cpu->r[14] = 0x001b7ec0u; fn_001d0700(cpu);
    }
L_001b7ec0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_001b7ec4:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_001b7ec8:;
    {
        cpu->r[1] = rd32(0x001b7ed0u + + 0x60u);
    }
L_001b7ecc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b7ed0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001b7ed4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b7edcu, cpu->r[1], 0, 0);
    }
L_001b7ed8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001b7edc:;
    {
        cpu->r[14] = 0x001b7ee0u; imp_sprintf(cpu); /* sprintf */
    }
L_001b7ee0:;
    {
        cpu->r[14] = 0x001b7ee4u; fn_001d05bc(cpu);
    }
L_001b7ee4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b7ee8:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[0]);
    }
L_001b7eec:;
    {
        cpu->r[0] = rd32(0x001b7ef4u + + 0x40u);
    }
L_001b7ef0:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b7ef8u, cpu->r[0], 0, 0);
    }
L_001b7ef4:;
    {
        cpu->r[14] = 0x001b7ef8u; fn_001d0ac4(cpu);
    }
L_001b7ef8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001b7efc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b7f00:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b7f04:;
    {
        cpu->r[14] = 0x001b7f0cu;
    }
L_001b7f08:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b7f0cu)) return;
    }
L_001b7f0c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x80cu);
    }
L_001b7f10:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001b7f14:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001b7f18:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b7f24;
        }
    }
L_001b7f1c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000810u, 0, 0);
    }
L_001b7f20:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b7f24u)) return;
    }
L_001b7f24:;
    {
        cpu->r[14] = 0x001b7f28u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001b7f28:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[9] & shifter(cpu->r[0], 2, 11u, &shc); cpu->r[2] = v;
        }
    }
L_001b7f2c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001b7f30:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[4], 3, 1u, &shc); cpu->r[8] = v;
        }
    }
L_001b7f34:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[12] * cpu->r[1]; cpu->r[7] = v;
        }
    }
}

/* _ZN14GLXPlayerLogin9KeepAliveEv @ 001b7f38 (arm) */
void fn_001b7f38(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b7f38:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001b7f3c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b7f40:;
    {
        cpu->r[14] = 0x001b7f44u; fn_001b7a60(cpu);
    }
L_001b7f44:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b7f48:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001b7f4cu)) return;
        }
    }
L_001b7f4c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b7f50:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_001b7f54:;
    {
        return fn_001b7e84(cpu);
    }
}

/* _ZN14GLXPlayerLogin10SendLogoutEv @ 001b7f58 (arm) */
void fn_001b7f58(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b7f58:;
    {
        cpu->r[3] = rd32(0x001b7f60u + + 0x98u);
    }
L_001b7f5c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b7f60:;
    {
        cpu->r[2] = rd32(0x001b7f68u + + 0x94u);
    }
L_001b7f64:;
    {
        cpu->r[3] = add_flags(cpu, 0x001b7f6cu, cpu->r[3], 0, 0);
    }
L_001b7f68:;
    {
        wr8(cpu->r[0] + + 0x40u, cpu->r[1]);
    }
L_001b7f6c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001b7f70:;
    {
        cpu->r[6] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001b7f74:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001b7f78:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b7f7c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001b7f80:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001b7f84:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001b7f88:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 0);
    }
L_001b7f8c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b7f90:;
    {
        wr32(cpu->r[13] + + 0x80cu, cpu->r[3]);
    }
L_001b7f94:;
    {
        cpu->r[14] = 0x001b7f98u; fn_001d0700(cpu);
    }
L_001b7f98:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_001b7f9c:;
    {
        cpu->r[2] = 0x00000011u;
    }
L_001b7fa0:;
    {
        cpu->r[1] = rd32(0x001b7fa8u + + 0x58u);
    }
L_001b7fa4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b7fa8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001b7fac:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b7fb4u, cpu->r[1], 0, 0);
    }
L_001b7fb0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001b7fb4:;
    {
        cpu->r[14] = 0x001b7fb8u; imp_sprintf(cpu); /* sprintf */
    }
L_001b7fb8:;
    {
        cpu->r[0] = rd32(0x001b7fc0u + + 0x44u);
    }
L_001b7fbc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b7fc0:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b7fc8u, cpu->r[0], 0, 0);
    }
L_001b7fc4:;
    {
        cpu->r[14] = 0x001b7fc8u; fn_001d0ac4(cpu);
    }
L_001b7fc8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001b7fcc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b7fd0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b7fd4:;
    {
        cpu->r[14] = 0x001b7fdcu;
    }
L_001b7fd8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b7fdcu)) return;
    }
L_001b7fdc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x80cu);
    }
L_001b7fe0:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001b7fe4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001b7fe8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b7ff4;
        }
    }
L_001b7fec:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000810u, 0, 0);
    }
L_001b7ff0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b7ff4u)) return;
    }
L_001b7ff4:;
    {
        cpu->r[14] = 0x001b7ff8u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001b7ff8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[9] & shifter(cpu->r[12], 3, 9u, &shc); cpu->r[2] = v;
        }
    }
L_001b7ffc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001b8000:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[8], 2, 1u, &shc); cpu->r[8] = v;
        }
    }
L_001b8004:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[12], 4, 1u, &shc); cpu->r[8] = v;
        }
    }
}

/* _ZN14GLXPlayerLogin22processApplePushServerEPc @ 001b8008 (arm) */
void fn_001b8008(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b8008:;
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
L_001b800c:;
    {
        cpu->r[5] = rd32(0x001b8014u + + 0x224u);
    }
L_001b8010:;
    {
        cpu->r[10] = rd32(0x001b8018u + + 0x224u);
    }
L_001b8014:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_001b8018:;
    {
        cpu->r[5] = add_flags(cpu, 0x001b8020u, cpu->r[5], 0, 0);
    }
L_001b801c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001b8020:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b8024:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_001b8028:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b802c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_001b8030:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b8218;
        }
    }
L_001b8034:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b8038:;
    {
        cpu->r[14] = 0x001b803cu; fn_001d0434(cpu);
    }
L_001b803c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b8040:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001b8218;
        }
    }
L_001b8044:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x48u);
    }
L_001b8048:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b804c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b805c;
        }
    }
L_001b8050:;
    {
        cpu->r[14] = 0x001b8054u; fn_0018ba20(cpu);
    }
L_001b8054:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b8058:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[3]);
    }
L_001b805c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x50u);
    }
L_001b8060:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b8064:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b8074;
        }
    }
L_001b8068:;
    {
        cpu->r[14] = 0x001b806cu; fn_0018ba20(cpu);
    }
L_001b806c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b8070:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[3]);
    }
L_001b8074:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x58u);
    }
L_001b8078:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b807c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b808c;
        }
    }
L_001b8080:;
    {
        cpu->r[14] = 0x001b8084u; fn_0018ba20(cpu);
    }
L_001b8084:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b8088:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[3]);
    }
L_001b808c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x5cu);
    }
L_001b8090:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b8094:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b80a4;
        }
    }
L_001b8098:;
    {
        cpu->r[14] = 0x001b809cu; fn_0018ba20(cpu);
    }
L_001b809c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b80a0:;
    {
        wr32(cpu->r[4] + + 0x5cu, cpu->r[3]);
    }
L_001b80a4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x60u);
    }
L_001b80a8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b80ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b80bc;
        }
    }
L_001b80b0:;
    {
        cpu->r[14] = 0x001b80b4u; fn_0018ba20(cpu);
    }
L_001b80b4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b80b8:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[3]);
    }
L_001b80bc:;
    {
        cpu->r[0] = 0x00000020u;
    }
L_001b80c0:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_001b80c4:;
    {
        cpu->r[14] = 0x001b80c8u; imp__Znaj(cpu); /* _Znaj */
    }
L_001b80c8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001b80cc:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[0]);
    }
L_001b80d0:;
    {
        cpu->r[0] = 0x00000020u;
    }
L_001b80d4:;
    {
        cpu->r[14] = 0x001b80d8u; imp__Znaj(cpu); /* _Znaj */
    }
L_001b80d8:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[0]);
    }
L_001b80dc:;
    {
        cpu->r[0] = 0x00000100u;
    }
L_001b80e0:;
    {
        cpu->r[14] = 0x001b80e4u; imp__Znaj(cpu); /* _Znaj */
    }
L_001b80e4:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[0]);
    }
L_001b80e8:;
    {
        cpu->r[0] = 0x00000100u;
    }
L_001b80ec:;
    {
        cpu->r[14] = 0x001b80f0u; imp__Znaj(cpu); /* _Znaj */
    }
L_001b80f0:;
    {
        wr32(cpu->r[4] + + 0x5cu, cpu->r[0]);
    }
L_001b80f4:;
    {
        cpu->r[0] = 0x00000100u;
    }
L_001b80f8:;
    {
        cpu->r[14] = 0x001b80fcu; imp__Znaj(cpu); /* _Znaj */
    }
L_001b80fc:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001b8100:;
    {
        cpu->r[2] = 0x00000020u;
    }
L_001b8104:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[0]);
    }
L_001b8108:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x48u);
    }
L_001b810c:;
    {
        cpu->r[14] = 0x001b8110u; fn_001d0700(cpu);
    }
L_001b8110:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x58u);
    }
L_001b8114:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001b8118:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001b811c:;
    {
        cpu->r[14] = 0x001b8120u; fn_001d0700(cpu);
    }
L_001b8120:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x5cu);
    }
L_001b8124:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001b8128:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001b812c:;
    {
        cpu->r[14] = 0x001b8130u; fn_001d0700(cpu);
    }
L_001b8130:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x60u);
    }
L_001b8134:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001b8138:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001b813c:;
    {
        cpu->r[14] = 0x001b8140u; fn_001d0700(cpu);
    }
L_001b8140:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001b8144:;
    {
        uint32_t wb_tmp = cpu->r[7] + - 0x14u;
        wr32(cpu->r[7] + - 0x14u, cpu->r[8]);
        cpu->r[7] = wb_tmp;
    }
L_001b8148:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001b814c:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[8]);
        cpu->r[3] = wb_tmp;
    }
L_001b8150:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b8154:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[8]);
        cpu->r[3] = wb_tmp;
    }
L_001b8158:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_001b815c:;
    {
        wr32(cpu->r[3], cpu->r[8]);
    }
L_001b8160:;
    {
        cpu->r[14] = 0x001b8164u; fn_001d0700(cpu);
    }
L_001b8164:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001b8168:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x48u);
    }
L_001b816c:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001b8170:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b8174:;
    {
        cpu->r[14] = 0x001b8178u; fn_001d0148(cpu);
    }
L_001b8178:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001b817c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001b8180:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001b8184:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b8188:;
    {
        cpu->r[14] = 0x001b818cu; fn_001d0148(cpu);
    }
L_001b818c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b8190:;
    {
        cpu->r[14] = 0x001b8194u; fn_001d06cc(cpu);
    }
L_001b8194:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001b8198:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x50u);
    }
L_001b819c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001b81a0:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[0]);
    }
L_001b81a4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b81a8:;
    {
        cpu->r[14] = 0x001b81acu; fn_001d0148(cpu);
    }
L_001b81ac:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b81b0:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001b81b4:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_001b81b8:;
    {
        cpu->r[14] = 0x001b81bcu; fn_001d0700(cpu);
    }
L_001b81bc:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001b81c0:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_001b81c4:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001b81c8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b81cc:;
    {
        cpu->r[14] = 0x001b81d0u; fn_001d0148(cpu);
    }
L_001b81d0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b81d4:;
    {
        cpu->r[14] = 0x001b81d8u; fn_001d06cc(cpu);
    }
L_001b81d8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x58u);
    }
L_001b81dc:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_001b81e0:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001b81e4:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[0]);
    }
L_001b81e8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b81ec:;
    {
        cpu->r[14] = 0x001b81f0u; fn_001d0148(cpu);
    }
L_001b81f0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x5cu);
    }
L_001b81f4:;
    {
        cpu->r[2] = 0x00000005u;
    }
L_001b81f8:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001b81fc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b8200:;
    {
        cpu->r[14] = 0x001b8204u; fn_001d0148(cpu);
    }
L_001b8204:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b8208:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x60u);
    }
L_001b820c:;
    {
        cpu->r[2] = 0x00000006u;
    }
L_001b8210:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001b8214:;
    {
        cpu->r[14] = 0x001b8218u; fn_001d0148(cpu);
    }
L_001b8218:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_001b821c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_001b8220:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b8224:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001b8228:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b8234;
        }
    }
L_001b822c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001b8230:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b8234u)) return;
    }
L_001b8234:;
    {
        cpu->r[14] = 0x001b8238u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001b8238:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[9] + (-cpu->r[8]);
        wr64(cpu->r[9], ((uint64_t)cpu->r[3] << 32) | cpu->r[2]);
        cpu->r[9] = wb_tmp;
        }
    }
L_001b823c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN14GLXPlayerLogin9SendLoginEPcS0_iS0_bbS0_b @ 001b8240 (arm) */
void fn_001b8240(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b8240:;
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
L_001b8244:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000008a0u, 1, 0);
    }
L_001b8248:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001b824c:;
    {
        cpu->r[5] = rd32(0x001b8254u + + 0x26cu);
    }
L_001b8250:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001b8254:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
        }
    }
L_001b8258:;
    {
        cpu->r[9] = cpu->r[2];
    }
L_001b825c:;
    {
        cpu->r[8] = rd32(0x001b8264u + + 0x260u);
    }
L_001b8260:;
    {
        cpu->r[5] = add_flags(cpu, 0x001b8268u, cpu->r[5], 0, 0);
    }
L_001b8264:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8d0u);
    }
L_001b8268:;
    {
        cpu->r[12] = cpu->r[3];
    }
L_001b826c:;
    {
        cpu->r[10] = cpu->r[1];
    }
L_001b8270:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[11] = 0x00000000u;
        }
    }
L_001b8274:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[11] = 0x00000001u;
        }
    }
L_001b8278:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_001b827c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001b8280:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_001b8284:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8dcu);
    }
L_001b8288:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b828c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_001b8290:;
    {
        cpu->r[2] = rd8(cpu->r[13] + + 0x8d4u);
    }
L_001b8294:;
    {
        wr32(cpu->r[13] + + 0x8a4u, cpu->r[3]);
    }
L_001b8298:;
    {
        cpu->r[3] = rd8(cpu->r[13] + + 0x8e0u);
    }
L_001b829c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_001b82a0:;
    {
        cpu->r[2] = rd8(cpu->r[13] + + 0x8d8u);
    }
L_001b82a4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_001b82a8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_001b82ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b8498;
        }
    }
L_001b82b0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_001b82b4:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001b82b8:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000004u, 1, 0);
    }
L_001b82bc:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001b82c0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b82c4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_001b82c8:;
    {
        cpu->r[14] = 0x001b82ccu; fn_001d0700(cpu);
    }
L_001b82cc:;
    {
        cpu->r[1] = rd32(0x001b82d4u + + 0x1f4u);
    }
L_001b82d0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000820u, 0, 0);
    }
L_001b82d4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x8u);
    }
L_001b82d8:;
    {
        cpu->r[2] = 0x0000000fu;
    }
L_001b82dc:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b82e4u, cpu->r[1], 0, 0);
    }
L_001b82e0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_001b82e4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b82e8:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_001b82ec:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[9]);
    }
L_001b82f0:;
    {
        cpu->r[14] = 0x001b82f4u; imp_sprintf(cpu); /* sprintf */
    }
L_001b82f4:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001b82f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b82fc:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001b8300:;
    {
        cpu->r[14] = 0x001b8304u; imp_memset(cpu); /* memset */
    }
L_001b8304:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_001b8308:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001b830c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001b8330;
        }
    }
L_001b8310:;
    {
        cpu->r[1] = rd32(0x001b8318u + + 0x1b4u);
    }
L_001b8314:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001b8318:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b831c:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b8324u, cpu->r[1], 0, 0);
    }
L_001b8320:;
    {
        cpu->r[14] = 0x001b8324u; imp_sprintf(cpu); /* sprintf */
    }
L_001b8324:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b8328:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001b832c:;
    {
        cpu->r[14] = 0x001b8330u; fn_001d06d4(cpu);
    }
L_001b8330:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001b8334:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001b8338:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b836c;
        }
    }
L_001b833c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b8340:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b8344:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001b8348:;
    {
        cpu->r[14] = 0x001b834cu; fn_001d0700(cpu);
    }
L_001b834c:;
    {
        cpu->r[1] = rd32(0x001b8354u + + 0x17cu);
    }
L_001b8350:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001b8354:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b8358:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b8360u, cpu->r[1], 0, 0);
    }
L_001b835c:;
    {
        cpu->r[14] = 0x001b8360u; imp_sprintf(cpu); /* sprintf */
    }
L_001b8360:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b8364:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001b8368:;
    {
        cpu->r[14] = 0x001b836cu; fn_001d06d4(cpu);
    }
L_001b836c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b8370:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b8374:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001b8378:;
    {
        cpu->r[14] = 0x001b837cu; fn_001d0700(cpu);
    }
L_001b837c:;
    {
        cpu->r[1] = rd32(0x001b8384u + + 0x150u);
    }
L_001b8380:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_001b8384:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b8388:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b8390u, cpu->r[1], 0, 0);
    }
L_001b838c:;
    {
        cpu->r[14] = 0x001b8390u; imp_sprintf(cpu); /* sprintf */
    }
L_001b8390:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001b8394:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b8398:;
    {
        cpu->r[14] = 0x001b839cu; fn_001d06d4(cpu);
    }
L_001b839c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b83a0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b83a4:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001b83a8:;
    {
        cpu->r[14] = 0x001b83acu; fn_001d0700(cpu);
    }
L_001b83ac:;
    {
        cpu->r[1] = rd32(0x001b83b4u + + 0x124u);
    }
L_001b83b0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_001b83b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b83b8:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b83c0u, cpu->r[1], 0, 0);
    }
L_001b83bc:;
    {
        cpu->r[14] = 0x001b83c0u; imp_sprintf(cpu); /* sprintf */
    }
L_001b83c0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b83c4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001b83c8:;
    {
        cpu->r[14] = 0x001b83ccu; fn_001d06d4(cpu);
    }
L_001b83cc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_001b83d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b83d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b8408;
        }
    }
L_001b83d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b83dc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b83e0:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001b83e4:;
    {
        cpu->r[14] = 0x001b83e8u; fn_001d0700(cpu);
    }
L_001b83e8:;
    {
        cpu->r[1] = rd32(0x001b83f0u + + 0xecu);
    }
L_001b83ec:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_001b83f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b83f4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b83fcu, cpu->r[1], 0, 0);
    }
L_001b83f8:;
    {
        cpu->r[14] = 0x001b83fcu; imp_sprintf(cpu); /* sprintf */
    }
L_001b83fc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b8400:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001b8404:;
    {
        cpu->r[14] = 0x001b8408u; fn_001d06d4(cpu);
    }
L_001b8408:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001b840c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001b8410:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b8458;
        }
    }
L_001b8414:;
    {
        cpu->r[0] = rd32(0x001b841cu + + 0xc4u);
    }
L_001b8418:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001b841c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b8424u, cpu->r[0], 0, 0);
    }
L_001b8420:;
    {
        cpu->r[14] = 0x001b8424u; fn_001d0ac4(cpu);
    }
L_001b8424:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b8428:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001b842c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001b8430:;
    {
        cpu->r[14] = 0x001b8438u;
    }
L_001b8434:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b8438u)) return;
    }
L_001b8438:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_001b843c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8a4u);
    }
L_001b8440:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b8444:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001b8448:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b84bc;
        }
    }
L_001b844c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000acu, 0, 0);
    }
L_001b8450:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001b8454:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b8458u)) return;
    }
L_001b8458:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x3cu);
    }
L_001b845c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b8460:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001b8414;
        }
    }
L_001b8464:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b8468:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b846c:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001b8470:;
    {
        cpu->r[14] = 0x001b8474u; fn_001d0700(cpu);
    }
L_001b8474:;
    {
        cpu->r[1] = rd32(0x001b847cu + + 0x68u);
    }
L_001b8478:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b847c:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x3cu);
    }
L_001b8480:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b8488u, cpu->r[1], 0, 0);
    }
L_001b8484:;
    {
        cpu->r[14] = 0x001b8488u; imp_sprintf(cpu); /* sprintf */
    }
L_001b8488:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b848c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001b8490:;
    {
        cpu->r[14] = 0x001b8494u; fn_001d06d4(cpu);
    }
L_001b8494:;
    {
        goto L_001b8414;
    }
L_001b8498:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_001b849c:;
    {
        cpu->r[1] = 0x0000000fu;
    }
L_001b84a0:;
    {
        cpu->r[2] = (~0x00000063u);
    }
L_001b84a4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001b84a8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b84ac:;
    {
        cpu->r[14] = 0x001b84b4u;
    }
L_001b84b0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b84b4u)) return;
    }
L_001b84b4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001b84b8:;
    {
        goto L_001b8438;
    }
L_001b84bc:;
    {
        cpu->r[14] = 0x001b84c0u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001b84c0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[9] + (-cpu->r[0]);
        wr16(cpu->r[9], cpu->r[2]);
        cpu->r[9] = wb_tmp;
        }
    }
L_001b84c4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001b84c8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[12]);
        wr64(cpu->r[7], ((uint64_t)cpu->r[8] << 32) | cpu->r[7]);
        cpu->r[7] = wb_tmp;
        }
    }
L_001b84cc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[4]);
        uint64_t v = rd64(cpu->r[7]);
        cpu->r[7] = (uint32_t)v;
        cpu->r[8] = (uint32_t)(v >> 32);
        cpu->r[7] = wb_tmp;
        }
    }
L_001b84d0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[12], 3, 8u, &shc); cpu->r[8] = v;
        }
    }
L_001b84d4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 4, (cpu->r[13] & 0xffu), &shc); cpu->r[7] = v;
        }
    }
L_001b84d8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[8], 1, 26u, &shc); cpu->r[7] = v;
        }
    }
L_001b84dc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[4], 2, (cpu->r[13] & 0xffu), &shc); cpu->r[7] = v;
        }
    }
L_001b84e0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[4]);
        wr64(cpu->r[7], ((uint64_t)cpu->r[8] << 32) | cpu->r[7]);
        cpu->r[7] = wb_tmp;
        }
    }
L_001b84e4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[12]);
        wr64(cpu->r[7], ((uint64_t)cpu->r[9] << 32) | cpu->r[8]);
        cpu->r[7] = wb_tmp;
        }
    }
}

/* _ZN14GLXPlayerLogin6UpdateEv @ 001b84e8 (arm) */
void fn_001b84e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b84e8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001b84ec:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b84f0:;
    {
        cpu->r[14] = 0x001b84f4u; fn_001b7f38(cpu);
    }
L_001b84f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b84f8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_001b84fc:;
    {
        return fn_001b7650(cpu);
    }
}

/* _ZN14GLXPlayerLogin16clearProductInfoEv @ 001b8500 (arm) */
void fn_001b8500(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b8500:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001b8504:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001b8508:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x68u);
    }
L_001b850c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b8510:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b8520;
        }
    }
L_001b8514:;
    {
        cpu->r[14] = 0x001b8518u; fn_0018ba20(cpu);
    }
L_001b8518:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b851c:;
    {
        wr32(cpu->r[5] + + 0x68u, cpu->r[3]);
    }
L_001b8520:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x6cu);
    }
L_001b8524:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b8528:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b8538;
        }
    }
L_001b852c:;
    {
        cpu->r[14] = 0x001b8530u; fn_0018ba20(cpu);
    }
L_001b8530:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b8534:;
    {
        wr32(cpu->r[5] + + 0x6cu, cpu->r[3]);
    }
L_001b8538:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x70u);
    }
L_001b853c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001b8540:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b8598;
        }
    }
L_001b8544:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x64u);
    }
L_001b8548:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001b854c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001b8588;
        }
    }
L_001b8550:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001b8554:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_001b8558:;
    {
        cpu->r[3] = rd32(cpu->r[2] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001b855c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b8560:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b8574;
        }
    }
L_001b8564:;
    {
        cpu->r[14] = 0x001b8568u; fn_0018ba60(cpu);
    }
L_001b8568:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x70u);
    }
L_001b856c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x64u);
    }
L_001b8570:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[6]);
    }
L_001b8574:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001b8578:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_001b857c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001b8558;
        }
    }
L_001b8580:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001b8584:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b8590;
        }
    }
L_001b8588:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001b858c:;
    {
        cpu->r[14] = 0x001b8590u; fn_0018ba60(cpu);
    }
L_001b8590:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b8594:;
    {
        wr32(cpu->r[5] + + 0x70u, cpu->r[3]);
    }
L_001b8598:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b859c:;
    {
        wr32(cpu->r[5] + + 0x64u, cpu->r[3]);
    }
L_001b85a0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b85a4u)) return;
    }
}

/* _ZN14GLXPlayerLogin21processGetProductInfoEPc @ 001b85a4 (arm) */
void fn_001b85a4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b85a4:;
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
L_001b85a8:;
    {
        cpu->r[9] = rd32(0x001b85b0u + + 0x1acu);
    }
L_001b85ac:;
    {
        cpu->r[11] = rd32(0x001b85b4u + + 0x1acu);
    }
L_001b85b0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000224u, 1, 0);
    }
L_001b85b4:;
    {
        cpu->r[9] = add_flags(cpu, 0x001b85bcu, cpu->r[9], 0, 0);
    }
L_001b85b8:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001b85bc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001b85c0:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[11]);
    }
L_001b85c4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b85c8:;
    {
        wr32(cpu->r[13] + + 0x21cu, cpu->r[3]);
    }
L_001b85cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b873c;
        }
    }
L_001b85d0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001b85d4:;
    {
        cpu->r[14] = 0x001b85d8u; fn_001d0434(cpu);
    }
L_001b85d8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b85dc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001b873c;
        }
    }
L_001b85e0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b85e4:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001b85e8:;
    {
        cpu->r[14] = 0x001b85ecu; fn_001b8500(cpu);
    }
L_001b85ec:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x64u);
    }
L_001b85f0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001b85f4:;
    {
        wr32(cpu->r[5] + + 0x64u, cpu->r[3]);
    }
L_001b85f8:;
    {
        goto L_001b8614;
    }
L_001b85fc:;
    {
        cpu->r[3] = rd8(cpu->r[8] + cpu->r[4]);
    }
L_001b8600:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001b8604:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000007cu, 1, 1);
    }
L_001b8608:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[5] + + 0x64u);
        }
    }
L_001b860c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_001b8610:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[5] + + 0x64u, cpu->r[3]);
        }
    }
L_001b8614:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001b8618:;
    {
        cpu->r[14] = 0x001b861cu; fn_001d0434(cpu);
    }
L_001b861c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[0], 1, 1);
    }
L_001b8620:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001b85fc;
        }
    }
L_001b8624:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x64u);
    }
L_001b8628:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001b862c:;
    {
        cpu->r[14] = 0x001b8630u; imp__Znaj(cpu); /* _Znaj */
    }
L_001b8630:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x64u);
    }
L_001b8634:;
    {
        wr32(cpu->r[5] + + 0x6cu, cpu->r[0]);
    }
L_001b8638:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001b863c:;
    {
        cpu->r[14] = 0x001b8640u; imp__Znaj(cpu); /* _Znaj */
    }
L_001b8640:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x64u);
    }
L_001b8644:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b8648:;
    {
        wr32(cpu->r[5] + + 0x70u, cpu->r[0]);
    }
L_001b864c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001b873c;
        }
    }
L_001b8650:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001b8654:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001b8658:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x0000020cu, 0, 0);
    }
L_001b865c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b8660:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b8664:;
    {
        cpu->r[2] = 0x00000200u;
    }
L_001b8668:;
    {
        cpu->r[14] = 0x001b866cu; fn_001d0700(cpu);
    }
L_001b866c:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001b8670:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001b8674:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001b8678:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001b867c:;
    {
        cpu->r[14] = 0x001b8680u; fn_001d0148(cpu);
    }
L_001b8680:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b8684:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_001b8688:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b868c:;
    {
        cpu->r[14] = 0x001b8690u; fn_001d0700(cpu);
    }
L_001b8690:;
    {
        cpu->r[3] = 0x0000005eu;
    }
L_001b8694:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001b8698:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001b869c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b86a0:;
    {
        cpu->r[14] = 0x001b86a4u; fn_001d0148(cpu);
    }
L_001b86a4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b86a8:;
    {
        cpu->r[10] = rd32(cpu->r[5] + + 0x68u);
    }
L_001b86ac:;
    {
        cpu->r[14] = 0x001b86b0u; fn_001d06cc(cpu);
    }
L_001b86b0:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_001b86b4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b86b8:;
    {
        wr32(cpu->r[10] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[0]);
    }
L_001b86bc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b86c0:;
    {
        cpu->r[14] = 0x001b86c4u; fn_001d0700(cpu);
    }
L_001b86c4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001b86c8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001b86cc:;
    {
        cpu->r[3] = 0x0000005eu;
    }
L_001b86d0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b86d4:;
    {
        cpu->r[14] = 0x001b86d8u; fn_001d0148(cpu);
    }
L_001b86d8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x6cu);
    }
L_001b86dc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b86e0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001b86e4:;
    {
        cpu->r[14] = 0x001b86e8u; fn_001d06cc(cpu);
    }
L_001b86e8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001b86ec:;
    {
        cpu->r[10] = rd32(cpu->r[5] + + 0x70u);
    }
L_001b86f0:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[0]);
    }
L_001b86f4:;
    {
        cpu->r[0] = 0x00000100u;
    }
L_001b86f8:;
    {
        cpu->r[14] = 0x001b86fcu; imp__Znaj(cpu); /* _Znaj */
    }
L_001b86fc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x70u);
    }
L_001b8700:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b8704:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001b8708:;
    {
        wr32(cpu->r[10] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[0]);
    }
L_001b870c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001b8710:;
    {
        cpu->r[14] = 0x001b8714u; fn_001d0700(cpu);
    }
L_001b8714:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x70u);
    }
L_001b8718:;
    {
        cpu->r[3] = 0x0000005eu;
    }
L_001b871c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b8720:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001b8724:;
    {
        cpu->r[1] = rd32(cpu->r[1] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001b8728:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001b872c:;
    {
        cpu->r[14] = 0x001b8730u; fn_001d0148(cpu);
    }
L_001b8730:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x64u);
    }
L_001b8734:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_001b8738:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001b865c;
        }
    }
L_001b873c:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[11]);
    }
L_001b8740:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x21cu);
    }
L_001b8744:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b8748:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001b874c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b8758;
        }
    }
L_001b8750:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000224u, 0, 0);
    }
L_001b8754:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b8758u)) return;
    }
L_001b8758:;
    {
        cpu->r[14] = 0x001b875cu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001b875c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[9] & shifter(cpu->r[12], 1, (cpu->r[14] & 0xffu), &shc); cpu->r[1] = v;
        }
    }
L_001b8760:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN14GLXPlayerLogin15OnUpdateSuccessEi @ 001b8764 (arm) */
void fn_001b8764(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b8764:;
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
L_001b8768:;
    {
        cpu->r[4] = rd32(0x001b8770u + + 0x39cu);
    }
L_001b876c:;
    {
        cpu->r[5] = rd32(0x001b8774u + + 0x39cu);
    }
L_001b8770:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000800u, 1, 0);
    }
L_001b8774:;
    {
        cpu->r[4] = add_flags(cpu, 0x001b877cu, cpu->r[4], 0, 0);
    }
L_001b8778:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001b877c:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000000fu, 1, 1);
    }
L_001b8780:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001b8784:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001b8788:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001b878c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b8790:;
    {
        wr32(cpu->r[13] + + 0x804u, cpu->r[3]);
    }
L_001b8794:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b8874;
        }
    }
L_001b8798:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000011u, 1, 1);
    }
L_001b879c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b89a4;
        }
    }
L_001b87a0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000010u, 1, 1);
    }
L_001b87a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b89e0;
        }
    }
L_001b87a8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000053u, 1, 1);
    }
L_001b87ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b8a14;
        }
    }
L_001b87b0:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000005fu, 1, 1);
    }
L_001b87b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b8a2c;
        }
    }
L_001b87b8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000062u, 1, 1);
    }
L_001b87bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b87e4;
        }
    }
L_001b87c0:;
    {
        cpu->r[14] = 0x001b87c4u; fn_001b6b68(cpu);
    }
L_001b87c4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001b87c8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x804u);
    }
L_001b87cc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b87d0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001b87d4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b8b08;
        }
    }
L_001b87d8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001b87dc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001b87e0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b87e4u)) return;
    }
L_001b87e4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x24u);
    }
L_001b87e8:;
    {
        cpu->r[14] = 0x001b87ecu; fn_001d0434(cpu);
    }
L_001b87ec:;
    {
        cpu->r[14] = 0x001b87f0u; imp__Znaj(cpu); /* _Znaj */
    }
L_001b87f0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001b87f4:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x80u);
    }
L_001b87f8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b87fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b880c;
        }
    }
L_001b8800:;
    {
        cpu->r[14] = 0x001b8804u; fn_0018ba20(cpu);
    }
L_001b8804:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b8808:;
    {
        wr32(cpu->r[7] + + 0x80u, cpu->r[3]);
    }
L_001b880c:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x84u);
    }
L_001b8810:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b8814:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b8824;
        }
    }
L_001b8818:;
    {
        cpu->r[14] = 0x001b881cu; fn_0018ba20(cpu);
    }
L_001b881c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b8820:;
    {
        wr32(cpu->r[7] + + 0x84u, cpu->r[3]);
    }
L_001b8824:;
    {
        cpu->r[1] = rd32(0x001b882cu + + 0x2e8u);
    }
L_001b8828:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b882c:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b8834u, cpu->r[1], 0, 0);
    }
L_001b8830:;
    {
        cpu->r[14] = 0x001b8834u; fn_001b7110(cpu);
    }
L_001b8834:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b8838:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b8ae4;
        }
    }
L_001b883c:;
    {
        cpu->r[1] = rd32(0x001b8844u + + 0x2d4u);
    }
L_001b8840:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b8844:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b884cu, cpu->r[1], 0, 0);
    }
L_001b8848:;
    {
        cpu->r[14] = 0x001b884cu; fn_001b7110(cpu);
    }
L_001b884c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b8850:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b8ac8;
        }
    }
L_001b8854:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001b8858:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b8864;
        }
    }
L_001b885c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b8860:;
    {
        cpu->r[14] = 0x001b8864u; fn_0018ba20(cpu);
    }
L_001b8864:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b8868:;
    {
        cpu->r[1] = 0x00000062u;
    }
L_001b886c:;
    {
        cpu->r[14] = 0x001b8870u; fn_001b6b68(cpu);
    }
L_001b8870:;
    {
        goto L_001b87c4;
    }
L_001b8874:;
    {
        cpu->r[1] = rd32(0x001b887cu + + 0x2a0u);
    }
L_001b8878:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b8880u, cpu->r[1], 0, 0);
    }
L_001b887c:;
    {
        cpu->r[14] = 0x001b8880u; fn_001b7110(cpu);
    }
L_001b8880:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b8884:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b8a44;
        }
    }
L_001b8888:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001b888c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b8890:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000004u, 1, 0);
    }
L_001b8894:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001b8898:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b889c:;
    {
        cpu->r[14] = 0x001b88a0u; fn_001d0700(cpu);
    }
L_001b88a0:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0xcu);
    }
L_001b88a4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b88a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b88b8;
        }
    }
L_001b88ac:;
    {
        cpu->r[14] = 0x001b88b0u; fn_0018ba20(cpu);
    }
L_001b88b0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b88b4:;
    {
        wr32(cpu->r[7] + + 0xcu, cpu->r[3]);
    }
L_001b88b8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001b88bc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b88c0:;
    {
        cpu->r[14] = 0x001b88c4u; fn_001b6fec(cpu);
    }
L_001b88c4:;
    {
        cpu->r[14] = 0x001b88c8u; fn_001d0ce8(cpu);
    }
L_001b88c8:;
    {
        cpu->r[1] = rd32(0x001b88d0u + + 0x250u);
    }
L_001b88cc:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b88d4u, cpu->r[1], 0, 0);
    }
L_001b88d0:;
    {
        wr32(cpu->r[7] + + 0xcu, cpu->r[0]);
    }
L_001b88d4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b88d8:;
    {
        cpu->r[14] = 0x001b88dcu; fn_001b7110(cpu);
    }
L_001b88dc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b88e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b8afc;
        }
    }
L_001b88e4:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001b88e8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b88ec:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b88f0:;
    {
        cpu->r[14] = 0x001b88f4u; fn_001d0700(cpu);
    }
L_001b88f4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001b88f8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b88fc:;
    {
        cpu->r[14] = 0x001b8900u; fn_001b6fec(cpu);
    }
L_001b8900:;
    {
        cpu->r[14] = 0x001b8904u; fn_001d06cc(cpu);
    }
L_001b8904:;
    {
        cpu->r[1] = rd32(0x001b890cu + + 0x218u);
    }
L_001b8908:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b8910u, cpu->r[1], 0, 0);
    }
L_001b890c:;
    {
        wr32(cpu->r[7] + + 0x3cu, cpu->r[0]);
    }
L_001b8910:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b8914:;
    {
        cpu->r[14] = 0x001b8918u; fn_001b7110(cpu);
    }
L_001b8918:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b891c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b8ab0;
        }
    }
L_001b8920:;
    {
        cpu->r[1] = rd32(0x001b8928u + + 0x200u);
    }
L_001b8924:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b8928:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b8930u, cpu->r[1], 0, 0);
    }
L_001b892c:;
    {
        cpu->r[14] = 0x001b8930u; fn_001b7110(cpu);
    }
L_001b8930:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b8934:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b8a98;
        }
    }
L_001b8938:;
    {
        cpu->r[1] = rd32(0x001b8940u + + 0x1ecu);
    }
L_001b893c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b8940:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b8948u, cpu->r[1], 0, 0);
    }
L_001b8944:;
    {
        cpu->r[14] = 0x001b8948u; fn_001b7110(cpu);
    }
L_001b8948:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b894c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b8a80;
        }
    }
L_001b8950:;
    {
        cpu->r[1] = rd32(0x001b8958u + + 0x1d8u);
    }
L_001b8954:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b8958:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b8960u, cpu->r[1], 0, 0);
    }
L_001b895c:;
    {
        cpu->r[14] = 0x001b8960u; fn_001b7110(cpu);
    }
L_001b8960:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b8964:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b8a68;
        }
    }
L_001b8968:;
    {
        cpu->r[10] = rd32(cpu->r[7] + + 0x4u);
    }
L_001b896c:;
    {
        cpu->r[6] = 0x00000001u;
    }
L_001b8970:;
    {
        cpu->r[8] = rd32(cpu->r[7] + + 0x24u);
    }
L_001b8974:;
    {
        wr8(cpu->r[7] + + 0x40u, cpu->r[6]);
    }
L_001b8978:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_001b897c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001b8980:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0x8u);
    }
L_001b8984:;
    {
        cpu->r[14] = 0x001b8988u; fn_001d0434(cpu);
    }
L_001b8988:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001b898c:;
    {
        cpu->r[1] = 0x0000000fu;
    }
L_001b8990:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001b8994:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001b8998:;
    {
        cpu->r[14] = 0x001b899cu; guest_call(cpu, cpu->r[7]);
    }
L_001b899c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b89a0:;
    {
        goto L_001b87c4;
    }
L_001b89a4:;
    {
        cpu->r[9] = rd32(cpu->r[0] + + 0x4u);
    }
L_001b89a8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b89ac:;
    {
        cpu->r[10] = rd32(cpu->r[0] + + 0x24u);
    }
L_001b89b0:;
    {
        wr8(cpu->r[0] + + 0x40u, cpu->r[3]);
    }
L_001b89b4:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_001b89b8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001b89bc:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x8u);
    }
L_001b89c0:;
    {
        cpu->r[14] = 0x001b89c4u; fn_001d0434(cpu);
    }
L_001b89c4:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001b89c8:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001b89cc:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001b89d0:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001b89d4:;
    {
        cpu->r[14] = 0x001b89d8u; guest_call(cpu, cpu->r[6]);
    }
L_001b89d8:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001b89dc:;
    {
        goto L_001b87c4;
    }
L_001b89e0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001b89e4:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000004u, 1, 0);
    }
L_001b89e8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001b89ec:;
    {
        cpu->r[14] = 0x001b89f0u; fn_001b6fec(cpu);
    }
L_001b89f0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001b89f4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b89f8:;
    {
        cpu->r[14] = 0x001b89fcu; fn_001b6fec(cpu);
    }
L_001b89fc:;
    {
        cpu->r[14] = 0x001b8a00u; fn_001d06cc(cpu);
    }
L_001b8a00:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001b8a04:;
    {
        wr32(cpu->r[7] + + 0x3cu, cpu->r[0]);
    }
L_001b8a08:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b8a0c:;
    {
        cpu->r[14] = 0x001b8a10u; fn_001b6b68(cpu);
    }
L_001b8a10:;
    {
        goto L_001b87c4;
    }
L_001b8a14:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x24u);
    }
L_001b8a18:;
    {
        cpu->r[14] = 0x001b8a1cu; fn_001b8008(cpu);
    }
L_001b8a1c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b8a20:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001b8a24:;
    {
        cpu->r[14] = 0x001b8a28u; fn_001b6b68(cpu);
    }
L_001b8a28:;
    {
        goto L_001b87c4;
    }
L_001b8a2c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x24u);
    }
L_001b8a30:;
    {
        cpu->r[14] = 0x001b8a34u; fn_001b85a4(cpu);
    }
L_001b8a34:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b8a38:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001b8a3c:;
    {
        cpu->r[14] = 0x001b8a40u; fn_001b6b68(cpu);
    }
L_001b8a40:;
    {
        goto L_001b87c4;
    }
L_001b8a44:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x4u);
    }
L_001b8a48:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001b8a4c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001b8a50:;
    {
        cpu->r[2] = 0x00000028u;
    }
L_001b8a54:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b8a58:;
    {
        cpu->r[14] = 0x001b8a60u;
    }
L_001b8a5c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b8a60u)) return;
    }
L_001b8a60:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001b8a64:;
    {
        goto L_001b87c4;
    }
L_001b8a68:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001b8a6c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b8a70:;
    {
        cpu->r[14] = 0x001b8a74u; fn_001b6fec(cpu);
    }
L_001b8a74:;
    {
        cpu->r[14] = 0x001b8a78u; fn_001d0ce8(cpu);
    }
L_001b8a78:;
    {
        wr32(cpu->r[7] + + 0x80u, cpu->r[0]);
    }
L_001b8a7c:;
    {
        goto L_001b8968;
    }
L_001b8a80:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001b8a84:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b8a88:;
    {
        cpu->r[14] = 0x001b8a8cu; fn_001b6fec(cpu);
    }
L_001b8a8c:;
    {
        cpu->r[14] = 0x001b8a90u; fn_001d0ce8(cpu);
    }
L_001b8a90:;
    {
        wr32(cpu->r[7] + + 0x7cu, cpu->r[0]);
    }
L_001b8a94:;
    {
        goto L_001b8950;
    }
L_001b8a98:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001b8a9c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b8aa0:;
    {
        cpu->r[14] = 0x001b8aa4u; fn_001b6fec(cpu);
    }
L_001b8aa4:;
    {
        cpu->r[14] = 0x001b8aa8u; fn_001d0ce8(cpu);
    }
L_001b8aa8:;
    {
        wr32(cpu->r[7] + + 0x74u, cpu->r[0]);
    }
L_001b8aac:;
    {
        goto L_001b8938;
    }
L_001b8ab0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001b8ab4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b8ab8:;
    {
        cpu->r[14] = 0x001b8abcu; fn_001b6fec(cpu);
    }
L_001b8abc:;
    {
        cpu->r[14] = 0x001b8ac0u; fn_001d0ce8(cpu);
    }
L_001b8ac0:;
    {
        wr32(cpu->r[7] + + 0x78u, cpu->r[0]);
    }
L_001b8ac4:;
    {
        goto L_001b8920;
    }
L_001b8ac8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001b8acc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b8ad0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000004u, 1, 0);
    }
L_001b8ad4:;
    {
        cpu->r[14] = 0x001b8ad8u; fn_001b6fec(cpu);
    }
L_001b8ad8:;
    {
        cpu->r[14] = 0x001b8adcu; fn_001d0ce8(cpu);
    }
L_001b8adc:;
    {
        wr32(cpu->r[7] + + 0x84u, cpu->r[0]);
    }
L_001b8ae0:;
    {
        goto L_001b8854;
    }
L_001b8ae4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001b8ae8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b8aec:;
    {
        cpu->r[14] = 0x001b8af0u; fn_001b6fec(cpu);
    }
L_001b8af0:;
    {
        cpu->r[14] = 0x001b8af4u; fn_001d0ce8(cpu);
    }
L_001b8af4:;
    {
        wr32(cpu->r[7] + + 0x80u, cpu->r[0]);
    }
L_001b8af8:;
    {
        goto L_001b883c;
    }
L_001b8afc:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x4u);
    }
L_001b8b00:;
    {
        cpu->r[1] = 0x0000000fu;
    }
L_001b8b04:;
    {
        goto L_001b8a4c;
    }
L_001b8b08:;
    {
        cpu->r[14] = 0x001b8b0cu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001b8b0c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[12] * cpu->r[12]; cpu->r[9] = v;
        }
    }
L_001b8b10:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001b8b14:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[5] & shifter(cpu->r[8], 3, 6u, &shc); cpu->r[6] = v;
        }
    }
L_001b8b18:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[5] & shifter(cpu->r[12], 2, (cpu->r[7] & 0xffu), &shc); cpu->r[2] = v;
        }
    }
L_001b8b1c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[4], 1, (cpu->r[11] & 0xffu), &shc); cpu->r[9] = v;
        }
    }
L_001b8b20:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] * cpu->r[6]; cpu->r[5] = v;
        }
    }
L_001b8b24:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[4], 2, (cpu->r[8] & 0xffu), &shc); cpu->r[7] = v;
        }
    }
L_001b8b28:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[5] & shifter(cpu->r[12], 4, (cpu->r[0] & 0xffu), &shc); cpu->r[9] = v;
        }
    }
L_001b8b2c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[8], 4, 21u, &shc); cpu->r[6] = v;
        }
    }
L_001b8b30:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[8], 1, 15u, &shc); cpu->r[7] = v;
        }
    }
}

/* _ZN14GLXPlayerLogin6CancelEv @ 001b8b34 (arm) */
void fn_001b8b34(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b8b34:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001b8b38:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b8b3c:;
    {
        cpu->r[14] = 0x001b8b40u; fn_001b7610(cpu);
    }
L_001b8b40:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b8b44:;
    {
        wr8(cpu->r[4] + + 0x40u, cpu->r[3]);
    }
L_001b8b48:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001b8b4cu)) return;
    }
}

/* _ZN14GLXPlayerLoginD1Ev @ 001b8b4c (arm) */
void fn_001b8b4c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b8b4c:;
    {
        cpu->r[3] = rd32(0x001b8b54u + + 0x138u);
    }
L_001b8b50:;
    {
        cpu->r[2] = rd32(0x001b8b58u + + 0x138u);
    }
L_001b8b54:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001b8b58:;
    {
        cpu->r[3] = add_flags(cpu, 0x001b8b60u, cpu->r[3], 0, 0);
    }
L_001b8b5c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b8b60:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x48u);
    }
L_001b8b64:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001b8b68:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001b8b6c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_001b8b70:;
    {
        wr8(cpu->r[4] + + 0x40u, cpu->r[5]);
    }
L_001b8b74:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001b8b78:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[5]);
    }
L_001b8b7c:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001b8b80:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[5]);
    }
L_001b8b84:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b8b90;
        }
    }
L_001b8b88:;
    {
        cpu->r[14] = 0x001b8b8cu; fn_0018ba20(cpu);
    }
L_001b8b8c:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[5]);
    }
L_001b8b90:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x50u);
    }
L_001b8b94:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b8b98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b8ba8;
        }
    }
L_001b8b9c:;
    {
        cpu->r[14] = 0x001b8ba0u; fn_0018ba20(cpu);
    }
L_001b8ba0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b8ba4:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[3]);
    }
L_001b8ba8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x58u);
    }
L_001b8bac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b8bb0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b8bc0;
        }
    }
L_001b8bb4:;
    {
        cpu->r[14] = 0x001b8bb8u; fn_0018ba20(cpu);
    }
L_001b8bb8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b8bbc:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[3]);
    }
L_001b8bc0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x5cu);
    }
L_001b8bc4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b8bc8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b8bd8;
        }
    }
L_001b8bcc:;
    {
        cpu->r[14] = 0x001b8bd0u; fn_0018ba20(cpu);
    }
L_001b8bd0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b8bd4:;
    {
        wr32(cpu->r[4] + + 0x5cu, cpu->r[3]);
    }
L_001b8bd8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x60u);
    }
L_001b8bdc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b8be0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b8bf0;
        }
    }
L_001b8be4:;
    {
        cpu->r[14] = 0x001b8be8u; fn_0018ba20(cpu);
    }
L_001b8be8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b8bec:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[3]);
    }
L_001b8bf0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x78u);
    }
L_001b8bf4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b8bf8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b8c08;
        }
    }
L_001b8bfc:;
    {
        cpu->r[14] = 0x001b8c00u; fn_0018ba20(cpu);
    }
L_001b8c00:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b8c04:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_001b8c08:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x74u);
    }
L_001b8c0c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b8c10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b8c20;
        }
    }
L_001b8c14:;
    {
        cpu->r[14] = 0x001b8c18u; fn_0018ba20(cpu);
    }
L_001b8c18:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b8c1c:;
    {
        wr32(cpu->r[4] + + 0x74u, cpu->r[3]);
    }
L_001b8c20:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x7cu);
    }
L_001b8c24:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b8c28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b8c38;
        }
    }
L_001b8c2c:;
    {
        cpu->r[14] = 0x001b8c30u; fn_0018ba20(cpu);
    }
L_001b8c30:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b8c34:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[3]);
    }
L_001b8c38:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x80u);
    }
L_001b8c3c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b8c40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b8c50;
        }
    }
L_001b8c44:;
    {
        cpu->r[14] = 0x001b8c48u; fn_0018ba20(cpu);
    }
L_001b8c48:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b8c4c:;
    {
        wr32(cpu->r[4] + + 0x80u, cpu->r[3]);
    }
L_001b8c50:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x84u);
    }
L_001b8c54:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b8c58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b8c68;
        }
    }
L_001b8c5c:;
    {
        cpu->r[14] = 0x001b8c60u; fn_0018ba20(cpu);
    }
L_001b8c60:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b8c64:;
    {
        wr32(cpu->r[4] + + 0x84u, cpu->r[3]);
    }
L_001b8c68:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b8c6c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b8c70:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[3]);
    }
L_001b8c74:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
    }
L_001b8c78:;
    {
        cpu->r[14] = 0x001b8c7cu; fn_001b8500(cpu);
    }
L_001b8c7c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b8c80:;
    {
        cpu->r[14] = 0x001b8c84u; fn_001b7820(cpu);
    }
L_001b8c84:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b8c88:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b8c8cu)) return;
    }
}

/* _ZN14GLXPlayerLoginD0Ev @ 001b8c94 (arm) */
void fn_001b8c94(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b8c94:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001b8c98:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b8c9c:;
    {
        cpu->r[14] = 0x001b8ca0u; fn_001b8b4c(cpu);
    }
L_001b8ca0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b8ca4:;
    {
        cpu->r[14] = 0x001b8ca8u; fn_0018ba20(cpu);
    }
L_001b8ca8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b8cac:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001b8cb0u)) return;
    }
}

/* _ZN14GLXPlayerLoginD2Ev @ 001b8cb0 (arm) */
void fn_001b8cb0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b8cb0:;
    {
        cpu->r[3] = rd32(0x001b8cb8u + + 0x138u);
    }
L_001b8cb4:;
    {
        cpu->r[2] = rd32(0x001b8cbcu + + 0x138u);
    }
L_001b8cb8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001b8cbc:;
    {
        cpu->r[3] = add_flags(cpu, 0x001b8cc4u, cpu->r[3], 0, 0);
    }
L_001b8cc0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b8cc4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x48u);
    }
L_001b8cc8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001b8ccc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001b8cd0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_001b8cd4:;
    {
        wr8(cpu->r[4] + + 0x40u, cpu->r[5]);
    }
L_001b8cd8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001b8cdc:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[5]);
    }
L_001b8ce0:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001b8ce4:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[5]);
    }
L_001b8ce8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b8cf4;
        }
    }
L_001b8cec:;
    {
        cpu->r[14] = 0x001b8cf0u; fn_0018ba20(cpu);
    }
L_001b8cf0:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[5]);
    }
L_001b8cf4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x50u);
    }
L_001b8cf8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b8cfc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b8d0c;
        }
    }
L_001b8d00:;
    {
        cpu->r[14] = 0x001b8d04u; fn_0018ba20(cpu);
    }
L_001b8d04:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b8d08:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[3]);
    }
L_001b8d0c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x58u);
    }
L_001b8d10:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b8d14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b8d24;
        }
    }
L_001b8d18:;
    {
        cpu->r[14] = 0x001b8d1cu; fn_0018ba20(cpu);
    }
L_001b8d1c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b8d20:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[3]);
    }
L_001b8d24:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x5cu);
    }
L_001b8d28:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b8d2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b8d3c;
        }
    }
L_001b8d30:;
    {
        cpu->r[14] = 0x001b8d34u; fn_0018ba20(cpu);
    }
L_001b8d34:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b8d38:;
    {
        wr32(cpu->r[4] + + 0x5cu, cpu->r[3]);
    }
L_001b8d3c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x60u);
    }
L_001b8d40:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b8d44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b8d54;
        }
    }
L_001b8d48:;
    {
        cpu->r[14] = 0x001b8d4cu; fn_0018ba20(cpu);
    }
L_001b8d4c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b8d50:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[3]);
    }
L_001b8d54:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x78u);
    }
L_001b8d58:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b8d5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b8d6c;
        }
    }
L_001b8d60:;
    {
        cpu->r[14] = 0x001b8d64u; fn_0018ba20(cpu);
    }
L_001b8d64:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b8d68:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_001b8d6c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x74u);
    }
L_001b8d70:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b8d74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b8d84;
        }
    }
L_001b8d78:;
    {
        cpu->r[14] = 0x001b8d7cu; fn_0018ba20(cpu);
    }
L_001b8d7c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b8d80:;
    {
        wr32(cpu->r[4] + + 0x74u, cpu->r[3]);
    }
L_001b8d84:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x7cu);
    }
L_001b8d88:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b8d8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b8d9c;
        }
    }
L_001b8d90:;
    {
        cpu->r[14] = 0x001b8d94u; fn_0018ba20(cpu);
    }
L_001b8d94:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b8d98:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[3]);
    }
L_001b8d9c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x80u);
    }
L_001b8da0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b8da4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b8db4;
        }
    }
L_001b8da8:;
    {
        cpu->r[14] = 0x001b8dacu; fn_0018ba20(cpu);
    }
L_001b8dac:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b8db0:;
    {
        wr32(cpu->r[4] + + 0x80u, cpu->r[3]);
    }
L_001b8db4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x84u);
    }
L_001b8db8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b8dbc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b8dcc;
        }
    }
L_001b8dc0:;
    {
        cpu->r[14] = 0x001b8dc4u; fn_0018ba20(cpu);
    }
L_001b8dc4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b8dc8:;
    {
        wr32(cpu->r[4] + + 0x84u, cpu->r[3]);
    }
L_001b8dcc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b8dd0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b8dd4:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[3]);
    }
L_001b8dd8:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
    }
L_001b8ddc:;
    {
        cpu->r[14] = 0x001b8de0u; fn_001b8500(cpu);
    }
L_001b8de0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b8de4:;
    {
        cpu->r[14] = 0x001b8de8u; fn_001b7820(cpu);
    }
L_001b8de8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b8dec:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b8df0u)) return;
    }
}

/* _ZN14GLXPlayerLoginC1Ev @ 001b8df8 (arm) */
void fn_001b8df8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b8df8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001b8dfc:;
    {
        cpu->r[5] = rd32(0x001b8e04u + + 0x98u);
    }
L_001b8e00:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b8e04:;
    {
        cpu->r[14] = 0x001b8e08u; fn_001b7954(cpu);
    }
L_001b8e08:;
    {
        cpu->r[3] = rd32(0x001b8e10u + + 0x90u);
    }
L_001b8e0c:;
    {
        cpu->r[5] = add_flags(cpu, 0x001b8e14u, cpu->r[5], 0, 0);
    }
L_001b8e10:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b8e14:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001b8e18:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001b8e1c:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001b8e20:;
    {
        cpu->r[14] = 0x001b8e24u; fn_001b6ba4(cpu);
    }
L_001b8e24:;
    {
        cpu->r[0] = 0x00000428u;
    }
L_001b8e28:;
    {
        cpu->r[14] = 0x001b8e2cu; fn_0018ba6c(cpu);
    }
L_001b8e2c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_001b8e30:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x10u);
    }
L_001b8e34:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x18u);
    }
L_001b8e38:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001b8e3c:;
    {
        cpu->r[14] = 0x001b8e40u; fn_001b3dec(cpu);
    }
L_001b8e40:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b8e44:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[5]);
    }
L_001b8e48:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b8e4c:;
    {
        wr32(cpu->r[4] + + 0x84u, cpu->r[3]);
    }
L_001b8e50:;
    {
        wr8(cpu->r[4] + + 0x40u, cpu->r[3]);
    }
L_001b8e54:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[3]);
    }
L_001b8e58:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[3]);
    }
L_001b8e5c:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[3]);
    }
L_001b8e60:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
    }
L_001b8e64:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[3]);
    }
L_001b8e68:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[3]);
    }
L_001b8e6c:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[3]);
    }
L_001b8e70:;
    {
        wr32(cpu->r[4] + + 0x5cu, cpu->r[3]);
    }
L_001b8e74:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[3]);
    }
L_001b8e78:;
    {
        wr32(cpu->r[4] + + 0x68u, cpu->r[3]);
    }
L_001b8e7c:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[3]);
    }
L_001b8e80:;
    {
        wr32(cpu->r[4] + + 0x70u, cpu->r[3]);
    }
L_001b8e84:;
    {
        wr32(cpu->r[4] + + 0x64u, cpu->r[3]);
    }
L_001b8e88:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_001b8e8c:;
    {
        wr32(cpu->r[4] + + 0x74u, cpu->r[3]);
    }
L_001b8e90:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[3]);
    }
L_001b8e94:;
    {
        wr32(cpu->r[4] + + 0x80u, cpu->r[3]);
    }
L_001b8e98:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b8e9cu)) return;
    }
}

/* _ZN14GLXPlayerLoginC2Ev @ 001b8ea4 (arm) */
void fn_001b8ea4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b8ea4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001b8ea8:;
    {
        cpu->r[5] = rd32(0x001b8eb0u + + 0x98u);
    }
L_001b8eac:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b8eb0:;
    {
        cpu->r[14] = 0x001b8eb4u; fn_001b7954(cpu);
    }
L_001b8eb4:;
    {
        cpu->r[3] = rd32(0x001b8ebcu + + 0x90u);
    }
L_001b8eb8:;
    {
        cpu->r[5] = add_flags(cpu, 0x001b8ec0u, cpu->r[5], 0, 0);
    }
L_001b8ebc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b8ec0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001b8ec4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001b8ec8:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001b8ecc:;
    {
        cpu->r[14] = 0x001b8ed0u; fn_001b6ba4(cpu);
    }
L_001b8ed0:;
    {
        cpu->r[0] = 0x00000428u;
    }
L_001b8ed4:;
    {
        cpu->r[14] = 0x001b8ed8u; fn_0018ba6c(cpu);
    }
L_001b8ed8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_001b8edc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x10u);
    }
L_001b8ee0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x18u);
    }
L_001b8ee4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001b8ee8:;
    {
        cpu->r[14] = 0x001b8eecu; fn_001b3dec(cpu);
    }
L_001b8eec:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b8ef0:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[5]);
    }
L_001b8ef4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b8ef8:;
    {
        wr32(cpu->r[4] + + 0x84u, cpu->r[3]);
    }
L_001b8efc:;
    {
        wr8(cpu->r[4] + + 0x40u, cpu->r[3]);
    }
L_001b8f00:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[3]);
    }
L_001b8f04:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[3]);
    }
L_001b8f08:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[3]);
    }
L_001b8f0c:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
    }
L_001b8f10:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[3]);
    }
L_001b8f14:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[3]);
    }
L_001b8f18:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[3]);
    }
L_001b8f1c:;
    {
        wr32(cpu->r[4] + + 0x5cu, cpu->r[3]);
    }
L_001b8f20:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[3]);
    }
L_001b8f24:;
    {
        wr32(cpu->r[4] + + 0x68u, cpu->r[3]);
    }
L_001b8f28:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[3]);
    }
L_001b8f2c:;
    {
        wr32(cpu->r[4] + + 0x70u, cpu->r[3]);
    }
L_001b8f30:;
    {
        wr32(cpu->r[4] + + 0x64u, cpu->r[3]);
    }
L_001b8f34:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[3]);
    }
L_001b8f38:;
    {
        wr32(cpu->r[4] + + 0x74u, cpu->r[3]);
    }
L_001b8f3c:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[3]);
    }
L_001b8f40:;
    {
        wr32(cpu->r[4] + + 0x80u, cpu->r[3]);
    }
L_001b8f44:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b8f48u)) return;
    }
}

/* _ZN16GLXPlayerYoutube6UpdateEv @ 001b8f50 (arm) */
void fn_001b8f50(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b8f50:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x2cu);
    }
L_001b8f54:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001b8f58:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b8f5c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b8f60:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001b8f64u)) return;
        }
    }
L_001b8f64:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x20u);
    }
L_001b8f68:;
    {
        cpu->r[14] = 0x001b8f6cu; fn_001b3920(cpu);
    }
L_001b8f6c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x20u);
    }
L_001b8f70:;
    {
        cpu->r[14] = 0x001b8f74u; fn_001b393c(cpu);
    }
L_001b8f74:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b8f78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b8fd4;
        }
    }
L_001b8f7c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
    }
L_001b8f80:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x424u);
    }
L_001b8f84:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b8f88:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001b8f8cu)) return;
        }
    }
L_001b8f8c:;
    {
        cpu->r[14] = 0x001b8f90u; fn_001d05bc(cpu);
    }
L_001b8f90:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x34u);
    }
L_001b8f94:;
    {
        cpu->r[3] = 0x000027c0u;
    }
L_001b8f98:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0009u << 16);
    }
L_001b8f9c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_001b8fa0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001b8fa4:;
    {
        if (cond_test(cpu, 14)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001b8fa8u)) return;
        }
    }
L_001b8fa8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b8fac:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001b8fb0:;
    {
        cpu->r[14] = 0x001b8fb8u;
    }
L_001b8fb4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b8fb8u)) return;
    }
L_001b8fb8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001b8fbc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x38u);
    }
L_001b8fc0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001b8fc4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b8fc8:;
    {
        cpu->r[14] = 0x001b8fd0u;
    }
L_001b8fcc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b8fd0u)) return;
    }
L_001b8fd0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001b8fd4u)) return;
    }
L_001b8fd4:;
    {
        wr8(cpu->r[4] + + 0x2cu, cpu->r[0]);
    }
L_001b8fd8:;
    {
        cpu->r[0] = rd32(0x001b8fe0u + + 0x40u);
    }
L_001b8fdc:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b8fe4u, cpu->r[0], 0, 0);
    }
L_001b8fe0:;
    {
        cpu->r[14] = 0x001b8fe4u; fn_001d0ac4(cpu);
    }
L_001b8fe4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x20u);
    }
L_001b8fe8:;
    {
        cpu->r[14] = 0x001b8fecu; fn_001b3958(cpu);
    }
L_001b8fec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b8ff0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b9008;
        }
    }
L_001b8ff4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b8ff8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001b8ffc:;
    {
        cpu->r[14] = 0x001b9004u;
    }
L_001b9000:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b9004u)) return;
    }
L_001b9004:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001b9008u)) return;
    }
L_001b9008:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001b900c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001b9010:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b9014:;
    {
        cpu->r[14] = 0x001b901cu;
    }
L_001b9018:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b901cu)) return;
    }
L_001b901c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001b9020u)) return;
    }
}

/* _ZN16GLXPlayerYoutube19processAddVideoInfoEPc @ 001b9024 (arm) */
void fn_001b9024(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b9024:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001b9028:;
    {
        cpu->r[4] = rd32(0x001b9030u + + 0xdcu);
    }
L_001b902c:;
    {
        cpu->r[5] = rd32(0x001b9034u + + 0xdcu);
    }
L_001b9030:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001b9034:;
    {
        cpu->r[4] = add_flags(cpu, 0x001b903cu, cpu->r[4], 0, 0);
    }
L_001b9038:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x3cu);
    }
L_001b903c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000028u, 1, 0);
    }
L_001b9040:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001b9044:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001b9048:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b904c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b9050:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_001b9054:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b9064;
        }
    }
L_001b9058:;
    {
        cpu->r[14] = 0x001b905cu; fn_0018ba20(cpu);
    }
L_001b905c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b9060:;
    {
        wr32(cpu->r[7] + + 0x3cu, cpu->r[3]);
    }
L_001b9064:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001b9068:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b90bc;
        }
    }
L_001b906c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b9070:;
    {
        cpu->r[14] = 0x001b9074u; fn_001d0434(cpu);
    }
L_001b9074:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b9078:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001b90bc;
        }
    }
L_001b907c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001b9080:;
    {
        cpu->r[2] = 0x00000020u;
    }
L_001b9084:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001b9088:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b908c:;
    {
        cpu->r[14] = 0x001b9090u; fn_001d0700(cpu);
    }
L_001b9090:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001b9094:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001b9098:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001b909c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b90a0:;
    {
        cpu->r[14] = 0x001b90a4u; fn_001d0148(cpu);
    }
L_001b90a4:;
    {
        cpu->r[1] = rd32(0x001b90acu + + 0x68u);
    }
L_001b90a8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001b90ac:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b90b4u, cpu->r[1], 0, 0);
    }
L_001b90b0:;
    {
        cpu->r[14] = 0x001b90b4u; fn_001d06e8(cpu);
    }
L_001b90b4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b90b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b90d8;
        }
    }
L_001b90bc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001b90c0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_001b90c4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b90c8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001b90cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b9108;
        }
    }
L_001b90d0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_001b90d4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b90d8u)) return;
    }
L_001b90d8:;
    {
        cpu->r[2] = 0x00000020u;
    }
L_001b90dc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001b90e0:;
    {
        cpu->r[14] = 0x001b90e4u; fn_001d0700(cpu);
    }
L_001b90e4:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001b90e8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001b90ec:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001b90f0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b90f4:;
    {
        cpu->r[14] = 0x001b90f8u; fn_001d0148(cpu);
    }
L_001b90f8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001b90fc:;
    {
        cpu->r[14] = 0x001b9100u; fn_001d0ce8(cpu);
    }
L_001b9100:;
    {
        wr32(cpu->r[7] + + 0x3cu, cpu->r[0]);
    }
L_001b9104:;
    {
        goto L_001b90bc;
    }
L_001b9108:;
    {
        cpu->r[14] = 0x001b910cu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001b910c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[9] + (-cpu->r[12]);
        uint64_t v = rd64(cpu->r[9]);
        cpu->r[1] = (uint32_t)v;
        cpu->r[2] = (uint32_t)(v >> 32);
        cpu->r[9] = wb_tmp;
        }
    }
L_001b9110:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001b9114:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[8], 4, (cpu->r[0] & 0xffu), &shc); cpu->r[7] = v;
        }
    }
}

/* _ZN16GLXPlayerYoutube15OnUpdateSuccessEi @ 001b9118 (arm) */
void fn_001b9118(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b9118:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000069u, 1, 1);
    }
L_001b911c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001b9120:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001b9124:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001b9128:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b9134;
        }
    }
L_001b912c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x24u);
    }
L_001b9130:;
    {
        cpu->r[14] = 0x001b9134u; fn_001b9024(cpu);
    }
L_001b9134:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b9138:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001b913c:;
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
L_001b9140:;
    {
        return fn_001b6b68(cpu);
    }
}

/* _ZN16GLXPlayerYoutube16sendAddVideoDataEPcRi @ 001b9144 (arm) */
void fn_001b9144(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b9144:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_001b9148:;
    {
        cpu->r[4] = rd32(0x001b9150u + + 0xd4u);
    }
L_001b914c:;
    {
        cpu->r[5] = rd32(0x001b9154u + + 0xd4u);
    }
L_001b9150:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001b9154:;
    {
        cpu->r[4] = add_flags(cpu, 0x001b915cu, cpu->r[4], 0, 0);
    }
L_001b9158:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000004u, 1, 0);
    }
L_001b915c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001b9160:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001b9164:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001b9168:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b916c:;
    {
        wr32(cpu->r[13] + + 0x80cu, cpu->r[3]);
    }
L_001b9170:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b91e0;
        }
    }
L_001b9174:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_001b9178:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b917c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b91e0;
        }
    }
L_001b9180:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x3cu);
    }
L_001b9184:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b9188:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b91e0;
        }
    }
L_001b918c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001b9190:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b9194:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000004u, 1, 0);
    }
L_001b9198:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001b919c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b91a0:;
    {
        cpu->r[14] = 0x001b91a4u; fn_001d0700(cpu);
    }
L_001b91a4:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x3cu);
    }
L_001b91a8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x8u);
    }
L_001b91ac:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b91b0:;
    {
        cpu->r[12] = rd32(cpu->r[7] + + 0xcu);
    }
L_001b91b4:;
    {
        cpu->r[2] = 0x0000006au;
    }
L_001b91b8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001b91bc:;
    {
        cpu->r[1] = rd32(0x001b91c4u + + 0x68u);
    }
L_001b91c0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001b91c4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b91ccu, cpu->r[1], 0, 0);
    }
L_001b91c8:;
    {
        cpu->r[14] = 0x001b91ccu; imp_sprintf(cpu); /* sprintf */
    }
L_001b91cc:;
    {
        cpu->r[0] = rd32(0x001b91d4u + + 0x5cu);
    }
L_001b91d0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001b91d4:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b91dcu, cpu->r[0], 0, 0);
    }
L_001b91d8:;
    {
        cpu->r[14] = 0x001b91dcu; fn_001d0ac4(cpu);
    }
L_001b91dc:;
    {
        goto L_001b91fc;
    }
L_001b91e0:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x4u);
    }
L_001b91e4:;
    {
        cpu->r[1] = 0x0000006au;
    }
L_001b91e8:;
    {
        cpu->r[2] = (~0x00000063u);
    }
L_001b91ec:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001b91f0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b91f4:;
    {
        cpu->r[14] = 0x001b91fcu;
    }
L_001b91f8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b91fcu)) return;
    }
L_001b91fc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001b9200:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001b9204:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x80cu);
    }
L_001b9208:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b920c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001b9210:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b9220;
        }
    }
L_001b9214:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001b9218:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001b921c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b9220u)) return;
    }
L_001b9220:;
    {
        cpu->r[14] = 0x001b9224u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001b9224:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[9] + (-cpu->r[12]);
        wr16(cpu->r[9], cpu->r[1]);
        cpu->r[9] = wb_tmp;
        }
    }
L_001b9228:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001b922c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[4], 4, 30u, &shc); cpu->r[6] = v;
        }
    }
L_001b9230:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[12], 4, 30u, &shc); cpu->r[6] = v;
        }
    }
}

/* _ZN16GLXPlayerYoutube16sendAddVideoInfoEPcS0_S0_S0_b @ 001b9234 (arm) */
void fn_001b9234(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b9234:;
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
L_001b9238:;
    {
        cpu->r[4] = rd32(0x001b9240u + + 0x104u);
    }
L_001b923c:;
    {
        cpu->r[5] = rd32(0x001b9244u + + 0x104u);
    }
L_001b9240:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_001b9244:;
    {
        cpu->r[4] = add_flags(cpu, 0x001b924cu, cpu->r[4], 0, 0);
    }
L_001b9248:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000820u, 1, 0);
    }
L_001b924c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001b9250:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001b9254:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
        }
    }
L_001b9258:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001b925c:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_001b9260:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001b9264:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001b9268:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x850u);
    }
L_001b926c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b9270:;
    {
        cpu->r[12] = rd8(cpu->r[13] + + 0x854u);
    }
L_001b9274:;
    {
        wr32(cpu->r[13] + + 0x824u, cpu->r[3]);
    }
L_001b9278:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b9290;
        }
    }
L_001b927c:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001b9280:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
        }
    }
L_001b9284:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_001b9288:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_001b928c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b92d0;
        }
    }
L_001b9290:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_001b9294:;
    {
        cpu->r[1] = 0x00000069u;
    }
L_001b9298:;
    {
        cpu->r[2] = (~0x00000063u);
    }
L_001b929c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001b92a0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b92a4:;
    {
        cpu->r[14] = 0x001b92acu;
    }
L_001b92a8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b92acu)) return;
    }
L_001b92ac:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001b92b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001b92b4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x824u);
    }
L_001b92b8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b92bc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001b92c0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b9340;
        }
    }
L_001b92c4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_001b92c8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001b92cc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b92d0u)) return;
    }
L_001b92d0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_001b92d4:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001b92d8:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], 0x00000004u, 1, 0);
    }
L_001b92dc:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_001b92e0:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001b92e4:;
    {
        cpu->r[14] = 0x001b92e8u; fn_001d0700(cpu);
    }
L_001b92e8:;
    {
        cpu->r[14] = rd32(cpu->r[6] + + 0xcu);
    }
L_001b92ec:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001b92f0:;
    {
        cpu->r[2] = 0x00000069u;
    }
L_001b92f4:;
    {
        cpu->r[1] = rd32(0x001b92fcu + + 0x50u);
    }
L_001b92f8:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001b92fc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_001b9300:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b9308u, cpu->r[1], 0, 0);
    }
L_001b9304:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_001b9308:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_001b930c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[7]);
        wr32(ea + 4u, cpu->r[8]);
        wr32(ea + 8u, cpu->r[10]);
    }
L_001b9310:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[9]);
    }
L_001b9314:;
    {
        cpu->r[14] = 0x001b9318u; imp_sprintf(cpu); /* sprintf */
    }
L_001b9318:;
    {
        cpu->r[0] = rd32(0x001b9320u + + 0x30u);
    }
L_001b931c:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001b9320:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b9328u, cpu->r[0], 0, 0);
    }
L_001b9324:;
    {
        cpu->r[14] = 0x001b9328u; fn_001d0ac4(cpu);
    }
L_001b9328:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b932c:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001b9330:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001b9334:;
    {
        cpu->r[14] = 0x001b933cu;
    }
L_001b9338:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b933cu)) return;
    }
L_001b933c:;
    {
        goto L_001b92b0;
    }
L_001b9340:;
    {
        cpu->r[14] = 0x001b9344u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001b9344:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[9] & shifter(cpu->r[12], 1, 3u, &shc); cpu->r[1] = v;
        }
    }
L_001b9348:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001b934c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 4, (cpu->r[14] & 0xffu), &shc); cpu->r[6] = v;
        }
    }
L_001b9350:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[12], 4, (cpu->r[14] & 0xffu), &shc); cpu->r[6] = v;
        }
    }
}

/* _ZN16GLXPlayerYoutube29sendCheckReplayVideoAvailableEv @ 001b9354 (arm) */
void fn_001b9354(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b9354:;
    {
        cpu->r[3] = rd32(0x001b935cu + + 0x94u);
    }
L_001b9358:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b935c:;
    {
        cpu->r[2] = rd32(0x001b9364u + + 0x90u);
    }
L_001b9360:;
    {
        cpu->r[3] = add_flags(cpu, 0x001b9368u, cpu->r[3], 0, 0);
    }
L_001b9364:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001b9368:;
    {
        cpu->r[6] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001b936c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001b9370:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b9374:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001b9378:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001b937c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001b9380:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 0);
    }
L_001b9384:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b9388:;
    {
        wr32(cpu->r[13] + + 0x80cu, cpu->r[3]);
    }
L_001b938c:;
    {
        cpu->r[14] = 0x001b9390u; fn_001d0700(cpu);
    }
L_001b9390:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_001b9394:;
    {
        cpu->r[2] = 0x00000068u;
    }
L_001b9398:;
    {
        cpu->r[1] = rd32(0x001b93a0u + + 0x58u);
    }
L_001b939c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001b93a0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001b93a4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b93acu, cpu->r[1], 0, 0);
    }
L_001b93a8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001b93ac:;
    {
        cpu->r[14] = 0x001b93b0u; imp_sprintf(cpu); /* sprintf */
    }
L_001b93b0:;
    {
        cpu->r[0] = rd32(0x001b93b8u + + 0x44u);
    }
L_001b93b4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b93b8:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b93c0u, cpu->r[0], 0, 0);
    }
L_001b93bc:;
    {
        cpu->r[14] = 0x001b93c0u; fn_001d0ac4(cpu);
    }
L_001b93c0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001b93c4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b93c8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001b93cc:;
    {
        cpu->r[14] = 0x001b93d4u;
    }
L_001b93d0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001b93d4u)) return;
    }
L_001b93d4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x80cu);
    }
L_001b93d8:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001b93dc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001b93e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b93ec;
        }
    }
L_001b93e4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000810u, 0, 0);
    }
L_001b93e8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b93ecu)) return;
    }
L_001b93ec:;
    {
        cpu->r[14] = 0x001b93f0u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001b93f0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[9] + (-cpu->r[0]);
        wr16(cpu->r[9], cpu->r[1]);
        cpu->r[9] = wb_tmp;
        }
    }
L_001b93f4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001b93f8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] * cpu->r[12]; cpu->r[7] = v;
        }
    }
L_001b93fc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[4], 4, 27u, &shc); cpu->r[6] = v;
        }
    }
}

/* _ZN16GLXPlayerYoutube15SendVideoByPostEPcS0_RiS0_ @ 001b9400 (arm) */
void fn_001b9400(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b9400:;
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
L_001b9404:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001b9408:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001b940c:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001b9410:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_001b9414:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001b9418:;
    {
        wr8(cpu->r[5] + + 0x2cu, cpu->r[3]);
    }
L_001b941c:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_001b9420:;
    {
        cpu->r[14] = 0x001b9424u; fn_001d091c(cpu);
    }
L_001b9424:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001b9428:;
    {
        cpu->r[14] = 0x001b942cu; fn_001d0434(cpu);
    }
L_001b942c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], 0x00000020u, 0, 0);
    }
L_001b9430:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001b9434:;
    {
        cpu->r[14] = 0x001b9438u; imp__Znaj(cpu); /* _Znaj */
    }
L_001b9438:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001b943c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b9440:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b9444:;
    {
        cpu->r[14] = 0x001b9448u; fn_001d0700(cpu);
    }
L_001b9448:;
    {
        cpu->r[1] = rd32(0x001b9450u + + 0x6cu);
    }
L_001b944c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b9450:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001b9454:;
    {
        cpu->r[1] = add_flags(cpu, 0x001b945cu, cpu->r[1], 0, 0);
    }
L_001b9458:;
    {
        cpu->r[14] = 0x001b945cu; imp_sprintf(cpu); /* sprintf */
    }
L_001b945c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001b9460:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b946c;
        }
    }
L_001b9464:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b9468:;
    {
        cpu->r[14] = 0x001b946cu; fn_0018ba20(cpu);
    }
L_001b946c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b9470:;
    {
        cpu->r[14] = 0x001b9474u; fn_001d0434(cpu);
    }
L_001b9474:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001b9478:;
    {
        cpu->r[0] = rd32(0x001b9480u + + 0x40u);
    }
L_001b947c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001b9484u, cpu->r[0], 0, 0);
    }
L_001b9480:;
    {
        cpu->r[14] = 0x001b9484u; fn_001d0ac4(cpu);
    }
L_001b9484:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_001b9488:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x1cu);
    }
L_001b948c:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_001b9490:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x20u);
    }
L_001b9494:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001b9498:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[6]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_001b949c:;
    {
        cpu->r[14] = 0x001b94a0u; fn_001b3ebc(cpu);
    }
L_001b94a0:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001b94a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b94b0;
        }
    }
L_001b94a8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b94ac:;
    {
        cpu->r[14] = 0x001b94b0u; fn_0018ba20(cpu);
    }
L_001b94b0:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001b94b4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001b94b8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b94bcu)) return;
    }
}

/* _ZN16GLXPlayerYoutubeD1Ev @ 001b94c4 (arm) */
void fn_001b94c4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b94c4:;
    {
        cpu->r[3] = rd32(0x001b94ccu + + 0x40u);
    }
L_001b94c8:;
    {
        cpu->r[2] = rd32(0x001b94d0u + + 0x40u);
    }
L_001b94cc:;
    {
        cpu->r[3] = add_flags(cpu, 0x001b94d4u, cpu->r[3], 0, 0);
    }
L_001b94d0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001b94d4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b94d8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x3cu);
    }
L_001b94dc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001b94e0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b94e4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001b94e8:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001b94ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b94fc;
        }
    }
L_001b94f0:;
    {
        cpu->r[14] = 0x001b94f4u; fn_0018ba20(cpu);
    }
L_001b94f4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b94f8:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[3]);
    }
L_001b94fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b9500:;
    {
        cpu->r[14] = 0x001b9504u; fn_001b7820(cpu);
    }
L_001b9504:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b9508:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001b950cu)) return;
    }
}

/* _ZN16GLXPlayerYoutubeD0Ev @ 001b9514 (arm) */
void fn_001b9514(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b9514:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001b9518:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b951c:;
    {
        cpu->r[14] = 0x001b9520u; fn_001b94c4(cpu);
    }
L_001b9520:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b9524:;
    {
        cpu->r[14] = 0x001b9528u; fn_0018ba20(cpu);
    }
L_001b9528:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b952c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001b9530u)) return;
    }
}

/* _ZN16GLXPlayerYoutubeD2Ev @ 001b9530 (arm) */
void fn_001b9530(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b9530:;
    {
        cpu->r[3] = rd32(0x001b9538u + + 0x40u);
    }
L_001b9534:;
    {
        cpu->r[2] = rd32(0x001b953cu + + 0x40u);
    }
L_001b9538:;
    {
        cpu->r[3] = add_flags(cpu, 0x001b9540u, cpu->r[3], 0, 0);
    }
L_001b953c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001b9540:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b9544:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x3cu);
    }
L_001b9548:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001b954c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b9550:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001b9554:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001b9558:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b9568;
        }
    }
L_001b955c:;
    {
        cpu->r[14] = 0x001b9560u; fn_0018ba20(cpu);
    }
L_001b9560:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b9564:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[3]);
    }
L_001b9568:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b956c:;
    {
        cpu->r[14] = 0x001b9570u; fn_001b7820(cpu);
    }
L_001b9570:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b9574:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001b9578u)) return;
    }
}

/* _ZN16GLXPlayerYoutubeC1Ev @ 001b9580 (arm) */
void fn_001b9580(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b9580:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001b9584:;
    {
        cpu->r[5] = rd32(0x001b958cu + + 0x50u);
    }
L_001b9588:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b958c:;
    {
        cpu->r[14] = 0x001b9590u; fn_001b7954(cpu);
    }
L_001b9590:;
    {
        cpu->r[3] = rd32(0x001b9598u + + 0x48u);
    }
L_001b9594:;
    {
        cpu->r[5] = add_flags(cpu, 0x001b959cu, cpu->r[5], 0, 0);
    }
L_001b9598:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b959c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001b95a0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001b95a4:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001b95a8:;
    {
        cpu->r[14] = 0x001b95acu; fn_001b6ba4(cpu);
    }
L_001b95ac:;
    {
        cpu->r[0] = 0x00000428u;
    }
L_001b95b0:;
    {
        cpu->r[14] = 0x001b95b4u; fn_0018ba6c(cpu);
    }
L_001b95b4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_001b95b8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x10u);
    }
L_001b95bc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x18u);
    }
L_001b95c0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001b95c4:;
    {
        cpu->r[14] = 0x001b95c8u; fn_001b3dec(cpu);
    }
L_001b95c8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b95cc:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[5]);
    }
L_001b95d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b95d4:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[3]);
    }
L_001b95d8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b95dcu)) return;
    }
}

/* _ZN16GLXPlayerYoutubeC2Ev @ 001b95e4 (arm) */
void fn_001b95e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b95e4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001b95e8:;
    {
        cpu->r[5] = rd32(0x001b95f0u + + 0x50u);
    }
L_001b95ec:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b95f0:;
    {
        cpu->r[14] = 0x001b95f4u; fn_001b7954(cpu);
    }
L_001b95f4:;
    {
        cpu->r[3] = rd32(0x001b95fcu + + 0x48u);
    }
L_001b95f8:;
    {
        cpu->r[5] = add_flags(cpu, 0x001b9600u, cpu->r[5], 0, 0);
    }
L_001b95fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b9600:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001b9604:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001b9608:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001b960c:;
    {
        cpu->r[14] = 0x001b9610u; fn_001b6ba4(cpu);
    }
L_001b9610:;
    {
        cpu->r[0] = 0x00000428u;
    }
L_001b9614:;
    {
        cpu->r[14] = 0x001b9618u; fn_0018ba6c(cpu);
    }
L_001b9618:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_001b961c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x10u);
    }
L_001b9620:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x18u);
    }
L_001b9624:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001b9628:;
    {
        cpu->r[14] = 0x001b962cu; fn_001b3dec(cpu);
    }
L_001b962c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b9630:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[5]);
    }
L_001b9634:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001b9638:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[3]);
    }
L_001b963c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b9640u)) return;
    }
}

/* _ZN19GLXPlayerUserFriend15GetFriendsCountEv @ 001b9648 (arm) */
void fn_001b9648(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b9648:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x3cu);
    }
L_001b964c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN19GLXPlayerUserFriend13GetUserNumberEi @ 001b9650 (arm) */
void fn_001b9650(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b9650:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x40u);
    }
L_001b9654:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000001u, cpu->r[3], 1, 1);
    }
L_001b9658:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001b965c:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[1], 3, 31u, &shc); cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_001b9660:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b966c;
        }
    }
L_001b9664:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001b9668:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001b966c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x3cu);
    }
L_001b9670:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001b9674:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
        }
    }
L_001b9678:;
    {
        if (cond_test(cpu, 14)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001b967c:;
    {
        goto L_001b9664;
    }
}

/* _ZN19GLXPlayerUserFriend7GetNameEi @ 001b9680 (arm) */
void fn_001b9680(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b9680:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x44u);
    }
L_001b9684:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000001u, cpu->r[3], 1, 1);
    }
L_001b9688:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001b968c:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[1], 3, 31u, &shc); cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_001b9690:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b969c;
        }
    }
L_001b9694:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001b9698:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001b969c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x3cu);
    }
L_001b96a0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001b96a4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
        }
    }
L_001b96a8:;
    {
        if (cond_test(cpu, 12)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001b96ac:;
    {
        goto L_001b9694;
    }
}

/* _ZN19GLXPlayerUserFriend10GetCountryEi @ 001b96b0 (arm) */
void fn_001b96b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b96b0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x48u);
    }
L_001b96b4:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000001u, cpu->r[3], 1, 1);
    }
L_001b96b8:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001b96bc:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[1], 3, 31u, &shc); cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_001b96c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b96cc;
        }
    }
L_001b96c4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001b96c8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001b96cc:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x3cu);
    }
L_001b96d0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001b96d4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
        }
    }
L_001b96d8:;
    {
        if (cond_test(cpu, 14)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001b96dc:;
    {
        goto L_001b96c4;
    }
}

/* _ZN19GLXPlayerUserFriend13GetReputationEi @ 001b96e0 (arm) */
void fn_001b96e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b96e0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4cu);
    }
L_001b96e4:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000001u, cpu->r[3], 1, 1);
    }
L_001b96e8:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001b96ec:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[1], 3, 31u, &shc); cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_001b96f0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b970c;
        }
    }
L_001b96f4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x3cu);
    }
L_001b96f8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001b96fc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001b970c;
        }
    }
L_001b9700:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 3u, &shc); cpu->r[1] = v;
    }
L_001b9704:;
    {
        uint64_t v = rd64(cpu->r[1] + cpu->r[3]);
        cpu->r[0] = (uint32_t)v;
        cpu->r[1] = (uint32_t)(v >> 32);
    }
L_001b9708:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001b970c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b9710:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001b9714:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0xbff0u << 16);
    }
L_001b9718:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN19GLXPlayerUserFriend21GetBadReputationCountEi @ 001b971c (arm) */
void fn_001b971c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b971c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x50u);
    }
L_001b9720:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000001u, cpu->r[3], 1, 1);
    }
L_001b9724:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001b9728:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[1], 3, 31u, &shc); cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_001b972c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b9738;
        }
    }
L_001b9730:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001b9734:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001b9738:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x3cu);
    }
L_001b973c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001b9740:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
        }
    }
L_001b9744:;
    {
        if (cond_test(cpu, 14)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001b9748:;
    {
        goto L_001b9730;
    }
}

/* _ZN19GLXPlayerUserFriend22GetGoodReputationCountEi @ 001b974c (arm) */
void fn_001b974c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b974c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x54u);
    }
L_001b9750:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000001u, cpu->r[3], 1, 1);
    }
L_001b9754:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001b9758:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[1], 3, 31u, &shc); cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_001b975c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b9768;
        }
    }
L_001b9760:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001b9764:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001b9768:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x3cu);
    }
L_001b976c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001b9770:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
        }
    }
L_001b9774:;
    {
        if (cond_test(cpu, 14)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001b9778:;
    {
        goto L_001b9760;
    }
}

/* _ZN19GLXPlayerUserFriend8GetStateEi @ 001b977c (arm) */
void fn_001b977c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b977c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x58u);
    }
L_001b9780:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000001u, cpu->r[3], 1, 1);
    }
L_001b9784:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001b9788:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[1], 3, 31u, &shc); cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_001b978c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b9798;
        }
    }
L_001b9790:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001b9794:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001b9798:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x3cu);
    }
L_001b979c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001b97a0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
        }
    }
L_001b97a4:;
    {
        if (cond_test(cpu, 14)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001b97a8:;
    {
        goto L_001b9790;
    }
}

/* _ZN19GLXPlayerUserFriend14GetCurrentGameEi @ 001b97ac (arm) */
void fn_001b97ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b97ac:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x5cu);
    }
L_001b97b0:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000001u, cpu->r[3], 1, 1);
    }
L_001b97b4:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001b97b8:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[1], 3, 31u, &shc); cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_001b97bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b97c8;
        }
    }
L_001b97c0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001b97c4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001b97c8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x3cu);
    }
L_001b97cc:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001b97d0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
        }
    }
L_001b97d4:;
    {
        if (cond_test(cpu, 14)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001b97d8:;
    {
        goto L_001b97c0;
    }
}

/* _ZN19GLXPlayerUserFriend9GetTrophyEi @ 001b97dc (arm) */
void fn_001b97dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b97dc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x60u);
    }
L_001b97e0:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000001u, cpu->r[3], 1, 1);
    }
L_001b97e4:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001b97e8:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[1], 3, 31u, &shc); cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_001b97ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b97f8;
        }
    }
L_001b97f0:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001b97f4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001b97f8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x3cu);
    }
L_001b97fc:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001b9800:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
        }
    }
L_001b9804:;
    {
        if (cond_test(cpu, 14)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001b9808:;
    {
        goto L_001b97f0;
    }
}

/* _ZN19GLXPlayerUserFriend19GetTotalTrophyScoreEi @ 001b980c (arm) */
void fn_001b980c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b980c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x70u);
    }
L_001b9810:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000001u, cpu->r[3], 1, 1);
    }
L_001b9814:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001b9818:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[1], 3, 31u, &shc); cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_001b981c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b9828;
        }
    }
L_001b9820:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001b9824:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001b9828:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x3cu);
    }
L_001b982c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001b9830:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
        }
    }
L_001b9834:;
    {
        if (cond_test(cpu, 14)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001b9838:;
    {
        goto L_001b9820;
    }
}

/* _ZN19GLXPlayerUserFriend11GetLanguageEi @ 001b983c (arm) */
void fn_001b983c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b983c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x64u);
    }
L_001b9840:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000001u, cpu->r[3], 1, 1);
    }
L_001b9844:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001b9848:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[1], 3, 31u, &shc); cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_001b984c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b9858;
        }
    }
L_001b9850:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001b9854:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001b9858:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x3cu);
    }
L_001b985c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001b9860:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
        }
    }
L_001b9864:;
    {
        if (cond_test(cpu, 14)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001b9868:;
    {
        goto L_001b9850;
    }
}

/* _ZN19GLXPlayerUserFriend19GetAvatarLastUpdateEi @ 001b986c (arm) */
void fn_001b986c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b986c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x6cu);
    }
L_001b9870:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000001u, cpu->r[3], 1, 1);
    }
L_001b9874:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001b9878:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[1], 3, 31u, &shc); cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_001b987c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b9888;
        }
    }
L_001b9880:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001b9884:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001b9888:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x3cu);
    }
L_001b988c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001b9890:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
        }
    }
L_001b9894:;
    {
        if (cond_test(cpu, 14)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001b9898:;
    {
        goto L_001b9880;
    }
}

/* _ZN19GLXPlayerUserFriend12GetAvatarKeyEi @ 001b989c (arm) */
void fn_001b989c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b989c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x68u);
    }
L_001b98a0:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000001u, cpu->r[3], 1, 1);
    }
L_001b98a4:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001b98a8:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[1], 3, 31u, &shc); cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_001b98ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b98b8;
        }
    }
L_001b98b0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001b98b4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001b98b8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x3cu);
    }
L_001b98bc:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001b98c0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
        }
    }
L_001b98c4:;
    {
        if (cond_test(cpu, 14)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001b98c8:;
    {
        goto L_001b98b0;
    }
}

/* _ZN19GLXPlayerUserFriend16clearFriendsListEv @ 001b98cc (arm) */
void fn_001b98cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b98cc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001b98d0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b98d4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4cu);
    }
L_001b98d8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b98dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b98ec;
        }
    }
L_001b98e0:;
    {
        cpu->r[14] = 0x001b98e4u; fn_0018ba20(cpu);
    }
L_001b98e4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b98e8:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
    }
L_001b98ec:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x50u);
    }
L_001b98f0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b98f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b9904;
        }
    }
L_001b98f8:;
    {
        cpu->r[14] = 0x001b98fcu; fn_0018ba20(cpu);
    }
L_001b98fc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b9900:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[3]);
    }
L_001b9904:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x54u);
    }
L_001b9908:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b990c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b991c;
        }
    }
L_001b9910:;
    {
        cpu->r[14] = 0x001b9914u; fn_0018ba20(cpu);
    }
L_001b9914:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b9918:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[3]);
    }
L_001b991c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x58u);
    }
L_001b9920:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b9924:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b9934;
        }
    }
L_001b9928:;
    {
        cpu->r[14] = 0x001b992cu; fn_0018ba20(cpu);
    }
L_001b992c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b9930:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[3]);
    }
L_001b9934:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x60u);
    }
L_001b9938:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b993c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b994c;
        }
    }
L_001b9940:;
    {
        cpu->r[14] = 0x001b9944u; fn_0018ba20(cpu);
    }
L_001b9944:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b9948:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[3]);
    }
L_001b994c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x70u);
    }
L_001b9950:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b9954:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b9964;
        }
    }
L_001b9958:;
    {
        cpu->r[14] = 0x001b995cu; fn_0018ba20(cpu);
    }
L_001b995c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b9960:;
    {
        wr32(cpu->r[4] + + 0x70u, cpu->r[3]);
    }
L_001b9964:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x40u);
    }
L_001b9968:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001b996c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b99c4;
        }
    }
L_001b9970:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001b9974:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b9978:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001b99b4;
        }
    }
L_001b997c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001b9980:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_001b9984:;
    {
        cpu->r[2] = rd32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001b9988:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001b998c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b99a0;
        }
    }
L_001b9990:;
    {
        cpu->r[14] = 0x001b9994u; fn_0018ba60(cpu);
    }
L_001b9994:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x40u);
    }
L_001b9998:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001b999c:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[6]);
    }
L_001b99a0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001b99a4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001b99a8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001b9984;
        }
    }
L_001b99ac:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001b99b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b99bc;
        }
    }
L_001b99b4:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001b99b8:;
    {
        cpu->r[14] = 0x001b99bcu; fn_0018ba60(cpu);
    }
L_001b99bc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b99c0:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[3]);
    }
L_001b99c4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x44u);
    }
L_001b99c8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001b99cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b9a24;
        }
    }
L_001b99d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001b99d4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b99d8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001b9a14;
        }
    }
L_001b99dc:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001b99e0:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_001b99e4:;
    {
        cpu->r[2] = rd32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001b99e8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001b99ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b9a00;
        }
    }
L_001b99f0:;
    {
        cpu->r[14] = 0x001b99f4u; fn_0018ba60(cpu);
    }
L_001b99f4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x44u);
    }
L_001b99f8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001b99fc:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[6]);
    }
L_001b9a00:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001b9a04:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001b9a08:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001b99e4;
        }
    }
L_001b9a0c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001b9a10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b9a1c;
        }
    }
L_001b9a14:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001b9a18:;
    {
        cpu->r[14] = 0x001b9a1cu; fn_0018ba60(cpu);
    }
L_001b9a1c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b9a20:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[3]);
    }
L_001b9a24:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x48u);
    }
L_001b9a28:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001b9a2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b9a84;
        }
    }
L_001b9a30:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001b9a34:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b9a38:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001b9a74;
        }
    }
L_001b9a3c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001b9a40:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_001b9a44:;
    {
        cpu->r[2] = rd32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001b9a48:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001b9a4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b9a60;
        }
    }
L_001b9a50:;
    {
        cpu->r[14] = 0x001b9a54u; fn_0018ba60(cpu);
    }
L_001b9a54:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x48u);
    }
L_001b9a58:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001b9a5c:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[6]);
    }
L_001b9a60:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001b9a64:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001b9a68:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001b9a44;
        }
    }
L_001b9a6c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001b9a70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b9a7c;
        }
    }
L_001b9a74:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001b9a78:;
    {
        cpu->r[14] = 0x001b9a7cu; fn_0018ba60(cpu);
    }
L_001b9a7c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b9a80:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[3]);
    }
L_001b9a84:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x5cu);
    }
L_001b9a88:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001b9a8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b9ae4;
        }
    }
L_001b9a90:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001b9a94:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b9a98:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001b9ad4;
        }
    }
L_001b9a9c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001b9aa0:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_001b9aa4:;
    {
        cpu->r[2] = rd32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001b9aa8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001b9aac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b9ac0;
        }
    }
L_001b9ab0:;
    {
        cpu->r[14] = 0x001b9ab4u; fn_0018ba60(cpu);
    }
L_001b9ab4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x5cu);
    }
L_001b9ab8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001b9abc:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[6]);
    }
L_001b9ac0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001b9ac4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001b9ac8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001b9aa4;
        }
    }
L_001b9acc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001b9ad0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b9adc;
        }
    }
L_001b9ad4:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001b9ad8:;
    {
        cpu->r[14] = 0x001b9adcu; fn_0018ba60(cpu);
    }
L_001b9adc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b9ae0:;
    {
        wr32(cpu->r[4] + + 0x5cu, cpu->r[3]);
    }
L_001b9ae4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x64u);
    }
L_001b9ae8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001b9aec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b9b44;
        }
    }
L_001b9af0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001b9af4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b9af8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001b9b34;
        }
    }
L_001b9afc:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001b9b00:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_001b9b04:;
    {
        cpu->r[2] = rd32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001b9b08:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001b9b0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b9b20;
        }
    }
L_001b9b10:;
    {
        cpu->r[14] = 0x001b9b14u; fn_0018ba60(cpu);
    }
L_001b9b14:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x64u);
    }
L_001b9b18:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001b9b1c:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[6]);
    }
L_001b9b20:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001b9b24:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001b9b28:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001b9b04;
        }
    }
L_001b9b2c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001b9b30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b9b3c;
        }
    }
L_001b9b34:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001b9b38:;
    {
        cpu->r[14] = 0x001b9b3cu; fn_0018ba60(cpu);
    }
L_001b9b3c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b9b40:;
    {
        wr32(cpu->r[4] + + 0x64u, cpu->r[3]);
    }
L_001b9b44:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001b9b48:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001b9b4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b9ba4;
        }
    }
L_001b9b50:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001b9b54:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b9b58:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001b9b94;
        }
    }
L_001b9b5c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001b9b60:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_001b9b64:;
    {
        cpu->r[2] = rd32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001b9b68:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001b9b6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b9b80;
        }
    }
L_001b9b70:;
    {
        cpu->r[14] = 0x001b9b74u; fn_0018ba60(cpu);
    }
L_001b9b74:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001b9b78:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001b9b7c:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[6]);
    }
L_001b9b80:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001b9b84:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001b9b88:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001b9b64;
        }
    }
L_001b9b8c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001b9b90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b9b9c;
        }
    }
L_001b9b94:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001b9b98:;
    {
        cpu->r[14] = 0x001b9b9cu; fn_0018ba60(cpu);
    }
L_001b9b9c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b9ba0:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[3]);
    }
L_001b9ba4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x68u);
    }
L_001b9ba8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001b9bac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b9c04;
        }
    }
L_001b9bb0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001b9bb4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b9bb8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001b9bf4;
        }
    }
L_001b9bbc:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001b9bc0:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_001b9bc4:;
    {
        cpu->r[2] = rd32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001b9bc8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001b9bcc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b9be0;
        }
    }
L_001b9bd0:;
    {
        cpu->r[14] = 0x001b9bd4u; fn_0018ba60(cpu);
    }
L_001b9bd4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x68u);
    }
L_001b9bd8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001b9bdc:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[6]);
    }
L_001b9be0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001b9be4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001b9be8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001b9bc4;
        }
    }
L_001b9bec:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001b9bf0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b9bfc;
        }
    }
L_001b9bf4:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001b9bf8:;
    {
        cpu->r[14] = 0x001b9bfcu; fn_0018ba60(cpu);
    }
L_001b9bfc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b9c00:;
    {
        wr32(cpu->r[4] + + 0x68u, cpu->r[3]);
    }
L_001b9c04:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001b9c08:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[3]);
    }
L_001b9c0c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b9c10u)) return;
    }
}

/* _ZN19GLXPlayerUserFriend18processFriendsListEPc @ 001b9c10 (arm) */
void fn_001b9c10(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001b9c10:;
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
L_001b9c14:;
    {
        cpu->r[9] = rd32(0x001b9c1cu + + 0x560u);
    }
L_001b9c18:;
    {
        cpu->r[2] = rd32(0x001b9c20u + + 0x560u);
    }
L_001b9c1c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000039cu, 1, 0);
    }
L_001b9c20:;
    {
        cpu->r[9] = add_flags(cpu, 0x001b9c28u, cpu->r[9], 0, 0);
    }
L_001b9c24:;
    {
        cpu->r[11] = cpu->r[1];
    }
L_001b9c28:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001b9c2c:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[2]);
    }
L_001b9c30:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_001b9c34:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b9c38:;
    {
        wr32(cpu->r[13] + + 0x394u, cpu->r[3]);
    }
L_001b9c3c:;
    {
        cpu->r[14] = 0x001b9c40u; fn_001b98cc(cpu);
    }
L_001b9c40:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_001b9c44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b9ccc;
        }
    }
L_001b9c48:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001b9c4c:;
    {
        cpu->r[14] = 0x001b9c50u; fn_001d0434(cpu);
    }
L_001b9c50:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b9c54:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001b9ccc;
        }
    }
L_001b9c58:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001b9c5c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000214u, 0, 0);
    }
L_001b9c60:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b9c64:;
    {
        cpu->r[2] = 0x00000200u;
    }
L_001b9c68:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b9c6c:;
    {
        cpu->r[14] = 0x001b9c70u; imp_memset(cpu); /* memset */
    }
L_001b9c70:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001b9c74:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b9c78:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b9c7c:;
    {
        cpu->r[14] = 0x001b9c80u; imp_memset(cpu); /* memset */
    }
L_001b9c80:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001b9c84:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001b9c88:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001b9c8c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001b9c90:;
    {
        cpu->r[14] = 0x001b9c94u; fn_001d0148(cpu);
    }
L_001b9c94:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b9c98:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001b9c9c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b9ca0:;
    {
        cpu->r[14] = 0x001b9ca4u; fn_001d0700(cpu);
    }
L_001b9ca4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001b9ca8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001b9cac:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001b9cb0:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001b9cb4:;
    {
        cpu->r[14] = 0x001b9cb8u; fn_001d0148(cpu);
    }
L_001b9cb8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b9cbc:;
    {
        cpu->r[14] = 0x001b9cc0u; fn_001d06cc(cpu);
    }
L_001b9cc0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b9cc4:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[0]);
    }
L_001b9cc8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001b9cec;
        }
    }
L_001b9ccc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001b9cd0:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[2]);
    }
L_001b9cd4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x394u);
    }
L_001b9cd8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001b9cdc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001b9ce0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ba178;
        }
    }
L_001b9ce4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000039cu, 0, 0);
    }
L_001b9ce8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001b9cecu)) return;
    }
L_001b9cec:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b9cf0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b9cf4:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001b9cf8:;
    {
        cpu->r[14] = 0x001b9cfcu; fn_001d0700(cpu);
    }
L_001b9cfc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001b9d00:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001b9d04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001b9ccc;
        }
    }
L_001b9d08:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 3u, &shc); cpu->r[0] = v;
    }
L_001b9d0c:;
    {
        cpu->r[14] = 0x001b9d10u; imp__Znaj(cpu); /* _Znaj */
    }
L_001b9d10:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001b9d14:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[0]);
    }
L_001b9d18:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001b9d1c:;
    {
        cpu->r[14] = 0x001b9d20u; imp__Znaj(cpu); /* _Znaj */
    }
L_001b9d20:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001b9d24:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[0]);
    }
L_001b9d28:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001b9d2c:;
    {
        cpu->r[14] = 0x001b9d30u; imp__Znaj(cpu); /* _Znaj */
    }
L_001b9d30:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001b9d34:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[0]);
    }
L_001b9d38:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001b9d3c:;
    {
        cpu->r[14] = 0x001b9d40u; imp__Znaj(cpu); /* _Znaj */
    }
L_001b9d40:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001b9d44:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[0]);
    }
L_001b9d48:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001b9d4c:;
    {
        cpu->r[14] = 0x001b9d50u; imp__Znaj(cpu); /* _Znaj */
    }
L_001b9d50:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001b9d54:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[0]);
    }
L_001b9d58:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001b9d5c:;
    {
        cpu->r[14] = 0x001b9d60u; imp__Znaj(cpu); /* _Znaj */
    }
L_001b9d60:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001b9d64:;
    {
        wr32(cpu->r[4] + + 0x70u, cpu->r[0]);
    }
L_001b9d68:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001b9d6c:;
    {
        cpu->r[14] = 0x001b9d70u; imp__Znaj(cpu); /* _Znaj */
    }
L_001b9d70:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001b9d74:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[0]);
    }
L_001b9d78:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001b9d7c:;
    {
        cpu->r[14] = 0x001b9d80u; imp__Znaj(cpu); /* _Znaj */
    }
L_001b9d80:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001b9d84:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[0]);
    }
L_001b9d88:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001b9d8c:;
    {
        cpu->r[14] = 0x001b9d90u; imp__Znaj(cpu); /* _Znaj */
    }
L_001b9d90:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001b9d94:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[0]);
    }
L_001b9d98:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001b9d9c:;
    {
        cpu->r[14] = 0x001b9da0u; imp__Znaj(cpu); /* _Znaj */
    }
L_001b9da0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001b9da4:;
    {
        wr32(cpu->r[4] + + 0x5cu, cpu->r[0]);
    }
L_001b9da8:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001b9dac:;
    {
        cpu->r[14] = 0x001b9db0u; imp__Znaj(cpu); /* _Znaj */
    }
L_001b9db0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001b9db4:;
    {
        wr32(cpu->r[4] + + 0x64u, cpu->r[0]);
    }
L_001b9db8:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001b9dbc:;
    {
        cpu->r[14] = 0x001b9dc0u; imp__Znaj(cpu); /* _Znaj */
    }
L_001b9dc0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001b9dc4:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[0]);
    }
L_001b9dc8:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001b9dcc:;
    {
        cpu->r[14] = 0x001b9dd0u; imp__Znaj(cpu); /* _Znaj */
    }
L_001b9dd0:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001b9dd4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b9dd8:;
    {
        wr32(cpu->r[4] + + 0x68u, cpu->r[0]);
    }
L_001b9ddc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b9de0:;
    {
        cpu->r[14] = 0x001b9de4u; fn_001d0700(cpu);
    }
L_001b9de4:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001b9de8:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001b9dec:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001b9df0:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001b9df4:;
    {
        cpu->r[14] = 0x001b9df8u; fn_001d0148(cpu);
    }
L_001b9df8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001b9dfc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001b9e00:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001b9ccc;
        }
    }
L_001b9e04:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001b9e08:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000314u, 0, 0);
    }
L_001b9e0c:;
    {
        cpu->r[2] = 0x00000200u;
    }
L_001b9e10:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b9e14:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b9e18:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 3u, &shc); cpu->r[12] = v;
    }
L_001b9e1c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001b9e20:;
    {
        cpu->r[14] = 0x001b9e24u; fn_001d0700(cpu);
    }
L_001b9e24:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x00000003u, 0, 0);
    }
L_001b9e28:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001b9e2c:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001b9e30:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001b9e34:;
    {
        cpu->r[14] = 0x001b9e38u; fn_001d0148(cpu);
    }
L_001b9e38:;
    {
        cpu->r[0] = 0x00000080u;
    }
L_001b9e3c:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x40u);
    }
L_001b9e40:;
    {
        cpu->r[14] = 0x001b9e44u; imp__Znaj(cpu); /* _Znaj */
    }
L_001b9e44:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x44u);
    }
L_001b9e48:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_001b9e4c:;
    {
        wr32(cpu->r[10] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[0]);
    }
L_001b9e50:;
    {
        cpu->r[0] = 0x00000080u;
    }
L_001b9e54:;
    {
        cpu->r[14] = 0x001b9e58u; imp__Znaj(cpu); /* _Znaj */
    }
L_001b9e58:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_001b9e5c:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x48u);
    }
L_001b9e60:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[0]);
    }
L_001b9e64:;
    {
        cpu->r[0] = 0x00000080u;
    }
L_001b9e68:;
    {
        cpu->r[14] = 0x001b9e6cu; imp__Znaj(cpu); /* _Znaj */
    }
L_001b9e6c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5cu);
    }
L_001b9e70:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_001b9e74:;
    {
        wr32(cpu->r[10] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[0]);
    }
L_001b9e78:;
    {
        cpu->r[0] = 0x00000080u;
    }
L_001b9e7c:;
    {
        cpu->r[14] = 0x001b9e80u; imp__Znaj(cpu); /* _Znaj */
    }
L_001b9e80:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_001b9e84:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x64u);
    }
L_001b9e88:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[0]);
    }
L_001b9e8c:;
    {
        cpu->r[0] = 0x00000003u;
    }
L_001b9e90:;
    {
        cpu->r[14] = 0x001b9e94u; imp__Znaj(cpu); /* _Znaj */
    }
L_001b9e94:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001b9e98:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_001b9e9c:;
    {
        wr32(cpu->r[10] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[0]);
    }
L_001b9ea0:;
    {
        cpu->r[0] = 0x00000020u;
    }
L_001b9ea4:;
    {
        cpu->r[14] = 0x001b9ea8u; imp__Znaj(cpu); /* _Znaj */
    }
L_001b9ea8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_001b9eac:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x68u);
    }
L_001b9eb0:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[0]);
    }
L_001b9eb4:;
    {
        cpu->r[0] = 0x00000020u;
    }
L_001b9eb8:;
    {
        cpu->r[14] = 0x001b9ebcu; imp__Znaj(cpu); /* _Znaj */
    }
L_001b9ebc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x40u);
    }
L_001b9ec0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b9ec4:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001b9ec8:;
    {
        wr32(cpu->r[10] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[0]);
    }
L_001b9ecc:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001b9ed0:;
    {
        cpu->r[14] = 0x001b9ed4u; fn_001d0700(cpu);
    }
L_001b9ed4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x44u);
    }
L_001b9ed8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b9edc:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001b9ee0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001b9ee4:;
    {
        cpu->r[14] = 0x001b9ee8u; fn_001d0700(cpu);
    }
L_001b9ee8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x48u);
    }
L_001b9eec:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b9ef0:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001b9ef4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001b9ef8:;
    {
        cpu->r[14] = 0x001b9efcu; fn_001d0700(cpu);
    }
L_001b9efc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5cu);
    }
L_001b9f00:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b9f04:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001b9f08:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001b9f0c:;
    {
        cpu->r[14] = 0x001b9f10u; fn_001d0700(cpu);
    }
L_001b9f10:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x64u);
    }
L_001b9f14:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b9f18:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_001b9f1c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001b9f20:;
    {
        cpu->r[14] = 0x001b9f24u; fn_001d0700(cpu);
    }
L_001b9f24:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001b9f28:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b9f2c:;
    {
        cpu->r[2] = 0x00000020u;
    }
L_001b9f30:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001b9f34:;
    {
        cpu->r[14] = 0x001b9f38u; fn_001d0700(cpu);
    }
L_001b9f38:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x68u);
    }
L_001b9f3c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b9f40:;
    {
        cpu->r[2] = 0x00000020u;
    }
L_001b9f44:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001b9f48:;
    {
        cpu->r[14] = 0x001b9f4cu; fn_001d0700(cpu);
    }
L_001b9f4c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x40u);
    }
L_001b9f50:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001b9f54:;
    {
        cpu->r[3] = 0x0000005eu;
    }
L_001b9f58:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b9f5c:;
    {
        cpu->r[1] = rd32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001b9f60:;
    {
        cpu->r[14] = 0x001b9f64u; fn_001d0148(cpu);
    }
L_001b9f64:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x44u);
    }
L_001b9f68:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001b9f6c:;
    {
        cpu->r[3] = 0x0000005eu;
    }
L_001b9f70:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b9f74:;
    {
        cpu->r[1] = rd32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001b9f78:;
    {
        cpu->r[14] = 0x001b9f7cu; fn_001d0148(cpu);
    }
L_001b9f7c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x48u);
    }
L_001b9f80:;
    {
        cpu->r[3] = 0x0000005eu;
    }
L_001b9f84:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001b9f88:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b9f8c:;
    {
        cpu->r[1] = rd32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001b9f90:;
    {
        cpu->r[14] = 0x001b9f94u; fn_001d0148(cpu);
    }
L_001b9f94:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b9f98:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001b9f9c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b9fa0:;
    {
        cpu->r[14] = 0x001b9fa4u; fn_001d0700(cpu);
    }
L_001b9fa4:;
    {
        cpu->r[3] = 0x0000005eu;
    }
L_001b9fa8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001b9fac:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_001b9fb0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001b9fb4:;
    {
        cpu->r[14] = 0x001b9fb8u; fn_001d0148(cpu);
    }
L_001b9fb8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b9fbc:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001b9fc0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001b9fc4:;
    {
        cpu->r[14] = 0x001b9fc8u; imp_memset(cpu); /* memset */
    }
L_001b9fc8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001b9fcc:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001b9fd0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001b9fd4:;
    {
        cpu->r[14] = 0x001b9fd8u; fn_001d0700(cpu);
    }
L_001b9fd8:;
    {
        cpu->r[3] = 0x0000002cu;
    }
L_001b9fdc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001b9fe0:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001b9fe4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001b9fe8:;
    {
        cpu->r[14] = 0x001b9fecu; fn_001d0148(cpu);
    }
L_001b9fec:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001b9ff0:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x4cu);
    }
L_001b9ff4:;
    {
        cpu->r[14] = 0x001b9ff8u; fn_001d06c4(cpu);
    }
L_001b9ff8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_001b9ffc:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001ba000:;
    {
        wr64(cpu->r[10] + cpu->r[12], ((uint64_t)cpu->r[1] << 32) | cpu->r[0]);
    }
L_001ba004:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ba008:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ba00c:;
    {
        cpu->r[14] = 0x001ba010u; fn_001d0700(cpu);
    }
L_001ba010:;
    {
        cpu->r[3] = 0x0000002cu;
    }
L_001ba014:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001ba018:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001ba01c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ba020:;
    {
        cpu->r[14] = 0x001ba024u; fn_001d0148(cpu);
    }
L_001ba024:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ba028:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x50u);
    }
L_001ba02c:;
    {
        cpu->r[14] = 0x001ba030u; fn_001d06cc(cpu);
    }
L_001ba030:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001ba034:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ba038:;
    {
        wr32(cpu->r[10] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[0]);
    }
L_001ba03c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ba040:;
    {
        cpu->r[14] = 0x001ba044u; fn_001d0700(cpu);
    }
L_001ba044:;
    {
        cpu->r[3] = 0x0000002cu;
    }
L_001ba048:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001ba04c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001ba050:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ba054:;
    {
        cpu->r[14] = 0x001ba058u; fn_001d0148(cpu);
    }
L_001ba058:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ba05c:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x54u);
    }
L_001ba060:;
    {
        cpu->r[14] = 0x001ba064u; fn_001d06cc(cpu);
    }
L_001ba064:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001ba068:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ba06c:;
    {
        wr32(cpu->r[10] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[0]);
    }
L_001ba070:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ba074:;
    {
        cpu->r[14] = 0x001ba078u; fn_001d0700(cpu);
    }
L_001ba078:;
    {
        cpu->r[3] = 0x0000005eu;
    }
L_001ba07c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001ba080:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_001ba084:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001ba088:;
    {
        cpu->r[14] = 0x001ba08cu; fn_001d0148(cpu);
    }
L_001ba08c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ba090:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x70u);
    }
L_001ba094:;
    {
        cpu->r[14] = 0x001ba098u; fn_001d06cc(cpu);
    }
L_001ba098:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001ba09c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ba0a0:;
    {
        wr32(cpu->r[10] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[0]);
    }
L_001ba0a4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ba0a8:;
    {
        cpu->r[14] = 0x001ba0acu; fn_001d0700(cpu);
    }
L_001ba0ac:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001ba0b0:;
    {
        cpu->r[2] = 0x00000005u;
    }
L_001ba0b4:;
    {
        cpu->r[3] = 0x0000005eu;
    }
L_001ba0b8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001ba0bc:;
    {
        cpu->r[14] = 0x001ba0c0u; fn_001d0148(cpu);
    }
L_001ba0c0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ba0c4:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x58u);
    }
L_001ba0c8:;
    {
        cpu->r[14] = 0x001ba0ccu; fn_001d06cc(cpu);
    }
L_001ba0cc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x5cu);
    }
L_001ba0d0:;
    {
        cpu->r[3] = 0x0000005eu;
    }
L_001ba0d4:;
    {
        cpu->r[2] = 0x00000006u;
    }
L_001ba0d8:;
    {
        cpu->r[1] = rd32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001ba0dc:;
    {
        wr32(cpu->r[10] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[0]);
    }
L_001ba0e0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001ba0e4:;
    {
        cpu->r[14] = 0x001ba0e8u; fn_001d0148(cpu);
    }
L_001ba0e8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ba0ec:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001ba0f0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ba0f4:;
    {
        cpu->r[14] = 0x001ba0f8u; fn_001d0700(cpu);
    }
L_001ba0f8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001ba0fc:;
    {
        cpu->r[2] = 0x00000007u;
    }
L_001ba100:;
    {
        cpu->r[3] = 0x0000005eu;
    }
L_001ba104:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001ba108:;
    {
        cpu->r[14] = 0x001ba10cu; fn_001d0148(cpu);
    }
L_001ba10c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ba110:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x60u);
    }
L_001ba114:;
    {
        cpu->r[14] = 0x001ba118u; fn_001d06cc(cpu);
    }
L_001ba118:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x64u);
    }
L_001ba11c:;
    {
        cpu->r[2] = 0x00000008u;
    }
L_001ba120:;
    {
        cpu->r[3] = 0x0000005eu;
    }
L_001ba124:;
    {
        cpu->r[1] = rd32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001ba128:;
    {
        wr32(cpu->r[10] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[0]);
    }
L_001ba12c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001ba130:;
    {
        cpu->r[14] = 0x001ba134u; fn_001d0148(cpu);
    }
L_001ba134:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x68u);
    }
L_001ba138:;
    {
        cpu->r[2] = 0x00000009u;
    }
L_001ba13c:;
    {
        cpu->r[3] = 0x0000005eu;
    }
L_001ba140:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001ba144:;
    {
        cpu->r[1] = rd32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001ba148:;
    {
        cpu->r[14] = 0x001ba14cu; fn_001d0148(cpu);
    }
L_001ba14c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001ba150:;
    {
        cpu->r[3] = 0x0000005eu;
    }
L_001ba154:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001ba158:;
    {
        cpu->r[2] = 0x0000000au;
    }
L_001ba15c:;
    {
        cpu->r[1] = rd32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001ba160:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001ba164:;
    {
        cpu->r[14] = 0x001ba168u; fn_001d0148(cpu);
    }
L_001ba168:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001ba16c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001ba170:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001b9e0c;
        }
    }
L_001ba174:;
    {
        goto L_001b9ccc;
    }
L_001ba178:;
    {
        cpu->r[14] = 0x001ba17cu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001ba17c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[9] + (-cpu->r[0]);
        wr64(cpu->r[9], ((uint64_t)cpu->r[1] << 32) | cpu->r[0]);
        cpu->r[9] = wb_tmp;
        }
    }
L_001ba180:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN19GLXPlayerUserFriend23sendGetUserFriendsCountEv @ 001ba184 (arm) */
void fn_001ba184(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ba184:;
    {
        cpu->r[3] = rd32(0x001ba18cu + + 0x94u);
    }
L_001ba188:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ba18c:;
    {
        cpu->r[2] = rd32(0x001ba194u + + 0x90u);
    }
L_001ba190:;
    {
        cpu->r[3] = add_flags(cpu, 0x001ba198u, cpu->r[3], 0, 0);
    }
L_001ba194:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001ba198:;
    {
        cpu->r[6] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001ba19c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001ba1a0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ba1a4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001ba1a8:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001ba1ac:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001ba1b0:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 0);
    }
L_001ba1b4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ba1b8:;
    {
        wr32(cpu->r[13] + + 0x80cu, cpu->r[3]);
    }
L_001ba1bc:;
    {
        cpu->r[14] = 0x001ba1c0u; fn_001d0700(cpu);
    }
L_001ba1c0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_001ba1c4:;
    {
        cpu->r[2] = 0x00000049u;
    }
L_001ba1c8:;
    {
        cpu->r[1] = rd32(0x001ba1d0u + + 0x58u);
    }
L_001ba1cc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ba1d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001ba1d4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001ba1dcu, cpu->r[1], 0, 0);
    }
L_001ba1d8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001ba1dc:;
    {
        cpu->r[14] = 0x001ba1e0u; imp_sprintf(cpu); /* sprintf */
    }
L_001ba1e0:;
    {
        cpu->r[0] = rd32(0x001ba1e8u + + 0x44u);
    }
L_001ba1e4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001ba1e8:;
    {
        cpu->r[0] = add_flags(cpu, 0x001ba1f0u, cpu->r[0], 0, 0);
    }
L_001ba1ec:;
    {
        cpu->r[14] = 0x001ba1f0u; fn_001d0ac4(cpu);
    }
L_001ba1f0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001ba1f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ba1f8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001ba1fc:;
    {
        cpu->r[14] = 0x001ba204u;
    }
L_001ba200:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ba204u)) return;
    }
L_001ba204:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x80cu);
    }
L_001ba208:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001ba20c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001ba210:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ba21c;
        }
    }
L_001ba214:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000810u, 0, 0);
    }
L_001ba218:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ba21cu)) return;
    }
L_001ba21c:;
    {
        cpu->r[14] = 0x001ba220u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001ba220:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[9] & shifter(cpu->r[0], 2, 5u, &shc); cpu->r[0] = v;
        }
    }
L_001ba224:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001ba228:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 4, 28u, &shc); cpu->r[5] = v;
        }
    }
L_001ba22c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[4], 4, 31u, &shc); cpu->r[5] = v;
        }
    }
}

/* _ZN19GLXPlayerUserFriend18sendGetUserFriendsEii @ 001ba230 (arm) */
void fn_001ba230(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ba230:;
    {
        cpu->r[3] = rd32(0x001ba238u + + 0xa8u);
    }
L_001ba234:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001ba238:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_001ba23c:;
    {
        cpu->r[2] = rd32(0x001ba244u + + 0xa0u);
    }
L_001ba240:;
    {
        cpu->r[3] = add_flags(cpu, 0x001ba248u, cpu->r[3], 0, 0);
    }
L_001ba244:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001ba248:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ba24c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001ba250:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001ba254:;
    {
        cpu->r[6] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001ba258:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001ba25c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 0);
    }
L_001ba260:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ba264:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ba268:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001ba26c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001ba270:;
    {
        wr32(cpu->r[13] + + 0x814u, cpu->r[3]);
    }
L_001ba274:;
    {
        cpu->r[14] = 0x001ba278u; fn_001d0700(cpu);
    }
L_001ba278:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_001ba27c:;
    {
        cpu->r[2] = 0x0000003du;
    }
L_001ba280:;
    {
        cpu->r[1] = rd32(0x001ba288u + + 0x60u);
    }
L_001ba284:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ba288:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001ba28c:;
    {
        cpu->r[1] = add_flags(cpu, 0x001ba294u, cpu->r[1], 0, 0);
    }
L_001ba290:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001ba294:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[7]);
        wr32(ea + 4u, cpu->r[8]);
    }
L_001ba298:;
    {
        cpu->r[14] = 0x001ba29cu; imp_sprintf(cpu); /* sprintf */
    }
L_001ba29c:;
    {
        cpu->r[0] = rd32(0x001ba2a4u + + 0x48u);
    }
L_001ba2a0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001ba2a4:;
    {
        cpu->r[0] = add_flags(cpu, 0x001ba2acu, cpu->r[0], 0, 0);
    }
L_001ba2a8:;
    {
        cpu->r[14] = 0x001ba2acu; fn_001d0ac4(cpu);
    }
L_001ba2ac:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001ba2b0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ba2b4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001ba2b8:;
    {
        cpu->r[14] = 0x001ba2c0u;
    }
L_001ba2bc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ba2c0u)) return;
    }
L_001ba2c0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x814u);
    }
L_001ba2c4:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001ba2c8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001ba2cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ba2dc;
        }
    }
L_001ba2d0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001ba2d4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001ba2d8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ba2dcu)) return;
    }
L_001ba2dc:;
    {
        cpu->r[14] = 0x001ba2e0u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001ba2e0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[9] + (-cpu->r[0]);
        uint64_t v = rd64(cpu->r[9]);
        cpu->r[0] = (uint32_t)v;
        cpu->r[1] = (uint32_t)(v >> 32);
        cpu->r[9] = wb_tmp;
        }
    }
L_001ba2e4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001ba2e8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[12], 2, 31u, &shc); cpu->r[5] = v;
        }
    }
L_001ba2ec:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] * 0x001ba2f4u; cpu->r[7] = v;
        }
    }
}

/* _ZN19GLXPlayerUserFriend17sendDelUserFriendEPc @ 001ba2f0 (arm) */
void fn_001ba2f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ba2f0:;
    {
        cpu->r[3] = rd32(0x001ba2f8u + + 0xa4u);
    }
L_001ba2f4:;
    {
        cpu->r[2] = rd32(0x001ba2fcu + + 0xa4u);
    }
L_001ba2f8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001ba300u, cpu->r[3], 0, 0);
    }
L_001ba2fc:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_001ba300:;
    {
        cpu->r[6] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001ba304:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001ba308:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ba30c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000004u, 1, 0);
    }
L_001ba310:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001ba314:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001ba318:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001ba31c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 0);
    }
L_001ba320:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ba324:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ba328:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001ba32c:;
    {
        wr32(cpu->r[13] + + 0x80cu, cpu->r[3]);
    }
L_001ba330:;
    {
        cpu->r[14] = 0x001ba334u; fn_001d0700(cpu);
    }
L_001ba334:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_001ba338:;
    {
        cpu->r[2] = 0x0000003cu;
    }
L_001ba33c:;
    {
        cpu->r[1] = rd32(0x001ba344u + + 0x60u);
    }
L_001ba340:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ba344:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001ba348:;
    {
        cpu->r[1] = add_flags(cpu, 0x001ba350u, cpu->r[1], 0, 0);
    }
L_001ba34c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001ba350:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_001ba354:;
    {
        cpu->r[14] = 0x001ba358u; imp_sprintf(cpu); /* sprintf */
    }
L_001ba358:;
    {
        cpu->r[0] = rd32(0x001ba360u + + 0x48u);
    }
L_001ba35c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001ba360:;
    {
        cpu->r[0] = add_flags(cpu, 0x001ba368u, cpu->r[0], 0, 0);
    }
L_001ba364:;
    {
        cpu->r[14] = 0x001ba368u; fn_001d0ac4(cpu);
    }
L_001ba368:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001ba36c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ba370:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001ba374:;
    {
        cpu->r[14] = 0x001ba37cu;
    }
L_001ba378:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ba37cu)) return;
    }
L_001ba37c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x80cu);
    }
L_001ba380:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001ba384:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001ba388:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ba398;
        }
    }
L_001ba38c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001ba390:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001ba394:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ba398u)) return;
    }
L_001ba398:;
    {
        cpu->r[14] = 0x001ba39cu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001ba39c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[9] & shifter(cpu->r[8], 2, (cpu->r[1] & 0xffu), &shc); cpu->r[0] = v;
        }
    }
L_001ba3a0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001ba3a4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[4], 3, (0x001ba3acu & 0xffu), &shc); cpu->r[5] = v;
        }
    }
L_001ba3a8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[4], 3, (0x001ba3b0u & 0xffu), &shc); cpu->r[5] = v;
        }
    }
}

/* _ZN19GLXPlayerUserFriend21sendConfirmUserFriendEPci @ 001ba3ac (arm) */
void fn_001ba3ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ba3ac:;
    {
        cpu->r[3] = rd32(0x001ba3b4u + + 0xb4u);
    }
L_001ba3b0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001ba3b4:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001ba3b8:;
    {
        cpu->r[2] = rd32(0x001ba3c0u + + 0xacu);
    }
L_001ba3bc:;
    {
        cpu->r[3] = add_flags(cpu, 0x001ba3c4u, cpu->r[3], 0, 0);
    }
L_001ba3c0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001ba3c4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ba3c8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001ba3cc:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001ba3d0:;
    {
        cpu->r[6] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001ba3d4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001ba3d8:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 0);
    }
L_001ba3dc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ba3e0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ba3e4:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001ba3e8:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001ba3ec:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001ba3f0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = 0x00000001u;
        }
    }
L_001ba3f4:;
    {
        wr32(cpu->r[13] + + 0x814u, cpu->r[3]);
    }
L_001ba3f8:;
    {
        cpu->r[14] = 0x001ba3fcu; fn_001d0700(cpu);
    }
L_001ba3fc:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_001ba400:;
    {
        cpu->r[2] = 0x0000003eu;
    }
L_001ba404:;
    {
        cpu->r[1] = rd32(0x001ba40cu + + 0x64u);
    }
L_001ba408:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ba40c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001ba410:;
    {
        cpu->r[1] = add_flags(cpu, 0x001ba418u, cpu->r[1], 0, 0);
    }
L_001ba414:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001ba418:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_001ba41c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[7]);
    }
L_001ba420:;
    {
        cpu->r[14] = 0x001ba424u; imp_sprintf(cpu); /* sprintf */
    }
L_001ba424:;
    {
        cpu->r[0] = rd32(0x001ba42cu + + 0x48u);
    }
L_001ba428:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001ba42c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001ba434u, cpu->r[0], 0, 0);
    }
L_001ba430:;
    {
        cpu->r[14] = 0x001ba434u; fn_001d0ac4(cpu);
    }
L_001ba434:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001ba438:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ba43c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001ba440:;
    {
        cpu->r[14] = 0x001ba448u;
    }
L_001ba444:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ba448u)) return;
    }
L_001ba448:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x814u);
    }
L_001ba44c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001ba450:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001ba454:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ba464;
        }
    }
L_001ba458:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001ba45c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001ba460:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ba464u)) return;
    }
L_001ba464:;
    {
        cpu->r[14] = 0x001ba468u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001ba468:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[9] & shifter(cpu->r[4], 1, (cpu->r[0] & 0xffu), &shc); cpu->r[0] = v;
        }
    }
L_001ba46c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001ba470:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[8], 1, 29u, &shc); cpu->r[5] = v;
        }
    }
L_001ba474:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[8], 1, 29u, &shc); cpu->r[5] = v;
        }
    }
}

/* _ZN19GLXPlayerUserFriend17sendAddUserFriendEPcS0_b @ 001ba478 (arm) */
void fn_001ba478(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ba478:;
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
L_001ba47c:;
    {
        cpu->r[4] = rd32(0x001ba484u + + 0x114u);
    }
L_001ba480:;
    {
        cpu->r[7] = rd32(0x001ba488u + + 0x114u);
    }
L_001ba484:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_001ba488:;
    {
        cpu->r[4] = add_flags(cpu, 0x001ba490u, cpu->r[4], 0, 0);
    }
L_001ba48c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000910u, 1, 0);
    }
L_001ba490:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001ba494:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001ba498:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001ba49c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 0);
    }
L_001ba4a0:;
    {
        cpu->r[9] = cpu->r[1];
    }
L_001ba4a4:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_001ba4a8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ba4ac:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ba4b0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ba4b4:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001ba4b8:;
    {
        wr32(cpu->r[13] + + 0x90cu, cpu->r[3]);
    }
L_001ba4bc:;
    {
        cpu->r[14] = 0x001ba4c0u; fn_001d0700(cpu);
    }
L_001ba4c0:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001ba4c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ba56c;
        }
    }
L_001ba4c8:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0xcu);
    }
L_001ba4cc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ba4d0:;
    {
        cpu->r[1] = rd32(0x001ba4d8u + + 0xc8u);
    }
L_001ba4d4:;
    {
        cpu->r[2] = 0x0000003bu;
    }
L_001ba4d8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_001ba4dc:;
    {
        cpu->r[1] = add_flags(cpu, 0x001ba4e4u, cpu->r[1], 0, 0);
    }
L_001ba4e0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[9]);
    }
L_001ba4e4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001ba4e8:;
    {
        cpu->r[14] = 0x001ba4ecu; imp_sprintf(cpu); /* sprintf */
    }
L_001ba4ec:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001ba4f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ba52c;
        }
    }
L_001ba4f4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001ba4f8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ba4fc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x0000000cu, 0, 0);
    }
L_001ba500:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001ba504:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001ba508:;
    {
        cpu->r[14] = 0x001ba50cu; imp_memset(cpu); /* memset */
    }
L_001ba50c:;
    {
        cpu->r[1] = rd32(0x001ba514u + + 0x90u);
    }
L_001ba510:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001ba514:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001ba518:;
    {
        cpu->r[1] = add_flags(cpu, 0x001ba520u, cpu->r[1], 0, 0);
    }
L_001ba51c:;
    {
        cpu->r[14] = 0x001ba520u; imp_sprintf(cpu); /* sprintf */
    }
L_001ba520:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ba524:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001ba528:;
    {
        cpu->r[14] = 0x001ba52cu; fn_001d06d4(cpu);
    }
L_001ba52c:;
    {
        cpu->r[0] = rd32(0x001ba534u + + 0x74u);
    }
L_001ba530:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001ba534:;
    {
        cpu->r[0] = add_flags(cpu, 0x001ba53cu, cpu->r[0], 0, 0);
    }
L_001ba538:;
    {
        cpu->r[14] = 0x001ba53cu; fn_001d0ac4(cpu);
    }
L_001ba53c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001ba540:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ba544:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001ba548:;
    {
        cpu->r[14] = 0x001ba550u;
    }
L_001ba54c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ba550u)) return;
    }
L_001ba550:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001ba554:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x90cu);
    }
L_001ba558:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ba55c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001ba560:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ba594;
        }
    }
L_001ba564:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000910u, 0, 0);
    }
L_001ba568:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ba56cu)) return;
    }
L_001ba56c:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0xcu);
    }
L_001ba570:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ba574:;
    {
        cpu->r[1] = rd32(0x001ba57cu + + 0x30u);
    }
L_001ba578:;
    {
        cpu->r[2] = 0x0000003bu;
    }
L_001ba57c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_001ba580:;
    {
        cpu->r[1] = add_flags(cpu, 0x001ba588u, cpu->r[1], 0, 0);
    }
L_001ba584:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[9]);
    }
L_001ba588:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001ba58c:;
    {
        cpu->r[14] = 0x001ba590u; imp_sprintf(cpu); /* sprintf */
    }
L_001ba590:;
    {
        goto L_001ba4ec;
    }
L_001ba594:;
    {
        cpu->r[14] = 0x001ba598u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001ba598:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[8], 2, 31u, &shc); uint32_t t = v; if (guest_pc_write(cpu, t, entry_lr, 0x001ba59cu)) return;
        }
    }
L_001ba59c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001ba5a0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 3, 27u, &shc); cpu->r[5] = v;
        }
    }
L_001ba5a4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[12], 3, (cpu->r[14] & 0xffu), &shc); cpu->r[5] = v;
        }
    }
L_001ba5a8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[8], 3, 28u, &shc); cpu->r[5] = v;
        }
    }
L_001ba5ac:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[12]);
        wr16(cpu->r[7], cpu->r[5]);
        cpu->r[7] = wb_tmp;
        }
    }
}

/* _ZN19GLXPlayerUserFriend15OnUpdateSuccessEi @ 001ba5b0 (arm) */
void fn_001ba5b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ba5b0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001ba5b4:;
    {
        cpu->r[4] = rd32(0x001ba5bcu + + 0x98u);
    }
L_001ba5b8:;
    {
        cpu->r[6] = rd32(0x001ba5c0u + + 0x98u);
    }
L_001ba5bc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_001ba5c0:;
    {
        cpu->r[4] = add_flags(cpu, 0x001ba5c8u, cpu->r[4], 0, 0);
    }
L_001ba5c4:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000003du, 1, 1);
    }
L_001ba5c8:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001ba5cc:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001ba5d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001ba5d4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ba5d8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001ba5dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ba644;
        }
    }
L_001ba5e0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000049u, 1, 1);
    }
L_001ba5e4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ba61c;
        }
    }
L_001ba5e8:;
    {
        cpu->r[14] = 0x001ba5ecu; fn_001b98cc(cpu);
    }
L_001ba5ec:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001ba5f0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001ba5f4:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x24u);
    }
L_001ba5f8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001ba5fc:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001ba600:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001ba604:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001ba608:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_001ba60c:;
    {
        cpu->r[14] = 0x001ba610u; fn_001d0148(cpu);
    }
L_001ba610:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ba614:;
    {
        cpu->r[14] = 0x001ba618u; fn_001d06cc(cpu);
    }
L_001ba618:;
    {
        wr32(cpu->r[7] + + 0x3cu, cpu->r[0]);
    }
L_001ba61c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001ba620:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001ba624:;
    {
        cpu->r[14] = 0x001ba628u; fn_001b6b68(cpu);
    }
L_001ba628:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001ba62c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001ba630:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ba634:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001ba638:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ba650;
        }
    }
L_001ba63c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001ba640:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ba644u)) return;
    }
L_001ba644:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x24u);
    }
L_001ba648:;
    {
        cpu->r[14] = 0x001ba64cu; fn_001b9c10(cpu);
    }
L_001ba64c:;
    {
        goto L_001ba61c;
    }
L_001ba650:;
    {
        cpu->r[14] = 0x001ba654u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001ba654:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[0], 1, (cpu->r[14] & 0xffu), &shc); uint32_t t = v; if (guest_pc_write(cpu, t, entry_lr, 0x001ba658u)) return;
        }
    }
L_001ba658:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN19GLXPlayerUserFriendD1Ev @ 001ba65c (arm) */
void fn_001ba65c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ba65c:;
    {
        cpu->r[3] = rd32(0x001ba664u + + 0x2cu);
    }
L_001ba660:;
    {
        cpu->r[2] = rd32(0x001ba668u + + 0x2cu);
    }
L_001ba664:;
    {
        cpu->r[3] = add_flags(cpu, 0x001ba66cu, cpu->r[3], 0, 0);
    }
L_001ba668:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001ba66c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001ba670:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ba674:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001ba678:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001ba67c:;
    {
        cpu->r[14] = 0x001ba680u; fn_001b98cc(cpu);
    }
L_001ba680:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ba684:;
    {
        cpu->r[14] = 0x001ba688u; fn_001b7820(cpu);
    }
L_001ba688:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ba68c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001ba690u)) return;
    }
}

/* _ZN19GLXPlayerUserFriendD0Ev @ 001ba698 (arm) */
void fn_001ba698(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ba698:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001ba69c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ba6a0:;
    {
        cpu->r[14] = 0x001ba6a4u; fn_001ba65c(cpu);
    }
L_001ba6a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ba6a8:;
    {
        cpu->r[14] = 0x001ba6acu; fn_0018ba20(cpu);
    }
L_001ba6ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ba6b0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001ba6b4u)) return;
    }
}

/* _ZN19GLXPlayerUserFriendD2Ev @ 001ba6b4 (arm) */
void fn_001ba6b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ba6b4:;
    {
        cpu->r[3] = rd32(0x001ba6bcu + + 0x2cu);
    }
L_001ba6b8:;
    {
        cpu->r[2] = rd32(0x001ba6c0u + + 0x2cu);
    }
L_001ba6bc:;
    {
        cpu->r[3] = add_flags(cpu, 0x001ba6c4u, cpu->r[3], 0, 0);
    }
L_001ba6c0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001ba6c4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001ba6c8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ba6cc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001ba6d0:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001ba6d4:;
    {
        cpu->r[14] = 0x001ba6d8u; fn_001b98cc(cpu);
    }
L_001ba6d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ba6dc:;
    {
        cpu->r[14] = 0x001ba6e0u; fn_001b7820(cpu);
    }
L_001ba6e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ba6e4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001ba6e8u)) return;
    }
}

/* _ZN19GLXPlayerUserFriendC1Ev @ 001ba6f0 (arm) */
void fn_001ba6f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ba6f0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001ba6f4:;
    {
        cpu->r[5] = rd32(0x001ba6fcu + + 0x84u);
    }
L_001ba6f8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ba6fc:;
    {
        cpu->r[14] = 0x001ba700u; fn_001b7954(cpu);
    }
L_001ba700:;
    {
        cpu->r[3] = rd32(0x001ba708u + + 0x7cu);
    }
L_001ba704:;
    {
        cpu->r[5] = add_flags(cpu, 0x001ba70cu, cpu->r[5], 0, 0);
    }
L_001ba708:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ba70c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001ba710:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001ba714:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001ba718:;
    {
        cpu->r[14] = 0x001ba71cu; fn_001b6ba4(cpu);
    }
L_001ba71c:;
    {
        cpu->r[0] = 0x00000428u;
    }
L_001ba720:;
    {
        cpu->r[14] = 0x001ba724u; fn_0018ba6c(cpu);
    }
L_001ba724:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_001ba728:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x10u);
    }
L_001ba72c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x18u);
    }
L_001ba730:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001ba734:;
    {
        cpu->r[14] = 0x001ba738u; fn_001b3dec(cpu);
    }
L_001ba738:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001ba73c:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[5]);
    }
L_001ba740:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ba744:;
    {
        wr32(cpu->r[4] + + 0x68u, cpu->r[3]);
    }
L_001ba748:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[3]);
    }
L_001ba74c:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[3]);
    }
L_001ba750:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[3]);
    }
L_001ba754:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[3]);
    }
L_001ba758:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[3]);
    }
L_001ba75c:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
    }
L_001ba760:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[3]);
    }
L_001ba764:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[3]);
    }
L_001ba768:;
    {
        wr32(cpu->r[4] + + 0x5cu, cpu->r[3]);
    }
L_001ba76c:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[3]);
    }
L_001ba770:;
    {
        wr32(cpu->r[4] + + 0x70u, cpu->r[3]);
    }
L_001ba774:;
    {
        wr32(cpu->r[4] + + 0x64u, cpu->r[3]);
    }
L_001ba778:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[3]);
    }
L_001ba77c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ba780u)) return;
    }
}

/* _ZN19GLXPlayerUserFriendC2Ev @ 001ba788 (arm) */
void fn_001ba788(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ba788:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001ba78c:;
    {
        cpu->r[5] = rd32(0x001ba794u + + 0x84u);
    }
L_001ba790:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ba794:;
    {
        cpu->r[14] = 0x001ba798u; fn_001b7954(cpu);
    }
L_001ba798:;
    {
        cpu->r[3] = rd32(0x001ba7a0u + + 0x7cu);
    }
L_001ba79c:;
    {
        cpu->r[5] = add_flags(cpu, 0x001ba7a4u, cpu->r[5], 0, 0);
    }
L_001ba7a0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ba7a4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001ba7a8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001ba7ac:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001ba7b0:;
    {
        cpu->r[14] = 0x001ba7b4u; fn_001b6ba4(cpu);
    }
L_001ba7b4:;
    {
        cpu->r[0] = 0x00000428u;
    }
L_001ba7b8:;
    {
        cpu->r[14] = 0x001ba7bcu; fn_0018ba6c(cpu);
    }
L_001ba7bc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_001ba7c0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x10u);
    }
L_001ba7c4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x18u);
    }
L_001ba7c8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001ba7cc:;
    {
        cpu->r[14] = 0x001ba7d0u; fn_001b3dec(cpu);
    }
L_001ba7d0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001ba7d4:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[5]);
    }
L_001ba7d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ba7dc:;
    {
        wr32(cpu->r[4] + + 0x68u, cpu->r[3]);
    }
L_001ba7e0:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[3]);
    }
L_001ba7e4:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[3]);
    }
L_001ba7e8:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[3]);
    }
L_001ba7ec:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[3]);
    }
L_001ba7f0:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[3]);
    }
L_001ba7f4:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
    }
L_001ba7f8:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[3]);
    }
L_001ba7fc:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[3]);
    }
L_001ba800:;
    {
        wr32(cpu->r[4] + + 0x5cu, cpu->r[3]);
    }
L_001ba804:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[3]);
    }
L_001ba808:;
    {
        wr32(cpu->r[4] + + 0x70u, cpu->r[3]);
    }
L_001ba80c:;
    {
        wr32(cpu->r[4] + + 0x64u, cpu->r[3]);
    }
L_001ba810:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[3]);
    }
L_001ba814:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ba818u)) return;
    }
}

/* _ZN13GLXPlayerUser11getUserNameEv @ 001ba820 (arm) */
void fn_001ba820(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ba820:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x44u);
    }
L_001ba824:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13GLXPlayerUser11getPasswordEv @ 001ba828 (arm) */
void fn_001ba828(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ba828:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x48u);
    }
L_001ba82c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13GLXPlayerUser8getEmailEv @ 001ba830 (arm) */
void fn_001ba830(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ba830:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x50u);
    }
L_001ba834:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13GLXPlayerUser12getEmailFlagEv @ 001ba838 (arm) */
void fn_001ba838(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ba838:;
    {
        cpu->r[0] = rd8(cpu->r[0] + + 0x54u);
    }
L_001ba83c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13GLXPlayerUser10getCountryEv @ 001ba840 (arm) */
void fn_001ba840(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ba840:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x58u);
    }
L_001ba844:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13GLXPlayerUser12getFirstNameEv @ 001ba848 (arm) */
void fn_001ba848(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ba848:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x5cu);
    }
L_001ba84c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13GLXPlayerUser11getLastNameEv @ 001ba850 (arm) */
void fn_001ba850(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ba850:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x60u);
    }
L_001ba854:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13GLXPlayerUser6getSexEv @ 001ba858 (arm) */
void fn_001ba858(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ba858:;
    {
        cpu->r[0] = rd8(cpu->r[0] + + 0x64u);
    }
L_001ba85c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13GLXPlayerUser11getBirthdayEv @ 001ba860 (arm) */
void fn_001ba860(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ba860:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x68u);
    }
L_001ba864:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13GLXPlayerUser13getOnlineTimeEv @ 001ba868 (arm) */
void fn_001ba868(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ba868:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x6cu);
    }
L_001ba86c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13GLXPlayerUser14getTotalTrophyEv @ 001ba870 (arm) */
void fn_001ba870(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ba870:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x70u);
    }
L_001ba874:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13GLXPlayerUser21getNumberUserGameListEv @ 001ba878 (arm) */
void fn_001ba878(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ba878:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x80u);
    }
L_001ba87c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13GLXPlayerUser14getUserGamePIDEi @ 001ba880 (arm) */
void fn_001ba880(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ba880:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001ba884:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001ba890;
        }
    }
L_001ba888:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001ba88c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001ba890:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x74u);
    }
L_001ba894:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ba898:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
        }
    }
L_001ba89c:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001ba8a0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001ba8a4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13GLXPlayerUser15getUserGameNameEi @ 001ba8a8 (arm) */
void fn_001ba8a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ba8a8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001ba8ac:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001ba8b8;
        }
    }
L_001ba8b0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001ba8b4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001ba8b8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x78u);
    }
L_001ba8bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ba8c0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
        }
    }
L_001ba8c4:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001ba8c8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001ba8cc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13GLXPlayerUser17getUserGameTrophyEi @ 001ba8d0 (arm) */
void fn_001ba8d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ba8d0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001ba8d4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001ba8e0;
        }
    }
L_001ba8d8:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001ba8dc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001ba8e0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x7cu);
    }
L_001ba8e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ba8e8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
        }
    }
L_001ba8ec:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001ba8f0:;
    {
        goto L_001ba8d8;
    }
}

/* _ZN13GLXPlayerUser17getCurrentGamePIDEv @ 001ba8f4 (arm) */
void fn_001ba8f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ba8f4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x84u);
    }
L_001ba8f8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13GLXPlayerUser18getCurrentGameNameEv @ 001ba8fc (arm) */
void fn_001ba8fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ba8fc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x88u);
    }
L_001ba900:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13GLXPlayerUser20getCurrentGameTrophyEv @ 001ba904 (arm) */
void fn_001ba904(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ba904:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8cu);
    }
L_001ba908:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13GLXPlayerUser19getCurrentUserStateEv @ 001ba90c (arm) */
void fn_001ba90c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ba90c:;
    {
        cpu->r[0] = rd8(cpu->r[0] + + 0x90u);
    }
L_001ba910:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13GLXPlayerUser17getUserReputationEv @ 001ba914 (arm) */
void fn_001ba914(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ba914:;
    {
        uint64_t v = rd64(cpu->r[0] + + 0x98u);
        cpu->r[0] = (uint32_t)v;
        cpu->r[1] = (uint32_t)(v >> 32);
    }
L_001ba918:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13GLXPlayerUser25getUserBadReputationCountEv @ 001ba91c (arm) */
void fn_001ba91c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ba91c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xa0u);
    }
L_001ba920:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13GLXPlayerUser26getUserGoodReputationCountEv @ 001ba924 (arm) */
void fn_001ba924(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ba924:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xa4u);
    }
L_001ba928:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13GLXPlayerUser13getUserTrophyEv @ 001ba92c (arm) */
void fn_001ba92c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ba92c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xa8u);
    }
L_001ba930:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13GLXPlayerUser16getUserBestScoreEv @ 001ba934 (arm) */
void fn_001ba934(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ba934:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xacu);
    }
L_001ba938:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13GLXPlayerUser16getUserAvatarKeyEv @ 001ba93c (arm) */
void fn_001ba93c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ba93c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xb0u);
    }
L_001ba940:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13GLXPlayerUser23getUserAvatarLastUpdateEv @ 001ba944 (arm) */
void fn_001ba944(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ba944:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xb4u);
    }
L_001ba948:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13GLXPlayerUser17getUserAvatarDataEv @ 001ba94c (arm) */
void fn_001ba94c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ba94c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xb8u);
    }
L_001ba950:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13GLXPlayerUser11getUserDataEv @ 001ba954 (arm) */
void fn_001ba954(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ba954:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xbcu);
    }
L_001ba958:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13GLXPlayerUser16getOtherUserNameEv @ 001ba95c (arm) */
void fn_001ba95c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ba95c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xc0u);
    }
L_001ba960:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13GLXPlayerUser12getAvatarKeyEi @ 001ba964 (arm) */
void fn_001ba964(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ba964:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xecu);
    }
L_001ba968:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000001u, cpu->r[3], 1, 1);
    }
L_001ba96c:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001ba970:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[1], 3, 31u, &shc); cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_001ba974:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ba980;
        }
    }
L_001ba978:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001ba97c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001ba980:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xf8u);
    }
L_001ba984:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001ba988:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
        }
    }
L_001ba98c:;
    {
        if (cond_test(cpu, 12)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001ba990:;
    {
        goto L_001ba978;
    }
}

/* _ZN13GLXPlayerUser19getAvatarLastUpdateEi @ 001ba994 (arm) */
void fn_001ba994(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ba994:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xf0u);
    }
L_001ba998:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000001u, cpu->r[3], 1, 1);
    }
L_001ba99c:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001ba9a0:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[1], 3, 31u, &shc); cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_001ba9a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ba9b0;
        }
    }
L_001ba9a8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001ba9ac:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001ba9b0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xf8u);
    }
L_001ba9b4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001ba9b8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
        }
    }
L_001ba9bc:;
    {
        if (cond_test(cpu, 12)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001ba9c0:;
    {
        goto L_001ba9a8;
    }
}

/* _ZN13GLXPlayerUser15getAvatarStatusEi @ 001ba9c4 (arm) */
void fn_001ba9c4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ba9c4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xf4u);
    }
L_001ba9c8:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000001u, cpu->r[3], 1, 1);
    }
L_001ba9cc:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001ba9d0:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[1], 3, 31u, &shc); cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_001ba9d4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ba9e8;
        }
    }
L_001ba9d8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xf8u);
    }
L_001ba9dc:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001ba9e0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
        }
    }
L_001ba9e4:;
    {
        if (cond_test(cpu, 12)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001ba9e8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001ba9ec:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13GLXPlayerUser15clearAvatarListEv @ 001ba9f0 (arm) */
void fn_001ba9f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ba9f0:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0xecu);
    }
L_001ba9f4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001ba9f8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001ba9fc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001baa00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001baa58;
        }
    }
L_001baa04:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xf8u);
    }
L_001baa08:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001baa0c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001baa48;
        }
    }
L_001baa10:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001baa14:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_001baa18:;
    {
        cpu->r[2] = rd32(cpu->r[1] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001baa1c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001baa20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001baa34;
        }
    }
L_001baa24:;
    {
        cpu->r[14] = 0x001baa28u; fn_0018ba60(cpu);
    }
L_001baa28:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0xecu);
    }
L_001baa2c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xf8u);
    }
L_001baa30:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[6]);
    }
L_001baa34:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001baa38:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_001baa3c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001baa18;
        }
    }
L_001baa40:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001baa44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001baa50;
        }
    }
L_001baa48:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001baa4c:;
    {
        cpu->r[14] = 0x001baa50u; fn_0018ba60(cpu);
    }
L_001baa50:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001baa54:;
    {
        wr32(cpu->r[5] + + 0xecu, cpu->r[3]);
    }
L_001baa58:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0xf0u);
    }
L_001baa5c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001baa60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001baab8;
        }
    }
L_001baa64:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xf8u);
    }
L_001baa68:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001baa6c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001baaa8;
        }
    }
L_001baa70:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001baa74:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_001baa78:;
    {
        cpu->r[2] = rd32(cpu->r[1] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001baa7c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001baa80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001baa94;
        }
    }
L_001baa84:;
    {
        cpu->r[14] = 0x001baa88u; fn_0018ba60(cpu);
    }
L_001baa88:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0xf0u);
    }
L_001baa8c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xf8u);
    }
L_001baa90:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[6]);
    }
L_001baa94:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001baa98:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_001baa9c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001baa78;
        }
    }
L_001baaa0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001baaa4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001baab0;
        }
    }
L_001baaa8:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001baaac:;
    {
        cpu->r[14] = 0x001baab0u; fn_0018ba60(cpu);
    }
L_001baab0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001baab4:;
    {
        wr32(cpu->r[5] + + 0xf0u, cpu->r[3]);
    }
L_001baab8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xf4u);
    }
L_001baabc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001baac0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001baad0;
        }
    }
L_001baac4:;
    {
        cpu->r[14] = 0x001baac8u; fn_0018ba20(cpu);
    }
L_001baac8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001baacc:;
    {
        wr32(cpu->r[5] + + 0xf4u, cpu->r[3]);
    }
L_001baad0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001baad4:;
    {
        wr32(cpu->r[5] + + 0xf8u, cpu->r[3]);
    }
L_001baad8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001baadcu)) return;
    }
}

/* _ZN13GLXPlayerUser20clearUserInformationEv @ 001baadc (arm) */
void fn_001baadc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001baadc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001baae0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001baae4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x40u);
    }
L_001baae8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001baaec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001baafc;
        }
    }
L_001baaf0:;
    {
        cpu->r[14] = 0x001baaf4u; fn_0018ba20(cpu);
    }
L_001baaf4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001baaf8:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[3]);
    }
L_001baafc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x44u);
    }
L_001bab00:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bab04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bab14;
        }
    }
L_001bab08:;
    {
        cpu->r[14] = 0x001bab0cu; fn_0018ba20(cpu);
    }
L_001bab0c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bab10:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[3]);
    }
L_001bab14:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x50u);
    }
L_001bab18:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bab1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bab2c;
        }
    }
L_001bab20:;
    {
        cpu->r[14] = 0x001bab24u; fn_0018ba20(cpu);
    }
L_001bab24:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bab28:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[3]);
    }
L_001bab2c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x58u);
    }
L_001bab30:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bab34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bab44;
        }
    }
L_001bab38:;
    {
        cpu->r[14] = 0x001bab3cu; fn_0018ba20(cpu);
    }
L_001bab3c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bab40:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[3]);
    }
L_001bab44:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x5cu);
    }
L_001bab48:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bab4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bab5c;
        }
    }
L_001bab50:;
    {
        cpu->r[14] = 0x001bab54u; fn_0018ba20(cpu);
    }
L_001bab54:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bab58:;
    {
        wr32(cpu->r[4] + + 0x5cu, cpu->r[3]);
    }
L_001bab5c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x60u);
    }
L_001bab60:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bab64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bab74;
        }
    }
L_001bab68:;
    {
        cpu->r[14] = 0x001bab6cu; fn_0018ba20(cpu);
    }
L_001bab6c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bab70:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[3]);
    }
L_001bab74:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x68u);
    }
L_001bab78:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bab7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bab8c;
        }
    }
L_001bab80:;
    {
        cpu->r[14] = 0x001bab84u; fn_0018ba20(cpu);
    }
L_001bab84:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bab88:;
    {
        wr32(cpu->r[4] + + 0x68u, cpu->r[3]);
    }
L_001bab8c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bab90:;
    {
        wr8(cpu->r[4] + + 0x64u, cpu->r[3]);
    }
L_001bab94:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[3]);
    }
L_001bab98:;
    {
        wr32(cpu->r[4] + + 0x70u, cpu->r[3]);
    }
L_001bab9c:;
    {
        wr8(cpu->r[4] + + 0x54u, cpu->r[3]);
    }
L_001baba0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001baba4u)) return;
    }
}

/* _ZN13GLXPlayerUser14clearUserStateEv @ 001baba4 (arm) */
void fn_001baba4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001baba4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001baba8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001babac:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x84u);
    }
L_001babb0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001babb4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001babc4;
        }
    }
L_001babb8:;
    {
        cpu->r[14] = 0x001babbcu; fn_0018ba20(cpu);
    }
L_001babbc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001babc0:;
    {
        wr32(cpu->r[4] + + 0x84u, cpu->r[3]);
    }
L_001babc4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x88u);
    }
L_001babc8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001babcc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001babdc;
        }
    }
L_001babd0:;
    {
        cpu->r[14] = 0x001babd4u; fn_0018ba20(cpu);
    }
L_001babd4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001babd8:;
    {
        wr32(cpu->r[4] + + 0x88u, cpu->r[3]);
    }
L_001babdc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x94u);
    }
L_001babe0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001babe4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001babf4;
        }
    }
L_001babe8:;
    {
        cpu->r[14] = 0x001babecu; fn_0018ba20(cpu);
    }
L_001babec:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001babf0:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
    }
L_001babf4:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001babf8:;
    {
        wr32(cpu->r[4] + + 0x8cu, cpu->r[3]);
    }
L_001babfc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bac00:;
    {
        wr8(cpu->r[4] + + 0x90u, cpu->r[3]);
    }
L_001bac04:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001bac08u)) return;
    }
}

/* _ZN13GLXPlayerUser17clearUserGameListEv @ 001bac08 (arm) */
void fn_001bac08(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bac08:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x74u);
    }
L_001bac0c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001bac10:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001bac14:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001bac18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bac70;
        }
    }
L_001bac1c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x80u);
    }
L_001bac20:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001bac24:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001bac60;
        }
    }
L_001bac28:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001bac2c:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_001bac30:;
    {
        cpu->r[2] = rd32(cpu->r[1] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001bac34:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001bac38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bac4c;
        }
    }
L_001bac3c:;
    {
        cpu->r[14] = 0x001bac40u; fn_0018ba60(cpu);
    }
L_001bac40:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x74u);
    }
L_001bac44:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x80u);
    }
L_001bac48:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[6]);
    }
L_001bac4c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001bac50:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_001bac54:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001bac30;
        }
    }
L_001bac58:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001bac5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bac68;
        }
    }
L_001bac60:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001bac64:;
    {
        cpu->r[14] = 0x001bac68u; fn_0018ba60(cpu);
    }
L_001bac68:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bac6c:;
    {
        wr32(cpu->r[5] + + 0x74u, cpu->r[3]);
    }
L_001bac70:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x78u);
    }
L_001bac74:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001bac78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bacd0;
        }
    }
L_001bac7c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x80u);
    }
L_001bac80:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001bac84:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001bacc0;
        }
    }
L_001bac88:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001bac8c:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_001bac90:;
    {
        cpu->r[2] = rd32(cpu->r[1] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001bac94:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001bac98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bacac;
        }
    }
L_001bac9c:;
    {
        cpu->r[14] = 0x001baca0u; fn_0018ba60(cpu);
    }
L_001baca0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x78u);
    }
L_001baca4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x80u);
    }
L_001baca8:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[6]);
    }
L_001bacac:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001bacb0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_001bacb4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001bac90;
        }
    }
L_001bacb8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001bacbc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bacc8;
        }
    }
L_001bacc0:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001bacc4:;
    {
        cpu->r[14] = 0x001bacc8u; fn_0018ba60(cpu);
    }
L_001bacc8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001baccc:;
    {
        wr32(cpu->r[5] + + 0x78u, cpu->r[3]);
    }
L_001bacd0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x7cu);
    }
L_001bacd4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bacd8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bace8;
        }
    }
L_001bacdc:;
    {
        cpu->r[14] = 0x001bace0u; fn_0018ba20(cpu);
    }
L_001bace0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bace4:;
    {
        wr32(cpu->r[5] + + 0x7cu, cpu->r[3]);
    }
L_001bace8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bacec:;
    {
        wr32(cpu->r[5] + + 0x80u, cpu->r[3]);
    }
L_001bacf0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bacf4u)) return;
    }
}

/* _ZN13GLXPlayerUser17processGetADV_RSSEPc @ 001bacf4 (arm) */
void fn_001bacf4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bacf4:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001bacf8:;
    {
        cpu->r[4] = rd32(0x001bad00u + + 0x88u);
    }
L_001bacfc:;
    {
        cpu->r[6] = rd32(0x001bad04u + + 0x88u);
    }
L_001bad00:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000050u, 1, 0);
    }
L_001bad04:;
    {
        cpu->r[4] = add_flags(cpu, 0x001bad0cu, cpu->r[4], 0, 0);
    }
L_001bad08:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001bad0c:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001bad10:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001bad14:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001bad18:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bad1c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bad20:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[3]);
    }
L_001bad24:;
    {
        cpu->r[14] = 0x001bad28u; fn_001cc0f8(cpu);
    }
L_001bad28:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001bad2c:;
    {
        cpu->r[14] = 0x001bad30u; fn_001d0434(cpu);
    }
L_001bad30:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001bad34:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001bad38:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bad3c:;
    {
        cpu->r[14] = 0x001bad40u; fn_001cc86c(cpu);
    }
L_001bad40:;
    {
        cpu->r[1] = rd32(0x001bad48u + + 0x48u);
    }
L_001bad44:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bad48:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bad50u, cpu->r[1], 0, 0);
    }
L_001bad4c:;
    {
        cpu->r[14] = 0x001bad50u; fn_001cbf74(cpu);
    }
L_001bad50:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bad54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bad60;
        }
    }
L_001bad58:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], 0x000000e0u, 0, 0);
    }
L_001bad5c:;
    {
        cpu->r[14] = 0x001bad60u; fn_001cf730(cpu);
    }
L_001bad60:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bad64:;
    {
        cpu->r[14] = 0x001bad68u; fn_001cc354(cpu);
    }
L_001bad68:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001bad6c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4cu);
    }
L_001bad70:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bad74:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001bad78:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001bad84;
        }
    }
L_001bad7c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000050u, 0, 0);
    }
L_001bad80:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bad84u)) return;
    }
L_001bad84:;
    {
        cpu->r[14] = 0x001bad88u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001bad88:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[12], 2, 14u, &shc); uint32_t t = v; if (guest_pc_write(cpu, t, entry_lr, 0x001bad8cu)) return;
        }
    }
L_001bad8c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001bad90:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[8], 1, (cpu->r[6] & 0xffu), &shc); cpu->r[5] = v;
        }
    }
}

/* _ZN13GLXPlayerUser20processRssAttachmentEPc @ 001bad94 (arm) */
void fn_001bad94(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bad94:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001bad98:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001bad9c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xd0u);
    }
L_001bada0:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001bada4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bada8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001badb8;
        }
    }
L_001badac:;
    {
        cpu->r[14] = 0x001badb0u; fn_0018ba20(cpu);
    }
L_001badb0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001badb4:;
    {
        wr32(cpu->r[4] + + 0xd0u, cpu->r[3]);
    }
L_001badb8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001badbc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001badc0u)) return;
        }
    }
L_001badc0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001badc4:;
    {
        cpu->r[14] = 0x001badc8u; fn_001d0434(cpu);
    }
L_001badc8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001badcc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001badd0u)) return;
        }
    }
L_001badd0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001badd4:;
    {
        cpu->r[14] = 0x001badd8u; fn_001d0ce8(cpu);
    }
L_001badd8:;
    {
        wr32(cpu->r[4] + + 0xd0u, cpu->r[0]);
    }
L_001baddc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bade0u)) return;
    }
}

/* _ZN13GLXPlayerUser21processUserTrophyIconEPc @ 001bade0 (arm) */
void fn_001bade0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bade0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001bade4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001bade8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xc8u);
    }
L_001badec:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001badf0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001badf4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bae04;
        }
    }
L_001badf8:;
    {
        cpu->r[14] = 0x001badfcu; fn_0018ba20(cpu);
    }
L_001badfc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bae00:;
    {
        wr32(cpu->r[4] + + 0xc8u, cpu->r[3]);
    }
L_001bae04:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001bae08:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bae0cu)) return;
        }
    }
L_001bae0c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bae10:;
    {
        cpu->r[14] = 0x001bae14u; fn_001d0434(cpu);
    }
L_001bae14:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bae18:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bae1cu)) return;
        }
    }
L_001bae1c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bae20:;
    {
        cpu->r[14] = 0x001bae24u; fn_001d0ce8(cpu);
    }
L_001bae24:;
    {
        wr32(cpu->r[4] + + 0xc8u, cpu->r[0]);
    }
L_001bae28:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bae2cu)) return;
    }
}

/* _ZN13GLXPlayerUser11setPasswordEPc @ 001bae2c (arm) */
void fn_001bae2c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bae2c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001bae30:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001bae34:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x48u);
    }
L_001bae38:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001bae3c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bae40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bae50;
        }
    }
L_001bae44:;
    {
        cpu->r[14] = 0x001bae48u; fn_0018ba20(cpu);
    }
L_001bae48:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bae4c:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[3]);
    }
L_001bae50:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bae54:;
    {
        cpu->r[14] = 0x001bae58u; fn_001d0ce8(cpu);
    }
L_001bae58:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[0]);
    }
L_001bae5c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bae60u)) return;
    }
}

/* _ZN13GLXPlayerUser19processUserGameIconEPc @ 001bae60 (arm) */
void fn_001bae60(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bae60:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001bae64:;
    {
        cpu->r[4] = rd32(0x001bae6cu + + 0xf0u);
    }
L_001bae68:;
    {
        cpu->r[7] = rd32(0x001bae70u + + 0xf0u);
    }
L_001bae6c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001bae70:;
    {
        cpu->r[4] = add_flags(cpu, 0x001bae78u, cpu->r[4], 0, 0);
    }
L_001bae74:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xc4u);
    }
L_001bae78:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000028u, 1, 0);
    }
L_001bae7c:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001bae80:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001bae84:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bae88:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bae8c:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_001bae90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001baea0;
        }
    }
L_001bae94:;
    {
        cpu->r[14] = 0x001bae98u; fn_0018ba60(cpu);
    }
L_001bae98:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bae9c:;
    {
        wr32(cpu->r[6] + + 0xc4u, cpu->r[3]);
    }
L_001baea0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001baea4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001baf3c;
        }
    }
L_001baea8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001baeac:;
    {
        cpu->r[14] = 0x001baeb0u; fn_001d0434(cpu);
    }
L_001baeb0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001baeb4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001baf3c;
        }
    }
L_001baeb8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], 0x000000c4u, 0, 0);
    }
L_001baebc:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001baec0:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001baec4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001baec8:;
    {
        cpu->r[14] = 0x001baeccu; fn_001d0988(cpu);
    }
L_001baecc:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001baed0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], 0x000000d4u, 0, 0);
    }
L_001baed4:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_001baed8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001baedc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_001baee0:;
    {
        cpu->r[14] = 0x001baee4u; fn_001d0048(cpu);
    }
L_001baee4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001baee8:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001baeec:;
    {
        cpu->r[2] = 0x00000020u;
    }
L_001baef0:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[12]);
        cpu->r[3] = wb_tmp;
    }
L_001baef4:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_001baef8:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[12]);
        cpu->r[3] = wb_tmp;
    }
L_001baefc:;
    {
        uint32_t wb_tmp = cpu->r[8] + - 0x24u;
        wr32(cpu->r[8] + - 0x24u, cpu->r[12]);
        cpu->r[8] = wb_tmp;
    }
L_001baf00:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001baf04:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[12]);
        cpu->r[3] = wb_tmp;
    }
L_001baf08:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[12]);
        cpu->r[3] = wb_tmp;
    }
L_001baf0c:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[12]);
        cpu->r[3] = wb_tmp;
    }
L_001baf10:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[12]);
        cpu->r[3] = wb_tmp;
    }
L_001baf14:;
    {
        wr32(cpu->r[3], cpu->r[12]);
    }
L_001baf18:;
    {
        cpu->r[14] = 0x001baf1cu; fn_001d0700(cpu);
    }
L_001baf1c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001baf20:;
    {
        cpu->r[2] = 0x00000005u;
    }
L_001baf24:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001baf28:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001baf2c:;
    {
        cpu->r[14] = 0x001baf30u; fn_001d0048(cpu);
    }
L_001baf30:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001baf34:;
    {
        cpu->r[14] = 0x001baf38u; fn_001d06cc(cpu);
    }
L_001baf38:;
    {
        wr32(cpu->r[6] + + 0xdcu, cpu->r[0]);
    }
L_001baf3c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001baf40:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_001baf44:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001baf48:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001baf4c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001baf58;
        }
    }
L_001baf50:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_001baf54:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001baf58u)) return;
    }
L_001baf58:;
    {
        cpu->r[14] = 0x001baf5cu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001baf5c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[0], 3, 11u, &shc); uint32_t t = v; if (guest_pc_write(cpu, t, entry_lr, 0x001baf60u)) return;
        }
    }
L_001baf60:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN13GLXPlayerUser21processUserAvatarListEPc @ 001baf64 (arm) */
void fn_001baf64(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001baf64:;
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
L_001baf68:;
    {
        cpu->r[11] = rd32(0x001baf70u + + 0x1e0u);
    }
L_001baf6c:;
    {
        cpu->r[2] = rd32(0x001baf74u + + 0x1e0u);
    }
L_001baf70:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000b4u, 1, 0);
    }
L_001baf74:;
    {
        cpu->r[11] = add_flags(cpu, 0x001baf7cu, cpu->r[11], 0, 0);
    }
L_001baf78:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001baf7c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001baf80:;
    {
        cpu->r[3] = rd32(cpu->r[11] + cpu->r[2]);
    }
L_001baf84:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_001baf88:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001baf8c:;
    {
        wr32(cpu->r[13] + + 0xacu, cpu->r[3]);
    }
L_001baf90:;
    {
        cpu->r[14] = 0x001baf94u; fn_001ba9f0(cpu);
    }
L_001baf94:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001baf98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bb12c;
        }
    }
L_001baf9c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bafa0:;
    {
        cpu->r[14] = 0x001bafa4u; fn_001d0434(cpu);
    }
L_001bafa4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bafa8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001bafac:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[4] = 0x00000000u;
        }
    }
L_001bafb0:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[5] + + 0xf8u, cpu->r[3]);
        }
    }
L_001bafb4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001bafd4;
        }
    }
L_001bafb8:;
    {
        goto L_001bb12c;
    }
L_001bafbc:;
    {
        cpu->r[3] = rd8(cpu->r[6] + cpu->r[4]);
    }
L_001bafc0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001bafc4:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000007cu, 1, 1);
    }
L_001bafc8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[5] + + 0xf8u);
        }
    }
L_001bafcc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_001bafd0:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[5] + + 0xf8u, cpu->r[3]);
        }
    }
L_001bafd4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bafd8:;
    {
        cpu->r[14] = 0x001bafdcu; fn_001d0434(cpu);
    }
L_001bafdc:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[0], 1, 1);
    }
L_001bafe0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001bafbc;
        }
    }
L_001bafe4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xf8u);
    }
L_001bafe8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001bafec:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001baff0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x0000008cu, 0, 0);
    }
L_001baff4:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001baff8:;
    {
        cpu->r[14] = 0x001baffcu; imp__Znaj(cpu); /* _Znaj */
    }
L_001baffc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xf8u);
    }
L_001bb000:;
    {
        wr32(cpu->r[5] + + 0xecu, cpu->r[0]);
    }
L_001bb004:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001bb008:;
    {
        cpu->r[14] = 0x001bb00cu; imp__Znaj(cpu); /* _Znaj */
    }
L_001bb00c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xf8u);
    }
L_001bb010:;
    {
        wr32(cpu->r[5] + + 0xf0u, cpu->r[0]);
    }
L_001bb014:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001bb018:;
    {
        cpu->r[14] = 0x001bb01cu; imp__Znaj(cpu); /* _Znaj */
    }
L_001bb01c:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001bb020:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bb024:;
    {
        wr32(cpu->r[5] + + 0xf4u, cpu->r[0]);
    }
L_001bb028:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001bb02c:;
    {
        cpu->r[14] = 0x001bb030u; imp_memset(cpu); /* memset */
    }
L_001bb030:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xf8u);
    }
L_001bb034:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_001bb038:;
    {
        wr32(cpu->r[13] + + 0x8cu, cpu->r[4]);
    }
L_001bb03c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_001bb040:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[4]);
        cpu->r[3] = wb_tmp;
    }
L_001bb044:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[4]);
        cpu->r[3] = wb_tmp;
    }
L_001bb048:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[4]);
        cpu->r[3] = wb_tmp;
    }
L_001bb04c:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[4]);
        cpu->r[3] = wb_tmp;
    }
L_001bb050:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[4]);
        cpu->r[3] = wb_tmp;
    }
L_001bb054:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[4]);
        cpu->r[3] = wb_tmp;
    }
L_001bb058:;
    {
        wr32(cpu->r[3], cpu->r[4]);
    }
L_001bb05c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001bb12c;
        }
    }
L_001bb060:;
    {
        cpu->r[8] = cpu->r[4];
    }
L_001bb064:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001bb068:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bb06c:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001bb070:;
    {
        cpu->r[14] = 0x001bb074u; fn_001d0700(cpu);
    }
L_001bb074:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001bb078:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001bb07c:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bb080:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bb084:;
    {
        cpu->r[14] = 0x001bb088u; fn_001d0148(cpu);
    }
L_001bb088:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xecu);
    }
L_001bb08c:;
    {
        cpu->r[0] = 0x00000020u;
    }
L_001bb090:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_001bb094:;
    {
        cpu->r[14] = 0x001bb098u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bb098:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_001bb09c:;
    {
        cpu->r[9] = rd32(cpu->r[5] + + 0xf0u);
    }
L_001bb0a0:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[0]);
    }
L_001bb0a4:;
    {
        cpu->r[0] = 0x00000020u;
    }
L_001bb0a8:;
    {
        cpu->r[14] = 0x001bb0acu; imp__Znaj(cpu); /* _Znaj */
    }
L_001bb0ac:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0xf4u);
    }
L_001bb0b0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0xecu);
    }
L_001bb0b4:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001bb0b8:;
    {
        cpu->r[3] = 0x0000005eu;
    }
L_001bb0bc:;
    {
        wr32(cpu->r[12] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[8]);
    }
L_001bb0c0:;
    {
        wr32(cpu->r[9] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[0]);
    }
L_001bb0c4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bb0c8:;
    {
        cpu->r[1] = rd32(cpu->r[1] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001bb0cc:;
    {
        cpu->r[14] = 0x001bb0d0u; fn_001d0148(cpu);
    }
L_001bb0d0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0xf0u);
    }
L_001bb0d4:;
    {
        cpu->r[3] = 0x0000005eu;
    }
L_001bb0d8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001bb0dc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bb0e0:;
    {
        cpu->r[1] = rd32(cpu->r[1] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001bb0e4:;
    {
        cpu->r[14] = 0x001bb0e8u; fn_001d0148(cpu);
    }
L_001bb0e8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001bb0ec:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001bb0f0:;
    {
        cpu->r[2] = 0x00000020u;
    }
L_001bb0f4:;
    {
        cpu->r[14] = 0x001bb0f8u; fn_001d0700(cpu);
    }
L_001bb0f8:;
    {
        cpu->r[3] = 0x0000005eu;
    }
L_001bb0fc:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001bb100:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001bb104:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bb108:;
    {
        cpu->r[14] = 0x001bb10cu; fn_001d0148(cpu);
    }
L_001bb10c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001bb110:;
    {
        cpu->r[9] = rd32(cpu->r[5] + + 0xf4u);
    }
L_001bb114:;
    {
        cpu->r[14] = 0x001bb118u; fn_001d06cc(cpu);
    }
L_001bb118:;
    {
        wr32(cpu->r[9] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[0]);
    }
L_001bb11c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001bb120:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xf8u);
    }
L_001bb124:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_001bb128:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001bb064;
        }
    }
L_001bb12c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_001bb130:;
    {
        cpu->r[3] = rd32(cpu->r[11] + cpu->r[2]);
    }
L_001bb134:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xacu);
    }
L_001bb138:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bb13c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001bb140:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001bb14c;
        }
    }
L_001bb144:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000b4u, 0, 0);
    }
L_001bb148:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bb14cu)) return;
    }
L_001bb14c:;
    {
        cpu->r[14] = 0x001bb150u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001bb150:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[12] * cpu->r[4]; cpu->r[8] = v;
        }
    }
L_001bb154:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN13GLXPlayerUser15processUserDataEPc @ 001bb158 (arm) */
void fn_001bb158(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bb158:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001bb15c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001bb160:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xbcu);
    }
L_001bb164:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001bb168:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bb16c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bb17c;
        }
    }
L_001bb170:;
    {
        cpu->r[14] = 0x001bb174u; fn_0018ba20(cpu);
    }
L_001bb174:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bb178:;
    {
        wr32(cpu->r[5] + + 0xbcu, cpu->r[3]);
    }
L_001bb17c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001bb180:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bb184u)) return;
        }
    }
L_001bb184:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bb188:;
    {
        cpu->r[14] = 0x001bb18cu; fn_001d0434(cpu);
    }
L_001bb18c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bb190:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bb194u)) return;
        }
    }
L_001bb194:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bb198:;
    {
        cpu->r[14] = 0x001bb19cu; fn_001d0434(cpu);
    }
L_001bb19c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001bb1a0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bb1a4:;
    {
        cpu->r[14] = 0x001bb1a8u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bb1a8:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001bb1ac:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bb1b0:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001bb1b4:;
    {
        cpu->r[14] = 0x001bb1b8u; fn_001d0700(cpu);
    }
L_001bb1b8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001bb1bc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001bb1c0:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bb1c4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bb1c8:;
    {
        cpu->r[14] = 0x001bb1ccu; fn_001d0148(cpu);
    }
L_001bb1cc:;
    {
        cpu->r[1] = rd32(0x001bb1d4u + + 0x7cu);
    }
L_001bb1d0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001bb1d4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bb1dcu, cpu->r[1], 0, 0);
    }
L_001bb1d8:;
    {
        cpu->r[14] = 0x001bb1dcu; fn_001d06e8(cpu);
    }
L_001bb1dc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bb1e0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[8] = 0x00000000u;
        }
    }
L_001bb1e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bb228;
        }
    }
L_001bb1e8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bb1ec:;
    {
        cpu->r[14] = 0x001bb1f0u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bb1f0:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001bb1f4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bb1f8:;
    {
        wr32(cpu->r[5] + + 0xbcu, cpu->r[0]);
    }
L_001bb1fc:;
    {
        cpu->r[14] = 0x001bb200u; fn_001d0700(cpu);
    }
L_001bb200:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bb204:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0xbcu);
    }
L_001bb208:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001bb20c:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bb210:;
    {
        cpu->r[14] = 0x001bb214u; fn_001d0148(cpu);
    }
L_001bb214:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001bb218:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bb21cu)) return;
        }
    }
L_001bb21c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001bb220:;
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
L_001bb224:;
    {
        return fn_0018ba20(cpu);
    }
L_001bb228:;
    {
        cpu->r[0] = 0x0000000fu;
    }
L_001bb22c:;
    {
        cpu->r[8] = 0x00000002u;
    }
L_001bb230:;
    {
        cpu->r[14] = 0x001bb234u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bb234:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001bb238:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bb23c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001bb240:;
    {
        wr32(cpu->r[5] + + 0xc0u, cpu->r[0]);
    }
L_001bb244:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bb248:;
    {
        cpu->r[14] = 0x001bb24cu; fn_001d0148(cpu);
    }
L_001bb24c:;
    {
        goto L_001bb1e8;
    }
}

/* _ZN13GLXPlayerUser19processUploadAvatarEPc @ 001bb254 (arm) */
void fn_001bb254(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bb254:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001bb258:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001bb25c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xb0u);
    }
L_001bb260:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001bb264:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bb268:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bb278;
        }
    }
L_001bb26c:;
    {
        cpu->r[14] = 0x001bb270u; fn_0018ba20(cpu);
    }
L_001bb270:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bb274:;
    {
        wr32(cpu->r[4] + + 0xb0u, cpu->r[3]);
    }
L_001bb278:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb4u);
    }
L_001bb27c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bb280:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bb290;
        }
    }
L_001bb284:;
    {
        cpu->r[14] = 0x001bb288u; fn_0018ba20(cpu);
    }
L_001bb288:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bb28c:;
    {
        wr32(cpu->r[4] + + 0xb4u, cpu->r[3]);
    }
L_001bb290:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001bb294:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bb298u)) return;
        }
    }
L_001bb298:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bb29c:;
    {
        cpu->r[14] = 0x001bb2a0u; fn_001d0434(cpu);
    }
L_001bb2a0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bb2a4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bb2a8u)) return;
        }
    }
L_001bb2a8:;
    {
        cpu->r[0] = 0x00000020u;
    }
L_001bb2ac:;
    {
        cpu->r[14] = 0x001bb2b0u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bb2b0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bb2b4:;
    {
        cpu->r[2] = 0x00000020u;
    }
L_001bb2b8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001bb2bc:;
    {
        cpu->r[14] = 0x001bb2c0u; fn_001d0700(cpu);
    }
L_001bb2c0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bb2c4:;
    {
        cpu->r[2] = 0x00000020u;
    }
L_001bb2c8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bb2cc:;
    {
        cpu->r[14] = 0x001bb2d0u; fn_001d0700(cpu);
    }
L_001bb2d0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001bb2d4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001bb2d8:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bb2dc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bb2e0:;
    {
        cpu->r[14] = 0x001bb2e4u; fn_001d0148(cpu);
    }
L_001bb2e4:;
    {
        cpu->r[1] = rd32(0x001bb2ecu + + 0xd8u);
    }
L_001bb2e8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bb2ec:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bb2f4u, cpu->r[1], 0, 0);
    }
L_001bb2f0:;
    {
        cpu->r[14] = 0x001bb2f4u; fn_001d06e8(cpu);
    }
L_001bb2f4:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bb2f8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[8] = 0x00000002u;
        }
    }
L_001bb2fc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = 0x00000001u;
        }
    }
L_001bb300:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bb354;
        }
    }
L_001bb304:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bb308:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bb30c:;
    {
        cpu->r[2] = 0x00000020u;
    }
L_001bb310:;
    {
        cpu->r[14] = 0x001bb314u; fn_001d0700(cpu);
    }
L_001bb314:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001bb318:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001bb31c:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bb320:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bb324:;
    {
        cpu->r[14] = 0x001bb328u; fn_001d0148(cpu);
    }
L_001bb328:;
    {
        cpu->r[1] = rd32(0x001bb330u + + 0x98u);
    }
L_001bb32c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bb330:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bb338u, cpu->r[1], 0, 0);
    }
L_001bb334:;
    {
        cpu->r[14] = 0x001bb338u; fn_001d06e8(cpu);
    }
L_001bb338:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bb33c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bb38c;
        }
    }
L_001bb340:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001bb344:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bb348u)) return;
        }
    }
L_001bb348:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bb34c:;
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
L_001bb350:;
    {
        return fn_0018ba20(cpu);
    }
L_001bb354:;
    {
        cpu->r[0] = 0x00000020u;
    }
L_001bb358:;
    {
        cpu->r[8] = 0x00000003u;
    }
L_001bb35c:;
    {
        cpu->r[14] = 0x001bb360u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bb360:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001bb364:;
    {
        cpu->r[2] = 0x00000020u;
    }
L_001bb368:;
    {
        cpu->r[7] = 0x00000002u;
    }
L_001bb36c:;
    {
        wr32(cpu->r[4] + + 0xb0u, cpu->r[0]);
    }
L_001bb370:;
    {
        cpu->r[14] = 0x001bb374u; fn_001d0700(cpu);
    }
L_001bb374:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bb378:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xb0u);
    }
L_001bb37c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001bb380:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bb384:;
    {
        cpu->r[14] = 0x001bb388u; fn_001d0148(cpu);
    }
L_001bb388:;
    {
        goto L_001bb304;
    }
L_001bb38c:;
    {
        cpu->r[0] = 0x00000020u;
    }
L_001bb390:;
    {
        cpu->r[14] = 0x001bb394u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bb394:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001bb398:;
    {
        cpu->r[2] = 0x00000020u;
    }
L_001bb39c:;
    {
        wr32(cpu->r[4] + + 0xb4u, cpu->r[0]);
    }
L_001bb3a0:;
    {
        cpu->r[14] = 0x001bb3a4u; fn_001d0700(cpu);
    }
L_001bb3a4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bb3a8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xb4u);
    }
L_001bb3ac:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001bb3b0:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bb3b4:;
    {
        cpu->r[14] = 0x001bb3b8u; fn_001d0148(cpu);
    }
L_001bb3b8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001bb3bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001bb348;
        }
    }
L_001bb3c0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bb3c4u)) return;
    }
}

/* _ZN13GLXPlayerUser21processDownloadAvatarEPc @ 001bb3cc (arm) */
void fn_001bb3cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bb3cc:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001bb3d0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001bb3d4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xb8u);
    }
L_001bb3d8:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001bb3dc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bb3e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bb3f0;
        }
    }
L_001bb3e4:;
    {
        cpu->r[14] = 0x001bb3e8u; fn_0018ba20(cpu);
    }
L_001bb3e8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bb3ec:;
    {
        wr32(cpu->r[5] + + 0xb8u, cpu->r[3]);
    }
L_001bb3f0:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001bb3f4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bb3f8u)) return;
        }
    }
L_001bb3f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bb3fc:;
    {
        cpu->r[14] = 0x001bb400u; fn_001d0434(cpu);
    }
L_001bb400:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bb404:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bb408u)) return;
        }
    }
L_001bb408:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bb40c:;
    {
        cpu->r[14] = 0x001bb410u; fn_001d0434(cpu);
    }
L_001bb410:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001bb414:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001bb418:;
    {
        cpu->r[14] = 0x001bb41cu; imp__Znaj(cpu); /* _Znaj */
    }
L_001bb41c:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001bb420:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bb424:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001bb428:;
    {
        cpu->r[14] = 0x001bb42cu; fn_001d0700(cpu);
    }
L_001bb42c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001bb430:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001bb434:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bb438:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bb43c:;
    {
        cpu->r[14] = 0x001bb440u; fn_001d0148(cpu);
    }
L_001bb440:;
    {
        cpu->r[1] = rd32(0x001bb448u + + 0x88u);
    }
L_001bb444:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bb448:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bb450u, cpu->r[1], 0, 0);
    }
L_001bb44c:;
    {
        cpu->r[14] = 0x001bb450u; fn_001d06e8(cpu);
    }
L_001bb450:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bb454:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bb478;
        }
    }
L_001bb458:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bb45c:;
    {
        cpu->r[14] = 0x001bb460u; fn_001d0ce8(cpu);
    }
L_001bb460:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001bb464:;
    {
        wr32(cpu->r[5] + + 0xb8u, cpu->r[0]);
    }
L_001bb468:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bb46cu)) return;
        }
    }
L_001bb46c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bb470:;
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
L_001bb474:;
    {
        return fn_0018ba20(cpu);
    }
L_001bb478:;
    {
        cpu->r[0] = 0x0000000fu;
    }
L_001bb47c:;
    {
        cpu->r[14] = 0x001bb480u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bb480:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bb484:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001bb488:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001bb48c:;
    {
        wr32(cpu->r[5] + + 0xc0u, cpu->r[0]);
    }
L_001bb490:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bb494:;
    {
        cpu->r[14] = 0x001bb498u; fn_001d0148(cpu);
    }
L_001bb498:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001bb49c:;
    {
        cpu->r[14] = 0x001bb4a0u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bb4a0:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001bb4a4:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001bb4a8:;
    {
        wr32(cpu->r[5] + + 0xb8u, cpu->r[0]);
    }
L_001bb4ac:;
    {
        cpu->r[14] = 0x001bb4b0u; fn_001d0700(cpu);
    }
L_001bb4b0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bb4b4:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0xb8u);
    }
L_001bb4b8:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001bb4bc:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bb4c0:;
    {
        cpu->r[14] = 0x001bb4c4u; fn_001d0148(cpu);
    }
L_001bb4c4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001bb4c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001bb46c;
        }
    }
L_001bb4cc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bb4d0u)) return;
    }
}

/* _ZN13GLXPlayerUser17processUserAvatarEPc @ 001bb4d4 (arm) */
void fn_001bb4d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bb4d4:;
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
L_001bb4d8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001bb4dc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xb0u);
    }
L_001bb4e0:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001bb4e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bb4e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bb4f8;
        }
    }
L_001bb4ec:;
    {
        cpu->r[14] = 0x001bb4f0u; fn_0018ba20(cpu);
    }
L_001bb4f0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bb4f4:;
    {
        wr32(cpu->r[4] + + 0xb0u, cpu->r[3]);
    }
L_001bb4f8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xb4u);
    }
L_001bb4fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bb500:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bb510;
        }
    }
L_001bb504:;
    {
        cpu->r[14] = 0x001bb508u; fn_0018ba20(cpu);
    }
L_001bb508:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bb50c:;
    {
        wr32(cpu->r[4] + + 0xb4u, cpu->r[3]);
    }
L_001bb510:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001bb514:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bb518u)) return;
        }
    }
L_001bb518:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bb51c:;
    {
        cpu->r[14] = 0x001bb520u; fn_001d0434(cpu);
    }
L_001bb520:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bb524:;
    {
        if (cond_test(cpu, 14)) {
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bb528u)) return;
        }
    }
L_001bb528:;
    {
        cpu->r[0] = 0x00000020u;
    }
L_001bb52c:;
    {
        cpu->r[14] = 0x001bb530u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bb530:;
    {
        cpu->r[2] = 0x00000020u;
    }
L_001bb534:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bb538:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001bb53c:;
    {
        cpu->r[14] = 0x001bb540u; fn_001d0700(cpu);
    }
L_001bb540:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001bb544:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001bb548:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bb54c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bb550:;
    {
        cpu->r[14] = 0x001bb554u; fn_001d0148(cpu);
    }
L_001bb554:;
    {
        cpu->r[1] = rd32(0x001bb55cu + + 0x14cu);
    }
L_001bb558:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bb55c:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bb564u, cpu->r[1], 0, 0);
    }
L_001bb560:;
    {
        cpu->r[14] = 0x001bb564u; fn_001d06e8(cpu);
    }
L_001bb564:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bb568:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = 0x00000002u;
        }
    }
L_001bb56c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[8] = 0x00000001u;
        }
    }
L_001bb570:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[10] = 0x00000000u;
        }
    }
L_001bb574:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bb60c;
        }
    }
L_001bb578:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bb57c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bb580:;
    {
        cpu->r[2] = 0x00000020u;
    }
L_001bb584:;
    {
        cpu->r[14] = 0x001bb588u; fn_001d0700(cpu);
    }
L_001bb588:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001bb58c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001bb590:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bb594:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bb598:;
    {
        cpu->r[14] = 0x001bb59cu; fn_001d0148(cpu);
    }
L_001bb59c:;
    {
        cpu->r[1] = rd32(0x001bb5a4u + + 0x108u);
    }
L_001bb5a0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bb5a4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bb5acu, cpu->r[1], 0, 0);
    }
L_001bb5a8:;
    {
        cpu->r[14] = 0x001bb5acu; fn_001d06e8(cpu);
    }
L_001bb5ac:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bb5b0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[10] = cpu->r[7];
        }
    }
L_001bb5b4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = cpu->r[8];
        }
    }
L_001bb5b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bb674;
        }
    }
L_001bb5bc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bb5c0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bb5c4:;
    {
        cpu->r[2] = 0x00000020u;
    }
L_001bb5c8:;
    {
        cpu->r[14] = 0x001bb5ccu; fn_001d0700(cpu);
    }
L_001bb5cc:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001bb5d0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001bb5d4:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bb5d8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bb5dc:;
    {
        cpu->r[14] = 0x001bb5e0u; fn_001d0148(cpu);
    }
L_001bb5e0:;
    {
        cpu->r[1] = rd32(0x001bb5e8u + + 0xc8u);
    }
L_001bb5e4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bb5e8:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bb5f0u, cpu->r[1], 0, 0);
    }
L_001bb5ec:;
    {
        cpu->r[14] = 0x001bb5f0u; fn_001d06e8(cpu);
    }
L_001bb5f0:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bb5f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bb63c;
        }
    }
L_001bb5f8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001bb5fc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bb600u)) return;
        }
    }
L_001bb600:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bb604:;
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
L_001bb608:;
    {
        return fn_0018ba20(cpu);
    }
L_001bb60c:;
    {
        cpu->r[0] = 0x0000000fu;
    }
L_001bb610:;
    {
        cpu->r[7] = 0x00000004u;
    }
L_001bb614:;
    {
        cpu->r[14] = 0x001bb618u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bb618:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001bb61c:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bb620:;
    {
        cpu->r[8] = 0x00000003u;
    }
L_001bb624:;
    {
        cpu->r[10] = 0x00000002u;
    }
L_001bb628:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001bb62c:;
    {
        wr32(cpu->r[4] + + 0xc0u, cpu->r[0]);
    }
L_001bb630:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bb634:;
    {
        cpu->r[14] = 0x001bb638u; fn_001d0148(cpu);
    }
L_001bb638:;
    {
        goto L_001bb578;
    }
L_001bb63c:;
    {
        cpu->r[0] = 0x00000020u;
    }
L_001bb640:;
    {
        cpu->r[14] = 0x001bb644u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bb644:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001bb648:;
    {
        cpu->r[2] = 0x00000020u;
    }
L_001bb64c:;
    {
        wr32(cpu->r[4] + + 0xb4u, cpu->r[0]);
    }
L_001bb650:;
    {
        cpu->r[14] = 0x001bb654u; fn_001d0700(cpu);
    }
L_001bb654:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bb658:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xb4u);
    }
L_001bb65c:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001bb660:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bb664:;
    {
        cpu->r[14] = 0x001bb668u; fn_001d0148(cpu);
    }
L_001bb668:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001bb66c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001bb600;
        }
    }
L_001bb670:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bb674u)) return;
    }
L_001bb674:;
    {
        cpu->r[0] = 0x00000020u;
    }
L_001bb678:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001bb67c:;
    {
        cpu->r[14] = 0x001bb680u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bb680:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001bb684:;
    {
        cpu->r[2] = 0x00000020u;
    }
L_001bb688:;
    {
        wr32(cpu->r[4] + + 0xb0u, cpu->r[0]);
    }
L_001bb68c:;
    {
        cpu->r[14] = 0x001bb690u; fn_001d0700(cpu);
    }
L_001bb690:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bb694:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001bb698:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xb0u);
    }
L_001bb69c:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bb6a0:;
    {
        cpu->r[14] = 0x001bb6a4u; fn_001d0148(cpu);
    }
L_001bb6a4:;
    {
        goto L_001bb5bc;
    }
}

/* _ZN13GLXPlayerUser20processUserBestScoreEPc @ 001bb6b4 (arm) */
void fn_001bb6b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bb6b4:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001bb6b8:;
    {
        cpu->r[4] = rd32(0x001bb6c0u + + 0xf4u);
    }
L_001bb6bc:;
    {
        cpu->r[5] = rd32(0x001bb6c4u + + 0xf4u);
    }
L_001bb6c0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000108u, 1, 0);
    }
L_001bb6c4:;
    {
        cpu->r[4] = add_flags(cpu, 0x001bb6ccu, cpu->r[4], 0, 0);
    }
L_001bb6c8:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001bb6cc:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001bb6d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001bb6d4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bb6d8:;
    {
        wr32(cpu->r[13] + + 0x104u, cpu->r[3]);
    }
L_001bb6dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bb750;
        }
    }
L_001bb6e0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001bb6e4:;
    {
        cpu->r[14] = 0x001bb6e8u; fn_001d0434(cpu);
    }
L_001bb6e8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bb6ec:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001bb750;
        }
    }
L_001bb6f0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001bb6f4:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001bb6f8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bb6fc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bb700:;
    {
        cpu->r[14] = 0x001bb704u; imp_memset(cpu); /* memset */
    }
L_001bb704:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001bb708:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001bb70c:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bb710:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001bb714:;
    {
        cpu->r[14] = 0x001bb718u; fn_001d0148(cpu);
    }
L_001bb718:;
    {
        cpu->r[1] = rd32(0x001bb720u + + 0x9cu);
    }
L_001bb71c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bb720:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bb728u, cpu->r[1], 0, 0);
    }
L_001bb724:;
    {
        cpu->r[14] = 0x001bb728u; fn_001d06e8(cpu);
    }
L_001bb728:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bb72c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001bb730:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bb76c;
        }
    }
L_001bb734:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001bb738:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bb73c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001bb740:;
    {
        cpu->r[14] = 0x001bb744u; fn_001d0148(cpu);
    }
L_001bb744:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bb748:;
    {
        cpu->r[14] = 0x001bb74cu; fn_001d06cc(cpu);
    }
L_001bb74c:;
    {
        wr32(cpu->r[8] + + 0xacu, cpu->r[0]);
    }
L_001bb750:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001bb754:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x104u);
    }
L_001bb758:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bb75c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001bb760:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001bb7b0;
        }
    }
L_001bb764:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000108u, 0, 0);
    }
L_001bb768:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bb76cu)) return;
    }
L_001bb76c:;
    {
        cpu->r[0] = 0x0000000fu;
    }
L_001bb770:;
    {
        cpu->r[14] = 0x001bb774u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bb774:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001bb778:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bb77c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001bb780:;
    {
        wr32(cpu->r[8] + + 0xc0u, cpu->r[0]);
    }
L_001bb784:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001bb788:;
    {
        cpu->r[14] = 0x001bb78cu; fn_001d0148(cpu);
    }
L_001bb78c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001bb790:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001bb794:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bb798:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001bb79c:;
    {
        cpu->r[14] = 0x001bb7a0u; fn_001d0148(cpu);
    }
L_001bb7a0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bb7a4:;
    {
        cpu->r[14] = 0x001bb7a8u; fn_001d06cc(cpu);
    }
L_001bb7a8:;
    {
        wr32(cpu->r[8] + + 0xacu, cpu->r[0]);
    }
L_001bb7ac:;
    {
        goto L_001bb750;
    }
L_001bb7b0:;
    {
        cpu->r[14] = 0x001bb7b4u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001bb7b4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[12], 1, 26u, &shc); cpu->r[14] = v;
        }
    }
L_001bb7b8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001bb7bc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[5] & shifter(cpu->r[4], 2, 5u, &shc); cpu->r[6] = v;
        }
    }
}

/* _ZN13GLXPlayerUser22processUserInformationEPc @ 001bb7c0 (arm) */
void fn_001bb7c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bb7c0:;
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
L_001bb7c4:;
    {
        cpu->r[6] = rd32(0x001bb7ccu + + 0x464u);
    }
L_001bb7c8:;
    {
        cpu->r[9] = rd32(0x001bb7d0u + + 0x464u);
    }
L_001bb7cc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000014cu, 1, 0);
    }
L_001bb7d0:;
    {
        cpu->r[6] = add_flags(cpu, 0x001bb7d8u, cpu->r[6], 0, 0);
    }
L_001bb7d4:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001bb7d8:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001bb7dc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[9]);
    }
L_001bb7e0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bb7e4:;
    {
        wr32(cpu->r[13] + + 0x144u, cpu->r[3]);
    }
L_001bb7e8:;
    {
        cpu->r[14] = 0x001bb7ecu; fn_001baadc(cpu);
    }
L_001bb7ec:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001bb7f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bbb48;
        }
    }
L_001bb7f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bb7f8:;
    {
        cpu->r[14] = 0x001bb7fcu; fn_001d0434(cpu);
    }
L_001bb7fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bb800:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001bbb48;
        }
    }
L_001bb804:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_001bb808:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001bb80c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bb810:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001bb814:;
    {
        cpu->r[14] = 0x001bb818u; imp_memset(cpu); /* memset */
    }
L_001bb818:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001bb81c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001bb820:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bb824:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bb828:;
    {
        cpu->r[14] = 0x001bb82cu; fn_001d0148(cpu);
    }
L_001bb82c:;
    {
        cpu->r[1] = rd32(0x001bb834u + + 0x404u);
    }
L_001bb830:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001bb834:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bb83cu, cpu->r[1], 0, 0);
    }
L_001bb838:;
    {
        cpu->r[14] = 0x001bb83cu; fn_001d06e8(cpu);
    }
L_001bb83c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bb840:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bbb64;
        }
    }
L_001bb844:;
    {
        cpu->r[12] = 0x0000000cu;
    }
L_001bb848:;
    {
        cpu->r[11] = 0x0000000du;
    }
L_001bb84c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_001bb850:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001bb854:;
    {
        cpu->r[12] = 0x0000000bu;
    }
L_001bb858:;
    {
        cpu->r[3] = 0x00000009u;
    }
L_001bb85c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_001bb860:;
    {
        cpu->r[3] = 0x00000007u;
    }
L_001bb864:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001bb868:;
    {
        cpu->r[3] = 0x00000005u;
    }
L_001bb86c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_001bb870:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_001bb874:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_001bb878:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000128u, 0, 0);
    }
L_001bb87c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000148u, 0, 0);
    }
L_001bb880:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_001bb884:;
    {
        cpu->r[0] = 0x00000010u;
    }
L_001bb888:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[10]);
        cpu->r[3] = wb_tmp;
    }
L_001bb88c:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[10]);
        cpu->r[3] = wb_tmp;
    }
L_001bb890:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[10]);
        cpu->r[3] = wb_tmp;
    }
L_001bb894:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[10]);
        cpu->r[3] = wb_tmp;
    }
L_001bb898:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[10]);
        cpu->r[3] = wb_tmp;
    }
L_001bb89c:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[10]);
        cpu->r[3] = wb_tmp;
    }
L_001bb8a0:;
    {
        wr32(cpu->r[3], cpu->r[10]);
    }
L_001bb8a4:;
    {
        uint32_t wb_tmp = cpu->r[5] + - 0x24u;
        wr32(cpu->r[5] + - 0x24u, cpu->r[10]);
        cpu->r[5] = wb_tmp;
    }
L_001bb8a8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001bb8ac:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_001bb8b0:;
    {
        cpu->r[14] = 0x001bb8b4u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bb8b4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_001bb8b8:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bb8bc:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001bb8c0:;
    {
        wr32(cpu->r[7] + + 0x40u, cpu->r[0]);
    }
L_001bb8c4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bb8c8:;
    {
        cpu->r[14] = 0x001bb8ccu; fn_001d0148(cpu);
    }
L_001bb8cc:;
    {
        cpu->r[0] = 0x00000010u;
    }
L_001bb8d0:;
    {
        cpu->r[14] = 0x001bb8d4u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bb8d4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_001bb8d8:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bb8dc:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001bb8e0:;
    {
        wr32(cpu->r[7] + + 0x44u, cpu->r[0]);
    }
L_001bb8e4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bb8e8:;
    {
        cpu->r[14] = 0x001bb8ecu; fn_001d0148(cpu);
    }
L_001bb8ec:;
    {
        cpu->r[0] = 0x00000080u;
    }
L_001bb8f0:;
    {
        cpu->r[14] = 0x001bb8f4u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bb8f4:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bb8f8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_001bb8fc:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001bb900:;
    {
        wr32(cpu->r[7] + + 0x50u, cpu->r[0]);
    }
L_001bb904:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bb908:;
    {
        cpu->r[14] = 0x001bb90cu; fn_001d0148(cpu);
    }
L_001bb90c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001bb910:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001bb914:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001bb918:;
    {
        cpu->r[14] = 0x001bb91cu; fn_001d0700(cpu);
    }
L_001bb91c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001bb920:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001bb924:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bb928:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bb92c:;
    {
        cpu->r[14] = 0x001bb930u; fn_001d0148(cpu);
    }
L_001bb930:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001bb934:;
    {
        cpu->r[14] = 0x001bb938u; fn_001d06cc(cpu);
    }
L_001bb938:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[10], 1, 1);
    }
L_001bb93c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001bb940:;
    {
        wr8(cpu->r[7] + + 0x54u, cpu->r[0]);
    }
L_001bb944:;
    {
        cpu->r[0] = 0x00000080u;
    }
L_001bb948:;
    {
        cpu->r[14] = 0x001bb94cu; imp__Znaj(cpu); /* _Znaj */
    }
L_001bb94c:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bb950:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001bb954:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001bb958:;
    {
        wr32(cpu->r[7] + + 0x58u, cpu->r[0]);
    }
L_001bb95c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bb960:;
    {
        cpu->r[14] = 0x001bb964u; fn_001d0148(cpu);
    }
L_001bb964:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001bb968:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bb96c:;
    {
        cpu->r[2] = 0x00000020u;
    }
L_001bb970:;
    {
        cpu->r[14] = 0x001bb974u; fn_001d0700(cpu);
    }
L_001bb974:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_001bb978:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001bb97c:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bb980:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001bb984:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bb988:;
    {
        cpu->r[14] = 0x001bb98cu; fn_001d0148(cpu);
    }
L_001bb98c:;
    {
        cpu->r[1] = rd32(0x001bb994u + + 0x2a8u);
    }
L_001bb990:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bb994:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bb99cu, cpu->r[1], 0, 0);
    }
L_001bb998:;
    {
        cpu->r[14] = 0x001bb99cu; fn_001d06e8(cpu);
    }
L_001bb99c:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bb9a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bbbf4;
        }
    }
L_001bb9a4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[11]);
    }
L_001bb9a8:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x10u);
    }
L_001bb9ac:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bb9b0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bb9b4:;
    {
        cpu->r[2] = 0x00000020u;
    }
L_001bb9b8:;
    {
        cpu->r[14] = 0x001bb9bcu; fn_001d0700(cpu);
    }
L_001bb9bc:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_001bb9c0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001bb9c4:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bb9c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bb9cc:;
    {
        cpu->r[14] = 0x001bb9d0u; fn_001d0148(cpu);
    }
L_001bb9d0:;
    {
        cpu->r[1] = rd32(0x001bb9d8u + + 0x268u);
    }
L_001bb9d4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bb9d8:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bb9e0u, cpu->r[1], 0, 0);
    }
L_001bb9dc:;
    {
        cpu->r[14] = 0x001bb9e0u; fn_001d06e8(cpu);
    }
L_001bb9e0:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bb9e4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[10] = rd32(cpu->r[13] + + 0xcu);
        }
    }
L_001bb9e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bbbbc;
        }
    }
L_001bb9ec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bb9f0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bb9f4:;
    {
        cpu->r[2] = 0x00000020u;
    }
L_001bb9f8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[10], 0x00000002u, 0, 0);
    }
L_001bb9fc:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_001bba00:;
    {
        cpu->r[14] = 0x001bba04u; fn_001d0700(cpu);
    }
L_001bba04:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_001bba08:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001bba0c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001bba10:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bba14:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bba18:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[12], 0x00000002u, 0, 0);
    }
L_001bba1c:;
    {
        cpu->r[14] = 0x001bba20u; fn_001d0148(cpu);
    }
L_001bba20:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bba24:;
    {
        cpu->r[14] = 0x001bba28u; fn_001d06cc(cpu);
    }
L_001bba28:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[10], 0x00000002u, 0, 0);
    }
L_001bba2c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[11], 0x00000002u, 0, 0);
    }
L_001bba30:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001bba34:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], 0x00000002u, 0, 0);
    }
L_001bba38:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001bba3c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_001bba40:;
    {
        *vfp_d(cpu,7) = (double)*(int32_t*)vfp_s(cpu,13);
    }
L_001bba44:;
    {
        cpu->r[0] = 0x00000080u;
    }
L_001bba48:;
    {
        *(uint64_t*)G(cpu->r[7] + + 0x98u) = *(uint64_t*)vfp_d(cpu, 7);
    }
L_001bba4c:;
    {
        cpu->r[14] = 0x001bba50u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bba50:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_001bba54:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bba58:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001bba5c:;
    {
        wr32(cpu->r[7] + + 0x5cu, cpu->r[0]);
    }
L_001bba60:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bba64:;
    {
        cpu->r[14] = 0x001bba68u; fn_001d0148(cpu);
    }
L_001bba68:;
    {
        cpu->r[0] = 0x00000080u;
    }
L_001bba6c:;
    {
        cpu->r[14] = 0x001bba70u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bba70:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bba74:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001bba78:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001bba7c:;
    {
        wr32(cpu->r[7] + + 0x60u, cpu->r[0]);
    }
L_001bba80:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bba84:;
    {
        cpu->r[14] = 0x001bba88u; fn_001d0148(cpu);
    }
L_001bba88:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001bba8c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bba90:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001bba94:;
    {
        cpu->r[14] = 0x001bba98u; fn_001d0700(cpu);
    }
L_001bba98:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001bba9c:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_001bbaa0:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bbaa4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bbaa8:;
    {
        cpu->r[14] = 0x001bbaacu; fn_001d0148(cpu);
    }
L_001bbaac:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001bbab0:;
    {
        cpu->r[14] = 0x001bbab4u; fn_001d06cc(cpu);
    }
L_001bbab4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bbab8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001bbabc:;
    {
        wr8(cpu->r[7] + + 0x64u, cpu->r[0]);
    }
L_001bbac0:;
    {
        cpu->r[0] = 0x00000080u;
    }
L_001bbac4:;
    {
        cpu->r[14] = 0x001bbac8u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bbac8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_001bbacc:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bbad0:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001bbad4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001bbad8:;
    {
        wr32(cpu->r[7] + + 0x68u, cpu->r[0]);
    }
L_001bbadc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bbae0:;
    {
        cpu->r[14] = 0x001bbae4u; fn_001d0148(cpu);
    }
L_001bbae4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bbae8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bbaec:;
    {
        cpu->r[2] = 0x00000020u;
    }
L_001bbaf0:;
    {
        cpu->r[14] = 0x001bbaf4u; fn_001d0700(cpu);
    }
L_001bbaf4:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bbaf8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001bbafc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001bbb00:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bbb04:;
    {
        cpu->r[14] = 0x001bbb08u; fn_001d0148(cpu);
    }
L_001bbb08:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bbb0c:;
    {
        cpu->r[14] = 0x001bbb10u; fn_001d06cc(cpu);
    }
L_001bbb10:;
    {
        cpu->r[2] = 0x00000020u;
    }
L_001bbb14:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bbb18:;
    {
        wr32(cpu->r[7] + + 0x6cu, cpu->r[0]);
    }
L_001bbb1c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bbb20:;
    {
        cpu->r[14] = 0x001bbb24u; fn_001d0700(cpu);
    }
L_001bbb24:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001bbb28:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001bbb2c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bbb30:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_001bbb34:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bbb38:;
    {
        cpu->r[14] = 0x001bbb3cu; fn_001d0148(cpu);
    }
L_001bbb3c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bbb40:;
    {
        cpu->r[14] = 0x001bbb44u; fn_001d06cc(cpu);
    }
L_001bbb44:;
    {
        wr32(cpu->r[7] + + 0x70u, cpu->r[0]);
    }
L_001bbb48:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[9]);
    }
L_001bbb4c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x144u);
    }
L_001bbb50:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bbb54:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001bbb58:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001bbc2c;
        }
    }
L_001bbb5c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000014cu, 0, 0);
    }
L_001bbb60:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bbb64u)) return;
    }
L_001bbb64:;
    {
        cpu->r[0] = 0x0000000fu;
    }
L_001bbb68:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_001bbb6c:;
    {
        cpu->r[14] = 0x001bbb70u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bbb70:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001bbb74:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bbb78:;
    {
        cpu->r[12] = 0x0000000eu;
    }
L_001bbb7c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_001bbb80:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001bbb84:;
    {
        wr32(cpu->r[7] + + 0xc0u, cpu->r[0]);
    }
L_001bbb88:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bbb8c:;
    {
        cpu->r[14] = 0x001bbb90u; fn_001d0148(cpu);
    }
L_001bbb90:;
    {
        cpu->r[3] = 0x0000000bu;
    }
L_001bbb94:;
    {
        cpu->r[12] = 0x0000000du;
    }
L_001bbb98:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_001bbb9c:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_001bbba0:;
    {
        cpu->r[3] = 0x00000009u;
    }
L_001bbba4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001bbba8:;
    {
        cpu->r[3] = 0x00000007u;
    }
L_001bbbac:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_001bbbb0:;
    {
        cpu->r[3] = 0x00000005u;
    }
L_001bbbb4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_001bbbb8:;
    {
        goto L_001bb878;
    }
L_001bbbbc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001bbbc0:;
    {
        cpu->r[0] = 0x00000020u;
    }
L_001bbbc4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001bbbc8:;
    {
        cpu->r[14] = 0x001bbbccu; imp__Znaj(cpu); /* _Znaj */
    }
L_001bbbcc:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001bbbd0:;
    {
        cpu->r[2] = 0x00000020u;
    }
L_001bbbd4:;
    {
        wr32(cpu->r[7] + + 0xb4u, cpu->r[0]);
    }
L_001bbbd8:;
    {
        cpu->r[14] = 0x001bbbdcu; fn_001d0700(cpu);
    }
L_001bbbdc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001bbbe0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bbbe4:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0xb4u);
    }
L_001bbbe8:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bbbec:;
    {
        cpu->r[14] = 0x001bbbf0u; fn_001d0148(cpu);
    }
L_001bbbf0:;
    {
        goto L_001bb9ec;
    }
L_001bbbf4:;
    {
        cpu->r[0] = 0x00000020u;
    }
L_001bbbf8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_001bbbfc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001bbc00:;
    {
        cpu->r[14] = 0x001bbc04u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bbc04:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001bbc08:;
    {
        cpu->r[2] = 0x00000020u;
    }
L_001bbc0c:;
    {
        wr32(cpu->r[7] + + 0xb0u, cpu->r[0]);
    }
L_001bbc10:;
    {
        cpu->r[14] = 0x001bbc14u; fn_001d0700(cpu);
    }
L_001bbc14:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bbc18:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_001bbc1c:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bbc20:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0xb0u);
    }
L_001bbc24:;
    {
        cpu->r[14] = 0x001bbc28u; fn_001d0148(cpu);
    }
L_001bbc28:;
    {
        goto L_001bb9ac;
    }
L_001bbc2c:;
    {
        cpu->r[14] = 0x001bbc30u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001bbc30:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[0], 1, 24u, &shc); cpu->r[14] = v;
        }
    }
L_001bbc34:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001bbc38:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[5] & shifter(cpu->r[0], 4, (cpu->r[1] & 0xffu), &shc); cpu->r[6] = v;
        }
    }
L_001bbc3c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[12], 2, (cpu->r[10] & 0xffu), &shc); cpu->r[4] = v;
        }
    }
L_001bbc40:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 4, 19u, &shc); cpu->r[4] = v;
        }
    }
}

/* _ZN13GLXPlayerUser17processUserTrophyEPc @ 001bbc44 (arm) */
void fn_001bbc44(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bbc44:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001bbc48:;
    {
        cpu->r[4] = rd32(0x001bbc50u + + 0xf4u);
    }
L_001bbc4c:;
    {
        cpu->r[5] = rd32(0x001bbc54u + + 0xf4u);
    }
L_001bbc50:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000108u, 1, 0);
    }
L_001bbc54:;
    {
        cpu->r[4] = add_flags(cpu, 0x001bbc5cu, cpu->r[4], 0, 0);
    }
L_001bbc58:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001bbc5c:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001bbc60:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001bbc64:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bbc68:;
    {
        wr32(cpu->r[13] + + 0x104u, cpu->r[3]);
    }
L_001bbc6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bbce0;
        }
    }
L_001bbc70:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001bbc74:;
    {
        cpu->r[14] = 0x001bbc78u; fn_001d0434(cpu);
    }
L_001bbc78:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bbc7c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001bbce0;
        }
    }
L_001bbc80:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001bbc84:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001bbc88:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bbc8c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bbc90:;
    {
        cpu->r[14] = 0x001bbc94u; imp_memset(cpu); /* memset */
    }
L_001bbc94:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001bbc98:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001bbc9c:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bbca0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001bbca4:;
    {
        cpu->r[14] = 0x001bbca8u; fn_001d0148(cpu);
    }
L_001bbca8:;
    {
        cpu->r[1] = rd32(0x001bbcb0u + + 0x9cu);
    }
L_001bbcac:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bbcb0:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bbcb8u, cpu->r[1], 0, 0);
    }
L_001bbcb4:;
    {
        cpu->r[14] = 0x001bbcb8u; fn_001d06e8(cpu);
    }
L_001bbcb8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bbcbc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001bbcc0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bbcfc;
        }
    }
L_001bbcc4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001bbcc8:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bbccc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001bbcd0:;
    {
        cpu->r[14] = 0x001bbcd4u; fn_001d0148(cpu);
    }
L_001bbcd4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bbcd8:;
    {
        cpu->r[14] = 0x001bbcdcu; fn_001d06cc(cpu);
    }
L_001bbcdc:;
    {
        wr32(cpu->r[8] + + 0xa8u, cpu->r[0]);
    }
L_001bbce0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001bbce4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x104u);
    }
L_001bbce8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bbcec:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001bbcf0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001bbd40;
        }
    }
L_001bbcf4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000108u, 0, 0);
    }
L_001bbcf8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bbcfcu)) return;
    }
L_001bbcfc:;
    {
        cpu->r[0] = 0x0000000fu;
    }
L_001bbd00:;
    {
        cpu->r[14] = 0x001bbd04u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bbd04:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001bbd08:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bbd0c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001bbd10:;
    {
        wr32(cpu->r[8] + + 0xc0u, cpu->r[0]);
    }
L_001bbd14:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001bbd18:;
    {
        cpu->r[14] = 0x001bbd1cu; fn_001d0148(cpu);
    }
L_001bbd1c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001bbd20:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001bbd24:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bbd28:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001bbd2c:;
    {
        cpu->r[14] = 0x001bbd30u; fn_001d0148(cpu);
    }
L_001bbd30:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bbd34:;
    {
        cpu->r[14] = 0x001bbd38u; fn_001d06cc(cpu);
    }
L_001bbd38:;
    {
        wr32(cpu->r[8] + + 0xa8u, cpu->r[0]);
    }
L_001bbd3c:;
    {
        goto L_001bbce0;
    }
L_001bbd40:;
    {
        cpu->r[14] = 0x001bbd44u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001bbd44:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[8] + (-cpu->r[12]);
        wr16(cpu->r[8], cpu->r[14]);
        cpu->r[8] = wb_tmp;
        }
    }
L_001bbd48:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001bbd4c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[5] + (-cpu->r[4]);
        wr64(cpu->r[5], ((uint64_t)cpu->r[6] << 32) | cpu->r[5]);
        cpu->r[5] = wb_tmp;
        }
    }
}

/* _ZN13GLXPlayerUser16processUserStateEPc @ 001bbd50 (arm) */
void fn_001bbd50(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bbd50:;
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
L_001bbd54:;
    {
        cpu->r[4] = rd32(0x001bbd5cu + + 0x258u);
    }
L_001bbd58:;
    {
        cpu->r[6] = rd32(0x001bbd60u + + 0x258u);
    }
L_001bbd5c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000011cu, 1, 0);
    }
L_001bbd60:;
    {
        cpu->r[4] = add_flags(cpu, 0x001bbd68u, cpu->r[4], 0, 0);
    }
L_001bbd64:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001bbd68:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001bbd6c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001bbd70:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bbd74:;
    {
        wr32(cpu->r[13] + + 0x114u, cpu->r[3]);
    }
L_001bbd78:;
    {
        cpu->r[14] = 0x001bbd7cu; fn_001baba4(cpu);
    }
L_001bbd7c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001bbd80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bbe70;
        }
    }
L_001bbd84:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bbd88:;
    {
        cpu->r[14] = 0x001bbd8cu; fn_001d0434(cpu);
    }
L_001bbd8c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bbd90:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001bbe70;
        }
    }
L_001bbd94:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_001bbd98:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001bbd9c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001bbda0:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001bbda4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001bbda8:;
    {
        cpu->r[14] = 0x001bbdacu; imp_memset(cpu); /* memset */
    }
L_001bbdac:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001bbdb0:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001bbdb4:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bbdb8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bbdbc:;
    {
        wr32(cpu->r[13] + + 0x10cu, cpu->r[10]);
    }
L_001bbdc0:;
    {
        wr32(cpu->r[13] + + 0x110u, cpu->r[10]);
    }
L_001bbdc4:;
    {
        cpu->r[14] = 0x001bbdc8u; fn_001d0148(cpu);
    }
L_001bbdc8:;
    {
        cpu->r[1] = rd32(0x001bbdd0u + + 0x1ecu);
    }
L_001bbdcc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001bbdd0:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bbdd8u, cpu->r[1], 0, 0);
    }
L_001bbdd4:;
    {
        cpu->r[14] = 0x001bbdd8u; fn_001d06e8(cpu);
    }
L_001bbdd8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[10], 1, 1);
    }
L_001bbddc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bbf40;
        }
    }
L_001bbde0:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001bbde4:;
    {
        cpu->r[9] = 0x00000002u;
    }
L_001bbde8:;
    {
        cpu->r[11] = 0x00000001u;
    }
L_001bbdec:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_001bbdf0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001bbdf4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001bbdf8:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bbdfc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bbe00:;
    {
        cpu->r[14] = 0x001bbe04u; fn_001d0148(cpu);
    }
L_001bbe04:;
    {
        cpu->r[1] = rd32(0x001bbe0cu + + 0x1b4u);
    }
L_001bbe08:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001bbe0c:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bbe14u, cpu->r[1], 0, 0);
    }
L_001bbe10:;
    {
        cpu->r[14] = 0x001bbe14u; fn_001d06e8(cpu);
    }
L_001bbe14:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bbe18:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[10] = cpu->r[9];
        }
    }
L_001bbe1c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[9] = cpu->r[11];
        }
    }
L_001bbe20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bbf78;
        }
    }
L_001bbe24:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bbe28:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_001bbe2c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001bbe30:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bbe34:;
    {
        cpu->r[14] = 0x001bbe38u; fn_001d0148(cpu);
    }
L_001bbe38:;
    {
        cpu->r[0] = 0x00000010u;
    }
L_001bbe3c:;
    {
        cpu->r[14] = 0x001bbe40u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bbe40:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bbe44:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_001bbe48:;
    {
        wr32(cpu->r[8] + + 0x94u, cpu->r[0]);
    }
L_001bbe4c:;
    {
        cpu->r[14] = 0x001bbe50u; fn_001d0700(cpu);
    }
L_001bbe50:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bbe54:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bbe58:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001bbe5c:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x94u);
    }
L_001bbe60:;
    {
        cpu->r[14] = 0x001bbe64u; fn_001d0148(cpu);
    }
L_001bbe64:;
    {
        cpu->r[3] = rd8(cpu->r[8] + + 0x90u);
    }
L_001bbe68:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001bbe6c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001bbe8c;
        }
    }
L_001bbe70:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001bbe74:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x114u);
    }
L_001bbe78:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bbe7c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001bbe80:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001bbfb0;
        }
    }
L_001bbe84:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000011cu, 0, 0);
    }
L_001bbe88:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bbe8cu)) return;
    }
L_001bbe8c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001bbe90:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_001bbe94:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bbe98:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bbe9c:;
    {
        cpu->r[14] = 0x001bbea0u; fn_001d0148(cpu);
    }
L_001bbea0:;
    {
        cpu->r[1] = rd32(0x001bbea8u + + 0x11cu);
    }
L_001bbea4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001bbea8:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bbeb0u, cpu->r[1], 0, 0);
    }
L_001bbeac:;
    {
        cpu->r[14] = 0x001bbeb0u; fn_001d06e8(cpu);
    }
L_001bbeb0:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bbeb4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001bbe70;
        }
    }
L_001bbeb8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001bbebc:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001bbec0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bbec4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x0000010cu, 0, 0);
    }
L_001bbec8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001bbecc:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bbed0:;
    {
        cpu->r[14] = 0x001bbed4u; fn_001d0148(cpu);
    }
L_001bbed4:;
    {
        cpu->r[0] = 0x00000080u;
    }
L_001bbed8:;
    {
        cpu->r[14] = 0x001bbedcu; imp__Znaj(cpu); /* _Znaj */
    }
L_001bbedc:;
    {
        wr32(cpu->r[8] + + 0x84u, cpu->r[0]);
    }
L_001bbee0:;
    {
        cpu->r[0] = 0x00000080u;
    }
L_001bbee4:;
    {
        cpu->r[14] = 0x001bbee8u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bbee8:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_001bbeec:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001bbef0:;
    {
        wr32(cpu->r[8] + + 0x8cu, cpu->r[12]);
    }
L_001bbef4:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x84u);
    }
L_001bbef8:;
    {
        cpu->r[3] = 0x0000005eu;
    }
L_001bbefc:;
    {
        wr32(cpu->r[8] + + 0x88u, cpu->r[0]);
    }
L_001bbf00:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001bbf04:;
    {
        cpu->r[14] = 0x001bbf08u; fn_001d0148(cpu);
    }
L_001bbf08:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x88u);
    }
L_001bbf0c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001bbf10:;
    {
        cpu->r[3] = 0x0000005eu;
    }
L_001bbf14:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001bbf18:;
    {
        cpu->r[14] = 0x001bbf1cu; fn_001d0148(cpu);
    }
L_001bbf1c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001bbf20:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001bbf24:;
    {
        cpu->r[3] = 0x0000005eu;
    }
L_001bbf28:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001bbf2c:;
    {
        cpu->r[14] = 0x001bbf30u; fn_001d0148(cpu);
    }
L_001bbf30:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bbf34:;
    {
        cpu->r[14] = 0x001bbf38u; fn_001d06cc(cpu);
    }
L_001bbf38:;
    {
        wr32(cpu->r[8] + + 0x8cu, cpu->r[0]);
    }
L_001bbf3c:;
    {
        goto L_001bbe70;
    }
L_001bbf40:;
    {
        cpu->r[0] = 0x0000000fu;
    }
L_001bbf44:;
    {
        cpu->r[3] = 0x00000005u;
    }
L_001bbf48:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001bbf4c:;
    {
        cpu->r[14] = 0x001bbf50u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bbf50:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001bbf54:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bbf58:;
    {
        cpu->r[9] = 0x00000004u;
    }
L_001bbf5c:;
    {
        cpu->r[11] = 0x00000003u;
    }
L_001bbf60:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001bbf64:;
    {
        wr32(cpu->r[8] + + 0xc0u, cpu->r[0]);
    }
L_001bbf68:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bbf6c:;
    {
        cpu->r[14] = 0x001bbf70u; fn_001d0148(cpu);
    }
L_001bbf70:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001bbf74:;
    {
        goto L_001bbdf4;
    }
L_001bbf78:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bbf7c:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_001bbf80:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001bbf84:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bbf88:;
    {
        cpu->r[14] = 0x001bbf8cu; fn_001d0148(cpu);
    }
L_001bbf8c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001bbf90:;
    {
        cpu->r[14] = 0x001bbf94u; fn_001d06cc(cpu);
    }
L_001bbf94:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_001bbf98:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_001bbf9c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001bbfa0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_001bbfa4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001bbfa8:;
    {
        wr8(cpu->r[8] + + 0x90u, cpu->r[0]);
    }
L_001bbfac:;
    {
        goto L_001bbe24;
    }
L_001bbfb0:;
    {
        cpu->r[14] = 0x001bbfb4u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001bbfb4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[8] + (-cpu->r[0]);
        wr16(cpu->r[8], cpu->r[14]);
        cpu->r[8] = wb_tmp;
        }
    }
L_001bbfb8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001bbfbc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[5] + (-cpu->r[4]);
        uint64_t v = rd64(cpu->r[5]);
        cpu->r[5] = (uint32_t)v;
        cpu->r[6] = (uint32_t)(v >> 32);
        cpu->r[5] = wb_tmp;
        }
    }
L_001bbfc0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] & shifter(cpu->r[4], 1, (cpu->r[1] & 0xffu), &shc); uint32_t t = v; if (guest_pc_write(cpu, t, entry_lr, 0x001bbfc4u)) return;
        }
    }
L_001bbfc4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[4], 2, 8u, &shc); cpu->r[3] = v;
        }
    }
}

/* _ZN13GLXPlayerUser19processUserGameListEPc @ 001bbfc8 (arm) */
void fn_001bbfc8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bbfc8:;
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
L_001bbfcc:;
    {
        cpu->r[9] = rd32(0x001bbfd4u + + 0x250u);
    }
L_001bbfd0:;
    {
        cpu->r[2] = rd32(0x001bbfd8u + + 0x250u);
    }
L_001bbfd4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000011cu, 1, 0);
    }
L_001bbfd8:;
    {
        cpu->r[9] = add_flags(cpu, 0x001bbfe0u, cpu->r[9], 0, 0);
    }
L_001bbfdc:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001bbfe0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001bbfe4:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[2]);
    }
L_001bbfe8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_001bbfec:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bbff0:;
    {
        wr32(cpu->r[13] + + 0x114u, cpu->r[3]);
    }
L_001bbff4:;
    {
        cpu->r[14] = 0x001bbff8u; fn_001bac08(cpu);
    }
L_001bbff8:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001bbffc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bc1d8;
        }
    }
L_001bc000:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001bc004:;
    {
        cpu->r[14] = 0x001bc008u; fn_001d0434(cpu);
    }
L_001bc008:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bc00c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001bc1d8;
        }
    }
L_001bc010:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001bc014:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bc018:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001bc01c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bc020:;
    {
        cpu->r[14] = 0x001bc024u; imp_memset(cpu); /* memset */
    }
L_001bc024:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001bc028:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001bc02c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001bc030:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bc034:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001bc038:;
    {
        wr32(cpu->r[13] + + 0x10cu, cpu->r[12]);
    }
L_001bc03c:;
    {
        wr32(cpu->r[13] + + 0x110u, cpu->r[12]);
    }
L_001bc040:;
    {
        cpu->r[14] = 0x001bc044u; fn_001d0148(cpu);
    }
L_001bc044:;
    {
        cpu->r[1] = rd32(0x001bc04cu + + 0x1e0u);
    }
L_001bc048:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bc04c:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bc054u, cpu->r[1], 0, 0);
    }
L_001bc050:;
    {
        cpu->r[14] = 0x001bc054u; fn_001d06e8(cpu);
    }
L_001bc054:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bc058:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = 0x00000001u;
        }
    }
L_001bc05c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bc1f8;
        }
    }
L_001bc060:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001bc064:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_001bc068:;
    {
        wr32(cpu->r[5] + + 0x80u, cpu->r[3]);
    }
L_001bc06c:;
    {
        goto L_001bc088;
    }
L_001bc070:;
    {
        cpu->r[3] = rd8(cpu->r[7] + cpu->r[8]);
    }
L_001bc074:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_001bc078:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000007cu, 1, 1);
    }
L_001bc07c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[5] + + 0x80u);
        }
    }
L_001bc080:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_001bc084:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[5] + + 0x80u, cpu->r[3]);
        }
    }
L_001bc088:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001bc08c:;
    {
        cpu->r[14] = 0x001bc090u; fn_001d0434(cpu);
    }
L_001bc090:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[0], 1, 1);
    }
L_001bc094:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001bc070;
        }
    }
L_001bc098:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x80u);
    }
L_001bc09c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 1);
    }
L_001bc0a0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[11] = 0x00000002u;
        }
    }
L_001bc0a4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[11] = 0x00000000u;
        }
    }
L_001bc0a8:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 0);
    }
L_001bc0ac:;
    {
        wr32(cpu->r[5] + + 0x80u, cpu->r[4]);
    }
L_001bc0b0:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001bc0b4:;
    {
        cpu->r[14] = 0x001bc0b8u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bc0b8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x80u);
    }
L_001bc0bc:;
    {
        wr32(cpu->r[5] + + 0x74u, cpu->r[0]);
    }
L_001bc0c0:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001bc0c4:;
    {
        cpu->r[14] = 0x001bc0c8u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bc0c8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x80u);
    }
L_001bc0cc:;
    {
        wr32(cpu->r[5] + + 0x78u, cpu->r[0]);
    }
L_001bc0d0:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001bc0d4:;
    {
        cpu->r[14] = 0x001bc0d8u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bc0d8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x80u);
    }
L_001bc0dc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001bc0e0:;
    {
        wr32(cpu->r[5] + + 0x7cu, cpu->r[0]);
    }
L_001bc0e4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001bc1d8;
        }
    }
L_001bc0e8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001bc0ec:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x0000010cu, 0, 0);
    }
L_001bc0f0:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001bc0f4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bc0f8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bc0fc:;
    {
        cpu->r[14] = 0x001bc100u; fn_001d0700(cpu);
    }
L_001bc100:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[11], 0, 0);
    }
L_001bc104:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001bc108:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bc10c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001bc110:;
    {
        cpu->r[14] = 0x001bc114u; fn_001d0148(cpu);
    }
L_001bc114:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x74u);
    }
L_001bc118:;
    {
        cpu->r[0] = 0x00000080u;
    }
L_001bc11c:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_001bc120:;
    {
        cpu->r[14] = 0x001bc124u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bc124:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_001bc128:;
    {
        cpu->r[10] = rd32(cpu->r[5] + + 0x78u);
    }
L_001bc12c:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[0]);
    }
L_001bc130:;
    {
        cpu->r[0] = 0x00000080u;
    }
L_001bc134:;
    {
        cpu->r[14] = 0x001bc138u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bc138:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x74u);
    }
L_001bc13c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bc140:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001bc144:;
    {
        wr32(cpu->r[10] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[0]);
    }
L_001bc148:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001bc14c:;
    {
        cpu->r[14] = 0x001bc150u; fn_001d0700(cpu);
    }
L_001bc150:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x74u);
    }
L_001bc154:;
    {
        cpu->r[3] = 0x0000005eu;
    }
L_001bc158:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001bc15c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bc160:;
    {
        cpu->r[1] = rd32(cpu->r[1] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001bc164:;
    {
        cpu->r[14] = 0x001bc168u; fn_001d0148(cpu);
    }
L_001bc168:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x78u);
    }
L_001bc16c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bc170:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001bc174:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001bc178:;
    {
        cpu->r[14] = 0x001bc17cu; fn_001d0700(cpu);
    }
L_001bc17c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x78u);
    }
L_001bc180:;
    {
        cpu->r[3] = 0x0000005eu;
    }
L_001bc184:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001bc188:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bc18c:;
    {
        cpu->r[1] = rd32(cpu->r[1] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001bc190:;
    {
        cpu->r[14] = 0x001bc194u; fn_001d0148(cpu);
    }
L_001bc194:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001bc198:;
    {
        cpu->r[2] = 0x00000008u;
    }
L_001bc19c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bc1a0:;
    {
        cpu->r[14] = 0x001bc1a4u; fn_001d0700(cpu);
    }
L_001bc1a4:;
    {
        cpu->r[3] = 0x0000005eu;
    }
L_001bc1a8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001bc1ac:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001bc1b0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bc1b4:;
    {
        cpu->r[14] = 0x001bc1b8u; fn_001d0148(cpu);
    }
L_001bc1b8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001bc1bc:;
    {
        cpu->r[10] = rd32(cpu->r[5] + + 0x7cu);
    }
L_001bc1c0:;
    {
        cpu->r[14] = 0x001bc1c4u; fn_001d06cc(cpu);
    }
L_001bc1c4:;
    {
        wr32(cpu->r[10] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[0]);
    }
L_001bc1c8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001bc1cc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x80u);
    }
L_001bc1d0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_001bc1d4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001bc0f0;
        }
    }
L_001bc1d8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_001bc1dc:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[2]);
    }
L_001bc1e0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x114u);
    }
L_001bc1e4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bc1e8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001bc1ec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001bc220;
        }
    }
L_001bc1f0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000011cu, 0, 0);
    }
L_001bc1f4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bc1f8u)) return;
    }
L_001bc1f8:;
    {
        cpu->r[0] = 0x0000000fu;
    }
L_001bc1fc:;
    {
        cpu->r[4] = 0x00000002u;
    }
L_001bc200:;
    {
        cpu->r[14] = 0x001bc204u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bc204:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001bc208:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bc20c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001bc210:;
    {
        wr32(cpu->r[5] + + 0xc0u, cpu->r[0]);
    }
L_001bc214:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001bc218:;
    {
        cpu->r[14] = 0x001bc21cu; fn_001d0148(cpu);
    }
L_001bc21c:;
    {
        goto L_001bc060;
    }
L_001bc220:;
    {
        cpu->r[14] = 0x001bc224u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001bc224:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[8], 3, (cpu->r[4] & 0xffu), &shc); cpu->r[14] = v;
        }
    }
L_001bc228:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001bc22c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[5] & shifter(cpu->r[8], 1, (cpu->r[9] & 0xffu), &shc); cpu->r[5] = v;
        }
    }
}

/* _ZN13GLXPlayerUser21processUserReputationEPc @ 001bc230 (arm) */
void fn_001bc230(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bc230:;
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
L_001bc234:;
    {
        cpu->r[4] = rd32(0x001bc23cu + + 0x184u);
    }
L_001bc238:;
    {
        cpu->r[6] = rd32(0x001bc240u + + 0x184u);
    }
L_001bc23c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000288u, 1, 0);
    }
L_001bc240:;
    {
        cpu->r[4] = add_flags(cpu, 0x001bc248u, cpu->r[4], 0, 0);
    }
L_001bc244:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001bc248:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001bc24c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001bc250:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bc254:;
    {
        wr32(cpu->r[13] + + 0x284u, cpu->r[3]);
    }
L_001bc258:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bc378;
        }
    }
L_001bc25c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001bc260:;
    {
        cpu->r[14] = 0x001bc264u; fn_001d0434(cpu);
    }
L_001bc264:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bc268:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001bc378;
        }
    }
L_001bc26c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001bc270:;
    {
        cpu->r[2] = 0x00000200u;
    }
L_001bc274:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bc278:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001bc27c:;
    {
        cpu->r[14] = 0x001bc280u; imp_memset(cpu); /* memset */
    }
L_001bc280:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001bc284:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001bc288:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bc28c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001bc290:;
    {
        cpu->r[14] = 0x001bc294u; fn_001d0148(cpu);
    }
L_001bc294:;
    {
        cpu->r[1] = rd32(0x001bc29cu + + 0x12cu);
    }
L_001bc298:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001bc29c:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bc2a4u, cpu->r[1], 0, 0);
    }
L_001bc2a0:;
    {
        cpu->r[14] = 0x001bc2a4u; fn_001d06e8(cpu);
    }
L_001bc2a4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bc2a8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[9] = 0x00000000u;
        }
    }
L_001bc2ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bc394;
        }
    }
L_001bc2b0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001bc2b4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bc2b8:;
    {
        cpu->r[2] = 0x00000200u;
    }
L_001bc2bc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000204u, 0, 0);
    }
L_001bc2c0:;
    {
        cpu->r[14] = 0x001bc2c4u; fn_001d0700(cpu);
    }
L_001bc2c4:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bc2c8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001bc2cc:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_001bc2d0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001bc2d4:;
    {
        cpu->r[14] = 0x001bc2d8u; fn_001d0148(cpu);
    }
L_001bc2d8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bc2dc:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001bc2e0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bc2e4:;
    {
        cpu->r[14] = 0x001bc2e8u; imp_memset(cpu); /* memset */
    }
L_001bc2e8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bc2ec:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001bc2f0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bc2f4:;
    {
        cpu->r[14] = 0x001bc2f8u; fn_001d0700(cpu);
    }
L_001bc2f8:;
    {
        cpu->r[3] = 0x0000002cu;
    }
L_001bc2fc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001bc300:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001bc304:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001bc308:;
    {
        cpu->r[14] = 0x001bc30cu; fn_001d0148(cpu);
    }
L_001bc30c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bc310:;
    {
        cpu->r[14] = 0x001bc314u; fn_001d06c4(cpu);
    }
L_001bc314:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001bc318:;
    {
        wr64(cpu->r[10] + + 0x98u, ((uint64_t)cpu->r[1] << 32) | cpu->r[0]);
    }
L_001bc31c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bc320:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bc324:;
    {
        cpu->r[14] = 0x001bc328u; fn_001d0700(cpu);
    }
L_001bc328:;
    {
        cpu->r[3] = 0x0000002cu;
    }
L_001bc32c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001bc330:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001bc334:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001bc338:;
    {
        cpu->r[14] = 0x001bc33cu; fn_001d0148(cpu);
    }
L_001bc33c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bc340:;
    {
        cpu->r[14] = 0x001bc344u; fn_001d06cc(cpu);
    }
L_001bc344:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001bc348:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bc34c:;
    {
        wr32(cpu->r[10] + + 0xa0u, cpu->r[0]);
    }
L_001bc350:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bc354:;
    {
        cpu->r[14] = 0x001bc358u; fn_001d0700(cpu);
    }
L_001bc358:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001bc35c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001bc360:;
    {
        cpu->r[3] = 0x0000002cu;
    }
L_001bc364:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001bc368:;
    {
        cpu->r[14] = 0x001bc36cu; fn_001d0148(cpu);
    }
L_001bc36c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bc370:;
    {
        cpu->r[14] = 0x001bc374u; fn_001d06cc(cpu);
    }
L_001bc374:;
    {
        wr32(cpu->r[10] + + 0xa4u, cpu->r[0]);
    }
L_001bc378:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001bc37c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x284u);
    }
L_001bc380:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bc384:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001bc388:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001bc3bc;
        }
    }
L_001bc38c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000288u, 0, 0);
    }
L_001bc390:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bc394u)) return;
    }
L_001bc394:;
    {
        cpu->r[0] = 0x0000000fu;
    }
L_001bc398:;
    {
        cpu->r[9] = 0x00000002u;
    }
L_001bc39c:;
    {
        cpu->r[14] = 0x001bc3a0u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bc3a0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001bc3a4:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bc3a8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001bc3ac:;
    {
        wr32(cpu->r[10] + + 0xc0u, cpu->r[0]);
    }
L_001bc3b0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001bc3b4:;
    {
        cpu->r[14] = 0x001bc3b8u; fn_001d0148(cpu);
    }
L_001bc3b8:;
    {
        goto L_001bc2b0;
    }
L_001bc3bc:;
    {
        cpu->r[14] = 0x001bc3c0u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001bc3c0:;
    {
        if (cond_test(cpu, 1)) {
        guest_unimplemented(cpu, 0x001bc3c0u); return;
        }
    }
L_001bc3c4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001bc3c8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[5] & shifter(cpu->r[8], 2, 14u, &shc); cpu->r[5] = v;
        }
    }
}

/* _ZN13GLXPlayerUser15OnUpdateFailureEi @ 001bc3cc (arm) */
void fn_001bc3cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bc3cc:;
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
L_001bc3d0:;
    {
        cpu->r[4] = rd32(0x001bc3d8u + + 0xd0u);
    }
L_001bc3d4:;
    {
        cpu->r[5] = rd32(0x001bc3dcu + + 0xd0u);
    }
L_001bc3d8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000800u, 1, 0);
    }
L_001bc3dc:;
    {
        cpu->r[4] = add_flags(cpu, 0x001bc3e4u, cpu->r[4], 0, 0);
    }
L_001bc3e0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001bc3e4:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001bc3e8:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001bc3ec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001bc3f0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bc3f4:;
    {
        wr32(cpu->r[13] + + 0x804u, cpu->r[3]);
    }
L_001bc3f8:;
    {
        cpu->r[14] = 0x001bc3fcu; fn_001b71a0(cpu);
    }
L_001bc3fc:;
    {
        sub_flags(cpu, cpu->r[6], 0x0000000bu, 1, 1);
    }
L_001bc400:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001bc404:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bc448;
        }
    }
L_001bc408:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x4u);
    }
L_001bc40c:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001bc410:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001bc414:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001bc418:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bc41c:;
    {
        cpu->r[14] = 0x001bc424u;
    }
L_001bc420:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001bc424u)) return;
    }
L_001bc424:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001bc428:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x804u);
    }
L_001bc42c:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001bc430:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bc434:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001bc438:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001bc4a4;
        }
    }
L_001bc43c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001bc440:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001bc444:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bc448u)) return;
    }
L_001bc448:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000030u, 1, 1);
    }
L_001bc44c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001bc408;
        }
    }
L_001bc450:;
    {
        cpu->r[1] = rd32(0x001bc458u + + 0x58u);
    }
L_001bc454:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001bc458:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bc460u, cpu->r[1], 0, 0);
    }
L_001bc45c:;
    {
        cpu->r[14] = 0x001bc460u; fn_001b7110(cpu);
    }
L_001bc460:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bc464:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bc408;
        }
    }
L_001bc468:;
    {
        cpu->r[0] = 0x0000000fu;
    }
L_001bc46c:;
    {
        cpu->r[14] = 0x001bc470u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bc470:;
    {
        cpu->r[2] = 0x0000000fu;
    }
L_001bc474:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bc478:;
    {
        wr32(cpu->r[8] + + 0x4cu, cpu->r[0]);
    }
L_001bc47c:;
    {
        cpu->r[14] = 0x001bc480u; fn_001d0700(cpu);
    }
L_001bc480:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001bc484:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000004u, 1, 0);
    }
L_001bc488:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001bc48c:;
    {
        cpu->r[10] = rd32(cpu->r[8] + + 0x4cu);
    }
L_001bc490:;
    {
        cpu->r[14] = 0x001bc494u; fn_001b6fec(cpu);
    }
L_001bc494:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001bc498:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001bc49c:;
    {
        cpu->r[14] = 0x001bc4a0u; fn_001d06dc(cpu);
    }
L_001bc4a0:;
    {
        goto L_001bc408;
    }
L_001bc4a4:;
    {
        cpu->r[14] = 0x001bc4a8u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001bc4a8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[4], 3, (cpu->r[0] & 0xffu), &shc); cpu->r[14] = v;
        }
    }
L_001bc4ac:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001bc4b0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[4], 4, (0x001bc4b8u & 0xffu), &shc); cpu->r[5] = v;
        }
    }
}

/* _ZN13GLXPlayerUser15OnUpdateSuccessEi @ 001bc4b4 (arm) */
void fn_001bc4b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bc4b4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], 0x00000035u, 1, 0);
    }
L_001bc4b8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001bc4bc:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001bc4c0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001bc4c4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000032u, 1, 1);
    }
L_001bc4c8:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[3]) {
        case 0: goto L_001bc5b4;
        case 1: goto L_001bc5a4;
        case 2: goto L_001bc5a4;
        case 3: goto L_001bc5a4;
        case 4: goto L_001bc5a4;
        case 5: goto L_001bc5e4;
        case 6: goto L_001bc5a4;
        case 7: goto L_001bc5a4;
        case 8: goto L_001bc5a4;
        case 9: goto L_001bc5a4;
        case 10: goto L_001bc60c;
        case 11: goto L_001bc634;
        case 12: goto L_001bc684;
        case 13: goto L_001bc5a4;
        case 14: goto L_001bc65c;
        case 15: goto L_001bc5a4;
        case 16: goto L_001bc6ac;
        case 17: goto L_001bc6d4;
        case 18: goto L_001bc760;
        case 19: goto L_001bc5a4;
        case 20: goto L_001bc5a4;
        case 21: goto L_001bc5a4;
        case 22: goto L_001bc5a4;
        case 23: goto L_001bc5a4;
        case 24: goto L_001bc5a4;
        case 25: goto L_001bc5a4;
        case 26: goto L_001bc5a4;
        case 27: goto L_001bc5a4;
        case 28: goto L_001bc708;
        case 29: goto L_001bc5a4;
        case 30: goto L_001bc5a4;
        case 31: goto L_001bc730;
        case 32: goto L_001bc5a4;
        case 33: goto L_001bc5a4;
        case 34: goto L_001bc5a4;
        case 35: goto L_001bc6fc;
        case 36: goto L_001bc754;
        case 37: goto L_001bc73c;
        case 38: goto L_001bc5a4;
        case 39: goto L_001bc5a4;
        case 40: goto L_001bc5a4;
        case 41: goto L_001bc5a4;
        case 42: goto L_001bc5a4;
        case 43: goto L_001bc5a4;
        case 44: goto L_001bc5a4;
        case 45: goto L_001bc5a4;
        case 46: goto L_001bc5a4;
        case 47: goto L_001bc5a4;
        case 48: goto L_001bc748;
        case 49: goto L_001bc5a4;
        case 50: goto L_001bc59c;
        default: guest_unimplemented(cpu, 0x001bc4c8u); return; }
        }
    }
L_001bc4cc:;
    {
        goto L_001bc5a4;
    }
L_001bc59c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x24u);
    }
L_001bc5a0:;
    {
        cpu->r[14] = 0x001bc5a4u; fn_001baf64(cpu);
    }
L_001bc5a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bc5a8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001bc5ac:;
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
L_001bc5b0:;
    {
        return fn_001b6b68(cpu);
    }
L_001bc5b4:;
    {
        cpu->r[0] = 0x00000080u;
    }
L_001bc5b8:;
    {
        cpu->r[14] = 0x001bc5bcu; imp__Znaj(cpu); /* _Znaj */
    }
L_001bc5bc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bc5c0:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001bc5c4:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[0]);
    }
L_001bc5c8:;
    {
        cpu->r[14] = 0x001bc5ccu; fn_001d0700(cpu);
    }
L_001bc5cc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x24u);
    }
L_001bc5d0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x58u);
    }
L_001bc5d4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001bc5d8:;
    {
        cpu->r[3] = 0x0000007cu;
    }
L_001bc5dc:;
    {
        cpu->r[14] = 0x001bc5e0u; fn_001d0148(cpu);
    }
L_001bc5e0:;
    {
        goto L_001bc5a4;
    }
L_001bc5e4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x3cu);
    }
L_001bc5e8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bc5ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bc5fc;
        }
    }
L_001bc5f0:;
    {
        cpu->r[14] = 0x001bc5f4u; fn_0018ba20(cpu);
    }
L_001bc5f4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bc5f8:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[3]);
    }
L_001bc5fc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x24u);
    }
L_001bc600:;
    {
        cpu->r[14] = 0x001bc604u; fn_001d0ce8(cpu);
    }
L_001bc604:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[0]);
    }
L_001bc608:;
    {
        goto L_001bc5a4;
    }
L_001bc60c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xc0u);
    }
L_001bc610:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bc614:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bc624;
        }
    }
L_001bc618:;
    {
        cpu->r[14] = 0x001bc61cu; fn_0018ba20(cpu);
    }
L_001bc61c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bc620:;
    {
        wr32(cpu->r[4] + + 0xc0u, cpu->r[3]);
    }
L_001bc624:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bc628:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x24u);
    }
L_001bc62c:;
    {
        cpu->r[14] = 0x001bc630u; fn_001bbfc8(cpu);
    }
L_001bc630:;
    {
        goto L_001bc5a4;
    }
L_001bc634:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xc0u);
    }
L_001bc638:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bc63c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bc64c;
        }
    }
L_001bc640:;
    {
        cpu->r[14] = 0x001bc644u; fn_0018ba20(cpu);
    }
L_001bc644:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bc648:;
    {
        wr32(cpu->r[4] + + 0xc0u, cpu->r[3]);
    }
L_001bc64c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bc650:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x24u);
    }
L_001bc654:;
    {
        cpu->r[14] = 0x001bc658u; fn_001bbd50(cpu);
    }
L_001bc658:;
    {
        goto L_001bc5a4;
    }
L_001bc65c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xc0u);
    }
L_001bc660:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bc664:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bc674;
        }
    }
L_001bc668:;
    {
        cpu->r[14] = 0x001bc66cu; fn_0018ba20(cpu);
    }
L_001bc66c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bc670:;
    {
        wr32(cpu->r[4] + + 0xc0u, cpu->r[3]);
    }
L_001bc674:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bc678:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x24u);
    }
L_001bc67c:;
    {
        cpu->r[14] = 0x001bc680u; fn_001bc230(cpu);
    }
L_001bc680:;
    {
        goto L_001bc5a4;
    }
L_001bc684:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xc0u);
    }
L_001bc688:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bc68c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bc69c;
        }
    }
L_001bc690:;
    {
        cpu->r[14] = 0x001bc694u; fn_0018ba20(cpu);
    }
L_001bc694:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bc698:;
    {
        wr32(cpu->r[4] + + 0xc0u, cpu->r[3]);
    }
L_001bc69c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bc6a0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x24u);
    }
L_001bc6a4:;
    {
        cpu->r[14] = 0x001bc6a8u; fn_001bb158(cpu);
    }
L_001bc6a8:;
    {
        goto L_001bc5a4;
    }
L_001bc6ac:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xc0u);
    }
L_001bc6b0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bc6b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bc6c4;
        }
    }
L_001bc6b8:;
    {
        cpu->r[14] = 0x001bc6bcu; fn_0018ba20(cpu);
    }
L_001bc6bc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bc6c0:;
    {
        wr32(cpu->r[4] + + 0xc0u, cpu->r[3]);
    }
L_001bc6c4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bc6c8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x24u);
    }
L_001bc6cc:;
    {
        cpu->r[14] = 0x001bc6d0u; fn_001bb6b4(cpu);
    }
L_001bc6d0:;
    {
        goto L_001bc5a4;
    }
L_001bc6d4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xc0u);
    }
L_001bc6d8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bc6dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bc6ec;
        }
    }
L_001bc6e0:;
    {
        cpu->r[14] = 0x001bc6e4u; fn_0018ba20(cpu);
    }
L_001bc6e4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bc6e8:;
    {
        wr32(cpu->r[4] + + 0xc0u, cpu->r[3]);
    }
L_001bc6ec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bc6f0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x24u);
    }
L_001bc6f4:;
    {
        cpu->r[14] = 0x001bc6f8u; fn_001bb4d4(cpu);
    }
L_001bc6f8:;
    {
        goto L_001bc5a4;
    }
L_001bc6fc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x24u);
    }
L_001bc700:;
    {
        cpu->r[14] = 0x001bc704u; fn_001bacf4(cpu);
    }
L_001bc704:;
    {
        goto L_001bc5a4;
    }
L_001bc708:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xc0u);
    }
L_001bc70c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001bc710:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bc720;
        }
    }
L_001bc714:;
    {
        cpu->r[14] = 0x001bc718u; fn_0018ba20(cpu);
    }
L_001bc718:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001bc71c:;
    {
        wr32(cpu->r[4] + + 0xc0u, cpu->r[3]);
    }
L_001bc720:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bc724:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x24u);
    }
L_001bc728:;
    {
        cpu->r[14] = 0x001bc72cu; fn_001bb7c0(cpu);
    }
L_001bc72c:;
    {
        goto L_001bc5a4;
    }
L_001bc730:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x24u);
    }
L_001bc734:;
    {
        cpu->r[14] = 0x001bc738u; fn_001bade0(cpu);
    }
L_001bc738:;
    {
        goto L_001bc5a4;
    }
L_001bc73c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x24u);
    }
L_001bc740:;
    {
        cpu->r[14] = 0x001bc744u; fn_001bae60(cpu);
    }
L_001bc744:;
    {
        goto L_001bc5a4;
    }
L_001bc748:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x24u);
    }
L_001bc74c:;
    {
        cpu->r[14] = 0x001bc750u; fn_001bb3cc(cpu);
    }
L_001bc750:;
    {
        goto L_001bc5a4;
    }
L_001bc754:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x24u);
    }
L_001bc758:;
    {
        cpu->r[14] = 0x001bc75cu; fn_001bad94(cpu);
    }
L_001bc75c:;
    {
        goto L_001bc5a4;
    }
L_001bc760:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x24u);
    }
L_001bc764:;
    {
        cpu->r[14] = 0x001bc768u; fn_001bb254(cpu);
    }
L_001bc768:;
    {
        goto L_001bc5a4;
    }
}

/* _ZN13GLXPlayerUser16sendSetUserStateEi @ 001bc76c (arm) */
void fn_001bc76c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bc76c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001bc770:;
    {
        cpu->r[4] = rd32(0x001bc778u + + 0xccu);
    }
L_001bc774:;
    {
        cpu->r[6] = rd32(0x001bc77cu + + 0xccu);
    }
L_001bc778:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 0);
    }
L_001bc77c:;
    {
        cpu->r[4] = add_flags(cpu, 0x001bc784u, cpu->r[4], 0, 0);
    }
L_001bc780:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001bc784:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001bc788:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001bc78c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001bc790:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001bc794:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bc798:;
    {
        wr32(cpu->r[13] + + 0x80cu, cpu->r[3]);
    }
L_001bc79c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001bc7dc;
        }
    }
L_001bc7a0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_001bc7a4:;
    {
        cpu->r[1] = 0x00000061u;
    }
L_001bc7a8:;
    {
        cpu->r[2] = (~0x00000063u);
    }
L_001bc7ac:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001bc7b0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bc7b4:;
    {
        cpu->r[14] = 0x001bc7bcu;
    }
L_001bc7b8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001bc7bcu)) return;
    }
L_001bc7bc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001bc7c0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001bc7c4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x80cu);
    }
L_001bc7c8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bc7cc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001bc7d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001bc840;
        }
    }
L_001bc7d4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000810u, 0, 0);
    }
L_001bc7d8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bc7dcu)) return;
    }
L_001bc7dc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001bc7e0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bc7e4:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000004u, 1, 0);
    }
L_001bc7e8:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001bc7ec:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001bc7f0:;
    {
        cpu->r[14] = 0x001bc7f4u; fn_001d0700(cpu);
    }
L_001bc7f4:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0xcu);
    }
L_001bc7f8:;
    {
        cpu->r[1] = rd32(0x001bc800u + + 0x4cu);
    }
L_001bc7fc:;
    {
        cpu->r[2] = 0x00000061u;
    }
L_001bc800:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_001bc804:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001bc808:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bc810u, cpu->r[1], 0, 0);
    }
L_001bc80c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001bc810:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_001bc814:;
    {
        cpu->r[14] = 0x001bc818u; imp_sprintf(cpu); /* sprintf */
    }
L_001bc818:;
    {
        cpu->r[0] = rd32(0x001bc820u + + 0x30u);
    }
L_001bc81c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001bc820:;
    {
        cpu->r[0] = add_flags(cpu, 0x001bc828u, cpu->r[0], 0, 0);
    }
L_001bc824:;
    {
        cpu->r[14] = 0x001bc828u; fn_001d0ac4(cpu);
    }
L_001bc828:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bc82c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001bc830:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001bc834:;
    {
        cpu->r[14] = 0x001bc83cu;
    }
L_001bc838:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001bc83cu)) return;
    }
L_001bc83c:;
    {
        goto L_001bc7c0;
    }
L_001bc840:;
    {
        cpu->r[14] = 0x001bc844u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001bc844:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] * cpu->r[12]; cpu->r[8] = v;
        }
    }
L_001bc848:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001bc84c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 1, 23u, &shc); cpu->r[3] = v;
        }
    }
L_001bc850:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 1, 23u, &shc); cpu->r[3] = v;
        }
    }
}

/* _ZN13GLXPlayerUser20sendGetAdvAttachmentEi @ 001bc854 (arm) */
void fn_001bc854(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bc854:;
    {
        cpu->r[3] = rd32(0x001bc85cu + + 0xa4u);
    }
L_001bc858:;
    {
        cpu->r[2] = rd32(0x001bc860u + + 0xa4u);
    }
L_001bc85c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001bc864u, cpu->r[3], 0, 0);
    }
L_001bc860:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_001bc864:;
    {
        cpu->r[6] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001bc868:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001bc86c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001bc870:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000004u, 1, 0);
    }
L_001bc874:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001bc878:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001bc87c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001bc880:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 0);
    }
L_001bc884:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bc888:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bc88c:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001bc890:;
    {
        wr32(cpu->r[13] + + 0x80cu, cpu->r[3]);
    }
L_001bc894:;
    {
        cpu->r[14] = 0x001bc898u; fn_001d0700(cpu);
    }
L_001bc898:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_001bc89c:;
    {
        cpu->r[2] = 0x00000059u;
    }
L_001bc8a0:;
    {
        cpu->r[1] = rd32(0x001bc8a8u + + 0x60u);
    }
L_001bc8a4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bc8a8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001bc8ac:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bc8b4u, cpu->r[1], 0, 0);
    }
L_001bc8b0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001bc8b4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_001bc8b8:;
    {
        cpu->r[14] = 0x001bc8bcu; imp_sprintf(cpu); /* sprintf */
    }
L_001bc8bc:;
    {
        cpu->r[0] = rd32(0x001bc8c4u + + 0x48u);
    }
L_001bc8c0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001bc8c4:;
    {
        cpu->r[0] = add_flags(cpu, 0x001bc8ccu, cpu->r[0], 0, 0);
    }
L_001bc8c8:;
    {
        cpu->r[14] = 0x001bc8ccu; fn_001d0ac4(cpu);
    }
L_001bc8cc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001bc8d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bc8d4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001bc8d8:;
    {
        cpu->r[14] = 0x001bc8e0u;
    }
L_001bc8dc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001bc8e0u)) return;
    }
L_001bc8e0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x80cu);
    }
L_001bc8e4:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001bc8e8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001bc8ec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001bc8fc;
        }
    }
L_001bc8f0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001bc8f4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001bc8f8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bc8fcu)) return;
    }
L_001bc8fc:;
    {
        cpu->r[14] = 0x001bc900u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001bc900:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[8] + (-cpu->r[4]);
        wr16(cpu->r[8], cpu->r[13]);
        cpu->r[8] = wb_tmp;
        }
    }
L_001bc904:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001bc908:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[12], 2, (cpu->r[11] & 0xffu), &shc); cpu->r[3] = v;
        }
    }
L_001bc90c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[12], 1, 22u, &shc); cpu->r[3] = v;
        }
    }
}

/* _ZN13GLXPlayerUser13sendGetAdvRSSEi @ 001bc910 (arm) */
void fn_001bc910(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bc910:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001bc914:;
    {
        cpu->r[4] = rd32(0x001bc91cu + + 0xc8u);
    }
L_001bc918:;
    {
        cpu->r[7] = rd32(0x001bc920u + + 0xc8u);
    }
L_001bc91c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001bc920:;
    {
        cpu->r[4] = add_flags(cpu, 0x001bc928u, cpu->r[4], 0, 0);
    }
L_001bc924:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001bc928:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 0);
    }
L_001bc92c:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001bc930:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001bc934:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001bc938:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bc93c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bc940:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001bc944:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bc948:;
    {
        wr32(cpu->r[13] + + 0x80cu, cpu->r[3]);
    }
L_001bc94c:;
    {
        cpu->r[14] = 0x001bc950u; fn_001d0700(cpu);
    }
L_001bc950:;
    {
        add_flags(cpu, cpu->r[8], 0x00000001u, 0, 1);
    }
L_001bc954:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bc9bc;
        }
    }
L_001bc958:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0xcu);
    }
L_001bc95c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bc960:;
    {
        cpu->r[1] = rd32(0x001bc968u + + 0x84u);
    }
L_001bc964:;
    {
        cpu->r[2] = 0x00000058u;
    }
L_001bc968:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_001bc96c:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bc974u, cpu->r[1], 0, 0);
    }
L_001bc970:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_001bc974:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001bc978:;
    {
        cpu->r[14] = 0x001bc97cu; imp_sprintf(cpu); /* sprintf */
    }
L_001bc97c:;
    {
        cpu->r[0] = rd32(0x001bc984u + + 0x6cu);
    }
L_001bc980:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001bc984:;
    {
        cpu->r[0] = add_flags(cpu, 0x001bc98cu, cpu->r[0], 0, 0);
    }
L_001bc988:;
    {
        cpu->r[14] = 0x001bc98cu; fn_001d0ac4(cpu);
    }
L_001bc98c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001bc990:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bc994:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001bc998:;
    {
        cpu->r[14] = 0x001bc9a0u;
    }
L_001bc99c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001bc9a0u)) return;
    }
L_001bc9a0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001bc9a4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x80cu);
    }
L_001bc9a8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bc9ac:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001bc9b0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001bc9e0;
        }
    }
L_001bc9b4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000810u, 0, 0);
    }
L_001bc9b8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bc9bcu)) return;
    }
L_001bc9bc:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0xcu);
    }
L_001bc9c0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bc9c4:;
    {
        cpu->r[1] = rd32(0x001bc9ccu + + 0x28u);
    }
L_001bc9c8:;
    {
        cpu->r[2] = 0x00000058u;
    }
L_001bc9cc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_001bc9d0:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bc9d8u, cpu->r[1], 0, 0);
    }
L_001bc9d4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001bc9d8:;
    {
        cpu->r[14] = 0x001bc9dcu; imp_sprintf(cpu); /* sprintf */
    }
L_001bc9dc:;
    {
        goto L_001bc97c;
    }
L_001bc9e0:;
    {
        cpu->r[14] = 0x001bc9e4u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001bc9e4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[8] + (-cpu->r[0]);
        wr64(cpu->r[8], ((uint64_t)cpu->r[14] << 32) | cpu->r[13]);
        cpu->r[8] = wb_tmp;
        }
    }
L_001bc9e8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001bc9ec:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[12], 4, 21u, &shc); cpu->r[3] = v;
        }
    }
L_001bc9f0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[12], 4, 21u, &shc); cpu->r[3] = v;
        }
    }
L_001bc9f4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[4], 4, 12u, &shc); cpu->r[3] = v;
        }
    }
}

/* _ZN13GLXPlayerUser21sendGetGameTrophyListEi @ 001bc9f8 (arm) */
void fn_001bc9f8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bc9f8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001bc9fc:;
    {
        cpu->r[4] = rd32(0x001bca04u + + 0xc8u);
    }
L_001bca00:;
    {
        cpu->r[7] = rd32(0x001bca08u + + 0xc8u);
    }
L_001bca04:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001bca08:;
    {
        cpu->r[4] = add_flags(cpu, 0x001bca10u, cpu->r[4], 0, 0);
    }
L_001bca0c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001bca10:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 0);
    }
L_001bca14:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001bca18:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001bca1c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001bca20:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bca24:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bca28:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001bca2c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bca30:;
    {
        wr32(cpu->r[13] + + 0x80cu, cpu->r[3]);
    }
L_001bca34:;
    {
        cpu->r[14] = 0x001bca38u; fn_001d0700(cpu);
    }
L_001bca38:;
    {
        add_flags(cpu, cpu->r[8], 0x00000001u, 0, 1);
    }
L_001bca3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bcaa4;
        }
    }
L_001bca40:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0xcu);
    }
L_001bca44:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bca48:;
    {
        cpu->r[1] = rd32(0x001bca50u + + 0x84u);
    }
L_001bca4c:;
    {
        cpu->r[2] = 0x00000056u;
    }
L_001bca50:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_001bca54:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bca5cu, cpu->r[1], 0, 0);
    }
L_001bca58:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_001bca5c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001bca60:;
    {
        cpu->r[14] = 0x001bca64u; imp_sprintf(cpu); /* sprintf */
    }
L_001bca64:;
    {
        cpu->r[0] = rd32(0x001bca6cu + + 0x6cu);
    }
L_001bca68:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001bca6c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001bca74u, cpu->r[0], 0, 0);
    }
L_001bca70:;
    {
        cpu->r[14] = 0x001bca74u; fn_001d0ac4(cpu);
    }
L_001bca74:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001bca78:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bca7c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001bca80:;
    {
        cpu->r[14] = 0x001bca88u;
    }
L_001bca84:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001bca88u)) return;
    }
L_001bca88:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001bca8c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x80cu);
    }
L_001bca90:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bca94:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001bca98:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001bcac8;
        }
    }
L_001bca9c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000810u, 0, 0);
    }
L_001bcaa0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bcaa4u)) return;
    }
L_001bcaa4:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0xcu);
    }
L_001bcaa8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bcaac:;
    {
        cpu->r[1] = rd32(0x001bcab4u + + 0x28u);
    }
L_001bcab0:;
    {
        cpu->r[2] = 0x00000056u;
    }
L_001bcab4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_001bcab8:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bcac0u, cpu->r[1], 0, 0);
    }
L_001bcabc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001bcac0:;
    {
        cpu->r[14] = 0x001bcac4u; imp_sprintf(cpu); /* sprintf */
    }
L_001bcac4:;
    {
        goto L_001bca64;
    }
L_001bcac8:;
    {
        cpu->r[14] = 0x001bcaccu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001bcacc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[8], 2, 20u, &shc); cpu->r[13] = v;
        }
    }
L_001bcad0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001bcad4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[4], 2, 20u, &shc); cpu->r[3] = v;
        }
    }
L_001bcad8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[4], 1, 20u, &shc); cpu->r[3] = v;
        }
    }
L_001bcadc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[12], 4, (cpu->r[5] & 0xffu), &shc); cpu->r[3] = v;
        }
    }
}

/* _ZN13GLXPlayerUser17sendGetTrophyIconEi @ 001bcae0 (arm) */
void fn_001bcae0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bcae0:;
    {
        cpu->r[3] = rd32(0x001bcae8u + + 0xa4u);
    }
L_001bcae4:;
    {
        cpu->r[2] = rd32(0x001bcaecu + + 0xa4u);
    }
L_001bcae8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001bcaf0u, cpu->r[3], 0, 0);
    }
L_001bcaec:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_001bcaf0:;
    {
        cpu->r[6] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001bcaf4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001bcaf8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001bcafc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000004u, 1, 0);
    }
L_001bcb00:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001bcb04:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001bcb08:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001bcb0c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 0);
    }
L_001bcb10:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bcb14:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bcb18:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001bcb1c:;
    {
        wr32(cpu->r[13] + + 0x80cu, cpu->r[3]);
    }
L_001bcb20:;
    {
        cpu->r[14] = 0x001bcb24u; fn_001d0700(cpu);
    }
L_001bcb24:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_001bcb28:;
    {
        cpu->r[2] = 0x00000054u;
    }
L_001bcb2c:;
    {
        cpu->r[1] = rd32(0x001bcb34u + + 0x60u);
    }
L_001bcb30:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bcb34:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001bcb38:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bcb40u, cpu->r[1], 0, 0);
    }
L_001bcb3c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001bcb40:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_001bcb44:;
    {
        cpu->r[14] = 0x001bcb48u; imp_sprintf(cpu); /* sprintf */
    }
L_001bcb48:;
    {
        cpu->r[0] = rd32(0x001bcb50u + + 0x48u);
    }
L_001bcb4c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001bcb50:;
    {
        cpu->r[0] = add_flags(cpu, 0x001bcb58u, cpu->r[0], 0, 0);
    }
L_001bcb54:;
    {
        cpu->r[14] = 0x001bcb58u; fn_001d0ac4(cpu);
    }
L_001bcb58:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001bcb5c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bcb60:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001bcb64:;
    {
        cpu->r[14] = 0x001bcb6cu;
    }
L_001bcb68:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001bcb6cu)) return;
    }
L_001bcb6c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x80cu);
    }
L_001bcb70:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001bcb74:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001bcb78:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001bcb88;
        }
    }
L_001bcb7c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001bcb80:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001bcb84:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bcb88u)) return;
    }
L_001bcb88:;
    {
        cpu->r[14] = 0x001bcb8cu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001bcb8c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[8], 3, 18u, &shc); cpu->r[13] = v;
        }
    }
L_001bcb90:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001bcb94:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[12], 2, 10u, &shc); cpu->r[3] = v;
        }
    }
L_001bcb98:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[8], 3, 19u, &shc); cpu->r[3] = v;
        }
    }
}

/* _ZN13GLXPlayerUser20sendDelUserStoreDataEPc @ 001bcb9c (arm) */
void fn_001bcb9c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bcb9c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001bcba0:;
    {
        cpu->r[4] = rd32(0x001bcba8u + + 0xc4u);
    }
L_001bcba4:;
    {
        cpu->r[7] = rd32(0x001bcbacu + + 0xc4u);
    }
L_001bcba8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001bcbac:;
    {
        cpu->r[4] = add_flags(cpu, 0x001bcbb4u, cpu->r[4], 0, 0);
    }
L_001bcbb0:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001bcbb4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001bcbb8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001bcbbc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bcbc0:;
    {
        wr32(cpu->r[13] + + 0x80cu, cpu->r[3]);
    }
L_001bcbc4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bcc44;
        }
    }
L_001bcbc8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001bcbcc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bcbd0:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000004u, 1, 0);
    }
L_001bcbd4:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001bcbd8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bcbdc:;
    {
        cpu->r[14] = 0x001bcbe0u; fn_001d0700(cpu);
    }
L_001bcbe0:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0xcu);
    }
L_001bcbe4:;
    {
        cpu->r[1] = rd32(0x001bcbecu + + 0x88u);
    }
L_001bcbe8:;
    {
        cpu->r[2] = 0x00000048u;
    }
L_001bcbec:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_001bcbf0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bcbf4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bcbfcu, cpu->r[1], 0, 0);
    }
L_001bcbf8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001bcbfc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_001bcc00:;
    {
        cpu->r[14] = 0x001bcc04u; imp_sprintf(cpu); /* sprintf */
    }
L_001bcc04:;
    {
        cpu->r[0] = rd32(0x001bcc0cu + + 0x6cu);
    }
L_001bcc08:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001bcc0c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001bcc14u, cpu->r[0], 0, 0);
    }
L_001bcc10:;
    {
        cpu->r[14] = 0x001bcc14u; fn_001d0ac4(cpu);
    }
L_001bcc14:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bcc18:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001bcc1c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001bcc20:;
    {
        cpu->r[14] = 0x001bcc28u;
    }
L_001bcc24:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001bcc28u)) return;
    }
L_001bcc28:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001bcc2c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x80cu);
    }
L_001bcc30:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bcc34:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001bcc38:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001bcc68;
        }
    }
L_001bcc3c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000810u, 0, 0);
    }
L_001bcc40:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bcc44u)) return;
    }
L_001bcc44:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_001bcc48:;
    {
        cpu->r[1] = 0x00000048u;
    }
L_001bcc4c:;
    {
        cpu->r[2] = (~0x00000063u);
    }
L_001bcc50:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001bcc54:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bcc58:;
    {
        cpu->r[14] = 0x001bcc60u;
    }
L_001bcc5c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001bcc60u)) return;
    }
L_001bcc60:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001bcc64:;
    {
        goto L_001bcc28;
    }
L_001bcc68:;
    {
        cpu->r[14] = 0x001bcc6cu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001bcc6c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[4], 4, 16u, &shc); cpu->r[13] = v;
        }
    }
L_001bcc70:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001bcc74:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[8], 1, 18u, &shc); cpu->r[3] = v;
        }
    }
L_001bcc78:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[8], 1, 18u, &shc); cpu->r[3] = v;
        }
    }
}

/* _ZN13GLXPlayerUser21sendGetUserAvatarListEv @ 001bcc7c (arm) */
void fn_001bcc7c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bcc7c:;
    {
        cpu->r[3] = rd32(0x001bcc84u + + 0x94u);
    }
L_001bcc80:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bcc84:;
    {
        cpu->r[2] = rd32(0x001bcc8cu + + 0x90u);
    }
L_001bcc88:;
    {
        cpu->r[3] = add_flags(cpu, 0x001bcc90u, cpu->r[3], 0, 0);
    }
L_001bcc8c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001bcc90:;
    {
        cpu->r[6] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001bcc94:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001bcc98:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001bcc9c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001bcca0:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001bcca4:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001bcca8:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 0);
    }
L_001bccac:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bccb0:;
    {
        wr32(cpu->r[13] + + 0x80cu, cpu->r[3]);
    }
L_001bccb4:;
    {
        cpu->r[14] = 0x001bccb8u; fn_001d0700(cpu);
    }
L_001bccb8:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_001bccbc:;
    {
        cpu->r[2] = 0x00000067u;
    }
L_001bccc0:;
    {
        cpu->r[1] = rd32(0x001bccc8u + + 0x58u);
    }
L_001bccc4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bccc8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001bcccc:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bccd4u, cpu->r[1], 0, 0);
    }
L_001bccd0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001bccd4:;
    {
        cpu->r[14] = 0x001bccd8u; imp_sprintf(cpu); /* sprintf */
    }
L_001bccd8:;
    {
        cpu->r[0] = rd32(0x001bcce0u + + 0x44u);
    }
L_001bccdc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001bcce0:;
    {
        cpu->r[0] = add_flags(cpu, 0x001bcce8u, cpu->r[0], 0, 0);
    }
L_001bcce4:;
    {
        cpu->r[14] = 0x001bcce8u; fn_001d0ac4(cpu);
    }
L_001bcce8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001bccec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bccf0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001bccf4:;
    {
        cpu->r[14] = 0x001bccfcu;
    }
L_001bccf8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001bccfcu)) return;
    }
L_001bccfc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x80cu);
    }
L_001bcd00:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001bcd04:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001bcd08:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001bcd14;
        }
    }
L_001bcd0c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000810u, 0, 0);
    }
L_001bcd10:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bcd14u)) return;
    }
L_001bcd14:;
    {
        cpu->r[14] = 0x001bcd18u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001bcd18:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[8], 2, 15u, &shc); cpu->r[13] = v;
        }
    }
L_001bcd1c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001bcd20:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[8], 4, 6u, &shc); cpu->r[3] = v;
        }
    }
L_001bcd24:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[12]);
        wr16(cpu->r[7], cpu->r[3]);
        cpu->r[7] = wb_tmp;
        }
    }
}

/* _ZN13GLXPlayerUser17sendDelUserAvatarEPc @ 001bcd28 (arm) */
void fn_001bcd28(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bcd28:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001bcd2c:;
    {
        cpu->r[4] = rd32(0x001bcd34u + + 0xd4u);
    }
L_001bcd30:;
    {
        cpu->r[7] = rd32(0x001bcd38u + + 0xd4u);
    }
L_001bcd34:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001bcd38:;
    {
        cpu->r[4] = add_flags(cpu, 0x001bcd40u, cpu->r[4], 0, 0);
    }
L_001bcd3c:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001bcd40:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001bcd44:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001bcd48:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bcd4c:;
    {
        wr32(cpu->r[13] + + 0x80cu, cpu->r[3]);
    }
L_001bcd50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bcde0;
        }
    }
L_001bcd54:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001bcd58:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bcd5c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 0);
    }
L_001bcd60:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001bcd64:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bcd68:;
    {
        cpu->r[14] = 0x001bcd6cu; imp_memset(cpu); /* memset */
    }
L_001bcd6c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bcd70:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bcd74:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001bcd78:;
    {
        cpu->r[14] = 0x001bcd7cu; fn_001d0700(cpu);
    }
L_001bcd7c:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0xcu);
    }
L_001bcd80:;
    {
        cpu->r[1] = rd32(0x001bcd88u + + 0x88u);
    }
L_001bcd84:;
    {
        cpu->r[2] = 0x00000066u;
    }
L_001bcd88:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_001bcd8c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bcd90:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bcd98u, cpu->r[1], 0, 0);
    }
L_001bcd94:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001bcd98:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_001bcd9c:;
    {
        cpu->r[14] = 0x001bcda0u; imp_sprintf(cpu); /* sprintf */
    }
L_001bcda0:;
    {
        cpu->r[0] = rd32(0x001bcda8u + + 0x6cu);
    }
L_001bcda4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001bcda8:;
    {
        cpu->r[0] = add_flags(cpu, 0x001bcdb0u, cpu->r[0], 0, 0);
    }
L_001bcdac:;
    {
        cpu->r[14] = 0x001bcdb0u; fn_001d0ac4(cpu);
    }
L_001bcdb0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bcdb4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001bcdb8:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001bcdbc:;
    {
        cpu->r[14] = 0x001bcdc4u;
    }
L_001bcdc0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001bcdc4u)) return;
    }
L_001bcdc4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001bcdc8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x80cu);
    }
L_001bcdcc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bcdd0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001bcdd4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001bce04;
        }
    }
L_001bcdd8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000810u, 0, 0);
    }
L_001bcddc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bcde0u)) return;
    }
L_001bcde0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_001bcde4:;
    {
        cpu->r[1] = 0x00000066u;
    }
L_001bcde8:;
    {
        cpu->r[2] = (~0x00000063u);
    }
L_001bcdec:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001bcdf0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bcdf4:;
    {
        cpu->r[14] = 0x001bcdfcu;
    }
L_001bcdf8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001bcdfcu)) return;
    }
L_001bcdfc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001bce00:;
    {
        goto L_001bcdc4;
    }
L_001bce04:;
    {
        cpu->r[14] = 0x001bce08u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001bce08:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[8] + (-cpu->r[8]);
        uint64_t v = rd64(cpu->r[8]);
        cpu->r[13] = (uint32_t)v;
        cpu->r[14] = (uint32_t)(v >> 32);
        cpu->r[8] = wb_tmp;
        }
    }
L_001bce0c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001bce10:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 1, 16u, &shc); cpu->r[3] = v;
        }
    }
L_001bce14:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 1, 16u, &shc); cpu->r[3] = v;
        }
    }
}

/* _ZN13GLXPlayerUser20sendUploadUserAvatarEPc @ 001bce18 (arm) */
void fn_001bce18(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bce18:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_001bce1c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001bce20:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001bce24:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001bce28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bcec0;
        }
    }
L_001bce2c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bce30:;
    {
        cpu->r[14] = 0x001bce34u; fn_001d0434(cpu);
    }
L_001bce34:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], 0x00000080u, 0, 0);
    }
L_001bce38:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001bce3c:;
    {
        cpu->r[14] = 0x001bce40u; imp__Znaj(cpu); /* _Znaj */
    }
L_001bce40:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001bce44:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bce48:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001bce4c:;
    {
        cpu->r[14] = 0x001bce50u; fn_001d0700(cpu);
    }
L_001bce50:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0xcu);
    }
L_001bce54:;
    {
        cpu->r[2] = 0x00000047u;
    }
L_001bce58:;
    {
        cpu->r[1] = rd32(0x001bce60u + + 0x80u);
    }
L_001bce5c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bce60:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_001bce64:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bce6cu, cpu->r[1], 0, 0);
    }
L_001bce68:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001bce6c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[6]);
    }
L_001bce70:;
    {
        cpu->r[14] = 0x001bce74u; imp_sprintf(cpu); /* sprintf */
    }
L_001bce74:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bce78:;
    {
        cpu->r[14] = 0x001bce7cu; fn_001d0434(cpu);
    }
L_001bce7c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001bce80:;
    {
        cpu->r[0] = rd32(0x001bce88u + + 0x5cu);
    }
L_001bce84:;
    {
        cpu->r[0] = add_flags(cpu, 0x001bce8cu, cpu->r[0], 0, 0);
    }
L_001bce88:;
    {
        cpu->r[14] = 0x001bce8cu; fn_001d0ac4(cpu);
    }
L_001bce8c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bce90:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001bce94:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001bce98:;
    {
        cpu->r[14] = 0x001bcea0u;
    }
L_001bce9c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001bcea0u)) return;
    }
L_001bcea0:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001bcea4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001bcea8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bceb4;
        }
    }
L_001bceac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bceb0:;
    {
        cpu->r[14] = 0x001bceb4u; fn_0018ba20(cpu);
    }
L_001bceb4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bceb8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001bcebc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bcec0u)) return;
    }
L_001bcec0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_001bcec4:;
    {
        cpu->r[1] = 0x00000047u;
    }
L_001bcec8:;
    {
        cpu->r[2] = (~0x00000063u);
    }
L_001bcecc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001bced0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bced4:;
    {
        cpu->r[14] = 0x001bcedcu;
    }
L_001bced8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001bcedcu)) return;
    }
L_001bcedc:;
    {
        goto L_001bceb4;
    }
}

/* _ZN13GLXPlayerUser22sendDownloadUserAvatarEPc @ 001bcee8 (arm) */
void fn_001bcee8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bcee8:;
    {
        cpu->r[3] = rd32(0x001bcef0u + + 0xa4u);
    }
L_001bceec:;
    {
        cpu->r[2] = rd32(0x001bcef4u + + 0xa4u);
    }
L_001bcef0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001bcef8u, cpu->r[3], 0, 0);
    }
L_001bcef4:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_001bcef8:;
    {
        cpu->r[6] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001bcefc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001bcf00:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001bcf04:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000004u, 1, 0);
    }
L_001bcf08:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001bcf0c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001bcf10:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001bcf14:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 0);
    }
L_001bcf18:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bcf1c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bcf20:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001bcf24:;
    {
        wr32(cpu->r[13] + + 0x80cu, cpu->r[3]);
    }
L_001bcf28:;
    {
        cpu->r[14] = 0x001bcf2cu; fn_001d0700(cpu);
    }
L_001bcf2c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_001bcf30:;
    {
        cpu->r[2] = 0x00000065u;
    }
L_001bcf34:;
    {
        cpu->r[1] = rd32(0x001bcf3cu + + 0x60u);
    }
L_001bcf38:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bcf3c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001bcf40:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bcf48u, cpu->r[1], 0, 0);
    }
L_001bcf44:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001bcf48:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_001bcf4c:;
    {
        cpu->r[14] = 0x001bcf50u; imp_sprintf(cpu); /* sprintf */
    }
L_001bcf50:;
    {
        cpu->r[0] = rd32(0x001bcf58u + + 0x48u);
    }
L_001bcf54:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001bcf58:;
    {
        cpu->r[0] = add_flags(cpu, 0x001bcf60u, cpu->r[0], 0, 0);
    }
L_001bcf5c:;
    {
        cpu->r[14] = 0x001bcf60u; fn_001d0ac4(cpu);
    }
L_001bcf60:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001bcf64:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001bcf68:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001bcf6c:;
    {
        cpu->r[14] = 0x001bcf74u;
    }
L_001bcf70:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001bcf74u)) return;
    }
L_001bcf74:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x80cu);
    }
L_001bcf78:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001bcf7c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001bcf80:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001bcf90;
        }
    }
L_001bcf84:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001bcf88:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001bcf8c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bcf90u)) return;
    }
L_001bcf90:;
    {
        cpu->r[14] = 0x001bcf94u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001bcf94:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[0], 3, 10u, &shc); cpu->r[13] = v;
        }
    }
L_001bcf98:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001bcf9c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] * cpu->r[6]; cpu->r[7] = v;
        }
    }
L_001bcfa0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 2, (cpu->r[7] & 0xffu), &shc); cpu->r[3] = v;
        }
    }
}

/* _ZN13GLXPlayerUser14sendGetUserUIDEPc @ 001bcfa4 (arm) */
void fn_001bcfa4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bcfa4:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001bcfa8:;
    {
        cpu->r[4] = rd32(0x001bcfb0u + + 0xc4u);
    }
L_001bcfac:;
    {
        cpu->r[7] = rd32(0x001bcfb4u + + 0xc4u);
    }
L_001bcfb0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001bcfb4:;
    {
        cpu->r[4] = add_flags(cpu, 0x001bcfbcu, cpu->r[4], 0, 0);
    }
L_001bcfb8:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001bcfbc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001bcfc0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001bcfc4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bcfc8:;
    {
        wr32(cpu->r[13] + + 0x80cu, cpu->r[3]);
    }
L_001bcfcc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bd04c;
        }
    }
L_001bcfd0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001bcfd4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001bcfd8:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000004u, 1, 0);
    }
L_001bcfdc:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001bcfe0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bcfe4:;
    {
        cpu->r[14] = 0x001bcfe8u; fn_001d0700(cpu);
    }
L_001bcfe8:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0xcu);
    }
L_001bcfec:;
    {
        cpu->r[1] = rd32(0x001bcff4u + + 0x88u);
    }
L_001bcff0:;
    {
        cpu->r[2] = 0x0000003au;
    }
L_001bcff4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_001bcff8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bcffc:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bd004u, cpu->r[1], 0, 0);
    }
L_001bd000:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001bd004:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_001bd008:;
    {
        cpu->r[14] = 0x001bd00cu; imp_sprintf(cpu); /* sprintf */
    }
L_001bd00c:;
    {
        cpu->r[0] = rd32(0x001bd014u + + 0x6cu);
    }
L_001bd010:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001bd014:;
    {
        cpu->r[0] = add_flags(cpu, 0x001bd01cu, cpu->r[0], 0, 0);
    }
L_001bd018:;
    {
        cpu->r[14] = 0x001bd01cu; fn_001d0ac4(cpu);
    }
L_001bd01c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001bd020:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001bd024:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001bd028:;
    {
        cpu->r[14] = 0x001bd030u;
    }
L_001bd02c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001bd030u)) return;
    }
L_001bd030:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001bd034:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x80cu);
    }
L_001bd038:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bd03c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001bd040:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001bd070;
        }
    }
L_001bd044:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000810u, 0, 0);
    }
L_001bd048:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bd04cu)) return;
    }
L_001bd04c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_001bd050:;
    {
        cpu->r[1] = 0x0000003au;
    }
L_001bd054:;
    {
        cpu->r[2] = (~0x00000063u);
    }
L_001bd058:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001bd05c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bd060:;
    {
        cpu->r[14] = 0x001bd068u;
    }
L_001bd064:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001bd068u)) return;
    }
L_001bd068:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001bd06c:;
    {
        goto L_001bd030;
    }
L_001bd070:;
    {
        cpu->r[14] = 0x001bd074u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001bd074:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[12], 1, (cpu->r[4] & 0xffu), &shc); cpu->r[13] = v;
        }
    }
L_001bd078:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001bd07c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 2, 5u, &shc); cpu->r[3] = v;
        }
    }
L_001bd080:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] * cpu->r[6]; cpu->r[7] = v;
        }
    }
}

/* _ZN13GLXPlayerUser23sendPointUserReputationEPcib @ 001bd084 (arm) */
void fn_001bd084(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001bd084:;
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
L_001bd088:;
    {
        cpu->r[4] = rd32(0x001bd090u + + 0x11cu);
    }
L_001bd08c:;
    {
        cpu->r[7] = rd32(0x001bd094u + + 0x11cu);
    }
L_001bd090:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_001bd094:;
    {
        cpu->r[4] = add_flags(cpu, 0x001bd09cu, cpu->r[4], 0, 0);
    }
L_001bd098:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000810u, 1, 0);
    }
L_001bd09c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001bd0a0:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001bd0a4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001bd0a8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001bd0ac:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001bd0b0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bd0b4:;
    {
        wr32(cpu->r[13] + + 0x814u, cpu->r[3]);
    }
L_001bd0b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bd0d0;
        }
    }
L_001bd0bc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000005u, 1, 1);
    }
L_001bd0c0:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
        }
    }
L_001bd0c4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_001bd0c8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_001bd0cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001bd110;
        }
    }
L_001bd0d0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_001bd0d4:;
    {
        cpu->r[1] = 0x00000044u;
    }
L_001bd0d8:;
    {
        cpu->r[2] = (~0x00000063u);
    }
L_001bd0dc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001bd0e0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bd0e4:;
    {
        cpu->r[14] = 0x001bd0ecu;
    }
L_001bd0e8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001bd0ecu)) return;
    }
L_001bd0ec:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001bd0f0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001bd0f4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x814u);
    }
L_001bd0f8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001bd0fc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001bd100:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001bd1a8;
        }
    }
L_001bd104:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001bd108:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001bd10c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001bd110u)) return;
    }
L_001bd110:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001bd114:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001bd118:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000004u, 1, 0);
    }
L_001bd11c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001bd120:;
    {
        cpu->r[14] = 0x001bd124u; fn_001d0700(cpu);
    }
L_001bd124:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001bd128:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001bd17c;
        }
    }
L_001bd12c:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0xcu);
    }
L_001bd130:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001bd134:;
    {
        cpu->r[1] = rd32(0x001bd13cu + + 0x78u);
    }
L_001bd138:;
    {
        cpu->r[2] = 0x00000044u;
    }
L_001bd13c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_001bd140:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bd148u, cpu->r[1], 0, 0);
    }
L_001bd144:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[9]);
    }
L_001bd148:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_001bd14c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001bd150:;
    {
        cpu->r[14] = 0x001bd154u; imp_sprintf(cpu); /* sprintf */
    }
L_001bd154:;
    {
        cpu->r[0] = rd32(0x001bd15cu + + 0x5cu);
    }
L_001bd158:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001bd15c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001bd164u, cpu->r[0], 0, 0);
    }
L_001bd160:;
    {
        cpu->r[14] = 0x001bd164u; fn_001d0ac4(cpu);
    }
L_001bd164:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001bd168:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001bd16c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001bd170:;
    {
        cpu->r[14] = 0x001bd178u;
    }
L_001bd174:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001bd178u)) return;
    }
L_001bd178:;
    {
        goto L_001bd0f0;
    }
L_001bd17c:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0xcu);
    }
L_001bd180:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001bd184:;
    {
        cpu->r[1] = rd32(0x001bd18cu + + 0x30u);
    }
L_001bd188:;
    {
        cpu->r[2] = 0x00000044u;
    }
L_001bd18c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_001bd190:;
    {
        cpu->r[1] = add_flags(cpu, 0x001bd198u, cpu->r[1], 0, 0);
    }
L_001bd194:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[9]);
    }
L_001bd198:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_001bd19c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001bd1a0:;
    {
        cpu->r[14] = 0x001bd1a4u; imp_sprintf(cpu); /* sprintf */
    }
L_001bd1a4:;
    {
        goto L_001bd154;
    }
L_001bd1a8:;
    {
        cpu->r[14] = 0x001bd1acu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001bd1ac:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] & shifter(cpu->r[12], 4, (cpu->r[3] & 0xffu), &shc); cpu->r[13] = v;
        }
    }
L_001bd1b0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001bd1b4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[12], 1, 11u, &shc); cpu->r[3] = v;
        }
    }
L_001bd1b8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[12], 1, 11u, &shc); cpu->r[3] = v;
        }
    }
L_001bd1bc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 4, 10u, &shc); cpu->r[3] = v;
        }
    }
}
