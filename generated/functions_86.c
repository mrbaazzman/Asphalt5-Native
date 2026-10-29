#include "functions.h"

/* sub_001fba84 @ 001fba84 (arm) */
void fn_001fba84(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001fba84:;
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
L_001fba88:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_001fba8c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001fba90:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001fba94:;
    {
        cpu->r[0] = rd8(cpu->r[1] + + 0x15u);
    }
L_001fba98:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001fba9c:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001fbaa0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x38u);
    }
L_001fbaa4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fbaa8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001fbaac:;
    {
        cpu->r[9] = cpu->r[3];
    }
L_001fbab0:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x44u);
    }
L_001fbab4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000015u;
        }
    }
L_001fbab8:;
    {
        cpu->r[7] = rd32(cpu->r[1]);
    }
L_001fbabc:;
    {
        cpu->r[8] = rd32(cpu->r[2]);
    }
L_001fbac0:;
    {
        cpu->r[10] = rd32(cpu->r[5]);
    }
L_001fbac4:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x74u, cpu->r[3]);
        }
    }
L_001fbac8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fbbd0;
        }
    }
L_001fbacc:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_001fbad0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fbbbc;
        }
    }
L_001fbad4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x40u);
    }
L_001fbad8:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x001fbae0u + + 0x204u);
    }
L_001fbadc:;
    {
        uint32_t v = cpu->r[9] * cpu->r[3]; cpu->r[3] = v;
    }
L_001fbae0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001fbae4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x584u);
    }
L_001fbae8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000009u, 1, 1);
    }
L_001fbaec:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fbbdc;
        }
    }
L_001fbaf0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x580u);
    }
L_001fbaf4:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 22u, &shc); cpu->r[3] = v;
    }
L_001fbaf8:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 22u, &shc); cpu->r[3] = v;
    }
L_001fbafc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001fbb00:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x24u);
    }
L_001fbb04:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fbb08:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001fbccc;
        }
    }
L_001fbb0c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x8u);
    }
L_001fbb10:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x584u);
    }
L_001fbb14:;
    {
        cpu->r[1] = rd8(cpu->r[1] + cpu->r[3]);
    }
L_001fbb18:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
    }
L_001fbb1c:;
    {
        uint32_t v = shifter(cpu->r[0], 3, (cpu->r[1] & 0xffu), &shc); cpu->r[0] = v;
    }
L_001fbb20:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001fbb24:;
    {
        wr32(cpu->r[4] + + 0x580u, cpu->r[0]);
    }
L_001fbb28:;
    {
        wr32(cpu->r[4] + + 0x584u, cpu->r[2]);
    }
L_001fbb2c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001fbc9c;
        }
    }
L_001fbb30:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[10], cpu->r[7], 0, 0);
    }
L_001fbb34:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_001fbb38:;
    {
        uint32_t v = cpu->r[9] * cpu->r[8] + cpu->r[2]; cpu->r[2] = v;
    }
L_001fbb3c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_001fbb40:;
    {
        cpu->r[2] = rd8(cpu->r[5] + + 0x16u);
    }
L_001fbb44:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0x40u);
        }
    }
L_001fbb48:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[10] = sub_flags(cpu, cpu->r[1], cpu->r[8], 1, 0);
        }
    }
L_001fbb4c:;
    {
        cpu->r[1] = rd32(cpu->r[5]);
    }
L_001fbb50:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = cpu->r[9] * cpu->r[10] + cpu->r[7]; cpu->r[10] = v;
        }
    }
L_001fbb54:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001fbb58:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[3] = v;
    }
L_001fbb5c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fbc34;
        }
    }
L_001fbb60:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001fbb64:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fbbb0;
        }
    }
L_001fbb68:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x1cu);
    }
L_001fbb6c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001fbb70:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_001fbb74:;
    {
        vfp_vadd(cpu, 15, 15, 16);
    }
L_001fbb78:;
    {
        cpu->r[1] = rd32(cpu->r[6] + shifter(cpu->r[7], 2, 2u, &shc));
    }
L_001fbb7c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001fbb80:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[7], 1, 1);
    }
L_001fbb84:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001fbb88:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], shifter(cpu->r[8], 2, 2u, &shc), 0, 0);
    }
L_001fbb8c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0]);
    }
L_001fbb90:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = 0x00000000u;
        }
    }
L_001fbb94:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001fbb98:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_001fbb9c:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001fbba0:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[8], 2, 2u, &shc), cpu->r[0]);
    }
L_001fbba4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
        }
    }
L_001fbba8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[10], 1, 1);
    }
L_001fbbac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fbb70;
        }
    }
L_001fbbb0:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], cpu->r[10], 1, 0);
    }
L_001fbbb4:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_001fbbb8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001fbae4;
        }
    }
L_001fbbbc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x38u);
    }
L_001fbbc0:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001fbbc4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001fbbc8:;
    {
        wr32(cpu->r[1], cpu->r[7]);
    }
L_001fbbcc:;
    {
        wr32(cpu->r[2], cpu->r[8]);
    }
L_001fbbd0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001fbbd4:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001fbbd8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001fbbdcu)) return;
    }
L_001fbbdc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fbbe0:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x580u, cpu->r[3]);
        }
    }
L_001fbbe4:;
    {
        goto L_001fbc08;
    }
L_001fbbe8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x584u);
    }
L_001fbbec:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x580u);
    }
L_001fbbf0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001fbbf4:;
    {
        wr32(cpu->r[4] + + 0x584u, cpu->r[2]);
    }
L_001fbbf8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000018u, 1, 1);
    }
L_001fbbfc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], shifter(cpu->r[0], 2, (cpu->r[3] & 0xffu), &shc), 0, 0);
    }
L_001fbc00:;
    {
        wr32(cpu->r[4] + + 0x580u, cpu->r[0]);
    }
L_001fbc04:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001fbaf4;
        }
    }
L_001fbc08:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x578u);
    }
L_001fbc0c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fbc10:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fbc14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fbc24;
        }
    }
L_001fbc18:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x570u);
    }
L_001fbc1c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fbc20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fbaf0;
        }
    }
L_001fbc24:;
    {
        cpu->r[14] = 0x001fbc28u; fn_001f8af4(cpu);
    }
L_001fbc28:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001fbc2c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fbbe8;
        }
    }
L_001fbc30:;
    {
        goto L_001fbaf0;
    }
L_001fbc34:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001fbc38:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fbbb0;
        }
    }
L_001fbc3c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x1cu);
    }
L_001fbc40:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001fbc44:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001fbc4cu + + 0x98u);
    }
L_001fbc48:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001fbc4c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3]);
    }
L_001fbc50:;
    {
        vfp_vadd(cpu, 15, 15, 14);
    }
L_001fbc54:;
    {
        cpu->r[1] = rd32(cpu->r[6] + shifter(cpu->r[7], 2, 2u, &shc));
    }
L_001fbc58:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001fbc5c:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[7], 1, 1);
    }
L_001fbc60:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001fbc64:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], shifter(cpu->r[8], 2, 2u, &shc), 0, 0);
    }
L_001fbc68:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0]);
    }
L_001fbc6c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = 0x00000000u;
        }
    }
L_001fbc70:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001fbc74:;
    {
        vfp_vadd(cpu, 14, 14, 15);
    }
L_001fbc78:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,14);
    }
L_001fbc7c:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[8], 2, 2u, &shc), cpu->r[0]);
    }
L_001fbc80:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
        }
    }
L_001fbc84:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[10], 1, 1);
    }
L_001fbc88:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fbc4c;
        }
    }
L_001fbc8c:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], cpu->r[10], 1, 0);
    }
L_001fbc90:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_001fbc94:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001fbae4;
        }
    }
L_001fbc98:;
    {
        goto L_001fbbbc;
    }
L_001fbc9c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001fbca0:;
    {
        wr32(cpu->r[4] + + 0x584u, cpu->r[3]);
    }
L_001fbca4:;
    {
        cpu->r[0] = rd8(cpu->r[4] + + 0x570u);
    }
L_001fbca8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fbcac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fbcbc;
        }
    }
L_001fbcb0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x578u);
    }
L_001fbcb4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fbcb8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fbbd0;
        }
    }
L_001fbcbc:;
    {
        cpu->r[3] = 0x00000015u;
    }
L_001fbcc0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001fbcc4:;
    {
        wr32(cpu->r[4] + + 0x74u, cpu->r[3]);
    }
L_001fbcc8:;
    {
        goto L_001fbbd0;
    }
L_001fbccc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fbcd0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001fbcd4:;
    {
        cpu->r[14] = 0x001fbcd8u; fn_001fb8c4(cpu);
    }
L_001fbcd8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fbcdc:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001fbb30;
        }
    }
L_001fbce0:;
    {
        goto L_001fbca4;
    }
}

/* sub_001fbce8 @ 001fbce8 (arm) */
void fn_001fbce8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001fbce8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001fbcec:;
    {
        cpu->r[3] = rd8(cpu->r[1] + + 0x15u);
    }
L_001fbcf0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001fbcf4:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001fbcf8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fbcfc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000015u;
        }
    }
L_001fbd00:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0x74u, cpu->r[3]);
        }
    }
L_001fbd04:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001fbd08:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001fbd0cu)) return;
        }
    }
L_001fbd0c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x584u);
    }
L_001fbd10:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000009u, 1, 1);
    }
L_001fbd14:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fbd88;
        }
    }
L_001fbd18:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x580u);
    }
L_001fbd1c:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 22u, &shc); cpu->r[2] = v;
    }
L_001fbd20:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 22u, &shc); cpu->r[2] = v;
    }
L_001fbd24:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001fbd28:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[2] + + 0x24u);
    }
L_001fbd2c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fbd30:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001fbde0;
        }
    }
L_001fbd34:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x8u);
    }
L_001fbd38:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x584u);
    }
L_001fbd3c:;
    {
        cpu->r[1] = rd8(cpu->r[1] + cpu->r[0]);
    }
L_001fbd40:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
    }
L_001fbd44:;
    {
        uint32_t v = shifter(cpu->r[3], 3, (cpu->r[1] & 0xffu), &shc); cpu->r[3] = v;
    }
L_001fbd48:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001fbd4c:;
    {
        wr32(cpu->r[4] + + 0x580u, cpu->r[3]);
    }
L_001fbd50:;
    {
        wr32(cpu->r[4] + + 0x584u, cpu->r[2]);
    }
L_001fbd54:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001fbd58:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001fbd5c:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + + 0x584u, cpu->r[3]);
        }
    }
L_001fbd60:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001fbd64u)) return;
        }
    }
L_001fbd64:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x570u);
    }
L_001fbd68:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fbd6c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fbd7c;
        }
    }
L_001fbd70:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x578u);
    }
L_001fbd74:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fbd78:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        uint32_t t = v3;
        cpu->r[13] += 16u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001fbd7cu)) return;
        }
    }
L_001fbd7c:;
    {
        cpu->r[3] = 0x00000015u;
    }
L_001fbd80:;
    {
        wr32(cpu->r[4] + + 0x74u, cpu->r[3]);
    }
L_001fbd84:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001fbd88u)) return;
    }
L_001fbd88:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fbd8c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x580u, cpu->r[3]);
        }
    }
L_001fbd90:;
    {
        goto L_001fbdb4;
    }
L_001fbd94:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x584u);
    }
L_001fbd98:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x580u);
    }
L_001fbd9c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001fbda0:;
    {
        wr32(cpu->r[4] + + 0x584u, cpu->r[2]);
    }
L_001fbda4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000018u, 1, 1);
    }
L_001fbda8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[0], 2, (cpu->r[3] & 0xffu), &shc), 0, 0);
    }
L_001fbdac:;
    {
        wr32(cpu->r[4] + + 0x580u, cpu->r[3]);
    }
L_001fbdb0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001fbd1c;
        }
    }
L_001fbdb4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x578u);
    }
L_001fbdb8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fbdbc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fbdc0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fbdd0;
        }
    }
L_001fbdc4:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x570u);
    }
L_001fbdc8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fbdcc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fbd18;
        }
    }
L_001fbdd0:;
    {
        cpu->r[14] = 0x001fbdd4u; fn_001f8af4(cpu);
    }
L_001fbdd4:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001fbdd8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fbd94;
        }
    }
L_001fbddc:;
    {
        goto L_001fbd18;
    }
L_001fbde0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001fbde4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fbde8:;
    {
        cpu->r[14] = 0x001fbdecu; fn_001fb8c4(cpu);
    }
L_001fbdec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fbdf0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001fbdf4u)) return;
        }
    }
L_001fbdf4:;
    {
        goto L_001fbd64;
    }
}

/* sub_001fbdf8 @ 001fbdf8 (arm) */
void fn_001fbdf8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001fbdf8:;
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
L_001fbdfc:;
    {
        cpu->r[13] -= 40u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
        wr64(cpu->r[13] + 16u, *(uint64_t*)vfp_d(cpu, 10));
        wr64(cpu->r[13] + 24u, *(uint64_t*)vfp_d(cpu, 11));
        wr64(cpu->r[13] + 32u, *(uint64_t*)vfp_d(cpu, 12));
    }
L_001fbe00:;
    {
        cpu->r[5] = rd32(0x001fbe08u + + 0xb50u);
    }
L_001fbe04:;
    {
        cpu->r[6] = rd32(0x001fbe0cu + + 0xb50u);
    }
L_001fbe08:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000a20u, 1, 0);
    }
L_001fbe0c:;
    {
        cpu->r[5] = add_flags(cpu, 0x001fbe14u, cpu->r[5], 0, 0);
    }
L_001fbe10:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001fbe14:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00000910u, 0, 0);
    }
L_001fbe18:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001fbe1c:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001fbe20:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000008u, 0, 0);
    }
L_001fbe24:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_001fbe28:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00000920u, 0, 0);
    }
L_001fbe2c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_001fbe30:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_001fbe34:;
    {
        wr32(cpu->r[13] + + 0x90u, cpu->r[2]);
    }
L_001fbe38:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[1]);
    }
L_001fbe3c:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001fbe40:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000910u, 0, 0);
    }
L_001fbe44:;
    {
        wr32(cpu->r[13] + + 0x84u, cpu->r[5]);
    }
L_001fbe48:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_001fbe4c:;
    {
        wr32(cpu->r[13] + + 0xa0u, cpu->r[6]);
    }
L_001fbe50:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_001fbe54:;
    {
        wr32(cpu->r[13] + + 0xa24u, cpu->r[12]);
    }
L_001fbe58:;
    {
        cpu->r[14] = 0x001fbe5cu; fn_001f8d28(cpu);
    }
L_001fbe5c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fbe60:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fbe90;
        }
    }
L_001fbe64:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x84u);
    }
L_001fbe68:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0xa0u);
    }
L_001fbe6c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xa24u);
    }
L_001fbe70:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_001fbe74:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001fbe78:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001fbe7c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fd598;
        }
    }
L_001fbe80:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000022cu, 0, 0);
    }
L_001fbe84:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001fbe88:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        *(uint64_t*)vfp_d(cpu, 10) = rd64(cpu->r[13] + 16u);
        *(uint64_t*)vfp_d(cpu, 11) = rd64(cpu->r[13] + 24u);
        *(uint64_t*)vfp_d(cpu, 12) = rd64(cpu->r[13] + 32u);
        cpu->r[13] += 40u;
    }
L_001fbe8c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001fbe90u)) return;
    }
L_001fbe90:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x920u);
    }
L_001fbe94:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_001fbe98:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x90u);
    }
L_001fbe9c:;
    {
        cpu->r[0] = 0x00000028u;
    }
L_001fbea0:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x1a4u);
    }
L_001fbea4:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[1] = v;
    }
L_001fbea8:;
    {
        cpu->r[5] = rd32(cpu->r[5]);
    }
L_001fbeac:;
    {
        cpu->r[8] = rd32(cpu->r[8]);
    }
L_001fbeb0:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x918u);
    }
L_001fbeb4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], cpu->r[1], 0, 0);
    }
L_001fbeb8:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[7]);
    }
L_001fbebc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x000001acu, 0, 0);
    }
L_001fbec0:;
    {
        wr32(cpu->r[13] + + 0xbcu, cpu->r[5]);
    }
L_001fbec4:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[8]);
    }
L_001fbec8:;
    {
        wr32(cpu->r[13] + + 0xc0u, cpu->r[1]);
    }
L_001fbecc:;
    {
        wr32(cpu->r[13] + + 0x8cu, cpu->r[9]);
    }
L_001fbed0:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0x1adu);
    }
L_001fbed4:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x1acu);
    }
L_001fbed8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_001fbedc:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1]; cpu->r[0] = v;
    }
L_001fbee0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_001fbee4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001fbee8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_001fbeec:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[7], cpu->r[0], 0, 0);
    }
L_001fbef0:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[10]);
    }
L_001fbef4:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[11] = v;
    }
L_001fbef8:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[0]);
    }
L_001fbefc:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[3]);
    }
L_001fbf00:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[11]);
    }
L_001fbf04:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fc4a8;
        }
    }
L_001fbf08:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4cu);
    }
L_001fbf0c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001fbf10:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x4u);
    }
L_001fbf14:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0x2u);
    }
L_001fbf18:;
    {
        wr32(cpu->r[13] + + 0x4d0u, cpu->r[3]);
    }
L_001fbf1c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
    }
L_001fbf20:;
    {
        cpu->r[5] = rd8(cpu->r[2] + + 0x9u);
    }
L_001fbf24:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], shifter(cpu->r[5], 2, 1u, &shc), 0, 0);
    }
L_001fbf28:;
    {
        cpu->r[2] = rd16(cpu->r[2] + + 0x94u);
    }
L_001fbf2c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001fbf30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fc498;
        }
    }
L_001fbf34:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x000004d0u, 0, 0);
    }
L_001fbf38:;
    {
        cpu->r[10] = 0x00000003u;
    }
L_001fbf3c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000008u, 0, 0);
    }
L_001fbf40:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[3]);
    }
L_001fbf44:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000008u, 1, 0);
    }
L_001fbf48:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[4]);
    }
L_001fbf4c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_001fbf50:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[8]);
    }
L_001fbf54:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[9]);
    }
L_001fbf58:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[10]);
    }
L_001fbf5c:;
    {
        goto L_001fbfd4;
    }
L_001fbf60:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001fbf64:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001fbf68:;
    {
        wr32(cpu->r[12] + - 0x4u, cpu->r[3]);
    }
L_001fbf6c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x30u);
    }
L_001fbf70:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_001fbf74:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001fbf78:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[0]);
    }
L_001fbf7c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_001fbf80:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001fc4b8;
        }
    }
L_001fbf84:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4cu);
    }
L_001fbf88:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001fbf8c:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x44u);
    }
L_001fbf90:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x40u);
    }
L_001fbf94:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x4u);
    }
L_001fbf98:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_001fbf9c:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[2]);
    }
L_001fbfa0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_001fbfa4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000003u, 0, 0);
    }
L_001fbfa8:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[5]);
    }
L_001fbfac:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x2u);
    }
L_001fbfb0:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001fbfb4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_001fbfb8:;
    {
        uint32_t wb_tmp = cpu->r[6] + 0x00000004u;
        wr32(cpu->r[6], cpu->r[7]);
        cpu->r[6] = wb_tmp;
    }
L_001fbfbc:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[6]);
    }
L_001fbfc0:;
    {
        cpu->r[5] = rd8(cpu->r[3] + + 0x9u);
    }
L_001fbfc4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[5], 2, 1u, &shc), 0, 0);
    }
L_001fbfc8:;
    {
        cpu->r[3] = rd16(cpu->r[3] + + 0x94u);
    }
L_001fbfcc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_001fbfd0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fc498;
        }
    }
L_001fbfd4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fbfd8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001fbfdc:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x114u);
    }
L_001fbfe0:;
    {
        cpu->r[14] = 0x001fbfe4u; fn_001f8b50(cpu);
    }
L_001fbfe4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fbfe8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fbf60;
        }
    }
L_001fbfec:;
    {
        cpu->r[2] = 0x0000063cu;
    }
L_001fbff0:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x40u);
    }
L_001fbff4:;
    {
        cpu->r[3] = rd32(0x001fbffcu + + 0x964u);
    }
L_001fbff8:;
    {
        uint32_t v = cpu->r[2] * cpu->r[5]; cpu->r[5] = v;
    }
L_001fbffc:;
    {
        cpu->r[11] = rd32(cpu->r[11] + + 0x3f4u);
    }
L_001fc000:;
    {
        cpu->r[3] = add_flags(cpu, 0x001fc008u, cpu->r[3], 0, 0);
    }
L_001fc004:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[6], cpu->r[5], 0, 0);
    }
L_001fc008:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[11]);
    }
L_001fc00c:;
    {
        cpu->r[2] = rd8(cpu->r[10] + + 0x634u);
    }
L_001fc010:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001fc014:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x74u);
    }
L_001fc018:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001fc01c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_001fc020:;
    {
        cpu->r[14] = 0x001fc024u; fn_001f77f0(cpu);
    }
L_001fc024:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_001fc028:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fc02c:;
    {
        cpu->r[14] = 0x001fc030u; fn_001f8b50(cpu);
    }
L_001fc030:;
    {
        wr16(cpu->r[11], cpu->r[0]);
    }
L_001fc034:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001fc038:;
    {
        cpu->r[14] = 0x001fc03cu; fn_001f77f0(cpu);
    }
L_001fc03c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_001fc040:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fc044:;
    {
        cpu->r[14] = 0x001fc048u; fn_001f8b50(cpu);
    }
L_001fc048:;
    {
        wr16(cpu->r[11] + + 0x2u, cpu->r[0]);
    }
L_001fc04c:;
    {
        cpu->r[3] = rd8(cpu->r[6] + cpu->r[5]);
    }
L_001fc050:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fc054:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fc204;
        }
    }
L_001fc058:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_001fc05c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001fc060:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[12]);
    }
L_001fc064:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_001fc068:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_001fc06c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001fc070:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], cpu->r[0], 0, 0);
    }
L_001fc074:;
    {
        cpu->r[5] = rd8(cpu->r[3] + + 0x1u);
    }
L_001fc078:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], cpu->r[5], 0, 0);
    }
L_001fc07c:;
    {
        cpu->r[9] = rd8(cpu->r[3] + + 0x31u);
    }
L_001fc080:;
    {
        cpu->r[6] = rd8(cpu->r[3] + + 0x21u);
    }
L_001fc084:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001fc088:;
    {
        uint32_t v = shifter(cpu->r[1], 2, (cpu->r[9] & 0xffu), &shc); cpu->r[11] = v;
    }
L_001fc08c:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], 0x00000001u, 1, 0);
    }
L_001fc090:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = cpu->r[9];
        }
    }
L_001fc094:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fc10c;
        }
    }
L_001fc098:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x584u);
    }
L_001fc09c:;
    {
        cpu->r[7] = 0x00000830u;
    }
L_001fc0a0:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0x41u);
    }
L_001fc0a4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8cu);
    }
L_001fc0a8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000009u, 1, 1);
    }
L_001fc0ac:;
    {
        uint32_t v = cpu->r[7] * cpu->r[1] + cpu->r[3]; cpu->r[3] = v;
    }
L_001fc0b0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fc420;
        }
    }
L_001fc0b4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x580u);
    }
L_001fc0b8:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 22u, &shc); cpu->r[1] = v;
    }
L_001fc0bc:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 22u, &shc); cpu->r[1] = v;
    }
L_001fc0c0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_001fc0c4:;
    {
        cpu->r[7] = (uint32_t)(int32_t)s16(cpu->r[1] + + 0x24u);
    }
L_001fc0c8:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001fc0cc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001fc47c;
        }
    }
L_001fc0d0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
    }
L_001fc0d4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x584u);
    }
L_001fc0d8:;
    {
        cpu->r[1] = rd8(cpu->r[1] + cpu->r[7]);
    }
L_001fc0dc:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
    }
L_001fc0e0:;
    {
        uint32_t v = shifter(cpu->r[2], 3, (cpu->r[1] & 0xffu), &shc); cpu->r[2] = v;
    }
L_001fc0e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fc0e8:;
    {
        wr32(cpu->r[4] + + 0x584u, cpu->r[0]);
    }
L_001fc0ec:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = (~0x00000000u);
        }
    }
L_001fc0f0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_001fc0f4:;
    {
        wr32(cpu->r[4] + + 0x580u, cpu->r[2]);
    }
L_001fc0f8:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + + 0x584u, cpu->r[12]);
        }
    }
L_001fc0fc:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x17u);
    }
L_001fc100:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001fc104:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[3] + + 0x828u);
        }
    }
L_001fc108:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = rd32(cpu->r[3] + shifter(cpu->r[7], 2, 2u, &shc));
        }
    }
L_001fc10c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001fc110:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = cpu->r[8];
        }
    }
L_001fc114:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fc1ec;
        }
    }
L_001fc118:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_001fc11c:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 3u, &shc); cpu->r[5] = v;
    }
L_001fc120:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[5]);
    }
L_001fc124:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001fc128:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[8], 2, 1u, &shc), 0, 0);
    }
L_001fc12c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_001fc130:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 1u, &shc); cpu->r[6] = v;
    }
L_001fc134:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[0]);
    }
L_001fc138:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[6]);
    }
L_001fc13c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_001fc140:;
    {
        uint32_t v = cpu->r[7] & cpu->r[11]; cpu->r[3] = v;
    }
L_001fc144:;
    {
        uint32_t v = shifter(cpu->r[7], 1, (cpu->r[9] & 0xffu), &shc); cpu->r[7] = v;
    }
L_001fc148:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_001fc14c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001fc150:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x52u);
    }
L_001fc154:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fc158:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001fc3e4;
        }
    }
L_001fc15c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x584u);
    }
L_001fc160:;
    {
        cpu->r[12] = 0x00000830u;
    }
L_001fc164:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x8cu);
    }
L_001fc168:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000009u, 1, 1);
    }
L_001fc16c:;
    {
        uint32_t v = cpu->r[12] * cpu->r[3] + cpu->r[6]; cpu->r[6] = v;
    }
L_001fc170:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fc38c;
        }
    }
L_001fc174:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x580u);
    }
L_001fc178:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 22u, &shc); cpu->r[2] = v;
    }
L_001fc17c:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 22u, &shc); cpu->r[2] = v;
    }
L_001fc180:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001fc184:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[2] + + 0x24u);
    }
L_001fc188:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fc18c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001fc3f8;
        }
    }
L_001fc190:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x8u);
    }
L_001fc194:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x584u);
    }
L_001fc198:;
    {
        cpu->r[1] = rd8(cpu->r[1] + cpu->r[0]);
    }
L_001fc19c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
    }
L_001fc1a0:;
    {
        wr32(cpu->r[4] + + 0x584u, cpu->r[2]);
    }
L_001fc1a4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001fc1a8:;
    {
        uint32_t v = shifter(cpu->r[3], 3, (cpu->r[1] & 0xffu), &shc); cpu->r[3] = v;
    }
L_001fc1ac:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001fc1b0:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + + 0x584u, cpu->r[0]);
        }
    }
L_001fc1b4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001fc1b8:;
    {
        wr32(cpu->r[4] + + 0x580u, cpu->r[3]);
    }
L_001fc1bc:;
    {
        cpu->r[3] = rd8(cpu->r[6] + + 0x17u);
    }
L_001fc1c0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_001fc1c4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fc1c8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[6] + + 0x828u);
        }
    }
L_001fc1cc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[0], 2, 2u, &shc));
        }
    }
L_001fc1d0:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_001fc1d4:;
    {
        wr16(cpu->r[1] + cpu->r[5], cpu->r[0]);
    }
L_001fc1d8:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001fc1dc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000002u, 0, 0);
    }
L_001fc1e0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_001fc1e4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_001fc1e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fc13c;
        }
    }
L_001fc1ec:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x28u);
    }
L_001fc1f0:;
    {
        cpu->r[2] = rd8(cpu->r[10]);
    }
L_001fc1f4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001fc1f8:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[7]);
    }
L_001fc1fc:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 1);
    }
L_001fc200:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001fc064;
        }
    }
L_001fc204:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x584u);
    }
L_001fc208:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_001fc20c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fbf60;
        }
    }
L_001fc210:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001fc214:;
    {
        wr8(cpu->r[13] + + 0x925u, cpu->r[2]);
    }
L_001fc218:;
    {
        wr8(cpu->r[13] + + 0x924u, cpu->r[2]);
    }
L_001fc21c:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x638u);
    }
L_001fc220:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001fc224:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fc34c;
        }
    }
L_001fc228:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[10], 0x00000154u, 0, 0);
    }
L_001fc22c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000920u, 0, 0);
    }
L_001fc230:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_001fc234:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000002u, 0, 0);
    }
L_001fc238:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x24u);
    }
L_001fc23c:;
    {
        cpu->r[6] = 0x00000002u;
    }
L_001fc240:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[4]);
    }
L_001fc244:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_001fc248:;
    {
        goto L_001fc2a4;
    }
L_001fc24c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000a20u, 0, 0);
    }
L_001fc250:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001fc254:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_001fc258:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001fc25c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], cpu->r[8], 0, 0);
    }
L_001fc260:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], cpu->r[4], 0, 0);
    }
L_001fc264:;
    {
        wr8(cpu->r[8] + - 0x104u, cpu->r[1]);
    }
L_001fc268:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001fc26c:;
    {
        wr8(cpu->r[4] + - 0x104u, cpu->r[1]);
    }
L_001fc270:;
    {
        wr8(cpu->r[8] + cpu->r[6], cpu->r[1]);
    }
L_001fc274:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001fc408;
        }
    }
L_001fc278:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[2], 1, 1);
    }
L_001fc27c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = (~cpu->r[3]);
        }
    }
L_001fc280:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[11], 0, 0);
        }
    }
L_001fc284:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
        }
    }
L_001fc288:;
    {
        if (cond_test(cpu, 11)) {
        wr16(cpu->r[7] + + 0x4u, cpu->r[3]);
        }
    }
L_001fc28c:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x638u);
    }
L_001fc290:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001fc294:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000002u, 0, 0);
    }
L_001fc298:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000002u, 0, 0);
    }
L_001fc29c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_001fc2a0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001fc348;
        }
    }
L_001fc2a4:;
    {
        cpu->r[4] = rd8(cpu->r[5] + + 0x2eeu);
    }
L_001fc2a8:;
    {
        cpu->r[8] = rd8(cpu->r[5] + + 0x2efu);
    }
L_001fc2ac:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x24u);
    }
L_001fc2b0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x000000a8u, 0, 0);
    }
L_001fc2b4:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[12] = v;
    }
L_001fc2b8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], 0x000000a8u, 0, 0);
    }
L_001fc2bc:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 1u, &shc); cpu->r[1] = v;
    }
L_001fc2c0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[10], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001fc2c4:;
    {
        cpu->r[11] = (uint32_t)(int32_t)s16(cpu->r[9] + cpu->r[12]);
    }
L_001fc2c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001fc2cc:;
    {
        cpu->r[9] = (uint32_t)(int32_t)s16(cpu->r[9] + cpu->r[1]);
    }
L_001fc2d0:;
    {
        cpu->r[2] = rd16(cpu->r[2] + + 0x2u);
    }
L_001fc2d4:;
    {
        cpu->r[0] = rd16(cpu->r[5]);
    }
L_001fc2d8:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[11], 1, 0);
    }
L_001fc2dc:;
    {
        cpu->r[1] = rd16(cpu->r[3] + + 0x2u);
    }
L_001fc2e0:;
    {
        uint32_t v = cpu->r[9] ^ shifter(cpu->r[9], 1, 31u, &shc); cpu->r[3] = v;
    }
L_001fc2e4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[9], 1, 31u, &shc), 1, 0);
    }
L_001fc2e8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_001fc2ec:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_001fc2f0:;
    {
        uint32_t v = cpu->r[0] * cpu->r[3]; cpu->r[0] = v;
    }
L_001fc2f4:;
    {
        cpu->r[14] = 0x001fc2f8u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001fc2f8:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001fc2fc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001fc300:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[7] + + 0x4u);
    }
L_001fc304:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], cpu->r[0], 1, 0);
        }
    }
L_001fc308:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[11] = add_flags(cpu, cpu->r[0], cpu->r[11], 0, 0);
        }
    }
L_001fc30c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], cpu->r[11], 1, 0);
    }
L_001fc310:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[2], 1, 1);
    }
L_001fc314:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[1] = v;
        }
    }
L_001fc318:;
    {
        if (cond_test(cpu, 14)) {
        uint32_t v = shifter(cpu->r[11], 2, 1u, &shc); cpu->r[1] = v;
        }
    }
L_001fc31c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fc320:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fc24c;
        }
    }
L_001fc324:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001fc328:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000002u, 0, 0);
    }
L_001fc32c:;
    {
        wr8(cpu->r[9] + cpu->r[6], cpu->r[3]);
    }
L_001fc330:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001fc334:;
    {
        wr16(cpu->r[7] + + 0x4u, cpu->r[11]);
    }
L_001fc338:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000002u, 0, 0);
    }
L_001fc33c:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x638u);
    }
L_001fc340:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_001fc344:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001fc2a4;
        }
    }
L_001fc348:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x18u);
    }
L_001fc34c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fc350:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fbf6c;
        }
    }
L_001fc354:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000920u, 0, 0);
    }
L_001fc358:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_001fc35c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001fc360:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_001fc364:;
    {
        cpu->r[0] = rd8(cpu->r[2] + cpu->r[1]);
    }
L_001fc368:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fc36c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[3] = v;
        }
    }
L_001fc370:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[11] = (~0x00000000u);
        }
    }
L_001fc374:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001fc378:;
    {
        if (cond_test(cpu, 1)) {
        wr16(cpu->r[12] + cpu->r[3], cpu->r[11]);
        }
    }
L_001fc37c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[10] + + 0x638u);
        }
    }
L_001fc380:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001fc384:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001fc364;
        }
    }
L_001fc388:;
    {
        goto L_001fbf6c;
    }
L_001fc38c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001fc390:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x580u, cpu->r[2]);
        }
    }
L_001fc394:;
    {
        goto L_001fc3b8;
    }
L_001fc398:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x584u);
    }
L_001fc39c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x580u);
    }
L_001fc3a0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001fc3a4:;
    {
        wr32(cpu->r[4] + + 0x584u, cpu->r[2]);
    }
L_001fc3a8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000018u, 1, 1);
    }
L_001fc3ac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[0], 2, (cpu->r[3] & 0xffu), &shc), 0, 0);
    }
L_001fc3b0:;
    {
        wr32(cpu->r[4] + + 0x580u, cpu->r[3]);
    }
L_001fc3b4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001fc178;
        }
    }
L_001fc3b8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x578u);
    }
L_001fc3bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fc3c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fc3d0;
        }
    }
L_001fc3c4:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x570u);
    }
L_001fc3c8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fc3cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fc174;
        }
    }
L_001fc3d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fc3d4:;
    {
        cpu->r[14] = 0x001fc3d8u; fn_001f8af4(cpu);
    }
L_001fc3d8:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001fc3dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fc398;
        }
    }
L_001fc3e0:;
    {
        goto L_001fc174;
    }
L_001fc3e4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_001fc3e8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001fc3ec:;
    {
        wr16(cpu->r[3] + cpu->r[5], cpu->r[2]);
    }
L_001fc3f0:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_001fc3f4:;
    {
        goto L_001fc1d8;
    }
L_001fc3f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fc3fc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001fc400:;
    {
        cpu->r[14] = 0x001fc404u; fn_001fb8c4(cpu);
    }
L_001fc404:;
    {
        goto L_001fc1bc;
    }
L_001fc408:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001fc40c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_001fc410:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = add_flags(cpu, cpu->r[11], shifter(cpu->r[3], 1, 1u, &shc), 0, 0);
        }
    }
L_001fc414:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[11], shifter(cpu->r[3], 1, 1u, &shc), 1, 0);
        }
    }
L_001fc418:;
    {
        wr16(cpu->r[7] + + 0x4u, cpu->r[3]);
    }
L_001fc41c:;
    {
        goto L_001fc28c;
    }
L_001fc420:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_001fc424:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001fc428:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x580u, cpu->r[2]);
        }
    }
L_001fc42c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x578u);
    }
L_001fc430:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fc434:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fc444;
        }
    }
L_001fc438:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x570u);
    }
L_001fc43c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fc440:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fc474;
        }
    }
L_001fc444:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fc448:;
    {
        cpu->r[14] = 0x001fc44cu; fn_001f8af4(cpu);
    }
L_001fc44c:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001fc450:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fc474;
        }
    }
L_001fc454:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x584u);
    }
L_001fc458:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x580u);
    }
L_001fc45c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001fc460:;
    {
        wr32(cpu->r[4] + + 0x584u, cpu->r[2]);
    }
L_001fc464:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000018u, 1, 1);
    }
L_001fc468:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[0], 2, (cpu->r[3] & 0xffu), &shc), 0, 0);
    }
L_001fc46c:;
    {
        wr32(cpu->r[4] + + 0x580u, cpu->r[3]);
    }
L_001fc470:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fc42c;
        }
    }
L_001fc474:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_001fc478:;
    {
        goto L_001fc0b4;
    }
L_001fc47c:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001fc480:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fc484:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_001fc488:;
    {
        cpu->r[14] = 0x001fc48cu; fn_001fb8c4(cpu);
    }
L_001fc48c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_001fc490:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001fc494:;
    {
        goto L_001fc0fc;
    }
L_001fc498:;
    {
        cpu->r[3] = 0x00000015u;
    }
L_001fc49c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001fc4a0:;
    {
        wr32(cpu->r[4] + + 0x74u, cpu->r[3]);
    }
L_001fc4a4:;
    {
        goto L_001fbe64;
    }
L_001fc4a8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x000004d0u, 0, 0);
    }
L_001fc4ac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_001fc4b0:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000008u, 1, 0);
    }
L_001fc4b4:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[12]);
    }
L_001fc4b8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000d8u, 0, 0);
    }
L_001fc4bc:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_001fc4c0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000008u, 1, 0);
    }
L_001fc4c4:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[1]);
    }
L_001fc4c8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x68u);
    }
L_001fc4cc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x58u);
    }
L_001fc4d0:;
    {
        cpu->r[14] = 0x001fc4d4u; imp_memcpy(cpu); /* memcpy */
    }
L_001fc4d4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x74u);
    }
L_001fc4d8:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x78u);
    }
L_001fc4dc:;
    {
        cpu->r[0] = 0x00000003u;
    }
