#include "functions.h"

/* _ZN10SpritePackD2Ev @ 0018ac8c (arm) */
void fn_0018ac8c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018ac8c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_0018ac90:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0018ac94:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018ac98:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0018ac9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018ace0;
        }
    }
L_0018aca0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + - 0x4u);
    }
L_0018aca4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 3u, &shc), 0, 0);
    }
L_0018aca8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_0018acac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018acb8;
        }
    }
L_0018acb0:;
    {
        goto L_0018acd0;
    }
L_0018acb4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018acb8:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 0);
    }
L_0018acbc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018acc0:;
    {
        cpu->r[14] = 0x0018acc4u; fn_0018ab20(cpu);
    }
L_0018acc4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x4u);
    }
L_0018acc8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_0018accc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018acb4;
        }
    }
L_0018acd0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 0);
    }
L_0018acd4:;
    {
        cpu->r[14] = 0x0018acd8u; fn_0018ba60(cpu);
    }
L_0018acd8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018acdc:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[3]);
    }
L_0018ace0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x8u);
    }
L_0018ace4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018ace8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018acf8;
        }
    }
L_0018acec:;
    {
        cpu->r[14] = 0x0018acf0u; fn_0018ba20(cpu);
    }
L_0018acf0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018acf4:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[3]);
    }
L_0018acf8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0018acfc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018ad00u)) return;
    }
}

/* _ZN10SpritePackC1EiP10FileHeader @ 0018ad00 (arm) */
void fn_0018ad00(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018ad00:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0018ad04:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0018ad08:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0018ad0c:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0018ad10:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[2]);
    }
L_0018ad14:;
    {
        wr32(cpu->r[5], cpu->r[1]);
    }
L_0018ad18:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 3u, &shc); cpu->r[0] = v;
    }
L_0018ad1c:;
    {
        cpu->r[14] = 0x0018ad20u; imp__Znaj(cpu); /* _Znaj */
    }
L_0018ad20:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0018ad24:;
    {
        cpu->r[3] = 0x00000008u;
    }
L_0018ad28:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_0018ad2c:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[3]);
        wr32(ea + 4u, cpu->r[4]);
    }
L_0018ad30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018ad54;
        }
    }
L_0018ad34:;
    {
        cpu->r[7] = cpu->r[8];
    }
L_0018ad38:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0018ad3c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0018ad40:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0018ad44:;
    {
        cpu->r[14] = 0x0018ad48u; fn_0018a9fc(cpu);
    }
L_0018ad48:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 1);
    }
L_0018ad4c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000008u, 0, 0);
    }
L_0018ad50:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018ad3c;
        }
    }
L_0018ad54:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[8]);
    }
L_0018ad58:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0018ad5c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018ad60u)) return;
    }
}

/* _ZN10SpritePackC2EiP10FileHeader @ 0018ad60 (arm) */
void fn_0018ad60(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018ad60:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0018ad64:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0018ad68:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0018ad6c:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0018ad70:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[2]);
    }
L_0018ad74:;
    {
        wr32(cpu->r[5], cpu->r[1]);
    }
L_0018ad78:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 3u, &shc); cpu->r[0] = v;
    }
L_0018ad7c:;
    {
        cpu->r[14] = 0x0018ad80u; imp__Znaj(cpu); /* _Znaj */
    }
L_0018ad80:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0018ad84:;
    {
        cpu->r[3] = 0x00000008u;
    }
L_0018ad88:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_0018ad8c:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[3]);
        wr32(ea + 4u, cpu->r[4]);
    }
L_0018ad90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018adb4;
        }
    }
L_0018ad94:;
    {
        cpu->r[7] = cpu->r[8];
    }
L_0018ad98:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0018ad9c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0018ada0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0018ada4:;
    {
        cpu->r[14] = 0x0018ada8u; fn_0018a9fc(cpu);
    }
L_0018ada8:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 1);
    }
L_0018adac:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000008u, 0, 0);
    }
L_0018adb0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018ad9c;
        }
    }
L_0018adb4:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[8]);
    }
L_0018adb8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0018adbc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018adc0u)) return;
    }
}

/* _ZN13SpriteManagerD2Ev @ 0018adc0 (arm) */
void fn_0018adc0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018adc0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0018adc4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018adc8:;
    {
        cpu->r[14] = 0x0018adccu; fn_0018ac4c(cpu);
    }
L_0018adcc:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0018add0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018add4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018adf0;
        }
    }
L_0018add8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8u);
    }
L_0018addc:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_0018ade0:;
    {
        uint32_t v = cpu->r[1] & ~ 0x00000003u; cpu->r[1] = v;
    }
L_0018ade4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_0018ade8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0018adf8;
        }
    }
L_0018adec:;
    {
        cpu->r[14] = 0x0018adf0u; fn_002082a8(cpu);
    }
L_0018adf0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018adf4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0018adf8u)) return;
    }
L_0018adf8:;
    {
        cpu->r[14] = 0x0018adfcu; fn_0018ba20(cpu);
    }
L_0018adfc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018ae00:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0018ae04u)) return;
    }
}

/* _ZN13SpriteManager16Package_RegisterEi @ 0018ae04 (arm) */
void fn_0018ae04(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018ae04:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x4u);
    }
L_0018ae08:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0018ae0c:;
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
L_0018ae10:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0018ae14:;
    {
        cpu->r[5] = rd32(0x0018ae1cu + + 0x258u);
    }
L_0018ae18:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_0018ae1c:;
    {
        sub_flags(cpu, cpu->r[1], shifter(cpu->r[3], 1, 2u, &shc), 1, 1);
    }
L_0018ae20:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018ae24:;
    {
        cpu->r[5] = add_flags(cpu, 0x0018ae2cu, cpu->r[5], 0, 0);
    }
L_0018ae28:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_0018ae2c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0018ae38;
        }
    }
L_0018ae30:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_0018ae34:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018ae38u)) return;
    }
L_0018ae38:;
    {
        cpu->r[3] = rd32(0x0018ae40u + + 0x238u);
    }
L_0018ae3c:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0018ae40:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_0018ae44:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0018ae48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018af54;
        }
    }
L_0018ae4c:;
    {
        cpu->r[7] = rd32(0x0018ae54u + + 0x228u);
    }
L_0018ae50:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0018ae54:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0018ae58:;
    {
        cpu->r[14] = 0x0018ae5cu; fn_00189f5c(cpu);
    }
L_0018ae5c:;
    {
        cpu->r[1] = 0x00000007u;
    }
L_0018ae60:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0018ae64:;
    {
        cpu->r[14] = 0x0018ae68u; fn_001897b4(cpu);
    }
L_0018ae68:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018ae6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018aff8;
        }
    }
L_0018ae70:;
    {
        cpu->r[0] = 0x00001004u;
    }
L_0018ae74:;
    {
        cpu->r[14] = 0x0018ae78u; fn_0018ba6c(cpu);
    }
L_0018ae78:;
    {
        cpu->r[12] = 0x00001000u;
    }
L_0018ae7c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018ae80:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0018ae84:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_0018ae88:;
    {
        wr32(cpu->r[0] + cpu->r[12], cpu->r[3]);
    }
L_0018ae8c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0018ae90:;
    {
        cpu->r[14] = 0x0018ae94u; fn_00097fe8(cpu);
    }
L_0018ae94:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018ae98:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018af98;
        }
    }
L_0018ae9c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0018aea0:;
    {
        cpu->r[1] = 0x00000007u;
    }
L_0018aea4:;
    {
        cpu->r[14] = 0x0018aea8u; fn_00189870(cpu);
    }
L_0018aea8:;
    {
        cpu->r[3] = 0x00001000u;
    }
L_0018aeac:;
    {
        cpu->r[0] = 0x0000000cu;
    }
L_0018aeb0:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0018aeb4:;
    {
        cpu->r[14] = 0x0018aeb8u; fn_0018ba6c(cpu);
    }
L_0018aeb8:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0018aebc:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0018aec0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0018aec4:;
    {
        cpu->r[14] = 0x0018aec8u; fn_0018ad00(cpu);
    }
L_0018aec8:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x4u);
    }
L_0018aecc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_0018aed0:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_0018aed4:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t wb_tmp = cpu->r[8] + 0x00000004u;
        wr32(cpu->r[8], cpu->r[6]);
        cpu->r[8] = wb_tmp;
        }
    }
L_0018aed8:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x4u, cpu->r[8]);
        }
    }
L_0018aedc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018ae30;
        }
    }
L_0018aee0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0018aee4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 0);
    }
L_0018aee8:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[2] = v;
    }
L_0018aeec:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_0018aef0:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[7] = add_flags(cpu, cpu->r[2], cpu->r[2], 0, 0);
        }
    }
L_0018aef4:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[7] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
        }
    }
L_0018aef8:;
    {
        add_flags(cpu, cpu->r[7], 0xc0000001u, 0, 1);
    }
L_0018aefc:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0018afd0;
        }
    }
L_0018af00:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 1);
    }
L_0018af04:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0018afd0;
        }
    }
L_0018af08:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0018af0c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = cpu->r[7];
        }
    }
L_0018af10:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018b058;
        }
    }
L_0018af14:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_0018af18:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = cpu->r[5];
        }
    }
L_0018af1c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018b03c;
        }
    }
L_0018af20:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018af24:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8u);
    }
L_0018af28:;
    {
        uint32_t wb_tmp = cpu->r[8] + 0x00000004u;
        wr32(cpu->r[8], cpu->r[6]);
        cpu->r[8] = wb_tmp;
    }
L_0018af2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018af48;
        }
    }
L_0018af30:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_0018af34:;
    {
        uint32_t v = cpu->r[1] & ~ 0x00000003u; cpu->r[1] = v;
    }
L_0018af38:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_0018af3c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0018b030;
        }
    }
L_0018af40:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0018af44:;
    {
        cpu->r[14] = 0x0018af48u; fn_002082a8(cpu);
    }
L_0018af48:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[7]);
    }
L_0018af4c:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[5]);
        wr32(ea + 4u, cpu->r[8]);
    }
L_0018af50:;
    {
        goto L_0018ae30;
    }
L_0018af54:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0018af58:;
    {
        cpu->r[14] = 0x0018af5cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0018af5c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018af60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018ae4c;
        }
    }
L_0018af64:;
    {
        cpu->r[7] = rd32(0x0018af6cu + + 0x110u);
    }
L_0018af68:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0018af6c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0018af70:;
    {
        cpu->r[14] = 0x0018af74u; fn_00189f48(cpu);
    }
L_0018af74:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0018af78:;
    {
        cpu->r[14] = 0x0018af7cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0018af7c:;
    {
        cpu->r[3] = rd32(0x0018af84u + + 0xfcu);
    }
L_0018af80:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0018af84:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0018af88:;
    {
        cpu->r[3] = rd32(0x0018af90u + + 0xf4u);
    }
L_0018af8c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0018af90:;
    {
        cpu->r[14] = 0x0018af94u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0018af94:;
    {
        goto L_0018ae50;
    }
L_0018af98:;
    {
        cpu->r[1] = rd32(0x0018afa0u + + 0xe8u);
    }
L_0018af9c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0018afa0:;
    {
        cpu->r[2] = rd32(0x0018afa8u + + 0xe4u);
    }
L_0018afa4:;
    {
        cpu->r[14] = 0x0000006eu;
    }
L_0018afa8:;
    {
        cpu->r[3] = rd32(0x0018afb0u + + 0xe0u);
    }
L_0018afac:;
    {
        cpu->r[1] = add_flags(cpu, 0x0018afb4u, cpu->r[1], 0, 0);
    }
L_0018afb0:;
    {
        cpu->r[12] = rd32(0x0018afb8u + + 0xdcu);
    }
L_0018afb4:;
    {
        cpu->r[2] = add_flags(cpu, 0x0018afbcu, cpu->r[2], 0, 0);
    }
L_0018afb8:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018afc0u, cpu->r[3], 0, 0);
    }
L_0018afbc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_0018afc0:;
    {
        cpu->r[12] = add_flags(cpu, 0x0018afc8u, cpu->r[12], 0, 0);
    }
L_0018afc4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0018afc8:;
    {
        cpu->r[14] = 0x0018afccu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0018afcc:;
    {
        goto L_0018ae9c;
    }
L_0018afd0:;
    {
        cpu->r[7] = (~0x00000003u);
    }
L_0018afd4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[7]);
    }
L_0018afd8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0018afdc:;
    {
        cpu->r[14] = 0x0018afe0u; fn_0018ba6c(cpu);
    }
L_0018afe0:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xcu);
    }
L_0018afe4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0018afe8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0018afec:;
    {
        uint32_t v = cpu->r[7] & ~ 0x00000003u; cpu->r[7] = v;
    }
L_0018aff0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], cpu->r[7], 0, 0);
    }
L_0018aff4:;
    {
        goto L_0018af14;
    }
L_0018aff8:;
    {
        cpu->r[1] = rd32(0x0018b000u + + 0x98u);
    }
L_0018affc:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0018b000:;
    {
        cpu->r[2] = rd32(0x0018b008u + + 0x94u);
    }
L_0018b004:;
    {
        cpu->r[14] = 0x0000006au;
    }
L_0018b008:;
    {
        cpu->r[3] = rd32(0x0018b010u + + 0x90u);
    }
L_0018b00c:;
    {
        cpu->r[1] = add_flags(cpu, 0x0018b014u, cpu->r[1], 0, 0);
    }
L_0018b010:;
    {
        cpu->r[12] = rd32(0x0018b018u + + 0x8cu);
    }
L_0018b014:;
    {
        cpu->r[2] = add_flags(cpu, 0x0018b01cu, cpu->r[2], 0, 0);
    }
L_0018b018:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018b020u, cpu->r[3], 0, 0);
    }
L_0018b01c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_0018b020:;
    {
        cpu->r[12] = add_flags(cpu, 0x0018b028u, cpu->r[12], 0, 0);
    }
L_0018b024:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0018b028:;
    {
        cpu->r[14] = 0x0018b02cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0018b02c:;
    {
        goto L_0018ae70;
    }
L_0018b030:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0018b034:;
    {
        cpu->r[14] = 0x0018b038u; fn_0018ba20(cpu);
    }
L_0018b038:;
    {
        goto L_0018af48;
    }
L_0018b03c:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0018b040:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0018b044:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0018b048:;
    {
        cpu->r[14] = 0x0018b04cu; imp_memmove(cpu); /* memmove */
    }
L_0018b04c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0018b050:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], cpu->r[8], 0, 0);
    }
L_0018b054:;
    {
        goto L_0018af20;
    }
L_0018b058:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 2u, &shc); cpu->r[7] = v;
    }
L_0018b05c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[7]);
    }
L_0018b060:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000080u, 1, 1);
    }
L_0018b064:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0018afd8;
        }
    }
L_0018b068:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0018b06c:;
    {
        cpu->r[14] = 0x0018b070u; fn_00208278(cpu);
    }
L_0018b070:;
    {
        goto L_0018afe0;
    }
}

/* _ZN13SpriteManagerD1Ev @ 0018b0a8 (arm) */
void fn_0018b0a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018b0a8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0018b0ac:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018b0b0:;
    {
        cpu->r[14] = 0x0018b0b4u; fn_0018ac4c(cpu);
    }
L_0018b0b4:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0018b0b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018b0bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018b0d8;
        }
    }
L_0018b0c0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8u);
    }
L_0018b0c4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_0018b0c8:;
    {
        uint32_t v = cpu->r[1] & ~ 0x00000003u; cpu->r[1] = v;
    }
L_0018b0cc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_0018b0d0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0018b0e0;
        }
    }
L_0018b0d4:;
    {
        cpu->r[14] = 0x0018b0d8u; fn_002082a8(cpu);
    }
L_0018b0d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018b0dc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0018b0e0u)) return;
    }
L_0018b0e0:;
    {
        cpu->r[14] = 0x0018b0e4u; fn_0018ba20(cpu);
    }
L_0018b0e4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018b0e8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0018b0ecu)) return;
    }
}

/* _ZN13SpriteManager22Package_RefreshSpritesEib @ 0018b0ec (arm) */
void fn_0018b0ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018b0ec:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0018b0f0:;
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
L_0018b0f4:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_0018b0f8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_0018b0fc:;
    {
        cpu->r[0] = rd32(0x0018b104u + + 0x448u);
    }
L_0018b100:;
    {
        cpu->r[5] = rd32(cpu->r[3] + shifter(cpu->r[7], 2, 2u, &shc));
    }
L_0018b104:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[1] = v;
    }
L_0018b108:;
    {
        cpu->r[0] = add_flags(cpu, 0x0018b110u, cpu->r[0], 0, 0);
    }
L_0018b10c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_0018b110:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_0018b114:;
    {
        cpu->r[11] = rd32(cpu->r[5]);
    }
L_0018b118:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_0018b11c:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_0018b120:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018b478;
        }
    }
L_0018b124:;
    {
        cpu->r[3] = rd32(0x0018b12cu + + 0x424u);
    }
L_0018b128:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0018b12c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_0018b130:;
    {
        cpu->r[8] = 0x00000001u;
    }
L_0018b134:;
    {
        cpu->r[9] = cpu->r[4];
    }
L_0018b138:;
    {
        cpu->r[10] = cpu->r[5];
    }
L_0018b13c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_0018b140:;
    {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_0018b144:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_0018b148:;
    {
        goto L_0018b1b8;
    }
L_0018b14c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_0018b150:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_0018b154:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_0018b158:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0018b15c:;
    {
        cpu->r[14] = 0x0018b160u; fn_00135d64(cpu);
    }
L_0018b160:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x4u);
    }
L_0018b164:;
    {
        cpu->r[6] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_0018b168:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0018b16c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018b188;
        }
    }
L_0018b170:;
    {
        cpu->r[14] = 0x0018b174u; fn_000aa7f4(cpu);
    }
L_0018b174:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0018b178:;
    {
        cpu->r[14] = 0x0018b17cu; fn_0018ba20(cpu);
    }
L_0018b17c:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x4u);
    }
L_0018b180:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_0018b184:;
    {
        wr32(cpu->r[3] + cpu->r[5], cpu->r[14]);
    }
L_0018b188:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_0018b18c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_0018b190:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0018b194:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018b1b0;
        }
    }
L_0018b198:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0x4u);
    }
L_0018b19c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0018b1a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018b1b0;
        }
    }
L_0018b1a4:;
    {
        cpu->r[9] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_0018b1a8:;
    {
        cpu->r[9] = sub_flags(cpu, 0x00000001u, cpu->r[9], 1, 1);
    }
L_0018b1ac:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[9] = 0x00000000u;
        }
    }
L_0018b1b0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[11], 1, 1);
    }
L_0018b1b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018b208;
        }
    }
L_0018b1b8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xcu);
    }
L_0018b1bc:;
    {
        cpu->r[6] = (uint32_t)((uint16_t)cpu->r[8]);
    }
L_0018b1c0:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_0018b1c4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0018b1c8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0018b1cc:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 3u, &shc); cpu->r[5] = v;
    }
L_0018b1d0:;
    {
        cpu->r[0] = rd32(cpu->r[14]);
    }
L_0018b1d4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_0018b1d8:;
    {
        cpu->r[14] = 0x0018b1dcu; fn_00135d9c(cpu);
    }
L_0018b1dc:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x4u);
    }
L_0018b1e0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0018b1e4:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0018b1e8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_0018b1ec:;
    {
        cpu->r[0] = rd8(cpu->r[0] + + 0x4u);
    }
L_0018b1f0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018b1f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018b14c;
        }
    }
L_0018b1f8:;
    {
        sub_flags(cpu, cpu->r[4], 0x0000001cu, 1, 1);
    }
L_0018b1fc:;
    {
        if (cond_test(cpu, 1)) {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
        }
    }
L_0018b200:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018b188;
        }
    }
L_0018b204:;
    {
        goto L_0018b14c;
    }
L_0018b208:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_0018b20c:;
    {
        cpu->r[5] = cpu->r[10];
    }
L_0018b210:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018b480;
        }
    }
L_0018b214:;
    {
        cpu->r[3] = rd32(0x0018b21cu + + 0x338u);
    }
L_0018b218:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_0018b21c:;
    {
        cpu->r[6] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0018b220:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0018b224:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0018b228:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018b42c;
        }
    }
L_0018b22c:;
    {
        cpu->r[4] = rd32(0x0018b234u + + 0x324u);
    }
L_0018b230:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x10u);
    }
L_0018b234:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0018b238:;
    {
        cpu->r[0] = rd32(cpu->r[14] + cpu->r[4]);
    }
L_0018b23c:;
    {
        cpu->r[14] = 0x0018b240u; fn_00189f5c(cpu);
    }
L_0018b240:;
    {
        cpu->r[1] = 0x00000007u;
    }
L_0018b244:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_0018b248:;
    {
        cpu->r[14] = 0x0018b24cu; fn_001897b4(cpu);
    }
L_0018b24c:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018b250:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018b514;
        }
    }
L_0018b254:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_0018b258:;
    {
        cpu->r[2] = 0x00001000u;
    }
L_0018b25c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0018b260:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_0018b264:;
    {
        cpu->r[6] = 0x00000001u;
    }
L_0018b268:;
    {
        cpu->r[4] = cpu->r[10];
    }
L_0018b26c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0018b270:;
    {
        cpu->r[9] = 0x00001000u;
    }
L_0018b274:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0018b278:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd32(cpu->r[3]);
        }
    }
L_0018b27c:;
    {
        cpu->r[14] = 0x0018b280u; fn_000fc5ec(cpu);
    }
L_0018b280:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[7]);
    }
L_0018b284:;
    {
        goto L_0018b2c0;
    }
L_0018b288:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_0018b28c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[9]);
    }
L_0018b290:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_0018b294:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_0018b298:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
        }
    }
L_0018b29c:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[6], 2, 2u, &shc));
        }
    }
L_0018b2a0:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
        }
    }
L_0018b2a4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0018b2a8:;
    {
        cpu->r[14] = 0x0018b2acu; fn_000fc5ec(cpu);
    }
L_0018b2ac:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0018b2b0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0018b2b4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[11], 1, 1);
    }
L_0018b2b8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000014u, 0, 0);
    }
L_0018b2bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018b3e0;
        }
    }
L_0018b2c0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_0018b2c4:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 3u, &shc); cpu->r[7] = v;
    }
L_0018b2c8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_0018b2cc:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0x4u);
    }
L_0018b2d0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0018b2d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018b288;
        }
    }
L_0018b2d8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 3u, &shc));
    }
L_0018b2dc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018b2e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018b288;
        }
    }
L_0018b2e4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_0018b2e8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0018b2ec:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_0018b2f0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_0018b2f4:;
    {
        cpu->r[12] = rd32(cpu->r[1] + cpu->r[0]);
    }
L_0018b2f8:;
    {
        cpu->r[1] = (uint32_t)((uint16_t)cpu->r[6]);
    }
L_0018b2fc:;
    {
        cpu->r[0] = rd32(cpu->r[12]);
    }
L_0018b300:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_0018b304:;
    {
        cpu->r[14] = 0x0018b308u; fn_00135d9c(cpu);
    }
L_0018b308:;
    {
        cpu->r[0] = 0x0000007cu;
    }
L_0018b30c:;
    {
        cpu->r[14] = 0x0018b310u; fn_0018ba6c(cpu);
    }
L_0018b310:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_0018b314:;
    {
        cpu->r[14] = 0x0018b318u; fn_000a8860(cpu);
    }
L_0018b318:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_0018b31c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_0018b320:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_0018b324:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0018b328:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xcu);
    }
L_0018b32c:;
    {
        cpu->r[3] = rd32(cpu->r[12]);
    }
L_0018b330:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x4u);
    }
L_0018b334:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_0018b338:;
    {
        wr32(cpu->r[12] + cpu->r[7], cpu->r[0]);
    }
L_0018b33c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0018b340:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_0018b344:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_0018b348:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[10], 0, 0);
    }
L_0018b34c:;
    {
        cpu->r[12] = rd8(cpu->r[3] + + 0xfu);
    }
L_0018b350:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_0018b354:;
    {
        cpu->r[14] = 0x00000001u;
    }
L_0018b358:;
    {
        uint32_t v = cpu->r[12] & 0x0000000fu; cpu->r[3] = v;
    }
L_0018b35c:;
    {
        uint32_t v = shifter(cpu->r[14], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[3] = v;
    }
L_0018b360:;
    {
        uint32_t v = shifter(cpu->r[12], 3, 4u, &shc); cpu->r[12] = v;
    }
L_0018b364:;
    {
        uint32_t v = shifter(cpu->r[14], 2, (cpu->r[12] & 0xffu), &shc); cpu->r[12] = v;
    }
L_0018b368:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0018b36c:;
    {
        cpu->r[14] = 0x0018b370u; fn_000ae0ac(cpu);
    }
L_0018b370:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018b374:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0018b4c0;
        }
    }
L_0018b378:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_0018b37c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018b380:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018b2ac;
        }
    }
L_0018b384:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[4], 0x00000027u, 1, 0);
    }
L_0018b388:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0018b38c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0018b3a8;
        }
    }
L_0018b390:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_0018b394:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000029u, 1, 1);
    }
L_0018b398:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0018b39c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_0018b3a0:;
    {
        wr8(cpu->r[0] + + 0x5cu, cpu->r[1]);
    }
L_0018b3a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018b508;
        }
    }
L_0018b3a8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[4], 0x00000057u, 1, 0);
    }
L_0018b3ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0018b3b0:;
    {
        if (cond_test(cpu, 10)) {
        goto L_0018b4ac;
        }
    }
L_0018b3b4:;
    {
        sub_flags(cpu, cpu->r[4], 0x0000000au, 1, 1);
    }
L_0018b3b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018b2ac;
        }
    }
L_0018b3bc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_0018b3c0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0018b3c4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[11], 1, 1);
    }
L_0018b3c8:;
    {
        cpu->r[12] = 0x00000005u;
    }
L_0018b3cc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0018b3d0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000014u, 0, 0);
    }
L_0018b3d4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_0018b3d8:;
    {
        wr32(cpu->r[3] + + 0x54u, cpu->r[12]);
    }
L_0018b3dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018b2c0;
        }
    }
L_0018b3e0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_0018b3e4:;
    {
        cpu->r[1] = 0x00000007u;
    }
L_0018b3e8:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xcu);
    }
L_0018b3ec:;
    {
        cpu->r[14] = 0x0018b3f0u; fn_00189870(cpu);
    }
L_0018b3f0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_0018b3f4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018b3f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018b424;
        }
    }
L_0018b3fc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_0018b400:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0018b404:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_0018b408:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_0018b40c:;
    {
        wr32(cpu->r[13], cpu->r[0]);
    }
L_0018b410:;
    {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_0018b414:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0018b418:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0018b41c:;
    {
        cpu->r[0] = rd32(cpu->r[12]);
    }
L_0018b420:;
    {
        cpu->r[14] = 0x0018b424u; fn_00136660(cpu);
    }
L_0018b424:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_0018b428:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018b42cu)) return;
    }
L_0018b42c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0018b430:;
    {
        cpu->r[14] = 0x0018b434u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0018b434:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018b438:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018b22c;
        }
    }
L_0018b43c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_0018b440:;
    {
        cpu->r[4] = rd32(0x0018b448u + + 0x110u);
    }
L_0018b444:;
    {
        cpu->r[8] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_0018b448:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0018b44c:;
    {
        cpu->r[14] = 0x0018b450u; fn_00189f48(cpu);
    }
L_0018b450:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0018b454:;
    {
        cpu->r[14] = 0x0018b458u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0018b458:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_0018b45c:;
    {
        cpu->r[3] = rd32(0x0018b464u + + 0xf8u);
    }
L_0018b460:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0018b464:;
    {
        cpu->r[1] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_0018b468:;
    {
        cpu->r[3] = rd32(0x0018b470u + + 0xf0u);
    }
L_0018b46c:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_0018b470:;
    {
        cpu->r[14] = 0x0018b474u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0018b474:;
    {
        goto L_0018b230;
    }
L_0018b478:;
    {
        cpu->r[2] = rd32(0x0018b480u + + 0xd0u);
    }
L_0018b47c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_0018b480:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_0018b484:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_0018b488:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_0018b48c:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_0018b490:;
    {
        cpu->r[12] = rd32(cpu->r[1] + cpu->r[0]);
    }
L_0018b494:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0018b498:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0018b49c:;
    {
        wr32(cpu->r[13], cpu->r[0]);
    }
L_0018b4a0:;
    {
        cpu->r[0] = rd32(cpu->r[12]);
    }
L_0018b4a4:;
    {
        cpu->r[14] = 0x0018b4a8u; fn_00136660(cpu);
    }
L_0018b4a8:;
    {
        goto L_0018b424;
    }
L_0018b4ac:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_0018b4b0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0018b4b4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_0018b4b8:;
    {
        wr8(cpu->r[3] + + 0x5cu, cpu->r[2]);
    }
L_0018b4bc:;
    {
        goto L_0018b2ac;
    }
L_0018b4c0:;
    {
        cpu->r[1] = rd32(0x0018b4c8u + + 0x9cu);
    }
L_0018b4c4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0018b4c8:;
    {
        cpu->r[12] = rd32(0x0018b4d0u + + 0x98u);
    }
L_0018b4cc:;
    {
        cpu->r[14] = 0x000000c9u;
    }
L_0018b4d0:;
    {
        cpu->r[2] = rd32(0x0018b4d8u + + 0x94u);
    }
L_0018b4d4:;
    {
        cpu->r[1] = add_flags(cpu, 0x0018b4dcu, cpu->r[1], 0, 0);
    }
L_0018b4d8:;
    {
        cpu->r[3] = rd32(0x0018b4e0u + + 0x90u);
    }
L_0018b4dc:;
    {
        cpu->r[12] = add_flags(cpu, 0x0018b4e4u, cpu->r[12], 0, 0);
    }
L_0018b4e0:;
    {
        cpu->r[2] = add_flags(cpu, 0x0018b4e8u, cpu->r[2], 0, 0);
    }
L_0018b4e4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000014u, 0, 0);
    }
L_0018b4e8:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018b4f0u, cpu->r[3], 0, 0);
    }
L_0018b4ec:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0018b4f0:;
    {
        cpu->r[14] = 0x0018b4f4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0018b4f4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_0018b4f8:;
    {
        cpu->r[1] = 0x00000007u;
    }
L_0018b4fc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_0018b500:;
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
L_0018b504:;
    {
        return fn_00189728(cpu);
    }
L_0018b508:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_0018b50c:;
    {
        cpu->r[14] = 0x0018b510u; fn_000a8e18(cpu);
    }
L_0018b510:;
    {
        goto L_0018b2ac;
    }
L_0018b514:;
    {
        cpu->r[1] = rd32(0x0018b51cu + + 0x58u);
    }
L_0018b518:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0018b51c:;
    {
        cpu->r[12] = rd32(0x0018b524u + + 0x54u);
    }
L_0018b520:;
    {
        cpu->r[14] = 0x000000b4u;
    }
L_0018b524:;
    {
        cpu->r[2] = rd32(0x0018b52cu + + 0x50u);
    }
L_0018b528:;
    {
        cpu->r[1] = add_flags(cpu, 0x0018b530u, cpu->r[1], 0, 0);
    }
L_0018b52c:;
    {
        cpu->r[3] = rd32(0x0018b534u + + 0x4cu);
    }
L_0018b530:;
    {
        cpu->r[12] = add_flags(cpu, 0x0018b538u, cpu->r[12], 0, 0);
    }
L_0018b534:;
    {
        cpu->r[2] = add_flags(cpu, 0x0018b53cu, cpu->r[2], 0, 0);
    }
L_0018b538:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000014u, 0, 0);
    }
L_0018b53c:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018b544u, cpu->r[3], 0, 0);
    }
L_0018b540:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0018b544:;
    {
        cpu->r[14] = 0x0018b548u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0018b548:;
    {
        goto L_0018b254;
    }
}

/* _ZN13SpriteManager11Refresh_AllEb @ 0018b584 (arm) */
void fn_0018b584(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018b584:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0018b588:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[3] = v0;
        cpu->r[6] = v1;
    }
L_0018b58c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0018b590:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_0018b594:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 0);
    }
L_0018b598:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 2u, &shc); cpu->r[6] = v;
    }
L_0018b59c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0018b5a0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018b5a4u)) return;
        }
    }
L_0018b5a4:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0018b5a8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0018b5ac:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0018b5b0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0018b5b4:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0018b5b8:;
    {
        cpu->r[14] = 0x0018b5bcu; fn_0018b0ec(cpu);
    }
L_0018b5bc:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 1);
    }
L_0018b5c0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018b5a8;
        }
    }
L_0018b5c4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018b5c8u)) return;
    }
}

/* _ZN13SpriteManager22Refresh_GeneralPackageEb @ 0018b5c8 (arm) */
void fn_0018b5c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018b5c8:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0018b5cc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0018b5d0:;
    {
        return fn_0018b0ec(cpu);
    }
}

/* _ZN14GamePadManager4InitEv @ 0018b5d4 (arm) */
void fn_0018b5d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018b5d4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14GamePadManager10GetGamePadEi @ 0018b5d8 (arm) */
void fn_0018b5d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018b5d8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_0018b5dc:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x4u);
    }
L_0018b5e0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14GamePadManager14ResetKeysStateEi @ 0018b5e4 (arm) */
void fn_0018b5e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018b5e4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_0018b5e8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018b5ec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_0018b5f0:;
    {
        wr32(cpu->r[1] + + 0x10u, cpu->r[3]);
    }
L_0018b5f4:;
    {
        wr32(cpu->r[1] + + 0x8u, cpu->r[3]);
    }
L_0018b5f8:;
    {
        wr32(cpu->r[1] + + 0xcu, cpu->r[3]);
    }
L_0018b5fc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14GamePadManager9ResetKeysEv @ 0018b600 (arm) */
void fn_0018b600(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018b600:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0018b604:;
    {
        return fn_0018b5e4(cpu);
    }
}

/* _ZN14GamePadManager15UpdateKeysStateEi @ 0018b608 (arm) */
void fn_0018b608(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018b608:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0018b60c:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0018b610:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0018b614:;
    {
        cpu->r[14] = 0x0018b618u; fn_0018b5d8(cpu);
    }
L_0018b618:;
    {
        cpu->r[14] = 0x0018b61cu; fn_0018b8d4(cpu);
    }
L_0018b61c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
    }
L_0018b620:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0018b624:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_0018b628:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[0]);
    }
L_0018b62c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0018b630:;
    {
        cpu->r[14] = 0x0018b634u; fn_0018b5d8(cpu);
    }
L_0018b634:;
    {
        cpu->r[14] = 0x0018b638u; fn_0018b8e4(cpu);
    }
L_0018b638:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0018b63c:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[0]);
    }
L_0018b640:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0018b644:;
    {
        cpu->r[14] = 0x0018b648u; fn_0018b5d8(cpu);
    }
L_0018b648:;
    {
        cpu->r[14] = 0x0018b64cu; fn_0018b8ec(cpu);
    }
L_0018b64c:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[0]);
    }
L_0018b650:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018b654u)) return;
    }
}

/* _ZN14GamePadManager10UpdateKeysEv @ 0018b654 (arm) */
void fn_0018b654(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018b654:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0018b658:;
    {
        return fn_0018b608(cpu);
    }
}

/* _ZN14GamePadManager6UpdateEv @ 0018b65c (arm) */
void fn_0018b65c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018b65c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0018b660:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018b664:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_0018b668:;
    {
        cpu->r[14] = 0x0018b66cu; fn_0018b90c(cpu);
    }
L_0018b66c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_0018b670:;
    {
        cpu->r[14] = 0x0018b674u; fn_0018b8d0(cpu);
    }
L_0018b674:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018b678:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_0018b67c:;
    {
        return fn_0018b654(cpu);
    }
}

/* _ZN14GamePadManagerD1Ev @ 0018b680 (arm) */
void fn_0018b680(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018b680:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0018b684:;
    {
        cpu->r[4] = rd32(0x0018b68cu + + 0x50u);
    }
L_0018b688:;
    {
        cpu->r[3] = rd32(0x0018b690u + + 0x50u);
    }
L_0018b68c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0018b690:;
    {
        cpu->r[4] = add_flags(cpu, 0x0018b698u, cpu->r[4], 0, 0);
    }
L_0018b694:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x4u);
    }
L_0018b698:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0018b69c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0018b6a0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0018b6a4:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_0018b6a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018b6c4;
        }
    }
