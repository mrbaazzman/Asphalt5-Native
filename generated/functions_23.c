#include "functions.h"

/* _ZN4Game29UnlockItemsForCompletionLevelEib @ 0009fd1c (arm) */
void fn_0009fd1c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009fd1c:;
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
L_0009fd20:;
    {
        cpu->r[3] = 0x00008698u;
    }
L_0009fd24:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0009fd28:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_0009fd2c:;
    {
        cpu->r[0] = rd32(0x0009fd34u + + 0x2e0u);
    }
L_0009fd30:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0009fd34:;
    {
        cpu->r[0] = add_flags(cpu, 0x0009fd3cu, cpu->r[0], 0, 0);
    }
L_0009fd38:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_0009fd3c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0009fd40:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_0009fd44:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0009fe38;
        }
    }
L_0009fd48:;
    {
        cpu->r[1] = rd32(0x0009fd50u + + 0x2c8u);
    }
L_0009fd4c:;
    {
        cpu->r[8] = 0x0000869cu;
    }
L_0009fd50:;
    {
        cpu->r[2] = rd32(0x0009fd58u + + 0x2c4u);
    }
L_0009fd54:;
    {
        cpu->r[9] = 0x0000002cu;
    }
L_0009fd58:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0009fd5c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_0009fd60:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_0009fd64:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_0009fd68:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_0009fd6c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_0009fd70:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_0009fd74:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_0009fd78:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_0009fd7c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0009fe18;
        }
    }
L_0009fd80:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x4u);
    }
L_0009fd84:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0009fd88:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0009fe18;
        }
    }
L_0009fd8c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0009fd90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009fe9c;
        }
    }
L_0009fd94:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0009fd98:;
    {
        goto L_0009fdac;
    }
L_0009fd9c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x4u);
    }
L_0009fda0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0009fda4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_0009fda8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0009fe18;
        }
    }
L_0009fdac:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[6] = v;
    }
L_0009fdb0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_0009fdb4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], cpu->r[4], 0, 0);
    }
L_0009fdb8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[7], 0, 0);
    }
L_0009fdbc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0009fdc0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
    }
L_0009fdc4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000005u, 1, 1);
    }
L_0009fdc8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009fe40;
        }
    }
L_0009fdcc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 1);
    }
L_0009fdd0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009fd9c;
        }
    }
L_0009fdd4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[4], 0, 0);
    }
L_0009fdd8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_0009fddc:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_0009fde0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0009fde4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[2], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_0009fde8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_0009fdec:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xcu);
    }
L_0009fdf0:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x10u);
    }
L_0009fdf4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0009fdf8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_0009fdfc:;
    {
        uint32_t v = cpu->r[9] * cpu->r[3] + cpu->r[5]; cpu->r[3] = v;
    }
L_0009fe00:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00008700u, 0, 0);
    }
L_0009fe04:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000074u, 0, 0);
    }
L_0009fe08:;
    {
        wr32(cpu->r[3], cpu->r[1]);
    }
L_0009fe0c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x4u);
    }
L_0009fe10:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_0009fe14:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0009fdac;
        }
    }
L_0009fe18:;
    {
        cpu->r[3] = 0x00008698u;
    }
L_0009fe1c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_0009fe20:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000188u, 0, 0);
    }
L_0009fe24:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0009fe28:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_0009fe2c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
    }
L_0009fe30:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_0009fe34:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0009fd68;
        }
    }
L_0009fe38:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_0009fe3c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0009fe40u)) return;
    }
L_0009fe40:;
    {
        cpu->r[10] = rd32(cpu->r[3] + + 0xcu);
    }
L_0009fe44:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0009fe48:;
    {
        cpu->r[11] = rd32(cpu->r[3] + + 0x10u);
    }
L_0009fe4c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_0009fe50:;
    {
        cpu->r[14] = 0x0009fe54u; fn_00096bb8(cpu);
    }
L_0009fe54:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], cpu->r[10], 0, 0);
    }
L_0009fe58:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00008600u, 0, 0);
    }
L_0009fe5c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[5], shifter(cpu->r[10], 2, 2u, &shc), 0, 0);
    }
L_0009fe60:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000000d8u, 0, 0);
    }
L_0009fe64:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_0009fe68:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[10], cpu->r[11], 0, 0);
    }
L_0009fe6c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00008600u, 0, 0);
    }
L_0009fe70:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[7], 0, 0);
    }
L_0009fe74:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x000000a8u, 0, 0);
    }
L_0009fe78:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009fe7c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0009fe80:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_0009fe84:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[3], cpu->r[1]);
        }
    }
L_0009fe88:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], cpu->r[4], 0, 0);
    }
L_0009fe8c:;
    {
        wr8(cpu->r[11], cpu->r[0]);
    }
L_0009fe90:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0009fe94:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
    }
L_0009fe98:;
    {
        goto L_0009fdcc;
    }
L_0009fe9c:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x8u);
    }
L_0009fea0:;
    {
        goto L_0009fed8;
    }
L_0009fea4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_0009fea8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], cpu->r[4], 0, 0);
    }
L_0009feac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[7], 0, 0);
    }
L_0009feb0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0009feb4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
    }
L_0009feb8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000005u, 1, 1);
    }
L_0009febc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009ff50;
        }
    }
L_0009fec0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 1);
    }
L_0009fec4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009ffb0;
        }
    }
L_0009fec8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x4u);
    }
L_0009fecc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0009fed0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_0009fed4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0009fe18;
        }
    }
L_0009fed8:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[6] = v;
    }
L_0009fedc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], cpu->r[4], 0, 0);
    }
L_0009fee0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0009fee4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_0009fee8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0009feec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009fea4;
        }
    }
L_0009fef0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_0009fef4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_0009fef8:;
    {
        cpu->r[10] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0009fefc:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0009ff00:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0009ff04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009ffe8;
        }
    }
L_0009ff08:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_0009ff0c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], cpu->r[4], 0, 0);
    }
L_0009ff10:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_0009ff14:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_0009ff18:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_0009ff1c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[7], 0, 0);
    }
L_0009ff20:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_0009ff24:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0009ff28:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x44u);
    }
L_0009ff2c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0xcu);
    }
L_0009ff30:;
    {
        wr8(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_0009ff34:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], cpu->r[4], 0, 0);
    }
L_0009ff38:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_0009ff3c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[7], 0, 0);
    }
L_0009ff40:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0009ff44:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
    }
L_0009ff48:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000005u, 1, 1);
    }
L_0009ff4c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009fec0;
        }
    }
L_0009ff50:;
    {
        cpu->r[10] = rd32(cpu->r[3] + + 0xcu);
    }
L_0009ff54:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0009ff58:;
    {
        cpu->r[11] = rd32(cpu->r[3] + + 0x10u);
    }
L_0009ff5c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_0009ff60:;
    {
        cpu->r[14] = 0x0009ff64u; fn_00096bb8(cpu);
    }
L_0009ff64:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0009ff68:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009ff6c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[5], cpu->r[10], 0, 0);
        }
    }
L_0009ff70:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_0009ff74:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00008600u, 0, 0);
        }
    }
L_0009ff78:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[5], shifter(cpu->r[10], 2, 2u, &shc), 0, 0);
    }
L_0009ff7c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000000d8u, 0, 0);
        }
    }
L_0009ff80:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[10], cpu->r[11], 0, 0);
    }
L_0009ff84:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00008600u, 0, 0);
    }
L_0009ff88:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[3], cpu->r[2]);
        }
    }
L_0009ff8c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], cpu->r[4], 0, 0);
    }
L_0009ff90:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_0009ff94:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x000000a8u, 0, 0);
    }
L_0009ff98:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[7], 0, 0);
    }
L_0009ff9c:;
    {
        wr8(cpu->r[11], cpu->r[12]);
    }
L_0009ffa0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0009ffa4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
    }
L_0009ffa8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 1);
    }
L_0009ffac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009fec8;
        }
    }
L_0009ffb0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[4], 0, 0);
    }
L_0009ffb4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_0009ffb8:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_0009ffbc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[2], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_0009ffc0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_0009ffc4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xcu);
    }
L_0009ffc8:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x10u);
    }
L_0009ffcc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0009ffd0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_0009ffd4:;
    {
        uint32_t v = cpu->r[9] * cpu->r[3] + cpu->r[5]; cpu->r[3] = v;
    }
L_0009ffd8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00008700u, 0, 0);
    }
L_0009ffdc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000074u, 0, 0);
    }
L_0009ffe0:;
    {
        wr32(cpu->r[3], cpu->r[1]);
    }
L_0009ffe4:;
    {
        goto L_0009fec8;
    }
L_0009ffe8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0009ffec:;
    {
        cpu->r[14] = 0x0009fff0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0009fff0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009fff4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009ff08;
        }
    }
L_0009fff8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_0009fffc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_000a0000:;
    {
        cpu->r[0] = rd32(cpu->r[1] + cpu->r[12]);
    }
L_000a0004:;
    {
        cpu->r[14] = 0x000a0008u; fn_00094228(cpu);
    }
L_000a0008:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a000c:;
    {
        cpu->r[14] = 0x000a0010u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a0010:;
    {
        goto L_0009ff08;
    }
}

/* _ZN4Game19getEventUnlockLevelEiii @ 000a0020 (arm) */
void fn_000a0020(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a0020:;
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
L_000a0024:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a0028:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_000a002c:;
    {
        cpu->r[5] = rd32(0x000a0034u + + 0x248u);
    }
L_000a0030:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000a0034:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_000a0038:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_000a003c:;
    {
        cpu->r[5] = add_flags(cpu, 0x000a0044u, cpu->r[5], 0, 0);
    }
L_000a0040:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a0154;
        }
    }
L_000a0044:;
    {
        cpu->r[3] = 0x00008698u;
    }
L_000a0048:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000a004c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000a0050:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a015c;
        }
    }
L_000a0054:;
    {
        cpu->r[2] = rd32(0x000a005cu + + 0x224u);
    }
L_000a0058:;
    {
        cpu->r[8] = cpu->r[7];
    }
L_000a005c:;
    {
        cpu->r[10] = rd32(0x000a0064u + + 0x220u);
    }
L_000a0060:;
    {
        cpu->r[11] = 0x0000869cu;
    }
L_000a0064:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000a0068:;
    {
        goto L_000a0090;
    }
L_000a006c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_000a0070:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x94u);
    }
L_000a0074:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_000a0078:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a00ec;
        }
    }
L_000a007c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a0080:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_000a0084:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000188u, 0, 0);
    }
L_000a0088:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[8], 1, 1);
    }
L_000a008c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a015c;
        }
    }
L_000a0090:;
    {
        cpu->r[1] = rd32(cpu->r[9]);
    }
L_000a0094:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000a0098:;
    {
        { uint32_t v = cpu->r[1] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a009c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[7]);
    }
L_000a00a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a006c;
        }
    }
L_000a00a4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000a00a8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_000a00ac:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000a00b0:;
    {
        cpu->r[14] = 0x000a00b4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a00b4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_000a00b8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000a00bc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a00c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a006c;
        }
    }
L_000a00c4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_000a00c8:;
    {
        cpu->r[14] = 0x000a00ccu; fn_00094228(cpu);
    }
L_000a00cc:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000a00d0:;
    {
        cpu->r[14] = 0x000a00d4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a00d4:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_000a00d8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_000a00dc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000a00e0:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x94u);
    }
L_000a00e4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_000a00e8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000a007c;
        }
    }
L_000a00ec:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000a00f0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[7], 0, 0);
    }
L_000a00f4:;
    {
        cpu->r[0] = rd32(cpu->r[12] + + 0x4u);
    }
L_000a00f8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a00fc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a007c;
        }
    }
L_000a0100:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_000a0104:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000a0108:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000a010c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_000a0110:;
    {
        goto L_000a0120;
    }
L_000a0114:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_000a0118:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_000a011c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a007c;
        }
    }
L_000a0120:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x8u);
    }
L_000a0124:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000005u, 1, 1);
    }
L_000a0128:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a0114;
        }
    }
L_000a012c:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0xcu);
    }
L_000a0130:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[6], 1, 1);
    }
L_000a0134:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a0114;
        }
    }
L_000a0138:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x10u);
    }
L_000a013c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_000a0140:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 1);
    }
L_000a0144:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a0114;
        }
    }
L_000a0148:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_000a014c:;
    {
        cpu->r[0] = rd32(cpu->r[12]);
    }
L_000a0150:;
    {
        goto L_000a0160;
    }
L_000a0154:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_000a0158:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a0168;
        }
    }
L_000a015c:;
    {
        cpu->r[0] = 0x00000064u;
    }
L_000a0160:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000a0164:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a0168u)) return;
    }
L_000a0168:;
    {
        cpu->r[3] = 0x000086a0u;
    }
L_000a016c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000a0170:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000a0174:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a015c;
        }
    }
L_000a0178:;
    {
        cpu->r[2] = rd32(0x000a0180u + + 0x100u);
    }
L_000a017c:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000a0180:;
    {
        cpu->r[10] = rd32(0x000a0188u + + 0xfcu);
    }
L_000a0184:;
    {
        cpu->r[8] = cpu->r[7];
    }
L_000a0188:;
    {
        cpu->r[11] = 0x000086a4u;
    }
L_000a018c:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000a0190:;
    {
        goto L_000a01b8;
    }
L_000a0194:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_000a0198:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x60u);
    }
L_000a019c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_000a01a0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a0214;
        }
    }
L_000a01a4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a01a8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_000a01ac:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000188u, 0, 0);
    }
L_000a01b0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[8], 1, 1);
    }
L_000a01b4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a015c;
        }
    }
L_000a01b8:;
    {
        cpu->r[1] = rd32(cpu->r[9]);
    }
L_000a01bc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000a01c0:;
    {
        { uint32_t v = cpu->r[1] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a01c4:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[7]);
    }
L_000a01c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a0194;
        }
    }
L_000a01cc:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000a01d0:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_000a01d4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000a01d8:;
    {
        cpu->r[14] = 0x000a01dcu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a01dc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_000a01e0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000a01e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a01e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a0194;
        }
    }
L_000a01ec:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_000a01f0:;
    {
        cpu->r[14] = 0x000a01f4u; fn_00094228(cpu);
    }
L_000a01f4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000a01f8:;
    {
        cpu->r[14] = 0x000a01fcu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a01fc:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_000a0200:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_000a0204:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000a0208:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x60u);
    }
L_000a020c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_000a0210:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000a01a4;
        }
    }
L_000a0214:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000a0218:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[7], 0, 0);
    }
L_000a021c:;
    {
        cpu->r[0] = rd32(cpu->r[12] + + 0x4u);
    }
L_000a0220:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a0224:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a01a4;
        }
    }
L_000a0228:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_000a022c:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000a0230:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000a0234:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_000a0238:;
    {
        goto L_000a0248;
    }
L_000a023c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_000a0240:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_000a0244:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a01a4;
        }
    }
L_000a0248:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x8u);
    }
L_000a024c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000005u, 1, 1);
    }
L_000a0250:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a023c;
        }
    }
L_000a0254:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0xcu);
    }
L_000a0258:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[6], 1, 1);
    }
L_000a025c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a023c;
        }
    }
L_000a0260:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x10u);
    }
L_000a0264:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_000a0268:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 1);
    }
L_000a026c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a023c;
        }
    }
L_000a0270:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_000a0274:;
    {
        cpu->r[0] = rd32(cpu->r[12]);
    }
L_000a0278:;
    {
        goto L_000a0160;
    }
}

/* _ZN4Game18getRimsUnlockLevelEi @ 000a0288 (arm) */
void fn_000a0288(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a0288:;
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
L_000a028c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000018u, 1, 1);
    }
L_000a0290:;
    {
        cpu->r[5] = rd32(0x000a0298u + + 0x244u);
    }
L_000a0294:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_000a0298:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_000a029c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000a02a0:;
    {
        cpu->r[5] = add_flags(cpu, 0x000a02a8u, cpu->r[5], 0, 0);
    }
L_000a02a4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a02bc;
        }
    }
L_000a02a8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000a02ac:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[1];
        }
    }
L_000a02b0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a02f0;
        }
    }
L_000a02b4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_000a02b8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a02bcu)) return;
    }
L_000a02bc:;
    {
        cpu->r[1] = rd32(0x000a02c4u + + 0x21cu);
    }
L_000a02c0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000a02c4:;
    {
        cpu->r[12] = rd32(0x000a02ccu + + 0x218u);
    }
L_000a02c8:;
    {
        cpu->r[14] = 0x000022f8u;
    }
L_000a02cc:;
    {
        cpu->r[2] = rd32(0x000a02d4u + + 0x214u);
    }
L_000a02d0:;
    {
        cpu->r[1] = add_flags(cpu, 0x000a02d8u, cpu->r[1], 0, 0);
    }
L_000a02d4:;
    {
        cpu->r[3] = rd32(0x000a02dcu + + 0x210u);
    }
L_000a02d8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000a02e0u, cpu->r[12], 0, 0);
    }
L_000a02dc:;
    {
        cpu->r[2] = add_flags(cpu, 0x000a02e4u, cpu->r[2], 0, 0);
    }
L_000a02e0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000002ecu, 0, 0);
    }
L_000a02e4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000a02ecu, cpu->r[3], 0, 0);
    }
L_000a02e8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000a02ec:;
    {
        cpu->r[14] = 0x000a02f0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000a02f0:;
    {
        cpu->r[11] = 0x00008698u;
    }
L_000a02f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000a02f8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a02fc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a03a0;
        }
    }
L_000a0300:;
    {
        cpu->r[3] = rd32(0x000a0308u + + 0x1e8u);
    }
L_000a0304:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000a0308:;
    {
        cpu->r[12] = rd32(0x000a0310u + + 0x1e4u);
    }
L_000a030c:;
    {
        cpu->r[8] = cpu->r[7];
    }
L_000a0310:;
    {
        cpu->r[9] = 0x0000869cu;
    }
L_000a0314:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000a0318:;
    {
        cpu->r[2] = rd32(cpu->r[10]);
    }
L_000a031c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000a0320:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a0324:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_000a0328:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a0498;
        }
    }
L_000a032c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_000a0330:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x94u);
    }
L_000a0334:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000a0338:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000a038c;
        }
    }
L_000a033c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000a0340:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[7], 0, 0);
    }
L_000a0344:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x4u);
    }
L_000a0348:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000a034c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a038c;
        }
    }
L_000a0350:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_000a0354:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000a0358:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000a035c:;
    {
        goto L_000a036c;
    }
L_000a0360:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_000a0364:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_000a0368:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a038c;
        }
    }
L_000a036c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x8u);
    }
L_000a0370:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000004u, 1, 1);
    }
L_000a0374:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a0360;
        }
    }
L_000a0378:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_000a037c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[6], 1, 1);
    }
L_000a0380:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a0360;
        }
    }
L_000a0384:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_000a0388:;
    {
        goto L_000a02b4;
    }
L_000a038c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000a0390:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_000a0394:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000188u, 0, 0);
    }
L_000a0398:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_000a039c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000a0318;
        }
    }
L_000a03a0:;
    {
        cpu->r[11] = 0x000086a0u;
    }
L_000a03a4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000a03a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a03ac:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a04d4;
        }
    }
L_000a03b0:;
    {
        cpu->r[3] = rd32(0x000a03b8u + + 0x138u);
    }
L_000a03b4:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000a03b8:;
    {
        cpu->r[12] = rd32(0x000a03c0u + + 0x134u);
    }
L_000a03bc:;
    {
        cpu->r[8] = cpu->r[7];
    }
L_000a03c0:;
    {
        cpu->r[9] = 0x000086a4u;
    }
L_000a03c4:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000a03c8:;
    {
        goto L_000a03f0;
    }
L_000a03cc:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_000a03d0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x60u);
    }
L_000a03d4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000a03d8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a044c;
        }
    }
L_000a03dc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000a03e0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_000a03e4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000188u, 0, 0);
    }
L_000a03e8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_000a03ec:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a04d4;
        }
    }
L_000a03f0:;
    {
        cpu->r[2] = rd32(cpu->r[10]);
    }
L_000a03f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000a03f8:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a03fc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_000a0400:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a03cc;
        }
    }
L_000a0404:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a0408:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000a040c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000a0410:;
    {
        cpu->r[14] = 0x000a0414u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a0414:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000a0418:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_000a041c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a0420:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a03cc;
        }
    }
L_000a0424:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_000a0428:;
    {
        cpu->r[14] = 0x000a042cu; fn_00094228(cpu);
    }
L_000a042c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a0430:;
    {
        cpu->r[14] = 0x000a0434u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a0434:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_000a0438:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000a043c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_000a0440:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x60u);
    }
L_000a0444:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000a0448:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000a03dc;
        }
    }
L_000a044c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000a0450:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_000a0454:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_000a0458:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a045c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a03dc;
        }
    }
L_000a0460:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000a0464:;
    {
        goto L_000a0474;
    }
L_000a0468:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_000a046c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_000a0470:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a03dc;
        }
    }
L_000a0474:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
    }
L_000a0478:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000a047c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000004u, 1, 1);
    }
L_000a0480:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a0468;
        }
    }
L_000a0484:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0xcu);
    }
L_000a0488:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[6], 1, 1);
    }
L_000a048c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a0468;
        }
    }
L_000a0490:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_000a0494:;
    {
        goto L_000a02b4;
    }
L_000a0498:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a049c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000a04a0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000a04a4:;
    {
        cpu->r[14] = 0x000a04a8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a04a8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000a04ac:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_000a04b0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a04b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a032c;
        }
    }
L_000a04b8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_000a04bc:;
    {
        cpu->r[14] = 0x000a04c0u; fn_00094228(cpu);
    }
L_000a04c0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a04c4:;
    {
        cpu->r[14] = 0x000a04c8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a04c8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_000a04cc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000a04d0:;
    {
        goto L_000a032c;
    }
L_000a04d4:;
    {
        cpu->r[0] = 0x00000064u;
    }
L_000a04d8:;
    {
        goto L_000a02b4;
    }
}

/* _ZN4Game20GetCompletionPercentEv @ 000a04f8 (arm) */
void fn_000a04f8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a04f8:;
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
L_000a04fc:;
    {
        cpu->r[10] = rd32(0x000a0504u + + 0x8cu);
    }
L_000a0500:;
    {
        cpu->r[3] = rd32(0x000a0508u + + 0x8cu);
    }
L_000a0504:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00008500u, 0, 0);
    }
L_000a0508:;
    {
        cpu->r[10] = add_flags(cpu, 0x000a0510u, cpu->r[10], 0, 0);
    }
L_000a050c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000070u, 0, 0);
    }
L_000a0510:;
    {
        cpu->r[6] = (~0x00000000u);
    }
L_000a0514:;
    {
        cpu->r[9] = rd32(0x000a051cu + + 0x7cu);
    }
L_000a0518:;
    {
        cpu->r[8] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_000a051c:;
    {
        goto L_000a053c;
    }
L_000a0520:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[9]);
    }
L_000a0524:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x58u);
    }
L_000a0528:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_000a052c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000a0584;
        }
    }
L_000a0530:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000030u, 1, 1);
    }
L_000a0534:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_000a0538:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a0588;
        }
    }
L_000a053c:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000a0540:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000a0544:;
    {
        cpu->r[7] = rd32(cpu->r[4]);
    }
L_000a0548:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_000a054c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a0550:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a0520;
        }
    }
L_000a0554:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000a0558:;
    {
        cpu->r[14] = 0x000a055cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a055c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a0560:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a0520;
        }
    }
L_000a0564:;
    {
        cpu->r[0] = rd32(cpu->r[10] + cpu->r[9]);
    }
L_000a0568:;
    {
        cpu->r[14] = 0x000a056cu; fn_00094228(cpu);
    }
L_000a056c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000a0570:;
    {
        cpu->r[14] = 0x000a0574u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a0574:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[9]);
    }
L_000a0578:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x58u);
    }
L_000a057c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_000a0580:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a0530;
        }
    }
L_000a0584:;
    {
        cpu->r[5] = cpu->r[6];
    }
L_000a0588:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000a058c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a0590u)) return;
    }
}

/* _ZN4Game14IsGirlUnlockedEi @ 000a059c (arm) */
void fn_000a059c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a059c:;
    {
        cpu->r[2] = 0x000082ddu;
    }
L_000a05a0:;
    {
        cpu->r[3] = rd32(0x000a05a8u + + 0x44u);
    }
L_000a05a4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000a05a8:;
    {
        cpu->r[2] = rd8(cpu->r[0] + cpu->r[2]);
    }
L_000a05ac:;
    {
        cpu->r[3] = add_flags(cpu, 0x000a05b4u, cpu->r[3], 0, 0);
    }
L_000a05b0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000a05b4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000a05b8:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000a05bcu)) return;
        }
    }
L_000a05bc:;
    {
        cpu->r[2] = rd32(0x000a05c4u + + 0x2cu);
    }
L_000a05c0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00002180u, 0, 0);
    }
L_000a05c4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_000a05c8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000a05cc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000a05d0:;
    {
        cpu->r[4] = rd32(cpu->r[1] + + 0x4u);
    }
L_000a05d4:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000a05d8:;
    {
        cpu->r[14] = 0x000a05dcu; fn_000a04f8(cpu);
    }
L_000a05dc:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[0], 1, 1);
    }
L_000a05e0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000a05e4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000a05e8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000a05ecu)) return;
    }
}

/* _ZN4Game21GetUnlockedGirlsCountEv @ 000a05f4 (arm) */
void fn_000a05f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a05f4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000a05f8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000a05fc:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000a0600:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_000a0604:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000a0608:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a060c:;
    {
        cpu->r[14] = 0x000a0610u; fn_000a059c(cpu);
    }
L_000a0610:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000a0614:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a0618:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
        }
    }
L_000a061c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000005u, 1, 1);
    }
L_000a0620:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a0604;
        }
    }
L_000a0624:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000a0628:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a062cu)) return;
    }
}

/* _ZN4Game23UnlockItemsForEventsWonEv @ 000a062c (arm) */
void fn_000a062c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a062c:;
    {
        cpu->r[3] = 0x000086a0u;
    }
L_000a0630:;
    {
        cpu->r[1] = rd32(0x000a0638u + + 0x1a0u);
    }
L_000a0634:;
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
L_000a0638:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000a063c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_000a0640:;
    {
        cpu->r[1] = add_flags(cpu, 0x000a0648u, cpu->r[1], 0, 0);
    }
L_000a0644:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a0648:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000a064c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_000a0650:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a0758;
        }
    }
L_000a0654:;
    {
        cpu->r[3] = rd32(0x000a065cu + + 0x180u);
    }
L_000a0658:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000a065c:;
    {
        cpu->r[2] = rd32(0x000a0664u + + 0x17cu);
    }
L_000a0660:;
    {
        cpu->r[8] = 0x000086a4u;
    }
L_000a0664:;
    {
        cpu->r[9] = cpu->r[7];
    }
L_000a0668:;
    {
        cpu->r[11] = 0x0000002cu;
    }
L_000a066c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_000a0670:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_000a0674:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[7]);
    }
L_000a0678:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_000a067c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_000a0680:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000a0684:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_000a0688:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a068c:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_000a0690:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a07ac;
        }
    }
L_000a0694:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_000a0698:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_000a069c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_000a06a0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x60u);
    }
L_000a06a4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_000a06a8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000a0738;
        }
    }
L_000a06ac:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_000a06b0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_000a06b4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000a06b8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000a06bc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a0738;
        }
    }
L_000a06c0:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000a06c4:;
    {
        goto L_000a06d4;
    }
L_000a06c8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000a06cc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_000a06d0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a0738;
        }
    }
L_000a06d4:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[5] = v;
    }
L_000a06d8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], cpu->r[4], 0, 0);
    }
L_000a06dc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000a06e0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x8u);
    }
L_000a06e4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000005u, 1, 1);
    }
L_000a06e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a0760;
        }
    }
L_000a06ec:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_000a06f0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[4], 0, 0);
    }
L_000a06f4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000a06f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_000a06fc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000a0700:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x8u);
    }
L_000a0704:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_000a0708:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a06c8;
        }
    }
L_000a070c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xcu);
    }
L_000a0710:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x10u);
    }
L_000a0714:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_000a0718:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_000a071c:;
    {
        uint32_t v = cpu->r[11] * cpu->r[2] + cpu->r[6]; cpu->r[2] = v;
    }
L_000a0720:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00008700u, 0, 0);
    }
L_000a0724:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000074u, 0, 0);
    }
L_000a0728:;
    {
        wr32(cpu->r[2], cpu->r[9]);
    }
L_000a072c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000a0730:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_000a0734:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000a06d4;
        }
    }
L_000a0738:;
    {
        cpu->r[3] = 0x000086a0u;
    }
L_000a073c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_000a0740:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000188u, 0, 0);
    }
L_000a0744:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000a0748:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000a074c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_000a0750:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000a0754:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000a067c;
        }
    }
L_000a0758:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000a075c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a0760u)) return;
    }
L_000a0760:;
    {
        cpu->r[10] = rd32(cpu->r[3] + + 0xcu);
    }
L_000a0764:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a0768:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x10u);
    }
L_000a076c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000a0770:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_000a0774:;
    {
        cpu->r[14] = 0x000a0778u; fn_00096bb8(cpu);
    }
L_000a0778:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_000a077c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], shifter(cpu->r[10], 2, 2u, &shc), 0, 0);
    }
L_000a0780:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[6], cpu->r[10], 0, 0);
    }
L_000a0784:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_000a0788:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00008600u, 0, 0);
    }
L_000a078c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00008600u, 0, 0);
    }
L_000a0790:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x000000d8u, 0, 0);
    }
L_000a0794:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000000a8u, 0, 0);
    }
L_000a0798:;
    {
        wr8(cpu->r[3], cpu->r[9]);
    }
L_000a079c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a07a0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_000a07a4:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[10], cpu->r[1]);
        }
    }
L_000a07a8:;
    {
        goto L_000a06ec;
    }
L_000a07ac:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_000a07b0:;
    {
        cpu->r[14] = 0x000a07b4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a07b4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a07b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a0694;
        }
    }
L_000a07bc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_000a07c0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_000a07c4:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_000a07c8:;
    {
        cpu->r[14] = 0x000a07ccu; fn_00094228(cpu);
    }
L_000a07cc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_000a07d0:;
    {
        cpu->r[14] = 0x000a07d4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a07d4:;
    {
        goto L_000a0694;
    }
}

/* _ZN4Game19getDecalUnlockLevelEib @ 000a07e4 (arm) */
void fn_000a07e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a07e4:;
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
L_000a07e8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000031u, 1, 1);
    }
L_000a07ec:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_000a07f0:;
    {
        cpu->r[6] = rd32(0x000a07f8u + + 0x260u);
    }
L_000a07f4:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000a07f8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000a07fc:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_000a0800:;
    {
        cpu->r[6] = add_flags(cpu, 0x000a0808u, cpu->r[6], 0, 0);
    }
L_000a0804:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a0a18;
        }
    }
L_000a0808:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000a080c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a0820;
        }
    }
L_000a0810:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_000a0814:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a0818:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_000a081c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a08b8;
        }
    }
L_000a0820:;
    {
        cpu->r[11] = 0x00008698u;
    }
L_000a0824:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000a0828:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a082c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a08d4;
        }
    }
L_000a0830:;
    {
        cpu->r[3] = rd32(0x000a0838u + + 0x224u);
    }
L_000a0834:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000a0838:;
    {
        cpu->r[12] = rd32(0x000a0840u + + 0x220u);
    }
L_000a083c:;
    {
        cpu->r[8] = cpu->r[7];
    }
L_000a0840:;
    {
        cpu->r[9] = 0x0000869cu;
    }
L_000a0844:;
    {
        cpu->r[10] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000a0848:;
    {
        cpu->r[2] = rd32(cpu->r[10]);
    }
L_000a084c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000a0850:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a0854:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_000a0858:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a09dc;
        }
    }
L_000a085c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[12]);
    }
L_000a0860:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x94u);
    }
L_000a0864:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000a0868:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000a08c0;
        }
    }
L_000a086c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000a0870:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[7], 0, 0);
    }
L_000a0874:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x4u);
    }
L_000a0878:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000a087c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a08c0;
        }
    }
L_000a0880:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_000a0884:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000a0888:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000a088c:;
    {
        goto L_000a089c;
    }
L_000a0890:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_000a0894:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_000a0898:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a08c0;
        }
    }
L_000a089c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x8u);
    }
L_000a08a0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000003u, 1, 1);
    }
L_000a08a4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a0890;
        }
    }
L_000a08a8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_000a08ac:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_000a08b0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a0890;
        }
    }
L_000a08b4:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_000a08b8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000a08bc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a08c0u)) return;
    }
L_000a08c0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000a08c4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_000a08c8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000188u, 0, 0);
    }
L_000a08cc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_000a08d0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000a0848;
        }
    }
L_000a08d4:;
    {
        cpu->r[11] = 0x000086a0u;
    }
L_000a08d8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000a08dc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a08e0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a0a50;
        }
    }
L_000a08e4:;
    {
        cpu->r[3] = rd32(0x000a08ecu + + 0x170u);
    }
L_000a08e8:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000a08ec:;
    {
        cpu->r[12] = rd32(0x000a08f4u + + 0x16cu);
    }
L_000a08f0:;
    {
        cpu->r[8] = cpu->r[7];
    }
L_000a08f4:;
    {
        cpu->r[9] = 0x000086a4u;
    }
L_000a08f8:;
    {
        cpu->r[10] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000a08fc:;
    {
        goto L_000a0924;
    }
L_000a0900:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[12]);
    }
L_000a0904:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x60u);
    }
L_000a0908:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000a090c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a0980;
        }
    }
L_000a0910:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000a0914:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_000a0918:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000188u, 0, 0);
    }
L_000a091c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_000a0920:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a0a50;
        }
    }
L_000a0924:;
    {
        cpu->r[2] = rd32(cpu->r[10]);
    }
L_000a0928:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000a092c:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a0930:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_000a0934:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a0900;
        }
    }
L_000a0938:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a093c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_000a0940:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_000a0944:;
    {
        cpu->r[14] = 0x000a0948u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a0948:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_000a094c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_000a0950:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a0954:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a0900;
        }
    }
L_000a0958:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[12]);
    }
L_000a095c:;
    {
        cpu->r[14] = 0x000a0960u; fn_00094228(cpu);
    }
L_000a0960:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a0964:;
    {
        cpu->r[14] = 0x000a0968u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a0968:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_000a096c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_000a0970:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[12]);
    }
L_000a0974:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x60u);
    }
L_000a0978:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000a097c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000a0910;
        }
    }
L_000a0980:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000a0984:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[7], 0, 0);
    }
L_000a0988:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x4u);
    }
L_000a098c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000a0990:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a0910;
        }
    }
L_000a0994:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_000a0998:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000a099c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000a09a0:;
    {
        goto L_000a09b0;
    }
L_000a09a4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_000a09a8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_000a09ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a0910;
        }
    }
L_000a09b0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x8u);
    }
L_000a09b4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000003u, 1, 1);
    }
L_000a09b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a09a4;
        }
    }
L_000a09bc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_000a09c0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_000a09c4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a09a4;
        }
    }
L_000a09c8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_000a09cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a09d0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_000a09d4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a08b4;
        }
    }
L_000a09d8:;
    {
        goto L_000a08b8;
    }
L_000a09dc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a09e0:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_000a09e4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_000a09e8:;
    {
        cpu->r[14] = 0x000a09ecu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a09ec:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_000a09f0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_000a09f4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a09f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a085c;
        }
    }
L_000a09fc:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[12]);
    }
L_000a0a00:;
    {
        cpu->r[14] = 0x000a0a04u; fn_00094228(cpu);
    }
L_000a0a04:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a0a08:;
    {
        cpu->r[14] = 0x000a0a0cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a0a0c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_000a0a10:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_000a0a14:;
    {
        goto L_000a085c;
    }
L_000a0a18:;
    {
        cpu->r[1] = rd32(0x000a0a20u + + 0x44u);
    }
L_000a0a1c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000a0a20:;
    {
        cpu->r[12] = rd32(0x000a0a28u + + 0x40u);
    }
L_000a0a24:;
    {
        cpu->r[14] = 0x000022b9u;
    }
L_000a0a28:;
    {
        cpu->r[2] = rd32(0x000a0a30u + + 0x3cu);
    }
L_000a0a2c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000a0a34u, cpu->r[1], 0, 0);
    }
L_000a0a30:;
    {
        cpu->r[3] = rd32(0x000a0a38u + + 0x38u);
    }
L_000a0a34:;
    {
        cpu->r[12] = add_flags(cpu, 0x000a0a3cu, cpu->r[12], 0, 0);
    }
L_000a0a38:;
    {
        cpu->r[2] = add_flags(cpu, 0x000a0a40u, cpu->r[2], 0, 0);
    }
L_000a0a3c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000300u, 0, 0);
    }
L_000a0a40:;
    {
        cpu->r[3] = add_flags(cpu, 0x000a0a48u, cpu->r[3], 0, 0);
    }
L_000a0a44:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000a0a48:;
    {
        cpu->r[14] = 0x000a0a4cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000a0a4c:;
    {
        goto L_000a0820;
    }
L_000a0a50:;
    {
        cpu->r[0] = 0x00000064u;
    }
L_000a0a54:;
    {
        goto L_000a08b8;
    }
}

/* _ZN4Game18TraverseUnlockTreeEiRiS0_Rb @ 000a0a74 (arm) */
void fn_000a0a74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a0a74:;
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
L_000a0a78:;
    {
        cpu->r[4] = rd32(0x000a0a80u + + 0x168u);
    }