L_001fc4e0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4cu);
    }
L_001fc4e4:;
    {
        cpu->r[2] = rd16(cpu->r[5] + cpu->r[3]);
    }
L_001fc4e8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001fc4ec:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001fc4f0:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2]; cpu->r[14] = v;
    }
L_001fc4f4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[14], 1, 1);
    }
L_001fc4f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fc564;
        }
    }
L_001fc4fc:;
    {
        cpu->r[0] = rd32(cpu->r[12] + + 0x4u);
    }
L_001fc500:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000a20u, 0, 0);
    }
L_001fc504:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000008u, 0, 0);
    }
L_001fc508:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_001fc50c:;
    {
        cpu->r[0] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_001fc510:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001fc514:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], cpu->r[0], 0, 0);
    }
L_001fc518:;
    {
        cpu->r[5] = rd32(cpu->r[5] + - 0x558u);
    }
L_001fc51c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001fc520:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd8(cpu->r[2] + + 0x1u);
        }
    }
L_001fc524:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fc544;
        }
    }
L_001fc528:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0x1u);
    }
L_001fc52c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000a20u, 0, 0);
    }
L_001fc530:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000008u, 0, 0);
    }
L_001fc534:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[7], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001fc538:;
    {
        cpu->r[5] = rd32(cpu->r[5] + - 0x558u);
    }
L_001fc53c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001fc540:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fc55c;
        }
    }
L_001fc544:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000a20u, 0, 0);
    }
L_001fc548:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000008u, 0, 0);
    }
L_001fc54c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001fc550:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], cpu->r[0], 0, 0);
    }
L_001fc554:;
    {
        wr32(cpu->r[2] + - 0x558u, cpu->r[1]);
    }
L_001fc558:;
    {
        wr32(cpu->r[0] + - 0x558u, cpu->r[1]);
    }
L_001fc55c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000003u, 0, 0);
    }
L_001fc560:;
    {
        goto L_001fc4f4;
    }
L_001fc564:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x34u);
    }
L_001fc568:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001fc56c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x34u);
    }
L_001fc570:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x001fc578u + + 0x3dcu);
    }
L_001fc574:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x4cu);
    }
L_001fc578:;
    {
        cpu->r[3] = rd32(0x001fc580u + + 0x3e4u);
    }
L_001fc57c:;
    {
        uint32_t v = shifter(cpu->r[9], 2, 1u, &shc); cpu->r[9] = v;
    }
L_001fc580:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 2u, &shc); cpu->r[10] = v;
    }
L_001fc584:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[9]);
    }
L_001fc588:;
    {
        cpu->r[3] = add_flags(cpu, 0x001fc590u, cpu->r[3], 0, 0);
    }
L_001fc58c:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[10]);
    }
L_001fc590:;
    {
        wr32(cpu->r[13] + + 0x70u, cpu->r[11]);
    }
L_001fc594:;
    {
        wr32(cpu->r[13] + + 0x9cu, cpu->r[3]);
    }
L_001fc598:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[12]);
    }
L_001fc59c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4cu);
    }
L_001fc5a0:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x64u);
    }
L_001fc5a4:;
    {
        cpu->r[3] = rd8(cpu->r[2] + + 0x8u);
    }
L_001fc5a8:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_001fc5ac:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001fd4a4;
        }
    }
L_001fc5b0:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x4u);
    }
L_001fc5b4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001fc5b8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[7] = 0x00000000u;
        }
    }
L_001fc5bc:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[7]);
        }
    }
L_001fc5c0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fc668;
        }
    }
L_001fc5c4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001fc5c8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001fc5cc:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_001fc5d0:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001fc5d4:;
    {
        cpu->r[12] = cpu->r[3];
    }
L_001fc5d8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x64u);
    }
L_001fc5dc:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x4cu);
    }
L_001fc5e0:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_001fc5e4:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x58u);
    }
L_001fc5e8:;
    {
        goto L_001fc600;
    }
L_001fc5ec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001fc5f0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000003u, 0, 0);
    }
L_001fc5f4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[6], 1, 1);
    }
L_001fc5f8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_001fc5fc:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001fc664;
        }
    }
L_001fc600:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0x4u);
    }
L_001fc604:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[3], 0, 0);
    }
L_001fc608:;
    {
        cpu->r[8] = rd8(cpu->r[8] + + 0x2u);
    }
L_001fc60c:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[0], 1, 1);
    }
L_001fc610:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fc5ec;
        }
    }
L_001fc614:;
    {
        cpu->r[8] = rd32(cpu->r[10] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001fc618:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00000a20u, 0, 0);
    }
L_001fc61c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000008u, 0, 0);
    }
L_001fc620:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001fc624:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001fc628:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000003u, 0, 0);
    }
L_001fc62c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[11] = add_flags(cpu, cpu->r[14], cpu->r[7], 0, 0);
        }
    }
L_001fc630:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[9] = add_flags(cpu, cpu->r[14], cpu->r[7], 0, 0);
        }
    }
L_001fc634:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[8] = add_flags(cpu, cpu->r[14], shifter(cpu->r[7], 2, 2u, &shc), 0, 0);
        }
    }
L_001fc638:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[9] = add_flags(cpu, cpu->r[14], shifter(cpu->r[7], 2, 2u, &shc), 0, 0);
        }
    }
L_001fc63c:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[11] + - 0x104u, cpu->r[8]);
        }
    }
L_001fc640:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[11] = 0x00000001u;
        }
    }
L_001fc644:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = rd32(cpu->r[1] + + 0x330u);
        }
    }
L_001fc648:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001fc64c:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[9] + - 0x104u, cpu->r[11]);
        }
    }
L_001fc650:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_001fc654:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[8] + - 0x158u, cpu->r[12]);
        }
    }
L_001fc658:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[9] + - 0x158u, cpu->r[8]);
        }
    }
L_001fc65c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[6], 1, 1);
    }
L_001fc660:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001fc600;
        }
    }
L_001fc664:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[7]);
    }
L_001fc668:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x70u);
    }
L_001fc66c:;
    {
        cpu->r[1] = 0x00000018u;
    }
L_001fc670:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8cu);
    }
L_001fc674:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x18u);
    }
L_001fc678:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x19cu);
    }
L_001fc67c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], 0x0000008cu, 0, 0);
    }
L_001fc680:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[1] = v;
    }
L_001fc684:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_001fc688:;
    {
        cpu->r[12] = rd16(cpu->r[12] + + 0x4u);
    }
L_001fc68c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_001fc690:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[12]);
    }
L_001fc694:;
    {
        cpu->r[12] = 0x00000830u;
    }
L_001fc698:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0xdu);
    }
L_001fc69c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[1]);
    }
L_001fc6a0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x4u);
    }
L_001fc6a4:;
    {
        uint32_t v = cpu->r[12] * cpu->r[3]; cpu->r[3] = v;
    }
L_001fc6a8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
    }
L_001fc6ac:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x8u);
    }
L_001fc6b0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001fc6b4:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[3]);
    }
L_001fc6b8:;
    {
        cpu->r[14] = 0x001fc6bcu; imp___aeabi_uidiv(cpu); /* __aeabi_uidiv */
    }
L_001fc6bc:;
    {
        cpu->r[2] = rd32(0x001fc6c4u + + 0x2a4u);
    }
L_001fc6c0:;
    {
        cpu->r[3] = 0x00000747u;
    }
L_001fc6c4:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x6cu);
    }
L_001fc6c8:;
    {
        cpu->r[2] = add_flags(cpu, 0x001fc6d0u, cpu->r[2], 0, 0);
    }
L_001fc6cc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x9cu);
    }
L_001fc6d0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000088u, 0, 0);
    }
L_001fc6d4:;
    {
        wr32(cpu->r[13] + + 0x98u, cpu->r[7]);
    }
L_001fc6d8:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[0]);
    }
L_001fc6dc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001fc6e0:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001fc6e4:;
    {
        uint32_t v = cpu->r[6] * cpu->r[0]; cpu->r[0] = v;
    }
L_001fc6e8:;
    {
        cpu->r[14] = 0x001fc6ecu; fn_00097dd8(cpu);
    }
L_001fc6ec:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4u);
    }
L_001fc6f0:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x28u);
    }
L_001fc6f4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001fc6f8:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[0]);
    }
L_001fc6fc:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001fc700:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fc728;
        }
    }
L_001fc704:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x20u);
    }
L_001fc708:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001fc70c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[9], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_001fc710:;
    {
        cpu->r[12] = cpu->r[9];
    }
L_001fc714:;
    {
        wr32(cpu->r[12] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[2]);
    }
L_001fc718:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001fc71c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001fc720:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_001fc724:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fc714;
        }
    }
L_001fc728:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001fc72c:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001fc730:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fc77c;
        }
    }
L_001fc734:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000920u, 0, 0);
    }
L_001fc738:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001fc73c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_001fc740:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x000008d0u, 0, 0);
    }
L_001fc744:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x7cu);
    }
L_001fc748:;
    {
        goto L_001fc758;
    }
L_001fc74c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001fc750:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[10], 1, 1);
    }
L_001fc754:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fc77c;
        }
    }
L_001fc758:;
    {
        cpu->r[1] = rd8(cpu->r[7] + cpu->r[6]);
    }
L_001fc75c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001fc760:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fc74c;
        }
    }
L_001fc764:;
    {
        cpu->r[0] = rd32(cpu->r[8] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_001fc768:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_001fc76c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001fc770:;
    {
        cpu->r[14] = 0x001fc774u; imp_memset(cpu); /* memset */
    }
L_001fc774:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[10], 1, 1);
    }
L_001fc778:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fc758;
        }
    }
L_001fc77c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001fc780:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001fc784:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[11], 0x00000001u, 1, 1);
    }
L_001fc788:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001fc78c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000002u, 1, 1);
    }
L_001fc790:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001fc794:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fc798:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fc970;
        }
    }
L_001fc79c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x40u);
    }
L_001fc7a0:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[3]);
    }
L_001fc7a4:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000000u, 1, 1);
    }
L_001fc7a8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[14] = 0x00000000u;
        }
    }
L_001fc7ac:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[14] = 0x00000001u;
        }
    }
L_001fc7b0:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[5]);
    }
L_001fc7b4:;
    {
        wr32(cpu->r[13] + + 0x94u, cpu->r[14]);
    }
L_001fc7b8:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001fc7bc:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[12]);
    }
L_001fc7c0:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[12]);
    }
L_001fc7c4:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x28u);
    }
L_001fc7c8:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x44u);
    }
L_001fc7cc:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[10], 1, 1);
    }
L_001fc7d0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fe5fc;
        }
    }
L_001fc7d4:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x54u);
    }
L_001fc7d8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001fc7dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fc9b8;
        }
    }
L_001fc7e0:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001fc7e4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001fc7e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fc9b8;
        }
    }
L_001fc7ec:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000920u, 0, 0);
    }
L_001fc7f0:;
    {
        cpu->r[8] = 0x00000830u;
    }
L_001fc7f4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_001fc7f8:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x20u);
    }
L_001fc7fc:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x18u);
    }
L_001fc800:;
    {
        cpu->r[9] = cpu->r[6];
    }
L_001fc804:;
    {
        goto L_001fc888;
    }
L_001fc808:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x580u);
    }
L_001fc80c:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 22u, &shc); cpu->r[3] = v;
    }
L_001fc810:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 22u, &shc); cpu->r[3] = v;
    }
L_001fc814:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001fc818:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x24u);
    }
L_001fc81c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fc820:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001fcea0;
        }
    }
L_001fc824:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x8u);
    }
L_001fc828:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x584u);
    }
L_001fc82c:;
    {
        cpu->r[2] = rd8(cpu->r[2] + cpu->r[0]);
    }
L_001fc830:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_001fc834:;
    {
        uint32_t v = shifter(cpu->r[1], 3, (cpu->r[2] & 0xffu), &shc); cpu->r[2] = v;
    }
L_001fc838:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fc83c:;
    {
        wr32(cpu->r[4] + + 0x584u, cpu->r[3]);
    }
L_001fc840:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001fc844:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_001fc848:;
    {
        wr32(cpu->r[4] + + 0x580u, cpu->r[2]);
    }
L_001fc84c:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + + 0x584u, cpu->r[12]);
        }
    }
L_001fc850:;
    {
        cpu->r[3] = rd8(cpu->r[6] + + 0x17u);
    }
L_001fc854:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fc858:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[6] + + 0x828u);
        }
    }
L_001fc85c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[0], 2, 2u, &shc));
        }
    }
L_001fc860:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001fc864:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fc928;
        }
    }
L_001fc868:;
    {
        cpu->r[2] = rd32(cpu->r[10] + + 0x10u);
    }
L_001fc86c:;
    {
        cpu->r[3] = rd32(cpu->r[11] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001fc870:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001fc874:;
    {
        cpu->r[2] = rd32(cpu->r[2] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_001fc878:;
    {
        wr32(cpu->r[3] + cpu->r[14], cpu->r[2]);
    }
L_001fc87c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001fc880:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[9], 1, 1);
    }
L_001fc884:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fc9b8;
        }
    }
L_001fc888:;
    {
        cpu->r[3] = rd8(cpu->r[7] + cpu->r[5]);
    }
L_001fc88c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fc890:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fc87c;
        }
    }
L_001fc894:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x584u);
    }
L_001fc898:;
    {
        cpu->r[6] = rd8(cpu->r[10] + + 0xdu);
    }
L_001fc89c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8cu);
    }
L_001fc8a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000009u, 1, 1);
    }
L_001fc8a4:;
    {
        uint32_t v = cpu->r[8] * cpu->r[6] + cpu->r[2]; cpu->r[6] = v;
    }
L_001fc8a8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001fc808;
        }
    }
L_001fc8ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fc8b0:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x580u, cpu->r[3]);
        }
    }
L_001fc8b4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x578u);
    }
L_001fc8b8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fc8bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fc8cc;
        }
    }
L_001fc8c0:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x570u);
    }
L_001fc8c4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fc8c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fc808;
        }
    }
L_001fc8cc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fc8d0:;
    {
        cpu->r[14] = 0x001fc8d4u; fn_001f8af4(cpu);
    }
L_001fc8d4:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001fc8d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fc808;
        }
    }
L_001fc8dc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x584u);
    }
L_001fc8e0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x580u);
    }
L_001fc8e4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001fc8e8:;
    {
        wr32(cpu->r[4] + + 0x584u, cpu->r[2]);
    }
L_001fc8ec:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000018u, 1, 1);
    }
L_001fc8f0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[0], 2, (cpu->r[3] & 0xffu), &shc), 0, 0);
    }
L_001fc8f4:;
    {
        wr32(cpu->r[4] + + 0x580u, cpu->r[3]);
    }
L_001fc8f8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fc8b4;
        }
    }
L_001fc8fc:;
    {
        goto L_001fc808;
    }
L_001fc900:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001fc904:;
    {
        wr32(cpu->r[4] + + 0x584u, cpu->r[3]);
    }
L_001fc908:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x570u);
    }
L_001fc90c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fc910:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fc920;
        }
    }
L_001fc914:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x578u);
    }
L_001fc918:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fc91c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fc928;
        }
    }
L_001fc920:;
    {
        cpu->r[3] = 0x00000015u;
    }
L_001fc924:;
    {
        wr32(cpu->r[4] + + 0x74u, cpu->r[3]);
    }
L_001fc928:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x70u);
    }
L_001fc92c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x64u);
    }
L_001fc930:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001fc934:;
    {
        wr32(cpu->r[13] + + 0x70u, cpu->r[0]);
    }
L_001fc938:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_001fc93c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000001u, 0, 0);
    }
L_001fc940:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[14]);
    }
L_001fc944:;
    {
        cpu->r[14] = 0x001fc948u; fn_00097dc8(cpu);
    }
L_001fc948:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x98u);
    }
L_001fc94c:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[1]);
    }
L_001fc950:;
    {
        goto L_001fc59c;
    }
L_001fc970:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001fc974:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fc978:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fc928;
        }
    }
L_001fc97c:;
    {
        cpu->r[3] = rd8(cpu->r[13] + + 0x924u);
    }
L_001fc980:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fc984:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fcc84;
        }
    }
L_001fc988:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000920u, 0, 0);
    }
L_001fc98c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001fc990:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_001fc994:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001fc998:;
    {
        goto L_001fc9a8;
    }
L_001fc99c:;
    {
        cpu->r[2] = rd8(cpu->r[1] + cpu->r[3]);
    }
L_001fc9a0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001fc9a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fcc84;
        }
    }
L_001fc9a8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001fc9ac:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001fc9b0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fc99c;
        }
    }
L_001fc9b4:;
    {
        goto L_001fc928;
    }
L_001fc9b8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x94u);
    }
L_001fc9bc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fc9c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fcb4c;
        }
    }
L_001fc9c4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001fc9c8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x000008d0u, 0, 0);
    }
L_001fc9cc:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[1]);
    }
L_001fc9d0:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[2]);
    }
L_001fc9d4:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001fc9d8:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001fc9dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fcb20;
        }
    }
L_001fc9e0:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_001fc9e4:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x54u);
    }
L_001fc9e8:;
    {
        cpu->r[9] = cpu->r[11];
    }
L_001fc9ec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000920u, 0, 0);
    }
L_001fc9f0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001fc9f4:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_001fc9f8:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[5] = v;
    }
L_001fc9fc:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[5]);
    }
L_001fca00:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x24u);
    }
L_001fca04:;
    {
        cpu->r[6] = rd8(cpu->r[7] + cpu->r[9]);
    }
L_001fca08:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001fca0c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fcb0c;
        }
    }
L_001fca10:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x20u);
    }
L_001fca14:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001fca18:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x30u);
    }
L_001fca1c:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[11]);
    }
L_001fca20:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x18u);
    }
L_001fca24:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x48u);
    }
L_001fca28:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[12]);
    }
L_001fca2c:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x14u);
    }
L_001fca30:;
    {
        cpu->r[2] = rd8(cpu->r[2] + cpu->r[14]);
    }
L_001fca34:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 4u, &shc), 0, 0);
    }
L_001fca38:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[3] + cpu->r[0]);
    }
L_001fca3c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fca40:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001fcb0c;
        }
    }
L_001fca44:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_001fca48:;
    {
        cpu->r[1] = 0x00000830u;
    }
L_001fca4c:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001fca50:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[3] = v;
    }
L_001fca54:;
    {
        cpu->r[8] = rd32(cpu->r[2]);
    }
L_001fca58:;
    {
        cpu->r[10] = rd32(cpu->r[10] + + 0x8u);
    }
L_001fca5c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001fca60:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x5cu);
    }
L_001fca64:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x44u);
    }
L_001fca68:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8cu);
    }
L_001fca6c:;
    {
        cpu->r[7] = rd32(cpu->r[12] + cpu->r[11]);
    }
L_001fca70:;
    {
        uint32_t v = cpu->r[10] * cpu->r[14] + cpu->r[8]; cpu->r[8] = v;
    }
L_001fca74:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_001fca78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fcba0;
        }
    }
L_001fca7c:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001fca80:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[13] + + 0x60u, cpu->r[9]);
        }
    }
L_001fca84:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[9] = cpu->r[7];
        }
    }
L_001fca88:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fcb0c;
        }
    }
L_001fca8c:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[10], cpu->r[6], 1, 0);
    }
L_001fca90:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fca94:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001fca98:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001fca9c:;
    {
        cpu->r[14] = 0x001fcaa0u; fn_001fbce8(cpu);
    }
L_001fcaa0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fcaa4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001fc928;
        }
    }
L_001fcaa8:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001fcaac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[9], shifter(cpu->r[8], 2, 2u, &shc), 0, 0);
    }
L_001fcab0:;
    {
        cpu->r[2] = rd8(cpu->r[5] + + 0x16u);
    }
L_001fcab4:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_001fcab8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[7] = cpu->r[3];
        }
    }
L_001fcabc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001fcac0:;
    {
        uint32_t v = cpu->r[3] * cpu->r[0]; cpu->r[1] = v;
    }
L_001fcac4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fcb5c;
        }
    }
L_001fcac8:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001fcacc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fcaf8;
        }
    }
L_001fcad0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x1cu);
    }
L_001fcad4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_001fcad8:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        *(uint32_t*)vfp_s(cpu, 15) = rd32(ea + 0u);
        cpu->r[1] = ea + 4u;
    }
L_001fcadc:;
    {
        vfp_vadd(cpu, 15, 15, 16);
    }
L_001fcae0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12]);
    }
L_001fcae4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001fcae8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 1);
    }
L_001fcaec:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_001fcaf0:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 15));
        cpu->r[12] = ea + 4u;
    }
L_001fcaf4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fcad8;
        }
    }
L_001fcaf8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[3], 0, 0);
    }
L_001fcafc:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[6], 1, 1);
    }
L_001fcb00:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[3], 0, 0);
        }
    }
L_001fcb04:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001fca8c;
        }
    }
L_001fcb08:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x60u);
    }
L_001fcb0c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001fcb10:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_001fcb14:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000004u, 0, 0);
    }
L_001fcb18:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[1], 1, 1);
    }
L_001fcb1c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fca00;
        }
    }
L_001fcb20:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_001fcb24:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x44u);
    }
L_001fcb28:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x28u);
    }
L_001fcb2c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001fcb30:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x40u);
    }
L_001fcb34:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001fcb38:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[2]);
    }
L_001fcb3c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_001fcb40:;
    {
        if (cond_test(cpu, 13)) {
        sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 1);
        }
    }
L_001fcb44:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[3]);
    }
L_001fcb48:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001fc9d4;
        }
    }
L_001fcb4c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001fcb50:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_001fcb54:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[8]);
    }
L_001fcb58:;
    {
        goto L_001fc7c4;
    }
L_001fcb5c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001fcb60:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fcaf8;
        }
    }
L_001fcb64:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x1cu);
    }
L_001fcb68:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001fcb6c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001fcb74u + - 0x208u);
    }
L_001fcb70:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_001fcb74:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        *(uint32_t*)vfp_s(cpu, 14) = rd32(ea + 0u);
        cpu->r[1] = ea + 4u;
    }
L_001fcb78:;
    {
        vfp_vadd(cpu, 15, 15, 14);
    }
L_001fcb7c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12]);
    }
L_001fcb80:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001fcb84:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 1);
    }
L_001fcb88:;
    {
        vfp_vadd(cpu, 14, 14, 15);
    }
L_001fcb8c:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 14));
        cpu->r[12] = ea + 4u;
    }
L_001fcb90:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[5] + + 0xcu);
    }
L_001fcb94:;
    {
        vfp_vadd(cpu, 15, 15, 14);
    }
L_001fcb98:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fcb74;
        }
    }
L_001fcb9c:;
    {
        goto L_001fcaf8;
    }
L_001fcba0:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001fcba4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001fcba8:;
    {
        cpu->r[14] = 0x001fcbacu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001fcbac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fcbb0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fcb0c;
        }
    }
L_001fcbb4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[8], 2, 2u, &shc), 0, 0);
    }
L_001fcbb8:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001fcbbc:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[10], cpu->r[8], 1, 0);
    }
L_001fcbc0:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[9]);
    }
L_001fcbc4:;
    {
        wr32(cpu->r[13] + + 0x88u, cpu->r[11]);
    }
L_001fcbc8:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[10] = v;
    }
L_001fcbcc:;
    {
        cpu->r[9] = cpu->r[8];
    }
L_001fcbd0:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_001fcbd4:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[9], cpu->r[6], 1, 0);
    }
L_001fcbd8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fcbdc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001fcbe0:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001fcbe4:;
    {
        cpu->r[14] = 0x001fcbe8u; fn_001fbce8(cpu);
    }
L_001fcbe8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fcbec:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001fc928;
        }
    }
L_001fcbf0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001fcbf4:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_001fcbf8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[8] = cpu->r[3];
        }
    }
L_001fcbfc:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001fcc00:;
    {
        uint32_t v = cpu->r[3] * cpu->r[0]; cpu->r[1] = v;
    }
L_001fcc04:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fcc54;
        }
    }
L_001fcc08:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x1cu);
    }
L_001fcc0c:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001fcc10:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001fcc14:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001fcc1cu + - 0x2b0u);
    }
L_001fcc18:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_001fcc1c:;
    {
        goto L_001fcc24;
    }
L_001fcc20:;
    {
        *vfp_s(cpu,14) = *vfp_s(cpu,15);
    }
L_001fcc24:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        *(uint32_t*)vfp_s(cpu, 15) = rd32(ea + 0u);
        cpu->r[1] = ea + 4u;
    }
L_001fcc28:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_001fcc2c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[2]);
    }
L_001fcc30:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001fcc34:;
    {
        vfp_vadd(cpu, 13, 13, 15);
    }
L_001fcc38:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,13);
    }
L_001fcc3c:;
    {
        uint32_t wb_tmp = cpu->r[2] + cpu->r[10];
        wr32(cpu->r[2], cpu->r[0]);
        cpu->r[2] = wb_tmp;
    }
L_001fcc40:;
    {
        cpu->r[0] = rd8(cpu->r[5] + + 0x16u);
    }
L_001fcc44:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fcc48:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu,15) = *vfp_s(cpu,14);
        }
    }
L_001fcc4c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_001fcc50:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fcc20;
        }
    }
L_001fcc54:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001fcc58:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_001fcc5c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[11], 1, 1);
    }
L_001fcc60:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fcbd4;
        }
    }
L_001fcc64:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x60u);
    }
L_001fcc68:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001fcc6c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_001fcc70:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x88u);
    }
L_001fcc74:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[1], 1, 1);
    }
L_001fcc78:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000004u, 0, 0);
    }
L_001fcc7c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fca00;
        }
    }
L_001fcc80:;
    {
        goto L_001fcb20;
    }
L_001fcc84:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x40u);
    }
L_001fcc88:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001fcc8c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_001fcc90:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_001fcc94:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001fcc98:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_001fcc9c:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[2]);
    }
L_001fcca0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001fcca4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001fcca8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fceb0;
        }
    }
L_001fccac:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001fccb0:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000001u, 1, 1);
    }
L_001fccb4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fd2d4;
        }
    }
L_001fccb8:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_001fccbc:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x20u);
    }
L_001fccc0:;
    {
        cpu->r[11] = 0x00000830u;
    }
L_001fccc4:;
    {
        cpu->r[7] = cpu->r[8];
    }
L_001fccc8:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_001fcccc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000910u, 0, 0);
    }
L_001fccd0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x000008d0u, 0, 0);
    }
L_001fccd4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_001fccd8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000910u, 0, 0);
    }
L_001fccdc:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[0]);
    }
L_001fcce0:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[1]);
    }
L_001fcce4:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[2]);
    }
L_001fcce8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_001fccec:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 1);
    }
L_001fccf0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fe5ac;
        }
    }
L_001fccf4:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001fccf8:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x8u);
    }
L_001fccfc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001fcd00:;
    {
        uint32_t v = cpu->r[4] * cpu->r[7] + cpu->r[3]; cpu->r[4] = v;
    }
L_001fcd04:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fcd08:;
    {
        cpu->r[14] = 0x001fcd0cu; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_001fcd0c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fcd10:;
    {
        wr32(cpu->r[13] + + 0x914u, cpu->r[1]);
    }
L_001fcd14:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001fcd18:;
    {
        cpu->r[14] = 0x001fcd1cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001fcd1c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x18u);
    }
L_001fcd20:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001fcd24:;
    {
        wr32(cpu->r[13] + + 0x910u, cpu->r[0]);
    }
L_001fcd28:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fcdb8;
        }
    }
L_001fcd2c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x584u);
    }
L_001fcd30:;
    {
        cpu->r[4] = rd8(cpu->r[5] + + 0xdu);
    }
L_001fcd34:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8cu);
    }
L_001fcd38:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000009u, 1, 1);
    }
L_001fcd3c:;
    {
        uint32_t v = cpu->r[11] * cpu->r[4] + cpu->r[3]; cpu->r[4] = v;
    }
L_001fcd40:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001fcd4c;
        }
    }
L_001fcd44:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fcd48:;
    {
        cpu->r[14] = 0x001fcd4cu; fn_001f8c18(cpu);
    }
L_001fcd4c:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x580u);
    }
L_001fcd50:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 22u, &shc); cpu->r[3] = v;
    }
L_001fcd54:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 3, 21u, &shc), 0, 0);
    }
L_001fcd58:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x24u);
    }
L_001fcd5c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fcd60:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001fe5ec;
        }
    }
L_001fcd64:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8u);
    }
L_001fcd68:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x584u);
    }
L_001fcd6c:;
    {
        cpu->r[2] = rd8(cpu->r[2] + cpu->r[0]);
    }
L_001fcd70:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_001fcd74:;
    {
        uint32_t v = shifter(cpu->r[1], 3, (cpu->r[2] & 0xffu), &shc); cpu->r[2] = v;
    }
L_001fcd78:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fcd7c:;
    {
        wr32(cpu->r[6] + + 0x584u, cpu->r[3]);
    }
L_001fcd80:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001fcd84:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_001fcd88:;
    {
        wr32(cpu->r[6] + + 0x580u, cpu->r[2]);
    }
L_001fcd8c:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[6] + + 0x584u, cpu->r[12]);
        }
    }
L_001fcd90:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x17u);
    }
L_001fcd94:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fcd98:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x828u);
        }
    }
L_001fcd9c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[0], 2, 2u, &shc));
        }
    }
L_001fcda0:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001fcda4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fd484;
        }
    }
L_001fcda8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x10u);
    }
L_001fcdac:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_001fcdb0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_001fcdb4:;
    {
        wr32(cpu->r[3] + cpu->r[8], cpu->r[2]);
    }
L_001fcdb8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x48u);
    }
L_001fcdbc:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000000u, 1, 1);
    }
L_001fcdc0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fce98;
        }
    }
L_001fcdc4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_001fcdc8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001fcdcc:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[0] = v;
    }
L_001fcdd0:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_001fcdd4:;
    {
        goto L_001fce28;
    }
L_001fcdd8:;
    {
        cpu->r[14] = rd32(cpu->r[6] + + 0x8cu);
    }
L_001fcddc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fcde0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001fcde4:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x30u);
    }
L_001fcde8:;
    {
        uint32_t v = cpu->r[11] * cpu->r[1] + cpu->r[14]; cpu->r[1] = v;
    }
L_001fcdec:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001fcdf0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x34u);
    }
L_001fcdf4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001fcdf8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001fcdfc:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[9]);
        wr32(ea + 4u, cpu->r[12]);
        wr32(ea + 8u, cpu->r[14]);
    }
L_001fce00:;
    {
        cpu->r[14] = 0x001fce04u; fn_001fba84(cpu);
    }
L_001fce04:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fce08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fd484;
        }
    }
L_001fce0c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_001fce10:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001fce14:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x40u);
    }
L_001fce18:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001fce1c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 1);
    }
L_001fce20:;
    {
        if (cond_test(cpu, 13)) {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
        }
    }
L_001fce24:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fce98;
        }
    }
L_001fce28:;
    {
        cpu->r[2] = rd32(cpu->r[10]);
    }
L_001fce2c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x14u);
    }
L_001fce30:;
    {
        cpu->r[9] = rd32(cpu->r[5]);
    }
L_001fce34:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[8]);
    }
L_001fce38:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x8u);
    }
L_001fce3c:;
    {
        cpu->r[2] = rd8(cpu->r[2] + cpu->r[4]);
    }
L_001fce40:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 4u, &shc), 0, 0);
    }
L_001fce44:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_001fce48:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[3] + cpu->r[2]);
    }
L_001fce4c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001fce50:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001fcdd8;
        }
    }
L_001fce54:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[12], cpu->r[9], 0, 0);
    }
L_001fce58:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001fce5c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001fce60:;
    {
        uint32_t v = cpu->r[12] * cpu->r[7] + cpu->r[9]; cpu->r[9] = v;
    }
L_001fce64:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001fce68:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001fce6c:;
    {
        cpu->r[14] = 0x001fce70u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_001fce70:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001fce74:;
    {
        wr32(cpu->r[13] + + 0x914u, cpu->r[1]);
    }
L_001fce78:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001fce7c:;
    {
        cpu->r[14] = 0x001fce80u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001fce80:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x40u);
    }
L_001fce84:;
    {
        wr32(cpu->r[13] + + 0x910u, cpu->r[0]);
    }
L_001fce88:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_001fce8c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 1);
    }
L_001fce90:;
    {
        if (cond_test(cpu, 13)) {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
        }
    }
L_001fce94:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001fce28;
        }
    }
L_001fce98:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_001fce9c:;
    {
        goto L_001fcce8;
    }
L_001fcea0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fcea4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001fcea8:;
    {
        cpu->r[14] = 0x001fceacu; fn_001fb8c4(cpu);
    }
L_001fceac:;
    {
        goto L_001fc850;
    }
L_001fceb0:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001fceb4:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[5]);
    }
L_001fceb8:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[6]);
    }
L_001fcebc:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[6]);
    }
L_001fcec0:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x28u);
    }
L_001fcec4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_001fcec8:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[12], 1, 1);
    }
L_001fcecc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fe5e4;
        }
    }
L_001fced0:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x18u);
    }
L_001fced4:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001fced8:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001fcedc:;
    {
        cpu->r[6] = rd32(cpu->r[8]);
    }
L_001fcee0:;
    {
        cpu->r[7] = rd32(cpu->r[8] + + 0x8u);
    }
L_001fcee4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fcf7c;
        }
    }
L_001fcee8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x584u);
    }
L_001fceec:;
    {
        cpu->r[9] = 0x00000830u;
    }
L_001fcef0:;
    {
        cpu->r[5] = rd8(cpu->r[8] + + 0xdu);
    }
L_001fcef4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8cu);
    }
L_001fcef8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000009u, 1, 1);
    }
L_001fcefc:;
    {
        uint32_t v = cpu->r[9] * cpu->r[5] + cpu->r[3]; cpu->r[5] = v;
    }
L_001fcf00:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fe5d8;
        }
    }
L_001fcf04:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x580u);
    }
L_001fcf08:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 22u, &shc); cpu->r[3] = v;
    }
L_001fcf0c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[3], 3, 21u, &shc), 0, 0);
    }
L_001fcf10:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x24u);
    }
L_001fcf14:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fcf18:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001fe5c8;
        }
    }
L_001fcf1c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x8u);
    }
L_001fcf20:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x584u);
    }
L_001fcf24:;
    {
        cpu->r[2] = rd8(cpu->r[2] + cpu->r[0]);
    }
L_001fcf28:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_001fcf2c:;
    {
        uint32_t v = shifter(cpu->r[1], 3, (cpu->r[2] & 0xffu), &shc); cpu->r[2] = v;
    }
L_001fcf30:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fcf34:;
    {
        wr32(cpu->r[4] + + 0x584u, cpu->r[3]);
    }
L_001fcf38:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001fcf3c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[10] = 0x00000000u;
        }
    }
L_001fcf40:;
    {
        wr32(cpu->r[4] + + 0x580u, cpu->r[2]);
    }
L_001fcf44:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + + 0x584u, cpu->r[10]);
        }
    }
L_001fcf48:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x17u);
    }
L_001fcf4c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fcf50:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[5] + + 0x828u);
        }
    }
L_001fcf54:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[0], 2, 2u, &shc));
        }
    }
L_001fcf58:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001fcf5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fc928;
        }
    }
L_001fcf60:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001fcf64:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_001fcf68:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x44u);
    }
L_001fcf6c:;
    {
        cpu->r[2] = rd32(cpu->r[11] + + 0x10u);
    }
L_001fcf70:;
    {
        cpu->r[3] = rd32(cpu->r[12]);
    }
L_001fcf74:;
    {
        cpu->r[2] = rd32(cpu->r[2] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_001fcf78:;
    {
        wr32(cpu->r[3] + cpu->r[14], cpu->r[2]);
    }
L_001fcf7c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x48u);
    }
L_001fcf80:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fcf84:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fd120;
        }
    }
L_001fcf88:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_001fcf8c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001fcf90:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_001fcf94:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[2]);
    }
L_001fcf98:;
    {
        uint32_t v = cpu->r[7] * cpu->r[1] + cpu->r[6]; cpu->r[6] = v;
    }
L_001fcf9c:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[3] = v;
    }
L_001fcfa0:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[3]);
    }
L_001fcfa4:;
    {
        uint32_t v = cpu->r[6] & 0x00000001u; cpu->r[5] = v;
    }
L_001fcfa8:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 1u, &shc); cpu->r[6] = v;
    }
L_001fcfac:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x20u);
    }
L_001fcfb0:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x44u);
    }
L_001fcfb4:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001fcfb8:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_001fcfbc:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001fcfc0:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x54u);
    }
L_001fcfc4:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[9]);
    }
L_001fcfc8:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x14u);
    }
L_001fcfcc:;
    {
        cpu->r[1] = rd32(cpu->r[8]);
    }
L_001fcfd0:;
    {
        cpu->r[2] = rd8(cpu->r[2] + cpu->r[10]);
    }
L_001fcfd4:;
    {
        cpu->r[9] = rd32(cpu->r[8] + + 0x8u);
    }
L_001fcfd8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 4u, &shc), 0, 0);
    }
L_001fcfdc:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[3] + cpu->r[11]);
    }
L_001fcfe0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fcfe4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001fd2bc;
        }
    }
L_001fcfe8:;
    {
        cpu->r[12] = 0x00000830u;
    }
L_001fcfec:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8cu);
    }
L_001fcff0:;
    {
        uint32_t v = cpu->r[12] * cpu->r[3]; cpu->r[3] = v;
    }
L_001fcff4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_001fcff8:;
    {
        cpu->r[2] = rd8(cpu->r[8] + + 0x15u);
    }
L_001fcffc:;
    {
        cpu->r[7] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_001fd000:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001fd004:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fc920;
        }
    }
L_001fd008:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001fd00c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x000008d0u, 0, 0);
        }
    }
L_001fd010:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fd0f4;
        }
    }
L_001fd014:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x584u);
    }
L_001fd018:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000009u, 1, 1);
    }
L_001fd01c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fd130;
        }
    }
L_001fd020:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x580u);
    }
L_001fd024:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 22u, &shc); cpu->r[2] = v;
    }
L_001fd028:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 22u, &shc); cpu->r[2] = v;
    }
L_001fd02c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001fd030:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[2] + + 0x24u);
    }
L_001fd034:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fd038:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001fd2a4;
        }
    }
L_001fd03c:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x8u);
    }
L_001fd040:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x584u);
    }