L_0018b6ac:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0018b6b0:;
    {
        cpu->r[14] = 0x0018b6b4u; fn_0018b8b4(cpu);
    }
L_0018b6b4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0018b6b8:;
    {
        cpu->r[14] = 0x0018b6bcu; fn_0018ba20(cpu);
    }
L_0018b6bc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018b6c0:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[3]);
    }
L_0018b6c4:;
    {
        cpu->r[3] = rd32(0x0018b6ccu + + 0x18u);
    }
L_0018b6c8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0018b6cc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0018b6d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0018b6d4:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_0018b6d8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018b6dcu)) return;
    }
}

/* _ZN14GamePadManagerD0Ev @ 0018b6e8 (arm) */
void fn_0018b6e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018b6e8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0018b6ec:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018b6f0:;
    {
        cpu->r[14] = 0x0018b6f4u; fn_0018b680(cpu);
    }
L_0018b6f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018b6f8:;
    {
        cpu->r[14] = 0x0018b6fcu; fn_0018ba20(cpu);
    }
L_0018b6fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018b700:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0018b704u)) return;
    }
}

/* _ZN14GamePadManagerD2Ev @ 0018b704 (arm) */
void fn_0018b704(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018b704:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0018b708:;
    {
        cpu->r[4] = rd32(0x0018b710u + + 0x50u);
    }
L_0018b70c:;
    {
        cpu->r[3] = rd32(0x0018b714u + + 0x50u);
    }
L_0018b710:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0018b714:;
    {
        cpu->r[4] = add_flags(cpu, 0x0018b71cu, cpu->r[4], 0, 0);
    }
L_0018b718:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x4u);
    }
L_0018b71c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0018b720:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0018b724:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0018b728:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_0018b72c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018b748;
        }
    }
L_0018b730:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0018b734:;
    {
        cpu->r[14] = 0x0018b738u; fn_0018b8b4(cpu);
    }
L_0018b738:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0018b73c:;
    {
        cpu->r[14] = 0x0018b740u; fn_0018ba20(cpu);
    }
L_0018b740:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018b744:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[3]);
    }
L_0018b748:;
    {
        cpu->r[3] = rd32(0x0018b750u + + 0x18u);
    }
L_0018b74c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0018b750:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0018b754:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0018b758:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_0018b75c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018b760u)) return;
    }
}

/* _ZN14GamePadManagerC1Ev @ 0018b76c (arm) */
void fn_0018b76c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018b76c:;
    {
        cpu->r[3] = rd32(0x0018b774u + + 0x40u);
    }
L_0018b770:;
    {
        cpu->r[2] = rd32(0x0018b778u + + 0x40u);
    }
L_0018b774:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018b77cu, cpu->r[3], 0, 0);
    }
L_0018b778:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0018b77c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0018b780:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018b784:;
    {
        cpu->r[0] = 0x00000024u;
    }
L_0018b788:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0018b78c:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_0018b790:;
    {
        cpu->r[14] = 0x0018b794u; fn_0018ba6c(cpu);
    }
L_0018b794:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0018b798:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0018b79c:;
    {
        cpu->r[14] = 0x0018b7a0u; fn_0018b884(cpu);
    }
L_0018b7a0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018b7a4:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[5]);
    }
L_0018b7a8:;
    {
        cpu->r[14] = 0x0018b7acu; fn_0018b600(cpu);
    }
L_0018b7ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018b7b0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018b7b4u)) return;
    }
}

/* _ZN14GamePadManager11GetInstanceEv @ 0018b7bc (arm) */
void fn_0018b7bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018b7bc:;
    {
        cpu->r[3] = rd32(0x0018b7c4u + + 0x3cu);
    }
L_0018b7c0:;
    {
        cpu->r[2] = rd32(0x0018b7c8u + + 0x3cu);
    }
L_0018b7c4:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018b7ccu, cpu->r[3], 0, 0);
    }
L_0018b7c8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0018b7cc:;
    {
        cpu->r[5] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0018b7d0:;
    {
        cpu->r[4] = rd32(cpu->r[5]);
    }
L_0018b7d4:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0018b7d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018b7e4;
        }
    }
L_0018b7dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018b7e0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018b7e4u)) return;
    }
L_0018b7e4:;
    {
        cpu->r[0] = 0x00000014u;
    }
L_0018b7e8:;
    {
        cpu->r[14] = 0x0018b7ecu; fn_0018ba6c(cpu);
    }
L_0018b7ec:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018b7f0:;
    {
        cpu->r[14] = 0x0018b7f4u; fn_0018b76c(cpu);
    }
L_0018b7f4:;
    {
        wr32(cpu->r[5], cpu->r[4]);
    }
L_0018b7f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018b7fc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018b800u)) return;
    }
}

/* _ZN14GamePadManagerC2Ev @ 0018b808 (arm) */
void fn_0018b808(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018b808:;
    {
        cpu->r[3] = rd32(0x0018b810u + + 0x40u);
    }
L_0018b80c:;
    {
        cpu->r[2] = rd32(0x0018b814u + + 0x40u);
    }
L_0018b810:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018b818u, cpu->r[3], 0, 0);
    }
L_0018b814:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0018b818:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0018b81c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018b820:;
    {
        cpu->r[0] = 0x00000024u;
    }
L_0018b824:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0018b828:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_0018b82c:;
    {
        cpu->r[14] = 0x0018b830u; fn_0018ba6c(cpu);
    }
L_0018b830:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0018b834:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0018b838:;
    {
        cpu->r[14] = 0x0018b83cu; fn_0018b884(cpu);
    }
L_0018b83c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018b840:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[5]);
    }
L_0018b844:;
    {
        cpu->r[14] = 0x0018b848u; fn_0018b600(cpu);
    }
L_0018b848:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018b84c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018b850u)) return;
    }
}

/* _ZN7GamePadC2Ei @ 0018b858 (arm) */
void fn_0018b858(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018b858:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0018b85c:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_0018b860:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[2]);
    }
L_0018b864:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[2]);
    }
L_0018b868:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[2]);
    }
L_0018b86c:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_0018b870:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_0018b874:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0018b878:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_0018b87c:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_0018b880:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7GamePadC1Ei @ 0018b884 (arm) */
void fn_0018b884(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018b884:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0018b888:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_0018b88c:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[2]);
    }
L_0018b890:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[2]);
    }
L_0018b894:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[2]);
    }
L_0018b898:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_0018b89c:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_0018b8a0:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0018b8a4:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_0018b8a8:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_0018b8ac:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7GamePadD2Ev @ 0018b8b0 (arm) */
void fn_0018b8b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018b8b0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7GamePadD1Ev @ 0018b8b4 (arm) */
void fn_0018b8b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018b8b4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7GamePad10UpdateKeysEv @ 0018b8b8 (arm) */
void fn_0018b8b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018b8b8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x20u);
    }
L_0018b8bc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018b8c0:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[3]);
    }
L_0018b8c4:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[3]);
    }
L_0018b8c8:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[2]);
    }
L_0018b8cc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7GamePad6UpdateEv @ 0018b8d0 (arm) */
void fn_0018b8d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018b8d0:;
    {
        return fn_0018b8b8(cpu);
    }
}

/* _ZN7GamePad14GetKeysPressedEv @ 0018b8d4 (arm) */
void fn_0018b8d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018b8d4:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0018b8d8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x18u);
    }
L_0018b8dc:;
    {
        uint32_t v = cpu->r[0] | cpu->r[3]; cpu->r[0] = v;
    }
L_0018b8e0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7GamePad15GetKeysReleasedEv @ 0018b8e4 (arm) */
void fn_0018b8e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018b8e4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x1cu);
    }
L_0018b8e8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7GamePad7GetKeysEv @ 0018b8ec (arm) */
void fn_0018b8ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018b8ec:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xcu);
    }
L_0018b8f0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x20u);
    }
L_0018b8f4:;
    {
        uint32_t v = cpu->r[0] | cpu->r[3]; cpu->r[0] = v;
    }
L_0018b8f8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7GamePad18KeyboardKeyPressedEi @ 0018b8fc (arm) */
void fn_0018b8fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018b8fc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x10u);
    }
L_0018b900:;
    {
        uint32_t v = cpu->r[3] | cpu->r[1]; cpu->r[3] = v;
    }
L_0018b904:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_0018b908:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7GamePad18KeyboardUpdateKeysEv @ 0018b90c (arm) */
void fn_0018b90c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018b90c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_0018b910:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[1] = v0;
        cpu->r[3] = v1;
        cpu->r[12] = v2;
    }
L_0018b914:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
    }
L_0018b918:;
    {
        cpu->r[5] = rd32(cpu->r[0]);
    }
L_0018b91c:;
    {
        uint32_t v = cpu->r[3] & cpu->r[12]; cpu->r[2] = v;
    }
L_0018b920:;
    {
        uint32_t v = cpu->r[3] | cpu->r[1]; cpu->r[4] = v;
    }
L_0018b924:;
    {
        uint32_t v = cpu->r[4] & ~ cpu->r[12]; cpu->r[4] = v;
    }
L_0018b928:;
    {
        uint32_t v = cpu->r[5] | cpu->r[1]; cpu->r[1] = v;
    }
L_0018b92c:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_0018b930:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0018b934:;
    {
        uint32_t v = cpu->r[3] & ~ cpu->r[1]; cpu->r[3] = v;
    }
L_0018b938:;
    {
        uint32_t v = cpu->r[4] | cpu->r[2]; cpu->r[2] = v;
    }
L_0018b93c:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[12]);
    }
L_0018b940:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_0018b944:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_0018b948:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[13] += 8u;
    }
L_0018b94c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN7GamePad19KeyboardKeyReleasedEi @ 0018b950 (arm) */
void fn_0018b950(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018b950:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0018b954:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018b958:;
    {
        cpu->r[0] = rd32(0x0018b960u + + 0x18u);
    }
L_0018b95c:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0018b960:;
    {
        cpu->r[0] = add_flags(cpu, 0x0018b968u, cpu->r[0], 0, 0);
    }
L_0018b964:;
    {
        cpu->r[14] = 0x0018b968u; fn_00095fe8(cpu);
    }
L_0018b968:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_0018b96c:;
    {
        uint32_t v = cpu->r[3] | cpu->r[5]; cpu->r[5] = v;
    }
L_0018b970:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[5]);
    }
L_0018b974:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018b978u)) return;
    }
}

/* _Z14M_Alloc_Bufferj @ 0018b97c (arm) */
void fn_0018b97c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018b97c:;
    {
        cpu->r[3] = rd32(0x0018b984u + + 0x1cu);
    }
L_0018b980:;
    {
        cpu->r[2] = rd32(0x0018b988u + + 0x1cu);
    }
L_0018b984:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018b98cu, cpu->r[3], 0, 0);
    }
L_0018b988:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0018b98c:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_0018b990:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_0018b994:;
    {
        wr32(cpu->r[2], cpu->r[0]);
    }
L_0018b998:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0018b99c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z13M_Free_BufferPv @ 0018b9a8 (arm) */
void fn_0018b9a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018b9a8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z12SetAllocatorPh @ 0018b9ac (arm) */
void fn_0018b9ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018b9ac:;
    {
        cpu->r[3] = rd32(0x0018b9b4u + + 0x44u);
    }
L_0018b9b0:;
    {
        cpu->r[2] = rd32(0x0018b9b8u + + 0x44u);
    }
L_0018b9b4:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018b9bcu, cpu->r[3], 0, 0);
    }
L_0018b9b8:;
    {
        cpu->r[0] = rd32(0x0018b9c0u + + 0x40u);
    }
L_0018b9bc:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_0018b9c0:;
    {
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0018b9c4:;
    {
        cpu->r[2] = rd32(0x0018b9ccu + + 0x38u);
    }
L_0018b9c8:;
    {
        cpu->r[4] = rd32(0x0018b9d0u + + 0x38u);
    }
L_0018b9cc:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_0018b9d0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0018b9d4:;
    {
        cpu->r[2] = rd32(0x0018b9dcu + + 0x30u);
    }
L_0018b9d8:;
    {
        wr32(cpu->r[1], cpu->r[0]);
    }
L_0018b9dc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0018b9e0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_0018b9e4:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0018b9e8:;
    {
        wr32(cpu->r[12], cpu->r[4]);
    }
L_0018b9ec:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_0018b9f0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_0018b9f4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z21GetCrtAllocatedMemoryv @ 0018ba10 (arm) */
void fn_0018ba10(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018ba10:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0018ba14:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z10DbgFreeMemv @ 0018ba18 (arm) */
void fn_0018ba18(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018ba18:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z16PrintMemoryStatsv @ 0018ba1c (arm) */
void fn_0018ba1c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018ba1c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZdlPv @ 0018ba20 (arm) */
void fn_0018ba20(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018ba20:;
    {
        cpu->r[3] = rd32(0x0018ba28u + + 0x18u);
    }
L_0018ba24:;
    {
        cpu->r[2] = rd32(0x0018ba2cu + + 0x18u);
    }
L_0018ba28:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018ba30u, cpu->r[3], 0, 0);
    }
L_0018ba2c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0018ba30:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0018ba34:;
    {
        cpu->r[14] = 0x0018ba3cu;
    }
L_0018ba38:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018ba3cu)) return;
    }
L_0018ba3c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0018ba40u)) return;
    }
}

/* _Z9Free_MEM2Pv @ 0018ba48 (arm) */
void fn_0018ba48(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018ba48:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018ba4c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0018ba50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018ba58;
        }
    }
L_0018ba54:;
    {
        cpu->r[14] = 0x0018ba58u; fn_0018ba20(cpu);
    }
L_0018ba58:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_0018ba5c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0018ba60u)) return;
    }
}

/* _ZdaPv @ 0018ba60 (arm) */
void fn_0018ba60(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018ba60:;
    {
        return fn_0018ba20(cpu);
    }
}

/* _Z9CheckHeapv @ 0018ba64 (arm) */
void fn_0018ba64(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018ba64:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z14CheckTestBytesv @ 0018ba68 (arm) */
void fn_0018ba68(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018ba68:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Znwj @ 0018ba6c (arm) */
void fn_0018ba6c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018ba6c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0018ba70:;
    {
        cpu->r[3] = rd32(0x0018ba78u + + 0x3cu);
    }
L_0018ba74:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018ba78:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018ba80u, cpu->r[3], 0, 0);
    }
L_0018ba7c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = cpu->r[5];
        }
    }
L_0018ba80:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018ba8c;
        }
    }
L_0018ba84:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018ba88:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018ba8cu)) return;
    }
L_0018ba8c:;
    {
        cpu->r[2] = rd32(0x0018ba94u + + 0x24u);
    }
L_0018ba90:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0018ba94:;
    {
        cpu->r[14] = 0x0018ba9cu;
    }
L_0018ba98:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018ba9cu)) return;
    }
L_0018ba9c:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018baa0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018ba84;
        }
    }
L_0018baa4:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0018baa8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0018baac:;
    {
        cpu->r[14] = 0x0018bab0u; imp_memset(cpu); /* memset */
    }
L_0018bab0:;
    {
        goto L_0018ba84;
    }
}

/* _Z12dbg_gx_errorPKc @ 0018babc (arm) */
void fn_0018babc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018babc:;
    {
        imp_glGetError(cpu); /* tail glGetError */ return;
    }
}

/* _Z9debug_outPKcz @ 0018bac0 (arm) */
void fn_0018bac0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018bac0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[0]);
        wr32(cpu->r[13] + 4u, cpu->r[1]);
        wr32(cpu->r[13] + 8u, cpu->r[2]);
        wr32(cpu->r[13] + 12u, cpu->r[3]);
    }
L_0018bac4:;
    {
        cpu->r[3] = rd32(0x0018baccu + + 0x94u);
    }
L_0018bac8:;
    {
        cpu->r[2] = rd32(0x0018bad0u + + 0x94u);
    }
L_0018bacc:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018bad4u, cpu->r[3], 0, 0);
    }
L_0018bad0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0018bad4:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0018bad8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000400u, 1, 0);
    }
L_0018badc:;
    {
        cpu->r[5] = rd32(0x0018bae4u + + 0x84u);
    }
L_0018bae0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0018bae4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0018bae8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0018baec:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000410u, 0, 0);
    }
L_0018baf0:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000004u, 1, 0);
    }
L_0018baf4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000000cu, 0, 0);
    }
L_0018baf8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x418u);
    }
L_0018bafc:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_0018bb00:;
    {
        cpu->r[5] = add_flags(cpu, 0x0018bb08u, cpu->r[5], 0, 0);
    }
L_0018bb04:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0018bb08:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0018bb0c:;
    {
        wr32(cpu->r[13] + + 0x404u, cpu->r[3]);
    }
L_0018bb10:;
    {
        cpu->r[14] = 0x0018bb14u; imp_vsprintf(cpu); /* vsprintf */
    }
L_0018bb14:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0018bb18:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0018bb1c:;
    {
        cpu->r[14] = 0x0018bb20u; imp_printf(cpu); /* printf */
    }
L_0018bb20:;
    {
        cpu->r[1] = rd32(0x0018bb28u + + 0x44u);
    }
L_0018bb24:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0018bb28:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0018bb2c:;
    {
        cpu->r[1] = add_flags(cpu, 0x0018bb34u, cpu->r[1], 0, 0);
    }
L_0018bb30:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_0018bb34:;
    {
        cpu->r[14] = 0x0018bb38u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0018bb38:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x404u);
    }
L_0018bb3c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0018bb40:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0018bb44:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018bb5c;
        }
    }
L_0018bb48:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0018bb4c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000400u, 0, 0);
    }
L_0018bb50:;
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
L_0018bb54:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_0018bb58:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0018bb5c:;
    {
        cpu->r[14] = 0x0018bb60u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_0018bb60:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[11] & shifter(cpu->r[4], 1, 18u, &shc); cpu->r[14] = v;
        }
    }
L_0018bb64:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_0018bb68:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] * cpu->r[8]; cpu->r[8] = v;
        }
    }
L_0018bb6c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[10] + (-cpu->r[8]);
        uint64_t v = rd64(cpu->r[10]);
        cpu->r[2] = (uint32_t)v;
        cpu->r[3] = (uint32_t)(v >> 32);
        cpu->r[10] = wb_tmp;
        }
    }
}

/* _Z11M_Free_HeapPv @ 0018bb70 (arm) */
void fn_0018bb70(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018bb70:;
    {
        imp_free(cpu); /* tail free */ return;
    }
}

/* _Z12M_Alloc_Heapj @ 0018bb74 (arm) */
void fn_0018bb74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018bb74:;
    {
        imp_malloc(cpu); /* tail malloc */ return;
    }
}

/* _Z11MAlloc_MEM2ji @ 0018bb78 (arm) */
void fn_0018bb78(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018bb78:;
    {
        imp__Znaj(cpu); /* tail _Znaj */ return;
    }
}

/* _Z11MAlloc_MEM2j @ 0018bb7c (arm) */
void fn_0018bb7c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018bb7c:;
    {
        imp__Znaj(cpu); /* tail _Znaj */ return;
    }
}

/* _ZN3vox6HandleD1Ev @ 0018bb80 (arm) */
void fn_0018bb80(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018bb80:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK3vox6Handle5GetIdEv @ 0018bb84 (arm) */
void fn_0018bb84(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018bb84:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0xcu);
    }
L_0018bb88:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_0018bb8c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK3vox6Handle16GetObjectPointerEv @ 0018bb90 (arm) */
void fn_0018bb90(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018bb90:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x18u);
    }
L_0018bb94:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK3vox6Handle12GetTimeStampERjS1_ @ 0018bb98 (arm) */
void fn_0018bb98(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018bb98:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x10u);
    }
L_0018bb9c:;
    {
        wr32(cpu->r[1], cpu->r[3]);
    }
L_0018bba0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x14u);
    }
L_0018bba4:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_0018bba8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox6Handle12SetTimeStampEjj @ 0018bbac (arm) */
void fn_0018bbac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018bbac:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_0018bbb0:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[1]);
    }
L_0018bbb4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10CSoundInfoC2Ev @ 0018bbb8 (arm) */
void fn_0018bbb8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018bbb8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0018bbbc:;
    {
        wr8(cpu->r[0] + + 0x15u, cpu->r[2]);
    }
L_0018bbc0:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0018bbc4:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_0018bbc8:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_0018bbcc:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_0018bbd0:;
    {
        wr8(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_0018bbd4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10CSoundInfoC1Ev @ 0018bbd8 (arm) */
void fn_0018bbd8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018bbd8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0018bbdc:;
    {
        wr8(cpu->r[0] + + 0x15u, cpu->r[2]);
    }
L_0018bbe0:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0018bbe4:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_0018bbe8:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_0018bbec:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_0018bbf0:;
    {
        wr8(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_0018bbf4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16BaseSoundManager17OpenAL_InitializeEv @ 0018bbf8 (arm) */
void fn_0018bbf8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018bbf8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16BaseSoundManager14OpenAL_DestroyEv @ 0018bbfc (arm) */
void fn_0018bbfc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018bbfc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16BaseSoundManager21OpenAL_ContextSuspendEv @ 0018bc00 (arm) */
void fn_0018bc00(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018bc00:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16BaseSoundManager20OpenAL_ContextResumeEv @ 0018bc04 (arm) */
void fn_0018bc04(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018bc04:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16BaseSoundManager23AudioSession_InitializeEv @ 0018bc08 (arm) */
void fn_0018bc08(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018bc08:;
    {
        cpu->r[3] = rd32(0x0018bc10u + + 0x1cu);
    }
L_0018bc0c:;
    {
        cpu->r[2] = rd32(0x0018bc14u + + 0x1cu);
    }
L_0018bc10:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018bc18u, cpu->r[3], 0, 0);
    }
L_0018bc14:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0018bc18:;
    {
        cpu->r[2] = rd8(cpu->r[3]);
    }
L_0018bc1c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0018bc20:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_0018bc24:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[3], cpu->r[2]);
        }
    }
L_0018bc28:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16BaseSoundManager30releaseAllSounds_UponInterruptEv @ 0018bc34 (arm) */
void fn_0018bc34(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018bc34:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16BaseSoundManager15processing_lockEb @ 0018bc38 (arm) */
void fn_0018bc38(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018bc38:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_0018bc3c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16BaseSoundManager17processing_unlockEv @ 0018bc40 (arm) */
void fn_0018bc40(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018bc40:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16BaseSoundManager19stopAllSecondMusicsEv @ 0018bc44 (arm) */
void fn_0018bc44(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018bc44:;
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
L_0018bc48:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0xa8u);
    }
L_0018bc4c:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0018bc50:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018bc54:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018bc58u)) return;
        }
    }
L_0018bc58:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_0018bc5c:;
    {
        cpu->r[11] = rd32(cpu->r[0] + + 0x98u);
    }
L_0018bc60:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], cpu->r[3], 1, 0);
    }
L_0018bc64:;
    {
        uint32_t v = shifter(cpu->r[11], 1, 2u, &shc); cpu->r[11] = v;
    }
L_0018bc68:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_0018bc6c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018bc70u)) return;
        }
    }
L_0018bc70:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_0018bc74:;
    {
        cpu->r[9] = (~0x00000000u);
    }
L_0018bc78:;
    {
        cpu->r[7] = rd32(cpu->r[3] + shifter(cpu->r[10], 2, 2u, &shc));
    }
L_0018bc7c:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_0018bc80:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018bc84:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018bd38;
        }
    }
L_0018bc88:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0018bc8c:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x4u);
    }
L_0018bc90:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_0018bc94:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], cpu->r[5], 0, 0);
    }
L_0018bc98:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x10u);
    }
L_0018bc9c:;
    {
        { uint32_t v = cpu->r[2] & 0x01000000u; set_nz(cpu, v); }
    }
L_0018bca0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018bd28;
        }
    }
L_0018bca4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_0018bca8:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[5]);
    }
L_0018bcac:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0018bcb0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000003u, 1, 1);
    }
L_0018bcb4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018bcf4;
        }
    }
L_0018bcb8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0018bcbc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_0018bcc0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0018bcc4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0018bcc8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0018bccc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0018bcd0:;
    {
        cpu->r[14] = 0x0018bcd8u;
    }
L_0018bcd4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018bcd8u)) return;
    }
L_0018bcd8:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x4u);
    }
L_0018bcdc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[5], 0, 0);
    }
L_0018bce0:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[5]);
    }
L_0018bce4:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_0018bce8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0018bcec:;
    {
        sub_flags(cpu, cpu->r[4], shifter(cpu->r[2], 1, 2u, &shc), 1, 1);
    }
L_0018bcf0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0018bcbc;
        }
    }
L_0018bcf4:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_0018bcf8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0018bcfc:;
    {
        goto L_0018bd0c;
    }
L_0018bd00:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0018bd04:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000020u, 1, 1);
    }
L_0018bd08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018bd4c;
        }
    }
L_0018bd0c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x14u);
    }
L_0018bd10:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0018bd14:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 1);
    }
L_0018bd18:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018bd00;
        }
    }
L_0018bd1c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0018bd20:;
    {
        wr32(cpu->r[2] + + 0x14u, cpu->r[9]);
    }
L_0018bd24:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_0018bd28:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0018bd2c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000018u, 0, 0);
    }
L_0018bd30:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 1);
    }
L_0018bd34:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0018bc94;
        }
    }
L_0018bd38:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_0018bd3c:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[11], 1, 1);
    }
L_0018bd40:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018bd44u)) return;
        }
    }
L_0018bd44:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x94u);
    }
L_0018bd48:;
    {
        goto L_0018bc78;
    }
L_0018bd4c:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_0018bd50:;
    {
        goto L_0018bd28;
    }
}

/* _ZN16BaseSoundManager14setListenerPosEPKfS1_ @ 0018bd54 (arm) */
void fn_0018bd54(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018bd54:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16BaseSoundManager6updateEi @ 0018bd58 (arm) */
void fn_0018bd58(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018bd58:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16BaseSoundManager26getNumberOfAllocatedSoundsEv @ 0018bd5c (arm) */
void fn_0018bd5c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018bd5c:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
    }
L_0018bd60:;
    {
        cpu->r[8] = rd32(cpu->r[0] + + 0x98u);
    }
L_0018bd64:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0x94u);
    }
L_0018bd68:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[7], 1, 0);
    }
L_0018bd6c:;
    {
        uint32_t v = shifter(cpu->r[8], 1, 2u, &shc); cpu->r[8] = v;
    }
L_0018bd70:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0018bd74:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0018bd78:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018bdd0;
        }
    }
L_0018bd7c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0018bd80:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0018bd84:;
    {
        cpu->r[3] = rd32(cpu->r[7] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_0018bd88:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_0018bd8c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0018bd90:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018bdc4;
        }
    }
L_0018bd94:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_0018bd98:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018bd9c:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_0018bda0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_0018bda4:;
    {
        cpu->r[12] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_0018bda8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0018bdac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000018u, 0, 0);
    }
L_0018bdb0:;
    {
        cpu->r[4] = rd32(cpu->r[4] + + 0x4u);
    }
L_0018bdb4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_0018bdb8:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[4], cpu->r[12], 1, 0);
    }
L_0018bdbc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[12], 1, 2u, &shc), 0, 0);
    }
L_0018bdc0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018bda0;
        }
    }
L_0018bdc4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0018bdc8:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[8], 1, 1);
    }
L_0018bdcc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018bd84;
        }
    }
L_0018bdd0:;
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
        cpu->r[8] = v4;
        cpu->r[13] += 20u;
    }
L_0018bdd4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16BaseSoundManager30getNumberOfAllocatedSoundsDataEv @ 0018bdd8 (arm) */
void fn_0018bdd8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018bdd8:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
    }
L_0018bddc:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x98u);
    }
L_0018bde0:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x94u);
    }
L_0018bde4:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 0);
    }
L_0018bde8:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 2u, &shc); cpu->r[6] = v;
    }
L_0018bdec:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0018bdf0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0018bdf4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018be40;
        }
    }
L_0018bdf8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0018bdfc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018be00:;
    {
        cpu->r[3] = rd32(cpu->r[5] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_0018be04:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_0018be08:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0018be0c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018be34;
        }
    }
L_0018be10:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_0018be14:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018be18:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0xcu);
    }
L_0018be1c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0018be20:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000018u, 0, 0);
    }
L_0018be24:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0018be28:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
        }
    }
L_0018be2c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_0018be30:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018be18;
        }
    }
L_0018be34:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0018be38:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 1);
    }
L_0018be3c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018be00;
        }
    }
L_0018be40:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[13] += 12u;
    }
L_0018be44:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3vox6HandleD0Ev @ 0018be48 (arm) */
void fn_0018be48(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018be48:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0018be4c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018be50:;
    {
        cpu->r[14] = 0x0018be54u; fn_0018ba20(cpu);
    }
L_0018be54:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018be58:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0018be5cu)) return;
    }
}

/* _ZN16BaseSoundManager17setSourceVelocityEiiPfi @ 0018be5c (arm) */
void fn_0018be5c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018be5c:;
    {
        cpu->r[12] = rd8(cpu->r[0] + + 0xa8u);
    }
L_0018be60:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_0018be64:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0018be68:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x4u);
    }
L_0018be6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018bea0;
        }
    }
L_0018be70:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0018be74:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0018bea0;
        }
    }
L_0018be78:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x94u);
    }
L_0018be7c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_0018be80:;
    {
        cpu->r[0] = rd32(cpu->r[0] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_0018be84:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_0018be88:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_0018be8c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + shifter(cpu->r[1], 2, 3u, &shc));
    }
L_0018be90:;
    {
        cpu->r[0] = rd32(cpu->r[12] + + 0x4u);
    }
L_0018be94:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
    }
L_0018be98:;
    {
        sub_flags(cpu, cpu->r[2], shifter(cpu->r[0], 1, 2u, &shc), 1, 1);
    }
L_0018be9c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0018bea8;
        }
    }
L_0018bea0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_0018bea4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0018bea8:;
    {
        cpu->r[0] = rd32(cpu->r[1] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_0018beac:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0018beb0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_0018beb4:;
    {
        return fn_0019121c(cpu);
    }
}

/* _ZN16BaseSoundManager12setSourcePosEiiPKfi @ 0018beb8 (arm) */
void fn_0018beb8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018beb8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0018bebc:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_0018bec0:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0xa8u);
    }
L_0018bec4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000030u, 1, 0);
    }
L_0018bec8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018becc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018bed0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018bf24;
        }
    }
L_0018bed4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_0018bed8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_0018bedc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0018bee0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018bf24;
        }
    }
L_0018bee4:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0018bee8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0018beec:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x4u);
    }
L_0018bef0:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_0018bef4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0018bef8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0018befc:;
    {
        cpu->r[14] = 0x0018bf00u; fn_001d3578(cpu);
    }
L_0018bf00:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_0018bf04:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_0018bf08:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0018bf0c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_0018bf10:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x8u);
    }
L_0018bf14:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0018bf18:;
    {
        cpu->r[14] = 0x0018bf1cu; fn_001d2f74(cpu);
    }
L_0018bf1c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0018bf20:;
    {
        cpu->r[14] = 0x0018bf24u; fn_001e2b74(cpu);
    }
L_0018bf24:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_0018bf28:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018bf2cu)) return;
    }
}

/* _ZN16BaseSoundManager8setPitchEiifi @ 0018bf2c (arm) */
void fn_0018bf2c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018bf2c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[8]);
        wr32(cpu->r[13] + 16u, cpu->r[9]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0018bf30:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018bf34:;
    {
        cpu->r[0] = rd32(0x0018bf3cu + + 0xa8u);
    }
L_0018bf38:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000058u, 1, 0);
    }
L_0018bf3c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0xa8u);
    }
L_0018bf40:;
    {
        cpu->r[0] = add_flags(cpu, 0x0018bf48u, cpu->r[0], 0, 0);
    }
L_0018bf44:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018bf48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018bfdc;
        }
    }
L_0018bf4c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_0018bf50:;
    {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_0018bf54:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0018bf58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018bfdc;
        }
    }
L_0018bf5c:;
    {
        cpu->r[14] = rd32(0x0018bf64u + + 0x84u);
    }
L_0018bf60:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0018bf64:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0018bf68:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_0018bf6c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4u);
    }
L_0018bf70:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_0018bf74:;
    {
        cpu->r[14] = rd32(cpu->r[0] + cpu->r[14]);
    }
L_0018bf78:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0018bf7c:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[12]);
    }
L_0018bf80:;
    {
        cpu->r[8] = (~0x00000000u);
    }
L_0018bf84:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000008u, 0, 0);
    }
L_0018bf88:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[12]);
    }
L_0018bf8c:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[14]);
    }
L_0018bf90:;
    {
        cpu->r[9] = (~0x00000000u);
    }
L_0018bf94:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[12]);
    }
L_0018bf98:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[12]);
    }
L_0018bf9c:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[12]);
    }
L_0018bfa0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0018bfa4:;
    {
        wr64(cpu->r[13] + + 0x38u, ((uint64_t)cpu->r[9] << 32) | cpu->r[8]);
    }
L_0018bfa8:;
    {
        cpu->r[14] = 0x0018bfacu; fn_001d3578(cpu);
    }
L_0018bfac:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0018bfb0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0018bfb4:;
    {
        cpu->r[14] = 0x0018bfb8u; fn_001e2aec(cpu);
    }
L_0018bfb8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0018bfbc:;
    {
        cpu->r[14] = 0x0018bfc0u; fn_001e2b74(cpu);
    }
L_0018bfc0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_0018bfc4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0018bfc8:;
    {
        cpu->r[2] = 0x3f800000u;
    }
L_0018bfcc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018bfd0:;
    {
        cpu->r[14] = 0x0018bfd4u; fn_001d335c(cpu);
    }
L_0018bfd4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0018bfd8:;
    {
        cpu->r[14] = 0x0018bfdcu; fn_001e2b74(cpu);
    }
L_0018bfdc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000058u, 0, 0);
    }
L_0018bfe0:;
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
        cpu->r[8] = v3;
        cpu->r[9] = v4;
        uint32_t t = v5;
        cpu->r[13] += 24u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0018bfe4u)) return;
    }
}

/* _ZN16BaseSoundManager9setVolumeEiifi @ 0018bfec (arm) */
void fn_0018bfec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018bfec:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[8]);
        wr32(cpu->r[13] + 16u, cpu->r[9]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0018bff0:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0018bff4:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[3];
    }
L_0018bff8:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0xa8u);
    }
L_0018bffc:;
    {
        cpu->r[4] = rd32(0x0018c004u + + 0xe0u);
    }
L_0018c000:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000030u, 1, 0);
    }
L_0018c004:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018c008:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0018c00c:;
    {
        cpu->r[4] = add_flags(cpu, 0x0018c014u, cpu->r[4], 0, 0);
    }
L_0018c010:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_0018c014:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018c0a0;
        }
    }
L_0018c018:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_0018c01c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_0018c020:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0018c024:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018c0a0;
        }
    }
L_0018c028:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,16));
    }
L_0018c02c:;
    {
        vfp_sync_flags(cpu);
    }
L_0018c030:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018c0ac;
        }
    }
L_0018c034:;
    {
        cpu->r[2] = rd32(0x0018c03cu + + 0xacu);
    }
L_0018c038:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_0018c03c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0018c040:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x4u);
    }
L_0018c044:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0018c048:;
    {
        cpu->r[8] = (~0x00000000u);
    }
L_0018c04c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0018c050:;
    {
        cpu->r[9] = (~0x00000000u);
    }
L_0018c054:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[12]);
    }
L_0018c058:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0018c05c:;
    {
        uint32_t wb_tmp = cpu->r[6] + - 0x28u;
        wr32(cpu->r[6] + - 0x28u, cpu->r[2]);
        cpu->r[6] = wb_tmp;
    }
L_0018c060:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0018c064:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_0018c068:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_0018c06c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[12]);
    }
L_0018c070:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[12]);
    }
L_0018c074:;
    {
        wr64(cpu->r[13] + + 0x10u, ((uint64_t)cpu->r[9] << 32) | cpu->r[8]);
    }
L_0018c078:;
    {
        cpu->r[14] = 0x0018c07cu; fn_001d36d8(cpu);
    }
L_0018c07c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x4u);
    }
L_0018c080:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018c084:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,16);
    }
L_0018c088:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0018c08c:;
    {
        cpu->r[14] = 0x0018c090u; fn_001d33dc(cpu);
    }