L_000a0a7c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000124u, 1, 0);
    }
L_000a0a80:;
    {
        cpu->r[7] = rd32(0x000a0a88u + + 0x164u);
    }
L_000a0a84:;
    {
        cpu->r[4] = add_flags(cpu, 0x000a0a8cu, cpu->r[4], 0, 0);
    }
L_000a0a88:;
    {
        cpu->r[11] = cpu->r[2];
    }
L_000a0a8c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x148u);
    }
L_000a0a90:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_000a0a94:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_000a0a98:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000a0a9c:;
    {
        cpu->r[2] = rd8(cpu->r[8]);
    }
L_000a0aa0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000a0aa4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000a0aa8:;
    {
        wr32(cpu->r[13] + + 0x11cu, cpu->r[3]);
    }
L_000a0aac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a0b54;
        }
    }
L_000a0ab0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000a0ab4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000a0ac4;
        }
    }
L_000a0ab8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x474u);
    }
L_000a0abc:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_000a0ac0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000a0af8;
        }
    }
L_000a0ac4:;
    {
        cpu->r[1] = rd32(0x000a0accu + + 0x124u);
    }
L_000a0ac8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000a0acc:;
    {
        cpu->r[12] = rd32(0x000a0ad4u + + 0x120u);
    }
L_000a0ad0:;
    {
        cpu->r[14] = 0x00002683u;
    }
L_000a0ad4:;
    {
        cpu->r[2] = rd32(0x000a0adcu + + 0x11cu);
    }
L_000a0ad8:;
    {
        cpu->r[1] = add_flags(cpu, 0x000a0ae0u, cpu->r[1], 0, 0);
    }
L_000a0adc:;
    {
        cpu->r[3] = rd32(0x000a0ae4u + + 0x118u);
    }
L_000a0ae0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000a0ae8u, cpu->r[12], 0, 0);
    }
L_000a0ae4:;
    {
        cpu->r[2] = add_flags(cpu, 0x000a0aecu, cpu->r[2], 0, 0);
    }
L_000a0ae8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000314u, 0, 0);
    }
L_000a0aec:;
    {
        cpu->r[3] = add_flags(cpu, 0x000a0af4u, cpu->r[3], 0, 0);
    }
L_000a0af0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000a0af4:;
    {
        cpu->r[14] = 0x000a0af8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000a0af8:;
    {
        cpu->r[1] = rd32(0x000a0b00u + + 0x100u);
    }
L_000a0afc:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000a0b00:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000a0b04:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000a0b08:;
    {
        cpu->r[1] = add_flags(cpu, 0x000a0b10u, cpu->r[1], 0, 0);
    }
L_000a0b0c:;
    {
        cpu->r[10] = rd32(0x000a0b14u + + 0xf0u);
    }
L_000a0b10:;
    {
        cpu->r[14] = 0x000a0b14u; imp_sprintf(cpu); /* sprintf */
    }
L_000a0b14:;
    {
        cpu->r[3] = rd32(0x000a0b1cu + + 0xecu);
    }
L_000a0b18:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000a0b1c:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 2u, &shc); cpu->r[2] = v;
    }
L_000a0b20:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a0b24:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_000a0b28:;
    {
        { uint32_t v = cpu->r[1] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a0b2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a0b74;
        }
    }
L_000a0b30:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000a0b34:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_000a0b38:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[5], 0, 0);
    }
L_000a0b3c:;
    {
        cpu->r[1] = rd8(cpu->r[1] + + 0x18cu);
    }
L_000a0b40:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000a0b44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a0bb4;
        }
    }
L_000a0b48:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000a0b4c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 1);
    }
L_000a0b50:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a0b24;
        }
    }
L_000a0b54:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000a0b58:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000a0b5c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x11cu);
    }
L_000a0b60:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000a0b64:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000a0b68:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a0be4;
        }
    }
L_000a0b6c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000124u, 0, 0);
    }
L_000a0b70:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a0b74u)) return;
    }
L_000a0b74:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000a0b78:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_000a0b7c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000a0b80:;
    {
        cpu->r[14] = 0x000a0b84u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a0b84:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_000a0b88:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000a0b8c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a0b90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a0b30;
        }
    }
L_000a0b94:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000a0b98:;
    {
        cpu->r[14] = 0x000a0b9cu; fn_00094228(cpu);
    }
L_000a0b9c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000a0ba0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000a0ba4:;
    {
        cpu->r[14] = 0x000a0ba8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a0ba8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000a0bac:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_000a0bb0:;
    {
        goto L_000a0b30;
    }
L_000a0bb4:;
    {
        cpu->r[1] = rd32(0x000a0bbcu + + 0x50u);
    }
L_000a0bb8:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_000a0bbc:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000a0bc0:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000a0bc4:;
    {
        cpu->r[1] = add_flags(cpu, 0x000a0bccu, cpu->r[1], 0, 0);
    }
L_000a0bc8:;
    {
        cpu->r[14] = 0x000a0bccu; imp_sprintf(cpu); /* sprintf */
    }
L_000a0bcc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_000a0bd0:;
    {
        wr32(cpu->r[11], cpu->r[6]);
    }
L_000a0bd4:;
    {
        wr32(cpu->r[3], cpu->r[5]);
    }
L_000a0bd8:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000a0bdc:;
    {
        wr8(cpu->r[8], cpu->r[3]);
    }
L_000a0be0:;
    {
        goto L_000a0b54;
    }
L_000a0be4:;
    {
        cpu->r[14] = 0x000a0be8u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_000a0be8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[10] & shifter(cpu->r[12], 2, 19u, &shc); cpu->r[9] = v;
        set_nz(cpu, v);
        }
    }
L_000a0bec:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_000a0bf0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[12], 4, 4u, &shc); cpu->r[13] = v;
        set_nz(cpu, v);
        }
    }
L_000a0bf4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[4], 3, 20u, &shc); cpu->r[13] = v;
        set_nz(cpu, v);
        }
    }
L_000a0bf8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[8], 4, 4u, &shc); cpu->r[13] = v;
        set_nz(cpu, v);
        }
    }
L_000a0bfc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[12], 4, (cpu->r[14] & 0xffu), &shc); cpu->r[13] = v;
        set_nz(cpu, v);
        }
    }
L_000a0c00:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[6] + (-cpu->r[12]);
        cpu->r[13] = (uint32_t)(int32_t)s8(cpu->r[6]);
        cpu->r[6] = wb_tmp;
        }
    }
L_000a0c04:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[4], 3, (cpu->r[3] & 0xffu), &shc); cpu->r[0] = v;
        }
    }
L_000a0c08:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[12], 3, (cpu->r[3] & 0xffu), &shc); cpu->r[0] = v;
        }
    }
L_000a0c0c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[4], 3, (0x000a0c14u & 0xffu), &shc); cpu->r[13] = v;
        set_nz(cpu, v);
        }
    }
}

/* _ZN4Game14GetPlayerMoneyEv @ 000a0c10 (arm) */
void fn_000a0c10(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a0c10:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000a0c14:;
    {
        cpu->r[4] = rd32(0x000a0c1cu + + 0x54u);
    }
L_000a0c18:;
    {
        cpu->r[3] = rd32(0x000a0c20u + + 0x54u);
    }
L_000a0c1c:;
    {
        cpu->r[4] = add_flags(cpu, 0x000a0c24u, cpu->r[4], 0, 0);
    }
L_000a0c20:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a0c24:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000a0c28:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a0c2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a0c40;
        }
    }
L_000a0c30:;
    {
        cpu->r[6] = rd32(0x000a0c38u + + 0x40u);
    }
L_000a0c34:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a0c38:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x5cu);
    }
L_000a0c3c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a0c40u)) return;
    }
L_000a0c40:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000a0c44:;
    {
        cpu->r[14] = 0x000a0c48u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a0c48:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a0c4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a0c30;
        }
    }
L_000a0c50:;
    {
        cpu->r[6] = rd32(0x000a0c58u + + 0x20u);
    }
L_000a0c54:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a0c58:;
    {
        cpu->r[14] = 0x000a0c5cu; fn_00094228(cpu);
    }
L_000a0c5c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000a0c60:;
    {
        cpu->r[14] = 0x000a0c64u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a0c64:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a0c68:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x5cu);
    }
L_000a0c6c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a0c70u)) return;
    }
}

/* _ZN4Game21UpdateTracksUnlockingEii @ 000a0c7c (arm) */
void fn_000a0c7c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a0c7c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000a0c80:;
    {
        cpu->r[4] = rd32(0x000a0c88u + + 0x64u);
    }
L_000a0c84:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000a0c88:;
    {
        cpu->r[14] = 0x000a0c8cu; fn_000a062c(cpu);
    }
L_000a0c8c:;
    {
        cpu->r[3] = rd32(0x000a0c94u + + 0x5cu);
    }
L_000a0c90:;
    {
        cpu->r[4] = add_flags(cpu, 0x000a0c98u, cpu->r[4], 0, 0);
    }
L_000a0c94:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a0c98:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000a0c9c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a0ca0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a0cc4;
        }
    }
L_000a0ca4:;
    {
        cpu->r[6] = rd32(0x000a0cacu + + 0x48u);
    }
L_000a0ca8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a0cac:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a0cb0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000a0cb4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x94u);
    }
L_000a0cb8:;
    {
        cpu->r[14] = 0x000a0cbcu; fn_0009fd1c(cpu);
    }
L_000a0cbc:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000a0cc0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a0cc4u)) return;
    }
L_000a0cc4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000a0cc8:;
    {
        cpu->r[14] = 0x000a0cccu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a0ccc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a0cd0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a0ca4;
        }
    }
L_000a0cd4:;
    {
        cpu->r[6] = rd32(0x000a0cdcu + + 0x18u);
    }
L_000a0cd8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a0cdc:;
    {
        cpu->r[14] = 0x000a0ce0u; fn_00094228(cpu);
    }
L_000a0ce0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000a0ce4:;
    {
        cpu->r[14] = 0x000a0ce8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a0ce8:;
    {
        goto L_000a0ca8;
    }
}

/* _ZN4Game17getCarUnlockLevelEib @ 000a0cf8 (arm) */
void fn_000a0cf8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a0cf8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000a0cfc:;
    {
        cpu->r[5] = rd32(0x000a0d04u + + 0x194u);
    }
L_000a0d00:;
    {
        cpu->r[3] = rd32(0x000a0d08u + + 0x194u);
    }
L_000a0d04:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000a0d08:;
    {
        cpu->r[5] = add_flags(cpu, 0x000a0d10u, cpu->r[5], 0, 0);
    }
L_000a0d0c:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_000a0d10:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_000a0d14:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000a0d18:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000a0d1c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a0d20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a0dc8;
        }
    }
L_000a0d24:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a0d28:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000a0d2c:;
    {
        cpu->r[14] = 0x000a0d30u; fn_0009613c(cpu);
    }
L_000a0d30:;
    {
        sub_flags(cpu, cpu->r[0], 0x0000001cu, 1, 1);
    }
L_000a0d34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a0e00;
        }
    }
L_000a0d38:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000a0d3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a0e14;
        }
    }
L_000a0d40:;
    {
        cpu->r[3] = 0x000086a0u;
    }
L_000a0d44:;
    {
        cpu->r[5] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000a0d48:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000a0d4c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a0dc0;
        }
    }
L_000a0d50:;
    {
        cpu->r[3] = 0x000086a4u;
    }
L_000a0d54:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000a0d58:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000a0d5c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x4u);
    }
L_000a0d60:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000a0d64:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
        }
    }
L_000a0d68:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = cpu->r[0];
        }
    }
L_000a0d6c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
        }
    }
L_000a0d70:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000a0d84;
        }
    }
L_000a0d74:;
    {
        goto L_000a0db0;
    }
L_000a0d78:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_000a0d7c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_000a0d80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a0db0;
        }
    }
L_000a0d84:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x8u);
    }
L_000a0d88:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_000a0d8c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a0d78;
        }
    }
L_000a0d90:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_000a0d94:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_000a0d98:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a0d78;
        }
    }
L_000a0d9c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000a0da0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_000a0da4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a0da8u)) return;
        }
    }
L_000a0da8:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_000a0dac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a0db0u)) return;
    }
L_000a0db0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_000a0db4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000188u, 0, 0);
    }
L_000a0db8:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[5], 1, 1);
    }
L_000a0dbc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a0d5c;
        }
    }
L_000a0dc0:;
    {
        cpu->r[0] = 0x00000064u;
    }
L_000a0dc4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a0dc8u)) return;
    }
L_000a0dc8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000a0dcc:;
    {
        cpu->r[14] = 0x000a0dd0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a0dd0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a0dd4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a0d24;
        }
    }
L_000a0dd8:;
    {
        cpu->r[3] = rd32(0x000a0de0u + + 0xc0u);
    }
L_000a0ddc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000a0de0:;
    {
        cpu->r[14] = 0x000a0de4u; fn_00094228(cpu);
    }
L_000a0de4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000a0de8:;
    {
        cpu->r[14] = 0x000a0decu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a0dec:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a0df0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000a0df4:;
    {
        cpu->r[14] = 0x000a0df8u; fn_0009613c(cpu);
    }
L_000a0df8:;
    {
        sub_flags(cpu, cpu->r[0], 0x0000001cu, 1, 1);
    }
L_000a0dfc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a0d38;
        }
    }
L_000a0e00:;
    {
        cpu->r[0] = 0x00000010u;
    }
L_000a0e04:;
    {
        cpu->r[14] = 0x000a0e08u; fn_000a5db0(cpu);
    }
L_000a0e08:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a0e0c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a0e10u)) return;
        }
    }
L_000a0e10:;
    {
        goto L_000a0d38;
    }
L_000a0e14:;
    {
        cpu->r[3] = 0x00008698u;
    }
L_000a0e18:;
    {
        cpu->r[5] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000a0e1c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000a0e20:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a0d40;
        }
    }
L_000a0e24:;
    {
        cpu->r[3] = 0x0000869cu;
    }
L_000a0e28:;
    {
        cpu->r[12] = cpu->r[7];
    }
L_000a0e2c:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000a0e30:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x4u);
    }
L_000a0e34:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000a0e38:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a0e84;
        }
    }
L_000a0e3c:;
    {
        sub_flags(cpu, cpu->r[4], 0x0000002cu, 1, 1);
    }
L_000a0e40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a0da8;
        }
    }
L_000a0e44:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_000a0e48:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000a0e4c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000a0e50:;
    {
        goto L_000a0e60;
    }
L_000a0e54:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_000a0e58:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_000a0e5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a0e84;
        }
    }
L_000a0e60:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x8u);
    }
L_000a0e64:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_000a0e68:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a0e54;
        }
    }
L_000a0e6c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xcu);
    }
L_000a0e70:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_000a0e74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a0da8;
        }
    }
L_000a0e78:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_000a0e7c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_000a0e80:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a0e60;
        }
    }
L_000a0e84:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_000a0e88:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000188u, 0, 0);
    }
L_000a0e8c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[5], 1, 1);
    }
L_000a0e90:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a0e30;
        }
    }
L_000a0e94:;
    {
        goto L_000a0d40;
    }
}

/* _ZN4Game14SetMusicVolumeEi @ 000a0ea4 (arm) */
void fn_000a0ea4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a0ea4:;
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
L_000a0ea8:;
    {
        cpu->r[4] = rd32(0x000a0eb0u + + 0xe0u);
    }
L_000a0eac:;
    {
        cpu->r[3] = rd32(0x000a0eb4u + + 0xe0u);
    }
L_000a0eb0:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a0eb4:;
    {
        cpu->r[4] = add_flags(cpu, 0x000a0ebcu, cpu->r[4], 0, 0);
    }
L_000a0eb8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[5] = 0x00000000u;
        }
    }
L_000a0ebc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a0ec0:;
    {
        cpu->r[10] = rd32(cpu->r[3]);
    }
L_000a0ec4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000a0ed0;
        }
    }
L_000a0ec8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000064u, 1, 1);
    }
L_000a0ecc:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[5] = 0x00000064u;
        }
    }
L_000a0ed0:;
    {
        cpu->r[7] = rd32(0x000a0ed8u + + 0xc0u);
    }
L_000a0ed4:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000a0ed8:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000a0edc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a0ee0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a0f44;
        }
    }
L_000a0ee4:;
    {
        cpu->r[6] = rd32(0x000a0eecu + + 0xb0u);
    }
L_000a0ee8:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a0eec:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000a0ef0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000a0ef4:;
    {
        cpu->r[14] = 0x000a0ef8u; fn_00093fb0(cpu);
    }
L_000a0ef8:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000a0efc:;
    {
        cpu->r[10] = rd32(cpu->r[10] + + 0x490u);
    }
L_000a0f00:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000a0f04:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a0f08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a0f6c;
        }
    }
L_000a0f0c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a0f10:;
    {
        cpu->r[14] = 0x000a0f14u; fn_00093f98(cpu);
    }
L_000a0f14:;
    {
        cpu->r[3] = 0x0000851fu;
    }
L_000a0f18:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x51ebu << 16);
    }
L_000a0f1c:;
    {
        uint32_t v = cpu->r[5] * cpu->r[0]; cpu->r[5] = v;
    }
L_000a0f20:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a0f24:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[5]; cpu->r[2] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_000a0f28:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 31u, &shc); cpu->r[5] = v;
    }
L_000a0f2c:;
    {
        cpu->r[5] = sub_flags(cpu, shifter(cpu->r[3], 1, 5u, &shc), cpu->r[5], 1, 0);
    }
L_000a0f30:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[5];
    }
L_000a0f34:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000a0f38:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000a0f3c:;
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
L_000a0f40:;
    {
        return fn_000fd2e8(cpu);
    }
L_000a0f44:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000a0f48:;
    {
        cpu->r[14] = 0x000a0f4cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a0f4c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a0f50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a0ee4;
        }
    }
L_000a0f54:;
    {
        cpu->r[6] = rd32(0x000a0f5cu + + 0x40u);
    }
L_000a0f58:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a0f5c:;
    {
        cpu->r[14] = 0x000a0f60u; fn_00094228(cpu);
    }
L_000a0f60:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000a0f64:;
    {
        cpu->r[14] = 0x000a0f68u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a0f68:;
    {
        goto L_000a0ee8;
    }
L_000a0f6c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a0f70:;
    {
        cpu->r[14] = 0x000a0f74u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a0f74:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a0f78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a0f0c;
        }
    }
L_000a0f7c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000a0f80:;
    {
        cpu->r[14] = 0x000a0f84u; fn_00094228(cpu);
    }
L_000a0f84:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a0f88:;
    {
        cpu->r[14] = 0x000a0f8cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a0f8c:;
    {
        goto L_000a0f0c;
    }
}

/* _ZN4Game20getTuningUnlockValueEiii @ 000a0fa0 (arm) */
void fn_000a0fa0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a0fa0:;
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
L_000a0fa4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000009u, 1, 1);
    }
L_000a0fa8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_000a0fac:;
    {
        cpu->r[6] = rd32(0x000a0fb4u + + 0x30cu);
    }
L_000a0fb0:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000a0fb4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000a0fb8:;
    {
        cpu->r[6] = add_flags(cpu, 0x000a0fc0u, cpu->r[6], 0, 0);
    }
L_000a0fbc:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_000a0fc0:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_000a0fc4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a1248;
        }
    }
L_000a0fc8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000a0fcc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_000a0fd0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a1288;
        }
    }
L_000a0fd4:;
    {
        cpu->r[8] = rd32(0x000a0fdcu + + 0x2e8u);
    }
L_000a0fd8:;
    {
        cpu->r[9] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_000a0fdc:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_000a0fe0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a0fe4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a1220;
        }
    }
L_000a0fe8:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000a0fec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a10fc;
        }
    }
L_000a0ff0:;
    {
        cpu->r[3] = 0x00008698u;
    }
L_000a0ff4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a0ff8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000a0ffc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a1104;
        }
    }
L_000a1000:;
    {
        cpu->r[9] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_000a1004:;
    {
        cpu->r[11] = 0x0000869cu;
    }
L_000a1008:;
    {
        cpu->r[10] = rd32(0x000a1010u + + 0x2b8u);
    }
L_000a100c:;
    {
        cpu->r[8] = cpu->r[7];
    }
L_000a1010:;
    {
        goto L_000a1038;
    }
L_000a1014:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_000a1018:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x94u);
    }
L_000a101c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_000a1020:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a1094;
        }
    }
L_000a1024:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a1028:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_000a102c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000188u, 0, 0);
    }
L_000a1030:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[8], 1, 1);
    }
L_000a1034:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a1104;
        }
    }
L_000a1038:;
    {
        cpu->r[1] = rd32(cpu->r[9]);
    }
L_000a103c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000a1040:;
    {
        { uint32_t v = cpu->r[1] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a1044:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[7]);
    }
L_000a1048:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a1014;
        }
    }
L_000a104c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000a1050:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_000a1054:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_000a1058:;
    {
        cpu->r[14] = 0x000a105cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a105c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_000a1060:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_000a1064:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a1068:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a1014;
        }
    }
L_000a106c:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_000a1070:;
    {
        cpu->r[14] = 0x000a1074u; fn_00094228(cpu);
    }
L_000a1074:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000a1078:;
    {
        cpu->r[14] = 0x000a107cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a107c:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_000a1080:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_000a1084:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_000a1088:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x94u);
    }
L_000a108c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_000a1090:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000a1024;
        }
    }
L_000a1094:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000a1098:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[7], 0, 0);
    }
L_000a109c:;
    {
        cpu->r[0] = rd32(cpu->r[12] + + 0x4u);
    }
L_000a10a0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a10a4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a1024;
        }
    }
L_000a10a8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_000a10ac:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000a10b0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_000a10b4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_000a10b8:;
    {
        goto L_000a10c8;
    }
L_000a10bc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_000a10c0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_000a10c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a1024;
        }
    }
L_000a10c8:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x8u);
    }
L_000a10cc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 1);
    }
L_000a10d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a10bc;
        }
    }
L_000a10d4:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0xcu);
    }
L_000a10d8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 1);
    }
L_000a10dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a10bc;
        }
    }
L_000a10e0:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x10u);
    }
L_000a10e4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000a10e8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 1);
    }
L_000a10ec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a10bc;
        }
    }
L_000a10f0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_000a10f4:;
    {
        cpu->r[0] = rd32(cpu->r[12]);
    }
L_000a10f8:;
    {
        goto L_000a1108;
    }
L_000a10fc:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_000a1100:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a1110;
        }
    }
L_000a1104:;
    {
        cpu->r[0] = 0x00000064u;
    }
L_000a1108:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_000a110c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a1110u)) return;
    }
L_000a1110:;
    {
        cpu->r[3] = 0x000086a0u;
    }
L_000a1114:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a1118:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000a111c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a1104;
        }
    }
L_000a1120:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000a1124:;
    {
        cpu->r[9] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_000a1128:;
    {
        cpu->r[10] = rd32(0x000a1130u + + 0x198u);
    }
L_000a112c:;
    {
        cpu->r[8] = cpu->r[7];
    }
L_000a1130:;
    {
        cpu->r[11] = 0x000086a4u;
    }
L_000a1134:;
    {
        goto L_000a115c;
    }
L_000a1138:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_000a113c:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x60u);
    }
L_000a1140:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_000a1144:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a11b8;
        }
    }
L_000a1148:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a114c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_000a1150:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000188u, 0, 0);
    }
L_000a1154:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[8], 1, 1);
    }
L_000a1158:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a1104;
        }
    }
L_000a115c:;
    {
        cpu->r[1] = rd32(cpu->r[9]);
    }
L_000a1160:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000a1164:;
    {
        { uint32_t v = cpu->r[1] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a1168:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[7]);
    }
L_000a116c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a1138;
        }
    }
L_000a1170:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000a1174:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_000a1178:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_000a117c:;
    {
        cpu->r[14] = 0x000a1180u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a1180:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_000a1184:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_000a1188:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a118c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a1138;
        }
    }
L_000a1190:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_000a1194:;
    {
        cpu->r[14] = 0x000a1198u; fn_00094228(cpu);
    }
L_000a1198:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000a119c:;
    {
        cpu->r[14] = 0x000a11a0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a11a0:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_000a11a4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_000a11a8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_000a11ac:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x60u);
    }
L_000a11b0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_000a11b4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000a1148;
        }
    }
L_000a11b8:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000a11bc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[7], 0, 0);
    }
L_000a11c0:;
    {
        cpu->r[0] = rd32(cpu->r[12] + + 0x4u);
    }
L_000a11c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a11c8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a1148;
        }
    }
L_000a11cc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_000a11d0:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000a11d4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_000a11d8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_000a11dc:;
    {
        goto L_000a11ec;
    }
L_000a11e0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_000a11e4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_000a11e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a1148;
        }
    }
L_000a11ec:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x8u);
    }
L_000a11f0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 1);
    }
L_000a11f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a11e0;
        }
    }
L_000a11f8:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0xcu);
    }
L_000a11fc:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 1);
    }
L_000a1200:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a11e0;
        }
    }
L_000a1204:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x10u);
    }
L_000a1208:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000a120c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 1);
    }
L_000a1210:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a11e0;
        }
    }
L_000a1214:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_000a1218:;
    {
        cpu->r[0] = rd32(cpu->r[12]);
    }
L_000a121c:;
    {
        goto L_000a1108;
    }
L_000a1220:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000a1224:;
    {
        cpu->r[14] = 0x000a1228u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a1228:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a122c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a0fe8;
        }
    }
L_000a1230:;
    {
        cpu->r[10] = rd32(0x000a1238u + + 0x90u);
    }
L_000a1234:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_000a1238:;
    {
        cpu->r[14] = 0x000a123cu; fn_00094228(cpu);
    }
L_000a123c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000a1240:;
    {
        cpu->r[14] = 0x000a1244u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a1244:;
    {
        goto L_000a0fe8;
    }
L_000a1248:;
    {
        cpu->r[1] = rd32(0x000a1250u + + 0x7cu);
    }
L_000a124c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000a1250:;
    {
        cpu->r[12] = rd32(0x000a1258u + + 0x78u);
    }
L_000a1254:;
    {
        cpu->r[14] = 0x00002391u;
    }
L_000a1258:;
    {
        cpu->r[2] = rd32(0x000a1260u + + 0x74u);
    }
L_000a125c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000a1264u, cpu->r[1], 0, 0);
    }
L_000a1260:;
    {
        cpu->r[3] = rd32(0x000a1268u + + 0x70u);
    }
L_000a1264:;
    {
        cpu->r[12] = add_flags(cpu, 0x000a126cu, cpu->r[12], 0, 0);
    }
L_000a1268:;
    {
        cpu->r[2] = add_flags(cpu, 0x000a1270u, cpu->r[2], 0, 0);
    }
L_000a126c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000328u, 0, 0);
    }
L_000a1270:;
    {
        cpu->r[3] = add_flags(cpu, 0x000a1278u, cpu->r[3], 0, 0);
    }
L_000a1274:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000a1278:;
    {
        cpu->r[14] = 0x000a127cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000a127c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000a1280:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_000a1284:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000a0fd4;
        }
    }
L_000a1288:;
    {
        cpu->r[1] = rd32(0x000a1290u + + 0x4cu);
    }
L_000a128c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000a1290:;
    {
        cpu->r[12] = rd32(0x000a1298u + + 0x48u);
    }
L_000a1294:;
    {
        cpu->r[14] = 0x00002392u;
    }
L_000a1298:;
    {
        cpu->r[2] = rd32(0x000a12a0u + + 0x44u);
    }
L_000a129c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000a12a4u, cpu->r[1], 0, 0);
    }
L_000a12a0:;
    {
        cpu->r[3] = rd32(0x000a12a8u + + 0x40u);
    }
L_000a12a4:;
    {
        cpu->r[12] = add_flags(cpu, 0x000a12acu, cpu->r[12], 0, 0);
    }
L_000a12a8:;
    {
        cpu->r[2] = add_flags(cpu, 0x000a12b0u, cpu->r[2], 0, 0);
    }
L_000a12ac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000328u, 0, 0);
    }
L_000a12b0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000a12b8u, cpu->r[3], 0, 0);
    }
L_000a12b4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000a12b8:;
    {
        cpu->r[14] = 0x000a12bcu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000a12bc:;
    {
        goto L_000a0fd4;
    }
}

/* _ZN4Game11FreeAppDataEv @ 000a12ec (arm) */
void fn_000a12ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a12ec:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x490u);
    }
L_000a12f0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000a12f4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a12f8:;
    {
        cpu->r[4] = rd32(0x000a1300u + + 0x620u);
    }
L_000a12fc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000a1300:;
    {
        cpu->r[4] = add_flags(cpu, 0x000a1308u, cpu->r[4], 0, 0);
    }
L_000a1304:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a1320;
        }
    }
L_000a1308:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000a130c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000a1310:;
    {
        cpu->r[14] = 0x000a1318u;
    }
L_000a1314:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a1318u)) return;
    }
L_000a1318:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a131c:;
    {
        wr32(cpu->r[5] + + 0x490u, cpu->r[3]);
    }
L_000a1320:;
    {
        cpu->r[6] = 0x00001becu;
    }
L_000a1324:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000a1328:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a132c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a133c;
        }
    }
L_000a1330:;
    {
        cpu->r[14] = 0x000a1334u; fn_0018ba20(cpu);
    }
L_000a1334:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a1338:;
    {
        wr32(cpu->r[5] + cpu->r[6], cpu->r[3]);
    }
L_000a133c:;
    {
        cpu->r[6] = 0x00001bf0u;
    }
L_000a1340:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000a1344:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a1348:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a1358;
        }
    }
L_000a134c:;
    {
        cpu->r[14] = 0x000a1350u; fn_0018ba20(cpu);
    }
L_000a1350:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a1354:;
    {
        wr32(cpu->r[5] + cpu->r[6], cpu->r[3]);
    }
L_000a1358:;
    {
        cpu->r[6] = 0x00001bf4u;
    }
L_000a135c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000a1360:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a1364:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a1374;
        }
    }
L_000a1368:;
    {
        cpu->r[14] = 0x000a136cu; fn_0018ba20(cpu);
    }
L_000a136c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a1370:;
    {
        wr32(cpu->r[5] + cpu->r[6], cpu->r[3]);
    }
L_000a1374:;
    {
        cpu->r[6] = 0x00001bf8u;
    }
L_000a1378:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000a137c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a1380:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a1390;
        }
    }
L_000a1384:;
    {
        cpu->r[14] = 0x000a1388u; fn_0018ba20(cpu);
    }
L_000a1388:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a138c:;
    {
        wr32(cpu->r[5] + cpu->r[6], cpu->r[3]);
    }
L_000a1390:;
    {
        cpu->r[6] = 0x00001bfcu;
    }
L_000a1394:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000a1398:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a139c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a13ac;
        }
    }
L_000a13a0:;
    {
        cpu->r[14] = 0x000a13a4u; fn_0018ba20(cpu);
    }
L_000a13a4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a13a8:;
    {
        wr32(cpu->r[5] + cpu->r[6], cpu->r[3]);
    }
L_000a13ac:;
    {
        cpu->r[6] = 0x00001c00u;
    }
L_000a13b0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000a13b4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a13b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a13c8;
        }
    }
L_000a13bc:;
    {
        cpu->r[14] = 0x000a13c0u; fn_0018ba20(cpu);
    }
L_000a13c0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a13c4:;
    {
        wr32(cpu->r[5] + cpu->r[6], cpu->r[3]);
    }
L_000a13c8:;
    {
        cpu->r[6] = 0x00001c04u;
    }
L_000a13cc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000a13d0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a13d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a13e4;
        }
    }
L_000a13d8:;
    {
        cpu->r[14] = 0x000a13dcu; fn_0018ba20(cpu);
    }
L_000a13dc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a13e0:;
    {
        wr32(cpu->r[5] + cpu->r[6], cpu->r[3]);
    }
L_000a13e4:;
    {
        cpu->r[6] = 0x00001c08u;
    }
L_000a13e8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000a13ec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a13f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a1400;
        }
    }
L_000a13f4:;
    {
        cpu->r[14] = 0x000a13f8u; fn_0018ba20(cpu);
    }
L_000a13f8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a13fc:;
    {
        wr32(cpu->r[5] + cpu->r[6], cpu->r[3]);
    }
L_000a1400:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000a1404:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000a1408:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[5], 0x00001c00u, 0, 0);
    }
L_000a140c:;
    {
        cpu->r[14] = 0x000a1414u;
    }
L_000a1410:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x7cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a1414u)) return;
    }
L_000a1414:;
    {
        cpu->r[7] = 0x00001d64u;
    }
L_000a1418:;
    {
        cpu->r[14] = 0x000a141cu; fn_00190860(cpu);
    }
L_000a141c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000010u, 0, 0);
    }
L_000a1420:;
    {
        cpu->r[14] = 0x000a1424u; fn_0012c280(cpu);
    }
L_000a1424:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000a1428:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000a142c:;
    {
        cpu->r[14] = 0x000a1430u; fn_000f35e4(cpu);
    }
L_000a1430:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000a1434:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a1438:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a1454;
        }
    }
L_000a143c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000a1440:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000a1444:;
    {
        cpu->r[14] = 0x000a144cu;
    }
L_000a1448:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a144cu)) return;
    }
L_000a144c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a1450:;
    {
        wr32(cpu->r[5] + cpu->r[7], cpu->r[3]);
    }
L_000a1454:;
    {
        cpu->r[8] = 0x00001bc8u;
    }
L_000a1458:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000a145c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000a1460:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a147c;
        }
    }
L_000a1464:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a1468:;
    {
        cpu->r[14] = 0x000a146cu; fn_000cbb24(cpu);
    }
L_000a146c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a1470:;
    {
        cpu->r[14] = 0x000a1474u; fn_0018ba20(cpu);
    }
L_000a1474:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a1478:;
    {
        wr32(cpu->r[5] + cpu->r[8], cpu->r[3]);
    }
L_000a147c:;
    {
        cpu->r[7] = 0x0000869cu;
    }
L_000a1480:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000a1484:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a1488:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a1498;
        }
    }
L_000a148c:;
    {
        cpu->r[14] = 0x000a1490u; fn_0018ba60(cpu);
    }
L_000a1490:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a1494:;
    {
        wr32(cpu->r[5] + cpu->r[7], cpu->r[3]);
    }
L_000a1498:;
    {
        cpu->r[7] = 0x000086a4u;
    }
L_000a149c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000a14a0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a14a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a14b4;
        }
    }
L_000a14a8:;
    {
        cpu->r[14] = 0x000a14acu; fn_0018ba60(cpu);
    }
L_000a14ac:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a14b0:;
    {
        wr32(cpu->r[5] + cpu->r[7], cpu->r[3]);
    }
L_000a14b4:;
    {
        cpu->r[3] = rd32(0x000a14bcu + + 0x468u);
    }
L_000a14b8:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a14bc:;
    {
        cpu->r[7] = rd32(cpu->r[8]);
    }
L_000a14c0:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000a14c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a14e0;
        }
    }
L_000a14c8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a14cc:;
    {
        cpu->r[14] = 0x000a14d0u; fn_00132f60(cpu);
    }
L_000a14d0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a14d4:;
    {
        cpu->r[14] = 0x000a14d8u; fn_0018ba20(cpu);
    }
L_000a14d8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a14dc:;
    {
        wr32(cpu->r[8], cpu->r[3]);
    }
L_000a14e0:;
    {
        cpu->r[8] = rd32(0x000a14e8u + + 0x440u);
    }
L_000a14e4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000a14e8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000a14ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a14f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a153c;
        }
    }
L_000a14f4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + - 0x4u);
    }
L_000a14f8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 4u, &shc), 0, 0);
    }
L_000a14fc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_000a1500:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a150c;
        }
    }
L_000a1504:;
    {
        goto L_000a1528;
    }
L_000a1508:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a150c:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000010u, 1, 0);
    }
L_000a1510:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a1514:;
    {
        cpu->r[14] = 0x000a1518u; fn_001576a8(cpu);
    }
L_000a1518:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000a151c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000a1520:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 1);
    }
L_000a1524:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a1508;
        }
    }
L_000a1528:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 0);
    }
L_000a152c:;
    {
        cpu->r[14] = 0x000a1530u; fn_0018ba60(cpu);
    }
L_000a1530:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000a1534:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000a1538:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_000a153c:;
    {
        cpu->r[3] = rd32(0x000a1544u + + 0x3e8u);
    }
L_000a1540:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a1544:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000a1548:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a154c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a1568;
        }
    }
L_000a1550:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000a1554:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000a1558:;
    {
        cpu->r[14] = 0x000a1560u;
    }
L_000a155c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a1560u)) return;
    }
L_000a1560:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a1564:;
    {
        wr32(cpu->r[7], cpu->r[3]);
    }
L_000a1568:;
    {
        cpu->r[3] = rd32(0x000a1570u + + 0x3c0u);
    }
L_000a156c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a1570:;
    {
        cpu->r[7] = rd32(cpu->r[8]);
    }
L_000a1574:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000a1578:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a1594;
        }
    }
L_000a157c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a1580:;
    {
        cpu->r[14] = 0x000a1584u; fn_00132100(cpu);
    }
L_000a1584:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a1588:;
    {
        cpu->r[14] = 0x000a158cu; fn_0018ba20(cpu);
    }
L_000a158c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a1590:;
    {
        wr32(cpu->r[8], cpu->r[3]);
    }
L_000a1594:;
    {
        cpu->r[7] = 0x00001becu;
    }
L_000a1598:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000a159c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a15a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a15b0;
        }
    }