L_001fd044:;
    {
        cpu->r[1] = rd8(cpu->r[1] + cpu->r[0]);
    }
L_001fd048:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
    }
L_001fd04c:;
    {
        uint32_t v = shifter(cpu->r[3], 3, (cpu->r[1] & 0xffu), &shc); cpu->r[3] = v;
    }
L_001fd050:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001fd054:;
    {
        wr32(cpu->r[4] + + 0x580u, cpu->r[3]);
    }
L_001fd058:;
    {
        wr32(cpu->r[4] + + 0x584u, cpu->r[2]);
    }
L_001fd05c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001fc900;
        }
    }
L_001fd060:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], cpu->r[7], 0, 0);
    }
L_001fd064:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x50u);
    }
L_001fd068:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
    }
L_001fd06c:;
    {
        cpu->r[12] = rd32(cpu->r[8]);
    }
L_001fd070:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[14], 1, 1);
    }
L_001fd074:;
    {
        cpu->r[3] = rd8(cpu->r[8] + + 0x16u);
    }
L_001fd078:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
        }
    }
L_001fd07c:;
    {
        uint32_t v = cpu->r[12] * cpu->r[0]; cpu->r[12] = v;
    }
L_001fd080:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[7] = sub_flags(cpu, cpu->r[1], cpu->r[6], 1, 0);
        }
    }
L_001fd084:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[7] = add_flags(cpu, cpu->r[5], shifter(cpu->r[7], 2, 1u, &shc), 0, 0);
        }
    }
L_001fd088:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fd08c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fd188;
        }
    }
L_001fd090:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001fd094:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fd0e8;
        }
    }
L_001fd098:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x1cu);
    }
L_001fd09c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001fd0a0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001fd0a8u + + 0x3e4u);
    }
L_001fd0a4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_001fd0a8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12]);
    }
L_001fd0ac:;
    {
        vfp_vadd(cpu, 15, 15, 14);
    }
L_001fd0b0:;
    {
        cpu->r[2] = rd32(cpu->r[10] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001fd0b4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 1);
    }
L_001fd0b8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001fd0bc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_001fd0c0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[2], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_001fd0c4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[5]);
    }
L_001fd0c8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = 0x00000001u;
        }
    }
L_001fd0cc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = 0x00000000u;
        }
    }
L_001fd0d0:;
    {
        vfp_vadd(cpu, 14, 14, 15);
    }
L_001fd0d4:;
    {
        cpu->r[11] = *(uint32_t*)vfp_s(cpu,14);
    }
L_001fd0d8:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[6], 2, 2u, &shc), cpu->r[11]);
    }
L_001fd0dc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
        }
    }
L_001fd0e0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_001fd0e4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fd0a8;
        }
    }
L_001fd0e8:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[7], 1, 0);
    }
L_001fd0ec:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001fd0f0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001fd014;
        }
    }
L_001fd0f4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001fd0f8:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x30u);
    }
L_001fd0fc:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x28u);
    }
L_001fd100:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001fd104:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x40u);
    }
L_001fd108:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001fd10c:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[3]);
    }
L_001fd110:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[7], 1, 1);
    }
L_001fd114:;
    {
        if (cond_test(cpu, 13)) {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
        }
    }
L_001fd118:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[7]);
    }
L_001fd11c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001fcfac;
        }
    }
L_001fd120:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x44u);
    }
L_001fd124:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000004u, 0, 0);
    }
L_001fd128:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[10]);
    }
L_001fd12c:;
    {
        goto L_001fcec0;
    }
L_001fd130:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fd134:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x580u, cpu->r[3]);
        }
    }
L_001fd138:;
    {
        goto L_001fd15c;
    }
L_001fd13c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x584u);
    }
L_001fd140:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x580u);
    }
L_001fd144:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001fd148:;
    {
        wr32(cpu->r[4] + + 0x584u, cpu->r[2]);
    }
L_001fd14c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000018u, 1, 1);
    }
L_001fd150:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[0], 2, (cpu->r[3] & 0xffu), &shc), 0, 0);
    }
L_001fd154:;
    {
        wr32(cpu->r[4] + + 0x580u, cpu->r[3]);
    }
L_001fd158:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001fd024;
        }
    }
L_001fd15c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x578u);
    }
L_001fd160:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fd164:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fd174;
        }
    }
L_001fd168:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x570u);
    }
L_001fd16c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fd170:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fd020;
        }
    }
L_001fd174:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fd178:;
    {
        cpu->r[14] = 0x001fd17cu; fn_001f8af4(cpu);
    }
L_001fd17c:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001fd180:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fd13c;
        }
    }
L_001fd184:;
    {
        goto L_001fd020;
    }
L_001fd188:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 1);
    }
L_001fd18c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fd270;
        }
    }
L_001fd190:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8d4u);
    }
L_001fd194:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_001fd198:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001fd19c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 1);
    }
L_001fd1a0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8d0u);
    }
L_001fd1a4:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_001fd1a8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fd220;
        }
    }
L_001fd1ac:;
    {
        cpu->r[0] = rd32(cpu->r[8] + + 0x1cu);
    }
L_001fd1b0:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[5], cpu->r[12], 0, 0);
    }
L_001fd1b4:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x24u);
    }
L_001fd1b8:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 2u, &shc); cpu->r[2] = v;
    }
L_001fd1bc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_001fd1c0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001fd1c4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[14], 2, 2u, &shc), 0, 0);
    }
L_001fd1c8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[11], cpu->r[2], 0, 0);
    }
L_001fd1cc:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001fd1d0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[14]);
    }
L_001fd1d4:;
    {
        vfp_vadd(cpu, 15, 15, 16);
    }
L_001fd1d8:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_001fd1dc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[11]);
    }
L_001fd1e0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000002u, 0, 0);
    }
L_001fd1e4:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001fd1e8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001fd1ec:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[11], 1, 1);
    }
L_001fd1f0:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_001fd1f4:;
    {
        cpu->r[11] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001fd1f8:;
    {
        wr32(cpu->r[2] + cpu->r[3], cpu->r[11]);
    }
L_001fd1fc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[14] + + 0x4u);
    }
L_001fd200:;
    {
        vfp_vadd(cpu, 15, 15, 16);
    }
L_001fd204:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_001fd208:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[14]);
    }
L_001fd20c:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_001fd210:;
    {
        cpu->r[11] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001fd214:;
    {
        wr32(cpu->r[1] + cpu->r[3], cpu->r[11]);
    }
L_001fd218:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001fd21c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001fd1cc;
        }
    }
L_001fd220:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[5], 1, 1);
    }
L_001fd224:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[5] = 0x00000000u;
        }
    }
L_001fd228:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fd0e8;
        }
    }
L_001fd22c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[5], cpu->r[12], 0, 0);
    }
L_001fd230:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x1cu);
    }
L_001fd234:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_001fd238:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[7], 1, 0);
    }
L_001fd23c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_001fd240:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_001fd244:;
    {
        vfp_vadd(cpu, 15, 15, 16);
    }
L_001fd248:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_001fd24c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[14]);
    }
L_001fd250:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_001fd254:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001fd258:;
    {
        cpu->r[5] = 0x00000001u;
    }
L_001fd25c:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_001fd260:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001fd264:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[6], 2, 2u, &shc), cpu->r[0]);
    }
L_001fd268:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001fd014;
        }
    }
L_001fd26c:;
    {
        goto L_001fd0f4;
    }
L_001fd270:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x1cu);
    }
L_001fd274:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001fd278:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8d4u);
    }
L_001fd27c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_001fd280:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_001fd284:;
    {
        vfp_vadd(cpu, 15, 15, 16);
    }
L_001fd288:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[1], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_001fd28c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[14]);
    }
L_001fd290:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_001fd294:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001fd298:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[6], 2, 2u, &shc), cpu->r[0]);
    }
L_001fd29c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001fd2a0:;
    {
        goto L_001fd19c;
    }
L_001fd2a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fd2a8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001fd2ac:;
    {
        cpu->r[14] = 0x001fd2b0u; fn_001fb8c4(cpu);
    }
L_001fd2b0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fd2b4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001fd060;
        }
    }
L_001fd2b8:;
    {
        goto L_001fc908;
    }
L_001fd2bc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_001fd2c0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[9], cpu->r[1], 0, 0);
    }
L_001fd2c4:;
    {
        uint32_t v = cpu->r[2] * cpu->r[9] + cpu->r[1]; cpu->r[6] = v;
    }
L_001fd2c8:;
    {
        uint32_t v = cpu->r[6] & 0x00000001u; cpu->r[5] = v;
    }
L_001fd2cc:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 1u, &shc); cpu->r[6] = v;
    }
L_001fd2d0:;
    {
        goto L_001fd0f4;
    }
L_001fd2d4:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_001fd2d8:;
    {
        cpu->r[9] = 0x00000830u;
    }
L_001fd2dc:;
    {
        cpu->r[6] = cpu->r[8];
    }
L_001fd2e0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x000008d0u, 0, 0);
    }
L_001fd2e4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000910u, 0, 0);
    }
L_001fd2e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000910u, 0, 0);
    }
L_001fd2ec:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_001fd2f0:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_001fd2f4:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[7]);
    }
L_001fd2f8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_001fd2fc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_001fd300:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fe5b0;
        }
    }
L_001fd304:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x8u);
    }
L_001fd308:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001fd30c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001fd310:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x18u);
    }
L_001fd314:;
    {
        wr32(cpu->r[13] + + 0x910u, cpu->r[12]);
    }
L_001fd318:;
    {
        uint32_t v = cpu->r[2] * cpu->r[6] + cpu->r[3]; cpu->r[3] = v;
    }
L_001fd31c:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001fd320:;
    {
        wr32(cpu->r[13] + + 0x914u, cpu->r[3]);
    }
L_001fd324:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fd3b0;
        }
    }
L_001fd328:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x584u);
    }
L_001fd32c:;
    {
        cpu->r[7] = rd8(cpu->r[5] + + 0xdu);
    }
L_001fd330:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8cu);
    }
L_001fd334:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000009u, 1, 1);
    }
L_001fd338:;
    {
        uint32_t v = cpu->r[9] * cpu->r[7] + cpu->r[3]; cpu->r[7] = v;
    }
L_001fd33c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fe510;
        }
    }
L_001fd340:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x580u);
    }
L_001fd344:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 22u, &shc); cpu->r[3] = v;
    }
L_001fd348:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], shifter(cpu->r[3], 3, 21u, &shc), 0, 0);
    }
L_001fd34c:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[3] + + 0x24u);
    }
L_001fd350:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fd354:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001fe500;
        }
    }
L_001fd358:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x8u);
    }
L_001fd35c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x584u);
    }
L_001fd360:;
    {
        cpu->r[2] = rd8(cpu->r[2] + cpu->r[0]);
    }
L_001fd364:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_001fd368:;
    {
        uint32_t v = shifter(cpu->r[1], 3, (cpu->r[2] & 0xffu), &shc); cpu->r[2] = v;
    }
L_001fd36c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fd370:;
    {
        wr32(cpu->r[4] + + 0x584u, cpu->r[3]);
    }
L_001fd374:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001fd378:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[14] = 0x00000000u;
        }
    }
L_001fd37c:;
    {
        wr32(cpu->r[4] + + 0x580u, cpu->r[2]);
    }
L_001fd380:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + + 0x584u, cpu->r[14]);
        }
    }
L_001fd384:;
    {
        cpu->r[3] = rd8(cpu->r[7] + + 0x17u);
    }
L_001fd388:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fd38c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[7] + + 0x828u);
        }
    }
L_001fd390:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[0], 2, 2u, &shc));
        }
    }
L_001fd394:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001fd398:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fc928;
        }
    }
L_001fd39c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x10u);
    }
L_001fd3a0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_001fd3a4:;
    {
        cpu->r[2] = rd32(cpu->r[2] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_001fd3a8:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_001fd3ac:;
    {
        wr32(cpu->r[3] + cpu->r[8], cpu->r[2]);
    }
L_001fd3b0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x48u);
    }
L_001fd3b4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001fd3b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fd47c;
        }
    }
L_001fd3bc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_001fd3c0:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001fd3c4:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[10] = v;
    }
L_001fd3c8:;
    {
        goto L_001fd420;
    }
L_001fd3cc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8cu);
    }
L_001fd3d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fd3d4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_001fd3d8:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_001fd3dc:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_001fd3e0:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001fd3e4:;
    {
        uint32_t v = cpu->r[9] * cpu->r[12] + cpu->r[1]; cpu->r[1] = v;
    }
L_001fd3e8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001fd3ec:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_001fd3f0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x34u);
    }
L_001fd3f4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_001fd3f8:;
    {
        cpu->r[14] = 0x001fd3fcu; fn_001fba84(cpu);
    }
L_001fd3fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fd400:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fc928;
        }
    }
L_001fd404:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_001fd408:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001fd40c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x40u);
    }
L_001fd410:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001fd414:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[6], 1, 1);
    }
L_001fd418:;
    {
        if (cond_test(cpu, 13)) {
        sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 1);
        }
    }
L_001fd41c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fd47c;
        }
    }
L_001fd420:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_001fd424:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x14u);
    }
L_001fd428:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_001fd42c:;
    {
        cpu->r[1] = rd32(cpu->r[12]);
    }
L_001fd430:;
    {
        cpu->r[14] = rd32(cpu->r[5] + + 0x8u);
    }
L_001fd434:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[8]);
    }
L_001fd438:;
    {
        cpu->r[1] = rd8(cpu->r[1] + cpu->r[7]);
    }
L_001fd43c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 4u, &shc), 0, 0);
    }
L_001fd440:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[3] + cpu->r[10]);
    }
L_001fd444:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001fd448:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001fd3cc;
        }
    }
L_001fd44c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[14], cpu->r[2], 0, 0);
    }
L_001fd450:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_001fd454:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001fd458:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001fd45c:;
    {
        uint32_t v = cpu->r[14] * cpu->r[6] + cpu->r[2]; cpu->r[2] = v;
    }
L_001fd460:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001fd464:;
    {
        wr32(cpu->r[13] + + 0x910u, cpu->r[0]);
    }
L_001fd468:;
    {
        wr32(cpu->r[13] + + 0x914u, cpu->r[2]);
    }
L_001fd46c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x40u);
    }
L_001fd470:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[6], 1, 1);
    }
L_001fd474:;
    {
        if (cond_test(cpu, 13)) {
        sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 1);
        }
    }
L_001fd478:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001fd420;
        }
    }
L_001fd47c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_001fd480:;
    {
        goto L_001fd2f8;
    }
L_001fd484:;
    {
        cpu->r[4] = cpu->r[6];
    }
L_001fd488:;
    {
        goto L_001fc928;
    }
L_001fd4a4:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x78u);
    }
L_001fd4a8:;
    {
        cpu->r[12] = 0x00000003u;
    }
L_001fd4ac:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x74u);
    }
L_001fd4b0:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x4cu);
    }
L_001fd4b4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x34u);
    }
L_001fd4b8:;
    {
        cpu->r[3] = rd16(cpu->r[9] + cpu->r[8]);
    }
L_001fd4bc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_001fd4c0:;
    {
        uint32_t v = cpu->r[12] * cpu->r[3]; cpu->r[12] = v;
    }
L_001fd4c4:;
    {
        add_flags(cpu, cpu->r[12], 0x00000003u, 0, 1);
    }
L_001fd4c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fd59c;
        }
    }
L_001fd4cc:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x4u);
    }
L_001fd4d0:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000000u, 1, 1);
    }
L_001fd4d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[12], 0, 0);
    }
L_001fd4d8:;
    {
        cpu->r[2] = rd8(cpu->r[2] + cpu->r[12]);
    }
L_001fd4dc:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x1u);
    }
L_001fd4e0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x000000ccu, 0, 0);
    }
L_001fd4e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000000ccu, 0, 0);
    }
L_001fd4e8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001fd4ec:;
    {
        cpu->r[5] = rd32(cpu->r[4] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_001fd4f0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fd590;
        }
    }
L_001fd4f4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001fd4f8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001fd4fc:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001fd500:;
    {
        goto L_001fd540;
    }
L_001fd504:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_001fd508:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[11]);
    }
L_001fd50c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), 0.0f);
    }
L_001fd510:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001fd514:;
    {
        vfp_sync_flags(cpu);
    }
L_001fd518:;
    {
        if (cond_test(cpu, 14)) {
        vfp_vadd(cpu, 13, 15, 14);
        }
    }
L_001fd51c:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vsub(cpu, 14, 15, 14);
        }
    }
L_001fd520:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,13) = *vfp_s(cpu,15);
        }
    }
L_001fd524:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu,14) = *vfp_s(cpu,15);
        }
    }
L_001fd528:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[14], 1, 1);
    }
L_001fd52c:;
    {
        cpu->r[8] = *(uint32_t*)vfp_s(cpu,13);
    }
L_001fd530:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[8]);
    }
L_001fd534:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001fd538:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 14));
        cpu->r[1] = ea + 4u;
    }
L_001fd53c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fd590;
        }
    }
L_001fd540:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_001fd544:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[10]);
    }
L_001fd548:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_001fd54c:;
    {
        vfp_sync_flags(cpu);
    }
L_001fd550:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001fd504;
        }
    }
L_001fd554:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_001fd558:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[7]);
    }
L_001fd55c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), 0.0f);
    }
L_001fd560:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001fd564:;
    {
        vfp_sync_flags(cpu);
    }
L_001fd568:;
    {
        if (cond_test(cpu, 14)) {
        vfp_vsub(cpu, 13, 15, 14);
        }
    }
L_001fd56c:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vadd(cpu, 14, 15, 14);
        }
    }
L_001fd570:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,13) = *vfp_s(cpu,15);
        }
    }
L_001fd574:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu,14) = *vfp_s(cpu,15);
        }
    }
L_001fd578:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[14], 1, 1);
    }
L_001fd57c:;
    {
        cpu->r[8] = *(uint32_t*)vfp_s(cpu,13);
    }
L_001fd580:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[8]);
    }
L_001fd584:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001fd588:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 14));
        cpu->r[1] = ea + 4u;
    }
L_001fd58c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fd540;
        }
    }
L_001fd590:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000003u, 1, 0);
    }
L_001fd594:;
    {
        goto L_001fd4c4;
    }
L_001fd598:;
    {
        cpu->r[14] = 0x001fd59cu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001fd59c:;
    {
        cpu->r[3] = rd32(0x001fd5a4u + - 0x114u);
    }
L_001fd5a0:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_001fd5a4:;
    {
        cpu->r[5] = rd32(0x001fd5acu + - 0x118u);
    }
L_001fd5a8:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x4u);
    }
L_001fd5ac:;
    {
        cpu->r[3] = add_flags(cpu, 0x001fd5b4u, cpu->r[3], 0, 0);
    }
L_001fd5b0:;
    {
        cpu->r[5] = add_flags(cpu, 0x001fd5b8u, cpu->r[5], 0, 0);
    }
L_001fd5b4:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[3]);
    }
L_001fd5b8:;
    {
        cpu->r[3] = rd32(0x001fd5c0u + - 0x128u);
    }
L_001fd5bc:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[9]);
    }
L_001fd5c0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001fd5c8u, cpu->r[3], 0, 0);
    }
L_001fd5c4:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[4]);
    }
L_001fd5c8:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_001fd5cc:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[4]);
    }
L_001fd5d0:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[9]);
    }
L_001fd5d4:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[10]);
    }
L_001fd5d8:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[4]);
    }
L_001fd5dc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x40u);
    }
L_001fd5e0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x48u);
    }
L_001fd5e4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001fd5e8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001fd82c;
        }
    }
L_001fd5ec:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x40u);
    }
L_001fd5f0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x68u);
    }
L_001fd5f4:;
    {
        cpu->r[7] = rd32(cpu->r[12] + shifter(cpu->r[11], 2, 2u, &shc));
    }
L_001fd5f8:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001fd5fc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fd7a4;
        }
    }
L_001fd600:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4cu);
    }
L_001fd604:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001fd608:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001fd60c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x4u);
    }
L_001fd610:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001fd614:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x330u);
    }
L_001fd618:;
    {
        cpu->r[8] = rd32(cpu->r[8] + + 0x3f4u);
    }
L_001fd61c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_001fd620:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x30u);
    }
L_001fd624:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_001fd628:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[8]);
    }
L_001fd62c:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x2u);
    }
L_001fd630:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_001fd634:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x9u);
    }
L_001fd638:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[9], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001fd63c:;
    {
        cpu->r[2] = rd16(cpu->r[2] + + 0x94u);
    }
L_001fd640:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001fd644:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000015u;
        }
    }
L_001fd648:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[9] + + 0x74u, cpu->r[3]);
        }
    }
L_001fd64c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fd7c4;
        }
    }
L_001fd650:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x30u);
    }
L_001fd654:;
    {
        cpu->r[0] = 0x0000063cu;
    }
L_001fd658:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x24u);
    }
L_001fd65c:;
    {
        cpu->r[2] = rd32(cpu->r[10] + + 0x114u);
    }
L_001fd660:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[11]);
    }
L_001fd664:;
    {
        uint32_t v = cpu->r[0] * cpu->r[3] + cpu->r[2]; cpu->r[2] = v;
    }
L_001fd668:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_001fd66c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001fd670:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x638u);
    }
L_001fd674:;
    {
        cpu->r[4] = rd8(cpu->r[12] + + 0x634u);
    }
L_001fd678:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_001fd67c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[8] = cpu->r[7];
        }
    }
L_001fd680:;
    {
        uint32_t v = cpu->r[4] * cpu->r[1]; cpu->r[4] = v;
    }
L_001fd684:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fd7ec;
        }
    }
L_001fd688:;
    {
        cpu->r[9] = cpu->r[12];
    }
L_001fd68c:;
    {
        cpu->r[10] = 0x00000001u;
    }
L_001fd690:;
    {
        cpu->r[1] = rd8(cpu->r[9] + + 0x347u);
    }
L_001fd694:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_001fd698:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[3] = v;
    }
L_001fd69c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[14] + cpu->r[3]);
    }
L_001fd6a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fd6a4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[8] = cpu->r[7];
        }
    }
L_001fd6a8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001fd78c;
        }
    }
L_001fd6ac:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001fd6b0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x000000a8u, 0, 0);
    }
L_001fd6b4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_001fd6b8:;
    {
        cpu->r[2] = rd8(cpu->r[0] + + 0x634u);
    }
L_001fd6bc:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[2] = v;
    }
L_001fd6c0:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 0);
    }
L_001fd6c4:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001fd6c8:;
    {
        uint32_t v = cpu->r[11] ^ shifter(cpu->r[11], 1, 31u, &shc); cpu->r[3] = v;
    }
L_001fd6cc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[11], 1, 31u, &shc), 1, 0);
    }
L_001fd6d0:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_001fd6d4:;
    {
        cpu->r[8] = rd16(cpu->r[1] + + 0x2u);
    }
L_001fd6d8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_001fd6dc:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[8], cpu->r[7], 1, 0);
    }
L_001fd6e0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001fd6e4:;
    {
        cpu->r[14] = 0x001fd6e8u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001fd6e8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_001fd6ec:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_001fd6f0:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_001fd6f4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_001fd6f8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x98u);
    }
L_001fd6fc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[7], 2, 2u, &shc), 0, 0);
    }
L_001fd700:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1]);
    }
L_001fd704:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_001fd708:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_001fd70c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x34u);
    }
L_001fd710:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001fd714:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001fd718:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[11] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
        }
    }
L_001fd71c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[11] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
        }
    }
L_001fd720:;
    {
        uint32_t v = cpu->r[0] ^ shifter(cpu->r[0], 1, 31u, &shc); cpu->r[14] = v;
    }
L_001fd724:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], shifter(cpu->r[0], 1, 31u, &shc), 1, 0);
    }
L_001fd728:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[8], 1, 1);
    }
L_001fd72c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[12] = cpu->r[8];
        }
    }
L_001fd730:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_001fd734:;
    {
        uint32_t v = cpu->r[3] - cpu->r[6] * cpu->r[14]; cpu->r[14] = v;
    }
L_001fd738:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_001fd73c:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[7], 2, 2u, &shc), cpu->r[1]);
    }
L_001fd740:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001fd780;
        }
    }
L_001fd744:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001fd748:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001fd74c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[14], 0, 0);
    }
L_001fd750:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1]);
    }
L_001fd754:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_001fd758:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001fd75c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[11], 0, 0);
        }
    }
L_001fd760:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
        }
    }
L_001fd764:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 0);
        }
    }
L_001fd768:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_001fd76c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[5], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_001fd770:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7] + + 0x98u);
    }
L_001fd774:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_001fd778:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 15));
        cpu->r[1] = ea + 4u;
    }
L_001fd77c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fd74c;
        }
    }
L_001fd780:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001fd784:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x18u);
    }
L_001fd788:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x638u);
    }
L_001fd78c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_001fd790:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_001fd794:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[2], 1, 1);
    }
L_001fd798:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001fd7ec;
        }
    }
L_001fd79c:;
    {
        cpu->r[7] = cpu->r[8];
    }
L_001fd7a0:;
    {
        goto L_001fd690;
    }
L_001fd7a4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001fd7a8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001fd7ac:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x7cu);
    }
L_001fd7b0:;
    {
        cpu->r[0] = rd32(cpu->r[14] + + 0x330u);
    }
L_001fd7b4:;
    {
        cpu->r[14] = 0x001fd7b8u; imp_memset(cpu); /* memset */
    }
L_001fd7b8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x30u);
    }
L_001fd7bc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_001fd7c0:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[0]);
    }
L_001fd7c4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x40u);
    }
L_001fd7c8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001fd7cc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001fd7d0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_001fd7d4:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000004u, 0, 0);
    }
L_001fd7d8:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[12]);
    }
L_001fd7dc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000003u, 0, 0);
    }
L_001fd7e0:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[14]);
    }
L_001fd7e4:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[0]);
    }
L_001fd7e8:;
    {
        goto L_001fd5dc;
    }
L_001fd7ec:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x34u);
    }
L_001fd7f0:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[8], 1, 1);
    }
L_001fd7f4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fd7c4;
        }
    }
L_001fd7f8:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x20u);
    }
L_001fd7fc:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x44u);
    }
L_001fd800:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], shifter(cpu->r[8], 2, 2u, &shc), 0, 0);
    }
L_001fd804:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[10], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_001fd808:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x98u);
    }
L_001fd80c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3]);
    }
L_001fd810:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_001fd814:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x34u);
    }
L_001fd818:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_001fd81c:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[11], 1, 1);
    }
L_001fd820:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 14));
        cpu->r[3] = ea + 4u;
    }
L_001fd824:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fd80c;
        }
    }
L_001fd828:;
    {
        goto L_001fd7c4;
    }
L_001fd82c:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x34u);
    }
L_001fd830:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x34u);
    }
L_001fd834:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x38u);
    }
L_001fd838:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[7], 0x00000002u, 1, 0);
    }
L_001fd83c:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x30u);
    }
L_001fd840:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
    }
L_001fd844:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[6]);
    }
L_001fd848:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[1] = v;
    }
L_001fd84c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x30u);
    }
L_001fd850:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[2] = v;
    }
L_001fd854:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 5u, &shc); cpu->r[5] = v;
    }
L_001fd858:;
    {
        wr32(cpu->r[13] + + 0x88u, cpu->r[1]);
    }
L_001fd85c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 3u, &shc); cpu->r[3] = v;
    }
L_001fd860:;
    {
        cpu->r[1] = (~0x00000001u);
    }
L_001fd864:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[5]);
    }
L_001fd868:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[7], 0x00000008u, 1, 0);
    }
L_001fd86c:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3] + cpu->r[11]; cpu->r[1] = v;
    }
L_001fd870:;
    {
        cpu->r[0] = rd32(0x001fd878u + - 0x3dcu);
    }
L_001fd874:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x44u);
    }
L_001fd878:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 2u, &shc); cpu->r[12] = v;
    }
L_001fd87c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x38u);
    }
L_001fd880:;
    {
        cpu->r[0] = add_flags(cpu, 0x001fd888u, cpu->r[0], 0, 0);
    }
L_001fd884:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x38u);
    }
L_001fd888:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[2], 0x00000004u, 1, 0);
    }
L_001fd88c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[8], 0x00000004u, 1, 0);
    }
L_001fd890:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], 0x00000490u, 0, 0);
    }
L_001fd894:;
    {
        wr32(cpu->r[13] + + 0xa4u, cpu->r[1]);
    }
L_001fd898:;
    {
        cpu->r[1] = (~0x00000002u);
    }
L_001fd89c:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 6u, &shc); cpu->r[0] = v;
    }
L_001fd8a0:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[12]);
    }
L_001fd8a4:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3] + cpu->r[11]; cpu->r[1] = v;
    }
L_001fd8a8:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[12] = v;
    }
L_001fd8ac:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
    }
L_001fd8b0:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[0]);
    }
L_001fd8b4:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_001fd8b8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[11], cpu->r[3], 1, 0);
    }
L_001fd8bc:;
    {
        wr32(cpu->r[13] + + 0x9cu, cpu->r[3]);
    }
L_001fd8c0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001fd8c4:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[3]);
    }
L_001fd8c8:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[7], 0x00000004u, 1, 0);
    }
L_001fd8cc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x48u);
    }
L_001fd8d0:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000003u, 1, 0);
    }
L_001fd8d4:;
    {
        wr32(cpu->r[13] + + 0xa8u, cpu->r[1]);
    }
L_001fd8d8:;
    {
        uint32_t v = shifter(cpu->r[9], 1, 4u, &shc); cpu->r[9] = v;
    }
L_001fd8dc:;
    {
        cpu->r[1] = rd32(0x001fd8e4u + - 0x444u);
    }
L_001fd8e0:;
    {
        uint32_t v = shifter(cpu->r[14], 2, 2u, &shc); cpu->r[14] = v;
    }
L_001fd8e4:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[5] = v;
    }
L_001fd8e8:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[14]);
    }
L_001fd8ec:;
    {
        cpu->r[1] = add_flags(cpu, 0x001fd8f4u, cpu->r[1], 0, 0);
    }
L_001fd8f0:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[14] = v;
    }
L_001fd8f4:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 2u, &shc); cpu->r[6] = v;
    }
L_001fd8f8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[11], cpu->r[2], 1, 0);
    }
L_001fd8fc:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 2u, &shc); cpu->r[7] = v;
    }
L_001fd900:;
    {
        wr32(cpu->r[13] + + 0xc4u, cpu->r[1]);
    }
L_001fd904:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000008u, 0, 0);
    }
L_001fd908:;
    {
        wr32(cpu->r[13] + + 0x98u, cpu->r[2]);
    }
L_001fd90c:;
    {
        cpu->r[1] = sub_flags(cpu, 0x00000000u, cpu->r[9], 1, 0);
    }
L_001fd910:;
    {
        uint32_t v = shifter(cpu->r[11], 2, 2u, &shc); cpu->r[2] = v;
    }
L_001fd914:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[9]);
    }
L_001fd918:;
    {
        wr32(cpu->r[13] + + 0xb8u, cpu->r[12]);
    }
L_001fd91c:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[5]);
    }
L_001fd920:;
    {
        wr32(cpu->r[13] + + 0xacu, cpu->r[6]);
    }
L_001fd924:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[14]);
    }
L_001fd928:;
    {
        wr32(cpu->r[13] + + 0x94u, cpu->r[7]);
    }
L_001fd92c:;
    {
        wr32(cpu->r[13] + + 0xc8u, cpu->r[8]);
    }
L_001fd930:;
    {
        wr32(cpu->r[13] + + 0x70u, cpu->r[0]);
    }
L_001fd934:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[1]);
    }
L_001fd938:;
    {
        wr32(cpu->r[13] + + 0xb4u, cpu->r[2]);
    }
L_001fd93c:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[4]);
    }
L_001fd940:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x58u);
    }
L_001fd944:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_001fd948:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001fe430;
        }
    }
L_001fd94c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0xc0u);
    }
L_001fd950:;
    {
        cpu->r[3] = 0x0000097eu;
    }
L_001fd954:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x4cu);
    }
L_001fd958:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x54u);
    }
L_001fd95c:;
    {
        cpu->r[6] = rd8(cpu->r[6]);
    }
L_001fd960:;
    {
        cpu->r[8] = rd32(cpu->r[8] + + 0x6cu);
    }
L_001fd964:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xc4u);
    }
L_001fd968:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x7cu);
    }
L_001fd96c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xc8u);
    }
L_001fd970:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x330u);
    }
L_001fd974:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[6]);
    }
L_001fd978:;
    {
        wr32(cpu->r[13] + + 0xb0u, cpu->r[8]);
    }
L_001fd97c:;
    {
        cpu->r[14] = 0x001fd980u; fn_00097dd8(cpu);
    }
L_001fd980:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x4cu);
    }
L_001fd984:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x7cu);
    }
L_001fd988:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_001fd98c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x88u);
    }
L_001fd990:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[7], cpu->r[9], 0, 0);
    }
L_001fd994:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[12], 1, 1);
    }
L_001fd998:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x43cu);
    }
L_001fd99c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x64u, cpu->r[7]);
        }
    }
L_001fd9a0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = cpu->r[6];
        }
    }
L_001fd9a4:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[0]);
    }
L_001fd9a8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[11], 0, 0);
    }
L_001fd9ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fda30;
        }
    }
L_001fd9b0:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001fd9b4:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_001fd9b8:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001fd9bc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_001fd9c0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_001fd9c4:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_001fd9c8:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3]);
    }
L_001fd9cc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2]);
    }
L_001fd9d0:;
    {
        cpu->r[14] = cpu->r[2];
    }
L_001fd9d4:;
    {
        vfp_vnmls(cpu, 15, 13, 14);
    }
L_001fd9d8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001fd9dc:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_001fd9e0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[14]);
    }
L_001fd9e4:;
    {
        vfp_vmul(cpu, 15, 12, 15);
    }
L_001fd9e8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_001fd9ec:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3]);
    }
L_001fd9f0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000010u, 0, 0);
    }
L_001fd9f4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001fd9f8:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_001fd9fc:;
    {
        vfp_vmla(cpu, 15, 13, 14);
    }
L_001fda00:;
    {
        cpu->r[5] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001fda04:;
    {
        uint32_t wb_tmp = cpu->r[0] + (-0x00000008u);
        wr32(cpu->r[0], cpu->r[5]);
        cpu->r[0] = wb_tmp;
    }
L_001fda08:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fd9bc;
        }
    }
L_001fda0c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], 0x00000010u, 0, 0);
    }
L_001fda10:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 0);
    }
L_001fda14:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 4u, &shc); cpu->r[2] = v;
    }
L_001fda18:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001fda1c:;
    {
        cpu->r[2] = (~cpu->r[2]);
    }
L_001fda20:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[7], shifter(cpu->r[3], 2, 4u, &shc), 0, 0);
    }
L_001fda24:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 3u, &shc), 0, 0);
    }
L_001fda28:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_001fda2c:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[8]);
    }
L_001fda30:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001fda34:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[1], 1, 1);
    }
L_001fda38:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001fda9c;
        }
    }
L_001fda3c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x94u);
    }
L_001fda40:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001fda44:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], cpu->r[10], 0, 0);
    }
L_001fda48:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2]);
    }
L_001fda4c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_001fda50:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_001fda54:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_001fda58:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3]);
    }
L_001fda5c:;
    {
        cpu->r[11] = cpu->r[2];
    }
L_001fda60:;
    {
        cpu->r[12] = cpu->r[3];
    }
L_001fda64:;
    {
        vfp_vmls(cpu, 15, 13, 14);
    }
L_001fda68:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001fda6c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_001fda70:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[11]);
    }
L_001fda74:;
    {
        vfp_vnmul(cpu, 15, 12, 15);
    }
L_001fda78:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_001fda7c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_001fda80:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000010u, 1, 0);
    }
L_001fda84:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001fda88:;
    {
        vfp_vmls(cpu, 15, 13, 14);
    }
L_001fda8c:;
    {
        cpu->r[14] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001fda90:;
    {
        uint32_t wb_tmp = cpu->r[1] + (-0x00000008u);
        wr32(cpu->r[1], cpu->r[14]);
        cpu->r[1] = wb_tmp;
    }
L_001fda94:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_001fda98:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001fda48;
        }
    }
L_001fda9c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001fdaa0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], cpu->r[0], 0, 1);
    }
L_001fdaa4:;
    {
        if (cond_test(cpu, 3)) {
        goto L_001fdb88;
        }
    }
L_001fdaa8:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x68u);
    }
L_001fdaac:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001fdab0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001fdab4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[7], cpu->r[5], 0, 0);
    }
L_001fdab8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[5], 0, 0);
    }
L_001fdabc:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_001fdac0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_001fdac4:;
    {
        vfp_vadd(cpu, 11, 12, 13);
    }
L_001fdac8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_001fdacc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1]);
    }
L_001fdad0:;
    {
        *(uint32_t*)G(cpu->r[12] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_001fdad4:;
    {
        vfp_vsub(cpu, 14, 14, 15);
    }
L_001fdad8:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[1]);
    }
L_001fdadc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_001fdae0:;
    {
        vfp_vadd(cpu, 15, 11, 15);
    }
L_001fdae4:;
    {
        *(uint32_t*)G(cpu->r[12]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001fdae8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x14u);
    }
L_001fdaec:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_001fdaf0:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[3] + + 0x10u);
    }
L_001fdaf4:;
    {
        vfp_vsub(cpu, 13, 12, 13);
    }
L_001fdaf8:;
    {
        vfp_vnmls(cpu, 15, 13, 11);
    }
L_001fdafc:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001fdb00:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x14u);
    }
L_001fdb04:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_001fdb08:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + + 0x10u);
    }
L_001fdb0c:;
    {
        vfp_vmla(cpu, 15, 14, 13);
    }
L_001fdb10:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001fdb14:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[2] + + 0xcu);
    }
L_001fdb18:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[1] + + 0xcu);
    }
L_001fdb1c:;
    {
        vfp_vadd(cpu, 11, 12, 13);
    }
L_001fdb20:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_001fdb24:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0x8u);
    }
L_001fdb28:;
    {
        *(uint32_t*)G(cpu->r[12] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_001fdb2c:;
    {
        vfp_vsub(cpu, 14, 14, 15);
    }
L_001fdb30:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[1] + + 0x8u);
    }
L_001fdb34:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_001fdb38:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000010u, 0, 0);
    }
L_001fdb3c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000010u, 0, 0);
    }
L_001fdb40:;
    {
        vfp_vadd(cpu, 15, 11, 15);
    }