L_0018c090:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0018c094:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_0018c098:;
    {
        cpu->r[14] = 0x0018c0a0u;
    }
L_0018c09c:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018c0a0u)) return;
    }
L_0018c0a0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_0018c0a4:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0018c0a8:;
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
        cpu->r[8] = v3;
        cpu->r[9] = v4;
        uint32_t t = v5;
        cpu->r[13] += 24u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0018c0acu)) return;
    }
L_0018c0ac:;
    {
        *vfp_d(cpu,7) = (double)*vfp_s(cpu,16);
    }
L_0018c0b0:;
    {
        cpu->r[1] = rd32(0x0018c0b8u + + 0x34u);
    }
L_0018c0b4:;
    {
        cpu->r[2] = rd32(0x0018c0bcu + + 0x34u);
    }
L_0018c0b8:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0018c0bc:;
    {
        cpu->r[1] = add_flags(cpu, 0x0018c0c4u, cpu->r[1], 0, 0);
    }
L_0018c0c0:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_0018c0c4:;
    {
        cpu->r[2] = add_flags(cpu, 0x0018c0ccu, cpu->r[2], 0, 0);
    }
L_0018c0c8:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x0018c0d0u + + 0x10u);
    }
L_0018c0cc:;
    {
        *(uint64_t*)G(cpu->r[13]) = *(uint64_t*)vfp_d(cpu, 7);
    }
L_0018c0d0:;
    {
        cpu->r[14] = 0x0018c0d4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0018c0d4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_0018c0d8:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_0018c0dc:;
    {
        goto L_0018c034;
    }
}

/* _ZN16BaseSoundManager14setMusicVolumeEf @ 0018c0f4 (arm) */
void fn_0018c0f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018c0f4:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[1];
    }
L_0018c0f8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_0018c0fc:;
    {
        vfp_sync_flags(cpu);
    }
L_0018c100:;
    {
        if (cond_test(cpu, 6)) {
        goto L_0018c12c;
        }
    }
L_0018c104:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0xa8u);
    }
L_0018c108:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0018c110u + + 0x40u);
    }
L_0018c10c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xa0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0018c110:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018c114:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_0018c118:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xa0u);
    }
L_0018c11c:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_0018c120:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_0018c124:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018c128:;
    {
        return fn_001d2978(cpu);
    }
L_0018c12c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0018c134u + + 0x20u);
    }
L_0018c130:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_0018c134:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0xa8u);
    }
L_0018c138:;
    {
        vfp_sync_flags(cpu);
    }
L_0018c13c:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,15) = *vfp_s(cpu,14);
        }
    }
L_0018c140:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018c144:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xa0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0018c148:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_0018c14c:;
    {
        goto L_0018c118;
    }
}

/* _ZN16BaseSoundManager12setSFxVolumeEf @ 0018c158 (arm) */
void fn_0018c158(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018c158:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[1];
    }
L_0018c15c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_0018c160:;
    {
        vfp_sync_flags(cpu);
    }
L_0018c164:;
    {
        if (cond_test(cpu, 6)) {
        goto L_0018c190;
        }
    }
L_0018c168:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0xa8u);
    }
L_0018c16c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0018c174u + + 0x40u);
    }
L_0018c170:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xa4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0018c174:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018c178:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_0018c17c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xa4u);
    }
L_0018c180:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_0018c184:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_0018c188:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018c18c:;
    {
        return fn_001d2978(cpu);
    }
L_0018c190:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0018c198u + + 0x20u);
    }
L_0018c194:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_0018c198:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0xa8u);
    }
L_0018c19c:;
    {
        vfp_sync_flags(cpu);
    }
L_0018c1a0:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,15) = *vfp_s(cpu,14);
        }
    }
L_0018c1a4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018c1a8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xa4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0018c1ac:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_0018c1b0:;
    {
        goto L_0018c17c;
    }
}

/* _ZN16BaseSoundManager14isSoundPlayingEiii @ 0018c1bc (arm) */
void fn_0018c1bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018c1bc:;
    {
        cpu->r[2] = rd8(cpu->r[0] + + 0xa8u);
    }
L_0018c1c0:;
    {
        cpu->r[3] = rd32(0x0018c1c8u + + 0x100u);
    }
L_0018c1c4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0018c1c8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0018c1cc:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018c1d4u, cpu->r[3], 0, 0);
    }
L_0018c1d0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000190u, 1, 0);
    }
L_0018c1d4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0018c1d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018c294;
        }
    }
L_0018c1dc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0018c1e0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0018c294;
        }
    }
L_0018c1e4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8u);
    }
L_0018c1e8:;
    {
        cpu->r[0] = rd32(cpu->r[2] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_0018c1ec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018c1f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018c28c;
        }
    }
L_0018c1f4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[1], 0x00000072u, 1, 0);
    }
L_0018c1f8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000004u, 1, 1);
    }
L_0018c1fc:;
    {
        if (cond_test(cpu, 10)) {
        goto L_0018c294;
        }
    }
L_0018c200:;
    {
        cpu->r[8] = rd32(0x0018c208u + + 0xc4u);
    }
L_0018c204:;
    {
        cpu->r[4] = cpu->r[13];
    }
L_0018c208:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_0018c20c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x000001b8u, 0, 0);
    }
L_0018c210:;
    {
        cpu->r[6] = (~0x00000000u);
    }
L_0018c214:;
    {
        cpu->r[7] = (~0x00000000u);
    }
L_0018c218:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_0018c21c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0018c220:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0018c224:;
    {
        wr64(cpu->r[0] + - 0x20u, ((uint64_t)cpu->r[7] << 32) | cpu->r[6]);
    }
L_0018c228:;
    {
        wr32(cpu->r[0] + - 0x18u, cpu->r[12]);
    }
L_0018c22c:;
    {
        wr32(cpu->r[0] + - 0x14u, cpu->r[12]);
    }
L_0018c230:;
    {
        wr32(cpu->r[0] + - 0x10u, cpu->r[12]);
    }
L_0018c234:;
    {
        wr32(cpu->r[0] + - 0xcu, cpu->r[12]);
    }
L_0018c238:;
    {
        wr32(cpu->r[0] + - 0x8u, cpu->r[12]);
    }
L_0018c23c:;
    {
        wr32(cpu->r[0] + - 0x28u, cpu->r[3]);
    }
L_0018c240:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000028u, 0, 0);
    }
L_0018c244:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[14], 1, 1);
    }
L_0018c248:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018c224;
        }
    }
L_0018c24c:;
    {
        cpu->r[1] = rd32(cpu->r[2] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_0018c250:;
    {
        cpu->r[3] = 0x0000000au;
    }
L_0018c254:;
    {
        cpu->r[2] = cpu->r[13];
    }
L_0018c258:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x4u);
    }
L_0018c25c:;
    {
        cpu->r[14] = 0x0018c260u; fn_001d36d8(cpu);
    }
L_0018c260:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018c264:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018c2a4;
        }
    }
L_0018c268:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0018c26c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000190u, 0, 0);
    }
L_0018c270:;
    {
        uint32_t wb_tmp = cpu->r[5] + - 0x28u;
        cpu->r[3] = rd32(cpu->r[5] + - 0x28u);
        cpu->r[5] = wb_tmp;
    }
L_0018c274:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0018c278:;
    {
        cpu->r[14] = 0x0018c280u;
    }
L_0018c27c:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018c280u)) return;
    }
L_0018c280:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_0018c284:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018c270;
        }
    }
L_0018c288:;
    {
        goto L_0018c298;
    }
L_0018c28c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000011u, 1, 1);
    }
L_0018c290:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0018c1f4;
        }
    }
L_0018c294:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0018c298:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0018c29c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000190u, 0, 0);
    }
L_0018c2a0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018c2a4u)) return;
    }
L_0018c2a4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_0018c2a8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x4u);
    }
L_0018c2ac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0018c2b0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_0018c2b4:;
    {
        cpu->r[14] = 0x0018c2b8u; fn_001d3024(cpu);
    }
L_0018c2b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018c2bc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = 0x00000001u;
        }
    }
L_0018c2c0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_0018c2c4:;
    {
        goto L_0018c26c;
    }
}

/* _ZN16BaseSoundManager14CacheSoundFileEii @ 0018c2d0 (arm) */
void fn_0018c2d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018c2d0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_0018c2d4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0018c2d8:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0018c2dc:;
    {
        cpu->r[5] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_0018c2e0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0018c2f0;
        }
    }
L_0018c2e4:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0018c2e8:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_0018c2ec:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0018c310;
        }
    }
L_0018c2f0:;
    {
        cpu->r[0] = rd32(0x0018c2f8u + + 0x3cu);
    }
L_0018c2f4:;
    {
        cpu->r[2] = 0x000005beu;
    }
L_0018c2f8:;
    {
        cpu->r[1] = rd32(0x0018c300u + + 0x38u);
    }
L_0018c2fc:;
    {
        cpu->r[3] = rd32(0x0018c304u + + 0x38u);
    }
L_0018c300:;
    {
        cpu->r[0] = add_flags(cpu, 0x0018c308u, cpu->r[0], 0, 0);
    }
L_0018c304:;
    {
        cpu->r[1] = add_flags(cpu, 0x0018c30cu, cpu->r[1], 0, 0);
    }
L_0018c308:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018c310u, cpu->r[3], 0, 0);
    }
L_0018c30c:;
    {
        cpu->r[14] = 0x0018c310u; imp_printf(cpu); /* printf */
    }
L_0018c310:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_0018c314:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
    }
L_0018c318:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 3u, &shc));
    }
L_0018c31c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0018c320:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0018c324:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0018c328:;
    {
        cpu->r[14] = 0x0018c330u;
    }
L_0018c32c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018c330u)) return;
    }
L_0018c330:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018c334u)) return;
    }
}

/* _ZNSt6vectorIP6CSoundSaIS1_EE18_M_fill_insert_auxEPS1_jRKS1_RKSt12__false_type @ 0018c340 (arm) */
void fn_0018c340(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018c340:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_0018c344:;
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
L_0018c348:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_0018c34c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[12], 1, 1);
    }
L_0018c350:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_0018c354:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018c358:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_0018c35c:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0018c360:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[7] = rd32(cpu->r[0] + + 0x4u);
        }
    }
L_0018c364:;
    {
        if (cond_test(cpu, 4)) {
        goto L_0018c394;
        }
    }
L_0018c368:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0x4u);
    }
L_0018c36c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[7], 1, 1);
    }
L_0018c370:;
    {
        if (cond_test(cpu, 3)) {
        goto L_0018c394;
        }
    }
L_0018c374:;
    {
        cpu->r[12] = rd32(cpu->r[5]);
    }
L_0018c378:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_0018c37c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0018c380:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_0018c384:;
    {
        uint32_t wb_tmp = cpu->r[3] + - 0x8u;
        wr32(cpu->r[3] + - 0x8u, cpu->r[12]);
        cpu->r[3] = wb_tmp;
    }
L_0018c388:;
    {
        cpu->r[14] = 0x0018c38cu; fn_0018c340(cpu);
    }
L_0018c38c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_0018c390:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018c394u)) return;
    }
L_0018c394:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 0);
    }
L_0018c398:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[8] = v;
    }
L_0018c39c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_0018c3a0:;
    {
        if (cond_test(cpu, 3)) {
        goto L_0018c418;
        }
    }
L_0018c3a4:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[8] = v;
    }
L_0018c3a8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[7], cpu->r[8], 1, 0);
    }
L_0018c3ac:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_0018c3b0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = cpu->r[7];
        }
    }
L_0018c3b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018c3d0;
        }
    }
L_0018c3b8:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0018c3bc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 0);
    }
L_0018c3c0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0018c3c4:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_0018c3c8:;
    {
        cpu->r[14] = 0x0018c3ccu; imp_memcpy(cpu); /* memcpy */
    }
L_0018c3cc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_0018c3d0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[10], cpu->r[6], 1, 0);
    }
L_0018c3d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_0018c3d8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0018c3dc:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_0018c3e0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018c3f0;
        }
    }
L_0018c3e4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 0);
    }
L_0018c3e8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0018c3ec:;
    {
        cpu->r[14] = 0x0018c3f0u; imp_memmove(cpu); /* memmove */
    }
L_0018c3f0:;
    {
        uint32_t v = shifter(cpu->r[8], 1, 2u, &shc); cpu->r[8] = v;
    }
L_0018c3f4:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0018c3f8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018c38c;
        }
    }
L_0018c3fc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0018c400:;
    {
        cpu->r[1] = rd32(cpu->r[5]);
    }
L_0018c404:;
    {
        wr32(cpu->r[6] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[1]);
    }
L_0018c408:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0018c40c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[8], 1, 1);
    }
L_0018c410:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018c400;
        }
    }
L_0018c414:;
    {
        goto L_0018c38c;
    }
L_0018c418:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 0);
    }
L_0018c41c:;
    {
        { int32_t v = (int32_t)(cpu->r[3] << 2); cpu->r[10] = (uint32_t)(v >> 2); }
    }
L_0018c420:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0018c424:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0018c428:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018c444;
        }
    }
L_0018c42c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0018c430:;
    {
        cpu->r[12] = rd32(cpu->r[5]);
    }
L_0018c434:;
    {
        wr32(cpu->r[7] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[12]);
    }
L_0018c438:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0018c43c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[10], 1, 1);
    }
L_0018c440:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018c430;
        }
    }
L_0018c444:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[7], 1, 1);
    }
L_0018c448:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_0018c44c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018c45c;
        }
    }
L_0018c450:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0018c454:;
    {
        cpu->r[14] = 0x0018c458u; imp_memcpy(cpu); /* memcpy */
    }
L_0018c458:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_0018c45c:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0018c460:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[8], 2, 2u, &shc), 0, 0);
    }
L_0018c464:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_0018c468:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018c38c;
        }
    }
L_0018c46c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018c470:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_0018c474:;
    {
        wr32(cpu->r[6] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[2]);
    }
L_0018c478:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0018c47c:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_0018c480:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018c470;
        }
    }
L_0018c484:;
    {
        goto L_0018c38c;
    }
}

/* _ZN16BaseSoundManager17InitDecodeBuffersEv @ 0018c488 (arm) */
void fn_0018c488(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018c488:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0018c48c:;
    {
        cpu->r[5] = rd32(0x0018c494u + + 0x38u);
    }
L_0018c490:;
    {
        cpu->r[3] = rd32(0x0018c498u + + 0x38u);
    }
L_0018c494:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0018c498:;
    {
        cpu->r[5] = add_flags(cpu, 0x0018c4a0u, cpu->r[5], 0, 0);
    }
L_0018c49c:;
    {
        cpu->r[7] = rd32(0x0018c4a4u + + 0x30u);
    }
L_0018c4a0:;
    {
        cpu->r[8] = (~0x00000000u);
    }
L_0018c4a4:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0018c4a8:;
    {
        wr32(cpu->r[4] + cpu->r[6], cpu->r[8]);
    }
L_0018c4ac:;
    {
        cpu->r[0] = 0x0000c350u;
    }
L_0018c4b0:;
    {
        cpu->r[14] = 0x0018c4b4u; imp__Znaj(cpu); /* _Znaj */
    }
L_0018c4b4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0018c4b8:;
    {
        wr32(cpu->r[3] + cpu->r[4], cpu->r[0]);
    }
L_0018c4bc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_0018c4c0:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000064u, 1, 1);
    }
L_0018c4c4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018c4a8;
        }
    }
L_0018c4c8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018c4ccu)) return;
    }
}

/* _ZN16BaseSoundManagerC1Ev @ 0018c4d8 (arm) */
void fn_0018c4d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018c4d8:;
    {
        cpu->r[3] = rd32(0x0018c4e0u + + 0x78u);
    }
L_0018c4dc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0018c4e4u + + 0x70u);
    }
L_0018c4e0:;
    {
        cpu->r[2] = rd32(0x0018c4e8u + + 0x74u);
    }
L_0018c4e4:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xa4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0018c4e8:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018c4f0u, cpu->r[3], 0, 0);
    }
L_0018c4ec:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xa0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0018c4f0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0018c4f4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0018c4f8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0018c4fc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018c500:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0018c504:;
    {
        wr32(cpu->r[0] + + 0x94u, cpu->r[5]);
    }
L_0018c508:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0018c50c:;
    {
        wr32(cpu->r[0] + + 0x98u, cpu->r[5]);
    }
L_0018c510:;
    {
        wr32(cpu->r[0] + + 0x9cu, cpu->r[5]);
    }
L_0018c514:;
    {
        wr8(cpu->r[0] + + 0xa8u, cpu->r[5]);
    }
L_0018c518:;
    {
        wr32(cpu->r[0] + + 0xacu, cpu->r[5]);
    }
L_0018c51c:;
    {
        wr8(cpu->r[0] + + 0xb0u, cpu->r[5]);
    }
L_0018c520:;
    {
        wr8(cpu->r[0] + + 0xbcu, cpu->r[5]);
    }
L_0018c524:;
    {
        cpu->r[14] = 0x0018c528u; fn_0018bc08(cpu);
    }
L_0018c528:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_0018c52c:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_0018c530:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0018c534:;
    {
        wr32(cpu->r[3] + + 0x14u, cpu->r[2]);
    }
L_0018c538:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000020u, 1, 1);
    }
L_0018c53c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0018c540:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018c530;
        }
    }
L_0018c544:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018c548:;
    {
        cpu->r[14] = 0x0018c54cu; fn_0018c488(cpu);
    }
L_0018c54c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018c550:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018c554u)) return;
    }
}

/* _ZN16BaseSoundManagerC2Ev @ 0018c560 (arm) */
void fn_0018c560(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018c560:;
    {
        cpu->r[3] = rd32(0x0018c568u + + 0x78u);
    }
L_0018c564:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0018c56cu + + 0x70u);
    }
L_0018c568:;
    {
        cpu->r[2] = rd32(0x0018c570u + + 0x74u);
    }
L_0018c56c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xa4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0018c570:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018c578u, cpu->r[3], 0, 0);
    }
L_0018c574:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xa0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0018c578:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0018c57c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0018c580:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0018c584:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018c588:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0018c58c:;
    {
        wr32(cpu->r[0] + + 0x94u, cpu->r[5]);
    }
L_0018c590:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0018c594:;
    {
        wr32(cpu->r[0] + + 0x98u, cpu->r[5]);
    }
L_0018c598:;
    {
        wr32(cpu->r[0] + + 0x9cu, cpu->r[5]);
    }
L_0018c59c:;
    {
        wr8(cpu->r[0] + + 0xa8u, cpu->r[5]);
    }
L_0018c5a0:;
    {
        wr32(cpu->r[0] + + 0xacu, cpu->r[5]);
    }
L_0018c5a4:;
    {
        wr8(cpu->r[0] + + 0xb0u, cpu->r[5]);
    }
L_0018c5a8:;
    {
        wr8(cpu->r[0] + + 0xbcu, cpu->r[5]);
    }
L_0018c5ac:;
    {
        cpu->r[14] = 0x0018c5b0u; fn_0018bc08(cpu);
    }
L_0018c5b0:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_0018c5b4:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_0018c5b8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0018c5bc:;
    {
        wr32(cpu->r[3] + + 0x14u, cpu->r[2]);
    }
L_0018c5c0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000020u, 1, 1);
    }
L_0018c5c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0018c5c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018c5b8;
        }
    }
L_0018c5cc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018c5d0:;
    {
        cpu->r[14] = 0x0018c5d4u; fn_0018c488(cpu);
    }
L_0018c5d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018c5d8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018c5dcu)) return;
    }
}

/* _ZN9SoundPackC1EiP10FileHeader @ 0018c5e8 (arm) */
void fn_0018c5e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018c5e8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0018c5ec:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0018c5f0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0018c5f4:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0018c5f8:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0018c5fc:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_0018c600:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[7]);
    }
L_0018c604:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[7]);
    }
L_0018c608:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[7]);
    }
L_0018c60c:;
    {
        wr32(cpu->r[5], cpu->r[1]);
    }
L_0018c610:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018c654;
        }
    }
L_0018c614:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_0018c618:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_0018c61c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 3u, &shc); cpu->r[0] = v;
    }
L_0018c620:;
    {
        cpu->r[14] = 0x0018c624u; imp__Znaj(cpu); /* _Znaj */
    }
L_0018c624:;
    {
        cpu->r[3] = 0x00000018u;
    }
L_0018c628:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_0018c62c:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_0018c630:;
    {
        cpu->r[6] = cpu->r[8];
    }
L_0018c634:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[4]);
    }
L_0018c638:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0018c63c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0018c640:;
    {
        cpu->r[14] = 0x0018c644u; fn_0018bbd8(cpu);
    }
L_0018c644:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[7], 1, 1);
    }
L_0018c648:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000018u, 0, 0);
    }
L_0018c64c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018c638;
        }
    }
L_0018c650:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[8]);
    }
L_0018c654:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0018c658:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018c65cu)) return;
    }
}

/* _ZN9SoundPackC2EiP10FileHeader @ 0018c65c (arm) */
void fn_0018c65c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018c65c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0018c660:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0018c664:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0018c668:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0018c66c:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0018c670:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_0018c674:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[7]);
    }
L_0018c678:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[7]);
    }
L_0018c67c:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[7]);
    }
L_0018c680:;
    {
        wr32(cpu->r[5], cpu->r[1]);
    }
L_0018c684:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018c6c8;
        }
    }
L_0018c688:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_0018c68c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_0018c690:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 3u, &shc); cpu->r[0] = v;
    }
L_0018c694:;
    {
        cpu->r[14] = 0x0018c698u; imp__Znaj(cpu); /* _Znaj */
    }
L_0018c698:;
    {
        cpu->r[3] = 0x00000018u;
    }
L_0018c69c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_0018c6a0:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_0018c6a4:;
    {
        cpu->r[6] = cpu->r[8];
    }
L_0018c6a8:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[4]);
    }
L_0018c6ac:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0018c6b0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0018c6b4:;
    {
        cpu->r[14] = 0x0018c6b8u; fn_0018bbd8(cpu);
    }
L_0018c6b8:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[7], 1, 1);
    }
L_0018c6bc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000018u, 0, 0);
    }
L_0018c6c0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018c6ac;
        }
    }
L_0018c6c4:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[8]);
    }
L_0018c6c8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0018c6cc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018c6d0u)) return;
    }
}

/* _ZN16BaseSoundManager13InitSoundDataEiiP9SoundPackR18CSoundDecoderMSWAV @ 0018c6d0 (arm) */
void fn_0018c6d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018c6d0:;
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
L_0018c6d4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_0018c6d8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_0018c6dc:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0018c6e0:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x58u);
    }
L_0018c6e4:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_0018c6e8:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_0018c6ec:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 3u, &shc); cpu->r[8] = v;
    }
L_0018c6f0:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_0018c6f4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[8], 0, 0);
    }
L_0018c6f8:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[0]);
    }
L_0018c6fc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0018c700:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018c704:;
    {
        cpu->r[6] = rd32(cpu->r[1] + + 0x10u);
    }
L_0018c708:;
    {
        cpu->r[14] = 0x0018c710u;
    }
L_0018c70c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018c710u)) return;
    }
L_0018c710:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0018c714:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_0018c718:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018c71c:;
    {
        cpu->r[14] = 0x0018c724u;
    }
L_0018c720:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018c724u)) return;
    }
L_0018c724:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0018c728:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_0018c72c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018c730:;
    {
        cpu->r[14] = 0x0018c738u;
    }
L_0018c734:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018c738u)) return;
    }
L_0018c738:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0018c73c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018c740:;
    {
        cpu->r[14] = 0x0018c748u;
    }
L_0018c744:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x28u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018c748u)) return;
    }
L_0018c748:;
    {
        uint32_t v = cpu->r[6] & 0x00000001u; cpu->r[10] = v;
        set_nz(cpu, v);
    }
L_0018c74c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x24u, cpu->r[10]);
        }
    }
L_0018c750:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_0018c754:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018c7a4;
        }
    }
L_0018c758:;
    {
        cpu->r[0] = 0x00000030u;
    }
L_0018c75c:;
    {
        cpu->r[14] = 0x0018c760u; fn_0018ba6c(cpu);
    }
L_0018c760:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0018c764:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_0018c768:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0018c76c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0018c770:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[9]);
    }
L_0018c774:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0018c778:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_0018c77c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[11]);
    }
L_0018c780:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[10]);
    }
L_0018c784:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_0018c788:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018c78c:;
    {
        cpu->r[14] = 0x0018c790u; fn_001914e0(cpu);
    }
L_0018c790:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x4u);
    }
L_0018c794:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_0018c798:;
    {
        wr32(cpu->r[8] + + 0xcu, cpu->r[4]);
    }
L_0018c79c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_0018c7a0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018c7a4u)) return;
    }
L_0018c7a4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0018c7a8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018c7ac:;
    {
        cpu->r[14] = 0x0018c7b4u;
    }
L_0018c7b0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018c7b4u)) return;
    }
L_0018c7b4:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_0018c7b8:;
    {
        cpu->r[14] = 0x0018c7bcu; imp__Znaj(cpu); /* _Znaj */
    }
L_0018c7bc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_0018c7c0:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_0018c7c4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_0018c7c8:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0xacu);
    }
L_0018c7cc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_0018c7d0:;
    {
        cpu->r[12] = rd32(cpu->r[2] + + 0x8u);
    }
L_0018c7d4:;
    {
        wr32(cpu->r[1] + + 0xacu, cpu->r[3]);
    }
L_0018c7d8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_0018c7dc:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[0]);
    }
L_0018c7e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018c7e4:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0018c7e8:;
    {
        cpu->r[14] = 0x0018c7f0u;
    }
L_0018c7ec:;
    {
        uint32_t t = rd32(cpu->r[2] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018c7f0u)) return;
    }
L_0018c7f0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0018c7f4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018c7f8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_0018c7fc:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0018c800:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018c804:;
    {
        cpu->r[14] = 0x0018c808u; guest_call(cpu, cpu->r[12]);
    }
L_0018c808:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018c80c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0018c810:;
    {
        cpu->r[14] = 0x0018c818u;
    }
L_0018c814:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x20u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018c818u)) return;
    }
L_0018c818:;
    {
        uint32_t v = cpu->r[9] * cpu->r[0]; cpu->r[0] = v;
    }
L_0018c81c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[4] = v;
    }
L_0018c820:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000008u, 1, 1);
    }
L_0018c824:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
        }
    }
L_0018c828:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018c758;
        }
    }
L_0018c82c:;
    {
        cpu->r[0] = 0x00000030u;
    }
L_0018c830:;
    {
        cpu->r[14] = 0x0018c834u; fn_0018ba6c(cpu);
    }
L_0018c834:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0018c838:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_0018c83c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0018c840:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0018c844:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[9]);
    }
L_0018c848:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0018c84c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0018c850:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[11]);
    }
L_0018c854:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[4]);
    }
L_0018c858:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_0018c85c:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_0018c860:;
    {
        cpu->r[14] = 0x0018c864u; fn_001914e0(cpu);
    }
L_0018c864:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x4u);
    }
L_0018c868:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_0018c86c:;
    {
        wr32(cpu->r[8] + + 0xcu, cpu->r[10]);
    }
L_0018c870:;
    {
        goto L_0018c79c;
    }
}

/* _ZN16BaseSoundManager12getSoundDataEii @ 0018c874 (arm) */
void fn_0018c874(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018c874:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_0018c878:;
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
L_0018c87c:;
    {
        cpu->r[4] = rd32(0x0018c884u + + 0x150u);
    }
L_0018c880:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0018c884:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000038u, 1, 0);
    }
L_0018c888:;
    {
        cpu->r[4] = add_flags(cpu, 0x0018c890u, cpu->r[4], 0, 0);
    }
L_0018c88c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0018c890:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_0018c894:;
    {
        cpu->r[6] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_0018c898:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0018c8cc;
        }
    }
L_0018c89c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0018c8a0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_0018c8a4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0018c8cc;
        }
    }
L_0018c8a8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 1u, &shc), 0, 0);
    }
L_0018c8ac:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_0018c8b0:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 3u, &shc); cpu->r[8] = v;
    }
L_0018c8b4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_0018c8b8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0xcu);
    }
L_0018c8bc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018c8c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018c908;
        }
    }
L_0018c8c4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_0018c8c8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018c8ccu)) return;
    }
L_0018c8cc:;
    {
        cpu->r[0] = rd32(0x0018c8d4u + + 0x104u);
    }
L_0018c8d0:;
    {
        cpu->r[2] = 0x00000518u;
    }
L_0018c8d4:;
    {
        cpu->r[1] = rd32(0x0018c8dcu + + 0x100u);
    }
L_0018c8d8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 1u, &shc), 0, 0);
    }
L_0018c8dc:;
    {
        cpu->r[3] = rd32(0x0018c8e4u + + 0xfcu);
    }
L_0018c8e0:;
    {
        cpu->r[0] = add_flags(cpu, 0x0018c8e8u, cpu->r[0], 0, 0);
    }
L_0018c8e4:;
    {
        cpu->r[1] = add_flags(cpu, 0x0018c8ecu, cpu->r[1], 0, 0);
    }
L_0018c8e8:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 3u, &shc); cpu->r[8] = v;
    }
L_0018c8ec:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018c8f4u, cpu->r[3], 0, 0);
    }
L_0018c8f0:;
    {
        cpu->r[14] = 0x0018c8f4u; imp_printf(cpu); /* printf */
    }
L_0018c8f4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_0018c8f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_0018c8fc:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0xcu);
    }
L_0018c900:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018c904:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018c8c4;
        }
    }
L_0018c908:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x10u);
    }
L_0018c90c:;
    {
        { uint32_t v = cpu->r[3] & 0x00080000u; set_nz(cpu, v); }
    }
L_0018c910:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018c94c;
        }
    }
L_0018c914:;
    {
        { uint32_t v = cpu->r[3] & 0x00040000u; set_nz(cpu, v); }
    }
L_0018c918:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018c99c;
        }
    }
L_0018c91c:;
    {
        cpu->r[0] = rd32(0x0018c924u + + 0xc0u);
    }
L_0018c920:;
    {
        cpu->r[2] = 0x0000056fu;
    }
L_0018c924:;
    {
        cpu->r[1] = rd32(0x0018c92cu + + 0xbcu);
    }
L_0018c928:;
    {
        cpu->r[3] = rd32(0x0018c930u + + 0xbcu);
    }
L_0018c92c:;
    {
        cpu->r[0] = add_flags(cpu, 0x0018c934u, cpu->r[0], 0, 0);
    }
L_0018c930:;
    {
        cpu->r[1] = add_flags(cpu, 0x0018c938u, cpu->r[1], 0, 0);
    }
L_0018c934:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018c93cu, cpu->r[3], 0, 0);
    }
L_0018c938:;
    {
        cpu->r[14] = 0x0018c93cu; imp_printf(cpu); /* printf */
    }
L_0018c93c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_0018c940:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_0018c944:;
    {
        cpu->r[0] = rd32(cpu->r[8] + + 0xcu);
    }
L_0018c948:;
    {
        goto L_0018c8c4;
    }
L_0018c94c:;
    {
        cpu->r[3] = rd32(0x0018c954u + + 0x9cu);
    }
L_0018c950:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0018c954:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0018c958:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0018c95c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_0018c960:;
    {
        cpu->r[14] = 0x0018c964u; fn_00191cb4(cpu);
    }
L_0018c964:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0018c968:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0018c96c:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_0018c970:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0018c974:;
    {
        wr32(cpu->r[13], cpu->r[9]);
    }
L_0018c978:;
    {
        cpu->r[14] = 0x0018c97cu; fn_0018c6d0(cpu);
    }
L_0018c97c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0018c980:;
    {
        cpu->r[14] = 0x0018c984u; fn_00191afc(cpu);
    }
L_0018c984:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_0018c988:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_0018c98c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0xcu);
    }
L_0018c990:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018c994:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018c8c4;
        }
    }
L_0018c998:;
    {
        goto L_0018c91c;
    }
L_0018c99c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0018c9a0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0018c9a4:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_0018c9a8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018c9ac:;
    {
        cpu->r[14] = 0x0018c9b0u; fn_00191a14(cpu);
    }
L_0018c9b0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0018c9b4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0018c9b8:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_0018c9bc:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0018c9c0:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_0018c9c4:;
    {
        cpu->r[14] = 0x0018c9c8u; fn_0018c6d0(cpu);
    }
L_0018c9c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018c9cc:;
    {
        cpu->r[14] = 0x0018c9d0u; fn_00191afc(cpu);
    }
L_0018c9d0:;
    {
        goto L_0018c984;
    }
}

/* _ZN16BaseSoundManager24getNumberOfPlayingSoundsEv @ 0018c9f4 (arm) */
void fn_0018c9f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018c9f4:;
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
L_0018c9f8:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0xa8u);
    }
L_0018c9fc:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_0018ca00:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018ca04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018cab8;
        }
    }
L_0018ca08:;
    {
        cpu->r[11] = rd32(cpu->r[0] + + 0x98u);
    }
L_0018ca0c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_0018ca10:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], cpu->r[3], 1, 0);
    }
L_0018ca14:;
    {
        uint32_t v = shifter(cpu->r[11], 1, 2u, &shc); cpu->r[11] = v;
    }
L_0018ca18:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_0018ca1c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018cab8;
        }
    }
L_0018ca20:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_0018ca24:;
    {
        cpu->r[6] = cpu->r[10];
    }
L_0018ca28:;
    {
        cpu->r[7] = rd32(cpu->r[3] + shifter(cpu->r[10], 2, 2u, &shc));
    }
L_0018ca2c:;
    {
        cpu->r[1] = rd32(cpu->r[7]);
    }
L_0018ca30:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0018ca34:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018caa4;
        }
    }
L_0018ca38:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0018ca3c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x4u);
    }
L_0018ca40:;
    {
        cpu->r[8] = cpu->r[5];
    }
L_0018ca44:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_0018ca48:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_0018ca4c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_0018ca50:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_0018ca54:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000003u, 1, 1);
    }
L_0018ca58:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[4] = 0x00000000u;
        }
    }
L_0018ca5c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018ca94;
        }
    }
L_0018ca60:;
    {
        cpu->r[0] = rd32(cpu->r[2] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_0018ca64:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0018ca68:;
    {
        cpu->r[14] = 0x0018ca6cu; fn_001911a0(cpu);
    }
L_0018ca6c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x4u);
    }
L_0018ca70:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_0018ca74:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_0018ca78:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_0018ca7c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_0018ca80:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000003u, 1, 1);
    }
L_0018ca84:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
        }
    }
L_0018ca88:;
    {
        sub_flags(cpu, cpu->r[4], shifter(cpu->r[1], 1, 2u, &shc), 1, 1);
    }
L_0018ca8c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0018ca60;
        }
    }
L_0018ca90:;
    {
        cpu->r[1] = rd32(cpu->r[7]);
    }
L_0018ca94:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_0018ca98:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000018u, 0, 0);
    }
L_0018ca9c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[8], 1, 1);
    }
L_0018caa0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0018ca44;
        }
    }
L_0018caa4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_0018caa8:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[11], 1, 1);
    }
L_0018caac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018cabc;
        }
    }
L_0018cab0:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x94u);
    }
L_0018cab4:;
    {
        goto L_0018ca28;
    }
L_0018cab8:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0018cabc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0018cac0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018cac4u)) return;
    }
}

/* _ZN16BaseSoundManager17areAllSoundStopedEv @ 0018cac4 (arm) */
void fn_0018cac4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018cac4:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0xa8u);
    }
L_0018cac8:;
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
L_0018cacc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018cad0:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0018cad4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018cb8c;
        }
    }
L_0018cad8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_0018cadc:;
    {
        cpu->r[9] = rd32(cpu->r[0] + + 0x98u);
    }
L_0018cae0:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 0);
    }
L_0018cae4:;
    {
        uint32_t v = shifter(cpu->r[9], 1, 2u, &shc); cpu->r[9] = v;
    }
L_0018cae8:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_0018caec:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018cb8c;
        }
    }
L_0018caf0:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_0018caf4:;
    {
        cpu->r[6] = rd32(cpu->r[3] + shifter(cpu->r[10], 2, 2u, &shc));
    }
L_0018caf8:;
    {
        cpu->r[1] = rd32(cpu->r[6]);
    }
L_0018cafc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0018cb00:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018cb7c;
        }
    }
L_0018cb04:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0018cb08:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_0018cb0c:;
    {
        cpu->r[8] = cpu->r[5];
    }