L_000a15a4:;
    {
        cpu->r[14] = 0x000a15a8u; fn_0018ba20(cpu);
    }
L_000a15a8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a15ac:;
    {
        wr32(cpu->r[5] + cpu->r[7], cpu->r[3]);
    }
L_000a15b0:;
    {
        cpu->r[7] = 0x00001bf0u;
    }
L_000a15b4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000a15b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a15bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a15cc;
        }
    }
L_000a15c0:;
    {
        cpu->r[14] = 0x000a15c4u; fn_0018ba20(cpu);
    }
L_000a15c4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a15c8:;
    {
        wr32(cpu->r[5] + cpu->r[7], cpu->r[3]);
    }
L_000a15cc:;
    {
        cpu->r[7] = 0x00001bf4u;
    }
L_000a15d0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000a15d4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a15d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a15e8;
        }
    }
L_000a15dc:;
    {
        cpu->r[14] = 0x000a15e0u; fn_0018ba20(cpu);
    }
L_000a15e0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a15e4:;
    {
        wr32(cpu->r[5] + cpu->r[7], cpu->r[3]);
    }
L_000a15e8:;
    {
        cpu->r[7] = 0x00001bf8u;
    }
L_000a15ec:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000a15f0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a15f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a1604;
        }
    }
L_000a15f8:;
    {
        cpu->r[14] = 0x000a15fcu; fn_0018ba20(cpu);
    }
L_000a15fc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a1600:;
    {
        wr32(cpu->r[5] + cpu->r[7], cpu->r[3]);
    }
L_000a1604:;
    {
        cpu->r[7] = 0x00001bfcu;
    }
L_000a1608:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000a160c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a1610:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a1620;
        }
    }
L_000a1614:;
    {
        cpu->r[14] = 0x000a1618u; fn_0018ba20(cpu);
    }
L_000a1618:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a161c:;
    {
        wr32(cpu->r[5] + cpu->r[7], cpu->r[3]);
    }
L_000a1620:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000a1624:;
    {
        cpu->r[8] = cpu->r[7];
    }
L_000a1628:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000a162c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_000a1630:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a1634:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a1640;
        }
    }
L_000a1638:;
    {
        cpu->r[14] = 0x000a163cu; fn_0018ba20(cpu);
    }
L_000a163c:;
    {
        wr32(cpu->r[6], cpu->r[8]);
    }
L_000a1640:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000003u, 1, 1);
    }
L_000a1644:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_000a1648:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a1628;
        }
    }
L_000a164c:;
    {
        cpu->r[6] = 0x00001bc0u;
    }
L_000a1650:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000a1654:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a1658:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a1674;
        }
    }
L_000a165c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000a1660:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000a1664:;
    {
        cpu->r[14] = 0x000a166cu;
    }
L_000a1668:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a166cu)) return;
    }
L_000a166c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a1670:;
    {
        wr32(cpu->r[5] + cpu->r[6], cpu->r[3]);
    }
L_000a1674:;
    {
        cpu->r[6] = 0x00001bc4u;
    }
L_000a1678:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000a167c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a1680:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a169c;
        }
    }
L_000a1684:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000a1688:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000a168c:;
    {
        cpu->r[14] = 0x000a1694u;
    }
L_000a1690:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a1694u)) return;
    }
L_000a1694:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a1698:;
    {
        wr32(cpu->r[5] + cpu->r[6], cpu->r[3]);
    }
L_000a169c:;
    {
        cpu->r[6] = 0x00006774u;
    }
L_000a16a0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000a16a4:;
    {
        cpu->r[14] = 0x000a16a8u; fn_00096928(cpu);
    }
L_000a16a8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000a16ac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a16b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a16cc;
        }
    }
L_000a16b4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000a16b8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000a16bc:;
    {
        cpu->r[14] = 0x000a16c4u;
    }
L_000a16c0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a16c4u)) return;
    }
L_000a16c4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a16c8:;
    {
        wr32(cpu->r[5] + cpu->r[6], cpu->r[3]);
    }
L_000a16cc:;
    {
        cpu->r[6] = 0x00006778u;
    }
L_000a16d0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000a16d4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a16d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a16f4;
        }
    }
L_000a16dc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000a16e0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000a16e4:;
    {
        cpu->r[14] = 0x000a16ecu;
    }
L_000a16e8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a16ecu)) return;
    }
L_000a16ec:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a16f0:;
    {
        wr32(cpu->r[5] + cpu->r[6], cpu->r[3]);
    }
L_000a16f4:;
    {
        cpu->r[6] = 0x00006788u;
    }
L_000a16f8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000a16fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a1700:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a171c;
        }
    }
L_000a1704:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000a1708:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000a170c:;
    {
        cpu->r[14] = 0x000a1714u;
    }
L_000a1710:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a1714u)) return;
    }
L_000a1714:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a1718:;
    {
        wr32(cpu->r[5] + cpu->r[6], cpu->r[3]);
    }
L_000a171c:;
    {
        cpu->r[6] = 0x00006770u;
    }
L_000a1720:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000a1724:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a1728:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a1744;
        }
    }
L_000a172c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000a1730:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000a1734:;
    {
        cpu->r[14] = 0x000a173cu;
    }
L_000a1738:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a173cu)) return;
    }
L_000a173c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a1740:;
    {
        wr32(cpu->r[5] + cpu->r[6], cpu->r[3]);
    }
L_000a1744:;
    {
        cpu->r[6] = 0x00006764u;
    }
L_000a1748:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000a174c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a1750:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a176c;
        }
    }
L_000a1754:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000a1758:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000a175c:;
    {
        cpu->r[14] = 0x000a1764u;
    }
L_000a1760:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a1764u)) return;
    }
L_000a1764:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a1768:;
    {
        wr32(cpu->r[5] + cpu->r[6], cpu->r[3]);
    }
L_000a176c:;
    {
        cpu->r[6] = 0x00006768u;
    }
L_000a1770:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000a1774:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a1778:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a1794;
        }
    }
L_000a177c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000a1780:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000a1784:;
    {
        cpu->r[14] = 0x000a178cu;
    }
L_000a1788:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a178cu)) return;
    }
L_000a178c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a1790:;
    {
        wr32(cpu->r[5] + cpu->r[6], cpu->r[3]);
    }
L_000a1794:;
    {
        cpu->r[6] = 0x0000677cu;
    }
L_000a1798:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000a179c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a17a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a17bc;
        }
    }
L_000a17a4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000a17a8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000a17ac:;
    {
        cpu->r[14] = 0x000a17b4u;
    }
L_000a17b0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a17b4u)) return;
    }
L_000a17b4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a17b8:;
    {
        wr32(cpu->r[5] + cpu->r[6], cpu->r[3]);
    }
L_000a17bc:;
    {
        cpu->r[6] = 0x0000676cu;
    }
L_000a17c0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000a17c4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a17c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a17e4;
        }
    }
L_000a17cc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000a17d0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000a17d4:;
    {
        cpu->r[14] = 0x000a17dcu;
    }
L_000a17d8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a17dcu)) return;
    }
L_000a17dc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a17e0:;
    {
        wr32(cpu->r[5] + cpu->r[6], cpu->r[3]);
    }
L_000a17e4:;
    {
        cpu->r[3] = rd32(0x000a17ecu + + 0x148u);
    }
L_000a17e8:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a17ec:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a17f0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a17f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a18f8;
        }
    }
L_000a17f8:;
    {
        cpu->r[8] = rd32(0x000a1800u + + 0x138u);
    }
L_000a17fc:;
    {
        cpu->r[7] = 0x00008548u;
    }
L_000a1800:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000a1804:;
    {
        cpu->r[14] = 0x000a1808u; fn_00095534(cpu);
    }
L_000a1808:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000a180c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000a1810:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a182c;
        }
    }
L_000a1814:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a1818:;
    {
        cpu->r[14] = 0x000a181cu; fn_00188048(cpu);
    }
L_000a181c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a1820:;
    {
        cpu->r[14] = 0x000a1824u; fn_0018ba20(cpu);
    }
L_000a1824:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a1828:;
    {
        wr32(cpu->r[5] + cpu->r[7], cpu->r[3]);
    }
L_000a182c:;
    {
        cpu->r[3] = rd32(0x000a1834u + + 0x108u);
    }
L_000a1830:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a1834:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a1838:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a183c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a18b4;
        }
    }
L_000a1840:;
    {
        cpu->r[5] = rd32(0x000a1848u + + 0xf8u);
    }
L_000a1844:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000a1848:;
    {
        cpu->r[14] = 0x000a184cu; fn_0018a03c(cpu);
    }
L_000a184c:;
    {
        cpu->r[3] = rd32(0x000a1854u + + 0xf0u);
    }
L_000a1850:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a1854:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a1858:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a185c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a1870;
        }
    }
L_000a1860:;
    {
        cpu->r[5] = rd32(0x000a1868u + + 0xe0u);
    }
L_000a1864:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000a1868:;
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
L_000a186c:;
    {
        return fn_0018ac4c(cpu);
    }
L_000a1870:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a1874:;
    {
        cpu->r[14] = 0x000a1878u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a1878:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a187c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a1860;
        }
    }
L_000a1880:;
    {
        cpu->r[5] = rd32(0x000a1888u + + 0xc0u);
    }
L_000a1884:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000a1888:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a188c:;
    {
        cpu->r[14] = 0x000a1890u; fn_0018aa20(cpu);
    }
L_000a1890:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a1894:;
    {
        cpu->r[14] = 0x000a1898u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a1898:;
    {
        cpu->r[3] = rd32(0x000a18a0u + + 0xacu);
    }
L_000a189c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a18a0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a18a4:;
    {
        cpu->r[3] = rd32(0x000a18acu + + 0xa4u);
    }
L_000a18a8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a18ac:;
    {
        cpu->r[14] = 0x000a18b0u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000a18b0:;
    {
        goto L_000a1864;
    }
L_000a18b4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a18b8:;
    {
        cpu->r[14] = 0x000a18bcu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a18bc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a18c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a1840;
        }
    }
L_000a18c4:;
    {
        cpu->r[5] = rd32(0x000a18ccu + + 0x74u);
    }
L_000a18c8:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000a18cc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a18d0:;
    {
        cpu->r[14] = 0x000a18d4u; fn_00189f48(cpu);
    }
L_000a18d4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a18d8:;
    {
        cpu->r[14] = 0x000a18dcu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a18dc:;
    {
        cpu->r[3] = rd32(0x000a18e4u + + 0x70u);
    }
L_000a18e0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a18e4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a18e8:;
    {
        cpu->r[3] = rd32(0x000a18f0u + + 0x60u);
    }
L_000a18ec:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a18f0:;
    {
        cpu->r[14] = 0x000a18f4u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000a18f4:;
    {
        goto L_000a1844;
    }
L_000a18f8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a18fc:;
    {
        cpu->r[14] = 0x000a1900u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a1900:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a1904:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a17f8;
        }
    }
L_000a1908:;
    {
        cpu->r[8] = rd32(0x000a1910u + + 0x28u);
    }
L_000a190c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000a1910:;
    {
        cpu->r[14] = 0x000a1914u; fn_00094228(cpu);
    }
L_000a1914:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a1918:;
    {
        cpu->r[14] = 0x000a191cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a191c:;
    {
        goto L_000a17fc;
    }
}

/* _ZN4GameD1Ev @ 000a1958 (arm) */
void fn_000a1958(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a1958:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000a195c:;
    {
        cpu->r[4] = rd32(0x000a1964u + + 0x240u);
    }
L_000a1960:;
    {
        cpu->r[3] = rd32(0x000a1968u + + 0x240u);
    }
L_000a1964:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000a1968:;
    {
        cpu->r[4] = add_flags(cpu, 0x000a1970u, cpu->r[4], 0, 0);
    }
L_000a196c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a1970:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x000000a0u, 0, 0);
    }
L_000a1974:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_000a1978:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_000a197c:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_000a1980:;
    {
        cpu->r[14] = 0x000a1984u; fn_000a12ec(cpu);
    }
L_000a1984:;
    {
        cpu->r[14] = 0x000a1988u; fn_00095d84(cpu);
    }
L_000a1988:;
    {
        cpu->r[3] = rd32(0x000a1990u + + 0x21cu);
    }
L_000a198c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a1990:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000a1994:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a1998:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a19a0;
        }
    }
L_000a199c:;
    {
        cpu->r[14] = 0x000a19a0u; fn_00131370(cpu);
    }
L_000a19a0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[5], 0x0001e400u, 0, 0);
    }
L_000a19a4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[8], 0x00000380u, 0, 0);
    }
L_000a19a8:;
    {
        cpu->r[0] = rd32(cpu->r[8] + + 0x380u);
    }
L_000a19ac:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 1);
    }
L_000a19b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a19d0;
        }
    }
L_000a19b4:;
    {
        cpu->r[4] = rd32(cpu->r[0]);
    }
L_000a19b8:;
    {
        cpu->r[1] = 0x0000000cu;
    }
L_000a19bc:;
    {
        cpu->r[14] = 0x000a19c0u; fn_002082a8(cpu);
    }
L_000a19c0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[7], 1, 1);
    }
L_000a19c4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a19c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a19b4;
        }
    }
L_000a19cc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a19d0:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x370u);
    }
L_000a19d4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[8], 0x00000370u, 0, 0);
    }
L_000a19d8:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[0]);
    }
L_000a19dc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_000a19e0:;
    {
        wr32(cpu->r[8] + + 0x380u, cpu->r[0]);
    }
L_000a19e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a1a08;
        }
    }
L_000a19e8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000a19ec:;
    {
        cpu->r[4] = rd32(cpu->r[0]);
    }
L_000a19f0:;
    {
        cpu->r[1] = 0x0000000cu;
    }
L_000a19f4:;
    {
        cpu->r[14] = 0x000a19f8u; fn_002082a8(cpu);
    }
L_000a19f8:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 1);
    }
L_000a19fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a1a00:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a19ec;
        }
    }
L_000a1a04:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000a1a08:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00008400u, 0, 0);
    }
L_000a1a0c:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[3]);
    }
L_000a1a10:;
    {
        wr32(cpu->r[8] + + 0x370u, cpu->r[3]);
    }
L_000a1a14:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000c0u, 0, 0);
    }
L_000a1a18:;
    {
        cpu->r[14] = 0x000a1a1cu; fn_00152540(cpu);
    }
L_000a1a1c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00006700u, 0, 0);
    }
L_000a1a20:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000c4u, 0, 0);
    }
L_000a1a24:;
    {
        cpu->r[14] = 0x000a1a28u; fn_000fb54c(cpu);
    }
L_000a1a28:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00001c00u, 0, 0);
    }
L_000a1a2c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000010u, 0, 0);
    }
L_000a1a30:;
    {
        cpu->r[14] = 0x000a1a34u; fn_0012c2d0(cpu);
    }
L_000a1a34:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x45cu);
    }
L_000a1a38:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000450u, 0, 0);
    }
L_000a1a3c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a1a40:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_000a1a44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a1a7c;
        }
    }
L_000a1a48:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000a1a4c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 0);
    }
L_000a1a50:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_000a1a54:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000a1a58:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 4u, &shc), 0, 0);
    }
L_000a1a5c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 8u, &shc), 0, 0);
    }
L_000a1a60:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 16u, &shc), 0, 0);
    }
L_000a1a64:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_000a1a68:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_000a1a6c:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[1] = v;
    }
L_000a1a70:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_000a1a74:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a1b78;
        }
    }
L_000a1a78:;
    {
        cpu->r[14] = 0x000a1a7cu; fn_002082a8(cpu);
    }
L_000a1a7c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x450u);
    }
L_000a1a80:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a1a84:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a1abc;
        }
    }
L_000a1a88:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x458u);
    }
L_000a1a8c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 0);
    }
L_000a1a90:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_000a1a94:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000a1a98:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 4u, &shc), 0, 0);
    }
L_000a1a9c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 8u, &shc), 0, 0);
    }
L_000a1aa0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 16u, &shc), 0, 0);
    }
L_000a1aa4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_000a1aa8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_000a1aac:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[1] = v;
    }
L_000a1ab0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_000a1ab4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a1b9c;
        }
    }
L_000a1ab8:;
    {
        cpu->r[14] = 0x000a1abcu; fn_002082a8(cpu);
    }
L_000a1abc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x444u);
    }
L_000a1ac0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000440u, 0, 0);
    }
L_000a1ac4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000a1ac8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a1acc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a1b04;
        }
    }
L_000a1ad0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
    }
L_000a1ad4:;
    {
        cpu->r[3] = 0x0000004cu;
    }
L_000a1ad8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_000a1adc:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 2u, &shc); cpu->r[1] = v;
    }
L_000a1ae0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_000a1ae4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_000a1ae8:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[1], 2, 9u, &shc), cpu->r[1], 1, 0);
    }
L_000a1aec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 18u, &shc), 0, 0);
    }
L_000a1af0:;
    {
        cpu->r[1] = sub_flags(cpu, 0x00000000u, cpu->r[1], 1, 0);
    }
L_000a1af4:;
    {
        uint32_t v = cpu->r[3] * cpu->r[1]; cpu->r[1] = v;
    }
L_000a1af8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_000a1afc:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a1b94;
        }
    }
L_000a1b00:;
    {
        cpu->r[14] = 0x000a1b04u; fn_002082a8(cpu);
    }
L_000a1b04:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x438u);
    }
L_000a1b08:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000430u, 0, 0);
    }
L_000a1b0c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_000a1b10:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a1b14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a1b44;
        }
    }
L_000a1b18:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
    }
L_000a1b1c:;
    {
        cpu->r[3] = 0x00006f97u;
    }
L_000a1b20:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x96f9u << 16);
    }
L_000a1b24:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_000a1b28:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 2u, &shc); cpu->r[1] = v;
    }
L_000a1b2c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[1]; cpu->r[3] = v;
    }
L_000a1b30:;
    {
        cpu->r[1] = 0x0000009cu;
    }
L_000a1b34:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[1] = v;
    }
L_000a1b38:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_000a1b3c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a1b8c;
        }
    }
L_000a1b40:;
    {
        cpu->r[14] = 0x000a1b44u; fn_002082a8(cpu);
    }
L_000a1b44:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x42cu);
    }
L_000a1b48:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000420u, 0, 0);
    }
L_000a1b4c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_000a1b50:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a1b54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a1b70;
        }
    }
L_000a1b58:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
    }
L_000a1b5c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_000a1b60:;
    {
        uint32_t v = cpu->r[1] & ~ 0x0000000fu; cpu->r[1] = v;
    }
L_000a1b64:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_000a1b68:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a1b80;
        }
    }
L_000a1b6c:;
    {
        cpu->r[14] = 0x000a1b70u; fn_002082a8(cpu);
    }
L_000a1b70:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000a1b74:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a1b78u)) return;
    }
L_000a1b78:;
    {
        cpu->r[14] = 0x000a1b7cu; fn_0018ba20(cpu);
    }
L_000a1b7c:;
    {
        goto L_000a1a7c;
    }
L_000a1b80:;
    {
        cpu->r[14] = 0x000a1b84u; fn_0018ba20(cpu);
    }
L_000a1b84:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000a1b88:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a1b8cu)) return;
    }
L_000a1b8c:;
    {
        cpu->r[14] = 0x000a1b90u; fn_0018ba20(cpu);
    }
L_000a1b90:;
    {
        goto L_000a1b44;
    }
L_000a1b94:;
    {
        cpu->r[14] = 0x000a1b98u; fn_0018ba20(cpu);
    }
L_000a1b98:;
    {
        goto L_000a1b04;
    }
L_000a1b9c:;
    {
        cpu->r[14] = 0x000a1ba0u; fn_0018ba20(cpu);
    }
L_000a1ba0:;
    {
        goto L_000a1abc;
    }
}

/* _ZN4GameD2Ev @ 000a1bb0 (arm) */
void fn_000a1bb0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a1bb0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000a1bb4:;
    {
        cpu->r[4] = rd32(0x000a1bbcu + + 0x240u);
    }
L_000a1bb8:;
    {
        cpu->r[3] = rd32(0x000a1bc0u + + 0x240u);
    }
L_000a1bbc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000a1bc0:;
    {
        cpu->r[4] = add_flags(cpu, 0x000a1bc8u, cpu->r[4], 0, 0);
    }
L_000a1bc4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a1bc8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x000000a0u, 0, 0);
    }
L_000a1bcc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_000a1bd0:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_000a1bd4:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_000a1bd8:;
    {
        cpu->r[14] = 0x000a1bdcu; fn_000a12ec(cpu);
    }
L_000a1bdc:;
    {
        cpu->r[14] = 0x000a1be0u; fn_00095d84(cpu);
    }
L_000a1be0:;
    {
        cpu->r[3] = rd32(0x000a1be8u + + 0x21cu);
    }
L_000a1be4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a1be8:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000a1bec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a1bf0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a1bf8;
        }
    }
L_000a1bf4:;
    {
        cpu->r[14] = 0x000a1bf8u; fn_00131370(cpu);
    }
L_000a1bf8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[5], 0x0001e400u, 0, 0);
    }
L_000a1bfc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[8], 0x00000380u, 0, 0);
    }
L_000a1c00:;
    {
        cpu->r[0] = rd32(cpu->r[8] + + 0x380u);
    }
L_000a1c04:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 1);
    }
L_000a1c08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a1c28;
        }
    }
L_000a1c0c:;
    {
        cpu->r[4] = rd32(cpu->r[0]);
    }
L_000a1c10:;
    {
        cpu->r[1] = 0x0000000cu;
    }
L_000a1c14:;
    {
        cpu->r[14] = 0x000a1c18u; fn_002082a8(cpu);
    }
L_000a1c18:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[7], 1, 1);
    }
L_000a1c1c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a1c20:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a1c0c;
        }
    }
L_000a1c24:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a1c28:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x370u);
    }
L_000a1c2c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[8], 0x00000370u, 0, 0);
    }
L_000a1c30:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[0]);
    }
L_000a1c34:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_000a1c38:;
    {
        wr32(cpu->r[8] + + 0x380u, cpu->r[0]);
    }
L_000a1c3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a1c60;
        }
    }
L_000a1c40:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000a1c44:;
    {
        cpu->r[4] = rd32(cpu->r[0]);
    }
L_000a1c48:;
    {
        cpu->r[1] = 0x0000000cu;
    }
L_000a1c4c:;
    {
        cpu->r[14] = 0x000a1c50u; fn_002082a8(cpu);
    }
L_000a1c50:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 1);
    }
L_000a1c54:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a1c58:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a1c44;
        }
    }
L_000a1c5c:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000a1c60:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00008400u, 0, 0);
    }
L_000a1c64:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[3]);
    }
L_000a1c68:;
    {
        wr32(cpu->r[8] + + 0x370u, cpu->r[3]);
    }
L_000a1c6c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000c0u, 0, 0);
    }
L_000a1c70:;
    {
        cpu->r[14] = 0x000a1c74u; fn_00152540(cpu);
    }
L_000a1c74:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00006700u, 0, 0);
    }
L_000a1c78:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000c4u, 0, 0);
    }
L_000a1c7c:;
    {
        cpu->r[14] = 0x000a1c80u; fn_000fb54c(cpu);
    }
L_000a1c80:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00001c00u, 0, 0);
    }
L_000a1c84:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000010u, 0, 0);
    }
L_000a1c88:;
    {
        cpu->r[14] = 0x000a1c8cu; fn_0012c2d0(cpu);
    }
L_000a1c8c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x45cu);
    }
L_000a1c90:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000450u, 0, 0);
    }
L_000a1c94:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a1c98:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_000a1c9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a1cd4;
        }
    }
L_000a1ca0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000a1ca4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 0);
    }
L_000a1ca8:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_000a1cac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000a1cb0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 4u, &shc), 0, 0);
    }
L_000a1cb4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 8u, &shc), 0, 0);
    }
L_000a1cb8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 16u, &shc), 0, 0);
    }
L_000a1cbc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_000a1cc0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_000a1cc4:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[1] = v;
    }
L_000a1cc8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_000a1ccc:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a1dd0;
        }
    }
L_000a1cd0:;
    {
        cpu->r[14] = 0x000a1cd4u; fn_002082a8(cpu);
    }
L_000a1cd4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x450u);
    }
L_000a1cd8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a1cdc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a1d14;
        }
    }
L_000a1ce0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x458u);
    }
L_000a1ce4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 0);
    }
L_000a1ce8:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_000a1cec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000a1cf0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 4u, &shc), 0, 0);
    }
L_000a1cf4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 8u, &shc), 0, 0);
    }
L_000a1cf8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 16u, &shc), 0, 0);
    }
L_000a1cfc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_000a1d00:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_000a1d04:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[1] = v;
    }
L_000a1d08:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_000a1d0c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a1df4;
        }
    }
L_000a1d10:;
    {
        cpu->r[14] = 0x000a1d14u; fn_002082a8(cpu);
    }
L_000a1d14:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x444u);
    }
L_000a1d18:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000440u, 0, 0);
    }
L_000a1d1c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000a1d20:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a1d24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a1d5c;
        }
    }
L_000a1d28:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
    }
L_000a1d2c:;
    {
        cpu->r[3] = 0x0000004cu;
    }
L_000a1d30:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_000a1d34:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 2u, &shc); cpu->r[1] = v;
    }
L_000a1d38:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_000a1d3c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_000a1d40:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[1], 2, 9u, &shc), cpu->r[1], 1, 0);
    }
L_000a1d44:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 18u, &shc), 0, 0);
    }
L_000a1d48:;
    {
        cpu->r[1] = sub_flags(cpu, 0x00000000u, cpu->r[1], 1, 0);
    }
L_000a1d4c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[1]; cpu->r[1] = v;
    }
L_000a1d50:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_000a1d54:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a1dec;
        }
    }
L_000a1d58:;
    {
        cpu->r[14] = 0x000a1d5cu; fn_002082a8(cpu);
    }
L_000a1d5c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x438u);
    }
L_000a1d60:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000430u, 0, 0);
    }
L_000a1d64:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_000a1d68:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a1d6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a1d9c;
        }
    }
L_000a1d70:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
    }
L_000a1d74:;
    {
        cpu->r[3] = 0x00006f97u;
    }
L_000a1d78:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x96f9u << 16);
    }
L_000a1d7c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_000a1d80:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 2u, &shc); cpu->r[1] = v;
    }
L_000a1d84:;
    {
        uint32_t v = cpu->r[3] * cpu->r[1]; cpu->r[3] = v;
    }
L_000a1d88:;
    {
        cpu->r[1] = 0x0000009cu;
    }
L_000a1d8c:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[1] = v;
    }
L_000a1d90:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_000a1d94:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a1de4;
        }
    }
L_000a1d98:;
    {
        cpu->r[14] = 0x000a1d9cu; fn_002082a8(cpu);
    }
L_000a1d9c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x42cu);
    }
L_000a1da0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000420u, 0, 0);
    }
L_000a1da4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_000a1da8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a1dac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a1dc8;
        }
    }
L_000a1db0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
    }
L_000a1db4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_000a1db8:;
    {
        uint32_t v = cpu->r[1] & ~ 0x0000000fu; cpu->r[1] = v;
    }
L_000a1dbc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_000a1dc0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a1dd8;
        }
    }
L_000a1dc4:;
    {
        cpu->r[14] = 0x000a1dc8u; fn_002082a8(cpu);
    }
L_000a1dc8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000a1dcc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a1dd0u)) return;
    }
L_000a1dd0:;
    {
        cpu->r[14] = 0x000a1dd4u; fn_0018ba20(cpu);
    }
L_000a1dd4:;
    {
        goto L_000a1cd4;
    }
L_000a1dd8:;
    {
        cpu->r[14] = 0x000a1ddcu; fn_0018ba20(cpu);
    }
L_000a1ddc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000a1de0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a1de4u)) return;
    }
L_000a1de4:;
    {
        cpu->r[14] = 0x000a1de8u; fn_0018ba20(cpu);
    }
L_000a1de8:;
    {
        goto L_000a1d9c;
    }
L_000a1dec:;
    {
        cpu->r[14] = 0x000a1df0u; fn_0018ba20(cpu);
    }
L_000a1df0:;
    {
        goto L_000a1d5c;
    }
L_000a1df4:;
    {
        cpu->r[14] = 0x000a1df8u; fn_0018ba20(cpu);
    }
L_000a1df8:;
    {
        goto L_000a1d14;
    }
}

/* _ZN4Game13InputKeyBoardEib @ 000a1e08 (arm) */
void fn_000a1e08(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a1e08:;
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
L_000a1e0c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000a1e10:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_000a1e14:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000a1e18:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_000a1e1c:;
    {
        cpu->r[14] = 0x000a1e20u; fn_000970e4(cpu);
    }
L_000a1e20:;
    {
        cpu->r[5] = rd32(0x000a1e28u + + 0x298u);
    }
L_000a1e24:;
    {
        cpu->r[3] = rd32(0x000a1e2cu + + 0x298u);
    }
L_000a1e28:;
    {
        cpu->r[5] = add_flags(cpu, 0x000a1e30u, cpu->r[5], 0, 0);
    }
L_000a1e2c:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000a1e30:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000a1e34:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a1e38:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_000a1e3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a1eb0;
        }
    }
L_000a1e40:;
    {
        cpu->r[10] = rd32(0x000a1e48u + + 0x280u);
    }
L_000a1e44:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_000a1e48:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x4u);
    }
L_000a1e4c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_000a1e50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a1ee4;
        }
    }
L_000a1e54:;
    {
        cpu->r[8] = rd32(0x000a1e5cu + + 0x270u);
    }
L_000a1e58:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000a1e5c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000a1e60:;
    {
        cpu->r[14] = 0x000a1e64u; fn_000f34a0(cpu);
    }
L_000a1e64:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000a1e68:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_000a1e6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a1e80;
        }
    }
L_000a1e70:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000052u, 1, 1);
    }
L_000a1e74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a1f20;
        }
    }
L_000a1e78:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000004u, 1, 1);
    }
L_000a1e7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a2008;
        }
    }
L_000a1e80:;
    {
        cpu->r[2] = 0x000067b0u;
    }
L_000a1e84:;
    {
        cpu->r[1] = rd32(0x000a1e8cu + + 0x244u);
    }
L_000a1e88:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000a1e8c:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_000a1e90:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000a1e94:;
    {
        cpu->r[1] = add_flags(cpu, 0x000a1e9cu, cpu->r[1], 0, 0);
    }
L_000a1e98:;
    {
        cpu->r[2] = rd32(0x000a1ea0u + + 0x234u);
    }
L_000a1e9c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000a1ea4u, cpu->r[2], 0, 0);
    }
L_000a1ea0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000a1ea4:;
    {
        cpu->r[14] = 0x000a1ea8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000a1ea8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000a1eac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a1eb0u)) return;
    }
L_000a1eb0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000a1eb4:;
    {
        cpu->r[14] = 0x000a1eb8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a1eb8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a1ebc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a1e40;
        }
    }
L_000a1ec0:;
    {
        cpu->r[10] = rd32(0x000a1ec8u + + 0x200u);
    }
L_000a1ec4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_000a1ec8:;
    {
        cpu->r[14] = 0x000a1eccu; fn_00094228(cpu);
    }
L_000a1ecc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000a1ed0:;
    {
        cpu->r[14] = 0x000a1ed4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a1ed4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_000a1ed8:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x4u);
    }
L_000a1edc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_000a1ee0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a1e54;
        }
    }
L_000a1ee4:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000a1ee8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a1fdc;
        }
    }
L_000a1eec:;
    {
        cpu->r[3] = 0x00001bc0u;
    }
L_000a1ef0:;
    {
        cpu->r[8] = rd32(0x000a1ef8u + + 0x1d4u);
    }
L_000a1ef4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000a1ef8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a1efc:;
    {
        cpu->r[14] = 0x000a1f00u; fn_0018b5d8(cpu);
    }
L_000a1f00:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000a1f04:;
    {
        cpu->r[14] = 0x000a1f08u; fn_0018b950(cpu);
    }
L_000a1f08:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000a1f0c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000a1f10:;
    {
        cpu->r[14] = 0x000a1f14u; fn_000f34a0(cpu);
    }
L_000a1f14:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000052u, 1, 1);
    }
L_000a1f18:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_000a1f1c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a1e78;
        }
    }
L_000a1f20:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_000a1f24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a1e80;
        }
    }
L_000a1f28:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_000a1f2c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a1f30:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000a1f34:;
    {
        cpu->r[14] = 0x000a1f3cu;
    }
L_000a1f38:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a1f3cu)) return;
    }
L_000a1f3c:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a1f40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a2060;
        }
    }
L_000a1f44:;
    {
        cpu->r[5] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000a1f48:;
    {
        cpu->r[7] = 0x00001bc8u;
    }
L_000a1f4c:;
    {
        cpu->r[3] = 0x00004328u;
    }
L_000a1f50:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000a1f54:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_000a1f58:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_000a1f5c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000a1f60:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a1f64:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00001d32u;
        }
    }
L_000a1f68:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_000a1f6c:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[0] + cpu->r[3], cpu->r[2]);
        }
    }
L_000a1f70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a1e80;
        }
    }
L_000a1f74:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000a1f78:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_000a1f7c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a1f80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a1e80;
        }
    }
L_000a1f84:;
    {
        cpu->r[3] = 0x000063e8u;
    }
L_000a1f88:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000a1f8c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a1f90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a1e80;
        }
    }
L_000a1f94:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x317u);
    }
L_000a1f98:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a1f9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a1e80;
        }
    }
L_000a1fa0:;
    {
        cpu->r[14] = 0x000a1fa4u; fn_000968d4(cpu);
    }
L_000a1fa4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a1fa8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a1e80;
        }
    }
L_000a1fac:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_000a1fb0:;
    {
        cpu->r[12] = 0x00006737u;
    }
L_000a1fb4:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_000a1fb8:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[7]);
    }
L_000a1fbc:;
    {
        wr8(cpu->r[2] + cpu->r[12], cpu->r[3]);
    }
L_000a1fc0:;
    {
        cpu->r[14] = 0x000a1fc4u; fn_000ba460(cpu);
    }
L_000a1fc4:;
    {
        cpu->r[5] = rd32(cpu->r[5]);
    }
L_000a1fc8:;
    {
        cpu->r[14] = 0x000a1fccu; fn_0009b4d0(cpu);
    }
L_000a1fcc:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000a1fd0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000a1fd4:;
    {
        cpu->r[14] = 0x000a1fd8u; fn_000967dc(cpu);
    }
L_000a1fd8:;
    {
        goto L_000a1e80;
    }
L_000a1fdc:;
    {
        cpu->r[3] = 0x00001bc0u;
    }
L_000a1fe0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000a1fe4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a1fe8:;
    {
        cpu->r[14] = 0x000a1fecu; fn_0018b5d8(cpu);
    }
L_000a1fec:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000a1ff0:;
    {
        cpu->r[14] = 0x000a1ff4u; fn_0018b8fc(cpu);
    }
L_000a1ff4:;
    {
        cpu->r[3] = rd32(0x000a1ffcu + + 0xd0u);
    }
L_000a1ff8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000a1ffc:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000a2000:;
    {
        cpu->r[14] = 0x000a2004u; fn_000f34a0(cpu);
    }
L_000a2004:;
    {
        goto L_000a1e80;
    }
L_000a2008:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_000a200c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a2090;
        }
    }
L_000a2010:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a2014:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_000a2018:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000a201c:;
    {
        cpu->r[14] = 0x000a2024u;
    }
L_000a2020:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a2024u)) return;
    }
L_000a2024:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a2028:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a2090;
        }
    }
L_000a202c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000a2030:;
    {
        cpu->r[1] = 0x00001bc8u;
    }
L_000a2034:;
    {
        cpu->r[3] = 0x00004328u;
    }
L_000a2038:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000a203c:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000a2040:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_000a2044:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_000a2048:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a204c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a2090;
        }
    }
L_000a2050:;
    {
        cpu->r[3] = 0x00001d32u;
    }
L_000a2054:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000a2058:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_000a205c:;
    {
        goto L_000a1e80;
    }
L_000a2060:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a2064:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_000a2068:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_000a206c:;
    {
        cpu->r[14] = 0x000a2074u;
    }
L_000a2070:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a2074u)) return;
    }
L_000a2074:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a2078:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a1e80;
        }
    }
L_000a207c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000a2080:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a2084:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000a2088:;
    {
        cpu->r[14] = 0x000a208cu; fn_00096990(cpu);
    }
L_000a208c:;
    {
        goto L_000a1e80;
    }
L_000a2090:;
    {
        cpu->r[5] = 0x00001bc0u;
    }
L_000a2094:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000a2098:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000a209c:;
    {
        cpu->r[14] = 0x000a20a0u; fn_0018b5d8(cpu);
    }
L_000a20a0:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000a20a4:;
    {
        cpu->r[14] = 0x000a20a8u; fn_0018b8fc(cpu);
    }
L_000a20a8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000a20ac:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000a20b0:;
    {
        cpu->r[14] = 0x000a20b4u; fn_0018b5d8(cpu);
    }
L_000a20b4:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000a20b8:;
    {
        cpu->r[14] = 0x000a20bcu; fn_0018b950(cpu);
    }
L_000a20bc:;
    {
        goto L_000a1e80;
    }
}

/* _ZN4Game12SetSfxVolumeEi @ 000a20d8 (arm) */
void fn_000a20d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a20d8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000a20dc:;
    {
        cpu->r[4] = rd32(0x000a20e4u + + 0xb0u);
    }
L_000a20e0:;
    {
        cpu->r[3] = rd32(0x000a20e8u + + 0xb0u);
    }
