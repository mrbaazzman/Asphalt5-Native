#include "functions.h"

/* _ZN5SceneD2Ev @ 000cca14 (arm) */
void fn_000cca14(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000cca14:;
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
L_000cca18:;
    {
        cpu->r[5] = 0x00008c6cu;
    }
L_000cca1c:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000cca20:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000cca24:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_000cca28:;
    {
        cpu->r[1] = rd32(0x000cca30u + + 0xe9cu);
    }
L_000cca2c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[5]);
    }
L_000cca30:;
    {
        cpu->r[1] = add_flags(cpu, 0x000cca38u, cpu->r[1], 0, 0);
    }
L_000cca34:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_000cca38:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000cca3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cca4c;
        }
    }
L_000cca40:;
    {
        cpu->r[14] = 0x000cca44u; fn_0018ba60(cpu);
    }
L_000cca44:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000cca48:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000cca4c:;
    {
        cpu->r[5] = 0x00008c70u;
    }
L_000cca50:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000cca54:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000cca58:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000cca5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cca6c;
        }
    }
L_000cca60:;
    {
        cpu->r[14] = 0x000cca64u; fn_0018ba60(cpu);
    }
L_000cca64:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000cca68:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000cca6c:;
    {
        cpu->r[6] = 0x00001c60u;
    }
L_000cca70:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000cca74:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000cca78:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000cca7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ccaf8;
        }
    }
L_000cca80:;
    {
        cpu->r[7] = 0x00001c64u;
    }
L_000cca84:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000cca88:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000cca8c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cca90:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000ccae0;
        }
    }
L_000cca94:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000cca98:;
    {
        cpu->r[8] = cpu->r[5];
    }
L_000cca9c:;
    {
        goto L_000ccaa4;
    }
L_000ccaa0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000ccaa4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000ccaa8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ccaac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ccac8;
        }
    }
L_000ccab0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000ccab4:;
    {
        cpu->r[14] = 0x000ccabcu;
    }
L_000ccab8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000ccabcu)) return;
    }
L_000ccabc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000ccac0:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_000ccac4:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[8]);
    }
L_000ccac8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000ccacc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000ccad0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000ccad4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000ccaa0;
        }
    }
L_000ccad8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000ccadc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ccae8;
        }
    }
L_000ccae0:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_000ccae4:;
    {
        cpu->r[14] = 0x000ccae8u; fn_0018ba60(cpu);
    }
L_000ccae8:;
    {
        cpu->r[3] = 0x00001c60u;
    }
L_000ccaec:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000ccaf0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000ccaf4:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000ccaf8:;
    {
        cpu->r[7] = 0x000087b4u;
    }
L_000ccafc:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000ccb00:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000ccb04:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ccb08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ccb84;
        }
    }
L_000ccb0c:;
    {
        cpu->r[8] = 0x00008450u;
    }
L_000ccb10:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_000ccb14:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000ccb18:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000ccb1c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000ccb6c;
        }
    }
L_000ccb20:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000ccb24:;
    {
        cpu->r[10] = cpu->r[5];
    }
L_000ccb28:;
    {
        goto L_000ccb30;
    }
L_000ccb2c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000ccb30:;
    {
        cpu->r[6] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000ccb34:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000ccb38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ccb54;
        }
    }
L_000ccb3c:;
    {
        cpu->r[14] = 0x000ccb40u; fn_00135120(cpu);
    }
L_000ccb40:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000ccb44:;
    {
        cpu->r[14] = 0x000ccb48u; fn_0018ba20(cpu);
    }
L_000ccb48:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000ccb4c:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000ccb50:;
    {
        wr32(cpu->r[2] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[10]);
    }
L_000ccb54:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000ccb58:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000ccb5c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_000ccb60:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000ccb2c;
        }
    }
L_000ccb64:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ccb68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ccb74;
        }
    }
L_000ccb6c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000ccb70:;
    {
        cpu->r[14] = 0x000ccb74u; fn_0018ba60(cpu);
    }
L_000ccb74:;
    {
        cpu->r[3] = 0x000087b4u;
    }
L_000ccb78:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000ccb7c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000ccb80:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000ccb84:;
    {
        cpu->r[3] = 0x00001c70u;
    }
L_000ccb88:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000ccb8c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000ccb90:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_000ccb94:;
    {
        if (cond_test(cpu, 5)) {
        goto L_000ccc8c;
        }
    }
L_000ccb98:;
    {
        cpu->r[9] = rd32(0x000ccba0u + + 0xd30u);
    }
L_000ccb9c:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[6] = v;
    }
L_000ccba0:;
    {
        cpu->r[7] = rd32(0x000ccba8u + + 0xd2cu);
    }
L_000ccba4:;
    {
        cpu->r[8] = rd32(0x000ccbacu + + 0xd2cu);
    }
L_000ccba8:;
    {
        cpu->r[9] = add_flags(cpu, 0x000ccbb0u, cpu->r[9], 0, 0);
    }
L_000ccbac:;
    {
        cpu->r[11] = rd32(0x000ccbb4u + + 0xd28u);
    }
L_000ccbb0:;
    {
        cpu->r[7] = add_flags(cpu, 0x000ccbb8u, cpu->r[7], 0, 0);
    }
L_000ccbb4:;
    {
        cpu->r[8] = add_flags(cpu, 0x000ccbbcu, cpu->r[8], 0, 0);
    }
L_000ccbb8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x000001fcu, 0, 0);
    }
L_000ccbbc:;
    {
        cpu->r[11] = add_flags(cpu, 0x000ccbc4u, cpu->r[11], 0, 0);
    }
L_000ccbc0:;
    {
        cpu->r[10] = cpu->r[7];
    }
L_000ccbc4:;
    {
        goto L_000ccc20;
    }
L_000ccbc8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000ccbcc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_000ccbd0:;
    {
        cpu->r[7] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_000ccbd4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_000ccbd8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ccc78;
        }
    }
L_000ccbdc:;
    {
        cpu->r[3] = 0x00001c70u;
    }
L_000ccbe0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000ccbe4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000ccbe8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_000ccbec:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000ccbf0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000ccbf4:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 0);
    }
L_000ccbf8:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000004u, 1, 0);
    }
L_000ccbfc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ccc0c;
        }
    }
L_000ccc00:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000ccc04:;
    {
        cpu->r[14] = 0x000ccc0cu;
    }
L_000ccc08:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000ccc0cu)) return;
    }
L_000ccc0c:;
    {
        add_flags(cpu, cpu->r[5], 0x00000001u, 0, 1);
    }
L_000ccc10:;
    {
        cpu->r[3] = 0x00001c70u;
    }
L_000ccc14:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000ccc18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ccc8c;
        }
    }
L_000ccc1c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000ccc20:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_000ccc24:;
    {
        cpu->r[3] = 0x00001c68u;
    }
L_000ccc28:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000ccc2c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000ccbc8;
        }
    }
L_000ccc30:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_000ccc34:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_000ccc38:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000ccc3c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000ccc40:;
    {
        cpu->r[12] = 0x0000006au;
    }
L_000ccc44:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[9]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_000ccc48:;
    {
        cpu->r[14] = 0x000ccc4cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000ccc4c:;
    {
        cpu->r[2] = 0x00001c70u;
    }
L_000ccc50:;
    {
        cpu->r[3] = 0x00001c68u;
    }
L_000ccc54:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000ccc58:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000ccc5c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000ccc60:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000ccc64:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_000ccc68:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_000ccc6c:;
    {
        cpu->r[7] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_000ccc70:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000ccbf0;
        }
    }
L_000ccc74:;
    {
        goto L_000ccbd4;
    }
L_000ccc78:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000ccc7c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_000ccc80:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000ccc84:;
    {
        cpu->r[14] = 0x000ccc88u; imp_memcpy(cpu); /* memcpy */
    }
L_000ccc88:;
    {
        goto L_000ccbdc;
    }
L_000ccc8c:;
    {
        cpu->r[5] = 0x00001c68u;
    }
L_000ccc90:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000ccc94:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000ccc98:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ccc9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cccc4;
        }
    }
L_000ccca0:;
    {
        cpu->r[14] = 0x000ccca4u; fn_0018ba60(cpu);
    }
L_000ccca4:;
    {
        cpu->r[3] = 0x00001c6cu;
    }
L_000ccca8:;
    {
        cpu->r[1] = 0x00001c70u;
    }
L_000cccac:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cccb0:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000cccb4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000cccb8:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[2]);
    }
L_000cccbc:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[2]);
    }
L_000cccc0:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000cccc4:;
    {
        cpu->r[5] = 0x00001c98u;
    }
L_000cccc8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ccccc:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000cccd0:;
    {
        cpu->r[14] = 0x000cccd4u; fn_000bc350(cpu);
    }
L_000cccd4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000cccd8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cccdc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cccf8;
        }
    }
L_000ccce0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000ccce4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000ccce8:;
    {
        cpu->r[14] = 0x000cccf0u;
    }
L_000cccec:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000cccf0u)) return;
    }
L_000cccf0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000cccf4:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000cccf8:;
    {
        cpu->r[5] = 0x00001c9cu;
    }
L_000cccfc:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000ccd00:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000ccd04:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ccd08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ccd24;
        }
    }
L_000ccd0c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000ccd10:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000ccd14:;
    {
        cpu->r[14] = 0x000ccd1cu;
    }
L_000ccd18:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000ccd1cu)) return;
    }
L_000ccd1c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ccd20:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000ccd24:;
    {
        cpu->r[5] = 0x000042d0u;
    }
L_000ccd28:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0006u << 16);
    }
L_000ccd2c:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000ccd30:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000ccd34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ccd50;
        }
    }
L_000ccd38:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000ccd3c:;
    {
        cpu->r[14] = 0x000ccd40u; fn_00187010(cpu);
    }
L_000ccd40:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000ccd44:;
    {
        cpu->r[14] = 0x000ccd48u; fn_0018ba20(cpu);
    }
L_000ccd48:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ccd4c:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000ccd50:;
    {
        cpu->r[5] = 0x00001c54u;
    }
L_000ccd54:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000ccd58:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000ccd5c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000ccd60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ccd7c;
        }
    }
L_000ccd64:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000ccd68:;
    {
        cpu->r[14] = 0x000ccd6cu; fn_0015bacc(cpu);
    }
L_000ccd6c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000ccd70:;
    {
        cpu->r[14] = 0x000ccd74u; fn_0018ba20(cpu);
    }
L_000ccd74:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ccd78:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000ccd7c:;
    {
        cpu->r[5] = 0x00008824u;
    }
L_000ccd80:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000ccd84:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000ccd88:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ccd8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ccd9c;
        }
    }
L_000ccd90:;
    {
        cpu->r[14] = 0x000ccd94u; fn_0018ba60(cpu);
    }
L_000ccd94:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ccd98:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000ccd9c:;
    {
        cpu->r[5] = 0x00008828u;
    }
L_000ccda0:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000ccda4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000ccda8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ccdac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ccdbc;
        }
    }
L_000ccdb0:;
    {
        cpu->r[14] = 0x000ccdb4u; fn_0018ba60(cpu);
    }
L_000ccdb4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ccdb8:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000ccdbc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ccdc0:;
    {
        cpu->r[12] = 0x00001ce8u;
    }
L_000ccdc4:;
    {
        cpu->r[0] = 0x00001cecu;
    }
L_000ccdc8:;
    {
        cpu->r[1] = 0x00001cf0u;
    }
L_000ccdcc:;
    {
        cpu->r[2] = 0x00001cf4u;
    }
L_000ccdd0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[4], 0x00011c00u, 0, 0);
    }
L_000ccdd4:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000ccdd8:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000ccddc:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000ccde0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000ccde4:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_000ccde8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[8], 0x000000a8u, 0, 0);
    }
L_000ccdec:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_000ccdf0:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[3]);
    }
L_000ccdf4:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[3]);
    }
L_000ccdf8:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_000ccdfc:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_000cce00:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000cce04:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000cce08:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cce0c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000cce10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cce24;
        }
    }
L_000cce14:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000cce18:;
    {
        cpu->r[14] = 0x000cce20u;
    }
L_000cce1c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000cce20u)) return;
    }
L_000cce20:;
    {
        wr32(cpu->r[5], cpu->r[7]);
    }
L_000cce24:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000008u, 1, 1);
    }
L_000cce28:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_000cce2c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cce00;
        }
    }
L_000cce30:;
    {
        cpu->r[2] = rd32(0x000cce38u + + 0xaa8u);
    }
L_000cce34:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_000cce38:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_000cce3c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_000cce40:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000cce44:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000cce48:;
    {
        cpu->r[6] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000cce4c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000cce50:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cce8c;
        }
    }
L_000cce54:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[8], 0x000000c8u, 0, 0);
    }
L_000cce58:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_000cce5c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000cce60:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000cce64:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cce68:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000cce6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cce80;
        }
    }
L_000cce70:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000cce74:;
    {
        cpu->r[14] = 0x000cce7cu;
    }
L_000cce78:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000cce7cu)) return;
    }
L_000cce7c:;
    {
        wr32(cpu->r[5], cpu->r[7]);
    }
L_000cce80:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000007u, 1, 1);
    }
L_000cce84:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_000cce88:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cce5c;
        }
    }
L_000cce8c:;
    {
        cpu->r[6] = 0x00008444u;
    }
L_000cce90:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000cce94:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000cce98:;
    {
        cpu->r[3] = 0x00001d00u;
    }
L_000cce9c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000ccea0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000ccea4:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_000ccea8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_000cceac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ccf24;
        }
    }
L_000cceb0:;
    {
        cpu->r[7] = 0x00008448u;
    }
L_000cceb4:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_000cceb8:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000ccebc:;
    {
        cpu->r[14] = 0x000ccec0u; fn_0018b9ac(cpu);
    }
L_000ccec0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000ccec4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000ccec8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000ccefc;
        }
    }
L_000ccecc:;
    {
        cpu->r[8] = cpu->r[5];
    }
L_000cced0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000cced4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000cced8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ccedc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cceec;
        }
    }
L_000ccee0:;
    {
        cpu->r[14] = 0x000ccee4u; fn_0018ba20(cpu);
    }
L_000ccee4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000ccee8:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[8]);
    }
L_000cceec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000ccef0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000ccef4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000ccef8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000cced0;
        }
    }
L_000ccefc:;
    {
        cpu->r[5] = 0x00008444u;
    }
L_000ccf00:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000ccf04:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000ccf08:;
    {
        cpu->r[14] = 0x000ccf0cu; fn_0018b9ac(cpu);
    }
L_000ccf0c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000ccf10:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ccf14:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ccf24;
        }
    }
L_000ccf18:;
    {
        cpu->r[14] = 0x000ccf1cu; fn_0018ba60(cpu);
    }
L_000ccf1c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ccf20:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000ccf24:;
    {
        cpu->r[5] = 0x0000844cu;
    }
L_000ccf28:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000ccf2c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000ccf30:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ccf34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ccf44;
        }
    }
L_000ccf38:;
    {
        cpu->r[14] = 0x000ccf3cu; fn_0018ba60(cpu);
    }
L_000ccf3c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ccf40:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000ccf44:;
    {
        cpu->r[5] = 0x00008c50u;
    }
L_000ccf48:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000ccf4c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000ccf50:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ccf54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ccf70;
        }
    }
L_000ccf58:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000ccf5c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000ccf60:;
    {
        cpu->r[14] = 0x000ccf68u;
    }
L_000ccf64:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000ccf68u)) return;
    }
L_000ccf68:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ccf6c:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000ccf70:;
    {
        cpu->r[5] = 0x00008c54u;
    }
L_000ccf74:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000ccf78:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000ccf7c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000ccf80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ccf9c;
        }
    }
L_000ccf84:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000ccf88:;
    {
        cpu->r[14] = 0x000ccf8cu; fn_000b80bc(cpu);
    }
L_000ccf8c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000ccf90:;
    {
        cpu->r[14] = 0x000ccf94u; fn_0018ba20(cpu);
    }
L_000ccf94:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000ccf98:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000ccf9c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x00018c00u, 0, 0);
    }
L_000ccfa0:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000ccfa4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[5], 0x0000007cu, 0, 0);
    }
L_000ccfa8:;
    {
        cpu->r[8] = cpu->r[7];
    }
L_000ccfac:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000ccfb0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_000ccfb4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ccfb8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000ccfbc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ccfd0;
        }
    }
L_000ccfc0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000ccfc4:;
    {
        cpu->r[14] = 0x000ccfccu;
    }
L_000ccfc8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000ccfccu)) return;
    }
L_000ccfcc:;
    {
        wr32(cpu->r[6], cpu->r[8]);
    }
L_000ccfd0:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000008u, 1, 1);
    }
L_000ccfd4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_000ccfd8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ccfac;
        }
    }
L_000ccfdc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_000ccfe0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_000ccfe4:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_000ccfe8:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000ccfec:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000ccff0:;
    {
        cpu->r[7] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000ccff4:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000ccff8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cd0dc;
        }
    }
L_000ccffc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[5], 0x0000009cu, 0, 0);
    }
L_000cd000:;
    {
        cpu->r[8] = cpu->r[7];
    }
L_000cd004:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000cd008:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_000cd00c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cd010:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000cd014:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cd028;
        }
    }
L_000cd018:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000cd01c:;
    {
        cpu->r[14] = 0x000cd024u;
    }
L_000cd020:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000cd024u)) return;
    }
L_000cd024:;
    {
        wr32(cpu->r[6], cpu->r[8]);
    }
L_000cd028:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000007u, 1, 1);
    }
L_000cd02c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_000cd030:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cd004;
        }
    }
L_000cd034:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_000cd038:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_000cd03c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_000cd040:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000cd044:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000cd048:;
    {
        cpu->r[8] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000cd04c:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_000cd050:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = add_flags(cpu, cpu->r[5], 0x00000248u, 0, 0);
        }
    }
L_000cd054:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[9] = cpu->r[8];
        }
    }
L_000cd058:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cd0dc;
        }
    }
L_000cd05c:;
    {
        cpu->r[7] = rd32(cpu->r[6]);
    }
L_000cd060:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_000cd064:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000cd068:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cd098;
        }
    }
L_000cd06c:;
    {
        cpu->r[10] = rd32(cpu->r[7] + + 0x40u);
    }
L_000cd070:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_000cd074:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000cd078:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cd08c;
        }
    }
L_000cd07c:;
    {
        cpu->r[14] = 0x000cd080u; fn_000b2bc8(cpu);
    }
L_000cd080:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000cd084:;
    {
        cpu->r[14] = 0x000cd088u; fn_0018ba20(cpu);
    }
L_000cd088:;
    {
        wr32(cpu->r[7] + + 0x40u, cpu->r[9]);
    }
L_000cd08c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000cd090:;
    {
        cpu->r[14] = 0x000cd094u; fn_0018ba20(cpu);
    }
L_000cd094:;
    {
        wr32(cpu->r[6], cpu->r[9]);
    }
L_000cd098:;
    {
        cpu->r[7] = rd32(cpu->r[6] + - 0x90u);
    }
L_000cd09c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000cd0a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cd0d0;
        }
    }
L_000cd0a4:;
    {
        cpu->r[10] = rd32(cpu->r[7] + + 0x40u);
    }
L_000cd0a8:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_000cd0ac:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000cd0b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cd0c4;
        }
    }
L_000cd0b4:;
    {
        cpu->r[14] = 0x000cd0b8u; fn_000b2bc8(cpu);
    }
L_000cd0b8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000cd0bc:;
    {
        cpu->r[14] = 0x000cd0c0u; fn_0018ba20(cpu);
    }
L_000cd0c0:;
    {
        wr32(cpu->r[7] + + 0x40u, cpu->r[9]);
    }
L_000cd0c4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000cd0c8:;
    {
        cpu->r[14] = 0x000cd0ccu; fn_0018ba20(cpu);
    }
L_000cd0cc:;
    {
        wr32(cpu->r[6] + - 0x90u, cpu->r[9]);
    }
L_000cd0d0:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000007u, 1, 1);
    }
L_000cd0d4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_000cd0d8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cd05c;
        }
    }
L_000cd0dc:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000cd0e0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000198u, 0, 0);
    }
L_000cd0e4:;
    {
        cpu->r[10] = cpu->r[7];
    }
L_000cd0e8:;
    {
        cpu->r[6] = rd32(cpu->r[5]);
    }
L_000cd0ec:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_000cd0f0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000cd0f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cd124;
        }
    }
L_000cd0f8:;
    {
        cpu->r[8] = rd32(cpu->r[6] + + 0x40u);
    }
L_000cd0fc:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_000cd100:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000cd104:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cd118;
        }
    }
L_000cd108:;
    {
        cpu->r[14] = 0x000cd10cu; fn_000b2bc8(cpu);
    }
L_000cd10c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000cd110:;
    {
        cpu->r[14] = 0x000cd114u; fn_0018ba20(cpu);
    }
L_000cd114:;
    {
        wr32(cpu->r[6] + + 0x40u, cpu->r[10]);
    }
L_000cd118:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cd11c:;
    {
        cpu->r[14] = 0x000cd120u; fn_0018ba20(cpu);
    }
L_000cd120:;
    {
        wr32(cpu->r[5], cpu->r[10]);
    }
L_000cd124:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x90u);
    }
L_000cd128:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000cd12c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cd15c;
        }
    }
L_000cd130:;
    {
        cpu->r[8] = rd32(cpu->r[6] + + 0x40u);
    }
L_000cd134:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_000cd138:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000cd13c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cd150;
        }
    }
L_000cd140:;
    {
        cpu->r[14] = 0x000cd144u; fn_000b2bc8(cpu);
    }
L_000cd144:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000cd148:;
    {
        cpu->r[14] = 0x000cd14cu; fn_0018ba20(cpu);
    }
L_000cd14c:;
    {
        wr32(cpu->r[6] + + 0x40u, cpu->r[10]);
    }
L_000cd150:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cd154:;
    {
        cpu->r[14] = 0x000cd158u; fn_0018ba20(cpu);
    }
L_000cd158:;
    {
        wr32(cpu->r[5] + + 0x90u, cpu->r[10]);
    }
L_000cd15c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000008u, 1, 1);
    }
L_000cd160:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_000cd164:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cd0e8;
        }
    }
L_000cd168:;
    {
        cpu->r[6] = 0x00004274u;
    }
L_000cd16c:;
    {
        cpu->r[10] = 0x00008e64u;
    }
L_000cd170:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0006u << 16);
    }
L_000cd174:;
    {
        cpu->r[8] = 0x00008e68u;
    }
L_000cd178:;
    {
        cpu->r[7] = 0x00008e6cu;
    }
L_000cd17c:;
    {
        cpu->r[14] = 0x00008e70u;
    }
L_000cd180:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000cd184:;
    {
        cpu->r[12] = 0x00008dd4u;
    }
L_000cd188:;
    {
        cpu->r[1] = 0x00008dd8u;
    }
L_000cd18c:;
    {
        cpu->r[2] = 0x00008ddcu;
    }
L_000cd190:;
    {
        cpu->r[3] = 0x00008de0u;
    }
L_000cd194:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000cd198:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_000cd19c:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000cd1a0:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x0001u << 16);
    }
L_000cd1a4:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000cd1a8:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000cd1ac:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000cd1b0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cd1b4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000cd1b8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000cd1bc:;
    {
        wr32(cpu->r[4] + cpu->r[10], cpu->r[5]);
    }
L_000cd1c0:;
    {
        wr32(cpu->r[4] + cpu->r[8], cpu->r[5]);
    }
L_000cd1c4:;
    {
        wr32(cpu->r[4] + cpu->r[7], cpu->r[5]);
    }
L_000cd1c8:;
    {
        wr32(cpu->r[4] + cpu->r[14], cpu->r[5]);
    }
L_000cd1cc:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[5]);
    }
L_000cd1d0:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[5]);
    }
L_000cd1d4:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[5]);
    }
L_000cd1d8:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_000cd1dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cd1e8;
        }
    }
L_000cd1e0:;
    {
        cpu->r[14] = 0x000cd1e4u; fn_0018ba60(cpu);
    }
L_000cd1e4:;
    {
        wr32(cpu->r[4] + cpu->r[6], cpu->r[5]);
    }
L_000cd1e8:;
    {
        cpu->r[2] = 0x00004278u;
    }
L_000cd1ec:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000cd1f0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000cd1f4:;
    {
        cpu->r[3] = 0x00004270u;
    }
L_000cd1f8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000cd1fc:;
    {
        cpu->r[14] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000cd200:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_000cd204:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[5], 1, 1);
    }
L_000cd208:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000cd8ac;
        }
    }
L_000cd20c:;
    {
        cpu->r[3] = 0x0000427cu;
    }
L_000cd210:;
    {
        cpu->r[9] = rd32(0x000cd218u + + 0x6ccu);
    }
L_000cd214:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000cd218:;
    {
        cpu->r[11] = rd32(0x000cd220u + + 0x6c8u);
    }
L_000cd21c:;
    {
        cpu->r[10] = rd32(0x000cd224u + + 0x6c8u);
    }
L_000cd220:;
    {
        cpu->r[9] = add_flags(cpu, 0x000cd228u, cpu->r[9], 0, 0);
    }
L_000cd224:;
    {
        cpu->r[11] = add_flags(cpu, 0x000cd22cu, cpu->r[11], 0, 0);
    }
L_000cd228:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cd22c:;
    {
        cpu->r[8] = rd32(0x000cd234u + + 0x6bcu);
    }
L_000cd230:;
    {
        cpu->r[10] = add_flags(cpu, 0x000cd238u, cpu->r[10], 0, 0);
    }
L_000cd234:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000068u, 0, 0);
    }
L_000cd238:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000068u, 0, 0);
    }
L_000cd23c:;
    {
        cpu->r[12] = rd32(cpu->r[7] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000cd240:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000cd244:;
    {
        cpu->r[1] = rd32(0x000cd24cu + + 0x6a8u);
    }
L_000cd248:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[6] = v;
    }
L_000cd24c:;
    {
        cpu->r[2] = rd32(0x000cd254u + + 0x6a4u);
    }
L_000cd250:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000cd254:;
    {
        cpu->r[3] = rd32(0x000cd25cu + + 0x6a0u);
    }
L_000cd258:;
    {
        cpu->r[1] = add_flags(cpu, 0x000cd260u, cpu->r[1], 0, 0);
    }
L_000cd25c:;
    {
        cpu->r[2] = add_flags(cpu, 0x000cd264u, cpu->r[2], 0, 0);
    }
L_000cd260:;
    {
        cpu->r[3] = add_flags(cpu, 0x000cd268u, cpu->r[3], 0, 0);
    }
L_000cd264:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cd2fc;
        }
    }
L_000cd268:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[5], 1, 1);
    }
L_000cd26c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000cd294;
        }
    }
L_000cd270:;
    {
        cpu->r[12] = 0x0000000du;
    }
L_000cd274:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[11]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_000cd278:;
    {
        cpu->r[14] = 0x000cd27cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000cd27c:;
    {
        cpu->r[3] = 0x0000427cu;
    }
L_000cd280:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000cd284:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cd288:;
    {
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_000cd28c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000cd290:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cd2a4;
        }
    }
L_000cd294:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000cd298:;
    {
        cpu->r[3] = rd32(cpu->r[12]);
    }
L_000cd29c:;
    {
        cpu->r[14] = 0x000cd2a4u;
    }
L_000cd2a0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000cd2a4u)) return;
    }
L_000cd2a4:;
    {
        cpu->r[12] = 0x00004278u;
    }
L_000cd2a8:;
    {
        cpu->r[3] = rd32(0x000cd2b0u + + 0x650u);
    }
L_000cd2ac:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0006u << 16);
    }
L_000cd2b0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000cd2b4:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000cd2b8:;
    {
        cpu->r[2] = add_flags(cpu, 0x000cd2c0u, cpu->r[8], 0, 0);
    }
L_000cd2bc:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_000cd2c0:;
    {
        cpu->r[3] = add_flags(cpu, 0x000cd2c8u, cpu->r[3], 0, 0);
    }
L_000cd2c4:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[5], 1, 1);
    }
L_000cd2c8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000cd2d8;
        }
    }
L_000cd2cc:;
    {
        cpu->r[12] = 0x0000000du;
    }
L_000cd2d0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[9]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_000cd2d4:;
    {
        cpu->r[14] = 0x000cd2d8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000cd2d8:;
    {
        cpu->r[2] = 0x0000427cu;
    }
L_000cd2dc:;
    {
        cpu->r[3] = 0x00004278u;
    }
L_000cd2e0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000cd2e4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000cd2e8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000cd2ec:;
    {
        cpu->r[14] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cd2f0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000cd2f4:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_000cd2f8:;
    {
        wr32(cpu->r[2] + cpu->r[6], cpu->r[3]);
    }
L_000cd2fc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000cd300:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[5], 1, 1);
    }
L_000cd304:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000cd23c;
        }
    }
L_000cd308:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000cd30c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cd328;
        }
    }
L_000cd310:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000cd314:;
    {
        cpu->r[14] = 0x000cd318u; fn_0018ba60(cpu);
    }
L_000cd318:;
    {
        cpu->r[3] = 0x0000427cu;
    }
L_000cd31c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000cd320:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000cd324:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000cd328:;
    {
        cpu->r[5] = 0x00008818u;
    }
L_000cd32c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000cd330:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000cd334:;
    {
        cpu->r[2] = 0x00004278u;
    }
L_000cd338:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000cd33c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000cd340:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[6]);
    }
L_000cd344:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_000cd348:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cd360;
        }
    }
L_000cd34c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000cd350:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000cd354:;
    {
        cpu->r[14] = 0x000cd35cu;
    }
L_000cd358:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000cd35cu)) return;
    }
L_000cd35c:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[6]);
    }
L_000cd360:;
    {
        cpu->r[5] = 0x00001c50u;
    }
L_000cd364:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000cd368:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000cd36c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000cd370:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cd38c;
        }
    }
L_000cd374:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cd378:;
    {
        cpu->r[14] = 0x000cd37cu; fn_000b8fc8(cpu);
    }
L_000cd37c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cd380:;
    {
        cpu->r[14] = 0x000cd384u; fn_0018ba20(cpu);
    }
L_000cd384:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000cd388:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000cd38c:;
    {
        cpu->r[5] = 0x00001d04u;
    }
L_000cd390:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000cd394:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000cd398:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cd39c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cd3b8;
        }
    }
L_000cd3a0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000cd3a4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000cd3a8:;
    {
        cpu->r[14] = 0x000cd3b0u;
    }
L_000cd3ac:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000cd3b0u)) return;
    }
L_000cd3b0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000cd3b4:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000cd3b8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_000cd3bc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_000cd3c0:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_000cd3c4:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000cd3c8:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000cd3cc:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000cd3d0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cd3d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cd8a0;
        }
    }
L_000cd3d8:;
    {
        cpu->r[3] = 0x000082a0u;
    }
L_000cd3dc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cd3e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cd3e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cd3e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cd4e0;
        }
    }
L_000cd3ec:;
    {
        cpu->r[6] = 0x0000829cu;
    }
L_000cd3f0:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000cd3f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000cd3f8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cd3fc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000cd8bc;
        }
    }
L_000cd400:;
    {
        cpu->r[3] = 0x000082c0u;
    }
L_000cd404:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000cd408:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cd40c:;
    {
        cpu->r[7] = cpu->r[5];
    }
L_000cd410:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_000cd414:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cd418:;
    {
        cpu->r[3] = rd32(cpu->r[2] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_000cd41c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cd420:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cd43c;
        }
    }
L_000cd424:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000cd428:;
    {
        cpu->r[14] = 0x000cd430u;
    }
L_000cd42c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000cd430u)) return;
    }
L_000cd430:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000cd434:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_000cd438:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[7]);
    }
L_000cd43c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000cd440:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000cd444:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000cd448:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000cd418;
        }
    }
L_000cd44c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000cd450:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cd46c;
        }
    }
L_000cd454:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_000cd458:;
    {
        cpu->r[14] = 0x000cd45cu; fn_0018ba60(cpu);
    }
L_000cd45c:;
    {
        cpu->r[3] = 0x000082c0u;
    }
L_000cd460:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cd464:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000cd468:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000cd46c:;
    {
        cpu->r[7] = 0x000082c4u;
    }
L_000cd470:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000cd474:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000cd478:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000cd47c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cd4d8;
        }
    }
L_000cd480:;
    {
        cpu->r[5] = rd32(cpu->r[0] + - 0x4u);
    }
L_000cd484:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_000cd488:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 4u, &shc), 0, 0);
    }
L_000cd48c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_000cd490:;
    {
        goto L_000cd4b8;
    }
L_000cd494:;
    {
        cpu->r[6] = rd32(cpu->r[5] + - 0x4u);
    }
L_000cd498:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000cd49c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cd4b0;
        }
    }
L_000cd4a0:;
    {
        cpu->r[14] = 0x000cd4a4u; fn_000b2bc8(cpu);
    }
L_000cd4a4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cd4a8:;
    {
        cpu->r[14] = 0x000cd4acu; fn_0018ba20(cpu);
    }
L_000cd4ac:;
    {
        wr32(cpu->r[5] + - 0x4u, cpu->r[8]);
    }
L_000cd4b0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000cd4b4:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000044u, 1, 0);
    }
L_000cd4b8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_000cd4bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cd494;
        }
    }
L_000cd4c0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000008u, 1, 0);
    }
L_000cd4c4:;
    {
        cpu->r[14] = 0x000cd4c8u; fn_0018ba60(cpu);
    }
L_000cd4c8:;
    {
        cpu->r[3] = 0x000082c4u;
    }
L_000cd4cc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cd4d0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000cd4d4:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000cd4d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000cd4dc:;
    {
        cpu->r[14] = 0x000cd4e0u; fn_000e8a4c(cpu);
    }
L_000cd4e0:;
    {
        cpu->r[5] = 0x000043dcu;
    }
L_000cd4e4:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0006u << 16);
    }
L_000cd4e8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000cd4ec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000cd4f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cd500;
        }
    }
L_000cd4f4:;
    {
        cpu->r[14] = 0x000cd4f8u; fn_0018ba20(cpu);
    }
L_000cd4f8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000cd4fc:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000cd500:;
    {
        cpu->r[5] = 0x000043e0u;
    }
L_000cd504:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0006u << 16);
    }
L_000cd508:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000cd50c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000cd510:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cd520;
        }
    }
L_000cd514:;
    {
        cpu->r[14] = 0x000cd518u; fn_0018ba20(cpu);
    }
L_000cd518:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000cd51c:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000cd520:;
    {
        cpu->r[5] = 0x0000a414u;
    }
L_000cd524:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0006u << 16);
    }
L_000cd528:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000cd52c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000cd530:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cd54c;
        }
    }
L_000cd534:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cd538:;
    {
        cpu->r[14] = 0x000cd53cu; fn_0018781c(cpu);
    }
L_000cd53c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cd540:;
    {
        cpu->r[14] = 0x000cd544u; fn_0018ba20(cpu);
    }
L_000cd544:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000cd548:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000cd54c:;
    {
        cpu->r[5] = 0x00008190u;
    }
L_000cd550:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000cd554:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000cd558:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000cd55c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cd578;
        }
    }
L_000cd560:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cd564:;
    {
        cpu->r[14] = 0x000cd568u; fn_000b687c(cpu);
    }
L_000cd568:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cd56c:;
    {
        cpu->r[14] = 0x000cd570u; fn_0018ba20(cpu);
    }
L_000cd570:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000cd574:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000cd578:;
    {
        cpu->r[8] = 0x000081bcu;
    }
L_000cd57c:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_000cd580:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000cd584:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cd588:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[10] = add_flags(cpu, cpu->r[4], 0x00018000u, 0, 0);
        }
    }
L_000cd58c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000cd5d4;
        }
    }
L_000cd590:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[4], 0x00018000u, 0, 0);
    }
L_000cd594:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_000cd598:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[10], 0x00000194u, 0, 0);
    }
L_000cd59c:;
    {
        cpu->r[9] = cpu->r[7];
    }
L_000cd5a0:;
    {
        cpu->r[6] = rd32(cpu->r[5]);
    }
L_000cd5a4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_000cd5a8:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000cd5ac:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cd5b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cd5c4;
        }
    }
L_000cd5b4:;
    {
        cpu->r[14] = 0x000cd5b8u; fn_000b68a4(cpu);
    }
L_000cd5b8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cd5bc:;
    {
        cpu->r[14] = 0x000cd5c0u; fn_0018ba20(cpu);
    }
L_000cd5c0:;
    {
        wr32(cpu->r[5], cpu->r[9]);
    }
L_000cd5c4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
    }
L_000cd5c8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_000cd5cc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_000cd5d0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000cd5a0;
        }
    }
L_000cd5d4:;
    {
        cpu->r[5] = 0x00008c4cu;
    }
L_000cd5d8:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000cd5dc:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000cd5e0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000cd5e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cd600;
        }
    }
L_000cd5e8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cd5ec:;
    {
        cpu->r[14] = 0x000cd5f0u; fn_00159598(cpu);
    }
L_000cd5f0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cd5f4:;
    {
        cpu->r[14] = 0x000cd5f8u; fn_0018ba20(cpu);
    }
L_000cd5f8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000cd5fc:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000cd600:;
    {
        cpu->r[14] = 0x000cd604u; fn_00158d04(cpu);
    }
L_000cd604:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_000cd608:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_000cd60c:;
    {
        cpu->r[6] = 0x00001bc8u;
    }
L_000cd610:;
    {
        cpu->r[5] = 0x0000a638u;
    }
L_000cd614:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0006u << 16);
    }
L_000cd618:;
    {
        cpu->r[7] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000cd61c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000cd620:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_000cd624:;
    {
        cpu->r[0] = rd32(cpu->r[1] + cpu->r[5]);
    }
L_000cd628:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000cd62c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cd648;
        }
    }
L_000cd630:;
    {
        cpu->r[14] = 0x000cd634u; fn_0018ba20(cpu);
    }
L_000cd634:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000cd638:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000cd63c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_000cd640:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_000cd644:;
    {
        wr32(cpu->r[3] + cpu->r[5], cpu->r[2]);
    }
L_000cd648:;
    {
        cpu->r[2] = 0x0000427cu;
    }
L_000cd64c:;
    {
        cpu->r[3] = 0x0000a638u;
    }
L_000cd650:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000cd654:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000cd658:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000cd65c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000cd660:;
    {
        wr32(cpu->r[1] + cpu->r[3], cpu->r[2]);
    }
L_000cd664:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_000cd668:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cd670;
        }
    }
L_000cd66c:;
    {
        cpu->r[14] = 0x000cd670u; fn_0018ba60(cpu);
    }
L_000cd670:;
    {
        cpu->r[3] = 0x00004274u;
    }
L_000cd674:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000cd678:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cd67c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000cd680:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cd688;
        }
    }
L_000cd684:;
    {
        cpu->r[14] = 0x000cd688u; fn_0018ba60(cpu);
    }
L_000cd688:;
    {
        cpu->r[5] = 0x00004204u;
    }
L_000cd68c:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0006u << 16);
    }
L_000cd690:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000cd694:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000cd698:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cd6b4;
        }
    }
L_000cd69c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cd6a0:;
    {
        cpu->r[14] = 0x000cd6a4u; fn_000b2bc8(cpu);
    }
L_000cd6a4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cd6a8:;
    {
        cpu->r[14] = 0x000cd6acu; fn_0018ba20(cpu);
    }
L_000cd6ac:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000cd6b0:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000cd6b4:;
    {
        cpu->r[5] = 0x000041c0u;
    }
L_000cd6b8:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0006u << 16);
    }
L_000cd6bc:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000cd6c0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000cd6c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cd6e0;
        }
    }
L_000cd6c8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cd6cc:;
    {
        cpu->r[14] = 0x000cd6d0u; fn_000b2bc8(cpu);
    }
L_000cd6d0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cd6d4:;
    {
        cpu->r[14] = 0x000cd6d8u; fn_0018ba20(cpu);
    }
L_000cd6d8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000cd6dc:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000cd6e0:;
    {
        cpu->r[5] = 0x0000417cu;
    }
L_000cd6e4:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0006u << 16);
    }
L_000cd6e8:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000cd6ec:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000cd6f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cd70c;
        }
    }
L_000cd6f4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cd6f8:;
    {
        cpu->r[14] = 0x000cd6fcu; fn_000b2bc8(cpu);
    }
L_000cd6fc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cd700:;
    {
        cpu->r[14] = 0x000cd704u; fn_0018ba20(cpu);
    }
L_000cd704:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000cd708:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000cd70c:;
    {
        cpu->r[5] = 0x00004138u;
    }
L_000cd710:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0006u << 16);
    }
L_000cd714:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000cd718:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000cd71c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cd738;
        }
    }
L_000cd720:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cd724:;
    {
        cpu->r[14] = 0x000cd728u; fn_000b2bc8(cpu);
    }
L_000cd728:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cd72c:;
    {
        cpu->r[14] = 0x000cd730u; fn_0018ba20(cpu);
    }
L_000cd730:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000cd734:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000cd738:;
    {
        cpu->r[5] = 0x000040f4u;
    }
L_000cd73c:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0006u << 16);
    }
L_000cd740:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000cd744:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000cd748:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cd764;
        }
    }
L_000cd74c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cd750:;
    {
        cpu->r[14] = 0x000cd754u; fn_000b2bc8(cpu);
    }
L_000cd754:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cd758:;
    {
        cpu->r[14] = 0x000cd75cu; fn_0018ba20(cpu);
    }
L_000cd75c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000cd760:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000cd764:;
    {
        cpu->r[5] = 0x00008e24u;
    }
L_000cd768:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000cd76c:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000cd770:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000cd774:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cd790;
        }
    }
L_000cd778:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cd77c:;
    {
        cpu->r[14] = 0x000cd780u; fn_000b2bc8(cpu);
    }
L_000cd780:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cd784:;
    {
        cpu->r[14] = 0x000cd788u; fn_0018ba20(cpu);
    }
L_000cd788:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000cd78c:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000cd790:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], 0x00018400u, 0, 0);
    }
L_000cd794:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_000cd798:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], 0x000003bcu, 0, 0);
    }
L_000cd79c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[7], 0x000003b4u, 0, 0);
    }
L_000cd7a0:;
    {
        cpu->r[14] = 0x000cd7a4u; fn_00129c74(cpu);
    }
L_000cd7a4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000084u, 0, 0);
    }
L_000cd7a8:;
    {
        cpu->r[6] = rd32(cpu->r[5] + - 0x4u);
    }
L_000cd7ac:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000cd7b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cd7c4;
        }
    }
L_000cd7b4:;
    {
        cpu->r[14] = 0x000cd7b8u; fn_000b2bc8(cpu);
    }
L_000cd7b8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cd7bc:;
    {
        cpu->r[14] = 0x000cd7c0u; fn_0018ba20(cpu);
    }
L_000cd7c0:;
    {
        wr32(cpu->r[5] + - 0x4u, cpu->r[8]);
    }
L_000cd7c4:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000044u, 1, 0);
    }
L_000cd7c8:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[7], 1, 1);
    }
L_000cd7cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cd7a8;
        }
    }
L_000cd7d0:;
    {
        cpu->r[3] = 0x000082b8u;
    }
L_000cd7d4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cd7d8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cd7dc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000cd7e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cd7e8;
        }
    }
L_000cd7e4:;
    {
        cpu->r[14] = 0x000cd7e8u; fn_0018ba60(cpu);
    }
L_000cd7e8:;
    {
        cpu->r[3] = 0x000082b0u;
    }
L_000cd7ec:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cd7f0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cd7f4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000cd7f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cd800;
        }
    }
L_000cd7fc:;
    {
        cpu->r[14] = 0x000cd800u; fn_0018ba60(cpu);
    }
L_000cd800:;
    {
        cpu->r[3] = 0x000082a8u;
    }
L_000cd804:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x000002a4u, 0, 0);
    }
L_000cd808:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cd80c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cd810:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cd814:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cd85c;
        }
    }
L_000cd818:;
    {
        cpu->r[2] = rd32(cpu->r[3] + - 0x4u);
    }
L_000cd81c:;
    {
        cpu->r[5] = 0x00000680u;
    }
L_000cd820:;
    {
        uint32_t v = cpu->r[5] * cpu->r[2] + cpu->r[3]; cpu->r[5] = v;
    }
L_000cd824:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000cd828:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cd854;
        }
    }
L_000cd82c:;
    {
        uint32_t wb_tmp = cpu->r[5] + - 0x680u;
        cpu->r[3] = rd32(cpu->r[5] + - 0x680u);
        cpu->r[5] = wb_tmp;
    }
L_000cd830:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000cd834:;
    {
        cpu->r[14] = 0x000cd83cu;
    }
L_000cd838:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x000cd83cu)) return;
    }
L_000cd83c:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x4u);
    }
L_000cd840:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_000cd844:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cd82c;
        }
    }
L_000cd848:;
    {
        cpu->r[3] = 0x000082a8u;
    }
L_000cd84c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cd850:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cd854:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[5], 0x00000008u, 1, 0);
    }
L_000cd858:;
    {
        cpu->r[14] = 0x000cd85cu; fn_0018ba60(cpu);
    }
L_000cd85c:;
    {
        cpu->r[5] = 0x00001c68u;
    }
L_000cd860:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000cd864:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000cd868:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000cd86c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cd87c;
        }
    }
L_000cd870:;
    {
        cpu->r[14] = 0x000cd874u; fn_0018ba60(cpu);
    }
L_000cd874:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000cd878:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_000cd87c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x0000a100u, 0, 0);
    }
L_000cd880:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000054u, 0, 0);
    }
L_000cd884:;
    {
        cpu->r[14] = 0x000cd888u; fn_0012d9c8(cpu);
    }
L_000cd888:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00009f00u, 0, 0);
    }
L_000cd88c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000c4u, 0, 0);
    }
L_000cd890:;
    {
        cpu->r[14] = 0x000cd894u; fn_00146db0(cpu);
    }
L_000cd894:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000cd898:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_000cd89c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000cd8a0u)) return;
    }
L_000cd8a0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000cd8a4:;
    {
        cpu->r[14] = 0x000cd8a8u; fn_000df604(cpu);
    }
L_000cd8a8:;
    {
        goto L_000cd3d8;
    }
L_000cd8ac:;
    {
        cpu->r[3] = 0x0000427cu;
    }
L_000cd8b0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000cd8b4:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cd8b8:;
    {
        goto L_000cd308;
    }
L_000cd8bc:;
    {
        cpu->r[3] = 0x000082c0u;
    }
L_000cd8c0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cd8c4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cd8c8:;
    {
        goto L_000cd44c;
    }
}

/* _ZN5Scene24UpdateCarMatrices_ScriptEih @ 000cd904 (arm) */
void fn_000cd904(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000cd904:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x00004700u, 0, 0);
    }
L_000cd908:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000002au, 0, 0);
    }
L_000cd90c:;
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
L_000cd910:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_000cd914:;
    {
        cpu->r[5] = rd32(cpu->r[0] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_000cd918:;
    {
        cpu->r[10] = rd32(0x000cd920u + + 0x590u);
    }
L_000cd91c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000acu, 1, 0);
    }
L_000cd920:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000cd924:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_000cd928:;
    {
        cpu->r[10] = add_flags(cpu, 0x000cd930u, cpu->r[10], 0, 0);
    }
L_000cd92c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000cd930:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cdbdc;
        }
    }
L_000cd934:;
    {
        cpu->r[3] = 0x00008cbcu;
    }
L_000cd938:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cd93c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000cd940:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_000cd944:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00008cb8u;
        }
    }
L_000cd948:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = 0x00008cc0u;
        }
    }
L_000cd94c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000cd950:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000cd954:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
        }
    }
L_000cd958:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
        }
    }
L_000cd95c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
        }
    }
L_000cd960:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000cf0u, 0, 0);
    }
L_000cd964:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
        }
    }
L_000cd968:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_000cd96c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000cd970:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_000cd974:;
    {
        cpu->r[4] = rd32(cpu->r[3]);
    }
L_000cd978:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[4] + + 0x3d8u);
    }
L_000cd97c:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[4] + + 0x3dcu);
    }
L_000cd980:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_000cd984:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_000cd988:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_000cd98c:;
    {
        *(uint32_t*)vfp_s(cpu,18) = cpu->r[3];
    }
L_000cd990:;
    {
        *vfp_s(cpu,18) = (float)*(int32_t*)vfp_s(cpu,18);
    }
L_000cd994:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,18), *vfp_s(cpu,15));
    }
L_000cd998:;
    {
        *vfp_s(cpu,17) = (float)*(int32_t*)vfp_s(cpu,17);
    }
L_000cd99c:;
    {
        vfp_sync_flags(cpu);
    }
L_000cd9a0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000cd9a4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cdbe8;
        }
    }
L_000cd9a8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000cf0u, 0, 0);
    }
L_000cd9ac:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_000cd9b0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_000cd9b4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,17), *vfp_s(cpu,15));
    }
L_000cd9b8:;
    {
        vfp_sync_flags(cpu);
    }
L_000cd9bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cdc10;
        }
    }
L_000cd9c0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x00000cf0u, 0, 0);
    }
L_000cd9c4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_000cd9c8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_000cd9cc:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,15));
    }
L_000cd9d0:;
    {
        vfp_sync_flags(cpu);
    }
L_000cd9d4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cdc38;
        }
    }
L_000cd9d8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cd9dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cdc44;
        }
    }
L_000cd9e0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000cd9e4:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000cd9e8:;
    {
        cpu->r[14] = 0x000cd9f0u;
    }
L_000cd9ec:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000cd9f0u)) return;
    }
L_000cd9f0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x000003d4u, 0, 0);
    }
L_000cd9f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x000003c8u, 0, 0);
    }
L_000cd9f8:;
    {
        uint32_t base = cpu->r[2];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_000cd9fc:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_000cda00:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000cda04:;
    {
        cpu->r[14] = 0x000cda08u; fn_000b5a8c(cpu);
    }
L_000cda08:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[0]);
    }
L_000cda0c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000cda10:;
    {
        cpu->r[14] = 0x000cda14u; fn_000b5a8c(cpu);
    }
L_000cda14:;
    {
        vfp_vneg(cpu, 17, 17);
    }
L_000cda18:;
    {
        *(int32_t*)vfp_s(cpu,17) = (int32_t)*vfp_s(cpu,17);
    }
L_000cda1c:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[0] + + 0x8u);
    }
L_000cda20:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000cda24:;
    {
        cpu->r[14] = 0x000cda28u; fn_000b5a8c(cpu);
    }
L_000cda28:;
    {
        *(int32_t*)vfp_s(cpu,16) = (int32_t)*vfp_s(cpu,16);
    }
L_000cda2c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x3d4u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000cda30:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x3d8u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000cda34:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_000cda38:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000cda3c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000cda40:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x3dcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000cda44:;
    {
        cpu->r[14] = 0x000cda48u; fn_000b5aa4(cpu);
    }
L_000cda48:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000cda4c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cdc68;
        }
    }
L_000cda50:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_000cda54:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_000cda58:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000cda5c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000068u, 0, 0);
    }
L_000cda60:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_000cda64:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[11]);
    }
L_000cda68:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[11]);
    }
L_000cda6c:;
    {
        wr32(cpu->r[13] + + 0x70u, cpu->r[11]);
    }
L_000cda70:;
    {
        cpu->r[14] = 0x000cda74u; fn_0015365c(cpu);
    }
L_000cda74:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_000cda78:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_000cda7c:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_000cda80:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000cda84:;
    {
        cpu->r[14] = 0x000cda88u; fn_0015364c(cpu);
    }
L_000cda88:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000cda8c:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[9]);
    }
L_000cda90:;
    {
        cpu->r[14] = 0x000cda94u; fn_001535e0(cpu);
    }
L_000cda94:;
    {
        cpu->r[1] = 0x00000fdbu;
    }
L_000cda98:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000cda9c:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x3fc9u << 16);
    }
L_000cdaa0:;
    {
        cpu->r[14] = 0x000cdaa4u; fn_0015429c(cpu);
    }
L_000cdaa4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_000cdaa8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000cdaac:;
    {
        cpu->r[14] = 0x000cdab0u; fn_00153478(cpu);
    }
L_000cdab0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000cdab4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x68u);
    }
L_000cdab8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x6cu);
    }
L_000cdabc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x70u);
    }
L_000cdac0:;
    {
        cpu->r[14] = 0x000cdac4u; fn_0015364c(cpu);
    }
L_000cdac4:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x64u);
    }
L_000cdac8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000cdacc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cdae4;
        }
    }
L_000cdad0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000cdad4:;
    {
        cpu->r[14] = 0x000cdad8u; fn_000b2bc8(cpu);
    }
L_000cdad8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000cdadc:;
    {
        cpu->r[14] = 0x000cdae0u; fn_0018ba20(cpu);
    }
L_000cdae0:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[9]);
    }
L_000cdae4:;
    {
        cpu->r[3] = 0x00008dd8u;
    }
L_000cdae8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000cdaec:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cdaf0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000cdaf4:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_000cdaf8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = 0x00008ddcu;
        }
    }
L_000cdafc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00008dd4u;
        }
    }
L_000cdb00:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000cdb04:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000cdb08:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 0);
        }
    }
L_000cdb0c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[2]);
        }
    }
L_000cdb10:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
        }
    }
L_000cdb14:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000cdb18:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[7], 2, 2u, &shc), 0, 0);
        }
    }
L_000cdb1c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000cdb20:;
    {
        cpu->r[14] = 0x000cdb24u; fn_00153624(cpu);
    }
L_000cdb24:;
    {
        cpu->r[3] = 0x00008e68u;
    }
L_000cdb28:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cdb2c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000cdb30:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000cdb34:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_000cdb38:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = 0x00008e6cu;
        }
    }
L_000cdb3c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00008e64u;
        }
    }
L_000cdb40:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000cdb44:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 0);
        }
    }
L_000cdb48:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
        }
    }
L_000cdb4c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = add_flags(cpu, cpu->r[3], shifter(cpu->r[7], 2, 2u, &shc), 0, 0);
        }
    }
L_000cdb50:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000cdb54:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[2]);
        }
    }
L_000cdb58:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[7] = add_flags(cpu, cpu->r[2], shifter(cpu->r[7], 2, 2u, &shc), 0, 0);
        }
    }
L_000cdb5c:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_000cdb60:;
    {
        cpu->r[14] = 0x000cdb64u; fn_00153624(cpu);
    }
L_000cdb64:;
    {
        cpu->r[3] = rd32(0x000cdb6cu + + 0x348u);
    }
L_000cdb68:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[3]);
    }
L_000cdb6c:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000cdb70:;
    {
        cpu->r[3] = 0x00008508u;
    }
L_000cdb74:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000cdb78:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cdb7c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cdbdc;
        }
    }
L_000cdb80:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_000cdb84:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[12];
    }
L_000cdb88:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000cdb8c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_000cdb90:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_000cdb94:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_000cdb98:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000400u, 0, 0);
    }
L_000cdb9c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x000003f8u, 0, 0);
    }
L_000cdba0:;
    {
        wr32(cpu->r[4] + + 0x420u, cpu->r[0]);
    }
L_000cdba4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_000cdba8:;
    {
        wr32(cpu->r[4] + + 0x424u, cpu->r[1]);
    }
L_000cdbac:;
    {
        wr32(cpu->r[4] + + 0x41cu, cpu->r[12]);
    }
L_000cdbb0:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000cdbb4:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000cdbb8:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[1];
    }
L_000cdbbc:;
    {
        wr32(cpu->r[4] + + 0x404u, cpu->r[0]);
    }
L_000cdbc0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000cdbc4:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000cdbc8:;
    {
        wr32(cpu->r[4] + + 0x408u, cpu->r[0]);
    }
L_000cdbcc:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000cdbd0:;
    {
        wr32(cpu->r[4] + + 0x40cu, cpu->r[1]);
    }
L_000cdbd4:;
    {
        uint32_t base = cpu->r[2];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_000cdbd8:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_000cdbdc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000acu, 0, 0);
    }
L_000cdbe0:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_000cdbe4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000cdbe8u)) return;
    }
L_000cdbe8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000cdbec:;
    {
        cpu->r[14] = 0x000cdbf0u; fn_000b5a8c(cpu);
    }
L_000cdbf0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000cf0u, 0, 0);
    }
L_000cdbf4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_000cdbf8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_000cdbfc:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,17), *vfp_s(cpu,15));
    }
L_000cdc00:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000cdc04:;
    {
        vfp_sync_flags(cpu);
    }
L_000cdc08:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_000cdc0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cd9c0;
        }
    }
L_000cdc10:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000cdc14:;
    {
        cpu->r[14] = 0x000cdc18u; fn_000b5a8c(cpu);
    }
L_000cdc18:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x00000cf0u, 0, 0);
    }
L_000cdc1c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_000cdc20:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_000cdc24:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,15));
    }
L_000cdc28:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000cdc2c:;
    {
        vfp_sync_flags(cpu);
    }
L_000cdc30:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_000cdc34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cd9d8;
        }
    }
L_000cdc38:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000cdc3c:;
    {
        cpu->r[14] = 0x000cdc40u; fn_000b5a8c(cpu);
    }
L_000cdc40:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000cdc44:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000cdc48:;
    {
        cpu->r[14] = 0x000cdc4cu; fn_000b5ba0(cpu);
    }
L_000cdc4c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,16);
    }
L_000cdc50:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,17);
    }
L_000cdc54:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,18);
    }
L_000cdc58:;
    {
        wr32(cpu->r[5] + + 0xcfcu, cpu->r[3]);
    }
L_000cdc5c:;
    {
        wr32(cpu->r[5] + + 0xcf8u, cpu->r[0]);
    }
L_000cdc60:;
    {
        wr32(cpu->r[5] + + 0xcf4u, cpu->r[1]);
    }
L_000cdc64:;
    {
        goto L_000cd9e0;
    }
L_000cdc68:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x000000a0u, 0, 0);
    }
L_000cdc6c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000009cu, 0, 0);
    }
L_000cdc70:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x000000a4u, 0, 0);
    }
L_000cdc74:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_000cdc78:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_000cdc7c:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_000cdc80:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_000cdc84:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[6], 0x00064000u, 0, 0);
    }
L_000cdc88:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_000cdc8c:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x000cdc94u + + 0x20cu);
    }
L_000cdc90:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_000cdc94:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000cdc98:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_000cdc9c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000cdca0:;
    {
        wr32(cpu->r[13] + + 0xa4u, cpu->r[9]);
    }
L_000cdca4:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x000cdcacu + + 0x1f8u);
    }
L_000cdca8:;
    {
        wr32(cpu->r[13] + + 0xa0u, cpu->r[9]);
    }
L_000cdcac:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_000cdcb0:;
    {
        wr32(cpu->r[13] + + 0x9cu, cpu->r[9]);
    }
L_000cdcb4:;
    {
        cpu->r[14] = 0x000cdcbcu;
    }
L_000cdcb8:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x54u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000cdcbcu)) return;
    }
L_000cdcbc:;
    {
        wr32(cpu->r[4] + + 0x380u, cpu->r[9]);
    }
L_000cdcc0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000cdcc4:;
    {
        cpu->r[14] = 0x000cdcc8u; fn_000b5a8c(cpu);
    }
L_000cdcc8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[11], 0x000000b4u, 0, 0);
    }
L_000cdccc:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_000cdcd0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x000000f8u, 0, 0);
    }
L_000cdcd4:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000cdcd8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000cdcdc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_000cdce0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x94u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000cdce4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_000cdce8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000cdcec:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_000cdcf0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x90u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000cdcf4:;
    {
        cpu->r[14] = 0x000cdcf8u; fn_000b5a94(cpu);
    }
L_000cdcf8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000080u, 0, 0);
    }
L_000cdcfc:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000cdd00:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000008cu, 0, 0);
    }
L_000cdd04:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_000cdd08:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x88u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000cdd0c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_000cdd10:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x80u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000cdd14:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_000cdd18:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x84u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000cdd1c:;
    {
        cpu->r[14] = 0x000cdd20u; fn_00152db0(cpu);
    }
L_000cdd20:;
    {
        *(uint32_t*)vfp_s(cpu,18) = cpu->r[0];
    }
L_000cdd24:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_000cdd28:;
    {
        cpu->r[14] = 0x000cdd2cu; fn_00153600(cpu);
    }
L_000cdd2c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0xa4u);
    }
L_000cdd30:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000cdd34:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_000cdd38:;
    {
        vfp_vmul(cpu, 15, 15, 16);
    }
L_000cdd3c:;
    {
        vfp_vmul(cpu, 13, 15, 17);
    }
L_000cdd40:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000cdd44:;
    {
        cpu->r[14] = 0x000cdd48u; fn_00154734(cpu);
    }
L_000cdd48:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0xa0u);
    }
L_000cdd4c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000cdd50:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_000cdd54:;
    {
        vfp_vmul(cpu, 15, 15, 16);
    }
L_000cdd58:;
    {
        vfp_vmul(cpu, 14, 15, 17);
    }
L_000cdd5c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000cdd60:;
    {
        cpu->r[14] = 0x000cdd64u; fn_00154514(cpu);
    }
L_000cdd64:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000cdd6cu + + 0x13cu);
    }
L_000cdd68:;
    {
        vfp_vmul(cpu, 15, 18, 15);
    }
L_000cdd6c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_000cdd70:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000cdd74:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000cdd78:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_000cdd7c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000074u, 0, 0);
    }
L_000cdd80:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[9]);
    }
L_000cdd84:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[9]);
    }
L_000cdd88:;
    {
        vfp_vdiv(cpu, 15, 15, 16);
    }
L_000cdd8c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000cdd90:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x88u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000cdd94:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000cdd98:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[9]);
    }
L_000cdd9c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000098u, 0, 0);
    }
L_000cdda0:;
    {
        wr32(cpu->r[13] + + 0xa4u, cpu->r[9]);
    }
L_000cdda4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000cdda8:;
    {
        wr32(cpu->r[13] + + 0xa0u, cpu->r[9]);
    }
L_000cddac:;
    {
        wr32(cpu->r[13] + + 0x9cu, cpu->r[9]);
    }
L_000cddb0:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[9]);
    }
L_000cddb4:;
    {
        cpu->r[14] = 0x000cddb8u; fn_0015e4f4(cpu);
    }
L_000cddb8:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000cddbc:;
    {
        cpu->r[14] = 0x000cddc0u; fn_00153600(cpu);
    }
L_000cddc0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0xa0u);
    }
L_000cddc4:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000cddc8:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000cddcc:;
    {
        vfp_vmul(cpu, 15, 15, 16);
    }
L_000cddd0:;
    {
        vfp_vmul(cpu, 13, 15, 17);
    }
L_000cddd4:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000cddd8:;
    {
        cpu->r[14] = 0x000cdddcu; fn_00154350(cpu);
    }
L_000cdddc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xa4u);
    }
L_000cdde0:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000cdde4:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_000cdde8:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_000cddec:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000cddf0:;
    {
        vfp_vmul(cpu, 15, 15, 16);
    }
L_000cddf4:;
    {
        vfp_vmul(cpu, 14, 15, 17);
    }
L_000cddf8:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000cddfc:;
    {
        cpu->r[14] = 0x000cde00u; fn_00154734(cpu);
    }
L_000cde00:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x9cu);
    }
L_000cde04:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000cde08:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000cde0c:;
    {
        vfp_vmul(cpu, 15, 15, 16);
    }
L_000cde10:;
    {
        vfp_vmul(cpu, 13, 15, 17);
    }
L_000cde14:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000cde18:;
    {
        cpu->r[14] = 0x000cde1cu; fn_00154514(cpu);
    }
L_000cde1c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000cde20:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_000cde24:;
    {
        cpu->r[14] = 0x000cde28u; fn_00153478(cpu);
    }
L_000cde28:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000cde2c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000068u, 0, 0);
    }
L_000cde30:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000cde38u + + 0x74u);
    }
L_000cde34:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x70u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000cde38:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x68u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000cde3c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x6cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000cde40:;
    {
        cpu->r[14] = 0x000cde44u; fn_0015365c(cpu);
    }
L_000cde44:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x78u);
    }
L_000cde48:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000cde4c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x70u);
    }
L_000cde50:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000cde54:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x68u);
    }
L_000cde58:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x6cu);
    }
L_000cde5c:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_000cde60:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000cde64:;
    {
        cpu->r[14] = 0x000cde68u; fn_0015364c(cpu);
    }
L_000cde68:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000040u, 0, 0);
    }
L_000cde6c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[11]);
    }
L_000cde70:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000cde74:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[11] + + 0x4u);
    }
L_000cde78:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000cde7c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[11] + + 0x8u);
    }
L_000cde80:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000cde84:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[11] + + 0xcu);
    }
L_000cde88:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000cde8c:;
    {
        uint32_t wb_tmp = cpu->r[5] + + 0x10u;
        wr32(cpu->r[5] + + 0x10u, cpu->r[0]);
        cpu->r[5] = wb_tmp;
    }
L_000cde90:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_000cde94:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000010u, 0, 0);
    }
L_000cde98:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cde6c;
        }
    }
L_000cde9c:;
    {
        goto L_000cdae4;
    }
}

/* _ZN5Scene18UpdateCarsMatricesEh @ 000cdeb8 (arm) */
void fn_000cdeb8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000cdeb8:;
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
L_000cdebc:;
    {
        cpu->r[9] = 0x00008cbcu;
    }
L_000cdec0:;
    {
        cpu->r[7] = 0x00008cc4u;
    }
L_000cdec4:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0001u << 16);
    }
L_000cdec8:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000cdecc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000cded0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[9]);
    }
L_000cded4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000cded8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_000cdedc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_000cdee0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000cdee4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000cdee8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000cdfc8;
        }
    }
L_000cdeec:;
    {
        cpu->r[10] = 0x00008cb8u;
    }
L_000cdef0:;
    {
        cpu->r[8] = 0x00008cc0u;
    }
L_000cdef4:;
    {
        cpu->r[6] = 0x00008818u;
    }
L_000cdef8:;
    {
        cpu->r[11] = 0x000081c0u;
    }
L_000cdefc:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000cdf00:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_000cdf04:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000cdf08:;
    {
        cpu->r[11] = (cpu->r[11] & 0xffffu) | (0x0001u << 16);
    }
L_000cdf0c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000cdf10:;
    {
        goto L_000cdf48;
    }
L_000cdf14:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x5a0u);
    }
L_000cdf18:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cdf1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cdfa0;
        }
    }
L_000cdf20:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000cdf24:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000cdf28:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_000cdf2c:;
    {
        cpu->r[14] = 0x000cdf30u; fn_000cd904(cpu);
    }
L_000cdf30:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_000cdf34:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000cdf38:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000cdf3c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000cdf40:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_000cdf44:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000cdfc8;
        }
    }
L_000cdf48:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_000cdf4c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 0);
        }
    }
L_000cdf50:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[10]);
        }
    }
L_000cdf54:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[8]);
        }
    }
L_000cdf58:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
        }
    }
L_000cdf5c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_000cdf60:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000cdf64:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cdf68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cdf30;
        }
    }
L_000cdf6c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000cdf70:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0xf0u);
    }
L_000cdf74:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000cdf78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cdf14;
        }
    }
L_000cdf7c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_000cdf80:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000cdf84:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cdf30;
        }
    }
L_000cdf88:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0x50u);
    }
L_000cdf8c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000cdf90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cdf30;
        }
    }
L_000cdf94:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x5a0u);
    }
L_000cdf98:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cdf9c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cdf20;
        }
    }
L_000cdfa0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000cdfa4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_000cdfa8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000cdfac:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000cdfb0:;
    {
        cpu->r[14] = 0x000cdfb4u; fn_000c9dc0(cpu);
    }
L_000cdfb4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_000cdfb8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000cdfbc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000cdfc0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_000cdfc4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000cdf48;
        }
    }
L_000cdfc8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000cdfcc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000cdfd0u)) return;
    }
}

/* _ZN5Scene27UpdateAnimatedObjectsSoundsEv @ 000cdfd0 (arm) */
void fn_000cdfd0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000cdfd0:;
    {
        cpu->r[3] = 0x00008c70u;
    }
L_000cdfd4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000cdfd8:;
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
L_000cdfdc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000cdfe4u + + 0x1ecu);
    }
L_000cdfe0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cdfe4:;
    {
        cpu->r[13] -= 24u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
        wr64(cpu->r[13] + 16u, *(uint64_t*)vfp_d(cpu, 10));
    }
L_000cdfe8:;
    {
        cpu->r[8] = rd32(0x000cdff0u + + 0x1e8u);
    }
L_000cdfec:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_000cdff0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000cdff4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000cdff8:;
    {
        cpu->r[8] = add_flags(cpu, 0x000ce000u, cpu->r[8], 0, 0);
    }
L_000cdffc:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000ce000:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_000ce004:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_000ce008:;
    {
        sub_flags(cpu, cpu->r[2], 0x000002ecu, 1, 1);
    }
L_000ce00c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cdffc;
        }
    }
L_000ce010:;
    {
        cpu->r[3] = rd32(0x000ce018u + + 0x1c4u);
    }
L_000ce014:;
    {
        cpu->r[10] = 0x00004270u;
    }
L_000ce018:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0006u << 16);
    }
L_000ce01c:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000ce020:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_000ce024:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000ce028:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ce02c:;
    {
        cpu->r[3] = 0x00001314u;
    }
L_000ce030:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000ce034:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[3] + + 0xc0u);
    }
L_000ce038:;
    {
        *vfp_s(cpu, 19) = *(float*)G(cpu->r[3] + + 0x48u);
    }
L_000ce03c:;
    {
        *vfp_s(cpu, 18) = *(float*)G(cpu->r[3] + + 0x84u);
    }
L_000ce040:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000ce19c;
        }
    }
L_000ce044:;
    {
        cpu->r[7] = 0x00004274u;
    }
L_000ce048:;
    {
        cpu->r[9] = 0x00008c70u;
    }
L_000ce04c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000ce050:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0006u << 16);
    }
L_000ce054:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0001u << 16);
    }
L_000ce058:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000ce05c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_000ce060:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x000ce068u + + 0x16cu);
    }
L_000ce064:;
    {
        goto L_000ce0a0;
    }
L_000ce068:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000ce06c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000ce070:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000ce074:;
    {
        cpu->r[14] = 0x000ce07cu;
    }
L_000ce078:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000ce07cu)) return;
    }
L_000ce07c:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000ce080:;
    {
        cpu->r[14] = 0x000ce088u;
    }
L_000ce084:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000ce088u)) return;
    }
L_000ce088:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000065u, 1, 1);
    }
L_000ce08c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ce0d8;
        }
    }
L_000ce090:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_000ce094:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000ce098:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000ce09c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000ce19c;
        }
    }
L_000ce0a0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000ce0a4:;
    {
        cpu->r[4] = rd32(cpu->r[3] + shifter(cpu->r[6], 2, 2u, &shc));
    }
L_000ce0a8:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000ce0ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ce090;
        }
    }
L_000ce0b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x17cu);
    }
L_000ce0b4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000ce0b8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000ce0bc:;
    {
        cpu->r[14] = 0x000ce0c4u;
    }
L_000ce0c0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000ce0c4u)) return;
    }
L_000ce0c4:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000ce0c8:;
    {
        cpu->r[14] = 0x000ce0d0u;
    }
L_000ce0cc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000ce0d0u)) return;
    }
L_000ce0d0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000062u, 1, 1);
    }
L_000ce0d4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ce068;
        }
    }
L_000ce0d8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000ce0dc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ce0e0:;
    {
        cpu->r[14] = 0x000ce0e8u;
    }
L_000ce0e4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x20u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000ce0e8u)) return;
    }
L_000ce0e8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ce0ec:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000ce090;
        }
    }
L_000ce0f0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x104u);
    }
L_000ce0f4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_000ce0f8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000ce090;
        }
    }
L_000ce0fc:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[0], 0x00000040u, 0, 0);
    }
L_000ce100:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[11], 2, 2u, &shc), 0, 0);
    }
L_000ce104:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000ce108:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_000ce10c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ce090;
        }
    }
L_000ce110:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000ce114:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_000ce118:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000ce11c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000ce120:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000ce124:;
    {
        cpu->r[14] = 0x000ce128u; fn_000b5cc4(cpu);
    }
L_000ce128:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x1cu);
    }
L_000ce12c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), 0.0f);
    }
L_000ce130:;
    {
        vfp_sync_flags(cpu);
    }
L_000ce134:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ce4f4;
        }
    }
L_000ce138:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x20u);
    }
L_000ce13c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_000ce140:;
    {
        vfp_sync_flags(cpu);
    }
L_000ce144:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x24u);
        }
    }
L_000ce148:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ce4e0;
        }
    }
L_000ce14c:;
    {
        vfp_vsub(cpu, 15, 18, 15);
    }
L_000ce150:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[11], 2, 2u, &shc), 0, 0);
    }
L_000ce154:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_000ce158:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000ce15c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x8u);
    }
L_000ce160:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000ce164:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[1]);
    }
L_000ce168:;
    {
        vfp_vmul(cpu, 15, 15, 15);
    }
L_000ce16c:;
    {
        vfp_vsub(cpu, 14, 19, 14);
    }
L_000ce170:;
    {
        vfp_vmla(cpu, 15, 14, 14);
    }
L_000ce174:;
    {
        vfp_vsub(cpu, 14, 17, 13);
    }
L_000ce178:;
    {
        vfp_vmla(cpu, 15, 14, 14);
    }
L_000ce17c:;
    {
        vfp_vsqrt(cpu, 15, 15);
    }
L_000ce180:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,12));
    }
L_000ce184:;
    {
        vfp_sync_flags(cpu);
    }
L_000ce188:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
        }
    }
L_000ce18c:;
    {
        if (cond_test(cpu, 5)) {
        wr32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[1]);
        }
    }
L_000ce190:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_000ce194:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000ce198:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000ce0a0;
        }
    }
L_000ce19c:;
    {
        cpu->r[7] = 0x00001c70u;
    }
L_000ce1a0:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000ce1a4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000ce1a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ce1ac:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000ce328;
        }
    }
L_000ce1b0:;
    {
        cpu->r[6] = 0x00001c68u;
    }
L_000ce1b4:;
    {
        cpu->r[9] = 0x00008c70u;
    }
L_000ce1b8:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000ce1bc:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0001u << 16);
    }
L_000ce1c0:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000ce1c4:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000ce1c8:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x000ce1d0u + + 0x4u);
    }
L_000ce1cc:;
    {
        goto L_000ce238;
    }
L_000ce1fc:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x17cu);
    }
L_000ce200:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_000ce204:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000ce208:;
    {
        cpu->r[14] = 0x000ce210u;
    }
L_000ce20c:;
    {
        uint32_t t = rd32(cpu->r[2] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000ce210u)) return;
    }
L_000ce210:;
    {
        cpu->r[2] = rd32(cpu->r[0]);
    }
L_000ce214:;
    {
        cpu->r[14] = 0x000ce21cu;
    }
L_000ce218:;
    {
        uint32_t t = rd32(cpu->r[2] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000ce21cu)) return;
    }
L_000ce21c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000ce220:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000065u, 1, 1);
    }
L_000ce224:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ce278;
        }
    }
L_000ce228:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000ce22c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000ce230:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_000ce234:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000ce328;
        }
    }
L_000ce238:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000ce23c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_000ce240:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ce244:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ce228;
        }
    }
L_000ce248:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x17cu);
    }
L_000ce24c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000ce250:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_000ce254:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000ce258:;
    {
        cpu->r[14] = 0x000ce260u;
    }
L_000ce25c:;
    {
        uint32_t t = rd32(cpu->r[2] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000ce260u)) return;
    }
L_000ce260:;
    {
        cpu->r[2] = rd32(cpu->r[0]);
    }
L_000ce264:;
    {
        cpu->r[14] = 0x000ce26cu;
    }
L_000ce268:;
    {
        uint32_t t = rd32(cpu->r[2] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000ce26cu)) return;
    }
L_000ce26c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000ce270:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000062u, 1, 1);
    }
L_000ce274:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ce1fc;
        }
    }
L_000ce278:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000ce27c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000ce280:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000ce284:;
    {
        cpu->r[14] = 0x000ce28cu;
    }
L_000ce288:;
    {
        uint32_t t = rd32(cpu->r[2] + + 0x20u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000ce28cu)) return;
    }
L_000ce28c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000ce290:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ce294:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000ce228;
        }
    }
L_000ce298:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x104u);
    }
L_000ce29c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_000ce2a0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000ce2ac;
        }
    }
L_000ce2a4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000ce2a8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000ce2ac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_000ce2b0:;
    {
        cpu->r[10] = rd32(cpu->r[0] + + 0x108u);
    }
L_000ce2b4:;
    {
        add_flags(cpu, cpu->r[10], 0x00000001u, 0, 1);
    }
L_000ce2b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ce228;
        }
    }
L_000ce2bc:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_000ce2c0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000ce2c4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000ce2c8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000ce2cc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000ce2d0:;
    {
        cpu->r[14] = 0x000ce2d4u; fn_000b5cc4(cpu);
    }
L_000ce2d4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x20u);
    }
L_000ce2d8:;
    {
        vfp_vsub(cpu, 15, 18, 15);
    }
L_000ce2dc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x1cu);
    }
L_000ce2e0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_000ce2e4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000ce2e8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[10], 2, 2u, &shc), 0, 0);
    }
L_000ce2ec:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[2]);
    }
L_000ce2f0:;
    {
        vfp_vmul(cpu, 15, 15, 15);
    }
L_000ce2f4:;
    {
        vfp_vsub(cpu, 14, 19, 14);
    }
L_000ce2f8:;
    {
        vfp_vmla(cpu, 15, 14, 14);
    }
L_000ce2fc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x24u);
    }
L_000ce300:;
    {
        vfp_vsub(cpu, 14, 17, 14);
    }
L_000ce304:;
    {
        vfp_vmla(cpu, 15, 14, 14);
    }
L_000ce308:;
    {
        vfp_vsqrt(cpu, 15, 15);
    }
L_000ce30c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,13));
    }
L_000ce310:;
    {
        vfp_sync_flags(cpu);
    }
L_000ce314:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
        }
    }
L_000ce318:;
    {
        if (cond_test(cpu, 5)) {
        wr32(cpu->r[3] + shifter(cpu->r[10], 2, 2u, &shc), cpu->r[1]);
        }
    }
L_000ce31c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000ce320:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_000ce324:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000ce238;
        }
    }
L_000ce328:;
    {
        cpu->r[6] = 0x00008c70u;
    }
L_000ce32c:;
    {
        cpu->r[7] = 0x00008c6cu;
    }
L_000ce330:;
    {
        cpu->r[2] = rd32(0x000ce338u + - 0x158u);
    }
L_000ce334:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000ce338:;
    {
        cpu->r[3] = rd32(0x000ce340u + - 0x15cu);
    }
L_000ce33c:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000ce340:;
    {
        cpu->r[11] = rd32(0x000ce348u + - 0x160u);
    }
L_000ce344:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000ce348:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x000ce350u + - 0x164u);
    }
L_000ce34c:;
    {
        *vfp_s(cpu, 19) = *(float*)G(0x000ce354u + - 0x164u);
    }
L_000ce350:;
    {
        *vfp_s(cpu, 20) = *(float*)G(0x000ce358u + - 0x160u);
    }
L_000ce354:;
    {
        *vfp_s(cpu, 18) = *(float*)G(0x000ce35cu + - 0x168u);
    }
L_000ce358:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_000ce35c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_000ce360:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000ce364:;
    {
        sub_flags(cpu, cpu->r[4], 0x000000bbu, 1, 1);
    }
L_000ce368:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ce3ec;
        }
    }
L_000ce36c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000091u, 1, 1);
    }
L_000ce370:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000ce360;
        }
    }
L_000ce374:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000ce378:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 2u, &shc); cpu->r[10] = v;
    }
L_000ce37c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_000ce380:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_000ce384:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,17));
    }
L_000ce388:;
    {
        vfp_sync_flags(cpu);
    }
L_000ce38c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000ce3f8;
        }
    }
L_000ce390:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000ce394:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[4]);
    }
L_000ce398:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ce39c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ce360;
        }
    }
L_000ce3a0:;
    {
        cpu->r[10] = rd32(cpu->r[8] + cpu->r[11]);
    }
L_000ce3a4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000ce3a8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000ce3ac:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000ce3b0:;
    {
        cpu->r[0] = rd32(cpu->r[10]);
    }
L_000ce3b4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000ce3b8:;
    {
        cpu->r[14] = 0x000ce3bcu; fn_000fd224(cpu);
    }
L_000ce3bc:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_000ce3c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ce3d4;
        }
    }
L_000ce3c4:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_000ce3c8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000ce3cc:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_000ce3d0:;
    {
        cpu->r[14] = 0x000ce3d4u; fn_000fd218(cpu);
    }
L_000ce3d4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000ce3d8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000ce3dc:;
    {
        wr8(cpu->r[3] + cpu->r[4], cpu->r[2]);
    }
L_000ce3e0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000ce3e4:;
    {
        sub_flags(cpu, cpu->r[4], 0x000000bbu, 1, 1);
    }
L_000ce3e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ce36c;
        }
    }
L_000ce3ec:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_000ce3f0:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        *(uint64_t*)vfp_d(cpu, 10) = rd64(cpu->r[13] + 16u);
        cpu->r[13] += 24u;
    }
L_000ce3f4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ce3f8u)) return;
    }
L_000ce3f8:;
    {
        cpu->r[9] = rd32(cpu->r[8] + cpu->r[11]);
    }
L_000ce3fc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000ce400:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000ce404:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000ce408:;
    {
        cpu->r[0] = rd32(cpu->r[9]);
    }
L_000ce40c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_000ce410:;
    {
        cpu->r[14] = 0x000ce414u; fn_000fd224(cpu);
    }
L_000ce414:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_000ce418:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ce4b8;
        }
    }
L_000ce41c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000ce420:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_000ce424:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[10], 0, 0);
    }
L_000ce428:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_000ce42c:;
    {
        vfp_vdiv(cpu, 15, 15, 19);
    }
L_000ce430:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000ce434:;
    {
        cpu->r[9] = rd32(cpu->r[8] + cpu->r[1]);
    }
L_000ce438:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000ce43c:;
    {
        wr8(cpu->r[2] + cpu->r[4], cpu->r[1]);
    }
L_000ce440:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_000ce444:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000ce448:;
    {
        vfp_vadd(cpu, 15, 15, 20);
    }
L_000ce44c:;
    {
        vfp_vmul(cpu, 16, 15, 18);
    }
L_000ce450:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ce490;
        }
    }
L_000ce454:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_000ce458:;
    {
        cpu->r[0] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_000ce45c:;
    {
        cpu->r[14] = 0x000ce460u; fn_00093fc8(cpu);
    }
L_000ce460:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[11]);
    }
L_000ce464:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000ce468:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000ce46c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000ce470:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_000ce474:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000ce478:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_000ce47c:;
    {
        vfp_vmul(cpu, 15, 15, 16);
    }
L_000ce480:;
    {
        vfp_vdiv(cpu, 14, 15, 18);
    }
L_000ce484:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000ce488:;
    {
        cpu->r[14] = 0x000ce48cu; fn_000fd1d0(cpu);
    }
L_000ce48c:;
    {
        goto L_000ce360;
    }
L_000ce490:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000ce494:;
    {
        cpu->r[14] = 0x000ce498u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000ce498:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ce49c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ce454;
        }
    }
L_000ce4a0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_000ce4a4:;
    {
        cpu->r[0] = rd32(cpu->r[8] + cpu->r[2]);
    }
L_000ce4a8:;
    {
        cpu->r[14] = 0x000ce4acu; fn_00094228(cpu);
    }
L_000ce4ac:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000ce4b0:;
    {
        cpu->r[14] = 0x000ce4b4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000ce4b4:;
    {
        goto L_000ce454;
    }
L_000ce4b8:;
    {
        cpu->r[12] = rd32(cpu->r[9]);
    }
L_000ce4bc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000ce4c0:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000ce4c4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_000ce4c8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000ce4cc:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x490u);
    }
L_000ce4d0:;
    {
        wr32(cpu->r[13], cpu->r[0]);
    }
L_000ce4d4:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000ce4d8:;
    {
        cpu->r[14] = 0x000ce4dcu; fn_000fd248(cpu);
    }
L_000ce4dc:;
    {
        goto L_000ce41c;
    }
L_000ce4e0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x24u);
    }
L_000ce4e4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), 0.0f);
    }
L_000ce4e8:;
    {
        vfp_sync_flags(cpu);
    }
L_000ce4ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ce090;
        }
    }
L_000ce4f0:;
    {
        goto L_000ce14c;
    }
L_000ce4f4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x20u);
    }
L_000ce4f8:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x24u);
    }
L_000ce4fc:;
    {
        goto L_000ce14c;
    }
}

/* _ZN5Scene19UpdateWheelPositionEiib @ 000ce500 (arm) */
void fn_000ce500(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ce500:;
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
L_000ce504:;
    {
        cpu->r[6] = rd32(0x000ce50cu + + 0x420u);
    }
L_000ce508:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_000ce50c:;
    {
        cpu->r[3] = rd32(0x000ce514u + + 0x41cu);
    }
L_000ce510:;
    {
        cpu->r[6] = add_flags(cpu, 0x000ce518u, cpu->r[6], 0, 0);
    }
L_000ce514:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_000ce518:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000ce51c:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_000ce520:;
    {
        cpu->r[5] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000ce524:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_000ce528:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000ce52c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ce7e4;
        }
    }
L_000ce530:;
    {
        cpu->r[8] = rd32(0x000ce538u + + 0x3fcu);
    }
L_000ce534:;
    {
        cpu->r[5] = 0x00008c50u;
    }
L_000ce538:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_000ce53c:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000ce540:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_000ce544:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000ce548:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x20u);
    }
L_000ce54c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000ce550:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000ce554:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000ce558:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000ce55c:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x4u);
    }
L_000ce560:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ce704;
        }
    }
L_000ce564:;
    {
        cpu->r[3] = 0x00001c58u;
    }
L_000ce568:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000ce570u + + 0x37cu);
    }
L_000ce56c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000ce570:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000ce578u + + 0x378u);
    }
L_000ce574:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_000ce578:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1]);
    }
L_000ce57c:;
    {
        vfp_vmla(cpu, 15, 13, 14);
    }
L_000ce580:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000ce588u + + 0x36cu);
    }
L_000ce584:;
    {
        vfp_vmul(cpu, 14, 15, 14);
    }
L_000ce588:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000ce590u + + 0x368u);
    }
L_000ce58c:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_000ce590:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000ce594:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000ce598:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_000ce59c:;
    {
        vfp_sync_flags(cpu);
    }
L_000ce5a0:;
    {
        if (cond_test(cpu, 6)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_000ce5a4:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_000ce5a8:;
    {
        if (cond_test(cpu, 5)) {
        goto L_000ce80c;
        }
    }
L_000ce5ac:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000ce5b4u + + 0x348u);
    }
L_000ce5b0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000ce5b4:;
    {
        vfp_sync_flags(cpu);
    }
L_000ce5b8:;
    {
        if (cond_test(cpu, 6)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000ce5bc:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000ce5c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ce5c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ce5e4;
        }
    }
L_000ce5c8:;
    {
        cpu->r[3] = 0x00001c58u;
    }
L_000ce5cc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000ce5d0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000ce5d4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000ce5dcu + + 0x31cu);
    }
L_000ce5d8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000ce5e0u + + 0x320u);
    }
L_000ce5dc:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000ce5e0:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000ce5e4:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_000ce5e8:;
    {
        cpu->r[3] = 0x00001c58u;
    }
L_000ce5ec:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000ce5f0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000ce5f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_000ce5f8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3]);
    }
L_000ce5fc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000ce600:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_000ce604:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000ce608:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000ce60c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000ce610:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_000ce614:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000ce618:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ce824;
        }
    }
L_000ce61c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x000ce624u + + 0x2e0u);
    }
L_000ce620:;
    {
        vfp_vmul(cpu, 13, 15, 13);
    }
L_000ce624:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000ce62cu + + 0x2dcu);
    }
L_000ce628:;
    {
        vfp_vdiv(cpu, 15, 13, 15);
    }
L_000ce62c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x000ce634u + + 0x2c4u);
    }
L_000ce630:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000ce634:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,13));
    }
L_000ce638:;
    {
        cpu->r[5] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000ce63c:;
    {
        vfp_sync_flags(cpu);
    }
L_000ce640:;
    {
        if (cond_test(cpu, 6)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_000ce644:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[12] = 0x00000001u;
        }
    }
L_000ce648:;
    {
        cpu->r[2] = 0x00008188u;
    }
L_000ce64c:;
    {
        cpu->r[1] = 0x0000818cu;
    }
L_000ce650:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000ce654:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000ce658:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x000ce660u + + 0x2acu);
    }
L_000ce65c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[4], 0, 0);
    }
L_000ce660:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[4], 0, 0);
    }
L_000ce664:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[1]);
    }
L_000ce668:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[2]);
    }
L_000ce66c:;
    {
        vfp_vmul(cpu, 12, 12, 13);
    }
L_000ce670:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000ce678u + + 0x28cu);
    }
L_000ce674:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[0] + + 0x354u);
    }
L_000ce678:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x464u);
    }
L_000ce67c:;
    {
        *(uint32_t*)vfp_s(cpu,10) = cpu->r[0];
    }
L_000ce680:;
    {
        cpu->r[3] = 0x0000851fu;
    }
L_000ce684:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000ce688:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x51ebu << 16);
    }
L_000ce68c:;
    {
        vfp_vmul(cpu, 13, 9, 13);
    }
L_000ce690:;
    {
        vfp_vdiv(cpu, 12, 12, 15);
    }
L_000ce694:;
    {
        vfp_vdiv(cpu, 15, 13, 15);
    }
L_000ce698:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,10);
    }
L_000ce69c:;
    {
        vfp_vdiv(cpu, 13, 11, 13);
    }
L_000ce6a0:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000ce6a4:;
    {
        *(int32_t*)vfp_s(cpu,12) = (int32_t)*vfp_s(cpu,12);
    }
L_000ce6a8:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000ce6ac:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,12);
    }
L_000ce6b0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000ce6b4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
    }
L_000ce6b8:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[2];
    }
L_000ce6bc:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000ce6c0:;
    {
        vfp_vmla(cpu, 15, 12, 13);
    }
L_000ce6c4:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000ce6c8:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000ce6cc:;
    {
        uint32_t v = cpu->r[1] * cpu->r[5]; cpu->r[2] = v;
    }
L_000ce6d0:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[2]; cpu->r[1] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_000ce6d4:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 31u, &shc); cpu->r[2] = v;
    }
L_000ce6d8:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 1, 5u, &shc), cpu->r[2], 1, 0);
    }
L_000ce6dc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
        }
    }
L_000ce6e0:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[6] + + 0x588u, cpu->r[3]);
        }
    }
L_000ce6e4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ce6fc;
        }
    }
L_000ce6e8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000ce6f0u + + 0x208u);
    }
L_000ce6ec:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_000ce6f0:;
    {
        vfp_sync_flags(cpu);
    }
L_000ce6f4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = cpu->r[12];
        }
    }
L_000ce6f8:;
    {
        wr32(cpu->r[6] + + 0x588u, cpu->r[3]);
    }
L_000ce6fc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_000ce700:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ce704u)) return;
    }
L_000ce704:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000032u, 1, 0);
    }
L_000ce708:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[2];
    }
L_000ce70c:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000ce710:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000ce718u + + 0x1ecu);
    }
L_000ce714:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000ce71cu + + 0x1f4u);
    }
L_000ce718:;
    {
        vfp_vdiv(cpu, 12, 13, 14);
    }
L_000ce71c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x000ce724u + + 0x1f0u);
    }
L_000ce720:;
    {
        vfp_vmla(cpu, 15, 12, 13);
    }
L_000ce724:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000ce728:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000ce72c:;
    {
        uint32_t v = cpu->r[7] * cpu->r[3]; cpu->r[7] = v;
    }
L_000ce730:;
    {
        uint32_t v = cpu->r[7] ^ shifter(cpu->r[7], 1, 31u, &shc); cpu->r[3] = v;
    }
L_000ce734:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[7], 1, 31u, &shc), 1, 0);
    }
L_000ce738:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ce73c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ce88c;
        }
    }
L_000ce740:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[3];
    }
L_000ce744:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000ce748:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000ce74c:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000ce750:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000ce758u + + 0x1c0u);
    }
L_000ce754:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000ce758:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000ce75c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000ce760:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x000ce768u + + 0x1a0u);
    }
L_000ce764:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
        }
    }
L_000ce768:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,13);
        }
    }
L_000ce76c:;
    {
        cpu->r[14] = 0x000ce770u; fn_0017fbbc(cpu);
    }
L_000ce770:;
    {
        cpu->r[3] = 0x00001c58u;
    }
L_000ce774:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000ce778:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000ce780u + + 0x19cu);
    }
L_000ce77c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_000ce780:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1]);
    }
L_000ce784:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_000ce788:;
    {
        vfp_vsub(cpu, 14, 14, 13);
    }
L_000ce78c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_000ce790:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000ce794:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[1]);
    }
L_000ce798:;
    {
        vfp_sync_flags(cpu);
    }
L_000ce79c:;
    {
        if (cond_test(cpu, 5)) {
        goto L_000ce878;
        }
    }
L_000ce7a0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000ce7a8u + + 0x178u);
    }
L_000ce7a4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_000ce7a8:;
    {
        vfp_sync_flags(cpu);
    }
L_000ce7ac:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000ce8bc;
        }
    }
L_000ce7b0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000ce7b8u + + 0x140u);
    }
L_000ce7b4:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_000ce7b8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000ce7bc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000ce7c0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000ce7c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000ce7c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000ce7cc:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_000ce7d0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_000ce7d4:;
    {
        vfp_sync_flags(cpu);
    }
L_000ce7d8:;
    {
        if (cond_test(cpu, 6)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_000ce7dc:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_000ce7e0:;
    {
        goto L_000ce614;
    }
L_000ce7e4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ce7e8:;
    {
        cpu->r[14] = 0x000ce7ecu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000ce7ec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ce7f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ce530;
        }
    }
L_000ce7f4:;
    {
        cpu->r[8] = rd32(0x000ce7fcu + + 0x138u);
    }
L_000ce7f8:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_000ce7fc:;
    {
        cpu->r[14] = 0x000ce800u; fn_00094228(cpu);
    }
L_000ce800:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ce804:;
    {
        cpu->r[14] = 0x000ce808u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000ce808:;
    {
        goto L_000ce534;
    }
L_000ce80c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000ce814u + + 0x110u);
    }
L_000ce810:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000ce814:;
    {
        vfp_sync_flags(cpu);
    }
L_000ce818:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000ce81c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000ce820:;
    {
        goto L_000ce5c0;
    }
L_000ce824:;
    {
        vfp_vneg(cpu, 15, 15);
    }
L_000ce828:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x000ce830u + + 0xd4u);
    }
L_000ce82c:;
    {
        vfp_vmul(cpu, 13, 15, 13);
    }
L_000ce830:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000ce838u + + 0xd0u);
    }
L_000ce834:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000ce838:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000ce83c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000ce840:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000ce844:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000ce848:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000ce84c:;
    {
        vfp_vdiv(cpu, 15, 13, 15);
    }
L_000ce850:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000ce854:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_000ce858:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000ce85c:;
    {
        cpu->r[5] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000ce860:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000ce868u + + 0x90u);
    }
L_000ce864:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_000ce868:;
    {
        vfp_sync_flags(cpu);
    }
L_000ce86c:;
    {
        if (cond_test(cpu, 6)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_000ce870:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[12] = 0x00000001u;
        }
    }
L_000ce874:;
    {
        goto L_000ce648;
    }
L_000ce878:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000ce87c:;
    {
        *vfp_s(cpu,14) = *vfp_s(cpu,15);
    }
L_000ce880:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000ce884:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000ce88cu + + 0x9cu);
    }
L_000ce888:;
    {
        goto L_000ce828;
    }
L_000ce88c:;
    {
        cpu->r[3] = 0x00001c58u;
    }
L_000ce890:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000ce898u + + 0x60u);
    }
L_000ce894:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000ce898:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000ce89c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_000ce8a0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3]);
    }
L_000ce8a4:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_000ce8a8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_000ce8ac:;
    {
        vfp_sync_flags(cpu);
    }
L_000ce8b0:;
    {
        if (cond_test(cpu, 6)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_000ce8b4:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_000ce8b8:;
    {
        goto L_000ce614;
    }
L_000ce8bc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000ce8c0:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000ce8c4:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[1]);
    }
L_000ce8c8:;
    {
        *vfp_s(cpu,14) = *vfp_s(cpu,15);
    }
L_000ce8cc:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000ce8d0:;
    {
        cpu->r[5] = 0x00000063u;
    }
L_000ce8d4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_000ce8d8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000ce8dc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000ce8e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000ce8e4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_000ce8e8:;
    {
        goto L_000ce648;
    }
}

/* _ZN5Scene14LoadPhysicsMapEi @ 000ce938 (arm) */
void fn_000ce938(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ce938:;
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
L_000ce93c:;
    {
        cpu->r[5] = rd32(0x000ce944u + + 0x3a8u);
    }
L_000ce940:;
    {
        cpu->r[8] = rd32(0x000ce948u + + 0x3a8u);
    }
L_000ce944:;
    {
        cpu->r[11] = cpu->r[1];
    }
L_000ce948:;
    {
        cpu->r[5] = add_flags(cpu, 0x000ce950u, cpu->r[5], 0, 0);
    }
L_000ce94c:;
    {
        cpu->r[1] = 0x00005f60u;
    }
L_000ce950:;
    {
        cpu->r[3] = 0x00008c78u;
    }
L_000ce954:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000ce958:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000ce95c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000ce960:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_000ce964:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000ce968:;
    {
        cpu->r[9] = rd8(cpu->r[2] + cpu->r[1]);
    }
L_000ce96c:;
    {
        cpu->r[1] = 0x00001be4u;
    }
L_000ce970:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_000ce974:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_000ce978:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000ce97c:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[1]);
    }
L_000ce980:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x000063ecu;
        }
    }
L_000ce984:;
    {
        cpu->r[0] = 0x000010e4u;
    }
L_000ce988:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[9] = rd32(cpu->r[2] + cpu->r[3]);
        }
    }
L_000ce98c:;
    {
        cpu->r[14] = 0x000ce990u; fn_0018ba6c(cpu);
    }
L_000ce990:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000ce994:;
    {
        cpu->r[14] = 0x000ce998u; fn_00180364(cpu);
    }
L_000ce998:;
    {
        cpu->r[2] = 0x00001b34u;
    }
L_000ce99c:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000ce9a0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000ce9a4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000ce9a8:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000ce9ac:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[6]);
    }
L_000ce9b0:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000ce9b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cecc0;
        }
    }
L_000ce9b8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12] + + 0x4u);
    }
L_000ce9bc:;
    {
        vfp_vneg(cpu, 15, 15);
    }
L_000ce9c0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[12] + + 0xcu);
    }
L_000ce9c4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[12] + + 0x8u);
    }
L_000ce9c8:;
    {
        cpu->r[3] = 0x00008c78u;
    }
L_000ce9cc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[4], 0x00018c00u, 0, 0);
    }
L_000ce9d0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000ce9d4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000ce9d8:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_s(cpu,13);
    }
L_000ce9dc:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_000ce9e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000ce9e4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[10], 0x0000007cu, 0, 0);
    }
L_000ce9e8:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000ce9ec:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[9]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_000ce9f0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000ce9f4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000ce9f8:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_000ce9fc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000cea00:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000cea04:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000cea08:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000cea0c:;
    {
        cpu->r[14] = 0x000cea10u; fn_001822d4(cpu);
    }
L_000cea10:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000cea14:;
    {
        cpu->r[3] = 0x00008d74u;
    }
L_000cea18:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cea1c:;
    {
        cpu->r[6] = 0x00008c50u;
    }
L_000cea20:;
    {
        cpu->r[12] = 0x00001be8u;
    }
L_000cea24:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000cea28:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_000cea2c:;
    {
        cpu->r[1] = 0x00001be0u;
    }
L_000cea30:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[9]);
    }
L_000cea34:;
    {
        cpu->r[3] = 0x00001be4u;
    }
L_000cea38:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000cea3c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000cea40:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_000cea44:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[12]);
    }
L_000cea48:;
    {
        cpu->r[14] = 0x000cea4cu; fn_00180404(cpu);
    }
L_000cea4c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000cea50:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x41eu);
    }
L_000cea54:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000cea58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ceb88;
        }
    }
L_000cea5c:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000cea60:;
    {
        cpu->r[7] = 0x00008e68u;
    }
L_000cea64:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cea68:;
    {
        cpu->r[1] = 0x00008e70u;
    }
L_000cea6c:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000cea70:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000cea74:;
    {
        cpu->r[9] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cea78:;
    {
        cpu->r[0] = 0x00008e64u;
    }
L_000cea7c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000cea80:;
    {
        cpu->r[6] = 0x00008e6cu;
    }
L_000cea84:;
    {
        cpu->r[12] = 0x00008dd4u;
    }
L_000cea88:;
    {
        cpu->r[14] = 0x00008dd8u;
    }
L_000cea8c:;
    {
        cpu->r[2] = rd32(cpu->r[9] + + 0x4u);
    }
L_000cea90:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000cea94:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_000cea98:;
    {
        cpu->r[1] = 0x00008de0u;
    }
L_000cea9c:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000ceaa0:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000ceaa4:;
    {
        wr32(cpu->r[4] + cpu->r[7], cpu->r[2]);
    }
L_000ceaa8:;
    {
        cpu->r[2] = 0x00008ddcu;
    }
L_000ceaac:;
    {
        cpu->r[7] = rd32(cpu->r[9] + + 0x4u);
    }
L_000ceab0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000ceab4:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x0001u << 16);
    }
L_000ceab8:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000ceabc:;
    {
        wr32(cpu->r[4] + cpu->r[6], cpu->r[3]);
    }
L_000ceac0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[10], 0x00000198u, 0, 0);
    }
L_000ceac4:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_000ceac8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000228u, 0, 0);
    }
L_000ceacc:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_000cead0:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[10]);
    }
L_000cead4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000cead8:;
    {
        wr32(cpu->r[4] + cpu->r[14], cpu->r[7]);
    }
L_000ceadc:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[6]);
    }
L_000ceae0:;
    {
        cpu->r[14] = 0x000ceae4u; fn_000c6f00(cpu);
    }
L_000ceae4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000ceae8:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000ceaec:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000ceaf0:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000ceaf4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ceaf8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cec38;
        }
    }
L_000ceafc:;
    {
        cpu->r[3] = rd32(0x000ceb04u + + 0x1f0u);
    }
L_000ceb00:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000ceb04:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000ceb08:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000ceb0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cec58;
        }
    }
L_000ceb10:;
    {
        cpu->r[7] = rd32(0x000ceb18u + + 0x1e0u);
    }
L_000ceb14:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000ceb18:;
    {
        cpu->r[0] = 0x0000003cu;
    }
L_000ceb1c:;
    {
        cpu->r[5] = 0x00001c90u;
    }
L_000ceb20:;
    {
        cpu->r[6] = 0x00008548u;
    }
L_000ceb24:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000ceb28:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0x14u);
    }
L_000ceb2c:;
    {
        cpu->r[14] = 0x000ceb30u; fn_0018ba6c(cpu);
    }
L_000ceb30:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000ceb34:;
    {
        cpu->r[14] = 0x000ceb38u; fn_000b75d4(cpu);
    }
L_000ceb38:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_000ceb3c:;
    {
        cpu->r[12] = 0x00008c54u;
    }
L_000ceb40:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000ceb44:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000ceb48:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000ceb4c:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_000ceb50:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000ceb54:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000ceb58:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[8]);
    }
L_000ceb5c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_000ceb60:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_000ceb64:;
    {
        cpu->r[14] = 0x000ceb68u; fn_000b7f3c(cpu);
    }
L_000ceb68:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000ceb6c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_000ceb70:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ceb74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cec80;
        }
    }
L_000ceb78:;
    {
        cpu->r[14] = 0x000ceb7cu; fn_00188c70(cpu);
    }
L_000ceb7c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000ceb80:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_000ceb84:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ceb88u)) return;
    }
L_000ceb88:;
    {
        cpu->r[2] = 0x00005f60u;
    }
L_000ceb8c:;
    {
        cpu->r[3] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000ceb90:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000ceb94:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cea5c;
        }
    }
L_000ceb98:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000ceb9c:;
    {
        cpu->r[0] = 0x00008e68u;
    }
L_000ceba0:;
    {
        cpu->r[3] = 0x00008e70u;
    }
L_000ceba4:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000ceba8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cebac:;
    {
        cpu->r[6] = 0x00000007u;
    }
L_000cebb0:;
    {
        cpu->r[7] = rd32(cpu->r[12] + + 0x4u);
    }
L_000cebb4:;
    {
        cpu->r[1] = 0x00008e64u;
    }
L_000cebb8:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[6]);
    }
L_000cebbc:;
    {
        cpu->r[2] = 0x00008e6cu;
    }
L_000cebc0:;
    {
        cpu->r[3] = 0x00008dd4u;
    }
L_000cebc4:;
    {
        cpu->r[14] = 0x00008dd8u;
    }
L_000cebc8:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[7]);
    }
L_000cebcc:;
    {
        cpu->r[0] = 0x00008ddcu;
    }
L_000cebd0:;
    {
        cpu->r[7] = rd32(cpu->r[12] + + 0x4u);
    }
L_000cebd4:;
    {
        cpu->r[12] = 0x00008de0u;
    }
L_000cebd8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000cebdc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cebe0:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000cebe4:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x0001u << 16);
    }
L_000cebe8:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000cebec:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000cebf0:;
    {
        wr32(cpu->r[4] + cpu->r[14], cpu->r[7]);
    }
L_000cebf4:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[10], 0x000001b8u, 0, 0);
    }
L_000cebf8:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[6]);
    }
L_000cebfc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[10], 0x00000228u, 0, 0);
    }
L_000cec00:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[14]);
    }
L_000cec04:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[10], 0x00000248u, 0, 0);
    }
L_000cec08:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[12]);
    }
L_000cec0c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000198u, 0, 0);
    }
L_000cec10:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[0]);
    }
L_000cec14:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000cec18:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[10]);
    }
L_000cec1c:;
    {
        cpu->r[14] = 0x000cec20u; fn_000c6f00(cpu);
    }
L_000cec20:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000cec24:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000cec28:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000cec2c:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000cec30:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cec34:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ceafc;
        }
    }
L_000cec38:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000cec3c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000cec40:;
    {
        cpu->r[14] = 0x000cec44u; fn_000e8b74(cpu);
    }
L_000cec44:;
    {
        cpu->r[3] = rd32(0x000cec4cu + + 0xa8u);
    }
L_000cec48:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000cec4c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000cec50:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000cec54:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ceb10;
        }
    }
L_000cec58:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cec5c:;
    {
        cpu->r[14] = 0x000cec60u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000cec60:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000cec64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ceb10;
        }
    }
L_000cec68:;
    {
        cpu->r[7] = rd32(0x000cec70u + + 0x88u);
    }
L_000cec6c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000cec70:;
    {
        cpu->r[14] = 0x000cec74u; fn_00094228(cpu);
    }
L_000cec74:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cec78:;
    {
        cpu->r[14] = 0x000cec7cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000cec7c:;
    {
        goto L_000ceb14;
    }
L_000cec80:;
    {
        cpu->r[1] = rd32(0x000cec88u + + 0x74u);
    }
L_000cec84:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000cec88:;
    {
        cpu->r[12] = rd32(0x000cec90u + + 0x70u);
    }
L_000cec8c:;
    {
        cpu->r[14] = 0x0000239fu;
    }
L_000cec90:;
    {
        cpu->r[2] = rd32(0x000cec98u + + 0x6cu);
    }
L_000cec94:;
    {
        cpu->r[1] = add_flags(cpu, 0x000cec9cu, cpu->r[1], 0, 0);
    }
L_000cec98:;
    {
        cpu->r[3] = rd32(0x000ceca0u + + 0x68u);
    }
L_000cec9c:;
    {
        cpu->r[12] = add_flags(cpu, 0x000ceca4u, cpu->r[12], 0, 0);
    }
L_000ceca0:;
    {
        cpu->r[2] = add_flags(cpu, 0x000ceca8u, cpu->r[2], 0, 0);
    }
L_000ceca4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000288u, 0, 0);
    }
L_000ceca8:;
    {
        cpu->r[3] = add_flags(cpu, 0x000cecb0u, cpu->r[3], 0, 0);
    }
L_000cecac:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_000cecb0:;
    {
        cpu->r[14] = 0x000cecb4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000cecb4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000cecb8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_000cecbc:;
    {
        goto L_000ceb78;
    }
L_000cecc0:;
    {
        cpu->r[3] = 0x00008c78u;
    }
L_000cecc4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[4], 0x00018c00u, 0, 0);
    }
L_000cecc8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000ceccc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000cecd0:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_000cecd4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[10], 0x0000007cu, 0, 0);
    }
L_000cecd8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cecdc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_000cece0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[9]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_000cece4:;
    {
        cpu->r[14] = 0x000cece8u; fn_001822d4(cpu);
    }
L_000cece8:;
    {
        goto L_000cea10;
    }
}

/* _ZN5Scene9LoadSceneEi @ 000ced0c (arm) */
void fn_000ced0c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000ced0c:;
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
L_000ced10:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_000ced14:;
    {
        cpu->r[4] = rd32(0x000ced1cu + + 0x39cu);
    }
L_000ced18:;
    {
        cpu->r[7] = rd32(0x000ced20u + + 0x39cu);
    }
L_000ced1c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_000ced20:;
    {
        cpu->r[4] = add_flags(cpu, 0x000ced28u, cpu->r[4], 0, 0);
    }
L_000ced24:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000ced28:;
    {
        cpu->r[10] = cpu->r[1];
    }
L_000ced2c:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000ced30:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000ced34:;
    {
        cpu->r[14] = 0x000ced38u; fn_00096b5c(cpu);
    }
L_000ced38:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000ced3c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x438u);
    }
L_000ced40:;
    {
        cpu->r[3] = 0x0000009cu;
    }
L_000ced44:;
    {
        uint32_t v = cpu->r[3] * cpu->r[0]; cpu->r[3] = v;
    }
L_000ced48:;
    {
        cpu->r[0] = 0x00000014u;
    }
L_000ced4c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_000ced50:;
    {
        cpu->r[8] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000ced54:;
    {
        cpu->r[9] = rd32(cpu->r[1] + + 0x38u);
    }
L_000ced58:;
    {
        cpu->r[14] = 0x000ced5cu; fn_0018ba6c(cpu);
    }
L_000ced5c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000ced60:;
    {
        cpu->r[14] = 0x000ced64u; fn_000b671c(cpu);
    }
L_000ced64:;
    {
        cpu->r[3] = 0x00008190u;
    }
L_000ced68:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000ced6c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000ced70:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000ced74:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[6]);
    }
L_000ced78:;
    {
        cpu->r[14] = 0x000ced7cu; fn_000b711c(cpu);
    }
L_000ced7c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ced80:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000ced98;
        }
    }
L_000ced84:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ced88:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000ced8c:;
    {
        cpu->r[14] = 0x000ced90u; fn_000ce938(cpu);
    }
L_000ced90:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ced94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ceda8;
        }
    }
L_000ced98:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000ced9c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_000ceda0:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_000ceda4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000ceda8u)) return;
    }
L_000ceda8:;
    {
        cpu->r[3] = rd32(0x000cedb0u + + 0x310u);
    }
L_000cedac:;
    {
        cpu->r[11] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cedb0:;
    {
        cpu->r[3] = rd32(cpu->r[11]);
    }
L_000cedb4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000cedb8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cf058;
        }
    }
L_000cedbc:;
    {
        cpu->r[6] = rd32(0x000cedc4u + + 0x300u);
    }
L_000cedc0:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000cedc4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000cedc8:;
    {
        cpu->r[14] = 0x000cedccu; fn_00189f5c(cpu);
    }
L_000cedcc:;
    {
        cpu->r[1] = 0x00000009u;
    }
L_000cedd0:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000cedd4:;
    {
        cpu->r[14] = 0x000cedd8u; fn_001897b4(cpu);
    }
L_000cedd8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ceddc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = (~0x00000000u);
        }
    }
L_000cede0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000ced98;
        }
    }
L_000cede4:;
    {
        cpu->r[2] = 0x0000a14cu;
    }
L_000cede8:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000cedec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00009f00u, 0, 0);
    }
L_000cedf0:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x000cedf8u + + 0x2bcu);
    }
L_000cedf4:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[6]);
    }
L_000cedf8:;
    {
        cpu->r[2] = 0x0000a150u;
    }
L_000cedfc:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,16);
    }
L_000cee00:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000c4u, 0, 0);
    }
L_000cee04:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[1]);
    }
L_000cee08:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], shifter(cpu->r[9], 2, 1u, &shc), 0, 0);
    }
L_000cee0c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_000cee10:;
    {
        cpu->r[14] = 0x000cee14u; fn_00146db4(cpu);
    }
L_000cee14:;
    {
        cpu->r[3] = 0x000081bcu;
    }
L_000cee18:;
    {
        cpu->r[2] = 0x000081c0u;
    }
L_000cee1c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000cee20:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cee24:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000cee28:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[6]);
    }
L_000cee2c:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[6]);
    }
L_000cee30:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_000cee34:;
    {
        cpu->r[14] = 0x000cee38u; fn_000fc5dc(cpu);
    }
L_000cee38:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_000cee3c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000cee40:;
    {
        cpu->r[14] = 0x000cee44u; fn_000fc650(cpu);
    }
L_000cee44:;
    {
        uint32_t v = shifter(cpu->r[9], 2, 1u, &shc); cpu->r[1] = v;
    }
L_000cee48:;
    {
        cpu->r[9] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_000cee4c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000cee50:;
    {
        cpu->r[14] = 0x000cee54u; fn_000fc5ec(cpu);
    }
L_000cee54:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000cee58:;
    {
        cpu->r[14] = 0x000cee5cu; fn_000fc628(cpu);
    }
L_000cee5c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000cee60:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000cee64:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000cee68:;
    {
        cpu->r[14] = 0x000cee6cu; fn_000fc5dc(cpu);
    }
L_000cee6c:;
    {
        cpu->r[2] = 0x00000006u;
    }
L_000cee70:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000cee74:;
    {
        cpu->r[9] = (uint32_t)((int32_t)(int16_t)(cpu->r[9] & 0xffff) * (int32_t)(int16_t)(cpu->r[2] & 0xffff));
    }
L_000cee78:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_000cee7c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[9], 0, 0);
    }
L_000cee80:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[0], cpu->r[11], 1, 0);
    }
L_000cee84:;
    {
        uint32_t wb_tmp = cpu->r[6] + - 0x4u;
        cpu->r[0] = rd32(cpu->r[6] + - 0x4u);
        cpu->r[6] = wb_tmp;
    }
L_000cee88:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[11], 1, 0);
    }
L_000cee8c:;
    {
        cpu->r[14] = 0x000cee90u; fn_000fc5ec(cpu);
    }
L_000cee90:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000cee94:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000cee98:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000cee9c:;
    {
        cpu->r[14] = 0x000ceea0u; fn_000c829c(cpu);
    }
L_000ceea0:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ceea4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cf0a4;
        }
    }
L_000ceea8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ceeac:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000ceeb0:;
    {
        cpu->r[14] = 0x000ceeb4u; fn_000c9390(cpu);
    }
L_000ceeb4:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ceeb8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ced98;
        }
    }
L_000ceebc:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000ceec0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ceec4:;
    {
        cpu->r[14] = 0x000ceec8u; fn_000c9600(cpu);
    }
L_000ceec8:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000ceecc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000ced98;
        }
    }
L_000ceed0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000ceed4:;
    {
        cpu->r[8] = 0x000042d0u;
    }
L_000ceed8:;
    {
        cpu->r[14] = 0x000ceedcu; fn_000e0188(cpu);
    }
L_000ceedc:;
    {
        cpu->r[0] = 0x000000f8u;
    }
L_000ceee0:;
    {
        cpu->r[14] = 0x000ceee4u; fn_0018ba6c(cpu);
    }
L_000ceee4:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0006u << 16);
    }
L_000ceee8:;
    {
        cpu->r[10] = 0x00000003u;
    }
L_000ceeec:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_000ceef0:;
    {
        cpu->r[14] = 0x000ceef4u; fn_00186af0(cpu);
    }
L_000ceef4:;
    {
        wr32(cpu->r[5] + cpu->r[8], cpu->r[9]);
    }
L_000ceef8:;
    {
        cpu->r[2] = 0x0000004bu;
    }
L_000ceefc:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_000cef00:;
    {
        cpu->r[1] = 0x000001f4u;
    }
L_000cef04:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000cef08:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_000cef0c:;
    {
        cpu->r[14] = 0x000cef10u; fn_00187090(cpu);
    }
L_000cef10:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000cef14:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000cef18:;
    {
        cpu->r[14] = 0x000cef1cu; fn_00186cf0(cpu);
    }
L_000cef1c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000cef20:;
    {
        cpu->r[3] = 0x00004328u;
    }
L_000cef24:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000cef28:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000cef2c:;
    {
        cpu->r[4] = 0x0000432cu;
    }
L_000cef30:;
    {
        cpu->r[7] = rd32(cpu->r[2]);
    }
L_000cef34:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,16);
    }
L_000cef38:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[6]);
    }
L_000cef3c:;
    {
        cpu->r[3] = 0x00009f9cu;
    }
L_000cef40:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0006u << 16);
    }
L_000cef44:;
    {
        cpu->r[8] = rd32(cpu->r[7] + + 0x418u);
    }
L_000cef48:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_000cef4c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 0);
    }
L_000cef50:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 1u, &shc); cpu->r[8] = v;
    }
L_000cef54:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_000cef58:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000cef5c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000002u, 0, 0);
    }
L_000cef60:;
    {
        cpu->r[14] = 0x000cef64u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_000cef64:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000cef68:;
    {
        cpu->r[3] = rd8(cpu->r[7] + cpu->r[3]);
    }
L_000cef6c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cef70:;
    {
        cpu->r[3] = 0x00004334u;
    }
L_000cef74:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000cef78:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_000cef7c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[6]);
        }
    }
L_000cef80:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], cpu->r[0], 0, 0);
    }
L_000cef84:;
    {
        wr32(cpu->r[5] + cpu->r[4], cpu->r[0]);
    }
L_000cef88:;
    {
        cpu->r[4] = 0x0000a414u;
    }
L_000cef8c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
        }
    }
L_000cef90:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0006u << 16);
    }
L_000cef94:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_000cef98:;
    {
        cpu->r[3] = 0x00004338u;
    }
L_000cef9c:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[4]);
    }
L_000cefa0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000cefa4:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[8], 1, 1);
    }
L_000cefa8:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[8]);
    }
L_000cefac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cefc4;
        }
    }
L_000cefb0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000cefb4:;
    {
        cpu->r[14] = 0x000cefb8u; fn_0018781c(cpu);
    }
L_000cefb8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000cefbc:;
    {
        cpu->r[14] = 0x000cefc0u; fn_0018ba20(cpu);
    }
L_000cefc0:;
    {
        wr32(cpu->r[5] + cpu->r[4], cpu->r[8]);
    }
L_000cefc4:;
    {
        cpu->r[0] = 0x00000058u;
    }
L_000cefc8:;
    {
        cpu->r[4] = 0x00001c90u;
    }
L_000cefcc:;
    {
        cpu->r[14] = 0x000cefd0u; fn_0018ba6c(cpu);
    }
L_000cefd0:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0001u << 16);
    }
L_000cefd4:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_000cefd8:;
    {
        cpu->r[14] = 0x000cefdcu; fn_00187a3c(cpu);
    }
L_000cefdc:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[4]);
    }
L_000cefe0:;
    {
        cpu->r[2] = 0x00008548u;
    }
L_000cefe4:;
    {
        cpu->r[3] = 0x0000a414u;
    }
L_000cefe8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000cefec:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000ceff0:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_000ceff4:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[7]);
    }
L_000ceff8:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_000ceffc:;
    {
        wr32(cpu->r[2] + + 0x204u, cpu->r[3]);
    }
L_000cf000:;
    {
        cpu->r[14] = 0x000cf004u; fn_00097924(cpu);
    }
L_000cf004:;
    {
        cpu->r[14] = 0x000cf008u; fn_00157484(cpu);
    }
L_000cf008:;
    {
        cpu->r[3] = 0x00001c54u;
    }
L_000cf00c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cf010:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000cf014:;
    {
        cpu->r[14] = 0x000cf018u; fn_0015ba38(cpu);
    }
L_000cf018:;
    {
        cpu->r[0] = 0x0000001au;
    }
L_000cf01c:;
    {
        cpu->r[14] = 0x000cf020u; fn_00093f34(cpu);
    }
L_000cf020:;
    {
        cpu->r[3] = 0x00008d7cu;
    }
L_000cf024:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cf028:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[4]);
    }
L_000cf02c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_000cf030:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_000cf034:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000cf038:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[1]);
    }
L_000cf03c:;
    {
        cpu->r[3] = 0x00008cb0u;
    }
L_000cf040:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000cf044:;
    {
        wr32(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_000cf048:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 0);
    }
L_000cf04c:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_000cf050:;
    {
        wr32(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_000cf054:;
    {
        goto L_000ced98;
    }
L_000cf058:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000cf05c:;
    {
        cpu->r[14] = 0x000cf060u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000cf060:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000cf064:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cedbc;
        }
    }
L_000cf068:;
    {
        cpu->r[6] = rd32(0x000cf070u + + 0x54u);
    }
L_000cf06c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000cf070:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000cf074:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_000cf078:;
    {
        cpu->r[14] = 0x000cf07cu; fn_00189f48(cpu);
    }
L_000cf07c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000cf080:;
    {
        cpu->r[14] = 0x000cf084u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000cf084:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_000cf088:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000cf08c:;
    {
        cpu->r[3] = rd32(0x000cf094u + + 0x34u);
    }
L_000cf090:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cf094:;
    {
        cpu->r[3] = rd32(0x000cf09cu + + 0x30u);
    }
L_000cf098:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000cf09c:;
    {
        cpu->r[14] = 0x000cf0a0u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_000cf0a0:;
    {
        goto L_000cedc0;
    }
L_000cf0a4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000cf0a8:;
    {
        cpu->r[1] = 0x00000009u;
    }
L_000cf0ac:;
    {
        cpu->r[14] = 0x000cf0b0u; fn_00189870(cpu);
    }
L_000cf0b0:;
    {
        goto L_000ced98;
    }
}

/* _ZN5Scene10ResetSceneEv @ 000cf0d0 (arm) */
void fn_000cf0d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000cf0d0:;
    {
        cpu->r[1] = rd32(0x000cf0d8u + + 0x554u);
    }
L_000cf0d4:;
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
L_000cf0d8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000074u, 1, 0);
    }
L_000cf0dc:;
    {
        cpu->r[2] = rd32(0x000cf0e4u + + 0x54cu);
    }
L_000cf0e0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000cf0e4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_000cf0e8:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_000cf0ec:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_000cf0f0:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[2]);
    }
L_000cf0f4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000cf0fcu, cpu->r[3], 0, 0);
    }
L_000cf0f8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_000cf0fc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000cf100:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000cf104:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_000cf108:;
    {
        cpu->r[14] = 0x000cf10cu; fn_0018cb94(cpu);
    }
L_000cf10c:;
    {
        cpu->r[1] = rd32(0x000cf114u + + 0x520u);
    }
L_000cf110:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x10u);
    }
L_000cf114:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000cf118:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_000cf11c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000cf120:;
    {
        wr32(cpu->r[2] + cpu->r[1], cpu->r[3]);
    }
L_000cf124:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_000cf128:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000064u, 1, 1);
    }
L_000cf12c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cf120;
        }
    }
L_000cf130:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x10u);
    }
L_000cf134:;
    {
        cpu->r[2] = 0x00001c90u;
    }
L_000cf138:;
    {
        cpu->r[1] = rd32(0x000cf140u + + 0x4f8u);
    }
L_000cf13c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000cf140:;
    {
        cpu->r[8] = 0x000042dcu;
    }
L_000cf144:;
    {
        cpu->r[9] = 0x00008820u;
    }
L_000cf148:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000cf14c:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0006u << 16);
    }
L_000cf150:;
    {
        cpu->r[4] = rd32(cpu->r[11] + cpu->r[1]);
    }
L_000cf154:;
    {
        cpu->r[11] = 0x000042e0u;
    }
L_000cf158:;
    {
        cpu->r[11] = (cpu->r[11] & 0xffffu) | (0x0006u << 16);
    }
L_000cf15c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[11]);
    }
L_000cf160:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[2]);
    }
L_000cf164:;
    {
        cpu->r[11] = 0x000042f0u;
    }
L_000cf168:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_000cf16c:;
    {
        cpu->r[11] = (cpu->r[11] & 0xffffu) | (0x0006u << 16);
    }
L_000cf170:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[8]);
    }
L_000cf174:;
    {
        cpu->r[8] = 0x000042ecu;
    }
L_000cf178:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[11]);
    }
L_000cf17c:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_000cf180:;
    {
        cpu->r[11] = 0x00004380u;
    }
L_000cf184:;
    {
        cpu->r[2] = 0x0000434cu;
    }
L_000cf188:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000cf18c:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0006u << 16);
    }
L_000cf190:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_000cf194:;
    {
        cpu->r[11] = (cpu->r[11] & 0xffffu) | (0x0006u << 16);
    }
L_000cf198:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[8]);
    }
L_000cf19c:;
    {
        cpu->r[2] = 0x000042e8u;
    }
L_000cf1a0:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[11]);
    }
L_000cf1a4:;
    {
        cpu->r[8] = 0x0000437cu;
    }
L_000cf1a8:;
    {
        cpu->r[11] = 0x00008d80u;
    }
L_000cf1ac:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000cf1b0:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0006u << 16);
    }
L_000cf1b4:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_000cf1b8:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[8]);
    }
L_000cf1bc:;
    {
        cpu->r[11] = (cpu->r[11] & 0xffffu) | (0x0001u << 16);
    }
L_000cf1c0:;
    {
        cpu->r[2] = 0x00001c58u;
    }
L_000cf1c4:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[11]);
    }
L_000cf1c8:;
    {
        cpu->r[8] = 0x00001cf8u;
    }
L_000cf1cc:;
    {
        cpu->r[11] = 0x00008d74u;
    }
L_000cf1d0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000cf1d4:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_000cf1d8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_000cf1dc:;
    {
        cpu->r[11] = (cpu->r[11] & 0xffffu) | (0x0001u << 16);
    }
L_000cf1e0:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[8]);
    }
L_000cf1e4:;
    {
        cpu->r[1] = 0x00004308u;
    }
L_000cf1e8:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[11]);
    }
L_000cf1ec:;
    {
        cpu->r[2] = 0x0000431cu;
    }
L_000cf1f0:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x6cu);
    }
L_000cf1f4:;
    {
        cpu->r[8] = 0x00008d88u;
    }
L_000cf1f8:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000cf1fc:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000cf200:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_000cf204:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_000cf208:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[2]);
    }
L_000cf20c:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0001u << 16);
    }
L_000cf210:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[8]);
    }
L_000cf214:;
    {
        cpu->r[1] = 0x000042e4u;
    }
L_000cf218:;
    {
        cpu->r[8] = 0x00008520u;
    }
L_000cf21c:;
    {
        cpu->r[2] = 0x00008d84u;
    }
L_000cf220:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000cf224:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000cf228:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
    }
L_000cf22c:;
    {
        cpu->r[1] = 0x00003e81u;
    }
L_000cf230:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[2]);
    }
L_000cf234:;
    {
        cpu->r[2] = 0x00008818u;
    }
L_000cf238:;
    {
        wr32(cpu->r[11] + cpu->r[8], cpu->r[3]);
    }
L_000cf23c:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000cf240:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000cf244:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[1]);
    }
L_000cf248:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[2]);
    }
L_000cf24c:;
    {
        cpu->r[10] = 0x00004384u;
    }
L_000cf250:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000cf254:;
    {
        cpu->r[7] = 0x00004388u;
    }
L_000cf258:;
    {
        wr32(cpu->r[5] + cpu->r[9], cpu->r[2]);
    }
L_000cf25c:;
    {
        cpu->r[14] = 0x000042c8u;
    }
L_000cf260:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0xcu);
    }
L_000cf264:;
    {
        cpu->r[12] = 0x00001c94u;
    }
L_000cf268:;
    {
        cpu->r[0] = 0x00004344u;
    }
L_000cf26c:;
    {
        cpu->r[1] = 0x00004318u;
    }
L_000cf270:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0006u << 16);
    }
L_000cf274:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0006u << 16);
    }
L_000cf278:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000cf27c:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x0006u << 16);
    }
L_000cf280:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[1]);
    }
L_000cf284:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000cf288:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0006u << 16);
    }
L_000cf28c:;
    {
        cpu->r[1] = 0x00008d8cu;
    }
L_000cf290:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000cf294:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[1]);
    }
L_000cf298:;
    {
        cpu->r[1] = 0x00001810u;
    }
L_000cf29c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000cf2a4u + + 0x378u);
    }
L_000cf2a0:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000cf2a4:;
    {
        cpu->r[8] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000cf2a8:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[1]);
    }
L_000cf2ac:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000cf2b4u + + 0x36cu);
    }
L_000cf2b0:;
    {
        wr32(cpu->r[5] + cpu->r[10], cpu->r[8]);
    }
L_000cf2b4:;
    {
        cpu->r[10] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000cf2b8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000cf2c0u + + 0x364u);
    }
L_000cf2bc:;
    {
        wr32(cpu->r[5] + cpu->r[9], cpu->r[10]);
    }
L_000cf2c0:;
    {
        cpu->r[11] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000cf2c4:;
    {
        wr32(cpu->r[5] + cpu->r[7], cpu->r[11]);
    }
L_000cf2c8:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x14u);
    }
L_000cf2cc:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000cf2d0:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x18u);
    }
L_000cf2d4:;
    {
        cpu->r[6] = 0x00001cfcu;
    }
L_000cf2d8:;
    {
        wr32(cpu->r[5] + cpu->r[14], cpu->r[3]);
    }
L_000cf2dc:;
    {
        cpu->r[14] = 0x000003e7u;
    }
L_000cf2e0:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[14]);
    }
L_000cf2e4:;
    {
        cpu->r[12] = 0x00000002u;
    }
L_000cf2e8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x6cu);
    }
L_000cf2ec:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000cf2f0:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[12]);
    }
L_000cf2f4:;
    {
        cpu->r[7] = 0x0000008bu;
    }
L_000cf2f8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x38u);
    }
L_000cf2fc:;
    {
        wr8(cpu->r[14] + + 0x424u, cpu->r[1]);
    }
L_000cf300:;
    {
        wr32(cpu->r[5] + cpu->r[8], cpu->r[1]);
    }
L_000cf304:;
    {
        wr8(cpu->r[5] + cpu->r[0], cpu->r[1]);
    }
L_000cf308:;
    {
        wr8(cpu->r[5] + cpu->r[9], cpu->r[1]);
    }
L_000cf30c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x20u);
    }
L_000cf310:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_000cf314:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_000cf318:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000cf31c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000cf320:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x34u);
    }
L_000cf324:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000cf328:;
    {
        wr32(cpu->r[5] + cpu->r[11], cpu->r[2]);
    }
L_000cf32c:;
    {
        wr32(cpu->r[5] + cpu->r[14], cpu->r[2]);
    }
L_000cf330:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x40u);
    }
L_000cf334:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x44u);
    }
L_000cf338:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[2]);
    }
L_000cf33c:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[2]);
    }
L_000cf340:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x48u);
    }
L_000cf344:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4cu);
    }
L_000cf348:;
    {
        wr32(cpu->r[5] + cpu->r[6], cpu->r[7]);
    }
L_000cf34c:;
    {
        wr32(cpu->r[5] + cpu->r[10], cpu->r[2]);
    }
L_000cf350:;
    {
        cpu->r[10] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000cf354:;
    {
        wr32(cpu->r[5] + cpu->r[8], cpu->r[2]);
    }
L_000cf358:;
    {
        wr32(cpu->r[5] + cpu->r[9], cpu->r[10]);
    }
L_000cf35c:;
    {
        wr32(cpu->r[5] + cpu->r[11], cpu->r[10]);
    }
L_000cf360:;
    {
        wr32(cpu->r[5] + cpu->r[14], cpu->r[2]);
    }
L_000cf364:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[2]);
    }
L_000cf368:;
    {
        wr8(cpu->r[5] + cpu->r[1], cpu->r[2]);
    }
L_000cf36c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000050u, 0, 0);
    }
L_000cf370:;
    {
        uint32_t base = cpu->r[8];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        uint32_t v3 = rd32(ea + 12u);
        cpu->r[8] = v0;
        cpu->r[9] = v1;
        cpu->r[10] = v2;
        cpu->r[11] = v3;
    }
L_000cf374:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x60u);
    }
L_000cf378:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x64u);
    }
L_000cf37c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x68u);
    }
L_000cf380:;
    {
        wr32(cpu->r[5] + cpu->r[8], cpu->r[2]);
    }
L_000cf384:;
    {
        wr32(cpu->r[5] + cpu->r[9], cpu->r[2]);
    }
L_000cf388:;
    {
        wr32(cpu->r[5] + cpu->r[10], cpu->r[2]);
    }
L_000cf38c:;
    {
        wr32(cpu->r[5] + cpu->r[11], cpu->r[2]);
    }
L_000cf390:;
    {
        wr32(cpu->r[5] + cpu->r[14], cpu->r[2]);
    }
L_000cf394:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[3]);
    }
L_000cf398:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_000cf39c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d014c;
        }
    }
L_000cf3a0:;
    {
        cpu->r[6] = rd32(0x000cf3a8u + + 0x294u);
    }
L_000cf3a4:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x10u);
    }
L_000cf3a8:;
    {
        cpu->r[4] = 0x00001c54u;
    }
L_000cf3ac:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0001u << 16);
    }
L_000cf3b0:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[6]);
    }
L_000cf3b4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[4]);
    }
L_000cf3b8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x54u);
    }
L_000cf3bc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000cf3c0:;
    {
        wr32(cpu->r[7] + + 0x164u, cpu->r[3]);
    }
L_000cf3c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d0184;
        }
    }
L_000cf3c8:;
    {
        cpu->r[14] = 0x000cf3ccu; fn_0015b8ec(cpu);
    }
L_000cf3cc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[4]);
    }
L_000cf3d0:;
    {
        cpu->r[14] = 0x000cf3d4u; fn_0015ba38(cpu);
    }
L_000cf3d4:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x10u);
    }
L_000cf3d8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000cf3e0u + + 0x26cu);
    }
L_000cf3dc:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x30u);
    }
L_000cf3e0:;
    {
        cpu->r[11] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000cf3e4:;
    {
        cpu->r[3] = rd32(cpu->r[10] + cpu->r[9]);
    }
L_000cf3e8:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000cf3ec:;
    {
        cpu->r[3] = 0x00009fb4u;
    }
L_000cf3f0:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[11]);
    }
L_000cf3f4:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000cf3f8:;
    {
        cpu->r[7] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000cf3fc:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000cf400:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = add_flags(cpu, cpu->r[5], 0x00018c00u, 0, 0);
        }
    }
L_000cf404:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = cpu->r[7];
        }
    }
L_000cf408:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = add_flags(cpu, cpu->r[4], 0x0000009cu, 0, 0);
        }
    }
L_000cf40c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cfce4;
        }
    }
L_000cf410:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], 0x00018c00u, 0, 0);
    }
L_000cf414:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000cf418:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000007cu, 0, 0);
    }
L_000cf41c:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_000cf420:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_000cf424:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000cf428:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cf42c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000cf430:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cf444;
        }
    }
L_000cf434:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000cf438:;
    {
        cpu->r[14] = 0x000cf440u;
    }
L_000cf43c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000cf440u)) return;
    }
L_000cf440:;
    {
        wr32(cpu->r[4], cpu->r[7]);
    }
L_000cf444:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000008u, 1, 1);
    }
L_000cf448:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_000cf44c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cf420;
        }
    }
L_000cf450:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_000cf454:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x30u);
    }
L_000cf458:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[14]);
    }
L_000cf45c:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000cf460:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000cf464:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000cf468:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cf46c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d0178;
        }
    }
L_000cf470:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000cf474:;
    {
        cpu->r[11] = 0x00004088u;
    }
L_000cf478:;
    {
        cpu->r[14] = 0x000cf47cu; fn_000baef8(cpu);
    }
L_000cf47c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000cf480:;
    {
        cpu->r[14] = 0x000cf484u; fn_000be91c(cpu);
    }
L_000cf484:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_000cf488:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_000cf48c:;
    {
        cpu->r[7] = 0x00004084u;
    }
L_000cf490:;
    {
        cpu->r[11] = (cpu->r[11] & 0xffffu) | (0x0006u << 16);
    }
L_000cf494:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0006u << 16);
    }
L_000cf498:;
    {
        cpu->r[9] = 0x0000408cu;
    }
L_000cf49c:;
    {
        cpu->r[8] = 0x00004080u;
    }
L_000cf4a0:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_000cf4a4:;
    {
        cpu->r[1] = 0x00008c6cu;
    }
L_000cf4a8:;
    {
        cpu->r[2] = 0x00008c70u;
    }
L_000cf4ac:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000cf4b0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000cf4b4:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000cf4b8:;
    {
        cpu->r[14] = rd32(cpu->r[0]);
    }
L_000cf4bc:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0006u << 16);
    }
L_000cf4c0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_000cf4c4:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0006u << 16);
    }
L_000cf4c8:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000cf4cc:;
    {
        cpu->r[2] = 0x000042d4u;
    }
L_000cf4d0:;
    {
        wr32(cpu->r[5] + cpu->r[11], cpu->r[12]);
    }
L_000cf4d4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000cf4d8:;
    {
        cpu->r[11] = 0x00007530u;
    }
L_000cf4dc:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_000cf4e0:;
    {
        wr32(cpu->r[5] + cpu->r[7], cpu->r[11]);
    }
L_000cf4e4:;
    {
        cpu->r[2] = 0x000042d5u;
    }
L_000cf4e8:;
    {
        cpu->r[7] = 0x00008cb8u;
    }
L_000cf4ec:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000cf4f0:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_000cf4f4:;
    {
        cpu->r[2] = 0x000042d7u;
    }
L_000cf4f8:;
    {
        wr32(cpu->r[5] + cpu->r[9], cpu->r[12]);
    }
L_000cf4fc:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000cf500:;
    {
        cpu->r[9] = (~0x00000000u);
    }
L_000cf504:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_000cf508:;
    {
        wr32(cpu->r[5] + cpu->r[8], cpu->r[9]);
    }
L_000cf50c:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000cf510:;
    {
        wr32(cpu->r[14] + cpu->r[7], cpu->r[12]);
    }
L_000cf514:;
    {
        cpu->r[2] = 0x000042d8u;
    }
L_000cf518:;
    {
        cpu->r[7] = 0x00008cacu;
    }
L_000cf51c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000cf520:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cf524:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_000cf528:;
    {
        cpu->r[2] = 0x00001b4cu;
    }
L_000cf52c:;
    {
        wr32(cpu->r[14] + cpu->r[7], cpu->r[9]);
    }
L_000cf530:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000cf534:;
    {
        cpu->r[7] = 0x00008cb0u;
    }
L_000cf538:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_000cf53c:;
    {
        cpu->r[2] = 0x00004220u;
    }
L_000cf540:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000cf544:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000cf548:;
    {
        cpu->r[10] = 0x00004094u;
    }
L_000cf54c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[2]);
    }
L_000cf550:;
    {
        cpu->r[6] = 0x000042d6u;
    }
L_000cf554:;
    {
        cpu->r[4] = 0x000042d9u;
    }
L_000cf558:;
    {
        cpu->r[2] = 0x00008394u;
    }
L_000cf55c:;
    {
        wr32(cpu->r[14] + cpu->r[7], cpu->r[12]);
    }
L_000cf560:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0006u << 16);
    }
L_000cf564:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0006u << 16);
    }
L_000cf568:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000cf56c:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0006u << 16);
    }
L_000cf570:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[2]);
    }
L_000cf574:;
    {
        cpu->r[7] = 0x00008cb4u;
    }
L_000cf578:;
    {
        cpu->r[2] = 0x00004354u;
    }
L_000cf57c:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_000cf580:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000cf584:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[2]);
    }
L_000cf588:;
    {
        cpu->r[2] = 0x00004350u;
    }
L_000cf58c:;
    {
        wr32(cpu->r[14] + cpu->r[7], cpu->r[9]);
    }
L_000cf590:;
    {
        cpu->r[8] = 0x00000050u;
    }
L_000cf594:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000cf598:;
    {
        wr8(cpu->r[5] + cpu->r[10], cpu->r[12]);
    }
L_000cf59c:;
    {
        cpu->r[10] = (~0x00000037u);
    }
L_000cf5a0:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[2]);
    }
L_000cf5a4:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000cf5a8:;
    {
        wr8(cpu->r[5] + cpu->r[6], cpu->r[10]);
    }
L_000cf5ac:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000cf5b0:;
    {
        wr8(cpu->r[5] + cpu->r[4], cpu->r[8]);
    }
L_000cf5b4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000cf5bcu + + 0x6cu);
    }
L_000cf5b8:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x38u);
    }
L_000cf5bc:;
    {
        wr32(cpu->r[5] + cpu->r[4], cpu->r[9]);
    }
L_000cf5c0:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x14u);
    }
L_000cf5c4:;
    {
        wr8(cpu->r[5] + cpu->r[9], cpu->r[10]);
    }
L_000cf5c8:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x18u);
    }
L_000cf5cc:;
    {
        wr8(cpu->r[5] + cpu->r[11], cpu->r[10]);
    }
L_000cf5d0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000cf5d4:;
    {
        wr8(cpu->r[5] + cpu->r[14], cpu->r[8]);
    }
L_000cf5d8:;
    {
        cpu->r[14] = 0x000082fcu;
    }
L_000cf5dc:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x20u);
    }
L_000cf5e0:;
    {
        wr8(cpu->r[5] + cpu->r[4], cpu->r[8]);
    }
L_000cf5e4:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x28u);
    }
L_000cf5e8:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x24u);
    }
L_000cf5ec:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000cf5f0:;
    {
        wr8(cpu->r[8] + cpu->r[14], cpu->r[12]);
    }
L_000cf5f4:;
    {
        cpu->r[14] = 0x000082f4u;
    }
L_000cf5f8:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x34u);
    }
L_000cf5fc:;
    {
        wr8(cpu->r[8] + cpu->r[14], cpu->r[12]);
    }
L_000cf600:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000cf604:;
    {
        wr32(cpu->r[5] + cpu->r[9], cpu->r[12]);
    }
L_000cf608:;
    {
        wr32(cpu->r[5] + cpu->r[10], cpu->r[12]);
    }
L_000cf60c:;
    {
        wr32(cpu->r[5] + cpu->r[11], cpu->r[12]);
    }
L_000cf610:;
    {
        wr32(cpu->r[5] + cpu->r[14], cpu->r[12]);
    }
L_000cf614:;
    {
        wr8(cpu->r[8] + + 0x407u, cpu->r[12]);
    }
L_000cf618:;
    {
        goto L_000cf650;
    }
L_000cf650:;
    {
        wr8(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_000cf654:;
    {
        cpu->r[4] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000cf658:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[4]);
    }
L_000cf65c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000cf660:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000bbu, 1, 1);
    }
L_000cf664:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000cf668:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cf650;
        }
    }
L_000cf66c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x10u);
    }
L_000cf670:;
    {
        cpu->r[3] = 0x000042f8u;
    }
L_000cf674:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x30u);
    }
L_000cf678:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000cf67c:;
    {
        cpu->r[11] = 0x000042c4u;
    }
L_000cf680:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_000cf684:;
    {
        cpu->r[3] = 0x000042b8u;
    }
L_000cf688:;
    {
        cpu->r[11] = (cpu->r[11] & 0xffffu) | (0x0006u << 16);
    }
L_000cf68c:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[8]);
    }
L_000cf690:;
    {
        cpu->r[9] = 0x00004300u;
    }
L_000cf694:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0006u << 16);
    }
L_000cf698:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000cf69c:;
    {
        cpu->r[10] = 0x000042b4u;
    }
L_000cf6a0:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_000cf6a4:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000cf6a8:;
    {
        cpu->r[7] = 0x0000818cu;
    }
L_000cf6ac:;
    {
        cpu->r[3] = 0x000042c0u;
    }
L_000cf6b0:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0006u << 16);
    }
L_000cf6b4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000cf6b8:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000cf6bc:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[2]);
    }
L_000cf6c0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000cf6c8u + - 0x7cu);
    }
L_000cf6c4:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_000cf6c8:;
    {
        cpu->r[3] = 0x00003e88u;
    }
L_000cf6cc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000cf6d0:;
    {
        cpu->r[1] = 0x000042f4u;
    }
L_000cf6d4:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_000cf6d8:;
    {
        cpu->r[6] = 0x00001b48u;
    }
L_000cf6dc:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000cf6e0:;
    {
        cpu->r[4] = 0x00004340u;
    }
L_000cf6e4:;
    {
        wr32(cpu->r[5] + cpu->r[11], cpu->r[3]);
    }
L_000cf6e8:;
    {
        cpu->r[14] = 0x00003e84u;
    }
L_000cf6ec:;
    {
        cpu->r[11] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000cf6f0:;
    {
        wr32(cpu->r[5] + cpu->r[9], cpu->r[11]);
    }
L_000cf6f4:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x34u);
    }
L_000cf6f8:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000cf6fc:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0006u << 16);
    }
L_000cf700:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x0006u << 16);
    }
L_000cf704:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x000cf70cu + - 0xccu);
    }
L_000cf708:;
    {
        cpu->r[2] = 0x000042fcu;
    }
L_000cf70c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000cf710:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000cf714:;
    {
        wr32(cpu->r[5] + cpu->r[10], cpu->r[3]);
    }
L_000cf718:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x000cf720u + - 0xdcu);
    }
L_000cf71c:;
    {
        cpu->r[9] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000cf720:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x000cf728u + - 0xe0u);
    }
L_000cf724:;
    {
        cpu->r[10] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000cf728:;
    {
        wr32(cpu->r[5] + cpu->r[7], cpu->r[10]);
    }
L_000cf72c:;
    {
        cpu->r[7] = 0x00009fb0u;
    }
L_000cf730:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000cf734:;
    {
        cpu->r[0] = 0x0000881cu;
    }
L_000cf738:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_000cf73c:;
    {
        cpu->r[8] = 0x00008188u;
    }
L_000cf740:;
    {
        wr32(cpu->r[5] + cpu->r[4], cpu->r[12]);
    }
L_000cf744:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000cf748:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_000cf74c:;
    {
        wr32(cpu->r[5] + cpu->r[7], cpu->r[12]);
    }
L_000cf750:;
    {
        cpu->r[4] = 0x00000019u;
    }
L_000cf754:;
    {
        wr32(cpu->r[5] + cpu->r[6], cpu->r[12]);
    }
L_000cf758:;
    {
        cpu->r[2] = 0x000042bcu;
    }
L_000cf75c:;
    {
        wr32(cpu->r[11] + + 0x418u, cpu->r[4]);
    }
L_000cf760:;
    {
        cpu->r[4] = 0x00000003u;
    }
L_000cf764:;
    {
        wr32(cpu->r[5] + cpu->r[14], cpu->r[4]);
    }
L_000cf768:;
    {
        cpu->r[14] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000cf76c:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[14]);
    }
L_000cf770:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000cf774:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_000cf778:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000cf77c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_000cf780:;
    {
        cpu->r[2] = 0x0000433cu;
    }
L_000cf784:;
    {
        wr32(cpu->r[5] + cpu->r[8], cpu->r[9]);
    }
L_000cf788:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000cf78c:;
    {
        wr8(cpu->r[5] + cpu->r[0], cpu->r[12]);
    }
L_000cf790:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000cf794:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000cf798:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x20u);
    }
L_000cf79c:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[3]);
    }
L_000cf7a0:;
    {
        cpu->r[1] = 0x00009facu;
    }
L_000cf7a4:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_000cf7a8:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000cf7ac:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[12]);
    }
L_000cf7b0:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_000cf7b4:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[14]);
    }
L_000cf7b8:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[14]);
    }
L_000cf7bc:;
    {
        wr32(cpu->r[5] + cpu->r[4], cpu->r[14]);
    }
L_000cf7c0:;
    {
        wr32(cpu->r[5] + cpu->r[8], cpu->r[14]);
    }
L_000cf7c4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_000cf7c8:;
    {
        uint32_t base = cpu->r[9];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[9] = v0;
        cpu->r[10] = v1;
        cpu->r[11] = v2;
    }
L_000cf7cc:;
    {
        wr32(cpu->r[5] + cpu->r[9], cpu->r[14]);
    }
L_000cf7d0:;
    {
        wr32(cpu->r[5] + cpu->r[10], cpu->r[12]);
    }
L_000cf7d4:;
    {
        wr32(cpu->r[5] + cpu->r[11], cpu->r[12]);
    }
L_000cf7d8:;
    {
        cpu->r[1] = 0x00003e8cu;
    }
L_000cf7dc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_000cf7e0:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000cf7e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000cf7e8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_000cf7ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x000001f4u, 1, 1);
    }
L_000cf7f0:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000cf7f4:;
    {
        wr8(cpu->r[1], cpu->r[2]);
    }
L_000cf7f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cf7d8;
        }
    }
L_000cf7fc:;
    {
        cpu->r[6] = 0x00008818u;
    }
L_000cf800:;
    {
        cpu->r[7] = 0x00004208u;
    }
L_000cf804:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000cf808:;
    {
        cpu->r[12] = 0x0000420cu;
    }
L_000cf80c:;
    {
        cpu->r[1] = 0x00004218u;
    }
L_000cf810:;
    {
        cpu->r[2] = 0x00004210u;
    }
L_000cf814:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000cf818:;
    {
        cpu->r[8] = 0x00004214u;
    }
L_000cf81c:;
    {
        cpu->r[14] = 0x00003e81u;
    }
L_000cf820:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0006u << 16);
    }
L_000cf824:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0006u << 16);
    }
L_000cf828:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000cf82c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000cf830:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0006u << 16);
    }
L_000cf834:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x0006u << 16);
    }
L_000cf838:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_000cf83c:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_000cf840:;
    {
        wr32(cpu->r[5] + cpu->r[7], cpu->r[3]);
    }
L_000cf844:;
    {
        wr32(cpu->r[5] + cpu->r[8], cpu->r[3]);
    }
L_000cf848:;
    {
        cpu->r[7] = 0x00000001u;
    }
L_000cf84c:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[3]);
    }
L_000cf850:;
    {
        wr8(cpu->r[5] + cpu->r[14], cpu->r[7]);
    }
L_000cf854:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[3]);
    }
L_000cf858:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[3]);
    }
L_000cf85c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cf878;
        }
    }
L_000cf860:;
    {
        cpu->r[14] = 0x000cf864u; fn_00148a38(cpu);
    }
L_000cf864:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000cf868:;
    {
        cpu->r[14] = 0x000cf86cu; fn_0014be44(cpu);
    }
L_000cf86c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000cf870:;
    {
        wr32(cpu->r[3] + + 0x200u, cpu->r[4]);
    }
L_000cf874:;
    {
        wr32(cpu->r[3] + + 0x1fcu, cpu->r[4]);
    }
L_000cf878:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_000cf87c:;
    {
        cpu->r[4] = 0x00004260u;
    }
L_000cf880:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x30u);
    }
L_000cf884:;
    {
        cpu->r[8] = 0x00004268u;
    }
L_000cf888:;
    {
        cpu->r[9] = 0x0000426cu;
    }
L_000cf88c:;
    {
        cpu->r[10] = 0x00008c60u;
    }
L_000cf890:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0006u << 16);
    }
L_000cf894:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0006u << 16);
    }
L_000cf898:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[14]);
    }
L_000cf89c:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0006u << 16);
    }
L_000cf8a0:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000cf8a4:;
    {
        cpu->r[6] = 0x00004258u;
    }
L_000cf8a8:;
    {
        cpu->r[11] = 0x00004098u;
    }
L_000cf8ac:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0006u << 16);
    }
L_000cf8b0:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000cf8b4:;
    {
        cpu->r[11] = (cpu->r[11] & 0xffffu) | (0x0006u << 16);
    }
L_000cf8b8:;
    {
        cpu->r[14] = 0x000cf8bcu; fn_0009639c(cpu);
    }
L_000cf8bc:;
    {
        cpu->r[2] = 0x000040a0u;
    }
L_000cf8c0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000cf8c4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_000cf8c8:;
    {
        cpu->r[2] = 0x000040a4u;
    }
L_000cf8cc:;
    {
        cpu->r[14] = 0x0000425cu;
    }
L_000cf8d0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000cf8d4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_000cf8d8:;
    {
        cpu->r[2] = 0x000040a8u;
    }
L_000cf8dc:;
    {
        cpu->r[0] = 0x0000a418u;
    }
L_000cf8e0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000cf8e4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_000cf8e8:;
    {
        cpu->r[2] = 0x00008c58u;
    }
L_000cf8ec:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x0006u << 16);
    }
L_000cf8f0:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0006u << 16);
    }
L_000cf8f4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000cf8f8:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_000cf8fc:;
    {
        cpu->r[2] = 0x00008c5cu;
    }
L_000cf900:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000cf904:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_000cf908:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000cf90c:;
    {
        cpu->r[12] = 0x00004264u;
    }
L_000cf910:;
    {
        cpu->r[2] = 0x00008c64u;
    }
L_000cf914:;
    {
        wr8(cpu->r[5] + cpu->r[9], cpu->r[1]);
    }
L_000cf918:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000cf920u + - 0x2d4u);
    }
L_000cf91c:;
    {
        cpu->r[9] = (~0x00000000u);
    }
L_000cf920:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[1]);
    }
L_000cf924:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000cf928:;
    {
        wr32(cpu->r[5] + cpu->r[10], cpu->r[9]);
    }
L_000cf92c:;
    {
        cpu->r[10] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000cf930:;
    {
        wr32(cpu->r[5] + cpu->r[4], cpu->r[9]);
    }
L_000cf934:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0006u << 16);
    }
L_000cf938:;
    {
        wr32(cpu->r[5] + cpu->r[8], cpu->r[10]);
    }
L_000cf93c:;
    {
        cpu->r[7] = 0x0000409cu;
    }
L_000cf940:;
    {
        wr32(cpu->r[5] + cpu->r[14], cpu->r[9]);
    }
L_000cf944:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0006u << 16);
    }
L_000cf948:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_000cf94c:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_000cf950:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000cf954:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x20u);
    }
L_000cf958:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x24u);
    }
L_000cf95c:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_000cf960:;
    {
        cpu->r[2] = 0x00008c68u;
    }
L_000cf964:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000cf968:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[2]);
    }
L_000cf96c:;
    {
        wr32(cpu->r[5] + cpu->r[11], cpu->r[1]);
    }
L_000cf970:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000cf974:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[9]);
    }
L_000cf978:;
    {
        cpu->r[0] = 0x00009fb8u;
    }
L_000cf97c:;
    {
        wr32(cpu->r[5] + cpu->r[6], cpu->r[9]);
    }
L_000cf980:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[10]);
    }
L_000cf984:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x14u);
    }
L_000cf988:;
    {
        wr32(cpu->r[5] + cpu->r[14], cpu->r[9]);
    }
L_000cf98c:;
    {
        wr32(cpu->r[5] + cpu->r[4], cpu->r[9]);
    }
L_000cf990:;
    {
        wr32(cpu->r[5] + cpu->r[8], cpu->r[9]);
    }
L_000cf994:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000cf998:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x28u);
    }
L_000cf99c:;
    {
        wr32(cpu->r[5] + cpu->r[7], cpu->r[1]);
    }
L_000cf9a0:;
    {
        wr32(cpu->r[5] + cpu->r[10], cpu->r[1]);
    }
L_000cf9a4:;
    {
        wr32(cpu->r[5] + cpu->r[11], cpu->r[1]);
    }
L_000cf9a8:;
    {
        wr32(cpu->r[5] + cpu->r[9], cpu->r[1]);
    }
L_000cf9ac:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[1]);
    }
L_000cf9b0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_000cf9b4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000cf9b8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000a100u, 0, 0);
    }
L_000cf9bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000040u, 1, 1);
    }
L_000cf9c0:;
    {
        wr32(cpu->r[1] + + 0xcu, cpu->r[2]);
    }
L_000cf9c4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cf9b0;
        }
    }
L_000cf9c8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x10u);
    }
L_000cf9cc:;
    {
        cpu->r[0] = 0x000081d8u;
    }
L_000cf9d0:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x30u);
    }
L_000cf9d4:;
    {
        cpu->r[3] = 0x000081dcu;
    }
L_000cf9d8:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000cf9dc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cf9e0:;
    {
        cpu->r[1] = 0x000081e0u;
    }
L_000cf9e4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[5], 0x00018000u, 0, 0);
    }
L_000cf9e8:;
    {
        cpu->r[12] = rd32(cpu->r[14] + cpu->r[11]);
    }
L_000cf9ec:;
    {
        cpu->r[14] = (~0x00000000u);
    }
L_000cf9f0:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000cf9f4:;
    {
        wr32(cpu->r[5] + cpu->r[0], cpu->r[2]);
    }
L_000cf9f8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000cfa00u + - 0x3b4u);
    }
L_000cf9fc:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_000cfa00:;
    {
        cpu->r[8] = rd32(cpu->r[12]);
    }
L_000cfa04:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000cfa08:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000130u, 0, 0);
    }
L_000cfa0c:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[0]);
    }
L_000cfa10:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00006300u, 0, 0);
    }
L_000cfa14:;
    {
        cpu->r[11] = 0x00000640u;
    }
L_000cfa18:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x000000c8u, 0, 0);
    }
L_000cfa1c:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000cfa20:;
    {
        cpu->r[9] = cpu->r[2];
    }
L_000cfa24:;
    {
        cpu->r[10] = cpu->r[14];
    }
L_000cfa28:;
    {
        wr32(cpu->r[5] + cpu->r[1], cpu->r[0]);
    }
L_000cfa2c:;
    {
        uint32_t v = cpu->r[11] * cpu->r[6]; cpu->r[1] = v;
    }
L_000cfa30:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000cfa34:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00014c00u, 0, 0);
    }
L_000cfa38:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00011c00u, 0, 0);
    }
L_000cfa3c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], 0x00000128u, 0, 0);
    }
L_000cfa40:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000330u, 0, 0);
    }
L_000cfa44:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000130u, 0, 0);
    }
L_000cfa48:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], cpu->r[0], 0, 0);
    }
L_000cfa4c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], cpu->r[1], 0, 0);
    }
L_000cfa50:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_000cfa54:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_000cfa58:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00003680u, 0, 0);
    }
L_000cfa5c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000064u, 1, 1);
    }
L_000cfa60:;
    {
        wr32(cpu->r[1] + - 0x8u, cpu->r[3]);
    }
L_000cfa64:;
    {
        wr32(cpu->r[1] + - 0x4u, cpu->r[3]);
    }
L_000cfa68:;
    {
        uint32_t wb_tmp = cpu->r[1] + 0x0000000cu;
        wr32(cpu->r[1], cpu->r[3]);
        cpu->r[1] = wb_tmp;
    }
L_000cfa6c:;
    {
        wr32(cpu->r[0] + + 0x4b0u, cpu->r[14]);
    }
L_000cfa70:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_000cfa74:;
    {
        wr32(cpu->r[2] + - 0x8u, cpu->r[3]);
    }
L_000cfa78:;
    {
        wr32(cpu->r[2] + - 0x4u, cpu->r[3]);
    }
L_000cfa7c:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x0000000cu;
        wr32(cpu->r[2], cpu->r[3]);
        cpu->r[2] = wb_tmp;
    }
L_000cfa80:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[14]);
    }
L_000cfa84:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cfa54;
        }
    }
L_000cfa88:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], cpu->r[6], 0, 0);
    }
L_000cfa8c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000cfa90:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00064000u, 0, 0);
    }
L_000cfa94:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000008u, 1, 1);
    }
L_000cfa98:;
    {
        wr32(cpu->r[7] + - 0x8u, cpu->r[9]);
    }
L_000cfa9c:;
    {
        wr32(cpu->r[7] + - 0x4u, cpu->r[3]);
    }
L_000cfaa0:;
    {
        uint32_t wb_tmp = cpu->r[7] + 0x0000000cu;
        wr8(cpu->r[7], cpu->r[3]);
        cpu->r[7] = wb_tmp;
    }
L_000cfaa4:;
    {
        uint32_t wb_tmp = cpu->r[8] + 0x00000004u;
        wr32(cpu->r[8], cpu->r[10]);
        cpu->r[8] = wb_tmp;
    }
L_000cfaa8:;
    {
        wr8(cpu->r[2] + + 0xbf0u, cpu->r[3]);
    }
L_000cfaac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cfa2c;
        }
    }
L_000cfab0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_000cfab4:;
    {
        cpu->r[0] = 0x00005f68u;
    }
L_000cfab8:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x10u);
    }
L_000cfabc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000cfac0:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_000cfac4:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_000cfac8:;
    {
        wr32(cpu->r[1] + cpu->r[0], cpu->r[3]);
    }
L_000cfacc:;
    {
        cpu->r[0] = 0x00005f6cu;
    }
L_000cfad0:;
    {
        wr8(cpu->r[1] + cpu->r[0], cpu->r[3]);
    }
L_000cfad4:;
    {
        cpu->r[0] = 0x00005f70u;
    }
L_000cfad8:;
    {
        wr32(cpu->r[1] + cpu->r[0], cpu->r[3]);
    }
L_000cfadc:;
    {
        cpu->r[0] = 0x00008528u;
    }
L_000cfae0:;
    {
        wr32(cpu->r[1] + cpu->r[0], cpu->r[3]);
    }
L_000cfae4:;
    {
        cpu->r[0] = 0x0000852cu;
    }
L_000cfae8:;
    {
        wr32(cpu->r[1] + cpu->r[0], cpu->r[3]);
    }
L_000cfaec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_000cfaf0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_000cfaf4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006700u, 0, 0);
    }
L_000cfaf8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000020u, 1, 1);
    }
L_000cfafc:;
    {
        wr32(cpu->r[3] + + 0x3cu, cpu->r[14]);
    }
L_000cfb00:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cfaec;
        }
    }
L_000cfb04:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x30u);
    }
L_000cfb08:;
    {
        cpu->r[6] = 0x00004bfcu;
    }
L_000cfb0c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x10u);
    }
L_000cfb10:;
    {
        cpu->r[2] = 0x00001b3cu;
    }
L_000cfb14:;
    {
        cpu->r[12] = 0x00001b40u;
    }
L_000cfb18:;
    {
        cpu->r[7] = 0x00004328u;
    }
L_000cfb1c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000cfb20:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000cfb24:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[8]);
    }
L_000cfb28:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0006u << 16);
    }
L_000cfb2c:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0006u << 16);
    }
L_000cfb30:;
    {
        cpu->r[8] = 0x00005f94u;
    }
L_000cfb34:;
    {
        cpu->r[4] = 0x00004bf8u;
    }
L_000cfb38:;
    {
        cpu->r[1] = 0x00005556u;
    }
L_000cfb3c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000cfb40:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000cfb44:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0006u << 16);
    }
L_000cfb48:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x5555u << 16);
    }
L_000cfb4c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000cfb54u + + 0x1fcu);
    }
L_000cfb50:;
    {
        cpu->r[11] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000cfb54:;
    {
        wr32(cpu->r[0] + cpu->r[8], cpu->r[14]);
    }
L_000cfb58:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[3]);
    }
L_000cfb5c:;
    {
        cpu->r[2] = 0x0000432cu;
    }
L_000cfb60:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[14]);
    }
L_000cfb64:;
    {
        cpu->r[12] = 0x00004c00u;
    }
L_000cfb68:;
    {
        wr32(cpu->r[5] + cpu->r[7], cpu->r[3]);
    }
L_000cfb6c:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0006u << 16);
    }
L_000cfb70:;
    {
        wr32(cpu->r[5] + cpu->r[6], cpu->r[3]);
    }
L_000cfb74:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000cfb78:;
    {
        cpu->r[14] = rd32(cpu->r[0] + + 0x418u);
    }
L_000cfb7c:;
    {
        wr8(cpu->r[5] + cpu->r[4], cpu->r[3]);
    }
L_000cfb80:;
    {
        wr8(cpu->r[5] + cpu->r[12], cpu->r[3]);
    }
L_000cfb84:;
    {
        cpu->r[12] = 0x00005f60u;
    }
L_000cfb88:;
    {
        uint32_t v = shifter(cpu->r[14], 2, 1u, &shc); cpu->r[3] = v;
    }
L_000cfb8c:;
    {
        cpu->r[14] = 0x00009f9cu;
    }
L_000cfb90:;
    {
        cpu->r[0] = rd8(cpu->r[0] + cpu->r[12]);
    }
L_000cfb94:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_000cfb98:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[1] * (int64_t)(int32_t)cpu->r[3]; cpu->r[10] = (uint32_t)v; cpu->r[1] = (uint32_t)(v >> 32); }
    }
L_000cfb9c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000cfba0:;
    {
        wr32(cpu->r[5] + cpu->r[14], cpu->r[11]);
    }
L_000cfba4:;
    {
        cpu->r[14] = 0x00009f98u;
    }
L_000cfba8:;
    {
        wr32(cpu->r[5] + cpu->r[14], cpu->r[11]);
    }
L_000cfbac:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], shifter(cpu->r[3], 1, 31u, &shc), 1, 0);
    }
L_000cfbb0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000cfbb4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_000cfbb8:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[3]);
    }
L_000cfbbc:;
    {
        cpu->r[3] = 0x00004334u;
    }
L_000cfbc0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_000cfbc4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000cfbc8:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
        }
    }
L_000cfbcc:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[0]);
        }
    }
L_000cfbd0:;
    {
        cpu->r[3] = 0x00008818u;
    }
L_000cfbd4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cfbd8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000cfbdc:;
    {
        cpu->r[14] = 0x000cfbe0u; fn_00149b48(cpu);
    }
L_000cfbe0:;
    {
        cpu->r[2] = 0x00001c70u;
    }
L_000cfbe4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000cfbe8:;
    {
        cpu->r[3] = 0x00004338u;
    }
L_000cfbec:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000cfbf0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000cfbf4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000cfbf8:;
    {
        wr8(cpu->r[5] + cpu->r[3], cpu->r[1]);
    }
L_000cfbfc:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_000cfc00:;
    {
        if (cond_test(cpu, 5)) {
        goto L_000cfd2c;
        }
    }
L_000cfc04:;
    {
        cpu->r[9] = rd32(0x000cfc0cu + + 0x148u);
    }
L_000cfc08:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 2u, &shc); cpu->r[6] = v;
    }
L_000cfc0c:;
    {
        cpu->r[7] = rd32(0x000cfc14u + + 0x144u);
    }
L_000cfc10:;
    {
        cpu->r[8] = rd32(0x000cfc18u + + 0x144u);
    }
L_000cfc14:;
    {
        cpu->r[9] = add_flags(cpu, 0x000cfc1cu, cpu->r[9], 0, 0);
    }
L_000cfc18:;
    {
        cpu->r[11] = rd32(0x000cfc20u + + 0x140u);
    }
L_000cfc1c:;
    {
        cpu->r[7] = add_flags(cpu, 0x000cfc24u, cpu->r[7], 0, 0);
    }
L_000cfc20:;
    {
        cpu->r[8] = add_flags(cpu, 0x000cfc28u, cpu->r[8], 0, 0);
    }
L_000cfc24:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x000001fcu, 0, 0);
    }
L_000cfc28:;
    {
        cpu->r[11] = add_flags(cpu, 0x000cfc30u, cpu->r[11], 0, 0);
    }
L_000cfc2c:;
    {
        cpu->r[10] = cpu->r[7];
    }
L_000cfc30:;
    {
        goto L_000cfc8c;
    }
L_000cfc34:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000cfc38:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_000cfc3c:;
    {
        cpu->r[7] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_000cfc40:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_000cfc44:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cfd18;
        }
    }
L_000cfc48:;
    {
        cpu->r[3] = 0x00001c70u;
    }
L_000cfc4c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cfc50:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000cfc54:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_000cfc58:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[2]);
    }
L_000cfc5c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000cfc60:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 0);
    }
L_000cfc64:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000004u, 1, 0);
    }
L_000cfc68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cfc78;
        }
    }
L_000cfc6c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000cfc70:;
    {
        cpu->r[14] = 0x000cfc78u;
    }
L_000cfc74:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000cfc78u)) return;
    }
L_000cfc78:;
    {
        add_flags(cpu, cpu->r[4], 0x00000001u, 0, 1);
    }
L_000cfc7c:;
    {
        cpu->r[3] = 0x00001c70u;
    }
L_000cfc80:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cfc84:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cfd2c;
        }
    }
L_000cfc88:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000cfc8c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_000cfc90:;
    {
        cpu->r[3] = 0x00001c68u;
    }
L_000cfc94:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cfc98:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000cfc34;
        }
    }
L_000cfc9c:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_000cfca0:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_000cfca4:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000cfca8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000cfcac:;
    {
        cpu->r[12] = 0x0000006au;
    }
L_000cfcb0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[9]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_000cfcb4:;
    {
        cpu->r[14] = 0x000cfcb8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000cfcb8:;
    {
        cpu->r[2] = 0x00001c70u;
    }
L_000cfcbc:;
    {
        cpu->r[3] = 0x00001c68u;
    }
L_000cfcc0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000cfcc4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cfcc8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000cfccc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000cfcd0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_000cfcd4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_000cfcd8:;
    {
        cpu->r[7] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_000cfcdc:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000cfc5c;
        }
    }
L_000cfce0:;
    {
        goto L_000cfc40;
    }
L_000cfce4:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000cfce8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_000cfcec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cfcf0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000cfcf4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cfd08;
        }
    }
L_000cfcf8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000cfcfc:;
    {
        cpu->r[14] = 0x000cfd04u;
    }
L_000cfd00:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000cfd04u)) return;
    }
L_000cfd04:;
    {
        wr32(cpu->r[6], cpu->r[8]);
    }
L_000cfd08:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000007u, 1, 1);
    }
L_000cfd0c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_000cfd10:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000cfce4;
        }
    }
L_000cfd14:;
    {
        goto L_000cf414;
    }
L_000cfd18:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000cfd1c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_000cfd20:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000cfd24:;
    {
        cpu->r[14] = 0x000cfd28u; imp_memcpy(cpu); /* memcpy */
    }
L_000cfd28:;
    {
        goto L_000cfc48;
    }
L_000cfd2c:;
    {
        cpu->r[7] = 0x00001c64u;
    }
L_000cfd30:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000cfd34:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000cfd38:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cfd3c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000cfe10;
        }
    }
L_000cfd40:;
    {
        cpu->r[6] = 0x00001c60u;
    }
L_000cfd44:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000cfd48:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000cfd4c:;
    {
        goto L_000cfda8;
    }
L_000cfd7c:;
    {
        cpu->r[12] = rd32(cpu->r[8] + + 0x17cu);
    }
L_000cfd80:;
    {
        cpu->r[3] = 0x00000064u;
    }
L_000cfd84:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000cfd88:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000cfd8c:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_000cfd90:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_000cfd94:;
    {
        cpu->r[14] = 0x000cfd9cu;
    }
L_000cfd98:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000cfd9cu)) return;
    }
L_000cfd9c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000cfda0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000cfda4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000cfe10;
        }
    }
L_000cfda8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000cfdac:;
    {
        cpu->r[8] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_000cfdb0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000cfdb4:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x17cu);
    }
L_000cfdb8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000cfdbc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000cfdc0:;
    {
        cpu->r[14] = 0x000cfdc8u;
    }
L_000cfdc4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000cfdc8u)) return;
    }
L_000cfdc8:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000cfdcc:;
    {
        cpu->r[14] = 0x000cfdd4u;
    }
L_000cfdd0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000cfdd4u)) return;
    }
L_000cfdd4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000062u, 1, 1);
    }
L_000cfdd8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cfd7c;
        }
    }
L_000cfddc:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x17cu);
    }
L_000cfde0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000cfde4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000cfde8:;
    {
        cpu->r[14] = 0x000cfdf0u;
    }
L_000cfdec:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x000cfdf0u)) return;
    }
L_000cfdf0:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_000cfdf4:;
    {
        cpu->r[14] = 0x000cfdfcu;
    }
L_000cfdf8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000cfdfcu)) return;
    }
L_000cfdfc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000065u, 1, 1);
    }
L_000cfe00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cfd7c;
        }
    }
L_000cfe04:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000cfe08:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000cfe0c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000cfda8;
        }
    }
L_000cfe10:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000cfe14:;
    {
        cpu->r[14] = 0x000cfe18u; fn_000bab20(cpu);
    }
L_000cfe18:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_000cfe1c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000cfe20:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000cfe24:;
    {
        cpu->r[3] = 0x00004328u;
    }
L_000cfe28:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000cfe2c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000cfe30:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_000cfe34:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[1]);
    }
L_000cfe38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cff04;
        }
    }
L_000cfe3c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_000cfe40:;
    {
        cpu->r[7] = 0x00008c50u;
    }
L_000cfe44:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x30u);
    }
L_000cfe48:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000cfe4c:;
    {
        cpu->r[10] = 0x00001050u;
    }
L_000cfe50:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[14]);
    }
L_000cfe54:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_000cfe58:;
    {
        cpu->r[3] = 0x00001be0u;
    }
L_000cfe5c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_000cfe60:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_000cfe64:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x000010dcu;
        }
    }
L_000cfe68:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000004u;
        }
    }
L_000cfe6c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[2] + cpu->r[3], cpu->r[1]);
        }
    }
L_000cfe70:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000cfe74:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[10]);
    }
L_000cfe78:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000cfe7c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000cff04;
        }
    }
L_000cfe80:;
    {
        cpu->r[8] = 0x00001c60u;
    }
L_000cfe84:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000cfe88:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_000cfe8c:;
    {
        cpu->r[9] = 0x00000001u;
    }
L_000cfe90:;
    {
        cpu->r[12] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000cfe94:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], 0x00000014u, 0, 0);
    }
L_000cfe98:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000cfe9c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000cfea0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000cfea4:;
    {
        cpu->r[3] = rd32(cpu->r[12] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000cfea8:;
    {
        wr8(cpu->r[0] + + 0x76u, cpu->r[9]);
    }
L_000cfeac:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x70u);
    }
L_000cfeb0:;
    {
        wr8(cpu->r[3] + + 0x75u, cpu->r[9]);
    }
L_000cfeb4:;
    {
        cpu->r[4] = rd32(cpu->r[1] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_000cfeb8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x64u);
    }
L_000cfebc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000cfec0:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x11du);
    }
L_000cfec4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x58u);
    }
L_000cfec8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cfecc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x5cu);
    }
L_000cfed0:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[4] + + 0x17au, cpu->r[3]);
        }
    }
L_000cfed4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x60u);
    }
L_000cfed8:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000cfedc:;
    {
        cpu->r[14] = 0x000cfee0u; fn_000b5cbc(cpu);
    }
L_000cfee0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x50u);
    }
L_000cfee4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x54u);
    }
L_000cfee8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000cfeec:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4cu);
    }
L_000cfef0:;
    {
        cpu->r[14] = 0x000cfef4u; fn_000b5ccc(cpu);
    }
L_000cfef4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000cfef8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[10]);
    }
L_000cfefc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[6], 1, 1);
    }
L_000cff00:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000cfe90;
        }
    }
L_000cff04:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_000cff08:;
    {
        cpu->r[7] = 0x00008cbcu;
    }
L_000cff0c:;
    {
        cpu->r[3] = rd32(0x000cff14u + - 0x1b0u);
    }
L_000cff10:;
    {
        cpu->r[8] = 0x00008cc4u;
    }
L_000cff14:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000cff18:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_000cff1c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_000cff20:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000cff24:;
    {
        cpu->r[14] = 0x000cff28u; fn_00158ee4(cpu);
    }
L_000cff28:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000cff2c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000cff30:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_000cff34:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cff38:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000cff80;
        }
    }
L_000cff3c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], 0x00011c00u, 0, 0);
    }
L_000cff40:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000cff44:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x000000a8u, 0, 0);
    }
L_000cff48:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000cff4c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000cff50:;
    {
        cpu->r[14] = 0x000cff54u; fn_000afdc0(cpu);
    }
L_000cff54:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_000cff58:;
    {
        cpu->r[14] = 0x000cff5cu; fn_000b00d0(cpu);
    }
L_000cff5c:;
    {
        uint32_t wb_tmp = cpu->r[4] + 0x00000004u;
        cpu->r[3] = rd32(cpu->r[4]);
        cpu->r[4] = wb_tmp;
    }
L_000cff60:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0xb5cu);
    }
L_000cff64:;
    {
        uint32_t v = cpu->r[2] & ~ 0x00000008u; cpu->r[2] = v;
    }
L_000cff68:;
    {
        wr32(cpu->r[3] + + 0xb5cu, cpu->r[2]);
    }
L_000cff6c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000cff70:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000cff74:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_000cff78:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000cff7c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000cff48;
        }
    }
L_000cff80:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000cff84:;
    {
        cpu->r[14] = 0x000cff88u; fn_00097924(cpu);
    }
L_000cff88:;
    {
        cpu->r[14] = 0x000cff8cu; fn_00157484(cpu);
    }
L_000cff8c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000cff90:;
    {
        cpu->r[14] = 0x000cff94u; fn_000c6f00(cpu);
    }
L_000cff94:;
    {
        cpu->r[3] = 0x000082a0u;
    }
L_000cff98:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cff9c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000cffa0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cffa4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cffd0;
        }
    }
L_000cffa8:;
    {
        cpu->r[3] = 0x00001c64u;
    }
L_000cffac:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000cffb0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000cffb4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cffb8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000cffd0;
        }
    }
L_000cffbc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000cffc0:;
    {
        cpu->r[14] = 0x000cffc4u; fn_000e8a4c(cpu);
    }
L_000cffc4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000cffc8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_000cffcc:;
    {
        cpu->r[14] = 0x000cffd0u; fn_000e8b74(cpu);
    }
L_000cffd0:;
    {
        cpu->r[3] = 0x00004278u;
    }
L_000cffd4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000cffd8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000cffdc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000cffe0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000d0064;
        }
    }
L_000cffe4:;
    {
        cpu->r[8] = rd32(0x000cffecu + - 0x284u);
    }
L_000cffe8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000cffec:;
    {
        cpu->r[7] = rd32(0x000cfff4u + - 0x288u);
    }
L_000cfff0:;
    {
        cpu->r[6] = rd32(0x000cfff8u + - 0x288u);
    }
L_000cfff4:;
    {
        cpu->r[8] = add_flags(cpu, 0x000cfffcu, cpu->r[8], 0, 0);
    }
L_000cfff8:;
    {
        cpu->r[10] = rd32(0x000d0000u + - 0x28cu);
    }
L_000cfffc:;
    {
        cpu->r[7] = add_flags(cpu, 0x000d0004u, cpu->r[7], 0, 0);
    }
L_000d0000:;
    {
        cpu->r[6] = add_flags(cpu, 0x000d0008u, cpu->r[6], 0, 0);
    }
L_000d0004:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000068u, 0, 0);
    }
L_000d0008:;
    {
        cpu->r[10] = add_flags(cpu, 0x000d0010u, cpu->r[10], 0, 0);
    }
L_000d000c:;
    {
        cpu->r[3] = 0x0000427cu;
    }
L_000d0010:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000d0014:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d0018:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d001c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_000d0020:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[1], 0, 0);
    }
L_000d0024:;
    {
        cpu->r[14] = 0x000d0028u; fn_000b9040(cpu);
    }
L_000d0028:;
    {
        cpu->r[3] = 0x00004278u;
    }
L_000d002c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d0030:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d0034:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_000d0038:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000d0064;
        }
    }
L_000d003c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000d0040:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000d000c;
        }
    }
L_000d0044:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000d0048:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000d004c:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_000d0050:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000d0054:;
    {
        cpu->r[12] = 0x0000000du;
    }
L_000d0058:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[8]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_000d005c:;
    {
        cpu->r[14] = 0x000d0060u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000d0060:;
    {
        goto L_000d000c;
    }
L_000d0064:;
    {
        cpu->r[7] = 0x00001cecu;
    }
L_000d0068:;
    {
        cpu->r[6] = 0x00001cf4u;
    }
L_000d006c:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000d0070:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000d0074:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000d0078:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000d007c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000d0080:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000d0084:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000d00d4;
        }
    }
L_000d0088:;
    {
        cpu->r[10] = 0x00001ce8u;
    }
L_000d008c:;
    {
        cpu->r[8] = 0x00001cf0u;
    }
L_000d0090:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000d0094:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_000d0098:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_000d009c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_000d00a0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 0);
    }
L_000d00a4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
        }
    }
L_000d00a8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[10]);
        }
    }
L_000d00ac:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
        }
    }
L_000d00b0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
        }
    }
L_000d00b4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_000d00b8:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000d00bc:;
    {
        cpu->r[14] = 0x000d00c0u; fn_000afd70(cpu);
    }
L_000d00c0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000d00c4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_000d00c8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000d00cc:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_000d00d0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000d009c;
        }
    }
L_000d00d4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00009f00u, 0, 0);
    }
L_000d00d8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000c4u, 0, 0);
    }
L_000d00dc:;
    {
        cpu->r[14] = 0x000d00e0u; fn_00146db4(cpu);
    }
L_000d00e0:;
    {
        cpu->r[12] = 0x000087d0u;
    }
L_000d00e4:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000d00e8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_000d00ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d00f0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000d0128;
        }
    }
L_000d00f4:;
    {
        cpu->r[3] = 0x000087c0u;
    }
L_000d00f8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d00fc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d0100:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_000d0104:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d0108:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x24u);
    }
L_000d010c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000d0110:;
    {
        wr8(cpu->r[3] + + 0x3cu, cpu->r[0]);
    }
L_000d0114:;
    {
        wr32(cpu->r[3] + + 0x28u, cpu->r[1]);
    }
L_000d0118:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000040u, 0, 0);
    }
L_000d011c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_000d0120:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_000d0124:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000d0108;
        }
    }
L_000d0128:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_000d012c:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x10u);
    }
L_000d0130:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000d0134:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000d0138:;
    {
        cpu->r[3] = 0x00008548u;
    }
L_000d013c:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000d0140:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000074u, 0, 0);
    }
L_000d0144:;
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
L_000d0148:;
    {
        return fn_00188180(cpu);
    }
L_000d014c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d0150:;
    {
        cpu->r[14] = 0x000d0154u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000d0154:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d0158:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000cf3a0;
        }
    }
L_000d015c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_000d0160:;
    {
        cpu->r[6] = rd32(0x000d0168u + - 0x3f0u);
    }
L_000d0164:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[6]);
    }
L_000d0168:;
    {
        cpu->r[14] = 0x000d016cu; fn_00094228(cpu);
    }
L_000d016c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d0170:;
    {
        cpu->r[14] = 0x000d0174u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000d0174:;
    {
        goto L_000cf3a4;
    }
L_000d0178:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000d017c:;
    {
        cpu->r[14] = 0x000d0180u; fn_000df604(cpu);
    }
L_000d0180:;
    {
        goto L_000cf470;
    }
L_000d0184:;
    {
        cpu->r[0] = 0x00008cc4u;
    }
L_000d0188:;
    {
        cpu->r[14] = 0x000d018cu; fn_0018ba6c(cpu);
    }
L_000d018c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000d0190:;
    {
        cpu->r[14] = 0x000d0194u; fn_0015bb3c(cpu);
    }
L_000d0194:;
    {
        wr32(cpu->r[5] + cpu->r[4], cpu->r[6]);
    }
L_000d0198:;
    {
        goto L_000cf3d4;
    }
}

/* _ZN5SceneC1Ev @ 000d019c (arm) */
void fn_000d019c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000d019c:;
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
L_000d01a0:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_000d01a4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000d01a8:;
    {
        cpu->r[0] = rd32(0x000d01b0u + + 0x494u);
    }
L_000d01ac:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000064u, 1, 0);
    }
L_000d01b0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00018400u, 0, 0);
    }
L_000d01b4:;
    {
        cpu->r[7] = 0x00001c7cu;
    }
L_000d01b8:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[1]);
    }
L_000d01bc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[1], 0x00000084u, 0, 0);
    }
L_000d01c0:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[0]);
    }
L_000d01c4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00009f00u, 0, 0);
    }
L_000d01c8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000c4u, 0, 0);
    }
L_000d01cc:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000d01d0:;
    {
        cpu->r[14] = 0x000d01d4u; fn_00146da0(cpu);
    }
L_000d01d4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x44u);
    }
L_000d01d8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x0000a100u, 0, 0);
    }
L_000d01dc:;
    {
        cpu->r[9] = 0x00001c6cu;
    }
L_000d01e0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000054u, 0, 0);
    }
L_000d01e4:;
    {
        cpu->r[2] = add_flags(cpu, 0x000d01ecu, cpu->r[2], 0, 0);
    }
L_000d01e8:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[2]);
    }
L_000d01ec:;
    {
        cpu->r[14] = 0x000d01f0u; fn_0012d8b8(cpu);
    }
L_000d01f0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[7]);
    }
L_000d01f4:;
    {
        cpu->r[7] = 0x00001c80u;
    }
L_000d01f8:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000d01fc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[7]);
    }
L_000d0200:;
    {
        cpu->r[7] = 0x00001c84u;
    }
L_000d0204:;
    {
        cpu->r[14] = 0x000017fcu;
    }
L_000d0208:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000d020c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[7]);
    }
L_000d0210:;
    {
        cpu->r[7] = 0x00001c88u;
    }
L_000d0214:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x0001u << 16);
    }
L_000d0218:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000d021c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[7]);
    }
L_000d0220:;
    {
        cpu->r[7] = 0x00001c8cu;
    }
L_000d0224:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0001u << 16);
    }
L_000d0228:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000d022c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[7]);
    }
L_000d0230:;
    {
        cpu->r[7] = 0x00001ce8u;
    }
L_000d0234:;
    {
        cpu->r[12] = 0x00001804u;
    }
L_000d0238:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000d023c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[7]);
    }
L_000d0240:;
    {
        cpu->r[7] = 0x00001cecu;
    }
L_000d0244:;
    {
        cpu->r[0] = 0x00001808u;
    }
L_000d0248:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000d024c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[7]);
    }
L_000d0250:;
    {
        cpu->r[7] = 0x00001cf0u;
    }
L_000d0254:;
    {
        cpu->r[10] = 0x0000180cu;
    }
L_000d0258:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000d025c:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[7]);
    }
L_000d0260:;
    {
        cpu->r[7] = 0x00001cf4u;
    }
L_000d0264:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000d0268:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000d026c:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[7]);
    }
L_000d0270:;
    {
        cpu->r[7] = 0x000082a4u;
    }
L_000d0274:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000d0278:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000d027c:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000d0280:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000d0284:;
    {
        wr32(cpu->r[4] + cpu->r[9], cpu->r[3]);
    }
L_000d0288:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[7]);
    }
L_000d028c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000d0294u + + 0x3b8u);
    }
L_000d0290:;
    {
        cpu->r[7] = 0x000082a8u;
    }
L_000d0294:;
    {
        cpu->r[9] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000d0298:;
    {
        wr32(cpu->r[4] + cpu->r[14], cpu->r[9]);
    }
L_000d029c:;
    {
        cpu->r[14] = 0x00011800u;
    }
L_000d02a0:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000d02a4:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[7]);
    }
L_000d02a8:;
    {
        cpu->r[7] = 0x000082acu;
    }
L_000d02ac:;
    {
        wr32(cpu->r[4] + cpu->r[10], cpu->r[9]);
    }
L_000d02b0:;
    {
        wr32(cpu->r[4] + cpu->r[14], cpu->r[9]);
    }
L_000d02b4:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000d02b8:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[9]);
    }
L_000d02bc:;
    {
        cpu->r[8] = 0x000017f8u;
    }
L_000d02c0:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[9]);
    }
L_000d02c4:;
    {
        cpu->r[11] = 0x00001c68u;
    }
L_000d02c8:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x8u);
    }
L_000d02cc:;
    {
        cpu->r[1] = 0x00001c70u;
    }
L_000d02d0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_000d02d4:;
    {
        cpu->r[2] = 0x00001c78u;
    }
L_000d02d8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x10u);
    }
L_000d02dc:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_000d02e0:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[7]);
    }
L_000d02e4:;
    {
        cpu->r[7] = 0x000082b0u;
    }
L_000d02e8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000d02ec:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000d02f0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000d02f4:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000d02f8:;
    {
        cpu->r[11] = (cpu->r[11] & 0xffffu) | (0x0001u << 16);
    }
L_000d02fc:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[7]);
    }
L_000d0300:;
    {
        cpu->r[7] = 0x000082b4u;
    }
L_000d0304:;
    {
        wr32(cpu->r[4] + cpu->r[8], cpu->r[9]);
    }
L_000d0308:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000d030c:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[7]);
    }
L_000d0310:;
    {
        cpu->r[7] = 0x000082b8u;
    }
L_000d0314:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_000d0318:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000d031c:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_000d0320:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[7]);
    }
L_000d0324:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_000d0328:;
    {
        wr32(cpu->r[4] + cpu->r[10], cpu->r[3]);
    }
L_000d032c:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_000d0330:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[3]);
    }
L_000d0334:;
    {
        wr32(cpu->r[4] + cpu->r[14], cpu->r[3]);
    }
L_000d0338:;
    {
        wr32(cpu->r[4] + cpu->r[11], cpu->r[3]);
    }
L_000d033c:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[3]);
    }
L_000d0340:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_000d0344:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[1] = v0;
        cpu->r[2] = v1;
        cpu->r[8] = v2;
    }
L_000d0348:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_000d034c:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_000d0350:;
    {
        wr32(cpu->r[4] + cpu->r[8], cpu->r[3]);
    }
L_000d0354:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_000d0358:;
    {
        uint32_t base = cpu->r[9];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        uint32_t v3 = rd32(ea + 12u);
        cpu->r[9] = v0;
        cpu->r[10] = v1;
        cpu->r[12] = v2;
        cpu->r[14] = v3;
    }
L_000d035c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_000d0360:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        uint32_t v3 = rd32(ea + 12u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
        cpu->r[8] = v3;
    }
L_000d0364:;
    {
        wr32(cpu->r[4] + cpu->r[9], cpu->r[3]);
    }
L_000d0368:;
    {
        wr32(cpu->r[4] + cpu->r[10], cpu->r[3]);
    }
L_000d036c:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[3]);
    }
L_000d0370:;
    {
        wr32(cpu->r[4] + cpu->r[14], cpu->r[3]);
    }
L_000d0374:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[3]);
    }
L_000d0378:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_000d037c:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_000d0380:;
    {
        wr32(cpu->r[4] + cpu->r[8], cpu->r[3]);
    }
L_000d0384:;
    {
        wr32(cpu->r[5] + + 0x40u, cpu->r[7]);
    }
L_000d0388:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000d038c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000044u, 0, 0);
    }
L_000d0390:;
    {
        cpu->r[14] = 0x000d0394u; fn_001535e0(cpu);
    }
L_000d0394:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000330u, 1, 1);
    }
L_000d0398:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000044u, 0, 0);
    }
L_000d039c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d0384;
        }
    }
L_000d03a0:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x48u);
    }
L_000d03a4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[4], 0x00018c00u, 0, 0);
    }
L_000d03a8:;
    {
        cpu->r[6] = 0x00008cc0u;
    }
L_000d03ac:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[10]);
    }
L_000d03b0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[9], 0x000003bcu, 0, 0);
    }
L_000d03b4:;
    {
        cpu->r[10] = 0x00008cbcu;
    }
L_000d03b8:;
    {
        cpu->r[14] = 0x000d03bcu; fn_00128d74(cpu);
    }
L_000d03bc:;
    {
        cpu->r[5] = 0x00008cc4u;
    }
L_000d03c0:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000d03c4:;
    {
        cpu->r[0] = 0x00008cb8u;
    }
L_000d03c8:;
    {
        cpu->r[14] = 0x00008dd4u;
    }
L_000d03cc:;
    {
        cpu->r[12] = 0x00008dd8u;
    }
L_000d03d0:;
    {
        cpu->r[1] = 0x00008ddcu;
    }
L_000d03d4:;
    {
        cpu->r[2] = 0x00008de0u;
    }
L_000d03d8:;
    {
        cpu->r[3] = 0x00008e24u;
    }
L_000d03dc:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x0001u << 16);
    }
L_000d03e0:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000d03e4:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000d03e8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000d03ec:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d03f0:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000d03f4:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000d03f8:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000d03fc:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000d0400:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[9], 0x000001e4u, 0, 0);
    }
L_000d0404:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[7]);
    }
L_000d0408:;
    {
        wr32(cpu->r[4] + cpu->r[14], cpu->r[7]);
    }
L_000d040c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d0410:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[7]);
    }
L_000d0414:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[7]);
    }
L_000d0418:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[7]);
    }
L_000d041c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[7]);
    }
L_000d0420:;
    {
        wr32(cpu->r[4] + cpu->r[10], cpu->r[7]);
    }
L_000d0424:;
    {
        wr32(cpu->r[4] + cpu->r[6], cpu->r[7]);
    }
L_000d0428:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[7]);
    }
L_000d042c:;
    {
        cpu->r[14] = 0x000d0430u; fn_001535e0(cpu);
    }
L_000d0430:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00022400u, 0, 0);
    }
L_000d0434:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000074u, 0, 0);
    }
L_000d0438:;
    {
        cpu->r[14] = 0x00008e64u;
    }
L_000d043c:;
    {
        cpu->r[0] = 0x00008e68u;
    }
L_000d0440:;
    {
        cpu->r[1] = 0x00008e6cu;
    }
L_000d0444:;
    {
        cpu->r[12] = 0x00008e70u;
    }
L_000d0448:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x0001u << 16);
    }
L_000d044c:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000d0450:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000d0454:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000d0458:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x0000e100u, 0, 0);
    }
L_000d045c:;
    {
        wr32(cpu->r[4] + cpu->r[14], cpu->r[7]);
    }
L_000d0460:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000d0468u + + 0x1e4u);
    }
L_000d0464:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[7]);
    }
L_000d0468:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[7]);
    }
L_000d046c:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[7]);
    }
L_000d0470:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000d0474:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000d0478:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000d047c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_000d0480:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000d0484:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d0470;
        }
    }
L_000d0488:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[4], 0x00030400u, 0, 0);
    }
L_000d048c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000d0490:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000174u, 0, 0);
    }
L_000d0494:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], cpu->r[5], 0, 0);
    }
L_000d0498:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000010u, 0, 0);
    }
L_000d049c:;
    {
        cpu->r[14] = 0x000d04a0u; fn_00155a80(cpu);
    }
L_000d04a0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00012c00u, 1, 1);
    }
L_000d04a4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d0494;
        }
    }
L_000d04a8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00043000u, 0, 0);
    }
L_000d04ac:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000d04b4u + + 0x198u);
    }
L_000d04b0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000174u, 0, 0);
    }
L_000d04b4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x0000e100u, 0, 0);
    }
L_000d04b8:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000d04bc:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000d04c0:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000d04c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_000d04c8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000d04cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d04b8;
        }
    }
L_000d04d0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[4], 0x00051000u, 0, 0);
    }
L_000d04d4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000d04d8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000274u, 0, 0);
    }
L_000d04dc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], cpu->r[5], 0, 0);
    }
L_000d04e0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000010u, 0, 0);
    }
L_000d04e4:;
    {
        cpu->r[14] = 0x000d04e8u; fn_00155a80(cpu);
    }
L_000d04e8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00012c00u, 1, 1);
    }
L_000d04ec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d04dc;
        }
    }
L_000d04f0:;
    {
        cpu->r[3] = 0x000040f4u;
    }
L_000d04f4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[4], 0x00064000u, 0, 0);
    }
L_000d04f8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d04fc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[6], 0x000000b4u, 0, 0);
    }
L_000d0500:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000d0504:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000d0508:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_000d050c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[6], 0x000000f8u, 0, 0);
    }
L_000d0510:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[10]);
    }
L_000d0514:;
    {
        cpu->r[9] = 0x00004270u;
    }
L_000d0518:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[12]);
    }
L_000d051c:;
    {
        cpu->r[14] = 0x000d0520u; fn_001535e0(cpu);
    }
L_000d0520:;
    {
        cpu->r[3] = 0x00004138u;
    }
L_000d0524:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x50u);
    }
L_000d0528:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d052c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[6], 0x0000013cu, 0, 0);
    }
L_000d0530:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], 0x00000180u, 0, 0);
    }
L_000d0534:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[14]);
    }
L_000d0538:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_000d053c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x000001c4u, 0, 0);
    }
L_000d0540:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[1]);
    }
L_000d0544:;
    {
        cpu->r[10] = 0x00004274u;
    }
L_000d0548:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[6]);
    }
L_000d054c:;
    {
        cpu->r[14] = 0x000d0550u; fn_001535e0(cpu);
    }
L_000d0550:;
    {
        cpu->r[3] = 0x0000417cu;
    }
L_000d0554:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4cu);
    }
L_000d0558:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d055c:;
    {
        cpu->r[7] = 0x00004360u;
    }
L_000d0560:;
    {
        cpu->r[6] = 0x000017f0u;
    }
L_000d0564:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0006u << 16);
    }
L_000d0568:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_000d056c:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0006u << 16);
    }
L_000d0570:;
    {
        cpu->r[14] = 0x000d0574u; fn_001535e0(cpu);
    }
L_000d0574:;
    {
        cpu->r[3] = 0x000041c0u;
    }
L_000d0578:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d057c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x48u);
    }
L_000d0580:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0006u << 16);
    }
L_000d0584:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000d0588:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_000d058c:;
    {
        cpu->r[14] = 0x000d0590u; fn_001535e0(cpu);
    }
L_000d0590:;
    {
        cpu->r[3] = 0x00004204u;
    }
L_000d0594:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d0598:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x40u);
    }
L_000d059c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_000d05a0:;
    {
        cpu->r[14] = 0x000d05a4u; fn_001535e0(cpu);
    }
L_000d05a4:;
    {
        cpu->r[14] = 0x00004278u;
    }
L_000d05a8:;
    {
        cpu->r[12] = 0x0000427cu;
    }
L_000d05ac:;
    {
        cpu->r[0] = 0x00004358u;
    }
L_000d05b0:;
    {
        cpu->r[1] = 0x0000435cu;
    }
L_000d05b4:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x0006u << 16);
    }
L_000d05b8:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0006u << 16);
    }
L_000d05bc:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0006u << 16);
    }
L_000d05c0:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000d05c4:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_000d05c8:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000d05cc:;
    {
        wr32(cpu->r[4] + cpu->r[9], cpu->r[5]);
    }
L_000d05d0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000d05d8u + + 0x74u);
    }
L_000d05d4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000d05dcu + + 0x5cu);
    }
L_000d05d8:;
    {
        cpu->r[9] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000d05dc:;
    {
        wr32(cpu->r[4] + cpu->r[10], cpu->r[5]);
    }
L_000d05e0:;
    {
        wr32(cpu->r[4] + cpu->r[7], cpu->r[9]);
    }
L_000d05e4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x108u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000d05e8:;
    {
        cpu->r[7] = (~0x00000000u);
    }
L_000d05ec:;
    {
        wr32(cpu->r[4] + cpu->r[14], cpu->r[5]);
    }
L_000d05f0:;
    {
        wr32(cpu->r[4] + cpu->r[6], cpu->r[7]);
    }
L_000d05f4:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[5]);
    }
L_000d05f8:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[9]);
    }
L_000d05fc:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[9]);
    }
L_000d0600:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000d0604:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000d0608:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000020u, 1, 1);
    }
L_000d060c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d0600;
        }
    }
L_000d0610:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_000d0614:;
    {
        cpu->r[6] = (~0x00000000u);
    }
L_000d0618:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000d0620u + + 0x2cu);
    }
L_000d061c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x104u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000d0620:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xfcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000d0624:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000d062cu + + 0x10u);
    }
L_000d0628:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xc0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000d062c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000d0634u + + 0xcu);
    }
L_000d0630:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x100u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000d0634:;
    {
        goto L_000d0650;
    }
L_000d0650:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000d0654:;
    {
        wr32(cpu->r[3] + + 0xa0u, cpu->r[6]);
    }
L_000d0658:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000008u, 1, 1);
    }
L_000d065c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000d0660:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d0650;
        }
    }
L_000d0664:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d0668:;
    {
        cpu->r[10] = 0x00000001u;
    }
L_000d066c:;
    {
        cpu->r[14] = 0x000d0670u; fn_00153efc(cpu);
    }
L_000d0670:;
    {
        cpu->r[0] = 0x00000058u;
    }
L_000d0674:;
    {
        cpu->r[14] = 0x000d0678u; fn_0018ba6c(cpu);
    }
L_000d0678:;
    {
        cpu->r[7] = 0x00001c64u;
    }
L_000d067c:;
    {
        cpu->r[9] = 0x00001c90u;
    }
L_000d0680:;
    {
        cpu->r[11] = 0x0000a414u;
    }
L_000d0684:;
    {
        cpu->r[8] = 0x000082e0u;
    }
L_000d0688:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000d068c:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0001u << 16);
    }
L_000d0690:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_000d0694:;
    {
        cpu->r[11] = (cpu->r[11] & 0xffffu) | (0x0006u << 16);
    }
L_000d0698:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000d069c:;
    {
        cpu->r[14] = 0x000d06a0u; fn_00159498(cpu);
    }
L_000d06a0:;
    {
        cpu->r[2] = 0x00008c4cu;
    }
L_000d06a4:;
    {
        cpu->r[3] = 0x0000006du;
    }
L_000d06a8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000d06ac:;
    {
        cpu->r[1] = 0x0000006bu;
    }
L_000d06b0:;
    {
        wr8(cpu->r[4] + + 0x10cu, cpu->r[10]);
    }
L_000d06b4:;
    {
        cpu->r[0] = 0x000000bbu;
    }
L_000d06b8:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[5]);
    }
L_000d06bc:;
    {
        cpu->r[2] = 0x0000006cu;
    }
L_000d06c0:;
    {
        wr32(cpu->r[4] + + 0x8cu, cpu->r[1]);
    }
L_000d06c4:;
    {
        cpu->r[10] = 0x000081d4u;
    }
L_000d06c8:;
    {
        wr32(cpu->r[4] + + 0x90u, cpu->r[2]);
    }
L_000d06cc:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000d06d0:;
    {
        wr32(cpu->r[4] + + 0x80u, cpu->r[2]);
    }
L_000d06d4:;
    {
        wr32(cpu->r[4] + + 0x9cu, cpu->r[3]);
    }
L_000d06d8:;
    {
        wr32(cpu->r[4] + + 0x84u, cpu->r[3]);
    }
L_000d06dc:;
    {
        wr32(cpu->r[4] + + 0x88u, cpu->r[3]);
    }
L_000d06e0:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
    }
L_000d06e4:;
    {
        wr32(cpu->r[4] + + 0x98u, cpu->r[3]);
    }
L_000d06e8:;
    {
        cpu->r[14] = 0x000d06ecu; imp__Znaj(cpu); /* _Znaj */
    }
L_000d06ec:;
    {
        cpu->r[3] = 0x00008c6cu;
    }
L_000d06f0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d06f4:;
    {
        cpu->r[12] = rd32(0x000d06fcu + - 0xb4u);
    }
L_000d06f8:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[12]);
    }
L_000d06fc:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_000d0700:;
    {
        cpu->r[0] = 0x000002ecu;
    }
L_000d0704:;
    {
        cpu->r[14] = 0x000d0708u; imp__Znaj(cpu); /* _Znaj */
    }
L_000d0708:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x44u);
    }
L_000d070c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x58u);
    }
L_000d0710:;
    {
        cpu->r[3] = 0x00008c70u;
    }
L_000d0714:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d0718:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_000d071c:;
    {
        cpu->r[3] = 0x000081c8u;
    }
L_000d0720:;
    {
        cpu->r[12] = 0x00008c48u;
    }
L_000d0724:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[14]);
    }
L_000d0728:;
    {
        cpu->r[14] = 0x00001c60u;
    }
L_000d072c:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x0001u << 16);
    }
L_000d0730:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d0734:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_000d0738:;
    {
        cpu->r[3] = 0x000081d0u;
    }
L_000d073c:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_000d0740:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d0744:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_000d0748:;
    {
        cpu->r[3] = 0x00008444u;
    }
L_000d074c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d0750:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d0754:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[1]);
    }
L_000d0758:;
    {
        cpu->r[1] = 0x000081c4u;
    }
L_000d075c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_000d0760:;
    {
        cpu->r[3] = 0x000087b4u;
    }
L_000d0764:;
    {
        wr32(cpu->r[4] + cpu->r[14], cpu->r[2]);
    }
L_000d0768:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000d076c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x8u);
    }
L_000d0770:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000d0774:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d0778:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_000d077c:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_000d0780:;
    {
        cpu->r[1] = 0x000081ccu;
    }
L_000d0784:;
    {
        cpu->r[3] = 0x00004304u;
    }
L_000d0788:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000d078c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d0790:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_000d0794:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[3]);
    }
L_000d0798:;
    {
        cpu->r[1] = 0x00008448u;
    }
L_000d079c:;
    {
        cpu->r[3] = 0x00008270u;
    }
L_000d07a0:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000d07a4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d07a8:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_000d07ac:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[3]);
    }
L_000d07b0:;
    {
        cpu->r[1] = 0x0000844cu;
    }
L_000d07b4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x5cu);
    }
L_000d07b8:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000d07bc:;
    {
        wr32(cpu->r[4] + cpu->r[10], cpu->r[6]);
    }
L_000d07c0:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_000d07c4:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0xcu);
    }
L_000d07c8:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[2]);
    }
L_000d07cc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_000d07d0:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
    }
L_000d07d4:;
    {
        cpu->r[1] = 0x000087b8u;
    }
L_000d07d8:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000d07dc:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[1]);
    }
L_000d07e0:;
    {
        cpu->r[1] = 0x00008304u;
    }
L_000d07e4:;
    {
        wr32(cpu->r[4] + cpu->r[9], cpu->r[3]);
    }
L_000d07e8:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000d07ec:;
    {
        cpu->r[9] = 0x00000001u;
    }
L_000d07f0:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[1]);
    }
L_000d07f4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00018000u, 0, 0);
    }
L_000d07f8:;
    {
        wr32(cpu->r[4] + cpu->r[14], cpu->r[0]);
    }
L_000d07fc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000d0800:;
    {
        wr32(cpu->r[4] + cpu->r[8], cpu->r[9]);
    }
L_000d0804:;
    {
        wr32(cpu->r[4] + cpu->r[7], cpu->r[2]);
    }
L_000d0808:;
    {
        wr32(cpu->r[4] + cpu->r[10], cpu->r[6]);
    }
L_000d080c:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[2]);
    }
L_000d0810:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_000d0814:;
    {
        wr32(cpu->r[4] + cpu->r[11], cpu->r[2]);
    }
L_000d0818:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[2]);
    }
L_000d081c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x34u);
    }
L_000d0820:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_000d0824:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        uint32_t v3 = rd32(ea + 12u);
        cpu->r[3] = v0;
        cpu->r[7] = v1;
        cpu->r[8] = v2;
        cpu->r[9] = v3;
    }
L_000d0828:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_000d082c:;
    {
        uint32_t base = cpu->r[10];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[10] = v0;
        cpu->r[12] = v1;
        cpu->r[14] = v2;
    }
L_000d0830:;
    {
        wr8(cpu->r[4] + cpu->r[0], cpu->r[2]);
    }
L_000d0834:;
    {
        wr32(cpu->r[1] + + 0x31cu, cpu->r[2]);
    }
L_000d0838:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000d083c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x38u);
    }
L_000d0840:;
    {
        wr32(cpu->r[1] + + 0x308u, cpu->r[2]);
    }
L_000d0844:;
    {
        wr32(cpu->r[1] + + 0x30cu, cpu->r[2]);
    }
L_000d0848:;
    {
        wr32(cpu->r[1] + + 0x310u, cpu->r[2]);
    }
L_000d084c:;
    {
        wr32(cpu->r[1] + + 0x314u, cpu->r[2]);
    }
L_000d0850:;
    {
        wr32(cpu->r[1] + + 0x318u, cpu->r[2]);
    }
L_000d0854:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000d0858:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_000d085c:;
    {
        wr32(cpu->r[4] + cpu->r[7], cpu->r[2]);
    }
L_000d0860:;
    {
        wr32(cpu->r[4] + cpu->r[8], cpu->r[2]);
    }
L_000d0864:;
    {
        wr32(cpu->r[4] + cpu->r[9], cpu->r[2]);
    }
L_000d0868:;
    {
        wr32(cpu->r[4] + cpu->r[10], cpu->r[2]);
    }
L_000d086c:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[2]);
    }
L_000d0870:;
    {
        wr8(cpu->r[4] + cpu->r[14], cpu->r[2]);
    }
L_000d0874:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_000d0878:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000d087c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00018000u, 0, 0);
    }
L_000d0880:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000028u, 1, 1);
    }
L_000d0884:;
    {
        wr32(cpu->r[2] + + 0x274u, cpu->r[5]);
    }
L_000d0888:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d0874;
        }
    }
L_000d088c:;
    {
        cpu->r[0] = 0x000081e4u;
    }
L_000d0890:;
    {
        cpu->r[12] = 0x000081e8u;
    }
L_000d0894:;
    {
        cpu->r[2] = 0x000081ecu;
    }
L_000d0898:;
    {
        cpu->r[1] = 0x00008268u;
    }
L_000d089c:;
    {
        cpu->r[3] = 0x0000826cu;
    }
L_000d08a0:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000d08a4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000d08a8:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000d08ac:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d08b0:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000d08b4:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[5]);
    }
L_000d08b8:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[5]);
    }
L_000d08bc:;
    {
        cpu->r[0] = 0x00000240u;
    }
L_000d08c0:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[5]);
    }
L_000d08c4:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_000d08c8:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[5]);
    }
L_000d08cc:;
    {
        cpu->r[14] = 0x000d08d0u; fn_0018ba6c(cpu);
    }
L_000d08d0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000d08d4:;
    {
        cpu->r[14] = 0x000d08d8u; fn_0014bd20(cpu);
    }
L_000d08d8:;
    {
        cpu->r[2] = 0x00008818u;
    }
L_000d08dc:;
    {
        cpu->r[3] = 0x00008d7cu;
    }
L_000d08e0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000d08e4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d08e8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d08ec:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[6]);
    }
L_000d08f0:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_000d08f4:;
    {
        cpu->r[14] = 0x000d08f8u; fn_000cf0d0(cpu);
    }
L_000d08f8:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x58u);
    }
L_000d08fc:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x44u);
    }
L_000d0900:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[7]);
    }
L_000d0904:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000d0908:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000d090c:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000d0910:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d0914:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = cpu->r[5];
        }
    }
L_000d0918:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = rd32(cpu->r[13] + + 0x3cu);
        }
    }
L_000d091c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = add_flags(cpu, cpu->r[10], 0x0000009cu, 0, 0);
        }
    }
L_000d0920:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d0ae0;
        }
    }
L_000d0924:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000d0928:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000d092c:;
    {
        cpu->r[5] = cpu->r[6];
    }
L_000d0930:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[9], 0x00000198u, 0, 0);
    }
L_000d0934:;
    {
        cpu->r[0] = 0x00000044u;
    }
L_000d0938:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000d093c:;
    {
        cpu->r[14] = 0x000d0940u; fn_0018ba6c(cpu);
    }
L_000d0940:;
    {
        wr32(cpu->r[0] + + 0x40u, cpu->r[5]);
    }
L_000d0944:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000d0948:;
    {
        cpu->r[14] = 0x000d094cu; fn_001535e0(cpu);
    }
L_000d094c:;
    {
        wr32(cpu->r[7] + + 0x90u, cpu->r[8]);
    }
L_000d0950:;
    {
        cpu->r[0] = 0x00000044u;
    }
L_000d0954:;
    {
        cpu->r[14] = 0x000d0958u; fn_0018ba6c(cpu);
    }
L_000d0958:;
    {
        wr32(cpu->r[0] + + 0x40u, cpu->r[5]);
    }
L_000d095c:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000d0960:;
    {
        cpu->r[14] = 0x000d0964u; fn_001535e0(cpu);
    }
L_000d0964:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000008u, 1, 1);
    }
L_000d0968:;
    {
        uint32_t wb_tmp = cpu->r[7] + 0x00000004u;
        wr32(cpu->r[7], cpu->r[8]);
        cpu->r[7] = wb_tmp;
    }
L_000d096c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d0934;
        }
    }
L_000d0970:;
    {
        cpu->r[2] = 0x000082bcu;
    }
L_000d0974:;
    {
        cpu->r[1] = 0x000082c0u;
    }
L_000d0978:;
    {
        cpu->r[3] = 0x000082c4u;
    }
L_000d097c:;
    {
        cpu->r[0] = 0x000082d8u;
    }
L_000d0980:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000d0984:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d0988:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000d098c:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000d0990:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_000d0994:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x000d099cu + - 0x350u);
    }
L_000d0998:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[5]);
    }
L_000d099c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000d09a0:;
    {
        wr8(cpu->r[4] + cpu->r[0], cpu->r[1]);
    }
L_000d09a4:;
    {
        cpu->r[0] = 0x00000044u;
    }
L_000d09a8:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_000d09ac:;
    {
        cpu->r[6] = 0x00001c68u;
    }
L_000d09b0:;
    {
        cpu->r[14] = 0x000d09b4u; fn_0018ba6c(cpu);
    }
L_000d09b4:;
    {
        cpu->r[2] = 0x000043dcu;
    }
L_000d09b8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000d09bc:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000d09c0:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000d09c4:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[0]);
    }
L_000d09c8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000d09cc:;
    {
        wr8(cpu->r[0] + + 0x34u, cpu->r[5]);
    }
L_000d09d0:;
    {
        wr8(cpu->r[0] + + 0x35u, cpu->r[5]);
    }
L_000d09d4:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000d09d8:;
    {
        wr8(cpu->r[3] + + 0x40u, cpu->r[5]);
    }
L_000d09dc:;
    {
        cpu->r[0] = 0x00000044u;
    }
L_000d09e0:;
    {
        cpu->r[14] = 0x000d09e4u; fn_0018ba6c(cpu);
    }
L_000d09e4:;
    {
        cpu->r[1] = 0x000043e0u;
    }
L_000d09e8:;
    {
        cpu->r[2] = 0x00001d00u;
    }
L_000d09ec:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000d09f0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000d09f4:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[5]);
    }
L_000d09f8:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000d09fc:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[0]);
    }
L_000d0a00:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000d0a04:;
    {
        wr8(cpu->r[0] + + 0x34u, cpu->r[5]);
    }
L_000d0a08:;
    {
        wr8(cpu->r[3] + + 0x35u, cpu->r[5]);
    }
L_000d0a0c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000d0a10:;
    {
        wr8(cpu->r[3] + + 0x40u, cpu->r[5]);
    }
L_000d0a14:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x54u);
    }
L_000d0a18:;
    {
        cpu->r[14] = 0x000d0a1cu; fn_00153efc(cpu);
    }
L_000d0a1c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x50u);
    }
L_000d0a20:;
    {
        cpu->r[14] = 0x000d0a24u; fn_00153efc(cpu);
    }
L_000d0a24:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4cu);
    }
L_000d0a28:;
    {
        cpu->r[14] = 0x000d0a2cu; fn_00153efc(cpu);
    }
L_000d0a2c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x48u);
    }
L_000d0a30:;
    {
        cpu->r[14] = 0x000d0a34u; fn_00153efc(cpu);
    }
L_000d0a34:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x40u);
    }
L_000d0a38:;
    {
        cpu->r[14] = 0x000d0a3cu; fn_00153efc(cpu);
    }
L_000d0a3c:;
    {
        cpu->r[12] = 0x00008824u;
    }
L_000d0a40:;
    {
        cpu->r[0] = 0x00008828u;
    }
L_000d0a44:;
    {
        cpu->r[2] = 0x00008c38u;
    }
L_000d0a48:;
    {
        cpu->r[3] = 0x00008c3cu;
    }
L_000d0a4c:;
    {
        cpu->r[1] = 0x00008c40u;
    }
L_000d0a50:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000d0a54:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d0a58:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000d0a5c:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000d0a60:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000d0a64:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[5]);
    }
L_000d0a68:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[5]);
    }
L_000d0a6c:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[5]);
    }
L_000d0a70:;
    {
        cpu->r[0] = 0x00000044u;
    }
L_000d0a74:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_000d0a78:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[5]);
    }
L_000d0a7c:;
    {
        cpu->r[14] = 0x000d0a80u; fn_00093f34(cpu);
    }
L_000d0a80:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000d0a84:;
    {
        cpu->r[3] = 0x00008c44u;
    }
L_000d0a88:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d0a8c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_000d0a90:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,16));
    }
L_000d0a94:;
    {
        vfp_sync_flags(cpu);
    }
L_000d0a98:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_000d0a9c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_000d0aa0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000d0aa4:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[1]);
    }
L_000d0aa8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d0b28;
        }
    }
L_000d0aac:;
    {
        cpu->r[2] = 0x0000438cu;
    }
L_000d0ab0:;
    {
        cpu->r[1] = 0x0000a638u;
    }
L_000d0ab4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000d0ab8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000d0abc:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000d0ac0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d0ac4:;
    {
        wr8(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_000d0ac8:;
    {
        cpu->r[2] = 0x00009fbcu;
    }
L_000d0acc:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_000d0ad0:;
    {
        wr8(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_000d0ad4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000064u, 0, 0);
    }
L_000d0ad8:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_000d0adc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000d0ae0u)) return;
    }
L_000d0ae0:;
    {
        wr32(cpu->r[6], cpu->r[7]);
    }
L_000d0ae4:;
    {
        cpu->r[0] = 0x00000044u;
    }
L_000d0ae8:;
    {
        cpu->r[14] = 0x000d0aecu; fn_0018ba6c(cpu);
    }
L_000d0aec:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000d0af0:;
    {
        wr32(cpu->r[0] + + 0x40u, cpu->r[7]);
    }
L_000d0af4:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000d0af8:;
    {
        cpu->r[14] = 0x000d0afcu; fn_001535e0(cpu);
    }
L_000d0afc:;
    {
        wr32(cpu->r[6] + + 0x1acu, cpu->r[8]);
    }
L_000d0b00:;
    {
        cpu->r[0] = 0x00000044u;
    }
L_000d0b04:;
    {
        cpu->r[14] = 0x000d0b08u; fn_0018ba6c(cpu);
    }
L_000d0b08:;
    {
        wr32(cpu->r[0] + + 0x40u, cpu->r[7]);
    }
L_000d0b0c:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000d0b10:;
    {
        cpu->r[14] = 0x000d0b14u; fn_001535e0(cpu);
    }
L_000d0b14:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000007u, 1, 1);
    }
L_000d0b18:;
    {
        wr32(cpu->r[6] + + 0x11cu, cpu->r[8]);
    }
L_000d0b1c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_000d0b20:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d0ae0;
        }
    }
L_000d0b24:;
    {
        goto L_000d0924;
    }
L_000d0b28:;
    {
        cpu->r[0] = 0x00000400u;
    }
L_000d0b2c:;
    {
        cpu->r[14] = 0x000d0b30u; imp__Znaj(cpu); /* _Znaj */
    }
L_000d0b30:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d0b34:;
    {
        wr32(cpu->r[4] + cpu->r[6], cpu->r[0]);
    }
L_000d0b38:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00001c6cu;
        }
    }
L_000d0b3c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000100u;
        }
    }
L_000d0b40:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000d0b44:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
        }
    }
L_000d0b48:;
    {
        goto L_000d0aac;
    }
}

/* _ZN5SceneC2Ev @ 000d0b4c (arm) */
void fn_000d0b4c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000d0b4c:;
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
L_000d0b50:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_000d0b54:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000d0b58:;
    {
        cpu->r[0] = rd32(0x000d0b60u + + 0x494u);
    }
L_000d0b5c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000064u, 1, 0);
    }
L_000d0b60:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00018400u, 0, 0);
    }
L_000d0b64:;
    {
        cpu->r[7] = 0x00001c7cu;
    }
L_000d0b68:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[1]);
    }
L_000d0b6c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[1], 0x00000084u, 0, 0);
    }
L_000d0b70:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[0]);
    }
L_000d0b74:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00009f00u, 0, 0);
    }
L_000d0b78:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000c4u, 0, 0);
    }
L_000d0b7c:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000d0b80:;
    {
        cpu->r[14] = 0x000d0b84u; fn_00146da0(cpu);
    }
L_000d0b84:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x44u);
    }
L_000d0b88:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x0000a100u, 0, 0);
    }
L_000d0b8c:;
    {
        cpu->r[9] = 0x00001c6cu;
    }
L_000d0b90:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000054u, 0, 0);
    }
L_000d0b94:;
    {
        cpu->r[2] = add_flags(cpu, 0x000d0b9cu, cpu->r[2], 0, 0);
    }
L_000d0b98:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[2]);
    }
L_000d0b9c:;
    {
        cpu->r[14] = 0x000d0ba0u; fn_0012d8b8(cpu);
    }
L_000d0ba0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[7]);
    }
L_000d0ba4:;
    {
        cpu->r[7] = 0x00001c80u;
    }
L_000d0ba8:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000d0bac:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[7]);
    }
L_000d0bb0:;
    {
        cpu->r[7] = 0x00001c84u;
    }
L_000d0bb4:;
    {
        cpu->r[14] = 0x000017fcu;
    }
L_000d0bb8:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000d0bbc:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[7]);
    }
L_000d0bc0:;
    {
        cpu->r[7] = 0x00001c88u;
    }
L_000d0bc4:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x0001u << 16);
    }
L_000d0bc8:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000d0bcc:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[7]);
    }
L_000d0bd0:;
    {
        cpu->r[7] = 0x00001c8cu;
    }
L_000d0bd4:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0001u << 16);
    }
L_000d0bd8:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000d0bdc:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[7]);
    }
L_000d0be0:;
    {
        cpu->r[7] = 0x00001ce8u;
    }
L_000d0be4:;
    {
        cpu->r[12] = 0x00001804u;
    }
L_000d0be8:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000d0bec:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[7]);
    }
L_000d0bf0:;
    {
        cpu->r[7] = 0x00001cecu;
    }
L_000d0bf4:;
    {
        cpu->r[0] = 0x00001808u;
    }
L_000d0bf8:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000d0bfc:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[7]);
    }
L_000d0c00:;
    {
        cpu->r[7] = 0x00001cf0u;
    }
L_000d0c04:;
    {
        cpu->r[10] = 0x0000180cu;
    }
L_000d0c08:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000d0c0c:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[7]);
    }
L_000d0c10:;
    {
        cpu->r[7] = 0x00001cf4u;
    }
L_000d0c14:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000d0c18:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000d0c1c:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[7]);
    }
L_000d0c20:;
    {
        cpu->r[7] = 0x000082a4u;
    }
L_000d0c24:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000d0c28:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000d0c2c:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000d0c30:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000d0c34:;
    {
        wr32(cpu->r[4] + cpu->r[9], cpu->r[3]);
    }
L_000d0c38:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[7]);
    }
L_000d0c3c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000d0c44u + + 0x3b8u);
    }
L_000d0c40:;
    {
        cpu->r[7] = 0x000082a8u;
    }
L_000d0c44:;
    {
        cpu->r[9] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000d0c48:;
    {
        wr32(cpu->r[4] + cpu->r[14], cpu->r[9]);
    }
L_000d0c4c:;
    {
        cpu->r[14] = 0x00011800u;
    }
L_000d0c50:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000d0c54:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[7]);
    }
L_000d0c58:;
    {
        cpu->r[7] = 0x000082acu;
    }
L_000d0c5c:;
    {
        wr32(cpu->r[4] + cpu->r[10], cpu->r[9]);
    }
L_000d0c60:;
    {
        wr32(cpu->r[4] + cpu->r[14], cpu->r[9]);
    }
L_000d0c64:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000d0c68:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[9]);
    }
L_000d0c6c:;
    {
        cpu->r[8] = 0x000017f8u;
    }
L_000d0c70:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[9]);
    }
L_000d0c74:;
    {
        cpu->r[11] = 0x00001c68u;
    }
L_000d0c78:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x8u);
    }
L_000d0c7c:;
    {
        cpu->r[1] = 0x00001c70u;
    }
L_000d0c80:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_000d0c84:;
    {
        cpu->r[2] = 0x00001c78u;
    }
L_000d0c88:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x10u);
    }
L_000d0c8c:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_000d0c90:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[7]);
    }
L_000d0c94:;
    {
        cpu->r[7] = 0x000082b0u;
    }
L_000d0c98:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000d0c9c:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000d0ca0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000d0ca4:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000d0ca8:;
    {
        cpu->r[11] = (cpu->r[11] & 0xffffu) | (0x0001u << 16);
    }
L_000d0cac:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[7]);
    }
L_000d0cb0:;
    {
        cpu->r[7] = 0x000082b4u;
    }
L_000d0cb4:;
    {
        wr32(cpu->r[4] + cpu->r[8], cpu->r[9]);
    }
L_000d0cb8:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000d0cbc:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[7]);
    }
L_000d0cc0:;
    {
        cpu->r[7] = 0x000082b8u;
    }
L_000d0cc4:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_000d0cc8:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000d0ccc:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_000d0cd0:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[7]);
    }
L_000d0cd4:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_000d0cd8:;
    {
        wr32(cpu->r[4] + cpu->r[10], cpu->r[3]);
    }
L_000d0cdc:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_000d0ce0:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[3]);
    }
L_000d0ce4:;
    {
        wr32(cpu->r[4] + cpu->r[14], cpu->r[3]);
    }
L_000d0ce8:;
    {
        wr32(cpu->r[4] + cpu->r[11], cpu->r[3]);
    }
L_000d0cec:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[3]);
    }
L_000d0cf0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_000d0cf4:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[1] = v0;
        cpu->r[2] = v1;
        cpu->r[8] = v2;
    }
L_000d0cf8:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_000d0cfc:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_000d0d00:;
    {
        wr32(cpu->r[4] + cpu->r[8], cpu->r[3]);
    }
L_000d0d04:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_000d0d08:;
    {
        uint32_t base = cpu->r[9];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        uint32_t v3 = rd32(ea + 12u);
        cpu->r[9] = v0;
        cpu->r[10] = v1;
        cpu->r[12] = v2;
        cpu->r[14] = v3;
    }
L_000d0d0c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_000d0d10:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        uint32_t v3 = rd32(ea + 12u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
        cpu->r[8] = v3;
    }
L_000d0d14:;
    {
        wr32(cpu->r[4] + cpu->r[9], cpu->r[3]);
    }
L_000d0d18:;
    {
        wr32(cpu->r[4] + cpu->r[10], cpu->r[3]);
    }
L_000d0d1c:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[3]);
    }
L_000d0d20:;
    {
        wr32(cpu->r[4] + cpu->r[14], cpu->r[3]);
    }
L_000d0d24:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[3]);
    }
L_000d0d28:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_000d0d2c:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_000d0d30:;
    {
        wr32(cpu->r[4] + cpu->r[8], cpu->r[3]);
    }
L_000d0d34:;
    {
        wr32(cpu->r[5] + + 0x40u, cpu->r[7]);
    }
L_000d0d38:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_000d0d3c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000044u, 0, 0);
    }
L_000d0d40:;
    {
        cpu->r[14] = 0x000d0d44u; fn_001535e0(cpu);
    }
L_000d0d44:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000330u, 1, 1);
    }
L_000d0d48:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000044u, 0, 0);
    }
L_000d0d4c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d0d34;
        }
    }
L_000d0d50:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x48u);
    }
L_000d0d54:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[4], 0x00018c00u, 0, 0);
    }
L_000d0d58:;
    {
        cpu->r[6] = 0x00008cc0u;
    }
L_000d0d5c:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[10]);
    }
L_000d0d60:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[9], 0x000003bcu, 0, 0);
    }
L_000d0d64:;
    {
        cpu->r[10] = 0x00008cbcu;
    }
L_000d0d68:;
    {
        cpu->r[14] = 0x000d0d6cu; fn_00128d74(cpu);
    }
L_000d0d6c:;
    {
        cpu->r[5] = 0x00008cc4u;
    }
L_000d0d70:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000d0d74:;
    {
        cpu->r[0] = 0x00008cb8u;
    }
L_000d0d78:;
    {
        cpu->r[14] = 0x00008dd4u;
    }
L_000d0d7c:;
    {
        cpu->r[12] = 0x00008dd8u;
    }
L_000d0d80:;
    {
        cpu->r[1] = 0x00008ddcu;
    }
L_000d0d84:;
    {
        cpu->r[2] = 0x00008de0u;
    }
L_000d0d88:;
    {
        cpu->r[3] = 0x00008e24u;
    }
L_000d0d8c:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x0001u << 16);
    }
L_000d0d90:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000d0d94:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000d0d98:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000d0d9c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d0da0:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000d0da4:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000d0da8:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000d0dac:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000d0db0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[9], 0x000001e4u, 0, 0);
    }
L_000d0db4:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[7]);
    }
L_000d0db8:;
    {
        wr32(cpu->r[4] + cpu->r[14], cpu->r[7]);
    }
L_000d0dbc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d0dc0:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[7]);
    }
L_000d0dc4:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[7]);
    }
L_000d0dc8:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[7]);
    }
L_000d0dcc:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[7]);
    }
L_000d0dd0:;
    {
        wr32(cpu->r[4] + cpu->r[10], cpu->r[7]);
    }
L_000d0dd4:;
    {
        wr32(cpu->r[4] + cpu->r[6], cpu->r[7]);
    }
L_000d0dd8:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[7]);
    }
L_000d0ddc:;
    {
        cpu->r[14] = 0x000d0de0u; fn_001535e0(cpu);
    }
L_000d0de0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00022400u, 0, 0);
    }
L_000d0de4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000074u, 0, 0);
    }
L_000d0de8:;
    {
        cpu->r[14] = 0x00008e64u;
    }
L_000d0dec:;
    {
        cpu->r[0] = 0x00008e68u;
    }
L_000d0df0:;
    {
        cpu->r[1] = 0x00008e6cu;
    }
L_000d0df4:;
    {
        cpu->r[12] = 0x00008e70u;
    }
L_000d0df8:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x0001u << 16);
    }
L_000d0dfc:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000d0e00:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000d0e04:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000d0e08:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x0000e100u, 0, 0);
    }
L_000d0e0c:;
    {
        wr32(cpu->r[4] + cpu->r[14], cpu->r[7]);
    }
L_000d0e10:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000d0e18u + + 0x1e4u);
    }
L_000d0e14:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[7]);
    }
L_000d0e18:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[7]);
    }
L_000d0e1c:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[7]);
    }
L_000d0e20:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000d0e24:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000d0e28:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000d0e2c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_000d0e30:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000d0e34:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d0e20;
        }
    }
L_000d0e38:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[4], 0x00030400u, 0, 0);
    }
L_000d0e3c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000d0e40:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000174u, 0, 0);
    }
L_000d0e44:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], cpu->r[5], 0, 0);
    }
L_000d0e48:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000010u, 0, 0);
    }
L_000d0e4c:;
    {
        cpu->r[14] = 0x000d0e50u; fn_00155a80(cpu);
    }
L_000d0e50:;
    {
        sub_flags(cpu, cpu->r[5], 0x00012c00u, 1, 1);
    }
L_000d0e54:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d0e44;
        }
    }
L_000d0e58:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00043000u, 0, 0);
    }
L_000d0e5c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000d0e64u + + 0x198u);
    }
L_000d0e60:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000174u, 0, 0);
    }
L_000d0e64:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x0000e100u, 0, 0);
    }
L_000d0e68:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000d0e6c:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000d0e70:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000d0e74:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_000d0e78:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_000d0e7c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d0e68;
        }
    }
L_000d0e80:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[4], 0x00051000u, 0, 0);
    }
L_000d0e84:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000d0e88:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000274u, 0, 0);
    }
L_000d0e8c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], cpu->r[5], 0, 0);
    }
L_000d0e90:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000010u, 0, 0);
    }
L_000d0e94:;
    {
        cpu->r[14] = 0x000d0e98u; fn_00155a80(cpu);
    }
L_000d0e98:;
    {
        sub_flags(cpu, cpu->r[5], 0x00012c00u, 1, 1);
    }
L_000d0e9c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d0e8c;
        }
    }
L_000d0ea0:;
    {
        cpu->r[3] = 0x000040f4u;
    }
L_000d0ea4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[4], 0x00064000u, 0, 0);
    }
L_000d0ea8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d0eac:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[6], 0x000000b4u, 0, 0);
    }
L_000d0eb0:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000d0eb4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000d0eb8:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_000d0ebc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[6], 0x000000f8u, 0, 0);
    }
L_000d0ec0:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[10]);
    }
L_000d0ec4:;
    {
        cpu->r[9] = 0x00004270u;
    }
L_000d0ec8:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[12]);
    }
L_000d0ecc:;
    {
        cpu->r[14] = 0x000d0ed0u; fn_001535e0(cpu);
    }
L_000d0ed0:;
    {
        cpu->r[3] = 0x00004138u;
    }
L_000d0ed4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x50u);
    }
L_000d0ed8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d0edc:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[6], 0x0000013cu, 0, 0);
    }
L_000d0ee0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], 0x00000180u, 0, 0);
    }
L_000d0ee4:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[14]);
    }
L_000d0ee8:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_000d0eec:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x000001c4u, 0, 0);
    }
L_000d0ef0:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[1]);
    }
L_000d0ef4:;
    {
        cpu->r[10] = 0x00004274u;
    }
L_000d0ef8:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[6]);
    }
L_000d0efc:;
    {
        cpu->r[14] = 0x000d0f00u; fn_001535e0(cpu);
    }
L_000d0f00:;
    {
        cpu->r[3] = 0x0000417cu;
    }
L_000d0f04:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4cu);
    }
L_000d0f08:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d0f0c:;
    {
        cpu->r[7] = 0x00004360u;
    }
L_000d0f10:;
    {
        cpu->r[6] = 0x000017f0u;
    }
L_000d0f14:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0006u << 16);
    }
L_000d0f18:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_000d0f1c:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0006u << 16);
    }
L_000d0f20:;
    {
        cpu->r[14] = 0x000d0f24u; fn_001535e0(cpu);
    }
L_000d0f24:;
    {
        cpu->r[3] = 0x000041c0u;
    }
L_000d0f28:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d0f2c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x48u);
    }
L_000d0f30:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0006u << 16);
    }
L_000d0f34:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000d0f38:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_000d0f3c:;
    {
        cpu->r[14] = 0x000d0f40u; fn_001535e0(cpu);
    }
L_000d0f40:;
    {
        cpu->r[3] = 0x00004204u;
    }
L_000d0f44:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d0f48:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x40u);
    }
L_000d0f4c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_000d0f50:;
    {
        cpu->r[14] = 0x000d0f54u; fn_001535e0(cpu);
    }
L_000d0f54:;
    {
        cpu->r[14] = 0x00004278u;
    }
L_000d0f58:;
    {
        cpu->r[12] = 0x0000427cu;
    }
L_000d0f5c:;
    {
        cpu->r[0] = 0x00004358u;
    }
L_000d0f60:;
    {
        cpu->r[1] = 0x0000435cu;
    }
L_000d0f64:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x0006u << 16);
    }
L_000d0f68:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0006u << 16);
    }
L_000d0f6c:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0006u << 16);
    }
L_000d0f70:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000d0f74:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_000d0f78:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000d0f7c:;
    {
        wr32(cpu->r[4] + cpu->r[9], cpu->r[5]);
    }
L_000d0f80:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000d0f88u + + 0x74u);
    }
L_000d0f84:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000d0f8cu + + 0x5cu);
    }
L_000d0f88:;
    {
        cpu->r[9] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000d0f8c:;
    {
        wr32(cpu->r[4] + cpu->r[10], cpu->r[5]);
    }
L_000d0f90:;
    {
        wr32(cpu->r[4] + cpu->r[7], cpu->r[9]);
    }
L_000d0f94:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x108u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000d0f98:;
    {
        cpu->r[7] = (~0x00000000u);
    }
L_000d0f9c:;
    {
        wr32(cpu->r[4] + cpu->r[14], cpu->r[5]);
    }
L_000d0fa0:;
    {
        wr32(cpu->r[4] + cpu->r[6], cpu->r[7]);
    }
L_000d0fa4:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[5]);
    }
L_000d0fa8:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[9]);
    }
L_000d0fac:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[9]);
    }
L_000d0fb0:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000d0fb4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000d0fb8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000020u, 1, 1);
    }
L_000d0fbc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d0fb0;
        }
    }
L_000d0fc0:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_000d0fc4:;
    {
        cpu->r[6] = (~0x00000000u);
    }
L_000d0fc8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000d0fd0u + + 0x2cu);
    }
L_000d0fcc:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x104u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000d0fd0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xfcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000d0fd4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000d0fdcu + + 0x10u);
    }
L_000d0fd8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xc0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000d0fdc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000d0fe4u + + 0xcu);
    }
L_000d0fe0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x100u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000d0fe4:;
    {
        goto L_000d1000;
    }
L_000d1000:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000d1004:;
    {
        wr32(cpu->r[3] + + 0xa0u, cpu->r[6]);
    }
L_000d1008:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000008u, 1, 1);
    }
L_000d100c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000d1010:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d1000;
        }
    }
L_000d1014:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d1018:;
    {
        cpu->r[10] = 0x00000001u;
    }
L_000d101c:;
    {
        cpu->r[14] = 0x000d1020u; fn_00153efc(cpu);
    }
L_000d1020:;
    {
        cpu->r[0] = 0x00000058u;
    }
L_000d1024:;
    {
        cpu->r[14] = 0x000d1028u; fn_0018ba6c(cpu);
    }
L_000d1028:;
    {
        cpu->r[7] = 0x00001c64u;
    }
L_000d102c:;
    {
        cpu->r[9] = 0x00001c90u;
    }
L_000d1030:;
    {
        cpu->r[11] = 0x0000a414u;
    }
L_000d1034:;
    {
        cpu->r[8] = 0x000082e0u;
    }
L_000d1038:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000d103c:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0001u << 16);
    }
L_000d1040:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_000d1044:;
    {
        cpu->r[11] = (cpu->r[11] & 0xffffu) | (0x0006u << 16);
    }
L_000d1048:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000d104c:;
    {
        cpu->r[14] = 0x000d1050u; fn_00159498(cpu);
    }
L_000d1050:;
    {
        cpu->r[2] = 0x00008c4cu;
    }
L_000d1054:;
    {
        cpu->r[3] = 0x0000006du;
    }
L_000d1058:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000d105c:;
    {
        cpu->r[1] = 0x0000006bu;
    }
L_000d1060:;
    {
        wr8(cpu->r[4] + + 0x10cu, cpu->r[10]);
    }
L_000d1064:;
    {
        cpu->r[0] = 0x000000bbu;
    }
L_000d1068:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[5]);
    }
L_000d106c:;
    {
        cpu->r[2] = 0x0000006cu;
    }
L_000d1070:;
    {
        wr32(cpu->r[4] + + 0x8cu, cpu->r[1]);
    }
L_000d1074:;
    {
        cpu->r[10] = 0x000081d4u;
    }
L_000d1078:;
    {
        wr32(cpu->r[4] + + 0x90u, cpu->r[2]);
    }
L_000d107c:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000d1080:;
    {
        wr32(cpu->r[4] + + 0x80u, cpu->r[2]);
    }
L_000d1084:;
    {
        wr32(cpu->r[4] + + 0x9cu, cpu->r[3]);
    }
L_000d1088:;
    {
        wr32(cpu->r[4] + + 0x84u, cpu->r[3]);
    }
L_000d108c:;
    {
        wr32(cpu->r[4] + + 0x88u, cpu->r[3]);
    }
L_000d1090:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[3]);
    }
L_000d1094:;
    {
        wr32(cpu->r[4] + + 0x98u, cpu->r[3]);
    }
L_000d1098:;
    {
        cpu->r[14] = 0x000d109cu; imp__Znaj(cpu); /* _Znaj */
    }
L_000d109c:;
    {
        cpu->r[3] = 0x00008c6cu;
    }
L_000d10a0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d10a4:;
    {
        cpu->r[12] = rd32(0x000d10acu + - 0xb4u);
    }
L_000d10a8:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[12]);
    }
L_000d10ac:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_000d10b0:;
    {
        cpu->r[0] = 0x000002ecu;
    }
L_000d10b4:;
    {
        cpu->r[14] = 0x000d10b8u; imp__Znaj(cpu); /* _Znaj */
    }
L_000d10b8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x44u);
    }
L_000d10bc:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x58u);
    }
L_000d10c0:;
    {
        cpu->r[3] = 0x00008c70u;
    }
L_000d10c4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d10c8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_000d10cc:;
    {
        cpu->r[3] = 0x000081c8u;
    }
L_000d10d0:;
    {
        cpu->r[12] = 0x00008c48u;
    }
L_000d10d4:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[14]);
    }
L_000d10d8:;
    {
        cpu->r[14] = 0x00001c60u;
    }
L_000d10dc:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x0001u << 16);
    }
L_000d10e0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d10e4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_000d10e8:;
    {
        cpu->r[3] = 0x000081d0u;
    }
L_000d10ec:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_000d10f0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d10f4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_000d10f8:;
    {
        cpu->r[3] = 0x00008444u;
    }
L_000d10fc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d1100:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d1104:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[1]);
    }
L_000d1108:;
    {
        cpu->r[1] = 0x000081c4u;
    }
L_000d110c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_000d1110:;
    {
        cpu->r[3] = 0x000087b4u;
    }
L_000d1114:;
    {
        wr32(cpu->r[4] + cpu->r[14], cpu->r[2]);
    }
L_000d1118:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000d111c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x8u);
    }
L_000d1120:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000d1124:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d1128:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_000d112c:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_000d1130:;
    {
        cpu->r[1] = 0x000081ccu;
    }
L_000d1134:;
    {
        cpu->r[3] = 0x00004304u;
    }
L_000d1138:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000d113c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d1140:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_000d1144:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[3]);
    }
L_000d1148:;
    {
        cpu->r[1] = 0x00008448u;
    }
L_000d114c:;
    {
        cpu->r[3] = 0x00008270u;
    }
L_000d1150:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000d1154:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d1158:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_000d115c:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[3]);
    }
L_000d1160:;
    {
        cpu->r[1] = 0x0000844cu;
    }
L_000d1164:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x5cu);
    }
L_000d1168:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000d116c:;
    {
        wr32(cpu->r[4] + cpu->r[10], cpu->r[6]);
    }
L_000d1170:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_000d1174:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0xcu);
    }
L_000d1178:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[2]);
    }
L_000d117c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_000d1180:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
    }
L_000d1184:;
    {
        cpu->r[1] = 0x000087b8u;
    }
L_000d1188:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000d118c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[1]);
    }
L_000d1190:;
    {
        cpu->r[1] = 0x00008304u;
    }
L_000d1194:;
    {
        wr32(cpu->r[4] + cpu->r[9], cpu->r[3]);
    }
L_000d1198:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000d119c:;
    {
        cpu->r[9] = 0x00000001u;
    }
L_000d11a0:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[1]);
    }
L_000d11a4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00018000u, 0, 0);
    }
L_000d11a8:;
    {
        wr32(cpu->r[4] + cpu->r[14], cpu->r[0]);
    }
L_000d11ac:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000d11b0:;
    {
        wr32(cpu->r[4] + cpu->r[8], cpu->r[9]);
    }
L_000d11b4:;
    {
        wr32(cpu->r[4] + cpu->r[7], cpu->r[2]);
    }
L_000d11b8:;
    {
        wr32(cpu->r[4] + cpu->r[10], cpu->r[6]);
    }
L_000d11bc:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[2]);
    }
L_000d11c0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_000d11c4:;
    {
        wr32(cpu->r[4] + cpu->r[11], cpu->r[2]);
    }
L_000d11c8:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[2]);
    }
L_000d11cc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x34u);
    }
L_000d11d0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_000d11d4:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        uint32_t v3 = rd32(ea + 12u);
        cpu->r[3] = v0;
        cpu->r[7] = v1;
        cpu->r[8] = v2;
        cpu->r[9] = v3;
    }
L_000d11d8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_000d11dc:;
    {
        uint32_t base = cpu->r[10];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[10] = v0;
        cpu->r[12] = v1;
        cpu->r[14] = v2;
    }
L_000d11e0:;
    {
        wr8(cpu->r[4] + cpu->r[0], cpu->r[2]);
    }
L_000d11e4:;
    {
        wr32(cpu->r[1] + + 0x31cu, cpu->r[2]);
    }
L_000d11e8:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000d11ec:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x38u);
    }
L_000d11f0:;
    {
        wr32(cpu->r[1] + + 0x308u, cpu->r[2]);
    }
L_000d11f4:;
    {
        wr32(cpu->r[1] + + 0x30cu, cpu->r[2]);
    }
L_000d11f8:;
    {
        wr32(cpu->r[1] + + 0x310u, cpu->r[2]);
    }
L_000d11fc:;
    {
        wr32(cpu->r[1] + + 0x314u, cpu->r[2]);
    }
L_000d1200:;
    {
        wr32(cpu->r[1] + + 0x318u, cpu->r[2]);
    }
L_000d1204:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000d1208:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_000d120c:;
    {
        wr32(cpu->r[4] + cpu->r[7], cpu->r[2]);
    }
L_000d1210:;
    {
        wr32(cpu->r[4] + cpu->r[8], cpu->r[2]);
    }
L_000d1214:;
    {
        wr32(cpu->r[4] + cpu->r[9], cpu->r[2]);
    }
L_000d1218:;
    {
        wr32(cpu->r[4] + cpu->r[10], cpu->r[2]);
    }
L_000d121c:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[2]);
    }
L_000d1220:;
    {
        wr8(cpu->r[4] + cpu->r[14], cpu->r[2]);
    }
L_000d1224:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_000d1228:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000d122c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00018000u, 0, 0);
    }
L_000d1230:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000028u, 1, 1);
    }
L_000d1234:;
    {
        wr32(cpu->r[2] + + 0x274u, cpu->r[5]);
    }
L_000d1238:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d1224;
        }
    }
L_000d123c:;
    {
        cpu->r[0] = 0x000081e4u;
    }
L_000d1240:;
    {
        cpu->r[12] = 0x000081e8u;
    }
L_000d1244:;
    {
        cpu->r[2] = 0x000081ecu;
    }
L_000d1248:;
    {
        cpu->r[1] = 0x00008268u;
    }
L_000d124c:;
    {
        cpu->r[3] = 0x0000826cu;
    }
L_000d1250:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000d1254:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000d1258:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000d125c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d1260:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000d1264:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[5]);
    }
L_000d1268:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[5]);
    }
L_000d126c:;
    {
        cpu->r[0] = 0x00000240u;
    }
L_000d1270:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[5]);
    }
L_000d1274:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_000d1278:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[5]);
    }
L_000d127c:;
    {
        cpu->r[14] = 0x000d1280u; fn_0018ba6c(cpu);
    }
L_000d1280:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000d1284:;
    {
        cpu->r[14] = 0x000d1288u; fn_0014bd20(cpu);
    }
L_000d1288:;
    {
        cpu->r[2] = 0x00008818u;
    }
L_000d128c:;
    {
        cpu->r[3] = 0x00008d7cu;
    }
L_000d1290:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000d1294:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d1298:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d129c:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[6]);
    }
L_000d12a0:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_000d12a4:;
    {
        cpu->r[14] = 0x000d12a8u; fn_000cf0d0(cpu);
    }
L_000d12a8:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x58u);
    }
L_000d12ac:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x44u);
    }
L_000d12b0:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[7]);
    }
L_000d12b4:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000d12b8:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000d12bc:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000d12c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d12c4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = cpu->r[5];
        }
    }
L_000d12c8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = rd32(cpu->r[13] + + 0x3cu);
        }
    }
L_000d12cc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = add_flags(cpu, cpu->r[10], 0x0000009cu, 0, 0);
        }
    }
L_000d12d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d1490;
        }
    }
L_000d12d4:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000d12d8:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_000d12dc:;
    {
        cpu->r[5] = cpu->r[6];
    }
L_000d12e0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[9], 0x00000198u, 0, 0);
    }
L_000d12e4:;
    {
        cpu->r[0] = 0x00000044u;
    }
L_000d12e8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000d12ec:;
    {
        cpu->r[14] = 0x000d12f0u; fn_0018ba6c(cpu);
    }
L_000d12f0:;
    {
        wr32(cpu->r[0] + + 0x40u, cpu->r[5]);
    }
L_000d12f4:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000d12f8:;
    {
        cpu->r[14] = 0x000d12fcu; fn_001535e0(cpu);
    }
L_000d12fc:;
    {
        wr32(cpu->r[7] + + 0x90u, cpu->r[8]);
    }
L_000d1300:;
    {
        cpu->r[0] = 0x00000044u;
    }
L_000d1304:;
    {
        cpu->r[14] = 0x000d1308u; fn_0018ba6c(cpu);
    }
L_000d1308:;
    {
        wr32(cpu->r[0] + + 0x40u, cpu->r[5]);
    }
L_000d130c:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000d1310:;
    {
        cpu->r[14] = 0x000d1314u; fn_001535e0(cpu);
    }
L_000d1314:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000008u, 1, 1);
    }
L_000d1318:;
    {
        uint32_t wb_tmp = cpu->r[7] + 0x00000004u;
        wr32(cpu->r[7], cpu->r[8]);
        cpu->r[7] = wb_tmp;
    }
L_000d131c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d12e4;
        }
    }
L_000d1320:;
    {
        cpu->r[2] = 0x000082bcu;
    }
L_000d1324:;
    {
        cpu->r[1] = 0x000082c0u;
    }
L_000d1328:;
    {
        cpu->r[3] = 0x000082c4u;
    }
L_000d132c:;
    {
        cpu->r[0] = 0x000082d8u;
    }
L_000d1330:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000d1334:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d1338:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000d133c:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000d1340:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_000d1344:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x000d134cu + - 0x350u);
    }
L_000d1348:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[5]);
    }
L_000d134c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000d1350:;
    {
        wr8(cpu->r[4] + cpu->r[0], cpu->r[1]);
    }
L_000d1354:;
    {
        cpu->r[0] = 0x00000044u;
    }
L_000d1358:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_000d135c:;
    {
        cpu->r[6] = 0x00001c68u;
    }
L_000d1360:;
    {
        cpu->r[14] = 0x000d1364u; fn_0018ba6c(cpu);
    }
L_000d1364:;
    {
        cpu->r[2] = 0x000043dcu;
    }
L_000d1368:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000d136c:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000d1370:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000d1374:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[0]);
    }
L_000d1378:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000d137c:;
    {
        wr8(cpu->r[0] + + 0x34u, cpu->r[5]);
    }
L_000d1380:;
    {
        wr8(cpu->r[0] + + 0x35u, cpu->r[5]);
    }
L_000d1384:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000d1388:;
    {
        wr8(cpu->r[3] + + 0x40u, cpu->r[5]);
    }
L_000d138c:;
    {
        cpu->r[0] = 0x00000044u;
    }
L_000d1390:;
    {
        cpu->r[14] = 0x000d1394u; fn_0018ba6c(cpu);
    }
L_000d1394:;
    {
        cpu->r[1] = 0x000043e0u;
    }
L_000d1398:;
    {
        cpu->r[2] = 0x00001d00u;
    }
L_000d139c:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000d13a0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000d13a4:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[5]);
    }
L_000d13a8:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_000d13ac:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[0]);
    }
L_000d13b0:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000d13b4:;
    {
        wr8(cpu->r[0] + + 0x34u, cpu->r[5]);
    }
L_000d13b8:;
    {
        wr8(cpu->r[3] + + 0x35u, cpu->r[5]);
    }
L_000d13bc:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_000d13c0:;
    {
        wr8(cpu->r[3] + + 0x40u, cpu->r[5]);
    }
L_000d13c4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x54u);
    }
L_000d13c8:;
    {
        cpu->r[14] = 0x000d13ccu; fn_00153efc(cpu);
    }
L_000d13cc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x50u);
    }
L_000d13d0:;
    {
        cpu->r[14] = 0x000d13d4u; fn_00153efc(cpu);
    }
L_000d13d4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4cu);
    }
L_000d13d8:;
    {
        cpu->r[14] = 0x000d13dcu; fn_00153efc(cpu);
    }
L_000d13dc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x48u);
    }
L_000d13e0:;
    {
        cpu->r[14] = 0x000d13e4u; fn_00153efc(cpu);
    }
L_000d13e4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x40u);
    }
L_000d13e8:;
    {
        cpu->r[14] = 0x000d13ecu; fn_00153efc(cpu);
    }
L_000d13ec:;
    {
        cpu->r[12] = 0x00008824u;
    }
L_000d13f0:;
    {
        cpu->r[0] = 0x00008828u;
    }
L_000d13f4:;
    {
        cpu->r[2] = 0x00008c38u;
    }
L_000d13f8:;
    {
        cpu->r[3] = 0x00008c3cu;
    }
L_000d13fc:;
    {
        cpu->r[1] = 0x00008c40u;
    }
L_000d1400:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000d1404:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d1408:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000d140c:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000d1410:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000d1414:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[5]);
    }
L_000d1418:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[5]);
    }
L_000d141c:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[5]);
    }
L_000d1420:;
    {
        cpu->r[0] = 0x00000044u;
    }
L_000d1424:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_000d1428:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[5]);
    }
L_000d142c:;
    {
        cpu->r[14] = 0x000d1430u; fn_00093f34(cpu);
    }
L_000d1430:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000d1434:;
    {
        cpu->r[3] = 0x00008c44u;
    }
L_000d1438:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d143c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_000d1440:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,16));
    }
L_000d1444:;
    {
        vfp_sync_flags(cpu);
    }
L_000d1448:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_000d144c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_000d1450:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000d1454:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[1]);
    }
L_000d1458:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d14d8;
        }
    }
L_000d145c:;
    {
        cpu->r[2] = 0x0000438cu;
    }
L_000d1460:;
    {
        cpu->r[1] = 0x0000a638u;
    }
L_000d1464:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000d1468:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000d146c:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000d1470:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d1474:;
    {
        wr8(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_000d1478:;
    {
        cpu->r[2] = 0x00009fbcu;
    }
L_000d147c:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_000d1480:;
    {
        wr8(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_000d1484:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000064u, 0, 0);
    }
L_000d1488:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_000d148c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000d1490u)) return;
    }
L_000d1490:;
    {
        wr32(cpu->r[6], cpu->r[7]);
    }
L_000d1494:;
    {
        cpu->r[0] = 0x00000044u;
    }
L_000d1498:;
    {
        cpu->r[14] = 0x000d149cu; fn_0018ba6c(cpu);
    }
L_000d149c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000d14a0:;
    {
        wr32(cpu->r[0] + + 0x40u, cpu->r[7]);
    }
L_000d14a4:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000d14a8:;
    {
        cpu->r[14] = 0x000d14acu; fn_001535e0(cpu);
    }
L_000d14ac:;
    {
        wr32(cpu->r[6] + + 0x1acu, cpu->r[8]);
    }
L_000d14b0:;
    {
        cpu->r[0] = 0x00000044u;
    }
L_000d14b4:;
    {
        cpu->r[14] = 0x000d14b8u; fn_0018ba6c(cpu);
    }
L_000d14b8:;
    {
        wr32(cpu->r[0] + + 0x40u, cpu->r[7]);
    }
L_000d14bc:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_000d14c0:;
    {
        cpu->r[14] = 0x000d14c4u; fn_001535e0(cpu);
    }
L_000d14c4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000007u, 1, 1);
    }
L_000d14c8:;
    {
        wr32(cpu->r[6] + + 0x11cu, cpu->r[8]);
    }
L_000d14cc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_000d14d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d1490;
        }
    }
L_000d14d4:;
    {
        goto L_000d12d4;
    }
L_000d14d8:;
    {
        cpu->r[0] = 0x00000400u;
    }
L_000d14dc:;
    {
        cpu->r[14] = 0x000d14e0u; imp__Znaj(cpu); /* _Znaj */
    }
L_000d14e0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d14e4:;
    {
        wr32(cpu->r[4] + cpu->r[6], cpu->r[0]);
    }
L_000d14e8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00001c6cu;
        }
    }
L_000d14ec:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000100u;
        }
    }
L_000d14f0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000d14f4:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
        }
    }
L_000d14f8:;
    {
        goto L_000d145c;
    }
}

/* _ZN5Scene20SetEngineSoundVolumeEiii @ 000d14fc (arm) */
void fn_000d14fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000d14fc:;
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
L_000d1500:;
    {
        add_flags(cpu, cpu->r[2], 0x00000001u, 0, 1);
    }
L_000d1504:;
    {
        cpu->r[5] = rd32(0x000d150cu + + 0xa0u);
    }
L_000d1508:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_000d150c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000d1510:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_000d1514:;
    {
        cpu->r[5] = add_flags(cpu, 0x000d151cu, cpu->r[5], 0, 0);
    }
L_000d1518:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000d151cu)) return;
        }
    }
L_000d151c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000064u, 1, 1);
    }
L_000d1520:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = cpu->r[3];
        }
    }
L_000d1524:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[7] = 0x00000064u;
        }
    }
L_000d1528:;
    {
        cpu->r[3] = rd32(0x000d1530u + + 0x80u);
    }
L_000d152c:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d1530:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_000d1534:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000d1538:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d1580;
        }
    }
L_000d153c:;
    {
        cpu->r[9] = rd32(0x000d1544u + + 0x70u);
    }
L_000d1540:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_000d1544:;
    {
        cpu->r[14] = 0x000d1548u; fn_00093f88(cpu);
    }
L_000d1548:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000d1550u + + 0x58u);
    }
L_000d154c:;
    {
        cpu->r[12] = 0x00001c90u;
    }
L_000d1550:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000d1554:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000d1558:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_000d155c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_000d1560:;
    {
        uint32_t v = cpu->r[7] * cpu->r[0]; cpu->r[7] = v;
    }
L_000d1564:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[7];
    }
L_000d1568:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000d156c:;
    {
        cpu->r[0] = rd32(cpu->r[12] + + 0x490u);
    }
L_000d1570:;
    {
        vfp_vdiv(cpu, 13, 14, 15);
    }
L_000d1574:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000d1578:;
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
L_000d157c:;
    {
        return fn_000fd1d0(cpu);
    }
L_000d1580:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000d1584:;
    {
        cpu->r[14] = 0x000d1588u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000d1588:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d158c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d153c;
        }
    }
L_000d1590:;
    {
        cpu->r[9] = rd32(0x000d1598u + + 0x1cu);
    }
L_000d1594:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_000d1598:;
    {
        cpu->r[14] = 0x000d159cu; fn_00094228(cpu);
    }
L_000d159c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000d15a0:;
    {
        cpu->r[14] = 0x000d15a4u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000d15a4:;
    {
        goto L_000d1540;
    }
}

/* _ZN5Scene25ProcessPhoneRotationAngleEv @ 000d15b8 (arm) */
void fn_000d15b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
    /* The port forces the on-screen buttons layout; do not let the
     * phone-rotation assist add a steering offset to that mode. */
    if (platform_buttons_mode()) return;
L_000d15b8:;
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
L_000d15bc:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_000d15c0:;
    {
        cpu->r[3] = 0x00008818u;
    }
L_000d15c4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d15c8:;
    {
        cpu->r[5] = rd32(0x000d15d0u + + 0x370u);
    }
L_000d15cc:;
    {
        cpu->r[7] = rd32(0x000d15d4u + + 0x370u);
    }
L_000d15d0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000d15d4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000d15d8:;
    {
        cpu->r[5] = add_flags(cpu, 0x000d15e0u, cpu->r[5], 0, 0);
    }
L_000d15dc:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000d15e0:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0xf0u);
    }
L_000d15e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d15e8:;
    {
        cpu->r[3] = 0x00001c5cu;
    }
L_000d15ec:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000d15f0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_000d15f4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
        }
    }
L_000d15f8:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu, 15) = *(float*)G(0x000d1600u + + 0x328u);
        }
    }
L_000d15fc:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[3]);
        }
    }
L_000d1600:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
        }
    }
L_000d1604:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
        }
    }
L_000d1608:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu,16) = *vfp_s(cpu,15);
        }
    }
L_000d160c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000d1610:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000d1614:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d188c;
        }
    }
L_000d1618:;
    {
        cpu->r[10] = rd32(0x000d1620u + + 0x328u);
    }
L_000d161c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_000d1620:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2] + + 0x20u);
    }
L_000d1624:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000d1628:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000d1630u + + 0x2fcu);
    }
L_000d162c:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000d1630:;
    {
        cpu->r[8] = rd32(0x000d1638u + + 0x314u);
    }
L_000d1634:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d1638:;
    {
        cpu->r[9] = 0x00001c5cu;
    }
L_000d163c:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0001u << 16);
    }
L_000d1640:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d1644:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000d1648:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_000d164c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000d1650:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_000d1654:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000d1658:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000d165c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000d1660:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x4u);
    }
L_000d1664:;
    {
        vfp_vmul(cpu, 15, 15, 16);
    }
L_000d1668:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000d166c:;
    {
        wr32(cpu->r[4] + cpu->r[9], cpu->r[3]);
    }
L_000d1670:;
    {
        cpu->r[14] = 0x000d1674u; fn_000960ec(cpu);
    }
L_000d1674:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_000d1678:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000d167c:;
    {
        uint32_t v = cpu->r[3] ^ 0x00000008u; cpu->r[3] = v;
    }
L_000d1680:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_000d1684:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000d1688:;
    {
        uint32_t v = cpu->r[0] & shifter(cpu->r[3], 3, 3u, &shc); cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_000d168c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d1884;
        }
    }
L_000d1690:;
    {
        cpu->r[1] = 0x00008188u;
    }
L_000d1694:;
    {
        cpu->r[2] = 0x0000818cu;
    }
L_000d1698:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000d169c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000d16a0:;
    {
        *vfp_s(cpu, 11) = *(float*)G(0x000d16a8u + + 0x288u);
    }
L_000d16a4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[4], 0, 0);
    }
L_000d16a8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[4], 0, 0);
    }
L_000d16ac:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[2]);
    }
L_000d16b0:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[1]);
    }
L_000d16b4:;
    {
        vfp_vmul(cpu, 8, 10, 11);
    }
L_000d16b8:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000d16bc:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x000d16c4u + + 0x268u);
    }
L_000d16c0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d16c4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[4], 0, 0);
    }
L_000d16c8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[9]);
    }
L_000d16cc:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x000d16d4u + + 0x260u);
    }
L_000d16d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d16d4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000d16d8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000d16dc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000d16e0:;
    {
        vfp_vmul(cpu, 11, 9, 11);
    }
L_000d16e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000d16e8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000d16ec:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[3] + + 0x354u);
    }
L_000d16f0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x464u);
    }
L_000d16f4:;
    {
        *(uint32_t*)vfp_s(cpu,9) = cpu->r[3];
    }
L_000d16f8:;
    {
        vfp_vdiv(cpu, 11, 11, 12);
    }
L_000d16fc:;
    {
        vfp_vdiv(cpu, 16, 8, 12);
    }
L_000d1700:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,9);
    }
L_000d1704:;
    {
        vfp_vdiv(cpu, 12, 10, 12);
    }
L_000d1708:;
    {
        *(int32_t*)vfp_s(cpu,16) = (int32_t)*vfp_s(cpu,16);
    }
L_000d170c:;
    {
        *(int32_t*)vfp_s(cpu,11) = (int32_t)*vfp_s(cpu,11);
    }
L_000d1710:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,16);
    }
L_000d1714:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,11);
    }
L_000d1718:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_000d171c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_000d1720:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[2];
    }
L_000d1724:;
    {
        *vfp_s(cpu,11) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_000d1728:;
    {
        vfp_vmla(cpu, 16, 11, 12);
    }
L_000d172c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), 0.0f);
    }
L_000d1730:;
    {
        *(int32_t*)vfp_s(cpu,16) = (int32_t)*vfp_s(cpu,16);
    }
L_000d1734:;
    {
        vfp_sync_flags(cpu);
    }
L_000d1738:;
    {
        if (cond_test(cpu, 6)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000d173c:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000d1740:;
    {
        if (cond_test(cpu, 6)) {
        *vfp_s(cpu,15) = *vfp_s(cpu,14);
        }
    }
L_000d1744:;
    {
        if (cond_test(cpu, 5)) {
        vfp_vneg(cpu, 15, 14);
        }
    }
L_000d1748:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,13));
    }
L_000d174c:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_000d1750:;
    {
        vfp_sync_flags(cpu);
    }
L_000d1754:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,15) = *vfp_s(cpu,13);
        }
    }
L_000d1758:;
    {
        vfp_vmul(cpu, 15, 16, 15);
    }
L_000d175c:;
    {
        vfp_vdiv(cpu, 15, 15, 13);
    }
L_000d1760:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000d1764:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), 0.0f);
    }
L_000d1768:;
    {
        cpu->r[9] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000d176c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000d1774u + + 0x1c4u);
    }
L_000d1770:;
    {
        vfp_sync_flags(cpu);
    }
L_000d1774:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[9] = sub_flags(cpu, 0x00000000u, cpu->r[9], 1, 0);
        }
    }
L_000d1778:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d177c:;
    {
        if (cond_test(cpu, 2)) {
        vfp_vneg(cpu, 14, 14);
        }
    }
L_000d1780:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_000d1784:;
    {
        vfp_sync_flags(cpu);
    }
L_000d1788:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,14) = *vfp_s(cpu,15);
        }
    }
L_000d178c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000d17a0;
        }
    }
L_000d1790:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), 0.0f);
    }
L_000d1794:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000d179cu + + 0x18cu);
    }
L_000d1798:;
    {
        vfp_sync_flags(cpu);
    }
L_000d179c:;
    {
        if (cond_test(cpu, 5)) {
        *vfp_s(cpu,14) = *vfp_s(cpu,15);
        }
    }
L_000d17a0:;
    {
        cpu->r[2] = 0x00007750u;
    }
L_000d17a4:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000d17a8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x3ed6u << 16);
    }
L_000d17ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d17b0:;
    {
        cpu->r[14] = 0x000d17b4u; fn_000be2b4(cpu);
    }
L_000d17b4:;
    {
        cpu->r[3] = 0x00001c5cu;
    }
L_000d17b8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d17bc:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000d17c0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_000d17c4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_000d17c8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_000d17cc:;
    {
        *vfp_d(cpu, 7) = *(double*)G(0x000d17d4u + + 0x14cu);
    }
L_000d17d0:;
    {
        vfp_sync_flags(cpu);
    }
L_000d17d4:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_000d17d8:;
    {
        vfp_vmul(cpu, 12, 16, 13);
    }
L_000d17dc:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_000d17e0:;
    {
        *vfp_d(cpu,6) = (double)*vfp_s(cpu,12);
    }
L_000d17e4:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 6) / *vfp_d(cpu, 7);
    }
L_000d17e8:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_d(cpu,7);
    }
L_000d17ec:;
    {
        cpu->r[11] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000d17f0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[11] = sub_flags(cpu, 0x00000000u, cpu->r[11], 1, 0);
        }
    }
L_000d17f4:;
    {
        cpu->r[14] = 0x000d17f8u; fn_000960ec(cpu);
    }
L_000d17f8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000003u, 1, 1);
    }
L_000d17fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d1910;
        }
    }
L_000d1800:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_000d1804:;
    {
        cpu->r[14] = 0x000d1808u; fn_000960ec(cpu);
    }
L_000d1808:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_000d180c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d1910;
        }
    }
L_000d1810:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_000d1814:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_000d1818:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_000d181c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d18ec;
        }
    }
L_000d1820:;
    {
        cpu->r[0] = 0x00000003u;
    }
L_000d1824:;
    {
        cpu->r[14] = 0x000d1828u; fn_00093f34(cpu);
    }
L_000d1828:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_000d182c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_000d1830:;
    {
        vfp_sync_flags(cpu);
    }
L_000d1834:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x0000a100u, 0, 0);
        }
    }
L_000d1838:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_000d183c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000010u, 0, 0);
        }
    }
L_000d1840:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d18b4;
        }
    }
L_000d1844:;
    {
        cpu->r[3] = 0x00008820u;
    }
L_000d1848:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d184c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d1850:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000d1854:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[11];
    }
L_000d1858:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000d185c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000d1864u + + 0xd8u);
    }
L_000d1860:;
    {
        cpu->r[3] = 0x00001c58u;
    }
L_000d1864:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d1868:;
    {
        wr32(cpu->r[6] + + 0x588u, cpu->r[11]);
    }
L_000d186c:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_000d1870:;
    {
        vfp_vdiv(cpu, 14, 15, 16);
    }
L_000d1874:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000d187cu + + 0xb8u);
    }
L_000d1878:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_000d187c:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000d1880:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000d1884:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_000d1888:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000d188cu)) return;
    }
L_000d188c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000d1890:;
    {
        cpu->r[14] = 0x000d1894u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000d1894:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d1898:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d1618;
        }
    }
L_000d189c:;
    {
        cpu->r[10] = rd32(0x000d18a4u + + 0xa4u);
    }
L_000d18a0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_000d18a4:;
    {
        cpu->r[14] = 0x000d18a8u; fn_00094228(cpu);
    }
L_000d18a8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000d18ac:;
    {
        cpu->r[14] = 0x000d18b0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000d18b0:;
    {
        goto L_000d161c;
    }
L_000d18b4:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_000d18b8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000d18bc:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000000fu, 1, 1);
    }
L_000d18c0:;
    {
        wr32(cpu->r[3] + - 0x4u, cpu->r[1]);
    }
L_000d18c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000d18c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d18b4;
        }
    }
L_000d18cc:;
    {
        cpu->r[2] = 0x0000a10cu;
    }
L_000d18d0:;
    {
        cpu->r[3] = 0x00008820u;
    }
L_000d18d4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d18d8:;
    {
        cpu->r[1] = 0x0000a114u;
    }
L_000d18dc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000d18e0:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[9]);
    }
L_000d18e4:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000d18e8:;
    {
        goto L_000d1854;
    }
L_000d18ec:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d18f0:;
    {
        cpu->r[14] = 0x000d18f4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000d18f4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d18f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d1820;
        }
    }
L_000d18fc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_000d1900:;
    {
        cpu->r[14] = 0x000d1904u; fn_00094228(cpu);
    }
L_000d1904:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000d1908:;
    {
        cpu->r[14] = 0x000d190cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000d190c:;
    {
        goto L_000d1820;
    }
L_000d1910:;
    {
        cpu->r[11] = sub_flags(cpu, 0x00000000u, cpu->r[11], 1, 0);
    }
L_000d1914:;
    {
        cpu->r[9] = sub_flags(cpu, 0x00000000u, cpu->r[9], 1, 0);
    }
L_000d1918:;
    {
        goto L_000d1810;
    }
}

/* _ZN5Scene12UpdateCameraEb @ 000d1950 (arm) */
void fn_000d1950(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000d1950:;
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
L_000d1954:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_000d1958:;
    {
        cpu->r[5] = rd32(0x000d1960u + + 0x6fcu);
    }
L_000d195c:;
    {
        cpu->r[3] = rd32(0x000d1964u + + 0x6fcu);
    }
L_000d1960:;
    {
        cpu->r[7] = 0x00008818u;
    }
L_000d1964:;
    {
        cpu->r[5] = add_flags(cpu, 0x000d196cu, cpu->r[5], 0, 0);
    }
L_000d1968:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000d196c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000f4u, 1, 0);
    }
L_000d1970:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000d1974:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d1978:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_000d197c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_000d1980:;
    {
        cpu->r[6] = rd32(cpu->r[2]);
    }
L_000d1984:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d1988:;
    {
        cpu->r[3] = 0x00001314u;
    }
L_000d198c:;
    {
        cpu->r[9] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_000d1990:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d1ab4;
        }
    }
L_000d1994:;
    {
        cpu->r[8] = rd32(0x000d199cu + + 0x6c8u);
    }
L_000d1998:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000d199c:;
    {
        cpu->r[0] = rd32(cpu->r[10]);
    }
L_000d19a0:;
    {
        cpu->r[14] = 0x000d19a4u; fn_00096b88(cpu);
    }
L_000d19a4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d19a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d1ac0;
        }
    }
L_000d19ac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000d19b0:;
    {
        cpu->r[11] = rd8(cpu->r[3] + + 0xf0u);
    }
L_000d19b4:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_000d19b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d1ac0;
        }
    }
L_000d19bc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x15cu);
    }
L_000d19c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d19c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d1ac0;
        }
    }
L_000d19c8:;
    {
        cpu->r[1] = rd32(cpu->r[10]);
    }
L_000d19cc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x000000dcu, 0, 0);
    }
L_000d19d0:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_000d19d4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x000000d0u, 0, 0);
    }
L_000d19d8:;
    {
        cpu->r[14] = 0x000d19dcu; fn_00099460(cpu);
    }
L_000d19dc:;
    {
        cpu->r[1] = rd32(cpu->r[10]);
    }
L_000d19e0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x000000c4u, 0, 0);
    }
L_000d19e4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000d19e8:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_000d19ec:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_000d19f0:;
    {
        cpu->r[14] = 0x000d19f4u; fn_00099460(cpu);
    }
L_000d19f4:;
    {
        cpu->r[1] = rd32(cpu->r[10]);
    }
L_000d19f8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000d19fc:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_000d1a00:;
    {
        cpu->r[14] = 0x000d1a04u; fn_00099460(cpu);
    }
L_000d1a04:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_000d1a08:;
    {
        cpu->r[1] = rd32(cpu->r[10]);
    }
L_000d1a0c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x000000b8u, 0, 0);
    }
L_000d1a10:;
    {
        cpu->r[14] = 0x000d1a14u; fn_00099460(cpu);
    }
L_000d1a14:;
    {
        cpu->r[3] = rd32(0x000d1a1cu + + 0x654u);
    }
L_000d1a18:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000d1a1c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0xb8u);
    }
L_000d1a20:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d1a24:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_000d1a28:;
    {
        cpu->r[14] = 0x000d1a2cu; fn_0012df6c(cpu);
    }
L_000d1a2c:;
    {
        cpu->r[3] = rd32(0x000d1a34u + + 0x640u);
    }
L_000d1a30:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000d1a34:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d1a38:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_000d1a3c:;
    {
        cpu->r[14] = 0x000d1a40u; fn_0012df84(cpu);
    }
L_000d1a40:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000d1a44:;
    {
        cpu->r[14] = 0x000d1a48u; fn_0012df9c(cpu);
    }
L_000d1a48:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000d1a4c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000d1a50:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000d1a54:;
    {
        cpu->r[14] = 0x000d1a58u; fn_0012ec44(cpu);
    }
L_000d1a58:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xe4u);
    }
L_000d1a5c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xdcu);
    }
L_000d1a60:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000d1a64:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xe0u);
    }
L_000d1a68:;
    {
        cpu->r[12] = 0x00000002u;
    }
L_000d1a6c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[11]);
    }
L_000d1a70:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000d1a74:;
    {
        cpu->r[14] = 0x000d1a78u; fn_00151b00(cpu);
    }
L_000d1a78:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000d1a7c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000d1a80:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000d1a84:;
    {
        cpu->r[14] = 0x000d1a88u; fn_00151b50(cpu);
    }
L_000d1a88:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0xdcu);
    }
L_000d1a8c:;
    {
        vfp_vneg(cpu, 15, 15);
    }
L_000d1a90:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_000d1a94:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0xe4u);
    }
L_000d1a98:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000d1a9c:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_000d1aa0:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x10cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000d1aa4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0xe0u);
    }
L_000d1aa8:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000d1aac:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x110u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000d1ab0:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x114u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000d1ab4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000f4u, 0, 0);
    }
L_000d1ab8:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_000d1abc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000d1ac0u)) return;
    }
L_000d1ac0:;
    {
        cpu->r[3] = 0x00008d74u;
    }
L_000d1ac4:;
    {
        cpu->r[1] = 0x00001c90u;
    }
L_000d1ac8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d1acc:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000d1ad0:;
    {
        cpu->r[2] = 0x00004334u;
    }
L_000d1ad4:;
    {
        cpu->r[11] = 0x00008c50u;
    }
L_000d1ad8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000d1adc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d1ae0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000d1ae4:;
    {
        cpu->r[11] = (cpu->r[11] & 0xffffu) | (0x0001u << 16);
    }
L_000d1ae8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000d1aec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000d1af0:;
    {
        cpu->r[2] = 0x00001bc0u;
    }
L_000d1af4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000d1af8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000d1afc:;
    {
        cpu->r[14] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000d1b00:;
    {
        cpu->r[2] = 0x00003e81u;
    }
L_000d1b04:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000d1b08:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000d1b0c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000d1b10:;
    {
        cpu->r[7] = rd32(cpu->r[12] + + 0x4u);
    }
L_000d1b14:;
    {
        cpu->r[3] = rd32(cpu->r[14] + + 0x8u);
    }
L_000d1b18:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_000d1b1c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_000d1b20:;
    {
        cpu->r[12] = rd8(cpu->r[4] + cpu->r[2]);
    }
L_000d1b24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d1c58;
        }
    }
L_000d1b28:;
    {
        cpu->r[2] = 0x00004328u;
    }
L_000d1b2c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000d1b30:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000d1b34:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000d1b38:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d27dc;
        }
    }
L_000d1b3c:;
    {
        cpu->r[10] = 0x0000433cu;
    }
L_000d1b40:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0006u << 16);
    }
L_000d1b44:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000d1b48:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000d1b4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d1b64;
        }
    }
L_000d1b50:;
    {
        cpu->r[1] = 0x000081d8u;
    }
L_000d1b54:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000d1b58:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000d1b5c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000d1b60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d1fe8;
        }
    }
L_000d1b64:;
    {
        { uint32_t v = cpu->r[3] & 0x00000400u; set_nz(cpu, v); }
    }
L_000d1b68:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[10] = 0x00000002u;
        }
    }
L_000d1b6c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d1b78;
        }
    }
L_000d1b70:;
    {
        uint32_t v = cpu->r[3] & 0x00000800u; cpu->r[10] = v;
        set_nz(cpu, v);
    }
L_000d1b74:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[10] = 0x00000003u;
        }
    }
L_000d1b78:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000d1b7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d1c6c;
        }
    }
L_000d1b80:;
    {
        cpu->r[11] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000d1b84:;
    {
        cpu->r[0] = rd32(cpu->r[11]);
    }
L_000d1b88:;
    {
        cpu->r[14] = 0x000d1b8cu; fn_00096b6c(cpu);
    }
L_000d1b8c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d1b90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d1be0;
        }
    }
L_000d1b94:;
    {
        cpu->r[0] = rd32(cpu->r[11]);
    }
L_000d1b98:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_000d1b9c:;
    {
        cpu->r[3] = 0x0000432cu;
    }
L_000d1ba0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d1ba4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000d1ba8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000d1bac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d1bb0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000d1be4;
        }
    }
L_000d1bb4:;
    {
        cpu->r[2] = 0x00008818u;
    }
L_000d1bb8:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000d1bbc:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000d1bc0:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_000d1bc4:;
    {
        cpu->r[1] = 0x00000005u;
    }
L_000d1bc8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000d1bcc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x164u);
    }
L_000d1bd0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000d1bd4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000d1bd8:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000d1bdc:;
    {
        cpu->r[14] = 0x000d1be0u; fn_0009947c(cpu);
    }
L_000d1be0:;
    {
        cpu->r[0] = rd32(cpu->r[11]);
    }
L_000d1be4:;
    {
        cpu->r[14] = 0x000d1be8u; fn_00096b88(cpu);
    }
L_000d1be8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d1bec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d27f4;
        }
    }
L_000d1bf0:;
    {
        cpu->r[11] = 0x00008818u;
    }
L_000d1bf4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000d1bf8:;
    {
        cpu->r[11] = (cpu->r[11] & 0xffffu) | (0x0001u << 16);
    }
L_000d1bfc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x000000acu, 0, 0);
    }
L_000d1c00:;
    {
        cpu->r[2] = 0x00000005u;
    }
L_000d1c04:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000d1c08:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_000d1c0c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_000d1c10:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_000d1c14:;
    {
        cpu->r[14] = 0x000d1c18u; fn_00099460(cpu);
    }
L_000d1c18:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0xacu);
    }
L_000d1c1c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000d1c20:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_000d1c24:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x000000a0u, 0, 0);
    }
L_000d1c28:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_000d1c2c:;
    {
        cpu->r[2] = 0x00000005u;
    }
L_000d1c30:;
    {
        cpu->r[11] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000d1c34:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_000d1c38:;
    {
        *(uint32_t*)G(cpu->r[12] + + 0x164u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000d1c3c:;
    {
        cpu->r[14] = 0x000d1c40u; fn_00099460(cpu);
    }
L_000d1c40:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0xa0u);
    }
L_000d1c44:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000d1c48:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000d1c4c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000d1c50:;
    {
        cpu->r[14] = 0x000d1c54u; fn_00149b48(cpu);
    }
L_000d1c54:;
    {
        goto L_000d1c6c;
    }
L_000d1c58:;
    {
        cpu->r[3] = 0x00008818u;
    }
L_000d1c5c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d1c60:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d1c64:;
    {
        cpu->r[14] = 0x000d1c68u; fn_00149b48(cpu);
    }
L_000d1c68:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_000d1c6c:;
    {
        cpu->r[0] = 0x00008818u;
    }
L_000d1c70:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_000d1c74:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_000d1c78:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_000d1c7c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000d1c80:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_000d1c84:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_000d1c88:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_000d1c8c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[10]);
    }
L_000d1c90:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[10]);
    }
L_000d1c94:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[10]);
    }
L_000d1c98:;
    {
        cpu->r[14] = 0x000d1c9cu; fn_0014b418(cpu);
    }
L_000d1c9c:;
    {
        cpu->r[11] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000d1ca0:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x41cu);
    }
L_000d1ca4:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x424u);
    }
L_000d1ca8:;
    {
        cpu->r[0] = rd32(cpu->r[11]);
    }
L_000d1cac:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_000d1cb0:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_000d1cb4:;
    {
        cpu->r[14] = 0x000d1cb8u; fn_00096b88(cpu);
    }
L_000d1cb8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[10], 1, 1);
    }
L_000d1cbc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d263c;
        }
    }
L_000d1cc0:;
    {
        cpu->r[2] = 0x00008818u;
    }
L_000d1cc4:;
    {
        cpu->r[3] = 0x0000a150u;
    }
L_000d1cc8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000d1ccc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000d1cd4u + + 0x3a4u);
    }
L_000d1cd0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_000d1cd4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0]);
    }
L_000d1cd8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000d1cdc:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_000d1ce0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x74u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000d1ce4:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[2] + + 0x208u);
    }
L_000d1ce8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x70u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000d1cec:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[2] + + 0x12cu);
    }
L_000d1cf0:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x124u);
    }
L_000d1cf4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000d1cfcu + + 0x340u);
    }
L_000d1cf8:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,10);
    }
L_000d1cfc:;
    {
        cpu->r[11] = rd32(cpu->r[2] + + 0x204u);
    }
L_000d1d00:;
    {
        cpu->r[1] = sub_flags(cpu, 0x00000000u, cpu->r[1], 1, 0);
    }
L_000d1d04:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[1];
    }
L_000d1d08:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x20cu);
    }
L_000d1d0c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x78u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000d1d10:;
    {
        cpu->r[12] = sub_flags(cpu, 0x00000000u, cpu->r[11], 1, 0);
    }
L_000d1d14:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2] + + 0x128u);
    }
L_000d1d18:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[12];
    }
L_000d1d1c:;
    {
        vfp_sync_flags(cpu);
    }
L_000d1d20:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_000d1d24:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000d1d28:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x90u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000d1d2c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000d1d30:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x7cu) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000d1d34:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_000d1d38:;
    {
        *vfp_s(cpu,11) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_000d1d3c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x80u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000d1d40:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000d1d44:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x88u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_000d1d48:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000d1d4c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x84u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000d1d50:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000d1d54:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d24dc;
        }
    }
L_000d1d58:;
    {
        cpu->r[2] = 0x00008820u;
    }
L_000d1d5c:;
    {
        cpu->r[1] = 0x0000a14cu;
    }
L_000d1d60:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000d1d64:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000d1d68:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[2];
    }
L_000d1d6c:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000d1d70:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[2]);
    }
L_000d1d74:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000d1d7cu + + 0x2c4u);
    }
L_000d1d78:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_000d1d7c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000d1d84u + + 0x2c0u);
    }
L_000d1d80:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000058u, 0, 0);
    }
L_000d1d84:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_000d1d88:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000d1d8c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_000d1d90:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x80u);
    }
L_000d1d94:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x8cu);
    }
L_000d1d98:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_000d1d9c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x84u);
    }
L_000d1da0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x70u);
    }
L_000d1da4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x64u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000d1da8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x74u);
    }
L_000d1dac:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x68u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000d1db0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x78u);
    }
L_000d1db4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x6cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000d1db8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x90u);
    }
L_000d1dbc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000d1dc0:;
    {
        vfp_vsub(cpu, 14, 13, 14);
    }
L_000d1dc4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x5cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000d1dc8:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x7cu);
    }
L_000d1dcc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x88u);
    }
L_000d1dd0:;
    {
        vfp_vsub(cpu, 15, 13, 15);
    }
L_000d1dd4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x60u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000d1dd8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x58u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000d1ddc:;
    {
        cpu->r[14] = 0x000d1de0u; fn_00155f80(cpu);
    }
L_000d1de0:;
    {
        cpu->r[2] = 0x0000426cu;
    }
L_000d1de4:;
    {
        cpu->r[3] = 0x00004268u;
    }
L_000d1de8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000d1dec:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d1df0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000d1df8u + + 0x280u);
    }
L_000d1df4:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000d1df8:;
    {
        cpu->r[2] = rd8(cpu->r[4] + cpu->r[2]);
    }
L_000d1dfc:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[1]);
    }
L_000d1e00:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000d1e04:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d26ac;
        }
    }
L_000d1e08:;
    {
        cpu->r[3] = rd32(0x000d1e10u + + 0x258u);
    }
L_000d1e0c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d1e10:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000d1e14:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_000d1e18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d1f60;
        }
    }
L_000d1e1c:;
    {
        cpu->r[2] = rd32(0x000d1e24u + + 0x248u);
    }
L_000d1e20:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000d1e24:;
    {
        cpu->r[14] = 0x000d1e28u; fn_00093fd8(cpu);
    }
L_000d1e28:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_000d1e2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d285c;
        }
    }
L_000d1e30:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_000d1e34:;
    {
        cpu->r[3] = 0x00004268u;
    }
L_000d1e38:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000d1e3c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d1e40:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_000d1e44:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3]);
    }
L_000d1e48:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_000d1e4c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_000d1e50:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000d1e54:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000d1e58:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000d1e5c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000d1e60:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0xb8u);
    }
L_000d1e64:;
    {
        vfp_vadd(cpu, 12, 15, 15);
    }
L_000d1e68:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000d1e70u + + 0x1d8u);
    }
L_000d1e6c:;
    {
        cpu->r[1] = 0x00008c50u;
    }
L_000d1e70:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000d1e74:;
    {
        cpu->r[3] = 0x00004264u;
    }
L_000d1e78:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d1e7c:;
    {
        cpu->r[2] = 0x00004268u;
    }
L_000d1e80:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000d1e84:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_000d1e88:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0]);
    }
L_000d1e8c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000d1e90:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x8u);
    }
L_000d1e94:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00006300u, 0, 0);
    }
L_000d1e98:;
    {
        vfp_vdiv(cpu, 11, 12, 15);
    }
L_000d1e9c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x000d1ea4u + + 0x1a8u);
    }
L_000d1ea0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000001eu, 0, 0);
    }
L_000d1ea4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_000d1ea8:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_000d1eac:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x1dcu);
    }
L_000d1eb0:;
    {
        add_flags(cpu, cpu->r[1], 0x00000001u, 0, 1);
    }
L_000d1eb4:;
    {
        vfp_vmul(cpu, 11, 11, 12);
    }
L_000d1eb8:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x000d1ec0u + + 0x190u);
    }
L_000d1ebc:;
    {
        vfp_vmla(cpu, 14, 11, 12);
    }
L_000d1ec0:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_000d1ec4:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000d1ec8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000d1ed0u + + 0x184u);
    }
L_000d1ecc:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_000d1ed0:;
    {
        vfp_vmla(cpu, 15, 13, 14);
    }
L_000d1ed4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000d1edcu + + 0x17cu);
    }
L_000d1ed8:;
    {
        vfp_vmul(cpu, 15, 15, 14);
    }
L_000d1edc:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000d1ee0:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000d1ee4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d1fa0;
        }
    }
L_000d1ee8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000070u, 0, 0);
    }
L_000d1eec:;
    {
        cpu->r[3] = 0x00008818u;
    }
L_000d1ef0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_000d1ef4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d1ef8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_000d1efc:;
    {
        cpu->r[14] = 0x000d1f00u; fn_00155f80(cpu);
    }
L_000d1f00:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_000d1f04:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d1f08:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x15cu);
    }
L_000d1f0c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000003u, 1, 1);
    }
L_000d1f10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d2554;
        }
    }
L_000d1f14:;
    {
        cpu->r[0] = 0x0000001fu;
    }
L_000d1f18:;
    {
        cpu->r[14] = 0x000d1f1cu; fn_00093f34(cpu);
    }
L_000d1f1c:;
    {
        cpu->r[3] = 0x00009fb4u;
    }
L_000d1f20:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_000d1f24:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_000d1f28:;
    {
        cpu->r[3] = 0x000018ecu;
    }
L_000d1f2c:;
    {
        cpu->r[2] = 0x00009f94u;
    }
L_000d1f30:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000d1f34:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_000d1f38:;
    {
        vfp_vadd(cpu, 15, 13, 15);
    }
L_000d1f3c:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000d1f40:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[0]);
    }
L_000d1f44:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_000d1f48:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[3]) {
        case 0: goto L_000d2090;
        case 1: goto L_000d24d4;
        case 2: goto L_000d24cc;
        case 3: goto L_000d24ac;
        default: guest_unimplemented(cpu, 0x000d1f48u); return; }
        }
    }
L_000d1f4c:;
    {
        goto L_000d20a0;
    }
L_000d1f60:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000d1f64:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_000d1f68:;
    {
        cpu->r[14] = 0x000d1f6cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000d1f6c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_000d1f70:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d1f74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d1e1c;
        }
    }
L_000d1f78:;
    {
        cpu->r[2] = rd32(0x000d1f80u + + 0xecu);
    }
L_000d1f7c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_000d1f80:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_000d1f84:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_000d1f88:;
    {
        cpu->r[14] = 0x000d1f8cu; fn_00094228(cpu);
    }
L_000d1f8c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_000d1f90:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000d1f94:;
    {
        cpu->r[14] = 0x000d1f98u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_000d1f98:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_000d1f9c:;
    {
        goto L_000d1e20;
    }
L_000d1fa0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_000d1fa4:;
    {
        vfp_sync_flags(cpu);
    }
L_000d1fa8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d1ee8;
        }
    }
L_000d1fac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00018c00u, 0, 0);
    }
L_000d1fb0:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000d1fb4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000001e4u, 0, 0);
    }
L_000d1fb8:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000d1fbc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000d1fc0:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_000d1fc4:;
    {
        cpu->r[14] = 0x000d1fc8u; fn_00154790(cpu);
    }
L_000d1fc8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_000d1fcc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000070u, 0, 0);
    }
L_000d1fd0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_000d1fd4:;
    {
        cpu->r[14] = 0x000d1fd8u; fn_00153efc(cpu);
    }
L_000d1fd8:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000d1fdc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000064u, 0, 0);
    }
L_000d1fe0:;
    {
        cpu->r[14] = 0x000d1fe4u; fn_001533e4(cpu);
    }
L_000d1fe4:;
    {
        goto L_000d1eec;
    }
L_000d1fe8:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x1dcu);
    }
L_000d1fec:;
    {
        add_flags(cpu, cpu->r[1], 0x00000001u, 0, 1);
    }
L_000d1ff0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d28f0;
        }
    }
L_000d1ff4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_000d1ff8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000d1ffc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000d2000:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000d2004:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_000d2008:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_000d200c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d2024;
        }
    }
L_000d2010:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x490u);
    }
L_000d2014:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d2018:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d1c68;
        }
    }
L_000d201c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_000d2020:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d1c68;
        }
    }
L_000d2024:;
    {
        cpu->r[3] = 0x00008818u;
    }
L_000d2028:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_000d202c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d2030:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d2034:;
    {
        cpu->r[14] = 0x000d2038u; fn_00149b48(cpu);
    }
L_000d2038:;
    {
        goto L_000d1c68;
    }
L_000d2090:;
    {
        cpu->r[3] = 0x00009fa0u;
    }
L_000d2094:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000d209cu + - 0x24u);
    }
L_000d2098:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000d209c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[1]);
    }
L_000d20a0:;
    {
        cpu->r[3] = 0x00009f98u;
    }
L_000d20a4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_000d20a8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_000d20ac:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_000d20b0:;
    {
        vfp_sync_flags(cpu);
    }
L_000d20b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d20d0;
        }
    }
L_000d20b8:;
    {
        cpu->r[3] = 0x00009f94u;
    }
L_000d20bc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_000d20c0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_000d20c4:;
    {
        cpu->r[3] = 0x00009f98u;
    }
L_000d20c8:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000d20cc:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[1]);
    }
L_000d20d0:;
    {
        cpu->r[3] = 0x00009f9cu;
    }
L_000d20d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_000d20d8:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[3]);
    }
L_000d20dc:;
    {
        cpu->r[3] = 0x00009fa0u;
    }
L_000d20e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_000d20e4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_000d20e8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,15));
    }
L_000d20ec:;
    {
        vfp_sync_flags(cpu);
    }
L_000d20f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d213c;
        }
    }
L_000d20f4:;
    {
        vfp_vsub(cpu, 16, 16, 15);
    }
L_000d20f8:;
    {
        cpu->r[0] = 0x0000002eu;
    }
L_000d20fc:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), 0.0f);
    }
L_000d2100:;
    {
        vfp_sync_flags(cpu);
    }
L_000d2104:;
    {
        if (cond_test(cpu, 5)) {
        vfp_vneg(cpu, 16, 16);
        }
    }
L_000d2108:;
    {
        if (cond_test(cpu, 6)) {
        cpu->r[7] = 0x00000000u;
        }
    }
L_000d210c:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[7] = 0x00000001u;
        }
    }
L_000d2110:;
    {
        cpu->r[14] = 0x000d2114u; fn_00093f34(cpu);
    }
L_000d2114:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_000d2118:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,13));
    }
L_000d211c:;
    {
        vfp_sync_flags(cpu);
    }
L_000d2120:;
    {
        if (cond_test(cpu, 6)) {
        goto L_000d27ac;
        }
    }
L_000d2124:;
    {
        cpu->r[3] = 0x00009fa0u;
    }
L_000d2128:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_000d212c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_000d2130:;
    {
        cpu->r[3] = 0x00009f9cu;
    }
L_000d2134:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000d2138:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_000d213c:;
    {
        cpu->r[3] = 0x00009facu;
    }
L_000d2140:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000d2148u + - 0xccu);
    }
L_000d2144:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_000d2148:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_000d214c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000d2150:;
    {
        vfp_sync_flags(cpu);
    }
L_000d2154:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d2664;
        }
    }
L_000d2158:;
    {
        cpu->r[3] = 0x00009fb0u;
    }
L_000d215c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d2160:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d2164:;
    {
        cpu->r[3] = 0x00009f94u;
    }
L_000d2168:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
        }
    }
L_000d216c:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2]);
        }
    }
L_000d2170:;
    {
        if (cond_test(cpu, 2)) {
        vfp_vadd(cpu, 15, 15, 14);
        }
    }
L_000d2174:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
        }
    }
L_000d2178:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[1]);
        }
    }
L_000d217c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,15);
        }
    }
L_000d2180:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[12]);
        }
    }
L_000d2184:;
    {
        cpu->r[3] = 0x00009facu;
    }
L_000d2188:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000d2190u + - 0x114u);
    }
L_000d218c:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000d2190:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_000d2194:;
    {
        cpu->r[3] = 0x00009f98u;
    }
L_000d2198:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_000d219c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_000d21a0:;
    {
        cpu->r[3] = 0x00009f94u;
    }
L_000d21a4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_000d21a8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3]);
    }
L_000d21ac:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000d21b0:;
    {
        vfp_sync_flags(cpu);
    }
L_000d21b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d221c;
        }
    }
L_000d21b8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000d21bc:;
    {
        vfp_sync_flags(cpu);
    }
L_000d21c0:;
    {
        if (cond_test(cpu, 6)) {
        goto L_000d277c;
        }
    }
L_000d21c4:;
    {
        cpu->r[3] = 0x00009fa4u;
    }
L_000d21c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_000d21cc:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3]);
    }
L_000d21d0:;
    {
        vfp_vadd(cpu, 15, 15, 13);
    }
L_000d21d4:;
    {
        cpu->r[3] = 0x00009f94u;
    }
L_000d21d8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_000d21dc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3]);
    }
L_000d21e0:;
    {
        cpu->r[3] = 0x00009f98u;
    }
L_000d21e4:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000d21e8:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_000d21ec:;
    {
        vfp_vsub(cpu, 15, 15, 14);
    }
L_000d21f0:;
    {
        cpu->r[3] = 0x00009fa4u;
    }
L_000d21f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_000d21f8:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3]);
    }
L_000d21fc:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_000d2200:;
    {
        vfp_sync_flags(cpu);
    }
L_000d2204:;
    {
        if (cond_test(cpu, 5)) {
        vfp_vneg(cpu, 15, 15);
        }
    }
L_000d2208:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,13));
    }
L_000d220c:;
    {
        vfp_sync_flags(cpu);
    }
L_000d2210:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[3] = 0x00009f98u;
        }
    }
L_000d2214:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,14);
        }
    }
L_000d2218:;
    {
        if (cond_test(cpu, 5)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
        }
    }
L_000d221c:;
    {
        cpu->r[3] = rd32(0x000d2224u + - 0x1b4u);
    }
L_000d2220:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000d2224:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d2228:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_000d222c:;
    {
        cpu->r[14] = 0x000d2230u; fn_0012df6c(cpu);
    }
L_000d2230:;
    {
        cpu->r[3] = rd32(0x000d2238u + - 0x1c4u);
    }
L_000d2234:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000d2238:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_000d223c:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_000d2240:;
    {
        cpu->r[14] = 0x000d2244u; fn_0012df84(cpu);
    }
L_000d2244:;
    {
        cpu->r[3] = 0x00009f98u;
    }
L_000d2248:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_000d224c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000d2250:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[3]);
    }
L_000d2254:;
    {
        cpu->r[3] = 0x00009f9cu;
    }
L_000d2258:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_000d225c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_000d2260:;
    {
        vfp_vadd(cpu, 16, 16, 15);
    }
L_000d2264:;
    {
        cpu->r[14] = 0x000d2268u; fn_0012df9c(cpu);
    }
L_000d2268:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,16);
    }
L_000d226c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_000d2270:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_000d2274:;
    {
        cpu->r[14] = 0x000d2278u; fn_0012ec44(cpu);
    }
L_000d2278:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000d227c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d2280:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d2284:;
    {
        cpu->r[3] = 0x000010d0u;
    }
L_000d2288:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000d228c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_000d2290:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d2438;
        }
    }
L_000d2294:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x0000007cu, 0, 0);
    }
L_000d2298:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[4], 0x00064000u, 0, 0);
    }
L_000d229c:;
    {
        cpu->r[6] = 0x00008818u;
    }
L_000d22a0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x000000b4u, 0, 0);
    }
L_000d22a4:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000d22a8:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000d22ac:;
    {
        cpu->r[14] = 0x000d22b0u; fn_00153600(cpu);
    }
L_000d22b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000d22b4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0x14cu);
    }
L_000d22b8:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000d22bc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000d22c4u + - 0x244u);
    }
L_000d22c0:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000d22c4:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_000d22c8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000d22d0u + - 0x24cu);
    }
L_000d22cc:;
    {
        vfp_vdiv(cpu, 13, 14, 15);
    }
L_000d22d0:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000d22d4:;
    {
        cpu->r[14] = 0x000d22d8u; fn_00154514(cpu);
    }
L_000d22d8:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_000d22dc:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_000d22e0:;
    {
        cpu->r[14] = 0x000d22e4u; fn_00153cec(cpu);
    }
L_000d22e4:;
    {
        cpu->r[11] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000d22e8:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[11] + + 0x150u);
    }
L_000d22ec:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[11] + + 0x154u);
    }
L_000d22f0:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000d22f4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x90u);
    }
L_000d22f8:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x000d2300u + - 0x278u);
    }
L_000d22fc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x88u);
    }
L_000d2300:;
    {
        cpu->r[12] = rd8(cpu->r[11] + + 0xf0u);
    }
L_000d2304:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000d2308:;
    {
        *vfp_s(cpu,11) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_000d230c:;
    {
        vfp_vmla(cpu, 15, 12, 13);
    }
L_000d2310:;
    {
        vfp_vmla(cpu, 14, 11, 13);
    }
L_000d2314:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x90u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000d2318:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x88u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000d231c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d2520;
        }
    }
L_000d2320:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[11], 0x000000f4u, 0, 0);
    }
L_000d2324:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000088u, 0, 0);
    }
L_000d2328:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000100u, 0, 0);
    }
L_000d232c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000d2330:;
    {
        uint32_t base = cpu->r[14];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_000d2334:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_000d2338:;
    {
        uint32_t base = cpu->r[11];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_000d233c:;
    {
        uint32_t base = cpu->r[7];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_000d2340:;
    {
        cpu->r[1] = cpu->r[14];
    }
L_000d2344:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000d2348:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_000d234c:;
    {
        cpu->r[14] = 0x000d2350u; fn_00151ab8(cpu);
    }
L_000d2350:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000d2354:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000d2358:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000d235c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000100u, 0, 0);
    }
L_000d2360:;
    {
        cpu->r[14] = 0x000d2364u; fn_00151b50(cpu);
    }
L_000d2364:;
    {
        cpu->r[5] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_000d2368:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_000d236c:;
    {
        cpu->r[14] = 0x000d2370u; fn_00096b6c(cpu);
    }
L_000d2370:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d2374:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d1ab4;
        }
    }
L_000d2378:;
    {
        cpu->r[3] = 0x00008818u;
    }
L_000d237c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d2380:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d2384:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0xf0u);
    }
L_000d2388:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000d238c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d1ab4;
        }
    }
L_000d2390:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_000d2394:;
    {
        cpu->r[3] = 0x00008508u;
    }
L_000d2398:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000d239c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d23a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d2628;
        }
    }
L_000d23a4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000d23a8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000d23ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d1ab4;
        }
    }
L_000d23b0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x88u);
    }
L_000d23b4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x90u);
    }
L_000d23b8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8cu);
    }
L_000d23bc:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000d23c0:;
    {
        cpu->r[14] = 0x000d23c4u; fn_0009947c(cpu);
    }
L_000d23c4:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_000d23c8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x7cu);
    }
L_000d23cc:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000d23d0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x80u);
    }
L_000d23d4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x84u);
    }
L_000d23d8:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000d23dc:;
    {
        cpu->r[14] = 0x000d23e0u; fn_0009947c(cpu);
    }
L_000d23e0:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_000d23e4:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_000d23e8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x70u);
    }
L_000d23ec:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x78u);
    }
L_000d23f0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x74u);
    }
L_000d23f4:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000d23f8:;
    {
        cpu->r[14] = 0x000d23fcu; fn_0009947c(cpu);
    }
L_000d23fc:;
    {
        cpu->r[3] = 0x00009f98u;
    }
L_000d2400:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_000d2404:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3]);
    }
L_000d2408:;
    {
        cpu->r[3] = 0x00009f9cu;
    }
L_000d240c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000d2410:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_000d2414:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_000d2418:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_000d241c:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_000d2420:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_000d2424:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_000d2428:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_000d242c:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000d2430:;
    {
        cpu->r[14] = 0x000d2434u; fn_0009947c(cpu);
    }
L_000d2434:;
    {
        goto L_000d1ab4;
    }
L_000d2438:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000d243c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d2440:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d2444:;
    {
        cpu->r[3] = 0x00001bc0u;
    }
L_000d2448:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000d244c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x10u);
    }
L_000d2450:;
    {
        { uint32_t v = cpu->r[3] & 0x00002000u; set_nz(cpu, v); }
    }
L_000d2454:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d2294;
        }
    }
L_000d2458:;
    {
        cpu->r[3] = 0x00001d04u;
    }
L_000d245c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000088u, 0, 0);
    }
L_000d2460:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d2464:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000d2468:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x0000007cu, 0, 0);
    }
L_000d246c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d2470:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_000d2474:;
    {
        cpu->r[14] = 0x000d2478u; fn_0015365c(cpu);
    }
L_000d2478:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000d2480u + - 0x3f4u);
    }
L_000d247c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x88u);
    }
L_000d2480:;
    {
        vfp_vsub(cpu, 13, 13, 15);
    }
L_000d2484:;
    {
        uint32_t base = cpu->r[6];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_000d2488:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x90u);
    }
L_000d248c:;
    {
        uint32_t base = cpu->r[7];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_000d2490:;
    {
        vfp_vadd(cpu, 14, 14, 15);
    }
L_000d2494:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x88u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000d2498:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x8cu);
    }
L_000d249c:;
    {
        vfp_vsub(cpu, 15, 13, 15);
    }
L_000d24a0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x90u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000d24a4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000d24a8:;
    {
        goto L_000d2298;
    }
L_000d24ac:;
    {
        cpu->r[0] = 0x00000016u;
    }
L_000d24b0:;
    {
        cpu->r[14] = 0x000d24b4u; fn_00093f34(cpu);
    }
L_000d24b4:;
    {
        cpu->r[3] = 0x00009f98u;
    }
L_000d24b8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_000d24bc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_000d24c0:;
    {
        cpu->r[3] = 0x00009fa0u;
    }
L_000d24c4:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_000d24c8:;
    {
        goto L_000d20ac;
    }
L_000d24cc:;
    {
        cpu->r[0] = 0x00000011u;
    }
L_000d24d0:;
    {
        goto L_000d24b0;
    }
L_000d24d4:;
    {
        cpu->r[0] = 0x0000000cu;
    }
L_000d24d8:;
    {
        goto L_000d24b0;
    }
L_000d24dc:;
    {
        cpu->r[1] = 0x00008820u;
    }
L_000d24e0:;
    {
        cpu->r[0] = 0x0000a14cu;
    }
L_000d24e4:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000d24e8:;
    {
        cpu->r[2] = 0x00006667u;
    }
L_000d24ec:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_000d24f0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x6666u << 16);
    }
L_000d24f4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000d24f8:;
    {
        cpu->r[12] = sub_flags(cpu, shifter(cpu->r[12], 2, 3u, &shc), cpu->r[12], 1, 0);
    }
L_000d24fc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_000d2500:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], cpu->r[12], 0, 0);
    }
L_000d2504:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[2] * (int64_t)(int32_t)cpu->r[12]; cpu->r[1] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_000d2508:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 31u, &shc); cpu->r[12] = v;
    }
L_000d250c:;
    {
        cpu->r[12] = sub_flags(cpu, shifter(cpu->r[2], 1, 2u, &shc), cpu->r[12], 1, 0);
    }
L_000d2510:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[12];
    }
L_000d2514:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[12]);
    }
L_000d2518:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000d251c:;
    {
        goto L_000d1d74;
    }
L_000d2520:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000d2524:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8cu);
    }
L_000d2528:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000d252c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000d2530:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_000d2534:;
    {
        cpu->r[12] = 0x00000002u;
    }
L_000d2538:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_000d253c:;
    {
        cpu->r[14] = 0x000d2540u; fn_00151b00(cpu);
    }
L_000d2540:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_000d2544:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000d2548:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000d254c:;
    {
        cpu->r[14] = 0x000d2550u; fn_00151b50(cpu);
    }
L_000d2550:;
    {
        goto L_000d2364;
    }
L_000d2554:;
    {
        cpu->r[2] = 0x0000881cu;
    }
L_000d2558:;
    {
        cpu->r[1] = 0x00009fa0u;
    }
L_000d255c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_000d2560:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000d2568u + + 0x378u);
    }
L_000d2564:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000d2568:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[12]);
    }
L_000d256c:;
    {
        cpu->r[2] = rd8(cpu->r[4] + cpu->r[2]);
    }
L_000d2570:;
    {
        cpu->r[1] = 0x00009f9cu;
    }
L_000d2574:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000d2578:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[12]);
    }
L_000d257c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d2830;
        }
    }
L_000d2580:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_000d2584:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x000000e8u, 0, 0);
    }
L_000d2588:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_000d258c:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[1], cpu->r[11], 1, 0);
    }
L_000d2590:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_000d2594:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_000d2598:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 0);
    }
L_000d259c:;
    {
        wr32(cpu->r[13] + + 0xe8u, cpu->r[11]);
    }
L_000d25a0:;
    {
        wr32(cpu->r[13] + + 0xecu, cpu->r[2]);
    }
L_000d25a4:;
    {
        cpu->r[14] = 0x000d25a8u; fn_001857e0(cpu);
    }
L_000d25a8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_000d25ac:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d25b0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x230u);
    }
L_000d25b4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_000d25b8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = cpu->r[2];
        }
    }
L_000d25bc:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[0];
    }
L_000d25c0:;
    {
        cpu->r[0] = 0x0000001fu;
    }
L_000d25c4:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_000d25c8:;
    {
        cpu->r[14] = 0x000d25ccu; fn_00093f34(cpu);
    }
L_000d25cc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000d25d4u + + 0x310u);
    }
L_000d25d0:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_000d25d4:;
    {
        vfp_vmul(cpu, 13, 14, 15);
    }
L_000d25d8:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000d25dc:;
    {
        cpu->r[14] = 0x000d25e0u; imp_tanf(cpu); /* tanf */
    }
L_000d25e0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_000d25e4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d25e8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x230u);
    }
L_000d25ec:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000d25f0:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_000d25f4:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_000d25f8:;
    {
        vfp_vdiv(cpu, 13, 15, 16);
    }
L_000d25fc:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000d2600:;
    {
        cpu->r[14] = 0x000d2604u; imp_atanf(cpu); /* atanf */
    }
L_000d2604:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000d260cu + + 0x2dcu);
    }
L_000d2608:;
    {
        cpu->r[3] = 0x00009f98u;
    }
L_000d260c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_000d2610:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_000d2614:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000d2618:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_000d261c:;
    {
        cpu->r[3] = 0x00009f94u;
    }
L_000d2620:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_000d2624:;
    {
        goto L_000d20ac;
    }
L_000d2628:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000d262c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d2630:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d1ab4;
        }
    }
L_000d2634:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_000d2638:;
    {
        goto L_000d23b0;
    }
L_000d263c:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_000d2640:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_000d2644:;
    {
        cpu->r[1] = rd32(cpu->r[11]);
    }
L_000d2648:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000094u, 0, 0);
    }
L_000d264c:;
    {
        cpu->r[14] = 0x000d2650u; fn_0009957c(cpu);
    }
L_000d2650:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x9cu);
    }
L_000d2654:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x94u);
    }
L_000d2658:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_000d265c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[12]);
    }
L_000d2660:;
    {
        goto L_000d1cc0;
    }
L_000d2664:;
    {
        cpu->r[0] = 0x0000002cu;
    }
L_000d2668:;
    {
        cpu->r[14] = 0x000d266cu; fn_00093f34(cpu);
    }
L_000d266c:;
    {
        cpu->r[2] = 0x00009f98u;
    }
L_000d2670:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[4], 0, 0);
    }
L_000d2674:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_000d2678:;
    {
        cpu->r[2] = 0x00009f94u;
    }
L_000d267c:;
    {
        cpu->r[3] = 0x00009fa4u;
    }
L_000d2680:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[4], 0, 0);
    }
L_000d2684:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2]);
    }
L_000d2688:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_000d268c:;
    {
        vfp_sync_flags(cpu);
    }
L_000d2690:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu, 12) = *(float*)G(0x000d2698u + + 0x254u);
        }
    }
L_000d2694:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_000d2698:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vmul(cpu, 13, 13, 12);
        }
    }
L_000d269c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_000d26a0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,13);
        }
    }
L_000d26a4:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[1]);
        }
    }
L_000d26a8:;
    {
        goto L_000d21ac;
    }
L_000d26ac:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000d26b0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d26b4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_000d26b8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d26bc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_000d26c0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_000d26c4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00006300u, 0, 0);
    }
L_000d26c8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001eu, 0, 0);
    }
L_000d26cc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_000d26d0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_000d26d4:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x1b0u);
    }
L_000d26d8:;
    {
        cpu->r[14] = 0x000d26dcu; fn_00180c78(cpu);
    }
L_000d26dc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_000d26e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d26e4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000d26e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000d26ec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000d26f0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000d26f4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x18u);
    }
L_000d26f8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x4cu);
    }
L_000d26fc:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x48u);
    }
L_000d2700:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[0] + + 0x20u);
    }
L_000d2704:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000000u, cpu->r[2], 1, 0);
    }
L_000d2708:;
    {
        *(uint32_t*)vfp_s(cpu,10) = cpu->r[2];
    }
L_000d270c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x4u);
    }
L_000d2710:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_000d2714:;
    {
        cpu->r[1] = sub_flags(cpu, 0x00000000u, cpu->r[1], 1, 0);
    }
L_000d2718:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0] + + 0x1cu);
    }
L_000d271c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[1];
    }
L_000d2720:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x50u);
    }
L_000d2724:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000d2728:;
    {
        *vfp_s(cpu,10) = (float)*(int32_t*)vfp_s(cpu,10);
    }
L_000d272c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000020u; set_nz(cpu, v); }
    }
L_000d2730:;
    {
        *vfp_s(cpu,11) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_000d2734:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000d2738:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_000d273c:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000d2740:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000d2744:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d2808;
        }
    }
L_000d2748:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_000d274c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000040u, 0, 0);
    }
L_000d2750:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4cu) = *(uint32_t*)vfp_s(cpu, 10);
    }
L_000d2754:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x50u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_000d2758:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x54u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_000d275c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x40u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000d2760:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x44u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000d2764:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x48u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000d2768:;
    {
        cpu->r[14] = 0x000d276cu; fn_00152cb8(cpu);
    }
L_000d276c:;
    {
        cpu->r[3] = 0x00004268u;
    }
L_000d2770:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_000d2774:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_000d2778:;
    {
        goto L_000d1e08;
    }
L_000d277c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000d21ec;
        }
    }
L_000d2780:;
    {
        cpu->r[3] = 0x00009fa4u;
    }
L_000d2784:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_000d2788:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3]);
    }
L_000d278c:;
    {
        vfp_vsub(cpu, 15, 15, 13);
    }
L_000d2790:;
    {
        cpu->r[3] = 0x00009f94u;
    }
L_000d2794:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[4], 0, 0);
    }
L_000d2798:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3]);
    }
L_000d279c:;
    {
        cpu->r[3] = 0x00009f98u;
    }
L_000d27a0:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000d27a4:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[12]);
    }
L_000d27a8:;
    {
        goto L_000d21ec;
    }
L_000d27ac:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000d27b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d28b8;
        }
    }
L_000d27b4:;
    {
        cpu->r[7] = 0x00009f9cu;
    }
L_000d27b8:;
    {
        cpu->r[0] = 0x0000002eu;
    }
L_000d27bc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], cpu->r[7], 0, 0);
    }
L_000d27c0:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[1]);
    }
L_000d27c4:;
    {
        cpu->r[14] = 0x000d27c8u; fn_00093f34(cpu);
    }
L_000d27c8:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_000d27cc:;
    {
        vfp_vadd(cpu, 16, 16, 13);
    }
L_000d27d0:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,16);
    }
L_000d27d4:;
    {
        wr32(cpu->r[4] + cpu->r[7], cpu->r[0]);
    }
L_000d27d8:;
    {
        goto L_000d213c;
    }
L_000d27dc:;
    {
        cpu->r[3] = 0x00008818u;
    }
L_000d27e0:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_000d27e4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d27e8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d27ec:;
    {
        cpu->r[14] = 0x000d27f0u; fn_00149b48(cpu);
    }
L_000d27f0:;
    {
        goto L_000d1c68;
    }
L_000d27f4:;
    {
        cpu->r[3] = 0x00008818u;
    }
L_000d27f8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d27fc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d2800:;
    {
        cpu->r[14] = 0x000d2804u; fn_0014be44(cpu);
    }
L_000d2804:;
    {
        goto L_000d1c6c;
    }
L_000d2808:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_000d280c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_000d2810:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_000d2814:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_000d2818:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000d281c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 10);
    }
L_000d2820:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_000d2824:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_000d2828:;
    {
        cpu->r[14] = 0x000d282cu; fn_00152cb8(cpu);
    }
L_000d282c:;
    {
        goto L_000d276c;
    }
L_000d2830:;
    {
        cpu->r[0] = 0x0000001fu;
    }
L_000d2834:;
    {
        cpu->r[7] = 0x00009f98u;
    }
L_000d2838:;
    {
        cpu->r[14] = 0x000d283cu; fn_00093f34(cpu);
    }
L_000d283c:;
    {
        wr32(cpu->r[4] + cpu->r[7], cpu->r[0]);
    }
L_000d2840:;
    {
        cpu->r[0] = 0x0000001fu;
    }
L_000d2844:;
    {
        cpu->r[14] = 0x000d2848u; fn_00093f34(cpu);
    }
L_000d2848:;
    {
        cpu->r[3] = 0x00009f94u;
    }
L_000d284c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[4], 0, 0);
    }
L_000d2850:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7]);
    }
L_000d2854:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_000d2858:;
    {
        goto L_000d20ac;
    }
L_000d285c:;
    {
        cpu->r[3] = 0x00001c90u;
    }
L_000d2860:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d2864:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d2868:;
    {
        cpu->r[14] = 0x000d286cu; fn_00096b88(cpu);
    }
L_000d286c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d2870:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d1e30;
        }
    }
L_000d2874:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_000d2878:;
    {
        cpu->r[2] = 0x00001740u;
    }
L_000d287c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d2880:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d2884:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_000d2888:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_000d288c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_000d2890:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000d2894:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_000d2898:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_000d289c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000d28a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d2968;
        }
    }
L_000d28a4:;
    {
        cpu->r[2] = 0x00004268u;
    }
L_000d28a8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_000d28ac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[4], 0, 0);
    }
L_000d28b0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2]);
    }
L_000d28b4:;
    {
        goto L_000d1e60;
    }
L_000d28b8:;
    {
        cpu->r[7] = 0x00009f9cu;
    }
L_000d28bc:;
    {
        cpu->r[0] = 0x0000002eu;
    }
L_000d28c0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], cpu->r[7], 0, 0);
    }
L_000d28c4:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[1]);
    }
L_000d28c8:;
    {
        cpu->r[14] = 0x000d28ccu; fn_00093f34(cpu);
    }
L_000d28cc:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_000d28d0:;
    {
        vfp_vsub(cpu, 16, 16, 13);
    }
L_000d28d4:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,16);
    }
L_000d28d8:;
    {
        wr32(cpu->r[4] + cpu->r[7], cpu->r[0]);
    }
L_000d28dc:;
    {
        goto L_000d213c;
    }
L_000d28f0:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x498u);
    }
L_000d28f4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000d28f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d1ff4;
        }
    }
L_000d28fc:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_000d2900:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_000d2904:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_000d2908:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000d290c:;
    {
        cpu->r[14] = 0x000d2914u;
    }
L_000d2910:;
    {
        uint32_t t = rd32(cpu->r[2] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000d2914u)) return;
    }
L_000d2914:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_000d2918:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_000d291c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_000d2920:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d1b64;
        }
    }
L_000d2924:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000d2928:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_000d292c:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000d2930:;
    {
        cpu->r[14] = 0x000d2938u;
    }
L_000d2934:;
    {
        uint32_t t = rd32(cpu->r[2] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x000d2938u)) return;
    }
L_000d2938:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_000d293c:;
    {
        cpu->r[1] = 0x00000040u;
    }
L_000d2940:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_000d2944:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x2000u << 16);
    }
L_000d2948:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_000d294c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_000d2950:;
    {
        uint32_t v = cpu->r[2] & cpu->r[1]; cpu->r[1] = v;
    }
L_000d2954:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000d2958:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d1b64;
        }
    }
L_000d295c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000d2960:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[11]);
    }
L_000d2964:;
    {
        goto L_000d1ff4;
    }
L_000d2968:;
    {
        cpu->r[1] = 0x00004268u;
    }
L_000d296c:;
    {
        cpu->r[2] = 0x0000a150u;
    }
L_000d2970:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0006u << 16);
    }
L_000d2974:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[4], 0, 0);
    }
L_000d2978:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_000d297c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[1], 0, 0);
    }
L_000d2980:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2]);
    }
L_000d2984:;
    {
        vfp_vadd(cpu, 14, 14, 15);
    }
L_000d2988:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000d298c:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[12]);
    }
L_000d2990:;
    {
        goto L_000d1e60;
    }
}

/* _ZN5Scene18UpdateCarsConstFPSEv @ 000d2994 (arm) */
void fn_000d2994(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000d2994:;
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
L_000d2998:;
    {
        cpu->r[10] = 0x00008cbcu;
    }
L_000d299c:;
    {
        cpu->r[5] = 0x00008cc4u;
    }
L_000d29a0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000d29a4:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_000d29a8:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_000d29ac:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_000d29b0:;
    {
        cpu->r[0] = rd32(0x000d29b8u + + 0x378u);
    }
L_000d29b4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000d29b8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000d29bc:;
    {
        cpu->r[0] = add_flags(cpu, 0x000d29c4u, cpu->r[0], 0, 0);
    }
L_000d29c0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_000d29c4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000d29c8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000d29cc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000d2b10;
        }
    }
L_000d29d0:;
    {
        cpu->r[8] = 0x00008cb8u;
    }
L_000d29d4:;
    {
        cpu->r[7] = 0x00008cc0u;
    }
L_000d29d8:;
    {
        cpu->r[6] = 0x00001c90u;
    }
L_000d29dc:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_000d29e0:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x0001u << 16);
    }
L_000d29e4:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_000d29e8:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000d29ec:;
    {
        *vfp_s(cpu, 11) = *(float*)G(0x000d29f4u + + 0x338u);
    }
L_000d29f0:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_000d29f4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 0);
    }
L_000d29f8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
        }
    }
L_000d29fc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[8]);
        }
    }
L_000d2a00:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
        }
    }
L_000d2a04:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
        }
    }
L_000d2a08:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_000d2a0c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000d2a10:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d2a14:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000400u, 0, 0);
    }
L_000d2a18:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_000d2a1c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[3], 0x000003f8u, 0, 0);
    }
L_000d2a20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d2afc;
        }
    }
L_000d2a24:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000440u, 0, 0);
    }
L_000d2a28:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[3], 0x00000450u, 0, 0);
    }
L_000d2a2c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_000d2a30:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1]);
    }
L_000d2a34:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_000d2a38:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[3], 0x00000450u, 0, 0);
    }
L_000d2a3c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000004u, 0, 0);
    }
L_000d2a40:;
    {
        *vfp_s(cpu, 7) = *(float*)G(cpu->r[9]);
    }
L_000d2a44:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[11]);
    }
L_000d2a48:;
    {
        cpu->r[9] = 0x00008514u;
    }
L_000d2a4c:;
    {
        cpu->r[11] = 0x0000851cu;
    }
L_000d2a50:;
    {
        cpu->r[0] = rd32(cpu->r[1] + cpu->r[9]);
    }
L_000d2a54:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[3], 0x00000440u, 0, 0);
    }
L_000d2a58:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[11]);
    }
L_000d2a5c:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[9]);
    }
L_000d2a60:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[0], 0x00000028u, 0, 0);
    }
L_000d2a64:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_000d2a68:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_000d2a6c:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000d2a70:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], cpu->r[1], 1, 0);
    }
L_000d2a74:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[11];
    }
L_000d2a78:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000440u, 0, 0);
    }
L_000d2a7c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[3], 0x00000440u, 0, 0);
    }
L_000d2a80:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_000d2a84:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000004u, 0, 0);
    }
L_000d2a88:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[0]);
    }
L_000d2a8c:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[11]);
    }
L_000d2a90:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_000d2a94:;
    {
        vfp_vmul(cpu, 13, 14, 13);
    }
L_000d2a98:;
    {
        vfp_vmul(cpu, 14, 14, 7);
    }
L_000d2a9c:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_000d2aa0:;
    {
        vfp_vmla(cpu, 15, 12, 8);
    }
L_000d2aa4:;
    {
        vfp_vmla(cpu, 13, 12, 9);
    }
L_000d2aa8:;
    {
        vfp_vmla(cpu, 14, 12, 10);
    }
L_000d2aac:;
    {
        vfp_vmul(cpu, 13, 13, 11);
    }
L_000d2ab0:;
    {
        vfp_vmul(cpu, 14, 14, 11);
    }
L_000d2ab4:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000d2ab8:;
    {
        wr32(cpu->r[3] + + 0x404u, cpu->r[1]);
    }
L_000d2abc:;
    {
        vfp_vmul(cpu, 15, 15, 11);
    }
L_000d2ac0:;
    {
        cpu->r[9] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000d2ac4:;
    {
        wr32(cpu->r[3] + + 0x408u, cpu->r[9]);
    }
L_000d2ac8:;
    {
        cpu->r[11] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000d2acc:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_s(cpu,13);
    }
L_000d2ad0:;
    {
        wr32(cpu->r[3] + + 0x40cu, cpu->r[11]);
    }
L_000d2ad4:;
    {
        uint32_t base = cpu->r[2];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_000d2ad8:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_000d2adc:;
    {
        uint32_t base = cpu->r[14];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_000d2ae0:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000d2ae4:;
    {
        wr32(cpu->r[3] + + 0x41cu, cpu->r[0]);
    }
L_000d2ae8:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000d2aec:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,14);
    }
L_000d2af0:;
    {
        wr32(cpu->r[3] + + 0x420u, cpu->r[1]);
    }
L_000d2af4:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000d2af8:;
    {
        wr32(cpu->r[3] + + 0x424u, cpu->r[2]);
    }
L_000d2afc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_000d2b00:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_000d2b04:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000d2b08:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_000d2b0c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_000d29f0;
        }
    }
L_000d2b10:;
    {
        cpu->r[3] = 0x000082a4u;
    }
L_000d2b14:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d2b18:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d2b1c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d2b20:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000d2c98;
        }
    }
L_000d2b24:;
    {
        cpu->r[10] = rd32(0x000d2b2cu + + 0x208u);
    }
L_000d2b28:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000d2b2c:;
    {
        cpu->r[7] = rd32(0x000d2b34u + + 0x204u);
    }
L_000d2b30:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_000d2b34:;
    {
        cpu->r[8] = rd32(0x000d2b3cu + + 0x200u);
    }
L_000d2b38:;
    {
        cpu->r[10] = add_flags(cpu, 0x000d2b40u, cpu->r[10], 0, 0);
    }
L_000d2b3c:;
    {
        cpu->r[9] = rd32(0x000d2b44u + + 0x1fcu);
    }
L_000d2b40:;
    {
        cpu->r[7] = add_flags(cpu, 0x000d2b48u, cpu->r[7], 0, 0);
    }
L_000d2b44:;
    {
        cpu->r[8] = add_flags(cpu, 0x000d2b4cu, cpu->r[8], 0, 0);
    }
L_000d2b48:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000208u, 0, 0);
    }
L_000d2b4c:;
    {
        cpu->r[9] = add_flags(cpu, 0x000d2b54u, cpu->r[9], 0, 0);
    }
L_000d2b50:;
    {
        cpu->r[3] = 0x000082a8u;
    }
L_000d2b54:;
    {
        cpu->r[1] = 0x00001c90u;
    }
L_000d2b58:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d2b5c:;
    {
        cpu->r[12] = 0x000082a4u;
    }
L_000d2b60:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_000d2b64:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000d2b6cu + + 0x1c0u);
    }
L_000d2b68:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000d2b6c:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_000d2b70:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_000d2b74:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 1);
    }
L_000d2b78:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000680u, 0, 0);
    }
L_000d2b7c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000400u, 0, 0);
    }
L_000d2b80:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[3], 0x000003f8u, 0, 0);
    }
L_000d2b84:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_000d2b88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d2c64;
        }
    }
L_000d2b8c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_000d2b90:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[3], 0x00000440u, 0, 0);
    }
L_000d2b94:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x0000000cu, 0, 0);
    }
L_000d2b98:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000450u, 0, 0);
    }
L_000d2b9c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[11]);
    }
L_000d2ba0:;
    {
        *vfp_s(cpu, 7) = *(float*)G(cpu->r[0]);
    }
L_000d2ba4:;
    {
        cpu->r[11] = 0x0000851cu;
    }
L_000d2ba8:;
    {
        cpu->r[0] = 0x00008514u;
    }
L_000d2bac:;
    {
        cpu->r[0] = rd32(cpu->r[1] + cpu->r[0]);
    }
L_000d2bb0:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[11]);
    }
L_000d2bb4:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[3], 0x00000450u, 0, 0);
    }
L_000d2bb8:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000004u, 0, 0);
    }
L_000d2bbc:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[11]);
    }
L_000d2bc0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[0], 0x00000028u, 0, 0);
    }
L_000d2bc4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_000d2bc8:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_000d2bcc:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000d2bd0:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], cpu->r[1], 1, 0);
    }
L_000d2bd4:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[11];
    }
L_000d2bd8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000440u, 0, 0);
    }
L_000d2bdc:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[3], 0x00000440u, 0, 0);
    }
L_000d2be0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000440u, 0, 0);
    }
L_000d2be4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_000d2be8:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[0]);
    }
L_000d2bec:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[1]);
    }
L_000d2bf0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000008u, 0, 0);
    }
L_000d2bf4:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[11]);
    }
L_000d2bf8:;
    {
        vfp_vmul(cpu, 12, 14, 12);
    }
L_000d2bfc:;
    {
        vfp_vmul(cpu, 13, 14, 13);
    }
L_000d2c00:;
    {
        vfp_vmul(cpu, 14, 14, 7);
    }
L_000d2c04:;
    {
        *vfp_s(cpu,11) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_000d2c08:;
    {
        vfp_vmla(cpu, 12, 11, 8);
    }
L_000d2c0c:;
    {
        vfp_vmla(cpu, 13, 11, 9);
    }
L_000d2c10:;
    {
        vfp_vmla(cpu, 14, 11, 10);
    }
L_000d2c14:;
    {
        vfp_vmul(cpu, 12, 12, 15);
    }
L_000d2c18:;
    {
        vfp_vmul(cpu, 13, 13, 15);
    }
L_000d2c1c:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,12);
    }
L_000d2c20:;
    {
        wr32(cpu->r[3] + + 0x40cu, cpu->r[0]);
    }
L_000d2c24:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_000d2c28:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000d2c2c:;
    {
        wr32(cpu->r[3] + + 0x404u, cpu->r[1]);
    }
L_000d2c30:;
    {
        cpu->r[11] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000d2c34:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_s(cpu,13);
    }
L_000d2c38:;
    {
        wr32(cpu->r[3] + + 0x408u, cpu->r[11]);
    }
L_000d2c3c:;
    {
        uint32_t base = cpu->r[2];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_000d2c40:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_000d2c44:;
    {
        uint32_t base = cpu->r[14];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_000d2c48:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,13);
    }
L_000d2c4c:;
    {
        wr32(cpu->r[3] + + 0x41cu, cpu->r[0]);
    }
L_000d2c50:;
    {
        *(int32_t*)vfp_s(cpu,12) = (int32_t)*vfp_s(cpu,12);
    }
L_000d2c54:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_000d2c58:;
    {
        wr32(cpu->r[3] + + 0x420u, cpu->r[1]);
    }
L_000d2c5c:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,12);
    }
L_000d2c60:;
    {
        wr32(cpu->r[3] + + 0x424u, cpu->r[2]);
    }
L_000d2c64:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_000d2c68:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_000d2c6c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000d2c98;
        }
    }
L_000d2c70:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000d2c74:;
    {
        if (cond_test(cpu, 11)) {
        goto L_000d2b50;
        }
    }
L_000d2c78:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000d2c7c:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_000d2c80:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_000d2c84:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_000d2c88:;
    {
        cpu->r[12] = 0x0000000du;
    }
L_000d2c8c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[10]);
        wr32(ea + 4u, cpu->r[12]);
    }
L_000d2c90:;
    {
        cpu->r[14] = 0x000d2c94u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_000d2c94:;
    {
        goto L_000d2b50;
    }
L_000d2c98:;
    {
        cpu->r[3] = 0x00008d94u;
    }
L_000d2c9c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_000d2ca0:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_000d2ca4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d2ca8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000d2d00;
        }
    }
L_000d2cac:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000d2cb0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d2cb4:;
    {
        cpu->r[14] = 0x000d2cb8u; fn_000cdeb8(cpu);
    }
L_000d2cb8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d2cbc:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000d2cc0:;
    {
        cpu->r[14] = 0x000d2cc4u; fn_000e56e0(cpu);
    }
L_000d2cc4:;
    {
        cpu->r[3] = rd32(0x000d2cccu + + 0x78u);
    }
L_000d2cc8:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0xcu);
    }
L_000d2ccc:;
    {
        cpu->r[3] = rd32(cpu->r[11] + cpu->r[3]);
    }
L_000d2cd0:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000d2cd4:;
    {
        cpu->r[3] = 0x00005f60u;
    }
L_000d2cd8:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_000d2cdc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000d2ce0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000d2cec;
        }
    }
L_000d2ce4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_000d2ce8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000d2cecu)) return;
    }
L_000d2cec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d2cf0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000d2cf4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_000d2cf8:;
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
L_000d2cfc:;
    {
        return fn_000de340(cpu);
    }
L_000d2d00:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000d2d04:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000d2d08:;
    {
        cpu->r[14] = 0x000d2d0cu; fn_000d1950(cpu);
    }
L_000d2d0c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0xcu);
    }
L_000d2d10:;
    {
        cpu->r[3] = rd32(0x000d2d18u + + 0x30u);
    }
L_000d2d14:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_000d2d18:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_000d2d1c:;
    {
        cpu->r[3] = 0x00001314u;
    }
L_000d2d20:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_000d2d24:;
    {
        cpu->r[14] = 0x000d2d28u; fn_00151c40(cpu);
    }
L_000d2d28:;
    {
        goto L_000d2cac;
    }
}