L_0018cb10:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_0018cb14:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_0018cb18:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_0018cb1c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_0018cb20:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000003u, 1, 1);
    }
L_0018cb24:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[4] = 0x00000000u;
        }
    }
L_0018cb28:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0018cb4c;
        }
    }
L_0018cb2c:;
    {
        goto L_0018cb6c;
    }
L_0018cb30:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_0018cb34:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_0018cb38:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_0018cb3c:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_0018cb40:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_0018cb44:;
    {
        sub_flags(cpu, cpu->r[4], shifter(cpu->r[1], 1, 2u, &shc), 1, 1);
    }
L_0018cb48:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0018cb68;
        }
    }
L_0018cb4c:;
    {
        cpu->r[0] = rd32(cpu->r[2] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_0018cb50:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0018cb54:;
    {
        cpu->r[14] = 0x0018cb58u; fn_001911a0(cpu);
    }
L_0018cb58:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000003u, 1, 1);
    }
L_0018cb5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018cb30;
        }
    }
L_0018cb60:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0018cb64:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018cb68u)) return;
    }
L_0018cb68:;
    {
        cpu->r[1] = rd32(cpu->r[6]);
    }
L_0018cb6c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_0018cb70:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000018u, 0, 0);
    }
L_0018cb74:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[8], 1, 1);
    }
L_0018cb78:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0018cb10;
        }
    }
L_0018cb7c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_0018cb80:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[9], 1, 1);
    }
L_0018cb84:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[7] + + 0x94u);
        }
    }
L_0018cb88:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018caf4;
        }
    }
L_0018cb8c:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_0018cb90:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018cb94u)) return;
    }
}

/* _ZN16BaseSoundManager13stopAllMusicsEi @ 0018cb94 (arm) */
void fn_0018cb94(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018cb94:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0xa8u);
    }
L_0018cb98:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018cb9c:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_0018cba0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_0018cba4:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_0018cba8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0018cbac:;
    {
        return fn_001d31ec(cpu);
    }
}

/* _ZN16BaseSoundManager10stopAllSfxEi @ 0018cbb0 (arm) */
void fn_0018cbb0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018cbb0:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0xa8u);
    }
L_0018cbb4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0018cbb8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018cbbc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018cbc0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0018cbc4u)) return;
        }
    }
L_0018cbc4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_0018cbc8:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_0018cbcc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0018cbd0:;
    {
        cpu->r[14] = 0x0018cbd4u; fn_001d31ec(cpu);
    }
L_0018cbd4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_0018cbd8:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_0018cbdc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0018cbe0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_0018cbe4:;
    {
        return fn_001d31ec(cpu);
    }
}

/* _ZN16BaseSoundManager13stopAllSoundsEv @ 0018cbe8 (arm) */
void fn_0018cbe8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018cbe8:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0xa8u);
    }
L_0018cbec:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0018cbf0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018cbf4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018cbf8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0018cbfcu)) return;
        }
    }
L_0018cbfc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_0018cc00:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_0018cc04:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0018cc08:;
    {
        cpu->r[14] = 0x0018cc0cu; fn_001d31ec(cpu);
    }
L_0018cc0c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_0018cc10:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_0018cc14:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0018cc18:;
    {
        cpu->r[14] = 0x0018cc1cu; fn_001d31ec(cpu);
    }
L_0018cc1c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_0018cc20:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_0018cc24:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0018cc28:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_0018cc2c:;
    {
        return fn_001d31ec(cpu);
    }
}

/* _ZN16BaseSoundManager4stopEiii @ 0018cc30 (arm) */
void fn_0018cc30(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018cc30:;
    {
        cpu->r[13] -= 28u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[9]);
        wr32(cpu->r[13] + 24u, cpu->r[14]);
    }
L_0018cc34:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_0018cc38:;
    {
        cpu->r[2] = rd8(cpu->r[0] + + 0xa8u);
    }
L_0018cc3c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000194u, 1, 0);
    }
L_0018cc40:;
    {
        cpu->r[3] = rd32(0x0018cc48u + + 0xd4u);
    }
L_0018cc44:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0018cc48:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0018cc4c:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018cc54u, cpu->r[3], 0, 0);
    }
L_0018cc50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018cd14;
        }
    }
L_0018cc54:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8u);
    }
L_0018cc58:;
    {
        cpu->r[0] = rd32(cpu->r[2] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_0018cc5c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018cc60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018cd14;
        }
    }
L_0018cc64:;
    {
        cpu->r[14] = rd32(0x0018cc6cu + + 0xb4u);
    }
L_0018cc68:;
    {
        cpu->r[5] = cpu->r[13];
    }
L_0018cc6c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_0018cc70:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x000001b8u, 0, 0);
    }
L_0018cc74:;
    {
        cpu->r[8] = (~0x00000000u);
    }
L_0018cc78:;
    {
        cpu->r[9] = (~0x00000000u);
    }
L_0018cc7c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[14]);
    }
L_0018cc80:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0018cc84:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0018cc88:;
    {
        wr64(cpu->r[0] + - 0x20u, ((uint64_t)cpu->r[9] << 32) | cpu->r[8]);
    }
L_0018cc8c:;
    {
        wr32(cpu->r[0] + - 0x18u, cpu->r[4]);
    }
L_0018cc90:;
    {
        wr32(cpu->r[0] + - 0x14u, cpu->r[4]);
    }
L_0018cc94:;
    {
        wr32(cpu->r[0] + - 0x10u, cpu->r[4]);
    }
L_0018cc98:;
    {
        wr32(cpu->r[0] + - 0xcu, cpu->r[4]);
    }
L_0018cc9c:;
    {
        wr32(cpu->r[0] + - 0x8u, cpu->r[4]);
    }
L_0018cca0:;
    {
        wr32(cpu->r[0] + - 0x28u, cpu->r[3]);
    }
L_0018cca4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000028u, 0, 0);
    }
L_0018cca8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 1);
    }
L_0018ccac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018cc88;
        }
    }
L_0018ccb0:;
    {
        cpu->r[1] = rd32(cpu->r[2] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_0018ccb4:;
    {
        cpu->r[3] = 0x0000000au;
    }
L_0018ccb8:;
    {
        cpu->r[2] = cpu->r[13];
    }
L_0018ccbc:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x4u);
    }
L_0018ccc0:;
    {
        cpu->r[14] = 0x0018ccc4u; fn_001d36d8(cpu);
    }
L_0018ccc4:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018ccc8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018ccf8;
        }
    }
L_0018cccc:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[7];
    }
L_0018ccd0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0018ccd4:;
    {
        cpu->r[7] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0018ccd8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_0018ccdc:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x4u);
    }
L_0018cce0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0018cce4:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0018cce8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_0018ccec:;
    {
        cpu->r[14] = 0x0018ccf0u; fn_001d32dc(cpu);
    }
L_0018ccf0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[8], 1, 1);
    }
L_0018ccf4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018ccd8;
        }
    }
L_0018ccf8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000190u, 0, 0);
    }
L_0018ccfc:;
    {
        uint32_t wb_tmp = cpu->r[4] + - 0x28u;
        cpu->r[3] = rd32(cpu->r[4] + - 0x28u);
        cpu->r[4] = wb_tmp;
    }
L_0018cd00:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018cd04:;
    {
        cpu->r[14] = 0x0018cd0cu;
    }
L_0018cd08:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018cd0cu)) return;
    }
L_0018cd0c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 1);
    }
L_0018cd10:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018ccfc;
        }
    }
L_0018cd14:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000194u, 0, 0);
    }
L_0018cd18:;
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
        cpu->r[9] = v5;
        uint32_t t = v6;
        cpu->r[13] += 28u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0018cd1cu)) return;
    }
}

/* _ZN16BaseSoundManager4stopEiiii @ 0018cd24 (arm) */
void fn_0018cd24(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018cd24:;
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
L_0018cd28:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0018cd2c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000001a4u, 1, 0);
    }
L_0018cd30:;
    {
        cpu->r[0] = rd32(0x0018cd38u + + 0x190u);
    }
L_0018cd34:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0018cd38:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_0018cd3c:;
    {
        cpu->r[0] = add_flags(cpu, 0x0018cd44u, cpu->r[0], 0, 0);
    }
L_0018cd40:;
    {
        cpu->r[2] = rd8(cpu->r[6] + + 0xa8u);
    }
L_0018cd44:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_0018cd48:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0018cd4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018cec0;
        }
    }
L_0018cd50:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x94u);
    }
L_0018cd54:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_0018cd58:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1c8u);
    }
L_0018cd5c:;
    {
        uint32_t v = shifter(cpu->r[11], 2, 3u, &shc); cpu->r[1] = v;
    }
L_0018cd60:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_0018cd64:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x4u);
    }
L_0018cd68:;
    {
        cpu->r[9] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_0018cd6c:;
    {
        cpu->r[2] = rd32(cpu->r[9] + + 0x4u);
    }
L_0018cd70:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_0018cd74:;
    {
        cpu->r[2] = rd32(cpu->r[2] + shifter(cpu->r[11], 2, 3u, &shc));
    }
L_0018cd78:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_0018cd7c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_0018cd80:;
    {
        sub_flags(cpu, cpu->r[8], shifter(cpu->r[1], 1, 2u, &shc), 1, 1);
    }
L_0018cd84:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0018ce80;
        }
    }
L_0018cd88:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x8u);
    }
L_0018cd8c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_0018cd90:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018cd94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018ce58;
        }
    }
L_0018cd98:;
    {
        cpu->r[12] = rd32(0x0018cda0u + + 0x12cu);
    }
L_0018cd9c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_0018cda0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], 0x00000028u, 0, 0);
    }
L_0018cda4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], 0x000001b8u, 0, 0);
    }
L_0018cda8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0018cdac:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_0018cdb0:;
    {
        cpu->r[12] = cpu->r[9];
    }
L_0018cdb4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_0018cdb8:;
    {
        cpu->r[8] = (~0x00000000u);
    }
L_0018cdbc:;
    {
        cpu->r[9] = (~0x00000000u);
    }
L_0018cdc0:;
    {
        wr32(cpu->r[3] + - 0x18u, cpu->r[4]);
    }
L_0018cdc4:;
    {
        wr64(cpu->r[3] + - 0x20u, ((uint64_t)cpu->r[9] << 32) | cpu->r[8]);
    }
L_0018cdc8:;
    {
        wr32(cpu->r[3] + - 0x14u, cpu->r[4]);
    }
L_0018cdcc:;
    {
        wr32(cpu->r[3] + - 0x10u, cpu->r[4]);
    }
L_0018cdd0:;
    {
        wr32(cpu->r[3] + - 0xcu, cpu->r[4]);
    }
L_0018cdd4:;
    {
        wr32(cpu->r[3] + - 0x8u, cpu->r[4]);
    }
L_0018cdd8:;
    {
        wr32(cpu->r[3] + - 0x28u, cpu->r[0]);
    }
L_0018cddc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000028u, 0, 0);
    }
L_0018cde0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0018cde4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018cdb8;
        }
    }
L_0018cde8:;
    {
        cpu->r[1] = rd32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_0018cdec:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0018cdf0:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x4u);
    }
L_0018cdf4:;
    {
        cpu->r[3] = 0x0000000au;
    }
L_0018cdf8:;
    {
        cpu->r[9] = cpu->r[12];
    }
L_0018cdfc:;
    {
        cpu->r[14] = 0x0018ce00u; fn_001d36d8(cpu);
    }
L_0018ce00:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018ce04:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018ce34;
        }
    }
L_0018ce08:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x8u);
    }
L_0018ce0c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0018ce10:;
    {
        cpu->r[10] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0018ce14:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_0018ce18:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x4u);
    }
L_0018ce1c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0018ce20:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_0018ce24:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_0018ce28:;
    {
        cpu->r[14] = 0x0018ce2cu; fn_001d32dc(cpu);
    }
L_0018ce2c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[8], 1, 1);
    }
L_0018ce30:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018ce14;
        }
    }
L_0018ce34:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x000001a0u, 0, 0);
    }
L_0018ce38:;
    {
        uint32_t wb_tmp = cpu->r[4] + - 0x28u;
        cpu->r[3] = rd32(cpu->r[4] + - 0x28u);
        cpu->r[4] = wb_tmp;
    }
L_0018ce3c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018ce40:;
    {
        cpu->r[14] = 0x0018ce48u;
    }
L_0018ce44:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018ce48u)) return;
    }
L_0018ce48:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[7], 1, 1);
    }
L_0018ce4c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018ce38;
        }
    }
L_0018ce50:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x4u);
    }
L_0018ce54:;
    {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[11], 2, 3u, &shc));
    }
L_0018ce58:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_0018ce5c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_0018ce60:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_0018ce64:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0018ce68:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0018ce6c:;
    {
        cpu->r[14] = 0x0018ce74u;
    }
L_0018ce70:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018ce74u)) return;
    }
L_0018ce74:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x4u);
    }
L_0018ce78:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_0018ce7c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_0018ce80:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x10u);
    }
L_0018ce84:;
    {
        { uint32_t v = cpu->r[3] & 0x00800000u; set_nz(cpu, v); }
    }
L_0018ce88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018cec0;
        }
    }
L_0018ce8c:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_0018ce90:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0018ce94:;
    {
        goto L_0018cea4;
    }
L_0018ce98:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0018ce9c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000020u, 1, 1);
    }
L_0018cea0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018cec0;
        }
    }
L_0018cea4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x14u);
    }
L_0018cea8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0018ceac:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 1);
    }
L_0018ceb0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018ce98;
        }
    }
L_0018ceb4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0018ceb8:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0018cebc:;
    {
        wr32(cpu->r[2] + + 0x14u, cpu->r[3]);
    }
L_0018cec0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000001a4u, 0, 0);
    }
L_0018cec4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018cec8u)) return;
    }
}

/* _ZN16BaseSoundManager5PauseEv @ 0018ced0 (arm) */
void fn_0018ced0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018ced0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0018ced4:;
    {
        cpu->r[6] = rd8(cpu->r[0] + + 0xbcu);
    }
L_0018ced8:;
    {
        cpu->r[5] = rd32(0x0018cee0u + + 0x5cu);
    }
L_0018cedc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018cee0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0018cee4:;
    {
        cpu->r[5] = add_flags(cpu, 0x0018ceecu, cpu->r[5], 0, 0);
    }
L_0018cee8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018ceecu)) return;
        }
    }
L_0018ceec:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0xa8u);
    }
L_0018cef0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0018cef4:;
    {
        wr8(cpu->r[0] + + 0xbcu, cpu->r[2]);
    }
L_0018cef8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018cefc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018cf00u)) return;
        }
    }
L_0018cf00:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0018cf04:;
    {
        cpu->r[14] = 0x0018cf08u; fn_0018bc38(cpu);
    }
L_0018cf08:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018cf0c:;
    {
        cpu->r[14] = 0x0018cf10u; fn_0018cbe8(cpu);
    }
L_0018cf10:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018cf14:;
    {
        cpu->r[14] = 0x0018cf18u; fn_0018bc34(cpu);
    }
L_0018cf18:;
    {
        cpu->r[3] = rd32(0x0018cf20u + + 0x20u);
    }
L_0018cf1c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0018cf20:;
    {
        cpu->r[14] = 0x0018cf24u; fn_00193138(cpu);
    }
L_0018cf24:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018cf28:;
    {
        cpu->r[14] = 0x0018cf2cu; fn_0018bbfc(cpu);
    }
L_0018cf2c:;
    {
        wr8(cpu->r[4] + + 0xa8u, cpu->r[6]);
    }
L_0018cf30:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018cf34:;
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
L_0018cf38:;
    {
        return fn_0018bc40(cpu);
    }
}

/* _ZN16BaseSoundManager15Interrupt_BeginEv @ 0018cf44 (arm) */
void fn_0018cf44(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018cf44:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0xa8u);
    }
L_0018cf48:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018cf4c:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_0018cf50:;
    {
        return fn_0018ced0(cpu);
    }
}

/* _ZN16BaseSoundManager6ResumeEv @ 0018cf54 (arm) */
void fn_0018cf54(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018cf54:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0xbcu);
    }
L_0018cf58:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0018cf5c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018cf60:;
    {
        cpu->r[4] = rd32(0x0018cf68u + + 0x38u);
    }
L_0018cf64:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0018cf68:;
    {
        cpu->r[4] = add_flags(cpu, 0x0018cf70u, cpu->r[4], 0, 0);
    }
L_0018cf6c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018cf70u)) return;
        }
    }
L_0018cf70:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0xa8u);
    }
L_0018cf74:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0018cf78:;
    {
        wr8(cpu->r[0] + + 0xbcu, cpu->r[2]);
    }
L_0018cf7c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0018cf80:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018cf84u)) return;
        }
    }
L_0018cf84:;
    {
        cpu->r[14] = 0x0018cf88u; fn_0018bbf8(cpu);
    }
L_0018cf88:;
    {
        cpu->r[3] = rd32(0x0018cf90u + + 0x14u);
    }
L_0018cf8c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0018cf90:;
    {
        cpu->r[14] = 0x0018cf94u; fn_00193134(cpu);
    }
L_0018cf94:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0018cf98:;
    {
        wr8(cpu->r[5] + + 0xa8u, cpu->r[3]);
    }
L_0018cf9c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018cfa0u)) return;
    }
}

/* _ZN16BaseSoundManager13Interrupt_EndEv @ 0018cfa8 (arm) */
void fn_0018cfa8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018cfa8:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0xa8u);
    }
L_0018cfac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018cfb0:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_0018cfb4:;
    {
        return fn_0018cf54(cpu);
    }
}

/* _ZN16BaseSoundManager28interruptionListenerCallbackEPvm @ 0018cfb8 (arm) */
void fn_0018cfb8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018cfb8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0018cfbc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018cfcc;
        }
    }
L_0018cfc0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_0018cfc4:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_0018cfc8:;
    {
        return fn_0018cfa8(cpu);
    }
L_0018cfcc:;
    {
        return fn_0018cf44(cpu);
    }
}

/* _ZN16BaseSoundManager20DestroyDecodeBuffersEv @ 0018cfd0 (arm) */
void fn_0018cfd0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018cfd0:;
    {
        cpu->r[3] = rd32(0x0018cfd8u + + 0x38u);
    }
L_0018cfd4:;
    {
        cpu->r[2] = rd32(0x0018cfdcu + + 0x38u);
    }
L_0018cfd8:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018cfe0u, cpu->r[3], 0, 0);
    }
L_0018cfdc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0018cfe0:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0018cfe4:;
    {
        cpu->r[5] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0018cfe8:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_0018cfec:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0018cff0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018cff4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018d000;
        }
    }
L_0018cff8:;
    {
        cpu->r[14] = 0x0018cffcu; fn_0018ba60(cpu);
    }
L_0018cffc:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[6]);
    }
L_0018d000:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_0018d004:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000064u, 1, 1);
    }
L_0018d008:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018cfec;
        }
    }
L_0018d00c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018d010u)) return;
    }
}

/* sub_0018d018 @ 0018d018 (arm) */
void fn_0018d018(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018d018:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0018d01c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0018d020:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018d024:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0018d028:;
    {
        cpu->r[3] = 0x00000021u;
    }
L_0018d02c:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[4]);
    }
L_0018d030:;
    {
        uint32_t wb_tmp = cpu->r[0] + - 0x4u;
        wr32(cpu->r[0] + - 0x4u, cpu->r[3]);
        cpu->r[0] = wb_tmp;
    }
L_0018d034:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[4]);
    }
L_0018d038:;
    {
        cpu->r[14] = 0x0018d03cu; fn_00097b58(cpu);
    }
L_0018d03c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_0018d040:;
    {
        cpu->r[2] = 0x00000020u;
    }
L_0018d044:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_0018d048:;
    {
        wr32(cpu->r[4], cpu->r[1]);
    }
L_0018d04c:;
    {
        cpu->r[1] = rd32(0x0018d054u + + 0x2cu);
    }
L_0018d050:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[0]);
    }
L_0018d054:;
    {
        cpu->r[1] = add_flags(cpu, 0x0018d05cu, cpu->r[1], 0, 0);
    }
L_0018d058:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[0]);
    }
L_0018d05c:;
    {
        cpu->r[14] = 0x0018d060u; imp_memcpy(cpu); /* memcpy */
    }
L_0018d060:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0018d064:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018d068:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000020u, 0, 0);
    }
L_0018d06c:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[2]);
    }
L_0018d070:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0018d074:;
    {
        wr8(cpu->r[3] + + 0x20u, cpu->r[2]);
    }
L_0018d078:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0018d07c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0018d080u)) return;
    }
}

/* _ZN10CSoundInfoD2Ev @ 0018d084 (arm) */
void fn_0018d084(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018d084:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0018d088:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0xcu);
    }
L_0018d08c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018d090:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0018d094:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018d0b0;
        }
    }
L_0018d098:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0018d09c:;
    {
        cpu->r[14] = 0x0018d0a0u; fn_001914b4(cpu);
    }
L_0018d0a0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0018d0a4:;
    {
        cpu->r[14] = 0x0018d0a8u; fn_0018ba20(cpu);
    }
L_0018d0a8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018d0ac:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_0018d0b0:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0018d0b4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018d0b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018d0d4;
        }
    }
L_0018d0bc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8u);
    }
L_0018d0c0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_0018d0c4:;
    {
        uint32_t v = cpu->r[1] & ~ 0x00000003u; cpu->r[1] = v;
    }
L_0018d0c8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_0018d0cc:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0018d0dc;
        }
    }
L_0018d0d0:;
    {
        cpu->r[14] = 0x0018d0d4u; fn_002082a8(cpu);
    }
L_0018d0d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018d0d8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018d0dcu)) return;
    }
L_0018d0dc:;
    {
        cpu->r[14] = 0x0018d0e0u; fn_0018ba20(cpu);
    }
L_0018d0e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018d0e4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018d0e8u)) return;
    }
}

/* _ZN10CSoundInfoD1Ev @ 0018d0e8 (arm) */
void fn_0018d0e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018d0e8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0018d0ec:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0xcu);
    }
L_0018d0f0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018d0f4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0018d0f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018d114;
        }
    }
L_0018d0fc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0018d100:;
    {
        cpu->r[14] = 0x0018d104u; fn_001914b4(cpu);
    }
L_0018d104:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0018d108:;
    {
        cpu->r[14] = 0x0018d10cu; fn_0018ba20(cpu);
    }
L_0018d10c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018d110:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_0018d114:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0018d118:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018d11c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018d138;
        }
    }
L_0018d120:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8u);
    }
L_0018d124:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_0018d128:;
    {
        uint32_t v = cpu->r[1] & ~ 0x00000003u; cpu->r[1] = v;
    }
L_0018d12c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_0018d130:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0018d140;
        }
    }
L_0018d134:;
    {
        cpu->r[14] = 0x0018d138u; fn_002082a8(cpu);
    }
L_0018d138:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018d13c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018d140u)) return;
    }
L_0018d140:;
    {
        cpu->r[14] = 0x0018d144u; fn_0018ba20(cpu);
    }
L_0018d144:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018d148:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018d14cu)) return;
    }
}

/* _ZN9SoundPackD2Ev @ 0018d14c (arm) */
void fn_0018d14c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018d14c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_0018d150:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0018d154:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018d158:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018d15c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018d1a4;
        }
    }
L_0018d160:;
    {
        cpu->r[0] = rd32(cpu->r[3] + - 0x4u);
    }
L_0018d164:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_0018d168:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 3u, &shc), 0, 0);
    }
L_0018d16c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_0018d170:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018d17c;
        }
    }
L_0018d174:;
    {
        goto L_0018d194;
    }
L_0018d178:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0018d17c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000018u, 1, 0);
    }
L_0018d180:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0018d184:;
    {
        cpu->r[14] = 0x0018d188u; fn_0018d0e8(cpu);
    }
L_0018d188:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_0018d18c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_0018d190:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018d178;
        }
    }
L_0018d194:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 0);
    }
L_0018d198:;
    {
        cpu->r[14] = 0x0018d19cu; fn_0018ba60(cpu);
    }
L_0018d19c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018d1a0:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_0018d1a4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_0018d1a8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018d1ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018d1bc;
        }
    }
L_0018d1b0:;
    {
        cpu->r[14] = 0x0018d1b4u; fn_0018ba20(cpu);
    }
L_0018d1b4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018d1b8:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_0018d1bc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0018d1c0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x0000000cu, 0, 0);
    }
L_0018d1c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018d1c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018d1e4;
        }
    }
L_0018d1cc:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
    }
L_0018d1d0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_0018d1d4:;
    {
        uint32_t v = cpu->r[1] & ~ 0x00000003u; cpu->r[1] = v;
    }
L_0018d1d8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_0018d1dc:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0018d1ec;
        }
    }
L_0018d1e0:;
    {
        cpu->r[14] = 0x0018d1e4u; fn_002082a8(cpu);
    }
L_0018d1e4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018d1e8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018d1ecu)) return;
    }
L_0018d1ec:;
    {
        cpu->r[14] = 0x0018d1f0u; fn_0018ba20(cpu);
    }
L_0018d1f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018d1f4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018d1f8u)) return;
    }
}

/* _ZNSt6vectorIP6CSoundSaIS1_EE18_M_insert_overflowEPS1_RKS1_RKSt11__true_typejb @ 0018d1f8 (arm) */
void fn_0018d1f8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018d1f8:;
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
L_0018d1fc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0018d200:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_0018d204:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0018d208:;
    {
        cpu->r[8] = rd32(cpu->r[5]);
    }
L_0018d20c:;
    {
        cpu->r[3] = 0x0000ffffu;
    }
L_0018d210:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x3fffu << 16);
    }
L_0018d214:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x30u);
    }
L_0018d218:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[0], cpu->r[8], 1, 0);
    }
L_0018d21c:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_0018d220:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_0018d224:;
    {
        cpu->r[11] = rd8(cpu->r[13] + + 0x34u);
    }
L_0018d228:;
    {
        uint32_t v = shifter(cpu->r[8], 1, 2u, &shc); cpu->r[8] = v;
    }
L_0018d22c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 0);
    }
L_0018d230:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_0018d234:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0018d350;
        }
    }
L_0018d238:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[8], 1, 1);
    }
L_0018d23c:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[9] = add_flags(cpu, cpu->r[8], cpu->r[6], 0, 0);
        }
    }
L_0018d240:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[9] = add_flags(cpu, cpu->r[8], cpu->r[8], 0, 0);
        }
    }
L_0018d244:;
    {
        add_flags(cpu, cpu->r[9], 0xc0000001u, 0, 1);
    }
L_0018d248:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0018d254;
        }
    }
L_0018d24c:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[9], 1, 1);
    }
L_0018d250:;
    {
        if (cond_test(cpu, 10)) {
        goto L_0018d2fc;
        }
    }
L_0018d254:;
    {
        cpu->r[9] = (~0x00000003u);
    }
L_0018d258:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[9]);
    }
L_0018d25c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0018d260:;
    {
        cpu->r[14] = 0x0018d264u; fn_0018ba6c(cpu);
    }
L_0018d264:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x4u);
    }
L_0018d268:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0018d26c:;
    {
        uint32_t v = cpu->r[9] & ~ 0x00000003u; cpu->r[9] = v;
    }
L_0018d270:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[0], cpu->r[9], 0, 0);
    }
L_0018d274:;
    {
        cpu->r[1] = rd32(cpu->r[5]);
    }
L_0018d278:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[7], cpu->r[1], 1, 1);
    }
L_0018d27c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[8];
        }
    }
L_0018d280:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018d294;
        }
    }
L_0018d284:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0018d288:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_0018d28c:;
    {
        cpu->r[14] = 0x0018d290u; imp_memmove(cpu); /* memmove */
    }
L_0018d290:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_0018d294:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0018d298:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_0018d29c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018d2c0;
        }
    }
L_0018d2a0:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0018d2a4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018d2a8:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_0018d2ac:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_0018d2b0:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[1]);
    }
L_0018d2b4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0018d2b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018d2a8;
        }
    }
L_0018d2bc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_0018d2c0:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_0018d2c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018d32c;
        }
    }
L_0018d2c8:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_0018d2cc:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x8u);
    }
L_0018d2d0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018d2d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018d2ec;
        }
    }
L_0018d2d8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_0018d2dc:;
    {
        uint32_t v = cpu->r[1] & ~ 0x00000003u; cpu->r[1] = v;
    }
L_0018d2e0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_0018d2e4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0018d324;
        }
    }
L_0018d2e8:;
    {
        cpu->r[14] = 0x0018d2ecu; fn_002082a8(cpu);
    }
L_0018d2ec:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[9]);
    }
L_0018d2f0:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[8]);
        wr32(ea + 4u, cpu->r[10]);
    }
L_0018d2f4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0018d2f8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018d2fcu)) return;
    }
L_0018d2fc:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_0018d300:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = cpu->r[9];
        }
    }
L_0018d304:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018d274;
        }
    }
L_0018d308:;
    {
        uint32_t v = shifter(cpu->r[9], 2, 2u, &shc); cpu->r[9] = v;
    }
L_0018d30c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[9]);
    }
L_0018d310:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000080u, 1, 1);
    }
L_0018d314:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0018d25c;
        }
    }
L_0018d318:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_0018d31c:;
    {
        cpu->r[14] = 0x0018d320u; fn_00208278(cpu);
    }
L_0018d320:;
    {
        goto L_0018d264;
    }
L_0018d324:;
    {
        cpu->r[14] = 0x0018d328u; fn_0018ba20(cpu);
    }
L_0018d328:;
    {
        goto L_0018d2ec;
    }
L_0018d32c:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x4u);
    }
L_0018d330:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], cpu->r[7], 1, 1);
    }
L_0018d334:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018d2c8;
        }
    }
L_0018d338:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0018d33c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0018d340:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0018d344:;
    {
        cpu->r[14] = 0x0018d348u; imp_memmove(cpu); /* memmove */
    }
L_0018d348:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], cpu->r[4], 0, 0);
    }
L_0018d34c:;
    {
        goto L_0018d2c8;
    }
L_0018d350:;
    {
        cpu->r[0] = rd32(0x0018d358u + + 0x8u);
    }
L_0018d354:;
    {
        cpu->r[0] = add_flags(cpu, 0x0018d35cu, cpu->r[0], 0, 0);
    }
L_0018d358:;
    {
        cpu->r[14] = 0x0018d35cu; fn_00208298(cpu);
    }
L_0018d35c:;
    {
        goto L_0018d238;
    }
}

/* _ZN16BaseSoundManager16releaseSoundDataEii @ 0018d364 (arm) */
void fn_0018d364(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018d364:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_0018d368:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_0018d36c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0018d370:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_0018d374:;
    {
        cpu->r[4] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_0018d378:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0018d44c;
        }
    }
L_0018d37c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0018d380:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_0018d384:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0018d44c;
        }
    }
L_0018d388:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 1u, &shc), 0, 0);
    }
L_0018d38c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_0018d390:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 3u, &shc); cpu->r[6] = v;
    }
L_0018d394:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], cpu->r[6], 0, 0);
    }
L_0018d398:;
    {
        cpu->r[3] = rd32(cpu->r[2] + shifter(cpu->r[5], 2, 3u, &shc));
    }
L_0018d39c:;
    {
        cpu->r[0] = rd32(cpu->r[12] + + 0x4u);
    }
L_0018d3a0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_0018d3a4:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 2u, &shc); cpu->r[1] = v;
    }
L_0018d3a8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0018d3ac:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018d3fc;
        }
    }
L_0018d3b0:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0018d3b4:;
    {
        cpu->r[7] = cpu->r[5];
    }
L_0018d3b8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_0018d3bc:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018d3c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018d3dc;
        }
    }
L_0018d3c4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0018d3c8:;
    {
        cpu->r[14] = 0x0018d3d0u;
    }
L_0018d3cc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018d3d0u)) return;
    }
L_0018d3d0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_0018d3d4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[6]);
    }
L_0018d3d8:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[7]);
    }
L_0018d3dc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], cpu->r[6], 0, 0);
    }
L_0018d3e0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[6]);
    }
L_0018d3e4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0018d3e8:;
    {
        cpu->r[0] = rd32(cpu->r[12] + + 0x4u);
    }
L_0018d3ec:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_0018d3f0:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 2u, &shc); cpu->r[1] = v;
    }
L_0018d3f4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[1], 1, 1);
    }
L_0018d3f8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0018d3b8;
        }
    }
L_0018d3fc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0018d400:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0018d404:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_0018d408:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018d414;
        }
    }
L_0018d40c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0018d410:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[12] + + 0x4u, cpu->r[3]);
        }
    }
L_0018d414:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[6], 0, 0);
    }
L_0018d418:;
    {
        cpu->r[5] = rd32(cpu->r[2] + + 0xcu);
    }
L_0018d41c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0018d420:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018d444;
        }
    }
L_0018d424:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0018d428:;
    {
        cpu->r[14] = 0x0018d42cu; fn_001914b4(cpu);
    }
L_0018d42c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0018d430:;
    {
        cpu->r[14] = 0x0018d434u; fn_0018ba20(cpu);
    }
L_0018d434:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_0018d438:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_0018d43c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018d440:;
    {
        wr32(cpu->r[6] + + 0xcu, cpu->r[3]);
    }
L_0018d444:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_0018d448:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018d44cu)) return;
    }
L_0018d44c:;
    {
        cpu->r[0] = rd32(0x0018d454u + + 0x1cu);
    }
L_0018d450:;
    {
        cpu->r[2] = 0x000005c8u;
    }
L_0018d454:;
    {
        cpu->r[1] = rd32(0x0018d45cu + + 0x18u);
    }
L_0018d458:;
    {
        cpu->r[3] = rd32(0x0018d460u + + 0x18u);
    }
L_0018d45c:;
    {
        cpu->r[0] = add_flags(cpu, 0x0018d464u, cpu->r[0], 0, 0);
    }
L_0018d460:;
    {
        cpu->r[1] = add_flags(cpu, 0x0018d468u, cpu->r[1], 0, 0);
    }
L_0018d464:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018d46cu, cpu->r[3], 0, 0);
    }
L_0018d468:;
    {
        cpu->r[14] = 0x0018d46cu; imp_printf(cpu); /* printf */
    }
L_0018d46c:;
    {
        goto L_0018d388;
    }
}

/* _ZN16BaseSoundManager14releaseBuffersEb @ 0018d47c (arm) */
void fn_0018d47c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018d47c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_0018d480:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x98u);
    }
L_0018d484:;
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
L_0018d488:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0018d48c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0018d490:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_0018d494:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[2] = v;
    }
L_0018d498:;
    {
        cpu->r[11] = cpu->r[1];
    }
L_0018d49c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0018d4a0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_0018d4a4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018d56c;
        }
    }
L_0018d4a8:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0018d4ac:;
    {
        cpu->r[9] = cpu->r[7];
    }
L_0018d4b0:;
    {
        cpu->r[6] = rd32(cpu->r[3] + shifter(cpu->r[7], 2, 2u, &shc));
    }
L_0018d4b4:;
    {
        cpu->r[8] = rd32(cpu->r[6]);
    }
L_0018d4b8:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0018d4bc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018d50c;
        }
    }
L_0018d4c0:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_0018d4c4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018d524;
        }
    }
L_0018d4c8:;
    {
        cpu->r[5] = cpu->r[11];
    }
L_0018d4cc:;
    {
        cpu->r[4] = cpu->r[11];
    }
L_0018d4d0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_0018d4d4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0018d4d8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0018d4dc:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0018d4e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_0018d4e4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0018d4e8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000018u, 0, 0);
    }
L_0018d4ec:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x10u);
    }
L_0018d4f0:;
    {
        wr8(cpu->r[3] + + 0x14u, cpu->r[9]);
    }
L_0018d4f4:;
    {
        { uint32_t v = cpu->r[12] & 0x00500000u; set_nz(cpu, v); }
    }
L_0018d4f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018d504;
        }
    }
L_0018d4fc:;
    {
        cpu->r[14] = 0x0018d500u; fn_0018d364(cpu);
    }
L_0018d500:;
    {
        cpu->r[8] = rd32(cpu->r[6]);
    }
L_0018d504:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[8], 1, 1);
    }
L_0018d508:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0018d4d0;
        }
    }
L_0018d50c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_0018d510:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0018d514:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 1);
    }
L_0018d518:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018d56c;
        }
    }
L_0018d51c:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x94u);
    }
L_0018d520:;
    {
        goto L_0018d4b0;
    }