L_000a20e4:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a20e8:;
    {
        cpu->r[4] = add_flags(cpu, 0x000a20f0u, cpu->r[4], 0, 0);
    }
L_000a20ec:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[5] = 0x00000000u;
        }
    }
L_000a20f0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a20f4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000a20f8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000a218c;
        }
    }
L_000a20fc:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000064u, 1, 1);
    }
L_000a2100:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x00000064u;
        }
    }
L_000a2104:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[5] = cpu->r[2];
        }
    }
L_000a2108:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a218c;
        }
    }
L_000a210c:;
    {
        wr8(cpu->r[3] + + 0x495u, cpu->r[2]);
    }
L_000a2110:;
    {
        cpu->r[8] = rd32(cpu->r[3] + + 0x490u);
    }
L_000a2114:;
    {
        cpu->r[3] = rd32(0x000a211cu + + 0x80u);
    }
L_000a2118:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a211c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a2120:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a2124:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a2164;
        }
    }
L_000a2128:;
    {
        cpu->r[7] = rd32(0x000a2130u + + 0x70u);
    }
L_000a212c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000a2130:;
    {
        cpu->r[14] = 0x000a2134u; fn_00093f98(cpu);
    }
L_000a2134:;
    {
        cpu->r[3] = 0x0000851fu;
    }
L_000a2138:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x51ebu << 16);
    }
L_000a213c:;
    {
        uint32_t v = cpu->r[5] * cpu->r[0]; cpu->r[5] = v;
    }
L_000a2140:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000a2144:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[5]; cpu->r[2] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_000a2148:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 31u, &shc); cpu->r[5] = v;
    }
L_000a214c:;
    {
        cpu->r[5] = sub_flags(cpu, shifter(cpu->r[3], 1, 5u, &shc), cpu->r[5], 1, 0);
    }
L_000a2150:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[5];
    }
L_000a2154:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000a2158:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000a215c:;
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
L_000a2160:;
    {
        return fn_000fd300(cpu);
    }
L_000a2164:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a2168:;
    {
        cpu->r[14] = 0x000a216cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a216c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a2170:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a2128;
        }
    }
L_000a2174:;
    {
        cpu->r[7] = rd32(0x000a217cu + + 0x24u);
    }
L_000a2178:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000a217c:;
    {
        cpu->r[14] = 0x000a2180u; fn_00094228(cpu);
    }
L_000a2180:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a2184:;
    {
        cpu->r[14] = 0x000a2188u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a2188:;
    {
        goto L_000a212c;
    }
L_000a218c:;
    {
        cpu->r[2] = (uint32_t)((uint8_t)cpu->r[5]);
    }
L_000a2190:;
    {
        goto L_000a210c;
    }
}

/* _ZN4Game22GetNextEventSlotToPlayEi @ 000a21a4 (arm) */
void fn_000a21a4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a21a4:;
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
L_000a21a8:;
    {
        cpu->r[7] = rd32(0x000a21b0u + + 0xbcu);
    }
L_000a21ac:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000a21b0:;
    {
        cpu->r[10] = rd32(0x000a21b8u + + 0xb8u);
    }
L_000a21b4:;
    {
        cpu->r[8] = rd32(0x000a21bcu + + 0xb8u);
    }
L_000a21b8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000a21bc:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000a21c0:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[9] = v;
    }
L_000a21c4:;
    {
        cpu->r[7] = add_flags(cpu, 0x000a21ccu, cpu->r[7], 0, 0);
    }
L_000a21c8:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000a21cc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000a21d0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a21d4:;
    {
        cpu->r[14] = 0x000a21d8u; fn_00096d54(cpu);
    }
L_000a21d8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a21dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a2218;
        }
    }
L_000a21e0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000a21e4:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000004u, 1, 1);
    }
L_000a21e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a21c8;
        }
    }
L_000a21ec:;
    {
        cpu->r[4] = 0x00000003u;
    }
L_000a21f0:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_000a21f4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a21f8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000a21fc:;
    {
        cpu->r[14] = 0x000a2200u; fn_00096d54(cpu);
    }
L_000a2200:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a2204:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a2240;
        }
    }
L_000a2208:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 1);
    }
L_000a220c:;
    {
        if (cond_test(cpu, 3)) {
        goto L_000a21f0;
        }
    }
L_000a2210:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a2214:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a2218u)) return;
    }
L_000a2218:;
    {
        cpu->r[11] = rd32(cpu->r[7] + cpu->r[10]);
    }
L_000a221c:;
    {
        cpu->r[3] = rd32(cpu->r[11]);
    }
L_000a2220:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a2224:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a2248;
        }
    }
L_000a2228:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_000a222c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], cpu->r[3], 0, 0);
    }
L_000a2230:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_000a2234:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x18cu);
    }
L_000a2238:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a223c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a21e0;
        }
    }
L_000a2240:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a2244:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a2248u)) return;
    }
L_000a2248:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000a224c:;
    {
        cpu->r[14] = 0x000a2250u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a2250:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a2254:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a2228;
        }
    }
L_000a2258:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_000a225c:;
    {
        cpu->r[14] = 0x000a2260u; fn_00094228(cpu);
    }
L_000a2260:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000a2264:;
    {
        cpu->r[14] = 0x000a2268u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a2268:;
    {
        goto L_000a2228;
    }
}

/* _ZN4Game9ResetDataEv @ 000a2278 (arm) */
void fn_000a2278(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a2278:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000a227c:;
    {
        cpu->r[4] = rd32(0x000a2284u + + 0xf8u);
    }
L_000a2280:;
    {
        cpu->r[5] = rd32(0x000a2288u + + 0xf8u);
    }
L_000a2284:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000400u, 1, 0);
    }
L_000a2288:;
    {
        cpu->r[4] = add_flags(cpu, 0x000a2290u, cpu->r[4], 0, 0);
    }
L_000a228c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000a2290:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000a2294:;
    {
        cpu->r[1] = rd32(0x000a229cu + + 0xe8u);
    }
L_000a2298:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000a229c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[7], 0x00000004u, 1, 0);
    }
L_000a22a0:;
    {
        cpu->r[2] = rd32(0x000a22a8u + + 0xe0u);
    }
L_000a22a4:;
    {
        cpu->r[1] = add_flags(cpu, 0x000a22acu, cpu->r[1], 0, 0);
    }
L_000a22a8:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000a22ac:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a22b0:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_000a22b4:;
    {
        cpu->r[2] = add_flags(cpu, 0x000a22bcu, cpu->r[2], 0, 0);
    }
L_000a22b8:;
    {
        cpu->r[3] = rd32(0x000a22c0u + + 0xccu);
    }
L_000a22bc:;
    {
        cpu->r[3] = add_flags(cpu, 0x000a22c4u, cpu->r[3], 0, 0);
    }
L_000a22c0:;
    {
        wr32(cpu->r[13] + + 0x404u, cpu->r[12]);
    }
L_000a22c4:;
    {
        cpu->r[14] = 0x000a22c8u; imp_sprintf(cpu); /* sprintf */
    }
L_000a22c8:;
    {
        cpu->r[1] = rd32(0x000a22d0u + + 0xc0u);
    }
L_000a22cc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a22d0:;
    {
        cpu->r[1] = add_flags(cpu, 0x000a22d8u, cpu->r[1], 0, 0);
    }
L_000a22d4:;
    {
        cpu->r[14] = 0x000a22d8u; imp_fopen(cpu); /* fopen */
    }
L_000a22d8:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a22dc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_000a22e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a2330;
        }
    }
L_000a22e4:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000a22e8:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_000a22ec:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000a22f0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[7], 0x00000008u, 1, 0);
    }
L_000a22f4:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000a22f8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000a22fc:;
    {
        cpu->r[14] = 0x000a2300u; imp_fwrite(cpu); /* fwrite */
    }
L_000a2300:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a2304:;
    {
        cpu->r[14] = 0x000a2308u; imp_fclose(cpu); /* fclose */
    }
L_000a2308:;
    {
        cpu->r[3] = rd32(0x000a2310u + + 0x84u);
    }
L_000a230c:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a2310:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a2314:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a2318:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a2350;
        }
    }
L_000a231c:;
    {
        cpu->r[7] = rd32(0x000a2324u + + 0x74u);
    }
L_000a2320:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000a2324:;
    {
        cpu->r[14] = 0x000a2328u; fn_00094438(cpu);
    }
L_000a2328:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000a232c:;
    {
        cpu->r[14] = 0x000a2330u; fn_00096b64(cpu);
    }
L_000a2330:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000a2334:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x404u);
    }
L_000a2338:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000a233c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000a2340:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a2378;
        }
    }
L_000a2344:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000a2348:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000400u, 0, 0);
    }
L_000a234c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a2350u)) return;
    }
L_000a2350:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a2354:;
    {
        cpu->r[14] = 0x000a2358u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a2358:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a235c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a231c;
        }
    }
L_000a2360:;
    {
        cpu->r[7] = rd32(0x000a2368u + + 0x30u);
    }
L_000a2364:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000a2368:;
    {
        cpu->r[14] = 0x000a236cu; fn_00094228(cpu);
    }
L_000a236c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a2370:;
    {
        cpu->r[14] = 0x000a2374u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a2374:;
    {
        goto L_000a2320;
    }
L_000a2378:;
    {
        cpu->r[14] = 0x000a237cu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_000a237c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[10] & shifter(cpu->r[8], 2, 3u, &shc); cpu->r[8] = v;
        set_nz(cpu, v);
        }
    }
L_000a2380:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_000a2384:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[0], 1, 15u, &shc); cpu->r[12] = v;
        set_nz(cpu, v);
        }
    }
L_000a2388:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[6] + (-cpu->r[8]);
        cpu->r[12] = rd16(cpu->r[6]);
        cpu->r[6] = wb_tmp;
        }
    }
L_000a238c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[6] + (-cpu->r[8]);
        cpu->r[12] = (uint32_t)(int32_t)s8(cpu->r[6]);
        cpu->r[6] = wb_tmp;
        }
    }
L_000a2390:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[6] + (-cpu->r[0]);
        cpu->r[12] = (uint32_t)(int32_t)s8(cpu->r[6]);
        cpu->r[6] = wb_tmp;
        }
    }
L_000a2394:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[12], 3, (cpu->r[3] & 0xffu), &shc); cpu->r[0] = v;
        }
    }
L_000a2398:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[4], 3, (cpu->r[3] & 0xffu), &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN4Game14EquipTuningKitEiiii @ 000a239c (arm) */
void fn_000a239c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a239c:;
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
L_000a23a0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000063u, 1, 1);
    }
L_000a23a4:;
    {
        cpu->r[7] = rd32(0x000a23acu + + 0x278u);
    }
L_000a23a8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_000a23ac:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_000a23b0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000a23b4:;
    {
        cpu->r[7] = add_flags(cpu, 0x000a23bcu, cpu->r[7], 0, 0);
    }
L_000a23b8:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_000a23bc:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_000a23c0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a25ec;
        }
    }
L_000a23c4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000002u, 1, 1);
    }
L_000a23c8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a25b4;
        }
    }
L_000a23cc:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000009u, 1, 1);
    }
L_000a23d0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a257c;
        }
    }
L_000a23d4:;
    {
        cpu->r[0] = rd32(0x000a23dcu + + 0x24cu);
    }
L_000a23d8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000a23dc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x48u);
    }
L_000a23e0:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000a23e4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_000a23e8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a23ec:;
    {
        cpu->r[14] = 0x000a23f0u; fn_000973dc(cpu);
    }
L_000a23f0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_000a23f4:;
    {
        cpu->r[9] = rd32(cpu->r[7] + cpu->r[1]);
    }
L_000a23f8:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_000a23fc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a2400:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_000a2404:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a2514;
        }
    }
L_000a2408:;
    {
        cpu->r[11] = rd32(0x000a2410u + + 0x21cu);
    }
L_000a240c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[11]);
    }
L_000a2410:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 2u, &shc); cpu->r[12] = v;
    }
L_000a2414:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x1ecu);
    }
L_000a2418:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[8], 2, 2u, &shc));
    }
L_000a241c:;
    {
        cpu->r[0] = rd8(cpu->r[3] + shifter(cpu->r[10], 2, 1u, &shc));
    }
L_000a2420:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a2424:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a250c;
        }
    }
L_000a2428:;
    {
        cpu->r[9] = 0x00008c78u;
    }
L_000a242c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[9]);
    }
L_000a2430:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a2434:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a2508;
        }
    }
L_000a2438:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_000a243c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000a2440:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[4], 0x00008700u, 0, 0);
    }
L_000a2444:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_000a2448:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_000a244c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000050u, 0, 0);
    }
L_000a2450:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_000a2454:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000a2458:;
    {
        goto L_000a2470;
    }
L_000a245c:;
    {
        cpu->r[1] = rd8(cpu->r[4] + cpu->r[9]);
    }
L_000a2460:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_000a2464:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x0000002cu, 0, 0);
    }
L_000a2468:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[10], 1, 1);
    }
L_000a246c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a2508;
        }
    }
L_000a2470:;
    {
        cpu->r[1] = rd32(cpu->r[8]);
    }
L_000a2474:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 1);
    }
L_000a2478:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a245c;
        }
    }
L_000a247c:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x4u);
    }
L_000a2480:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[6], 1, 1);
    }
L_000a2484:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a245c;
        }
    }
L_000a2488:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_000a248c:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 1u, &shc); cpu->r[1] = v;
    }
L_000a2490:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_000a2494:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_000a2498:;
    {
        cpu->r[11] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_000a249c:;
    {
        cpu->r[1] = rd32(cpu->r[11]);
    }
L_000a24a0:;
    {
        { uint32_t v = cpu->r[1] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a24a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a253c;
        }
    }
L_000a24a8:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000a24ac:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x48u);
    }
L_000a24b0:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x1ecu);
    }
L_000a24b4:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[0], 1, 1);
    }
L_000a24b8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000a24bc:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[12]);
    }
L_000a24c0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[0], 0, 0);
    }
L_000a24c4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000a24c8:;
    {
        wr8(cpu->r[1] + + 0x1u, cpu->r[0]);
    }
L_000a24cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a245c;
        }
    }
L_000a24d0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_000a24d4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_000a24d8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_000a24dc:;
    {
        cpu->r[14] = 0x000a24e0u; fn_000979a0(cpu);
    }
L_000a24e0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_000a24e4:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x1ecu);
    }
L_000a24e8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000a24ec:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[12]);
    }
L_000a24f0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[0], 0, 0);
    }
L_000a24f4:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000a24f8:;
    {
        wr8(cpu->r[1] + + 0x1u, cpu->r[0]);
    }
L_000a24fc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_000a2500:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_000a2504:;
    {
        goto L_000a245c;
    }
L_000a2508:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000a250c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_000a2510:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a2514u)) return;
    }
L_000a2514:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000a2518:;
    {
        cpu->r[14] = 0x000a251cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a251c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a2520:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a2408;
        }
    }
L_000a2524:;
    {
        cpu->r[11] = rd32(0x000a252cu + + 0x100u);
    }
L_000a2528:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[11]);
    }
L_000a252c:;
    {
        cpu->r[14] = 0x000a2530u; fn_00094228(cpu);
    }
L_000a2530:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000a2534:;
    {
        cpu->r[14] = 0x000a2538u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a2538:;
    {
        goto L_000a240c;
    }
L_000a253c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000a2540:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_000a2544:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_000a2548:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_000a254c:;
    {
        cpu->r[14] = 0x000a2550u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a2550:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000a2554:;
    {
        uint32_t base = cpu->r[2];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
        cpu->r[12] = v2;
    }
L_000a2558:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a255c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a24a8;
        }
    }
L_000a2560:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000a2564:;
    {
        cpu->r[14] = 0x000a2568u; fn_00094228(cpu);
    }
L_000a2568:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000a256c:;
    {
        cpu->r[14] = 0x000a2570u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a2570:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000a2574:;
    {
        uint32_t base = cpu->r[2];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
        cpu->r[12] = v2;
    }
L_000a2578:;
    {
        goto L_000a24a8;
    }
L_000a257c:;
    {
        cpu->r[1] = rd32(0x000a2584u + + 0xacu);
    }
L_000a2580:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000a2584:;
    {
        cpu->r[12] = rd32(0x000a258cu + + 0xa8u);
    }
L_000a2588:;
    {
        cpu->r[14] = 0x00002527u;
    }
L_000a258c:;
    {
        cpu->r[2] = rd32(0x000a2594u + + 0xa4u);
    }
L_000a2590:;
    {
        cpu->r[1] = add_flags(cpu, 0x000a2598u, cpu->r[1], 0, 0);
    }
L_000a2594:;
    {
        cpu->r[3] = rd32(0x000a259cu + + 0xa0u);
    }
L_000a2598:;
    {
        cpu->r[12] = add_flags(cpu, 0x000a25a0u, cpu->r[12], 0, 0);
    }
L_000a259c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000a25a4u, cpu->r[2], 0, 0);
    }
L_000a25a0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000340u, 0, 0);
    }
L_000a25a4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000a25acu, cpu->r[3], 0, 0);
    }
L_000a25a8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000a25ac:;
    {
        cpu->r[14] = 0x000a25b0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000a25b0:;
    {
        goto L_000a23d4;
    }
L_000a25b4:;
    {
        cpu->r[1] = rd32(0x000a25bcu + + 0x84u);
    }
L_000a25b8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000a25bc:;
    {
        cpu->r[12] = rd32(0x000a25c4u + + 0x80u);
    }
L_000a25c0:;
    {
        cpu->r[14] = 0x00002526u;
    }
L_000a25c4:;
    {
        cpu->r[2] = rd32(0x000a25ccu + + 0x7cu);
    }
L_000a25c8:;
    {
        cpu->r[1] = add_flags(cpu, 0x000a25d0u, cpu->r[1], 0, 0);
    }
L_000a25cc:;
    {
        cpu->r[3] = rd32(0x000a25d4u + + 0x78u);
    }
L_000a25d0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000a25d8u, cpu->r[12], 0, 0);
    }
L_000a25d4:;
    {
        cpu->r[2] = add_flags(cpu, 0x000a25dcu, cpu->r[2], 0, 0);
    }
L_000a25d8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000340u, 0, 0);
    }
L_000a25dc:;
    {
        cpu->r[3] = add_flags(cpu, 0x000a25e4u, cpu->r[3], 0, 0);
    }
L_000a25e0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000a25e4:;
    {
        cpu->r[14] = 0x000a25e8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000a25e8:;
    {
        goto L_000a23cc;
    }
L_000a25ec:;
    {
        cpu->r[1] = rd32(0x000a25f4u + + 0x5cu);
    }
L_000a25f0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000a25f4:;
    {
        cpu->r[12] = rd32(0x000a25fcu + + 0x58u);
    }
L_000a25f8:;
    {
        cpu->r[14] = 0x00002525u;
    }
L_000a25fc:;
    {
        cpu->r[2] = rd32(0x000a2604u + + 0x54u);
    }
L_000a2600:;
    {
        cpu->r[1] = add_flags(cpu, 0x000a2608u, cpu->r[1], 0, 0);
    }
L_000a2604:;
    {
        cpu->r[3] = rd32(0x000a260cu + + 0x50u);
    }
L_000a2608:;
    {
        cpu->r[12] = add_flags(cpu, 0x000a2610u, cpu->r[12], 0, 0);
    }
L_000a260c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000a2614u, cpu->r[2], 0, 0);
    }
L_000a2610:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000340u, 0, 0);
    }
L_000a2614:;
    {
        cpu->r[3] = add_flags(cpu, 0x000a261cu, cpu->r[3], 0, 0);
    }
L_000a2618:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000a261c:;
    {
        cpu->r[14] = 0x000a2620u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000a2620:;
    {
        goto L_000a23c4;
    }
}

/* _ZN4Game12IsRimsLockedEi @ 000a2660 (arm) */
void fn_000a2660(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a2660:;
    {
        cpu->r[3] = 0x000082ddu;
    }
L_000a2664:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000a2668:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_000a266c:;
    {
        cpu->r[4] = rd32(0x000a2674u + + 0xd4u);
    }
L_000a2670:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000a2674:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a2678:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000a267c:;
    {
        cpu->r[4] = add_flags(cpu, 0x000a2684u, cpu->r[4], 0, 0);
    }
L_000a2680:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_000a2684:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000a2688:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a26cc;
        }
    }
L_000a268c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000018u, 1, 1);
    }
L_000a2690:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a26fc;
        }
    }
L_000a2694:;
    {
        cpu->r[3] = rd32(0x000a269cu + + 0xb0u);
    }
L_000a2698:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a269c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000a26a0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a26a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a26d4;
        }
    }
L_000a26a8:;
    {
        cpu->r[8] = rd32(0x000a26b0u + + 0xa0u);
    }
L_000a26ac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000a26b0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000a26b4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000a26b8:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x94u);
    }
L_000a26bc:;
    {
        cpu->r[14] = 0x000a26c0u; fn_000a0288(cpu);
    }
L_000a26c0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[0], 1, 1);
    }
L_000a26c4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000a26c8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000a26cc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000a26d0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a26d4u)) return;
    }
L_000a26d4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a26d8:;
    {
        cpu->r[14] = 0x000a26dcu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a26dc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a26e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a26a8;
        }
    }
L_000a26e4:;
    {
        cpu->r[8] = rd32(0x000a26ecu + + 0x64u);
    }
L_000a26e8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000a26ec:;
    {
        cpu->r[14] = 0x000a26f0u; fn_00094228(cpu);
    }
L_000a26f0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a26f4:;
    {
        cpu->r[14] = 0x000a26f8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a26f8:;
    {
        goto L_000a26ac;
    }
L_000a26fc:;
    {
        cpu->r[1] = rd32(0x000a2704u + + 0x50u);
    }
L_000a2700:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000a2704:;
    {
        cpu->r[12] = rd32(0x000a270cu + + 0x4cu);
    }
L_000a2708:;
    {
        cpu->r[14] = 0x0000233fu;
    }
L_000a270c:;
    {
        cpu->r[2] = rd32(0x000a2714u + + 0x48u);
    }
L_000a2710:;
    {
        cpu->r[1] = add_flags(cpu, 0x000a2718u, cpu->r[1], 0, 0);
    }
L_000a2714:;
    {
        cpu->r[3] = rd32(0x000a271cu + + 0x44u);
    }
L_000a2718:;
    {
        cpu->r[12] = add_flags(cpu, 0x000a2720u, cpu->r[12], 0, 0);
    }
L_000a271c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000a2724u, cpu->r[2], 0, 0);
    }
L_000a2720:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000350u, 0, 0);
    }
L_000a2724:;
    {
        cpu->r[3] = add_flags(cpu, 0x000a272cu, cpu->r[3], 0, 0);
    }
L_000a2728:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000a272c:;
    {
        cpu->r[14] = 0x000a2730u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000a2730:;
    {
        cpu->r[3] = rd32(0x000a2738u + + 0x14u);
    }
L_000a2734:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a2738:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000a273c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a2740:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a26a8;
        }
    }
L_000a2744:;
    {
        goto L_000a26d4;
    }
}

/* _ZN4Game9PlayMusicEbb @ 000a2764 (arm) */
void fn_000a2764(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a2764:;
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
L_000a2768:;
    {
        cpu->r[7] = rd32(0x000a2770u + + 0x11cu);
    }
L_000a276c:;
    {
        cpu->r[8] = rd32(0x000a2774u + + 0x11cu);
    }
L_000a2770:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000a2774:;
    {
        cpu->r[7] = add_flags(cpu, 0x000a277cu, cpu->r[7], 0, 0);
    }
L_000a2778:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000a277c:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000a2780:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_000a2784:;
    {
        cpu->r[9] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_000a2788:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_000a278c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a2790:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a27d4;
        }
    }
L_000a2794:;
    {
        cpu->r[10] = rd32(0x000a279cu + + 0xf8u);
    }
L_000a2798:;
    {
        cpu->r[9] = rd32(cpu->r[7] + cpu->r[10]);
    }
L_000a279c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000a27a0:;
    {
        cpu->r[14] = 0x000a27a4u; fn_00093f98(cpu);
    }
L_000a27a4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a27a8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a27cc;
        }
    }
L_000a27ac:;
    {
        cpu->r[8] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_000a27b0:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000a27b4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a27b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a2854;
        }
    }
L_000a27bc:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[10]);
    }
L_000a27c0:;
    {
        cpu->r[14] = 0x000a27c4u; fn_00093f98(cpu);
    }
L_000a27c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a27c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a27fc;
        }
    }
L_000a27cc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000a27d0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a27d4u)) return;
    }
L_000a27d4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000a27d8:;
    {
        cpu->r[14] = 0x000a27dcu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a27dc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a27e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a2794;
        }
    }
L_000a27e4:;
    {
        cpu->r[10] = rd32(0x000a27ecu + + 0xa8u);
    }
L_000a27e8:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[10]);
    }
L_000a27ec:;
    {
        cpu->r[14] = 0x000a27f0u; fn_00094228(cpu);
    }
L_000a27f0:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000a27f4:;
    {
        cpu->r[14] = 0x000a27f8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a27f8:;
    {
        goto L_000a2798;
    }
L_000a27fc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000a2800:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x490u);
    }
L_000a2804:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x484u);
    }
L_000a2808:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000a280c:;
    {
        cpu->r[14] = 0x000a2810u; fn_0018c1bc(cpu);
    }
L_000a2810:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a2814:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a2844;
        }
    }
L_000a2818:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000a281c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a2828;
        }
    }
L_000a2820:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000a2824:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a2878;
        }
    }
L_000a2828:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x484u);
    }
L_000a282c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000a2830:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x490u);
    }
L_000a2834:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000a2838:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000a283c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000a2840:;
    {
        cpu->r[14] = 0x000a2844u; fn_000fd248(cpu);
    }
L_000a2844:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000a2848:;
    {
        wr8(cpu->r[4] + + 0x4b5u, cpu->r[5]);
    }
L_000a284c:;
    {
        wr8(cpu->r[4] + + 0x4b4u, cpu->r[3]);
    }
L_000a2850:;
    {
        goto L_000a27cc;
    }
L_000a2854:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000a2858:;
    {
        cpu->r[14] = 0x000a285cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a285c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a2860:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a27bc;
        }
    }
L_000a2864:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000a2868:;
    {
        cpu->r[14] = 0x000a286cu; fn_00094228(cpu);
    }
L_000a286c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000a2870:;
    {
        cpu->r[14] = 0x000a2874u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a2874:;
    {
        goto L_000a27bc;
    }
L_000a2878:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a287c:;
    {
        cpu->r[14] = 0x000a2880u; fn_000966fc(cpu);
    }
L_000a2880:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000a2884:;
    {
        wr32(cpu->r[4] + + 0x484u, cpu->r[0]);
    }
L_000a2888:;
    {
        goto L_000a282c;
    }
}

/* _ZN4Game11ResumeMusicEv @ 000a2898 (arm) */
void fn_000a2898(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a2898:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x484u);
    }
L_000a289c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000a28a0:;
    {
        add_flags(cpu, cpu->r[1], 0x00000001u, 0, 1);
    }
L_000a28a4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000a28a8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000a28acu)) return;
        }
    }
L_000a28ac:;
    {
        cpu->r[14] = 0x000a28b0u; fn_00099b28(cpu);
    }
L_000a28b0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a28b4:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x4b5u);
    }
L_000a28b8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000a28bc:;
    {
        cpu->r[14] = 0x000a28c0u; fn_000a2764(cpu);
    }
L_000a28c0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a28c4:;
    {
        wr8(cpu->r[4] + + 0x4b6u, cpu->r[3]);
    }
L_000a28c8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000a28ccu)) return;
    }
}

/* _ZN4Game17IsTuningKitLockedEiii @ 000a28cc (arm) */
void fn_000a28cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a28cc:;
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
L_000a28d0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000a28d4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000a28d8:;
    {
        cpu->r[14] = 0x000a28dcu; fn_000973dc(cpu);
    }
L_000a28dc:;
    {
        cpu->r[4] = rd32(0x000a28e4u + + 0xfcu);
    }
L_000a28e0:;
    {
        cpu->r[4] = add_flags(cpu, 0x000a28e8u, cpu->r[4], 0, 0);
    }
L_000a28e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x0000001du, 1, 1);
    }
L_000a28e8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000a28ec:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a2948;
        }
    }
L_000a28f0:;
    {
        cpu->r[3] = 0x000082ddu;
    }
L_000a28f4:;
    {
        cpu->r[3] = rd8(cpu->r[6] + cpu->r[3]);
    }
L_000a28f8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a28fc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000a2900:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a290c;
        }
    }
L_000a2904:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000a2908:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a290cu)) return;
    }
L_000a290c:;
    {
        cpu->r[8] = rd32(0x000a2914u + + 0xd0u);
    }
L_000a2910:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000a2914:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000a2918:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a291c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a2980;
        }
    }
L_000a2920:;
    {
        cpu->r[10] = rd32(0x000a2928u + + 0xc0u);
    }
L_000a2924:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000a2928:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a292c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000a2930:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x94u);
    }
L_000a2934:;
    {
        cpu->r[14] = 0x000a2938u; fn_00097368(cpu);
    }
L_000a2938:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[0], 1, 1);
    }
L_000a293c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000a2940:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000a2944:;
    {
        goto L_000a2904;
    }
L_000a2948:;
    {
        cpu->r[1] = rd32(0x000a2950u + + 0x9cu);
    }
L_000a294c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000a2950:;
    {
        cpu->r[12] = rd32(0x000a2958u + + 0x98u);
    }
L_000a2954:;
    {
        cpu->r[14] = 0x000024fdu;
    }
L_000a2958:;
    {
        cpu->r[2] = rd32(0x000a2960u + + 0x94u);
    }
L_000a295c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000a2964u, cpu->r[1], 0, 0);
    }
L_000a2960:;
    {
        cpu->r[3] = rd32(0x000a2968u + + 0x90u);
    }
L_000a2964:;
    {
        cpu->r[12] = add_flags(cpu, 0x000a296cu, cpu->r[12], 0, 0);
    }
L_000a2968:;
    {
        cpu->r[2] = add_flags(cpu, 0x000a2970u, cpu->r[2], 0, 0);
    }
L_000a296c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000360u, 0, 0);
    }
L_000a2970:;
    {
        cpu->r[3] = add_flags(cpu, 0x000a2978u, cpu->r[3], 0, 0);
    }
L_000a2974:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000a2978:;
    {
        cpu->r[14] = 0x000a297cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000a297c:;
    {
        goto L_000a28f0;
    }
L_000a2980:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a2984:;
    {
        cpu->r[14] = 0x000a2988u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a2988:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a298c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a29c8;
        }
    }
L_000a2990:;
    {
        cpu->r[10] = rd32(0x000a2998u + + 0x50u);
    }
L_000a2994:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000a2998:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000a299c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a29a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a2924;
        }
    }
L_000a29a4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a29a8:;
    {
        cpu->r[14] = 0x000a29acu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a29ac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a29b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a2924;
        }
    }
L_000a29b4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000a29b8:;
    {
        cpu->r[14] = 0x000a29bcu; fn_00094228(cpu);
    }
L_000a29bc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a29c0:;
    {
        cpu->r[14] = 0x000a29c4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a29c4:;
    {
        goto L_000a2924;
    }
L_000a29c8:;
    {
        cpu->r[10] = rd32(0x000a29d0u + + 0x18u);
    }
L_000a29cc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000a29d0:;
    {
        cpu->r[14] = 0x000a29d4u; fn_00094228(cpu);
    }
L_000a29d4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a29d8:;
    {
        cpu->r[14] = 0x000a29dcu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a29dc:;
    {
        goto L_000a2994;
    }
}

/* _ZN4Game12GetGirlBonusEi @ 000a2a00 (arm) */
void fn_000a2a00(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a2a00:;
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
L_000a2a04:;
    {
        cpu->r[4] = rd32(0x000a2a0cu + + 0x138u);
    }
L_000a2a08:;
    {
        cpu->r[5] = rd32(0x000a2a10u + + 0x138u);
    }
L_000a2a0c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000a2a10:;
    {
        cpu->r[4] = add_flags(cpu, 0x000a2a18u, cpu->r[4], 0, 0);
    }
L_000a2a14:;
    {
        cpu->r[10] = cpu->r[1];
    }
L_000a2a18:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000a2a1c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000a2a20:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a2a24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a2a60;
        }
    }
L_000a2a28:;
    {
        cpu->r[8] = rd32(0x000a2a30u + + 0x11cu);
    }
L_000a2a2c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000a2a30:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x98u);
    }
L_000a2a34:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a2a38:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000a2a54;
        }
    }
L_000a2a3c:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000a2a40:;
    {
        cpu->r[2] = rd32(cpu->r[9]);
    }
L_000a2a44:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a2a48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a2ac4;
        }
    }
L_000a2a4c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_000a2a50:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a2a88;
        }
    }
L_000a2a54:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000a2a5cu + + 0xe4u);
    }
L_000a2a58:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000a2a5c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a2a60u)) return;
    }
L_000a2a60:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a2a64:;
    {
        cpu->r[14] = 0x000a2a68u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a2a68:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a2a6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a2a28;
        }
    }
L_000a2a70:;
    {
        cpu->r[8] = rd32(0x000a2a78u + + 0xd4u);
    }
L_000a2a74:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000a2a78:;
    {
        cpu->r[14] = 0x000a2a7cu; fn_00094228(cpu);
    }
L_000a2a7c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a2a80:;
    {
        cpu->r[14] = 0x000a2a84u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a2a84:;
    {
        goto L_000a2a2c;
    }
L_000a2a88:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000a2a8c:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_000a2a90:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a2a94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a2ae4;
        }
    }
L_000a2a98:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000a2a9c:;
    {
        *vfp_d(cpu, 7) = *(double*)G(0x000a2aa4u + + 0x94u);
    }
L_000a2aa0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00002180u, 0, 0);
    }
L_000a2aa4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000012u, 0, 0);
    }
L_000a2aa8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000a2aac:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[3];
    }
L_000a2ab0:;
    {
        *vfp_d(cpu,6) = (double)*(int32_t*)vfp_s(cpu,12);
    }
L_000a2ab4:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 6) / *vfp_d(cpu, 7);
    }
L_000a2ab8:;
    {
        *vfp_s(cpu,15) = (float)*vfp_d(cpu,7);
    }
L_000a2abc:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000a2ac0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a2ac4u)) return;
    }
L_000a2ac4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000a2ac8:;
    {
        cpu->r[14] = 0x000a2accu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a2acc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a2ad0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a2b00;
        }
    }
L_000a2ad4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x98u);
    }
L_000a2ad8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_000a2adc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000a2a54;
        }
    }
L_000a2ae0:;
    {
        goto L_000a2a88;
    }
L_000a2ae4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000a2ae8:;
    {
        cpu->r[14] = 0x000a2aecu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a2aec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a2af0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a2b18;
        }
    }
L_000a2af4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000a2af8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x98u);
    }
L_000a2afc:;
    {
        goto L_000a2a98;
    }
L_000a2b00:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a2b04:;
    {
        cpu->r[14] = 0x000a2b08u; fn_00094228(cpu);
    }
L_000a2b08:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000a2b0c:;
    {
        cpu->r[14] = 0x000a2b10u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a2b10:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x98u);
    }
L_000a2b14:;
    {
        goto L_000a2ad8;
    }
L_000a2b18:;
    {
        cpu->r[4] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000a2b1c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a2b20:;
    {
        cpu->r[14] = 0x000a2b24u; fn_00094228(cpu);
    }
L_000a2b24:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000a2b28:;
    {
        cpu->r[14] = 0x000a2b2cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a2b2c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x98u);
    }
L_000a2b30:;
    {
        goto L_000a2a98;
    }
}

/* _ZN4Game15UpdateEventsWonEv @ 000a2b50 (arm) */
void fn_000a2b50(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a2b50:;
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
L_000a2b54:;
    {
        cpu->r[4] = rd32(0x000a2b5cu + + 0x200u);
    }
L_000a2b58:;
    {
        cpu->r[6] = rd32(0x000a2b60u + + 0x200u);
    }
L_000a2b5c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000a2b60:;
    {
        cpu->r[4] = add_flags(cpu, 0x000a2b68u, cpu->r[4], 0, 0);
    }
L_000a2b64:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000a2b68:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a2b6c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000a2b70:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a2b74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a2c10;
        }
    }
L_000a2b78:;
    {
        cpu->r[5] = rd32(0x000a2b80u + + 0x1e4u);
    }
L_000a2b7c:;
    {
        cpu->r[3] = rd32(0x000a2b84u + + 0x1e4u);
    }
L_000a2b80:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000a2b84:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a2b88:;
    {
        cpu->r[9] = rd32(cpu->r[2] + + 0x60u);
    }
L_000a2b8c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000a2b90:;
    {
        cpu->r[3] = 0x00001c50u;
    }
L_000a2b94:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000a2b98:;
    {
        cpu->r[3] = 0x00001be0u;
    }
L_000a2b9c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000a2ba0:;
    {
        cpu->r[14] = 0x000a2ba4u; fn_00097724(cpu);
    }
L_000a2ba4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000003u, 1, 1);
    }
L_000a2ba8:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000a2bac:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a2cd4;
        }
    }
L_000a2bb0:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a2bb4:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_000a2bb8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a2bbc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a2cb0;
        }
    }
L_000a2bc0:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000a2bc4:;
    {
        cpu->r[3] = 0x00001c50u;
    }
L_000a2bc8:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000a2bcc:;
    {
        cpu->r[1] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000a2bd0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a2bd4:;
    {
        cpu->r[14] = 0x000a2bd8u; fn_00094038(cpu);
    }
L_000a2bd8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a2bdc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a2c60;
        }
    }