L_001fdb44:;
    {
        *(uint32_t*)G(cpu->r[12] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001fdb48:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_001fdb4c:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_001fdb50:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[3]);
    }
L_001fdb54:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000010u, 0, 0);
    }
L_001fdb58:;
    {
        vfp_vsub(cpu, 13, 12, 13);
    }
L_001fdb5c:;
    {
        vfp_vnmls(cpu, 15, 13, 11);
    }
L_001fdb60:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001fdb64:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_001fdb68:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_001fdb6c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3]);
    }
L_001fdb70:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000020u, 1, 0);
    }
L_001fdb74:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_001fdb78:;
    {
        vfp_vmla(cpu, 15, 14, 13);
    }
L_001fdb7c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001fdb80:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000010u, 0, 0);
    }
L_001fdb84:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001fdabc;
        }
    }
L_001fdb88:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x38u);
    }
L_001fdb8c:;
    {
        cpu->r[4] = 0x00000010u;
    }
L_001fdb90:;
    {
        cpu->r[14] = 0x001fdb94u; fn_001f77f0(cpu);
    }
L_001fdb94:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001fdb98:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_001fdb9c:;
    {
        cpu->r[9] = 0x00000002u;
    }
L_001fdba0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x70u);
    }
L_001fdba4:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_001fdba8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001fdbac:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x5cu);
    }
L_001fdbb0:;
    {
        cpu->r[14] = 0x001fdbb4u; fn_001f7928(cpu);
    }
L_001fdbb4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x5cu);
    }
L_001fdbb8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001fdbbc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x98u);
    }
L_001fdbc0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x70u);
    }
L_001fdbc4:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 0);
    }
L_001fdbc8:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_001fdbcc:;
    {
        cpu->r[14] = 0x001fdbd0u; fn_001f7928(cpu);
    }
L_001fdbd0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x44u);
    }
L_001fdbd4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001fdbd8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_001fdbdc:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 0);
    }
L_001fdbe0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x50u);
    }
L_001fdbe4:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_001fdbe8:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 1u, &shc); cpu->r[5] = v;
    }
L_001fdbec:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[8]);
    }
L_001fdbf0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_001fdbf4:;
    {
        cpu->r[14] = 0x001fdbf8u; fn_001f7aa8(cpu);
    }
L_001fdbf8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x44u);
    }
L_001fdbfc:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001fdc00:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x9cu);
    }
L_001fdc04:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x50u);
    }
L_001fdc08:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_001fdc0c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[9]);
    }
L_001fdc10:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_001fdc14:;
    {
        cpu->r[14] = 0x001fdc18u; fn_001f7aa8(cpu);
    }
L_001fdc18:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x44u);
    }
L_001fdc1c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001fdc20:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xa4u);
    }
L_001fdc24:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x50u);
    }
L_001fdc28:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_001fdc2c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_001fdc30:;
    {
        cpu->r[14] = 0x001fdc34u; fn_001f7aa8(cpu);
    }
L_001fdc34:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x44u);
    }
L_001fdc38:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001fdc3c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xa8u);
    }
L_001fdc40:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x50u);
    }
L_001fdc44:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_001fdc48:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_001fdc4c:;
    {
        cpu->r[14] = 0x001fdc50u; fn_001f7aa8(cpu);
    }
L_001fdc50:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[5]);
    }
L_001fdc54:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001fdc58:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_001fdc5c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001fdc60:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001fdcf4;
        }
    }
L_001fdc64:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001fdc68:;
    {
        cpu->r[11] = 0x00000001u;
    }
L_001fdc6c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_001fdc70:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[10]);
    }
L_001fdc74:;
    {
        uint32_t v = shifter(cpu->r[11], 2, (cpu->r[10] & 0xffu), &shc); cpu->r[8] = v;
    }
L_001fdc78:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001fdc7c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fdc54;
        }
    }
L_001fdc80:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x38u);
    }
L_001fdc84:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[10], cpu->r[11], 0, 0);
    }
L_001fdc88:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001fdc8c:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001fdc90:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000003u, 0, 0);
    }
L_001fdc94:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x30u);
    }
L_001fdc98:;
    {
        uint32_t v = shifter(cpu->r[12], 1, (cpu->r[11] & 0xffu), &shc); cpu->r[11] = v;
    }
L_001fdc9c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[14], 0x00000002u, 0, 0);
    }
L_001fdca0:;
    {
        uint32_t v = shifter(cpu->r[12], 1, (cpu->r[10] & 0xffu), &shc); cpu->r[10] = v;
    }
L_001fdca4:;
    {
        uint32_t v = shifter(cpu->r[0], 2, (cpu->r[9] & 0xffu), &shc); cpu->r[9] = v;
    }
L_001fdca8:;
    {
        uint32_t v = shifter(cpu->r[11], 1, (cpu->r[0] & 0xffu), &shc); cpu->r[3] = v;
    }
L_001fdcac:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001fdcb0:;
    {
        cpu->r[11] = sub_flags(cpu, 0x00000000u, cpu->r[11], 1, 0);
    }
L_001fdcb4:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_001fdcb8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_001fdcbc:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001fdcc0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001fdcc4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001fdcc8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001fdccc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_001fdcd0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[11], 0, 0);
    }
L_001fdcd4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[6]);
        wr32(ea + 4u, cpu->r[9]);
    }
L_001fdcd8:;
    {
        cpu->r[14] = 0x001fdcdcu; fn_001f7aa8(cpu);
    }
L_001fdcdc:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[8], 1, 1);
    }
L_001fdce0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fdcbc;
        }
    }
L_001fdce4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001fdce8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_001fdcec:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001fdcf0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001fdc64;
        }
    }
L_001fdcf4:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x24u);
    }
L_001fdcf8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[7], 0x00000004u, 1, 0);
    }
L_001fdcfc:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x7cu);
    }
L_001fdd00:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000006u, 1, 0);
    }
L_001fdd04:;
    {
        wr32(cpu->r[13] + + 0xccu, cpu->r[7]);
    }
L_001fdd08:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], cpu->r[3], 0, 0);
    }
L_001fdd0c:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[5]);
    }
L_001fdd10:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_001fdd14:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001fdd18:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x40u);
    }
L_001fdd1c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001fdd20:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001fdf64;
        }
    }
L_001fdd24:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001fdd28:;
    {
        cpu->r[11] = 0x00000001u;
    }
L_001fdd2c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x38u);
    }
L_001fdd30:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[9], 0x00000006u, 0, 0);
    }
L_001fdd34:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_001fdd38:;
    {
        uint32_t v = shifter(cpu->r[11], 2, (cpu->r[9] & 0xffu), &shc); cpu->r[5] = v;
    }
L_001fdd3c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[9]);
    }
L_001fdd40:;
    {
        uint32_t v = shifter(cpu->r[10], 1, (cpu->r[4] & 0xffu), &shc); cpu->r[4] = v;
    }
L_001fdd44:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001fdd48:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fdd14;
        }
    }
L_001fdd4c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], 0x00000002u, 0, 0);
    }
L_001fdd50:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[9], cpu->r[11], 0, 0);
    }
L_001fdd54:;
    {
        uint32_t v = shifter(cpu->r[11], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[3] = v;
    }
L_001fdd58:;
    {
        uint32_t v = shifter(cpu->r[10], 1, (cpu->r[1] & 0xffu), &shc); cpu->r[1] = v;
    }
L_001fdd5c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_001fdd60:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[3], cpu->r[11], 0, 0);
    }
L_001fdd64:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[10] = v;
    }
L_001fdd68:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 1u, &shc); cpu->r[2] = v;
    }
L_001fdd6c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[10], cpu->r[3], 0, 0);
    }
L_001fdd70:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_001fdd74:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_001fdd78:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_001fdd7c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[2], 2, 2u, &shc), 1, 0);
    }
L_001fdd80:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[6], shifter(cpu->r[11], 2, 2u, &shc), 0, 0);
    }
L_001fdd84:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[6], shifter(cpu->r[10], 2, 2u, &shc), 0, 0);
    }
L_001fdd88:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[6], shifter(cpu->r[8], 2, 2u, &shc), 0, 0);
    }
L_001fdd8c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[6], shifter(cpu->r[7], 2, 2u, &shc), 0, 0);
    }
L_001fdd90:;
    {
        cpu->r[12] = cpu->r[14];
    }
L_001fdd94:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[1] = v;
    }
L_001fdd98:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[6], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_001fdd9c:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[1], 1, 0);
    }
L_001fdda0:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_001fdda4:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 4u, &shc); cpu->r[1] = v;
    }
L_001fdda8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001fddac:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_001fddb0:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_001fddb4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_001fddb8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001fddbc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], cpu->r[12], 0, 0);
    }
L_001fddc0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], cpu->r[12], 0, 0);
    }
L_001fddc4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[12], 0, 0);
    }
L_001fddc8:;
    {
        *vfp_s(cpu, 2) = *(float*)G(cpu->r[3]);
    }
L_001fddcc:;
    {
        *vfp_s(cpu, 4) = *(float*)G(cpu->r[2]);
    }
L_001fddd0:;
    {
        *vfp_s(cpu, 3) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_001fddd4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[11], cpu->r[12], 0, 0);
    }
L_001fddd8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], cpu->r[12], 0, 0);
    }
L_001fdddc:;
    {
        *vfp_s(cpu, 5) = *(float*)G(cpu->r[2]);
    }
L_001fdde0:;
    {
        *vfp_s(cpu, 6) = *(float*)G(cpu->r[3]);
    }
L_001fdde4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], cpu->r[12], 0, 0);
    }
L_001fdde8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], cpu->r[12], 0, 0);
    }
L_001fddec:;
    {
        *vfp_s(cpu, 7) = *(float*)G(cpu->r[1]);
    }
L_001fddf0:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[2]);
    }
L_001fddf4:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[3]);
    }
L_001fddf8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fdf40;
        }
    }
L_001fddfc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_001fde00:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[14], 0, 0);
    }
L_001fde04:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_001fde08:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], cpu->r[14], 0, 0);
    }
L_001fde0c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001fde10:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[2]);
    }
L_001fde14:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3]);
    }
L_001fde18:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + - 0x4u);
    }
L_001fde1c:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[2] + - 0x4u);
    }
L_001fde20:;
    {
        vfp_vsub(cpu, 11, 12, 13);
    }
L_001fde24:;
    {
        *vfp_s(cpu, 1) = *(float*)G(cpu->r[2] + - 0x4u);
    }
L_001fde28:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_001fde2c:;
    {
        vfp_vsub(cpu, 10, 10, 15);
    }
L_001fde30:;
    {
        vfp_vmul(cpu, 15, 3, 11);
    }
L_001fde34:;
    {
        vfp_vmul(cpu, 14, 3, 10);
    }
L_001fde38:;
    {
        vfp_vmla(cpu, 15, 2, 10);
    }
L_001fde3c:;
    {
        vfp_vnmls(cpu, 14, 2, 11);
    }
L_001fde40:;
    {
        vfp_vadd(cpu, 13, 12, 13);
    }
L_001fde44:;
    {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_001fde48:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + - 0x4u);
    }
L_001fde4c:;
    {
        vfp_vadd(cpu, 13, 1, 13);
    }
L_001fde50:;
    {
        *(uint32_t*)G(cpu->r[2] + - 0x4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_001fde54:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001fde58:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001fde5c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + - 0x8u);
    }
L_001fde60:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[2] + - 0x8u);
    }
L_001fde64:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + - 0xcu);
    }
L_001fde68:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[2] + - 0xcu);
    }
L_001fde6c:;
    {
        vfp_vsub(cpu, 11, 12, 13);
    }
L_001fde70:;
    {
        *vfp_s(cpu, 1) = *(float*)G(cpu->r[2] + - 0xcu);
    }
L_001fde74:;
    {
        vfp_vsub(cpu, 10, 10, 15);
    }
L_001fde78:;
    {
        vfp_vmul(cpu, 15, 5, 11);
    }
L_001fde7c:;
    {
        vfp_vmul(cpu, 14, 5, 10);
    }
L_001fde80:;
    {
        vfp_vmla(cpu, 15, 4, 10);
    }
L_001fde84:;
    {
        vfp_vnmls(cpu, 14, 4, 11);
    }
L_001fde88:;
    {
        vfp_vadd(cpu, 13, 12, 13);
    }
L_001fde8c:;
    {
        *(uint32_t*)G(cpu->r[2] + - 0x8u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_001fde90:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + - 0xcu);
    }
L_001fde94:;
    {
        vfp_vadd(cpu, 13, 1, 13);
    }
L_001fde98:;
    {
        *(uint32_t*)G(cpu->r[2] + - 0xcu) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_001fde9c:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001fdea0:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001fdea4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + - 0x10u);
    }
L_001fdea8:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[2] + - 0x10u);
    }
L_001fdeac:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + - 0x14u);
    }
L_001fdeb0:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[2] + - 0x14u);
    }
L_001fdeb4:;
    {
        vfp_vsub(cpu, 11, 12, 13);
    }
L_001fdeb8:;
    {
        *vfp_s(cpu, 1) = *(float*)G(cpu->r[2] + - 0x14u);
    }
L_001fdebc:;
    {
        vfp_vsub(cpu, 10, 10, 15);
    }
L_001fdec0:;
    {
        vfp_vmul(cpu, 15, 7, 11);
    }
L_001fdec4:;
    {
        vfp_vmul(cpu, 14, 7, 10);
    }
L_001fdec8:;
    {
        vfp_vmla(cpu, 15, 6, 10);
    }
L_001fdecc:;
    {
        vfp_vnmls(cpu, 14, 6, 11);
    }
L_001fded0:;
    {
        vfp_vadd(cpu, 13, 12, 13);
    }
L_001fded4:;
    {
        *(uint32_t*)G(cpu->r[2] + - 0x10u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_001fded8:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + - 0x14u);
    }
L_001fdedc:;
    {
        vfp_vadd(cpu, 13, 1, 13);
    }
L_001fdee0:;
    {
        *(uint32_t*)G(cpu->r[2] + - 0x14u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_001fdee4:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x10u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001fdee8:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001fdeec:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + - 0x18u);
    }
L_001fdef0:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[2] + - 0x18u);
    }
L_001fdef4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + - 0x1cu);
    }
L_001fdef8:;
    {
        vfp_vsub(cpu, 11, 12, 13);
    }
L_001fdefc:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[2] + - 0x1cu);
    }
L_001fdf00:;
    {
        vfp_vsub(cpu, 10, 10, 15);
    }
L_001fdf04:;
    {
        vfp_vmul(cpu, 15, 9, 11);
    }
L_001fdf08:;
    {
        vfp_vmul(cpu, 14, 9, 10);
    }
L_001fdf0c:;
    {
        vfp_vmla(cpu, 15, 8, 10);
    }
L_001fdf10:;
    {
        vfp_vnmls(cpu, 14, 8, 11);
    }
L_001fdf14:;
    {
        vfp_vadd(cpu, 13, 12, 13);
    }
L_001fdf18:;
    {
        *(uint32_t*)G(cpu->r[2] + - 0x18u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_001fdf1c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[2] + - 0x1cu);
    }
L_001fdf20:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + - 0x1cu);
    }
L_001fdf24:;
    {
        vfp_vadd(cpu, 13, 12, 13);
    }
L_001fdf28:;
    {
        *(uint32_t*)G(cpu->r[2] + - 0x1cu) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_001fdf2c:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x18u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001fdf30:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001fdf34:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_001fdf38:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_001fdf3c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fde10;
        }
    }
L_001fdf40:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_001fdf44:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 1);
    }
L_001fdf48:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], 0x00000020u, 1, 0);
    }
L_001fdf4c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[2], 0, 0);
    }
L_001fdf50:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fddb4;
        }
    }
L_001fdf54:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001fdf58:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x40u);
    }
L_001fdf5c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001fdf60:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001fdd24;
        }
    }
L_001fdf64:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xccu);
    }
L_001fdf68:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0xb4u);
    }
L_001fdf6c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x60u);
    }
L_001fdf70:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], cpu->r[8], 0, 0);
    }
L_001fdf74:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0xb8u);
    }
L_001fdf78:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[10], 0, 1);
    }
L_001fdf7c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[6], cpu->r[9], 0, 0);
    }
L_001fdf80:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[9]);
    }
L_001fdf84:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001fe0f4;
        }
    }
L_001fdf88:;
    {
        *vfp_s(cpu, 4) = *(float*)G(cpu->r[3] + - 0x18u);
    }
L_001fdf8c:;
    {
        *vfp_s(cpu, 6) = *(float*)G(cpu->r[3] + - 0x3cu);
    }
L_001fdf90:;
    {
        *vfp_s(cpu, 0) = *(float*)G(cpu->r[3] + - 0x38u);
    }
L_001fdf94:;
    {
        *vfp_s(cpu, 2) = *(float*)G(cpu->r[3] + - 0x1cu);
    }
L_001fdf98:;
    {
        vfp_vsub(cpu, 8, 0, 4);
    }
L_001fdf9c:;
    {
        *vfp_s(cpu, 5) = *(float*)G(cpu->r[3] + - 0x28u);
    }
L_001fdfa0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + - 0x2cu);
    }
L_001fdfa4:;
    {
        *vfp_s(cpu, 23) = *(float*)G(cpu->r[3] + - 0x8u);
    }
L_001fdfa8:;
    {
        *vfp_s(cpu, 22) = *(float*)G(cpu->r[3] + - 0xcu);
    }
L_001fdfac:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[3] + - 0x20u);
    }
L_001fdfb0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + - 0x10u);
    }
L_001fdfb4:;
    {
        *vfp_s(cpu, 24) = *(float*)G(cpu->r[3]);
    }
L_001fdfb8:;
    {
        *vfp_s(cpu, 1) = *(float*)G(cpu->r[3] + - 0x30u);
    }
L_001fdfbc:;
    {
        *vfp_s(cpu, 7) = *(float*)G(cpu->r[3] + - 0x24u);
    }
L_001fdfc0:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[3] + - 0x34u);
    }
L_001fdfc4:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[3] + - 0x4u);
    }
L_001fdfc8:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[3] + - 0x14u);
    }
L_001fdfcc:;
    {
        vfp_vsub(cpu, 10, 2, 6);
    }
L_001fdfd0:;
    {
        vfp_vsub(cpu, 16, 23, 5);
    }
L_001fdfd4:;
    {
        vfp_vsub(cpu, 3, 22, 13);
    }
L_001fdfd8:;
    {
        vfp_vsub(cpu, 20, 8, 10);
    }
L_001fdfdc:;
    {
        vfp_vadd(cpu, 10, 8, 10);
    }
L_001fdfe0:;
    {
        vfp_vsub(cpu, 18, 3, 16);
    }
L_001fdfe4:;
    {
        vfp_vmul(cpu, 8, 15, 10);
    }
L_001fdfe8:;
    {
        vfp_vadd(cpu, 23, 23, 5);
    }
L_001fdfec:;
    {
        vfp_vmul(cpu, 10, 15, 20);
    }
L_001fdff0:;
    {
        vfp_vadd(cpu, 22, 22, 13);
    }
L_001fdff4:;
    {
        vfp_vsub(cpu, 20, 24, 11);
    }
L_001fdff8:;
    {
        vfp_vsub(cpu, 13, 1, 14);
    }
L_001fdffc:;
    {
        vfp_vadd(cpu, 0, 0, 4);
    }
L_001fe000:;
    {
        vfp_vadd(cpu, 2, 2, 6);
    }
L_001fe004:;
    {
        vfp_vadd(cpu, 24, 24, 11);
    }
L_001fe008:;
    {
        vfp_vadd(cpu, 1, 1, 14);
    }
L_001fe00c:;
    {
        vfp_vadd(cpu, 3, 16, 3);
    }
L_001fe010:;
    {
        vfp_vmul(cpu, 18, 15, 18);
    }
L_001fe014:;
    {
        vfp_vadd(cpu, 21, 17, 7);
    }
L_001fe018:;
    {
        vfp_vadd(cpu, 5, 9, 12);
    }
L_001fe01c:;
    {
        vfp_vsub(cpu, 17, 17, 7);
    }
L_001fe020:;
    {
        vfp_vsub(cpu, 6, 23, 0);
    }
L_001fe024:;
    {
        vfp_vadd(cpu, 16, 24, 1);
    }
L_001fe028:;
    {
        vfp_vadd(cpu, 4, 22, 2);
    }
L_001fe02c:;
    {
        vfp_vsub(cpu, 1, 24, 1);
    }
L_001fe030:;
    {
        vfp_vadd(cpu, 0, 23, 0);
    }
L_001fe034:;
    {
        vfp_vsub(cpu, 2, 22, 2);
    }
L_001fe038:;
    {
        vfp_vmul(cpu, 19, 15, 3);
    }
L_001fe03c:;
    {
        vfp_vadd(cpu, 11, 17, 13);
    }
L_001fe040:;
    {
        vfp_vsub(cpu, 9, 9, 12);
    }
L_001fe044:;
    {
        vfp_vadd(cpu, 3, 21, 5);
    }
L_001fe048:;
    {
        vfp_vadd(cpu, 12, 18, 10);
    }
L_001fe04c:;
    {
        vfp_vsub(cpu, 13, 17, 13);
    }
L_001fe050:;
    {
        vfp_vsub(cpu, 10, 18, 10);
    }
L_001fe054:;
    {
        vfp_vsub(cpu, 17, 1, 2);
    }
L_001fe058:;
    {
        vfp_vsub(cpu, 18, 16, 0);
    }
L_001fe05c:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x18u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_001fe060:;
    {
        vfp_vsub(cpu, 5, 21, 5);
    }
L_001fe064:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x8u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_001fe068:;
    {
        vfp_vadd(cpu, 7, 20, 9);
    }
L_001fe06c:;
    {
        vfp_vsub(cpu, 14, 19, 8);
    }
L_001fe070:;
    {
        vfp_vsub(cpu, 18, 3, 4);
    }
L_001fe074:;
    {
        vfp_vadd(cpu, 17, 6, 5);
    }
L_001fe078:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0xcu) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_001fe07c:;
    {
        vfp_vsub(cpu, 9, 20, 9);
    }
L_001fe080:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x1cu) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_001fe084:;
    {
        vfp_vadd(cpu, 8, 19, 8);
    }
L_001fe088:;
    {
        vfp_vsub(cpu, 17, 9, 10);
    }
L_001fe08c:;
    {
        vfp_vsub(cpu, 18, 7, 8);
    }
L_001fe090:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x38u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_001fe094:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x28u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_001fe098:;
    {
        vfp_vadd(cpu, 17, 14, 13);
    }
L_001fe09c:;
    {
        vfp_vsub(cpu, 18, 11, 12);
    }
L_001fe0a0:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x3cu) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_001fe0a4:;
    {
        vfp_vadd(cpu, 0, 16, 0);
    }
L_001fe0a8:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x2cu) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_001fe0ac:;
    {
        vfp_vadd(cpu, 2, 1, 2);
    }
L_001fe0b0:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 0);
    }
L_001fe0b4:;
    {
        vfp_vadd(cpu, 4, 3, 4);
    }
L_001fe0b8:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x10u) = *(uint32_t*)vfp_s(cpu, 2);
    }
L_001fe0bc:;
    {
        vfp_vsub(cpu, 6, 5, 6);
    }
L_001fe0c0:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x4u) = *(uint32_t*)vfp_s(cpu, 4);
    }
L_001fe0c4:;
    {
        vfp_vadd(cpu, 8, 7, 8);
    }
L_001fe0c8:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x14u) = *(uint32_t*)vfp_s(cpu, 6);
    }
L_001fe0cc:;
    {
        vfp_vadd(cpu, 10, 9, 10);
    }
L_001fe0d0:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x20u) = *(uint32_t*)vfp_s(cpu, 8);
    }
L_001fe0d4:;
    {
        vfp_vadd(cpu, 12, 11, 12);
    }
L_001fe0d8:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x30u) = *(uint32_t*)vfp_s(cpu, 10);
    }
L_001fe0dc:;
    {
        vfp_vsub(cpu, 14, 13, 14);
    }
L_001fe0e0:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x24u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_001fe0e4:;
    {
        *(uint32_t*)G(cpu->r[3] + - 0x34u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001fe0e8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000040u, 1, 0);
    }
L_001fe0ec:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001fe0f0:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001fdf88;
        }
    }
L_001fe0f4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x48u);
    }
L_001fe0f8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001fe0fc:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x4cu);
    }
L_001fe100:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x74u);
    }
L_001fe104:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[11], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_001fe108:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x78u);
    }
L_001fe10c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[14], cpu->r[0], 0, 1);
    }
L_001fe110:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[14], cpu->r[5], 0, 0);
    }
L_001fe114:;
    {
        cpu->r[4] = rd32(cpu->r[1] + + 0x45cu);
    }
L_001fe118:;
    {
        if (cond_test(cpu, 3)) {
        goto L_001fe1cc;
        }
    }
L_001fe11c:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[2], cpu->r[14], 1, 0);
    }
L_001fe120:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_001fe124:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001fe128:;
    {
        uint32_t v = shifter(cpu->r[11], 3, 4u, &shc); cpu->r[11] = v;
    }
L_001fe12c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[14], shifter(cpu->r[11], 2, 2u, &shc), 0, 0);
    }
L_001fe130:;
    {
        goto L_001fe138;
    }
L_001fe134:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000004u, 0, 0);
    }
L_001fe138:;
    {
        cpu->r[12] = rd16(cpu->r[4]);
    }
L_001fe13c:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[11], 1, 1);
    }
L_001fe140:;
    {
        cpu->r[0] = rd16(cpu->r[4] + + 0x2u);
    }
L_001fe144:;
    {
        cpu->r[4] = cpu->r[14];
    }
L_001fe148:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[12], 0x00000003u, 0, 0);
    }
L_001fe14c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_001fe150:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[12], 0x00000002u, 0, 0);
    }
L_001fe154:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001fe158:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000003u, 0, 0);
    }
L_001fe15c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[7], shifter(cpu->r[9], 2, 2u, &shc), 0, 0);
    }
L_001fe160:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[7], shifter(cpu->r[10], 2, 2u, &shc), 0, 0);
    }
L_001fe164:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[7], shifter(cpu->r[8], 2, 2u, &shc), 0, 0);
    }
L_001fe168:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[7], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_001fe16c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_001fe170:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001fe174:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[9]);
    }
L_001fe178:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001fe17c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[10]);
    }
L_001fe180:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001fe184:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[8]);
    }
L_001fe188:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[7], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_001fe18c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_001fe190:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001fe194:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_001fe198:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[8]);
    }
L_001fe19c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_001fe1a0:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001fe1a4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[7], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_001fe1a8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6]);
    }
L_001fe1ac:;
    {
        cpu->r[9] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001fe1b0:;
    {
        uint32_t wb_tmp = cpu->r[1] + (-0x00000010u);
        wr32(cpu->r[1], cpu->r[9]);
        cpu->r[1] = wb_tmp;
    }
L_001fe1b4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_001fe1b8:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001fe1bc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5]);
    }
L_001fe1c0:;
    {
        cpu->r[10] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001fe1c4:;
    {
        uint32_t wb_tmp = cpu->r[2] + (-0x00000010u);
        wr32(cpu->r[2], cpu->r[10]);
        cpu->r[2] = wb_tmp;
    }
L_001fe1c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fe134;
        }
    }
L_001fe1cc:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x48u);
    }
L_001fe1d0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001fe1d4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[11], 0x00000110u, 0, 0);
    }
L_001fe1d8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x4cu);
    }
L_001fe1dc:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_001fe1e0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[14], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_001fe1e4:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0xcu);
    }
L_001fe1e8:;
    {
        if (cond_test(cpu, 3)) {
        goto L_001fe2b4;
        }
    }
L_001fe1ec:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001fe1f0:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[2]);
    }
L_001fe1f4:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_001fe1f8:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_001fe1fc:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + + 0xcu);
    }
L_001fe200:;
    {
        vfp_vsub(cpu, 8, 10, 12);
    }
L_001fe204:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1]);
    }
L_001fe208:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_001fe20c:;
    {
        vfp_vadd(cpu, 7, 11, 13);
    }
L_001fe210:;
    {
        vfp_vmul(cpu, 15, 8, 14);
    }
L_001fe214:;
    {
        vfp_vmul(cpu, 14, 7, 14);
    }
L_001fe218:;
    {
        vfp_vnmls(cpu, 15, 7, 9);
    }
L_001fe21c:;
    {
        vfp_vmla(cpu, 14, 8, 9);
    }
L_001fe220:;
    {
        vfp_vadd(cpu, 12, 10, 12);
    }
L_001fe224:;
    {
        vfp_vsub(cpu, 13, 11, 13);
    }
L_001fe228:;
    {
        vfp_vsub(cpu, 10, 12, 14);
    }
L_001fe22c:;
    {
        vfp_vsub(cpu, 11, 15, 13);
    }
L_001fe230:;
    {
        vfp_vadd(cpu, 14, 14, 12);
    }
L_001fe234:;
    {
        vfp_vadd(cpu, 15, 15, 13);
    }
L_001fe238:;
    {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001fe23c:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001fe240:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 10);
    }
L_001fe244:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_001fe248:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[3]);
    }
L_001fe24c:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_001fe250:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[2] + + 0xcu);
    }
L_001fe254:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_001fe258:;
    {
        vfp_vsub(cpu, 8, 10, 12);
    }
L_001fe25c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0x8u);
    }
L_001fe260:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[1] + + 0xcu);
    }
L_001fe264:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000010u, 0, 0);
    }
L_001fe268:;
    {
        vfp_vadd(cpu, 7, 11, 13);
    }
L_001fe26c:;
    {
        vfp_vmul(cpu, 15, 8, 14);
    }
L_001fe270:;
    {
        vfp_vmul(cpu, 14, 7, 14);
    }
L_001fe274:;
    {
        vfp_vnmls(cpu, 15, 7, 9);
    }
L_001fe278:;
    {
        vfp_vmla(cpu, 14, 8, 9);
    }
L_001fe27c:;
    {
        vfp_vadd(cpu, 12, 10, 12);
    }
L_001fe280:;
    {
        vfp_vsub(cpu, 13, 11, 13);
    }
L_001fe284:;
    {
        vfp_vsub(cpu, 10, 12, 14);
    }
L_001fe288:;
    {
        vfp_vsub(cpu, 11, 15, 13);
    }
L_001fe28c:;
    {
        vfp_vadd(cpu, 14, 14, 12);
    }
L_001fe290:;
    {
        vfp_vadd(cpu, 15, 15, 13);
    }
L_001fe294:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001fe298:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001fe29c:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 10);
    }
L_001fe2a0:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_001fe2a4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000010u, 0, 0);
    }
L_001fe2a8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000010u, 1, 0);
    }
L_001fe2ac:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001fe2b0:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001fe1f0;
        }
    }
L_001fe2b4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001fe2b8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4cu);
    }
L_001fe2bc:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001fe2c0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_001fe2c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[5], 0, 1);
    }
L_001fe2c8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x4u);
    }
L_001fe2cc:;
    {
        if (cond_test(cpu, 3)) {
        goto L_001fe3fc;
        }
    }
L_001fe2d0:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001fe2d4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[7], 0x00000010u, 0, 0);
    }
L_001fe2d8:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x78u);
    }
L_001fe2dc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[5], 0, 0);
    }
L_001fe2e0:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 0);
    }
L_001fe2e4:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0xacu);
    }
L_001fe2e8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], cpu->r[8], 0, 0);
    }
L_001fe2ec:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x64u);
    }
L_001fe2f0:;
    {
        uint32_t v = shifter(cpu->r[4], 3, 5u, &shc); cpu->r[4] = v;
    }
L_001fe2f4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], cpu->r[9], 0, 0);
    }
L_001fe2f8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[12], shifter(cpu->r[4], 2, 4u, &shc), 0, 0);
    }
L_001fe2fc:;
    {
        goto L_001fe308;
    }
L_001fe300:;
    {
        cpu->r[14] = cpu->r[5];
    }
L_001fe304:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000010u, 0, 0);
    }
L_001fe308:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[2] + + 0x18u);
    }
L_001fe30c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x1cu);
    }
L_001fe310:;
    {
        vfp_vmul(cpu, 14, 15, 13);
    }
L_001fe314:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[2] + + 0x1cu);
    }
L_001fe318:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[3] + + 0x18u);
    }
L_001fe31c:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_001fe320:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[4], 1, 1);
    }
L_001fe324:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[14], 0x00000010u, 0, 0);
    }
L_001fe328:;
    {
        vfp_vmul(cpu, 15, 11, 15);
    }
L_001fe32c:;
    {
        vfp_vnmls(cpu, 14, 12, 11);
    }
L_001fe330:;
    {
        vfp_vnmla(cpu, 15, 12, 13);
    }
L_001fe334:;
    {
        *(uint32_t*)G(cpu->r[7]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001fe338:;
    {
        vfp_vneg(cpu, 14, 14);
    }
L_001fe33c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001fe340:;
    {
        *(uint32_t*)G(cpu->r[14]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001fe344:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001fe348:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[2] + + 0x10u);
    }
L_001fe34c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x14u);
    }
L_001fe350:;
    {
        vfp_vmul(cpu, 14, 15, 13);
    }
L_001fe354:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[2] + + 0x14u);
    }
L_001fe358:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[3] + + 0x10u);
    }
L_001fe35c:;
    {
        vfp_vmul(cpu, 15, 11, 15);
    }
L_001fe360:;
    {
        vfp_vnmls(cpu, 14, 12, 11);
    }
L_001fe364:;
    {
        vfp_vnmla(cpu, 15, 12, 13);
    }
L_001fe368:;
    {
        *(uint32_t*)G(cpu->r[7] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001fe36c:;
    {
        vfp_vneg(cpu, 14, 14);
    }
L_001fe370:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001fe374:;
    {
        *(uint32_t*)G(cpu->r[14] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001fe378:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001fe37c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_001fe380:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0xcu);
    }
L_001fe384:;
    {
        vfp_vmul(cpu, 14, 15, 13);
    }
L_001fe388:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[2] + + 0xcu);
    }
L_001fe38c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_001fe390:;
    {
        vfp_vmul(cpu, 15, 11, 15);
    }
L_001fe394:;
    {
        vfp_vnmls(cpu, 14, 12, 11);
    }
L_001fe398:;
    {
        vfp_vnmla(cpu, 15, 12, 13);
    }
L_001fe39c:;
    {
        *(uint32_t*)G(cpu->r[7] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001fe3a0:;
    {
        vfp_vneg(cpu, 14, 14);
    }
L_001fe3a4:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001fe3a8:;
    {
        *(uint32_t*)G(cpu->r[14] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001fe3ac:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001fe3b0:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_001fe3b4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_001fe3b8:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[10]);
    }
L_001fe3bc:;
    {
        vfp_vmul(cpu, 15, 11, 14);
    }
L_001fe3c0:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[3]);
    }
L_001fe3c4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000020u, 1, 0);
    }
L_001fe3c8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000020u, 1, 0);
    }
L_001fe3cc:;
    {
        vfp_vmul(cpu, 14, 14, 13);
    }
L_001fe3d0:;
    {
        vfp_vnmls(cpu, 14, 12, 11);
    }
L_001fe3d4:;
    {
        vfp_vnmla(cpu, 15, 12, 13);
    }
L_001fe3d8:;
    {
        *(uint32_t*)G(cpu->r[7] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001fe3dc:;
    {
        cpu->r[7] = cpu->r[12];
    }
L_001fe3e0:;
    {
        vfp_vneg(cpu, 14, 14);
    }
L_001fe3e4:;
    {
        cpu->r[11] = *(uint32_t*)vfp_s(cpu,14);
    }
L_001fe3e8:;
    {
        uint32_t wb_tmp = cpu->r[0] + (-0x00000010u);
        wr32(cpu->r[0], cpu->r[11]);
        cpu->r[0] = wb_tmp;
    }
L_001fe3ec:;
    {
        *(uint32_t*)G(cpu->r[14] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001fe3f0:;
    {
        cpu->r[14] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001fe3f4:;
    {
        uint32_t wb_tmp = cpu->r[1] + (-0x00000010u);
        wr32(cpu->r[1], cpu->r[14]);
        cpu->r[1] = wb_tmp;
    }
L_001fe3f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fe300;
        }
    }
L_001fe3fc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x58u);
    }
L_001fe400:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001fe404:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001fe408:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[1]);
    }
L_001fe40c:;
    {
        cpu->r[14] = 0x001fe410u; fn_00097dc8(cpu);
    }
L_001fe410:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4cu);
    }
L_001fe414:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0xb0u);
    }
L_001fe418:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x54u);
    }
L_001fe41c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x4u);
    }
L_001fe420:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_001fe424:;
    {
        wr32(cpu->r[2] + + 0x6cu, cpu->r[6]);
    }
L_001fe428:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[5]);
    }
L_001fe42c:;
    {
        goto L_001fd940;
    }
L_001fe430:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x4cu);
    }
L_001fe434:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fe438:;
    {
        cpu->r[14] = 0x001fe43cu; fn_001f8af4(cpu);
    }
L_001fe43c:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001fe440:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fe434;
        }
    }
L_001fe444:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x571u);
    }
L_001fe448:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fe44c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fe51c;
        }
    }
L_001fe450:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x34u);
    }
L_001fe454:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x38u);
    }
L_001fe458:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x8cu);
    }
L_001fe45c:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[8], 1, 0);
    }
L_001fe460:;
    {
        wr32(cpu->r[4] + + 0x434u, cpu->r[3]);
    }
L_001fe464:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[9], cpu->r[10], 1, 0);
    }
L_001fe468:;
    {
        wr32(cpu->r[4] + + 0x594u, cpu->r[3]);
    }
L_001fe46c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001fe470:;
    {
        wr32(cpu->r[4] + + 0x438u, cpu->r[3]);
    }
L_001fe474:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001fe478:;
    {
        wr8(cpu->r[4] + + 0x571u, cpu->r[3]);
    }
L_001fe47c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x57cu);
    }
L_001fe480:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x58cu);
    }
L_001fe484:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001fe488:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fe4c4;
        }
    }
L_001fe48c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x438u);
    }
L_001fe490:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fe494:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fe4b0;
        }
    }
L_001fe498:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0xbcu);
    }
L_001fe49c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x6cu);
    }
L_001fe4a0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x434u);
    }
L_001fe4a4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[11], cpu->r[12], 1, 0);
    }