L_0018d524:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0018d528:;
    {
        cpu->r[4] = cpu->r[5];
    }
L_0018d52c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_0018d530:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0018d534:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0018d538:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0018d53c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_0018d540:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0018d544:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000018u, 0, 0);
    }
L_0018d548:;
    {
        wr8(cpu->r[3] + + 0x14u, cpu->r[9]);
    }
L_0018d54c:;
    {
        cpu->r[14] = 0x0018d550u; fn_0018d364(cpu);
    }
L_0018d550:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0018d554:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_0018d558:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0018d52c;
        }
    }
L_0018d55c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_0018d560:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0018d564:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 1);
    }
L_0018d568:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018d51c;
        }
    }
L_0018d56c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0018d570:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018d574u)) return;
    }
}

/* _ZN16BaseSoundManager18initSoundInstancesEii @ 0018d574 (arm) */
void fn_0018d574(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018d574:;
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
L_0018d578:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0018d57c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x94u);
    }
L_0018d580:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_0018d584:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
    }
L_0018d588:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0018d58c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0010u << 16);
    }
L_0018d590:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_0018d594:;
    {
        cpu->r[6] = rd32(cpu->r[1] + shifter(cpu->r[8], 2, 2u, &shc));
    }
L_0018d598:;
    {
        uint32_t v = shifter(cpu->r[9], 2, 3u, &shc); cpu->r[9] = v;
    }
L_0018d59c:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_0018d5a0:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0018d5a4:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x4u);
    }
L_0018d5a8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[9], 0, 0);
    }
L_0018d5ac:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x10u);
    }
L_0018d5b0:;
    {
        uint32_t v = cpu->r[1] & cpu->r[3]; cpu->r[3] = v;
    }
L_0018d5b4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0018d5b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018d5c8;
        }
    }
L_0018d5bc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0018d5c0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_0018d5c4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018d5c8u)) return;
    }
L_0018d5c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_0018d5cc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_0018d5d0:;
    {
        cpu->r[3] = rd32(0x0018d5d8u + + 0xd0u);
    }
L_0018d5d4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0018d5d8:;
    {
        cpu->r[11] = 0x00000001u;
    }
L_0018d5dc:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_0018d5e0:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018d5e8u, cpu->r[3], 0, 0);
    }
L_0018d5e4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_0018d5e8:;
    {
        cpu->r[3] = rd32(0x0018d5f0u + + 0xbcu);
    }
L_0018d5ec:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018d5f4u, cpu->r[3], 0, 0);
    }
L_0018d5f0:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_0018d5f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_0018d5f8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_0018d5fc:;
    {
        cpu->r[3] = rd32(0x0018d604u + + 0xacu);
    }
L_0018d600:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018d608u, cpu->r[3], 0, 0);
    }
L_0018d604:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_0018d608:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0018d60c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0018d610:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0018d614:;
    {
        cpu->r[14] = 0x0018d618u; fn_0018c874(cpu);
    }
L_0018d618:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0018d61c:;
    {
        cpu->r[0] = 0x00000030u;
    }
L_0018d620:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_0018d624:;
    {
        cpu->r[14] = 0x0018d628u; fn_0018ba6c(cpu);
    }
L_0018d628:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_0018d62c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0018d630:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0018d634:;
    {
        cpu->r[14] = 0x0018d638u; fn_0019181c(cpu);
    }
L_0018d638:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0018d63c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[7]);
    }
L_0018d640:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018d690;
        }
    }
L_0018d644:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x4u);
    }
L_0018d648:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[9], 0, 0);
    }
L_0018d64c:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[1] = v0;
        cpu->r[2] = v1;
    }
L_0018d650:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_0018d654:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_0018d658:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018d678;
        }
    }
L_0018d65c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_0018d660:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_0018d664:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_0018d668:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0018d66c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000003u, 1, 1);
    }
L_0018d670:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018d608;
        }
    }
L_0018d674:;
    {
        goto L_0018d5bc;
    }
L_0018d678:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_0018d67c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_0018d680:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_0018d684:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[11]);
    }
L_0018d688:;
    {
        cpu->r[14] = 0x0018d68cu; fn_0018d1f8(cpu);
    }
L_0018d68c:;
    {
        goto L_0018d668;
    }
L_0018d690:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_0018d694:;
    {
        cpu->r[2] = 0x00000480u;
    }
L_0018d698:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0018d69c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_0018d6a0:;
    {
        cpu->r[14] = 0x0018d6a4u; imp_printf(cpu); /* printf */
    }
L_0018d6a4:;
    {
        goto L_0018d644;
    }
}

/* _ZN16BaseSoundManager21releaseSoundInstancesEv @ 0018d6b4 (arm) */
void fn_0018d6b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018d6b4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x98u);
    }
L_0018d6b8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_0018d6bc:;
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
L_0018d6c0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0018d6c4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_0018d6c8:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_0018d6cc:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[2] = v;
    }
L_0018d6d0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0018d6d4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_0018d6d8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018d7a4;
        }
    }
L_0018d6dc:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_0018d6e0:;
    {
        cpu->r[7] = cpu->r[9];
    }
L_0018d6e4:;
    {
        cpu->r[10] = cpu->r[9];
    }
L_0018d6e8:;
    {
        cpu->r[6] = rd32(cpu->r[3] + shifter(cpu->r[9], 2, 2u, &shc));
    }
L_0018d6ec:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0018d6f0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018d6f4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[5] = 0x00000000u;
        }
    }
L_0018d6f8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[8] = cpu->r[5];
        }
    }
L_0018d6fc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018d790;
        }
    }
L_0018d700:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_0018d704:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_0018d708:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_0018d70c:;
    {
        cpu->r[0] = rd32(cpu->r[12] + + 0x4u);
    }
L_0018d710:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_0018d714:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 2u, &shc); cpu->r[1] = v;
    }
L_0018d718:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0018d71c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[4] = 0x00000000u;
        }
    }
L_0018d720:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018d768;
        }
    }
L_0018d724:;
    {
        cpu->r[2] = rd32(cpu->r[2] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_0018d728:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0018d72c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018d748;
        }
    }
L_0018d730:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_0018d734:;
    {
        cpu->r[14] = 0x0018d73cu;
    }
L_0018d738:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018d73cu)) return;
    }
L_0018d73c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_0018d740:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_0018d744:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[7]);
    }
L_0018d748:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_0018d74c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_0018d750:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0018d754:;
    {
        cpu->r[0] = rd32(cpu->r[12] + + 0x4u);
    }
L_0018d758:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_0018d75c:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 2u, &shc); cpu->r[1] = v;
    }
L_0018d760:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 1);
    }
L_0018d764:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0018d724;
        }
    }
L_0018d768:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0018d76c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[10]);
    }
L_0018d770:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018d77c;
        }
    }
L_0018d774:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_0018d778:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[12] + + 0x4u, cpu->r[2]);
        }
    }
L_0018d77c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0018d780:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_0018d784:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000018u, 0, 0);
    }
L_0018d788:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_0018d78c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0018d700;
        }
    }
L_0018d790:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_0018d794:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_0018d798:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[2], 1, 1);
    }
L_0018d79c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[11] + + 0x94u);
        }
    }
L_0018d7a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018d6e8;
        }
    }
L_0018d7a4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_0018d7a8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018d7acu)) return;
    }
}

/* _ZN16BaseSoundManager6unInitEv @ 0018d7ac (arm) */
void fn_0018d7ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018d7ac:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0xa8u);
    }
L_0018d7b0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0018d7b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018d7b8:;
    {
        cpu->r[4] = rd32(0x0018d7c0u + + 0x4cu);
    }
L_0018d7bc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0018d7c0:;
    {
        cpu->r[4] = add_flags(cpu, 0x0018d7c8u, cpu->r[4], 0, 0);
    }
L_0018d7c4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018d7c8u)) return;
        }
    }
L_0018d7c8:;
    {
        cpu->r[14] = 0x0018d7ccu; fn_0018cbe8(cpu);
    }
L_0018d7cc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0018d7d0:;
    {
        cpu->r[14] = 0x0018d7d4u; fn_0018d6b4(cpu);
    }
L_0018d7d4:;
    {
        cpu->r[3] = rd32(0x0018d7dcu + + 0x34u);
    }
L_0018d7d8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0018d7dc:;
    {
        cpu->r[14] = 0x0018d7e0u; fn_00193138(cpu);
    }
L_0018d7e0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0018d7e4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0018d7e8:;
    {
        cpu->r[14] = 0x0018d7ecu; fn_0018d47c(cpu);
    }
L_0018d7ec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0018d7f0:;
    {
        cpu->r[14] = 0x0018d7f4u; fn_0018bbfc(cpu);
    }
L_0018d7f4:;
    {
        cpu->r[2] = rd32(0x0018d7fcu + + 0x18u);
    }
L_0018d7f8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018d7fc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0018d800:;
    {
        wr8(cpu->r[2], cpu->r[3]);
    }
L_0018d804:;
    {
        wr8(cpu->r[5] + + 0xa8u, cpu->r[3]);
    }
L_0018d808:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018d80cu)) return;
    }
}

/* _ZN9SoundPackD1Ev @ 0018d818 (arm) */
void fn_0018d818(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018d818:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_0018d81c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0018d820:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018d824:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018d828:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018d870;
        }
    }
L_0018d82c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + - 0x4u);
    }
L_0018d830:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_0018d834:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 3u, &shc), 0, 0);
    }
L_0018d838:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_0018d83c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018d848;
        }
    }
L_0018d840:;
    {
        goto L_0018d860;
    }
L_0018d844:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0018d848:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000018u, 1, 0);
    }
L_0018d84c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0018d850:;
    {
        cpu->r[14] = 0x0018d854u; fn_0018d0e8(cpu);
    }
L_0018d854:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_0018d858:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_0018d85c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018d844;
        }
    }
L_0018d860:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 0);
    }
L_0018d864:;
    {
        cpu->r[14] = 0x0018d868u; fn_0018ba60(cpu);
    }
L_0018d868:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018d86c:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_0018d870:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_0018d874:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018d878:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018d888;
        }
    }
L_0018d87c:;
    {
        cpu->r[14] = 0x0018d880u; fn_0018ba20(cpu);
    }
L_0018d880:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018d884:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_0018d888:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xcu);
    }
L_0018d88c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x0000000cu, 0, 0);
    }
L_0018d890:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018d894:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018d8b0;
        }
    }
L_0018d898:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
    }
L_0018d89c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_0018d8a0:;
    {
        uint32_t v = cpu->r[1] & ~ 0x00000003u; cpu->r[1] = v;
    }
L_0018d8a4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_0018d8a8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0018d8b8;
        }
    }
L_0018d8ac:;
    {
        cpu->r[14] = 0x0018d8b0u; fn_002082a8(cpu);
    }
L_0018d8b0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018d8b4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018d8b8u)) return;
    }
L_0018d8b8:;
    {
        cpu->r[14] = 0x0018d8bcu; fn_0018ba20(cpu);
    }
L_0018d8bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018d8c0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018d8c4u)) return;
    }
}

/* _ZN16BaseSoundManager18Package_UnRegisterEi @ 0018d8c4 (arm) */
void fn_0018d8c4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018d8c4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x98u);
    }
L_0018d8c8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x94u);
    }
L_0018d8cc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0018d8d0:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0018d8d4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_0018d8d8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018d8dc:;
    {
        sub_flags(cpu, cpu->r[5], shifter(cpu->r[1], 1, 2u, &shc), 1, 1);
    }
L_0018d8e0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018d8e4u)) return;
        }
    }
L_0018d8e4:;
    {
        cpu->r[6] = rd32(cpu->r[2] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_0018d8e8:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0018d8ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018d910;
        }
    }
L_0018d8f0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0018d8f4:;
    {
        cpu->r[14] = 0x0018d8f8u; fn_0018d818(cpu);
    }
L_0018d8f8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0018d8fc:;
    {
        cpu->r[14] = 0x0018d900u; fn_0018ba20(cpu);
    }
L_0018d900:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x94u);
    }
L_0018d904:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x98u);
    }
L_0018d908:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0018d90c:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[1]);
    }
L_0018d910:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 0);
    }
L_0018d914:;
    {
        wr32(cpu->r[4] + + 0x98u, cpu->r[3]);
    }
L_0018d918:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018d91cu)) return;
    }
}

/* _ZN16BaseSoundManager11FreeAllDataEv @ 0018d91c (arm) */
void fn_0018d91c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018d91c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x98u);
    }
L_0018d920:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_0018d924:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0018d928:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_0018d92c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018d930:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 2u, &shc); cpu->r[1] = v;
        set_nz(cpu, v);
    }
L_0018d934:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0018d938u)) return;
        }
    }
L_0018d938:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_0018d93c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018d940:;
    {
        cpu->r[14] = 0x0018d944u; fn_0018d8c4(cpu);
    }
L_0018d944:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x98u);
    }
L_0018d948:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x94u);
    }
L_0018d94c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_0018d950:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 2u, &shc); cpu->r[1] = v;
        set_nz(cpu, v);
    }
L_0018d954:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018d938;
        }
    }
L_0018d958:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0018d95cu)) return;
    }
}

/* _ZN16BaseSoundManagerD2Ev @ 0018d95c (arm) */
void fn_0018d95c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018d95c:;
    {
        cpu->r[3] = rd32(0x0018d964u + + 0x68u);
    }
L_0018d960:;
    {
        cpu->r[2] = rd32(0x0018d968u + + 0x68u);
    }
L_0018d964:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018d96cu, cpu->r[3], 0, 0);
    }
L_0018d968:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0018d96c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0018d970:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018d974:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0018d978:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0018d97c:;
    {
        cpu->r[14] = 0x0018d980u; fn_0018d7ac(cpu);
    }
L_0018d980:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018d984:;
    {
        cpu->r[14] = 0x0018d988u; fn_0018d91c(cpu);
    }
L_0018d988:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018d98c:;
    {
        cpu->r[14] = 0x0018d990u; fn_0018cfd0(cpu);
    }
L_0018d990:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x94u);
    }
L_0018d994:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000094u, 0, 0);
    }
L_0018d998:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018d99c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018d9b8;
        }
    }
L_0018d9a0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
    }
L_0018d9a4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_0018d9a8:;
    {
        uint32_t v = cpu->r[1] & ~ 0x00000003u; cpu->r[1] = v;
    }
L_0018d9ac:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_0018d9b0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0018d9c0;
        }
    }
L_0018d9b4:;
    {
        cpu->r[14] = 0x0018d9b8u; fn_002082a8(cpu);
    }
L_0018d9b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018d9bc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0018d9c0u)) return;
    }
L_0018d9c0:;
    {
        cpu->r[14] = 0x0018d9c4u; fn_0018ba20(cpu);
    }
L_0018d9c4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018d9c8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0018d9ccu)) return;
    }
}

/* _ZN16BaseSoundManagerD1Ev @ 0018d9d4 (arm) */
void fn_0018d9d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018d9d4:;
    {
        cpu->r[3] = rd32(0x0018d9dcu + + 0x68u);
    }
L_0018d9d8:;
    {
        cpu->r[2] = rd32(0x0018d9e0u + + 0x68u);
    }
L_0018d9dc:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018d9e4u, cpu->r[3], 0, 0);
    }
L_0018d9e0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0018d9e4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0018d9e8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018d9ec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_0018d9f0:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0018d9f4:;
    {
        cpu->r[14] = 0x0018d9f8u; fn_0018d7ac(cpu);
    }
L_0018d9f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018d9fc:;
    {
        cpu->r[14] = 0x0018da00u; fn_0018d91c(cpu);
    }
L_0018da00:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018da04:;
    {
        cpu->r[14] = 0x0018da08u; fn_0018cfd0(cpu);
    }
L_0018da08:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x94u);
    }
L_0018da0c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000094u, 0, 0);
    }
L_0018da10:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018da14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018da30;
        }
    }
L_0018da18:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
    }
L_0018da1c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_0018da20:;
    {
        uint32_t v = cpu->r[1] & ~ 0x00000003u; cpu->r[1] = v;
    }
L_0018da24:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_0018da28:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0018da38;
        }
    }
L_0018da2c:;
    {
        cpu->r[14] = 0x0018da30u; fn_002082a8(cpu);
    }
L_0018da30:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018da34:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0018da38u)) return;
    }
L_0018da38:;
    {
        cpu->r[14] = 0x0018da3cu; fn_0018ba20(cpu);
    }
L_0018da3c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018da40:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0018da44u)) return;
    }
}

/* _ZN16BaseSoundManagerD0Ev @ 0018da4c (arm) */
void fn_0018da4c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018da4c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0018da50:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018da54:;
    {
        cpu->r[14] = 0x0018da58u; fn_0018d9d4(cpu);
    }
L_0018da58:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018da5c:;
    {
        cpu->r[14] = 0x0018da60u; fn_0018ba20(cpu);
    }
L_0018da60:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018da64:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0018da68u)) return;
    }
}

/* _ZNSs6appendEPKc @ 0018da68 (arm) */
void fn_0018da68(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018da68:;
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
L_0018da6c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018da70:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0018da74:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_0018da78:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_0018da7c:;
    {
        cpu->r[14] = 0x0018da80u; imp_strlen(cpu); /* strlen */
    }
L_0018da80:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], cpu->r[0], 0, 0);
    }
L_0018da84:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[0], 1, 1);
    }
L_0018da88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018db8c;
        }
    }
L_0018da8c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x14u);
    }
L_0018da90:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[0], cpu->r[8], 1, 0);
    }
L_0018da94:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_0018da98:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_0018da9c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = rd32(cpu->r[4] + + 0x10u);
        }
    }
L_0018daa0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[3] + + 0x10u;
        cpu->r[5] = rd32(cpu->r[3] + + 0x10u);
        cpu->r[3] = wb_tmp;
        }
    }
L_0018daa4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[4]);
        }
    }
L_0018daa8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 0);
    }
L_0018daac:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_0018dab0:;
    {
        if (cond_test(cpu, 4)) {
        goto L_0018db98;
        }
    }
L_0018dab4:;
    {
        cpu->r[3] = 0x0000fffeu;
    }
L_0018dab8:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 0);
    }
L_0018dabc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xffffu << 16);
    }
L_0018dac0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 0);
    }
L_0018dac4:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_0018dac8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0018dc10;
        }
    }
L_0018dacc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0018dad0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[10], 1, 1);
    }
L_0018dad4:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[5], 0, 0);
        }
    }
L_0018dad8:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[10], 0, 0);
        }
    }
L_0018dadc:;
    {
        add_flags(cpu, cpu->r[7], 0x00000001u, 0, 1);
    }
L_0018dae0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018dbe8;
        }
    }
L_0018dae4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[7], 1, 1);
    }
L_0018dae8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0018dbe8;
        }
    }
L_0018daec:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0018daf0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = cpu->r[7];
        }
    }
L_0018daf4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018dc20;
        }
    }
L_0018daf8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x14u);
    }
L_0018dafc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x10u);
    }
L_0018db00:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_0018db04:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0018db08:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[5] = cpu->r[6];
        }
    }
L_0018db0c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018db2c;
        }
    }
L_0018db10:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0018db14:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[5]);
    }
L_0018db18:;
    {
        wr8(cpu->r[6] + cpu->r[5], cpu->r[3]);
    }
L_0018db1c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0018db20:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[1], 1, 1);
    }
L_0018db24:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018db14;
        }
    }
L_0018db28:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], cpu->r[5], 0, 0);
    }
L_0018db2c:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0018db30:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018db50;
        }
    }
L_0018db34:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018db38:;
    {
        cpu->r[2] = rd8(cpu->r[8] + cpu->r[3]);
    }
L_0018db3c:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_0018db40:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0018db44:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_0018db48:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018db38;
        }
    }
L_0018db4c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[10], 0, 0);
    }
L_0018db50:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018db54:;
    {
        wr8(cpu->r[5], cpu->r[3]);
    }
L_0018db58:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_0018db5c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[0], 1, 1);
    }
L_0018db60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018db80;
        }
    }
L_0018db64:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0018db68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018db80;
        }
    }
L_0018db6c:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_0018db70:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_0018db74:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_0018db78:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0018dc08;
        }
    }
L_0018db7c:;
    {
        cpu->r[14] = 0x0018db80u; fn_002082a8(cpu);
    }
L_0018db80:;
    {
        wr32(cpu->r[4], cpu->r[7]);
    }
L_0018db84:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[5]);
    }
L_0018db88:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[6]);
    }
L_0018db8c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018db90:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0018db94:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018db98u)) return;
    }
L_0018db98:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_0018db9c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
    }
L_0018dba0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018dba4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018dbc4;
        }
    }
L_0018dba8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[8], 0, 0);
    }
L_0018dbac:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_0018dbb0:;
    {
        uint32_t wb_tmp = cpu->r[3] + + 0x1u;
        cpu->r[2] = rd8(cpu->r[3] + + 0x1u);
        cpu->r[3] = wb_tmp;
    }
L_0018dbb4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0018dbb8:;
    {
        uint32_t wb_tmp = cpu->r[5] + + 0x1u;
        wr8(cpu->r[5] + + 0x1u, cpu->r[2]);
        cpu->r[5] = wb_tmp;
    }
L_0018dbbc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018dbb0;
        }
    }
L_0018dbc0:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x10u);
    }
L_0018dbc4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018dbc8:;
    {
        wr8(cpu->r[5] + cpu->r[10], cpu->r[3]);
    }
L_0018dbcc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_0018dbd0:;
    {
        cpu->r[2] = rd8(cpu->r[8]);
    }
L_0018dbd4:;
    {
        wr8(cpu->r[3], cpu->r[2]);
    }
L_0018dbd8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_0018dbdc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[3], cpu->r[10], 0, 0);
    }
L_0018dbe0:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[10]);
    }
L_0018dbe4:;
    {
        goto L_0018db8c;
    }
L_0018dbe8:;
    {
        cpu->r[7] = (~0x00000001u);
    }
L_0018dbec:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_0018dbf0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0018dbf4:;
    {
        cpu->r[14] = 0x0018dbf8u; fn_0018ba6c(cpu);
    }
L_0018dbf8:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x4u);
    }
L_0018dbfc:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0018dc00:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], cpu->r[7], 0, 0);
    }
L_0018dc04:;
    {
        goto L_0018daf8;
    }
L_0018dc08:;
    {
        cpu->r[14] = 0x0018dc0cu; fn_0018ba20(cpu);
    }
L_0018dc0c:;
    {
        goto L_0018db80;
    }
L_0018dc10:;
    {
        cpu->r[0] = rd32(0x0018dc18u + + 0x20u);
    }
L_0018dc14:;
    {
        cpu->r[0] = add_flags(cpu, 0x0018dc1cu, cpu->r[0], 0, 0);
    }
L_0018dc18:;
    {
        cpu->r[14] = 0x0018dc1cu; fn_00208298(cpu);
    }
L_0018dc1c:;
    {
        goto L_0018dacc;
    }
L_0018dc20:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000080u, 1, 1);
    }
L_0018dc24:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_0018dc28:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0018dbf0;
        }
    }
L_0018dc2c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_0018dc30:;
    {
        cpu->r[14] = 0x0018dc34u; fn_00208278(cpu);
    }
L_0018dc34:;
    {
        goto L_0018dbf8;
    }
}

/* _ZN16BaseSoundManager4initEv @ 0018dc3c (arm) */
void fn_0018dc3c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018dc3c:;
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
L_0018dc40:;
    {
        cpu->r[10] = rd32(0x0018dc48u + + 0x1b4u);
    }
L_0018dc44:;
    {
        cpu->r[2] = rd32(0x0018dc4cu + + 0x1b4u);
    }
L_0018dc48:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000134u, 1, 0);
    }
L_0018dc4c:;
    {
        cpu->r[10] = add_flags(cpu, 0x0018dc54u, cpu->r[10], 0, 0);
    }
L_0018dc50:;
    {
        cpu->r[6] = rd8(cpu->r[0] + + 0xa8u);
    }
L_0018dc54:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0018dc58:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[2]);
    }
L_0018dc5c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0018dc60:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_0018dc64:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0018dc68:;
    {
        wr32(cpu->r[13] + + 0x12cu, cpu->r[3]);
    }
L_0018dc6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018dc90;
        }
    }
L_0018dc70:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_0018dc74:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[2]);
    }
L_0018dc78:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x12cu);
    }
L_0018dc7c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0018dc80:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0018dc84:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018ddf8;
        }
    }
L_0018dc88:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000134u, 0, 0);
    }
L_0018dc8c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018dc90u)) return;
    }
L_0018dc90:;
    {
        cpu->r[0] = 0x000002ecu;
    }
L_0018dc94:;
    {
        cpu->r[9] = rd32(0x0018dc9cu + + 0x168u);
    }
L_0018dc98:;
    {
        cpu->r[14] = 0x0018dc9cu; imp__Znaj(cpu); /* _Znaj */
    }
L_0018dc9c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0018dca0:;
    {
        cpu->r[2] = 0x000002ecu;
    }
L_0018dca4:;
    {
        cpu->r[4] = 0x00000012u;
    }
L_0018dca8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000114u, 0, 0);
    }
L_0018dcac:;
    {
        cpu->r[9] = add_flags(cpu, 0x0018dcb4u, cpu->r[9], 0, 0);
    }
L_0018dcb0:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[0]);
    }
L_0018dcb4:;
    {
        cpu->r[14] = 0x0018dcb8u; imp_memset(cpu); /* memset */
    }
L_0018dcb8:;
    {
        cpu->r[14] = 0x0018dcbcu; fn_001d3cf0(cpu);
    }
L_0018dcbc:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0018dcc0:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[0]);
    }
L_0018dcc4:;
    {
        cpu->r[14] = 0x0018dcccu;
    }
L_0018dcc8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018dcccu)) return;
    }
L_0018dccc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0018dcd0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x4u);
    }
L_0018dcd4:;
    {
        cpu->r[1] = 0x3f800000u;
    }
L_0018dcd8:;
    {
        cpu->r[14] = 0x0018dcdcu; fn_001d293c(cpu);
    }
L_0018dcdc:;
    {
        cpu->r[3] = rd32(0x0018dce4u + + 0x124u);
    }
L_0018dce0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[10]);
    }
L_0018dce4:;
    {
        cpu->r[2] = add_flags(cpu, 0x0018dcecu, cpu->r[3], 0, 0);
    }
L_0018dce8:;
    {
        cpu->r[3] = rd32(0x0018dcf0u + + 0x11cu);
    }
L_0018dcec:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_0018dcf0:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018dcf8u, cpu->r[3], 0, 0);
    }
L_0018dcf4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_0018dcf8:;
    {
        cpu->r[3] = rd32(0x0018dd00u + + 0x110u);
    }
L_0018dcfc:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018dd04u, cpu->r[3], 0, 0);
    }
L_0018dd00:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_0018dd04:;
    {
        goto L_0018dd14;
    }
L_0018dd08:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0018dd0c:;
    {
        sub_flags(cpu, cpu->r[4], 0x000000bbu, 1, 1);
    }
L_0018dd10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018dde0;
        }
    }
L_0018dd14:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_0018dd18:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 2u, &shc); cpu->r[6] = v;
    }
L_0018dd1c:;
    {
        cpu->r[11] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_0018dd20:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_0018dd24:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018dd08;
        }
    }
L_0018dd28:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_0018dd2c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0018dd30:;
    {
        cpu->r[14] = 0x0018dd34u; fn_0018d018(cpu);
    }
L_0018dd34:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_0018dd38:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_0018dd3c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0018dd40:;
    {
        cpu->r[14] = 0x0018dd44u; fn_0018da68(cpu);
    }
L_0018dd44:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_0018dd48:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0018dd4c:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_0018dd50:;
    {
        cpu->r[14] = 0x0018dd54u; imp_memset(cpu); /* memset */
    }
L_0018dd54:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000063u, 1, 1);
    }
L_0018dd58:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0018dd5c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0018dd60:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
        }
    }
L_0018dd64:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
        }
    }
L_0018dd68:;
    {
        cpu->r[14] = 0x0018dd6cu; imp_sprintf(cpu); /* sprintf */
    }
L_0018dd6c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_0018dd70:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0018dd74:;
    {
        cpu->r[14] = 0x0018dd78u; fn_0018da68(cpu);
    }
L_0018dd78:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_0018dd7c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0018dd80:;
    {
        cpu->r[14] = 0x0018dd84u; fn_0018da68(cpu);
    }
L_0018dd84:;
    {
        cpu->r[0] = 0x00000028u;
    }
L_0018dd88:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x128u);
    }
L_0018dd8c:;
    {
        cpu->r[14] = 0x0018dd90u; fn_0018ba6c(cpu);
    }
L_0018dd90:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018dd94:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0018dd98:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_0018dd9c:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0018dda0:;
    {
        cpu->r[14] = 0x0018dda4u; fn_001f45e4(cpu);
    }
L_0018dda4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x128u);
    }
L_0018dda8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_0018ddac:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 1);
    }
L_0018ddb0:;
    {
        wr32(cpu->r[3] + cpu->r[6], cpu->r[8]);
    }
L_0018ddb4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018dd08;
        }
    }
L_0018ddb8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018ddbc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018dd08;
        }
    }
L_0018ddc0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x114u);
    }
L_0018ddc4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_0018ddc8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_0018ddcc:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0018ddf0;
        }
    }
L_0018ddd0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0018ddd4:;
    {
        cpu->r[14] = 0x0018ddd8u; fn_002082a8(cpu);
    }
L_0018ddd8:;
    {
        sub_flags(cpu, cpu->r[4], 0x000000bbu, 1, 1);
    }
L_0018dddc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018dd14;
        }
    }
L_0018dde0:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0018dde4:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0xcu);
    }
L_0018dde8:;
    {
        wr8(cpu->r[5] + + 0xa8u, cpu->r[3]);
    }
L_0018ddec:;
    {
        goto L_0018dc70;
    }
L_0018ddf0:;
    {
        cpu->r[14] = 0x0018ddf4u; fn_0018ba20(cpu);
    }
L_0018ddf4:;
    {
        goto L_0018dd08;
    }
L_0018ddf8:;
    {
        cpu->r[14] = 0x0018ddfcu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_0018ddfc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[11] & shifter(cpu->r[4], 1, 15u, &shc); cpu->r[12] = v;
        }
    }
L_0018de00:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_0018de04:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[10] & shifter(cpu->r[0], 3, 21u, &shc); cpu->r[0] = v;
        }
    }
L_0018de08:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[10] & shifter(cpu->r[12], 4, (cpu->r[10] & 0xffu), &shc); cpu->r[0] = v;
        }
    }
L_0018de0c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[10] & shifter(cpu->r[8], 4, 20u, &shc); cpu->r[0] = v;
        }
    }
L_0018de10:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[10] & shifter(cpu->r[4], 1, (cpu->r[10] & 0xffu), &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN16BaseSoundManager16Package_RegisterEi @ 0018de14 (arm) */
void fn_0018de14(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018de14:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x98u);
    }
L_0018de18:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_0018de1c:;
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
L_0018de20:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0018de24:;
    {
        cpu->r[6] = rd32(0x0018de2cu + + 0x32cu);
    }
L_0018de28:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_0018de2c:;
    {
        sub_flags(cpu, cpu->r[1], shifter(cpu->r[3], 1, 2u, &shc), 1, 1);
    }
L_0018de30:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018de34:;
    {
        cpu->r[6] = add_flags(cpu, 0x0018de3cu, cpu->r[6], 0, 0);
    }
L_0018de38:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0018de3c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0018df2c;
        }
    }
L_0018de40:;
    {
        cpu->r[3] = rd32(0x0018de48u + + 0x314u);
    }
L_0018de44:;
    {
        cpu->r[8] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0018de48:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_0018de4c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0018de50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018e014;
        }
    }
L_0018de54:;
    {
        cpu->r[7] = rd32(0x0018de5cu + + 0x304u);
    }
L_0018de58:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_0018de5c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0018de60:;
    {
        cpu->r[14] = 0x0018de64u; fn_00189f5c(cpu);
    }
L_0018de64:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0018de68:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0018de6c:;
    {
        cpu->r[14] = 0x0018de70u; fn_001897b4(cpu);
    }
L_0018de70:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018de74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018e058;
        }
    }
L_0018de78:;
    {
        cpu->r[0] = 0x00001004u;
    }
L_0018de7c:;
    {
        cpu->r[14] = 0x0018de80u; fn_0018ba6c(cpu);
    }
L_0018de80:;
    {
        cpu->r[12] = 0x00001000u;
    }
L_0018de84:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018de88:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0018de8c:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_0018de90:;
    {
        wr32(cpu->r[0] + cpu->r[12], cpu->r[3]);
    }
L_0018de94:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0018de98:;
    {
        cpu->r[14] = 0x0018de9cu; fn_00097fe8(cpu);
    }
L_0018de9c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018dea0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018dfdc;
        }
    }
L_0018dea4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0018dea8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0018deac:;
    {
        cpu->r[14] = 0x0018deb0u; fn_00189870(cpu);
    }
L_0018deb0:;
    {
        cpu->r[3] = 0x00001000u;
    }
L_0018deb4:;
    {
        cpu->r[0] = 0x00000018u;
    }
L_0018deb8:;
    {
        cpu->r[7] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0018debc:;
    {
        cpu->r[14] = 0x0018dec0u; fn_0018ba6c(cpu);
    }
L_0018dec0:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0018dec4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0018dec8:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0018decc:;
    {
        cpu->r[14] = 0x0018ded0u; fn_0018c5e8(cpu);
    }
L_0018ded0:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x98u);
    }
L_0018ded4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x9cu);
    }
L_0018ded8:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_0018dedc:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t wb_tmp = cpu->r[9] + 0x00000004u;
        wr32(cpu->r[9], cpu->r[8]);
        cpu->r[9] = wb_tmp;
        }
    }
L_0018dee0:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x98u, cpu->r[9]);
        }
    }
L_0018dee4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018e090;
        }
    }
L_0018dee8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0018deec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018df34;
        }
    }
L_0018def0:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0018def4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018df24;
        }
    }
L_0018def8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x94u);
    }
L_0018defc:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0018df00:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0024u << 16);
    }
L_0018df04:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0018df08:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_0018df0c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_0018df10:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0018df14:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[1]);
    }
L_0018df18:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 1);
    }
L_0018df1c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000018u, 0, 0);
    }
L_0018df20:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018df10;
        }
    }
L_0018df24:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018df28:;
    {
        cpu->r[14] = 0x0018df2cu; fn_0018dc3c(cpu);
    }
L_0018df2c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_0018df30:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018df34u)) return;
    }
L_0018df34:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x94u);
    }
L_0018df38:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_0018df3c:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0084u << 16);
    }
L_0018df40:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_0018df44:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_0018df48:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0018df4c:;
    {
        wr32(cpu->r[2] + + 0x10u, cpu->r[1]);
    }
L_0018df50:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000012u, 1, 1);
    }
L_0018df54:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000018u, 0, 0);
    }
L_0018df58:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018df48;
        }
    }
L_0018df5c:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_0018df60:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0018df64:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0024u << 16);
    }
L_0018df68:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_0018df6c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0018df70:;
    {
        wr32(cpu->r[2] + + 0x1c0u, cpu->r[1]);
    }
L_0018df74:;
    {
        sub_flags(cpu, cpu->r[5], 0x0000009bu, 1, 1);
    }
L_0018df78:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000018u, 0, 0);
    }
L_0018df7c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018df6c;
        }
    }
L_0018df80:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_0018df84:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_0018df88:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0004u << 16);
    }
L_0018df8c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0018df90:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x4u);
    }
L_0018df94:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], cpu->r[2], 0, 0);
    }
L_0018df98:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000018u, 0, 0);
    }
L_0018df9c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000228u, 1, 1);
    }
L_0018dfa0:;
    {
        wr32(cpu->r[1] + + 0xe98u, cpu->r[0]);
    }
L_0018dfa4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018df94;
        }
    }
L_0018dfa8:;
    {
        sub_flags(cpu, cpu->r[7], 0x000000b2u, 1, 1);
    }
L_0018dfac:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018df24;
        }
    }
L_0018dfb0:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_0018dfb4:;
    {
        cpu->r[3] = 0x000000b2u;
    }
L_0018dfb8:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_0018dfbc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x000010c0u, 0, 0);
    }
L_0018dfc0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0018dfc4:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x00000018u;
        wr32(cpu->r[2], cpu->r[0]);
        cpu->r[2] = wb_tmp;
    }