L_000a2be0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a2be4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000a2be8:;
    {
        uint32_t v = cpu->r[3] & 0x00000001u; cpu->r[3] = v;
    }
L_000a2bec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a2bf0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a2c38;
        }
    }
L_000a2bf4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000a2bf8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x60u);
    }
L_000a2bfc:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[9], 1, 1);
    }
L_000a2c00:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000a2c04:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000a2c08:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000a2c0c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a2c10u)) return;
    }
L_000a2c10:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a2c14:;
    {
        cpu->r[14] = 0x000a2c18u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a2c18:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a2c1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a2b78;
        }
    }
L_000a2c20:;
    {
        cpu->r[5] = rd32(0x000a2c28u + + 0x13cu);
    }
L_000a2c24:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000a2c28:;
    {
        cpu->r[14] = 0x000a2c2cu; fn_00094228(cpu);
    }
L_000a2c2c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a2c30:;
    {
        cpu->r[14] = 0x000a2c34u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a2c34:;
    {
        goto L_000a2b7c;
    }
L_000a2c38:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a2c3c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a2c40:;
    {
        cpu->r[14] = 0x000a2c44u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a2c44:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a2c48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a2bf4;
        }
    }
L_000a2c4c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000a2c50:;
    {
        cpu->r[14] = 0x000a2c54u; fn_00094228(cpu);
    }
L_000a2c54:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a2c58:;
    {
        cpu->r[14] = 0x000a2c5cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a2c5c:;
    {
        goto L_000a2bf4;
    }
L_000a2c60:;
    {
        cpu->r[11] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a2c64:;
    {
        cpu->r[3] = rd32(cpu->r[11]);
    }
L_000a2c68:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a2c6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a2d38;
        }
    }
L_000a2c70:;
    {
        cpu->r[3] = 0x00001c50u;
    }
L_000a2c74:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000a2c78:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000a2c7c:;
    {
        cpu->r[1] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000a2c80:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a2c84:;
    {
        cpu->r[14] = 0x000a2c88u; fn_00094000(cpu);
    }
L_000a2c88:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a2c8c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000a2c90:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a2c94:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000a2c98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a2d0c;
        }
    }
L_000a2c9c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000a2ca0:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x60u);
    }
L_000a2ca4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000a2ca8:;
    {
        wr32(cpu->r[2] + + 0x60u, cpu->r[1]);
    }
L_000a2cac:;
    {
        goto L_000a2bec;
    }
L_000a2cb0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a2cb4:;
    {
        cpu->r[14] = 0x000a2cb8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a2cb8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a2cbc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a2bc0;
        }
    }
L_000a2cc0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000a2cc4:;
    {
        cpu->r[14] = 0x000a2cc8u; fn_00094228(cpu);
    }
L_000a2cc8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a2ccc:;
    {
        cpu->r[14] = 0x000a2cd0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a2cd0:;
    {
        goto L_000a2bc0;
    }
L_000a2cd4:;
    {
        cpu->r[1] = rd32(0x000a2cdcu + + 0x90u);
    }
L_000a2cd8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000a2cdc:;
    {
        cpu->r[12] = rd32(0x000a2ce4u + + 0x8cu);
    }
L_000a2ce0:;
    {
        cpu->r[14] = 0x00002083u;
    }
L_000a2ce4:;
    {
        cpu->r[2] = rd32(0x000a2cecu + + 0x88u);
    }
L_000a2ce8:;
    {
        cpu->r[1] = add_flags(cpu, 0x000a2cf0u, cpu->r[1], 0, 0);
    }
L_000a2cec:;
    {
        cpu->r[3] = rd32(0x000a2cf4u + + 0x84u);
    }
L_000a2cf0:;
    {
        cpu->r[12] = add_flags(cpu, 0x000a2cf8u, cpu->r[12], 0, 0);
    }
L_000a2cf4:;
    {
        cpu->r[2] = add_flags(cpu, 0x000a2cfcu, cpu->r[2], 0, 0);
    }
L_000a2cf8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000374u, 0, 0);
    }
L_000a2cfc:;
    {
        cpu->r[3] = add_flags(cpu, 0x000a2d04u, cpu->r[3], 0, 0);
    }
L_000a2d00:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000a2d04:;
    {
        cpu->r[14] = 0x000a2d08u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000a2d08:;
    {
        goto L_000a2bb0;
    }
L_000a2d0c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a2d10:;
    {
        cpu->r[14] = 0x000a2d14u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a2d14:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a2d18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a2d2c;
        }
    }
L_000a2d1c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a2d20:;
    {
        cpu->r[14] = 0x000a2d24u; fn_00094228(cpu);
    }
L_000a2d24:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a2d28:;
    {
        cpu->r[14] = 0x000a2d2cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a2d2c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000a2d30:;
    {
        uint32_t v = cpu->r[3] & 0x00000001u; cpu->r[3] = v;
    }
L_000a2d34:;
    {
        goto L_000a2c9c;
    }
L_000a2d38:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000a2d3c:;
    {
        cpu->r[14] = 0x000a2d40u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a2d40:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a2d44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a2c70;
        }
    }
L_000a2d48:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a2d4c:;
    {
        cpu->r[14] = 0x000a2d50u; fn_00094228(cpu);
    }
L_000a2d50:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000a2d54:;
    {
        cpu->r[14] = 0x000a2d58u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a2d58:;
    {
        goto L_000a2c70;
    }
}

/* _ZN4Game21UpdateCompletionLevelEv @ 000a2d7c (arm) */
void fn_000a2d7c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a2d7c:;
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
L_000a2d80:;
    {
        cpu->r[6] = rd32(0x000a2d88u + + 0x238u);
    }
L_000a2d84:;
    {
        cpu->r[11] = rd32(0x000a2d8cu + + 0x238u);
    }
L_000a2d88:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000a2d8c:;
    {
        cpu->r[6] = add_flags(cpu, 0x000a2d94u, cpu->r[6], 0, 0);
    }
L_000a2d90:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00008500u, 0, 0);
    }
L_000a2d94:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
    }
L_000a2d98:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000070u, 0, 0);
    }
L_000a2d9c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[11]);
    }
L_000a2da0:;
    {
        cpu->r[7] = (~0x00000000u);
    }
L_000a2da4:;
    {
        cpu->r[10] = rd32(0x000a2dacu + + 0x21cu);
    }
L_000a2da8:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000a2dac:;
    {
        uint32_t v = cpu->r[2] & 0x00000001u; cpu->r[2] = v;
    }
L_000a2db0:;
    {
        goto L_000a2dd4;
    }
L_000a2db4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_000a2db8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_000a2dbc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x58u);
    }
L_000a2dc0:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_000a2dc4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000a2e2c;
        }
    }
L_000a2dc8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000030u, 1, 1);
    }
L_000a2dcc:;
    {
        cpu->r[7] = cpu->r[5];
    }
L_000a2dd0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a2e30;
        }
    }
L_000a2dd4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000a2dd8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000a2ddc:;
    {
        cpu->r[8] = rd32(cpu->r[4]);
    }
L_000a2de0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[7], cpu->r[1], 0, 0);
    }
L_000a2de4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a2db4;
        }
    }
L_000a2de8:;
    {
        cpu->r[9] = rd32(cpu->r[6] + cpu->r[11]);
    }
L_000a2dec:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000a2df0:;
    {
        cpu->r[14] = 0x000a2df4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a2df4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a2df8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a2e0c;
        }
    }
L_000a2dfc:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_000a2e00:;
    {
        cpu->r[14] = 0x000a2e04u; fn_00094228(cpu);
    }
L_000a2e04:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000a2e08:;
    {
        cpu->r[14] = 0x000a2e0cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a2e0c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_000a2e10:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_000a2e14:;
    {
        cpu->r[2] = rd32(cpu->r[9]);
    }
L_000a2e18:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x58u);
    }
L_000a2e1c:;
    {
        uint32_t v = cpu->r[2] & 0x00000001u; cpu->r[2] = v;
    }
L_000a2e20:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_000a2e24:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_000a2e28:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a2dc8;
        }
    }
L_000a2e2c:;
    {
        cpu->r[5] = cpu->r[7];
    }
L_000a2e30:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000a2e34:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000a2e38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a2e90;
        }
    }
L_000a2e3c:;
    {
        cpu->r[4] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_000a2e40:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x90u);
    }
L_000a2e44:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_000a2e48:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000a2ecc;
        }
    }
L_000a2e4c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a2e50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a2ef0;
        }
    }
L_000a2e54:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_000a2e58:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0x94u);
    }
L_000a2e5c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_000a2e60:;
    {
        cpu->r[14] = 0x000a2e64u; fn_000a04f8(cpu);
    }
L_000a2e64:;
    {
        cpu->r[4] = rd32(cpu->r[6] + cpu->r[11]);
    }
L_000a2e68:;
    {
        cpu->r[5] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_000a2e6c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000a2e70:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a2e74:;
    {
        wr32(cpu->r[5] + + 0x94u, cpu->r[0]);
    }
L_000a2e78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a2f6c;
        }
    }
L_000a2e7c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[0], 1, 1);
    }
L_000a2e80:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000a2e84:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000a2e88:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000a2e8c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a2e90u)) return;
    }
L_000a2e90:;
    {
        cpu->r[4] = rd32(cpu->r[6] + cpu->r[11]);
    }
L_000a2e94:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a2e98:;
    {
        cpu->r[14] = 0x000a2e9cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a2e9c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a2ea0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a2eb4;
        }
    }
L_000a2ea4:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_000a2ea8:;
    {
        cpu->r[14] = 0x000a2eacu; fn_00094228(cpu);
    }
L_000a2eac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a2eb0:;
    {
        cpu->r[14] = 0x000a2eb4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a2eb4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000a2eb8:;
    {
        cpu->r[4] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_000a2ebc:;
    {
        uint32_t v = cpu->r[3] & 0x00000001u; cpu->r[3] = v;
    }
L_000a2ec0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x90u);
    }
L_000a2ec4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_000a2ec8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a2e4c;
        }
    }
L_000a2ecc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a2ed0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a2f98;
        }
    }
L_000a2ed4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[11]);
    }
L_000a2ed8:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_000a2edc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000a2ee0:;
    {
        wr32(cpu->r[2] + + 0x90u, cpu->r[5]);
    }
L_000a2ee4:;
    {
        uint32_t v = cpu->r[3] & 0x00000001u; cpu->r[3] = v;
    }
L_000a2ee8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a2eec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a2e54;
        }
    }
L_000a2ef0:;
    {
        cpu->r[4] = rd32(cpu->r[6] + cpu->r[11]);
    }
L_000a2ef4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a2ef8:;
    {
        cpu->r[14] = 0x000a2efcu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a2efc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a2f00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a2f14;
        }
    }
L_000a2f04:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_000a2f08:;
    {
        cpu->r[14] = 0x000a2f0cu; fn_00094228(cpu);
    }
L_000a2f0c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a2f10:;
    {
        cpu->r[14] = 0x000a2f14u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a2f14:;
    {
        cpu->r[4] = rd32(cpu->r[6] + cpu->r[11]);
    }
L_000a2f18:;
    {
        cpu->r[5] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_000a2f1c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000a2f20:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x94u);
    }
L_000a2f24:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a2f28:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a2e5c;
        }
    }
L_000a2f2c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a2f30:;
    {
        cpu->r[14] = 0x000a2f34u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a2f34:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a2f38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a2e5c;
        }
    }
L_000a2f3c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000a2f40:;
    {
        cpu->r[14] = 0x000a2f44u; fn_00094228(cpu);
    }
L_000a2f44:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a2f48:;
    {
        cpu->r[14] = 0x000a2f4cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a2f4c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_000a2f50:;
    {
        cpu->r[14] = 0x000a2f54u; fn_000a04f8(cpu);
    }
L_000a2f54:;
    {
        cpu->r[4] = rd32(cpu->r[6] + cpu->r[11]);
    }
L_000a2f58:;
    {
        cpu->r[5] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_000a2f5c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000a2f60:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a2f64:;
    {
        wr32(cpu->r[5] + + 0x94u, cpu->r[0]);
    }
L_000a2f68:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a2e7c;
        }
    }
L_000a2f6c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a2f70:;
    {
        cpu->r[14] = 0x000a2f74u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a2f74:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a2f78:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = rd32(cpu->r[5] + + 0x94u);
        }
    }
L_000a2f7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a2e7c;
        }
    }
L_000a2f80:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000a2f84:;
    {
        cpu->r[14] = 0x000a2f88u; fn_00094228(cpu);
    }
L_000a2f88:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a2f8c:;
    {
        cpu->r[14] = 0x000a2f90u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a2f90:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x94u);
    }
L_000a2f94:;
    {
        goto L_000a2e7c;
    }
L_000a2f98:;
    {
        cpu->r[7] = rd32(cpu->r[6] + cpu->r[11]);
    }
L_000a2f9c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a2fa0:;
    {
        cpu->r[14] = 0x000a2fa4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a2fa4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a2fa8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a2ed4;
        }
    }
L_000a2fac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a2fb0:;
    {
        cpu->r[14] = 0x000a2fb4u; fn_00094228(cpu);
    }
L_000a2fb4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a2fb8:;
    {
        cpu->r[14] = 0x000a2fbcu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a2fbc:;
    {
        goto L_000a2ed4;
    }
}

/* _ZN4Game11BuyCarModelEii @ 000a2fcc (arm) */
void fn_000a2fcc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a2fcc:;
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
L_000a2fd0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000a2fd4:;
    {
        cpu->r[4] = rd32(0x000a2fdcu + + 0xe8u);
    }
L_000a2fd8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000a2fdc:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_000a2fe0:;
    {
        cpu->r[4] = add_flags(cpu, 0x000a2fe8u, cpu->r[4], 0, 0);
    }
L_000a2fe4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a2fe8u)) return;
        }
    }
L_000a2fe8:;
    {
        cpu->r[8] = rd32(0x000a2ff0u + + 0xd8u);
    }
L_000a2fec:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000a2ff0:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_000a2ff4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a2ff8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a3078;
        }
    }
L_000a2ffc:;
    {
        cpu->r[7] = rd32(0x000a3004u + + 0xc8u);
    }
L_000a3000:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000a3004:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000a3008:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000a300c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000a3010:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x44u);
    }
L_000a3014:;
    {
        wr8(cpu->r[3] + cpu->r[6], cpu->r[2]);
    }
L_000a3018:;
    {
        cpu->r[14] = 0x000a301cu; fn_0009613c(cpu);
    }
L_000a301c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000a3020:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000a3024:;
    {
        cpu->r[14] = 0x000a3028u; fn_00096000(cpu);
    }
L_000a3028:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000a302c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a3030:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a3034:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000a3038:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a30a0;
        }
    }
L_000a303c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000a3040:;
    {
        cpu->r[0] = 0x0000000au;
    }
L_000a3044:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x5cu);
    }
L_000a3048:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 0);
    }
L_000a304c:;
    {
        wr32(cpu->r[3] + + 0x5cu, cpu->r[2]);
    }
L_000a3050:;
    {
        cpu->r[14] = 0x000a3054u; fn_000a6118(cpu);
    }
L_000a3054:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[5], 0, 0);
    }
L_000a3058:;
    {
        cpu->r[0] = 0x0000000au;
    }
L_000a305c:;
    {
        cpu->r[14] = 0x000a3060u; fn_000a5c04(cpu);
    }
L_000a3060:;
    {
        cpu->r[3] = rd32(0x000a3068u + + 0x68u);
    }
L_000a3064:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000a3068:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a306c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000a3070:;
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
L_000a3074:;
    {
        return fn_0009e9e8(cpu);
    }
L_000a3078:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a307c:;
    {
        cpu->r[14] = 0x000a3080u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a3080:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a3084:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a2ffc;
        }
    }
L_000a3088:;
    {
        cpu->r[7] = rd32(0x000a3090u + + 0x3cu);
    }
L_000a308c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000a3090:;
    {
        cpu->r[14] = 0x000a3094u; fn_00094228(cpu);
    }
L_000a3094:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a3098:;
    {
        cpu->r[14] = 0x000a309cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a309c:;
    {
        goto L_000a3000;
    }
L_000a30a0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a30a4:;
    {
        cpu->r[14] = 0x000a30a8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a30a8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a30ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a303c;
        }
    }
L_000a30b0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a30b4:;
    {
        cpu->r[14] = 0x000a30b8u; fn_00094228(cpu);
    }
L_000a30b8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a30bc:;
    {
        cpu->r[14] = 0x000a30c0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a30c0:;
    {
        goto L_000a303c;
    }
}

/* _ZN4Game22StartInterfaceTutorialEi @ 000a30d4 (arm) */
void fn_000a30d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a30d4:;
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
L_000a30d8:;
    {
        cpu->r[4] = rd32(0x000a30e0u + + 0x120u);
    }
L_000a30dc:;
    {
        cpu->r[8] = rd32(0x000a30e4u + + 0x120u);
    }
L_000a30e0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000a30e4:;
    {
        cpu->r[4] = add_flags(cpu, 0x000a30ecu, cpu->r[4], 0, 0);
    }
L_000a30e8:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_000a30ec:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000a30f0:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_000a30f4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a30f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a319c;
        }
    }
L_000a30fc:;
    {
        cpu->r[6] = rd32(0x000a3104u + + 0x104u);
    }
L_000a3100:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000a3104:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a3108:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a310c:;
    {
        cpu->r[14] = 0x000a3110u; fn_000941ac(cpu);
    }
L_000a3110:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a3114:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a3118u)) return;
        }
    }
L_000a3118:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000a311c:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000a3120:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a3124:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a31dc;
        }
    }
L_000a3128:;
    {
        cpu->r[2] = 0x00001cb4u;
    }
L_000a312c:;
    {
        cpu->r[12] = 0x00001ca0u;
    }
L_000a3130:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a3134:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a3138:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000a313c:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[3]);
    }
L_000a3140:;
    {
        cpu->r[12] = 0x00001cacu;
    }
L_000a3144:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000a3148:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[1]);
    }
L_000a314c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000720u, 0, 0);
    }
L_000a3150:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[3]);
    }
L_000a3154:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_000a3158:;
    {
        cpu->r[12] = 0x00001d2cu;
    }
L_000a315c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000a3160:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[3]);
    }
L_000a3164:;
    {
        cpu->r[12] = 0x00001ca4u;
    }
L_000a3168:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[7]);
    }
L_000a316c:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[3]);
    }
L_000a3170:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000a3174:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000a3178:;
    {
        wr8(cpu->r[0] + + 0x3du, cpu->r[2]);
    }
L_000a317c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000720u, 0, 0);
    }
L_000a3180:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_000a3184:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000a3188:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000a318c:;
    {
        cpu->r[3] = 0x00001cb0u;
    }
L_000a3190:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_000a3194:;
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
L_000a3198:;
    {
        return fn_0015ca98(cpu);
    }
L_000a319c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a31a0:;
    {
        cpu->r[14] = 0x000a31a4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a31a4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a31a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a30fc;
        }
    }
L_000a31ac:;
    {
        cpu->r[6] = rd32(0x000a31b4u + + 0x54u);
    }
L_000a31b0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a31b4:;
    {
        cpu->r[14] = 0x000a31b8u; fn_00094228(cpu);
    }
L_000a31b8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a31bc:;
    {
        cpu->r[14] = 0x000a31c0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a31c0:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a31c4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000a31c8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a31cc:;
    {
        cpu->r[14] = 0x000a31d0u; fn_000941ac(cpu);
    }
L_000a31d0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a31d4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a31d8u)) return;
        }
    }
L_000a31d8:;
    {
        goto L_000a3118;
    }
L_000a31dc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000a31e0:;
    {
        cpu->r[14] = 0x000a31e4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a31e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a31e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a3128;
        }
    }
L_000a31ec:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a31f0:;
    {
        cpu->r[14] = 0x000a31f4u; fn_00094228(cpu);
    }
L_000a31f4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000a31f8:;
    {
        cpu->r[14] = 0x000a31fcu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a31fc:;
    {
        goto L_000a3128;
    }
}

/* _ZN4Game16LimitArcadeMoneyEv @ 000a320c (arm) */
void fn_000a320c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a320c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000a3210:;
    {
        cpu->r[4] = rd32(0x000a3218u + + 0x1dcu);
    }
L_000a3214:;
    {
        cpu->r[6] = rd32(0x000a321cu + + 0x1dcu);
    }
L_000a3218:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_000a321c:;
    {
        cpu->r[4] = add_flags(cpu, 0x000a3224u, cpu->r[4], 0, 0);
    }
L_000a3220:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a3224:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000a3228:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a322c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a3294;
        }
    }
L_000a3230:;
    {
        cpu->r[5] = rd32(0x000a3238u + + 0x1c4u);
    }
L_000a3234:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000a3238:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a323c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a33bc;
        }
    }
L_000a3240:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a3244:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000a3248:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a324c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_000a3250:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a3308;
        }
    }
L_000a3254:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000a3258:;
    {
        cpu->r[3] = 0x00005880u;
    }
L_000a325c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0c84u << 16);
    }
L_000a3260:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x58u);
    }
L_000a3264:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_000a3268:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000a3348;
        }
    }
L_000a326c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000a3270:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a32e0;
        }
    }
L_000a3274:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000a3278:;
    {
        cpu->r[3] = 0x00005880u;
    }
L_000a327c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0c84u << 16);
    }
L_000a3280:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x5cu);
    }
L_000a3284:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_000a3288:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000a32bc;
        }
    }
L_000a328c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_000a3290:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a3294u)) return;
    }
L_000a3294:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a3298:;
    {
        cpu->r[14] = 0x000a329cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a329c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a32a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a3230;
        }
    }
L_000a32a4:;
    {
        cpu->r[5] = rd32(0x000a32acu + + 0x150u);
    }
L_000a32a8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000a32ac:;
    {
        cpu->r[14] = 0x000a32b0u; fn_00094228(cpu);
    }
L_000a32b0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a32b4:;
    {
        cpu->r[14] = 0x000a32b8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a32b8:;
    {
        goto L_000a3234;
    }
L_000a32bc:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a32c0:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a32c4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a32c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a3398;
        }
    }
L_000a32cc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000a32d0:;
    {
        cpu->r[3] = 0x00005880u;
    }
L_000a32d4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0c84u << 16);
    }
L_000a32d8:;
    {
        wr32(cpu->r[2] + + 0x5cu, cpu->r[3]);
    }
L_000a32dc:;
    {
        goto L_000a328c;
    }
L_000a32e0:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a32e4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a32e8:;
    {
        cpu->r[14] = 0x000a32ecu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a32ec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a32f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a3274;
        }
    }
L_000a32f4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000a32f8:;
    {
        cpu->r[14] = 0x000a32fcu; fn_00094228(cpu);
    }
L_000a32fc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a3300:;
    {
        cpu->r[14] = 0x000a3304u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a3304:;
    {
        goto L_000a3274;
    }
L_000a3308:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a330c:;
    {
        cpu->r[14] = 0x000a3310u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a3310:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a3314:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a3328;
        }
    }
L_000a3318:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000a331c:;
    {
        cpu->r[14] = 0x000a3320u; fn_00094228(cpu);
    }
L_000a3320:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a3324:;
    {
        cpu->r[14] = 0x000a3328u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a3328:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_000a332c:;
    {
        cpu->r[3] = 0x00005880u;
    }
L_000a3330:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000a3334:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0c84u << 16);
    }
L_000a3338:;
    {
        uint32_t v = cpu->r[2] & 0x00000001u; cpu->r[2] = v;
    }
L_000a333c:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x58u);
    }
L_000a3340:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_000a3344:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a326c;
        }
    }
L_000a3348:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000a334c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a3370;
        }
    }
L_000a3350:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a3354:;
    {
        cpu->r[3] = 0x00005880u;
    }
L_000a3358:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000a335c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0c84u << 16);
    }
L_000a3360:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000a3364:;
    {
        wr32(cpu->r[1] + + 0x58u, cpu->r[3]);
    }
L_000a3368:;
    {
        uint32_t v = cpu->r[2] & 0x00000001u; cpu->r[2] = v;
    }
L_000a336c:;
    {
        goto L_000a326c;
    }
L_000a3370:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a3374:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000a3378:;
    {
        cpu->r[14] = 0x000a337cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a337c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a3380:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a3350;
        }
    }
L_000a3384:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a3388:;
    {
        cpu->r[14] = 0x000a338cu; fn_00094228(cpu);
    }
L_000a338c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000a3390:;
    {
        cpu->r[14] = 0x000a3394u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a3394:;
    {
        goto L_000a3350;
    }
L_000a3398:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a339c:;
    {
        cpu->r[14] = 0x000a33a0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a33a0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a33a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a32cc;
        }
    }
L_000a33a8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a33ac:;
    {
        cpu->r[14] = 0x000a33b0u; fn_00094228(cpu);
    }
L_000a33b0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a33b4:;
    {
        cpu->r[14] = 0x000a33b8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a33b8:;
    {
        goto L_000a32cc;
    }
L_000a33bc:;
    {
        cpu->r[1] = rd32(0x000a33c4u + + 0x3cu);
    }
L_000a33c0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000a33c4:;
    {
        cpu->r[12] = rd32(0x000a33ccu + + 0x38u);
    }
L_000a33c8:;
    {
        cpu->r[14] = 0x00002070u;
    }
L_000a33cc:;
    {
        cpu->r[2] = rd32(0x000a33d4u + + 0x34u);
    }
L_000a33d0:;
    {
        cpu->r[1] = add_flags(cpu, 0x000a33d8u, cpu->r[1], 0, 0);
    }
L_000a33d4:;
    {
        cpu->r[3] = rd32(0x000a33dcu + + 0x30u);
    }
L_000a33d8:;
    {
        cpu->r[12] = add_flags(cpu, 0x000a33e0u, cpu->r[12], 0, 0);
    }
L_000a33dc:;
    {
        cpu->r[2] = add_flags(cpu, 0x000a33e4u, cpu->r[2], 0, 0);
    }
L_000a33e0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000384u, 0, 0);
    }
L_000a33e4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000a33ecu, cpu->r[3], 0, 0);
    }
L_000a33e8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000a33ec:;
    {
        cpu->r[14] = 0x000a33f0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000a33f0:;
    {
        goto L_000a3240;
    }
}

/* _ZN4Game14SetSoundStatusEb @ 000a3410 (arm) */
void fn_000a3410(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a3410:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000a3414:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_000a3418:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000a341c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000a3420:;
    {
        cpu->r[14] = 0x000a3424u; fn_000fcfd8(cpu);
    }
L_000a3424:;
    {
        cpu->r[4] = rd32(0x000a342cu + + 0x84u);
    }
L_000a3428:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000a342c:;
    {
        cpu->r[4] = add_flags(cpu, 0x000a3434u, cpu->r[4], 0, 0);
    }
L_000a3430:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a3474;
        }
    }
L_000a3434:;
    {
        cpu->r[1] = rd8(cpu->r[5] + + 0x494u);
    }
L_000a3438:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000a343c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a344c;
        }
    }
L_000a3440:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000a3444:;
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
L_000a3448:;
    {
        return fn_00099a70(cpu);
    }
L_000a344c:;
    {
        cpu->r[3] = rd32(0x000a3454u + + 0x60u);
    }
L_000a3450:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a3454:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a3458:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a345c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a3488;
        }
    }
L_000a3460:;
    {
        cpu->r[7] = rd32(0x000a3468u + + 0x50u);
    }
L_000a3464:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000a3468:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0x28u);
    }
L_000a346c:;
    {
        wr8(cpu->r[5] + + 0x494u, cpu->r[1]);
    }
L_000a3470:;
    {
        goto L_000a3440;
    }
L_000a3474:;
    {
        wr8(cpu->r[5] + + 0x494u, cpu->r[6]);
    }
L_000a3478:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000a347c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000a3480:;
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
L_000a3484:;
    {
        return fn_00099a70(cpu);
    }
L_000a3488:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a348c:;
    {
        cpu->r[14] = 0x000a3490u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a3490:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a3494:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a3460;
        }
    }
L_000a3498:;
    {
        cpu->r[7] = rd32(0x000a34a0u + + 0x18u);
    }
L_000a349c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000a34a0:;
    {
        cpu->r[14] = 0x000a34a4u; fn_00094228(cpu);
    }
L_000a34a4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a34a8:;
    {
        cpu->r[14] = 0x000a34acu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a34ac:;
    {
        goto L_000a3464;
    }
}

/* _ZN4Game11DoPlayMusicEv @ 000a34bc (arm) */
void fn_000a34bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a34bc:;
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
L_000a34c0:;
    {
        cpu->r[4] = rd32(0x000a34c8u + + 0x10cu);
    }
L_000a34c4:;
    {
        cpu->r[6] = rd32(0x000a34ccu + + 0x10cu);
    }
L_000a34c8:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000a34cc:;
    {
        cpu->r[4] = add_flags(cpu, 0x000a34d4u, cpu->r[4], 0, 0);
    }
L_000a34d0:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a34d4:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000a34d8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a34dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a3550;
        }
    }
L_000a34e0:;
    {
        cpu->r[5] = rd32(0x000a34e8u + + 0xf4u);
    }
L_000a34e4:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000a34e8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a34ec:;
    {
        cpu->r[14] = 0x000a34f0u; fn_00093f98(cpu);
    }
L_000a34f0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a34f4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a34f8u)) return;
        }
    }
L_000a34f8:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a34fc:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_000a3500:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a3504:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a358c;
        }
    }
L_000a3508:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000a350c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a3510:;
    {
        cpu->r[14] = 0x000a3514u; fn_00093f98(cpu);
    }
L_000a3514:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a3518:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a351cu)) return;
        }
    }
L_000a351c:;
    {
        cpu->r[3] = rd8(cpu->r[8] + + 0x4b8u);
    }
L_000a3520:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a3524:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a3528u)) return;
        }
    }
L_000a3528:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a352c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a3530:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a3534:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a35b0;
        }
    }
L_000a3538:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000a353c:;
    {
        cpu->r[14] = 0x000a3540u; fn_00093fb8(cpu);
    }
L_000a3540:;
    {
        cpu->r[14] = 0x000a3544u; fn_000a0ea4(cpu);
    }
L_000a3544:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000a3548:;
    {
        wr8(cpu->r[8] + + 0x4b8u, cpu->r[3]);
    }
L_000a354c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a3550u)) return;
    }
L_000a3550:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a3554:;
    {
        cpu->r[14] = 0x000a3558u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a3558:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a355c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a34e0;
        }
    }
L_000a3560:;
    {
        cpu->r[5] = rd32(0x000a3568u + + 0x74u);
    }
L_000a3564:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000a3568:;
    {
        cpu->r[14] = 0x000a356cu; fn_00094228(cpu);
    }
L_000a356c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a3570:;
    {
        cpu->r[14] = 0x000a3574u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a3574:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000a3578:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a357c:;
    {
        cpu->r[14] = 0x000a3580u; fn_00093f98(cpu);
    }
L_000a3580:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a3584:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000a34f8;
        }
    }
L_000a3588:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a358cu)) return;
    }
L_000a358c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a3590:;
    {
        cpu->r[14] = 0x000a3594u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a3594:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a3598:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a3508;
        }
    }
L_000a359c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a35a0:;
    {
        cpu->r[14] = 0x000a35a4u; fn_00094228(cpu);
    }
L_000a35a4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a35a8:;
    {
        cpu->r[14] = 0x000a35acu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a35ac:;
    {
        goto L_000a3508;
    }
L_000a35b0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a35b4:;
    {
        cpu->r[14] = 0x000a35b8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a35b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a35bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a3538;
        }
    }
L_000a35c0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a35c4:;
    {
        cpu->r[14] = 0x000a35c8u; fn_00094228(cpu);
    }
L_000a35c8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a35cc:;
    {
        cpu->r[14] = 0x000a35d0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a35d0:;
    {
        goto L_000a3538;
    }
}

/* _ZN4Game13TimerCallbackEv @ 000a35e0 (arm) */
void fn_000a35e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a35e0:;
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
L_000a35e4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000a35e8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000a35ec:;
    {
        cpu->r[14] = 0x000a35f0u; fn_000f34a0(cpu);
    }
L_000a35f0:;
    {
        cpu->r[5] = rd32(0x000a35f8u + + 0xc8cu);
    }
L_000a35f4:;
    {
        cpu->r[5] = add_flags(cpu, 0x000a35fcu, cpu->r[5], 0, 0);
    }
L_000a35f8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a35fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a3a14;
        }
    }
L_000a3600:;
    {
        cpu->r[14] = 0x000a3604u; fn_0018ba64(cpu);
    }
L_000a3604:;
    {
        cpu->r[14] = 0x000a3608u; fn_0018ba68(cpu);
    }
L_000a3608:;
    {
        cpu->r[3] = rd32(0x000a3610u + + 0xc78u);
    }
L_000a360c:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000a3610:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a3614:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a3618:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a3c70;
        }
    }
L_000a361c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x490u);
    }
L_000a3620:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a3624:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a3638;
        }
    }
L_000a3628:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000a362c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000a3630:;
    {
        cpu->r[14] = 0x000a3638u;
    }
L_000a3634:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a3638u)) return;
    }
L_000a3638:;
    {
        cpu->r[3] = 0x000084f1u;
    }
L_000a363c:;
    {
        cpu->r[2] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_000a3640:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000a3644:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a3bc4;
        }
    }
L_000a3648:;
    {
        cpu->r[3] = 0x00008508u;
    }
L_000a364c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000a3650:;
    {
        cpu->r[2] = 0x00006738u;
    }
L_000a3654:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a3658:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_000a365c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_000a3660:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a3674;
        }
    }
L_000a3664:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a3668:;
    {
        cpu->r[14] = 0x000a366cu; fn_000962e0(cpu);
    }
L_000a366c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a3670:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a3680;
        }
    }
L_000a3674:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4d8u);
    }
L_000a3678:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000a367c:;
    {
        wr32(cpu->r[4] + + 0x4d8u, cpu->r[3]);
    }
L_000a3680:;
    {
        cpu->r[14] = 0x000a3684u; fn_0009b4d0(cpu);
    }
L_000a3684:;
    {
        cpu->r[14] = 0x000a3688u; fn_0009b4d0(cpu);
    }
L_000a3688:;
    {
        cpu->r[3] = 0x000014fcu;
    }
L_000a368c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a3690:;
    {
        wr32(cpu->r[4] + + 0x3ecu, cpu->r[3]);
    }
L_000a3694:;
    {
        wr32(cpu->r[4] + + 0x420u, cpu->r[0]);
    }
L_000a3698:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a369c:;
    {
        cpu->r[14] = 0x000a36a0u; fn_000f34a0(cpu);
    }
L_000a36a0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4bcu);
    }
L_000a36a4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a36a8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000a36ac:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a36d0;
        }
    }
L_000a36b0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_000a36b4:;
    {
        wr32(cpu->r[4] + + 0x4bcu, cpu->r[3]);
    }
L_000a36b8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a36bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a36d0;
        }
    }
L_000a36c0:;
    {
        cpu->r[3] = 0x00001c0cu;
    }
L_000a36c4:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_000a36c8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a36cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a3cb8;
        }
    }
L_000a36d0:;
    {
        cpu->r[3] = 0x00001bc0u;
    }
L_000a36d4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a36d8:;
    {
        cpu->r[14] = 0x000a36dcu; fn_0018b65c(cpu);
    }
L_000a36dc:;
    {
        cpu->r[14] = 0x000a36e0u; fn_0015d19c(cpu);
    }
L_000a36e0:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000a36e4:;
    {
        wr32(cpu->r[4] + + 0x4e0u, cpu->r[3]);
    }
L_000a36e8:;
    {
        cpu->r[3] = 0x000063e8u;
    }
L_000a36ec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a36f0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a36f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a3708;
        }
    }
L_000a36f8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000a36fc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000a3700:;
    {
        cpu->r[14] = 0x000a3708u;
    }
L_000a3704:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a3708u)) return;
    }
L_000a3708:;
    {
        cpu->r[3] = 0x00001d38u;
    }
L_000a370c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a3710:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a3714:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000a3b0c;
        }
    }
L_000a3718:;
    {
        cpu->r[2] = 0x00001d70u;
    }
L_000a371c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000740u, 0, 0);
    }
L_000a3720:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000eu, 0, 0);
    }
L_000a3724:;
    {
        cpu->r[2] = rd8(cpu->r[4] + cpu->r[2]);
    }
L_000a3728:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000a372c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000a3730:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x4u);
    }
L_000a3734:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a3748;
        }
    }
L_000a3738:;
    {
        cpu->r[3] = 0x00001d71u;
    }
L_000a373c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_000a3740:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a3744:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a3b0c;
        }
    }
L_000a3748:;
    {
        cpu->r[3] = 0x00008498u;
    }
L_000a374c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000a3750:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a3754:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000a3758:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 1);
    }
L_000a375c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a37c0;
        }
    }
L_000a3760:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00001040u, 0, 0);
    }
L_000a3764:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[4], 0x00008300u, 0, 0);
    }
L_000a3768:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000021u, 0, 0);
    }
L_000a376c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000008u, 0, 0);
    }
L_000a3770:;
    {
        cpu->r[8] = 0x00001d38u;
    }
L_000a3774:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], shifter(cpu->r[7], 2, 3u, &shc), 0, 0);
    }
L_000a3778:;
    {
        goto L_000a3784;
    }
L_000a377c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[10], 1, 1);
    }
L_000a3780:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a37bc;
        }
    }