L_001fe4a8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_001fe4ac:;
    {
        wr32(cpu->r[4] + + 0x434u, cpu->r[3]);
    }
L_001fe4b0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8cu);
    }
L_001fe4b4:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001fe4b8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x80u);
    }
L_001fe4bc:;
    {
        wr32(cpu->r[2], cpu->r[1]);
    }
L_001fe4c0:;
    {
        goto L_001fbe64;
    }
L_001fe4c4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x438u);
    }
L_001fe4c8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fe4cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fe4dc;
        }
    }
L_001fe4d0:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x56fu);
    }
L_001fe4d4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000004u; set_nz(cpu, v); }
    }
L_001fe4d8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fe544;
        }
    }
L_001fe4dc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x590u);
    }
L_001fe4e0:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x6cu);
    }
L_001fe4e4:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x34u);
    }
L_001fe4e8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[9], cpu->r[10], 1, 0);
    }
L_001fe4ec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_001fe4f0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001fe4f4:;
    {
        wr32(cpu->r[4] + + 0x434u, cpu->r[3]);
    }
L_001fe4f8:;
    {
        wr32(cpu->r[4] + + 0x438u, cpu->r[2]);
    }
L_001fe4fc:;
    {
        goto L_001fe498;
    }
L_001fe500:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fe504:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001fe508:;
    {
        cpu->r[14] = 0x001fe50cu; fn_001fb8c4(cpu);
    }
L_001fe50c:;
    {
        goto L_001fd384;
    }
L_001fe510:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fe514:;
    {
        cpu->r[14] = 0x001fe518u; fn_001f8c18(cpu);
    }
L_001fe518:;
    {
        goto L_001fd340;
    }
L_001fe51c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x594u);
    }
L_001fe520:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001fe524:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fe47c;
        }
    }
L_001fe528:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x90u);
    }
L_001fe52c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x6cu);
    }
L_001fe530:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[2], 0, 0);
    }
L_001fe534:;
    {
        wr32(cpu->r[12], cpu->r[11]);
    }
L_001fe538:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[11]);
    }
L_001fe53c:;
    {
        wr32(cpu->r[4] + + 0x594u, cpu->r[3]);
    }
L_001fe540:;
    {
        goto L_001fe47c;
    }
L_001fe544:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8cu);
    }
L_001fe548:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x38u);
    }
L_001fe54c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x590u);
    }
L_001fe550:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_001fe554:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x434u);
    }
L_001fe558:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_001fe55c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
    }
L_001fe560:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_001fe564:;
    {
        if (cond_test(cpu, 3)) {
        goto L_001fe4e0;
        }
    }
L_001fe568:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001fe56c:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x80u);
    }
L_001fe570:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001fe574:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
        }
    }
L_001fe578:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[5] = rd32(cpu->r[13] + + 0x80u);
        }
    }
L_001fe57c:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001fe580:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[6] = rd32(cpu->r[13] + + 0x80u);
        }
    }
L_001fe584:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x6cu);
    }
L_001fe588:;
    {
        if (cond_test(cpu, 4)) {
        wr32(cpu->r[5], cpu->r[3]);
        }
    }
L_001fe58c:;
    {
        if (cond_test(cpu, 3)) {
        wr32(cpu->r[6], cpu->r[2]);
        }
    }
L_001fe590:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001fe594:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], cpu->r[3], 0, 0);
    }
L_001fe598:;
    {
        wr32(cpu->r[7], cpu->r[3]);
    }
L_001fe59c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x434u);
    }
L_001fe5a0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_001fe5a4:;
    {
        wr32(cpu->r[4] + + 0x434u, cpu->r[3]);
    }
L_001fe5a8:;
    {
        goto L_001fbe64;
    }
L_001fe5ac:;
    {
        cpu->r[4] = cpu->r[6];
    }
L_001fe5b0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_001fe5b4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001fe5b8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_001fe5bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 1);
    }
L_001fe5c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fc928;
        }
    }
L_001fe5c4:;
    {
        goto L_001fcca0;
    }
L_001fe5c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fe5cc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001fe5d0:;
    {
        cpu->r[14] = 0x001fe5d4u; fn_001fb8c4(cpu);
    }
L_001fe5d4:;
    {
        goto L_001fcf48;
    }
L_001fe5d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fe5dc:;
    {
        cpu->r[14] = 0x001fe5e0u; fn_001f8c18(cpu);
    }
L_001fe5e0:;
    {
        goto L_001fcf04;
    }
L_001fe5e4:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001fe5e8:;
    {
        goto L_001fe5b0;
    }
L_001fe5ec:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fe5f0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001fe5f4:;
    {
        cpu->r[14] = 0x001fe5f8u; fn_001fb8c4(cpu);
    }
L_001fe5f8:;
    {
        goto L_001fcd90;
    }
L_001fe5fc:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x54u);
    }
L_001fe600:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_001fe604:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[11]);
    }
L_001fe608:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000008u, 1, 1);
    }
L_001fe60c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fc928;
        }
    }
L_001fe610:;
    {
        goto L_001fc7b8;
    }
}

/* sub_001fe614 @ 001fe614 (arm) */
void fn_001fe614(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001fe614:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001fe618:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_001fe61c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001fe620:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001fe624:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001fe628:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001fe62c:;
    {
        cpu->r[14] = 0x001fe630u; fn_001fbdf8(cpu);
    }
L_001fe630:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fe634:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fe648;
        }
    }
L_001fe638:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fe63c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001fe640:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_001fe644:;
    {
        cpu->r[14] = 0x001fe648u; fn_001f7c5c(cpu);
    }
L_001fe648:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001fe64c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001fe650u)) return;
    }
}

/* _Z21stb_vorbis_seek_startP10stb_vorbis @ 001fe650 (arm) */
void fn_001fe650(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001fe650:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001fe654:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x34u);
    }
L_001fe658:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001fe65c:;
    {
        cpu->r[14] = 0x001fe660u; fn_001f8f90(cpu);
    }
L_001fe660:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001fe664:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fe668:;
    {
        wr32(cpu->r[4] + + 0x3f0u, cpu->r[3]);
    }
L_001fe66c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001fe670:;
    {
        wr8(cpu->r[4] + + 0x571u, cpu->r[3]);
    }
L_001fe674:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001fe678:;
    {
        wr32(cpu->r[4] + + 0x574u, cpu->r[3]);
    }
L_001fe67c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_001fe680:;
    {
        return fn_001fe614(cpu);
    }
}

/* _Z22stb_vorbis_open_memoryPhiPiP16stb_vorbis_alloc @ 001fe684 (arm) */
void fn_001fe684(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001fe684:;
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
L_001fe688:;
    {
        cpu->r[4] = rd32(0x001fe690u + + 0xe0u);
    }
L_001fe68c:;
    {
        cpu->r[6] = rd32(0x001fe694u + + 0xe0u);
    }
L_001fe690:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_001fe694:;
    {
        cpu->r[4] = add_flags(cpu, 0x001fe69cu, cpu->r[4], 0, 0);
    }
L_001fe698:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000005b0u, 1, 0);
    }
L_001fe69c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000004u, 1, 0);
    }
L_001fe6a0:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fe6a4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001fe6a8:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001fe6ac:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001fe6b0:;
    {
        wr32(cpu->r[13] + + 0x5acu, cpu->r[2]);
    }
L_001fe6b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fe72c;
        }
    }
L_001fe6b8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001fe6bc:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001fe6c0:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], 0x0000000cu, 1, 0);
    }
L_001fe6c4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001fe6c8:;
    {
        cpu->r[14] = 0x001fe6ccu; fn_001f8538(cpu);
    }
L_001fe6cc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001fe6d0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], cpu->r[7], 0, 0);
    }
L_001fe6d4:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[5]);
    }
L_001fe6d8:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_001fe6dc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001fe6e0:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[7]);
    }
L_001fe6e4:;
    {
        wr8(cpu->r[13] + + 0x34u, cpu->r[3]);
    }
L_001fe6e8:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[5]);
    }
L_001fe6ec:;
    {
        cpu->r[14] = 0x001fe6f0u; fn_001f99e0(cpu);
    }
L_001fe6f0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fe6f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fe750;
        }
    }
L_001fe6f8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001fe6fc:;
    {
        cpu->r[1] = 0x000005a8u;
    }
L_001fe700:;
    {
        cpu->r[14] = 0x001fe704u; fn_001f862c(cpu);
    }
L_001fe704:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fe708:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fe750;
        }
    }
L_001fe70c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001fe710:;
    {
        cpu->r[2] = 0x000005a8u;
    }
L_001fe714:;
    {
        cpu->r[14] = 0x001fe718u; imp_memcpy(cpu); /* memcpy */
    }
L_001fe718:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001fe71c:;
    {
        cpu->r[14] = 0x001fe720u; fn_001fe614(cpu);
    }
L_001fe720:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001fe724:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[5] + + 0x74u);
        }
    }
L_001fe728:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[8], cpu->r[3]);
        }
    }
L_001fe72c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001fe730:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001fe734:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x5acu);
    }
L_001fe738:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001fe73c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001fe740:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fe76c;
        }
    }
L_001fe744:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000001b4u, 0, 0);
    }
L_001fe748:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000400u, 0, 0);
    }
L_001fe74c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001fe750u)) return;
    }
L_001fe750:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001fe754:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001fe758:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001fe75c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[13] + + 0x78u);
        }
    }
L_001fe760:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[8], cpu->r[3]);
        }
    }
L_001fe764:;
    {
        cpu->r[14] = 0x001fe768u; fn_001fb624(cpu);
    }
L_001fe768:;
    {
        goto L_001fe72c;
    }
L_001fe76c:;
    {
        cpu->r[14] = 0x001fe770u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001fe770:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] & shifter(cpu->r[12], 4, (cpu->r[13] & 0xffu), &shc); cpu->r[11] = v;
        }
    }
L_001fe774:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
}

/* _Z28stb_vorbis_open_file_sectionPN3vox21StreamCursorInterfaceEiPiP16stb_vorbis_allocj @ 001fe778 (arm) */
void fn_001fe778(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001fe778:;
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
L_001fe77c:;
    {
        cpu->r[4] = rd32(0x001fe784u + + 0xd0u);
    }
L_001fe780:;
    {
        cpu->r[6] = rd32(0x001fe788u + + 0xd0u);
    }
L_001fe784:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001fe788:;
    {
        cpu->r[4] = add_flags(cpu, 0x001fe790u, cpu->r[4], 0, 0);
    }
L_001fe78c:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001fe790:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000005b0u, 1, 0);
    }
L_001fe794:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001fe798:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001fe79c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000004u, 1, 0);
    }
L_001fe7a0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001fe7a4:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_001fe7a8:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x0000000cu, 1, 0);
    }
L_001fe7ac:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001fe7b0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001fe7b4:;
    {
        wr32(cpu->r[13] + + 0x5acu, cpu->r[3]);
    }
L_001fe7b8:;
    {
        cpu->r[14] = 0x001fe7bcu; fn_001f8538(cpu);
    }
L_001fe7bc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001fe7c0:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[7]);
    }
L_001fe7c4:;
    {
        cpu->r[14] = 0x001fe7c8u; fn_001d9a94(cpu);
    }
L_001fe7c8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x5d0u);
    }
L_001fe7cc:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[8]);
    }
L_001fe7d0:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[3]);
    }
L_001fe7d4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_001fe7d8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001fe7dc:;
    {
        cpu->r[14] = 0x001fe7e0u; fn_001f99e0(cpu);
    }
L_001fe7e0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fe7e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fe834;
        }
    }
L_001fe7e8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001fe7ec:;
    {
        cpu->r[1] = 0x000005a8u;
    }
L_001fe7f0:;
    {
        cpu->r[14] = 0x001fe7f4u; fn_001f862c(cpu);
    }
L_001fe7f4:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fe7f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fe834;
        }
    }
L_001fe7fc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001fe800:;
    {
        cpu->r[2] = 0x000005a8u;
    }
L_001fe804:;
    {
        cpu->r[14] = 0x001fe808u; imp_memcpy(cpu); /* memcpy */
    }
L_001fe808:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001fe80c:;
    {
        cpu->r[14] = 0x001fe810u; fn_001fe614(cpu);
    }
L_001fe810:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001fe814:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001fe818:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x5acu);
    }
L_001fe81c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001fe820:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001fe824:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fe850;
        }
    }
L_001fe828:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000001b4u, 0, 0);
    }
L_001fe82c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000400u, 0, 0);
    }
L_001fe830:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001fe834u)) return;
    }
L_001fe834:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001fe838:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001fe83c:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001fe840:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[13] + + 0x78u);
        }
    }
L_001fe844:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[10], cpu->r[3]);
        }
    }
L_001fe848:;
    {
        cpu->r[14] = 0x001fe84cu; fn_001fb624(cpu);
    }
L_001fe84c:;
    {
        goto L_001fe810;
    }
L_001fe850:;
    {
        cpu->r[14] = 0x001fe854u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001fe854:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] & shifter(cpu->r[8], 2, 25u, &shc); cpu->r[11] = v;
        }
    }
L_001fe858:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
}

/* _Z20stb_vorbis_open_filePN3vox21StreamCursorInterfaceEiPiP16stb_vorbis_alloc @ 001fe85c (arm) */
void fn_001fe85c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001fe85c:;
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
L_001fe860:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001fe864:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001fe868:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_001fe86c:;
    {
        cpu->r[10] = cpu->r[1];
    }
L_001fe870:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_001fe874:;
    {
        cpu->r[14] = 0x001fe878u; fn_001d9a94(cpu);
    }
L_001fe878:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001fe87c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001fe880:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001fe884:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fe888:;
    {
        cpu->r[14] = 0x001fe88cu; fn_001d9ab4(cpu);
    }
L_001fe88c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fe890:;
    {
        cpu->r[14] = 0x001fe894u; fn_001d9a94(cpu);
    }
L_001fe894:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001fe898:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001fe89c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001fe8a0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fe8a4:;
    {
        cpu->r[14] = 0x001fe8a8u; fn_001d9ab4(cpu);
    }
L_001fe8a8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fe8ac:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001fe8b0:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001fe8b4:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_001fe8b8:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 0);
    }
L_001fe8bc:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_001fe8c0:;
    {
        cpu->r[14] = 0x001fe8c4u; fn_001fe778(cpu);
    }
L_001fe8c4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001fe8c8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001fe8ccu)) return;
    }
}

/* _Z26stb_vorbis_get_frame_floatP10stb_vorbisPiPPPf @ 001fe8cc (arm) */
void fn_001fe8cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001fe8cc:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001fe8d0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_001fe8d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001fe8d8:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001fe8dc:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001fe8e0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001fe8e4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001fe8e8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001fe8ec:;
    {
        cpu->r[14] = 0x001fe8f0u; fn_001fbdf8(cpu);
    }
L_001fe8f0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fe8f4:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x5a0u, cpu->r[3]);
        }
    }
L_001fe8f8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_001fe8fc:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x5a4u, cpu->r[3]);
        }
    }
L_001fe900:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fe90c;
        }
    }
L_001fe904:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001fe908:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001fe90cu)) return;
    }
L_001fe90c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fe910:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001fe914:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_001fe918:;
    {
        cpu->r[14] = 0x001fe91cu; fn_001f7c5c(cpu);
    }
L_001fe91c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_001fe920:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001fe924:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[8] = rd32(cpu->r[13] + + 0x4u);
        }
    }
L_001fe928:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_001fe92c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fe95c;
        }
    }
L_001fe930:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x4u);
    }
L_001fe934:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_001fe938:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001fe93c:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 2u, &shc); cpu->r[7] = v;
    }
L_001fe940:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001fe944:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x330u);
    }
L_001fe948:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_001fe94c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[7], 0, 0);
    }
L_001fe950:;
    {
        wr32(cpu->r[3] + + 0x370u, cpu->r[1]);
    }
L_001fe954:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001fe958:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001fe940;
        }
    }
L_001fe95c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001fe960:;
    {
        wr32(cpu->r[4] + + 0x5a0u, cpu->r[8]);
    }
L_001fe964:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], cpu->r[0], 0, 0);
    }
L_001fe968:;
    {
        wr32(cpu->r[4] + + 0x5a4u, cpu->r[3]);
    }
L_001fe96c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
        }
    }
L_001fe970:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[6], cpu->r[12]);
        }
    }
L_001fe974:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001fe978:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000370u, 0, 0);
        }
    }
L_001fe97c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[5], cpu->r[4]);
        }
    }
L_001fe980:;
    {
        goto L_001fe904;
    }
}

/* _Z28stb_vorbis_get_samples_floatP10stb_vorbisiPPfi @ 001fe984 (arm) */
void fn_001fe984(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001fe984:;
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
L_001fe988:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x4u);
    }
L_001fe98c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_001fe990:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001fe994:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 1);
    }
L_001fe998:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[5] = cpu->r[1];
        }
    }
L_001fe99c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[5] = cpu->r[5];
        }
    }
L_001fe9a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fe9a4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_001fe9a8:;
    {
        cpu->r[11] = cpu->r[1];
    }
L_001fe9ac:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001fe9b0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_001fe9b4:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
        }
    }
L_001fe9b8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001feae0;
        }
    }
L_001fe9bc:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_001fe9c0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x00000330u, 0, 0);
    }
L_001fe9c4:;
    {
        cpu->r[10] = cpu->r[9];
    }
L_001fe9c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_001fe9cc:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_001fe9d0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001fe9d4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x5a0u);
    }
L_001fe9d8:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x5a4u);
    }
L_001fe9dc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_001fe9e0:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[1], 1, 0);
    }
L_001fe9e4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[10], cpu->r[9], 0, 0);
    }
L_001fe9e8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_001fe9ec:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001fe9f0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[9] = sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 0);
        }
    }
L_001fe9f4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = add_flags(cpu, cpu->r[9], cpu->r[10], 0, 0);
        }
    }
L_001fe9f8:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
        }
    }
L_001fe9fc:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001fea00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fea9c;
        }
    }
L_001fea04:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001fea08:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_001fea0c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fea60;
        }
    }
L_001fea10:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 2u, &shc); cpu->r[8] = v;
    }
L_001fea14:;
    {
        uint32_t v = shifter(cpu->r[9], 2, 2u, &shc); cpu->r[7] = v;
    }
L_001fea18:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[10]);
    }
L_001fea1c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001fea20:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[9]);
    }
L_001fea24:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x10u);
    }
L_001fea28:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001fea2c:;
    {
        goto L_001fea34;
    }
L_001fea30:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x5a0u);
    }
L_001fea34:;
    {
        cpu->r[0] = rd32(cpu->r[10] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_001fea38:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[9], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_001fea3c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001fea40:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001fea44:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[8], 0, 0);
    }
L_001fea48:;
    {
        cpu->r[14] = 0x001fea4cu; imp_memcpy(cpu); /* memcpy */
    }
L_001fea4c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 1);
    }
L_001fea50:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fea30;
        }
    }
L_001fea54:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x14u);
    }
L_001fea58:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_001fea5c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x18u);
    }
L_001fea60:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[11], 1, 1);
    }
L_001fea64:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001fea98;
        }
    }
L_001fea68:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_001fea6c:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 2u, &shc); cpu->r[8] = v;
    }
L_001fea70:;
    {
        uint32_t v = shifter(cpu->r[9], 2, 2u, &shc); cpu->r[10] = v;
    }
L_001fea74:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[3], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_001fea78:;
    {
        uint32_t wb_tmp = cpu->r[7] + 0x00000004u;
        cpu->r[0] = rd32(cpu->r[7]);
        cpu->r[7] = wb_tmp;
    }
L_001fea7c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001fea80:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001fea84:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001fea88:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[8], 0, 0);
    }
L_001fea8c:;
    {
        cpu->r[14] = 0x001fea90u; imp_memset(cpu); /* memset */
    }
L_001fea90:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[11], 1, 1);
    }
L_001fea94:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fea78;
        }
    }
L_001fea98:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x5a0u);
    }
L_001fea9c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_001feaa0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[1], cpu->r[9], 0, 0);
    }
L_001feaa4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001feaa8:;
    {
        wr32(cpu->r[4] + + 0x5a0u, cpu->r[9]);
    }
L_001feaac:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001feab0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001feae0;
        }
    }
L_001feab4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001feab8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001feabc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001feac0:;
    {
        cpu->r[14] = 0x001feac4u; fn_001fe8cc(cpu);
    }
L_001feac4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001feac8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001feae0;
        }
    }
L_001feacc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_001fead0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001fead4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001fead8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[10] = cpu->r[3];
        }
    }
L_001feadc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001fe9d4;
        }
    }
L_001feae0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_001feae4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_001feae8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001feaecu)) return;
    }
}

/* _Z40stb_vorbis_get_samples_float_interleavedP10stb_vorbisiPfi @ 001feaec (arm) */
void fn_001feaec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001feaec:;
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
L_001feaf0:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_001feaf4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001feaf8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_001feafc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001feb00:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001feb04:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001feb08:;
    {
        cpu->r[14] = 0x001feb0cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001feb0c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x4u);
    }
L_001feb10:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[8], 1, 1);
    }
L_001feb14:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[8] = cpu->r[7];
        }
    }
L_001feb18:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[8] = cpu->r[8];
        }
    }
L_001feb1c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001feb20:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_001feb24:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[11] = 0x00000000u;
        }
    }
L_001feb28:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fec40;
        }
    }
L_001feb2c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001feb30:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 2u, &shc); cpu->r[6] = v;
    }
L_001feb34:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001feb38:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x001feb40u + + 0x110u);
    }
L_001feb3c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x5a0u);
    }
L_001feb40:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x5a4u);
    }
L_001feb44:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001feb48:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[1], 1, 0);
    }
L_001feb4c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_001feb50:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[3], cpu->r[9], 0, 0);
    }
L_001feb54:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[11], 1, 1);
    }
L_001feb58:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[9] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
        }
    }
L_001feb5c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[11] = add_flags(cpu, cpu->r[9], cpu->r[3], 0, 0);
        }
    }
L_001feb60:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001feb64:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fec00;
        }
    }
L_001feb68:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_001feb6c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001feb70:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001feb74:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001feb78:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_001feb7c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = cpu->r[4];
        }
    }
L_001feb80:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001feb84:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001febb4;
        }
    }
L_001feb88:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x330u);
    }
L_001feb8c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_001feb90:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[0], 0, 0);
    }
L_001feb94:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_001feb98:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001feb9c:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[1]);
    }
L_001feba0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001feba4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_001feba8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001feb88;
        }
    }
L_001febac:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[6], 0, 0);
    }
L_001febb0:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001febb4:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[1], 1, 1);
    }
L_001febb8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001febf0;
        }
    }
L_001febbc:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001febc0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001febc4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001febc8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001febcc:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,16);
    }
L_001febd0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 1);
    }
L_001febd4:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[1]);
    }
L_001febd8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001febdc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001febc8;
        }
    }
L_001febe0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_001febe4:;
    {
        cpu->r[1] = (~cpu->r[1]);
    }
L_001febe8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[10], cpu->r[1], 0, 0);
    }
L_001febec:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_001febf0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_001febf4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_001febf8:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[9], 1, 1);
    }
L_001febfc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001feb74;
        }
    }
L_001fec00:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001fec04:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_001fec08:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[11], 1, 1);
    }
L_001fec0c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[3], 0, 0);
    }
L_001fec10:;
    {
        wr32(cpu->r[4] + + 0x5a0u, cpu->r[9]);
    }
L_001fec14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fec40;
        }
    }
L_001fec18:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fec1c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001fec20:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001fec24:;
    {
        cpu->r[14] = 0x001fec28u; fn_001fe8cc(cpu);
    }
L_001fec28:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fec2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fec40;
        }
    }
L_001fec30:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001fec34:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[11], 1, 1);
    }
L_001fec38:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = cpu->r[11];
        }
    }
L_001fec3c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001feb3c;
        }
    }
L_001fec40:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001fec44:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001fec48:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001fec4c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001fec50u)) return;
    }
}

/* _Z28stb_vorbis_get_samples_shortP10stb_vorbisiPPsi @ 001fec54 (arm) */
void fn_001fec54(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001fec54:;
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
L_001fec58:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fec5c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_001fec60:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001fec64:;
    {
        cpu->r[9] = cpu->r[1];
    }
L_001fec68:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_001fec6c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[4] = 0x00000000u;
        }
    }
L_001fec70:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fed18;
        }
    }
L_001fec74:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[0], 0x00000330u, 0, 0);
    }
L_001fec78:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001fec7c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001fec80:;
    {
        goto L_001fecb8;
    }
L_001fec84:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[4], 1, 1);
    }
L_001fec88:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[12], cpu->r[5], 0, 0);
    }
L_001fec8c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fec90:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001fec94:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001fec98:;
    {
        wr32(cpu->r[6] + + 0x5a0u, cpu->r[5]);
    }
L_001fec9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fed18;
        }
    }
L_001feca0:;
    {
        cpu->r[14] = 0x001feca4u; fn_001fe8cc(cpu);
    }
L_001feca4:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001feca8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fecac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fed18;
        }
    }
L_001fecb0:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[4], 1, 1);
    }
L_001fecb4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fed18;
        }
    }
L_001fecb8:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x5a0u);
    }
L_001fecbc:;
    {
        cpu->r[5] = rd32(cpu->r[6] + + 0x5a4u);
    }
L_001fecc0:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[12], 1, 0);
    }
L_001fecc4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[2], cpu->r[5], 0, 0);
    }
L_001fecc8:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[4], 1, 1);
    }
L_001feccc:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[5] = sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 0);
        }
    }
L_001fecd0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[4] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
        }
    }
L_001fecd4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001fecd8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fec84;
        }
    }
L_001fecdc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_001fece0:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001fece4:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001fece8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001fecec:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[5]);
    }
L_001fecf0:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_001fecf4:;
    {
        cpu->r[14] = 0x001fecf8u; fn_001f7e64(cpu);
    }
L_001fecf8:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x5a0u);
    }
L_001fecfc:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[4], 1, 1);
    }
L_001fed00:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fed04:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001fed08:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[12], cpu->r[5], 0, 0);
    }
L_001fed0c:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001fed10:;
    {
        wr32(cpu->r[6] + + 0x5a0u, cpu->r[5]);
    }
L_001fed14:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001feca0;
        }
    }
L_001fed18:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fed1c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001fed20:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001fed24u)) return;
    }
}

/* _Z40stb_vorbis_get_samples_short_interleavedP10stb_vorbisiPsi @ 001fed24 (arm) */
void fn_001fed24(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001fed24:;
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
L_001fed28:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001fed2c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_001fed30:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001fed34:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_001fed38:;
    {
        cpu->r[10] = cpu->r[1];
    }
L_001fed3c:;
    {
        cpu->r[14] = 0x001fed40u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001fed40:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fed44:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[5] = 0x00000000u;
        }
    }
L_001fed48:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fedf8;
        }
    }
L_001fed4c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[6], 0x00000330u, 0, 0);
    }
L_001fed50:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001fed54:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001fed58:;
    {
        goto L_001fed94;
    }
L_001fed5c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[5], 1, 1);
    }
L_001fed60:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[4], 0, 0);
    }
L_001fed64:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fed68:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001fed6c:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_001fed70:;
    {
        wr32(cpu->r[6] + + 0x5a0u, cpu->r[12]);
    }
L_001fed74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fedf8;
        }
    }
L_001fed78:;
    {
        cpu->r[14] = 0x001fed7cu; fn_001fe8cc(cpu);
    }
L_001fed7c:;
    {
        uint32_t v = cpu->r[10] * cpu->r[4]; cpu->r[4] = v;
    }
L_001fed80:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
    }
L_001fed84:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fed88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fedf8;
        }
    }
L_001fed8c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[5], 1, 1);
    }
L_001fed90:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001fedf8;
        }
    }
L_001fed94:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x5a0u);
    }
L_001fed98:;
    {
        cpu->r[4] = rd32(cpu->r[6] + + 0x5a4u);
    }
L_001fed9c:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], cpu->r[12], 1, 0);
    }
L_001feda0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], cpu->r[4], 0, 0);
    }
L_001feda4:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_001feda8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[4] = sub_flags(cpu, cpu->r[7], cpu->r[5], 1, 0);
        }
    }
L_001fedac:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[5] = cpu->r[3];
        }
    }
L_001fedb0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[4], 0, 0);
        }
    }
L_001fedb4:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001fedb8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fed5c;
        }
    }
L_001fedbc:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x4u);
    }
L_001fedc0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001fedc4:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001fedc8:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_001fedcc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001fedd0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_001fedd4:;
    {
        cpu->r[14] = 0x001fedd8u; fn_001f8198(cpu);
    }
L_001fedd8:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x5a0u);
    }
L_001feddc:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[5], 1, 1);
    }
L_001fede0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fede4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001fede8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[4], 0, 0);
    }
L_001fedec:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_001fedf0:;
    {
        wr32(cpu->r[6] + + 0x5a0u, cpu->r[12]);
    }
L_001fedf4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fed78;
        }
    }
L_001fedf8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001fedfc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001fee00:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001fee04u)) return;
    }
}

/* _Z26stb_vorbis_get_frame_shortP10stb_vorbisiPPsi @ 001fee04 (arm) */
void fn_001fee04(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001fee04:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_001fee08:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_001fee0c:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001fee10:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001fee14:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001fee18:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001fee1c:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_001fee20:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001fee24:;
    {
        cpu->r[14] = 0x001fee28u; fn_001fe8cc(cpu);
    }
L_001fee28:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_001fee2c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = cpu->r[0];
        }
    }
L_001fee30:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[4] = cpu->r[4];
        }
    }
L_001fee34:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001fee38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fee64;
        }
    }
L_001fee3c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001fee40:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x4u);
    }
L_001fee44:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001fee48:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001fee4c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_001fee50:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001fee54:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001fee58:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[4]);
    }
L_001fee5c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001fee60:;
    {
        cpu->r[14] = 0x001fee64u; fn_001f7e64(cpu);
    }
L_001fee64:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fee68:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001fee6c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001fee70u)) return;
    }
}

/* _Z38stb_vorbis_get_frame_short_interleavedP10stb_vorbisiPsi @ 001fee70 (arm) */
void fn_001fee70(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001fee70:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_001fee74:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_001fee78:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_001fee7c:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001fee80:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001fee84:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_001fee88:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_001fee8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001feeec;
        }
    }
L_001fee90:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001fee94:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001fee98:;
    {
        cpu->r[14] = 0x001fee9cu; fn_001fe8cc(cpu);
    }
L_001fee9c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001feea0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001feee0;
        }
    }
L_001feea4:;
    {
        uint32_t v = cpu->r[4] * cpu->r[5]; cpu->r[3] = v;
    }
L_001feea8:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_001feeac:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001feec0;
        }
    }
L_001feeb0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001feeb4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001feeb8:;
    {
        cpu->r[14] = 0x001feebcu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001feebc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001feec0:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x4u);
    }
L_001feec4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001feec8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001feecc:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_001feed0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001feed4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_001feed8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_001feedc:;
    {
        cpu->r[14] = 0x001feee0u; fn_001f8198(cpu);
    }
L_001feee0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001feee4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001feee8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001feeecu)) return;
    }
L_001feeec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001feef0:;
    {
        cpu->r[14] = 0x001feef4u; fn_001fee04(cpu);
    }
L_001feef4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001feef8:;
    {
        goto L_001feee0;
    }
}

/* _Z24stb_vorbis_decode_memoryPhiPiS0_PPs @ 001feefc (arm) */
void fn_001feefc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001feefc:;
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
L_001fef00:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_001fef04:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001fef08:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_001fef0c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001fef10:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001fef14:;
    {
        cpu->r[14] = 0x001fef18u; fn_001fe684(cpu);
    }
L_001fef18:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fef1c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = (~0x00000000u);
        }
    }
L_001fef20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ff02c;
        }
    }
L_001fef24:;
    {
        cpu->r[11] = rd32(cpu->r[7] + + 0x4u);
    }
L_001fef28:;
    {
        cpu->r[3] = 0x000013d9u;
    }
L_001fef2c:;
    {
        cpu->r[2] = rd32(0x001fef34u + + 0x114u);
    }
L_001fef30:;
    {
        cpu->r[1] = rd32(0x001fef38u + + 0x114u);
    }
L_001fef34:;
    {
        wr32(cpu->r[5], cpu->r[11]);
    }
L_001fef38:;
    {
        cpu->r[2] = add_flags(cpu, 0x001fef40u, cpu->r[2], 0, 0);
    }
L_001fef3c:;
    {
        cpu->r[12] = rd32(cpu->r[7]);
    }
L_001fef40:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x000004a0u, 0, 0);
    }
L_001fef44:;
    {
        uint32_t v = shifter(cpu->r[11], 2, 13u, &shc); cpu->r[0] = v;
    }
L_001fef48:;
    {
        cpu->r[1] = add_flags(cpu, 0x001fef50u, cpu->r[1], 0, 0);
    }
L_001fef4c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001fef50:;
    {
        uint32_t v = shifter(cpu->r[11], 2, 12u, &shc); cpu->r[11] = v;
    }
L_001fef54:;
    {
        wr32(cpu->r[4], cpu->r[12]);
    }
L_001fef58:;
    {
        cpu->r[14] = 0x001fef5cu; fn_00097dd8(cpu);
    }
L_001fef5c:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fef60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ff038;
        }
    }
L_001fef64:;
    {
        cpu->r[3] = rd32(0x001fef6cu + + 0xe4u);
    }
L_001fef68:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001fef6c:;
    {
        cpu->r[5] = cpu->r[11];
    }
L_001fef70:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x4u);
    }
L_001fef74:;
    {
        cpu->r[3] = add_flags(cpu, 0x001fef7cu, cpu->r[3], 0, 0);
    }
L_001fef78:;
    {
        cpu->r[10] = cpu->r[4];
    }
L_001fef7c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000004a0u, 0, 0);
    }
L_001fef80:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_001fef84:;
    {
        cpu->r[3] = rd32(0x001fef8cu + + 0xc8u);
    }
L_001fef88:;
    {
        cpu->r[3] = add_flags(cpu, 0x001fef90u, cpu->r[3], 0, 0);
    }
L_001fef8c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001fef90:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_001fef94:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_001fef98:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_001fef9c:;
    {
        goto L_001fefa8;
    }
L_001fefa0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[6], 0, 0);
    }
L_001fefa4:;
    {
        cpu->r[5] = cpu->r[8];
    }
L_001fefa8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 0);
    }
L_001fefac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[9], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
    }
L_001fefb0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001fefb4:;
    {
        cpu->r[8] = cpu->r[5];
    }
L_001fefb8:;
    {
        cpu->r[14] = 0x001fefbcu; fn_001fee70(cpu);
    }
L_001fefbc:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fefc0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ff01c;
        }
    }
L_001fefc4:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x4u);
    }
L_001fefc8:;
    {
        uint32_t v = cpu->r[1] * cpu->r[6] + cpu->r[4]; cpu->r[4] = v;
    }
L_001fefcc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], cpu->r[11], 0, 0);
    }
L_001fefd0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_001fefd4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001fefa0;
        }
    }
L_001fefd8:;
    {
        cpu->r[3] = 0x000013e8u;
    }
L_001fefdc:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001fefe0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_001fefe4:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[8] = v;
    }
L_001fefe8:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_001fefec:;
    {
        cpu->r[14] = 0x001feff0u; fn_00097dd8(cpu);
    }
L_001feff0:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001feff4:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001feff8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001feffc:;
    {
        cpu->r[14] = 0x001ff000u; imp_memcpy(cpu); /* memcpy */
    }
L_001ff000:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001ff004:;
    {
        cpu->r[9] = cpu->r[5];
    }
L_001ff008:;
    {
        cpu->r[14] = 0x001ff00cu; fn_00097dc8(cpu);
    }
L_001ff00c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001ff010:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ff038;
        }
    }
L_001ff014:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x4u);
    }
L_001ff018:;
    {
        goto L_001fefa0;
    }
L_001ff01c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x38u);
    }
L_001ff020:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001ff024:;
    {
        wr32(cpu->r[3], cpu->r[9]);
    }
L_001ff028:;
    {
        cpu->r[14] = 0x001ff02cu; fn_001fb8a4(cpu);
    }
L_001ff02c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001ff030:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001ff034:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ff038u)) return;
    }
L_001ff038:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001ff03c:;
    {
        cpu->r[10] = (~0x00000001u);
    }
L_001ff040:;
    {
        cpu->r[14] = 0x001ff044u; fn_001fb8a4(cpu);
    }
L_001ff044:;
    {
        goto L_001ff02c;
    }
}

/* _Z26stb_vorbis_decode_filenamePcPiPPs @ 001ff058 (arm) */
void fn_001ff058(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ff058:;
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
L_001ff05c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_001ff060:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001ff064:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001ff068:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_001ff06c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001ff070:;
    {
        cpu->r[14] = 0x001ff074u; fn_001f7e50(cpu);
    }
L_001ff074:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ff078:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = (~0x00000000u);
        }
    }
L_001ff07c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ff180;
        }
    }
L_001ff080:;
    {
        cpu->r[2] = rd32(0x001ff088u + + 0x114u);
    }
L_001ff084:;
    {
        cpu->r[3] = 0x000013afu;
    }
L_001ff088:;
    {
        cpu->r[11] = rd32(cpu->r[8] + + 0x4u);
    }
L_001ff08c:;
    {
        cpu->r[2] = add_flags(cpu, 0x001ff094u, cpu->r[2], 0, 0);
    }
L_001ff090:;
    {
        cpu->r[1] = rd32(0x001ff098u + + 0x108u);
    }
L_001ff094:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x000004c0u, 0, 0);
    }
L_001ff098:;
    {
        wr32(cpu->r[4], cpu->r[11]);
    }
L_001ff09c:;
    {
        uint32_t v = shifter(cpu->r[11], 2, 13u, &shc); cpu->r[0] = v;
    }
L_001ff0a0:;
    {
        cpu->r[1] = add_flags(cpu, 0x001ff0a8u, cpu->r[1], 0, 0);
    }
L_001ff0a4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_001ff0a8:;
    {
        cpu->r[14] = 0x001ff0acu; fn_00097dd8(cpu);
    }
L_001ff0ac:;
    {
        uint32_t v = shifter(cpu->r[11], 2, 12u, &shc); cpu->r[11] = v;
    }
L_001ff0b0:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ff0b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ff18c;
        }
    }
L_001ff0b8:;
    {
        cpu->r[3] = rd32(0x001ff0c0u + + 0xe4u);
    }