L_0018dfc8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_0018dfcc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018dfc0;
        }
    }
L_0018dfd0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018dfd4:;
    {
        cpu->r[14] = 0x0018dfd8u; fn_0018dc3c(cpu);
    }
L_0018dfd8:;
    {
        goto L_0018df2c;
    }
L_0018dfdc:;
    {
        cpu->r[1] = rd32(0x0018dfe4u + + 0x180u);
    }
L_0018dfe0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0018dfe4:;
    {
        cpu->r[2] = rd32(0x0018dfecu + + 0x17cu);
    }
L_0018dfe8:;
    {
        cpu->r[14] = 0x00000700u;
    }
L_0018dfec:;
    {
        cpu->r[3] = rd32(0x0018dff4u + + 0x178u);
    }
L_0018dff0:;
    {
        cpu->r[1] = add_flags(cpu, 0x0018dff8u, cpu->r[1], 0, 0);
    }
L_0018dff4:;
    {
        cpu->r[12] = rd32(0x0018dffcu + + 0x174u);
    }
L_0018dff8:;
    {
        cpu->r[2] = add_flags(cpu, 0x0018e000u, cpu->r[2], 0, 0);
    }
L_0018dffc:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018e004u, cpu->r[3], 0, 0);
    }
L_0018e000:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_0018e004:;
    {
        cpu->r[12] = add_flags(cpu, 0x0018e00cu, cpu->r[12], 0, 0);
    }
L_0018e008:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0018e00c:;
    {
        cpu->r[14] = 0x0018e010u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0018e010:;
    {
        goto L_0018dea4;
    }
L_0018e014:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0018e018:;
    {
        cpu->r[14] = 0x0018e01cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0018e01c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018e020:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018de54;
        }
    }
L_0018e024:;
    {
        cpu->r[7] = rd32(0x0018e02cu + + 0x134u);
    }
L_0018e028:;
    {
        cpu->r[10] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_0018e02c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0018e030:;
    {
        cpu->r[14] = 0x0018e034u; fn_00189f48(cpu);
    }
L_0018e034:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0018e038:;
    {
        cpu->r[14] = 0x0018e03cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0018e03c:;
    {
        cpu->r[3] = rd32(0x0018e044u + + 0x130u);
    }
L_0018e040:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0018e044:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0018e048:;
    {
        cpu->r[3] = rd32(0x0018e050u + + 0x128u);
    }
L_0018e04c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0018e050:;
    {
        cpu->r[14] = 0x0018e054u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_0018e054:;
    {
        goto L_0018de58;
    }
L_0018e058:;
    {
        cpu->r[1] = rd32(0x0018e060u + + 0x11cu);
    }
L_0018e05c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0018e060:;
    {
        cpu->r[2] = rd32(0x0018e068u + + 0x118u);
    }
L_0018e064:;
    {
        cpu->r[14] = 0x000006fcu;
    }
L_0018e068:;
    {
        cpu->r[3] = rd32(0x0018e070u + + 0x114u);
    }
L_0018e06c:;
    {
        cpu->r[1] = add_flags(cpu, 0x0018e074u, cpu->r[1], 0, 0);
    }
L_0018e070:;
    {
        cpu->r[12] = rd32(0x0018e078u + + 0x110u);
    }
L_0018e074:;
    {
        cpu->r[2] = add_flags(cpu, 0x0018e07cu, cpu->r[2], 0, 0);
    }
L_0018e078:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018e080u, cpu->r[3], 0, 0);
    }
L_0018e07c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_0018e080:;
    {
        cpu->r[12] = add_flags(cpu, 0x0018e088u, cpu->r[12], 0, 0);
    }
L_0018e084:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0018e088:;
    {
        cpu->r[14] = 0x0018e08cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0018e08c:;
    {
        goto L_0018de78;
    }
L_0018e090:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x94u);
    }
L_0018e094:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 0);
    }
L_0018e098:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[2] = v;
    }
L_0018e09c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_0018e0a0:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[6] = add_flags(cpu, cpu->r[2], cpu->r[2], 0, 0);
        }
    }
L_0018e0a4:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[6] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
        }
    }
L_0018e0a8:;
    {
        add_flags(cpu, cpu->r[6], 0xc0000001u, 0, 1);
    }
L_0018e0ac:;
    {
        if (cond_test(cpu, 10)) {
        goto L_0018e134;
        }
    }
L_0018e0b0:;
    {
        cpu->r[6] = (~0xc0000000u);
    }
L_0018e0b4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_0018e0b8:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 2u, &shc); cpu->r[6] = v;
    }
L_0018e0bc:;
    {
        uint32_t wb_tmp = cpu->r[0] + - 0x4u;
        wr32(cpu->r[0] + - 0x4u, cpu->r[6]);
        cpu->r[0] = wb_tmp;
    }
L_0018e0c0:;
    {
        cpu->r[14] = 0x0018e0c4u; fn_00097b58(cpu);
    }
L_0018e0c4:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0xcu);
    }
L_0018e0c8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x94u);
    }
L_0018e0cc:;
    {
        uint32_t v = shifter(cpu->r[6], 3, 2u, &shc); cpu->r[6] = v;
    }
L_0018e0d0:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_0018e0d4:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_0018e0d8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[9] = cpu->r[10];
        }
    }
L_0018e0dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018e0f8;
        }
    }
L_0018e0e0:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0018e0e4:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_0018e0e8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0018e0ec:;
    {
        cpu->r[14] = 0x0018e0f0u; imp_memmove(cpu); /* memmove */
    }
L_0018e0f0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x94u);
    }
L_0018e0f4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[0], cpu->r[9], 0, 0);
    }
L_0018e0f8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018e0fc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x9cu);
    }
L_0018e100:;
    {
        uint32_t wb_tmp = cpu->r[9] + 0x00000004u;
        wr32(cpu->r[9], cpu->r[8]);
        cpu->r[9] = wb_tmp;
    }
L_0018e104:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018e120;
        }
    }
L_0018e108:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_0018e10c:;
    {
        uint32_t v = cpu->r[1] & ~ 0x00000003u; cpu->r[1] = v;
    }
L_0018e110:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_0018e114:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0018e14c;
        }
    }
L_0018e118:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0018e11c:;
    {
        cpu->r[14] = 0x0018e120u; fn_002082a8(cpu);
    }
L_0018e120:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[10], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_0018e124:;
    {
        wr32(cpu->r[4] + + 0x98u, cpu->r[9]);
    }
L_0018e128:;
    {
        wr32(cpu->r[4] + + 0x9cu, cpu->r[6]);
    }
L_0018e12c:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[10]);
    }
L_0018e130:;
    {
        goto L_0018dee8;
    }
L_0018e134:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[6], 1, 1);
    }
L_0018e138:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0018e0b0;
        }
    }
L_0018e13c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0018e140:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = cpu->r[6];
        }
    }
L_0018e144:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018e0d4;
        }
    }
L_0018e148:;
    {
        goto L_0018e0b4;
    }
L_0018e14c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0018e150:;
    {
        cpu->r[14] = 0x0018e154u; fn_0018ba20(cpu);
    }
L_0018e154:;
    {
        goto L_0018e120;
    }
}

/* _ZN16BaseSoundManager11toggleSoundEv @ 0018e18c (arm) */
void fn_0018e18c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018e18c:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0xa8u);
    }
L_0018e190:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0018e194:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018e198:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018e19c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018e1d4;
        }
    }
L_0018e1a0:;
    {
        cpu->r[14] = 0x0018e1a4u; fn_0018d7ac(cpu);
    }
L_0018e1a4:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0xa8u);
    }
L_0018e1a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018e1ac:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0018e1b0u)) return;
        }
    }
L_0018e1b0:;
    {
        cpu->r[0] = rd32(0x0018e1b8u + + 0x50u);
    }
L_0018e1b4:;
    {
        cpu->r[2] = 0x00000230u;
    }
L_0018e1b8:;
    {
        cpu->r[1] = rd32(0x0018e1c0u + + 0x4cu);
    }
L_0018e1bc:;
    {
        cpu->r[3] = rd32(0x0018e1c4u + + 0x4cu);
    }
L_0018e1c0:;
    {
        cpu->r[0] = add_flags(cpu, 0x0018e1c8u, cpu->r[0], 0, 0);
    }
L_0018e1c4:;
    {
        cpu->r[1] = add_flags(cpu, 0x0018e1ccu, cpu->r[1], 0, 0);
    }
L_0018e1c8:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018e1d0u, cpu->r[3], 0, 0);
    }
L_0018e1cc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_0018e1d0:;
    {
        imp_printf(cpu); /* tail printf */ return;
    }
L_0018e1d4:;
    {
        cpu->r[14] = 0x0018e1d8u; fn_0018dc3c(cpu);
    }
L_0018e1d8:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0xa8u);
    }
L_0018e1dc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018e1e0:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0018e1e4u)) return;
        }
    }
L_0018e1e4:;
    {
        cpu->r[0] = rd32(0x0018e1ecu + + 0x28u);
    }
L_0018e1e8:;
    {
        cpu->r[2] = 0x00000235u;
    }
L_0018e1ec:;
    {
        cpu->r[1] = rd32(0x0018e1f4u + + 0x24u);
    }
L_0018e1f0:;
    {
        cpu->r[3] = rd32(0x0018e1f8u + + 0x24u);
    }
L_0018e1f4:;
    {
        cpu->r[0] = add_flags(cpu, 0x0018e1fcu, cpu->r[0], 0, 0);
    }
L_0018e1f8:;
    {
        cpu->r[1] = add_flags(cpu, 0x0018e200u, cpu->r[1], 0, 0);
    }
L_0018e1fc:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018e204u, cpu->r[3], 0, 0);
    }
L_0018e200:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_0018e204:;
    {
        imp_printf(cpu); /* tail printf */ return;
    }
}

/* _ZN16BaseSoundManager13getReadySoundEii @ 0018e220 (arm) */
void fn_0018e220(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018e220:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_0018e224:;
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
L_0018e228:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_0018e22c:;
    {
        cpu->r[8] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_0018e230:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_0018e234:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_0018e238:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0018e23c:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 3u, &shc); cpu->r[11] = v;
    }
L_0018e240:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0018e244:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x4u);
    }
L_0018e248:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[11], 0, 0);
    }
L_0018e24c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + shifter(cpu->r[10], 2, 3u, &shc));
    }
L_0018e250:;
    {
        cpu->r[9] = rd32(cpu->r[3] + + 0x10u);
    }
L_0018e254:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x4u);
    }
L_0018e258:;
    {
        uint32_t v = cpu->r[9] & 0x00100000u; cpu->r[4] = v;
        set_nz(cpu, v);
    }
L_0018e25c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 0);
    }
L_0018e260:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 2u, &shc); cpu->r[6] = v;
    }
L_0018e264:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018e270;
        }
    }
L_0018e268:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0018e26c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0018e310;
        }
    }
L_0018e270:;
    {
        uint32_t v = cpu->r[9] & 0x00000001u; cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_0018e274:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018e33c;
        }
    }
L_0018e278:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000002u, 1, 1);
    }
L_0018e27c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_0018e280:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018e3ac;
        }
    }
L_0018e284:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x4u);
    }
L_0018e288:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 2u, &shc); cpu->r[4] = v;
    }
L_0018e28c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[11]);
    }
L_0018e290:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_0018e294:;
    {
        cpu->r[14] = 0x0018e298u; fn_001911a0(cpu);
    }
L_0018e298:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000003u, 1, 1);
    }
L_0018e29c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018e2b4;
        }
    }
L_0018e2a0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0018e2a4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000003u, 1, 1);
    }
L_0018e2a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018e284;
        }
    }
L_0018e2ac:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0018e2b0:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_0018e2b4:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x4u);
    }
L_0018e2b8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0018e2bc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[10], 2, 3u, &shc));
    }
L_0018e2c0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_0018e2c4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0018e2c8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0018e2cc:;
    {
        cpu->r[14] = 0x0018e2d4u;
    }
L_0018e2d0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018e2d4u)) return;
    }
L_0018e2d4:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x4u);
    }
L_0018e2d8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[10], 2, 3u, &shc));
    }
L_0018e2dc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_0018e2e0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0018e2e4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0018e2e8:;
    {
        cpu->r[14] = 0x0018e2f0u;
    }
L_0018e2ec:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018e2f0u)) return;
    }
L_0018e2f0:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x4u);
    }
L_0018e2f4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[10], 2, 3u, &shc));
    }
L_0018e2f8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_0018e2fc:;
    {
        cpu->r[14] = 0x0018e300u; fn_0019138c(cpu);
    }
L_0018e300:;
    {
        goto L_0018e330;
    }
L_0018e304:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0018e308:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 1);
    }
L_0018e30c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018e270;
        }
    }
L_0018e310:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0018e314:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0018e318:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0018e31c:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0018e320:;
    {
        cpu->r[14] = 0x0018e324u; fn_0018c1bc(cpu);
    }
L_0018e324:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018e328:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018e304;
        }
    }
L_0018e32c:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_0018e330:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0018e334:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_0018e338:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018e33cu)) return;
    }
L_0018e33c:;
    {
        { uint32_t v = cpu->r[9] & 0x00000002u; set_nz(cpu, v); }
    }
L_0018e340:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = (~0x00000000u);
        }
    }
L_0018e344:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018e330;
        }
    }
L_0018e348:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x4u);
    }
L_0018e34c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[11], 0, 0);
    }
L_0018e350:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[10], 2, 3u, &shc));
    }
L_0018e354:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_0018e358:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_0018e35c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_0018e360:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = cpu->r[2];
        }
    }
L_0018e364:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018e330;
        }
    }
L_0018e368:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0018e36c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0018e370:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_0018e374:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_0018e378:;
    {
        cpu->r[14] = 0x0018e37cu; fn_0018c874(cpu);
    }
L_0018e37c:;
    {
        cpu->r[0] = rd32(cpu->r[8] + + 0x4u);
    }
L_0018e380:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[11], 0, 0);
    }
L_0018e384:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[1] = v0;
        cpu->r[3] = v1;
    }
L_0018e388:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_0018e38c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018e400;
        }
    }
L_0018e390:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_0018e394:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_0018e398:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_0018e39c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0018e3a0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0018e3a4:;
    {
        cpu->r[14] = 0x0018e3a8u; fn_0018d1f8(cpu);
    }
L_0018e3a8:;
    {
        goto L_0018e330;
    }
L_0018e3ac:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0018e3b0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_0018e3b4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0018e3b8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018e3bc:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_0018e3c0:;
    {
        cpu->r[14] = 0x0018e3c4u; fn_0018c874(cpu);
    }
L_0018e3c4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0018e3c8:;
    {
        cpu->r[0] = 0x00000030u;
    }
L_0018e3cc:;
    {
        cpu->r[14] = 0x0018e3d0u; fn_0018ba6c(cpu);
    }
L_0018e3d0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0018e3d4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0018e3d8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018e3dc:;
    {
        cpu->r[14] = 0x0018e3e0u; fn_0019181c(cpu);
    }
L_0018e3e0:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0018e3e4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[4]);
    }
L_0018e3e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018e42c;
        }
    }
L_0018e3ec:;
    {
        cpu->r[0] = rd32(cpu->r[8] + + 0x4u);
    }
L_0018e3f0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[11], 0, 0);
    }
L_0018e3f4:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[1] = v0;
        cpu->r[3] = v1;
    }
L_0018e3f8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_0018e3fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018e410;
        }
    }
L_0018e400:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_0018e404:;
    {
        uint32_t wb_tmp = cpu->r[1] + 0x00000004u;
        wr32(cpu->r[1], cpu->r[3]);
        cpu->r[1] = wb_tmp;
    }
L_0018e408:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_0018e40c:;
    {
        goto L_0018e330;
    }
L_0018e410:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_0018e414:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_0018e418:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_0018e41c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0018e420:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0018e424:;
    {
        cpu->r[14] = 0x0018e428u; fn_0018d1f8(cpu);
    }
L_0018e428:;
    {
        goto L_0018e330;
    }
L_0018e42c:;
    {
        cpu->r[0] = rd32(0x0018e434u + + 0x1cu);
    }
L_0018e430:;
    {
        cpu->r[2] = 0x000004bbu;
    }
L_0018e434:;
    {
        cpu->r[1] = rd32(0x0018e43cu + + 0x18u);
    }
L_0018e438:;
    {
        cpu->r[3] = rd32(0x0018e440u + + 0x18u);
    }
L_0018e43c:;
    {
        cpu->r[0] = add_flags(cpu, 0x0018e444u, cpu->r[0], 0, 0);
    }
L_0018e440:;
    {
        cpu->r[1] = add_flags(cpu, 0x0018e448u, cpu->r[1], 0, 0);
    }
L_0018e444:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018e44cu, cpu->r[3], 0, 0);
    }
L_0018e448:;
    {
        cpu->r[14] = 0x0018e44cu; imp_printf(cpu); /* printf */
    }
L_0018e44c:;
    {
        goto L_0018e3ec;
    }
}

/* _ZN16BaseSoundManager13PrecacheSoundEii @ 0018e45c (arm) */
void fn_0018e45c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018e45c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0018e460:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0018e464:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_0018e468:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0018e46c:;
    {
        cpu->r[14] = 0x0018e470u; fn_0018e220(cpu);
    }
L_0018e470:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x94u);
    }
L_0018e474:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_0018e478:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_0018e47c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018e480u)) return;
        }
    }
L_0018e480:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_0018e484:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
    }
L_0018e488:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 3u, &shc));
    }
L_0018e48c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_0018e490:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0018e494:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0018e498:;
    {
        cpu->r[14] = 0x0018e4a0u;
    }
L_0018e49c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x28u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018e4a0u)) return;
    }
L_0018e4a0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018e4a4u)) return;
    }
}

/* _ZN16BaseSoundManager12allocBuffersEv @ 0018e4a4 (arm) */
void fn_0018e4a4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018e4a4:;
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
L_0018e4a8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x94u);
    }
L_0018e4ac:;
    {
        cpu->r[10] = rd32(cpu->r[0] + + 0x98u);
    }
L_0018e4b0:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0018e4b4:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 0);
    }
L_0018e4b8:;
    {
        uint32_t v = shifter(cpu->r[10], 1, 2u, &shc); cpu->r[10] = v;
    }
L_0018e4bc:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0018e4c0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018e4c4u)) return;
        }
    }
L_0018e4c4:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0018e4c8:;
    {
        cpu->r[6] = rd32(cpu->r[3] + shifter(cpu->r[7], 2, 2u, &shc));
    }
L_0018e4cc:;
    {
        cpu->r[12] = rd32(cpu->r[6]);
    }
L_0018e4d0:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0018e4d4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018e548;
        }
    }
L_0018e4d8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0018e4dc:;
    {
        cpu->r[4] = cpu->r[5];
    }
L_0018e4e0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_0018e4e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_0018e4e8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x10u);
    }
L_0018e4ec:;
    {
        { uint32_t v = cpu->r[2] & 0x00500000u; set_nz(cpu, v); }
    }
L_0018e4f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018e538;
        }
    }
L_0018e4f4:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x14u);
    }
L_0018e4f8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0018e4fc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0018e500:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0018e504:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018e508:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018e538;
        }
    }
L_0018e50c:;
    {
        cpu->r[14] = 0x0018e510u; fn_0018e220(cpu);
    }
L_0018e510:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0018e514:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0018e518:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0018e51c:;
    {
        cpu->r[14] = 0x0018e520u; fn_0018d574(cpu);
    }
L_0018e520:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_0018e524:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_0018e528:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x15u);
    }
L_0018e52c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018e530:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018e55c;
        }
    }
L_0018e534:;
    {
        cpu->r[12] = rd32(cpu->r[6]);
    }
L_0018e538:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0018e53c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000018u, 0, 0);
    }
L_0018e540:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[4], 1, 1);
    }
L_0018e544:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0018e4e0;
        }
    }
L_0018e548:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0018e54c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[10], 1, 1);
    }
L_0018e550:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018e554u)) return;
        }
    }
L_0018e554:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x94u);
    }
L_0018e558:;
    {
        goto L_0018e4c8;
    }
L_0018e55c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0018e560:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0018e564:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0018e568:;
    {
        cpu->r[14] = 0x0018e56cu; fn_0018e45c(cpu);
    }
L_0018e56c:;
    {
        goto L_0018e534;
    }
}

/* _ZN16BaseSoundManager6playExEiPKfbfiifPFvvE @ 0018e570 (arm) */
void fn_0018e570(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018e570:;
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
L_0018e574:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0018e578:;
    {
        cpu->r[4] = rd32(0x0018e580u + + 0x460u);
    }
L_0018e57c:;
    {
        cpu->r[5] = rd32(0x0018e584u + + 0x460u);
    }
L_0018e580:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_0018e584:;
    {
        cpu->r[4] = add_flags(cpu, 0x0018e58cu, cpu->r[4], 0, 0);
    }
L_0018e588:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_0018e58c:;
    {
        cpu->r[2] = rd8(cpu->r[0] + + 0xa8u);
    }
L_0018e590:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000018cu, 1, 0);
    }
L_0018e594:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0018e598:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0018e59c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0018e5a0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_0018e5a4:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[13] + + 0x1b8u);
    }
L_0018e5a8:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x1c0u);
    }
L_0018e5ac:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0018e5b0:;
    {
        wr32(cpu->r[13] + + 0x184u, cpu->r[3]);
    }
L_0018e5b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018e5e0;
        }
    }
L_0018e5b8:;
    {
        cpu->r[7] = (~0x00000000u);
    }
L_0018e5bc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0018e5c0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0018e5c4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x184u);
    }
L_0018e5c8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0018e5cc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0018e5d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018e844;
        }
    }
L_0018e5d4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000018cu, 0, 0);
    }
L_0018e5d8:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0018e5dc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018e5e0u)) return;
    }
L_0018e5e0:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x94u);
    }
L_0018e5e4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0018e5e8:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0018e5ec:;
    {
        cpu->r[11] = rd32(cpu->r[12] + shifter(cpu->r[7], 2, 2u, &shc));
    }
L_0018e5f0:;
    {
        cpu->r[14] = 0x0018e5f4u; fn_0018c1bc(cpu);
    }
L_0018e5f4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018e5f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018e5b8;
        }
    }
L_0018e5fc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_0018e600:;
    {
        cpu->r[2] = rd32(cpu->r[11] + + 0x4u);
    }
L_0018e604:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_0018e608:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_0018e60c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x10u);
    }
L_0018e610:;
    {
        cpu->r[2] = (cpu->r[2] >> 23) & 0x1u;
    }
L_0018e614:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_0018e618:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0018e61c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018e674;
        }
    }
L_0018e620:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_0018e624:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_0018e628:;
    {
        cpu->r[9] = cpu->r[1];
    }
L_0018e62c:;
    {
        goto L_0018e640;
    }
L_0018e630:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_0018e634:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_0018e638:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000020u, 1, 1);
    }
L_0018e63c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018e660;
        }
    }
L_0018e640:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x14u);
    }
L_0018e644:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[9], 1, 1);
    }
L_0018e648:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018e828;
        }
    }
L_0018e64c:;
    {
        add_flags(cpu, cpu->r[12], 0x00000001u, 0, 1);
    }
L_0018e650:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018e630;
        }
    }
L_0018e654:;
    {
        add_flags(cpu, cpu->r[1], 0x00000001u, 0, 1);
    }
L_0018e658:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = cpu->r[0];
        }
    }
L_0018e65c:;
    {
        goto L_0018e630;
    }
L_0018e660:;
    {
        add_flags(cpu, cpu->r[12], 0x00000001u, 0, 1);
    }
L_0018e664:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[9]);
    }
L_0018e668:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
        }
    }
L_0018e66c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = add_flags(cpu, cpu->r[6], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
        }
    }
L_0018e670:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[12] + + 0x14u, cpu->r[2]);
        }
    }
L_0018e674:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_0018e678:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0018e67c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_0018e680:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_0018e684:;
    {
        cpu->r[14] = 0x0018e688u; fn_0018e220(cpu);
    }
L_0018e688:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_0018e68c:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_0018e690:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0018e694:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018e5bc;
        }
    }
L_0018e698:;
    {
        cpu->r[2] = rd32(cpu->r[11] + + 0x4u);
    }
L_0018e69c:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0018e6a0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + shifter(cpu->r[3], 2, 3u, &shc));
    }
L_0018e6a4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_0018e6a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018e6c0;
        }
    }
L_0018e6ac:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0018e6b0:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_0018e6b4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0018e6b8:;
    {
        cpu->r[14] = 0x0018e6c0u;
    }
L_0018e6bc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018e6c0u)) return;
    }
L_0018e6c0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_0018e6c4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018e6c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018e80c;
        }
    }
L_0018e6cc:;
    {
        cpu->r[3] = rd8(cpu->r[6] + + 0xb0u);
    }
L_0018e6d0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[6] + + 0xa0u);
    }
L_0018e6d4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018e6d8:;
    {
        cpu->r[3] = rd32(0x0018e6e0u + + 0x308u);
    }
L_0018e6dc:;
    {
        if (cond_test(cpu, 1)) {
        vfp_vmul(cpu, 14, 14, 16);
        }
    }
L_0018e6e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0018e6e4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_0018e6e8:;
    {
        if (cond_test(cpu, 1)) {
        vfp_vmul(cpu, 16, 14, 15);
        }
    }
L_0018e6ec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018e5bc;
        }
    }
L_0018e6f0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_0018e6f4:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0xcu);
    }
L_0018e6f8:;
    {
        cpu->r[11] = rd32(cpu->r[3] + shifter(cpu->r[8], 2, 2u, &shc));
    }
L_0018e6fc:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_0018e700:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018e848;
        }
    }
L_0018e704:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_0018e708:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x4u);
    }
L_0018e70c:;
    {
        cpu->r[14] = 0x0018e710u; fn_001d3638(cpu);
    }
L_0018e710:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018e714:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018e5bc;
        }
    }
L_0018e718:;
    {
        cpu->r[12] = rd32(0x0018e720u + + 0x2ccu);
    }
L_0018e71c:;
    {
        cpu->r[11] = 0x0000fec0u;
    }
L_0018e720:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_0018e724:;
    {
        cpu->r[11] = (cpu->r[11] & 0xffffu) | (0xffffu << 16);
    }
L_0018e728:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_0018e72c:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_0018e730:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_0018e734:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000040u, 0, 0);
    }
L_0018e738:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x4u);
    }
L_0018e73c:;
    {
        cpu->r[9] = (~0x00000000u);
    }
L_0018e740:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_0018e744:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[12]);
    }
L_0018e748:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000188u, 0, 0);
    }
L_0018e74c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_0018e750:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_0018e754:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_0018e758:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[8]);
    }
L_0018e75c:;
    {
        cpu->r[3] = cpu->r[14];
    }
L_0018e760:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_0018e764:;
    {
        cpu->r[8] = (~0x00000000u);
    }
L_0018e768:;
    {
        wr64(cpu->r[12] + cpu->r[11], ((uint64_t)cpu->r[9] << 32) | cpu->r[8]);
    }
L_0018e76c:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[14]);
    }
L_0018e770:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[14]);
    }
L_0018e774:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[14]);
    }
L_0018e778:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[14]);
    }
L_0018e77c:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[14]);
    }
L_0018e780:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_0018e784:;
    {
        cpu->r[14] = 0x0018e788u; fn_001d3578(cpu);
    }
L_0018e788:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_0018e78c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_0018e790:;
    {
        cpu->r[14] = 0x0018e794u; fn_001e2aec(cpu);
    }
L_0018e794:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_0018e798:;
    {
        cpu->r[14] = 0x0018e79cu; fn_001e2b74(cpu);
    }
L_0018e79c:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x4u);
    }
L_0018e7a0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_0018e7a4:;
    {
        cpu->r[2] = 0x3f800000u;
    }
L_0018e7a8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018e7ac:;
    {
        cpu->r[14] = 0x0018e7b0u; fn_001d335c(cpu);
    }
L_0018e7b0:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x4u);
    }
L_0018e7b4:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,16);
    }
L_0018e7b8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_0018e7bc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018e7c0:;
    {
        cpu->r[14] = 0x0018e7c4u; fn_001d33dc(cpu);
    }
L_0018e7c4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_0018e7c8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000011u, 1, 1);
    }
L_0018e7cc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018e830;
        }
    }
L_0018e7d0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_0018e7d4:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x4u);
    }
L_0018e7d8:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000006du, 1, 1);
    }
L_0018e7dc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_0018e7e0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00000003u;
        }
    }
L_0018e7e4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_0018e7e8:;
    {
        cpu->r[14] = 0x0018e7ecu; fn_001d3174(cpu);
    }
L_0018e7ec:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x4u);
    }
L_0018e7f0:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_0018e7f4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_0018e7f8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018e7fc:;
    {
        cpu->r[14] = 0x0018e800u; fn_001d3304(cpu);
    }
L_0018e800:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_0018e804:;
    {
        cpu->r[14] = 0x0018e808u; fn_001e2b74(cpu);
    }
L_0018e808:;
    {
        goto L_0018e5bc;
    }
L_0018e80c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6] + + 0xa4u);
    }
L_0018e810:;
    {
        vfp_vmul(cpu, 14, 16, 15);
    }
L_0018e814:;
    {
        cpu->r[3] = rd32(0x0018e81cu + + 0x1ccu);
    }
L_0018e818:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0018e81c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_0018e820:;
    {
        vfp_vmul(cpu, 16, 14, 15);
    }
L_0018e824:;
    {
        goto L_0018e6f0;
    }
L_0018e828:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[9]);
    }
L_0018e82c:;
    {
        goto L_0018e674;
    }
L_0018e830:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x4u);
    }
L_0018e834:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0018e838:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_0018e83c:;
    {
        cpu->r[14] = 0x0018e840u; fn_001d3174(cpu);
    }
L_0018e840:;
    {
        goto L_0018e7ec;
    }
L_0018e844:;
    {
        cpu->r[14] = 0x0018e848u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_0018e848:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x0000016cu, 0, 0);
    }
L_0018e84c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000068u, 0, 0);
    }
L_0018e850:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0018e854:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x0000006cu, 0, 0);
    }
L_0018e858:;
    {
        cpu->r[14] = 0x0018e85cu; fn_0018d018(cpu);
    }
L_0018e85c:;
    {
        cpu->r[1] = rd32(0x0018e864u + + 0x18cu);
    }
L_0018e860:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0018e864:;
    {
        cpu->r[1] = add_flags(cpu, 0x0018e86cu, cpu->r[1], 0, 0);
    }
L_0018e868:;
    {
        cpu->r[14] = 0x0018e86cu; fn_0018da68(cpu);
    }
L_0018e86c:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_0018e870:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0018e874:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_0018e878:;
    {
        cpu->r[14] = 0x0018e87cu; imp_memset(cpu); /* memset */
    }
L_0018e87c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_0018e880:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000009u, 1, 1);
    }
L_0018e884:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018e9a0;
        }
    }
L_0018e888:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_0018e88c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000063u, 1, 1);
    }
L_0018e890:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0018e93c;
        }
    }
L_0018e894:;
    {
        cpu->r[1] = rd32(0x0018e89cu + + 0x158u);
    }
L_0018e898:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0018e89c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0018e8a0:;
    {
        cpu->r[1] = add_flags(cpu, 0x0018e8a8u, cpu->r[1], 0, 0);
    }
L_0018e8a4:;
    {
        cpu->r[14] = 0x0018e8a8u; imp_sprintf(cpu); /* sprintf */
    }
L_0018e8a8:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_0018e8ac:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0018e8b0:;
    {
        cpu->r[14] = 0x0018e8b4u; fn_0018da68(cpu);
    }
L_0018e8b4:;
    {
        cpu->r[1] = rd32(0x0018e8bcu + + 0x13cu);
    }
L_0018e8b8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0018e8bc:;
    {
        cpu->r[1] = add_flags(cpu, 0x0018e8c4u, cpu->r[1], 0, 0);
    }
L_0018e8c0:;
    {
        cpu->r[14] = 0x0018e8c4u; fn_0018da68(cpu);
    }
L_0018e8c4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_0018e8c8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000011u, 1, 1);
    }
L_0018e8cc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0018e96c;
        }
    }
L_0018e8d0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x180u);
    }
L_0018e8d4:;
    {
        cpu->r[0] = 0x00000028u;
    }
L_0018e8d8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_0018e8dc:;
    {
        cpu->r[14] = 0x0018e8e0u; fn_0018ba6c(cpu);
    }
L_0018e8e0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0018e8e4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_0018e8e8:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_0018e8ec:;
    {
        cpu->r[14] = 0x0018e8f0u; fn_001f46f8(cpu);
    }
L_0018e8f0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_0018e8f4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_0018e8f8:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[11]);
    }
L_0018e8fc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x180u);
    }
L_0018e900:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[8], 1, 1);
    }
L_0018e904:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018e928;
        }
    }
L_0018e908:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018e90c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018e928;
        }
    }
L_0018e910:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x16cu);
    }
L_0018e914:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_0018e918:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_0018e91c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0018e9d4;
        }
    }
L_0018e920:;
    {
        cpu->r[14] = 0x0018e924u; fn_002082a8(cpu);
    }
L_0018e924:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_0018e928:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_0018e92c:;
    {
        cpu->r[11] = rd32(cpu->r[3] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_0018e930:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_0018e934:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018e5bc;
        }
    }
L_0018e938:;
    {
        goto L_0018e704;
    }
L_0018e93c:;
    {
        cpu->r[1] = rd32(0x0018e944u + + 0xb8u);
    }
L_0018e940:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0018e944:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_0018e948:;
    {
        cpu->r[1] = add_flags(cpu, 0x0018e950u, cpu->r[1], 0, 0);
    }
L_0018e94c:;
    {
        cpu->r[14] = 0x0018e950u; imp_sprintf(cpu); /* sprintf */
    }
L_0018e950:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_0018e954:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0018e958:;
    {
        cpu->r[14] = 0x0018e95cu; fn_0018da68(cpu);
    }
L_0018e95c:;
    {
        cpu->r[1] = rd32(0x0018e964u + + 0x9cu);
    }
L_0018e960:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0018e964:;
    {
        cpu->r[1] = add_flags(cpu, 0x0018e96cu, cpu->r[1], 0, 0);
    }
L_0018e968:;
    {
        cpu->r[14] = 0x0018e96cu; fn_0018da68(cpu);
    }
L_0018e96c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x180u);
    }
L_0018e970:;
    {
        cpu->r[0] = 0x00000028u;
    }
L_0018e974:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_0018e978:;
    {
        cpu->r[14] = 0x0018e97cu; fn_0018ba6c(cpu);
    }
L_0018e97c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018e980:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_0018e984:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0018e988:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_0018e98c:;
    {
        cpu->r[14] = 0x0018e990u; fn_001f45e4(cpu);
    }
L_0018e990:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_0018e994:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0xcu);
    }
L_0018e998:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[9], 2, 2u, &shc), cpu->r[11]);
    }
L_0018e99c:;
    {
        goto L_0018e8fc;
    }
L_0018e9a0:;
    {
        cpu->r[1] = rd32(0x0018e9a8u + + 0x5cu);
    }
L_0018e9a4:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_0018e9a8:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0018e9ac:;
    {
        cpu->r[1] = add_flags(cpu, 0x0018e9b4u, cpu->r[1], 0, 0);
    }
L_0018e9b0:;
    {
        cpu->r[14] = 0x0018e9b4u; imp_sprintf(cpu); /* sprintf */
    }
L_0018e9b4:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_0018e9b8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0018e9bc:;
    {
        cpu->r[14] = 0x0018e9c0u; fn_0018da68(cpu);
    }
L_0018e9c0:;
    {
        cpu->r[1] = rd32(0x0018e9c8u + + 0x40u);
    }
L_0018e9c4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0018e9c8:;
    {
        cpu->r[1] = add_flags(cpu, 0x0018e9d0u, cpu->r[1], 0, 0);
    }
L_0018e9cc:;
    {
        cpu->r[14] = 0x0018e9d0u; fn_0018da68(cpu);
    }
L_0018e9d0:;
    {
        goto L_0018e8d0;
    }
L_0018e9d4:;
    {
        cpu->r[14] = 0x0018e9d8u; fn_0018ba20(cpu);
    }
L_0018e9d8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_0018e9dc:;
    {
        goto L_0018e928;
    }
}