L_000a3784:;
    {
        cpu->r[1] = rd32(cpu->r[7] + - 0x8u);
    }
L_000a3788:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a378c:;
    {
        cpu->r[2] = rd32(cpu->r[7] + - 0x4u);
    }
L_000a3790:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000008u, 1, 0);
    }
L_000a3794:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a3798:;
    {
        cpu->r[14] = 0x000a37a0u;
    }
L_000a379c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a37a0u)) return;
    }
L_000a37a0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000a37a4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000740u, 0, 0);
    }
L_000a37a8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000eu, 0, 0);
    }
L_000a37ac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000a37b0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000a37b4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_000a37b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a377c;
        }
    }
L_000a37bc:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_000a37c0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a37c4:;
    {
        cpu->r[14] = 0x000a37c8u; fn_0009631c(cpu);
    }
L_000a37c8:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a37cc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a37d0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000a37d4:;
    {
        cpu->r[14] = 0x000a37dcu;
    }
L_000a37d8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a37dcu)) return;
    }
L_000a37dc:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a37e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a3df0;
        }
    }
L_000a37e4:;
    {
        cpu->r[10] = rd32(0x000a37ecu + + 0xaa0u);
    }
L_000a37e8:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_000a37ec:;
    {
        cpu->r[3] = rd8(cpu->r[7]);
    }
L_000a37f0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a37f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a3d28;
        }
    }
L_000a37f8:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_000a37fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a383c;
        }
    }
L_000a3800:;
    {
        cpu->r[7] = 0x00008520u;
    }
L_000a3804:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000a3808:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_000a380c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a383c;
        }
    }
L_000a3810:;
    {
        cpu->r[14] = 0x000a3814u; fn_0009b4d0(cpu);
    }
L_000a3814:;
    {
        cpu->r[3] = 0x00008518u;
    }
L_000a3818:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_000a381c:;
    {
        cpu->r[14] = 0x000a3820u; fn_0009b4d0(cpu);
    }
L_000a3820:;
    {
        cpu->r[3] = 0x00008524u;
    }
L_000a3824:;
    {
        cpu->r[2] = 0x00000028u;
    }
L_000a3828:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000a382c:;
    {
        cpu->r[3] = 0x0000851cu;
    }
L_000a3830:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000a3834:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000a3838:;
    {
        wr32(cpu->r[4] + cpu->r[7], cpu->r[0]);
    }
L_000a383c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a3840:;
    {
        cpu->r[14] = 0x000a3844u; fn_000962e0(cpu);
    }
L_000a3844:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a3848:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a3a1c;
        }
    }
L_000a384c:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_000a3850:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a3ea0;
        }
    }
L_000a3854:;
    {
        cpu->r[14] = 0x000a3858u; fn_0009b4d0(cpu);
    }
L_000a3858:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000a385c:;
    {
        cpu->r[2] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_000a3860:;
    {
        cpu->r[3] = 0x00008520u;
    }
L_000a3864:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000a3868:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a386c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_000a3870:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a3888;
        }
    }
L_000a3874:;
    {
        cpu->r[2] = 0x00008528u;
    }
L_000a3878:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000a387c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000a3880:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[7]);
        }
    }
L_000a3884:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 0);
        }
    }
L_000a3888:;
    {
        cpu->r[2] = 0x00008530u;
    }
L_000a388c:;
    {
        cpu->r[12] = 0x00008520u;
    }
L_000a3890:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000320u, 1, 1);
    }
L_000a3894:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000a3898:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[0]);
    }
L_000a389c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_000a38a0:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_000a38a4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a3fd4;
        }
    }
L_000a38a8:;
    {
        cpu->r[2] = 0x00008518u;
    }
L_000a38ac:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000a38b0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_000a38b4:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_000a38b8:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000a38bc:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_000a38c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a38c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a38e0;
        }
    }
L_000a38c8:;
    {
        cpu->r[3] = 0x00005f68u;
    }
L_000a38cc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a38d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a38d4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00005f6cu;
        }
    }
L_000a38d8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_000a38dc:;
    {
        if (cond_test(cpu, 12)) {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[2]);
        }
    }
L_000a38e0:;
    {
        cpu->r[3] = 0x00008508u;
    }
L_000a38e4:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a38e8:;
    {
        cpu->r[3] = 0x00008520u;
    }
L_000a38ec:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a38f0:;
    {
        cpu->r[3] = 0x00008518u;
    }
L_000a38f4:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000a38f8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a38fc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_000a3900:;
    {
        cpu->r[3] = 0x00008514u;
    }
L_000a3904:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000a3908:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a414c;
        }
    }
L_000a390c:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000a3910:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_000a3914:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a3918:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a392c;
        }
    }
L_000a391c:;
    {
        cpu->r[8] = 0x00005f68u;
    }
L_000a3920:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000a3924:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_000a3928:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000a3eb4;
        }
    }
L_000a392c:;
    {
        cpu->r[3] = 0x00008524u;
    }
L_000a3930:;
    {
        cpu->r[11] = 0x000063e8u;
    }
L_000a3934:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_000a3938:;
    {
        cpu->r[8] = 0x000014fcu;
    }
L_000a393c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a3940:;
    {
        cpu->r[7] = 0x0000851cu;
    }
L_000a3944:;
    {
        cpu->r[9] = 0x00001d38u;
    }
L_000a3948:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000027u, 1, 1);
    }
L_000a394c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a3f0c;
        }
    }
L_000a3950:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000a3954:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a3958:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a3968;
        }
    }
L_000a395c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000a3960:;
    {
        cpu->r[14] = 0x000a3968u;
    }
L_000a3964:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a3968u)) return;
    }
L_000a3968:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000a396c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a3970:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000028u, 0, 0);
    }
L_000a3974:;
    {
        wr32(cpu->r[4] + cpu->r[8], cpu->r[3]);
    }
L_000a3978:;
    {
        cpu->r[14] = 0x000a397cu; fn_00099494(cpu);
    }
L_000a397c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000a3980:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a3984:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a3988:;
    {
        cpu->r[14] = 0x000a3990u;
    }
L_000a398c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x34u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a3990u)) return;
    }
L_000a3990:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a3994:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a3998:;
    {
        cpu->r[14] = 0x000a39a0u;
    }
L_000a399c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a39a0u)) return;
    }
L_000a39a0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000a39a4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a39a8:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a39ac:;
    {
        cpu->r[14] = 0x000a39b4u;
    }
L_000a39b0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x34u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a39b4u)) return;
    }
L_000a39b4:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a39b8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a39bc:;
    {
        cpu->r[14] = 0x000a39c4u;
    }
L_000a39c0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x30u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a39c4u)) return;
    }
L_000a39c4:;
    {
        cpu->r[2] = 0x00001d32u;
    }
L_000a39c8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4dcu);
    }
L_000a39cc:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[2]);
    }
L_000a39d0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000a39d4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000a39d8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a39dc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000a39e0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000028u, 1, 0);
    }
L_000a39e4:;
    {
        wr32(cpu->r[4] + + 0x4dcu, cpu->r[1]);
    }
L_000a39e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000028u, 0, 0);
    }
L_000a39ec:;
    {
        wr32(cpu->r[4] + cpu->r[10], cpu->r[2]);
    }
L_000a39f0:;
    {
        wr32(cpu->r[4] + cpu->r[7], cpu->r[3]);
    }
L_000a39f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a4238;
        }
    }
L_000a39f8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000a39fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000740u, 0, 0);
    }
L_000a3a00:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000eu, 0, 0);
    }
L_000a3a04:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000a3a08:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000a3a0c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_000a3a10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a3948;
        }
    }
L_000a3a14:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000a3a18:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a3a1cu)) return;
    }
L_000a3a1c:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_000a3a20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a3ea0;
        }
    }
L_000a3a24:;
    {
        cpu->r[3] = 0x00008508u;
    }
L_000a3a28:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a3a2c:;
    {
        cpu->r[3] = 0x000014fcu;
    }
L_000a3a30:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000a3a34:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a3a38:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000028u;
        }
    }
L_000a3a3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a3a48;
        }
    }
L_000a3a40:;
    {
        cpu->r[0] = 0x00000028u;
    }
L_000a3a44:;
    {
        cpu->r[14] = 0x000a3a48u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_000a3a48:;
    {
        cpu->r[3] = 0x000014fcu;
    }
L_000a3a4c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], cpu->r[7], 0, 0);
    }
L_000a3a50:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a3a54:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[7]);
    }
L_000a3a58:;
    {
        cpu->r[14] = 0x000a3a5cu; fn_00099494(cpu);
    }
L_000a3a5c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a3a60:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a3a64:;
    {
        cpu->r[14] = 0x000a3a6cu;
    }
L_000a3a68:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a3a6cu)) return;
    }
L_000a3a6c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a3a70:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a3a74:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000a3a78:;
    {
        cpu->r[14] = 0x000a3a80u;
    }
L_000a3a7c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x34u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a3a80u)) return;
    }
L_000a3a80:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a3a84:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a3a88:;
    {
        cpu->r[14] = 0x000a3a90u;
    }
L_000a3a8c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x30u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a3a90u)) return;
    }
L_000a3a90:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a3a94:;
    {
        cpu->r[14] = 0x000a3a98u; fn_00193278(cpu);
    }
L_000a3a98:;
    {
        cpu->r[3] = 0x00001d71u;
    }
L_000a3a9c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000a3aa0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a3aa4:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000a3aa8:;
    {
        cpu->r[14] = 0x000a3aacu; fn_00096060(cpu);
    }
L_000a3aac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a3ab0:;
    {
        cpu->r[14] = 0x000a3ab4u; fn_000960ac(cpu);
    }
L_000a3ab4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a3ab8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a3e00;
        }
    }
L_000a3abc:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_000a3ac0:;
    {
        cpu->r[3] = 0x00001d38u;
    }
L_000a3ac4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a3ac8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a3acc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000a3ae8;
        }
    }
L_000a3ad0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000740u, 0, 0);
    }
L_000a3ad4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000eu, 0, 0);
    }
L_000a3ad8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000a3adc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000a3ae0:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_000a3ae4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a4018;
        }
    }
L_000a3ae8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a3aec:;
    {
        cpu->r[14] = 0x000a3af0u; fn_00096070(cpu);
    }
L_000a3af0:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x4b4u);
    }
L_000a3af4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a3af8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a3b0c;
        }
    }
L_000a3afc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a3b00:;
    {
        cpu->r[14] = 0x000a3b04u; fn_000a34bc(cpu);
    }
L_000a3b04:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a3b08:;
    {
        wr8(cpu->r[4] + + 0x4b4u, cpu->r[3]);
    }
L_000a3b0c:;
    {
        cpu->r[14] = 0x000a3b10u; fn_0018ba64(cpu);
    }
L_000a3b10:;
    {
        cpu->r[14] = 0x000a3b14u; fn_0018ba68(cpu);
    }
L_000a3b14:;
    {
        cpu->r[14] = 0x000a3b18u; fn_0009b4d0(cpu);
    }
L_000a3b18:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4d0u);
    }
L_000a3b1c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_000a3b20:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000a3b24:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000a3b28:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x4d4u, cpu->r[3]);
        }
    }
L_000a3b2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a3b40;
        }
    }
L_000a3b30:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
    }
L_000a3b34:;
    {
        cpu->r[0] = 0x000003e8u;
    }
L_000a3b38:;
    {
        cpu->r[14] = 0x000a3b3cu; imp___aeabi_uidiv(cpu); /* __aeabi_uidiv */
    }
L_000a3b3c:;
    {
        wr32(cpu->r[4] + + 0x4d4u, cpu->r[0]);
    }
L_000a3b40:;
    {
        cpu->r[3] = rd32(0x000a3b48u + + 0x748u);
    }
L_000a3b44:;
    {
        wr32(cpu->r[4] + + 0x4d0u, cpu->r[6]);
    }
L_000a3b48:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000a3b4c:;
    {
        cpu->r[8] = rd32(cpu->r[6]);
    }
L_000a3b50:;
    {
        uint32_t v = cpu->r[8] & 0x00000001u; cpu->r[8] = v;
        set_nz(cpu, v);
    }
L_000a3b54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a3b7c;
        }
    }
L_000a3b58:;
    {
        cpu->r[7] = rd32(0x000a3b60u + + 0x734u);
    }
L_000a3b5c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000a3b60:;
    {
        cpu->r[14] = 0x000a3b64u; fn_0015c7d0(cpu);
    }
L_000a3b64:;
    {
        cpu->r[3] = 0x000084a8u;
    }
L_000a3b68:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a3b6c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000a3b70:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
        }
    }
L_000a3b74:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
        }
    }
L_000a3b78:;
    {
        goto L_000a3a14;
    }
L_000a3b7c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a3b80:;
    {
        cpu->r[14] = 0x000a3b84u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a3b84:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a3b88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a3b58;
        }
    }
L_000a3b8c:;
    {
        cpu->r[7] = rd32(0x000a3b94u + + 0x700u);
    }
L_000a3b90:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_000a3b94:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a3b98:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000a3b9c:;
    {
        wr32(cpu->r[3] + + 0x1b0u, cpu->r[8]);
    }
L_000a3ba0:;
    {
        wr32(cpu->r[3] + + 0x1a8u, cpu->r[2]);
    }
L_000a3ba4:;
    {
        wr32(cpu->r[3] + + 0xc8u, cpu->r[8]);
    }
L_000a3ba8:;
    {
        wr32(cpu->r[3] + + 0xccu, cpu->r[2]);
    }
L_000a3bac:;
    {
        wr8(cpu->r[3] + + 0xd0u, cpu->r[8]);
    }
L_000a3bb0:;
    {
        wr32(cpu->r[3] + + 0xd4u, cpu->r[8]);
    }
L_000a3bb4:;
    {
        wr32(cpu->r[3] + + 0x1a4u, cpu->r[8]);
    }
L_000a3bb8:;
    {
        wr8(cpu->r[3] + + 0x1acu, cpu->r[8]);
    }
L_000a3bbc:;
    {
        cpu->r[14] = 0x000a3bc0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a3bc0:;
    {
        goto L_000a3b5c;
    }
L_000a3bc4:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_000a3bc8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000a3bcc:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000a3bd0:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000a3bd4:;
    {
        cpu->r[14] = 0x000a3bd8u; fn_0015cee4(cpu);
    }
L_000a3bd8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a3bdc:;
    {
        cpu->r[14] = 0x000a3be0u; fn_000f34a0(cpu);
    }
L_000a3be0:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a3be4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a3c40;
        }
    }
L_000a3be8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a3bec:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_000a3bf0:;
    {
        cpu->r[14] = 0x000a3bf4u; fn_000f3430(cpu);
    }
L_000a3bf4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a3bf8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a3e70;
        }
    }
L_000a3bfc:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a3c00:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a3c04:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_000a3c08:;
    {
        cpu->r[14] = 0x000a3c10u;
    }
L_000a3c0c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a3c10u)) return;
    }
L_000a3c10:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a3c14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a3c40;
        }
    }
L_000a3c18:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a3c1c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a3c20:;
    {
        cpu->r[14] = 0x000a3c28u;
    }
L_000a3c24:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xe0u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a3c28u)) return;
    }
L_000a3c28:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a3c2c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a3c30:;
    {
        cpu->r[14] = 0x000a3c38u;
    }
L_000a3c34:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x78u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a3c38u)) return;
    }
L_000a3c38:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_000a3c3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a3e50;
        }
    }
L_000a3c40:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x490u);
    }
L_000a3c44:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a3c48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a3648;
        }
    }
L_000a3c4c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x484u);
    }
L_000a3c50:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a3c54:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000a3c58:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000a3c5c:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_000a3c60:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000a3c64:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x488u, cpu->r[3]);
        }
    }
L_000a3c68:;
    {
        cpu->r[14] = 0x000a3c6cu; fn_00096798(cpu);
    }
L_000a3c6c:;
    {
        goto L_000a3648;
    }
L_000a3c70:;
    {
        cpu->r[0] = 0x00000078u;
    }
L_000a3c74:;
    {
        cpu->r[14] = 0x000a3c78u; fn_0018ba6c(cpu);
    }
L_000a3c78:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000a3c7c:;
    {
        cpu->r[2] = 0x00000078u;
    }
L_000a3c80:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000a3c84:;
    {
        cpu->r[14] = 0x000a3c88u; imp_memset(cpu); /* memset */
    }
L_000a3c88:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a3c8c:;
    {
        cpu->r[14] = 0x000a3c90u; fn_000eaca4(cpu);
    }
L_000a3c90:;
    {
        cpu->r[3] = rd32(0x000a3c98u + + 0x600u);
    }
L_000a3c94:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000a3c98:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a3c9c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000a3ca0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_000a3ca4:;
    {
        wr32(cpu->r[7], cpu->r[3]);
    }
L_000a3ca8:;
    {
        cpu->r[14] = 0x000a3cacu; fn_000f361c(cpu);
    }
L_000a3cac:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a3cb0:;
    {
        wr32(cpu->r[6], cpu->r[3]);
    }
L_000a3cb4:;
    {
        goto L_000a361c;
    }
L_000a3cb8:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000a3cbc:;
    {
        cpu->r[1] = 0x00000024u;
    }
L_000a3cc0:;
    {
        cpu->r[14] = 0x000a3cc8u;
    }
L_000a3cc4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a3cc8u)) return;
    }
L_000a3cc8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a3ccc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a36d0;
        }
    }
L_000a3cd0:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a3cd4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a3cd8:;
    {
        cpu->r[1] = 0x00000029u;
    }
L_000a3cdc:;
    {
        cpu->r[14] = 0x000a3ce4u;
    }
L_000a3ce0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a3ce4u)) return;
    }
L_000a3ce4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a3ce8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a36d0;
        }
    }
L_000a3cec:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a3cf0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a3cf4:;
    {
        cpu->r[1] = 0x00000028u;
    }
L_000a3cf8:;
    {
        cpu->r[14] = 0x000a3d00u;
    }
L_000a3cfc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a3d00u)) return;
    }
L_000a3d00:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a3d04:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a36d0;
        }
    }
L_000a3d08:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a3d0c:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_000a3d10:;
    {
        cpu->r[14] = 0x000a3d14u; fn_000f3430(cpu);
    }
L_000a3d14:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a3d18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a4248;
        }
    }
L_000a3d1c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a3d20:;
    {
        cpu->r[14] = 0x000a3d24u; fn_000a2898(cpu);
    }
L_000a3d24:;
    {
        goto L_000a36d0;
    }
L_000a3d28:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000a3d2c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a3d30:;
    {
        cpu->r[14] = 0x000a3d34u; fn_000f3430(cpu);
    }
L_000a3d34:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_000a3d38:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_000a3d3c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a3d40:;
    {
        cpu->r[14] = 0x000a3d44u; fn_000f3430(cpu);
    }
L_000a3d44:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_000a3d48:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a3ff8;
        }
    }
L_000a3d4c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a3d50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a37f8;
        }
    }
L_000a3d54:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a3d58:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a3d5c:;
    {
        cpu->r[1] = 0x0000001eu;
    }
L_000a3d60:;
    {
        cpu->r[14] = 0x000a3d68u;
    }
L_000a3d64:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a3d68u)) return;
    }
L_000a3d68:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a3d6c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a37f8;
        }
    }
L_000a3d70:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a3d74:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a3d78:;
    {
        cpu->r[1] = 0x00000027u;
    }
L_000a3d7c:;
    {
        cpu->r[14] = 0x000a3d84u;
    }
L_000a3d80:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a3d84u)) return;
    }
L_000a3d84:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a3d88:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a37f8;
        }
    }
L_000a3d8c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a3d90:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a3d94:;
    {
        cpu->r[1] = 0x00000029u;
    }
L_000a3d98:;
    {
        cpu->r[14] = 0x000a3da0u;
    }
L_000a3d9c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a3da0u)) return;
    }
L_000a3da0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a3da4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a37f8;
        }
    }
L_000a3da8:;
    {
        cpu->r[3] = rd32(0x000a3db0u + + 0x4ecu);
    }
L_000a3dac:;
    {
        cpu->r[4] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000a3db0:;
    {
        goto L_000a3dbc;
    }
L_000a3db4:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000a3db8:;
    {
        cpu->r[14] = 0x000a3dbcu; fn_000f34e8(cpu);
    }
L_000a3dbc:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000a3dc0:;
    {
        cpu->r[14] = 0x000a3dc4u; fn_000f34a0(cpu);
    }
L_000a3dc4:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_000a3dc8:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000a3dcc:;
    {
        cpu->r[14] = 0x000a3dd4u;
    }
L_000a3dd0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a3dd4u)) return;
    }
L_000a3dd4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000a3dd8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a3ddc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a3db4;
        }
    }
L_000a3de0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_000a3de4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000a3de8:;
    {
        wr8(cpu->r[3], cpu->r[2]);
    }
L_000a3dec:;
    {
        goto L_000a3a14;
    }
L_000a3df0:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000a3df4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a3df8:;
    {
        cpu->r[14] = 0x000a3dfcu; fn_000ba830(cpu);
    }
L_000a3dfc:;
    {
        goto L_000a37e4;
    }
L_000a3e00:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a3e04:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000a3e08:;
    {
        cpu->r[14] = 0x000a3e0cu; fn_000f3430(cpu);
    }
L_000a3e0c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a3e10:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a3abc;
        }
    }
L_000a3e14:;
    {
        cpu->r[3] = 0x00001d38u;
    }
L_000a3e18:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a3e1c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a3e20:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000a3ae8;
        }
    }
L_000a3e24:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000740u, 0, 0);
    }
L_000a3e28:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000eu, 0, 0);
    }
L_000a3e2c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000a3e30:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0x4u);
    }
L_000a3e34:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 1);
    }
L_000a3e38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a4018;
        }
    }
L_000a3e3c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000a3e40:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a3e44:;
    {
        cpu->r[14] = 0x000a3e4cu;
    }
L_000a3e48:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a3e4cu)) return;
    }
L_000a3e4c:;
    {
        goto L_000a3ac0;
    }
L_000a3e50:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a3e54:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a3e58:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000a3e5c:;
    {
        cpu->r[14] = 0x000a3e64u;
    }
L_000a3e60:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x74u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a3e64u)) return;
    }
L_000a3e64:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a3e68:;
    {
        wr32(cpu->r[6] + + 0x8f4u, cpu->r[3]);
    }
L_000a3e6c:;
    {
        goto L_000a3c40;
    }
L_000a3e70:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a3e74:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a3e78:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_000a3e7c:;
    {
        cpu->r[14] = 0x000a3e84u;
    }
L_000a3e80:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a3e84u)) return;
    }
L_000a3e84:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a3e88:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a3bfc;
        }
    }
L_000a3e8c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a3e90:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a3e94:;
    {
        cpu->r[14] = 0x000a3e9cu;
    }
L_000a3e98:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xe0u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a3e9cu)) return;
    }
L_000a3e9c:;
    {
        goto L_000a3bfc;
    }
L_000a3ea0:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a3ea4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a3ea8:;
    {
        cpu->r[14] = 0x000a3eb0u;
    }
L_000a3eac:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a3eb0u)) return;
    }
L_000a3eb0:;
    {
        goto L_000a3a90;
    }
L_000a3eb4:;
    {
        cpu->r[9] = 0x00008524u;
    }
L_000a3eb8:;
    {
        cpu->r[3] = 0x0000852cu;
    }
L_000a3ebc:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_000a3ec0:;
    {
        cpu->r[1] = 0x00000028u;
    }
L_000a3ec4:;
    {
        cpu->r[11] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000a3ec8:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000a3ecc:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000a3ed0:;
    {
        cpu->r[14] = 0x000a3ed4u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_000a3ed4:;
    {
        cpu->r[3] = 0x0000851cu;
    }
L_000a3ed8:;
    {
        cpu->r[1] = (~0x00000027u);
    }
L_000a3edc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a3ee0:;
    {
        uint32_t v = cpu->r[1] * cpu->r[0] + cpu->r[11]; cpu->r[11] = v;
    }
L_000a3ee4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000050u, 0, 0);
    }
L_000a3ee8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_000a3eec:;
    {
        wr32(cpu->r[4] + cpu->r[8], cpu->r[10]);
    }
L_000a3ef0:;
    {
        uint32_t v = cpu->r[1] * cpu->r[0] + cpu->r[2]; cpu->r[0] = v;
    }
L_000a3ef4:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_000a3ef8:;
    {
        wr32(cpu->r[4] + cpu->r[9], cpu->r[11]);
    }
L_000a3efc:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_000a3f00:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = 0x00005f6cu;
        }
    }
L_000a3f04:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[4] + cpu->r[8], cpu->r[7]);
        }
    }
L_000a3f08:;
    {
        if (cond_test(cpu, 11)) {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[7]);
        }
    }
L_000a3f0c:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000a3f10:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_000a3f14:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a3f18:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a4064;
        }
    }
L_000a3f1c:;
    {
        cpu->r[3] = 0x00008508u;
    }
L_000a3f20:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a3f24:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a3f28:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00001bc8u;
        }
    }
L_000a3f2c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_000a3f30:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a3fb0;
        }
    }
L_000a3f34:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_000a3f38:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a3f3c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a3f40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a3f5c;
        }
    }
L_000a3f44:;
    {
        cpu->r[3] = 0x00008818u;
    }
L_000a3f48:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000a3f4c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000a3f50:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0xf0u);
    }
L_000a3f54:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a3f58:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a3fb0;
        }
    }
L_000a3f5c:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000a3f60:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_000a3f64:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a3f68:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a3fa0;
        }
    }
L_000a3f6c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a3f70:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a3f74:;
    {
        cpu->r[14] = 0x000a3f7cu;
    }
L_000a3f78:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a3f7cu)) return;
    }
L_000a3f7c:;
    {
        cpu->r[2] = 0x0000853cu;
    }
L_000a3f80:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a3f84:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a3f88:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000a3f8c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000a3f90:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_000a3f94:;
    {
        cpu->r[14] = 0x000a3f9cu;
    }
L_000a3f98:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x28u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a3f9cu)) return;
    }
L_000a3f9c:;
    {
        goto L_000a3a90;
    }
L_000a3fa0:;
    {
        cpu->r[3] = 0x00005f6cu;
    }
L_000a3fa4:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_000a3fa8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a3fac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a3f6c;
        }
    }
L_000a3fb0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000a3fb4:;
    {
        cpu->r[14] = 0x000a3fb8u; fn_000d1950(cpu);
    }
L_000a3fb8:;
    {
        cpu->r[3] = rd32(0x000a3fc0u + + 0x2e0u);
    }
L_000a3fbc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000a3fc0:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000a3fc4:;
    {
        cpu->r[3] = 0x00001314u;
    }
L_000a3fc8:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000a3fcc:;
    {
        cpu->r[14] = 0x000a3fd0u; fn_00151c40(cpu);
    }
L_000a3fd0:;
    {
        goto L_000a3f7c;
    }
L_000a3fd4:;
    {
        cpu->r[2] = 0x00008508u;
    }
L_000a3fd8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000a3fdc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000a3fe0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a38a8;
        }
    }
L_000a3fe4:;
    {
        cpu->r[2] = 0x00008524u;
    }
L_000a3fe8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000a3fec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_000a3ff0:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_000a3ff4:;
    {
        goto L_000a38b8;
    }
L_000a3ff8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000a3ffc:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000a4000:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a4004:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000a4008:;
    {
        cpu->r[14] = 0x000a400cu; fn_0009b14c(cpu);
    }
L_000a400c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a4010:;
    {
        wr8(cpu->r[7], cpu->r[3]);
    }
L_000a4014:;
    {
        goto L_000a3a14;
    }
L_000a4018:;
    {
        cpu->r[8] = rd32(0x000a4020u + + 0x280u);
    }
L_000a401c:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000a4020:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000a4024:;
    {
        cpu->r[14] = 0x000a4028u; fn_0012edb0(cpu);
    }
L_000a4028:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000a402c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a4030:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000a4034:;
    {
        cpu->r[14] = 0x000a403cu;
    }
L_000a4038:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a403cu)) return;
    }
L_000a403c:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a4040:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a41c8;
        }
    }
L_000a4044:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a4048:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000a404c:;
    {
        cpu->r[14] = 0x000a4054u;
    }
L_000a4050:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a4054u)) return;
    }
L_000a4054:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000a4058:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000a405c:;
    {
        cpu->r[14] = 0x000a4060u; fn_00130cc0(cpu);
    }
L_000a4060:;
    {
        goto L_000a3ae8;
    }
L_000a4064:;
    {
        cpu->r[7] = 0x00005f68u;
    }
L_000a4068:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000a406c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a4070:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a3f1c;
        }
    }
L_000a4074:;
    {
        cpu->r[14] = 0x000a4078u; fn_0009b4d0(cpu);
    }
L_000a4078:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000a407c:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_000a4080:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a4084:;
    {
        cpu->r[3] = 0x0000852cu;
    }
L_000a4088:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000a408c:;
    {
        cpu->r[3] = 0x00008528u;
    }
L_000a4090:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_000a4094:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a4124;
        }
    }
L_000a4098:;
    {
        cpu->r[8] = 0x000063e8u;
    }
L_000a409c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000a40a0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a40a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a40b4;
        }
    }
L_000a40a8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000a40ac:;
    {
        cpu->r[14] = 0x000a40b4u;
    }
L_000a40b0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a40b4u)) return;
    }
L_000a40b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a40b8:;
    {
        cpu->r[14] = 0x000a40bcu; fn_00099494(cpu);
    }
L_000a40bc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000a40c0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a40c4:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a40c8:;
    {
        cpu->r[14] = 0x000a40d0u;
    }
L_000a40cc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x34u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a40d0u)) return;
    }
L_000a40d0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a40d4:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a40d8:;
    {
        cpu->r[14] = 0x000a40e0u;
    }
L_000a40dc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a40e0u)) return;
    }
L_000a40e0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a40e4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000a40e8:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a40ec:;
    {
        cpu->r[14] = 0x000a40f4u;
    }
L_000a40f0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x34u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a40f4u)) return;
    }
L_000a40f4:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a40f8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a40fc:;
    {
        cpu->r[14] = 0x000a4104u;
    }
L_000a4100:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x30u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a4104u)) return;
    }
L_000a4104:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000a4108:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4dcu);
    }
L_000a410c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_000a4110:;
    {
        wr32(cpu->r[4] + cpu->r[7], cpu->r[3]);
    }
L_000a4114:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a4118:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000a411c:;
    {
        wr32(cpu->r[4] + + 0x4dcu, cpu->r[3]);
    }
L_000a4120:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000a409c;
        }
    }
L_000a4124:;
    {
        cpu->r[14] = 0x000a4128u; fn_0009b4d0(cpu);
    }
L_000a4128:;
    {
        cpu->r[2] = 0x00008528u;
    }
L_000a412c:;
    {
        cpu->r[3] = 0x00008518u;
    }
L_000a4130:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000a4134:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a4138:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 0);
    }
L_000a413c:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[0]);
    }
L_000a4140:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_000a4144:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[1]);
    }
L_000a4148:;
    {
        goto L_000a3f1c;
    }
L_000a414c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000a4150:;
    {
        cpu->r[0] = 0x00000028u;
    }
L_000a4154:;
    {
        cpu->r[14] = 0x000a4158u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_000a4158:;
    {
        cpu->r[3] = 0x000014fcu;
    }
L_000a415c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4dcu);
    }
L_000a4160:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a4164:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000a4168:;
    {
        wr32(cpu->r[4] + + 0x4dcu, cpu->r[1]);
    }
L_000a416c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
    }
L_000a4170:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a4174:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000a4178:;
    {
        cpu->r[14] = 0x000a417cu; fn_00099494(cpu);
    }
L_000a417c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a4180:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000a4184:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a4188:;
    {
        cpu->r[14] = 0x000a4190u;
    }
L_000a418c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x34u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a4190u)) return;
    }
L_000a4190:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a4194:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a4198:;
    {
        cpu->r[14] = 0x000a41a0u;
    }
L_000a419c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a41a0u)) return;
    }
L_000a41a0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a41a4:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a41a8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000a41ac:;
    {
        cpu->r[14] = 0x000a41b4u;
    }
L_000a41b0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x34u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a41b4u)) return;
    }
L_000a41b4:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a41b8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a41bc:;
    {
        cpu->r[14] = 0x000a41c4u;
    }
L_000a41c0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x30u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a41c4u)) return;
    }
L_000a41c4:;
    {
        goto L_000a3f0c;
    }
L_000a41c8:;
    {
        cpu->r[10] = rd32(cpu->r[6]);
    }
L_000a41cc:;
    {
        cpu->r[3] = 0x00001290u;
    }
L_000a41d0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a41d4:;
    {
        cpu->r[11] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_000a41d8:;
    {
        cpu->r[14] = 0x000a41dcu; fn_0012df9c(cpu);
    }
L_000a41dc:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_000a41e0:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000a41e4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a41e8:;
    {
        cpu->r[14] = 0x000a41ecu; fn_0012ec44(cpu);
    }
L_000a41ec:;
    {
        cpu->r[3] = rd32(0x000a41f4u + + 0xb0u);
    }
L_000a41f0:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000a41f4:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000a41f8:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_000a41fc:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000a4200:;
    {
        cpu->r[3] = rd32(0x000a4208u + + 0xa0u);
    }
L_000a4204:;
    {
        cpu->r[12] = rd32(cpu->r[10]);
    }
L_000a4208:;
    {
        cpu->r[11] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000a420c:;
    {
        cpu->r[3] = rd32(cpu->r[11]);
    }
L_000a4210:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000a4214:;
    {
        cpu->r[14] = 0x000a4218u; fn_0012ed70(cpu);
    }
L_000a4218:;
    {
        cpu->r[12] = rd32(cpu->r[10]);
    }
L_000a421c:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_000a4220:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000a4224:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_000a4228:;
    {
        cpu->r[3] = rd32(cpu->r[11]);
    }
L_000a422c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000a4230:;
    {
        cpu->r[14] = 0x000a4234u; fn_0012fa2c(cpu);
    }
L_000a4234:;
    {
        goto L_000a4044;
    }
L_000a4238:;
    {
        cpu->r[3] = 0x00008520u;
    }
L_000a423c:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_000a4240:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000a4244:;
    {
        goto L_000a3f0c;
    }
L_000a4248:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a424c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a4250:;
    {
        cpu->r[1] = 0x0000001fu;
    }
L_000a4254:;
    {
        cpu->r[14] = 0x000a425cu;
    }
L_000a4258:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a425cu)) return;
    }
L_000a425c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a4260:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a3d1c;
        }
    }
L_000a4264:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a4268:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a426c:;
    {
        cpu->r[1] = 0x00000019u;
    }
L_000a4270:;
    {
        cpu->r[14] = 0x000a4278u;
    }
L_000a4274:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a4278u)) return;
    }
L_000a4278:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a427c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a36d0;
        }
    }
L_000a4280:;
    {
        goto L_000a3d1c;
    }
}

/* _ZN4Game13IsDecalLockedEi @ 000a42ac (arm) */
void fn_000a42ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a42ac:;
    {
        cpu->r[3] = 0x000082ddu;
    }
L_000a42b0:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_000a42b4:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_000a42b8:;
    {
        cpu->r[4] = rd32(0x000a42c0u + + 0x98u);
    }
L_000a42bc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000a42c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a42c4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000a42c8:;
    {
        cpu->r[4] = add_flags(cpu, 0x000a42d0u, cpu->r[4], 0, 0);
    }
L_000a42cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a42d8;
        }
    }
L_000a42d0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000031u, 1, 1);
    }
L_000a42d4:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000a42e4;
        }
    }
L_000a42d8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000a42dc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000a42e0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a42e4u)) return;
    }
L_000a42e4:;
    {
        cpu->r[3] = rd32(0x000a42ecu + + 0x70u);
    }
L_000a42e8:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a42ec:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a42f0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a42f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a4320;
        }
    }
L_000a42f8:;
    {
        cpu->r[7] = rd32(0x000a4300u + + 0x60u);
    }
L_000a42fc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000a4300:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000a4304:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000a4308:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x60u);
    }
L_000a430c:;
    {
        cpu->r[14] = 0x000a4310u; fn_000a07e4(cpu);
    }
L_000a4310:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[0], 1, 1);
    }
L_000a4314:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000a4318:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000a431c:;
    {
        goto L_000a42dc;
    }
L_000a4320:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a4324:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_000a4328:;
    {
        cpu->r[14] = 0x000a432cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a432c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_000a4330:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a4334:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a42f8;
        }
    }
L_000a4338:;
    {
        cpu->r[7] = rd32(0x000a4340u + + 0x20u);
    }
L_000a433c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_000a4340:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000a4344:;
    {
        cpu->r[14] = 0x000a4348u; fn_00094228(cpu);
    }
L_000a4348:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a434c:;
    {
        cpu->r[14] = 0x000a4350u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a4350:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_000a4354:;
    {
        goto L_000a42fc;
    }
}

/* _ZN4Game17GetUnlockedDecalsEv @ 000a4364 (arm) */
void fn_000a4364(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a4364:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_000a4368:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000a436c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000a4370:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_000a4374:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000a4378:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a437c:;
    {
        cpu->r[14] = 0x000a4380u; fn_000a42ac(cpu);
    }
L_000a4380:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000a4384:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a4388:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
        }
    }
L_000a438c:;
    {
        sub_flags(cpu, cpu->r[4], 0x0000000fu, 1, 1);
    }
L_000a4390:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a4374;
        }
    }
L_000a4394:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000a4398:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a439cu)) return;
    }
}