L_001ff0bc:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001ff0c0:;
    {
        cpu->r[5] = cpu->r[11];
    }
L_001ff0c4:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x4u);
    }
L_001ff0c8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001ff0d0u, cpu->r[3], 0, 0);
    }
L_001ff0cc:;
    {
        cpu->r[10] = cpu->r[4];
    }
L_001ff0d0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000004c0u, 0, 0);
    }
L_001ff0d4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001ff0d8:;
    {
        cpu->r[3] = rd32(0x001ff0e0u + + 0xc8u);
    }
L_001ff0dc:;
    {
        cpu->r[3] = add_flags(cpu, 0x001ff0e4u, cpu->r[3], 0, 0);
    }
L_001ff0e0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_001ff0e4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001ff0e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001ff0ec:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001ff0f0:;
    {
        goto L_001ff0fc;
    }
L_001ff0f4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[6], 0, 0);
    }
L_001ff0f8:;
    {
        cpu->r[5] = cpu->r[7];
    }
L_001ff0fc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 0);
    }
L_001ff100:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[9], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
    }
L_001ff104:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ff108:;
    {
        cpu->r[7] = cpu->r[5];
    }
L_001ff10c:;
    {
        cpu->r[14] = 0x001ff110u; fn_001fee70(cpu);
    }
L_001ff110:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ff114:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ff170;
        }
    }
L_001ff118:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x4u);
    }
L_001ff11c:;
    {
        uint32_t v = cpu->r[1] * cpu->r[6] + cpu->r[4]; cpu->r[4] = v;
    }
L_001ff120:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], cpu->r[11], 0, 0);
    }
L_001ff124:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_001ff128:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001ff0f4;
        }
    }
L_001ff12c:;
    {
        cpu->r[3] = 0x000013beu;
    }
L_001ff130:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001ff134:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_001ff138:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[7] = v;
    }
L_001ff13c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_001ff140:;
    {
        cpu->r[14] = 0x001ff144u; fn_00097dd8(cpu);
    }
L_001ff144:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001ff148:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001ff14c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001ff150:;
    {
        cpu->r[14] = 0x001ff154u; imp_memcpy(cpu); /* memcpy */
    }
L_001ff154:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001ff158:;
    {
        cpu->r[9] = cpu->r[5];
    }
L_001ff15c:;
    {
        cpu->r[14] = 0x001ff160u; fn_00097dc8(cpu);
    }
L_001ff160:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001ff164:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ff18c;
        }
    }
L_001ff168:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x4u);
    }
L_001ff16c:;
    {
        goto L_001ff0f4;
    }
L_001ff170:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001ff174:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ff178:;
    {
        wr32(cpu->r[3], cpu->r[9]);
    }
L_001ff17c:;
    {
        cpu->r[14] = 0x001ff180u; fn_001fb8a4(cpu);
    }
L_001ff180:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001ff184:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001ff188:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ff18cu)) return;
    }
L_001ff18c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ff190:;
    {
        cpu->r[10] = (~0x00000001u);
    }
L_001ff194:;
    {
        cpu->r[14] = 0x001ff198u; fn_001fb8a4(cpu);
    }
L_001ff198:;
    {
        goto L_001ff180;
    }
}

/* sub_001ff1ac @ 001ff1ac (arm) */
void fn_001ff1ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ff1ac:;
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
L_001ff1b0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_001ff1b4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ff1b8:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001ff1bc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_001ff1c0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_001ff1c4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_001ff1c8:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_001ff1cc:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_001ff1d0:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001ff1d4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_001ff1d8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001ff1dc:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_001ff1e0:;
    {
        cpu->r[14] = 0x001ff1e4u; fn_001f8f90(cpu);
    }
L_001ff1e4:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001ff1e8:;
    {
        wr32(cpu->r[4] + + 0x574u, cpu->r[3]);
    }
L_001ff1ec:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_001ff1f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ff1f4:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001ff1f8:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001ff1fc:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_001ff200:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[11]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_001ff204:;
    {
        cpu->r[14] = 0x001ff208u; fn_001f8d28(cpu);
    }
L_001ff208:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ff20c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ff270;
        }
    }
L_001ff210:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001ff214:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
        }
    }
L_001ff218:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
        }
    }
L_001ff21c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
        }
    }
L_001ff220:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_001ff224:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
        }
    }
L_001ff228:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_001ff22c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_001ff230:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 0);
    }
L_001ff234:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_001ff238:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001ff284;
        }
    }
L_001ff23c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ff240:;
    {
        cpu->r[14] = 0x001ff244u; fn_001f8af4(cpu);
    }
L_001ff244:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001ff248:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ff23c;
        }
    }
L_001ff24c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x70u);
    }
L_001ff250:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ff254:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ff270;
        }
    }
L_001ff258:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_001ff25c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001ff260:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001ff264:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_001ff268:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_001ff26c:;
    {
        goto L_001ff1ec;
    }
L_001ff270:;
    {
        cpu->r[3] = 0x00000025u;
    }
L_001ff274:;
    {
        wr32(cpu->r[4] + + 0x74u, cpu->r[3]);
    }
L_001ff278:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001ff27c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_001ff280:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ff284u)) return;
    }
L_001ff284:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001ff288:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ff28c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x28u);
    }
L_001ff290:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_001ff294:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 0);
    }
L_001ff298:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], cpu->r[8], 0, 0);
    }
L_001ff29c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_001ff2a0:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
        }
    }
L_001ff2a4:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[8] = (~0x00000000u);
        }
    }
L_001ff2a8:;
    {
        cpu->r[14] = 0x001ff2acu; fn_001f8f90(cpu);
    }
L_001ff2ac:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001ff2b0:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001ff2b4:;
    {
        wr32(cpu->r[4] + + 0x574u, cpu->r[3]);
    }
L_001ff2b8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001ff2e4;
        }
    }
L_001ff2bc:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_001ff2c0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ff2c4:;
    {
        cpu->r[14] = 0x001ff2c8u; fn_001f8c80(cpu);
    }
L_001ff2c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ff2cc:;
    {
        cpu->r[14] = 0x001ff2d0u; fn_001f8af4(cpu);
    }
L_001ff2d0:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001ff2d4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ff2c8;
        }
    }
L_001ff2d8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_001ff2dc:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[6], 1, 1);
    }
L_001ff2e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ff2c0;
        }
    }
L_001ff2e4:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001ff2e8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001ff384;
        }
    }
L_001ff2ec:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x4u);
    }
L_001ff2f0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x80u);
    }
L_001ff2f4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001ff2f8:;
    {
        wr32(cpu->r[4] + + 0x594u, cpu->r[8]);
    }
L_001ff2fc:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 1u, &shc); cpu->r[2] = v;
    }
L_001ff300:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001ff344;
        }
    }
L_001ff304:;
    {
        cpu->r[12] = cpu->r[4];
    }
L_001ff308:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001ff30c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001ff314u + + 0x84u);
    }
L_001ff310:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001ff314:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001ff334;
        }
    }
L_001ff318:;
    {
        cpu->r[1] = rd32(cpu->r[12] + + 0x3b0u);
    }
L_001ff31c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001ff320:;
    {
        cpu->r[10] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001ff324:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[10]);
    }
L_001ff328:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001ff32c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001ff330:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ff320;
        }
    }
L_001ff334:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001ff338:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_001ff33c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 1);
    }
L_001ff340:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ff310;
        }
    }
L_001ff344:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[8], cpu->r[5], 0, 0);
    }
L_001ff348:;
    {
        wr32(cpu->r[4] + + 0x3f0u, cpu->r[2]);
    }
L_001ff34c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x58u);
    }
L_001ff350:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ff354:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ff278;
        }
    }
L_001ff358:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[5], 1, 1);
    }
L_001ff35c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ff278;
        }
    }
L_001ff360:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ff364:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001ff368:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001ff36c:;
    {
        cpu->r[14] = 0x001ff370u; fn_001fe8cc(cpu);
    }
L_001ff370:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5a0u);
    }
L_001ff374:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[3], 0, 0);
    }
L_001ff378:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[7], cpu->r[5], 1, 0);
    }
L_001ff37c:;
    {
        wr32(cpu->r[4] + + 0x5a0u, cpu->r[5]);
    }
L_001ff380:;
    {
        goto L_001ff278;
    }
L_001ff384:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001ff388:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ff38c:;
    {
        wr32(cpu->r[4] + + 0x3f0u, cpu->r[3]);
    }
L_001ff390:;
    {
        cpu->r[14] = 0x001ff394u; fn_001fe614(cpu);
    }
L_001ff394:;
    {
        goto L_001ff34c;
    }
}

/* sub_001ff39c @ 001ff39c (arm) */
void fn_001ff39c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ff39c:;
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
L_001ff3a0:;
    {
        cpu->r[3] = rd32(0x001ff3a8u + + 0x5dcu);
    }
L_001ff3a4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000002bcu, 1, 0);
    }
L_001ff3a8:;
    {
        cpu->r[6] = rd32(0x001ff3b0u + + 0x5d8u);
    }
L_001ff3ac:;
    {
        cpu->r[3] = add_flags(cpu, 0x001ff3b4u, cpu->r[3], 0, 0);
    }
L_001ff3b0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001ff3b4:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[3]);
    }
L_001ff3b8:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x4cu);
    }
L_001ff3bc:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[2]);
    }
L_001ff3c0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4cu);
    }
L_001ff3c4:;
    {
        cpu->r[2] = rd32(cpu->r[10] + cpu->r[6]);
    }
L_001ff3c8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ff3cc:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[6]);
    }
L_001ff3d0:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[1]);
    }
L_001ff3d4:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_001ff3d8:;
    {
        wr32(cpu->r[13] + + 0x2b4u, cpu->r[3]);
    }
L_001ff3dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ff948;
        }
    }
L_001ff3e0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[5], 0x00000038u, 0, 0);
    }
L_001ff3e4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000005cu, 0, 0);
    }
L_001ff3e8:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[0]);
    }
L_001ff3ec:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], 0x0000004cu, 0, 0);
    }
L_001ff3f0:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        uint32_t v3 = rd32(ea + 12u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
        cpu->r[3] = v3;
        cpu->r[12] = base + 16u;
    }
L_001ff3f4:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x5cu);
    }
L_001ff3f8:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001ff3fc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000070u, 0, 0);
    }
L_001ff400:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[10]);
    }
L_001ff404:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 1);
    }
L_001ff408:;
    {
        cpu->r[6] = rd32(cpu->r[12]);
    }
L_001ff40c:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 0);
        }
    }
L_001ff410:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x44u);
    }
L_001ff414:;
    {
        if (cond_test(cpu, 10)) {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[7]);
        }
    }
L_001ff418:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[12] = base + 16u;
    }
L_001ff41c:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_001ff420:;
    {
        cpu->r[12] = cpu->r[6];
    }
L_001ff424:;
    {
        wr32(cpu->r[3], cpu->r[6]);
    }
L_001ff428:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        uint32_t v3 = rd32(ea + 12u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
        cpu->r[3] = v3;
        cpu->r[4] = base + 16u;
    }
L_001ff42c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x5cu);
    }
L_001ff430:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x60u);
    }
L_001ff434:;
    {
        cpu->r[4] = rd32(cpu->r[4]);
    }
L_001ff438:;
    {
        uint32_t base = cpu->r[10];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[10] = base + 16u;
    }
L_001ff43c:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_001ff440:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001ff444:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001ff448:;
    {
        wr32(cpu->r[3], cpu->r[4]);
    }
L_001ff44c:;
    {
        cpu->r[10] = cpu->r[4];
    }
L_001ff450:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x48u);
    }
L_001ff454:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x78u);
    }
L_001ff458:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001ff45c:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001ff960;
        }
    }
L_001ff460:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[6], 1, 1);
    }
L_001ff464:;
    {
        if (cond_test(cpu, 10)) {
        wr32(cpu->r[13] + + 0x34u, cpu->r[4]);
        }
    }
L_001ff468:;
    {
        if (cond_test(cpu, 10)) {
        wr32(cpu->r[13] + + 0x40u, cpu->r[2]);
        }
    }
L_001ff46c:;
    {
        if (cond_test(cpu, 10)) {
        wr32(cpu->r[13] + + 0x20u, cpu->r[12]);
        }
    }
L_001ff470:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001ff8d0;
        }
    }
L_001ff474:;
    {
        add_flags(cpu, cpu->r[12], 0x00000001u, 0, 1);
    }
L_001ff478:;
    {
        if (cond_test(cpu, 2)) {
        add_flags(cpu, cpu->r[4], 0x00000001u, 0, 1);
        }
    }
L_001ff47c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001ff480:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001ff484:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ff93c;
        }
    }
L_001ff488:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[4]);
    }
L_001ff48c:;
    {
        cpu->r[7] = 0x00000001u;
    }
L_001ff490:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[6]);
    }
L_001ff494:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000198u, 0, 0);
    }
L_001ff498:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000098u, 0, 0);
    }
L_001ff49c:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[2]);
    }
L_001ff4a0:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[1]);
    }
L_001ff4a4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000084u, 0, 0);
    }
L_001ff4a8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000298u, 0, 0);
    }
L_001ff4ac:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[12]);
    }
L_001ff4b0:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_001ff4b4:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[1]);
    }
L_001ff4b8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_001ff4bc:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x14u);
    }
L_001ff4c0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x38u);
    }
L_001ff4c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], 0x00000fa0u, 0, 0);
    }
L_001ff4c8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_001ff4cc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_001ff4d0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x34u);
    }
L_001ff4d4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_001ff4d8:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[8] = cpu->r[12];
        }
    }
L_001ff4dc:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[0] = rd32(cpu->r[13] + + 0x38u);
        }
    }
L_001ff4e0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001ff4e4:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[2];
    }
L_001ff4e8:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[8] = sub_flags(cpu, cpu->r[0], 0x00000fa0u, 1, 0);
        }
    }
L_001ff4ec:;
    {
        *vfp_s(cpu,14) = (float)*(uint32_t*)vfp_s(cpu,14);
    }
L_001ff4f0:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[1], 1, 0);
    }
L_001ff4f4:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[8];
    }
L_001ff4f8:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001ff4fc:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 0);
    }
L_001ff500:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[10];
    }
L_001ff504:;
    {
        *vfp_s(cpu,13) = (float)*(uint32_t*)vfp_s(cpu,12);
    }
L_001ff508:;
    {
        vfp_vdiv(cpu, 14, 13, 14);
    }
L_001ff50c:;
    {
        *vfp_s(cpu,15) = (float)*(uint32_t*)vfp_s(cpu,15);
    }
L_001ff510:;
    {
        vfp_vmul(cpu, 13, 14, 15);
    }
L_001ff514:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,13);
    }
L_001ff518:;
    {
        cpu->r[14] = 0x001ff51cu; imp_floorf(cpu); /* floorf */
    }
L_001ff51c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_001ff520:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000003u, 1, 1);
    }
L_001ff524:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_001ff528:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[0];
    }
L_001ff52c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,12);
    }
L_001ff530:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001ff534:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_001ff538:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_001ff53c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001ff574;
        }
    }
L_001ff540:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_001ff544:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[1], shifter(cpu->r[8], 3, 1u, &shc), 0, 0);
    }
L_001ff548:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000007u, 1, 1);
    }
L_001ff54c:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[8]);
        }
    }
L_001ff550:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001ff574;
        }
    }
L_001ff554:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001ff558:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_001ff55c:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 0);
        }
    }
L_001ff560:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[10] = rd32(cpu->r[13] + + 0x1cu);
        }
    }
L_001ff564:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[8], 3, 1u, &shc), 0, 0);
        }
    }
L_001ff568:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[10], cpu->r[8], 1, 0);
        }
    }
L_001ff56c:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[3] = add_flags(cpu, cpu->r[8], shifter(cpu->r[3], 3, 1u, &shc), 0, 0);
        }
    }
L_001ff570:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_001ff574:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001ff578:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ff57c:;
    {
        cpu->r[14] = 0x001ff580u; fn_001f8f90(cpu);
    }
L_001ff580:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ff584:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ff588:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001ff58c:;
    {
        cpu->r[14] = 0x001ff590u; fn_001f903c(cpu);
    }
L_001ff590:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ff594:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ff93c;
        }
    }
L_001ff598:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ff59c:;
    {
        cpu->r[14] = 0x001ff5a0u; fn_001f8efc(cpu);
    }
L_001ff5a0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x48u);
    }
L_001ff5a4:;
    {
        cpu->r[2] = 0x0000001bu;
    }
L_001ff5a8:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[0]);
    }
L_001ff5ac:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ff5b0:;
    {
        cpu->r[14] = 0x001ff5b4u; fn_001f8754(cpu);
    }
L_001ff5b4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ff5b8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001ff5bc:;
    {
        cpu->r[2] = rd8(cpu->r[13] + + 0x2b2u);
    }
L_001ff5c0:;
    {
        cpu->r[14] = 0x001ff5c4u; fn_001f8754(cpu);
    }
L_001ff5c4:;
    {
        cpu->r[10] = rd8(cpu->r[13] + + 0x2b2u);
    }
L_001ff5c8:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001ff5cc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = cpu->r[10];
        }
    }
L_001ff5d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ff5f0;
        }
    }
L_001ff5d4:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_001ff5d8:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_001ff5dc:;
    {
        cpu->r[2] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_001ff5e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001ff5e4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_001ff5e8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[2], 0, 0);
    }
L_001ff5ec:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001ff5dc;
        }
    }
L_001ff5f0:;
    {
        cpu->r[0] = rd8(cpu->r[13] + + 0x2a0u);
    }
L_001ff5f4:;
    {
        cpu->r[12] = rd8(cpu->r[13] + + 0x29fu);
    }
L_001ff5f8:;
    {
        cpu->r[3] = rd8(cpu->r[13] + + 0x29du);
    }
L_001ff5fc:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 16u, &shc); cpu->r[0] = v;
    }
L_001ff600:;
    {
        cpu->r[1] = rd8(cpu->r[13] + + 0x29eu);
    }
L_001ff604:;
    {
        cpu->r[2] = rd8(cpu->r[13] + + 0x2a1u);
    }
L_001ff608:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[12], 2, 8u, &shc), 0, 0);
    }
L_001ff60c:;
    {
        uint32_t v = cpu->r[3] & 0x00000004u; cpu->r[11] = v;
        set_nz(cpu, v);
    }
L_001ff610:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_001ff614:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 16u, &shc), 0, 0);
    }
L_001ff618:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_001ff61c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ff928;
        }
    }
L_001ff620:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001ff624:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = cpu->r[10];
        }
    }
L_001ff628:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ff788;
        }
    }
L_001ff62c:;
    {
        uint32_t v = cpu->r[3] & 0x00000001u; cpu->r[3] = v;
    }
L_001ff630:;
    {
        cpu->r[9] = cpu->r[11];
    }
L_001ff634:;
    {
        uint32_t v = cpu->r[3] ^ 0x00000001u; cpu->r[2] = v;
    }
L_001ff638:;
    {
        goto L_001ff6dc;
    }
L_001ff63c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[9]);
    }
L_001ff640:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ff644:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ff844;
        }
    }
L_001ff648:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ff64c:;
    {
        cpu->r[14] = 0x001ff650u; fn_001f87d0(cpu);
    }
L_001ff650:;
    {
        { uint32_t v = cpu->r[0] & 0x00000001u; set_nz(cpu, v); }
    }
L_001ff654:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001ff658:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ff844;
        }
    }
L_001ff65c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x1a8u);
    }
L_001ff660:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001ff664:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_001ff668:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_001ff66c:;
    {
        cpu->r[14] = 0x001ff670u; fn_001f77f0(cpu);
    }
L_001ff670:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001ff674:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_001ff678:;
    {
        cpu->r[1] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_001ff67c:;
    {
        uint32_t v = shifter(cpu->r[7], 2, (cpu->r[1] & 0xffu), &shc); cpu->r[1] = v;
    }
L_001ff680:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_001ff684:;
    {
        uint32_t v = cpu->r[1] & shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_001ff688:;
    {
        cpu->r[3] = (uint32_t)((uint8_t)cpu->r[3]);
    }
L_001ff68c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001ff690:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001ff844;
        }
    }
L_001ff694:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001ff698:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x000002b8u, 0, 0);
    }
L_001ff69c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], cpu->r[11], 0, 0);
    }
L_001ff6a0:;
    {
        cpu->r[1] = rd8(cpu->r[4] + cpu->r[9]);
    }
L_001ff6a4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001ff6a8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ff6ac:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_001ff6b0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_001ff6b4:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x1acu);
    }
L_001ff6b8:;
    {
        wr8(cpu->r[2] + - 0x220u, cpu->r[3]);
    }
L_001ff6bc:;
    {
        cpu->r[14] = 0x001ff6c0u; fn_001f8f30(cpu);
    }
L_001ff6c0:;
    {
        cpu->r[3] = rd8(cpu->r[13] + + 0x2b2u);
    }
L_001ff6c4:;
    {
        cpu->r[2] = rd8(cpu->r[4] + cpu->r[9]);
    }
L_001ff6c8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_001ff6cc:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_001ff6d0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001ff704;
        }
    }
L_001ff6d4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x000000ffu, 1, 1);
    }
L_001ff6d8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_001ff6dc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001ff6e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ff63c;
        }
    }
L_001ff6e4:;
    {
        cpu->r[1] = rd8(cpu->r[4] + cpu->r[9]);
    }
L_001ff6e8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ff6ec:;
    {
        cpu->r[14] = 0x001ff6f0u; fn_001f8f30(cpu);
    }
L_001ff6f0:;
    {
        cpu->r[3] = rd8(cpu->r[13] + + 0x2b2u);
    }
L_001ff6f4:;
    {
        cpu->r[2] = rd8(cpu->r[4] + cpu->r[9]);
    }
L_001ff6f8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_001ff6fc:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_001ff700:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001ff6d4;
        }
    }
L_001ff704:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000001u, 1, 1);
    }
L_001ff708:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[11], 0x00000002u, 1, 0);
    }
L_001ff70c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x000002b8u, 0, 0);
        }
    }
L_001ff710:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001ff714:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[11], 0, 0);
        }
    }
L_001ff718:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = rd8(cpu->r[3] + - 0x221u);
        }
    }
L_001ff71c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
        }
    }
L_001ff720:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = rd32(cpu->r[5] + shifter(cpu->r[3], 2, 2u, &shc));
        }
    }
L_001ff724:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001ff728:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001ff788;
        }
    }
L_001ff72c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], cpu->r[2], 0, 0);
    }
L_001ff730:;
    {
        goto L_001ff748;
    }
L_001ff734:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x80u);
    }
L_001ff738:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_001ff73c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[6], 1, 1);
    }
L_001ff740:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 1, 1u, &shc), 0, 0);
    }
L_001ff744:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ff788;
        }
    }
L_001ff748:;
    {
        cpu->r[1] = rd8(cpu->r[2]);
    }
L_001ff74c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_001ff750:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ff734;
        }
    }
L_001ff754:;
    {
        cpu->r[1] = rd8(cpu->r[2] + + 0x1u);
    }
L_001ff758:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_001ff75c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_001ff760:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd32(cpu->r[5] + + 0x80u);
        }
    }
L_001ff764:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[5] + + 0x84u);
        }
    }
L_001ff768:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = rd32(cpu->r[5] + + 0x84u);
        }
    }
L_001ff76c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
        }
    }
L_001ff770:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[1], 1, 1u, &shc); cpu->r[1] = v;
        }
    }
L_001ff774:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[0], 1, 2u, &shc), 0, 0);
        }
    }
L_001ff778:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 1, 1u, &shc), 0, 0);
        }
    }
L_001ff77c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
        }
    }
L_001ff780:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[6], 1, 1);
    }
L_001ff784:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ff748;
        }
    }
L_001ff788:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_001ff78c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ff790:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_001ff794:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001ff798:;
    {
        cpu->r[14] = 0x001ff79cu; fn_001f8f90(cpu);
    }
L_001ff79c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], 0x0000001bu, 0, 0);
    }
L_001ff7a0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x40u);
    }
L_001ff7a4:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x30u);
    }
L_001ff7a8:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[12], 1, 1);
    }
L_001ff7ac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[10], 0, 0);
    }
L_001ff7b0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_001ff7b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ff908;
        }
    }
L_001ff7b8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001ff7bc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_001ff7c0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001ff7c4:;
    {
        if (cond_test(cpu, 3)) {
        goto L_001ff880;
        }
    }
L_001ff7c8:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001ff7cc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_001ff7d0:;
    {
        wr32(cpu->r[13] + + 0x90u, cpu->r[9]);
    }
L_001ff7d4:;
    {
        wr32(cpu->r[13] + + 0x8cu, cpu->r[10]);
    }
L_001ff7d8:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_001ff7dc:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[3]);
    }
L_001ff7e0:;
    {
        wr32(cpu->r[13] + + 0x88u, cpu->r[8]);
    }
L_001ff7e4:;
    {
        wr32(cpu->r[13] + + 0x84u, cpu->r[12]);
    }
L_001ff7e8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_001ff7ec:;
    {
        wr32(cpu->r[13] + + 0x94u, cpu->r[10]);
    }
L_001ff7f0:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        uint32_t v3 = rd32(ea + 12u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
        cpu->r[3] = v3;
        cpu->r[12] = base + 16u;
    }
L_001ff7f4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001ff7f8:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[12] = base + 16u;
    }
L_001ff7fc:;
    {
        wr32(cpu->r[12], cpu->r[10]);
    }
L_001ff800:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x70u);
    }
L_001ff804:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_001ff808:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x78u);
    }
L_001ff80c:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[1]);
    }
L_001ff810:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x40u);
    }
L_001ff814:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[0]);
    }
L_001ff818:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001ff81c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001ff8d0;
        }
    }
L_001ff820:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x20u);
    }
L_001ff824:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x34u);
    }
L_001ff828:;
    {
        add_flags(cpu, cpu->r[12], 0x00000001u, 0, 1);
    }
L_001ff82c:;
    {
        if (cond_test(cpu, 2)) {
        add_flags(cpu, cpu->r[10], 0x00000001u, 0, 1);
        }
    }
L_001ff830:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ff93c;
        }
    }
L_001ff834:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_001ff838:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001ff83c:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[0]);
    }
L_001ff840:;
    {
        goto L_001ff4bc;
    }
L_001ff844:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_001ff848:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ff84c:;
    {
        cpu->r[14] = 0x001ff850u; fn_001f8f90(cpu);
    }
L_001ff850:;
    {
        cpu->r[3] = 0x00000025u;
    }
L_001ff854:;
    {
        wr32(cpu->r[5] + + 0x74u, cpu->r[3]);
    }
L_001ff858:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x54u);
    }
L_001ff85c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4cu);
    }
L_001ff860:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x2b4u);
    }
L_001ff864:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[0]);
    }
L_001ff868:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001ff86c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ff870:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001ff874:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ff980;
        }
    }
L_001ff878:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000002bcu, 0, 0);
    }
L_001ff87c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ff880u)) return;
    }
L_001ff880:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001ff884:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x30u);
    }
L_001ff888:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_001ff88c:;
    {
        wr32(cpu->r[13] + + 0x8cu, cpu->r[2]);
    }
L_001ff890:;
    {
        wr32(cpu->r[13] + + 0x90u, cpu->r[9]);
    }
L_001ff894:;
    {
        wr32(cpu->r[13] + + 0x88u, cpu->r[8]);
    }
L_001ff898:;
    {
        wr32(cpu->r[13] + + 0x84u, cpu->r[3]);
    }
L_001ff89c:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        uint32_t v3 = rd32(ea + 12u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
        cpu->r[3] = v3;
        cpu->r[12] = base + 16u;
    }
L_001ff8a0:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x24u);
    }
L_001ff8a4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x44u);
    }
L_001ff8a8:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[10]);
    }
L_001ff8ac:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[12] = base + 16u;
    }
L_001ff8b0:;
    {
        wr32(cpu->r[12], cpu->r[10]);
    }
L_001ff8b4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x60u);
    }
L_001ff8b8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x40u);
    }
L_001ff8bc:;
    {
        wr32(cpu->r[13] + + 0x94u, cpu->r[10]);
    }
L_001ff8c0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_001ff8c4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_001ff8c8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001ff8cc:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001ff820;
        }
    }
L_001ff8d0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001ff8d4:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x20u);
    }
L_001ff8d8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_001ff8dc:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001ff93c;
        }
    }
L_001ff8e0:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x34u);
    }
L_001ff8e4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_001ff8e8:;
    {
        if (cond_test(cpu, 3)) {
        goto L_001ff93c;
        }
    }
L_001ff8ec:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x50u);
    }
L_001ff8f0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ff8f4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x40u);
    }
L_001ff8f8:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001ff8fc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001ff900:;
    {
        cpu->r[14] = 0x001ff904u; fn_001ff1ac(cpu);
    }
L_001ff904:;
    {
        goto L_001ff858;
    }
L_001ff908:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x24u);
    }
L_001ff90c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001ff910:;
    {
        wr32(cpu->r[13] + + 0x84u, cpu->r[12]);
    }
L_001ff914:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[10]);
    }
L_001ff918:;
    {
        wr32(cpu->r[13] + + 0x8cu, cpu->r[0]);
    }
L_001ff91c:;
    {
        wr32(cpu->r[13] + + 0x90u, cpu->r[9]);
    }
L_001ff920:;
    {
        wr32(cpu->r[13] + + 0x88u, cpu->r[8]);
    }
L_001ff924:;
    {
        goto L_001ff7e8;
    }
L_001ff928:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ff92c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_001ff930:;
    {
        cpu->r[14] = 0x001ff934u; fn_001f8f90(cpu);
    }
L_001ff934:;
    {
        cpu->r[9] = (~0x00000000u);
    }
L_001ff938:;
    {
        goto L_001ff79c;
    }
L_001ff93c:;
    {
        cpu->r[3] = 0x00000025u;
    }
L_001ff940:;
    {
        wr32(cpu->r[5] + + 0x74u, cpu->r[3]);
    }
L_001ff944:;
    {
        goto L_001ff858;
    }
L_001ff948:;
    {
        cpu->r[14] = 0x001ff94cu; fn_001f9314(cpu);
    }
L_001ff94c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ff950:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000024u;
        }
    }
L_001ff954:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[5] + + 0x74u, cpu->r[3]);
        }
    }
L_001ff958:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ff858;
        }
    }
L_001ff95c:;
    {
        goto L_001ff3e0;
    }
L_001ff960:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x50u);
    }
L_001ff964:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ff968:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001ff96c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001ff970:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001ff974:;
    {
        wr32(cpu->r[13], cpu->r[6]);
    }
L_001ff978:;
    {
        cpu->r[14] = 0x001ff97cu; fn_001ff1ac(cpu);
    }
L_001ff97c:;
    {
        goto L_001ff858;
    }
L_001ff980:;
    {
        cpu->r[14] = 0x001ff984u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001ff984:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] & shifter(cpu->r[4], 5, 0, &shc); cpu->r[11] = v;
        }
    }
L_001ff988:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
}

/* _Z15stb_vorbis_seekP10stb_vorbisj @ 001ff98c (arm) */
void fn_001ff98c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ff98c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001ff990:;
    {
        return fn_001ff39c(cpu);
    }
}

/* _Z21stb_vorbis_seek_frameP10stb_vorbisj @ 001ff994 (arm) */
void fn_001ff994(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ff994:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001ff998:;
    {
        return fn_001ff39c(cpu);
    }
}

/* _ZN3vox13FileInterfaceD1Ev @ 001ff99c (arm) */
void fn_001ff99c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ff99c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox13FileInterface10GetFilePtrEv @ 001ff9a0 (arm) */
void fn_001ff9a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ff9a0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_001ff9a4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox11FileLimitedD1Ev @ 001ff9a8 (arm) */
void fn_001ff9a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ff9a8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox11FileLimited5WriteEPKvii @ 001ff9ac (arm) */
void fn_001ff9ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ff9ac:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001ff9b0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox13FileInterface4ReadEPvii @ 001ff9b4 (arm) */
void fn_001ff9b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ff9b4:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x4u);
    }
L_001ff9b8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001ff9bc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001ff9c0:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
        }
    }
L_001ff9c4:;
    {
        cpu->r[4] = rd32(0x001ff9ccu + + 0x38u);
    }
L_001ff9c8:;
    {
        cpu->r[4] = add_flags(cpu, 0x001ff9d0u, cpu->r[4], 0, 0);
    }
L_001ff9cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ff9fc;
        }
    }
L_001ff9d0:;
    {
        cpu->r[0] = rd32(0x001ff9d8u + + 0x30u);
    }
L_001ff9d4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_001ff9d8:;
    {
        cpu->r[4] = rd32(cpu->r[0]);
    }
L_001ff9dc:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001ff9e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ff9fc;
        }
    }
L_001ff9e4:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001ff9e8:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001ff9ec:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001ff9f0:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_001ff9f4:;
    {
        cpu->r[14] = 0x001ff9f8u; guest_call(cpu, cpu->r[4]);
    }
L_001ff9f8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001ff9fcu)) return;
    }
L_001ff9fc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001ffa00:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001ffa04u)) return;
    }
}

/* _ZN3vox13FileInterface4SeekEiNS_17VoxFileSeekOriginE @ 001ffa0c (arm) */
void fn_001ffa0c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ffa0c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_001ffa10:;
    {
        cpu->r[3] = rd32(0x001ffa18u + + 0x30u);
    }
L_001ffa14:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ffa18:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001ffa1c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001ffa24u, cpu->r[3], 0, 0);
    }
L_001ffa20:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ffa2c;
        }
    }
L_001ffa24:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001ffa28:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001ffa2cu)) return;
    }
L_001ffa2c:;
    {
        cpu->r[12] = rd32(0x001ffa34u + + 0x18u);
    }
L_001ffa30:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_001ffa34:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_001ffa38:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ffa3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ffa24;
        }
    }
L_001ffa40:;
    {
        cpu->r[14] = 0x001ffa44u; guest_call(cpu, cpu->r[3]);
    }
L_001ffa44:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001ffa48u)) return;
    }
}

/* _ZN3vox13FileInterface4TellEv @ 001ffa50 (arm) */
void fn_001ffa50(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ffa50:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_001ffa54:;
    {
        cpu->r[3] = rd32(0x001ffa5cu + + 0x30u);
    }
L_001ffa58:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ffa5c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001ffa60:;
    {
        cpu->r[3] = add_flags(cpu, 0x001ffa68u, cpu->r[3], 0, 0);
    }
L_001ffa64:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ffa70;
        }
    }
L_001ffa68:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001ffa6c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001ffa70u)) return;
    }
L_001ffa70:;
    {
        cpu->r[2] = rd32(0x001ffa78u + + 0x18u);
    }
L_001ffa74:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001ffa78:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0xcu);
    }
L_001ffa7c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ffa80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ffa68;
        }
    }
L_001ffa84:;
    {
        cpu->r[14] = 0x001ffa88u; guest_call(cpu, cpu->r[3]);
    }
L_001ffa88:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001ffa8cu)) return;
    }
}

/* _ZN3vox13FileInterface5WriteEPKvii @ 001ffa94 (arm) */
void fn_001ffa94(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ffa94:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x4u);
    }
L_001ffa98:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001ffa9c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001ffaa0:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
        }
    }
L_001ffaa4:;
    {
        cpu->r[4] = rd32(0x001ffaacu + + 0x38u);
    }
L_001ffaa8:;
    {
        cpu->r[4] = add_flags(cpu, 0x001ffab0u, cpu->r[4], 0, 0);
    }
L_001ffaac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ffadc;
        }
    }
L_001ffab0:;
    {
        cpu->r[0] = rd32(0x001ffab8u + + 0x30u);
    }
L_001ffab4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_001ffab8:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x4u);
    }
L_001ffabc:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001ffac0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ffadc;
        }
    }
L_001ffac4:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001ffac8:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001ffacc:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001ffad0:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_001ffad4:;
    {
        cpu->r[14] = 0x001ffad8u; guest_call(cpu, cpu->r[4]);
    }
L_001ffad8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001ffadcu)) return;
    }
L_001ffadc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001ffae0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001ffae4u)) return;
    }
}

/* _ZN3vox11FileLimitedC2Ev @ 001ffaec (arm) */
void fn_001ffaec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ffaec:;
    {
        cpu->r[1] = rd32(0x001ffaf4u + + 0x30u);
    }
L_001ffaf0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001ffaf4:;
    {
        cpu->r[12] = rd32(0x001ffafcu + + 0x2cu);
    }
L_001ffaf8:;
    {
        cpu->r[1] = add_flags(cpu, 0x001ffb00u, cpu->r[1], 0, 0);
    }
L_001ffafc:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_001ffb00:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_001ffb04:;
    {
        cpu->r[12] = rd32(cpu->r[1] + cpu->r[12]);
    }
L_001ffb08:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001ffb0c:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_001ffb10:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_001ffb14:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[1]);
    }
L_001ffb18:;
    {
        wr32(cpu->r[0], cpu->r[12]);
    }
L_001ffb1c:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_001ffb20:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox11FileLimitedC1Ev @ 001ffb2c (arm) */
void fn_001ffb2c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ffb2c:;
    {
        cpu->r[1] = rd32(0x001ffb34u + + 0x30u);
    }
L_001ffb30:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001ffb34:;
    {
        cpu->r[12] = rd32(0x001ffb3cu + + 0x2cu);
    }
L_001ffb38:;
    {
        cpu->r[1] = add_flags(cpu, 0x001ffb40u, cpu->r[1], 0, 0);
    }
L_001ffb3c:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_001ffb40:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_001ffb44:;
    {
        cpu->r[12] = rd32(cpu->r[1] + cpu->r[12]);
    }
L_001ffb48:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001ffb4c:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_001ffb50:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_001ffb54:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[1]);
    }
L_001ffb58:;
    {
        wr32(cpu->r[0], cpu->r[12]);
    }
L_001ffb5c:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_001ffb60:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox11FileLimited4ReadEPvii @ 001ffb6c (arm) */
void fn_001ffb6c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ffb6c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001ffb70:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001ffb74:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x14u);
    }
L_001ffb78:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001ffb7c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ffb80:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x10u);
    }
L_001ffb84:;
    {
        cpu->r[5] = rd32(0x001ffb8cu + + 0x84u);
    }
L_001ffb88:;
    {
        uint32_t v = cpu->r[6] * cpu->r[3] + cpu->r[2]; cpu->r[1] = v;
    }