/* _ZN18CarSoundParametersC2Ev @ 0018ea0c (arm) */
void fn_0018ea0c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018ea0c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN18CarSoundParametersC1Ev @ 0018ea10 (arm) */
void fn_0018ea10(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018ea10:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN18CarSoundParametersD2Ev @ 0018ea14 (arm) */
void fn_0018ea14(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018ea14:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN18CarSoundParametersD1Ev @ 0018ea18 (arm) */
void fn_0018ea18(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018ea18:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16CarSoundSettingsC2Ev @ 0018ea1c (arm) */
void fn_0018ea1c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018ea1c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0018ea20:;
    {
        cpu->r[1] = 0x00000014u;
    }
L_0018ea24:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0018ea2cu + + 0x80u);
    }
L_0018ea28:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_0018ea2c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0018ea30:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0018ea34:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0018ea3cu + + 0x74u);
    }
L_0018ea38:;
    {
        wr8(cpu->r[0] + + 0xd8u, cpu->r[2]);
    }
L_0018ea3c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x6cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0018ea40:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_0018ea44:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0018ea4cu + + 0x68u);
    }
L_0018ea48:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0018ea4c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x70u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0018ea50:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[2]);
    }
L_0018ea54:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0018ea5cu + + 0x5cu);
    }
L_0018ea58:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[2]);
    }
L_0018ea5c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xa0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0018ea60:;
    {
        wr32(cpu->r[0] + + 0x30u, cpu->r[2]);
    }
L_0018ea64:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0018ea6cu + + 0x50u);
    }
L_0018ea68:;
    {
        wr32(cpu->r[0] + + 0x34u, cpu->r[2]);
    }
L_0018ea6c:;
    {
        wr8(cpu->r[0] + + 0x74u, cpu->r[1]);
    }
L_0018ea70:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xdcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0018ea74:;
    {
        wr32(cpu->r[0] + + 0x3cu, cpu->r[2]);
    }
L_0018ea78:;
    {
        wr32(cpu->r[0] + + 0x44u, cpu->r[2]);
    }
L_0018ea7c:;
    {
        wr32(cpu->r[0] + + 0x48u, cpu->r[2]);
    }
L_0018ea80:;
    {
        wr32(cpu->r[0] + + 0x4cu, cpu->r[2]);
    }
L_0018ea84:;
    {
        wr8(cpu->r[0] + + 0x51u, cpu->r[2]);
    }
L_0018ea88:;
    {
        wr8(cpu->r[0] + + 0x52u, cpu->r[2]);
    }
L_0018ea8c:;
    {
        wr8(cpu->r[0] + + 0x8cu, cpu->r[2]);
    }
L_0018ea90:;
    {
        wr8(cpu->r[0] + + 0x8du, cpu->r[2]);
    }
L_0018ea94:;
    {
        wr8(cpu->r[0] + + 0x94u, cpu->r[2]);
    }
L_0018ea98:;
    {
        wr32(cpu->r[0] + + 0xccu, cpu->r[2]);
    }
L_0018ea9c:;
    {
        wr32(cpu->r[0] + + 0xd0u, cpu->r[2]);
    }
L_0018eaa0:;
    {
        wr8(cpu->r[0] + + 0xb4u, cpu->r[2]);
    }
L_0018eaa4:;
    {
        wr32(cpu->r[0] + + 0xc8u, cpu->r[2]);
    }
L_0018eaa8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN16CarSoundSettingsC1Ev @ 0018eac0 (arm) */
void fn_0018eac0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018eac0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0018eac4:;
    {
        cpu->r[1] = 0x00000014u;
    }
L_0018eac8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0018ead0u + + 0x80u);
    }
L_0018eacc:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_0018ead0:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0018ead4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0018ead8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0018eae0u + + 0x74u);
    }
L_0018eadc:;
    {
        wr8(cpu->r[0] + + 0xd8u, cpu->r[2]);
    }
L_0018eae0:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x6cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0018eae4:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_0018eae8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0018eaf0u + + 0x68u);
    }
L_0018eaec:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0018eaf0:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x70u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0018eaf4:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[2]);
    }
L_0018eaf8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0018eb00u + + 0x5cu);
    }
L_0018eafc:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[2]);
    }
L_0018eb00:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xa0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0018eb04:;
    {
        wr32(cpu->r[0] + + 0x30u, cpu->r[2]);
    }
L_0018eb08:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0018eb10u + + 0x50u);
    }
L_0018eb0c:;
    {
        wr32(cpu->r[0] + + 0x34u, cpu->r[2]);
    }
L_0018eb10:;
    {
        wr8(cpu->r[0] + + 0x74u, cpu->r[1]);
    }
L_0018eb14:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xdcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0018eb18:;
    {
        wr32(cpu->r[0] + + 0x3cu, cpu->r[2]);
    }
L_0018eb1c:;
    {
        wr32(cpu->r[0] + + 0x44u, cpu->r[2]);
    }
L_0018eb20:;
    {
        wr32(cpu->r[0] + + 0x48u, cpu->r[2]);
    }
L_0018eb24:;
    {
        wr32(cpu->r[0] + + 0x4cu, cpu->r[2]);
    }
L_0018eb28:;
    {
        wr8(cpu->r[0] + + 0x51u, cpu->r[2]);
    }
L_0018eb2c:;
    {
        wr8(cpu->r[0] + + 0x52u, cpu->r[2]);
    }
L_0018eb30:;
    {
        wr8(cpu->r[0] + + 0x8cu, cpu->r[2]);
    }
L_0018eb34:;
    {
        wr8(cpu->r[0] + + 0x8du, cpu->r[2]);
    }
L_0018eb38:;
    {
        wr8(cpu->r[0] + + 0x94u, cpu->r[2]);
    }
L_0018eb3c:;
    {
        wr32(cpu->r[0] + + 0xccu, cpu->r[2]);
    }
L_0018eb40:;
    {
        wr32(cpu->r[0] + + 0xd0u, cpu->r[2]);
    }
L_0018eb44:;
    {
        wr8(cpu->r[0] + + 0xb4u, cpu->r[2]);
    }
L_0018eb48:;
    {
        wr32(cpu->r[0] + + 0xc8u, cpu->r[2]);
    }
L_0018eb4c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN18TurboSoundSettingsC2Ev @ 0018eb64 (arm) */
void fn_0018eb64(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018eb64:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0018eb68:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0018eb70u + + 0x1cu);
    }
L_0018eb6c:;
    {
        wr32(cpu->r[0] + + 0x3cu, cpu->r[2]);
    }
L_0018eb70:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0018eb74:;
    {
        wr8(cpu->r[0], cpu->r[2]);
    }
L_0018eb78:;
    {
        wr8(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_0018eb7c:;
    {
        wr32(cpu->r[0] + + 0x40u, cpu->r[2]);
    }
L_0018eb80:;
    {
        wr32(cpu->r[0] + + 0x44u, cpu->r[2]);
    }
L_0018eb84:;
    {
        wr8(cpu->r[0] + + 0x28u, cpu->r[2]);
    }
L_0018eb88:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN18TurboSoundSettingsC1Ev @ 0018eb90 (arm) */
void fn_0018eb90(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018eb90:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0018eb94:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0018eb9cu + + 0x1cu);
    }
L_0018eb98:;
    {
        wr32(cpu->r[0] + + 0x3cu, cpu->r[2]);
    }
L_0018eb9c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0018eba0:;
    {
        wr8(cpu->r[0], cpu->r[2]);
    }
L_0018eba4:;
    {
        wr8(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_0018eba8:;
    {
        wr32(cpu->r[0] + + 0x40u, cpu->r[2]);
    }
L_0018ebac:;
    {
        wr32(cpu->r[0] + + 0x44u, cpu->r[2]);
    }
L_0018ebb0:;
    {
        wr8(cpu->r[0] + + 0x28u, cpu->r[2]);
    }
L_0018ebb4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN17CarSoundCallbacksC2Ev @ 0018ebbc (arm) */
void fn_0018ebbc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018ebbc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN17CarSoundCallbacksC1Ev @ 0018ebc0 (arm) */
void fn_0018ebc0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018ebc0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN17CarSoundCallbacksD2Ev @ 0018ebc4 (arm) */
void fn_0018ebc4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018ebc4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN17CarSoundCallbacksD1Ev @ 0018ebc8 (arm) */
void fn_0018ebc8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018ebc8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9SoundFadeC2Ev @ 0018ebcc (arm) */
void fn_0018ebcc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018ebcc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0018ebd0:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_0018ebd4:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_0018ebd8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9SoundFadeC1Ev @ 0018ebdc (arm) */
void fn_0018ebdc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018ebdc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0018ebe0:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_0018ebe4:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_0018ebe8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9SoundFadeD2Ev @ 0018ebec (arm) */
void fn_0018ebec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018ebec:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9SoundFadeD1Ev @ 0018ebf0 (arm) */
void fn_0018ebf0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018ebf0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9SoundFade19GetNbRemainingFadesEv @ 0018ebf4 (arm) */
void fn_0018ebf4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018ebf4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_0018ebf8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9SoundFade8GetStateEv @ 0018ebfc (arm) */
void fn_0018ebfc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018ebfc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_0018ec00:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9SoundFade9GetVolumeEv @ 0018ec04 (arm) */
void fn_0018ec04(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018ec04:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0018ec08:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9SoundFade9StartFadeEi @ 0018ec0c (arm) */
void fn_0018ec0c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018ec0c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x4u);
    }
L_0018ec10:;
    {
        cpu->r[3] = rd32(0x0018ec18u + + 0x70u);
    }
L_0018ec14:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0018ec18:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018ec20u, cpu->r[3], 0, 0);
    }
L_0018ec1c:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_0018ec20:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_0018ec24:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[1]);
    }
L_0018ec28:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018ec60;
        }
    }
L_0018ec2c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 1);
    }
L_0018ec30:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_0018ec34:;
    {
        cpu->r[2] = rd32(0x0018ec3cu + + 0x50u);
    }
L_0018ec38:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0018ec3c:;
    {
        cpu->r[2] = rd32(0x0018ec44u + + 0x4cu);
    }
L_0018ec40:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0018ec44:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_0018ec48:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0018ec4c:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_0018ec50:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0018ec54:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_0018ec58:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0018ec5c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0018ec60:;
    {
        cpu->r[2] = rd32(0x0018ec68u + + 0x24u);
    }
L_0018ec64:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0018ec68:;
    {
        cpu->r[2] = rd32(0x0018ec70u + + 0x20u);
    }
L_0018ec6c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0018ec70:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_0018ec74:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0018ec78:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_0018ec7c:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_0018ec80:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0018ec84:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9SoundFade6UpdateEv @ 0018ec94 (arm) */
void fn_0018ec94(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018ec94:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x4u);
    }
L_0018ec98:;
    {
        cpu->r[3] = rd32(0x0018eca0u + + 0x7cu);
    }
L_0018ec9c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_0018eca0:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_0018eca4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0018eca8:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018ecb0u, cpu->r[3], 0, 0);
    }
L_0018ecac:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_0018ecb0:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
        }
    }
L_0018ecb4:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
        }
    }
L_0018ecb8:;
    {
        if (cond_test(cpu, 12)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_0018ecbc:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x8u);
    }
L_0018ecc0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_0018ecc4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018ecec;
        }
    }
L_0018ecc8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 1);
    }
L_0018eccc:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_0018ecd0:;
    {
        cpu->r[1] = rd32(0x0018ecd8u + + 0x48u);
    }
L_0018ecd4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_0018ecd8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0018ecdc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0018ece0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_0018ece4:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0018ece8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0018ecec:;
    {
        cpu->r[1] = rd32(0x0018ecf4u + + 0x30u);
    }
L_0018ecf0:;
    {
        cpu->r[12] = rd32(0x0018ecf8u + + 0x28u);
    }
L_0018ecf4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_0018ecf8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_0018ecfc:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_0018ed00:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0018ed04:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_0018ed08:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0018ed0c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0018ed10:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_0018ed14:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0018ed18:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9CarSoundsC2Ev @ 0018ed28 (arm) */
void fn_0018ed28(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018ed28:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0018ed2c:;
    {
        wr32(cpu->r[0] + + 0x138u, cpu->r[2]);
    }
L_0018ed30:;
    {
        wr8(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_0018ed34:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0018ed38:;
    {
        wr32(cpu->r[0] + + 0x5cu, cpu->r[2]);
    }
L_0018ed3c:;
    {
        wr32(cpu->r[0] + + 0x60u, cpu->r[2]);
    }
L_0018ed40:;
    {
        wr32(cpu->r[0] + + 0x68u, cpu->r[2]);
    }
L_0018ed44:;
    {
        wr32(cpu->r[0] + + 0x6cu, cpu->r[2]);
    }
L_0018ed48:;
    {
        wr32(cpu->r[0] + + 0x70u, cpu->r[2]);
    }
L_0018ed4c:;
    {
        wr32(cpu->r[0] + + 0x80u, cpu->r[2]);
    }
L_0018ed50:;
    {
        wr32(cpu->r[0] + + 0x84u, cpu->r[2]);
    }
L_0018ed54:;
    {
        wr32(cpu->r[0] + + 0x8cu, cpu->r[2]);
    }
L_0018ed58:;
    {
        wr32(cpu->r[0] + + 0x90u, cpu->r[2]);
    }
L_0018ed5c:;
    {
        wr32(cpu->r[0] + + 0x94u, cpu->r[2]);
    }
L_0018ed60:;
    {
        wr32(cpu->r[0] + + 0x130u, cpu->r[2]);
    }
L_0018ed64:;
    {
        wr32(cpu->r[0] + + 0x134u, cpu->r[2]);
    }
L_0018ed68:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9CarSoundsC1Ev @ 0018ed6c (arm) */
void fn_0018ed6c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018ed6c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0018ed70:;
    {
        wr32(cpu->r[0] + + 0x138u, cpu->r[2]);
    }
L_0018ed74:;
    {
        wr8(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_0018ed78:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0018ed7c:;
    {
        wr32(cpu->r[0] + + 0x5cu, cpu->r[2]);
    }
L_0018ed80:;
    {
        wr32(cpu->r[0] + + 0x60u, cpu->r[2]);
    }
L_0018ed84:;
    {
        wr32(cpu->r[0] + + 0x68u, cpu->r[2]);
    }
L_0018ed88:;
    {
        wr32(cpu->r[0] + + 0x6cu, cpu->r[2]);
    }
L_0018ed8c:;
    {
        wr32(cpu->r[0] + + 0x70u, cpu->r[2]);
    }
L_0018ed90:;
    {
        wr32(cpu->r[0] + + 0x80u, cpu->r[2]);
    }
L_0018ed94:;
    {
        wr32(cpu->r[0] + + 0x84u, cpu->r[2]);
    }
L_0018ed98:;
    {
        wr32(cpu->r[0] + + 0x8cu, cpu->r[2]);
    }
L_0018ed9c:;
    {
        wr32(cpu->r[0] + + 0x90u, cpu->r[2]);
    }
L_0018eda0:;
    {
        wr32(cpu->r[0] + + 0x94u, cpu->r[2]);
    }
L_0018eda4:;
    {
        wr32(cpu->r[0] + + 0x130u, cpu->r[2]);
    }
L_0018eda8:;
    {
        wr32(cpu->r[0] + + 0x134u, cpu->r[2]);
    }
L_0018edac:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9CarSounds15FilterRPMValuesEi @ 0018edb0 (arm) */
void fn_0018edb0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018edb0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x38u);
    }
L_0018edb4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x40u);
    }
L_0018edb8:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_0018edbc:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[1];
    }
L_0018edc0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x3cu);
    }
L_0018edc4:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_0018edc8:;
    {
        vfp_vnmls(cpu, 15, 13, 14);
    }
L_0018edcc:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0018edd0:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0018edd4:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0018edd8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9CarSounds20GetCarHighRPMSoundIdEv @ 0018eddc (arm) */
void fn_0018eddc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018eddc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x5cu);
    }
L_0018ede0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x10u);
    }
L_0018ede4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9CarSounds17RegisterCallbacksEP17CarSoundCallbacks @ 0018ede8 (arm) */
void fn_0018ede8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018ede8:;
    {
        cpu->r[3] = rd32(0x0018edf0u + + 0x10u);
    }
L_0018edec:;
    {
        cpu->r[2] = rd32(0x0018edf4u + + 0x10u);
    }
L_0018edf0:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018edf8u, cpu->r[3], 0, 0);
    }
L_0018edf4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0018edf8:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_0018edfc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9CarSounds17RemoveTurboSoundsEv @ 0018ee08 (arm) */
void fn_0018ee08(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018ee08:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018ee0c:;
    {
        wr8(cpu->r[0] + + 0xe8u, cpu->r[3]);
    }
L_0018ee10:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9CarSounds17InterpolateLinearEiiiff @ 0018ee14 (arm) */
void fn_0018ee14(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018ee14:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13]);
    }
L_0018ee18:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0x4u);
    }
L_0018ee1c:;
    {
        vfp_vsub(cpu, 12, 12, 15);
    }
L_0018ee20:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
    }
L_0018ee24:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[2];
    }
L_0018ee28:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 0);
    }
L_0018ee2c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[1];
    }
L_0018ee30:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0018ee34:;
    {
        vfp_vdiv(cpu, 14, 12, 14);
    }
L_0018ee38:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0018ee3c:;
    {
        vfp_vmla(cpu, 15, 13, 14);
    }
L_0018ee40:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0018ee44:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9CarSounds18InterpolateLinearfEfffff @ 0018ee48 (arm) */
void fn_0018ee48(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018ee48:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13]);
    }
L_0018ee4c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[1];
    }
L_0018ee50:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[2];
    }
L_0018ee54:;
    {
        vfp_vsub(cpu, 13, 12, 14);
    }
L_0018ee58:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0x4u);
    }
L_0018ee5c:;
    {
        vfp_vsub(cpu, 12, 12, 15);
    }
L_0018ee60:;
    {
        vfp_vdiv(cpu, 13, 12, 13);
    }
L_0018ee64:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[3];
    }
L_0018ee68:;
    {
        vfp_vsub(cpu, 14, 12, 14);
    }
L_0018ee6c:;
    {
        vfp_vmla(cpu, 15, 14, 13);
    }
L_0018ee70:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0018ee74:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9CarSounds13StopAllSoundsEv @ 0018ee78 (arm) */
void fn_0018ee78(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018ee78:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x4u);
    }
L_0018ee7c:;
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
L_0018ee80:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018ee84:;
    {
        cpu->r[6] = rd32(0x0018ee8cu + + 0x408u);
    }
L_0018ee88:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018ee8c:;
    {
        cpu->r[6] = add_flags(cpu, 0x0018ee94u, cpu->r[6], 0, 0);
    }
L_0018ee90:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018ee94u)) return;
        }
    }
L_0018ee94:;
    {
        cpu->r[10] = rd32(0x0018ee9cu + + 0x3fcu);
    }
L_0018ee98:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_0018ee9c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0018eea0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018eea4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018eea8u)) return;
        }
    }
L_0018eea8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x58u);
    }
L_0018eeac:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0018eeb0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018ef00;
        }
    }
L_0018eeb4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0018eeb8:;
    {
        cpu->r[9] = (~0x00000000u);
    }
L_0018eebc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x60u);
    }
L_0018eec0:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[7] = v;
    }
L_0018eec4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_0018eec8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018eecc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0018eef4;
        }
    }
L_0018eed0:;
    {
        cpu->r[8] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_0018eed4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x5cu);
    }
L_0018eed8:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_0018eedc:;
    {
        cpu->r[0] = rd32(cpu->r[2] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_0018eee0:;
    {
        cpu->r[14] = 0x0018eee8u;
    }
L_0018eee4:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018eee8u)) return;
    }
L_0018eee8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018eeec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018f15c;
        }
    }
L_0018eef0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x58u);
    }
L_0018eef4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0018eef8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_0018eefc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0018eebc;
        }
    }
L_0018ef00:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x7cu);
    }
L_0018ef04:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0018ef08:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018ef58;
        }
    }
L_0018ef0c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0018ef10:;
    {
        cpu->r[9] = (~0x00000000u);
    }
L_0018ef14:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x84u);
    }
L_0018ef18:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[7] = v;
    }
L_0018ef1c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_0018ef20:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018ef24:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0018ef4c;
        }
    }
L_0018ef28:;
    {
        cpu->r[8] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_0018ef2c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x80u);
    }
L_0018ef30:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_0018ef34:;
    {
        cpu->r[0] = rd32(cpu->r[2] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_0018ef38:;
    {
        cpu->r[14] = 0x0018ef40u;
    }
L_0018ef3c:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018ef40u)) return;
    }
L_0018ef40:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018ef44:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018f114;
        }
    }
L_0018ef48:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x7cu);
    }
L_0018ef4c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0018ef50:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_0018ef54:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0018ef14;
        }
    }
L_0018ef58:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0xc8u);
    }
L_0018ef5c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018ef60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018ef8c;
        }
    }
L_0018ef64:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xd0u);
    }
L_0018ef68:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0018ef6c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0018ef8c;
        }
    }
L_0018ef70:;
    {
        cpu->r[5] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_0018ef74:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xccu);
    }
L_0018ef78:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0018ef7c:;
    {
        cpu->r[14] = 0x0018ef84u;
    }
L_0018ef80:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018ef84u)) return;
    }
L_0018ef84:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018ef88:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018f224;
        }
    }
L_0018ef8c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0xa0u);
    }
L_0018ef90:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018ef94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018efc0;
        }
    }
L_0018ef98:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xa8u);
    }
L_0018ef9c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0018efa0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0018efc0;
        }
    }
L_0018efa4:;
    {
        cpu->r[5] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_0018efa8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xa4u);
    }
L_0018efac:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0018efb0:;
    {
        cpu->r[14] = 0x0018efb8u;
    }
L_0018efb4:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018efb8u)) return;
    }
L_0018efb8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018efbc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018f1ec;
        }
    }
L_0018efc0:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0xd8u);
    }
L_0018efc4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018efc8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018eff4;
        }
    }
L_0018efcc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xe0u);
    }
L_0018efd0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0018efd4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0018eff4;
        }
    }
L_0018efd8:;
    {
        cpu->r[5] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_0018efdc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xdcu);
    }
L_0018efe0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0018efe4:;
    {
        cpu->r[14] = 0x0018efecu;
    }
L_0018efe8:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018efecu)) return;
    }
L_0018efec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018eff0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018f25c;
        }
    }
L_0018eff4:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0xe8u);
    }
L_0018eff8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018effc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018f000u)) return;
        }
    }
L_0018f000:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xfcu);
    }
L_0018f004:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0018f008:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0018f05c;
        }
    }
L_0018f00c:;
    {
        cpu->r[5] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_0018f010:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xf8u);
    }
L_0018f014:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0018f018:;
    {
        cpu->r[14] = 0x0018f020u;
    }
L_0018f01c:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018f020u)) return;
    }
L_0018f020:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018f024:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018f05c;
        }
    }
L_0018f028:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xf8u);
    }
L_0018f02c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0018f030:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xfcu);
    }
L_0018f034:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0018f038:;
    {
        cpu->r[14] = 0x0018f040u;
    }
L_0018f03c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018f040u)) return;
    }
L_0018f040:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0018f044:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xf8u);
    }
L_0018f048:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xfcu);
    }
L_0018f04c:;
    {
        cpu->r[14] = 0x0018f054u;
    }
L_0018f050:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018f054u)) return;
    }
L_0018f054:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0018f058:;
    {
        wr32(cpu->r[4] + + 0xfcu, cpu->r[3]);
    }
L_0018f05c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x11cu);
    }
L_0018f060:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0018f064:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0018f0b8;
        }
    }
L_0018f068:;
    {
        cpu->r[5] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_0018f06c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x118u);
    }
L_0018f070:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0018f074:;
    {
        cpu->r[14] = 0x0018f07cu;
    }
L_0018f078:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018f07cu)) return;
    }
L_0018f07c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018f080:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018f0b8;
        }
    }
L_0018f084:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x118u);
    }
L_0018f088:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0018f08c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x11cu);
    }
L_0018f090:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0018f094:;
    {
        cpu->r[14] = 0x0018f09cu;
    }
L_0018f098:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018f09cu)) return;
    }
L_0018f09c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0018f0a0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x118u);
    }
L_0018f0a4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x11cu);
    }
L_0018f0a8:;
    {
        cpu->r[14] = 0x0018f0b0u;
    }
L_0018f0ac:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018f0b0u)) return;
    }
L_0018f0b0:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0018f0b4:;
    {
        wr32(cpu->r[4] + + 0x11cu, cpu->r[3]);
    }
L_0018f0b8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x12cu);
    }
L_0018f0bc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0018f0c0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018f0c4u)) return;
        }
    }
L_0018f0c4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0018f0c8:;
    {
        cpu->r[9] = (~0x00000000u);
    }
L_0018f0cc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x134u);
    }
L_0018f0d0:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[7] = v;
    }
L_0018f0d4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_0018f0d8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018f0dc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0018f104;
        }
    }
L_0018f0e0:;
    {
        cpu->r[8] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_0018f0e4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x130u);
    }
L_0018f0e8:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_0018f0ec:;
    {
        cpu->r[0] = rd32(cpu->r[2] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_0018f0f0:;
    {
        cpu->r[14] = 0x0018f0f8u;
    }
L_0018f0f4:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018f0f8u)) return;
    }
L_0018f0f8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018f0fc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018f1a4;
        }
    }
L_0018f100:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x12cu);
    }
L_0018f104:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0018f108:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_0018f10c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0018f0cc;
        }
    }
L_0018f110:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018f114u)) return;
    }
L_0018f114:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x80u);
    }
L_0018f118:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0018f11c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x84u);
    }
L_0018f120:;
    {
        cpu->r[0] = rd32(cpu->r[1] + cpu->r[7]);
    }
L_0018f124:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_0018f128:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_0018f12c:;
    {
        cpu->r[14] = 0x0018f134u;
    }
L_0018f130:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018f134u)) return;
    }
L_0018f134:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x80u);
    }
L_0018f138:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x84u);
    }
L_0018f13c:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_0018f140:;
    {
        cpu->r[0] = rd32(cpu->r[1] + cpu->r[7]);
    }
L_0018f144:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[7]);
    }
L_0018f148:;
    {
        cpu->r[14] = 0x0018f150u;
    }
L_0018f14c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018f150u)) return;
    }
L_0018f150:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x84u);
    }
L_0018f154:;
    {
        wr32(cpu->r[3] + cpu->r[7], cpu->r[9]);
    }
L_0018f158:;
    {
        goto L_0018ef48;
    }
L_0018f15c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x5cu);
    }
L_0018f160:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0018f164:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x60u);
    }
L_0018f168:;
    {
        cpu->r[0] = rd32(cpu->r[1] + cpu->r[7]);
    }
L_0018f16c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_0018f170:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_0018f174:;
    {
        cpu->r[14] = 0x0018f17cu;
    }
L_0018f178:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018f17cu)) return;
    }
L_0018f17c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x5cu);
    }
L_0018f180:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x60u);
    }
L_0018f184:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_0018f188:;
    {
        cpu->r[0] = rd32(cpu->r[1] + cpu->r[7]);
    }
L_0018f18c:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[7]);
    }
L_0018f190:;
    {
        cpu->r[14] = 0x0018f198u;
    }
L_0018f194:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018f198u)) return;
    }
L_0018f198:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x60u);
    }
L_0018f19c:;
    {
        wr32(cpu->r[3] + cpu->r[7], cpu->r[9]);
    }
L_0018f1a0:;
    {
        goto L_0018eef0;
    }
L_0018f1a4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x130u);
    }
L_0018f1a8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0018f1ac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x134u);
    }
L_0018f1b0:;
    {
        cpu->r[0] = rd32(cpu->r[1] + cpu->r[7]);
    }
L_0018f1b4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_0018f1b8:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_0018f1bc:;
    {
        cpu->r[14] = 0x0018f1c4u;
    }
L_0018f1c0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018f1c4u)) return;
    }
L_0018f1c4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x130u);
    }
L_0018f1c8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x134u);
    }
L_0018f1cc:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_0018f1d0:;
    {
        cpu->r[0] = rd32(cpu->r[1] + cpu->r[7]);
    }
L_0018f1d4:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[7]);
    }
L_0018f1d8:;
    {
        cpu->r[14] = 0x0018f1e0u;
    }
L_0018f1dc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018f1e0u)) return;
    }
L_0018f1e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x134u);
    }
L_0018f1e4:;
    {
        wr32(cpu->r[3] + cpu->r[7], cpu->r[9]);
    }
L_0018f1e8:;
    {
        goto L_0018f100;
    }
L_0018f1ec:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xa4u);
    }
L_0018f1f0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0018f1f4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xa8u);
    }
L_0018f1f8:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0018f1fc:;
    {
        cpu->r[14] = 0x0018f204u;
    }
L_0018f200:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018f204u)) return;
    }
L_0018f204:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0018f208:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xa4u);
    }
L_0018f20c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xa8u);
    }
L_0018f210:;
    {
        cpu->r[14] = 0x0018f218u;
    }
L_0018f214:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018f218u)) return;
    }
L_0018f218:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0018f21c:;
    {
        wr32(cpu->r[4] + + 0xa8u, cpu->r[3]);
    }
L_0018f220:;
    {
        goto L_0018efc0;
    }
L_0018f224:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xccu);
    }
L_0018f228:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0018f22c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xd0u);
    }
L_0018f230:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0018f234:;
    {
        cpu->r[14] = 0x0018f23cu;
    }
L_0018f238:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018f23cu)) return;
    }
L_0018f23c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0018f240:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xccu);
    }
L_0018f244:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xd0u);
    }
L_0018f248:;
    {
        cpu->r[14] = 0x0018f250u;
    }
L_0018f24c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018f250u)) return;
    }
L_0018f250:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0018f254:;
    {
        wr32(cpu->r[4] + + 0xd0u, cpu->r[3]);
    }
L_0018f258:;
    {
        goto L_0018ef8c;
    }
L_0018f25c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xdcu);
    }
L_0018f260:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0018f264:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xe0u);
    }
L_0018f268:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0018f26c:;
    {
        cpu->r[14] = 0x0018f274u;
    }
L_0018f270:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018f274u)) return;
    }
L_0018f274:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0018f278:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xdcu);
    }
L_0018f27c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xe0u);
    }
L_0018f280:;
    {
        cpu->r[14] = 0x0018f288u;
    }
L_0018f284:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018f288u)) return;
    }
L_0018f288:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0018f28c:;
    {
        wr32(cpu->r[4] + + 0xe0u, cpu->r[3]);
    }
L_0018f290:;
    {
        goto L_0018eff4;
    }
}

/* _ZN9CarSounds17UpdateClutchSoundEv @ 0018f29c (arm) */
void fn_0018f29c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018f29c:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x54u);
    }
L_0018f2a0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0018f2a4:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0018f2a8:;
    {
        cpu->r[5] = rd32(0x0018f2b0u + + 0x74u);
    }
L_0018f2ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018f2b0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018f2b4:;
    {
        cpu->r[5] = add_flags(cpu, 0x0018f2bcu, cpu->r[5], 0, 0);
    }
L_0018f2b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018f2c4;
        }
    }
L_0018f2bc:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0018f2c0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018f2c4u)) return;
    }
L_0018f2c4:;
    {
        cpu->r[3] = rd32(0x0018f2ccu + + 0x5cu);
    }
L_0018f2c8:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[0] + + 0x14u);
    }
L_0018f2cc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xe0u);
    }
L_0018f2d0:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[4] + + 0xe4u);
    }
L_0018f2d4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xdcu);
    }
L_0018f2d8:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0018f2dc:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0018f2e0:;
    {
        cpu->r[14] = 0x0018f2e8u;
    }
L_0018f2e4:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018f2e8u)) return;
    }
L_0018f2e8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018f2ec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018f2bc;
        }
    }
L_0018f2f0:;
    {
        vfp_vmul(cpu, 14, 17, 16);
    }
L_0018f2f4:;
    {
        cpu->r[3] = rd32(0x0018f2fcu + + 0x30u);
    }
L_0018f2f8:;
    {
        cpu->r[12] = rd32(cpu->r[6]);
    }
L_0018f2fc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xdcu);
    }
L_0018f300:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0018f304:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_0018f308:;
    {
        cpu->r[3] = 0x3f800000u;
    }
L_0018f30c:;
    {
        vfp_vmul(cpu, 13, 14, 15);
    }
L_0018f310:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,13);
    }
L_0018f314:;
    {
        cpu->r[14] = 0x0018f31cu;
    }
L_0018f318:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018f31cu)) return;
    }
L_0018f31c:;
    {
        wr32(cpu->r[4] + + 0xe0u, cpu->r[0]);
    }
L_0018f320:;
    {
        goto L_0018f2bc;
    }
}

/* _ZN9CarSounds21UpdateOffEngineSoundsEv @ 0018f330 (arm) */
void fn_0018f330(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018f330:;
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
L_0018f334:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_0018f338:;
    {
        cpu->r[1] = rd32(0x0018f340u + + 0x394u);
    }
L_0018f33c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_0018f340:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018f344:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x98u);
    }
L_0018f348:;
    {
        cpu->r[1] = add_flags(cpu, 0x0018f350u, cpu->r[1], 0, 0);
    }
L_0018f34c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_0018f350:;
    {
        cpu->r[14] = 0x0018f354u; fn_0018ebfc(cpu);
    }
L_0018f354:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_0018f358:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x98u);
    }
L_0018f35c:;
    {
        cpu->r[14] = 0x0018f360u; fn_0018ebf4(cpu);
    }
L_0018f360:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018f364:;
    {
        if (cond_test(cpu, 1)) {
        sub_flags(cpu, cpu->r[10], 0x00000002u, 1, 1);
        }
    }
L_0018f368:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018f418;
        }
    }
L_0018f36c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x7cu);
    }
L_0018f370:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018f374:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018f400;
        }
    }
L_0018f378:;
    {
        cpu->r[2] = rd32(0x0018f380u + + 0x358u);
    }
L_0018f37c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0018f380:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_0018f384:;
    {
        cpu->r[9] = (~0x00000000u);
    }
L_0018f388:;
    {
        cpu->r[11] = cpu->r[5];
    }
L_0018f38c:;
    {
        cpu->r[8] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0018f390:;
    {
        goto L_0018f3a4;
    }
L_0018f394:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x7cu);
    }
L_0018f398:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0018f39c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0018f3a0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018f400;
        }
    }
L_0018f3a4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x80u);
    }
L_0018f3a8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x84u);
    }
L_0018f3ac:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_0018f3b0:;
    {
        cpu->r[7] = rd32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_0018f3b4:;
    {
        cpu->r[6] = rd32(cpu->r[2] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_0018f3b8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0018f3bc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0018f3c0:;
    {
        cpu->r[14] = 0x0018f3c8u;
    }
L_0018f3c4:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018f3c8u)) return;
    }
L_0018f3c8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018f3cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018f394;
        }
    }
L_0018f3d0:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_0018f3d4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0018f3d8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0018f3dc:;
    {
        cpu->r[14] = 0x0018f3e4u;
    }
L_0018f3e0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018f3e4u)) return;
    }
L_0018f3e4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x84u);
    }
L_0018f3e8:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[9]);
    }
L_0018f3ec:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0018f3f0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x7cu);
    }
L_0018f3f4:;
    {
        wr32(cpu->r[4] + + 0x9cu, cpu->r[11]);
    }
L_0018f3f8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0018f3fc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0018f3a4;
        }
    }
L_0018f400:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x9cu);
    }
L_0018f404:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0018f408:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018f45c;
        }
    }
L_0018f40c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_0018f410:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_0018f414:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018f418u)) return;
    }
L_0018f418:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000001u, 1, 1);
    }
L_0018f41c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018f400;
        }
    }
L_0018f420:;
    {
        cpu->r[3] = rd32(0x0018f428u + + 0x2b4u);
    }
L_0018f424:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_0018f428:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_0018f42c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0018f430:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0018f434:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x9cu, cpu->r[10]);
        }
    }
L_0018f438:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018f400;
        }
    }
L_0018f43c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x98u);
    }
L_0018f440:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x88u);
    }
L_0018f444:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x14u);
    }
L_0018f448:;
    {
        vfp_vmul(cpu, 16, 14, 15);
    }
L_0018f44c:;
    {
        cpu->r[14] = 0x0018f450u; fn_0018ec04(cpu);
    }