/* _ZN4Game11IsCarLockedEii @ 000a439c (arm) */
void fn_000a439c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a439c:;
    {
        cpu->r[3] = 0x000082ddu;
    }
L_000a43a0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000a43a4:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[3]);
    }
L_000a43a8:;
    {
        cpu->r[5] = rd32(0x000a43b0u + + 0xc4u);
    }
L_000a43ac:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000a43b0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a43b4:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_000a43b8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = 0x00000000u;
        }
    }
L_000a43bc:;
    {
        cpu->r[5] = add_flags(cpu, 0x000a43c4u, cpu->r[5], 0, 0);
    }
L_000a43c0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = cpu->r[7];
        }
    }
L_000a43c4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a43f0;
        }
    }
L_000a43c8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000a43cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a440c;
        }
    }
L_000a43d0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000a43d4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a43d8u)) return;
    }
L_000a43d8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x444u);
    }
L_000a43dc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_000a43e0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000004cu, 0, 0);
    }
L_000a43e4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000a43e8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_000a43ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a43d0;
        }
    }
L_000a43f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a43f4:;
    {
        cpu->r[14] = 0x000a43f8u; fn_0009610c(cpu);
    }
L_000a43f8:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_000a43fc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000a4400:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000a43d8;
        }
    }
L_000a4404:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000a4408:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a440cu)) return;
    }
L_000a440c:;
    {
        cpu->r[3] = rd32(0x000a4414u + + 0x64u);
    }
L_000a4410:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000a4414:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000a4418:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a441c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a444c;
        }
    }
L_000a4420:;
    {
        cpu->r[8] = rd32(0x000a4428u + + 0x54u);
    }
L_000a4424:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000a4428:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a442c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000a4430:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000a4434:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x94u);
    }
L_000a4438:;
    {
        cpu->r[14] = 0x000a443cu; fn_000a0cf8(cpu);
    }
L_000a443c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[0], 1, 1);
    }
L_000a4440:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000a4444:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000a4448:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a444cu)) return;
    }
L_000a444c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a4450:;
    {
        cpu->r[14] = 0x000a4454u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a4454:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a4458:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a4420;
        }
    }
L_000a445c:;
    {
        cpu->r[8] = rd32(0x000a4464u + + 0x18u);
    }
L_000a4460:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000a4464:;
    {
        cpu->r[14] = 0x000a4468u; fn_00094228(cpu);
    }
L_000a4468:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a446c:;
    {
        cpu->r[14] = 0x000a4470u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a4470:;
    {
        goto L_000a4424;
    }
}

/* _ZN4Game20GetUnlockedCarsCountEv @ 000a4480 (arm) */
void fn_000a4480(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a4480:;
    {
        cpu->r[3] = rd32(0x000a4488u + + 0x68u);
    }
L_000a4484:;
    {
        cpu->r[2] = rd32(0x000a448cu + + 0x68u);
    }
L_000a4488:;
    {
        cpu->r[3] = add_flags(cpu, 0x000a4490u, cpu->r[3], 0, 0);
    }
L_000a448c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000a4490:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000a4494:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000a4498:;
    {
        cpu->r[4] = cpu->r[5];
    }
L_000a449c:;
    {
        cpu->r[7] = cpu->r[5];
    }
L_000a44a0:;
    {
        cpu->r[8] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000a44a4:;
    {
        goto L_000a44cc;
    }
L_000a44a8:;
    {
        cpu->r[14] = 0x000a44acu; fn_000978a8(cpu);
    }
L_000a44ac:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x444u);
    }
L_000a44b0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_000a44b4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000004cu, 0, 0);
    }
L_000a44b8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000a44bc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a44c0:;
    {
        cpu->r[14] = 0x000a44c4u; fn_000a439c(cpu);
    }
L_000a44c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a44c8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
        }
    }
L_000a44cc:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_000a44d0:;
    {
        cpu->r[14] = 0x000a44d4u; fn_0009610c(cpu);
    }
L_000a44d4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000a44d8:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[0], 1, 1);
    }
L_000a44dc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a44e0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000a44e4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000a44a8;
        }
    }
L_000a44e8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a44ec:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a44f0u)) return;
    }
}

/* _ZN4Game21GetFirstUnlockedCarIdEv @ 000a44f8 (arm) */
void fn_000a44f8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a44f8:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_000a44fc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000a4500:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000a4504:;
    {
        cpu->r[14] = 0x000a4508u; fn_00096114(cpu);
    }
L_000a4508:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000a450c:;
    {
        cpu->r[6] = 0x0000004cu;
    }
L_000a4510:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000a4514:;
    {
        goto L_000a4524;
    }
L_000a4518:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000a451c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[4], 1, 1);
    }
L_000a4520:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[4] = 0x00000000u;
        }
    }
L_000a4524:;
    {
        uint32_t v = cpu->r[6] * cpu->r[4]; cpu->r[2] = v;
    }
L_000a4528:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x444u);
    }
L_000a452c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000a4530:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_000a4534:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_000a4538:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_000a453c:;
    {
        cpu->r[14] = 0x000a4540u; fn_000a439c(cpu);
    }
L_000a4540:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a4544:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a4518;
        }
    }
L_000a4548:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000063u, 1, 1);
    }
L_000a454c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000a4584;
        }
    }
L_000a4550:;
    {
        cpu->r[1] = rd32(0x000a4558u + + 0x38u);
    }
L_000a4554:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000a4558:;
    {
        cpu->r[12] = rd32(0x000a4560u + + 0x34u);
    }
L_000a455c:;
    {
        cpu->r[14] = 0x000018f0u;
    }
L_000a4560:;
    {
        cpu->r[2] = rd32(0x000a4568u + + 0x30u);
    }
L_000a4564:;
    {
        cpu->r[1] = add_flags(cpu, 0x000a456cu, cpu->r[1], 0, 0);
    }
L_000a4568:;
    {
        cpu->r[3] = rd32(0x000a4570u + + 0x2cu);
    }
L_000a456c:;
    {
        cpu->r[12] = add_flags(cpu, 0x000a4574u, cpu->r[12], 0, 0);
    }
L_000a4570:;
    {
        cpu->r[2] = add_flags(cpu, 0x000a4578u, cpu->r[2], 0, 0);
    }
L_000a4574:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000398u, 0, 0);
    }
L_000a4578:;
    {
        cpu->r[3] = add_flags(cpu, 0x000a4580u, cpu->r[3], 0, 0);
    }
L_000a457c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000a4580:;
    {
        cpu->r[14] = 0x000a4584u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000a4584:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a4588:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000a458c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a4590u)) return;
    }
}

/* _ZN4Game8InitGameEv @ 000a45a0 (arm) */
void fn_000a45a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a45a0:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_000a45a4:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_000a45a8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_000a45ac:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000a45b0:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000a45b4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000a45b8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000a45bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a45c0:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_000a45c4:;
    {
        cpu->r[14] = 0x000a45c8u; fn_0012b370(cpu);
    }
L_000a45c8:;
    {
        cpu->r[14] = 0x000a45ccu; fn_0018ba64(cpu);
    }
L_000a45cc:;
    {
        cpu->r[5] = rd32(0x000a45d4u + + 0x2c0u);
    }
L_000a45d0:;
    {
        cpu->r[14] = 0x000a45d4u; fn_0018ba68(cpu);
    }
L_000a45d4:;
    {
        cpu->r[14] = 0x000a45d8u; fn_0018ba64(cpu);
    }
L_000a45d8:;
    {
        cpu->r[5] = add_flags(cpu, 0x000a45e0u, cpu->r[5], 0, 0);
    }
L_000a45dc:;
    {
        cpu->r[14] = 0x000a45e0u; fn_0018ba68(cpu);
    }
L_000a45e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a45e4:;
    {
        cpu->r[14] = 0x000a45e8u; fn_00097924(cpu);
    }
L_000a45e8:;
    {
        cpu->r[1] = 0x00000020u;
    }
L_000a45ec:;
    {
        cpu->r[2] = 0x0000003cu;
    }
L_000a45f0:;
    {
        cpu->r[3] = 0x00000017u;
    }
L_000a45f4:;
    {
        cpu->r[12] = 0x000078c9u;
    }
L_000a45f8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000a4600u + + 0x290u);
    }
L_000a45fc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000a4600:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000a4604:;
    {
        cpu->r[12] = 0x000001c2u;
    }
L_000a4608:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000a460c:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_000a4610:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_000a4614:;
    {
        cpu->r[12] = 0x0000000fu;
    }
L_000a4618:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_000a461c:;
    {
        cpu->r[14] = 0x000a4620u; fn_001575ac(cpu);
    }
L_000a4620:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_000a4624:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000006u);
        }
    }
L_000a4628:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a4634;
        }
    }
L_000a462c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_000a4630:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a4634u)) return;
    }
L_000a4634:;
    {
        cpu->r[14] = 0x000a4638u; fn_0018ba64(cpu);
    }
L_000a4638:;
    {
        cpu->r[14] = 0x000a463cu; fn_0018ba68(cpu);
    }
L_000a463c:;
    {
        cpu->r[3] = rd32(0x000a4644u + + 0x254u);
    }
L_000a4640:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000a4644:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000a4648:;
    {
        cpu->r[3] = 0x00001288u;
    }
L_000a464c:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000a4650:;
    {
        cpu->r[14] = 0x000a4654u; fn_00147c9c(cpu);
    }
L_000a4654:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a4658:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x00000020u);
        }
    }
L_000a465c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000a462c;
        }
    }
L_000a4660:;
    {
        cpu->r[0] = rd32(0x000a4668u + + 0x234u);
    }
L_000a4664:;
    {
        cpu->r[0] = add_flags(cpu, 0x000a466cu, cpu->r[0], 0, 0);
    }
L_000a4668:;
    {
        cpu->r[14] = 0x000a466cu; fn_000fc740(cpu);
    }
L_000a466c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a4670:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_000a4674:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a4854;
        }
    }
L_000a4678:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000a467c:;
    {
        cpu->r[7] = 0x0000002cu;
    }
L_000a4680:;
    {
        goto L_000a4688;
    }
L_000a4684:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000a4688:;
    {
        uint32_t v = cpu->r[7] * cpu->r[4]; cpu->r[5] = v;
    }
L_000a468c:;
    {
        cpu->r[2] = 0x0000000au;
    }
L_000a4690:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000a4694:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], cpu->r[5], 0, 0);
    }
L_000a4698:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00001d80u, 0, 0);
    }
L_000a469c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00001d40u, 0, 0);
    }
L_000a46a0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000003cu, 0, 0);
    }
L_000a46a4:;
    {
        cpu->r[14] = 0x000a46a8u; fn_000fc5f4(cpu);
    }
L_000a46a8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], cpu->r[5], 0, 0);
    }
L_000a46ac:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000006u, 0, 0);
    }
L_000a46b0:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_000a46b4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000a46b8:;
    {
        cpu->r[14] = 0x000a46bcu; fn_000fc5f4(cpu);
    }
L_000a46bc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], cpu->r[5], 0, 0);
    }
L_000a46c0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000016u, 0, 0);
    }
L_000a46c4:;
    {
        cpu->r[2] = 0x0000000cu;
    }
L_000a46c8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000a46cc:;
    {
        cpu->r[14] = 0x000a46d0u; fn_000fc5f4(cpu);
    }
L_000a46d0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], cpu->r[5], 0, 0);
    }
L_000a46d4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000022u, 0, 0);
    }
L_000a46d8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000a46dc:;
    {
        cpu->r[2] = 0x00000006u;
    }
L_000a46e0:;
    {
        cpu->r[14] = 0x000a46e4u; fn_000fc5f4(cpu);
    }
L_000a46e4:;
    {
        sub_flags(cpu, cpu->r[4], 0x0000000au, 1, 1);
    }
L_000a46e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a4684;
        }
    }
L_000a46ec:;
    {
        cpu->r[2] = 0x00001f38u;
    }
L_000a46f0:;
    {
        cpu->r[1] = 0x00000055u;
    }
L_000a46f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], 0x00001d40u, 0, 0);
    }
L_000a46f8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000a46fc:;
    {
        wr16(cpu->r[6] + cpu->r[2], cpu->r[1]);
    }
L_000a4700:;
    {
        cpu->r[2] = 0x00001f3au;
    }
L_000a4704:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000a4708:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000003cu, 0, 0);
    }
L_000a470c:;
    {
        wr16(cpu->r[6] + cpu->r[2], cpu->r[1]);
    }
L_000a4710:;
    {
        cpu->r[2] = 0x00001f3cu;
    }
L_000a4714:;
    {
        cpu->r[1] = 0x0000005au;
    }
L_000a4718:;
    {
        cpu->r[5] = 0x000007ffu;
    }
L_000a471c:;
    {
        wr16(cpu->r[6] + cpu->r[2], cpu->r[1]);
    }
L_000a4720:;
    {
        cpu->r[2] = 0x00001f3eu;
    }
L_000a4724:;
    {
        cpu->r[1] = 0x00000050u;
    }
L_000a4728:;
    {
        cpu->r[4] = 0x00001001u;
    }
L_000a472c:;
    {
        wr16(cpu->r[6] + cpu->r[2], cpu->r[1]);
    }
L_000a4730:;
    {
        cpu->r[2] = 0x00001f40u;
    }
L_000a4734:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000a4738:;
    {
        wr16(cpu->r[6] + cpu->r[2], cpu->r[1]);
    }
L_000a473c:;
    {
        cpu->r[2] = 0x00001f42u;
    }
L_000a4740:;
    {
        cpu->r[1] = 0x00000032u;
    }
L_000a4744:;
    {
        wr16(cpu->r[6] + cpu->r[2], cpu->r[1]);
    }
L_000a4748:;
    {
        cpu->r[2] = 0x00001f44u;
    }
L_000a474c:;
    {
        cpu->r[1] = 0x0000004eu;
    }
L_000a4750:;
    {
        wr16(cpu->r[6] + cpu->r[2], cpu->r[1]);
    }
L_000a4754:;
    {
        cpu->r[2] = 0x00001f46u;
    }
L_000a4758:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000a475c:;
    {
        wr16(cpu->r[6] + cpu->r[2], cpu->r[1]);
    }
L_000a4760:;
    {
        cpu->r[2] = 0x00001f48u;
    }
L_000a4764:;
    {
        cpu->r[1] = 0x0000001eu;
    }
L_000a4768:;
    {
        wr16(cpu->r[6] + cpu->r[2], cpu->r[1]);
    }
L_000a476c:;
    {
        cpu->r[2] = 0x00001f34u;
    }
L_000a4770:;
    {
        wr32(cpu->r[6] + cpu->r[2], cpu->r[3]);
    }
L_000a4774:;
    {
        cpu->r[14] = 0x000a4778u; fn_000fc710(cpu);
    }
L_000a4778:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00001f40u, 0, 0);
    }
L_000a477c:;
    {
        cpu->r[2] = 0x0000f000u;
    }
L_000a4780:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000au, 0, 0);
    }
L_000a4784:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0xffffu << 16);
    }
L_000a4788:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a478c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[2]; cpu->r[14] = v;
    }
L_000a4790:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[1] = v;
    }
L_000a4794:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000a4798:;
    {
        uint32_t v = cpu->r[1] * cpu->r[1]; cpu->r[12] = v;
    }
L_000a479c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = add_flags(cpu, cpu->r[2], shifter(cpu->r[14], 1, 12u, &shc), 0, 0);
        }
    }
L_000a47a0:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = shifter(cpu->r[1], 1, 1u, &shc); cpu->r[1] = v;
        }
    }
L_000a47a4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[2], 2, 1u, &shc), cpu->r[1], 1, 0);
        }
    }
L_000a47a8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[12], 1, 12u, &shc), 0, 0);
        }
    }
L_000a47ac:;
    {
        uint32_t v = cpu->r[3] * cpu->r[3]; cpu->r[12] = v;
    }
L_000a47b0:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = shifter(cpu->r[1], 1, 1u, &shc); cpu->r[1] = v;
        }
    }
L_000a47b4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000800u, 0, 0);
        }
    }
L_000a47b8:;
    {
        if (cond_test(cpu, 14)) {
        uint32_t v = shifter(cpu->r[1], 1, 2u, &shc); cpu->r[1] = v;
        }
    }
L_000a47bc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000a47c0:;
    {
        wr16(cpu->r[0], cpu->r[1]);
    }
L_000a47c4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], cpu->r[2], 0, 0);
    }
L_000a47c8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000a47cc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00004f00u, 0, 0);
    }
L_000a47d0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_000a47d4:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 12u, &shc); cpu->r[12] = v;
    }
L_000a47d8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_000a47dc:;
    {
        wr16(cpu->r[1] + + 0x4eu, cpu->r[12]);
    }
L_000a47e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a478c;
        }
    }
L_000a47e4:;
    {
        cpu->r[2] = 0x000084b0u;
    }
L_000a47e8:;
    {
        cpu->r[3] = 0x00000046u;
    }
L_000a47ec:;
    {
        cpu->r[1] = 0x0000005au;
    }
L_000a47f0:;
    {
        wr32(cpu->r[6] + cpu->r[2], cpu->r[3]);
    }
L_000a47f4:;
    {
        cpu->r[2] = 0x000084b4u;
    }
L_000a47f8:;
    {
        wr32(cpu->r[6] + cpu->r[2], cpu->r[1]);
    }
L_000a47fc:;
    {
        cpu->r[2] = 0x000084b8u;
    }
L_000a4800:;
    {
        cpu->r[1] = 0x0000003cu;
    }
L_000a4804:;
    {
        wr32(cpu->r[6] + cpu->r[2], cpu->r[1]);
    }
L_000a4808:;
    {
        cpu->r[2] = 0x000084bcu;
    }
L_000a480c:;
    {
        cpu->r[1] = 0x00000037u;
    }
L_000a4810:;
    {
        wr32(cpu->r[6] + cpu->r[2], cpu->r[1]);
    }
L_000a4814:;
    {
        cpu->r[2] = 0x000084acu;
    }
L_000a4818:;
    {
        wr32(cpu->r[6] + cpu->r[2], cpu->r[3]);
    }
L_000a481c:;
    {
        cpu->r[14] = 0x000a4820u; fn_0018ba64(cpu);
    }
L_000a4820:;
    {
        cpu->r[14] = 0x000a4824u; fn_0018ba68(cpu);
    }
L_000a4824:;
    {
        cpu->r[14] = 0x000a4828u; fn_0018ba64(cpu);
    }
L_000a4828:;
    {
        cpu->r[14] = 0x000a482cu; fn_0018ba68(cpu);
    }
L_000a482c:;
    {
        cpu->r[14] = 0x000a4830u; fn_0009e604(cpu);
    }
L_000a4830:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a4834:;
    {
        cpu->r[14] = 0x000a4838u; fn_0009806c(cpu);
    }
L_000a4838:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a483c:;
    {
        cpu->r[14] = 0x000a4840u; fn_000a44f8(cpu);
    }
L_000a4840:;
    {
        cpu->r[3] = 0x0000150du;
    }
L_000a4844:;
    {
        wr8(cpu->r[6] + cpu->r[3], cpu->r[0]);
    }
L_000a4848:;
    {
        cpu->r[14] = 0x000a484cu; fn_0015edc8(cpu);
    }
L_000a484c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000a4850:;
    {
        goto L_000a462c;
    }
L_000a4854:;
    {
        cpu->r[1] = rd32(0x000a485cu + + 0x44u);
    }
L_000a4858:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000006u, 0, 0);
    }
L_000a485c:;
    {
        cpu->r[12] = rd32(0x000a4864u + + 0x40u);
    }
L_000a4860:;
    {
        cpu->r[14] = 0x00000561u;
    }
L_000a4864:;
    {
        cpu->r[2] = rd32(0x000a486cu + + 0x3cu);
    }
L_000a4868:;
    {
        cpu->r[1] = add_flags(cpu, 0x000a4870u, cpu->r[1], 0, 0);
    }
L_000a486c:;
    {
        cpu->r[3] = rd32(0x000a4874u + + 0x38u);
    }
L_000a4870:;
    {
        cpu->r[12] = add_flags(cpu, 0x000a4878u, cpu->r[12], 0, 0);
    }
L_000a4874:;
    {
        cpu->r[2] = add_flags(cpu, 0x000a487cu, cpu->r[2], 0, 0);
    }
L_000a4878:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000003b0u, 0, 0);
    }
L_000a487c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000a4884u, cpu->r[3], 0, 0);
    }
L_000a4880:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000a4884:;
    {
        cpu->r[14] = 0x000a4888u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000a4888:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000a488c:;
    {
        goto L_000a4678;
    }
}

/* _Z18StartupLoadRoutinePv @ 000a48b0 (arm) */
void fn_000a48b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a48b0:;
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
L_000a48b4:;
    {
        cpu->r[4] = rd32(0x000a48bcu + + 0x2b8u);
    }
L_000a48b8:;
    {
        cpu->r[7] = rd32(0x000a48c0u + + 0x2b8u);
    }
L_000a48bc:;
    {
        cpu->r[4] = add_flags(cpu, 0x000a48c4u, cpu->r[4], 0, 0);
    }
L_000a48c0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000a48c4:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000a48c8:;
    {
        cpu->r[14] = 0x000a48ccu; fn_00099720(cpu);
    }
L_000a48cc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a48d0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000a49fc;
        }
    }
L_000a48d4:;
    {
        cpu->r[6] = rd32(0x000a48dcu + + 0x2a0u);
    }
L_000a48d8:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a48dc:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000a48e0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a48e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a4a7c;
        }
    }
L_000a48e8:;
    {
        cpu->r[5] = rd32(0x000a48f0u + + 0x290u);
    }
L_000a48ec:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000a48f0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a48f4:;
    {
        cpu->r[1] = 0x0000001cu;
    }
L_000a48f8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000a48fc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000a4900:;
    {
        cpu->r[14] = 0x000a4904u; fn_0018aa58(cpu);
    }
L_000a4904:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a4908:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_000a490c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a4910:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a4a40;
        }
    }
L_000a4914:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000a4918:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000a491c:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000a4920:;
    {
        cpu->r[1] = 0x0000003bu;
    }
L_000a4924:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000a4928:;
    {
        cpu->r[14] = 0x000a492cu; fn_0018aa58(cpu);
    }
L_000a492c:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a4930:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_000a4934:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a4938:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a4a04;
        }
    }
L_000a493c:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000a4940:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000a4944:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000a4948:;
    {
        cpu->r[14] = 0x000a494cu; fn_0018b5c8(cpu);
    }
L_000a494c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000a4950:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000a4954:;
    {
        cpu->r[14] = 0x000a4958u; fn_000a45a0(cpu);
    }
L_000a4958:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a495c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000a49fc;
        }
    }
L_000a4960:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a4964:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_000a4968:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a496c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a4b38;
        }
    }
L_000a4970:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000a4974:;
    {
        cpu->r[1] = 0x00000041u;
    }
L_000a4978:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000a497c:;
    {
        cpu->r[14] = 0x000a4980u; fn_00096a08(cpu);
    }
L_000a4980:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000a4984:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a4988:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000a498c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000a4990:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000a4994:;
    {
        cpu->r[14] = 0x000a4998u; fn_0018aa58(cpu);
    }
L_000a4998:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a499c:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_000a49a0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a49a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a4afc;
        }
    }
L_000a49a8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000a49ac:;
    {
        cpu->r[1] = 0x00000029u;
    }
L_000a49b0:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000a49b4:;
    {
        cpu->r[14] = 0x000a49b8u; fn_00096a08(cpu);
    }
L_000a49b8:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000a49bc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a49c0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000a49c4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000a49c8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a49cc:;
    {
        cpu->r[14] = 0x000a49d0u; fn_0018aa58(cpu);
    }
L_000a49d0:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a49d4:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a49d8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a49dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a4ac0;
        }
    }
L_000a49e0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000a49e4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000a49e8:;
    {
        cpu->r[14] = 0x000a49ecu; fn_0018b5c8(cpu);
    }
L_000a49ec:;
    {
        cpu->r[3] = rd32(0x000a49f4u + + 0x190u);
    }
L_000a49f0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000a49f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a49f8:;
    {
        wr8(cpu->r[3], cpu->r[2]);
    }
L_000a49fc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000a4a00:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a4a04u)) return;
    }
L_000a4a04:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a4a08:;
    {
        cpu->r[14] = 0x000a4a0cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a4a0c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a4a10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a493c;
        }
    }
L_000a4a14:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000a4a18:;
    {
        cpu->r[14] = 0x000a4a1cu; fn_0018aa20(cpu);
    }
L_000a4a1c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a4a20:;
    {
        cpu->r[14] = 0x000a4a24u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a4a24:;
    {
        cpu->r[3] = rd32(0x000a4a2cu + + 0x15cu);
    }
L_000a4a28:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000a4a2c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a4a30:;
    {
        cpu->r[3] = rd32(0x000a4a38u + + 0x154u);
    }
L_000a4a34:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a4a38:;
    {
        cpu->r[14] = 0x000a4a3cu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000a4a3c:;
    {
        goto L_000a493c;
    }
L_000a4a40:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a4a44:;
    {
        cpu->r[14] = 0x000a4a48u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a4a48:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a4a4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a4914;
        }
    }
L_000a4a50:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000a4a54:;
    {
        cpu->r[14] = 0x000a4a58u; fn_0018aa20(cpu);
    }
L_000a4a58:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a4a5c:;
    {
        cpu->r[14] = 0x000a4a60u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a4a60:;
    {
        cpu->r[3] = rd32(0x000a4a68u + + 0x120u);
    }
L_000a4a64:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000a4a68:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a4a6c:;
    {
        cpu->r[3] = rd32(0x000a4a74u + + 0x118u);
    }
L_000a4a70:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a4a74:;
    {
        cpu->r[14] = 0x000a4a78u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000a4a78:;
    {
        goto L_000a4914;
    }
L_000a4a7c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000a4a80:;
    {
        cpu->r[14] = 0x000a4a84u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a4a84:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a4a88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a48e8;
        }
    }
L_000a4a8c:;
    {
        cpu->r[5] = rd32(0x000a4a94u + + 0xecu);
    }
L_000a4a90:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000a4a94:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a4a98:;
    {
        cpu->r[14] = 0x000a4a9cu; fn_0018aa20(cpu);
    }
L_000a4a9c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000a4aa0:;
    {
        cpu->r[14] = 0x000a4aa4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a4aa4:;
    {
        cpu->r[3] = rd32(0x000a4aacu + + 0xdcu);
    }
L_000a4aa8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a4aac:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a4ab0:;
    {
        cpu->r[3] = rd32(0x000a4ab8u + + 0xd4u);
    }
L_000a4ab4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a4ab8:;
    {
        cpu->r[14] = 0x000a4abcu; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000a4abc:;
    {
        goto L_000a48ec;
    }
L_000a4ac0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a4ac4:;
    {
        cpu->r[14] = 0x000a4ac8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a4ac8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a4acc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a49e0;
        }
    }
L_000a4ad0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a4ad4:;
    {
        cpu->r[14] = 0x000a4ad8u; fn_0018aa20(cpu);
    }
L_000a4ad8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a4adc:;
    {
        cpu->r[14] = 0x000a4ae0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a4ae0:;
    {
        cpu->r[3] = rd32(0x000a4ae8u + + 0xa0u);
    }
L_000a4ae4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a4ae8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a4aec:;
    {
        cpu->r[3] = rd32(0x000a4af4u + + 0x98u);
    }
L_000a4af0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a4af4:;
    {
        cpu->r[14] = 0x000a4af8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000a4af8:;
    {
        goto L_000a49e0;
    }
L_000a4afc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a4b00:;
    {
        cpu->r[14] = 0x000a4b04u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a4b04:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a4b08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a49a8;
        }
    }
L_000a4b0c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000a4b10:;
    {
        cpu->r[14] = 0x000a4b14u; fn_0018aa20(cpu);
    }
L_000a4b14:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a4b18:;
    {
        cpu->r[14] = 0x000a4b1cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a4b1c:;
    {
        cpu->r[3] = rd32(0x000a4b24u + + 0x64u);
    }
L_000a4b20:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000a4b24:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a4b28:;
    {
        cpu->r[3] = rd32(0x000a4b30u + + 0x5cu);
    }
L_000a4b2c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a4b30:;
    {
        cpu->r[14] = 0x000a4b34u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000a4b34:;
    {
        goto L_000a49a8;
    }
L_000a4b38:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a4b3c:;
    {
        cpu->r[14] = 0x000a4b40u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a4b40:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a4b44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a4970;
        }
    }
L_000a4b48:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000a4b4c:;
    {
        cpu->r[14] = 0x000a4b50u; fn_0018aa20(cpu);
    }
L_000a4b50:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a4b54:;
    {
        cpu->r[14] = 0x000a4b58u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a4b58:;
    {
        cpu->r[3] = rd32(0x000a4b60u + + 0x28u);
    }
L_000a4b5c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000a4b60:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a4b64:;
    {
        cpu->r[3] = rd32(0x000a4b6cu + + 0x20u);
    }
L_000a4b68:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a4b6c:;
    {
        cpu->r[14] = 0x000a4b70u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000a4b70:;
    {
        goto L_000a4970;
    }
}

/* _ZN4Game16RefreshLoadedCarEi @ 000a4b90 (arm) */
void fn_000a4b90(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a4b90:;
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
L_000a4b94:;
    {
        cpu->r[10] = 0x0000004cu;
    }
L_000a4b98:;
    {
        cpu->r[3] = 0x00001c38u;
    }
L_000a4b9c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x444u);
    }
L_000a4ba0:;
    {
        uint32_t v = cpu->r[10] * cpu->r[1]; cpu->r[10] = v;
    }
L_000a4ba4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000a4ba8:;
    {
        cpu->r[5] = rd32(0x000a4bb0u + + 0x4ecu);
    }
L_000a4bac:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000006cu, 1, 0);
    }
L_000a4bb0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a4bb4:;
    {
        cpu->r[9] = cpu->r[1];
    }
L_000a4bb8:;
    {
        cpu->r[5] = add_flags(cpu, 0x000a4bc0u, cpu->r[5], 0, 0);
    }
L_000a4bbc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000a4bc0:;
    {
        cpu->r[7] = rd32(cpu->r[2] + cpu->r[10]);
    }
L_000a4bc4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a4bd8;
        }
    }
L_000a4bc8:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0xb58u);
    }
L_000a4bcc:;
    {
        cpu->r[14] = 0x000a4bd0u; fn_00096028(cpu);
    }
L_000a4bd0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 1);
    }
L_000a4bd4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a4f70;
        }
    }
L_000a4bd8:;
    {
        cpu->r[6] = 0x00001c38u;
    }
L_000a4bdc:;
    {
        cpu->r[3] = 0x000084f0u;
    }
L_000a4be0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000a4be4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a4be8:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000a4bec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a4bf0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = add_flags(cpu, cpu->r[4], 0x00001b80u, 0, 0);
        }
    }
L_000a4bf4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x0000000du, 0, 0);
        }
    }
L_000a4bf8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a4c78;
        }
    }
L_000a4bfc:;
    {
        cpu->r[14] = 0x000a4c00u; fn_000b0558(cpu);
    }
L_000a4c00:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a4c04:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[4], 0x00001b80u, 0, 0);
    }
L_000a4c08:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000a4c0c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x0000000du, 0, 0);
    }
L_000a4c10:;
    {
        cpu->r[11] = rd32(cpu->r[3] + + 0xb58u);
    }
L_000a4c14:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000a4c18:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0xd08u);
    }
L_000a4c1c:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_000a4c20:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_000a4c24:;
    {
        cpu->r[14] = 0x000a4c28u; fn_000933e0(cpu);
    }
L_000a4c28:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a4c2c:;
    {
        cpu->r[14] = 0x000a4c30u; fn_0009618c(cpu);
    }
L_000a4c30:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a4c34:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a4f78;
        }
    }
L_000a4c38:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a4c3c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a4c40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a4c60;
        }
    }
L_000a4c44:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000a4c48:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_000a4c4c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000a4c50:;
    {
        cpu->r[14] = 0x000a4c58u;
    }
L_000a4c54:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a4c58u)) return;
    }
L_000a4c58:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_000a4c5c:;
    {
        wr32(cpu->r[4] + cpu->r[6], cpu->r[2]);
    }
L_000a4c60:;
    {
        cpu->r[3] = rd32(0x000a4c68u + + 0x438u);
    }
L_000a4c64:;
    {
        cpu->r[1] = (uint32_t)((uint16_t)cpu->r[11]);
    }
L_000a4c68:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_000a4c6c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000a4c70:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000a4c74:;
    {
        cpu->r[14] = 0x000a4c78u; fn_00132a24(cpu);
    }
L_000a4c78:;
    {
        cpu->r[3] = 0x00001bbfu;
    }
L_000a4c7c:;
    {
        cpu->r[2] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_000a4c80:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000a4c84:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a5038;
        }
    }
L_000a4c88:;
    {
        cpu->r[0] = rd32(0x000a4c90u + + 0x414u);
    }
L_000a4c8c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[4], 0x00001b00u, 0, 0);
    }
L_000a4c90:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000029u, 0, 0);
    }
L_000a4c94:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000a4c98:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_000a4c9c:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_000a4ca0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a4ca4:;
    {
        cpu->r[14] = 0x000a4ca8u; imp_memcpy(cpu); /* memcpy */
    }
L_000a4ca8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_000a4cac:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000a4cb0:;
    {
        cpu->r[11] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_000a4cb4:;
    {
        cpu->r[1] = 0x00004e20u;
    }
L_000a4cb8:;
    {
        cpu->r[0] = rd32(cpu->r[11]);
    }
L_000a4cbc:;
    {
        cpu->r[14] = 0x000a4cc0u; fn_00135de0(cpu);
    }
L_000a4cc0:;
    {
        cpu->r[1] = 0x00005207u;
    }
L_000a4cc4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000a4cc8:;
    {
        cpu->r[0] = rd32(cpu->r[11]);
    }
L_000a4ccc:;
    {
        cpu->r[14] = 0x000a4cd0u; fn_00135de0(cpu);
    }
L_000a4cd0:;
    {
        cpu->r[0] = 0x00000dfcu;
    }
L_000a4cd4:;
    {
        cpu->r[14] = 0x000a4cd8u; fn_0018ba6c(cpu);
    }
L_000a4cd8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000a4cdc:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000a4ce0:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_000a4ce4:;
    {
        cpu->r[14] = 0x000a4ce8u; fn_000b23f0(cpu);
    }
L_000a4ce8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x444u);
    }
L_000a4cec:;
    {
        cpu->r[2] = 0x00001c3cu;
    }
L_000a4cf0:;
    {
        cpu->r[0] = 0x00001c38u;
    }
L_000a4cf4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000a4cf8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[10], 0, 0);
    }
L_000a4cfc:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[11]);
    }
L_000a4d00:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[10]);
    }
L_000a4d04:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a4d08:;
    {
        uint32_t base = cpu->r[2];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[2] = v1;
    }
L_000a4d0c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_000a4d10:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[0]);
    }
L_000a4d14:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_000a4d18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a4d38;
        }
    }
L_000a4d1c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000a4d20:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000a4d24:;
    {
        cpu->r[14] = 0x000a4d2cu;
    }
L_000a4d28:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a4d2cu)) return;
    }
L_000a4d2c:;
    {
        cpu->r[1] = 0x00001c3cu;
    }
L_000a4d30:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a4d34:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_000a4d38:;
    {
        cpu->r[10] = rd32(0x000a4d40u + + 0x368u);
    }
L_000a4d3c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000a4d40:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_000a4d44:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000a4d48:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[1]);
    }
L_000a4d4c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_000a4d50:;
    {
        wr8(cpu->r[13] + + 0x5cu, cpu->r[0]);
    }
L_000a4d54:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[1]);
    }
L_000a4d58:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000a4d5c:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[1]);
    }
L_000a4d60:;
    {
        wr8(cpu->r[13] + + 0x50u, cpu->r[0]);
    }
L_000a4d64:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x490u);
    }
L_000a4d68:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[1]);
    }
L_000a4d6c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_000a4d70:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000a4d74:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000a4d78:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[2]);
    }
L_000a4d7c:;
    {
        wr8(cpu->r[13] + + 0x2cu, cpu->r[2]);
    }
L_000a4d80:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[2]);
    }
L_000a4d84:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[2]);
    }
L_000a4d88:;
    {
        wr8(cpu->r[13] + + 0x44u, cpu->r[2]);
    }
L_000a4d8c:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[2]);
    }
L_000a4d90:;
    {
        wr8(cpu->r[13] + + 0x5du, cpu->r[2]);
    }
L_000a4d94:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[0]);
    }
L_000a4d98:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[1]);
    }
L_000a4d9c:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[2]);
    }
L_000a4da0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a4db4;
        }
    }
L_000a4da4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000a4da8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000a4dac:;
    {
        cpu->r[14] = 0x000a4db4u;
    }
L_000a4db0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a4db4u)) return;
    }
L_000a4db4:;
    {
        cpu->r[0] = 0x00001e4cu;
    }
L_000a4db8:;
    {
        cpu->r[14] = 0x000a4dbcu; fn_0018ba6c(cpu);
    }
L_000a4dbc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000a4dc0:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_000a4dc4:;
    {
        cpu->r[14] = 0x000a4dc8u; fn_00166fa4(cpu);
    }
L_000a4dc8:;
    {
        cpu->r[2] = 0x00001c3cu;
    }
L_000a4dcc:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000a4dd0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a4dd4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_000a4dd8:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[11]);
    }
L_000a4ddc:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_000a4de0:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_000a4de4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000a4de8:;
    {
        cpu->r[14] = 0x000a4decu; fn_00169ee0(cpu);
    }