L_001ffb8c:;
    {
        cpu->r[5] = add_flags(cpu, 0x001ffb94u, cpu->r[5], 0, 0);
    }
L_001ffb90:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_001ffb94:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001ffbe0;
        }
    }
L_001ffb98:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_001ffb9c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001ffba0:;
    {
        cpu->r[14] = 0x001ffba4u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001ffba4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ffba8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001ffbac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ffbb0u)) return;
        }
    }
L_001ffbb0:;
    {
        cpu->r[12] = rd32(0x001ffbb8u + + 0x5cu);
    }
L_001ffbb4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001ffbb8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001ffbbc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001ffbc0:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_001ffbc4:;
    {
        cpu->r[14] = 0x001ffbccu;
    }
L_001ffbc8:;
    {
        uint32_t t = rd32(cpu->r[12]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ffbccu)) return;
    }
L_001ffbcc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x14u);
    }
L_001ffbd0:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001ffbd4:;
    {
        uint32_t v = cpu->r[6] * cpu->r[3] + cpu->r[2]; cpu->r[6] = v;
    }
L_001ffbd8:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[6]);
    }
L_001ffbdc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ffbe0u)) return;
    }
L_001ffbe0:;
    {
        cpu->r[12] = rd32(0x001ffbe8u + + 0x2cu);
    }
L_001ffbe4:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001ffbe8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001ffbec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001ffbf0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001ffbf4:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_001ffbf8:;
    {
        cpu->r[14] = 0x001ffc00u;
    }
L_001ffbfc:;
    {
        uint32_t t = rd32(cpu->r[12]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ffc00u)) return;
    }
L_001ffc00:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_001ffc04:;
    {
        uint32_t v = cpu->r[6] * cpu->r[0] + cpu->r[3]; cpu->r[6] = v;
    }
L_001ffc08:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[6]);
    }
L_001ffc0c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ffc10u)) return;
    }
}

/* _ZN3vox11FileLimited4SeekEiNS_17VoxFileSeekOriginE @ 001ffc18 (arm) */
void fn_001ffc18(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ffc18:;
    {
        cpu->r[3] = rd32(0x001ffc20u + + 0xe0u);
    }
L_001ffc1c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_001ffc20:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001ffc24:;
    {
        cpu->r[3] = add_flags(cpu, 0x001ffc2cu, cpu->r[3], 0, 0);
    }
L_001ffc28:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ffc2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ffcc4;
        }
    }
L_001ffc30:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_001ffc34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ffc98;
        }
    }
L_001ffc38:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001ffc3c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ffc90;
        }
    }
L_001ffc40:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x10u);
    }
L_001ffc44:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_001ffc48:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
        }
    }
L_001ffc4c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001ffc50:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        uint32_t t = v3;
        cpu->r[13] += 16u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001ffc54u)) return;
        }
    }
L_001ffc54:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001ffc58:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001ffcf4;
        }
    }
L_001ffc5c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001ffc60:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001ffc64:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_001ffc68:;
    {
        cpu->r[12] = rd32(0x001ffc70u + + 0x94u);
    }
L_001ffc6c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001ffc70:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_001ffc74:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_001ffc78:;
    {
        cpu->r[14] = 0x001ffc80u;
    }
L_001ffc7c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001ffc80u)) return;
    }
L_001ffc80:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ffc84:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x14u, cpu->r[5]);
        }
    }
L_001ffc88:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ffc8cu)) return;
    }
L_001ffc8c:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[2]);
    }
L_001ffc90:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001ffc94:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ffc98u)) return;
    }
L_001ffc98:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x10u);
    }
L_001ffc9c:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[1], 1, 0);
    }
L_001ffca0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_001ffca4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001ffcf4;
        }
    }
L_001ffca8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001ffcac:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001ffc8c;
        }
    }
L_001ffcb0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_001ffcb4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_001ffcb8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_001ffcbc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_001ffcc0:;
    {
        goto L_001ffc68;
    }
L_001ffcc4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x14u);
    }
L_001ffcc8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x10u);
    }
L_001ffccc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_001ffcd0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_001ffcd4:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x14u, cpu->r[0]);
        }
    }
L_001ffcd8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001ffcdc:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        uint32_t t = v3;
        cpu->r[13] += 16u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001ffce0u)) return;
        }
    }
L_001ffce0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001ffce4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
        }
    }
L_001ffce8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
        }
    }
L_001ffcec:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
        }
    }
L_001ffcf0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001ffc68;
        }
    }
L_001ffcf4:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001ffcf8:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[0]);
    }
L_001ffcfc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ffd00u)) return;
    }
}

/* _ZN3vox11FileLimitedC1EPvii @ 001ffd08 (arm) */
void fn_001ffd08(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ffd08:;
    {
        cpu->r[12] = rd32(0x001ffd10u + + 0x48u);
    }
L_001ffd0c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001ffd10:;
    {
        cpu->r[14] = rd32(0x001ffd18u + + 0x44u);
    }
L_001ffd14:;
    {
        cpu->r[12] = add_flags(cpu, 0x001ffd1cu, cpu->r[12], 0, 0);
    }
L_001ffd18:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001ffd1c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ffd20:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_001ffd24:;
    {
        cpu->r[14] = rd32(cpu->r[12] + cpu->r[14]);
    }
L_001ffd28:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001ffd2c:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_001ffd30:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001ffd34:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000008u, 0, 0);
    }
L_001ffd38:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_001ffd3c:;
    {
        wr32(cpu->r[0], cpu->r[14]);
    }
L_001ffd40:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001ffd44:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[5]);
    }
L_001ffd48:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_001ffd4c:;
    {
        cpu->r[14] = 0x001ffd50u; fn_001ffc18(cpu);
    }
L_001ffd50:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ffd54:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ffd58u)) return;
    }
}

/* _ZN3vox11FileLimitedC2EPvii @ 001ffd60 (arm) */
void fn_001ffd60(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ffd60:;
    {
        cpu->r[12] = rd32(0x001ffd68u + + 0x48u);
    }
L_001ffd64:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001ffd68:;
    {
        cpu->r[14] = rd32(0x001ffd70u + + 0x44u);
    }
L_001ffd6c:;
    {
        cpu->r[12] = add_flags(cpu, 0x001ffd74u, cpu->r[12], 0, 0);
    }
L_001ffd70:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001ffd74:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ffd78:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_001ffd7c:;
    {
        cpu->r[14] = rd32(cpu->r[12] + cpu->r[14]);
    }
L_001ffd80:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001ffd84:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_001ffd88:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001ffd8c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000008u, 0, 0);
    }
L_001ffd90:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_001ffd94:;
    {
        wr32(cpu->r[0], cpu->r[14]);
    }
L_001ffd98:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001ffd9c:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[5]);
    }
L_001ffda0:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_001ffda4:;
    {
        cpu->r[14] = 0x001ffda8u; fn_001ffc18(cpu);
    }
L_001ffda8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ffdac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ffdb0u)) return;
    }
}

/* _ZN3vox11FileLimited4TellEv @ 001ffdb8 (arm) */
void fn_001ffdb8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ffdb8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x14u);
    }
L_001ffdbc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_84 @ 001ffdc0 (arm) */
void fn_001ffdc0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ffdc0:;
    {
        cpu->r[3] = rd32(0x001ffdc8u + + 0x28u);
    }
L_001ffdc4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001ffdc8:;
    {
        cpu->r[1] = rd32(0x001ffdd0u + + 0x24u);
    }
L_001ffdcc:;
    {
        cpu->r[3] = add_flags(cpu, 0x001ffdd4u, cpu->r[3], 0, 0);
    }
L_001ffdd0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001ffdd4:;
    {
        wr32(cpu->r[3] + + 0x14u, cpu->r[2]);
    }
L_001ffdd8:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_001ffddc:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_001ffde0:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[2]);
    }
L_001ffde4:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[2]);
    }
L_001ffde8:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[2]);
    }
L_001ffdec:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox13FileInterfaceD0Ev @ 001ffdf8 (arm) */
void fn_001ffdf8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ffdf8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001ffdfc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ffe00:;
    {
        cpu->r[14] = 0x001ffe04u; fn_0018ba20(cpu);
    }
L_001ffe04:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ffe08:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001ffe0cu)) return;
    }
}

/* _ZN3vox11FileLimitedD0Ev @ 001ffe0c (arm) */
void fn_001ffe0c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ffe0c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001ffe10:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ffe14:;
    {
        cpu->r[14] = 0x001ffe18u; fn_0018ba20(cpu);
    }
L_001ffe18:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ffe1c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001ffe20u)) return;
    }
}

/* _ZN3vox19FileSystemInterface12GetDirectoryEPciS1_ @ 001ffe20 (arm) */
void fn_001ffe20(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ffe20:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ffe24:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
        }
    }
L_001ffe28:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001ffe2c:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001ffe30:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ffe34:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_001ffe38:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = 0x00000001u;
        }
    }
L_001ffe3c:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001ffe40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ffe68;
        }
    }
L_001ffe44:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001ffe48:;
    {
        cpu->r[1] = 0x0000002fu;
    }
L_001ffe4c:;
    {
        cpu->r[14] = 0x001ffe50u; imp_strrchr(cpu); /* strrchr */
    }
L_001ffe50:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ffe54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ffe8c;
        }
    }
L_001ffe58:;
    {
        cpu->r[5] = sub_flags(cpu, 0x00000001u, cpu->r[7], 1, 0);
    }
L_001ffe5c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_001ffe60:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[8], 1, 1);
    }
L_001ffe64:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001ffe70;
        }
    }
L_001ffe68:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001ffe6c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ffe70u)) return;
    }
L_001ffe70:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001ffe74:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ffe78:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001ffe7c:;
    {
        cpu->r[14] = 0x001ffe80u; imp_memcpy(cpu); /* memcpy */
    }
L_001ffe80:;
    {
        wr8(cpu->r[4] + cpu->r[5], cpu->r[6]);
    }
L_001ffe84:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ffe88:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ffe8cu)) return;
    }
L_001ffe8c:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001ffe90:;
    {
        wr8(cpu->r[4], cpu->r[3]);
    }
L_001ffe94:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ffe98u)) return;
    }
}

/* _ZN3vox19FileSystemInterface12PopDirectoryEv @ 001ffe98 (arm) */
void fn_001ffe98(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ffe98:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001ffe9c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001ffea0:;
    {
        uint32_t wb_tmp = cpu->r[2] + + 0xcu;
        cpu->r[3] = rd32(cpu->r[2] + + 0xcu);
        cpu->r[2] = wb_tmp;
    }
L_001ffea4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001ffea8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ffef0;
        }
    }
L_001ffeac:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ffeb0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001ffeb4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ffeac;
        }
    }
L_001ffeb8:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x10u);
    }
L_001ffebc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_001ffec0:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_001ffec4:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x14u);
    }
L_001ffec8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001ffecc:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_001ffed0:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[3]);
    }
L_001ffed4:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_001ffed8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ffee8;
        }
    }
L_001ffedc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ffee0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ffee8;
        }
    }
L_001ffee4:;
    {
        cpu->r[14] = 0x001ffee8u; fn_00097dc8(cpu);
    }
L_001ffee8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ffeec:;
    {
        cpu->r[14] = 0x001ffef0u; fn_00097dc8(cpu);
    }
L_001ffef0:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001ffef4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001ffef8u)) return;
    }
}

/* _ZN3vox19FileSystemInterface9CloseFileEPNS_13FileInterfaceE @ 001ffef8 (arm) */
void fn_001ffef8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ffef8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001ffefc:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001fff00:;
    {
        cpu->r[5] = rd32(0x001fff08u + + 0x50u);
    }
L_001fff04:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001fff08:;
    {
        cpu->r[5] = add_flags(cpu, 0x001fff10u, cpu->r[5], 0, 0);
    }
L_001fff0c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001fff10u)) return;
        }
    }
L_001fff10:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001fff14:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fff18:;
    {
        cpu->r[14] = 0x001fff20u;
    }
L_001fff1c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001fff20u)) return;
    }
L_001fff20:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001fff24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fff38;
        }
    }
L_001fff28:;
    {
        cpu->r[3] = rd32(0x001fff30u + + 0x2cu);
    }
L_001fff2c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001fff30:;
    {
        cpu->r[14] = 0x001fff38u;
    }
L_001fff34:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001fff38u)) return;
    }
L_001fff38:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001fff3c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fff40:;
    {
        cpu->r[14] = 0x001fff48u;
    }
L_001fff44:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001fff48u)) return;
    }
L_001fff48:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fff4c:;
    {
        cpu->r[14] = 0x001fff50u; fn_00097dc8(cpu);
    }
L_001fff50:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001fff54:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001fff58u)) return;
    }
}

/* _ZN3vox19FileSystemInterfaceD1Ev @ 001fff60 (arm) */
void fn_001fff60(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001fff60:;
    {
        cpu->r[2] = rd32(0x001fff68u + + 0xa0u);
    }
L_001fff64:;
    {
        cpu->r[1] = rd32(0x001fff6cu + + 0xa0u);
    }
L_001fff68:;
    {
        cpu->r[2] = add_flags(cpu, 0x001fff70u, cpu->r[2], 0, 0);
    }
L_001fff6c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_001fff70:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001fff74:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_001fff78:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001fff7c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001fff80:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_001fff84:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_001fff88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fffac;
        }
    }
L_001fff8c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001fff90:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001fff94:;
    {
        cpu->r[14] = 0x001fff9cu;
    }
L_001fff98:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x001fff9cu)) return;
    }
L_001fff9c:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x8u);
    }
L_001fffa0:;
    {
        cpu->r[14] = 0x001fffa4u; fn_00097dc8(cpu);
    }
L_001fffa4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001fffa8:;
    {
        wr32(cpu->r[7] + + 0x8u, cpu->r[3]);
    }
L_001fffac:;
    {
        cpu->r[4] = rd32(cpu->r[7] + + 0xcu);
    }
L_001fffb0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_001fffb4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 1);
    }
L_001fffb8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ffff8;
        }
    }
L_001fffbc:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_001fffc0:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000008u;
        cpu->r[5] = rd32(cpu->r[3]);
        cpu->r[3] = wb_tmp;
    }
L_001fffc4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x14u);
    }
L_001fffc8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001fffcc:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001fffd0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fffe0;
        }
    }
L_001fffd4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001fffd8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001fffe0;
        }
    }
L_001fffdc:;
    {
        cpu->r[14] = 0x001fffe0u; fn_00097dc8(cpu);
    }
L_001fffe0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001fffe4:;
    {
        cpu->r[4] = cpu->r[5];
    }
L_001fffe8:;
    {
        cpu->r[14] = 0x001fffecu; fn_00097dc8(cpu);
    }
L_001fffec:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_001ffff0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001fffbc;
        }
    }
L_001ffff4:;
    {
        cpu->r[4] = cpu->r[6];
    }
L_001ffff8:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[4]);
    }
L_001ffffc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00200000:;
    {
        wr32(cpu->r[7] + + 0xcu, cpu->r[4]);
    }
L_00200004:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00200008u)) return;
    }
}

/* _ZN3vox19FileSystemInterfaceD0Ev @ 00200010 (arm) */
void fn_00200010(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00200010:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00200014:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00200018:;
    {
        cpu->r[14] = 0x0020001cu; fn_001fff60(cpu);
    }
L_0020001c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00200020:;
    {
        cpu->r[14] = 0x00200024u; fn_0018ba20(cpu);
    }
L_00200024:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00200028:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0020002cu)) return;
    }
}

/* _ZN3vox19FileSystemInterface15DestroyInstanceEv @ 0020002c (arm) */
void fn_0020002c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0020002c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00200030:;
    {
        cpu->r[4] = rd32(0x00200038u + + 0x3cu);
    }
L_00200034:;
    {
        cpu->r[5] = rd32(0x0020003cu + + 0x3cu);
    }
L_00200038:;
    {
        cpu->r[4] = add_flags(cpu, 0x00200040u, cpu->r[4], 0, 0);
    }
L_0020003c:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00200040:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_00200044:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00200048:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00200064;
        }
    }
L_0020004c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00200050:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00200054:;
    {
        cpu->r[14] = 0x0020005cu;
    }
L_00200058:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0020005cu)) return;
    }
L_0020005c:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_00200060:;
    {
        cpu->r[14] = 0x00200064u; fn_00097dc8(cpu);
    }
L_00200064:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00200068:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0020006c:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_00200070:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00200074u)) return;
    }
}

/* _ZNSbIcSt11char_traitsIcEN3vox10SAllocatorIcLNS1_10VoxMemHintE0EEEE9_M_appendEPKcS7_ @ 0020007c (arm) */
void fn_0020007c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0020007c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_00200080:;
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
L_00200084:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00200088:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0020008c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00200188;
        }
    }
L_00200090:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x14u);
    }
L_00200094:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
    }
L_00200098:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_0020009c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = cpu->r[3];
        }
    }
L_002000a0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[8] = rd32(cpu->r[0] + + 0x10u);
        }
    }
L_002000a4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[1] + + 0x10u;
        cpu->r[8] = rd32(cpu->r[1] + + 0x10u);
        cpu->r[1] = wb_tmp;
        }
    }
L_002000a8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd32(cpu->r[0]);
        }
    }
L_002000ac:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[8], 1, 0);
    }
L_002000b0:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[1], 1, 1);
    }
L_002000b4:;
    {
        if (cond_test(cpu, 4)) {
        goto L_00200190;
        }
    }
L_002000b8:;
    {
        cpu->r[2] = 0x0000fffeu;
    }
L_002000bc:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 0);
    }
L_002000c0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0xffffu << 16);
    }
L_002000c4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[8], 1, 0);
    }
L_002000c8:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 1);
    }
L_002000cc:;
    {
        if (cond_test(cpu, 9)) {
        goto L_002001ec;
        }
    }
L_002000d0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_002000d4:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[6], 1, 1);
    }
L_002000d8:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[8], 0, 0);
        }
    }
L_002000dc:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[6], 0, 0);
        }
    }
L_002000e0:;
    {
        add_flags(cpu, cpu->r[7], 0x00000001u, 0, 1);
    }
L_002000e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_002001e4;
        }
    }
L_002000e8:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[7], 1, 1);
    }
L_002000ec:;
    {
        if (cond_test(cpu, 9)) {
        goto L_002001e4;
        }
    }
L_002000f0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_002000f4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_002000f8:;
    {
        cpu->r[14] = 0x002000fcu; fn_00097dd0(cpu);
    }
L_002000fc:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x14u);
    }
L_00200100:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x10u);
    }
L_00200104:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
    }
L_00200108:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0020010c:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_00200110:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[8] = cpu->r[0];
        }
    }
L_00200114:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00200134;
        }
    }
L_00200118:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_0020011c:;
    {
        cpu->r[3] = rd8(cpu->r[1] + cpu->r[8]);
    }
L_00200120:;
    {
        wr8(cpu->r[10] + cpu->r[8], cpu->r[3]);
    }
L_00200124:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_00200128:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[2], 1, 1);
    }
L_0020012c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0020011c;
        }
    }
L_00200130:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[10], cpu->r[8], 0, 0);
    }
L_00200134:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00200138:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00200158;
        }
    }
L_0020013c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00200140:;
    {
        cpu->r[2] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_00200144:;
    {
        wr8(cpu->r[8] + cpu->r[3], cpu->r[2]);
    }
L_00200148:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0020014c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_00200150:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00200140;
        }
    }
L_00200154:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[6], 0, 0);
    }
L_00200158:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0020015c:;
    {
        wr8(cpu->r[8], cpu->r[3]);
    }
L_00200160:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x14u);
    }
L_00200164:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_00200168:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00200178;
        }
    }
L_0020016c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_00200170:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00200178;
        }
    }
L_00200174:;
    {
        cpu->r[14] = 0x00200178u; fn_00097dc8(cpu);
    }
L_00200178:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[10], cpu->r[7], 0, 0);
    }
L_0020017c:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[8]);
    }
L_00200180:;
    {
        wr32(cpu->r[5] + + 0x14u, cpu->r[10]);
    }
L_00200184:;
    {
        wr32(cpu->r[5], cpu->r[7]);
    }
L_00200188:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0020018c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00200190u)) return;
    }
L_00200190:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00200194:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_00200198:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0020019c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_002001bc;
        }
    }
L_002001a0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[4], 0, 0);
    }
L_002001a4:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_002001a8:;
    {
        uint32_t wb_tmp = cpu->r[3] + + 0x1u;
        cpu->r[1] = rd8(cpu->r[3] + + 0x1u);
        cpu->r[3] = wb_tmp;
    }
L_002001ac:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_002001b0:;
    {
        uint32_t wb_tmp = cpu->r[8] + + 0x1u;
        wr8(cpu->r[8] + + 0x1u, cpu->r[1]);
        cpu->r[8] = wb_tmp;
    }
L_002001b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_002001a8;
        }
    }
L_002001b8:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0x10u);
    }
L_002001bc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_002001c0:;
    {
        wr8(cpu->r[8] + cpu->r[6], cpu->r[3]);
    }
L_002001c4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x10u);
    }
L_002001c8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_002001cc:;
    {
        cpu->r[2] = rd8(cpu->r[4]);
    }
L_002001d0:;
    {
        wr8(cpu->r[3], cpu->r[2]);
    }
L_002001d4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x10u);
    }
L_002001d8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_002001dc:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[6]);
    }
L_002001e0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x002001e4u)) return;
    }
L_002001e4:;
    {
        cpu->r[7] = (~0x00000001u);
    }
L_002001e8:;
    {
        goto L_002000f0;
    }
L_002001ec:;
    {
        cpu->r[0] = rd32(0x002001f4u + + 0x8u);
    }
L_002001f0:;
    {
        cpu->r[0] = add_flags(cpu, 0x002001f8u, cpu->r[0], 0, 0);
    }
L_002001f4:;
    {
        cpu->r[14] = 0x002001f8u; fn_00208298(cpu);
    }
L_002001f8:;
    {
        goto L_002000d0;
    }
}

/* _ZN3vox19FileSystemInterface10SetArchiveEPKcbbb @ 00200200 (arm) */
void fn_00200200(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00200200:;
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
L_00200204:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_00200208:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_0020020c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00200210:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_00200214:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_00200218:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0020021c:;
    {
        cpu->r[6] = rd8(cpu->r[13] + + 0x20u);
    }
L_00200220:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0020023c;
        }
    }
L_00200224:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00200228:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0020022c:;
    {
        cpu->r[14] = 0x00200234u;
    }
L_00200230:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00200234u)) return;
    }
L_00200234:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_00200238:;
    {
        cpu->r[14] = 0x0020023cu; fn_00097dc8(cpu);
    }
L_0020023c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00200240:;
    {
        cpu->r[0] = 0x0000003cu;
    }
L_00200244:;
    {
        cpu->r[14] = 0x00200248u; fn_00097dd0(cpu);
    }
L_00200248:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0020024c:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_00200250:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_00200254:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00200258:;
    {
        cpu->r[14] = 0x0020025cu; fn_00202780(cpu);
    }
L_0020025c:;
    {
        wr8(cpu->r[4] + + 0x4u, cpu->r[6]);
    }
L_00200260:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[5]);
    }
L_00200264:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x4u);
    }
L_00200268:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0020026c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00200270:;
    {
        if (cond_test(cpu, 2)) {
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00200274u)) return;
        }
    }
L_00200274:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00200278:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0020027c:;
    {
        cpu->r[14] = 0x00200284u;
    }
L_00200280:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00200284u)) return;
    }
L_00200284:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_00200288:;
    {
        cpu->r[14] = 0x0020028cu; fn_00097dc8(cpu);
    }
L_0020028c:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_00200290:;
    {
        wr8(cpu->r[4] + + 0x4u, cpu->r[6]);
    }
L_00200294:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[6]);
    }
L_00200298:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0020029cu)) return;
    }
}

/* _ZN3vox19FileSystemInterface11GetInstanceEv @ 0020029c (arm) */
void fn_0020029c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0020029c:;
    {
        cpu->r[3] = rd32(0x002002a4u + + 0x24u);
    }
L_002002a0:;
    {
        cpu->r[2] = rd32(0x002002a8u + + 0x24u);
    }
L_002002a4:;
    {
        cpu->r[3] = add_flags(cpu, 0x002002acu, cpu->r[3], 0, 0);
    }
L_002002a8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_002002ac:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_002002b0:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_002002b4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_002002b8:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x002002bcu)) return;
        }
    }
L_002002bc:;
    {
        cpu->r[14] = 0x002002c0u; fn_0020099c(cpu);
    }
L_002002c0:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_002002c4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x002002c8u)) return;
    }
}

/* _ZN3vox19FileSystemInterfaceD2Ev @ 002002d0 (arm) */
void fn_002002d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_002002d0:;
    {
        cpu->r[2] = rd32(0x002002d8u + + 0xa0u);
    }
L_002002d4:;
    {
        cpu->r[1] = rd32(0x002002dcu + + 0xa0u);
    }
L_002002d8:;
    {
        cpu->r[2] = add_flags(cpu, 0x002002e0u, cpu->r[2], 0, 0);
    }
L_002002dc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_002002e0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_002002e4:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_002002e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_002002ec:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_002002f0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_002002f4:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_002002f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0020031c;
        }
    }
L_002002fc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00200300:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00200304:;
    {
        cpu->r[14] = 0x0020030cu;
    }
L_00200308:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0020030cu)) return;
    }
L_0020030c:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x8u);
    }
L_00200310:;
    {
        cpu->r[14] = 0x00200314u; fn_00097dc8(cpu);
    }
L_00200314:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00200318:;
    {
        wr32(cpu->r[7] + + 0x8u, cpu->r[3]);
    }
L_0020031c:;
    {
        cpu->r[4] = rd32(cpu->r[7] + + 0xcu);
    }
L_00200320:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_00200324:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 1);
    }
L_00200328:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00200368;
        }
    }
L_0020032c:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_00200330:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000008u;
        cpu->r[5] = rd32(cpu->r[3]);
        cpu->r[3] = wb_tmp;
    }
L_00200334:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x14u);
    }
L_00200338:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0020033c:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00200340:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00200350;
        }
    }
L_00200344:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00200348:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00200350;
        }
    }
L_0020034c:;
    {
        cpu->r[14] = 0x00200350u; fn_00097dc8(cpu);
    }
L_00200350:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00200354:;
    {
        cpu->r[4] = cpu->r[5];
    }
L_00200358:;
    {
        cpu->r[14] = 0x0020035cu; fn_00097dc8(cpu);
    }
L_0020035c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_00200360:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0020032c;
        }
    }
L_00200364:;
    {
        cpu->r[4] = cpu->r[6];
    }
L_00200368:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[4]);
    }
L_0020036c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00200370:;
    {
        wr32(cpu->r[7] + + 0xcu, cpu->r[4]);
    }
L_00200374:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00200378u)) return;
    }
}

/* _ZN3vox19FileSystemInterface13PushDirectoryEPc @ 00200380 (arm) */
void fn_00200380(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00200380:;
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
L_00200384:;
    {
        cpu->r[5] = rd32(0x0020038cu + + 0x128u);
    }
L_00200388:;
    {
        cpu->r[8] = rd32(0x00200390u + + 0x128u);
    }
L_0020038c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_00200390:;
    {
        cpu->r[5] = add_flags(cpu, 0x00200398u, cpu->r[5], 0, 0);
    }
L_00200394:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00200398:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0020039c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_002003a0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_002003a4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_002003a8:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_002003ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0020045c;
        }
    }
L_002003b0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_002003b4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_002003b8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_002003bc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_002003c0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_002003c4:;
    {
        cpu->r[14] = 0x002003c8u; fn_001f4318(cpu);
    }
L_002003c8:;
    {
        cpu->r[0] = 0x00000020u;
    }
L_002003cc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_002003d0:;
    {
        cpu->r[14] = 0x002003d4u; fn_00097dd0(cpu);
    }
L_002003d4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_002003d8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_002003dc:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[0]);
    }
L_002003e0:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[0]);
    }
L_002003e4:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x20u);
    }
L_002003e8:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x1cu);
    }
L_002003ec:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[11], cpu->r[9], 1, 0);
    }
L_002003f0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 1);
    }
L_002003f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00200478;
        }
    }
L_002003f8:;
    {
        cpu->r[0] = rd32(0x00200400u + + 0xbcu);
    }
L_002003fc:;
    {
        cpu->r[0] = add_flags(cpu, 0x00200404u, cpu->r[0], 0, 0);
    }
L_00200400:;
    {
        cpu->r[14] = 0x00200404u; fn_00208298(cpu);
    }
L_00200404:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x1cu);
    }
L_00200408:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[11], 1, 1);
    }
L_0020040c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00200420;
        }
    }
L_00200410:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_00200414:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00200418:;
    {
        cpu->r[14] = 0x0020041cu; imp_memcpy(cpu); /* memcpy */
    }
L_0020041c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
    }
L_00200420:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[0]);
    }
L_00200424:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_00200428:;
    {
        wr8(cpu->r[0], cpu->r[9]);
    }
L_0020042c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_00200430:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x10u);
    }
L_00200434:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_00200438:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[10], 1, 1);
    }
L_0020043c:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[2]);
        wr32(ea + 4u, cpu->r[3]);
    }
L_00200440:;
    {
        wr32(cpu->r[7] + + 0x10u, cpu->r[4]);
    }
L_00200444:;
    {
        wr32(cpu->r[3], cpu->r[4]);
    }
L_00200448:;
    {
        if (cond_test(cpu, 1)) {
        goto L_002004a8;
        }
    }
L_0020044c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[9], 1, 1);
    }
L_00200450:;
    {
        if (cond_test(cpu, 1)) {
        goto L_002004a8;
        }
    }
L_00200454:;
    {
        cpu->r[14] = 0x00200458u; fn_00097dc8(cpu);
    }
L_00200458:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0020045c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00200460:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_00200464:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00200468:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0020046c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_002004b0;
        }
    }
L_00200470:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_00200474:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00200478u)) return;
    }
L_00200478:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000010u, 1, 1);
    }
L_0020047c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00200408;
        }
    }
L_00200480:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00200484:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00200488:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_0020048c:;
    {
        cpu->r[14] = 0x00200490u; fn_00097dd0(cpu);
    }
L_00200490:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_00200494:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[0]);
    }
L_00200498:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_0020049c:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[0]);
    }
L_002004a0:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_002004a4:;
    {
        goto L_00200408;
    }
L_002004a8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_002004ac:;
    {
        goto L_0020045c;
    }
L_002004b0:;
    {
        cpu->r[14] = 0x002004b4u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_002004b4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] & shifter(cpu->r[0], 2, 1u, &shc); cpu->r[10] = v;
        }
    }
L_002004b8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_002004bc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[2] & cpu->r[12]; cpu->r[14] = v;
        }
    }
}

/* _ZN3vox19FileSystemInterface8OpenFileEPcNS_17VoxFileAccessModeE @ 002004c0 (arm) */
void fn_002004c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_002004c0:;
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
L_002004c4:;
    {
        cpu->r[5] = rd32(0x002004ccu + + 0x2d8u);
    }
L_002004c8:;
    {
        cpu->r[7] = rd32(0x002004d0u + + 0x2d8u);
    }
L_002004cc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_002004d0:;
    {
        cpu->r[5] = add_flags(cpu, 0x002004d8u, cpu->r[5], 0, 0);
    }
L_002004d4:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_002004d8:;
    {
        cpu->r[1] = rd32(0x002004e0u + + 0x2ccu);
    }
L_002004dc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_002004e0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_002004e4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_002004e8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_002004ec:;
    {
        cpu->r[1] = add_flags(cpu, 0x002004f4u, cpu->r[1], 0, 0);
    }
L_002004f0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_002004f4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_002004f8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_002004fc:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_00200500:;
    {
        cpu->r[14] = 0x00200504u; fn_001f4318(cpu);
    }
L_00200504:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00200508:;
    {
        uint32_t wb_tmp = cpu->r[2] + + 0xcu;
        cpu->r[3] = rd32(cpu->r[2] + + 0xcu);
        cpu->r[2] = wb_tmp;
    }
L_0020050c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00200510:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0020057c;
        }
    }
L_00200514:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00200518:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0020051c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00200514;
        }
    }
L_00200520:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_00200524:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00200528:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 1);
    }
L_0020052c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0020057c;
        }
    }
L_00200530:;
    {
        cpu->r[11] = rd32(cpu->r[3] + + 0x18u);
    }
L_00200534:;
    {
        cpu->r[9] = rd32(cpu->r[3] + + 0x1cu);
    }
L_00200538:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_0020053c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_00200540:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[11], cpu->r[9], 1, 0);
    }
L_00200544:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 0);
    }
L_00200548:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[2], 1, 1);
    }
L_0020054c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0020073c;
        }
    }
L_00200550:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_00200554:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00200770;
        }
    }
L_00200558:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_0020055c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00200560:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0020057c;
        }
    }
L_00200564:;
    {
        cpu->r[1] = rd8(cpu->r[3]);
    }
L_00200568:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0020056c:;
    {
        wr8(cpu->r[0] + cpu->r[10], cpu->r[1]);
    }
L_00200570:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_00200574:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_00200578:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_0020057c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00200580:;
    {
        cpu->r[14] = 0x00200584u; imp_strlen(cpu); /* strlen */
    }
L_00200584:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00200588:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], cpu->r[0], 0, 0);
    }
L_0020058c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00200590:;
    {
        cpu->r[14] = 0x00200594u; fn_0020007c(cpu);
    }
L_00200594:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_00200598:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0020059c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_002005ac;
        }
    }
L_002005a0:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x4u);
    }
L_002005a4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_002005a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_002006d0;
        }
    }
L_002005ac:;
    {
        cpu->r[11] = rd32(0x002005b4u + + 0x1fcu);
    }
L_002005b0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_002005b4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_002005b8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_002005bc:;
    {
        cpu->r[14] = 0x002005c4u;
    }
L_002005c0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x002005c4u)) return;
    }
L_002005c4:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_002005c8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = cpu->r[10];
        }
    }
L_002005cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_002005f8;
        }
    }
L_002005d0:;
    {
        cpu->r[0] = 0x0000000cu;
    }
L_002005d4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_002005d8:;
    {
        cpu->r[14] = 0x002005dcu; fn_00097dd0(cpu);
    }
L_002005dc:;
    {
        cpu->r[3] = rd32(0x002005e4u + + 0x1d0u);
    }
L_002005e0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_002005e4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_002005e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_002005ec:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_002005f0:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_002005f4:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[3]);
        wr32(ea + 4u, cpu->r[10]);
    }
L_002005f8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_002005fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00200600:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00200610;
        }
    }
L_00200604:;
    {
        cpu->r[9] = rd8(cpu->r[4] + + 0x4u);
    }
L_00200608:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_0020060c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00200660;
        }
    }
L_00200610:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_00200614:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_00200618:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0020061c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00200620:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00200624:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00200758;
        }
    }
L_00200628:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_0020062c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 1);
    }
L_00200630:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00200640;
        }
    }
L_00200634:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00200638:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00200640;
        }
    }
L_0020063c:;
    {
        cpu->r[14] = 0x00200640u; fn_00097dc8(cpu);
    }
L_00200640:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00200644:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00200648:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0020064c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00200650:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00200654:;
    {
        if (cond_test(cpu, 2)) {
        goto L_002007a0;
        }
    }
L_00200658:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_0020065c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00200660u)) return;
    }
L_00200660:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_00200664:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00200610;
        }
    }
L_00200668:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0020066c:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_00200670:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_00200674:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00200678:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0020067c:;
    {
        cpu->r[14] = 0x00200684u;
    }
L_00200680:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00200684u)) return;
    }
L_00200684:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00200688:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00200628;
        }
    }
L_0020068c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8u);
    }
L_00200690:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_00200694:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_00200698:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x1cu);
    }
L_0020069c:;
    {
        cpu->r[14] = 0x002006a4u;
    }
L_002006a0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x002006a4u)) return;
    }
L_002006a4:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_002006a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00200628;
        }
    }
L_002006ac:;
    {
        cpu->r[0] = 0x00000018u;
    }
L_002006b0:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_002006b4:;
    {
        cpu->r[14] = 0x002006b8u; fn_00097dd0(cpu);
    }
L_002006b8:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_002006bc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_002006c0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_002006c4:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_002006c8:;
    {
        cpu->r[14] = 0x002006ccu; fn_001ffd08(cpu);
    }
L_002006cc:;
    {
        goto L_00200610;
    }
L_002006d0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_002006d4:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_002006d8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_002006dc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_002006e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_002006e4:;
    {
        cpu->r[14] = 0x002006ecu;
    }
L_002006e8:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x002006ecu)) return;
    }
L_002006ec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_002006f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_002005ac;
        }
    }
L_002006f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_002006f8:;
    {
        cpu->r[11] = rd32(0x00200700u + + 0xb0u);
    }
L_002006fc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_00200700:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x1cu);
    }
L_00200704:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_00200708:;
    {
        cpu->r[14] = 0x00200710u;
    }
L_0020070c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00200710u)) return;
    }
L_00200710:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00200714:;
    {
        if (cond_test(cpu, 1)) {
        goto L_002005b0;
        }
    }
L_00200718:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0020071c:;
    {
        cpu->r[0] = 0x00000018u;
    }
L_00200720:;
    {
        cpu->r[14] = 0x00200724u; fn_00097dd0(cpu);
    }
L_00200724:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00200728:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_0020072c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00200730:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00200734:;
    {
        cpu->r[14] = 0x00200738u; fn_001ffd08(cpu);
    }
L_00200738:;
    {
        goto L_002005f8;
    }
L_0020073c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00200740:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00200788;
        }
    }
L_00200744:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[9], cpu->r[2], 0, 0);
    }
L_00200748:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0020074c:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_00200750:;
    {
        cpu->r[14] = 0x00200754u; fn_0020007c(cpu);
    }
L_00200754:;
    {
        goto L_0020057c;
    }
L_00200758:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_0020075c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00200760:;
    {
        cpu->r[14] = 0x00200768u;
    }
L_00200764:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00200768u)) return;
    }
L_00200768:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_0020076c:;
    {
        goto L_00200628;
    }
L_00200770:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_00200774:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_00200778:;
    {
        cpu->r[14] = 0x0020077cu; imp_memcpy(cpu); /* memcpy */
    }
L_0020077c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_00200780:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_00200784:;
    {
        goto L_00200558;
    }
L_00200788:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_0020078c:;
    {
        cpu->r[14] = 0x00200790u; imp_memcpy(cpu); /* memcpy */
    }