L_0018f450:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_0018f454:;
    {
        vfp_vmul(cpu, 17, 16, 13);
    }
L_0018f458:;
    {
        goto L_0018f470;
    }
L_0018f45c:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0018f460:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018f43c;
        }
    }
L_0018f464:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x88u);
    }
L_0018f468:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x14u);
    }
L_0018f46c:;
    {
        vfp_vmul(cpu, 17, 14, 15);
    }
L_0018f470:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x7cu);
    }
L_0018f474:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018f478:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018f40c;
        }
    }
L_0018f47c:;
    {
        cpu->r[1] = rd32(0x0018f484u + + 0x254u);
    }
L_0018f480:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0018f484:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_0018f488:;
    {
        cpu->r[11] = 0x00000004u;
    }
L_0018f48c:;
    {
        cpu->r[2] = rd32(0x0018f494u + + 0x24cu);
    }
L_0018f490:;
    {
        *vfp_s(cpu, 18) = *(float*)G(0x0018f498u + + 0x238u);
    }
L_0018f494:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_0018f498:;
    {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[1]);
    }
L_0018f49c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[2]);
    }
L_0018f4a0:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[5]);
    }
L_0018f4a4:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[12]);
    }
L_0018f4a8:;
    {
        goto L_0018f53c;
    }
L_0018f4ac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1cu);
    }
L_0018f4b0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[10], cpu->r[9], 1, 0);
    }
L_0018f4b4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0018f4b8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0018f64c;
        }
    }
L_0018f4bc:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[8], cpu->r[9], 0, 0);
    }
L_0018f4c0:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_0018f4c4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0018f64c;
        }
    }
L_0018f4c8:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x1cu);
    }
L_0018f4cc:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0018f4d0:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[3];
    }
L_0018f4d4:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_0018f4d8:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0018f4dc:;
    {
        vfp_vdiv(cpu, 16, 14, 15);
    }
L_0018f4e0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018f5d4;
        }
    }
L_0018f4e4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0018f4ecu + + 0x1e4u);
    }
L_0018f4e8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_0018f4ec:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0018f4f0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_0018f4f4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0018f4f8:;
    {
        cpu->r[10] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0018f4fc:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0018f500:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0018f504:;
    {
        cpu->r[14] = 0x0018f50cu;
    }
L_0018f508:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018f50cu)) return;
    }
L_0018f50c:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0018f510:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0018f514:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0018f518:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,16);
    }
L_0018f51c:;
    {
        cpu->r[14] = 0x0018f524u;
    }
L_0018f520:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018f524u)) return;
    }
L_0018f524:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x7cu);
    }
L_0018f528:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0018f52c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000004u, 0, 0);
    }
L_0018f530:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[8]);
    }
L_0018f534:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0018f538:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018f40c;
        }
    }
L_0018f53c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8cu);
    }
L_0018f540:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0018f544:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0018f548:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x94u);
    }
L_0018f54c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x90u);
    }
L_0018f550:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[14] = v;
    }
L_0018f554:;
    {
        cpu->r[1] = rd32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_0018f558:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x80u);
    }
L_0018f55c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x84u);
    }
L_0018f560:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_0018f564:;
    {
        cpu->r[10] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_0018f568:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = rd32(cpu->r[4] + + 0x18u);
        }
    }
L_0018f56c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[11]);
        }
    }
L_0018f570:;
    {
        cpu->r[8] = rd32(cpu->r[2] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_0018f574:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_0018f578:;
    {
        cpu->r[6] = rd32(cpu->r[12] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_0018f57c:;
    {
        cpu->r[7] = rd32(cpu->r[0] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_0018f580:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
        }
    }
L_0018f584:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0018f588:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
        }
    }
L_0018f58c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0018f590:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[14]);
    }
L_0018f594:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_0018f598:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x10u);
    }
L_0018f59c:;
    {
        cpu->r[14] = 0x0018f5a4u;
    }
L_0018f5a0:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018f5a4u)) return;
    }
L_0018f5a4:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018f5a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018f4ac;
        }
    }
L_0018f5ac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1cu);
    }
L_0018f5b0:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_0018f5b4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0018f524;
        }
    }
L_0018f5b8:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_0018f5bc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0018f524;
        }
    }
L_0018f5c0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x1cu);
    }
L_0018f5c4:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[3];
    }
L_0018f5c8:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0018f5cc:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0018f5d0:;
    {
        vfp_vdiv(cpu, 16, 14, 15);
    }
L_0018f5d4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_0018f5d8:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[3], 1, 1);
    }
L_0018f5dc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0018f680;
        }
    }
L_0018f5e0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_0018f5e4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_0018f5e8:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,15) = *vfp_s(cpu,17);
        }
    }
L_0018f5ec:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0018f5fc;
        }
    }
L_0018f5f0:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_0018f5f4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0018f6a8;
        }
    }
L_0018f5f8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0018f600u + + 0xd0u);
    }
L_0018f5fc:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0018f600:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018f4e8;
        }
    }
L_0018f604:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x10u);
    }
L_0018f608:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0018f60c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_0018f610:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,16);
    }
L_0018f614:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x84u);
    }
L_0018f618:;
    {
        cpu->r[1] = rd32(cpu->r[14] + cpu->r[12]);
    }
L_0018f61c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0018f620:;
    {
        cpu->r[2] = rd32(cpu->r[14] + cpu->r[12]);
    }
L_0018f624:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2]);
    }
L_0018f628:;
    {
        vfp_vmul(cpu, 13, 15, 14);
    }
L_0018f62c:;
    {
        cpu->r[12] = rd32(cpu->r[1]);
    }
L_0018f630:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0018f634:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,13);
    }
L_0018f638:;
    {
        cpu->r[14] = 0x0018f640u;
    }
L_0018f63c:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018f640u)) return;
    }
L_0018f640:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_0018f644:;
    {
        wr32(cpu->r[6] + cpu->r[1], cpu->r[0]);
    }
L_0018f648:;
    {
        goto L_0018f524;
    }
L_0018f64c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x10u);
    }
L_0018f650:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0018f654:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_0018f658:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0018f65c:;
    {
        cpu->r[3] = rd32(cpu->r[14] + cpu->r[12]);
    }
L_0018f660:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0018f664:;
    {
        cpu->r[14] = 0x0018f66cu;
    }
L_0018f668:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018f66cu)) return;
    }
L_0018f66c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x84u);
    }
L_0018f670:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_0018f674:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_0018f678:;
    {
        wr32(cpu->r[3] + cpu->r[1], cpu->r[2]);
    }
L_0018f67c:;
    {
        goto L_0018f524;
    }
L_0018f680:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_0018f684:;
    {
        cpu->r[2] = cpu->r[14];
    }
L_0018f688:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018f68c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_0018f690:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_0018f694:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_0018f698:;
    {
        cpu->r[14] = 0x0018f69cu; fn_0018ee14(cpu);
    }
L_0018f69c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_0018f6a0:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_0018f6a4:;
    {
        goto L_0018f5fc;
    }
L_0018f6a8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_0018f6ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018f6b0:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0018f6b4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_0018f6b8:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_0018f6bc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_0018f6c0:;
    {
        cpu->r[14] = 0x0018f6c4u; fn_0018ee14(cpu);
    }
L_0018f6c4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_0018f6c8:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_0018f6cc:;
    {
        goto L_0018f5fc;
    }
}

/* _ZN9CarSounds20UpdateOnEngineSoundsEv @ 0018f6e4 (arm) */
void fn_0018f6e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018f6e4:;
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
L_0018f6e8:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_0018f6ec:;
    {
        cpu->r[1] = rd32(0x0018f6f4u + + 0x394u);
    }
L_0018f6f0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_0018f6f4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018f6f8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x74u);
    }
L_0018f6fc:;
    {
        cpu->r[1] = add_flags(cpu, 0x0018f704u, cpu->r[1], 0, 0);
    }
L_0018f700:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_0018f704:;
    {
        cpu->r[14] = 0x0018f708u; fn_0018ebfc(cpu);
    }
L_0018f708:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_0018f70c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x74u);
    }
L_0018f710:;
    {
        cpu->r[14] = 0x0018f714u; fn_0018ebf4(cpu);
    }
L_0018f714:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018f718:;
    {
        if (cond_test(cpu, 1)) {
        sub_flags(cpu, cpu->r[10], 0x00000002u, 1, 1);
        }
    }
L_0018f71c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018f7cc;
        }
    }
L_0018f720:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x58u);
    }
L_0018f724:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018f728:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018f7b4;
        }
    }
L_0018f72c:;
    {
        cpu->r[2] = rd32(0x0018f734u + + 0x358u);
    }
L_0018f730:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0018f734:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_0018f738:;
    {
        cpu->r[9] = (~0x00000000u);
    }
L_0018f73c:;
    {
        cpu->r[11] = cpu->r[5];
    }
L_0018f740:;
    {
        cpu->r[8] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0018f744:;
    {
        goto L_0018f758;
    }
L_0018f748:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x58u);
    }
L_0018f74c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0018f750:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0018f754:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018f7b4;
        }
    }
L_0018f758:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x5cu);
    }
L_0018f75c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x60u);
    }
L_0018f760:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_0018f764:;
    {
        cpu->r[7] = rd32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_0018f768:;
    {
        cpu->r[6] = rd32(cpu->r[2] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_0018f76c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0018f770:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0018f774:;
    {
        cpu->r[14] = 0x0018f77cu;
    }
L_0018f778:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018f77cu)) return;
    }
L_0018f77c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018f780:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018f748;
        }
    }
L_0018f784:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_0018f788:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0018f78c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0018f790:;
    {
        cpu->r[14] = 0x0018f798u;
    }
L_0018f794:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018f798u)) return;
    }
L_0018f798:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x60u);
    }
L_0018f79c:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[9]);
    }
L_0018f7a0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0018f7a4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x58u);
    }
L_0018f7a8:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[11]);
    }
L_0018f7ac:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0018f7b0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0018f758;
        }
    }
L_0018f7b4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x78u);
    }
L_0018f7b8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0018f7bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018f810;
        }
    }
L_0018f7c0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_0018f7c4:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_0018f7c8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018f7ccu)) return;
    }
L_0018f7cc:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000001u, 1, 1);
    }
L_0018f7d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018f7b4;
        }
    }
L_0018f7d4:;
    {
        cpu->r[3] = rd32(0x0018f7dcu + + 0x2b4u);
    }
L_0018f7d8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_0018f7dc:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_0018f7e0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0018f7e4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0018f7e8:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x78u, cpu->r[10]);
        }
    }
L_0018f7ec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018f7b4;
        }
    }
L_0018f7f0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x74u);
    }
L_0018f7f4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x64u);
    }
L_0018f7f8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x14u);
    }
L_0018f7fc:;
    {
        vfp_vmul(cpu, 16, 14, 15);
    }
L_0018f800:;
    {
        cpu->r[14] = 0x0018f804u; fn_0018ec04(cpu);
    }
L_0018f804:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_0018f808:;
    {
        vfp_vmul(cpu, 17, 16, 13);
    }
L_0018f80c:;
    {
        goto L_0018f824;
    }
L_0018f810:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0018f814:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018f7f0;
        }
    }
L_0018f818:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x64u);
    }
L_0018f81c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x14u);
    }
L_0018f820:;
    {
        vfp_vmul(cpu, 17, 14, 15);
    }
L_0018f824:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x58u);
    }
L_0018f828:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018f82c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018f7c0;
        }
    }
L_0018f830:;
    {
        cpu->r[1] = rd32(0x0018f838u + + 0x254u);
    }
L_0018f834:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0018f838:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_0018f83c:;
    {
        cpu->r[11] = 0x00000004u;
    }
L_0018f840:;
    {
        cpu->r[2] = rd32(0x0018f848u + + 0x24cu);
    }
L_0018f844:;
    {
        *vfp_s(cpu, 18) = *(float*)G(0x0018f84cu + + 0x238u);
    }
L_0018f848:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_0018f84c:;
    {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[1]);
    }
L_0018f850:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[2]);
    }
L_0018f854:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[5]);
    }
L_0018f858:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[12]);
    }
L_0018f85c:;
    {
        goto L_0018f8f0;
    }
L_0018f860:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1cu);
    }
L_0018f864:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[10], cpu->r[9], 1, 0);
    }
L_0018f868:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0018f86c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0018fa00;
        }
    }
L_0018f870:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[8], cpu->r[9], 0, 0);
    }
L_0018f874:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_0018f878:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0018fa00;
        }
    }
L_0018f87c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x1cu);
    }
L_0018f880:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0018f884:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[3];
    }
L_0018f888:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_0018f88c:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0018f890:;
    {
        vfp_vdiv(cpu, 16, 14, 15);
    }
L_0018f894:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018f988;
        }
    }
L_0018f898:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0018f8a0u + + 0x1e4u);
    }
L_0018f89c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_0018f8a0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0018f8a4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_0018f8a8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0018f8ac:;
    {
        cpu->r[10] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0018f8b0:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0018f8b4:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0018f8b8:;
    {
        cpu->r[14] = 0x0018f8c0u;
    }
L_0018f8bc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018f8c0u)) return;
    }
L_0018f8c0:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0018f8c4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0018f8c8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0018f8cc:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,16);
    }
L_0018f8d0:;
    {
        cpu->r[14] = 0x0018f8d8u;
    }
L_0018f8d4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018f8d8u)) return;
    }
L_0018f8d8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x58u);
    }
L_0018f8dc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0018f8e0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000004u, 0, 0);
    }
L_0018f8e4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[8]);
    }
L_0018f8e8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0018f8ec:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018f7c0;
        }
    }
L_0018f8f0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x68u);
    }
L_0018f8f4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0018f8f8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0018f8fc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x70u);
    }
L_0018f900:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x6cu);
    }
L_0018f904:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[14] = v;
    }
L_0018f908:;
    {
        cpu->r[1] = rd32(cpu->r[1] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_0018f90c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x5cu);
    }
L_0018f910:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x60u);
    }
L_0018f914:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_0018f918:;
    {
        cpu->r[10] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_0018f91c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = rd32(cpu->r[4] + + 0x18u);
        }
    }
L_0018f920:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[11]);
        }
    }
L_0018f924:;
    {
        cpu->r[8] = rd32(cpu->r[2] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_0018f928:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_0018f92c:;
    {
        cpu->r[6] = rd32(cpu->r[12] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_0018f930:;
    {
        cpu->r[7] = rd32(cpu->r[0] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_0018f934:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
        }
    }
L_0018f938:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0018f93c:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
        }
    }
L_0018f940:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0018f944:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[14]);
    }
L_0018f948:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_0018f94c:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x10u);
    }
L_0018f950:;
    {
        cpu->r[14] = 0x0018f958u;
    }
L_0018f954:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018f958u)) return;
    }
L_0018f958:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018f95c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018f860;
        }
    }
L_0018f960:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1cu);
    }
L_0018f964:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_0018f968:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0018f8d8;
        }
    }
L_0018f96c:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_0018f970:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0018f8d8;
        }
    }
L_0018f974:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x1cu);
    }
L_0018f978:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[3];
    }
L_0018f97c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0018f980:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0018f984:;
    {
        vfp_vdiv(cpu, 16, 14, 15);
    }
L_0018f988:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_0018f98c:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[3], 1, 1);
    }
L_0018f990:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0018fa34;
        }
    }
L_0018f994:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_0018f998:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_0018f99c:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,15) = *vfp_s(cpu,17);
        }
    }
L_0018f9a0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0018f9b0;
        }
    }
L_0018f9a4:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_0018f9a8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0018fa5c;
        }
    }
L_0018f9ac:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0018f9b4u + + 0xd0u);
    }
L_0018f9b0:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0018f9b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018f89c;
        }
    }
L_0018f9b8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x10u);
    }
L_0018f9bc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0018f9c0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_0018f9c4:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,16);
    }
L_0018f9c8:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x60u);
    }
L_0018f9cc:;
    {
        cpu->r[1] = rd32(cpu->r[14] + cpu->r[12]);
    }
L_0018f9d0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0018f9d4:;
    {
        cpu->r[2] = rd32(cpu->r[14] + cpu->r[12]);
    }
L_0018f9d8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2]);
    }
L_0018f9dc:;
    {
        vfp_vmul(cpu, 13, 15, 14);
    }
L_0018f9e0:;
    {
        cpu->r[12] = rd32(cpu->r[1]);
    }
L_0018f9e4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0018f9e8:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,13);
    }
L_0018f9ec:;
    {
        cpu->r[14] = 0x0018f9f4u;
    }
L_0018f9f0:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018f9f4u)) return;
    }
L_0018f9f4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_0018f9f8:;
    {
        wr32(cpu->r[6] + cpu->r[1], cpu->r[0]);
    }
L_0018f9fc:;
    {
        goto L_0018f8d8;
    }
L_0018fa00:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x10u);
    }
L_0018fa04:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0018fa08:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_0018fa0c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0018fa10:;
    {
        cpu->r[3] = rd32(cpu->r[14] + cpu->r[12]);
    }
L_0018fa14:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0018fa18:;
    {
        cpu->r[14] = 0x0018fa20u;
    }
L_0018fa1c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018fa20u)) return;
    }
L_0018fa20:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x60u);
    }
L_0018fa24:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_0018fa28:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_0018fa2c:;
    {
        wr32(cpu->r[3] + cpu->r[1], cpu->r[2]);
    }
L_0018fa30:;
    {
        goto L_0018f8d8;
    }
L_0018fa34:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_0018fa38:;
    {
        cpu->r[2] = cpu->r[14];
    }
L_0018fa3c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018fa40:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_0018fa44:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_0018fa48:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_0018fa4c:;
    {
        cpu->r[14] = 0x0018fa50u; fn_0018ee14(cpu);
    }
L_0018fa50:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_0018fa54:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_0018fa58:;
    {
        goto L_0018f9b0;
    }
L_0018fa5c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_0018fa60:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018fa64:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0018fa68:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_0018fa6c:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_0018fa70:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_0018fa74:;
    {
        cpu->r[14] = 0x0018fa78u; fn_0018ee14(cpu);
    }
L_0018fa78:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_0018fa7c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_0018fa80:;
    {
        goto L_0018f9b0;
    }
}

/* _ZN9CarSounds17UpdateRumbleSoundEv @ 0018fa98 (arm) */
void fn_0018fa98(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018fa98:;
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
L_0018fa9c:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0018faa0:;
    {
        cpu->r[5] = rd32(0x0018faa8u + + 0x210u);
    }
L_0018faa4:;
    {
        cpu->r[6] = rd32(0x0018faacu + + 0x210u);
    }
L_0018faa8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018faac:;
    {
        cpu->r[5] = add_flags(cpu, 0x0018fab4u, cpu->r[5], 0, 0);
    }
L_0018fab0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0018fab4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xa4u);
    }
L_0018fab8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0018fabc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xa8u);
    }
L_0018fac0:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0xb8u);
    }
L_0018fac4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0018fac8:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x10u);
    }
L_0018facc:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0xbcu);
    }
L_0018fad0:;
    {
        cpu->r[14] = 0x0018fad8u;
    }
L_0018fad4:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018fad8u)) return;
    }
L_0018fad8:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018fadc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018fbbc;
        }
    }
L_0018fae0:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0xa1u);
    }
L_0018fae4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018fae8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018fbe8;
        }
    }
L_0018faec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1cu);
    }
L_0018faf0:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[8], 1, 0);
    }
L_0018faf4:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_0018faf8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0018fbf4;
        }
    }
L_0018fafc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[9], cpu->r[8], 0, 0);
    }
L_0018fb00:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_0018fb04:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0018fbf4;
        }
    }
L_0018fb08:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xb4u);
    }
L_0018fb0c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x14u);
    }
L_0018fb10:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0xacu);
    }
L_0018fb14:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_0018fb18:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0018fb1c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0018fb3c;
        }
    }
L_0018fb20:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xb8u);
    }
L_0018fb24:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018fb28:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0018fb2c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0018fb34u + + 0x17cu);
    }
L_0018fb30:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0018fb34:;
    {
        cpu->r[14] = 0x0018fb38u; fn_0018ee14(cpu);
    }
L_0018fb38:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0018fb3c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x24u);
    }
L_0018fb40:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0xc0u);
    }
L_0018fb44:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,13));
    }
L_0018fb48:;
    {
        vfp_sync_flags(cpu);
    }
L_0018fb4c:;
    {
        if (cond_test(cpu, 6)) {
        goto L_0018fc40;
        }
    }
L_0018fb50:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0018fb58u + + 0x158u);
    }
L_0018fb54:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0xa2u);
    }
L_0018fb58:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018fb5c:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0x1cu);
        }
    }
L_0018fb60:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0xb0u);
        }
    }
L_0018fb64:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 16) = *(float*)G(0x0018fb6cu + + 0x148u);
        }
    }
L_0018fb68:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
        }
    }
L_0018fb6c:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
        }
    }
L_0018fb70:;
    {
        if (cond_test(cpu, 2)) {
        vfp_vdiv(cpu, 16, 13, 15);
        }
    }
L_0018fb74:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0018fb78:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018fc78;
        }
    }
L_0018fb7c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0018fb80:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,16);
    }
L_0018fb84:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0018fb88:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xa4u);
    }
L_0018fb8c:;
    {
        cpu->r[12] = rd32(cpu->r[2]);
    }
L_0018fb90:;
    {
        cpu->r[2] = rd32(0x0018fb98u + + 0x128u);
    }
L_0018fb94:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0018fb98:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_0018fb9c:;
    {
        vfp_vmul(cpu, 13, 14, 15);
    }
L_0018fba0:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,13);
    }
L_0018fba4:;
    {
        cpu->r[14] = 0x0018fbacu;
    }
L_0018fba8:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018fbacu)) return;
    }
L_0018fbac:;
    {
        wr32(cpu->r[4] + + 0xa8u, cpu->r[0]);
    }
L_0018fbb0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0018fbb4:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0018fbb8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018fbbcu)) return;
    }
L_0018fbbc:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0xa1u);
    }
L_0018fbc0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018fbc4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018fc30;
        }
    }
L_0018fbc8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1cu);
    }
L_0018fbcc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xb8u);
    }
L_0018fbd0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0018fbd4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0018fbb0;
        }
    }
L_0018fbd8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xbcu);
    }
L_0018fbdc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0018fbe0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018fb08;
        }
    }
L_0018fbe4:;
    {
        goto L_0018fbb0;
    }
L_0018fbe8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_0018fbec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018fbf0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018faec;
        }
    }
L_0018fbf4:;
    {
        cpu->r[5] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0018fbf8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0018fbfc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xa4u);
    }
L_0018fc00:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xa8u);
    }
L_0018fc04:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0018fc08:;
    {
        cpu->r[14] = 0x0018fc10u;
    }
L_0018fc0c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018fc10u)) return;
    }
L_0018fc10:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0018fc14:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xa4u);
    }
L_0018fc18:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xa8u);
    }
L_0018fc1c:;
    {
        cpu->r[14] = 0x0018fc24u;
    }
L_0018fc20:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018fc24u)) return;
    }
L_0018fc24:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0018fc28:;
    {
        wr32(cpu->r[4] + + 0xa8u, cpu->r[3]);
    }
L_0018fc2c:;
    {
        goto L_0018fbb0;
    }
L_0018fc30:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_0018fc34:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018fc38:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0018fbb0;
        }
    }
L_0018fc3c:;
    {
        goto L_0018fbc8;
    }
L_0018fc40:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[4] + + 0xc4u);
    }
L_0018fc44:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,12));
    }
L_0018fc48:;
    {
        vfp_sync_flags(cpu);
    }
L_0018fc4c:;
    {
        if (cond_test(cpu, 6)) {
        goto L_0018fb54;
        }
    }
L_0018fc50:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0018fc54:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,13);
    }
L_0018fc58:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,12);
    }
L_0018fc5c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0018fc60:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0018fc64:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0018fc6cu + + 0x44u);
    }
L_0018fc68:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0018fc6c:;
    {
        cpu->r[14] = 0x0018fc70u; fn_0018ee48(cpu);
    }
L_0018fc70:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0018fc74:;
    {
        goto L_0018fb54;
    }
L_0018fc78:;
    {
        cpu->r[5] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0018fc7c:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,14);
    }
L_0018fc80:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xa4u);
    }
L_0018fc84:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xa8u);
    }
L_0018fc88:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0018fc8c:;
    {
        cpu->r[14] = 0x0018fc94u;
    }
L_0018fc90:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018fc94u)) return;
    }
L_0018fc94:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0018fc98:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xa8u);
    }
L_0018fc9c:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,16);
    }
L_0018fca0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xa4u);
    }
L_0018fca4:;
    {
        cpu->r[14] = 0x0018fcacu;
    }
L_0018fca8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018fcacu)) return;
    }
L_0018fcac:;
    {
        goto L_0018fbb0;
    }
}

/* _ZN9CarSounds18UpdateStartupSoundEv @ 0018fcc4 (arm) */
void fn_0018fcc4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018fcc4:;
    {
        cpu->r[3] = rd32(0x0018fcccu + + 0x24u);
    }
L_0018fcc8:;
    {
        cpu->r[2] = rd32(0x0018fcd0u + + 0x24u);
    }
L_0018fccc:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018fcd4u, cpu->r[3], 0, 0);
    }
L_0018fcd0:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0xd0u);
    }
L_0018fcd4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0018fcd8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0018fcdc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xccu);
    }
L_0018fce0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0018fce4:;
    {
        cpu->r[14] = 0x0018fcecu;
    }
L_0018fce8:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018fcecu)) return;
    }
L_0018fcec:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0018fcf0u)) return;
    }
}

/* _ZN9CarSounds20InterpolateFlatEndedEiiiff @ 0018fcf8 (arm) */
void fn_0018fcf8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018fcf8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0018fcfc:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0018fd00:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[13] + + 0x10u);
    }
L_0018fd04:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[13] + + 0x14u);
    }
L_0018fd08:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,17), *vfp_s(cpu,16));
    }
L_0018fd0c:;
    {
        vfp_sync_flags(cpu);
    }
L_0018fd10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018fd5c;
        }
    }
L_0018fd14:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
    }
L_0018fd18:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 0);
    }
L_0018fd1c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[2];
    }
L_0018fd20:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[3];
    }
L_0018fd24:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0018fd28:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0018fd2c:;
    {
        vfp_vdiv(cpu, 14, 14, 15);
    }
L_0018fd30:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0018fd38u + + 0x30u);
    }
L_0018fd34:;
    {
        vfp_vmul(cpu, 13, 14, 15);
    }
L_0018fd38:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,13);
    }
L_0018fd3c:;
    {
        vfp_vsub(cpu, 17, 17, 16);
    }
L_0018fd40:;
    {
        cpu->r[14] = 0x0018fd44u; imp_cosf(cpu); /* cosf */
    }
L_0018fd44:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0018fd4cu + + 0x20u);
    }
L_0018fd48:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_0018fd4c:;
    {
        vfp_vsub(cpu, 14, 14, 15);
    }
L_0018fd50:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0018fd58u + + 0x18u);
    }
L_0018fd54:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_0018fd58:;
    {
        vfp_vmla(cpu, 16, 17, 15);
    }
L_0018fd5c:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,16);
    }
L_0018fd60:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0018fd64:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0018fd68u)) return;
    }
}

/* _ZN9CarSounds17UpdateTurboSoundsEv @ 0018fd74 (arm) */
void fn_0018fd74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018fd74:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xecu);
    }
L_0018fd78:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x14u);
    }
L_0018fd7c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x10cu);
    }
L_0018fd80:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x108u);
    }
L_0018fd84:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0018fd88:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0018fd8c:;
    {
        cpu->r[5] = rd32(0x0018fd94u + + 0x2b4u);
    }
L_0018fd90:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0018fd94:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0018fd98:;
    {
        cpu->r[5] = add_flags(cpu, 0x0018fda0u, cpu->r[5], 0, 0);
    }
L_0018fd9c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0018fda0:;
    {
        vfp_vmul(cpu, 17, 14, 15);
    }
L_0018fda4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0018fdb8;
        }
    }
L_0018fda8:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x110u);
    }
L_0018fdac:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0018fdb0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0018ff98;
        }
    }
L_0018fdb4:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x0018fdbcu + + 0x284u);
    }
L_0018fdb8:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_0018fdbc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x104u);
    }
L_0018fdc0:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0018fdc4:;
    {
        cpu->r[7] = rd32(0x0018fdccu + + 0x280u);
    }
L_0018fdc8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xf8u);
    }
L_0018fdcc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x100u);
    }
L_0018fdd0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xfcu);
    }
L_0018fdd4:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0018fdd8:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0018fddc:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0018fde0:;
    {
        vfp_vdiv(cpu, 16, 13, 14);
    }
L_0018fde4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0018fdecu + + 0x258u);
    }
L_0018fde8:;
    {
        vfp_vsub(cpu, 14, 14, 16);
    }
L_0018fdec:;
    {
        vfp_vmla(cpu, 16, 14, 15);
    }
L_0018fdf0:;
    {
        cpu->r[14] = 0x0018fdf8u;
    }
L_0018fdf4:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018fdf8u)) return;
    }
L_0018fdf8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018fdfc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018ff1c;
        }
    }
L_0018fe00:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,17);
    }
L_0018fe04:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xf8u);
    }
L_0018fe08:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xfcu);
    }
L_0018fe0c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0018fe10:;
    {
        cpu->r[14] = 0x0018fe18u;
    }
L_0018fe14:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018fe18u)) return;
    }
L_0018fe18:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0018fe1c:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,16);
    }
L_0018fe20:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xf8u);
    }
L_0018fe24:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xfcu);
    }
L_0018fe28:;
    {
        cpu->r[14] = 0x0018fe30u;
    }
L_0018fe2c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018fe30u)) return;
    }
L_0018fe30:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x114u);
    }
L_0018fe34:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018fe38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018fe90;
        }
    }
L_0018fe3c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xecu);
    }
L_0018fe40:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x14u);
    }
L_0018fe44:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x124u);
    }
L_0018fe48:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x120u);
    }
L_0018fe4c:;
    {
        vfp_vmul(cpu, 16, 14, 15);
    }
L_0018fe50:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0018fe54:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018ff50;
        }
    }
L_0018fe58:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0018fe5c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x118u);
    }
L_0018fe60:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x11cu);
    }
L_0018fe64:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0018fe68:;
    {
        cpu->r[14] = 0x0018fe70u;
    }
L_0018fe6c:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018fe70u)) return;
    }
L_0018fe70:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018fe74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018ff64;
        }
    }
L_0018fe78:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0018fe7c:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,16);
    }
L_0018fe80:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x118u);
    }
L_0018fe84:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x11cu);
    }
L_0018fe88:;
    {
        cpu->r[14] = 0x0018fe90u;
    }
L_0018fe8c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018fe90u)) return;
    }
L_0018fe90:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x12cu);
    }
L_0018fe94:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018fe98:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018ff04;
        }
    }
L_0018fe9c:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x54u);
    }
L_0018fea0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0018fea4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018fec0;
        }
    }
L_0018fea8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8u);
    }
L_0018feac:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0018feb0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018ff04;
        }
    }
L_0018feb4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_0018feb8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0018febc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018ff04;
        }
    }
L_0018fec0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x138u);
    }
L_0018fec4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xf4u);
    }
L_0018fec8:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x4u);
    }
L_0018fecc:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_0018fed0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[6] = 0x00000001u;
        }
    }
L_0018fed4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[6] = 0x00000001u;
        }
    }
L_0018fed8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0018feec;
        }
    }
L_0018fedc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0018fee0:;
    {
        cpu->r[0] = rd32(cpu->r[1] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_0018fee4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_0018fee8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0018ff10;
        }
    }
L_0018feec:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_0018fef0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_0018fef4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0018ff04;
        }
    }
L_0018fef8:;
    {
        cpu->r[3] = rd32(cpu->r[1] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_0018fefc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0018ff00:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0018ffb4;
        }
    }
L_0018ff04:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0018ff08:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0018ff0c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018ff10u)) return;
    }
L_0018ff10:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_0018ff14:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0018feec;
        }
    }
L_0018ff18:;
    {
        goto L_0018fedc;
    }
L_0018ff1c:;
    {
        cpu->r[2] = rd32(0x0018ff24u + + 0x12cu);
    }
L_0018ff20:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,16);
    }
L_0018ff24:;
    {
        cpu->r[12] = rd32(cpu->r[6]);
    }
L_0018ff28:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0018ff2c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xf8u);
    }
L_0018ff30:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0018ff34:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_0018ff38:;
    {
        vfp_vmul(cpu, 13, 17, 15);
    }
L_0018ff3c:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,13);
    }
L_0018ff40:;
    {
        cpu->r[14] = 0x0018ff48u;
    }
L_0018ff44:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018ff48u)) return;
    }
L_0018ff48:;
    {
        wr32(cpu->r[4] + + 0xfcu, cpu->r[0]);
    }
L_0018ff4c:;
    {
        goto L_0018fe30;
    }
L_0018ff50:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x128u);
    }
L_0018ff54:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0018ff58:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00190024;
        }
    }
L_0018ff5c:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x0018ff64u + + 0xdcu);
    }
L_0018ff60:;
    {
        goto L_0018fe58;
    }
L_0018ff64:;
    {
        cpu->r[3] = rd32(0x0018ff6cu + + 0xe4u);
    }
L_0018ff68:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0018ff6c:;
    {
        cpu->r[12] = rd32(cpu->r[6]);
    }
L_0018ff70:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x118u);
    }
L_0018ff74:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0018ff78:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_0018ff7c:;
    {
        vfp_vmul(cpu, 14, 16, 15);
    }
L_0018ff80:;
    {
        cpu->r[3] = 0x3f800000u;
    }
L_0018ff84:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,14);
    }
L_0018ff88:;
    {
        cpu->r[14] = 0x0018ff90u;
    }
L_0018ff8c:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018ff90u)) return;
    }
L_0018ff90:;
    {
        wr32(cpu->r[4] + + 0x11cu, cpu->r[0]);
    }
L_0018ff94:;
    {
        goto L_0018fe90;
    }
L_0018ff98:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_0018ff9c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0018ffa4u + + 0x9cu);
    }
L_0018ffa0:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0018ffa4:;
    {
        cpu->r[14] = 0x0018ffa8u; fn_0018fcf8(cpu);
    }
L_0018ffa8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xecu);
    }
L_0018ffac:;
    {
        *(uint32_t*)vfp_s(cpu,17) = cpu->r[0];
    }
L_0018ffb0:;
    {
        goto L_0018fdb8;
    }
L_0018ffb4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x130u);
    }
L_0018ffb8:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
    }
L_0018ffbc:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0018ffc0:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[4] + + 0x14u);
    }
L_0018ffc4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x134u);
    }
L_0018ffc8:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[4] + + 0x13cu);
    }
L_0018ffcc:;
    {
        cpu->r[7] = rd32(cpu->r[3] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_0018ffd0:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_0018ffd4:;
    {
        cpu->r[1] = rd32(cpu->r[2] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_0018ffd8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0018ffdc:;
    {
        cpu->r[14] = 0x0018ffe4u;
    }
L_0018ffe0:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0018ffe4u)) return;
    }
L_0018ffe4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018ffe8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018ff04;
        }
    }
L_0018ffec:;
    {
        vfp_vmul(cpu, 14, 17, 16);
    }
L_0018fff0:;
    {
        cpu->r[2] = rd32(0x0018fff8u + + 0x58u);
    }
L_0018fff4:;
    {
        cpu->r[12] = rd32(cpu->r[8]);
    }
L_0018fff8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0018fffc:;
    {
        cpu->r[3] = 0x3f800000u;
    }
L_00190000:;
    {
        cpu->r[4] = rd32(cpu->r[4] + + 0x134u);
    }
L_00190004:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_00190008:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_0019000c:;
    {
        vfp_vmul(cpu, 13, 14, 15);
    }
L_00190010:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,13);
    }
L_00190014:;
    {
        cpu->r[14] = 0x0019001cu;
    }
L_00190018:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019001cu)) return;
    }
L_0019001c:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[6], 2, 2u, &shc), cpu->r[0]);
    }
L_00190020:;
    {
        goto L_0018ff04;
    }
L_00190024:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00190028:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0019002c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00190034u + + 0xcu);
    }
L_00190030:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00190034:;
    {
        cpu->r[14] = 0x00190038u; fn_0018fcf8(cpu);
    }
L_00190038:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[0];
    }
L_0019003c:;
    {
        goto L_0018fe58;
    }
}