L_000a4dec:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a4df0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_000a4df4:;
    {
        cpu->r[14] = 0x000a4df8u; fn_00093c00(cpu);
    }
L_000a4df8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a4dfc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a5058;
        }
    }
L_000a4e00:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a4e04:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_000a4e08:;
    {
        cpu->r[14] = 0x000a4e0cu; fn_000f3430(cpu);
    }
L_000a4e0c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a4e10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a4fb0;
        }
    }
L_000a4e14:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[4], 0x000019c0u, 0, 0);
    }
L_000a4e18:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_000a4e1c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x0000003du, 0, 0);
    }
L_000a4e20:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000a4e24:;
    {
        cpu->r[14] = 0x000a4e28u; fn_00093c00(cpu);
    }
L_000a4e28:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a4e2c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a4e44;
        }
    }
L_000a4e30:;
    {
        cpu->r[3] = 0x00001c3cu;
    }
L_000a4e34:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000a4e38:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a4e3c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00001940u, 0, 0);
    }
L_000a4e40:;
    {
        cpu->r[14] = 0x000a4e44u; fn_00093254(cpu);
    }
L_000a4e44:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_000a4e48:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000a4e4c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x490u);
    }
L_000a4e50:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a4e54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a4e68;
        }
    }
L_000a4e58:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000a4e5c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000a4e60:;
    {
        cpu->r[14] = 0x000a4e68u;
    }
L_000a4e64:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a4e68u)) return;
    }
L_000a4e68:;
    {
        cpu->r[0] = 0x00001c38u;
    }
L_000a4e6c:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_000a4e70:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_000a4e74:;
    {
        cpu->r[2] = 0x00000006u;
    }
L_000a4e78:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_000a4e7c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000a4e80:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[6]);
        wr32(ea + 4u, cpu->r[7]);
        wr32(ea + 8u, cpu->r[12]);
    }
L_000a4e84:;
    {
        cpu->r[14] = 0x000a4e88u; fn_000b0e50(cpu);
    }
L_000a4e88:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_000a4e8c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000a4e90:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x490u);
    }
L_000a4e94:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a4e98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a4eac;
        }
    }
L_000a4e9c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000a4ea0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000a4ea4:;
    {
        cpu->r[14] = 0x000a4eacu;
    }
L_000a4ea8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a4eacu)) return;
    }
L_000a4eac:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_000a4eb0:;
    {
        cpu->r[1] = 0x00004e20u;
    }
L_000a4eb4:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000a4eb8:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_000a4ebc:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_000a4ec0:;
    {
        cpu->r[0] = rd32(cpu->r[9]);
    }
L_000a4ec4:;
    {
        cpu->r[14] = 0x000a4ec8u; fn_00135de0(cpu);
    }
L_000a4ec8:;
    {
        cpu->r[1] = 0x00005207u;
    }
L_000a4ecc:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000a4ed0:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000a4ed4:;
    {
        cpu->r[0] = rd32(cpu->r[9]);
    }
L_000a4ed8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_000a4edc:;
    {
        cpu->r[14] = 0x000a4ee0u; fn_00135de0(cpu);
    }
L_000a4ee0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_000a4ee4:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_000a4ee8:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000a4eec:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000a4ef0:;
    {
        cpu->r[0] = rd32(cpu->r[9]);
    }
L_000a4ef4:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_000a4ef8:;
    {
        cpu->r[14] = 0x000a4efcu; fn_00136660(cpu);
    }
L_000a4efc:;
    {
        cpu->r[3] = 0x000084f0u;
    }
L_000a4f00:;
    {
        cpu->r[0] = 0x00001c48u;
    }
L_000a4f04:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_000a4f08:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000a4f0c:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[11]);
    }
L_000a4f10:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000a4f14:;
    {
        wr8(cpu->r[4] + cpu->r[0], cpu->r[3]);
    }
L_000a4f18:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a4f1c:;
    {
        cpu->r[14] = 0x000a4f20u; fn_000a439c(cpu);
    }
L_000a4f20:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_000a4f24:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000a4f28:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x490u);
    }
L_000a4f2c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[11], 1, 1);
    }
L_000a4f30:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00001c48u;
        }
    }
L_000a4f34:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[4] + cpu->r[1], cpu->r[11]);
        }
    }
L_000a4f38:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a4f3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a4f50;
        }
    }
L_000a4f40:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000a4f44:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000a4f48:;
    {
        cpu->r[14] = 0x000a4f50u;
    }
L_000a4f4c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a4f50u)) return;
    }
L_000a4f50:;
    {
        cpu->r[3] = 0x00001c48u;
    }
L_000a4f54:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_000a4f58:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a4f5c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a5084;
        }
    }
L_000a4f60:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000a4f64:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000a4f68:;
    {
        cpu->r[2] = 0x00000032u;
    }
L_000a4f6c:;
    {
        cpu->r[14] = 0x000a4f70u; imp_memcpy(cpu); /* memcpy */
    }
L_000a4f70:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000006cu, 0, 0);
    }
L_000a4f74:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a4f78u)) return;
    }
L_000a4f78:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a4f7c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a4f80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a4c78;
        }
    }
L_000a4f84:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000a4f88:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000a4f8c:;
    {
        cpu->r[14] = 0x000a4f94u;
    }
L_000a4f90:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a4f94u)) return;
    }
L_000a4f94:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000a4f98:;
    {
        wr32(cpu->r[4] + cpu->r[6], cpu->r[3]);
    }
L_000a4f9c:;
    {
        cpu->r[3] = 0x00001bbfu;
    }
L_000a4fa0:;
    {
        cpu->r[2] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_000a4fa4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000a4fa8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a4c88;
        }
    }
L_000a4fac:;
    {
        goto L_000a5038;
    }
L_000a4fb0:;
    {
        cpu->r[11] = 0x00001d38u;
    }
L_000a4fb4:;
    {
        cpu->r[1] = 0x0000001cu;
    }
L_000a4fb8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000a4fbc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000740u, 0, 0);
    }
L_000a4fc0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000eu, 0, 0);
    }
L_000a4fc4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000a4fc8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000a4fcc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000a4fd0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000a4fd4:;
    {
        cpu->r[14] = 0x000a4fdcu;
    }
L_000a4fd8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a4fdcu)) return;
    }
L_000a4fdc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a4fe0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a4e14;
        }
    }
L_000a4fe4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000a4fe8:;
    {
        cpu->r[1] = 0x00000059u;
    }
L_000a4fec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000740u, 0, 0);
    }
L_000a4ff0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000eu, 0, 0);
    }
L_000a4ff4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000a4ff8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000a4ffc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000a5000:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000a5004:;
    {
        cpu->r[14] = 0x000a500cu;
    }
L_000a5008:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a500cu)) return;
    }
L_000a500c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a5010:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a4e44;
        }
    }
L_000a5014:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a5018:;
    {
        cpu->r[14] = 0x000a501cu; fn_000f34c4(cpu);
    }
L_000a501c:;
    {
        cpu->r[1] = 0x00000016u;
    }
L_000a5020:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000a5024:;
    {
        cpu->r[14] = 0x000a502cu;
    }
L_000a5028:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a502cu)) return;
    }
L_000a502c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a5030:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a4e44;
        }
    }
L_000a5034:;
    {
        goto L_000a4e14;
    }
L_000a5038:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000a503c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000a5040:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000a5044:;
    {
        cpu->r[14] = 0x000a5048u; fn_000930e0(cpu);
    }
L_000a5048:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000019c0u, 0, 0);
    }
L_000a504c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000003du, 0, 0);
    }
L_000a5050:;
    {
        cpu->r[14] = 0x000a5054u; fn_000930e0(cpu);
    }
L_000a5054:;
    {
        goto L_000a4c88;
    }
L_000a5058:;
    {
        cpu->r[3] = 0x00001c3cu;
    }
L_000a505c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a5060:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a5064:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00001940u, 0, 0);
    }
L_000a5068:;
    {
        cpu->r[14] = 0x000a506cu; fn_00093254(cpu);
    }
L_000a506c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a5070:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_000a5074:;
    {
        cpu->r[14] = 0x000a5078u; fn_000f3430(cpu);
    }
L_000a5078:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a507c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a4e14;
        }
    }
L_000a5080:;
    {
        goto L_000a4fb0;
    }
L_000a5084:;
    {
        cpu->r[3] = 0x00001c38u;
    }
L_000a5088:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000a508c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000a5090:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a5094:;
    {
        cpu->r[14] = 0x000a5098u; fn_000b0c4c(cpu);
    }
L_000a5098:;
    {
        goto L_000a4f60;
    }
}

/* _ZN4Game14CanBuyCarModelEii @ 000a50ac (arm) */
void fn_000a50ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a50ac:;
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
L_000a50b0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000a50b4:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000a50b8:;
    {
        cpu->r[14] = 0x000a50bcu; fn_000a439c(cpu);
    }
L_000a50bc:;
    {
        cpu->r[6] = rd32(0x000a50c4u + + 0xd8u);
    }
L_000a50c0:;
    {
        cpu->r[6] = add_flags(cpu, 0x000a50c8u, cpu->r[6], 0, 0);
    }
L_000a50c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a50c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a50dc;
        }
    }
L_000a50cc:;
    {
        cpu->r[3] = 0x000082ddu;
    }
L_000a50d0:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_000a50d4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a50d8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a5108;
        }
    }
L_000a50dc:;
    {
        cpu->r[10] = rd32(0x000a50e4u + + 0xbcu);
    }
L_000a50e0:;
    {
        cpu->r[7] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_000a50e4:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000a50e8:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a50ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a5110;
        }
    }
L_000a50f0:;
    {
        cpu->r[8] = rd32(0x000a50f8u + + 0xacu);
    }
L_000a50f4:;
    {
        cpu->r[7] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_000a50f8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x44u);
    }
L_000a50fc:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[5]);
    }
L_000a5100:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a5104:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a5138;
        }
    }
L_000a5108:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000a510c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a5110u)) return;
    }
L_000a5110:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a5114:;
    {
        cpu->r[14] = 0x000a5118u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a5118:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a511c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a50f0;
        }
    }
L_000a5120:;
    {
        cpu->r[8] = rd32(0x000a5128u + + 0x7cu);
    }
L_000a5124:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_000a5128:;
    {
        cpu->r[14] = 0x000a512cu; fn_00094228(cpu);
    }
L_000a512c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a5130:;
    {
        cpu->r[14] = 0x000a5134u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a5134:;
    {
        goto L_000a50f4;
    }
L_000a5138:;
    {
        cpu->r[10] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_000a513c:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_000a5140:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a5144:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a5178;
        }
    }
L_000a5148:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_000a514c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000a5150:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a5154:;
    {
        cpu->r[5] = rd32(cpu->r[3] + + 0x5cu);
    }
L_000a5158:;
    {
        cpu->r[14] = 0x000a515cu; fn_0009613c(cpu);
    }
L_000a515c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_000a5160:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000a5164:;
    {
        cpu->r[14] = 0x000a5168u; fn_00096000(cpu);
    }
L_000a5168:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_000a516c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000a5170:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000a5174:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a5178u)) return;
    }
L_000a5178:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a517c:;
    {
        cpu->r[14] = 0x000a5180u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a5180:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a5184:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a5148;
        }
    }
L_000a5188:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a518c:;
    {
        cpu->r[14] = 0x000a5190u; fn_00094228(cpu);
    }
L_000a5190:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a5194:;
    {
        cpu->r[14] = 0x000a5198u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a5198:;
    {
        goto L_000a5148;
    }
}

/* _ZN4Game15UpdateCheatKeysEv @ 000a51a8 (arm) */
void fn_000a51a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a51a8:;
    {
        cpu->r[3] = 0x00001d38u;
    }
L_000a51ac:;
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
L_000a51b0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000a51b4:;
    {
        cpu->r[4] = rd32(0x000a51bcu + + 0x3d4u);
    }
L_000a51b8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_000a51bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a51c0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000a51c4:;
    {
        cpu->r[4] = add_flags(cpu, 0x000a51ccu, cpu->r[4], 0, 0);
    }
L_000a51c8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000a5254;
        }
    }
L_000a51cc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000740u, 0, 0);
    }
L_000a51d0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000a51d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000eu, 0, 0);
    }
L_000a51d8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000a51dc:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x4u);
    }
L_000a51e0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a51e4:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a51e8:;
    {
        cpu->r[14] = 0x000a51f0u;
    }
L_000a51ec:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a51f0u)) return;
    }
L_000a51f0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a51f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a52d0;
        }
    }
L_000a51f8:;
    {
        cpu->r[8] = rd32(0x000a5200u + + 0x394u);
    }
L_000a51fc:;
    {
        cpu->r[7] = 0x00001c04u;
    }
L_000a5200:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000a5204:;
    {
        cpu->r[3] = 0x00000082u;
    }
L_000a5208:;
    {
        cpu->r[1] = 0x00000068u;
    }
L_000a520c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000a5210:;
    {
        cpu->r[12] = 0x000000c8u;
    }
L_000a5214:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000a5218:;
    {
        cpu->r[12] = 0x000000e6u;
    }
L_000a521c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000a5220:;
    {
        cpu->r[14] = 0x000a5224u; fn_000eaac4(cpu);
    }
L_000a5224:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000a5228:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_000a522c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000a5230:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000a5234:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2]);
    }
L_000a5238:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000a523c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_000a5240:;
    {
        vfp_sync_flags(cpu);
    }
L_000a5244:;
    {
        if (cond_test(cpu, 10)) {
        goto L_000a525c;
        }
    }
L_000a5248:;
    {
        cpu->r[3] = 0x000082e4u;
    }
L_000a524c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000a5250:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_000a5254:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_000a5258:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a525cu)) return;
    }
L_000a525c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_000a5260:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000a5264:;
    {
        vfp_sync_flags(cpu);
    }
L_000a5268:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a5248;
        }
    }
L_000a526c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[3];
    }
L_000a5270:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000a5274:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_000a5278:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_000a527c:;
    {
        vfp_sync_flags(cpu);
    }
L_000a5280:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a5248;
        }
    }
L_000a5284:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2] + + 0xcu);
    }
L_000a5288:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000a528c:;
    {
        vfp_sync_flags(cpu);
    }
L_000a5290:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a5248;
        }
    }
L_000a5294:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a5298:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a529c:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_000a52a0:;
    {
        cpu->r[14] = 0x000a52a8u;
    }
L_000a52a4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000a52a8u)) return;
    }
L_000a52a8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a52ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a5248;
        }
    }
L_000a52b0:;
    {
        cpu->r[3] = 0x000082e4u;
    }
L_000a52b4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000a52b8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000a52bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a5508;
        }
    }
L_000a52c0:;
    {
        cpu->r[3] = 0x000082e4u;
    }
L_000a52c4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000a52c8:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_000a52cc:;
    {
        goto L_000a5254;
    }
L_000a52d0:;
    {
        cpu->r[3] = rd32(0x000a52d8u + + 0x2c0u);
    }
L_000a52d4:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a52d8:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000a52dc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a52e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a5454;
        }
    }
L_000a52e4:;
    {
        cpu->r[7] = rd32(0x000a52ecu + + 0x2b0u);
    }
L_000a52e8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000a52ec:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000a52f0:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000a52f4:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_000a52f8:;
    {
        cpu->r[14] = 0x000a52fcu; fn_0018aa44(cpu);
    }
L_000a52fc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_000a5300:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000a5304:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000a5308:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000a530c:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_000a5310:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_000a5314:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[7]);
    }
L_000a5318:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[7]);
    }
L_000a531c:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_000a5320:;
    {
        cpu->r[14] = 0x000a5324u; fn_000a8a2c(cpu);
    }
L_000a5324:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_000a5328:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000a532c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a5330:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000a5334:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_000a5338:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_000a533c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[7]);
    }
L_000a5340:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[7]);
    }
L_000a5344:;
    {
        cpu->r[14] = 0x000a5348u; fn_000a8a2c(cpu);
    }
L_000a5348:;
    {
        cpu->r[0] = 0x00001bf0u;
    }
L_000a534c:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000a5350:;
    {
        cpu->r[1] = 0x00000066u;
    }
L_000a5354:;
    {
        cpu->r[2] = 0x0000005au;
    }
L_000a5358:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_000a535c:;
    {
        cpu->r[12] = 0x000000d2u;
    }
L_000a5360:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000a5364:;
    {
        cpu->r[12] = 0x00000032u;
    }
L_000a5368:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000a536c:;
    {
        cpu->r[14] = 0x000a5370u; fn_000eaac4(cpu);
    }
L_000a5370:;
    {
        cpu->r[3] = rd32(0x000a5378u + + 0x228u);
    }
L_000a5374:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a5378:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000a537c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a5380:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a5560;
        }
    }
L_000a5384:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000a5388:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a538c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000a5390:;
    {
        cpu->r[2] = 0x00000019u;
    }
L_000a5394:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000a5398:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_000a539c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_000a53a0:;
    {
        cpu->r[10] = 0x00001bf4u;
    }
L_000a53a4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[7]);
    }
L_000a53a8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[7]);
    }
L_000a53ac:;
    {
        cpu->r[14] = 0x000a53b0u; fn_000a8a2c(cpu);
    }
L_000a53b0:;
    {
        cpu->r[2] = rd32(0x000a53b8u + + 0x1ecu);
    }
L_000a53b4:;
    {
        cpu->r[12] = 0x00000032u;
    }
L_000a53b8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_000a53bc:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000a53c0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000a53c4:;
    {
        cpu->r[1] = 0x00000067u;
    }
L_000a53c8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000a53cc:;
    {
        cpu->r[8] = rd32(0x000a53d4u + + 0x1c0u);
    }
L_000a53d0:;
    {
        cpu->r[12] = rd32(cpu->r[2]);
    }
L_000a53d4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], 0x0000005au, 1, 0);
    }
L_000a53d8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000a53dc:;
    {
        cpu->r[14] = 0x000a53e0u; fn_000eaac4(cpu);
    }
L_000a53e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000a53e4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_000a53e8:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000a53ec:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_000a53f0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2]);
    }
L_000a53f4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_000a53f8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_000a53fc:;
    {
        vfp_sync_flags(cpu);
    }
L_000a5400:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a5498;
        }
    }
L_000a5404:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_000a5408:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000a540c:;
    {
        vfp_sync_flags(cpu);
    }
L_000a5410:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a5498;
        }
    }
L_000a5414:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[1];
    }
L_000a5418:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000a541c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_000a5420:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), *vfp_s(cpu,14));
    }
L_000a5424:;
    {
        vfp_sync_flags(cpu);
    }
L_000a5428:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a5498;
        }
    }
L_000a542c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[2] + + 0xcu);
    }
L_000a5430:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,13));
    }
L_000a5434:;
    {
        vfp_sync_flags(cpu);
    }
L_000a5438:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a5498;
        }
    }
L_000a543c:;
    {
        cpu->r[2] = 0x000082f4u;
    }
L_000a5440:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000a5444:;
    {
        wr8(cpu->r[5] + cpu->r[2], cpu->r[3]);
    }
L_000a5448:;
    {
        cpu->r[2] = 0x00008304u;
    }
L_000a544c:;
    {
        wr8(cpu->r[5] + cpu->r[2], cpu->r[3]);
    }
L_000a5450:;
    {
        goto L_000a54a4;
    }
L_000a5454:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000a5458:;
    {
        cpu->r[14] = 0x000a545cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a545c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a5460:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a52e4;
        }
    }
L_000a5464:;
    {
        cpu->r[7] = rd32(0x000a546cu + + 0x130u);
    }
L_000a5468:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000a546c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a5470:;
    {
        cpu->r[14] = 0x000a5474u; fn_0018aa20(cpu);
    }
L_000a5474:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000a5478:;
    {
        cpu->r[14] = 0x000a547cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a547c:;
    {
        cpu->r[3] = rd32(0x000a5484u + + 0x124u);
    }
L_000a5480:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a5484:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a5488:;
    {
        cpu->r[3] = rd32(0x000a5490u + + 0x11cu);
    }
L_000a548c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a5490:;
    {
        cpu->r[14] = 0x000a5494u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000a5494:;
    {
        goto L_000a52e8;
    }
L_000a5498:;
    {
        cpu->r[3] = 0x000082e0u;
    }
L_000a549c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000a54a0:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_000a54a4:;
    {
        cpu->r[3] = 0x00001bf0u;
    }
L_000a54a8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000a54ac:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3]);
    }
L_000a54b0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000a54b4:;
    {
        vfp_sync_flags(cpu);
    }
L_000a54b8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000a51fc;
        }
    }
L_000a54bc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_000a54c0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000a54c4:;
    {
        vfp_sync_flags(cpu);
    }
L_000a54c8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a51fc;
        }
    }
L_000a54cc:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[1];
    }
L_000a54d0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000a54d4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_000a54d8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_000a54dc:;
    {
        vfp_sync_flags(cpu);
    }
L_000a54e0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a51fc;
        }
    }
L_000a54e4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0xcu);
    }
L_000a54e8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000a54ec:;
    {
        vfp_sync_flags(cpu);
    }
L_000a54f0:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[2] = 0x00008304u;
        }
    }
L_000a54f4:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000a54f8:;
    {
        if (cond_test(cpu, 10)) {
        wr8(cpu->r[5] + cpu->r[2], cpu->r[3]);
        }
    }
L_000a54fc:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[2] = 0x000082fcu;
        }
    }
L_000a5500:;
    {
        if (cond_test(cpu, 10)) {
        wr8(cpu->r[5] + cpu->r[2], cpu->r[3]);
        }
    }
L_000a5504:;
    {
        goto L_000a51fc;
    }
L_000a5508:;
    {
        cpu->r[0] = 0x00000950u;
    }
L_000a550c:;
    {
        cpu->r[14] = 0x000a5510u; fn_0018ba6c(cpu);
    }
L_000a5510:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000a5514:;
    {
        cpu->r[14] = 0x000a5518u; fn_00106b60(cpu);
    }
L_000a5518:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000a551c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a5588;
        }
    }
L_000a5520:;
    {
        cpu->r[7] = rd32(0x000a5528u + + 0x88u);
    }
L_000a5524:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a5528:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000a552c:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_000a5530:;
    {
        cpu->r[14] = 0x000a5534u; fn_000eac74(cpu);
    }
L_000a5534:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000a5538:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000a553c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000a5540:;
    {
        cpu->r[14] = 0x000a5544u; fn_000f361c(cpu);
    }
L_000a5544:;
    {
        cpu->r[3] = rd32(0x000a554cu + + 0x68u);
    }
L_000a5548:;
    {
        cpu->r[2] = 0x000082e4u;
    }
L_000a554c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000a5550:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a5554:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000a5558:;
    {
        wr32(cpu->r[3], cpu->r[1]);
    }
L_000a555c:;
    {
        goto L_000a52c0;
    }
L_000a5560:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a5564:;
    {
        cpu->r[14] = 0x000a5568u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a5568:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a556c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a5384;
        }
    }
L_000a5570:;
    {
        cpu->r[3] = rd32(0x000a5578u + + 0x40u);
    }
L_000a5574:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a5578:;
    {
        cpu->r[14] = 0x000a557cu; fn_00094228(cpu);
    }
L_000a557c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000a5580:;
    {
        cpu->r[14] = 0x000a5584u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a5584:;
    {
        goto L_000a5384;
    }
L_000a5588:;
    {
        cpu->r[7] = rd32(0x000a5590u + + 0x20u);
    }
L_000a558c:;
    {
        goto L_000a5534;
    }
}

/* _ZN4Game12BuyTuningKitEiiii @ 000a55bc (arm) */
void fn_000a55bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a55bc:;
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
L_000a55c0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000063u, 1, 1);
    }
L_000a55c4:;
    {
        cpu->r[4] = rd32(0x000a55ccu + + 0x270u);
    }
L_000a55c8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000a55cc:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000a55d0:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_000a55d4:;
    {
        cpu->r[4] = add_flags(cpu, 0x000a55dcu, cpu->r[4], 0, 0);
    }
L_000a55d8:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_000a55dc:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_000a55e0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a5768;
        }
    }
L_000a55e4:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000002u, 1, 1);
    }
L_000a55e8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a5730;
        }
    }
L_000a55ec:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000009u, 1, 1);
    }
L_000a55f0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_000a56f8;
        }
    }
L_000a55f4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000a55f8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x30u);
    }
L_000a55fc:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000a5600:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000a5604:;
    {
        cpu->r[14] = 0x000a5608u; fn_000973dc(cpu);
    }
L_000a5608:;
    {
        cpu->r[8] = rd32(0x000a5610u + + 0x230u);
    }
L_000a560c:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000a5610:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_000a5614:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a5618:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000a561c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a56d0;
        }
    }
L_000a5620:;
    {
        cpu->r[6] = rd32(0x000a5628u + + 0x21cu);
    }
L_000a5624:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a5628:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x1ecu);
    }
L_000a562c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000a5630:;
    {
        cpu->r[3] = rd8(cpu->r[3] + shifter(cpu->r[7], 2, 1u, &shc));
    }
L_000a5634:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a5638:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a5648;
        }
    }
L_000a563c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000a5640:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000a5644:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a5648u)) return;
    }
L_000a5648:;
    {
        cpu->r[11] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000a564c:;
    {
        cpu->r[3] = rd32(cpu->r[11]);
    }
L_000a5650:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a5654:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a57a0;
        }
    }
L_000a5658:;
    {
        cpu->r[1] = 0x0000002cu;
    }
L_000a565c:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a5660:;
    {
        cpu->r[2] = 0x00008770u;
    }
L_000a5664:;
    {
        uint32_t v = cpu->r[1] * cpu->r[7] + cpu->r[10]; cpu->r[1] = v;
    }
L_000a5668:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x5cu);
    }
L_000a566c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_000a5670:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000a5674:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000a563c;
        }
    }
L_000a5678:;
    {
        cpu->r[11] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000a567c:;
    {
        cpu->r[2] = rd32(cpu->r[11]);
    }
L_000a5680:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a5684:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a57c4;
        }
    }
L_000a5688:;
    {
        cpu->r[2] = rd32(cpu->r[9] + + 0x1ecu);
    }
L_000a568c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000a5690:;
    {
        cpu->r[2] = rd32(cpu->r[2] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000a5694:;
    {
        wr8(cpu->r[2] + shifter(cpu->r[7], 2, 1u, &shc), cpu->r[1]);
    }
L_000a5698:;
    {
        cpu->r[1] = 0x0000002cu;
    }
L_000a569c:;
    {
        cpu->r[12] = 0x00008770u;
    }
L_000a56a0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a56a4:;
    {
        uint32_t v = cpu->r[1] * cpu->r[7] + cpu->r[10]; cpu->r[10] = v;
    }
L_000a56a8:;
    {
        cpu->r[1] = rd32(0x000a56b0u + + 0x198u);
    }
L_000a56ac:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000a56b0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000a56b4:;
    {
        cpu->r[12] = rd32(cpu->r[10] + cpu->r[12]);
    }
L_000a56b8:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_000a56bc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 0);
    }
L_000a56c0:;
    {
        wr32(cpu->r[2] + + 0x5cu, cpu->r[3]);
    }
L_000a56c4:;
    {
        cpu->r[14] = 0x000a56c8u; fn_0009e9e8(cpu);
    }
L_000a56c8:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000a56cc:;
    {
        goto L_000a5640;
    }
L_000a56d0:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000a56d4:;
    {
        cpu->r[14] = 0x000a56d8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a56d8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a56dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a5620;
        }
    }
L_000a56e0:;
    {
        cpu->r[6] = rd32(0x000a56e8u + + 0x15cu);
    }
L_000a56e4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a56e8:;
    {
        cpu->r[14] = 0x000a56ecu; fn_00094228(cpu);
    }
L_000a56ec:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000a56f0:;
    {
        cpu->r[14] = 0x000a56f4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a56f4:;
    {
        goto L_000a5624;
    }
L_000a56f8:;
    {
        cpu->r[1] = rd32(0x000a5700u + + 0x14cu);
    }
L_000a56fc:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000a5700:;
    {
        cpu->r[12] = rd32(0x000a5708u + + 0x148u);
    }
L_000a5704:;
    {
        cpu->r[14] = 0x00002546u;
    }
L_000a5708:;
    {
        cpu->r[2] = rd32(0x000a5710u + + 0x144u);
    }
L_000a570c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000a5714u, cpu->r[1], 0, 0);
    }
L_000a5710:;
    {
        cpu->r[3] = rd32(0x000a5718u + + 0x140u);
    }
L_000a5714:;
    {
        cpu->r[12] = add_flags(cpu, 0x000a571cu, cpu->r[12], 0, 0);
    }
L_000a5718:;
    {
        cpu->r[2] = add_flags(cpu, 0x000a5720u, cpu->r[2], 0, 0);
    }
L_000a571c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000003bcu, 0, 0);
    }
L_000a5720:;
    {
        cpu->r[3] = add_flags(cpu, 0x000a5728u, cpu->r[3], 0, 0);
    }
L_000a5724:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000a5728:;
    {
        cpu->r[14] = 0x000a572cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000a572c:;
    {
        goto L_000a55f4;
    }
L_000a5730:;
    {
        cpu->r[1] = rd32(0x000a5738u + + 0x124u);
    }
L_000a5734:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000a5738:;
    {
        cpu->r[12] = rd32(0x000a5740u + + 0x120u);
    }
L_000a573c:;
    {
        cpu->r[14] = 0x00002545u;
    }
L_000a5740:;
    {
        cpu->r[2] = rd32(0x000a5748u + + 0x11cu);
    }
L_000a5744:;
    {
        cpu->r[1] = add_flags(cpu, 0x000a574cu, cpu->r[1], 0, 0);
    }
L_000a5748:;
    {
        cpu->r[3] = rd32(0x000a5750u + + 0x118u);
    }
L_000a574c:;
    {
        cpu->r[12] = add_flags(cpu, 0x000a5754u, cpu->r[12], 0, 0);
    }
L_000a5750:;
    {
        cpu->r[2] = add_flags(cpu, 0x000a5758u, cpu->r[2], 0, 0);
    }
L_000a5754:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000003bcu, 0, 0);
    }
L_000a5758:;
    {
        cpu->r[3] = add_flags(cpu, 0x000a5760u, cpu->r[3], 0, 0);
    }
L_000a575c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000a5760:;
    {
        cpu->r[14] = 0x000a5764u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000a5764:;
    {
        goto L_000a55ec;
    }
L_000a5768:;
    {
        cpu->r[1] = rd32(0x000a5770u + + 0xfcu);
    }
L_000a576c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000a5770:;
    {
        cpu->r[12] = rd32(0x000a5778u + + 0xf8u);
    }
L_000a5774:;
    {
        cpu->r[14] = 0x00002544u;
    }
L_000a5778:;
    {
        cpu->r[2] = rd32(0x000a5780u + + 0xf4u);
    }
L_000a577c:;
    {
        cpu->r[1] = add_flags(cpu, 0x000a5784u, cpu->r[1], 0, 0);
    }
L_000a5780:;
    {
        cpu->r[3] = rd32(0x000a5788u + + 0xf0u);
    }
L_000a5784:;
    {
        cpu->r[12] = add_flags(cpu, 0x000a578cu, cpu->r[12], 0, 0);
    }
L_000a5788:;
    {
        cpu->r[2] = add_flags(cpu, 0x000a5790u, cpu->r[2], 0, 0);
    }
L_000a578c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000003bcu, 0, 0);
    }
L_000a5790:;
    {
        cpu->r[3] = add_flags(cpu, 0x000a5798u, cpu->r[3], 0, 0);
    }
L_000a5794:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000a5798:;
    {
        cpu->r[14] = 0x000a579cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000a579c:;
    {
        goto L_000a55e4;
    }
L_000a57a0:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000a57a4:;
    {
        cpu->r[14] = 0x000a57a8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a57a8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a57ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a5658;
        }
    }
L_000a57b0:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000a57b4:;
    {
        cpu->r[14] = 0x000a57b8u; fn_00094228(cpu);
    }
L_000a57b8:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000a57bc:;
    {
        cpu->r[14] = 0x000a57c0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a57c0:;
    {
        goto L_000a5658;
    }
L_000a57c4:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000a57c8:;
    {
        cpu->r[14] = 0x000a57ccu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a57cc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a57d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a5828;
        }
    }
L_000a57d4:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000a57d8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000a57dc:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000a57e0:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x1ecu);
    }
L_000a57e4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000a57e8:;
    {
        wr8(cpu->r[3] + shifter(cpu->r[7], 2, 1u, &shc), cpu->r[2]);
    }
L_000a57ec:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_000a57f0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a57f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a5808;
        }
    }
L_000a57f8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000a57fc:;
    {
        cpu->r[14] = 0x000a5800u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a5800:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a5804:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a5810;
        }
    }
L_000a5808:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x5cu);
    }
L_000a580c:;
    {
        goto L_000a5698;
    }
L_000a5810:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000a5814:;
    {
        cpu->r[14] = 0x000a5818u; fn_00094228(cpu);
    }
L_000a5818:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000a581c:;
    {
        cpu->r[14] = 0x000a5820u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a5820:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x5cu);
    }
L_000a5824:;
    {
        goto L_000a5698;
    }
L_000a5828:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000a582c:;
    {
        cpu->r[14] = 0x000a5830u; fn_00094228(cpu);
    }
L_000a5830:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000a5834:;
    {
        cpu->r[14] = 0x000a5838u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a5838:;
    {
        goto L_000a57d4;
    }
}

/* _ZN4Game15IsCarModelOwnedEii @ 000a587c (arm) */
void fn_000a587c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a587c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000a5880:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000002cu, 1, 1);
    }
L_000a5884:;
    {
        cpu->r[4] = rd32(0x000a588cu + + 0xa8u);
    }
L_000a5888:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000a588c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000a5890:;
    {
        cpu->r[4] = add_flags(cpu, 0x000a5898u, cpu->r[4], 0, 0);
    }
L_000a5894:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a58a0;
        }
    }
L_000a5898:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000a589c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a58a8;
        }
    }
L_000a58a0:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000a58a4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a58a8u)) return;
    }
L_000a58a8:;
    {
        cpu->r[14] = 0x000a58acu; fn_0009613c(cpu);
    }
L_000a58ac:;
    {
        sub_flags(cpu, cpu->r[0], 0x0000001cu, 1, 1);
    }
L_000a58b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a5920;
        }
    }
L_000a58b4:;
    {
        cpu->r[3] = 0x000082ddu;
    }
L_000a58b8:;
    {
        cpu->r[3] = rd8(cpu->r[6] + cpu->r[3]);
    }
L_000a58bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000a58c0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a58a0;
        }
    }
L_000a58c4:;
    {
        cpu->r[3] = rd32(0x000a58ccu + + 0x6cu);
    }
L_000a58c8:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000a58cc:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000a58d0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000a58d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a58f8;
        }
    }
L_000a58d8:;
    {
        cpu->r[7] = rd32(0x000a58e0u + + 0x5cu);
    }
L_000a58dc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000a58e0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x44u);
    }
L_000a58e4:;
    {
        cpu->r[0] = rd8(cpu->r[3] + cpu->r[5]);
    }
L_000a58e8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_000a58ec:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000a58f0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000a58f4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a58f8u)) return;
    }
L_000a58f8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a58fc:;
    {
        cpu->r[14] = 0x000a5900u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000a5900:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a5904:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a58d8;
        }
    }
L_000a5908:;
    {
        cpu->r[7] = rd32(0x000a5910u + + 0x2cu);
    }
L_000a590c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000a5910:;
    {
        cpu->r[14] = 0x000a5914u; fn_00094228(cpu);
    }
L_000a5914:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a5918:;
    {
        cpu->r[14] = 0x000a591cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000a591c:;
    {
        goto L_000a58dc;
    }
L_000a5920:;
    {
        cpu->r[0] = 0x00000010u;
    }
L_000a5924:;
    {
        cpu->r[14] = 0x000a5928u; fn_000a5db0(cpu);
    }
L_000a5928:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a592c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000a58a0;
        }
    }
L_000a5930:;
    {
        goto L_000a58b4;
    }
}

/* _ZN4Game17GetOwnedCarsCountEv @ 000a5940 (arm) */
void fn_000a5940(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a5940:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_000a5944:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000a5948:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000a594c:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_000a5950:;
    {
        cpu->r[7] = 0x0000004cu;
    }
L_000a5954:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000a5958:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000a595c:;
    {
        cpu->r[14] = 0x000a5960u; fn_0009613c(cpu);
    }
L_000a5960:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x444u);
    }
L_000a5964:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000a5968:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000a596c:;
    {
        uint32_t v = cpu->r[7] * cpu->r[0]; cpu->r[3] = v;
    }
L_000a5970:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000a5974:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000a5978:;
    {
        cpu->r[14] = 0x000a597cu; fn_000a587c(cpu);
    }
L_000a597c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000a5980:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
        }
    }
L_000a5984:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000064u, 1, 1);
    }
L_000a5988:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000a5954;
        }
    }
L_000a598c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000a5990:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000a5994u)) return;
    }
}

/* _ZN4Game21GetSpeedDemonCrtValueEv @ 000a5994 (arm) */
void fn_000a5994(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000a5994:;
    {
        cpu->r[3] = rd32(0x000a599cu + + 0x10u);
    }
L_000a5998:;
    {
        cpu->r[2] = rd32(0x000a59a0u + + 0x10u);
    }
L_000a599c:;
    {
        cpu->r[3] = add_flags(cpu, 0x000a59a4u, cpu->r[3], 0, 0);
    }
L_000a59a0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000a59a4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x54u);
    }
L_000a59a8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}