L_00200790:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_00200794:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_00200798:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0020079c:;
    {
        goto L_00200744;
    }
L_002007a0:;
    {
        cpu->r[14] = 0x002007a4u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_002007a4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] & shifter(cpu->r[0], 1, 30u, &shc); cpu->r[9] = v;
        }
    }
L_002007a8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_002007ac:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[2] & shifter(cpu->r[8], 2, 11u, &shc); uint32_t t = v; if (guest_pc_write(cpu, t, entry_lr, 0x002007b0u)) return;
        }
    }
L_002007b0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[12], 1, 15u, &shc); cpu->r[0] = v;
        }
    }
L_002007b4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[12], 3, (cpu->r[8] & 0xffu), &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN3vox15FileSystemStdioC2Ev @ 002007b8 (arm) */
void fn_002007b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_002007b8:;
    {
        cpu->r[3] = rd32(0x002007c0u + + 0x84u);
    }
L_002007bc:;
    {
        cpu->r[13] -= 32u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[9]);
        wr32(cpu->r[13] + 24u, cpu->r[10]);
        wr32(cpu->r[13] + 28u, cpu->r[11]);
    }
L_002007c0:;
    {
        cpu->r[6] = rd32(0x002007c8u + + 0x80u);
    }
L_002007c4:;
    {
        cpu->r[3] = add_flags(cpu, 0x002007ccu, cpu->r[3], 0, 0);
    }
L_002007c8:;
    {
        cpu->r[1] = rd32(0x002007d0u + + 0x7cu);
    }
L_002007cc:;
    {
        cpu->r[12] = rd32(0x002007d4u + + 0x7cu);
    }
L_002007d0:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_002007d4:;
    {
        cpu->r[10] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_002007d8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_002007dc:;
    {
        cpu->r[6] = rd32(0x002007e4u + + 0x70u);
    }
L_002007e0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_002007e4:;
    {
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_002007e8:;
    {
        cpu->r[8] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_002007ec:;
    {
        cpu->r[6] = rd32(0x002007f4u + + 0x64u);
    }
L_002007f0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_002007f4:;
    {
        wr32(cpu->r[1] + + 0xcu, cpu->r[10]);
    }
L_002007f8:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[5]);
    }
L_002007fc:;
    {
        cpu->r[7] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_00200800:;
    {
        cpu->r[6] = rd32(0x00200808u + + 0x54u);
    }
L_00200804:;
    {
        wr32(cpu->r[0], cpu->r[12]);
    }
L_00200808:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[4]);
    }
L_0020080c:;
    {
        cpu->r[11] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_00200810:;
    {
        cpu->r[6] = rd32(0x00200818u + + 0x48u);
    }
L_00200814:;
    {
        wr32(cpu->r[1] + + 0x10u, cpu->r[8]);
    }
L_00200818:;
    {
        wr32(cpu->r[1] + + 0x14u, cpu->r[7]);
    }
L_0020081c:;
    {
        cpu->r[9] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_00200820:;
    {
        cpu->r[6] = rd32(0x00200828u + + 0x3cu);
    }
L_00200824:;
    {
        wr32(cpu->r[1], cpu->r[11]);
    }
L_00200828:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[9]);
    }
L_0020082c:;
    {
        cpu->r[6] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_00200830:;
    {
        wr8(cpu->r[0] + + 0x4u, cpu->r[5]);
    }
L_00200834:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[4]);
    }
L_00200838:;
    {
        wr32(cpu->r[1] + + 0x8u, cpu->r[6]);
    }
L_0020083c:;
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
        cpu->r[11] = v7;
        cpu->r[13] += 32u;
    }
L_00200840:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox15FileSystemStdioC1Ev @ 00200868 (arm) */
void fn_00200868(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00200868:;
    {
        cpu->r[3] = rd32(0x00200870u + + 0x84u);
    }
L_0020086c:;
    {
        cpu->r[13] -= 32u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[9]);
        wr32(cpu->r[13] + 24u, cpu->r[10]);
        wr32(cpu->r[13] + 28u, cpu->r[11]);
    }
L_00200870:;
    {
        cpu->r[6] = rd32(0x00200878u + + 0x80u);
    }
L_00200874:;
    {
        cpu->r[3] = add_flags(cpu, 0x0020087cu, cpu->r[3], 0, 0);
    }
L_00200878:;
    {
        cpu->r[1] = rd32(0x00200880u + + 0x7cu);
    }
L_0020087c:;
    {
        cpu->r[12] = rd32(0x00200884u + + 0x7cu);
    }
L_00200880:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00200884:;
    {
        cpu->r[10] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_00200888:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_0020088c:;
    {
        cpu->r[6] = rd32(0x00200894u + + 0x70u);
    }
L_00200890:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00200894:;
    {
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_00200898:;
    {
        cpu->r[8] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_0020089c:;
    {
        cpu->r[6] = rd32(0x002008a4u + + 0x64u);
    }
L_002008a0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_002008a4:;
    {
        wr32(cpu->r[1] + + 0xcu, cpu->r[10]);
    }
L_002008a8:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[5]);
    }
L_002008ac:;
    {
        cpu->r[7] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_002008b0:;
    {
        cpu->r[6] = rd32(0x002008b8u + + 0x54u);
    }
L_002008b4:;
    {
        wr32(cpu->r[0], cpu->r[12]);
    }
L_002008b8:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[4]);
    }
L_002008bc:;
    {
        cpu->r[11] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_002008c0:;
    {
        cpu->r[6] = rd32(0x002008c8u + + 0x48u);
    }
L_002008c4:;
    {
        wr32(cpu->r[1] + + 0x10u, cpu->r[8]);
    }
L_002008c8:;
    {
        wr32(cpu->r[1] + + 0x14u, cpu->r[7]);
    }
L_002008cc:;
    {
        cpu->r[9] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_002008d0:;
    {
        cpu->r[6] = rd32(0x002008d8u + + 0x3cu);
    }
L_002008d4:;
    {
        wr32(cpu->r[1], cpu->r[11]);
    }
L_002008d8:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[9]);
    }
L_002008dc:;
    {
        cpu->r[6] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_002008e0:;
    {
        wr8(cpu->r[0] + + 0x4u, cpu->r[5]);
    }
L_002008e4:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[4]);
    }
L_002008e8:;
    {
        wr32(cpu->r[1] + + 0x8u, cpu->r[6]);
    }
L_002008ec:;
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
        cpu->r[11] = v7;
        cpu->r[13] += 32u;
    }
L_002008f0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox15FileSystemStdioD1Ev @ 00200918 (arm) */
void fn_00200918(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00200918:;
    {
        cpu->r[3] = rd32(0x00200920u + + 0x24u);
    }
L_0020091c:;
    {
        cpu->r[2] = rd32(0x00200924u + + 0x24u);
    }
L_00200920:;
    {
        cpu->r[3] = add_flags(cpu, 0x00200928u, cpu->r[3], 0, 0);
    }
L_00200924:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00200928:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0020092c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00200930:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00200934:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00200938:;
    {
        cpu->r[14] = 0x0020093cu; fn_002002d0(cpu);
    }
L_0020093c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00200940:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00200944u)) return;
    }
}

/* _ZN3vox15FileSystemStdioD0Ev @ 0020094c (arm) */
void fn_0020094c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0020094c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00200950:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00200954:;
    {
        cpu->r[14] = 0x00200958u; fn_00200918(cpu);
    }
L_00200958:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0020095c:;
    {
        cpu->r[14] = 0x00200960u; fn_0018ba20(cpu);
    }
L_00200960:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00200964:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00200968u)) return;
    }
}

/* _ZN3vox15FileSystemStdioD2Ev @ 00200968 (arm) */
void fn_00200968(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00200968:;
    {
        cpu->r[3] = rd32(0x00200970u + + 0x24u);
    }
L_0020096c:;
    {
        cpu->r[2] = rd32(0x00200974u + + 0x24u);
    }
L_00200970:;
    {
        cpu->r[3] = add_flags(cpu, 0x00200978u, cpu->r[3], 0, 0);
    }
L_00200974:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00200978:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0020097c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00200980:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00200984:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00200988:;
    {
        cpu->r[14] = 0x0020098cu; fn_002002d0(cpu);
    }
L_0020098c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00200990:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00200994u)) return;
    }
}

/* _ZN3vox16VoxNewFileSystemEv @ 0020099c (arm) */
void fn_0020099c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0020099c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_002009a0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_002009a4:;
    {
        cpu->r[0] = 0x00000014u;
    }
L_002009a8:;
    {
        cpu->r[14] = 0x002009acu; fn_00097dd0(cpu);
    }
L_002009ac:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_002009b0:;
    {
        cpu->r[14] = 0x002009b4u; fn_00200868(cpu);
    }
L_002009b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_002009b8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x002009bcu)) return;
    }
}

/* _ZN3vox10closeStdIOEPv @ 002009bc (arm) */
void fn_002009bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_002009bc:;
    {
        imp_fclose(cpu); /* tail fclose */ return;
    }
}

/* _ZN3vox9openStdIOEPKcNS_17VoxFileAccessModeE @ 002009c0 (arm) */
void fn_002009c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_002009c0:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000000bu, 1, 1);
    }
L_002009c4:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[1]) {
        case 0: goto L_00200a10;
        case 1: goto L_00200a1c;
        case 2: goto L_00200a28;
        case 3: goto L_00200a34;
        case 4: goto L_00200a40;
        case 5: goto L_00200a4c;
        case 6: goto L_00200a58;
        case 7: goto L_00200a64;
        case 8: goto L_00200a70;
        case 9: goto L_00200a7c;
        case 10: goto L_00200a88;
        case 11: goto L_002009fc;
        default: guest_unimplemented(cpu, 0x002009c4u); return; }
        }
    }
L_002009c8:;
    {
        goto L_00200a08;
    }
L_002009fc:;
    {
        cpu->r[1] = rd32(0x00200a04u + + 0x90u);
    }
L_00200a00:;
    {
        cpu->r[1] = add_flags(cpu, 0x00200a08u, cpu->r[1], 0, 0);
    }
L_00200a04:;
    {
        imp_fopen(cpu); /* tail fopen */ return;
    }
L_00200a08:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00200a0c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00200a10:;
    {
        cpu->r[1] = rd32(0x00200a18u + + 0x80u);
    }
L_00200a14:;
    {
        cpu->r[1] = add_flags(cpu, 0x00200a1cu, cpu->r[1], 0, 0);
    }
L_00200a18:;
    {
        imp_fopen(cpu); /* tail fopen */ return;
    }
L_00200a1c:;
    {
        cpu->r[1] = rd32(0x00200a24u + + 0x78u);
    }
L_00200a20:;
    {
        cpu->r[1] = add_flags(cpu, 0x00200a28u, cpu->r[1], 0, 0);
    }
L_00200a24:;
    {
        imp_fopen(cpu); /* tail fopen */ return;
    }
L_00200a28:;
    {
        cpu->r[1] = rd32(0x00200a30u + + 0x70u);
    }
L_00200a2c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00200a34u, cpu->r[1], 0, 0);
    }
L_00200a30:;
    {
        imp_fopen(cpu); /* tail fopen */ return;
    }
L_00200a34:;
    {
        cpu->r[1] = rd32(0x00200a3cu + + 0x68u);
    }
L_00200a38:;
    {
        cpu->r[1] = add_flags(cpu, 0x00200a40u, cpu->r[1], 0, 0);
    }
L_00200a3c:;
    {
        imp_fopen(cpu); /* tail fopen */ return;
    }
L_00200a40:;
    {
        cpu->r[1] = rd32(0x00200a48u + + 0x60u);
    }
L_00200a44:;
    {
        cpu->r[1] = add_flags(cpu, 0x00200a4cu, cpu->r[1], 0, 0);
    }
L_00200a48:;
    {
        imp_fopen(cpu); /* tail fopen */ return;
    }
L_00200a4c:;
    {
        cpu->r[1] = rd32(0x00200a54u + + 0x58u);
    }
L_00200a50:;
    {
        cpu->r[1] = add_flags(cpu, 0x00200a58u, cpu->r[1], 0, 0);
    }
L_00200a54:;
    {
        imp_fopen(cpu); /* tail fopen */ return;
    }
L_00200a58:;
    {
        cpu->r[1] = rd32(0x00200a60u + + 0x50u);
    }
L_00200a5c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00200a64u, cpu->r[1], 0, 0);
    }
L_00200a60:;
    {
        imp_fopen(cpu); /* tail fopen */ return;
    }
L_00200a64:;
    {
        cpu->r[1] = rd32(0x00200a6cu + + 0x48u);
    }
L_00200a68:;
    {
        cpu->r[1] = add_flags(cpu, 0x00200a70u, cpu->r[1], 0, 0);
    }
L_00200a6c:;
    {
        imp_fopen(cpu); /* tail fopen */ return;
    }
L_00200a70:;
    {
        cpu->r[1] = rd32(0x00200a78u + + 0x40u);
    }
L_00200a74:;
    {
        cpu->r[1] = add_flags(cpu, 0x00200a7cu, cpu->r[1], 0, 0);
    }
L_00200a78:;
    {
        imp_fopen(cpu); /* tail fopen */ return;
    }
L_00200a7c:;
    {
        cpu->r[1] = rd32(0x00200a84u + + 0x38u);
    }
L_00200a80:;
    {
        cpu->r[1] = add_flags(cpu, 0x00200a88u, cpu->r[1], 0, 0);
    }
L_00200a84:;
    {
        imp_fopen(cpu); /* tail fopen */ return;
    }
L_00200a88:;
    {
        cpu->r[1] = rd32(0x00200a90u + + 0x30u);
    }
L_00200a8c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00200a94u, cpu->r[1], 0, 0);
    }
L_00200a90:;
    {
        imp_fopen(cpu); /* tail fopen */ return;
    }
}

/* _ZN3vox9tellStdIOEPv @ 00200ac4 (arm) */
void fn_00200ac4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00200ac4:;
    {
        imp_ftell(cpu); /* tail ftell */ return;
    }
}

/* _ZN3vox9seekStdIOEPviNS_17VoxFileSeekOriginE @ 00200ac8 (arm) */
void fn_00200ac8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00200ac8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_00200acc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00200adc;
        }
    }
L_00200ad0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_00200ad4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_00200ad8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_00200adc:;
    {
        imp_fseek(cpu); /* tail fseek */ return;
    }
}

/* _ZN3vox10writeStdIOEPKviiPv @ 00200ae0 (arm) */
void fn_00200ae0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00200ae0:;
    {
        imp_fwrite(cpu); /* tail fwrite */ return;
    }
}

/* _ZN3vox9readStdIOEPviiS0_ @ 00200ae4 (arm) */
void fn_00200ae4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00200ae4:;
    {
        imp_fread(cpu); /* tail fread */ return;
    }
}

/* VoxFree_c @ 00200ae8 (arm) */
void fn_00200ae8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00200ae8:;
    {
        return fn_00097dc8(cpu);
    }
}

/* VoxAlloc_c @ 00200aec (arm) */
void fn_00200aec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00200aec:;
    {
        return fn_00097dd8(cpu);
    }
}

/* _ZN3vox18VoxMSWavSubDecoder17GoToNextDataChunkEv @ 00200af0 (arm) */
void fn_00200af0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00200af0:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x8u);
    }
L_00200af4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00200af8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00200afc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00200b00:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00200b04u)) return;
        }
    }
L_00200b04:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_00200b08:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00200b0c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00200b10u)) return;
        }
    }
L_00200b10:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xcu);
    }
L_00200b14:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00200b18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00200b6c;
        }
    }
L_00200b1c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_00200b20:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00200b24:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
        }
    }
L_00200b28:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[1] + + 0x28u, cpu->r[2]);
        }
    }
L_00200b2c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
        }
    }
L_00200b30:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00200b34u)) return;
        }
    }
L_00200b34:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_00200b38:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00200b3c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00200b40:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00200b44:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_00200b48:;
    {
        cpu->r[14] = 0x00200b50u;
    }
L_00200b4c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00200b50u)) return;
    }
L_00200b50:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_00200b54:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_00200b58:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_00200b5c:;
    {
        wr32(cpu->r[3] + + 0x28u, cpu->r[2]);
    }
L_00200b60:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00200b64:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[3]);
    }
L_00200b68:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00200b6cu)) return;
    }
L_00200b6c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x38u);
    }
L_00200b70:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_00200b74:;
    {
        goto L_00200b34;
    }
}

/* _ZN3vox10CZipReader12getFileCountEv @ 00200b78 (arm) */
void fn_00200b78(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00200b78:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x34u);
    }
L_00200b7c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK3vox10StringCompclERKSbIcSt11char_traitsIcENS_10SAllocatorIcLNS_10VoxMemHintE0EEEES8_ @ 00200b80 (arm) */
void fn_00200b80(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00200b80:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00200b84:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x14u);
    }
L_00200b88:;
    {
        cpu->r[5] = rd32(cpu->r[1] + + 0x10u);
    }
L_00200b8c:;
    {
        cpu->r[4] = rd32(cpu->r[2] + + 0x10u);
    }
L_00200b90:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x14u);
    }
L_00200b94:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 0);
    }
L_00200b98:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 0);
    }
L_00200b9c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 1);
    }
L_00200ba0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[4];
        }
    }
L_00200ba4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = cpu->r[5];
        }
    }
L_00200ba8:;
    {
        cpu->r[14] = 0x00200bacu; imp_memcmp(cpu); /* memcmp */
    }
L_00200bac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00200bb0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00200bc8;
        }
    }
L_00200bb4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_00200bb8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_00200bbc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00200bc8;
        }
    }
L_00200bc0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00200bc4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00200bc8:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 31u, &shc); cpu->r[0] = v;
    }
L_00200bcc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00200bd0u)) return;
    }
}

/* _ZNSt4priv8_Rb_treeISbIcSt11char_traitsIcEN3vox10SAllocatorIcLNS3_10VoxMemHintE0EEEENS3_10StringCompESt4pairIKS7_NS3_13SZipFileEntryEENS_10_Select1stISC_EENS_11_MapTraitsTISC_EENS4_ISC_LS5_0EEEE8_M_eraseEPNS_18_Rb_tree_node_baseE @ 00200bd0 (arm) */
void fn_00200bd0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00200bd0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00200bd4:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00200bd8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00200bdc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00200be0u)) return;
        }
    }
L_00200be0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00200be4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_00200be8:;
    {
        cpu->r[14] = 0x00200becu; fn_00200bd0(cpu);
    }
L_00200bec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000058u, 0, 0);
    }
L_00200bf0:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x8u);
    }
L_00200bf4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x14u);
    }
L_00200bf8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_00200bfc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00200c0c;
        }
    }
L_00200c00:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00200c04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00200c0c;
        }
    }
L_00200c08:;
    {
        cpu->r[14] = 0x00200c0cu; fn_00097dc8(cpu);
    }
L_00200c0c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000040u, 0, 0);
    }
L_00200c10:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x14u);
    }
L_00200c14:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_00200c18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00200c28;
        }
    }
L_00200c1c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00200c20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00200c28;
        }
    }
L_00200c24:;
    {
        cpu->r[14] = 0x00200c28u; fn_00097dc8(cpu);
    }
L_00200c28:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000028u, 0, 0);
    }
L_00200c2c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x14u);
    }
L_00200c30:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_00200c34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00200c44;
        }
    }
L_00200c38:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00200c3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00200c44;
        }
    }
L_00200c40:;
    {
        cpu->r[14] = 0x00200c44u; fn_00097dc8(cpu);
    }
L_00200c44:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000010u, 0, 0);
    }
L_00200c48:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x14u);
    }
L_00200c4c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_00200c50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00200c60;
        }
    }
L_00200c54:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00200c58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00200c60;
        }
    }
L_00200c5c:;
    {
        cpu->r[14] = 0x00200c60u; fn_00097dc8(cpu);
    }
L_00200c60:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00200c64:;
    {
        cpu->r[14] = 0x00200c68u; fn_00097dc8(cpu);
    }
L_00200c68:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00200c6c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00200be0;
        }
    }
L_00200c70:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00200c74u)) return;
    }
}

/* _ZN3vox10CZipReaderD1Ev @ 00200c74 (arm) */
void fn_00200c74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00200c74:;
    {
        cpu->r[3] = rd32(0x00200c7cu + + 0x8cu);
    }
L_00200c78:;
    {
        cpu->r[2] = rd32(0x00200c80u + + 0x8cu);
    }
L_00200c7c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00200c84u, cpu->r[3], 0, 0);
    }
L_00200c80:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x4u);
    }
L_00200c84:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00200c88:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00200c8c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00200c90:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00200c94:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00200c98:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00200c9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00200cb4;
        }
    }
L_00200ca0:;
    {
        cpu->r[14] = 0x00200ca4u; fn_0020029c(cpu);
    }
L_00200ca4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4u);
    }
L_00200ca8:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00200cac:;
    {
        cpu->r[14] = 0x00200cb4u;
    }
L_00200cb0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00200cb4u)) return;
    }
L_00200cb4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x34u);
    }
L_00200cb8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00200cbc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00200ce4;
        }
    }
L_00200cc0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x00000024u, 0, 0);
    }
L_00200cc4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x28u);
    }
L_00200cc8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00200ccc:;
    {
        cpu->r[14] = 0x00200cd0u; fn_00200bd0(cpu);
    }
L_00200cd0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00200cd4:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[5]);
    }
L_00200cd8:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[5]);
    }
L_00200cdc:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[3]);
    }
L_00200ce0:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_00200ce4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_00200ce8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x14u);
    }
L_00200cec:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_00200cf0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00200d00;
        }
    }
L_00200cf4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00200cf8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00200d00;
        }
    }
L_00200cfc:;
    {
        cpu->r[14] = 0x00200d00u; fn_00097dc8(cpu);
    }
L_00200d00:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00200d04:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00200d08u)) return;
    }
}

/* _ZN3vox10CZipReaderD0Ev @ 00200d10 (arm) */
void fn_00200d10(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00200d10:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00200d14:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00200d18:;
    {
        cpu->r[14] = 0x00200d1cu; fn_00200c74(cpu);
    }
L_00200d1c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00200d20:;
    {
        cpu->r[14] = 0x00200d24u; fn_0018ba20(cpu);
    }
L_00200d24:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00200d28:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00200d2cu)) return;
    }
}

/* _ZN3vox10CZipReaderD2Ev @ 00200d2c (arm) */
void fn_00200d2c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00200d2c:;
    {
        cpu->r[3] = rd32(0x00200d34u + + 0x8cu);
    }
L_00200d30:;
    {
        cpu->r[2] = rd32(0x00200d38u + + 0x8cu);
    }
L_00200d34:;
    {
        cpu->r[3] = add_flags(cpu, 0x00200d3cu, cpu->r[3], 0, 0);
    }
L_00200d38:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x4u);
    }
L_00200d3c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00200d40:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00200d44:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00200d48:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00200d4c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00200d50:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00200d54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00200d6c;
        }
    }
L_00200d58:;
    {
        cpu->r[14] = 0x00200d5cu; fn_0020029c(cpu);
    }
L_00200d5c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4u);
    }
L_00200d60:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00200d64:;
    {
        cpu->r[14] = 0x00200d6cu;
    }
L_00200d68:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00200d6cu)) return;
    }
L_00200d6c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x34u);
    }
L_00200d70:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00200d74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00200d9c;
        }
    }
L_00200d78:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x00000024u, 0, 0);
    }
L_00200d7c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x28u);
    }
L_00200d80:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00200d84:;
    {
        cpu->r[14] = 0x00200d88u; fn_00200bd0(cpu);
    }
L_00200d88:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00200d8c:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[5]);
    }
L_00200d90:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[5]);
    }
L_00200d94:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[3]);
    }
L_00200d98:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_00200d9c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_00200da0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x14u);
    }
L_00200da4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_00200da8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00200db8;
        }
    }
L_00200dac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00200db0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00200db8;
        }
    }
L_00200db4:;
    {
        cpu->r[14] = 0x00200db8u; fn_00097dc8(cpu);
    }
L_00200db8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00200dbc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00200dc0u)) return;
    }
}

/* _ZN3vox10CZipReader22deletePathFromFilenameERSbIcSt11char_traitsIcENS_10SAllocatorIcLNS_10VoxMemHintE0EEEE @ 00200dc8 (arm) */
void fn_00200dc8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00200dc8:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x14u);
    }
L_00200dcc:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x10u);
    }
L_00200dd0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00200dd4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_00200dd8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_00200ddc:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00200de0:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_00200de4:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000005cu, 1, 1);
    }
L_00200de8:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[3], 0x0000002fu, 1, 1);
        }
    }
L_00200dec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00200e18;
        }
    }
L_00200df0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_00200df4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00200df8u)) return;
        }
    }
L_00200df8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00200dfc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00200e00:;
    {
        cpu->r[14] = 0x00200e04u; imp_strlen(cpu); /* strlen */
    }
L_00200e04:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00200e08:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], cpu->r[0], 0, 0);
    }
L_00200e0c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00200e10:;
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
L_00200e14:;
    {
        return fn_001f3660(cpu);
    }
L_00200e18:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_00200e1c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00200e20u)) return;
        }
    }
L_00200e20:;
    {
        uint32_t wb_tmp = cpu->r[5] + - 0x1u;
        cpu->r[3] = rd8(cpu->r[5] + - 0x1u);
        cpu->r[5] = wb_tmp;
    }
L_00200e24:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000005cu, 1, 1);
    }
L_00200e28:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[3], 0x0000002fu, 1, 1);
        }
    }
L_00200e2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00200df0;
        }
    }
L_00200e30:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_00200e34:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00200e38u)) return;
        }
    }
L_00200e38:;
    {
        uint32_t wb_tmp = cpu->r[5] + - 0x1u;
        cpu->r[3] = rd8(cpu->r[5] + - 0x1u);
        cpu->r[5] = wb_tmp;
    }
L_00200e3c:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000005cu, 1, 1);
    }
L_00200e40:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[3], 0x0000002fu, 1, 1);
        }
    }
L_00200e44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00200df0;
        }
    }
L_00200e48:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_00200e4c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00200e38;
        }
    }
L_00200e50:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00200e54u)) return;
    }
}

/* _ZN3vox10CZipReader11getFileInfoEPKcRiS3_ @ 00200e54 (arm) */
void fn_00200e54(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00200e54:;
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
L_00200e58:;
    {
        cpu->r[9] = rd32(0x00200e60u + + 0x234u);
    }
L_00200e5c:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00200e60:;
    {
        cpu->r[1] = rd32(0x00200e68u + + 0x230u);
    }
L_00200e64:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_00200e68:;
    {
        cpu->r[9] = add_flags(cpu, 0x00200e70u, cpu->r[9], 0, 0);
    }
L_00200e6c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00200e70:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00200e74:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00200e78:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00200e7c:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[1]);
    }
L_00200e80:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[1]);
        wr32(ea + 4u, cpu->r[2]);
    }
L_00200e84:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00200e88:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[8]);
    }
L_00200e8c:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[8]);
    }
L_00200e90:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_00200e94:;
    {
        cpu->r[14] = 0x00200e98u; imp_strlen(cpu); /* strlen */
    }
L_00200e98:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[5], cpu->r[0], 0, 0);
    }
L_00200e9c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00200ea0:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[7], cpu->r[5], 1, 0);
    }
L_00200ea4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00200ea8:;
    {
        cpu->r[14] = 0x00200eacu; fn_001d55a8(cpu);
    }
L_00200eac:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[7], 1, 1);
    }
L_00200eb0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_00200eb4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00200ec8;
        }
    }
L_00200eb8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00200ebc:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00200ec0:;
    {
        cpu->r[14] = 0x00200ec4u; imp_memcpy(cpu); /* memcpy */
    }
L_00200ec4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
    }
L_00200ec8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00200ecc:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_00200ed0:;
    {
        wr8(cpu->r[0], cpu->r[3]);
    }
L_00200ed4:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x21u);
    }
L_00200ed8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00200edc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00201080;
        }
    }
L_00200ee0:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x20u);
    }
L_00200ee4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00200ee8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = rd32(cpu->r[13] + + 0x28u);
        }
    }
L_00200eec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00200f40;
        }
    }
L_00200ef0:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x24u);
    }
L_00200ef4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_00200ef8:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[1], 1, 1);
    }
L_00200efc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00200f40;
        }
    }
L_00200f00:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00200f04:;
    {
        cpu->r[2] = rd8(cpu->r[1] + cpu->r[3]);
    }
L_00200f08:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_00200f0c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00200f10:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x00000041u, 1, 0);
    }
L_00200f14:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_00200f18:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000019u, 1, 1);
    }
L_00200f1c:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000020u, 0, 0);
        }
    }
L_00200f20:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[2] = (uint32_t)((uint8_t)cpu->r[2]);
        }
    }
L_00200f24:;
    {
        wr8(cpu->r[1], cpu->r[2]);
    }
L_00200f28:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_00200f2c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_00200f30:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
    }
L_00200f34:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00200f38:;
    {
        if (cond_test(cpu, 4)) {
        goto L_00200f04;
        }
    }
L_00200f3c:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00200f40:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x28u);
    }
L_00200f44:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[4], 0x00000024u, 0, 0);
    }
L_00200f48:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00200f4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00201078;
        }
    }
L_00200f50:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x24u);
    }
L_00200f54:;
    {
        cpu->r[10] = cpu->r[11];
    }
L_00200f58:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 0);
    }
L_00200f5c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x24u);
    }
L_00200f60:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00200f64:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x20u);
    }
L_00200f68:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00200f6c:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 0);
    }
L_00200f70:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[4], 1, 1);
    }
L_00200f74:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[7];
        }
    }
L_00200f78:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = cpu->r[4];
        }
    }
L_00200f7c:;
    {
        cpu->r[14] = 0x00200f80u; imp_memcmp(cpu); /* memcmp */
    }
L_00200f80:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00200f84:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00200fa8;
        }
    }
L_00200f88:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[7], 1, 1);
    }
L_00200f8c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00200fac;
        }
    }
L_00200f90:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_00200f94:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00200f98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00200fbc;
        }
    }
L_00200f9c:;
    {
        cpu->r[10] = cpu->r[5];
    }
L_00200fa0:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_00200fa4:;
    {
        goto L_00200f5c;
    }
L_00200fa8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00200f90;
        }
    }
L_00200fac:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_00200fb0:;
    {
        cpu->r[5] = cpu->r[10];
    }
L_00200fb4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00200fb8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00200f9c;
        }
    }
L_00200fbc:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[5], 1, 1);
    }
L_00200fc0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0020106c;
        }
    }
L_00200fc4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x24u);
    }
L_00200fc8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00200fcc:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x20u);
    }
L_00200fd0:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00200fd4:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 0);
    }
L_00200fd8:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[4], 1, 1);
    }
L_00200fdc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[7];
        }
    }
L_00200fe0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = cpu->r[4];
        }
    }
L_00200fe4:;
    {
        cpu->r[14] = 0x00200fe8u; imp_memcmp(cpu); /* memcmp */
    }
L_00200fe8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00200fec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00201074;
        }
    }
L_00200ff0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[7], 1, 1);
    }
L_00200ff4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00201078;
        }
    }
L_00200ff8:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[5], 1, 1);
    }
L_00200ffc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0020106c;
        }
    }
L_00201000:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[5] + + 0x7cu);
    }
L_00201004:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00201008:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0020106c;
        }
    }
L_0020100c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x70u);
    }
L_00201010:;
    {
        cpu->r[4] = 0x00000001u;
    }
L_00201014:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_00201018:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_0020101c:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_00201020:;
    {
        cpu->r[2] = rd16(cpu->r[5] + + 0x8cu);
    }
L_00201024:;
    {
        cpu->r[3] = rd16(cpu->r[5] + + 0x8au);
    }
L_00201028:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[2], 2, 16u, &shc); cpu->r[3] = v;
    }
L_0020102c:;
    {
        wr32(cpu->r[1], cpu->r[3]);
    }
L_00201030:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[8], 1, 1);
    }
L_00201034:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00201048;
        }
    }
L_00201038:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0020103c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00201048;
        }
    }
L_00201040:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00201044:;
    {
        cpu->r[14] = 0x00201048u; fn_00097dc8(cpu);
    }
L_00201048:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_0020104c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00201050:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[2]);
    }
L_00201054:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00201058:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0020105c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00201060:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00201090;
        }
    }
L_00201064:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_00201068:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0020106cu)) return;
    }
L_0020106c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00201070:;
    {
        goto L_00201030;
    }
L_00201074:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00200ff8;
        }
    }
L_00201078:;
    {
        cpu->r[5] = cpu->r[11];
    }
L_0020107c:;
    {
        goto L_00200ff8;
    }
L_00201080:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00201084:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00201088:;
    {
        cpu->r[14] = 0x0020108cu; fn_00200dc8(cpu);
    }
L_0020108c:;
    {
        goto L_00200ee0;
    }
L_00201090:;
    {
        cpu->r[14] = 0x00201094u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_00201094:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] & shifter(cpu->r[8], 3, 11u, &shc); cpu->r[9] = v;
        }
    }
L_00201098:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
}

/* _ZNSt4priv8_Rb_treeISbIcSt11char_traitsIcEN3vox10SAllocatorIcLNS3_10VoxMemHintE0EEEENS3_10StringCompESt4pairIKS7_NS3_13SZipFileEntryEENS_10_Select1stISC_EENS_11_MapTraitsTISC_EENS4_ISC_LS5_0EEEE14_M_create_nodeERKSC_ @ 0020109c (arm) */
void fn_0020109c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0020109c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_002010a0:;
    {
        cpu->r[0] = 0x00000094u;
    }
L_002010a4:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_002010a8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_002010ac:;
    {
        cpu->r[14] = 0x002010b0u; fn_00097dd0(cpu);
    }
L_002010b0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_002010b4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000010u, 0, 0);
    }
L_002010b8:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[3]);
    }
L_002010bc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_002010c0:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0x10u);
    }
L_002010c4:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_002010c8:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x14u);
    }
L_002010cc:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[8], cpu->r[7], 1, 0);
    }
L_002010d0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_002010d4:;
    {
        cpu->r[14] = 0x002010d8u; fn_001d55a8(cpu);
    }
L_002010d8:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[8], 1, 1);
    }
L_002010dc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x24u);
    }
L_002010e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_002010f4;
        }
    }
L_002010e4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_002010e8:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_002010ec:;
    {
        cpu->r[14] = 0x002010f0u; imp_memcpy(cpu); /* memcpy */
    }
L_002010f0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
    }
L_002010f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000028u, 0, 0);
    }
L_002010f8:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[0]);
    }
L_002010fc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00201100:;
    {
        wr8(cpu->r[0], cpu->r[2]);
    }
L_00201104:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[3]);
    }
L_00201108:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0020110c:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0x28u);
    }
L_00201110:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[3]);
    }
L_00201114:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x2cu);
    }
L_00201118:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[8], cpu->r[7], 1, 0);
    }
L_0020111c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00201120:;
    {
        cpu->r[14] = 0x00201124u; fn_001d55a8(cpu);
    }
L_00201124:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[8], 1, 1);
    }
L_00201128:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x3cu);
    }
L_0020112c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00201140;
        }
    }
L_00201130:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00201134:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00201138:;
    {
        cpu->r[14] = 0x0020113cu; imp_memcpy(cpu); /* memcpy */
    }
L_0020113c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
    }
L_00201140:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000040u, 0, 0);
    }
L_00201144:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[0]);
    }
L_00201148:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0020114c:;
    {
        wr8(cpu->r[0], cpu->r[2]);
    }
L_00201150:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[3]);
    }
L_00201154:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00201158:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0x40u);
    }
L_0020115c:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[3]);
    }
L_00201160:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x44u);
    }
L_00201164:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[8], cpu->r[7], 1, 0);
    }
L_00201168:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0020116c:;
    {
        cpu->r[14] = 0x00201170u; fn_001d55a8(cpu);
    }
L_00201170:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[8], 1, 1);
    }
L_00201174:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x54u);
    }
L_00201178:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0020118c;
        }
    }
L_0020117c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00201180:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00201184:;
    {
        cpu->r[14] = 0x00201188u; imp_memcpy(cpu); /* memcpy */
    }
L_00201188:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
    }
L_0020118c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000058u, 0, 0);
    }
L_00201190:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[0]);
    }
L_00201194:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00201198:;
    {
        wr8(cpu->r[0], cpu->r[2]);
    }
L_0020119c:;
    {
        wr32(cpu->r[4] + + 0x68u, cpu->r[3]);
    }
L_002011a0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_002011a4:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0x58u);
    }
L_002011a8:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[3]);
    }
L_002011ac:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x5cu);
    }
L_002011b0:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[8], cpu->r[7], 1, 0);
    }
L_002011b4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_002011b8:;
    {
        cpu->r[14] = 0x002011bcu; fn_001d55a8(cpu);
    }
L_002011bc:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[8], 1, 1);
    }
L_002011c0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x6cu);
    }
L_002011c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_002011d8;
        }
    }
L_002011c8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_002011cc:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_002011d0:;
    {
        cpu->r[14] = 0x002011d4u; imp_memcpy(cpu); /* memcpy */
    }
L_002011d4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
    }
L_002011d8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[5], 0x00000064u, 0, 0);
    }
L_002011dc:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_002011e0:;
    {
        wr32(cpu->r[4] + + 0x68u, cpu->r[0]);
    }
L_002011e4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00000074u, 0, 0);
    }
L_002011e8:;
    {
        wr8(cpu->r[0], cpu->r[6]);
    }
L_002011ec:;
    {
        uint32_t base = cpu->r[7];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        uint32_t v3 = rd32(ea + 12u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
        cpu->r[3] = v3;
        cpu->r[7] = base + 16u;
    }
L_002011f0:;
    {
        cpu->r[5] = rd32(cpu->r[5] + + 0x60u);
    }
L_002011f4:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[6]);
    }
L_002011f8:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[6]);
    }
L_002011fc:;
    {
        wr32(cpu->r[4] + + 0x70u, cpu->r[5]);
    }
L_00201200:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[12] = base + 16u;
    }
L_00201204:;
    {
        uint32_t base = cpu->r[7];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        uint32_t v3 = rd32(ea + 12u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
        cpu->r[3] = v3;
    }
L_00201208:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        cpu->r[12] = base + 12u;
    }
L_0020120c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00201210:;
    {
        wr16(cpu->r[12], cpu->r[3]);
    }
L_00201214:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00201218u)) return;
    }
}
