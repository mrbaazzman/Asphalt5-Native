#include "functions.h"

/* _ZNK4slim7XmlNode9writeNodeERSsi @ 001cc9b0 (arm) */
void fn_001cc9b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cc9b0:;
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
L_001cc9b4:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001cc9b8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_001cc9bc:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001cc9c0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_001cc9c4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001cd2b0;
        }
    }
L_001cc9c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ccb48;
        }
    }
L_001cc9cc:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_001cc9d0:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001cc9d4:;
    {
        uint32_t wb_tmp = cpu->r[1] + + 0x10u;
        cpu->r[7] = rd32(cpu->r[1] + + 0x10u);
        cpu->r[1] = wb_tmp;
    }
L_001cc9d8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_001cc9dc:;
    {
        cpu->r[3] = rd32(0x001cc9e4u + + 0x8dcu);
    }
L_001cc9e0:;
    {
        cpu->r[10] = cpu->r[5];
    }
L_001cc9e4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_001cc9e8:;
    {
        cpu->r[9] = 0x00000009u;
    }
L_001cc9ec:;
    {
        cpu->r[3] = add_flags(cpu, 0x001cc9f4u, cpu->r[3], 0, 0);
    }
L_001cc9f0:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_001cc9f4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_001cc9f8:;
    {
        goto L_001cca20;
    }
L_001cc9fc:;
    {
        wr8(cpu->r[7], cpu->r[10]);
    }
L_001cca00:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001cca04:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001cca08:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[8], 1, 1);
    }
L_001cca0c:;
    {
        wr8(cpu->r[3], cpu->r[9]);
    }
L_001cca10:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x10u);
    }
L_001cca14:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001cca18:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[7]);
    }
L_001cca1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ccb48;
        }
    }
L_001cca20:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_001cca24:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_001cca28:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
        }
    }
L_001cca2c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[4]);
        }
    }
L_001cca30:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[7], 1, 0);
        }
    }
L_001cca34:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 0);
        }
    }
L_001cca38:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_001cca3c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
        }
    }
L_001cca40:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cc9fc;
        }
    }
L_001cca44:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x10u);
    }
L_001cca48:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 0);
    }
L_001cca4c:;
    {
        add_flags(cpu, cpu->r[6], 0x00000002u, 0, 1);
    }
L_001cca50:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ccb0c;
        }
    }
L_001cca54:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001cca58:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_001cca5c:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
        }
    }
L_001cca60:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_001cca64:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_001cca68:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ccb18;
        }
    }
L_001cca6c:;
    {
        cpu->r[2] = (~0x00000001u);
    }
L_001cca70:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[2]);
    }
L_001cca74:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001cca78:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001cca7c:;
    {
        cpu->r[14] = 0x001cca80u; fn_0018ba6c(cpu);
    }
L_001cca80:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001cca84:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001cca88:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001cca8c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_001cca90:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x14u);
    }
L_001cca94:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x10u);
    }
L_001cca98:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_001cca9c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001ccaa0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[11] = cpu->r[6];
        }
    }
L_001ccaa4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001ccac8;
        }
    }
L_001ccaa8:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_001ccaac:;
    {
        cpu->r[0] = rd8(cpu->r[2] + cpu->r[11]);
    }
L_001ccab0:;
    {
        wr8(cpu->r[6] + cpu->r[11], cpu->r[0]);
    }
L_001ccab4:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_001ccab8:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[1], 1, 1);
    }
L_001ccabc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ccaac;
        }
    }
L_001ccac0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[6], cpu->r[11], 0, 0);
    }
L_001ccac4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_001ccac8:;
    {
        wr8(cpu->r[11], cpu->r[10]);
    }
L_001ccacc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_001ccad0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[0], 1, 1);
    }
L_001ccad4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ccafc;
        }
    }
L_001ccad8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ccadc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ccafc;
        }
    }
L_001ccae0:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_001ccae4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001ccae8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001ccaec:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001cd124;
        }
    }
L_001ccaf0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001ccaf4:;
    {
        cpu->r[14] = 0x001ccaf8u; fn_002082a8(cpu);
    }
L_001ccaf8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001ccafc:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001ccb00:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[11]);
    }
L_001ccb04:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[6]);
    }
L_001ccb08:;
    {
        goto L_001cc9fc;
    }
L_001ccb0c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_001ccb10:;
    {
        cpu->r[14] = 0x001ccb14u; fn_00208298(cpu);
    }
L_001ccb14:;
    {
        cpu->r[3] = (~0x00000002u);
    }
L_001ccb18:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_001ccb1c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001cca6c;
        }
    }
L_001ccb20:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ccb24:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = 0x00000001u;
        }
    }
L_001ccb28:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = cpu->r[3];
        }
    }
L_001ccb2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cca90;
        }
    }
L_001ccb30:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000080u, 1, 1);
    }
L_001ccb34:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_001ccb38:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001cca78;
        }
    }
L_001ccb3c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_001ccb40:;
    {
        cpu->r[14] = 0x001ccb44u; fn_00208278(cpu);
    }
L_001ccb44:;
    {
        goto L_001cca80;
    }
L_001ccb48:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_001ccb4c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x30u);
    }
L_001ccb50:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001ccb54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd158;
        }
    }
L_001ccb58:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x14u);
    }
L_001ccb5c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_001ccb60:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[13] + + 0x10u, cpu->r[4]);
        }
    }
L_001ccb64:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = cpu->r[4];
        }
    }
L_001ccb68:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000010u, 0, 0);
        }
    }
L_001ccb6c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[4]);
        }
    }
L_001ccb70:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t wb_tmp = cpu->r[2] + + 0x10u;
        cpu->r[6] = rd32(cpu->r[2] + + 0x10u);
        cpu->r[2] = wb_tmp;
        }
    }
L_001ccb74:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = rd32(cpu->r[4] + + 0x10u);
        }
    }
L_001ccb78:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 0);
        }
    }
L_001ccb7c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
        }
    }
L_001ccb80:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[6], 1, 0);
        }
    }
L_001ccb84:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
        }
    }
L_001ccb88:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001ccb8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd198;
        }
    }
L_001ccb90:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001ccb94:;
    {
        wr8(cpu->r[6] + + 0x1u, cpu->r[7]);
    }
L_001ccb98:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001ccb9c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_001ccba0:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x14u);
    }
L_001ccba4:;
    {
        cpu->r[2] = 0x0000003cu;
    }
L_001ccba8:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[1]);
    }
L_001ccbac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ccbb0:;
    {
        wr8(cpu->r[3], cpu->r[2]);
    }
L_001ccbb4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_001ccbb8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001ccbbc:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x14u);
    }
L_001ccbc0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001ccbc4:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_001ccbc8:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x10u);
    }
L_001ccbcc:;
    {
        cpu->r[14] = 0x001ccbd0u; fn_001b4cd4(cpu);
    }
L_001ccbd0:;
    {
        cpu->r[3] = rd32(0x001ccbd8u + + 0x6ecu);
    }
L_001ccbd4:;
    {
        uint32_t wb_tmp = cpu->r[10] + + 0x34u;
        cpu->r[5] = rd32(cpu->r[10] + + 0x34u);
        cpu->r[10] = wb_tmp;
    }
L_001ccbd8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001ccbe0u, cpu->r[3], 0, 0);
    }
L_001ccbdc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_001ccbe0:;
    {
        cpu->r[3] = rd32(0x001ccbe8u + + 0x6e0u);
    }
L_001ccbe4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_001ccbe8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001ccbf0u, cpu->r[3], 0, 0);
    }
L_001ccbec:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_001ccbf0:;
    {
        cpu->r[3] = rd32(0x001ccbf8u + + 0x6d4u);
    }
L_001ccbf4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000002u, 0, 0);
    }
L_001ccbf8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[8]);
    }
L_001ccbfc:;
    {
        cpu->r[3] = add_flags(cpu, 0x001ccc04u, cpu->r[3], 0, 0);
    }
L_001ccc00:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_001ccc04:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_001ccc08:;
    {
        goto L_001cccbc;
    }
L_001ccc0c:;
    {
        wr8(cpu->r[9], cpu->r[7]);
    }
L_001ccc10:;
    {
        cpu->r[2] = 0x00000020u;
    }
L_001ccc14:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001ccc18:;
    {
        wr8(cpu->r[3], cpu->r[2]);
    }
L_001ccc1c:;
    {
        cpu->r[8] = rd32(cpu->r[6] + + 0x14u);
    }
L_001ccc20:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001ccc24:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ccc28:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001ccc2c:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_001ccc30:;
    {
        cpu->r[14] = 0x001ccc34u; imp_strlen(cpu); /* strlen */
    }
L_001ccc34:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001ccc38:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], cpu->r[0], 0, 0);
    }
L_001ccc3c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ccc40:;
    {
        cpu->r[14] = 0x001ccc44u; fn_001b4cd4(cpu);
    }
L_001ccc44:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_001ccc48:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001ccc4c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ccc50:;
    {
        cpu->r[14] = 0x001ccc54u; fn_001b4cd4(cpu);
    }
L_001ccc54:;
    {
        cpu->r[6] = rd32(cpu->r[6] + + 0x2cu);
    }
L_001ccc58:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ccc5c:;
    {
        cpu->r[14] = 0x001ccc60u; imp_strlen(cpu); /* strlen */
    }
L_001ccc60:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001ccc64:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], cpu->r[0], 0, 0);
    }
L_001ccc68:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ccc6c:;
    {
        cpu->r[14] = 0x001ccc70u; fn_001b4cd4(cpu);
    }
L_001ccc70:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_001ccc74:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_001ccc78:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[9] = rd32(cpu->r[4] + + 0x10u);
        }
    }
L_001ccc7c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[9] = rd32(cpu->r[4] + + 0x10u);
        }
    }
L_001ccc80:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
        }
    }
L_001ccc84:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[4]);
        }
    }
L_001ccc88:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[9], 1, 0);
        }
    }
L_001ccc8c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[9], 1, 0);
        }
    }
L_001ccc90:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_001ccc94:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
        }
    }
L_001ccc98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ccdb4;
        }
    }
L_001ccc9c:;
    {
        wr8(cpu->r[9], cpu->r[7]);
    }
L_001ccca0:;
    {
        cpu->r[2] = 0x00000022u;
    }
L_001ccca4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001ccca8:;
    {
        wr8(cpu->r[3], cpu->r[2]);
    }
L_001cccac:;
    {
        cpu->r[5] = rd32(cpu->r[5]);
    }
L_001cccb0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001cccb4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001cccb8:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_001cccbc:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[10], 1, 1);
    }
L_001cccc0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ccee4;
        }
    }
L_001cccc4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_001cccc8:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x8u);
    }
L_001ccccc:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_001cccd0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[9] = rd32(cpu->r[4] + + 0x10u);
        }
    }
L_001cccd4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[9] = rd32(cpu->r[4] + + 0x10u);
        }
    }
L_001cccd8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
        }
    }
L_001cccdc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[4]);
        }
    }
L_001ccce0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[9], 1, 0);
        }
    }
L_001ccce4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[9], 1, 0);
        }
    }
L_001ccce8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_001cccec:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
        }
    }
L_001cccf0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ccc0c;
        }
    }
L_001cccf4:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 0);
    }
L_001cccf8:;
    {
        add_flags(cpu, cpu->r[9], 0x00000002u, 0, 1);
    }
L_001cccfc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ccea8;
        }
    }
L_001ccd00:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_001ccd04:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000001u, 1, 1);
    }
L_001ccd08:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[9], 0, 0);
        }
    }
L_001ccd0c:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_001ccd10:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_001ccd14:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cceb4;
        }
    }
L_001ccd18:;
    {
        cpu->r[3] = (~0x00000001u);
    }
L_001ccd1c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_001ccd20:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ccd24:;
    {
        cpu->r[14] = 0x001ccd28u; fn_0018ba6c(cpu);
    }
L_001ccd28:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001ccd2c:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001ccd30:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001ccd34:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_001ccd38:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x14u);
    }
L_001ccd3c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x10u);
    }
L_001ccd40:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_001ccd44:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001ccd48:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[11] = cpu->r[8];
        }
    }
L_001ccd4c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001ccd70;
        }
    }
L_001ccd50:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_001ccd54:;
    {
        cpu->r[0] = rd8(cpu->r[2] + cpu->r[11]);
    }
L_001ccd58:;
    {
        wr8(cpu->r[8] + cpu->r[11], cpu->r[0]);
    }
L_001ccd5c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_001ccd60:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[1], 1, 1);
    }
L_001ccd64:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ccd54;
        }
    }
L_001ccd68:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[8], cpu->r[11], 0, 0);
    }
L_001ccd6c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_001ccd70:;
    {
        wr8(cpu->r[11], cpu->r[7]);
    }
L_001ccd74:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_001ccd78:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[0], 1, 1);
    }
L_001ccd7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ccda4;
        }
    }
L_001ccd80:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001ccd84:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ccda4;
        }
    }
L_001ccd88:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_001ccd8c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001ccd90:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001ccd94:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001cd134;
        }
    }
L_001ccd98:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001ccd9c:;
    {
        cpu->r[14] = 0x001ccda0u; fn_002082a8(cpu);
    }
L_001ccda0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001ccda4:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001ccda8:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[11]);
    }
L_001ccdac:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[8]);
    }
L_001ccdb0:;
    {
        goto L_001ccc0c;
    }
L_001ccdb4:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 0);
    }
L_001ccdb8:;
    {
        add_flags(cpu, cpu->r[9], 0x00000002u, 0, 1);
    }
L_001ccdbc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cce6c;
        }
    }
L_001ccdc0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_001ccdc4:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000001u, 1, 1);
    }
L_001ccdc8:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[9], 0, 0);
        }
    }
L_001ccdcc:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
        }
    }
L_001ccdd0:;
    {
        add_flags(cpu, cpu->r[11], 0x00000001u, 0, 1);
    }
L_001ccdd4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cce78;
        }
    }
L_001ccdd8:;
    {
        cpu->r[11] = (~0x00000001u);
    }
L_001ccddc:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[11]);
    }
L_001ccde0:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001ccde4:;
    {
        cpu->r[14] = 0x001ccde8u; fn_0018ba6c(cpu);
    }
L_001ccde8:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001ccdec:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001ccdf0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001ccdf4:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[0], cpu->r[11], 0, 0);
    }
L_001ccdf8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_001ccdfc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10u);
    }
L_001cce00:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001cce04:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001cce08:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[8] = cpu->r[6];
        }
    }
L_001cce0c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001cce30;
        }
    }
L_001cce10:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_001cce14:;
    {
        cpu->r[1] = rd8(cpu->r[3] + cpu->r[8]);
    }
L_001cce18:;
    {
        wr8(cpu->r[6] + cpu->r[8], cpu->r[1]);
    }
L_001cce1c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_001cce20:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[2], 1, 1);
    }
L_001cce24:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cce14;
        }
    }
L_001cce28:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[6], cpu->r[8], 0, 0);
    }
L_001cce2c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_001cce30:;
    {
        wr8(cpu->r[8], cpu->r[7]);
    }
L_001cce34:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_001cce38:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[0], 1, 1);
    }
L_001cce3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cce5c;
        }
    }
L_001cce40:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cce44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cce5c;
        }
    }
L_001cce48:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_001cce4c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001cce50:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001cce54:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001cd150;
        }
    }
L_001cce58:;
    {
        cpu->r[14] = 0x001cce5cu; fn_002082a8(cpu);
    }
L_001cce5c:;
    {
        wr32(cpu->r[4], cpu->r[11]);
    }
L_001cce60:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[8]);
    }
L_001cce64:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[6]);
    }
L_001cce68:;
    {
        goto L_001ccc9c;
    }
L_001cce6c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_001cce70:;
    {
        cpu->r[11] = (~0x00000002u);
    }
L_001cce74:;
    {
        cpu->r[14] = 0x001cce78u; fn_00208298(cpu);
    }
L_001cce78:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[11], 1, 1);
    }
L_001cce7c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001ccdd8;
        }
    }
L_001cce80:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_001cce84:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[9] = 0x00000001u;
        }
    }
L_001cce88:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = cpu->r[11];
        }
    }
L_001cce8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ccdf8;
        }
    }
L_001cce90:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000080u, 1, 1);
    }
L_001cce94:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[11]);
    }
L_001cce98:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001ccde0;
        }
    }
L_001cce9c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001ccea0:;
    {
        cpu->r[14] = 0x001ccea4u; fn_00208278(cpu);
    }
L_001ccea4:;
    {
        goto L_001ccde8;
    }
L_001ccea8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_001cceac:;
    {
        cpu->r[14] = 0x001cceb0u; fn_00208298(cpu);
    }
L_001cceb0:;
    {
        cpu->r[3] = (~0x00000002u);
    }
L_001cceb4:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_001cceb8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001ccd18;
        }
    }
L_001ccebc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001ccec0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[9] = 0x00000001u;
        }
    }
L_001ccec4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = cpu->r[3];
        }
    }
L_001ccec8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ccd38;
        }
    }
L_001ccecc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000080u, 1, 1);
    }
L_001cced0:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_001cced4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001ccd20;
        }
    }
L_001cced8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001ccedc:;
    {
        cpu->r[14] = 0x001ccee0u; fn_00208278(cpu);
    }
L_001ccee0:;
    {
        goto L_001ccd28;
    }
L_001ccee4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_001ccee8:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x18u);
    }
L_001cceec:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[2], 0x00000040u, 0, 0);
    }
L_001ccef0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x40u);
    }
L_001ccef4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001ccef8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd284;
        }
    }
L_001ccefc:;
    {
        cpu->r[1] = rd32(0x001ccf04u + + 0x3ccu);
    }
L_001ccf00:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ccf04:;
    {
        cpu->r[1] = add_flags(cpu, 0x001ccf0cu, cpu->r[1], 0, 0);
    }
L_001ccf08:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001ccf0c:;
    {
        cpu->r[14] = 0x001ccf10u; fn_001b4cd4(cpu);
    }
L_001ccf10:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_001ccf14:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x40u);
    }
L_001ccf18:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_001ccf1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd084;
        }
    }
L_001ccf20:;
    {
        cpu->r[1] = rd32(0x001ccf28u + + 0x3acu);
    }
L_001ccf24:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ccf28:;
    {
        cpu->r[1] = add_flags(cpu, 0x001ccf30u, cpu->r[1], 0, 0);
    }
L_001ccf2c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000002u, 0, 0);
    }
L_001ccf30:;
    {
        cpu->r[14] = 0x001ccf34u; fn_001b4cd4(cpu);
    }
L_001ccf34:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_001ccf38:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001ccf3c:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001ccf40:;
    {
        cpu->r[14] = 0x001ccf44u; fn_001cd2f4(cpu);
    }
L_001ccf44:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001ccf48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd098;
        }
    }
L_001ccf4c:;
    {
        cpu->r[3] = rd32(0x001ccf54u + + 0x384u);
    }
L_001ccf50:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001ccf54:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_001ccf58:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x10u);
    }
L_001ccf5c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001ccf64u, cpu->r[3], 0, 0);
    }
L_001ccf60:;
    {
        cpu->r[10] = cpu->r[5];
    }
L_001ccf64:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_001ccf68:;
    {
        cpu->r[9] = 0x00000009u;
    }
L_001ccf6c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_001ccf70:;
    {
        goto L_001ccf98;
    }
L_001ccf74:;
    {
        wr8(cpu->r[7], cpu->r[10]);
    }
L_001ccf78:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001ccf7c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001ccf80:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[8], 1, 1);
    }
L_001ccf84:;
    {
        wr8(cpu->r[3], cpu->r[9]);
    }
L_001ccf88:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x10u);
    }
L_001ccf8c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001ccf90:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[7]);
    }
L_001ccf94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd098;
        }
    }
L_001ccf98:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_001ccf9c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_001ccfa0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
        }
    }
L_001ccfa4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[4]);
        }
    }
L_001ccfa8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[7], 1, 0);
        }
    }
L_001ccfac:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 0);
        }
    }
L_001ccfb0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_001ccfb4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
        }
    }
L_001ccfb8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ccf74;
        }
    }
L_001ccfbc:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x10u);
    }
L_001ccfc0:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 0);
    }
L_001ccfc4:;
    {
        add_flags(cpu, cpu->r[6], 0x00000002u, 0, 1);
    }
L_001ccfc8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd0e8;
        }
    }
L_001ccfcc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001ccfd0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_001ccfd4:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
        }
    }
L_001ccfd8:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_001ccfdc:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_001ccfe0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cd0f4;
        }
    }
L_001ccfe4:;
    {
        cpu->r[2] = (~0x00000001u);
    }
L_001ccfe8:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[2]);
    }
L_001ccfec:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001ccff0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001ccff4:;
    {
        cpu->r[14] = 0x001ccff8u; fn_0018ba6c(cpu);
    }
L_001ccff8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001ccffc:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001cd000:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001cd004:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_001cd008:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x14u);
    }
L_001cd00c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x10u);
    }
L_001cd010:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_001cd014:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001cd018:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[11] = cpu->r[6];
        }
    }
L_001cd01c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001cd040;
        }
    }
L_001cd020:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_001cd024:;
    {
        cpu->r[0] = rd8(cpu->r[2] + cpu->r[11]);
    }
L_001cd028:;
    {
        wr8(cpu->r[6] + cpu->r[11], cpu->r[0]);
    }
L_001cd02c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_001cd030:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[1], 1, 1);
    }
L_001cd034:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cd024;
        }
    }
L_001cd038:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[6], cpu->r[11], 0, 0);
    }
L_001cd03c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_001cd040:;
    {
        wr8(cpu->r[11], cpu->r[10]);
    }
L_001cd044:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_001cd048:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[0], 1, 1);
    }
L_001cd04c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd074;
        }
    }
L_001cd050:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cd054:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd074;
        }
    }
L_001cd058:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_001cd05c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001cd060:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001cd064:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001cd274;
        }
    }
L_001cd068:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001cd06c:;
    {
        cpu->r[14] = 0x001cd070u; fn_002082a8(cpu);
    }
L_001cd070:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001cd074:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001cd078:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[11]);
    }
L_001cd07c:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[6]);
    }
L_001cd080:;
    {
        goto L_001ccf74;
    }
L_001cd084:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_001cd088:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cd08c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x2cu);
    }
L_001cd090:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x28u);
    }
L_001cd094:;
    {
        cpu->r[14] = 0x001cd098u; fn_001b4cd4(cpu);
    }
L_001cd098:;
    {
        cpu->r[1] = rd32(0x001cd0a0u + + 0x23cu);
    }
L_001cd09c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cd0a0:;
    {
        cpu->r[1] = add_flags(cpu, 0x001cd0a8u, cpu->r[1], 0, 0);
    }
L_001cd0a4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000002u, 0, 0);
    }
L_001cd0a8:;
    {
        cpu->r[14] = 0x001cd0acu; fn_001b4cd4(cpu);
    }
L_001cd0ac:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_001cd0b0:;
    {
        cpu->r[5] = rd32(cpu->r[1] + + 0x14u);
    }
L_001cd0b4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001cd0b8:;
    {
        cpu->r[14] = 0x001cd0bcu; imp_strlen(cpu); /* strlen */
    }
L_001cd0bc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001cd0c0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], cpu->r[0], 0, 0);
    }
L_001cd0c4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cd0c8:;
    {
        cpu->r[14] = 0x001cd0ccu; fn_001b4cd4(cpu);
    }
L_001cd0cc:;
    {
        cpu->r[1] = rd32(0x001cd0d4u + + 0x20cu);
    }
L_001cd0d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cd0d4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001cd0dcu, cpu->r[1], 0, 0);
    }
L_001cd0d8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000003u, 0, 0);
    }
L_001cd0dc:;
    {
        cpu->r[14] = 0x001cd0e0u; fn_001b4cd4(cpu);
    }
L_001cd0e0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_001cd0e4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cd0e8u)) return;
    }
L_001cd0e8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_001cd0ec:;
    {
        cpu->r[14] = 0x001cd0f0u; fn_00208298(cpu);
    }
L_001cd0f0:;
    {
        cpu->r[3] = (~0x00000002u);
    }
L_001cd0f4:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_001cd0f8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001ccfe4;
        }
    }
L_001cd0fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001cd100:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = 0x00000001u;
        }
    }
L_001cd104:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = cpu->r[3];
        }
    }
L_001cd108:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd008;
        }
    }
L_001cd10c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000080u, 1, 1);
    }
L_001cd110:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_001cd114:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001ccff0;
        }
    }
L_001cd118:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_001cd11c:;
    {
        cpu->r[14] = 0x001cd120u; fn_00208278(cpu);
    }
L_001cd120:;
    {
        goto L_001ccff8;
    }
L_001cd124:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001cd128:;
    {
        cpu->r[14] = 0x001cd12cu; fn_0018ba20(cpu);
    }
L_001cd12c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001cd130:;
    {
        goto L_001ccafc;
    }
L_001cd134:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001cd138:;
    {
        cpu->r[14] = 0x001cd13cu; fn_0018ba20(cpu);
    }
L_001cd13c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001cd140:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[11]);
    }
L_001cd144:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[8]);
    }
L_001cd148:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001cd14c:;
    {
        goto L_001ccc0c;
    }
L_001cd150:;
    {
        cpu->r[14] = 0x001cd154u; fn_0018ba20(cpu);
    }
L_001cd154:;
    {
        goto L_001cce5c;
    }
L_001cd158:;
    {
        cpu->r[1] = rd32(0x001cd160u + + 0x184u);
    }
L_001cd15c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cd160:;
    {
        cpu->r[1] = add_flags(cpu, 0x001cd168u, cpu->r[1], 0, 0);
    }
L_001cd164:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_001cd168:;
    {
        cpu->r[14] = 0x001cd16cu; fn_001b4cd4(cpu);
    }
L_001cd16c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_001cd170:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cd174:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x10u);
    }
L_001cd178:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x14u);
    }
L_001cd17c:;
    {
        cpu->r[14] = 0x001cd180u; fn_001b4cd4(cpu);
    }
L_001cd180:;
    {
        cpu->r[1] = rd32(0x001cd188u + + 0x160u);
    }
L_001cd184:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cd188:;
    {
        cpu->r[1] = add_flags(cpu, 0x001cd190u, cpu->r[1], 0, 0);
    }
L_001cd18c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000005u, 0, 0);
    }
L_001cd190:;
    {
        cpu->r[14] = 0x001cd194u; fn_001b4cd4(cpu);
    }
L_001cd194:;
    {
        goto L_001cd0e0;
    }
L_001cd198:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 0);
    }
L_001cd19c:;
    {
        add_flags(cpu, cpu->r[5], 0x00000002u, 0, 1);
    }
L_001cd1a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd1dc;
        }
    }
L_001cd1a4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001cd1a8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 1);
    }
L_001cd1ac:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[5], 0, 0);
        }
    }
L_001cd1b0:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
        }
    }
L_001cd1b4:;
    {
        add_flags(cpu, cpu->r[7], 0x00000001u, 0, 1);
    }
L_001cd1b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cd1ec;
        }
    }
L_001cd1bc:;
    {
        cpu->r[7] = (~0x00000001u);
    }
L_001cd1c0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_001cd1c4:;
    {
        uint32_t wb_tmp = cpu->r[0] + - 0x4u;
        wr32(cpu->r[0] + - 0x4u, cpu->r[7]);
        cpu->r[0] = wb_tmp;
    }
L_001cd1c8:;
    {
        cpu->r[14] = 0x001cd1ccu; fn_00097b58(cpu);
    }
L_001cd1cc:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001cd1d0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001cd1d4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], cpu->r[7], 0, 0);
    }
L_001cd1d8:;
    {
        goto L_001cd200;
    }
L_001cd1dc:;
    {
        cpu->r[0] = rd32(0x001cd1e4u + + 0x108u);
    }
L_001cd1e0:;
    {
        cpu->r[7] = (~0x00000002u);
    }
L_001cd1e4:;
    {
        cpu->r[0] = add_flags(cpu, 0x001cd1ecu, cpu->r[0], 0, 0);
    }
L_001cd1e8:;
    {
        cpu->r[14] = 0x001cd1ecu; fn_00208298(cpu);
    }
L_001cd1ec:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[7], 1, 1);
    }
L_001cd1f0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001cd1bc;
        }
    }
L_001cd1f4:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001cd1f8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = cpu->r[7];
        }
    }
L_001cd1fc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cd1c0;
        }
    }
L_001cd200:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x14u);
    }
L_001cd204:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x10u);
    }
L_001cd208:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_001cd20c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001cd210:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[6] = cpu->r[5];
        }
    }
L_001cd214:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001cd234;
        }
    }
L_001cd218:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001cd21c:;
    {
        cpu->r[3] = rd8(cpu->r[2] + cpu->r[6]);
    }
L_001cd220:;
    {
        wr8(cpu->r[5] + cpu->r[6], cpu->r[3]);
    }
L_001cd224:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001cd228:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[1], 1, 1);
    }
L_001cd22c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cd21c;
        }
    }
L_001cd230:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[5], cpu->r[6], 0, 0);
    }
L_001cd234:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001cd238:;
    {
        wr8(cpu->r[6], cpu->r[3]);
    }
L_001cd23c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_001cd240:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[0], 1, 1);
    }
L_001cd244:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd264;
        }
    }
L_001cd248:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001cd24c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd264;
        }
    }
L_001cd250:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_001cd254:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001cd258:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001cd25c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001cd2b8;
        }
    }
L_001cd260:;
    {
        cpu->r[14] = 0x001cd264u; fn_002082a8(cpu);
    }
L_001cd264:;
    {
        wr32(cpu->r[4], cpu->r[7]);
    }
L_001cd268:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[5]);
    }
L_001cd26c:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[6]);
    }
L_001cd270:;
    {
        goto L_001ccb90;
    }
L_001cd274:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001cd278:;
    {
        cpu->r[14] = 0x001cd27cu; fn_0018ba20(cpu);
    }
L_001cd27c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001cd280:;
    {
        goto L_001cd074;
    }
L_001cd284:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_001cd288:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x2cu);
    }
L_001cd28c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x28u);
    }
L_001cd290:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001cd294:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ccefc;
        }
    }
L_001cd298:;
    {
        cpu->r[1] = rd32(0x001cd2a0u + + 0x50u);
    }
L_001cd29c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cd2a0:;
    {
        cpu->r[1] = add_flags(cpu, 0x001cd2a8u, cpu->r[1], 0, 0);
    }
L_001cd2a4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_001cd2a8:;
    {
        cpu->r[14] = 0x001cd2acu; fn_001b4cd4(cpu);
    }
L_001cd2ac:;
    {
        goto L_001cd0e0;
    }
L_001cd2b0:;
    {
        cpu->r[14] = 0x001cd2b4u; fn_001cd2f4(cpu);
    }
L_001cd2b4:;
    {
        goto L_001cd0e0;
    }
L_001cd2b8:;
    {
        cpu->r[14] = 0x001cd2bcu; fn_0018ba20(cpu);
    }
L_001cd2bc:;
    {
        goto L_001cd264;
    }
}

/* _ZNK4slim7XmlNode15writeChildNodesERSsi @ 001cd2f4 (arm) */
void fn_001cd2f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cd2f4:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001cd2f8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001cd2fc:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001cd300:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001cd304:;
    {
        uint32_t wb_tmp = cpu->r[5] + + 0x40u;
        cpu->r[4] = rd32(cpu->r[5] + + 0x40u);
        cpu->r[5] = wb_tmp;
    }
L_001cd308:;
    {
        goto L_001cd318;
    }
L_001cd30c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_001cd310:;
    {
        cpu->r[14] = 0x001cd314u; fn_001cc9b0(cpu);
    }
L_001cd314:;
    {
        cpu->r[4] = rd32(cpu->r[4]);
    }
L_001cd318:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_001cd31c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001cd320:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001cd324:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cd30c;
        }
    }
L_001cd328:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cd32cu)) return;
    }
}

/* _ZNK3rss5writeEPN4slim7XmlNodeE @ 001cd32c (arm) */
void fn_001cd32c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cd32c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK7channel5writeEPN4slim7XmlNodeE @ 001cd330 (arm) */
void fn_001cd330(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cd330:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK4item5writeEPN4slim7XmlNodeE @ 001cd334 (arm) */
void fn_001cd334(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cd334:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4itemaSERKS_ @ 001cd338 (arm) */
void fn_001cd338(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cd338:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_001cd33c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001cd340:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001cd344:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001cd348:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd358;
        }
    }
L_001cd34c:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x14u);
    }
L_001cd350:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10u);
    }
L_001cd354:;
    {
        cpu->r[14] = 0x001cd358u; fn_00189c04(cpu);
    }
L_001cd358:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000018u, 0, 0);
    }
L_001cd35c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000018u, 0, 0);
    }
L_001cd360:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001cd364:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd374;
        }
    }
L_001cd368:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001cd36c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x28u);
    }
L_001cd370:;
    {
        cpu->r[14] = 0x001cd374u; fn_00189c04(cpu);
    }
L_001cd374:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000030u, 0, 0);
    }
L_001cd378:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000030u, 0, 0);
    }
L_001cd37c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001cd380:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd390;
        }
    }
L_001cd384:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x44u);
    }
L_001cd388:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x40u);
    }
L_001cd38c:;
    {
        cpu->r[14] = 0x001cd390u; fn_00189c04(cpu);
    }
L_001cd390:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000048u, 0, 0);
    }
L_001cd394:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000048u, 0, 0);
    }
L_001cd398:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001cd39c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd3ac;
        }
    }
L_001cd3a0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x5cu);
    }
L_001cd3a4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x58u);
    }
L_001cd3a8:;
    {
        cpu->r[14] = 0x001cd3acu; fn_00189c04(cpu);
    }
L_001cd3ac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000060u, 0, 0);
    }
L_001cd3b0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000060u, 0, 0);
    }
L_001cd3b4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001cd3b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd3c8;
        }
    }
L_001cd3bc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x74u);
    }
L_001cd3c0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x70u);
    }
L_001cd3c4:;
    {
        cpu->r[14] = 0x001cd3c8u; fn_00189c04(cpu);
    }
L_001cd3c8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000078u, 0, 0);
    }
L_001cd3cc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000078u, 0, 0);
    }
L_001cd3d0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001cd3d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd3e4;
        }
    }
L_001cd3d8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8cu);
    }
L_001cd3dc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x88u);
    }
L_001cd3e0:;
    {
        cpu->r[14] = 0x001cd3e4u; fn_00189c04(cpu);
    }
L_001cd3e4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000090u, 0, 0);
    }
L_001cd3e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000090u, 0, 0);
    }
L_001cd3ec:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001cd3f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd400;
        }
    }
L_001cd3f4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xa4u);
    }
L_001cd3f8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xa0u);
    }
L_001cd3fc:;
    {
        cpu->r[14] = 0x001cd400u; fn_00189c04(cpu);
    }
L_001cd400:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x000000a8u, 0, 0);
    }
L_001cd404:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x000000a8u, 0, 0);
    }
L_001cd408:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001cd40c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd41c;
        }
    }
L_001cd410:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xbcu);
    }
L_001cd414:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xb8u);
    }
L_001cd418:;
    {
        cpu->r[14] = 0x001cd41cu; fn_00189c04(cpu);
    }
L_001cd41c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x000000c0u, 0, 0);
    }
L_001cd420:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x000000c0u, 0, 0);
    }
L_001cd424:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001cd428:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd438;
        }
    }
L_001cd42c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xd0u);
    }
L_001cd430:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xd4u);
    }
L_001cd434:;
    {
        cpu->r[14] = 0x001cd438u; fn_00189c04(cpu);
    }
L_001cd438:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001cd43c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cd440u)) return;
    }
}

/* _ZN4itemD1Ev @ 001cd440 (arm) */
void fn_001cd440(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cd440:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x000000c0u, 0, 0);
    }
L_001cd444:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001cd448:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001cd44c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x14u);
    }
L_001cd450:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001cd454:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd474;
        }
    }
L_001cd458:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cd45c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd474;
        }
    }
L_001cd460:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xc0u);
    }
L_001cd464:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001cd468:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001cd46c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001cd5d8;
        }
    }
L_001cd470:;
    {
        cpu->r[14] = 0x001cd474u; fn_002082a8(cpu);
    }
L_001cd474:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x000000a8u, 0, 0);
    }
L_001cd478:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x14u);
    }
L_001cd47c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001cd480:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd4a0;
        }
    }
L_001cd484:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cd488:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd4a0;
        }
    }
L_001cd48c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xa8u);
    }
L_001cd490:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001cd494:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001cd498:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001cd604;
        }
    }
L_001cd49c:;
    {
        cpu->r[14] = 0x001cd4a0u; fn_002082a8(cpu);
    }
L_001cd4a0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000090u, 0, 0);
    }
L_001cd4a4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x14u);
    }
L_001cd4a8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001cd4ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd4cc;
        }
    }
L_001cd4b0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cd4b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd4cc;
        }
    }
L_001cd4b8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x90u);
    }
L_001cd4bc:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001cd4c0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001cd4c4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001cd60c;
        }
    }
L_001cd4c8:;
    {
        cpu->r[14] = 0x001cd4ccu; fn_002082a8(cpu);
    }
L_001cd4cc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000078u, 0, 0);
    }
L_001cd4d0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x14u);
    }
L_001cd4d4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001cd4d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd4f8;
        }
    }
L_001cd4dc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cd4e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd4f8;
        }
    }
L_001cd4e4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x78u);
    }
L_001cd4e8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001cd4ec:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001cd4f0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001cd614;
        }
    }
L_001cd4f4:;
    {
        cpu->r[14] = 0x001cd4f8u; fn_002082a8(cpu);
    }
L_001cd4f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000060u, 0, 0);
    }
L_001cd4fc:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x14u);
    }
L_001cd500:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001cd504:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd524;
        }
    }
L_001cd508:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cd50c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd524;
        }
    }
L_001cd510:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x60u);
    }
L_001cd514:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001cd518:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001cd51c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001cd61c;
        }
    }
L_001cd520:;
    {
        cpu->r[14] = 0x001cd524u; fn_002082a8(cpu);
    }
L_001cd524:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000048u, 0, 0);
    }
L_001cd528:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x14u);
    }
L_001cd52c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001cd530:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd550;
        }
    }
L_001cd534:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cd538:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd550;
        }
    }
L_001cd53c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x48u);
    }
L_001cd540:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001cd544:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001cd548:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001cd5e0;
        }
    }
L_001cd54c:;
    {
        cpu->r[14] = 0x001cd550u; fn_002082a8(cpu);
    }
L_001cd550:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000030u, 0, 0);
    }
L_001cd554:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x14u);
    }
L_001cd558:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001cd55c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd57c;
        }
    }
L_001cd560:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cd564:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd57c;
        }
    }
L_001cd568:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x30u);
    }
L_001cd56c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001cd570:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001cd574:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001cd5e8;
        }
    }
L_001cd578:;
    {
        cpu->r[14] = 0x001cd57cu; fn_002082a8(cpu);
    }
L_001cd57c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000018u, 0, 0);
    }
L_001cd580:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x14u);
    }
L_001cd584:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001cd588:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd5a8;
        }
    }
L_001cd58c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cd590:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd5a8;
        }
    }
L_001cd594:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x18u);
    }
L_001cd598:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001cd59c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001cd5a0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001cd5f0;
        }
    }
L_001cd5a4:;
    {
        cpu->r[14] = 0x001cd5a8u; fn_002082a8(cpu);
    }
L_001cd5a8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_001cd5ac:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_001cd5b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd5d0;
        }
    }
L_001cd5b4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cd5b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd5d0;
        }
    }
L_001cd5bc:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_001cd5c0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001cd5c4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001cd5c8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001cd5f8;
        }
    }
L_001cd5cc:;
    {
        cpu->r[14] = 0x001cd5d0u; fn_002082a8(cpu);
    }
L_001cd5d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cd5d4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001cd5d8u)) return;
    }
L_001cd5d8:;
    {
        cpu->r[14] = 0x001cd5dcu; fn_0018ba20(cpu);
    }
L_001cd5dc:;
    {
        goto L_001cd474;
    }
L_001cd5e0:;
    {
        cpu->r[14] = 0x001cd5e4u; fn_0018ba20(cpu);
    }
L_001cd5e4:;
    {
        goto L_001cd550;
    }
L_001cd5e8:;
    {
        cpu->r[14] = 0x001cd5ecu; fn_0018ba20(cpu);
    }
L_001cd5ec:;
    {
        goto L_001cd57c;
    }
L_001cd5f0:;
    {
        cpu->r[14] = 0x001cd5f4u; fn_0018ba20(cpu);
    }
L_001cd5f4:;
    {
        goto L_001cd5a8;
    }
L_001cd5f8:;
    {
        cpu->r[14] = 0x001cd5fcu; fn_0018ba20(cpu);
    }
L_001cd5fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cd600:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001cd604u)) return;
    }
L_001cd604:;
    {
        cpu->r[14] = 0x001cd608u; fn_0018ba20(cpu);
    }
L_001cd608:;
    {
        goto L_001cd4a0;
    }
L_001cd60c:;
    {
        cpu->r[14] = 0x001cd610u; fn_0018ba20(cpu);
    }
L_001cd610:;
    {
        goto L_001cd4cc;
    }
L_001cd614:;
    {
        cpu->r[14] = 0x001cd618u; fn_0018ba20(cpu);
    }
L_001cd618:;
    {
        goto L_001cd4f8;
    }
L_001cd61c:;
    {
        cpu->r[14] = 0x001cd620u; fn_0018ba20(cpu);
    }
L_001cd620:;
    {
        goto L_001cd524;
    }
}

/* _ZN7channelD1Ev @ 001cd624 (arm) */
void fn_001cd624(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cd624:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001cd628:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x4cu);
    }
L_001cd62c:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x48u);
    }
L_001cd630:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001cd634:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], 0x00000048u, 0, 0);
    }
L_001cd638:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_001cd63c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd654;
        }
    }
L_001cd640:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x000000d8u, 1, 0);
    }
L_001cd644:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001cd648:;
    {
        cpu->r[14] = 0x001cd64cu; fn_001cd440(cpu);
    }
L_001cd64c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 1);
    }
L_001cd650:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cd640;
        }
    }
L_001cd654:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x48u);
    }
L_001cd658:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cd65c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd694;
        }
    }
L_001cd660:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x8u);
    }
L_001cd664:;
    {
        cpu->r[1] = 0x000000d8u;
    }
L_001cd668:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 0);
    }
L_001cd66c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 3u, &shc); cpu->r[3] = v;
    }
L_001cd670:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_001cd674:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001cd678:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 2, 9u, &shc), cpu->r[3], 1, 0);
    }
L_001cd67c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 18u, &shc), 0, 0);
    }
L_001cd680:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_001cd684:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[1] = v;
    }
L_001cd688:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001cd68c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001cd71c;
        }
    }
L_001cd690:;
    {
        cpu->r[14] = 0x001cd694u; fn_002082a8(cpu);
    }
L_001cd694:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000030u, 0, 0);
    }
L_001cd698:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x14u);
    }
L_001cd69c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001cd6a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd6c0;
        }
    }
L_001cd6a4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cd6a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd6c0;
        }
    }
L_001cd6ac:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x30u);
    }
L_001cd6b0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001cd6b4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001cd6b8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001cd730;
        }
    }
L_001cd6bc:;
    {
        cpu->r[14] = 0x001cd6c0u; fn_002082a8(cpu);
    }
L_001cd6c0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000018u, 0, 0);
    }
L_001cd6c4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x14u);
    }
L_001cd6c8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001cd6cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd6ec;
        }
    }
L_001cd6d0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cd6d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd6ec;
        }
    }
L_001cd6d8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x18u);
    }
L_001cd6dc:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001cd6e0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001cd6e4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001cd738;
        }
    }
L_001cd6e8:;
    {
        cpu->r[14] = 0x001cd6ecu; fn_002082a8(cpu);
    }
L_001cd6ec:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_001cd6f0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_001cd6f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd714;
        }
    }
L_001cd6f8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cd6fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd714;
        }
    }
L_001cd700:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_001cd704:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001cd708:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001cd70c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001cd724;
        }
    }
L_001cd710:;
    {
        cpu->r[14] = 0x001cd714u; fn_002082a8(cpu);
    }
L_001cd714:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cd718:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cd71cu)) return;
    }
L_001cd71c:;
    {
        cpu->r[14] = 0x001cd720u; fn_0018ba20(cpu);
    }
L_001cd720:;
    {
        goto L_001cd694;
    }
L_001cd724:;
    {
        cpu->r[14] = 0x001cd728u; fn_0018ba20(cpu);
    }
L_001cd728:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cd72c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cd730u)) return;
    }
L_001cd730:;
    {
        cpu->r[14] = 0x001cd734u; fn_0018ba20(cpu);
    }
L_001cd734:;
    {
        goto L_001cd6c0;
    }
L_001cd738:;
    {
        cpu->r[14] = 0x001cd73cu; fn_0018ba20(cpu);
    }
L_001cd73c:;
    {
        goto L_001cd6ec;
    }
}

/* _ZN4item4readEPKN4slim7XmlNodeE @ 001cd740 (arm) */
void fn_001cd740(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cd740:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001cd744:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001cd748:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001cd74c:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001cd750:;
    {
        cpu->r[1] = rd32(0x001cd758u + + 0x1ccu);
    }
L_001cd754:;
    {
        cpu->r[1] = add_flags(cpu, 0x001cd75cu, cpu->r[1], 0, 0);
    }
L_001cd758:;
    {
        cpu->r[14] = 0x001cd75cu; fn_001cbf74(cpu);
    }
L_001cd75c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cd760:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd780;
        }
    }
L_001cd764:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x2cu);
    }
L_001cd768:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001cd76c:;
    {
        cpu->r[14] = 0x001cd770u; imp_strlen(cpu); /* strlen */
    }
L_001cd770:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001cd774:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], cpu->r[0], 0, 0);
    }
L_001cd778:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001cd77c:;
    {
        cpu->r[14] = 0x001cd780u; fn_00189c04(cpu);
    }
L_001cd780:;
    {
        cpu->r[1] = rd32(0x001cd788u + + 0x1a0u);
    }
L_001cd784:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cd788:;
    {
        cpu->r[1] = add_flags(cpu, 0x001cd790u, cpu->r[1], 0, 0);
    }
L_001cd78c:;
    {
        cpu->r[14] = 0x001cd790u; fn_001cbf74(cpu);
    }
L_001cd790:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cd794:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd7b4;
        }
    }
L_001cd798:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x2cu);
    }
L_001cd79c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001cd7a0:;
    {
        cpu->r[14] = 0x001cd7a4u; imp_strlen(cpu); /* strlen */
    }
L_001cd7a4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001cd7a8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], cpu->r[0], 0, 0);
    }
L_001cd7ac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000018u, 0, 0);
    }
L_001cd7b0:;
    {
        cpu->r[14] = 0x001cd7b4u; fn_00189c04(cpu);
    }
L_001cd7b4:;
    {
        cpu->r[1] = rd32(0x001cd7bcu + + 0x170u);
    }
L_001cd7b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cd7bc:;
    {
        cpu->r[1] = add_flags(cpu, 0x001cd7c4u, cpu->r[1], 0, 0);
    }
L_001cd7c0:;
    {
        cpu->r[14] = 0x001cd7c4u; fn_001cbf74(cpu);
    }
L_001cd7c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cd7c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd7e8;
        }
    }
L_001cd7cc:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x2cu);
    }
L_001cd7d0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001cd7d4:;
    {
        cpu->r[14] = 0x001cd7d8u; imp_strlen(cpu); /* strlen */
    }
L_001cd7d8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001cd7dc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], cpu->r[0], 0, 0);
    }
L_001cd7e0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000030u, 0, 0);
    }
L_001cd7e4:;
    {
        cpu->r[14] = 0x001cd7e8u; fn_00189c04(cpu);
    }
L_001cd7e8:;
    {
        cpu->r[1] = rd32(0x001cd7f0u + + 0x140u);
    }
L_001cd7ec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cd7f0:;
    {
        cpu->r[1] = add_flags(cpu, 0x001cd7f8u, cpu->r[1], 0, 0);
    }
L_001cd7f4:;
    {
        cpu->r[14] = 0x001cd7f8u; fn_001cbf74(cpu);
    }
L_001cd7f8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cd7fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd81c;
        }
    }
L_001cd800:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x2cu);
    }
L_001cd804:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001cd808:;
    {
        cpu->r[14] = 0x001cd80cu; imp_strlen(cpu); /* strlen */
    }
L_001cd80c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001cd810:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], cpu->r[0], 0, 0);
    }
L_001cd814:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000048u, 0, 0);
    }
L_001cd818:;
    {
        cpu->r[14] = 0x001cd81cu; fn_00189c04(cpu);
    }
L_001cd81c:;
    {
        cpu->r[1] = rd32(0x001cd824u + + 0x110u);
    }
L_001cd820:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cd824:;
    {
        cpu->r[1] = add_flags(cpu, 0x001cd82cu, cpu->r[1], 0, 0);
    }
L_001cd828:;
    {
        cpu->r[14] = 0x001cd82cu; fn_001cbf74(cpu);
    }
L_001cd82c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cd830:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd850;
        }
    }
L_001cd834:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x2cu);
    }
L_001cd838:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001cd83c:;
    {
        cpu->r[14] = 0x001cd840u; imp_strlen(cpu); /* strlen */
    }
L_001cd840:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001cd844:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], cpu->r[0], 0, 0);
    }
L_001cd848:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000060u, 0, 0);
    }
L_001cd84c:;
    {
        cpu->r[14] = 0x001cd850u; fn_00189c04(cpu);
    }
L_001cd850:;
    {
        cpu->r[1] = rd32(0x001cd858u + + 0xe0u);
    }
L_001cd854:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cd858:;
    {
        cpu->r[1] = add_flags(cpu, 0x001cd860u, cpu->r[1], 0, 0);
    }
L_001cd85c:;
    {
        cpu->r[14] = 0x001cd860u; fn_001cbf74(cpu);
    }
L_001cd860:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cd864:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd884;
        }
    }
L_001cd868:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x2cu);
    }
L_001cd86c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001cd870:;
    {
        cpu->r[14] = 0x001cd874u; imp_strlen(cpu); /* strlen */
    }
L_001cd874:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001cd878:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], cpu->r[0], 0, 0);
    }
L_001cd87c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000078u, 0, 0);
    }
L_001cd880:;
    {
        cpu->r[14] = 0x001cd884u; fn_00189c04(cpu);
    }
L_001cd884:;
    {
        cpu->r[1] = rd32(0x001cd88cu + + 0xb0u);
    }
L_001cd888:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cd88c:;
    {
        cpu->r[1] = add_flags(cpu, 0x001cd894u, cpu->r[1], 0, 0);
    }
L_001cd890:;
    {
        cpu->r[14] = 0x001cd894u; fn_001cbf74(cpu);
    }
L_001cd894:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cd898:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd8b8;
        }
    }
L_001cd89c:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x2cu);
    }
L_001cd8a0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001cd8a4:;
    {
        cpu->r[14] = 0x001cd8a8u; imp_strlen(cpu); /* strlen */
    }
L_001cd8a8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001cd8ac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], cpu->r[0], 0, 0);
    }
L_001cd8b0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000090u, 0, 0);
    }
L_001cd8b4:;
    {
        cpu->r[14] = 0x001cd8b8u; fn_00189c04(cpu);
    }
L_001cd8b8:;
    {
        cpu->r[1] = rd32(0x001cd8c0u + + 0x80u);
    }
L_001cd8bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cd8c0:;
    {
        cpu->r[1] = add_flags(cpu, 0x001cd8c8u, cpu->r[1], 0, 0);
    }
L_001cd8c4:;
    {
        cpu->r[14] = 0x001cd8c8u; fn_001cbf74(cpu);
    }
L_001cd8c8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cd8cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd8ec;
        }
    }
L_001cd8d0:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x2cu);
    }
L_001cd8d4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001cd8d8:;
    {
        cpu->r[14] = 0x001cd8dcu; imp_strlen(cpu); /* strlen */
    }
L_001cd8dc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001cd8e0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], cpu->r[0], 0, 0);
    }
L_001cd8e4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x000000a8u, 0, 0);
    }
L_001cd8e8:;
    {
        cpu->r[14] = 0x001cd8ecu; fn_00189c04(cpu);
    }
L_001cd8ec:;
    {
        cpu->r[1] = rd32(0x001cd8f4u + + 0x50u);
    }
L_001cd8f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cd8f4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001cd8fcu, cpu->r[1], 0, 0);
    }
L_001cd8f8:;
    {
        cpu->r[14] = 0x001cd8fcu; fn_001cbf74(cpu);
    }
L_001cd8fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cd900:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cd904u)) return;
        }
    }
L_001cd904:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x2cu);
    }
L_001cd908:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cd90c:;
    {
        cpu->r[14] = 0x001cd910u; imp_strlen(cpu); /* strlen */
    }
L_001cd910:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001cd914:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001cd918:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x000000c0u, 0, 0);
    }
L_001cd91c:;
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
L_001cd920:;
    {
        return fn_00189c04(cpu);
    }
}

/* _ZNSsC1ERKSs @ 001cd948 (arm) */
void fn_001cd948(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cd948:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001cd94c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001cd950:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[0]);
    }
L_001cd954:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[0]);
    }
L_001cd958:;
    {
        cpu->r[7] = rd32(cpu->r[1] + + 0x10u);
    }
L_001cd95c:;
    {
        cpu->r[6] = rd32(cpu->r[1] + + 0x14u);
    }
L_001cd960:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 0);
    }
L_001cd964:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001cd968:;
    {
        cpu->r[14] = 0x001cd96cu; fn_001b48a8(cpu);
    }
L_001cd96c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[7], 1, 1);
    }
L_001cd970:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_001cd974:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = cpu->r[0];
        }
    }
L_001cd978:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cd98c;
        }
    }
L_001cd97c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001cd980:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001cd984:;
    {
        cpu->r[14] = 0x001cd988u; imp_memcpy(cpu); /* memcpy */
    }
L_001cd988:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], cpu->r[5], 0, 0);
    }
L_001cd98c:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[5]);
    }
L_001cd990:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001cd994:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cd998:;
    {
        wr8(cpu->r[5], cpu->r[3]);
    }
L_001cd99c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cd9a0u)) return;
    }
}

/* _ZNSs9_M_insertEPcPKcS1_b @ 001cd9a0 (arm) */
void fn_001cd9a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cd9a0:;
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
L_001cd9a4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001cd9a8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_001cd9ac:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_001cd9b0:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001cd9b4:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001cd9b8:;
    {
        cpu->r[7] = rd8(cpu->r[13] + + 0x38u);
    }
L_001cd9bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cda60;
        }
    }
L_001cd9c0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x14u);
    }
L_001cd9c4:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 0);
    }
L_001cd9c8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_001cd9cc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = cpu->r[2];
        }
    }
L_001cd9d0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[8] + + 0x10u);
        }
    }
L_001cd9d4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[1] + + 0x10u;
        cpu->r[0] = rd32(cpu->r[1] + + 0x10u);
        cpu->r[1] = wb_tmp;
        }
    }
L_001cd9d8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd32(cpu->r[8]);
        }
    }
L_001cd9dc:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001cd9e0:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[1], 1, 1);
    }
L_001cd9e4:;
    {
        if (cond_test(cpu, 3)) {
        goto L_001cdb14;
        }
    }
L_001cd9e8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 0);
    }
L_001cd9ec:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 1);
    }
L_001cd9f0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001cda68;
        }
    }
L_001cd9f4:;
    {
        cpu->r[11] = sub_flags(cpu, 0x00000001u, cpu->r[6], 1, 0);
    }
L_001cd9f8:;
    {
        cpu->r[10] = sub_flags(cpu, 0x00000001u, cpu->r[11], 1, 0);
    }
L_001cd9fc:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[0], cpu->r[11], 0, 0);
    }
L_001cda00:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001cda04:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001cda24;
        }
    }
L_001cda08:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001cda0c:;
    {
        cpu->r[12] = rd8(cpu->r[9] + cpu->r[1]);
    }
L_001cda10:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001cda14:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[10], 1, 1);
    }
L_001cda18:;
    {
        uint32_t wb_tmp = cpu->r[0] + + 0x1u;
        wr8(cpu->r[0] + + 0x1u, cpu->r[12]);
        cpu->r[0] = wb_tmp;
    }
L_001cda1c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cda0c;
        }
    }
L_001cda20:;
    {
        cpu->r[0] = rd32(cpu->r[8] + + 0x10u);
    }
L_001cda24:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[11], 0, 1);
    }
L_001cda28:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
    }
L_001cda2c:;
    {
        wr32(cpu->r[8] + + 0x10u, cpu->r[0]);
    }
L_001cda30:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cdc60;
        }
    }
L_001cda34:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001cda38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cdaf8;
        }
    }
L_001cda3c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001cda40:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001cdaf8;
        }
    }
L_001cda44:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 1);
    }
L_001cda48:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001cdc78;
        }
    }
L_001cda4c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_001cda50:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], cpu->r[6], 0, 0);
    }
L_001cda54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cda60;
        }
    }
L_001cda58:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001cda5c:;
    {
        cpu->r[14] = 0x001cda60u; imp_memcpy(cpu); /* memcpy */
    }
L_001cda60:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001cda64:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cda68u)) return;
    }
L_001cda68:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001cda6c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001cda70:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], cpu->r[12], 0, 0);
    }
L_001cda74:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 0);
    }
L_001cda78:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001cda7c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001cda9c;
        }
    }
L_001cda80:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001cda84:;
    {
        cpu->r[9] = rd8(cpu->r[12] + cpu->r[1]);
    }
L_001cda88:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001cda8c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001cda90:;
    {
        uint32_t wb_tmp = cpu->r[0] + + 0x1u;
        wr8(cpu->r[0] + + 0x1u, cpu->r[9]);
        cpu->r[0] = wb_tmp;
    }
L_001cda94:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cda84;
        }
    }
L_001cda98:;
    {
        cpu->r[0] = rd32(cpu->r[8] + + 0x10u);
    }
L_001cda9c:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[5], 1, 0);
    }
L_001cdaa0:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 0);
    }
L_001cdaa4:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001cdaa8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
    }
L_001cdaac:;
    {
        wr32(cpu->r[8] + + 0x10u, cpu->r[0]);
    }
L_001cdab0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001cdad0;
        }
    }
L_001cdab4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001cdab8:;
    {
        cpu->r[1] = rd8(cpu->r[5] + cpu->r[3]);
    }
L_001cdabc:;
    {
        wr8(cpu->r[0] + cpu->r[3], cpu->r[1]);
    }
L_001cdac0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001cdac4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_001cdac8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cdab8;
        }
    }
L_001cdacc:;
    {
        cpu->r[0] = rd32(cpu->r[8] + + 0x10u);
    }
L_001cdad0:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001cdad4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
    }
L_001cdad8:;
    {
        wr32(cpu->r[8] + + 0x10u, cpu->r[0]);
    }
L_001cdadc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cdc20;
        }
    }
L_001cdae0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], cpu->r[4], 1, 1);
    }
L_001cdae4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cda60;
        }
    }
L_001cdae8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001cdaec:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001cdaf0:;
    {
        cpu->r[14] = 0x001cdaf4u; imp_memcpy(cpu); /* memcpy */
    }
L_001cdaf4:;
    {
        goto L_001cda60;
    }
L_001cdaf8:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001cdafc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cda60;
        }
    }
L_001cdb00:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001cdb04:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001cdb08:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001cdb0c:;
    {
        cpu->r[14] = 0x001cdb10u; imp_memcpy(cpu); /* memcpy */
    }
L_001cdb10:;
    {
        goto L_001cda60;
    }
L_001cdb14:;
    {
        cpu->r[3] = 0x0000fffeu;
    }
L_001cdb18:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_001cdb1c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xffffu << 16);
    }
L_001cdb20:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 0);
    }
L_001cdb24:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_001cdb28:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001cdc50;
        }
    }
L_001cdb2c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001cdb30:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 1);
    }
L_001cdb34:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[7], 0, 0);
        }
    }
L_001cdb38:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[6], 0, 0);
        }
    }
L_001cdb3c:;
    {
        add_flags(cpu, cpu->r[9], 0x00000001u, 0, 1);
    }
L_001cdb40:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cdc38;
        }
    }
L_001cdb44:;
    {
        cpu->r[9] = (~0x00000001u);
    }
L_001cdb48:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001cdb4c:;
    {
        uint32_t wb_tmp = cpu->r[0] + - 0x4u;
        wr32(cpu->r[0] + - 0x4u, cpu->r[9]);
        cpu->r[0] = wb_tmp;
    }
L_001cdb50:;
    {
        cpu->r[14] = 0x001cdb54u; fn_00097b58(cpu);
    }
L_001cdb54:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0xcu);
    }
L_001cdb58:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001cdb5c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[0], cpu->r[9], 0, 0);
    }
L_001cdb60:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x14u);
    }
L_001cdb64:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[5], cpu->r[1], 1, 0);
    }
L_001cdb68:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001cdb6c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[7] = cpu->r[10];
        }
    }
L_001cdb70:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001cdb90;
        }
    }
L_001cdb74:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001cdb78:;
    {
        cpu->r[3] = rd8(cpu->r[1] + cpu->r[7]);
    }
L_001cdb7c:;
    {
        wr8(cpu->r[10] + cpu->r[7], cpu->r[3]);
    }
L_001cdb80:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001cdb84:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 1);
    }
L_001cdb88:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cdb78;
        }
    }
L_001cdb8c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[10], cpu->r[7], 0, 0);
    }
L_001cdb90:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001cdb94:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001cdbb4;
        }
    }
L_001cdb98:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001cdb9c:;
    {
        cpu->r[2] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_001cdba0:;
    {
        wr8(cpu->r[7] + cpu->r[3], cpu->r[2]);
    }
L_001cdba4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001cdba8:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_001cdbac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cdb9c;
        }
    }
L_001cdbb0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[6], 0, 0);
    }
L_001cdbb4:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x10u);
    }
L_001cdbb8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 0);
    }
L_001cdbbc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001cdbc0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001cdbe0;
        }
    }
L_001cdbc4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001cdbc8:;
    {
        cpu->r[2] = rd8(cpu->r[5] + cpu->r[3]);
    }
L_001cdbcc:;
    {
        wr8(cpu->r[7] + cpu->r[3], cpu->r[2]);
    }
L_001cdbd0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001cdbd4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001cdbd8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cdbc8;
        }
    }
L_001cdbdc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[3], 0, 0);
    }
L_001cdbe0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001cdbe4:;
    {
        wr8(cpu->r[7], cpu->r[3]);
    }
L_001cdbe8:;
    {
        cpu->r[0] = rd32(cpu->r[8] + + 0x14u);
    }
L_001cdbec:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[0], 1, 1);
    }
L_001cdbf0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cdc10;
        }
    }
L_001cdbf4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001cdbf8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cdc10;
        }
    }
L_001cdbfc:;
    {
        cpu->r[1] = rd32(cpu->r[8]);
    }
L_001cdc00:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_001cdc04:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001cdc08:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001cdc94;
        }
    }
L_001cdc0c:;
    {
        cpu->r[14] = 0x001cdc10u; fn_002082a8(cpu);
    }
L_001cdc10:;
    {
        wr32(cpu->r[8] + + 0x14u, cpu->r[10]);
    }
L_001cdc14:;
    {
        wr32(cpu->r[8], cpu->r[9]);
    }
L_001cdc18:;
    {
        wr32(cpu->r[8] + + 0x10u, cpu->r[7]);
    }
L_001cdc1c:;
    {
        goto L_001cda60;
    }
L_001cdc20:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], cpu->r[4], 1, 1);
    }
L_001cdc24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cda60;
        }
    }
L_001cdc28:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001cdc2c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001cdc30:;
    {
        cpu->r[14] = 0x001cdc34u; imp_memmove(cpu); /* memmove */
    }
L_001cdc34:;
    {
        goto L_001cda60;
    }
L_001cdc38:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[9], 1, 1);
    }
L_001cdc3c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001cdb44;
        }
    }
L_001cdc40:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001cdc44:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = cpu->r[9];
        }
    }
L_001cdc48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cdb60;
        }
    }
L_001cdc4c:;
    {
        goto L_001cdb48;
    }
L_001cdc50:;
    {
        cpu->r[0] = rd32(0x001cdc58u + + 0x44u);
    }
L_001cdc54:;
    {
        cpu->r[0] = add_flags(cpu, 0x001cdc5cu, cpu->r[0], 0, 0);
    }
L_001cdc58:;
    {
        cpu->r[14] = 0x001cdc5cu; fn_00208298(cpu);
    }
L_001cdc5c:;
    {
        goto L_001cdb2c;
    }
L_001cdc60:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], cpu->r[6], 0, 0);
    }
L_001cdc64:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001cdc68:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001cdc6c:;
    {
        cpu->r[14] = 0x001cdc70u; imp_memmove(cpu); /* memmove */
    }
L_001cdc70:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001cdc74:;
    {
        goto L_001cda34;
    }
L_001cdc78:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001cdc7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cda60;
        }
    }
L_001cdc80:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001cdc84:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001cdc88:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001cdc8c:;
    {
        cpu->r[14] = 0x001cdc90u; imp_memmove(cpu); /* memmove */
    }
L_001cdc90:;
    {
        goto L_001cda60;
    }
L_001cdc94:;
    {
        cpu->r[14] = 0x001cdc98u; fn_0018ba20(cpu);
    }
L_001cdc98:;
    {
        goto L_001cdc10;
    }
}

/* _ZNSs10_M_replaceEPcS_PKcS1_b @ 001cdca0 (arm) */
void fn_001cdca0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cdca0:;
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
L_001cdca4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001cdca8:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
    }
L_001cdcac:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001cdcb0:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x30u);
    }
L_001cdcb4:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_001cdcb8:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_001cdcbc:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001cdcc0:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[11], cpu->r[3], 1, 0);
    }
L_001cdcc4:;
    {
        cpu->r[9] = rd8(cpu->r[13] + + 0x34u);
    }
L_001cdcc8:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[8], 1, 1);
    }
L_001cdccc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001cdd1c;
        }
    }
L_001cdcd0:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001cdcd4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cdd60;
        }
    }
L_001cdcd8:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001cdcdc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cdcf0;
        }
    }
L_001cdce0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001cdce4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001cdce8:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001cdcec:;
    {
        cpu->r[14] = 0x001cdcf0u; imp_memcpy(cpu); /* memcpy */
    }
L_001cdcf0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], cpu->r[10], 0, 0);
    }
L_001cdcf4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[7], 1, 1);
    }
L_001cdcf8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cdd54;
        }
    }
L_001cdcfc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_001cdd00:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001cdd04:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_001cdd08:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cddec;
        }
    }
L_001cdd0c:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[4], 1, 0);
    }
L_001cdd10:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_001cdd14:;
    {
        wr32(cpu->r[6] + + 0x10u, cpu->r[3]);
    }
L_001cdd18:;
    {
        goto L_001cdd54;
    }
L_001cdd1c:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001cdd20:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cdd9c;
        }
    }
L_001cdd24:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[5], cpu->r[8], 0, 0);
    }
L_001cdd28:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[8], cpu->r[5], 1, 1);
    }
L_001cdd2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cdd3c;
        }
    }
L_001cdd30:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001cdd34:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001cdd38:;
    {
        cpu->r[14] = 0x001cdd3cu; imp_memcpy(cpu); /* memcpy */
    }
L_001cdd3c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001cdd40:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001cdd44:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_001cdd48:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001cdd4c:;
    {
        wr32(cpu->r[13], cpu->r[9]);
    }
L_001cdd50:;
    {
        cpu->r[14] = 0x001cdd54u; fn_001cd9a0(cpu);
    }
L_001cdd54:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001cdd58:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001cdd5c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cdd60u)) return;
    }
L_001cdd60:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001cdd64:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001cdd68:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001cdd6c:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[1], 1, 1);
    }
L_001cdd70:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[11] = cpu->r[3];
        }
    }
L_001cdd74:;
    {
        if (cond_test(cpu, 4)) {
        uint32_t v = cpu->r[3] | 0x00000001u; cpu->r[11] = v;
        }
    }
L_001cdd78:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_001cdd7c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cdcd8;
        }
    }
L_001cdd80:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001cdd84:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cdcf0;
        }
    }
L_001cdd88:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001cdd8c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001cdd90:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001cdd94:;
    {
        cpu->r[14] = 0x001cdd98u; imp_memmove(cpu); /* memmove */
    }
L_001cdd98:;
    {
        goto L_001cdcf0;
    }
L_001cdd9c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001cdda0:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001cdda4:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001cdda8:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[1], 1, 1);
    }
L_001cddac:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t v = cpu->r[3] | 0x00000001u; cpu->r[3] = v;
        }
    }
L_001cddb0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001cddb4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cdd24;
        }
    }
L_001cddb8:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[1], 1, 1);
    }
L_001cddbc:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001cde00;
        }
    }
L_001cddc0:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001cddc4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[5], cpu->r[8], 0, 0);
    }
L_001cddc8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cde44;
        }
    }
L_001cddcc:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001cddd0:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001cddd4:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_001cddd8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001cdddc:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_001cdde0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001cdde4:;
    {
        cpu->r[14] = 0x001cdde8u; fn_001cd9a0(cpu);
    }
L_001cdde8:;
    {
        goto L_001cdd54;
    }
L_001cddec:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001cddf0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001cddf4:;
    {
        cpu->r[14] = 0x001cddf8u; imp_memmove(cpu); /* memmove */
    }
L_001cddf8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_001cddfc:;
    {
        goto L_001cdd0c;
    }
L_001cde00:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001cde04:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_001cde08:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], cpu->r[8], 0, 0);
    }
L_001cde0c:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x14u);
    }
L_001cde10:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_001cde14:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001cde18:;
    {
        cpu->r[14] = 0x001cde1cu; fn_001cd9a0(cpu);
    }
L_001cde1c:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001cde20:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x14u);
    }
L_001cde24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cdd54;
        }
    }
L_001cde28:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 0);
    }
L_001cde2c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[7], cpu->r[4], 1, 0);
    }
L_001cde30:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_001cde34:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_001cde38:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001cde3c:;
    {
        cpu->r[14] = 0x001cde40u; imp_memmove(cpu); /* memmove */
    }
L_001cde40:;
    {
        goto L_001cdd54;
    }
L_001cde44:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001cde48:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001cde4c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001cde50:;
    {
        cpu->r[14] = 0x001cde54u; imp_memmove(cpu); /* memmove */
    }
L_001cde54:;
    {
        goto L_001cddcc;
    }
}

/* _Z11trimHTMLstrSs @ 001cde58 (arm) */
void fn_001cde58(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cde58:;
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
L_001cde5c:;
    {
        cpu->r[8] = rd32(0x001cde64u + + 0x3e8u);
    }
L_001cde60:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000054u, 1, 0);
    }
L_001cde64:;
    {
        cpu->r[7] = rd32(cpu->r[1] + + 0x10u);
    }
L_001cde68:;
    {
        cpu->r[8] = add_flags(cpu, 0x001cde70u, cpu->r[8], 0, 0);
    }
L_001cde6c:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001cde70:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_001cde74:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_001cde78:;
    {
        uint32_t base = cpu->r[8];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        uint32_t v3 = rd32(ea + 12u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
        cpu->r[3] = v3;
        cpu->r[8] = base + 16u;
    }
L_001cde7c:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x14u);
    }
L_001cde80:;
    {
        cpu->r[10] = cpu->r[14];
    }
L_001cde84:;
    {
        cpu->r[12] = rd32(0x001cde8cu + + 0x3c4u);
    }
L_001cde88:;
    {
        cpu->r[4] = cpu->r[7];
    }
L_001cde8c:;
    {
        cpu->r[12] = add_flags(cpu, 0x001cde94u, cpu->r[12], 0, 0);
    }
L_001cde90:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001cde94:;
    {
        uint32_t base = cpu->r[14];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[14] = base + 16u;
    }
L_001cde98:;
    {
        cpu->r[12] = rd32(0x001cdea0u + + 0x3b4u);
    }
L_001cde9c:;
    {
        uint32_t base = cpu->r[8];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        uint32_t v3 = rd32(ea + 12u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
        cpu->r[3] = v3;
        cpu->r[8] = base + 16u;
    }
L_001cdea0:;
    {
        cpu->r[12] = add_flags(cpu, 0x001cdea8u, cpu->r[12], 0, 0);
    }
L_001cdea4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_001cdea8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000050u, 0, 0);
    }
L_001cdeac:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[12]);
    }
L_001cdeb0:;
    {
        uint32_t base = cpu->r[14];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[14] = base + 16u;
    }
L_001cdeb4:;
    {
        uint32_t base = cpu->r[8];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001cdeb8:;
    {
        uint32_t base = cpu->r[14];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_001cdebc:;
    {
        cpu->r[8] = rd32(cpu->r[10]);
    }
L_001cdec0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_001cdec4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[8], 0x00000002u, 0, 0);
    }
L_001cdec8:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_001cdecc:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_001cded0:;
    {
        goto L_001cdf64;
    }
L_001cded4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cded8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cdf80;
        }
    }
L_001cdedc:;
    {
        cpu->r[4] = rd32(cpu->r[10] + + 0x4u);
    }
L_001cdee0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001cdee4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cdee8:;
    {
        cpu->r[14] = 0x001cdeecu; imp_strlen(cpu); /* strlen */
    }
L_001cdeec:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001cdef0:;
    {
        cpu->r[3] = 0x0000fffeu;
    }
L_001cdef4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[9], cpu->r[6], 1, 0);
    }
L_001cdef8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xffffu << 16);
    }
L_001cdefc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[11], 1, 1);
    }
L_001cdf00:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[11] = cpu->r[2];
        }
    }
L_001cdf04:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[9], 1, 0);
    }
L_001cdf08:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[11], 0, 0);
    }
L_001cdf0c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_001cdf10:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001ce0cc;
        }
    }
L_001cdf14:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x14u);
    }
L_001cdf18:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[6], 0, 0);
    }
L_001cdf1c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[4], cpu->r[7], 0, 0);
    }
L_001cdf20:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_001cdf24:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[11], 0, 0);
    }
L_001cdf28:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_001cdf2c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[6], 0, 0);
    }
L_001cdf30:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001cdf44;
        }
    }
L_001cdf34:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x10u);
    }
L_001cdf38:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[12], 1, 1);
    }
L_001cdf3c:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_001cdf40:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[12] = 0x00000001u;
        }
    }
L_001cdf44:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_001cdf48:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001cdf4c:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_001cdf50:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001cdf54:;
    {
        cpu->r[14] = 0x001cdf58u; fn_001cdca0(cpu);
    }
L_001cdf58:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x10u);
    }
L_001cdf5c:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x14u);
    }
L_001cdf60:;
    {
        cpu->r[4] = cpu->r[7];
    }
L_001cdf64:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001cdf68:;
    {
        cpu->r[14] = 0x001cdf6cu; imp_strlen(cpu); /* strlen */
    }
L_001cdf6c:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 1);
    }
L_001cdf70:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_001cdf74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cded4;
        }
    }
L_001cdf78:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[9], 1, 1);
    }
L_001cdf7c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001cdf9c;
        }
    }
L_001cdf80:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_001cdf84:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000008u, 0, 0);
    }
L_001cdf88:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001cdf8c:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[12], 1, 1);
    }
L_001cdf90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ce050;
        }
    }
L_001cdf94:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001cdf98:;
    {
        goto L_001cdebc;
    }
L_001cdf9c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[8], cpu->r[0], 0, 0);
    }
L_001cdfa0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 1);
    }
L_001cdfa4:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[14], cpu->r[8], 1, 1);
        }
    }
L_001cdfa8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cdfe8;
        }
    }
L_001cdfac:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001cdfb0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_001cdfb4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ce03c;
        }
    }
L_001cdfb8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[6], 1, 1);
    }
L_001cdfbc:;
    {
        if (cond_test(cpu, 5)) {
        goto L_001cdf80;
        }
    }
L_001cdfc0:;
    {
        cpu->r[4] = rd32(cpu->r[10] + + 0x4u);
    }
L_001cdfc4:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001cdfc8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cdfcc:;
    {
        cpu->r[14] = 0x001cdfd0u; imp_strlen(cpu); /* strlen */
    }
L_001cdfd0:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[6], 1, 1);
    }
L_001cdfd4:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001cdfd8:;
    {
        if (cond_test(cpu, 3)) {
        goto L_001cdef0;
        }
    }
L_001cdfdc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_001cdfe0:;
    {
        cpu->r[14] = 0x001cdfe4u; fn_00208288(cpu);
    }
L_001cdfe4:;
    {
        goto L_001cdef0;
    }
L_001cdfe8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_001cdfec:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[3], 1, 1);
    }
L_001cdff0:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[9]);
        }
    }
L_001cdff4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = cpu->r[6];
        }
    }
L_001cdff8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[9] = cpu->r[3];
        }
    }
L_001cdffc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ce20c;
        }
    }
L_001ce000:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[4], 1, 1);
    }
L_001ce004:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ce028;
        }
    }
L_001ce008:;
    {
        cpu->r[2] = rd8(cpu->r[9]);
    }
L_001ce00c:;
    {
        cpu->r[3] = rd8(cpu->r[8]);
    }
L_001ce010:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001ce014:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
        }
    }
L_001ce018:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ce084;
        }
    }
L_001ce01c:;
    {
        cpu->r[9] = cpu->r[1];
    }
L_001ce020:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[4], 1, 1);
    }
L_001ce024:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ce008;
        }
    }
L_001ce028:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_001ce02c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001ce030:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001ce034:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_001ce038:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cdfb8;
        }
    }
L_001ce03c:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001ce040:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_001ce044:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000008u, 0, 0);
    }
L_001ce048:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[12], 1, 1);
    }
L_001ce04c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cdf94;
        }
    }
L_001ce050:;
    {
        cpu->r[11] = rd32(0x001ce058u + + 0x200u);
    }
L_001ce054:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_001ce058:;
    {
        cpu->r[11] = add_flags(cpu, 0x001ce060u, cpu->r[11], 0, 0);
    }
L_001ce05c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 0);
    }
L_001ce060:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_001ce064:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001ce068:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001ce0d8;
        }
    }
L_001ce06c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001ce070:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_001ce074:;
    {
        cpu->r[14] = 0x001ce078u; fn_001cd948(cpu);
    }
L_001ce078:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_001ce07c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000054u, 0, 0);
    }
L_001ce080:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ce084u)) return;
    }
L_001ce084:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_001ce088:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_001ce08c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ce03c;
        }
    }
L_001ce090:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_001ce094:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_001ce098:;
    {
        cpu->r[12] = rd8(cpu->r[3]);
    }
L_001ce09c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001ce0a0:;
    {
        cpu->r[0] = rd8(cpu->r[2] + - 0x1u);
    }
L_001ce0a4:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 1);
    }
L_001ce0a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ce01c;
        }
    }
L_001ce0ac:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[14], 1, 1);
    }
L_001ce0b0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001ce0b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ce028;
        }
    }
L_001ce0b8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_001ce0bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ce098;
        }
    }
L_001ce0c0:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001ce0c4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001ce0c8:;
    {
        goto L_001cdfb0;
    }
L_001ce0cc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_001ce0d0:;
    {
        cpu->r[14] = 0x001ce0d4u; fn_00208298(cpu);
    }
L_001ce0d4:;
    {
        goto L_001cdf14;
    }
L_001ce0d8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_001ce0dc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001ce0e0:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001ce06c;
        }
    }
L_001ce0e4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], cpu->r[8], 0, 0);
    }
L_001ce0e8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_001ce0ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ce06c;
        }
    }
L_001ce0f0:;
    {
        cpu->r[0] = rd8(cpu->r[6] + cpu->r[8]);
    }
L_001ce0f4:;
    {
        sub_flags(cpu, cpu->r[0], 0x0000003cu, 1, 1);
    }
L_001ce0f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ce114;
        }
    }
L_001ce0fc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001ce100:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_001ce104:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ce06c;
        }
    }
L_001ce108:;
    {
        cpu->r[0] = rd8(cpu->r[1]);
    }
L_001ce10c:;
    {
        sub_flags(cpu, cpu->r[0], 0x0000003cu, 1, 1);
    }
L_001ce110:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ce0fc;
        }
    }
L_001ce114:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_001ce118:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ce06c;
        }
    }
L_001ce11c:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[1], cpu->r[6], 1, 1);
    }
L_001ce120:;
    {
        if (cond_test(cpu, 5)) {
        goto L_001ce06c;
        }
    }
L_001ce124:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_001ce128:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001ce17c;
        }
    }
L_001ce12c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_001ce130:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_001ce134:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_001ce138:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001ce1d8;
        }
    }
L_001ce13c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[8], 1, 0);
    }
L_001ce140:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[6], cpu->r[8], 0, 0);
    }
L_001ce144:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[10], 1, 1);
    }
L_001ce148:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[10] = add_flags(cpu, cpu->r[8], cpu->r[2], 0, 0);
        }
    }
L_001ce14c:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[10] = add_flags(cpu, cpu->r[8], cpu->r[10], 0, 0);
        }
    }
L_001ce150:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[6], cpu->r[10], 0, 0);
    }
L_001ce154:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[10], 1, 1);
    }
L_001ce158:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ce174;
        }
    }
L_001ce15c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001ce160:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[10], 1, 1);
    }
L_001ce164:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ce1f4;
        }
    }
L_001ce168:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[9], cpu->r[10], 1, 0);
    }
L_001ce16c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], cpu->r[7], 0, 0);
    }
L_001ce170:;
    {
        wr32(cpu->r[5] + + 0x10u, cpu->r[7]);
    }
L_001ce174:;
    {
        cpu->r[4] = cpu->r[7];
    }
L_001ce178:;
    {
        goto L_001ce05c;
    }
L_001ce17c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_001ce180:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001ce184:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001ce12c;
        }
    }
L_001ce188:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[6], cpu->r[8], 0, 0);
    }
L_001ce18c:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[4], 1, 1);
    }
L_001ce190:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ce12c;
        }
    }
L_001ce194:;
    {
        cpu->r[1] = rd8(cpu->r[6] + cpu->r[8]);
    }
L_001ce198:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000003eu, 1, 1);
    }
L_001ce19c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ce1b8;
        }
    }
L_001ce1a0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_001ce1a4:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[4], 1, 1);
    }
L_001ce1a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ce12c;
        }
    }
L_001ce1ac:;
    {
        cpu->r[1] = rd8(cpu->r[10]);
    }
L_001ce1b0:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000003eu, 1, 1);
    }
L_001ce1b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ce1a0;
        }
    }
L_001ce1b8:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[4], 1, 1);
    }
L_001ce1bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ce12c;
        }
    }
L_001ce1c0:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[6], 1, 0);
    }
L_001ce1c4:;
    {
        add_flags(cpu, cpu->r[10], 0x00000001u, 0, 1);
    }
L_001ce1c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ce12c;
        }
    }
L_001ce1cc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_001ce1d0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_001ce1d4:;
    {
        if (cond_test(cpu, 3)) {
        goto L_001ce13c;
        }
    }
L_001ce1d8:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001ce1dc:;
    {
        cpu->r[14] = 0x001ce1e0u; fn_00208288(cpu);
    }
L_001ce1e0:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x10u);
    }
L_001ce1e4:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x14u);
    }
L_001ce1e8:;
    {
        cpu->r[4] = cpu->r[7];
    }
L_001ce1ec:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 0);
    }
L_001ce1f0:;
    {
        goto L_001ce13c;
    }
L_001ce1f4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001ce1f8:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001ce1fc:;
    {
        cpu->r[14] = 0x001ce200u; imp_memmove(cpu); /* memmove */
    }
L_001ce200:;
    {
        cpu->r[4] = rd32(cpu->r[5] + + 0x10u);
    }
L_001ce204:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x14u);
    }
L_001ce208:;
    {
        goto L_001ce168;
    }
L_001ce20c:;
    {
        cpu->r[2] = rd8(cpu->r[8]);
    }
L_001ce210:;
    {
        cpu->r[3] = rd8(cpu->r[6]);
    }
L_001ce214:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001ce218:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = cpu->r[6];
        }
    }
L_001ce21c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cdfac;
        }
    }
L_001ce220:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001ce224:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_001ce228:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ce03c;
        }
    }
L_001ce22c:;
    {
        cpu->r[3] = rd8(cpu->r[1]);
    }
L_001ce230:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001ce234:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cdfb0;
        }
    }
L_001ce238:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001ce23c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_001ce240:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ce22c;
        }
    }
L_001ce244:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001ce248:;
    {
        goto L_001ce040;
    }
}

/* _ZN7channelC1ERKS_ @ 001ce25c (arm) */
void fn_001ce25c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ce25c:;
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
L_001ce260:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_001ce264:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001ce268:;
    {
        cpu->r[14] = 0x001ce26cu; fn_001cd948(cpu);
    }
L_001ce26c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000018u, 0, 0);
    }
L_001ce270:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[9], 0x00000018u, 0, 0);
    }
L_001ce274:;
    {
        cpu->r[14] = 0x001ce278u; fn_001cd948(cpu);
    }
L_001ce278:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000030u, 0, 0);
    }
L_001ce27c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[9], 0x00000030u, 0, 0);
    }
L_001ce280:;
    {
        cpu->r[14] = 0x001ce284u; fn_001cd948(cpu);
    }
L_001ce284:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4cu);
    }
L_001ce288:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x48u);
    }
L_001ce28c:;
    {
        cpu->r[3] = 0x0000684bu;
    }
L_001ce290:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x012fu << 16);
    }
L_001ce294:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001ce298:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_001ce29c:;
    {
        wr32(cpu->r[9] + + 0x50u, cpu->r[1]);
    }
L_001ce2a0:;
    {
        wr32(cpu->r[9] + + 0x48u, cpu->r[1]);
    }
L_001ce2a4:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 3u, &shc); cpu->r[2] = v;
    }
L_001ce2a8:;
    {
        wr32(cpu->r[9] + + 0x4cu, cpu->r[1]);
    }
L_001ce2ac:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 3u, &shc), 0, 0);
    }
L_001ce2b0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[2], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
    }
L_001ce2b4:;
    {
        cpu->r[6] = sub_flags(cpu, shifter(cpu->r[6], 2, 9u, &shc), cpu->r[6], 1, 0);
    }
L_001ce2b8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 18u, &shc), 0, 0);
    }
L_001ce2bc:;
    {
        cpu->r[6] = sub_flags(cpu, 0x00000000u, cpu->r[6], 1, 0);
    }
L_001ce2c0:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_001ce2c4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001ce3d0;
        }
    }
L_001ce2c8:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001ce2cc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = cpu->r[6];
        }
    }
L_001ce2d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ce2fc;
        }
    }
L_001ce2d4:;
    {
        cpu->r[5] = 0x000000d8u;
    }
L_001ce2d8:;
    {
        uint32_t v = cpu->r[5] * cpu->r[6]; cpu->r[6] = v;
    }
L_001ce2dc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ce2e0:;
    {
        cpu->r[14] = 0x001ce2e4u; fn_0018ba6c(cpu);
    }
L_001ce2e4:;
    {
        cpu->r[3] = 0x0000425fu;
    }
L_001ce2e8:;
    {
        uint32_t v = shifter(cpu->r[6], 3, 3u, &shc); cpu->r[6] = v;
    }
L_001ce2ec:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x097bu << 16);
    }
L_001ce2f0:;
    {
        { uint64_t v = (uint64_t)cpu->r[3] * (uint64_t)cpu->r[6]; cpu->r[2] = (uint32_t)v; cpu->r[6] = (uint32_t)(v >> 32); }
    }
L_001ce2f4:;
    {
        uint32_t v = cpu->r[5] * cpu->r[6] + cpu->r[0]; cpu->r[6] = v;
    }
L_001ce2f8:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001ce2fc:;
    {
        wr32(cpu->r[9] + + 0x48u, cpu->r[8]);
    }
L_001ce300:;
    {
        wr32(cpu->r[9] + + 0x4cu, cpu->r[8]);
    }
L_001ce304:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x48u);
    }
L_001ce308:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4cu);
    }
L_001ce30c:;
    {
        wr32(cpu->r[9] + + 0x50u, cpu->r[6]);
    }
L_001ce310:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 0);
    }
L_001ce314:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 3u, &shc); cpu->r[3] = v;
    }
L_001ce318:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_001ce31c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001ce320:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 2, 9u, &shc), cpu->r[3], 1, 0);
    }
L_001ce324:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 18u, &shc), 0, 0);
    }
L_001ce328:;
    {
        cpu->r[11] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_001ce32c:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_001ce330:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001ce3c4;
        }
    }
L_001ce334:;
    {
        cpu->r[7] = cpu->r[11];
    }
L_001ce338:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001ce33c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[10], cpu->r[6], 0, 0);
    }
L_001ce340:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[8], cpu->r[6], 0, 0);
    }
L_001ce344:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001ce348:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ce34c:;
    {
        cpu->r[14] = 0x001ce350u; fn_001cd948(cpu);
    }
L_001ce350:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000018u, 0, 0);
    }
L_001ce354:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000018u, 0, 0);
    }
L_001ce358:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x000000d8u, 0, 0);
    }
L_001ce35c:;
    {
        cpu->r[14] = 0x001ce360u; fn_001cd948(cpu);
    }
L_001ce360:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000030u, 0, 0);
    }
L_001ce364:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000030u, 0, 0);
    }
L_001ce368:;
    {
        cpu->r[14] = 0x001ce36cu; fn_001cd948(cpu);
    }
L_001ce36c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000048u, 0, 0);
    }
L_001ce370:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000048u, 0, 0);
    }
L_001ce374:;
    {
        cpu->r[14] = 0x001ce378u; fn_001cd948(cpu);
    }
L_001ce378:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000060u, 0, 0);
    }
L_001ce37c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000060u, 0, 0);
    }
L_001ce380:;
    {
        cpu->r[14] = 0x001ce384u; fn_001cd948(cpu);
    }
L_001ce384:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000078u, 0, 0);
    }
L_001ce388:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000078u, 0, 0);
    }
L_001ce38c:;
    {
        cpu->r[14] = 0x001ce390u; fn_001cd948(cpu);
    }
L_001ce390:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000090u, 0, 0);
    }
L_001ce394:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000090u, 0, 0);
    }
L_001ce398:;
    {
        cpu->r[14] = 0x001ce39cu; fn_001cd948(cpu);
    }
L_001ce39c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x000000a8u, 0, 0);
    }
L_001ce3a0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x000000a8u, 0, 0);
    }
L_001ce3a4:;
    {
        cpu->r[14] = 0x001ce3a8u; fn_001cd948(cpu);
    }
L_001ce3a8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x000000c0u, 0, 0);
    }
L_001ce3ac:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x000000c0u, 0, 0);
    }
L_001ce3b0:;
    {
        cpu->r[14] = 0x001ce3b4u; fn_001cd948(cpu);
    }
L_001ce3b4:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_001ce3b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ce33c;
        }
    }
L_001ce3bc:;
    {
        cpu->r[3] = 0x000000d8u;
    }
L_001ce3c0:;
    {
        uint32_t v = cpu->r[3] * cpu->r[11] + cpu->r[8]; cpu->r[8] = v;
    }
L_001ce3c4:;
    {
        wr32(cpu->r[9] + + 0x4cu, cpu->r[8]);
    }
L_001ce3c8:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001ce3cc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ce3d0u)) return;
    }
L_001ce3d0:;
    {
        cpu->r[0] = rd32(0x001ce3d8u + + 0xcu);
    }
L_001ce3d4:;
    {
        cpu->r[0] = add_flags(cpu, 0x001ce3dcu, cpu->r[0], 0, 0);
    }
L_001ce3d8:;
    {
        cpu->r[14] = 0x001ce3dcu; imp_puts(cpu); /* puts */
    }
L_001ce3dc:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001ce3e0:;
    {
        cpu->r[14] = 0x001ce3e4u; imp_exit(cpu); /* exit */
    }
L_001ce3e4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[12], 3, (cpu->r[6] & 0xffu), &shc); cpu->r[3] = v;
        }
    }
}

/* _ZNSt6vectorI4itemSaIS0_EEaSERKS2_ @ 001ce3e8 (arm) */
void fn_001ce3e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ce3e8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_001ce3ec:;
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
L_001ce3f0:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001ce3f4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001ce3f8:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001ce3fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ce4dc;
        }
    }
L_001ce400:;
    {
        cpu->r[9] = rd32(cpu->r[0]);
    }
L_001ce404:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_001ce408:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x4u);
    }
L_001ce40c:;
    {
        cpu->r[7] = rd32(cpu->r[5]);
    }
L_001ce410:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[9], 1, 0);
    }
L_001ce414:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[7], 1, 0);
    }
L_001ce418:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 3u, &shc); cpu->r[3] = v;
    }
L_001ce41c:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 3u, &shc); cpu->r[2] = v;
    }
L_001ce420:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_001ce424:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 3u, &shc), 0, 0);
    }
L_001ce428:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_001ce42c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[2], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
    }
L_001ce430:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 2, 9u, &shc), cpu->r[3], 1, 0);
    }
L_001ce434:;
    {
        cpu->r[6] = sub_flags(cpu, shifter(cpu->r[6], 2, 9u, &shc), cpu->r[6], 1, 0);
    }
L_001ce438:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 18u, &shc), 0, 0);
    }
L_001ce43c:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_001ce440:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 18u, &shc), 0, 0);
    }
L_001ce444:;
    {
        cpu->r[6] = sub_flags(cpu, 0x00000000u, cpu->r[6], 1, 0);
    }
L_001ce448:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_001ce44c:;
    {
        cpu->r[4] = cpu->r[6];
    }
L_001ce450:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001ce61c;
        }
    }
L_001ce454:;
    {
        cpu->r[8] = rd32(cpu->r[10] + + 0x4u);
    }
L_001ce458:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[8], cpu->r[9], 1, 0);
    }
L_001ce45c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 3u, &shc); cpu->r[3] = v;
    }
L_001ce460:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_001ce464:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001ce468:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 2, 9u, &shc), cpu->r[3], 1, 0);
    }
L_001ce46c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 18u, &shc), 0, 0);
    }
L_001ce470:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_001ce474:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_001ce478:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001ce4e8;
        }
    }
L_001ce47c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001ce480:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001ce4c0;
        }
    }
L_001ce484:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001ce488:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[9], cpu->r[5], 0, 0);
    }
L_001ce48c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], cpu->r[5], 0, 0);
    }
L_001ce490:;
    {
        cpu->r[14] = 0x001ce494u; fn_001cd338(cpu);
    }
L_001ce494:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_001ce498:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x000000d8u, 0, 0);
    }
L_001ce49c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ce488;
        }
    }
L_001ce4a0:;
    {
        cpu->r[3] = 0x000000d8u;
    }
L_001ce4a4:;
    {
        cpu->r[8] = rd32(cpu->r[10] + + 0x4u);
    }
L_001ce4a8:;
    {
        uint32_t v = cpu->r[3] * cpu->r[4] + cpu->r[9]; cpu->r[9] = v;
    }
L_001ce4ac:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[8], 1, 1);
    }
L_001ce4b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ce4c8;
        }
    }
L_001ce4b4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001ce4b8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x000000d8u, 0, 0);
    }
L_001ce4bc:;
    {
        cpu->r[14] = 0x001ce4c0u; fn_001cd440(cpu);
    }
L_001ce4c0:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[8], 1, 1);
    }
L_001ce4c4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ce4b4;
        }
    }
L_001ce4c8:;
    {
        cpu->r[11] = 0x000000d8u;
    }
L_001ce4cc:;
    {
        cpu->r[9] = rd32(cpu->r[10]);
    }
L_001ce4d0:;
    {
        uint32_t v = cpu->r[11] * cpu->r[4]; cpu->r[11] = v;
    }
L_001ce4d4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[11], 0, 0);
    }
L_001ce4d8:;
    {
        wr32(cpu->r[10] + + 0x4u, cpu->r[9]);
    }
L_001ce4dc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001ce4e0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001ce4e4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ce4e8u)) return;
    }
L_001ce4e8:;
    {
        cpu->r[11] = 0x000000d8u;
    }
L_001ce4ec:;
    {
        uint32_t v = cpu->r[11] * cpu->r[3] + cpu->r[7]; cpu->r[11] = v;
    }
L_001ce4f0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[11], cpu->r[7], 1, 0);
    }
L_001ce4f4:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 3u, &shc); cpu->r[3] = v;
    }
L_001ce4f8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_001ce4fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001ce500:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 2, 9u, &shc), cpu->r[3], 1, 0);
    }
L_001ce504:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 18u, &shc), 0, 0);
    }
L_001ce508:;
    {
        cpu->r[4] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_001ce50c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001ce510:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001ce564;
        }
    }
L_001ce514:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_001ce518:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[9], cpu->r[8], 0, 0);
    }
L_001ce51c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], cpu->r[8], 0, 0);
    }
L_001ce520:;
    {
        cpu->r[14] = 0x001ce524u; fn_001cd338(cpu);
    }
L_001ce524:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 1);
    }
L_001ce528:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x000000d8u, 0, 0);
    }
L_001ce52c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ce518;
        }
    }
L_001ce530:;
    {
        cpu->r[8] = rd32(cpu->r[10] + + 0x4u);
    }
L_001ce534:;
    {
        cpu->r[11] = 0x000000d8u;
    }
L_001ce538:;
    {
        cpu->r[9] = rd32(cpu->r[10]);
    }
L_001ce53c:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_001ce540:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[8], cpu->r[9], 1, 0);
    }
L_001ce544:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x4u);
    }
L_001ce548:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 3u, &shc); cpu->r[3] = v;
    }
L_001ce54c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_001ce550:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_001ce554:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 2, 9u, &shc), cpu->r[3], 1, 0);
    }
L_001ce558:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 18u, &shc), 0, 0);
    }
L_001ce55c:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_001ce560:;
    {
        uint32_t v = cpu->r[11] * cpu->r[3] + cpu->r[2]; cpu->r[11] = v;
    }
L_001ce564:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[11], 1, 0);
    }
L_001ce568:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 3u, &shc); cpu->r[1] = v;
    }
L_001ce56c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 3u, &shc), 0, 0);
    }
L_001ce570:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001ce574:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[1], 2, 9u, &shc), cpu->r[1], 1, 0);
    }
L_001ce578:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 18u, &shc), 0, 0);
    }
L_001ce57c:;
    {
        cpu->r[7] = sub_flags(cpu, 0x00000000u, cpu->r[1], 1, 0);
    }
L_001ce580:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001ce584:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[9] = 0x00000000u;
        }
    }
L_001ce588:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001ce610;
        }
    }
L_001ce58c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[11], cpu->r[9], 0, 0);
    }
L_001ce590:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[8], cpu->r[9], 0, 0);
    }
L_001ce594:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001ce598:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ce59c:;
    {
        cpu->r[14] = 0x001ce5a0u; fn_001cd948(cpu);
    }
L_001ce5a0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000018u, 0, 0);
    }
L_001ce5a4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000018u, 0, 0);
    }
L_001ce5a8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x000000d8u, 0, 0);
    }
L_001ce5ac:;
    {
        cpu->r[14] = 0x001ce5b0u; fn_001cd948(cpu);
    }
L_001ce5b0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000030u, 0, 0);
    }
L_001ce5b4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000030u, 0, 0);
    }
L_001ce5b8:;
    {
        cpu->r[14] = 0x001ce5bcu; fn_001cd948(cpu);
    }
L_001ce5bc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000048u, 0, 0);
    }
L_001ce5c0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000048u, 0, 0);
    }
L_001ce5c4:;
    {
        cpu->r[14] = 0x001ce5c8u; fn_001cd948(cpu);
    }
L_001ce5c8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000060u, 0, 0);
    }
L_001ce5cc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000060u, 0, 0);
    }
L_001ce5d0:;
    {
        cpu->r[14] = 0x001ce5d4u; fn_001cd948(cpu);
    }
L_001ce5d4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000078u, 0, 0);
    }
L_001ce5d8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000078u, 0, 0);
    }
L_001ce5dc:;
    {
        cpu->r[14] = 0x001ce5e0u; fn_001cd948(cpu);
    }
L_001ce5e0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000090u, 0, 0);
    }
L_001ce5e4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000090u, 0, 0);
    }
L_001ce5e8:;
    {
        cpu->r[14] = 0x001ce5ecu; fn_001cd948(cpu);
    }
L_001ce5ec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x000000a8u, 0, 0);
    }
L_001ce5f0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x000000a8u, 0, 0);
    }
L_001ce5f4:;
    {
        cpu->r[14] = 0x001ce5f8u; fn_001cd948(cpu);
    }
L_001ce5f8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x000000c0u, 0, 0);
    }
L_001ce5fc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x000000c0u, 0, 0);
    }
L_001ce600:;
    {
        cpu->r[14] = 0x001ce604u; fn_001cd948(cpu);
    }
L_001ce604:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_001ce608:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ce58c;
        }
    }
L_001ce60c:;
    {
        cpu->r[9] = rd32(cpu->r[10]);
    }
L_001ce610:;
    {
        cpu->r[11] = 0x000000d8u;
    }
L_001ce614:;
    {
        uint32_t v = cpu->r[11] * cpu->r[6]; cpu->r[11] = v;
    }
L_001ce618:;
    {
        goto L_001ce4d4;
    }
L_001ce61c:;
    {
        cpu->r[3] = 0x0000684bu;
    }
L_001ce620:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x012fu << 16);
    }
L_001ce624:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_001ce628:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001ce778;
        }
    }
L_001ce62c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001ce630:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[11] = cpu->r[6];
        }
    }
L_001ce634:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x4u, cpu->r[11]);
        }
    }
L_001ce638:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[9] = cpu->r[11];
        }
    }
L_001ce63c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ce6b8;
        }
    }
L_001ce640:;
    {
        cpu->r[4] = rd32(cpu->r[10] + + 0x4u);
    }
L_001ce644:;
    {
        cpu->r[5] = rd32(cpu->r[10]);
    }
L_001ce648:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 1);
    }
L_001ce64c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ce668;
        }
    }
L_001ce650:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x000000d8u, 1, 0);
    }
L_001ce654:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ce658:;
    {
        cpu->r[14] = 0x001ce65cu; fn_001cd440(cpu);
    }
L_001ce65c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_001ce660:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ce650;
        }
    }
L_001ce664:;
    {
        cpu->r[4] = rd32(cpu->r[10]);
    }
L_001ce668:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001ce66c:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x8u);
    }
L_001ce670:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ce6a8;
        }
    }
L_001ce674:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 0);
    }
L_001ce678:;
    {
        cpu->r[1] = 0x000000d8u;
    }
L_001ce67c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 3u, &shc); cpu->r[3] = v;
    }
L_001ce680:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_001ce684:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001ce688:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 2, 9u, &shc), cpu->r[3], 1, 0);
    }
L_001ce68c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 18u, &shc), 0, 0);
    }
L_001ce690:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_001ce694:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[1] = v;
    }
L_001ce698:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001ce69c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001ce76c;
        }
    }
L_001ce6a0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ce6a4:;
    {
        cpu->r[14] = 0x001ce6a8u; fn_002082a8(cpu);
    }
L_001ce6a8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001ce6ac:;
    {
        wr32(cpu->r[10], cpu->r[9]);
    }
L_001ce6b0:;
    {
        wr32(cpu->r[10] + + 0x8u, cpu->r[3]);
    }
L_001ce6b4:;
    {
        goto L_001ce4d4;
    }
L_001ce6b8:;
    {
        cpu->r[4] = 0x000000d8u;
    }
L_001ce6bc:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_001ce6c0:;
    {
        uint32_t v = cpu->r[4] * cpu->r[6]; cpu->r[11] = v;
    }
L_001ce6c4:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001ce6c8:;
    {
        cpu->r[14] = 0x001ce6ccu; fn_0018ba6c(cpu);
    }
L_001ce6cc:;
    {
        cpu->r[3] = 0x0000425fu;
    }
L_001ce6d0:;
    {
        uint32_t v = shifter(cpu->r[11], 3, 3u, &shc); cpu->r[2] = v;
    }
L_001ce6d4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x097bu << 16);
    }
L_001ce6d8:;
    {
        { uint64_t v = (uint64_t)cpu->r[3] * (uint64_t)cpu->r[2]; cpu->r[1] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_001ce6dc:;
    {
        uint32_t v = cpu->r[4] * cpu->r[3] + cpu->r[0]; cpu->r[3] = v;
    }
L_001ce6e0:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_001ce6e4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001ce6e8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[7], cpu->r[8], 0, 0);
    }
L_001ce6ec:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[9], cpu->r[8], 0, 0);
    }
L_001ce6f0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001ce6f4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ce6f8:;
    {
        cpu->r[14] = 0x001ce6fcu; fn_001cd948(cpu);
    }
L_001ce6fc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000018u, 0, 0);
    }
L_001ce700:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000018u, 0, 0);
    }
L_001ce704:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x000000d8u, 0, 0);
    }
L_001ce708:;
    {
        cpu->r[14] = 0x001ce70cu; fn_001cd948(cpu);
    }
L_001ce70c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000030u, 0, 0);
    }
L_001ce710:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000030u, 0, 0);
    }
L_001ce714:;
    {
        cpu->r[14] = 0x001ce718u; fn_001cd948(cpu);
    }
L_001ce718:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000048u, 0, 0);
    }
L_001ce71c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000048u, 0, 0);
    }
L_001ce720:;
    {
        cpu->r[14] = 0x001ce724u; fn_001cd948(cpu);
    }
L_001ce724:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000060u, 0, 0);
    }
L_001ce728:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000060u, 0, 0);
    }
L_001ce72c:;
    {
        cpu->r[14] = 0x001ce730u; fn_001cd948(cpu);
    }
L_001ce730:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000078u, 0, 0);
    }
L_001ce734:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000078u, 0, 0);
    }
L_001ce738:;
    {
        cpu->r[14] = 0x001ce73cu; fn_001cd948(cpu);
    }
L_001ce73c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000090u, 0, 0);
    }
L_001ce740:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000090u, 0, 0);
    }
L_001ce744:;
    {
        cpu->r[14] = 0x001ce748u; fn_001cd948(cpu);
    }
L_001ce748:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x000000a8u, 0, 0);
    }
L_001ce74c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x000000a8u, 0, 0);
    }
L_001ce750:;
    {
        cpu->r[14] = 0x001ce754u; fn_001cd948(cpu);
    }
L_001ce754:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x000000c0u, 0, 0);
    }
L_001ce758:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x000000c0u, 0, 0);
    }
L_001ce75c:;
    {
        cpu->r[14] = 0x001ce760u; fn_001cd948(cpu);
    }
L_001ce760:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_001ce764:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ce6e8;
        }
    }
L_001ce768:;
    {
        goto L_001ce640;
    }
L_001ce76c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ce770:;
    {
        cpu->r[14] = 0x001ce774u; fn_0018ba20(cpu);
    }
L_001ce774:;
    {
        goto L_001ce6a8;
    }
L_001ce778:;
    {
        cpu->r[0] = rd32(0x001ce780u + + 0xcu);
    }
L_001ce77c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001ce784u, cpu->r[0], 0, 0);
    }
L_001ce780:;
    {
        cpu->r[14] = 0x001ce784u; imp_puts(cpu); /* puts */
    }
L_001ce784:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001ce788:;
    {
        cpu->r[14] = 0x001ce78cu; imp_exit(cpu); /* exit */
    }
L_001ce78c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] * cpu->r[2]; cpu->r[6] = v;
        }
    }
}

/* _ZNSt6vectorI7channelSaIS0_EE18_M_fill_insert_auxEPS0_jRKS0_RKSt12__false_type @ 001ce790 (arm) */
void fn_001ce790(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ce790:;
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
L_001ce794:;
    {
        cpu->r[11] = rd32(0x001ce79cu + + 0x318u);
    }
L_001ce798:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001ce79c:;
    {
        cpu->r[0] = rd32(0x001ce7a4u + + 0x314u);
    }
L_001ce7a0:;
    {
        cpu->r[11] = add_flags(cpu, 0x001ce7a8u, cpu->r[11], 0, 0);
    }
L_001ce7a4:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001ce7a8:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_001ce7ac:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001ce7b0:;
    {
        cpu->r[1] = rd32(cpu->r[11] + cpu->r[0]);
    }
L_001ce7b4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000007cu, 1, 0);
    }
L_001ce7b8:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_001ce7bc:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_001ce7c0:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_001ce7c4:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[8] = rd32(cpu->r[4] + + 0x4u);
        }
    }
L_001ce7c8:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[3]);
    }
L_001ce7cc:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001ce834;
        }
    }
L_001ce7d0:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x4u);
    }
L_001ce7d4:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[8], 1, 1);
    }
L_001ce7d8:;
    {
        if (cond_test(cpu, 3)) {
        goto L_001ce834;
        }
    }
L_001ce7dc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_001ce7e0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001ce7e4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001ce7e8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_001ce7ec:;
    {
        cpu->r[14] = 0x001ce7f0u; fn_001ce25c(cpu);
    }
L_001ce7f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ce7f4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001ce7f8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001ce7fc:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_001ce800:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001ce804:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001ce808:;
    {
        cpu->r[14] = 0x001ce80cu; fn_001ce790(cpu);
    }
L_001ce80c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001ce810:;
    {
        cpu->r[14] = 0x001ce814u; fn_001cd624(cpu);
    }
L_001ce814:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_001ce818:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x74u);
    }
L_001ce81c:;
    {
        cpu->r[3] = rd32(cpu->r[11] + cpu->r[0]);
    }
L_001ce820:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001ce824:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001ce828:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ceab0;
        }
    }
L_001ce82c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000007cu, 0, 0);
    }
L_001ce830:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001ce834u)) return;
    }
L_001ce834:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[8], cpu->r[5], 1, 0);
    }
L_001ce838:;
    {
        cpu->r[3] = 0x0000cf3du;
    }
L_001ce83c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x3cf3u << 16);
    }
L_001ce840:;
    {
        uint32_t v = shifter(cpu->r[7], 1, 2u, &shc); cpu->r[7] = v;
    }
L_001ce844:;
    {
        uint32_t v = cpu->r[3] * cpu->r[7]; cpu->r[7] = v;
    }
L_001ce848:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 1);
    }
L_001ce84c:;
    {
        if (cond_test(cpu, 3)) {
        goto L_001ce9b8;
        }
    }
L_001ce850:;
    {
        cpu->r[1] = 0x00000054u;
    }
L_001ce854:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2]; cpu->r[1] = v;
    }
L_001ce858:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[8], cpu->r[1], 1, 0);
    }
L_001ce85c:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 2u, &shc); cpu->r[9] = v;
    }
L_001ce860:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_001ce864:;
    {
        uint32_t v = cpu->r[3] * cpu->r[9]; cpu->r[9] = v;
    }
L_001ce868:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001ce86c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = cpu->r[8];
        }
    }
L_001ce870:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001ce894;
        }
    }
L_001ce874:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_001ce878:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], cpu->r[10], 0, 0);
    }
L_001ce87c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], cpu->r[10], 0, 0);
    }
L_001ce880:;
    {
        cpu->r[14] = 0x001ce884u; fn_001ce25c(cpu);
    }
L_001ce884:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], 0x00000001u, 1, 1);
    }
L_001ce888:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000054u, 0, 0);
    }
L_001ce88c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ce878;
        }
    }
L_001ce890:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4u);
    }
L_001ce894:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[7], cpu->r[5], 1, 0);
    }
L_001ce898:;
    {
        cpu->r[3] = 0x0000cf3du;
    }
L_001ce89c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x3cf3u << 16);
    }
L_001ce8a0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_001ce8a4:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[2] = v;
    }
L_001ce8a8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[0], 0, 0);
    }
L_001ce8ac:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[1]);
    }
L_001ce8b0:;
    {
        uint32_t v = cpu->r[3] * cpu->r[2]; cpu->r[4] = v;
    }
L_001ce8b4:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001ce8b8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001ce928;
        }
    }
L_001ce8bc:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000054u, 1, 0);
    }
L_001ce8c0:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000054u, 1, 0);
    }
L_001ce8c4:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[7], 1, 1);
    }
L_001ce8c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ce8dc;
        }
    }
L_001ce8cc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ce8d0:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x14u);
    }
L_001ce8d4:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x10u);
    }
L_001ce8d8:;
    {
        cpu->r[14] = 0x001ce8dcu; fn_00189c04(cpu);
    }
L_001ce8dc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], 0x00000018u, 0, 0);
    }
L_001ce8e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], 0x00000018u, 0, 0);
    }
L_001ce8e4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001ce8e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ce8f8;
        }
    }
L_001ce8ec:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x2cu);
    }
L_001ce8f0:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x28u);
    }
L_001ce8f4:;
    {
        cpu->r[14] = 0x001ce8f8u; fn_00189c04(cpu);
    }
L_001ce8f8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], 0x00000030u, 0, 0);
    }
L_001ce8fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], 0x00000030u, 0, 0);
    }
L_001ce900:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001ce904:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ce914;
        }
    }
L_001ce908:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x44u);
    }
L_001ce90c:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x40u);
    }
L_001ce910:;
    {
        cpu->r[14] = 0x001ce914u; fn_00189c04(cpu);
    }
L_001ce914:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], 0x00000048u, 0, 0);
    }
L_001ce918:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], 0x00000048u, 0, 0);
    }
L_001ce91c:;
    {
        cpu->r[14] = 0x001ce920u; fn_001ce3e8(cpu);
    }
L_001ce920:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 1);
    }
L_001ce924:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ce8bc;
        }
    }
L_001ce928:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_001ce92c:;
    {
        cpu->r[3] = 0x0000cf3du;
    }
L_001ce930:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x3cf3u << 16);
    }
L_001ce934:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[4] = v;
    }
L_001ce938:;
    {
        uint32_t v = cpu->r[3] * cpu->r[4]; cpu->r[4] = v;
    }
L_001ce93c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001ce940:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001ce814;
        }
    }
L_001ce944:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[6], 0x00000018u, 0, 0);
    }
L_001ce948:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[6], 0x00000030u, 0, 0);
    }
L_001ce94c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[6], 0x00000048u, 0, 0);
    }
L_001ce950:;
    {
        goto L_001ce958;
    }
L_001ce954:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000054u, 0, 0);
    }
L_001ce958:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_001ce95c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ce970;
        }
    }
L_001ce960:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001ce964:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x14u);
    }
L_001ce968:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x10u);
    }
L_001ce96c:;
    {
        cpu->r[14] = 0x001ce970u; fn_00189c04(cpu);
    }
L_001ce970:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000018u, 0, 0);
    }
L_001ce974:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[10], 1, 1);
    }
L_001ce978:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ce988;
        }
    }
L_001ce97c:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x2cu);
    }
L_001ce980:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x28u);
    }
L_001ce984:;
    {
        cpu->r[14] = 0x001ce988u; fn_00189c04(cpu);
    }
L_001ce988:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000030u, 0, 0);
    }
L_001ce98c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[8], 1, 1);
    }
L_001ce990:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001ce9a0;
        }
    }
L_001ce994:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x44u);
    }
L_001ce998:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x40u);
    }
L_001ce99c:;
    {
        cpu->r[14] = 0x001ce9a0u; fn_00189c04(cpu);
    }
L_001ce9a0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000048u, 0, 0);
    }
L_001ce9a4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001ce9a8:;
    {
        cpu->r[14] = 0x001ce9acu; fn_001ce3e8(cpu);
    }
L_001ce9ac:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 1);
    }
L_001ce9b0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ce954;
        }
    }
L_001ce9b4:;
    {
        goto L_001ce814;
    }
L_001ce9b8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 0);
    }
L_001ce9bc:;
    {
        cpu->r[10] = 0x00000054u;
    }
L_001ce9c0:;
    {
        uint32_t v = cpu->r[10] * cpu->r[2] + cpu->r[8]; cpu->r[10] = v;
    }
L_001ce9c4:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[10], cpu->r[8], 1, 0);
    }
L_001ce9c8:;
    {
        uint32_t v = shifter(cpu->r[9], 1, 2u, &shc); cpu->r[9] = v;
    }
L_001ce9cc:;
    {
        uint32_t v = cpu->r[3] * cpu->r[9]; cpu->r[9] = v;
    }
L_001ce9d0:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001ce9d4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001ce9f0;
        }
    }
L_001ce9d8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ce9dc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001ce9e0:;
    {
        cpu->r[14] = 0x001ce9e4u; fn_001ce25c(cpu);
    }
L_001ce9e4:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], 0x00000001u, 1, 1);
    }
L_001ce9e8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000054u, 0, 0);
    }
L_001ce9ec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ce9d8;
        }
    }
L_001ce9f0:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001ce9f4:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[10]);
    }
L_001ce9f8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001ceaa0;
        }
    }
L_001ce9fc:;
    {
        cpu->r[9] = cpu->r[7];
    }
L_001cea00:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_001cea04:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[10], cpu->r[8], 0, 0);
    }
L_001cea08:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], cpu->r[8], 0, 0);
    }
L_001cea0c:;
    {
        cpu->r[14] = 0x001cea10u; fn_001ce25c(cpu);
    }
L_001cea10:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], 0x00000001u, 1, 1);
    }
L_001cea14:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000054u, 0, 0);
    }
L_001cea18:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cea04;
        }
    }
L_001cea1c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_001cea20:;
    {
        cpu->r[2] = 0x00000054u;
    }
L_001cea24:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[6], 0x00000018u, 0, 0);
    }
L_001cea28:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[6], 0x00000030u, 0, 0);
    }
L_001cea2c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[6], 0x00000048u, 0, 0);
    }
L_001cea30:;
    {
        uint32_t v = cpu->r[2] * cpu->r[7] + cpu->r[3]; cpu->r[3] = v;
    }
L_001cea34:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_001cea38:;
    {
        goto L_001cea40;
    }
L_001cea3c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000054u, 0, 0);
    }
L_001cea40:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_001cea44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cea58;
        }
    }
L_001cea48:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001cea4c:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x14u);
    }
L_001cea50:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x10u);
    }
L_001cea54:;
    {
        cpu->r[14] = 0x001cea58u; fn_00189c04(cpu);
    }
L_001cea58:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000018u, 0, 0);
    }
L_001cea5c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[10], 1, 1);
    }
L_001cea60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cea70;
        }
    }
L_001cea64:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x2cu);
    }
L_001cea68:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x28u);
    }
L_001cea6c:;
    {
        cpu->r[14] = 0x001cea70u; fn_00189c04(cpu);
    }
L_001cea70:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000030u, 0, 0);
    }
L_001cea74:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[8], 1, 1);
    }
L_001cea78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cea88;
        }
    }
L_001cea7c:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x44u);
    }
L_001cea80:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x40u);
    }
L_001cea84:;
    {
        cpu->r[14] = 0x001cea88u; fn_00189c04(cpu);
    }
L_001cea88:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000048u, 0, 0);
    }
L_001cea8c:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001cea90:;
    {
        cpu->r[14] = 0x001cea94u; fn_001ce3e8(cpu);
    }
L_001cea94:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_001cea98:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cea3c;
        }
    }
L_001cea9c:;
    {
        goto L_001ce814;
    }
L_001ceaa0:;
    {
        cpu->r[3] = 0x00000054u;
    }
L_001ceaa4:;
    {
        uint32_t v = cpu->r[3] * cpu->r[7] + cpu->r[10]; cpu->r[7] = v;
    }
L_001ceaa8:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[7]);
    }
L_001ceaac:;
    {
        goto L_001ce814;
    }
L_001ceab0:;
    {
        cpu->r[14] = 0x001ceab4u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001ceab4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 4, (cpu->r[12] & 0xffu), &shc); cpu->r[11] = v;
        }
    }
L_001ceab8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
}

/* _ZNSt6vectorI4itemSaIS0_EE18_M_fill_insert_auxEPS0_jRKS0_RKSt12__false_type @ 001ceabc (arm) */
void fn_001ceabc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001ceabc:;
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
L_001ceac0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000114u, 1, 0);
    }
L_001ceac4:;
    {
        cpu->r[12] = rd32(0x001ceaccu + + 0x45cu);
    }
L_001ceac8:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_001ceacc:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_001cead0:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001cead4:;
    {
        cpu->r[12] = add_flags(cpu, 0x001ceadcu, cpu->r[12], 0, 0);
    }
L_001cead8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001ceadc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_001ceae0:;
    {
        cpu->r[0] = rd32(0x001ceae8u + + 0x444u);
    }
L_001ceae4:;
    {
        cpu->r[3] = rd32(cpu->r[12]);
    }
L_001ceae8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_001ceaec:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_001ceaf0:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[0]);
    }
L_001ceaf4:;
    {
        cpu->r[1] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_001ceaf8:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_001ceafc:;
    {
        wr32(cpu->r[13] + + 0x10cu, cpu->r[3]);
    }
L_001ceb00:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001cebd0;
        }
    }
L_001ceb04:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_001ceb08:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x4u);
    }
L_001ceb0c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_001ceb10:;
    {
        if (cond_test(cpu, 3)) {
        goto L_001cebd8;
        }
    }
L_001ceb14:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_001ceb18:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001ceb1c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ceb20:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_001ceb24:;
    {
        cpu->r[14] = 0x001ceb28u; fn_001cd948(cpu);
    }
L_001ceb28:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000018u, 0, 0);
    }
L_001ceb2c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000018u, 0, 0);
    }
L_001ceb30:;
    {
        cpu->r[14] = 0x001ceb34u; fn_001cd948(cpu);
    }
L_001ceb34:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000030u, 0, 0);
    }
L_001ceb38:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000030u, 0, 0);
    }
L_001ceb3c:;
    {
        cpu->r[14] = 0x001ceb40u; fn_001cd948(cpu);
    }
L_001ceb40:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000048u, 0, 0);
    }
L_001ceb44:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000048u, 0, 0);
    }
L_001ceb48:;
    {
        cpu->r[14] = 0x001ceb4cu; fn_001cd948(cpu);
    }
L_001ceb4c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000060u, 0, 0);
    }
L_001ceb50:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000060u, 0, 0);
    }
L_001ceb54:;
    {
        cpu->r[14] = 0x001ceb58u; fn_001cd948(cpu);
    }
L_001ceb58:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000078u, 0, 0);
    }
L_001ceb5c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000078u, 0, 0);
    }
L_001ceb60:;
    {
        cpu->r[14] = 0x001ceb64u; fn_001cd948(cpu);
    }
L_001ceb64:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000090u, 0, 0);
    }
L_001ceb68:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000090u, 0, 0);
    }
L_001ceb6c:;
    {
        cpu->r[14] = 0x001ceb70u; fn_001cd948(cpu);
    }
L_001ceb70:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x000000a8u, 0, 0);
    }
L_001ceb74:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x000000a8u, 0, 0);
    }
L_001ceb78:;
    {
        cpu->r[14] = 0x001ceb7cu; fn_001cd948(cpu);
    }
L_001ceb7c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x000000c0u, 0, 0);
    }
L_001ceb80:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x000000c0u, 0, 0);
    }
L_001ceb84:;
    {
        cpu->r[14] = 0x001ceb88u; fn_001cd948(cpu);
    }
L_001ceb88:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_001ceb8c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001ceb90:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_001ceb94:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_001ceb98:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_001ceb9c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001ceba0:;
    {
        cpu->r[14] = 0x001ceba4u; fn_001ceabc(cpu);
    }
L_001ceba4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ceba8:;
    {
        cpu->r[14] = 0x001cebacu; fn_001cd440(cpu);
    }
L_001cebac:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001cebb0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_001cebb4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10cu);
    }
L_001cebb8:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[0]);
    }
L_001cebbc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001cebc0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001cebc4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cef24;
        }
    }
L_001cebc8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000114u, 0, 0);
    }
L_001cebcc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cebd0u)) return;
    }
L_001cebd0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_001cebd4:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x4u);
    }
L_001cebd8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[6], cpu->r[4], 1, 0);
    }
L_001cebdc:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 3u, &shc); cpu->r[3] = v;
    }
L_001cebe0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_001cebe4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_001cebe8:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 2, 9u, &shc), cpu->r[3], 1, 0);
    }
L_001cebec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 18u, &shc), 0, 0);
    }
L_001cebf0:;
    {
        cpu->r[7] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_001cebf4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 1);
    }
L_001cebf8:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001cedc0;
        }
    }
L_001cebfc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 0);
    }
L_001cec00:;
    {
        cpu->r[10] = 0x000000d8u;
    }
L_001cec04:;
    {
        uint32_t v = cpu->r[10] * cpu->r[2] + cpu->r[6]; cpu->r[10] = v;
    }
L_001cec08:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[10], cpu->r[6], 1, 0);
    }
L_001cec0c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 3u, &shc); cpu->r[3] = v;
    }
L_001cec10:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_001cec14:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001cec18:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 2, 9u, &shc), cpu->r[3], 1, 0);
    }
L_001cec1c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 18u, &shc), 0, 0);
    }
L_001cec20:;
    {
        cpu->r[8] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_001cec24:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001cec28:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001cecf8;
        }
    }
L_001cec2c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x00000048u, 0, 0);
    }
L_001cec30:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000060u, 0, 0);
    }
L_001cec34:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_001cec38:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000090u, 0, 0);
    }
L_001cec3c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_001cec40:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x000000a8u, 0, 0);
    }
L_001cec44:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x000000c0u, 0, 0);
    }
L_001cec48:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[5], 0x00000078u, 0, 0);
    }
L_001cec4c:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[10]);
    }
L_001cec50:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[5], 0x00000018u, 0, 0);
    }
L_001cec54:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[7]);
    }
L_001cec58:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[5], 0x00000030u, 0, 0);
    }
L_001cec5c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[4]);
    }
L_001cec60:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_001cec64:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_001cec68:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001cec6c:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001cec70:;
    {
        goto L_001cec78;
    }
L_001cec74:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x000000d8u, 0, 0);
    }
L_001cec78:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001cec7c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001cec80:;
    {
        cpu->r[14] = 0x001cec84u; fn_001cd948(cpu);
    }
L_001cec84:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001cec88:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000018u, 0, 0);
    }
L_001cec8c:;
    {
        cpu->r[14] = 0x001cec90u; fn_001cd948(cpu);
    }
L_001cec90:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001cec94:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000030u, 0, 0);
    }
L_001cec98:;
    {
        cpu->r[14] = 0x001cec9cu; fn_001cd948(cpu);
    }
L_001cec9c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_001ceca0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000048u, 0, 0);
    }
L_001ceca4:;
    {
        cpu->r[14] = 0x001ceca8u; fn_001cd948(cpu);
    }
L_001ceca8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_001cecac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000060u, 0, 0);
    }
L_001cecb0:;
    {
        cpu->r[14] = 0x001cecb4u; fn_001cd948(cpu);
    }
L_001cecb4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001cecb8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000078u, 0, 0);
    }
L_001cecbc:;
    {
        cpu->r[14] = 0x001cecc0u; fn_001cd948(cpu);
    }
L_001cecc0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001cecc4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000090u, 0, 0);
    }
L_001cecc8:;
    {
        cpu->r[14] = 0x001cecccu; fn_001cd948(cpu);
    }
L_001ceccc:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001cecd0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x000000a8u, 0, 0);
    }
L_001cecd4:;
    {
        cpu->r[14] = 0x001cecd8u; fn_001cd948(cpu);
    }
L_001cecd8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x000000c0u, 0, 0);
    }
L_001cecdc:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001cece0:;
    {
        cpu->r[14] = 0x001cece4u; fn_001cd948(cpu);
    }
L_001cece4:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 1);
    }
L_001cece8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cec74;
        }
    }
L_001cecec:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x24u);
    }
L_001cecf0:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x28u);
    }
L_001cecf4:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001cecf8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_001cecfc:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001ced00:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[10]);
    }
L_001ced04:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001cef10;
        }
    }
L_001ced08:;
    {
        cpu->r[11] = cpu->r[7];
    }
L_001ced0c:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_001ced10:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[4], cpu->r[9], 0, 0);
    }
L_001ced14:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[10], cpu->r[9], 0, 0);
    }
L_001ced18:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001ced1c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001ced20:;
    {
        cpu->r[14] = 0x001ced24u; fn_001cd948(cpu);
    }
L_001ced24:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], 0x00000018u, 0, 0);
    }
L_001ced28:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], 0x00000018u, 0, 0);
    }
L_001ced2c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x000000d8u, 0, 0);
    }
L_001ced30:;
    {
        cpu->r[14] = 0x001ced34u; fn_001cd948(cpu);
    }
L_001ced34:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], 0x00000030u, 0, 0);
    }
L_001ced38:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], 0x00000030u, 0, 0);
    }
L_001ced3c:;
    {
        cpu->r[14] = 0x001ced40u; fn_001cd948(cpu);
    }
L_001ced40:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], 0x00000048u, 0, 0);
    }
L_001ced44:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], 0x00000048u, 0, 0);
    }
L_001ced48:;
    {
        cpu->r[14] = 0x001ced4cu; fn_001cd948(cpu);
    }
L_001ced4c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], 0x00000060u, 0, 0);
    }
L_001ced50:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], 0x00000060u, 0, 0);
    }
L_001ced54:;
    {
        cpu->r[14] = 0x001ced58u; fn_001cd948(cpu);
    }
L_001ced58:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], 0x00000078u, 0, 0);
    }
L_001ced5c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], 0x00000078u, 0, 0);
    }
L_001ced60:;
    {
        cpu->r[14] = 0x001ced64u; fn_001cd948(cpu);
    }
L_001ced64:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], 0x00000090u, 0, 0);
    }
L_001ced68:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], 0x00000090u, 0, 0);
    }
L_001ced6c:;
    {
        cpu->r[14] = 0x001ced70u; fn_001cd948(cpu);
    }
L_001ced70:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], 0x000000a8u, 0, 0);
    }
L_001ced74:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], 0x000000a8u, 0, 0);
    }
L_001ced78:;
    {
        cpu->r[14] = 0x001ced7cu; fn_001cd948(cpu);
    }
L_001ced7c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], 0x000000c0u, 0, 0);
    }
L_001ced80:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], 0x000000c0u, 0, 0);
    }
L_001ced84:;
    {
        cpu->r[14] = 0x001ced88u; fn_001cd948(cpu);
    }
L_001ced88:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], 0x00000001u, 1, 1);
    }
L_001ced8c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ced10;
        }
    }
L_001ced90:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_001ced94:;
    {
        cpu->r[2] = 0x000000d8u;
    }
L_001ced98:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x4u);
    }
L_001ced9c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[7] + cpu->r[3]; cpu->r[3] = v;
    }
L_001ceda0:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[3]);
    }
L_001ceda4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ceda8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001cedac:;
    {
        cpu->r[14] = 0x001cedb0u; fn_001cd338(cpu);
    }
L_001cedb0:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_001cedb4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x000000d8u, 0, 0);
    }
L_001cedb8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ceda4;
        }
    }
L_001cedbc:;
    {
        goto L_001cebac;
    }
L_001cedc0:;
    {
        cpu->r[3] = 0x000000d8u;
    }
L_001cedc4:;
    {
        uint32_t v = cpu->r[3] * cpu->r[2]; cpu->r[3] = v;
    }
L_001cedc8:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 0);
    }
L_001cedcc:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_001cedd0:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 3u, &shc); cpu->r[3] = v;
    }
L_001cedd4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_001cedd8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001ceddc:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 2, 9u, &shc), cpu->r[3], 1, 0);
    }
L_001cede0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 18u, &shc), 0, 0);
    }
L_001cede4:;
    {
        cpu->r[11] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_001cede8:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_001cedec:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = cpu->r[6];
        }
    }
L_001cedf0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001cee80;
        }
    }
L_001cedf4:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_001cedf8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[10], cpu->r[9], 0, 0);
    }
L_001cedfc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[6], cpu->r[9], 0, 0);
    }
L_001cee00:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001cee04:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001cee08:;
    {
        cpu->r[14] = 0x001cee0cu; fn_001cd948(cpu);
    }
L_001cee0c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], 0x00000018u, 0, 0);
    }
L_001cee10:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], 0x00000018u, 0, 0);
    }
L_001cee14:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x000000d8u, 0, 0);
    }
L_001cee18:;
    {
        cpu->r[14] = 0x001cee1cu; fn_001cd948(cpu);
    }
L_001cee1c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], 0x00000030u, 0, 0);
    }
L_001cee20:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], 0x00000030u, 0, 0);
    }
L_001cee24:;
    {
        cpu->r[14] = 0x001cee28u; fn_001cd948(cpu);
    }
L_001cee28:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], 0x00000048u, 0, 0);
    }
L_001cee2c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], 0x00000048u, 0, 0);
    }
L_001cee30:;
    {
        cpu->r[14] = 0x001cee34u; fn_001cd948(cpu);
    }
L_001cee34:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], 0x00000060u, 0, 0);
    }
L_001cee38:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], 0x00000060u, 0, 0);
    }
L_001cee3c:;
    {
        cpu->r[14] = 0x001cee40u; fn_001cd948(cpu);
    }
L_001cee40:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], 0x00000078u, 0, 0);
    }
L_001cee44:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], 0x00000078u, 0, 0);
    }
L_001cee48:;
    {
        cpu->r[14] = 0x001cee4cu; fn_001cd948(cpu);
    }
L_001cee4c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], 0x00000090u, 0, 0);
    }
L_001cee50:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], 0x00000090u, 0, 0);
    }
L_001cee54:;
    {
        cpu->r[14] = 0x001cee58u; fn_001cd948(cpu);
    }
L_001cee58:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], 0x000000a8u, 0, 0);
    }
L_001cee5c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], 0x000000a8u, 0, 0);
    }
L_001cee60:;
    {
        cpu->r[14] = 0x001cee64u; fn_001cd948(cpu);
    }
L_001cee64:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], 0x000000c0u, 0, 0);
    }
L_001cee68:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], 0x000000c0u, 0, 0);
    }
L_001cee6c:;
    {
        cpu->r[14] = 0x001cee70u; fn_001cd948(cpu);
    }
L_001cee70:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], 0x00000001u, 1, 1);
    }
L_001cee74:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cedf8;
        }
    }
L_001cee78:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_001cee7c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x4u);
    }
L_001cee80:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[10], cpu->r[4], 1, 0);
    }
L_001cee84:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_001cee88:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_001cee8c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 3u, &shc); cpu->r[3] = v;
    }
L_001cee90:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[12], 0, 0);
    }
L_001cee94:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_001cee98:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_001cee9c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001ceea0:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 2, 9u, &shc), cpu->r[3], 1, 0);
    }
L_001ceea4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 18u, &shc), 0, 0);
    }
L_001ceea8:;
    {
        cpu->r[7] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_001ceeac:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001ceeb0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001ceed0;
        }
    }
L_001ceeb4:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x000000d8u, 1, 0);
    }
L_001ceeb8:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], 0x000000d8u, 1, 0);
    }
L_001ceebc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001ceec0:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001ceec4:;
    {
        cpu->r[14] = 0x001ceec8u; fn_001cd338(cpu);
    }
L_001ceec8:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_001ceecc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ceeb4;
        }
    }
L_001ceed0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_001ceed4:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 3u, &shc); cpu->r[3] = v;
    }
L_001ceed8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_001ceedc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001ceee0:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 2, 9u, &shc), cpu->r[3], 1, 0);
    }
L_001ceee4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 18u, &shc), 0, 0);
    }
L_001ceee8:;
    {
        cpu->r[6] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_001ceeec:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001ceef0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001cebac;
        }
    }
L_001ceef4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ceef8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001ceefc:;
    {
        cpu->r[14] = 0x001cef00u; fn_001cd338(cpu);
    }
L_001cef00:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_001cef04:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x000000d8u, 0, 0);
    }
L_001cef08:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001ceef4;
        }
    }
L_001cef0c:;
    {
        goto L_001cebac;
    }
L_001cef10:;
    {
        cpu->r[3] = 0x000000d8u;
    }
L_001cef14:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_001cef18:;
    {
        uint32_t v = cpu->r[3] * cpu->r[7] + cpu->r[10]; cpu->r[7] = v;
    }
L_001cef1c:;
    {
        wr32(cpu->r[12] + + 0x4u, cpu->r[7]);
    }
L_001cef20:;
    {
        goto L_001cebac;
    }
L_001cef24:;
    {
        cpu->r[14] = 0x001cef28u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001cef28:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[12], 3, (cpu->r[9] & 0xffu), &shc); cpu->r[11] = v;
        }
    }
L_001cef2c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN7channel4readEPKN4slim7XmlNodeE @ 001cef30 (arm) */
void fn_001cef30(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cef30:;
    {
        cpu->r[2] = rd32(0x001cef38u + + 0x7dcu);
    }
L_001cef34:;
    {
        cpu->r[3] = rd32(0x001cef3cu + + 0x7dcu);
    }
L_001cef38:;
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
L_001cef3c:;
    {
        cpu->r[2] = add_flags(cpu, 0x001cef44u, cpu->r[2], 0, 0);
    }
L_001cef40:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000144u, 1, 0);
    }
L_001cef44:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001cef48:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001cef4c:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[3]);
    }
L_001cef50:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001cef54:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_001cef58:;
    {
        cpu->r[1] = rd32(0x001cef60u + + 0x7bcu);
    }
L_001cef5c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001cef60:;
    {
        cpu->r[1] = add_flags(cpu, 0x001cef68u, cpu->r[1], 0, 0);
    }
L_001cef64:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[2]);
    }
L_001cef68:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001cef6c:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[2]);
    }
L_001cef70:;
    {
        wr32(cpu->r[13] + + 0x13cu, cpu->r[3]);
    }
L_001cef74:;
    {
        cpu->r[14] = 0x001cef78u; fn_001cbf74(cpu);
    }
L_001cef78:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cef7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cef9c;
        }
    }
L_001cef80:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x2cu);
    }
L_001cef84:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cef88:;
    {
        cpu->r[14] = 0x001cef8cu; imp_strlen(cpu); /* strlen */
    }
L_001cef8c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001cef90:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001cef94:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001cef98:;
    {
        cpu->r[14] = 0x001cef9cu; fn_00189c04(cpu);
    }
L_001cef9c:;
    {
        cpu->r[1] = rd32(0x001cefa4u + + 0x77cu);
    }
L_001cefa0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_001cefa4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001cefacu, cpu->r[1], 0, 0);
    }
L_001cefa8:;
    {
        cpu->r[14] = 0x001cefacu; fn_001cbf74(cpu);
    }
L_001cefac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cefb0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cefd0;
        }
    }
L_001cefb4:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x2cu);
    }
L_001cefb8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cefbc:;
    {
        cpu->r[14] = 0x001cefc0u; imp_strlen(cpu); /* strlen */
    }
L_001cefc0:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001cefc4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001cefc8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000018u, 0, 0);
    }
L_001cefcc:;
    {
        cpu->r[14] = 0x001cefd0u; fn_00189c04(cpu);
    }
L_001cefd0:;
    {
        cpu->r[1] = rd32(0x001cefd8u + + 0x74cu);
    }
L_001cefd4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_001cefd8:;
    {
        cpu->r[1] = add_flags(cpu, 0x001cefe0u, cpu->r[1], 0, 0);
    }
L_001cefdc:;
    {
        cpu->r[14] = 0x001cefe0u; fn_001cbf74(cpu);
    }
L_001cefe0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cefe4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cf004;
        }
    }
L_001cefe8:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x2cu);
    }
L_001cefec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001ceff0:;
    {
        cpu->r[14] = 0x001ceff4u; imp_strlen(cpu); /* strlen */
    }
L_001ceff4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001ceff8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001ceffc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000030u, 0, 0);
    }
L_001cf000:;
    {
        cpu->r[14] = 0x001cf004u; fn_00189c04(cpu);
    }
L_001cf004:;
    {
        cpu->r[5] = rd32(0x001cf00cu + + 0x71cu);
    }
L_001cf008:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x0000005cu, 0, 0);
    }
L_001cf00c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_001cf010:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001cf014:;
    {
        cpu->r[5] = add_flags(cpu, 0x001cf01cu, cpu->r[5], 0, 0);
    }
L_001cf018:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[12]);
    }
L_001cf01c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001cf020:;
    {
        cpu->r[14] = 0x001cf024u; fn_001cbfe4(cpu);
    }
L_001cf024:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cf028:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_001cf02c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cf244;
        }
    }
L_001cf030:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000064u, 0, 0);
    }
L_001cf034:;
    {
        cpu->r[3] = rd32(0x001cf03cu + + 0x6f0u);
    }
L_001cf038:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[5]);
    }
L_001cf03c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], 0x00000018u, 0, 0);
    }
L_001cf040:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001cf044:;
    {
        cpu->r[1] = 0x0000684bu;
    }
L_001cf048:;
    {
        cpu->r[2] = 0x0000425fu;
    }
L_001cf04c:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x012fu << 16);
    }
L_001cf050:;
    {
        cpu->r[3] = add_flags(cpu, 0x001cf058u, cpu->r[3], 0, 0);
    }
L_001cf054:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[1]);
    }
L_001cf058:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x097bu << 16);
    }
L_001cf05c:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[3]);
    }
L_001cf060:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00000030u, 0, 0);
    }
L_001cf064:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], 0x00000048u, 0, 0);
    }
L_001cf068:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000060u, 0, 0);
    }
L_001cf06c:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[2]);
    }
L_001cf070:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[3]);
    }
L_001cf074:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_001cf078:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[1]);
    }
L_001cf07c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x4cu);
    }
L_001cf080:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cf084:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x48u);
    }
L_001cf088:;
    {
        cpu->r[1] = 0x00000010u;
    }
L_001cf08c:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[4]);
    }
L_001cf090:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001cf094:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[4]);
    }
L_001cf098:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 3u, &shc); cpu->r[3] = v;
    }
L_001cf09c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_001cf0a0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001cf0a4:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 2, 9u, &shc), cpu->r[3], 1, 0);
    }
L_001cf0a8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 18u, &shc), 0, 0);
    }
L_001cf0ac:;
    {
        cpu->r[8] = sub_flags(cpu, 0x00000001u, cpu->r[3], 1, 0);
    }
L_001cf0b0:;
    {
        cpu->r[14] = 0x001cf0b4u; fn_001b48a8(cpu);
    }
L_001cf0b4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x74u);
    }
L_001cf0b8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001cf0bc:;
    {
        cpu->r[1] = 0x00000010u;
    }
L_001cf0c0:;
    {
        wr8(cpu->r[3], cpu->r[5]);
    }
L_001cf0c4:;
    {
        wr32(cpu->r[13] + + 0x8cu, cpu->r[7]);
    }
L_001cf0c8:;
    {
        wr32(cpu->r[13] + + 0x90u, cpu->r[7]);
    }
L_001cf0cc:;
    {
        cpu->r[14] = 0x001cf0d0u; fn_001b48a8(cpu);
    }
L_001cf0d0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8cu);
    }
L_001cf0d4:;
    {
        cpu->r[1] = 0x00000010u;
    }
L_001cf0d8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_001cf0dc:;
    {
        wr8(cpu->r[3], cpu->r[5]);
    }
L_001cf0e0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_001cf0e4:;
    {
        wr32(cpu->r[13] + + 0xa4u, cpu->r[2]);
    }
L_001cf0e8:;
    {
        wr32(cpu->r[13] + + 0xa8u, cpu->r[2]);
    }
L_001cf0ec:;
    {
        cpu->r[14] = 0x001cf0f0u; fn_001b48a8(cpu);
    }
L_001cf0f0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xa4u);
    }
L_001cf0f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000048u, 0, 0);
    }
L_001cf0f8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001cf0fc:;
    {
        cpu->r[1] = 0x00000010u;
    }
L_001cf100:;
    {
        wr8(cpu->r[2], cpu->r[5]);
    }
L_001cf104:;
    {
        wr32(cpu->r[13] + + 0xbcu, cpu->r[3]);
    }
L_001cf108:;
    {
        wr32(cpu->r[13] + + 0xc0u, cpu->r[3]);
    }
L_001cf10c:;
    {
        cpu->r[14] = 0x001cf110u; fn_001b48a8(cpu);
    }
L_001cf110:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xbcu);
    }
L_001cf114:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000060u, 0, 0);
    }
L_001cf118:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001cf11c:;
    {
        cpu->r[1] = 0x00000010u;
    }
L_001cf120:;
    {
        wr8(cpu->r[2], cpu->r[5]);
    }
L_001cf124:;
    {
        wr32(cpu->r[13] + + 0xd4u, cpu->r[3]);
    }
L_001cf128:;
    {
        wr32(cpu->r[13] + + 0xd8u, cpu->r[3]);
    }
L_001cf12c:;
    {
        cpu->r[14] = 0x001cf130u; fn_001b48a8(cpu);
    }
L_001cf130:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xd4u);
    }
L_001cf134:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000078u, 0, 0);
    }
L_001cf138:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001cf13c:;
    {
        cpu->r[1] = 0x00000010u;
    }
L_001cf140:;
    {
        wr8(cpu->r[2], cpu->r[5]);
    }
L_001cf144:;
    {
        wr32(cpu->r[13] + + 0xecu, cpu->r[3]);
    }
L_001cf148:;
    {
        wr32(cpu->r[13] + + 0xf0u, cpu->r[3]);
    }
L_001cf14c:;
    {
        cpu->r[14] = 0x001cf150u; fn_001b48a8(cpu);
    }
L_001cf150:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xecu);
    }
L_001cf154:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000090u, 0, 0);
    }
L_001cf158:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001cf15c:;
    {
        cpu->r[1] = 0x00000010u;
    }
L_001cf160:;
    {
        wr8(cpu->r[2], cpu->r[5]);
    }
L_001cf164:;
    {
        wr32(cpu->r[13] + + 0x104u, cpu->r[3]);
    }
L_001cf168:;
    {
        wr32(cpu->r[13] + + 0x108u, cpu->r[3]);
    }
L_001cf16c:;
    {
        cpu->r[14] = 0x001cf170u; fn_001b48a8(cpu);
    }
L_001cf170:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x104u);
    }
L_001cf174:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x000000a8u, 0, 0);
    }
L_001cf178:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001cf17c:;
    {
        cpu->r[1] = 0x00000010u;
    }
L_001cf180:;
    {
        wr8(cpu->r[2], cpu->r[5]);
    }
L_001cf184:;
    {
        wr32(cpu->r[13] + + 0x11cu, cpu->r[3]);
    }
L_001cf188:;
    {
        wr32(cpu->r[13] + + 0x120u, cpu->r[3]);
    }
L_001cf18c:;
    {
        cpu->r[14] = 0x001cf190u; fn_001b48a8(cpu);
    }
L_001cf190:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x11cu);
    }
L_001cf194:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x000000c0u, 0, 0);
    }
L_001cf198:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001cf19c:;
    {
        cpu->r[1] = 0x00000010u;
    }
L_001cf1a0:;
    {
        wr8(cpu->r[2], cpu->r[5]);
    }
L_001cf1a4:;
    {
        wr32(cpu->r[13] + + 0x134u, cpu->r[3]);
    }
L_001cf1a8:;
    {
        wr32(cpu->r[13] + + 0x138u, cpu->r[3]);
    }
L_001cf1ac:;
    {
        cpu->r[14] = 0x001cf1b0u; fn_001b48a8(cpu);
    }
L_001cf1b0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x134u);
    }
L_001cf1b4:;
    {
        wr8(cpu->r[3], cpu->r[5]);
    }
L_001cf1b8:;
    {
        cpu->r[9] = rd32(cpu->r[6] + + 0x4cu);
    }
L_001cf1bc:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x48u);
    }
L_001cf1c0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[9], cpu->r[2], 1, 0);
    }
L_001cf1c4:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 3u, &shc); cpu->r[3] = v;
    }
L_001cf1c8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_001cf1cc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_001cf1d0:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 2, 9u, &shc), cpu->r[3], 1, 0);
    }
L_001cf1d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 18u, &shc), 0, 0);
    }
L_001cf1d8:;
    {
        cpu->r[10] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_001cf1dc:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[10], 1, 1);
    }
L_001cf1e0:;
    {
        if (cond_test(cpu, 3)) {
        goto L_001cf268;
        }
    }
L_001cf1e4:;
    {
        cpu->r[3] = 0x000000d8u;
    }
L_001cf1e8:;
    {
        uint32_t v = cpu->r[3] * cpu->r[8] + cpu->r[2]; cpu->r[8] = v;
    }
L_001cf1ec:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[8], 1, 1);
    }
L_001cf1f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cf210;
        }
    }
L_001cf1f4:;
    {
        cpu->r[10] = cpu->r[8];
    }
L_001cf1f8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001cf1fc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x000000d8u, 0, 0);
    }
L_001cf200:;
    {
        cpu->r[14] = 0x001cf204u; fn_001cd440(cpu);
    }
L_001cf204:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[10], 1, 1);
    }
L_001cf208:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cf1f8;
        }
    }
L_001cf20c:;
    {
        wr32(cpu->r[6] + + 0x4cu, cpu->r[8]);
    }
L_001cf210:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cf214:;
    {
        cpu->r[14] = 0x001cf218u; fn_001cd440(cpu);
    }
L_001cf218:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x4cu);
    }
L_001cf21c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_001cf220:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x000000d8u, 1, 0);
    }
L_001cf224:;
    {
        cpu->r[14] = 0x001cf228u; fn_001cd740(cpu);
    }
L_001cf228:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_001cf22c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_001cf230:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_001cf234:;
    {
        cpu->r[14] = 0x001cf238u; fn_001cbf04(cpu);
    }
L_001cf238:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cf23c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_001cf240:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cf07c;
        }
    }
L_001cf244:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x40u);
    }
L_001cf248:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001cf24c:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_001cf250:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x13cu);
    }
L_001cf254:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001cf258:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001cf25c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cf710;
        }
    }
L_001cf260:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000144u, 0, 0);
    }
L_001cf264:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cf268u)) return;
    }
L_001cf268:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[10], 1, 1);
    }
L_001cf26c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[8]);
    }
L_001cf270:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cf210;
        }
    }
L_001cf274:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x50u);
    }
L_001cf278:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[9], 1, 0);
    }
L_001cf27c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 3u, &shc); cpu->r[3] = v;
    }
L_001cf280:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_001cf284:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001cf288:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 2, 9u, &shc), cpu->r[3], 1, 0);
    }
L_001cf28c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 18u, &shc), 0, 0);
    }
L_001cf290:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_001cf294:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_001cf298:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001cf2bc;
        }
    }
L_001cf29c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4cu);
    }
L_001cf2a0:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001cf2a4:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001cf2a8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x48u);
    }
L_001cf2ac:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_001cf2b0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001cf2b4:;
    {
        cpu->r[14] = 0x001cf2b8u; fn_001ceabc(cpu);
    }
L_001cf2b8:;
    {
        goto L_001cf210;
    }
L_001cf2bc:;
    {
        cpu->r[3] = 0x0000684bu;
    }
L_001cf2c0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001cf2c4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x012fu << 16);
    }
L_001cf2c8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 0);
    }
L_001cf2cc:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001cf2d0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001cf68c;
        }
    }
L_001cf2d4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001cf2d8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x34u);
    }
L_001cf2dc:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[2], 1, 1);
    }
L_001cf2e0:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[8] = add_flags(cpu, cpu->r[10], cpu->r[10], 0, 0);
        }
    }
L_001cf2e4:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[8] = add_flags(cpu, cpu->r[10], cpu->r[2], 0, 0);
        }
    }
L_001cf2e8:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_001cf2ec:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001cf31c;
        }
    }
L_001cf2f0:;
    {
        cpu->r[8] = (~0x000000b7u);
    }
L_001cf2f4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001cf2f8:;
    {
        cpu->r[14] = 0x001cf2fcu; fn_0018ba6c(cpu);
    }
L_001cf2fc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001cf300:;
    {
        uint32_t v = shifter(cpu->r[8], 3, 3u, &shc); cpu->r[3] = v;
    }
L_001cf304:;
    {
        cpu->r[2] = 0x000000d8u;
    }
L_001cf308:;
    {
        { uint64_t v = (uint64_t)cpu->r[12] * (uint64_t)cpu->r[3]; cpu->r[12] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_001cf30c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3] + cpu->r[0]; cpu->r[2] = v;
    }
L_001cf310:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[0]);
    }
L_001cf314:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[2]);
    }
L_001cf318:;
    {
        goto L_001cf33c;
    }
L_001cf31c:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[8], 1, 1);
    }
L_001cf320:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001cf2f0;
        }
    }
L_001cf324:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001cf328:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x44u, cpu->r[8]);
        }
    }
L_001cf32c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x000000d8u;
        }
    }
L_001cf330:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x30u, cpu->r[8]);
        }
    }
L_001cf334:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[3] * cpu->r[8]; cpu->r[8] = v;
        }
    }
L_001cf338:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cf2f4;
        }
    }
L_001cf33c:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x48u);
    }
L_001cf340:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[9], cpu->r[1], 1, 0);
    }
L_001cf344:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 3u, &shc); cpu->r[3] = v;
    }
L_001cf348:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_001cf34c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001cf350:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 2, 9u, &shc), cpu->r[3], 1, 0);
    }
L_001cf354:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 18u, &shc), 0, 0);
    }
L_001cf358:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_001cf35c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_001cf360:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001cf364:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[8] = rd32(cpu->r[13] + + 0x30u);
        }
    }
L_001cf368:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001cf428;
        }
    }
L_001cf36c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_001cf370:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_001cf374:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x30u);
    }
L_001cf378:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[9]);
    }
L_001cf37c:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_001cf380:;
    {
        cpu->r[9] = cpu->r[1];
    }
L_001cf384:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[6]);
    }
L_001cf388:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[4]);
    }
L_001cf38c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[9], cpu->r[11], 0, 0);
    }
L_001cf390:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[10], cpu->r[11], 0, 0);
    }
L_001cf394:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001cf398:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001cf39c:;
    {
        cpu->r[14] = 0x001cf3a0u; fn_001cd948(cpu);
    }
L_001cf3a0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000018u, 0, 0);
    }
L_001cf3a4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000018u, 0, 0);
    }
L_001cf3a8:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x000000d8u, 0, 0);
    }
L_001cf3ac:;
    {
        cpu->r[14] = 0x001cf3b0u; fn_001cd948(cpu);
    }
L_001cf3b0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000030u, 0, 0);
    }
L_001cf3b4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000030u, 0, 0);
    }
L_001cf3b8:;
    {
        cpu->r[14] = 0x001cf3bcu; fn_001cd948(cpu);
    }
L_001cf3bc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000048u, 0, 0);
    }
L_001cf3c0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000048u, 0, 0);
    }
L_001cf3c4:;
    {
        cpu->r[14] = 0x001cf3c8u; fn_001cd948(cpu);
    }
L_001cf3c8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000060u, 0, 0);
    }
L_001cf3cc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000060u, 0, 0);
    }
L_001cf3d0:;
    {
        cpu->r[14] = 0x001cf3d4u; fn_001cd948(cpu);
    }
L_001cf3d4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000078u, 0, 0);
    }
L_001cf3d8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000078u, 0, 0);
    }
L_001cf3dc:;
    {
        cpu->r[14] = 0x001cf3e0u; fn_001cd948(cpu);
    }
L_001cf3e0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000090u, 0, 0);
    }
L_001cf3e4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000090u, 0, 0);
    }
L_001cf3e8:;
    {
        cpu->r[14] = 0x001cf3ecu; fn_001cd948(cpu);
    }
L_001cf3ec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x000000a8u, 0, 0);
    }
L_001cf3f0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x000000a8u, 0, 0);
    }
L_001cf3f4:;
    {
        cpu->r[14] = 0x001cf3f8u; fn_001cd948(cpu);
    }
L_001cf3f8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x000000c0u, 0, 0);
    }
L_001cf3fc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x000000c0u, 0, 0);
    }
L_001cf400:;
    {
        cpu->r[14] = 0x001cf404u; fn_001cd948(cpu);
    }
L_001cf404:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 1);
    }
L_001cf408:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cf38c;
        }
    }
L_001cf40c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_001cf410:;
    {
        cpu->r[8] = 0x000000d8u;
    }
L_001cf414:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_001cf418:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001cf41c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x28u);
    }
L_001cf420:;
    {
        uint32_t v = cpu->r[8] * cpu->r[1] + cpu->r[2]; cpu->r[8] = v;
    }
L_001cf424:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x38u);
    }
L_001cf428:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001cf42c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001cf430:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cf698;
        }
    }
L_001cf434:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001cf438:;
    {
        cpu->r[3] = 0x000000d8u;
    }
L_001cf43c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[1] + cpu->r[8]; cpu->r[3] = v;
    }
L_001cf440:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_001cf444:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 0);
    }
L_001cf448:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 3u, &shc); cpu->r[3] = v;
    }
L_001cf44c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_001cf450:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001cf454:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 2, 9u, &shc), cpu->r[3], 1, 0);
    }
L_001cf458:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 18u, &shc), 0, 0);
    }
L_001cf45c:;
    {
        cpu->r[10] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_001cf460:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001cf464:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001cf520;
        }
    }
L_001cf468:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000060u, 0, 0);
    }
L_001cf46c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000078u, 0, 0);
    }
L_001cf470:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_001cf474:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x000000a8u, 0, 0);
    }
L_001cf478:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_001cf47c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x000000c0u, 0, 0);
    }
L_001cf480:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00000090u, 0, 0);
    }
L_001cf484:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[9]);
    }
L_001cf488:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[6]);
    }
L_001cf48c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[4], 0x00000048u, 0, 0);
    }
L_001cf490:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_001cf494:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001cf498:;
    {
        cpu->r[9] = cpu->r[3];
    }
L_001cf49c:;
    {
        goto L_001cf4a4;
    }
L_001cf4a0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x000000d8u, 0, 0);
    }
L_001cf4a4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001cf4a8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001cf4ac:;
    {
        cpu->r[14] = 0x001cf4b0u; fn_001cd948(cpu);
    }
L_001cf4b0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001cf4b4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], 0x00000018u, 0, 0);
    }
L_001cf4b8:;
    {
        cpu->r[14] = 0x001cf4bcu; fn_001cd948(cpu);
    }
L_001cf4bc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_001cf4c0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], 0x00000030u, 0, 0);
    }
L_001cf4c4:;
    {
        cpu->r[14] = 0x001cf4c8u; fn_001cd948(cpu);
    }
L_001cf4c8:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_001cf4cc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], 0x00000048u, 0, 0);
    }
L_001cf4d0:;
    {
        cpu->r[14] = 0x001cf4d4u; fn_001cd948(cpu);
    }
L_001cf4d4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001cf4d8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], 0x00000060u, 0, 0);
    }
L_001cf4dc:;
    {
        cpu->r[14] = 0x001cf4e0u; fn_001cd948(cpu);
    }
L_001cf4e0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_001cf4e4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], 0x00000078u, 0, 0);
    }
L_001cf4e8:;
    {
        cpu->r[14] = 0x001cf4ecu; fn_001cd948(cpu);
    }
L_001cf4ec:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001cf4f0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], 0x00000090u, 0, 0);
    }
L_001cf4f4:;
    {
        cpu->r[14] = 0x001cf4f8u; fn_001cd948(cpu);
    }
L_001cf4f8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001cf4fc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], 0x000000a8u, 0, 0);
    }
L_001cf500:;
    {
        cpu->r[14] = 0x001cf504u; fn_001cd948(cpu);
    }
L_001cf504:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], 0x000000c0u, 0, 0);
    }
L_001cf508:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001cf50c:;
    {
        cpu->r[14] = 0x001cf510u; fn_001cd948(cpu);
    }
L_001cf510:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], 0x00000001u, 1, 1);
    }
L_001cf514:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cf4a0;
        }
    }
L_001cf518:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x38u);
    }
L_001cf51c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x50u);
    }
L_001cf520:;
    {
        cpu->r[8] = rd32(cpu->r[6] + + 0x4cu);
    }
L_001cf524:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[8], cpu->r[9], 1, 0);
    }
L_001cf528:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 3u, &shc); cpu->r[3] = v;
    }
L_001cf52c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_001cf530:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001cf534:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 2, 9u, &shc), cpu->r[3], 1, 0);
    }
L_001cf538:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 18u, &shc), 0, 0);
    }
L_001cf53c:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_001cf540:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001cf544:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001cf548:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001cf600;
        }
    }
L_001cf54c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x28u);
    }
L_001cf550:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_001cf554:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_001cf558:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[6]);
    }
L_001cf55c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[4]);
    }
L_001cf560:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[9], cpu->r[11], 0, 0);
    }
L_001cf564:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[10], cpu->r[11], 0, 0);
    }
L_001cf568:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001cf56c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001cf570:;
    {
        cpu->r[14] = 0x001cf574u; fn_001cd948(cpu);
    }
L_001cf574:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000018u, 0, 0);
    }
L_001cf578:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000018u, 0, 0);
    }
L_001cf57c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x000000d8u, 0, 0);
    }
L_001cf580:;
    {
        cpu->r[14] = 0x001cf584u; fn_001cd948(cpu);
    }
L_001cf584:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000030u, 0, 0);
    }
L_001cf588:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000030u, 0, 0);
    }
L_001cf58c:;
    {
        cpu->r[14] = 0x001cf590u; fn_001cd948(cpu);
    }
L_001cf590:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000048u, 0, 0);
    }
L_001cf594:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000048u, 0, 0);
    }
L_001cf598:;
    {
        cpu->r[14] = 0x001cf59cu; fn_001cd948(cpu);
    }
L_001cf59c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000060u, 0, 0);
    }
L_001cf5a0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000060u, 0, 0);
    }
L_001cf5a4:;
    {
        cpu->r[14] = 0x001cf5a8u; fn_001cd948(cpu);
    }
L_001cf5a8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000078u, 0, 0);
    }
L_001cf5ac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000078u, 0, 0);
    }
L_001cf5b0:;
    {
        cpu->r[14] = 0x001cf5b4u; fn_001cd948(cpu);
    }
L_001cf5b4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000090u, 0, 0);
    }
L_001cf5b8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000090u, 0, 0);
    }
L_001cf5bc:;
    {
        cpu->r[14] = 0x001cf5c0u; fn_001cd948(cpu);
    }
L_001cf5c0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x000000a8u, 0, 0);
    }
L_001cf5c4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x000000a8u, 0, 0);
    }
L_001cf5c8:;
    {
        cpu->r[14] = 0x001cf5ccu; fn_001cd948(cpu);
    }
L_001cf5cc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x000000c0u, 0, 0);
    }
L_001cf5d0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x000000c0u, 0, 0);
    }
L_001cf5d4:;
    {
        cpu->r[14] = 0x001cf5d8u; fn_001cd948(cpu);
    }
L_001cf5d8:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 1);
    }
L_001cf5dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cf560;
        }
    }
L_001cf5e0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_001cf5e4:;
    {
        cpu->r[3] = 0x000000d8u;
    }
L_001cf5e8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001cf5ec:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x14u);
    }
L_001cf5f0:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001cf5f4:;
    {
        uint32_t v = cpu->r[3] * cpu->r[1] + cpu->r[2]; cpu->r[2] = v;
    }
L_001cf5f8:;
    {
        cpu->r[8] = rd32(cpu->r[6] + + 0x4cu);
    }
L_001cf5fc:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_001cf600:;
    {
        cpu->r[10] = rd32(cpu->r[6] + + 0x48u);
    }
L_001cf604:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[10], 1, 1);
    }
L_001cf608:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cf624;
        }
    }
L_001cf60c:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x000000d8u, 1, 0);
    }
L_001cf610:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001cf614:;
    {
        cpu->r[14] = 0x001cf618u; fn_001cd440(cpu);
    }
L_001cf618:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[8], 1, 1);
    }
L_001cf61c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cf60c;
        }
    }
L_001cf620:;
    {
        cpu->r[8] = rd32(cpu->r[6] + + 0x48u);
    }
L_001cf624:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_001cf628:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x50u);
    }
L_001cf62c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cf664;
        }
    }
L_001cf630:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 0);
    }
L_001cf634:;
    {
        cpu->r[1] = 0x000000d8u;
    }
L_001cf638:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 3u, &shc); cpu->r[3] = v;
    }
L_001cf63c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_001cf640:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001cf644:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 2, 9u, &shc), cpu->r[3], 1, 0);
    }
L_001cf648:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 18u, &shc), 0, 0);
    }
L_001cf64c:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_001cf650:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[1] = v;
    }
L_001cf654:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001cf658:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001cf680;
        }
    }
L_001cf65c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001cf660:;
    {
        cpu->r[14] = 0x001cf664u; fn_002082a8(cpu);
    }
L_001cf664:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x30u);
    }
L_001cf668:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_001cf66c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x44u);
    }
L_001cf670:;
    {
        wr32(cpu->r[6] + + 0x48u, cpu->r[3]);
    }
L_001cf674:;
    {
        wr32(cpu->r[6] + + 0x4cu, cpu->r[12]);
    }
L_001cf678:;
    {
        wr32(cpu->r[6] + + 0x50u, cpu->r[1]);
    }
L_001cf67c:;
    {
        goto L_001cf210;
    }
L_001cf680:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001cf684:;
    {
        cpu->r[14] = 0x001cf688u; fn_0018ba20(cpu);
    }
L_001cf688:;
    {
        goto L_001cf664;
    }
L_001cf68c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x54u);
    }
L_001cf690:;
    {
        cpu->r[14] = 0x001cf694u; fn_00208298(cpu);
    }
L_001cf694:;
    {
        goto L_001cf2d4;
    }
L_001cf698:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001cf69c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001cf6a0:;
    {
        cpu->r[14] = 0x001cf6a4u; fn_001cd948(cpu);
    }
L_001cf6a4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001cf6a8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], 0x00000018u, 0, 0);
    }
L_001cf6ac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[8], 0x000000d8u, 0, 0);
    }
L_001cf6b0:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[12]);
    }
L_001cf6b4:;
    {
        cpu->r[14] = 0x001cf6b8u; fn_001cd948(cpu);
    }
L_001cf6b8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_001cf6bc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], 0x00000030u, 0, 0);
    }
L_001cf6c0:;
    {
        cpu->r[14] = 0x001cf6c4u; fn_001cd948(cpu);
    }
L_001cf6c4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000048u, 0, 0);
    }
L_001cf6c8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], 0x00000048u, 0, 0);
    }
L_001cf6cc:;
    {
        cpu->r[14] = 0x001cf6d0u; fn_001cd948(cpu);
    }
L_001cf6d0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000060u, 0, 0);
    }
L_001cf6d4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], 0x00000060u, 0, 0);
    }
L_001cf6d8:;
    {
        cpu->r[14] = 0x001cf6dcu; fn_001cd948(cpu);
    }
L_001cf6dc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000078u, 0, 0);
    }
L_001cf6e0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], 0x00000078u, 0, 0);
    }
L_001cf6e4:;
    {
        cpu->r[14] = 0x001cf6e8u; fn_001cd948(cpu);
    }
L_001cf6e8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000090u, 0, 0);
    }
L_001cf6ec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], 0x00000090u, 0, 0);
    }
L_001cf6f0:;
    {
        cpu->r[14] = 0x001cf6f4u; fn_001cd948(cpu);
    }
L_001cf6f4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x000000a8u, 0, 0);
    }
L_001cf6f8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], 0x000000a8u, 0, 0);
    }
L_001cf6fc:;
    {
        cpu->r[14] = 0x001cf700u; fn_001cd948(cpu);
    }
L_001cf700:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], 0x000000c0u, 0, 0);
    }
L_001cf704:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x000000c0u, 0, 0);
    }
L_001cf708:;
    {
        cpu->r[14] = 0x001cf70cu; fn_001cd948(cpu);
    }
L_001cf70c:;
    {
        goto L_001cf520;
    }
L_001cf710:;
    {
        cpu->r[14] = 0x001cf714u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001cf714:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[4]);
        uint64_t v = rd64(cpu->r[7]);
        cpu->r[11] = (uint32_t)v;
        cpu->r[12] = (uint32_t)(v >> 32);
        cpu->r[7] = wb_tmp;
        }
    }
L_001cf718:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001cf71c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[4], 1, (cpu->r[10] & 0xffu), &shc); cpu->r[2] = v;
        }
    }
L_001cf720:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[4], 3, 20u, &shc); cpu->r[2] = v;
        }
    }
L_001cf724:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[4], 4, 19u, &shc); cpu->r[2] = v;
        }
    }
L_001cf728:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[12], 2, 20u, &shc); cpu->r[2] = v;
        }
    }
L_001cf72c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[5] & shifter(cpu->r[12], 4, 13u, &shc); uint32_t t = v; if (guest_pc_write(cpu, t, entry_lr, 0x001cf730u)) return;
        }
    }
}

/* _ZN3rss4readEPKN4slim7XmlNodeE @ 001cf730 (arm) */
void fn_001cf730(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cf730:;
    {
        cpu->r[2] = rd32(0x001cf738u + + 0x410u);
    }
L_001cf734:;
    {
        cpu->r[12] = rd32(0x001cf73cu + + 0x410u);
    }
L_001cf738:;
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
L_001cf73c:;
    {
        cpu->r[2] = add_flags(cpu, 0x001cf744u, cpu->r[2], 0, 0);
    }
L_001cf740:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000b4u, 1, 0);
    }
L_001cf744:;
    {
        cpu->r[4] = rd32(0x001cf74cu + + 0x404u);
    }
L_001cf748:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x000000b0u, 0, 0);
    }
L_001cf74c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001cf750:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_001cf754:;
    {
        cpu->r[4] = add_flags(cpu, 0x001cf75cu, cpu->r[4], 0, 0);
    }
L_001cf758:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[12]);
    }
L_001cf75c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001cf760:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_001cf764:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_001cf768:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001cf76c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_001cf770:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x60u;
        wr32(cpu->r[1] + - 0x60u, cpu->r[6]);
        cpu->r[1] = wb_tmp;
    }
L_001cf774:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_001cf778:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001cf77c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_001cf780:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_001cf784:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[12]);
    }
L_001cf788:;
    {
        wr32(cpu->r[13] + + 0xacu, cpu->r[3]);
    }
L_001cf78c:;
    {
        cpu->r[14] = 0x001cf790u; fn_001cbfe4(cpu);
    }
L_001cf790:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cf794:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_001cf798:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cf8d8;
        }
    }
L_001cf79c:;
    {
        cpu->r[7] = 0x0000cf3du;
    }
L_001cf7a0:;
    {
        cpu->r[3] = 0x00000c31u;
    }
L_001cf7a4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x30c3u << 16);
    }
L_001cf7a8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[4]);
    }
L_001cf7ac:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_001cf7b0:;
    {
        cpu->r[7] = (cpu->r[7] & 0xffffu) | (0x3cf3u << 16);
    }
L_001cf7b4:;
    {
        cpu->r[3] = rd32(0x001cf7bcu + + 0x398u);
    }
L_001cf7b8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000058u, 0, 0);
    }
L_001cf7bc:;
    {
        cpu->r[2] = 0x000030c3u;
    }
L_001cf7c0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_001cf7c4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x030cu << 16);
    }
L_001cf7c8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001cf7d0u, cpu->r[3], 0, 0);
    }
L_001cf7cc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000054u, 0, 0);
    }
L_001cf7d0:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_001cf7d4:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[3]);
    }
L_001cf7d8:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[12]);
    }
L_001cf7dc:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[1]);
    }
L_001cf7e0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x4u);
    }
L_001cf7e4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cf7e8:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001cf7ec:;
    {
        cpu->r[1] = 0x00000010u;
    }
L_001cf7f0:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[4]);
    }
L_001cf7f4:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001cf7f8:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[4]);
    }
L_001cf7fc:;
    {
        cpu->r[14] = 0x001cf800u; fn_001b48a8(cpu);
    }
L_001cf800:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x68u);
    }
L_001cf804:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000018u, 0, 0);
    }
L_001cf808:;
    {
        cpu->r[1] = 0x00000010u;
    }
L_001cf80c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001cf810:;
    {
        uint32_t v = shifter(cpu->r[10], 1, 2u, &shc); cpu->r[10] = v;
    }
L_001cf814:;
    {
        wr8(cpu->r[2], cpu->r[6]);
    }
L_001cf818:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[3]);
    }
L_001cf81c:;
    {
        wr32(cpu->r[13] + + 0x84u, cpu->r[3]);
    }
L_001cf820:;
    {
        cpu->r[14] = 0x001cf824u; fn_001b48a8(cpu);
    }
L_001cf824:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x80u);
    }
L_001cf828:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000030u, 0, 0);
    }
L_001cf82c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001cf830:;
    {
        cpu->r[1] = 0x00000010u;
    }
L_001cf834:;
    {
        uint32_t v = cpu->r[7] * cpu->r[10]; cpu->r[10] = v;
    }
L_001cf838:;
    {
        wr8(cpu->r[2], cpu->r[6]);
    }
L_001cf83c:;
    {
        wr32(cpu->r[13] + + 0x98u, cpu->r[3]);
    }
L_001cf840:;
    {
        wr32(cpu->r[13] + + 0x9cu, cpu->r[3]);
    }
L_001cf844:;
    {
        cpu->r[14] = 0x001cf848u; fn_001b48a8(cpu);
    }
L_001cf848:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x98u);
    }
L_001cf84c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_001cf850:;
    {
        wr8(cpu->r[3], cpu->r[6]);
    }
L_001cf854:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[3] = v0;
        cpu->r[8] = v1;
    }
L_001cf858:;
    {
        wr32(cpu->r[13] + + 0xa0u, cpu->r[6]);
    }
L_001cf85c:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 0);
    }
L_001cf860:;
    {
        wr32(cpu->r[13] + + 0xa4u, cpu->r[6]);
    }
L_001cf864:;
    {
        wr32(cpu->r[13] + + 0xa8u, cpu->r[6]);
    }
L_001cf868:;
    {
        uint32_t v = shifter(cpu->r[9], 1, 2u, &shc); cpu->r[9] = v;
    }
L_001cf86c:;
    {
        uint32_t v = cpu->r[7] * cpu->r[9]; cpu->r[9] = v;
    }
L_001cf870:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[9], 1, 1);
    }
L_001cf874:;
    {
        if (cond_test(cpu, 3)) {
        goto L_001cf8fc;
        }
    }
L_001cf878:;
    {
        cpu->r[2] = 0x00000054u;
    }
L_001cf87c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[10] + cpu->r[3]; cpu->r[10] = v;
    }
L_001cf880:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[10], 1, 1);
    }
L_001cf884:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cf8a4;
        }
    }
L_001cf888:;
    {
        cpu->r[9] = cpu->r[10];
    }
L_001cf88c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001cf890:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000054u, 0, 0);
    }
L_001cf894:;
    {
        cpu->r[14] = 0x001cf898u; fn_001cd624(cpu);
    }
L_001cf898:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[9], 1, 1);
    }
L_001cf89c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cf88c;
        }
    }
L_001cf8a0:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[10]);
    }
L_001cf8a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cf8a8:;
    {
        cpu->r[14] = 0x001cf8acu; fn_001cd624(cpu);
    }
L_001cf8ac:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x4u);
    }
L_001cf8b0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_001cf8b4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000054u, 1, 0);
    }
L_001cf8b8:;
    {
        cpu->r[14] = 0x001cf8bcu; fn_001cef30(cpu);
    }
L_001cf8bc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_001cf8c0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_001cf8c4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_001cf8c8:;
    {
        cpu->r[14] = 0x001cf8ccu; fn_001cbf04(cpu);
    }
L_001cf8cc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cf8d0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_001cf8d4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cf7e0;
        }
    }
L_001cf8d8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001cf8dc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_001cf8e0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_001cf8e4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xacu);
    }
L_001cf8e8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001cf8ec:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001cf8f0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cfb44;
        }
    }
L_001cf8f4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000b4u, 0, 0);
    }
L_001cf8f8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cf8fcu)) return;
    }
L_001cf8fc:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[9], 1, 1);
    }
L_001cf900:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[10]);
    }
L_001cf904:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cf8a4;
        }
    }
L_001cf908:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_001cf90c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 0);
    }
L_001cf910:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001cf914:;
    {
        uint32_t v = cpu->r[7] * cpu->r[3]; cpu->r[3] = v;
    }
L_001cf918:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_001cf91c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001cf940;
        }
    }
L_001cf920:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001cf924:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001cf928:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001cf92c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001cf930:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_001cf934:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001cf938:;
    {
        cpu->r[14] = 0x001cf93cu; fn_001ce790(cpu);
    }
L_001cf93c:;
    {
        goto L_001cf8a4;
    }
L_001cf940:;
    {
        cpu->r[3] = 0x000030c3u;
    }
L_001cf944:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001cf948:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x030cu << 16);
    }
L_001cf94c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[9], 1, 0);
    }
L_001cf950:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001cf954:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001cfb24;
        }
    }
L_001cf958:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001cf95c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_001cf960:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[9], 1, 1);
    }
L_001cf964:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[3] = add_flags(cpu, cpu->r[9], cpu->r[2], 0, 0);
        }
    }
L_001cf968:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[3] = add_flags(cpu, cpu->r[9], cpu->r[9], 0, 0);
        }
    }
L_001cf96c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_001cf970:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001cf9ac;
        }
    }
L_001cf974:;
    {
        cpu->r[3] = (~0x00000003u);
    }
L_001cf978:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x40u);
    }
L_001cf97c:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[3]);
    }
L_001cf980:;
    {
        cpu->r[14] = 0x001cf984u; fn_00097b58(cpu);
    }
L_001cf984:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4cu);
    }
L_001cf988:;
    {
        cpu->r[2] = 0x00000054u;
    }
L_001cf98c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001cf990:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 2u, &shc); cpu->r[3] = v;
    }
L_001cf994:;
    {
        { uint64_t v = (uint64_t)cpu->r[1] * (uint64_t)cpu->r[3]; cpu->r[1] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_001cf998:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 2u, &shc); cpu->r[3] = v;
    }
L_001cf99c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3] + cpu->r[0]; cpu->r[2] = v;
    }
L_001cf9a0:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[0]);
    }
L_001cf9a4:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[2]);
    }
L_001cf9a8:;
    {
        goto L_001cf9cc;
    }
L_001cf9ac:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_001cf9b0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001cf974;
        }
    }
L_001cf9b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001cf9b8:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x34u, cpu->r[3]);
        }
    }
L_001cf9bc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000054u;
        }
    }
L_001cf9c0:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
        }
    }
L_001cf9c4:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
        }
    }
L_001cf9c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cf978;
        }
    }
L_001cf9cc:;
    {
        cpu->r[11] = rd32(cpu->r[5]);
    }
L_001cf9d0:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[8], cpu->r[11], 1, 0);
    }
L_001cf9d4:;
    {
        uint32_t v = shifter(cpu->r[10], 1, 2u, &shc); cpu->r[10] = v;
    }
L_001cf9d8:;
    {
        uint32_t v = cpu->r[7] * cpu->r[10]; cpu->r[10] = v;
    }
L_001cf9dc:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001cf9e0:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[10]);
    }
L_001cf9e4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[10] = rd32(cpu->r[13] + + 0x20u);
        }
    }
L_001cf9e8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001cfa28;
        }
    }
L_001cf9ec:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[8]);
    }
L_001cf9f0:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_001cf9f4:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x24u);
    }
L_001cf9f8:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x20u);
    }
L_001cf9fc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], cpu->r[10], 0, 0);
    }
L_001cfa00:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[11], cpu->r[10], 0, 0);
    }
L_001cfa04:;
    {
        cpu->r[14] = 0x001cfa08u; fn_001ce25c(cpu);
    }
L_001cfa08:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], 0x00000001u, 1, 1);
    }
L_001cfa0c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000054u, 0, 0);
    }
L_001cfa10:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cf9fc;
        }
    }
L_001cfa14:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_001cfa18:;
    {
        cpu->r[10] = 0x00000054u;
    }
L_001cfa1c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_001cfa20:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x38u);
    }
L_001cfa24:;
    {
        uint32_t v = cpu->r[10] * cpu->r[2] + cpu->r[3]; cpu->r[10] = v;
    }
L_001cfa28:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_001cfa2c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 1);
    }
L_001cfa30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cfb30;
        }
    }
L_001cfa34:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001cfa38:;
    {
        cpu->r[11] = 0x00000054u;
    }
L_001cfa3c:;
    {
        uint32_t v = cpu->r[11] * cpu->r[1] + cpu->r[10]; cpu->r[11] = v;
    }
L_001cfa40:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[11], cpu->r[10], 1, 0);
    }
L_001cfa44:;
    {
        uint32_t v = shifter(cpu->r[9], 1, 2u, &shc); cpu->r[9] = v;
    }
L_001cfa48:;
    {
        uint32_t v = cpu->r[7] * cpu->r[9]; cpu->r[9] = v;
    }
L_001cfa4c:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001cfa50:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001cfa6c;
        }
    }
L_001cfa54:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001cfa58:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001cfa5c:;
    {
        cpu->r[14] = 0x001cfa60u; fn_001ce25c(cpu);
    }
L_001cfa60:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], 0x00000001u, 1, 1);
    }
L_001cfa64:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000054u, 0, 0);
    }
L_001cfa68:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cfa54;
        }
    }
L_001cfa6c:;
    {
        cpu->r[10] = rd32(cpu->r[5] + + 0x4u);
    }
L_001cfa70:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[10], cpu->r[8], 1, 0);
    }
L_001cfa74:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001cfa78:;
    {
        uint32_t v = cpu->r[7] * cpu->r[3]; cpu->r[3] = v;
    }
L_001cfa7c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001cfa80:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001cfa84:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001cfab8;
        }
    }
L_001cfa88:;
    {
        cpu->r[9] = cpu->r[3];
    }
L_001cfa8c:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_001cfa90:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[11], cpu->r[10], 0, 0);
    }
L_001cfa94:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[8], cpu->r[10], 0, 0);
    }
L_001cfa98:;
    {
        cpu->r[14] = 0x001cfa9cu; fn_001ce25c(cpu);
    }
L_001cfa9c:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], 0x00000001u, 1, 1);
    }
L_001cfaa0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000054u, 0, 0);
    }
L_001cfaa4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cfa90;
        }
    }
L_001cfaa8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001cfaac:;
    {
        cpu->r[3] = 0x00000054u;
    }
L_001cfab0:;
    {
        cpu->r[10] = rd32(cpu->r[5] + + 0x4u);
    }
L_001cfab4:;
    {
        uint32_t v = cpu->r[3] * cpu->r[2] + cpu->r[11]; cpu->r[11] = v;
    }
L_001cfab8:;
    {
        cpu->r[8] = rd32(cpu->r[5]);
    }
L_001cfabc:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[10], 1, 1);
    }
L_001cfac0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[10];
        }
    }
L_001cfac4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cfae0;
        }
    }
L_001cfac8:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], 0x00000054u, 1, 0);
    }
L_001cfacc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001cfad0:;
    {
        cpu->r[14] = 0x001cfad4u; fn_001cd624(cpu);
    }
L_001cfad4:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[10], 1, 1);
    }
L_001cfad8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cfac8;
        }
    }
L_001cfadc:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_001cfae0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cfae4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_001cfae8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cfb0c;
        }
    }
L_001cfaec:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 0);
    }
L_001cfaf0:;
    {
        cpu->r[1] = 0x00000054u;
    }
L_001cfaf4:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001cfaf8:;
    {
        uint32_t v = cpu->r[7] * cpu->r[3]; cpu->r[3] = v;
    }
L_001cfafc:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[1] = v;
    }
L_001cfb00:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000080u, 1, 1);
    }
L_001cfb04:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001cfb1c;
        }
    }
L_001cfb08:;
    {
        cpu->r[14] = 0x001cfb0cu; fn_002082a8(cpu);
    }
L_001cfb0c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_001cfb10:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x34u);
    }
L_001cfb14:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[3]);
        wr32(ea + 4u, cpu->r[11]);
        wr32(ea + 8u, cpu->r[12]);
    }
L_001cfb18:;
    {
        goto L_001cf8a4;
    }
L_001cfb1c:;
    {
        cpu->r[14] = 0x001cfb20u; fn_0018ba20(cpu);
    }
L_001cfb20:;
    {
        goto L_001cfb0c;
    }
L_001cfb24:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x44u);
    }
L_001cfb28:;
    {
        cpu->r[14] = 0x001cfb2cu; fn_00208298(cpu);
    }
L_001cfb2c:;
    {
        goto L_001cf958;
    }
L_001cfb30:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001cfb34:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001cfb38:;
    {
        cpu->r[14] = 0x001cfb3cu; fn_001ce25c(cpu);
    }
L_001cfb3c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[10], 0x00000054u, 0, 0);
    }
L_001cfb40:;
    {
        goto L_001cfa6c;
    }
L_001cfb44:;
    {
        cpu->r[14] = 0x001cfb48u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001cfb48:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[4]);
        uint64_t v = rd64(cpu->r[7]);
        cpu->r[10] = (uint32_t)v;
        cpu->r[11] = (uint32_t)(v >> 32);
        cpu->r[7] = wb_tmp;
        }
    }
L_001cfb4c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001cfb50:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[6] + (-cpu->r[4]);
        uint64_t v = rd64(cpu->r[6]);
        cpu->r[2] = (uint32_t)v;
        cpu->r[3] = (uint32_t)(v >> 32);
        cpu->r[6] = wb_tmp;
        }
    }
L_001cfb54:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[5] & shifter(cpu->r[4], 4, (0x001cfb5cu & 0xffu), &shc); cpu->r[14] = v;
        }
    }
}

/* XP_API_STRCHRFIND @ 001cfb58 (arm) */
void fn_001cfb58(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cfb58:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_001cfb5c:;
    {
        cpu->r[3] = rd8(cpu->r[0]);
    }
L_001cfb60:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001cfb64:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
        }
    }
L_001cfb68:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[4] = 0x00000000u;
        }
    }
L_001cfb6c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[4] = 0x00000001u;
        }
    }
L_001cfb70:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001cfb9c;
        }
    }
L_001cfb74:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001cfb78:;
    {
        cpu->r[4] = cpu->r[12];
    }
L_001cfb7c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_001cfb80:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001cfb84:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
        }
    }
L_001cfb88:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[12]);
    }
L_001cfb8c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001cfb90:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
        }
    }
L_001cfb94:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001cfb7c;
        }
    }
L_001cfb98:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[12], 0, 0);
    }
L_001cfb9c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_001cfba0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001cfba4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_001cfba8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* XP_API_STRCHR @ 001cfbac (arm) */
void fn_001cfbac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cfbac:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* XP_DEBUG_INIT @ 001cfbb0 (arm) */
void fn_001cfbb0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cfbb0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* XP_DEBUG_FINALIZE @ 001cfbb4 (arm) */
void fn_001cfbb4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cfbb4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* XP_API_FTOA @ 001cfbb8 (arm) */
void fn_001cfbb8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cfbb8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* XP_API_ITOA @ 001cfbbc (arm) */
void fn_001cfbbc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cfbbc:;
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
L_001cfbc0:;
    {
        cpu->r[6] = rd32(0x001cfbc8u + + 0x104u);
    }
L_001cfbc4:;
    {
        cpu->r[10] = rd32(0x001cfbccu + + 0x104u);
    }
L_001cfbc8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cfbcc:;
    {
        cpu->r[7] = rd32(0x001cfbd4u + + 0x100u);
    }
L_001cfbd0:;
    {
        cpu->r[6] = add_flags(cpu, 0x001cfbd8u, cpu->r[6], 0, 0);
    }
L_001cfbd4:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001cfbd8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001cfbdc:;
    {
        cpu->r[7] = add_flags(cpu, 0x001cfbe4u, cpu->r[7], 0, 0);
    }
L_001cfbe0:;
    {
        cpu->r[9] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_001cfbe4:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001cfbe8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_001cfbec:;
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
L_001cfbf0:;
    {
        cpu->r[9] = rd32(cpu->r[9]);
    }
L_001cfbf4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001cfbf8:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[9]);
    }
L_001cfbfc:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[12] = base + 16u;
    }
L_001cfc00:;
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
L_001cfc04:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[12] = base + 16u;
    }
L_001cfc08:;
    {
        uint32_t base = cpu->r[7];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001cfc0c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000030u;
        }
    }
L_001cfc10:;
    {
        uint32_t wb_tmp = cpu->r[12] + 0x00000004u;
        wr32(cpu->r[12], cpu->r[0]);
        cpu->r[12] = wb_tmp;
    }
L_001cfc14:;
    {
        wr8(cpu->r[12], cpu->r[1]);
    }
L_001cfc18:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[8] + + 0x1u, cpu->r[4]);
        }
    }
L_001cfc1c:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[8], cpu->r[3]);
        }
    }
L_001cfc20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cfca8;
        }
    }
L_001cfc24:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = cpu->r[8];
        }
    }
L_001cfc28:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x0000002du;
        }
    }
L_001cfc2c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[7] = cpu->r[8];
        }
    }
L_001cfc30:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[11] = 0x00000000u;
        }
    }
L_001cfc34:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = sub_flags(cpu, 0x00000000u, cpu->r[4], 1, 0);
        }
    }
L_001cfc38:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[11] = 0x00000001u;
        }
    }
L_001cfc3c:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t wb_tmp = cpu->r[7] + 0x00000001u;
        wr8(cpu->r[7], cpu->r[3]);
        cpu->r[7] = wb_tmp;
        }
    }
L_001cfc40:;
    {
        goto L_001cfc48;
    }
L_001cfc44:;
    {
        cpu->r[7] = cpu->r[9];
    }
L_001cfc48:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cfc4c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001cfc50:;
    {
        cpu->r[14] = 0x001cfc54u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_001cfc54:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_001cfc58:;
    {
        cpu->r[9] = cpu->r[7];
    }
L_001cfc5c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001cfc60:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_001cfc64:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001cfc68:;
    {
        cpu->r[3] = rd8(cpu->r[3] + - 0x2cu);
    }
L_001cfc6c:;
    {
        uint32_t wb_tmp = cpu->r[9] + 0x00000001u;
        wr8(cpu->r[9], cpu->r[3]);
        cpu->r[9] = wb_tmp;
    }
L_001cfc70:;
    {
        cpu->r[14] = 0x001cfc74u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001cfc74:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cfc78:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cfc44;
        }
    }
L_001cfc7c:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_001cfc80:;
    {
        wr8(cpu->r[9], cpu->r[4]);
    }
L_001cfc84:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = cpu->r[8];
        }
    }
L_001cfc88:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
        }
    }
L_001cfc8c:;
    {
        goto L_001cfca0;
    }
L_001cfc90:;
    {
        cpu->r[2] = rd8(cpu->r[3]);
    }
L_001cfc94:;
    {
        cpu->r[1] = rd8(cpu->r[7]);
    }
L_001cfc98:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000001u;
        wr8(cpu->r[3], cpu->r[1]);
        cpu->r[3] = wb_tmp;
    }
L_001cfc9c:;
    {
        uint32_t wb_tmp = cpu->r[7] + (-0x00000001u);
        wr8(cpu->r[7], cpu->r[2]);
        cpu->r[7] = wb_tmp;
    }
L_001cfca0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_001cfca4:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001cfc90;
        }
    }
L_001cfca8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[10]);
    }
L_001cfcac:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001cfcb0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001cfcb4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001cfcb8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001cfcbc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cfcc8;
        }
    }
L_001cfcc0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_001cfcc4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001cfcc8u)) return;
    }
L_001cfcc8:;
    {
        cpu->r[14] = 0x001cfcccu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001cfccc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 1, 16u, &shc); cpu->r[10] = v;
        }
    }
L_001cfcd0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001cfcd4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[0], 2, 29u, &shc); cpu->r[1] = v;
        }
    }
}

/* _Z20ConvertUnicodeToUTF8PcPKti @ 001cfcd8 (arm) */
void fn_001cfcd8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cfcd8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001cfcdc:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001cfce0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[10]);
    }
L_001cfce4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001cfce8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001cfda8;
        }
    }
L_001cfcec:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001cfcf0:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[2] = v;
    }
L_001cfcf4:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_001cfcf8:;
    {
        cpu->r[10] = 0x000007ffu;
    }
L_001cfcfc:;
    {
        goto L_001cfd30;
    }
L_001cfd00:;
    {
        cpu->r[4] = (~shifter(cpu->r[4], 3, 26u, &shc));
    }
L_001cfd04:;
    {
        uint32_t wb_tmp = cpu->r[7] + 0x00000001u;
        wr8(cpu->r[7], cpu->r[4]);
        cpu->r[7] = wb_tmp;
    }
L_001cfd08:;
    {
        cpu->r[4] = rd8(cpu->r[1] + cpu->r[12]);
    }
L_001cfd0c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_001cfd10:;
    {
        uint32_t v = cpu->r[4] & 0x0000003fu; cpu->r[4] = v;
    }
L_001cfd14:;
    {
        cpu->r[4] = (~shifter(cpu->r[4], 2, 25u, &shc));
    }
L_001cfd18:;
    {
        cpu->r[4] = (~shifter(cpu->r[4], 3, 25u, &shc));
    }
L_001cfd1c:;
    {
        wr8(cpu->r[3] + + 0x1u, cpu->r[4]);
    }
L_001cfd20:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001cfd24:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000002u, 0, 0);
    }
L_001cfd28:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_001cfd2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cfda8;
        }
    }
L_001cfd30:;
    {
        cpu->r[4] = rd16(cpu->r[1] + cpu->r[12]);
    }
L_001cfd34:;
    {
        sub_flags(cpu, cpu->r[4], 0x0000007fu, 1, 1);
    }
L_001cfd38:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
        }
    }
L_001cfd3c:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t wb_tmp = cpu->r[3] + 0x00000001u;
        wr8(cpu->r[3], cpu->r[4]);
        cpu->r[3] = wb_tmp;
        }
    }
L_001cfd40:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001cfd24;
        }
    }
L_001cfd44:;
    {
        uint32_t v = shifter(cpu->r[4], 1, 12u, &shc); cpu->r[5] = v;
    }
L_001cfd48:;
    {
        uint32_t v = shifter(cpu->r[4], 1, 6u, &shc); cpu->r[8] = v;
    }
L_001cfd4c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[10], 1, 1);
    }
L_001cfd50:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_001cfd54:;
    {
        cpu->r[5] = (~shifter(cpu->r[5], 2, 27u, &shc));
    }
L_001cfd58:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_001cfd5c:;
    {
        cpu->r[4] = (~shifter(cpu->r[8], 2, 26u, &shc));
    }
L_001cfd60:;
    {
        cpu->r[5] = (~shifter(cpu->r[5], 3, 27u, &shc));
    }
L_001cfd64:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001cfd00;
        }
    }
L_001cfd68:;
    {
        uint32_t wb_tmp = cpu->r[6] + 0x00000001u;
        wr8(cpu->r[6], cpu->r[5]);
        cpu->r[6] = wb_tmp;
    }
L_001cfd6c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000003u, 0, 0);
    }
L_001cfd70:;
    {
        cpu->r[4] = rd16(cpu->r[1] + cpu->r[12]);
    }
L_001cfd74:;
    {
        cpu->r[4] = (cpu->r[4] >> 6) & 0x3fu;
    }
L_001cfd78:;
    {
        cpu->r[4] = (~shifter(cpu->r[4], 2, 25u, &shc));
    }
L_001cfd7c:;
    {
        cpu->r[4] = (~shifter(cpu->r[4], 3, 25u, &shc));
    }
L_001cfd80:;
    {
        wr8(cpu->r[3] + + 0x1u, cpu->r[4]);
    }
L_001cfd84:;
    {
        cpu->r[4] = rd8(cpu->r[1] + cpu->r[12]);
    }
L_001cfd88:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000002u, 0, 0);
    }
L_001cfd8c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_001cfd90:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], 0x00000002u, 0, 0);
    }
L_001cfd94:;
    {
        uint32_t v = cpu->r[4] & 0x0000003fu; cpu->r[4] = v;
    }
L_001cfd98:;
    {
        cpu->r[4] = (~shifter(cpu->r[4], 2, 25u, &shc));
    }
L_001cfd9c:;
    {
        cpu->r[4] = (~shifter(cpu->r[4], 3, 25u, &shc));
    }
L_001cfda0:;
    {
        wr8(cpu->r[6] + + 0x1u, cpu->r[4]);
    }
L_001cfda4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cfd30;
        }
    }
L_001cfda8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001cfdac:;
    {
        wr8(cpu->r[3], cpu->r[2]);
    }
L_001cfdb0:;
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
        cpu->r[10] = v5;
        cpu->r[13] += 24u;
    }
L_001cfdb4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z20ConvertUTF8ToUnicodePtPKci @ 001cfdb8 (arm) */
void fn_001cfdb8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cfdb8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001cfdbc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
    }
L_001cfdc0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_001cfdc4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001cfe48;
        }
    }
L_001cfdc8:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001cfdcc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_001cfdd0:;
    {
        cpu->r[6] = cpu->r[12];
    }
L_001cfdd4:;
    {
        goto L_001cfdfc;
    }
L_001cfdd8:;
    {
        sub_flags(cpu, cpu->r[0], 0x000000c0u, 1, 1);
    }
L_001cfddc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cfe5c;
        }
    }
L_001cfde0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000080u; set_nz(cpu, v); }
    }
L_001cfde4:;
    {
        if (cond_test(cpu, 1)) {
        wr16(cpu->r[4] + - 0x2u, cpu->r[3]);
        }
    }
L_001cfde8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
        }
    }
L_001cfdec:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
        }
    }
L_001cfdf0:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_001cfdf4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000002u, 0, 0);
    }
L_001cfdf8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001cfe44;
        }
    }
L_001cfdfc:;
    {
        cpu->r[3] = rd8(cpu->r[1] + cpu->r[12]);
    }
L_001cfe00:;
    {
        uint32_t v = cpu->r[3] & 0x000000e0u; cpu->r[5] = v;
    }
L_001cfe04:;
    {
        uint32_t v = cpu->r[3] & 0x000000c0u; cpu->r[0] = v;
    }
L_001cfe08:;
    {
        sub_flags(cpu, cpu->r[5], 0x000000e0u, 1, 1);
    }
L_001cfe0c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cfdd8;
        }
    }
L_001cfe10:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], cpu->r[12], 0, 0);
    }
L_001cfe14:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000003u, 0, 0);
    }
L_001cfe18:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_001cfe1c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001cfe20:;
    {
        cpu->r[5] = rd8(cpu->r[0] + + 0x2u);
    }
L_001cfe24:;
    {
        cpu->r[7] = rd8(cpu->r[0] + + 0x1u);
    }
L_001cfe28:;
    {
        uint32_t v = cpu->r[5] & 0x0000003fu; cpu->r[5] = v;
    }
L_001cfe2c:;
    {
        uint32_t v = cpu->r[7] & 0x0000003fu; cpu->r[0] = v;
    }
L_001cfe30:;
    {
        uint32_t v = cpu->r[5] | shifter(cpu->r[3], 2, 12u, &shc); cpu->r[3] = v;
    }
L_001cfe34:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[0], 2, 6u, &shc); cpu->r[3] = v;
    }
L_001cfe38:;
    {
        wr16(cpu->r[4] + - 0x2u, cpu->r[3]);
    }
L_001cfe3c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000002u, 0, 0);
    }
L_001cfe40:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001cfdfc;
        }
    }
L_001cfe44:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[4], 0x00000002u, 1, 0);
    }
L_001cfe48:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001cfe4c:;
    {
        wr16(cpu->r[0], cpu->r[3]);
    }
L_001cfe50:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001cfe54:;
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
L_001cfe58:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001cfe5c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], cpu->r[12], 0, 0);
    }
L_001cfe60:;
    {
        uint32_t v = cpu->r[3] & 0x0000001fu; cpu->r[3] = v;
    }
L_001cfe64:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000002u, 0, 0);
    }
L_001cfe68:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001cfe6c:;
    {
        cpu->r[0] = rd8(cpu->r[0] + + 0x1u);
    }
L_001cfe70:;
    {
        uint32_t v = cpu->r[0] & 0x0000003fu; cpu->r[0] = v;
    }
L_001cfe74:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[3], 2, 6u, &shc); cpu->r[3] = v;
    }
L_001cfe78:;
    {
        wr16(cpu->r[4] + - 0x2u, cpu->r[3]);
    }
L_001cfe7c:;
    {
        goto L_001cfdf0;
    }
}

/* _Z17UTF8ToUnicode_OldPtPKc @ 001cfe80 (arm) */
void fn_001cfe80(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cfe80:;
    {
        cpu->r[3] = rd8(cpu->r[1]);
    }
L_001cfe84:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001cfe88:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001cfe8c:;
    {
        uint32_t wb_tmp = cpu->r[0] + 0x00000002u;
        wr16(cpu->r[0], cpu->r[3]);
        cpu->r[0] = wb_tmp;
    }
L_001cfe90:;
    {
        uint32_t wb_tmp = cpu->r[1] + + 0x1u;
        cpu->r[3] = rd8(cpu->r[1] + + 0x1u);
        cpu->r[1] = wb_tmp;
    }
L_001cfe94:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001cfe98:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cfe8c;
        }
    }
L_001cfe9c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z24ConvertUnicodeToUTF8_OldPcPKt @ 001cfea0 (arm) */
void fn_001cfea0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001cfea0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001cfea4:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[10]);
    }
L_001cfea8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cffe0;
        }
    }
L_001cfeac:;
    {
        { uint32_t v = cpu->r[1] & 0x00000001u; set_nz(cpu, v); }
    }
L_001cfeb0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cff60;
        }
    }
L_001cfeb4:;
    {
        cpu->r[2] = rd8(cpu->r[1] + + 0x1u);
    }
L_001cfeb8:;
    {
        cpu->r[3] = rd8(cpu->r[1]);
    }
L_001cfebc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 8u, &shc), 0, 0);
    }
L_001cfec0:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_001cfec4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001cfec8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d003c;
        }
    }
L_001cfecc:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001cfed0:;
    {
        cpu->r[7] = 0x000007ffu;
    }
L_001cfed4:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000007fu, 1, 1);
    }
L_001cfed8:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t wb_tmp = cpu->r[2] + 0x00000001u;
        wr8(cpu->r[2], cpu->r[3]);
        cpu->r[2] = wb_tmp;
        }
    }
L_001cfedc:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001cff30;
        }
    }
L_001cfee0:;
    {
        cpu->r[12] = cpu->r[2];
    }
L_001cfee4:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_001cfee8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 1);
    }
L_001cfeec:;
    {
        uint32_t v = cpu->r[3] & 0x0000003fu; cpu->r[8] = v;
    }
L_001cfef0:;
    {
        cpu->r[10] = (cpu->r[3] >> 6) & 0x1fu;
    }
L_001cfef4:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 12u, &shc); cpu->r[6] = v;
    }
L_001cfef8:;
    {
        cpu->r[5] = (cpu->r[3] >> 6) & 0x3fu;
    }
L_001cfefc:;
    {
        uint32_t v = cpu->r[10] | 0x000000c0u; cpu->r[10] = v;
    }
L_001cff00:;
    {
        uint32_t v = cpu->r[8] | 0x00000080u; cpu->r[8] = v;
    }
L_001cff04:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t wb_tmp = cpu->r[4] + 0x00000001u;
        wr8(cpu->r[4], cpu->r[10]);
        cpu->r[4] = wb_tmp;
        }
    }
L_001cff08:;
    {
        uint32_t v = cpu->r[6] | 0x000000e0u; cpu->r[6] = v;
    }
L_001cff0c:;
    {
        uint32_t v = cpu->r[5] | 0x00000080u; cpu->r[5] = v;
    }
L_001cff10:;
    {
        if (cond_test(cpu, 9)) {
        uint32_t wb_tmp = cpu->r[12] + 0x00000001u;
        wr8(cpu->r[12], cpu->r[6]);
        cpu->r[12] = wb_tmp;
        }
    }
L_001cff14:;
    {
        uint32_t v = cpu->r[3] & 0x0000003fu; cpu->r[3] = v;
    }
L_001cff18:;
    {
        if (cond_test(cpu, 9)) {
        wr8(cpu->r[2] + + 0x1u, cpu->r[5]);
        }
    }
L_001cff1c:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[2] = add_flags(cpu, cpu->r[12], 0x00000002u, 0, 0);
        }
    }
L_001cff20:;
    {
        if (cond_test(cpu, 10)) {
        wr8(cpu->r[2] + + 0x1u, cpu->r[8]);
        }
    }
L_001cff24:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
        }
    }
L_001cff28:;
    {
        if (cond_test(cpu, 9)) {
        uint32_t v = cpu->r[3] | 0x00000080u; cpu->r[3] = v;
        }
    }
L_001cff2c:;
    {
        if (cond_test(cpu, 9)) {
        wr8(cpu->r[12] + + 0x1u, cpu->r[3]);
        }
    }
L_001cff30:;
    {
        cpu->r[12] = rd8(cpu->r[1] + + 0x3u);
    }
L_001cff34:;
    {
        cpu->r[3] = rd8(cpu->r[1] + + 0x2u);
    }
L_001cff38:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000002u, 0, 0);
    }
L_001cff3c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[12], 2, 8u, &shc), 0, 0);
    }
L_001cff40:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_001cff44:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001cff48:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cfed4;
        }
    }
L_001cff4c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 0);
    }
L_001cff50:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001cff54:;
    {
        wr8(cpu->r[2], cpu->r[3]);
    }
L_001cff58:;
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
        cpu->r[10] = v5;
        cpu->r[13] += 24u;
    }
L_001cff5c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001cff60:;
    {
        cpu->r[3] = rd16(cpu->r[1]);
    }
L_001cff64:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001cff68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d003c;
        }
    }
L_001cff6c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001cff70:;
    {
        cpu->r[10] = 0x000007ffu;
    }
L_001cff74:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000007fu, 1, 1);
    }
L_001cff78:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t wb_tmp = cpu->r[2] + 0x00000001u;
        wr8(cpu->r[2], cpu->r[3]);
        cpu->r[2] = wb_tmp;
        }
    }
L_001cff7c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001cffd0;
        }
    }
L_001cff80:;
    {
        cpu->r[12] = cpu->r[2];
    }
L_001cff84:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_001cff88:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_001cff8c:;
    {
        uint32_t v = cpu->r[3] & 0x0000003fu; cpu->r[7] = v;
    }
L_001cff90:;
    {
        cpu->r[8] = (cpu->r[3] >> 6) & 0x1fu;
    }
L_001cff94:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 12u, &shc); cpu->r[6] = v;
    }
L_001cff98:;
    {
        cpu->r[5] = (cpu->r[3] >> 6) & 0x3fu;
    }
L_001cff9c:;
    {
        uint32_t v = cpu->r[8] | 0x000000c0u; cpu->r[8] = v;
    }
L_001cffa0:;
    {
        uint32_t v = cpu->r[7] | 0x00000080u; cpu->r[7] = v;
    }
L_001cffa4:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t wb_tmp = cpu->r[4] + 0x00000001u;
        wr8(cpu->r[4], cpu->r[8]);
        cpu->r[4] = wb_tmp;
        }
    }
L_001cffa8:;
    {
        uint32_t v = cpu->r[6] | 0x000000e0u; cpu->r[6] = v;
    }
L_001cffac:;
    {
        uint32_t v = cpu->r[5] | 0x00000080u; cpu->r[5] = v;
    }
L_001cffb0:;
    {
        if (cond_test(cpu, 9)) {
        uint32_t wb_tmp = cpu->r[12] + 0x00000001u;
        wr8(cpu->r[12], cpu->r[6]);
        cpu->r[12] = wb_tmp;
        }
    }
L_001cffb4:;
    {
        uint32_t v = cpu->r[3] & 0x0000003fu; cpu->r[3] = v;
    }
L_001cffb8:;
    {
        if (cond_test(cpu, 9)) {
        wr8(cpu->r[2] + + 0x1u, cpu->r[5]);
        }
    }
L_001cffbc:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[2] = add_flags(cpu, cpu->r[12], 0x00000002u, 0, 0);
        }
    }
L_001cffc0:;
    {
        if (cond_test(cpu, 10)) {
        wr8(cpu->r[2] + + 0x1u, cpu->r[7]);
        }
    }
L_001cffc4:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
        }
    }
L_001cffc8:;
    {
        if (cond_test(cpu, 9)) {
        uint32_t v = cpu->r[3] | 0x00000080u; cpu->r[3] = v;
        }
    }
L_001cffcc:;
    {
        if (cond_test(cpu, 9)) {
        wr8(cpu->r[12] + + 0x1u, cpu->r[3]);
        }
    }
L_001cffd0:;
    {
        uint32_t wb_tmp = cpu->r[1] + + 0x2u;
        cpu->r[3] = rd16(cpu->r[1] + + 0x2u);
        cpu->r[1] = wb_tmp;
    }
L_001cffd4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001cffd8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001cff74;
        }
    }
L_001cffdc:;
    {
        goto L_001cff4c;
    }
L_001cffe0:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001cffe4:;
    {
        cpu->r[12] = 0x000007ffu;
    }
L_001cffe8:;
    {
        cpu->r[2] = rd8(cpu->r[1] + + 0x1u);
    }
L_001cffec:;
    {
        cpu->r[3] = rd8(cpu->r[1]);
    }
L_001cfff0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000002u, 0, 0);
    }
L_001cfff4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 8u, &shc), 0, 0);
    }
L_001cfff8:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_001cfffc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d0000:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001cff58;
        }
    }
L_001d0004:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000007fu, 1, 1);
    }
L_001d0008:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
        }
    }
L_001d000c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001cffe8;
        }
    }
L_001d0010:;
    {
        cpu->r[2] = rd8(cpu->r[1] + + 0x1u);
    }
L_001d0014:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_001d0018:;
    {
        cpu->r[3] = rd8(cpu->r[1]);
    }
L_001d001c:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
        }
    }
L_001d0020:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000003u, 0, 0);
        }
    }
L_001d0024:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000002u, 0, 0);
    }
L_001d0028:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 8u, &shc), 0, 0);
    }
L_001d002c:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_001d0030:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d0034:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d0004;
        }
    }
L_001d0038:;
    {
        goto L_001cff58;
    }
L_001d003c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001d0040:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001d0044:;
    {
        goto L_001cff50;
    }
}

/* XP_API_PARSE_DATA @ 001d0048 (arm) */
void fn_001d0048(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d0048:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
    }
L_001d004c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001d0050:;
    {
        cpu->r[12] = cpu->r[4];
    }
L_001d0054:;
    {
        wr8(cpu->r[1], cpu->r[4]);
    }
L_001d0058:;
    {
        cpu->r[7] = cpu->r[4];
    }
L_001d005c:;
    {
        cpu->r[8] = cpu->r[4];
    }
L_001d0060:;
    {
        cpu->r[4] = rd8(cpu->r[0] + cpu->r[12]);
    }
L_001d0064:;
    {
        cpu->r[6] = (~0x00000000u);
    }
L_001d0068:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001d006c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d00ac;
        }
    }
L_001d0070:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_001d0074:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
        }
    }
L_001d0078:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d009c;
        }
    }
L_001d007c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001d0080:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001d0084:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d00b8;
        }
    }
L_001d0088:;
    {
        add_flags(cpu, cpu->r[6], 0x00000001u, 0, 1);
    }
L_001d008c:;
    {
        uint32_t wb_tmp = cpu->r[5] + cpu->r[7];
        wr8(cpu->r[5] + cpu->r[7], cpu->r[4]);
        cpu->r[5] = wb_tmp;
    }
L_001d0090:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = cpu->r[12];
        }
    }
L_001d0094:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001d0098:;
    {
        wr8(cpu->r[5] + + 0x1u, cpu->r[8]);
    }
L_001d009c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_001d00a0:;
    {
        cpu->r[4] = rd8(cpu->r[0] + cpu->r[12]);
    }
L_001d00a4:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001d00a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d0070;
        }
    }
L_001d00ac:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001d00b0:;
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
L_001d00b4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001d00b8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001d00ac;
        }
    }
L_001d00bc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_001d00c0:;
    {
        goto L_001d00a0;
    }
}

/* _Z30SSEncDec_GetCharFromKeyByIndexi @ 001d00c4 (arm) */
void fn_001d00c4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d00c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000019u, 1, 1);
    }
L_001d00c8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000061u, 0, 0);
        }
    }
L_001d00cc:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
        }
    }
L_001d00d0:;
    {
        if (cond_test(cpu, 14)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d00d4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000033u, 1, 1);
    }
L_001d00d8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000027u, 0, 0);
        }
    }
L_001d00dc:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
        }
    }
L_001d00e0:;
    {
        if (cond_test(cpu, 14)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d00e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x0000003du, 1, 1);
    }
L_001d00e8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000004u, 1, 0);
        }
    }
L_001d00ec:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
        }
    }
L_001d00f0:;
    {
        if (cond_test(cpu, 14)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d00f4:;
    {
        sub_flags(cpu, cpu->r[0], 0x0000003eu, 1, 1);
    }
L_001d00f8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x0000005fu;
        }
    }
L_001d00fc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x0000002du;
        }
    }
L_001d0100:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z23SSEncDec_GetKeyFromCharc @ 001d0104 (arm) */
void fn_001d0104(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d0104:;
    {
        sub_flags(cpu, cpu->r[0], 0x0000002du, 1, 1);
    }
L_001d0108:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x0000003fu;
        }
    }
L_001d010c:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d0110:;
    {
        sub_flags(cpu, cpu->r[0], 0x0000005fu, 1, 1);
    }
L_001d0114:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x0000003eu;
        }
    }
L_001d0118:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d011c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000039u, 1, 1);
    }
L_001d0120:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
        }
    }
L_001d0124:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
        }
    }
L_001d0128:;
    {
        if (cond_test(cpu, 10)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001d012c:;
    {
        sub_flags(cpu, cpu->r[0], 0x0000005au, 1, 1);
    }
L_001d0130:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000027u, 1, 0);
        }
    }
L_001d0134:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000061u, 1, 0);
        }
    }
L_001d0138:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
        }
    }
L_001d013c:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
        }
    }
L_001d0140:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z21XP_API_GetNationalityPc @ 001d0144 (arm) */
void fn_001d0144(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d0144:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* getValue @ 001d0148 (arm) */
void fn_001d0148(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d0148:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
    }
L_001d014c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001d0150:;
    {
        cpu->r[12] = cpu->r[4];
    }
L_001d0154:;
    {
        wr8(cpu->r[1], cpu->r[4]);
    }
L_001d0158:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_001d015c:;
    {
        cpu->r[4] = rd8(cpu->r[0] + cpu->r[12]);
    }
L_001d0160:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001d0164:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d01a0;
        }
    }
L_001d0168:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_001d016c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
        }
    }
L_001d0170:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d0190;
        }
    }
L_001d0174:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001d0178:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001d017c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[5] + cpu->r[6];
        wr8(cpu->r[5] + cpu->r[6], cpu->r[4]);
        cpu->r[5] = wb_tmp;
        }
    }
L_001d0180:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
        }
    }
L_001d0184:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[5] + + 0x1u, cpu->r[2]);
        }
    }
L_001d0188:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d0190;
        }
    }
L_001d018c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001d01a0;
        }
    }
L_001d0190:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_001d0194:;
    {
        cpu->r[4] = rd8(cpu->r[0] + cpu->r[12]);
    }
L_001d0198:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001d019c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d0168;
        }
    }
L_001d01a0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001d01a4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[13] += 12u;
    }
L_001d01a8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z14XP_API_TOLOWERPKcPc @ 001d01ac (arm) */
void fn_001d01ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d01ac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d01b0:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
        }
    }
L_001d01b4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
    }
L_001d01b8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_001d01bc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = 0x00000001u;
        }
    }
L_001d01c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d020c;
        }
    }
L_001d01c4:;
    {
        cpu->r[3] = rd8(cpu->r[0]);
    }
L_001d01c8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d01cc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = cpu->r[3];
        }
    }
L_001d01d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d0204;
        }
    }
L_001d01d4:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_001d01d8:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[3], 0x00000041u, 1, 0);
    }
L_001d01dc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001d01e0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], 0x00000020u, 0, 0);
    }
L_001d01e4:;
    {
        cpu->r[4] = (uint32_t)((uint8_t)cpu->r[4]);
    }
L_001d01e8:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000019u, 1, 1);
    }
L_001d01ec:;
    {
        if (cond_test(cpu, 10)) {
        wr8(cpu->r[1] + cpu->r[12], cpu->r[5]);
        }
    }
L_001d01f0:;
    {
        if (cond_test(cpu, 9)) {
        wr8(cpu->r[1] + cpu->r[12], cpu->r[3]);
        }
    }
L_001d01f4:;
    {
        cpu->r[12] = cpu->r[2];
    }
L_001d01f8:;
    {
        cpu->r[3] = rd8(cpu->r[0] + cpu->r[2]);
    }
L_001d01fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d0200:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d01d8;
        }
    }
L_001d0204:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d0208:;
    {
        wr8(cpu->r[1] + cpu->r[12], cpu->r[3]);
    }
L_001d020c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[13] += 8u;
    }
L_001d0210:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z26XP_DEBUG_SAVE_RECVDATA_LOGPKci @ 001d0214 (arm) */
void fn_001d0214(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d0214:;
    {
        cpu->r[3] = rd32(0x001d021cu + + 0x18u);
    }
L_001d0218:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001d021c:;
    {
        cpu->r[12] = rd32(0x001d0224u + + 0x14u);
    }
L_001d0220:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001d0224:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d022cu, cpu->r[3], 0, 0);
    }
L_001d0228:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_001d022c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d0230:;
    {
        imp_fwrite(cpu); /* tail fwrite */ return;
    }
}

/* _Z26XP_DEBUG_SAVE_SENDDATA_LOGPKci @ 001d023c (arm) */
void fn_001d023c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d023c:;
    {
        cpu->r[3] = rd32(0x001d0244u + + 0x18u);
    }
L_001d0240:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001d0244:;
    {
        cpu->r[12] = rd32(0x001d024cu + + 0x14u);
    }
L_001d0248:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001d024c:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d0254u, cpu->r[3], 0, 0);
    }
L_001d0250:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_001d0254:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d0258:;
    {
        imp_fwrite(cpu); /* tail fwrite */ return;
    }
}

/* XP_API_FILE_WRITE @ 001d0264 (arm) */
void fn_001d0264(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d0264:;
    {
        cpu->r[12] = rd32(0x001d026cu + + 0x1cu);
    }
L_001d0268:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_001d026c:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_001d0270:;
    {
        cpu->r[4] = rd32(0x001d0278u + + 0x14u);
    }
L_001d0274:;
    {
        cpu->r[12] = add_flags(cpu, 0x001d027cu, cpu->r[12], 0, 0);
    }
L_001d0278:;
    {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[4]);
    }
L_001d027c:;
    {
        cpu->r[3] = rd32(cpu->r[12] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_001d0280:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_001d0284:;
    {
        imp_fwrite(cpu); /* tail fwrite */ return;
    }
}

/* _Z27XP_DEBUG_CLOSE_RECVDATA_LOGv @ 001d0290 (arm) */
void fn_001d0290(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d0290:;
    {
        cpu->r[3] = rd32(0x001d0298u + + 0x10u);
    }
L_001d0294:;
    {
        cpu->r[2] = rd32(0x001d029cu + + 0x10u);
    }
L_001d0298:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d02a0u, cpu->r[3], 0, 0);
    }
L_001d029c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d02a0:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d02a4:;
    {
        imp_fclose(cpu); /* tail fclose */ return;
    }
}

/* _Z27XP_DEBUG_CLOSE_SENDDATA_LOGv @ 001d02b0 (arm) */
void fn_001d02b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d02b0:;
    {
        cpu->r[3] = rd32(0x001d02b8u + + 0x10u);
    }
L_001d02b4:;
    {
        cpu->r[2] = rd32(0x001d02bcu + + 0x10u);
    }
L_001d02b8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d02c0u, cpu->r[3], 0, 0);
    }
L_001d02bc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d02c0:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d02c4:;
    {
        imp_fclose(cpu); /* tail fclose */ return;
    }
}

/* XP_API_FILE_CLOSE @ 001d02d0 (arm) */
void fn_001d02d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d02d0:;
    {
        cpu->r[3] = rd32(0x001d02d8u + + 0x2cu);
    }
L_001d02d4:;
    {
        cpu->r[2] = rd32(0x001d02dcu + + 0x2cu);
    }
L_001d02d8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d02e0u, cpu->r[3], 0, 0);
    }
L_001d02dc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001d02e0:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d02e4:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_001d02e8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001d02ec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d02f0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d02f4u)) return;
        }
    }
L_001d02f4:;
    {
        cpu->r[14] = 0x001d02f8u; imp_fclose(cpu); /* fclose */
    }
L_001d02f8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d02fc:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[3]);
    }
L_001d0300:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d0304u)) return;
    }
}

/* _Z26XP_DEBUG_OPEN_RECVDATA_LOGv @ 001d030c (arm) */
void fn_001d030c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d030c:;
    {
        cpu->r[0] = rd32(0x001d0314u + + 0x28u);
    }
L_001d0310:;
    {
        cpu->r[1] = rd32(0x001d0318u + + 0x28u);
    }
L_001d0314:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d0318:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d0320u, cpu->r[0], 0, 0);
    }
L_001d031c:;
    {
        cpu->r[1] = add_flags(cpu, 0x001d0324u, cpu->r[1], 0, 0);
    }
L_001d0320:;
    {
        cpu->r[4] = rd32(0x001d0328u + + 0x1cu);
    }
L_001d0324:;
    {
        cpu->r[14] = 0x001d0328u; imp_fopen(cpu); /* fopen */
    }
L_001d0328:;
    {
        cpu->r[3] = rd32(0x001d0330u + + 0x18u);
    }
L_001d032c:;
    {
        cpu->r[4] = add_flags(cpu, 0x001d0334u, cpu->r[4], 0, 0);
    }
L_001d0330:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001d0334:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_001d0338:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d033cu)) return;
    }
}

/* _Z26XP_DEBUG_OPEN_SENDDATA_LOGv @ 001d034c (arm) */
void fn_001d034c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d034c:;
    {
        cpu->r[0] = rd32(0x001d0354u + + 0x28u);
    }
L_001d0350:;
    {
        cpu->r[1] = rd32(0x001d0358u + + 0x28u);
    }
L_001d0354:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d0358:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d0360u, cpu->r[0], 0, 0);
    }
L_001d035c:;
    {
        cpu->r[1] = add_flags(cpu, 0x001d0364u, cpu->r[1], 0, 0);
    }
L_001d0360:;
    {
        cpu->r[4] = rd32(0x001d0368u + + 0x1cu);
    }
L_001d0364:;
    {
        cpu->r[14] = 0x001d0368u; imp_fopen(cpu); /* fopen */
    }
L_001d0368:;
    {
        cpu->r[3] = rd32(0x001d0370u + + 0x18u);
    }
L_001d036c:;
    {
        cpu->r[4] = add_flags(cpu, 0x001d0374u, cpu->r[4], 0, 0);
    }
L_001d0370:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001d0374:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_001d0378:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d037cu)) return;
    }
}

/* XP_API_FILE_OPEN @ 001d038c (arm) */
void fn_001d038c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d038c:;
    {
        cpu->r[3] = rd32(0x001d0394u + + 0x50u);
    }
L_001d0390:;
    {
        cpu->r[2] = rd32(0x001d0398u + + 0x50u);
    }
L_001d0394:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d039cu, cpu->r[3], 0, 0);
    }
L_001d0398:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001d039c:;
    {
        cpu->r[5] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d03a0:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001d03a4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001d03a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d03ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d03c4;
        }
    }
L_001d03b0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001d03b4:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000008u, 1, 1);
    }
L_001d03b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d03a4;
        }
    }
L_001d03bc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001d03c0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d03c4u)) return;
    }
L_001d03c4:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000008u, 1, 1);
    }
L_001d03c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d03bc;
        }
    }
L_001d03cc:;
    {
        cpu->r[14] = 0x001d03d0u; imp_fopen(cpu); /* fopen */
    }
L_001d03d0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d03d4:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[5] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[0]);
        }
    }
L_001d03d8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
        }
    }
L_001d03dc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d03e0u)) return;
        }
    }
L_001d03e0:;
    {
        goto L_001d03bc;
    }
}

/* XP_API_IP_INT2STR @ 001d03ec (arm) */
void fn_001d03ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d03ec:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d03f0:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_001d03f4:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001d03f8:;
    {
        cpu->r[1] = rd32(0x001d0400u + + 0x30u);
    }
L_001d03fc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001d0400:;
    {
        cpu->r[3] = (cpu->r[0] >> 8) & 0xffu;
    }
L_001d0404:;
    {
        cpu->r[2] = (uint32_t)((uint8_t)cpu->r[12]);
    }
L_001d0408:;
    {
        cpu->r[1] = add_flags(cpu, 0x001d0410u, cpu->r[1], 0, 0);
    }
L_001d040c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d0410:;
    {
        cpu->r[14] = (cpu->r[12] >> 16) & 0xffu;
    }
L_001d0414:;
    {
        uint32_t v = shifter(cpu->r[12], 3, 24u, &shc); cpu->r[12] = v;
    }
L_001d0418:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_001d041c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001d0420:;
    {
        cpu->r[14] = 0x001d0424u; imp_sprintf(cpu); /* sprintf */
    }
L_001d0424:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d0428:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001d042c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d0430u)) return;
    }
}

/* XP_API_STRLEN @ 001d0434 (arm) */
void fn_001d0434(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d0434:;
    {
        imp_strlen(cpu); /* tail strlen */ return;
    }
}

/* XP_API_GET_RANDOM @ 001d0438 (arm) */
void fn_001d0438(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d0438:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001d043c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001d0440:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001d0444:;
    {
        cpu->r[14] = 0x001d0448u; imp_time(cpu); /* time */
    }
L_001d0448:;
    {
        cpu->r[14] = 0x001d044cu; imp_srand48(cpu); /* srand48 */
    }
L_001d044c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001d0450:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d048c;
        }
    }
L_001d0454:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d0458:;
    {
        cpu->r[14] = 0x001d045cu; fn_001d0434(cpu);
    }
L_001d045c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d0460:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d048c;
        }
    }
L_001d0464:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001d0468:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_001d046c:;
    {
        cpu->r[2] = rd8(cpu->r[5] + cpu->r[3]);
    }
L_001d0470:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001d0474:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001d0478:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[2], 0, 0);
    }
L_001d047c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d046c;
        }
    }
L_001d0480:;
    {
        cpu->r[14] = 0x001d0484u; imp_lrand48(cpu); /* lrand48 */
    }
L_001d0484:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[4], 0, 0);
    }
L_001d0488:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d048cu)) return;
    }
L_001d048c:;
    {
        cpu->r[14] = 0x001d0490u; imp_lrand48(cpu); /* lrand48 */
    }
L_001d0490:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001d0494:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[4], 0, 0);
    }
L_001d0498:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d049cu)) return;
    }
}

/* XP_API_STRTRIM @ 001d049c (arm) */
void fn_001d049c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d049c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001d04a0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d04a4:;
    {
        cpu->r[14] = 0x001d04a8u; fn_001d0434(cpu);
    }
L_001d04a8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d04ac:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001d04b0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d04f0;
        }
    }
L_001d04b4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d04b8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001d04bc:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001d04c0:;
    {
        cpu->r[5] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_001d04c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001d04c8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000020u, 1, 1);
    }
L_001d04cc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_001d04d0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[1] & 0x00000001u; cpu->r[12] = v;
        }
    }
L_001d04d4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001d04d8:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001d04dc:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[4] + cpu->r[2], cpu->r[5]);
        }
    }
L_001d04e0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = cpu->r[12];
        }
    }
L_001d04e4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
        }
    }
L_001d04e8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001d04ec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d04c0;
        }
    }
L_001d04f0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d04f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d04f8:;
    {
        wr8(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_001d04fc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d0500u)) return;
    }
}

/* _Z23SSEncDec_Blob2ByteArrayPPhPc @ 001d0500 (arm) */
void fn_001d0500(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d0500:;
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
L_001d0504:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_001d0508:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001d050c:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001d0510:;
    {
        cpu->r[14] = 0x001d0514u; imp_strlen(cpu); /* strlen */
    }
L_001d0514:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_001d0518:;
    {
        cpu->r[10] = (cpu->r[0] >> 2) & 0x1fffffffu;
    }
L_001d051c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_001d0520:;
    {
        cpu->r[14] = 0x001d0524u; imp__Znaj(cpu); /* _Znaj */
    }
L_001d0524:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d0528:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001d052c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001d0530:;
    {
        wr8(cpu->r[6] + cpu->r[3], cpu->r[2]);
    }
L_001d0534:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001d0538:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_001d053c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001d0530;
        }
    }
L_001d0540:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001d0544:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001d0548:;
    {
        cpu->r[14] = 0x001d054cu; fn_001d0434(cpu);
    }
L_001d054c:;
    {
        cpu->r[4] = cpu->r[7];
    }
L_001d0550:;
    {
        cpu->r[5] = 0x00000008u;
    }
L_001d0554:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[10], 0x00000001u, 1, 0);
    }
L_001d0558:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[0], 1, 1);
    }
L_001d055c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001d05b0;
        }
    }
L_001d0560:;
    {
        cpu->r[0] = rd8(cpu->r[8] + cpu->r[4]);
    }
L_001d0564:;
    {
        cpu->r[14] = 0x001d0568u; fn_001d0104(cpu);
    }
L_001d0568:;
    {
        cpu->r[3] = rd8(cpu->r[6] + cpu->r[7]);
    }
L_001d056c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000006u, 1, 1);
    }
L_001d0570:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000008u, cpu->r[5], 1, 0);
    }
L_001d0574:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000006u, 1, 0);
        }
    }
L_001d0578:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[0], 2, (cpu->r[2] & 0xffu), &shc); cpu->r[3] = v;
    }
L_001d057c:;
    {
        wr8(cpu->r[6] + cpu->r[7], cpu->r[3]);
    }
L_001d0580:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001d059c;
        }
    }
L_001d0584:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[9], 1, 1);
    }
L_001d0588:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
        }
    }
L_001d058c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd8(cpu->r[6] + cpu->r[7]);
        }
    }
L_001d0590:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = cpu->r[3] | shifter(cpu->r[0], 1, (cpu->r[5] & 0xffu), &shc); cpu->r[0] = v;
        }
    }
L_001d0594:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000002u, 0, 0);
        }
    }
L_001d0598:;
    {
        if (cond_test(cpu, 12)) {
        wr8(cpu->r[6] + cpu->r[7], cpu->r[0]);
        }
    }
L_001d059c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001d05a0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001d05a4:;
    {
        cpu->r[14] = 0x001d05a8u; fn_001d0434(cpu);
    }
L_001d05a8:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[0], 1, 1);
    }
L_001d05ac:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001d0560;
        }
    }
L_001d05b0:;
    {
        wr32(cpu->r[11], cpu->r[6]);
    }
L_001d05b4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001d05b8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d05bcu)) return;
    }
}

/* XP_API_GET_TIME @ 001d05bc (arm) */
void fn_001d05bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d05bc:;
    {
        return fn_0009b4d0(cpu);
    }
}

/* XP_API_FILE_GET_LENGTH @ 001d05c0 (arm) */
void fn_001d05c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d05c0:;
    {
        cpu->r[3] = rd32(0x001d05c8u + + 0x60u);
    }
L_001d05c4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d05c8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001d05cc:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_001d05d0:;
    {
        cpu->r[0] = rd32(0x001d05d8u + + 0x54u);
    }
L_001d05d4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d05dcu, cpu->r[3], 0, 0);
    }
L_001d05d8:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001d05dc:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_001d05e0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001d05e4:;
    {
        cpu->r[14] = 0x001d05e8u; imp_fseek(cpu); /* fseek */
    }
L_001d05e8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001d05ec:;
    {
        cpu->r[14] = 0x001d05f0u; imp_ftell(cpu); /* ftell */
    }
L_001d05f0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d05f4:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001d05f8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001d05fc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001d0600:;
    {
        cpu->r[14] = 0x001d0604u; imp_fseek(cpu); /* fseek */
    }
L_001d0604:;
    {
        cpu->r[0] = rd32(cpu->r[4] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001d0608:;
    {
        cpu->r[14] = 0x001d060cu; imp_ftell(cpu); /* ftell */
    }
L_001d060c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d0610:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_001d0614:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001d0618:;
    {
        cpu->r[0] = rd32(cpu->r[4] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001d061c:;
    {
        cpu->r[14] = 0x001d0620u; imp_fseek(cpu); /* fseek */
    }
L_001d0620:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 0);
    }
L_001d0624:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d0628u)) return;
    }
}

/* XP_API_FILE_WRITE_STRING @ 001d0630 (arm) */
void fn_001d0630(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d0630:;
    {
        cpu->r[3] = rd32(0x001d0638u + + 0x20u);
    }
L_001d0634:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_001d0638:;
    {
        cpu->r[1] = rd32(0x001d0640u + + 0x1cu);
    }
L_001d063c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001d0640:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d0648u, cpu->r[3], 0, 0);
    }
L_001d0644:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001d0648:;
    {
        cpu->r[1] = rd32(0x001d0650u + + 0x10u);
    }
L_001d064c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_001d0650:;
    {
        cpu->r[1] = add_flags(cpu, 0x001d0658u, cpu->r[1], 0, 0);
    }
L_001d0654:;
    {
        imp_fprintf(cpu); /* tail fprintf */ return;
    }
}

/* XP_API_FILE_READ_STRING @ 001d0664 (arm) */
void fn_001d0664(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d0664:;
    {
        cpu->r[3] = rd32(0x001d066cu + + 0x20u);
    }
L_001d0668:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_001d066c:;
    {
        cpu->r[1] = rd32(0x001d0674u + + 0x1cu);
    }
L_001d0670:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001d0674:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d067cu, cpu->r[3], 0, 0);
    }
L_001d0678:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001d067c:;
    {
        cpu->r[1] = rd32(0x001d0684u + + 0x10u);
    }
L_001d0680:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_001d0684:;
    {
        cpu->r[1] = add_flags(cpu, 0x001d068cu, cpu->r[1], 0, 0);
    }
L_001d0688:;
    {
        imp_fscanf(cpu); /* tail fscanf */ return;
    }
}

/* XP_API_FILE_READ @ 001d0698 (arm) */
void fn_001d0698(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d0698:;
    {
        cpu->r[12] = rd32(0x001d06a0u + + 0x1cu);
    }
L_001d069c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_001d06a0:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_001d06a4:;
    {
        cpu->r[4] = rd32(0x001d06acu + + 0x14u);
    }
L_001d06a8:;
    {
        cpu->r[12] = add_flags(cpu, 0x001d06b0u, cpu->r[12], 0, 0);
    }
L_001d06ac:;
    {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[4]);
    }
L_001d06b0:;
    {
        cpu->r[3] = rd32(cpu->r[12] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_001d06b4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_001d06b8:;
    {
        imp_fread(cpu); /* tail fread */ return;
    }
}

/* XP_API_ATOF @ 001d06c4 (arm) */
void fn_001d06c4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d06c4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d06c8:;
    {
        imp_strtod(cpu); /* tail strtod */ return;
    }
}

/* XP_API_ATOI @ 001d06cc (arm) */
void fn_001d06cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d06cc:;
    {
        imp_atoi(cpu); /* tail atoi */ return;
    }
}

/* XP_API_STRSTR @ 001d06d0 (arm) */
void fn_001d06d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d06d0:;
    {
        imp_strstr(cpu); /* tail strstr */ return;
    }
}

/* XP_API_STRCAT @ 001d06d4 (arm) */
void fn_001d06d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d06d4:;
    {
        imp_strcat(cpu); /* tail strcat */ return;
    }
}

/* XP_API_STRNCPY @ 001d06d8 (arm) */
void fn_001d06d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d06d8:;
    {
        imp_strncpy(cpu); /* tail strncpy */ return;
    }
}

/* XP_API_STRCPY @ 001d06dc (arm) */
void fn_001d06dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d06dc:;
    {
        imp_strcpy(cpu); /* tail strcpy */ return;
    }
}

/* XP_API_STRNCMP @ 001d06e0 (arm) */
void fn_001d06e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d06e0:;
    {
        imp_strncmp(cpu); /* tail strncmp */ return;
    }
}

/* XP_API_STRICMP @ 001d06e4 (arm) */
void fn_001d06e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d06e4:;
    {
        imp_strcasecmp(cpu); /* tail strcasecmp */ return;
    }
}

/* XP_API_STRCMP @ 001d06e8 (arm) */
void fn_001d06e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d06e8:;
    {
        imp_strcmp(cpu); /* tail strcmp */ return;
    }
}

/* XP_API_MEMCPY @ 001d06ec (arm) */
void fn_001d06ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d06ec:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d06f0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d06f4:;
    {
        cpu->r[14] = 0x001d06f8u; imp_memcpy(cpu); /* memcpy */
    }
L_001d06f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d06fc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d0700u)) return;
    }
}

/* XP_API_MEMSET @ 001d0700 (arm) */
void fn_001d0700(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d0700:;
    {
        imp_memset(cpu); /* tail memset */ return;
    }
}

/* XP_API_IP_STR2INT @ 001d0704 (arm) */
void fn_001d0704(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d0704:;
    {
        cpu->r[1] = rd32(0x001d070cu + + 0x118u);
    }
L_001d0708:;
    {
        cpu->r[2] = rd32(0x001d0710u + + 0x118u);
    }
L_001d070c:;
    {
        cpu->r[1] = add_flags(cpu, 0x001d0714u, cpu->r[1], 0, 0);
    }
L_001d0710:;
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
L_001d0714:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_001d0718:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_001d071c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001d0720:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001d0724:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001d0728:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d072c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_001d0730:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_001d0734:;
    {
        cpu->r[10] = cpu->r[5];
    }
L_001d0738:;
    {
        cpu->r[2] = rd32(0x001d0740u + + 0xecu);
    }
L_001d073c:;
    {
        cpu->r[4] = cpu->r[5];
    }
L_001d0740:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_001d0744:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_001d0748:;
    {
        cpu->r[2] = add_flags(cpu, 0x001d0750u, cpu->r[2], 0, 0);
    }
L_001d074c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[11], 0x00000004u, 0, 0);
    }
L_001d0750:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[1]);
        wr32(ea + 4u, cpu->r[2]);
    }
L_001d0754:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_001d0758:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_001d075c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001d0760:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_001d0764:;
    {
        wr32(cpu->r[9], cpu->r[4]);
    }
L_001d0768:;
    {
        wr32(cpu->r[11], cpu->r[4]);
    }
L_001d076c:;
    {
        wr32(cpu->r[2], cpu->r[4]);
    }
L_001d0770:;
    {
        wr32(cpu->r[6], cpu->r[4]);
    }
L_001d0774:;
    {
        cpu->r[14] = 0x001d0778u; fn_001d06d0(cpu);
    }
L_001d0778:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d077c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d07c8;
        }
    }
L_001d0780:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_001d0784:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001d0788:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001d078c:;
    {
        cpu->r[14] = 0x001d0790u; fn_001d0700(cpu);
    }
L_001d0790:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001d0794:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[8], cpu->r[7], 1, 0);
    }
L_001d0798:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001d079c:;
    {
        cpu->r[14] = 0x001d07a0u; fn_001d06ec(cpu);
    }
L_001d07a0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001d07a4:;
    {
        cpu->r[14] = 0x001d07a8u; fn_001d06cc(cpu);
    }
L_001d07a8:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 3u, &shc); cpu->r[3] = v;
    }
L_001d07ac:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001d07b0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 1);
    }
L_001d07b4:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_001d07b8:;
    {
        uint32_t v = cpu->r[10] | shifter(cpu->r[0], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[10] = v;
    }
L_001d07bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d07f8;
        }
    }
L_001d07c0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_001d07c4:;
    {
        goto L_001d0758;
    }
L_001d07c8:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_001d07cc:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001d07d0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001d07d4:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 3u, &shc); cpu->r[5] = v;
    }
L_001d07d8:;
    {
        cpu->r[14] = 0x001d07dcu; fn_001d0700(cpu);
    }
L_001d07dc:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001d07e0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001d07e4:;
    {
        cpu->r[14] = 0x001d07e8u; fn_001d06dc(cpu);
    }
L_001d07e8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001d07ec:;
    {
        cpu->r[14] = 0x001d07f0u; fn_001d06cc(cpu);
    }
L_001d07f0:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_001d07f4:;
    {
        uint32_t v = cpu->r[10] | shifter(cpu->r[0], 2, (cpu->r[5] & 0xffu), &shc); cpu->r[10] = v;
    }
L_001d07f8:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_001d07fc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001d0800:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001d0804:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_001d0808:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_001d080c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d0810:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001d0814:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d0820;
        }
    }
L_001d0818:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_001d081c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d0820u)) return;
    }
L_001d0820:;
    {
        cpu->r[14] = 0x001d0824u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001d0824:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[4], 2, 26u, &shc); cpu->r[9] = v;
        }
    }
L_001d0828:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001d082c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] & shifter(cpu->r[4], 1, 10u, &shc); cpu->r[1] = v;
        }
    }
}

/* _Z23SSEncDec_ByteArray2BlobPhi @ 001d0830 (arm) */
void fn_001d0830(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d0830:;
    {
        cpu->r[3] = 0x0000aaabu;
    }
L_001d0834:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 3u, &shc); cpu->r[2] = v;
    }
L_001d0838:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x2aaau << 16);
    }
L_001d083c:;
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
L_001d0840:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001d0844:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[2]; cpu->r[1] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_001d0848:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d084c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[2], 1, 31u, &shc), 1, 1);
    }
L_001d0850:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[7] = add_flags(cpu, cpu->r[3], 0x00000003u, 0, 0);
        }
    }
L_001d0854:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000002u;
        }
    }
L_001d0858:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = cpu->r[7];
        }
    }
L_001d085c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = cpu->r[0];
        }
    }
L_001d0860:;
    {
        cpu->r[14] = 0x001d0864u; imp__Znaj(cpu); /* _Znaj */
    }
L_001d0864:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001d0868:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d086c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001d0870:;
    {
        cpu->r[14] = 0x001d0874u; fn_001d0700(cpu);
    }
L_001d0874:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001d0878:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d0914;
        }
    }
L_001d087c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001d0880:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[10] = 0x00000000u;
        }
    }
L_001d0884:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[7] = 0x00000008u;
        }
    }
L_001d0888:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[8] = cpu->r[10];
        }
    }
L_001d088c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d0914;
        }
    }
L_001d0890:;
    {
        cpu->r[0] = rd8(cpu->r[4] + cpu->r[8]);
    }
L_001d0894:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000005u, 1, 1);
    }
L_001d0898:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000008u, cpu->r[7], 1, 0);
    }
L_001d089c:;
    {
        uint32_t v = shifter(cpu->r[0], 1, (cpu->r[3] & 0xffu), &shc); cpu->r[0] = v;
    }
L_001d08a0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001d08e0;
        }
    }
L_001d08a4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_001d08a8:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[8], 1, 1);
    }
L_001d08ac:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d0908;
        }
    }
L_001d08b0:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[8]);
    }
L_001d08b4:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[3], 2, (cpu->r[7] & 0xffu), &shc); cpu->r[0] = v;
    }
L_001d08b8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000002u, 0, 0);
    }
L_001d08bc:;
    {
        uint32_t v = cpu->r[0] & 0x0000003fu; cpu->r[0] = v;
    }
L_001d08c0:;
    {
        cpu->r[14] = 0x001d08c4u; fn_001d00c4(cpu);
    }
L_001d08c4:;
    {
        wr8(cpu->r[5] + cpu->r[10], cpu->r[0]);
    }
L_001d08c8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_001d08cc:;
    {
        cpu->r[0] = rd8(cpu->r[4] + cpu->r[8]);
    }
L_001d08d0:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000005u, 1, 1);
    }
L_001d08d4:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000008u, cpu->r[7], 1, 0);
    }
L_001d08d8:;
    {
        uint32_t v = shifter(cpu->r[0], 1, (cpu->r[3] & 0xffu), &shc); cpu->r[0] = v;
    }
L_001d08dc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d08a4;
        }
    }
L_001d08e0:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000006u, 1, 1);
    }
L_001d08e4:;
    {
        uint32_t v = cpu->r[0] & 0x0000003fu; cpu->r[0] = v;
    }
L_001d08e8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
        }
    }
L_001d08ec:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = 0x00000008u;
        }
    }
L_001d08f0:;
    {
        cpu->r[14] = 0x001d08f4u; fn_001d00c4(cpu);
    }
L_001d08f4:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[6], 1, 1);
    }
L_001d08f8:;
    {
        wr8(cpu->r[5] + cpu->r[10], cpu->r[0]);
    }
L_001d08fc:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001d0914;
        }
    }
L_001d0900:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_001d0904:;
    {
        goto L_001d08cc;
    }
L_001d0908:;
    {
        uint32_t v = cpu->r[0] & 0x0000003fu; cpu->r[0] = v;
    }
L_001d090c:;
    {
        cpu->r[14] = 0x001d0910u; fn_001d00c4(cpu);
    }
L_001d0910:;
    {
        wr8(cpu->r[5] + cpu->r[10], cpu->r[0]);
    }
L_001d0914:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d0918:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d091cu)) return;
    }
}

/* _Z20SSEncDec_String2BlobPc @ 001d091c (arm) */
void fn_001d091c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d091c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d0920:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d0924:;
    {
        cpu->r[14] = 0x001d0928u; imp_strlen(cpu); /* strlen */
    }
L_001d0928:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001d092c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d0930:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_001d0934:;
    {
        return fn_001d0830(cpu);
    }
}

/* _Z20SSEncDec_Blob2StringPc @ 001d0938 (arm) */
void fn_001d0938(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d0938:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001d093c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001d0940:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001d0944:;
    {
        cpu->r[14] = 0x001d0948u; imp_strlen(cpu); /* strlen */
    }
L_001d0948:;
    {
        cpu->r[14] = 0x001d094cu; imp__Znaj(cpu); /* _Znaj */
    }
L_001d094c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001d0950:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001d0954:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d0958:;
    {
        uint32_t wb_tmp = cpu->r[4] + - 0x4u;
        wr32(cpu->r[4] + - 0x4u, cpu->r[6]);
        cpu->r[4] = wb_tmp;
    }
L_001d095c:;
    {
        cpu->r[14] = 0x001d0960u; imp_strlen(cpu); /* strlen */
    }
L_001d0960:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d0964:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001d0968:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001d096c:;
    {
        cpu->r[14] = 0x001d0970u; fn_001d0700(cpu);
    }
L_001d0970:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d0974:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001d0978:;
    {
        cpu->r[14] = 0x001d097cu; fn_001d0500(cpu);
    }
L_001d097c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_001d0980:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001d0984:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d0988u)) return;
    }
}

/* XP_API_PARSE_DATA_NEW @ 001d0988 (arm) */
void fn_001d0988(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d0988:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001d098c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d0990:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001d0994:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001d0998:;
    {
        cpu->r[6] = (~0x00000000u);
    }
L_001d099c:;
    {
        cpu->r[1] = rd8(cpu->r[4] + cpu->r[7]);
    }
L_001d09a0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001d09a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d09d4;
        }
    }
L_001d09a8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001d09ac:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
        }
    }
L_001d09b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d09c4;
        }
    }
L_001d09b4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001d09b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d0a08;
        }
    }
L_001d09bc:;
    {
        add_flags(cpu, cpu->r[6], 0x00000001u, 0, 1);
    }
L_001d09c0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = cpu->r[7];
        }
    }
L_001d09c4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001d09c8:;
    {
        cpu->r[1] = rd8(cpu->r[4] + cpu->r[7]);
    }
L_001d09cc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001d09d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d09a8;
        }
    }
L_001d09d4:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 0);
    }
L_001d09d8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001d09dc:;
    {
        cpu->r[14] = 0x001d09e0u; imp__Znaj(cpu); /* _Znaj */
    }
L_001d09e0:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001d09e4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d09e8:;
    {
        wr32(cpu->r[5], cpu->r[0]);
    }
L_001d09ec:;
    {
        cpu->r[14] = 0x001d09f0u; fn_001d0700(cpu);
    }
L_001d09f0:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_001d09f4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], cpu->r[6], 0, 0);
    }
L_001d09f8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 0);
    }
L_001d09fc:;
    {
        cpu->r[14] = 0x001d0a00u; fn_001d06ec(cpu);
    }
L_001d0a00:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001d0a04:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d0a08u)) return;
    }
L_001d0a08:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001d09d4;
        }
    }
L_001d0a0c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001d0a10:;
    {
        goto L_001d09c8;
    }
}

/* _Z20RevFromServerForNamePPcS_ii @ 001d0a14 (arm) */
void fn_001d0a14(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d0a14:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d0a18:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001d0a1c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001d0a20:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001d0a24:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_001d0a28:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d0a54;
        }
    }
L_001d0a2c:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001d0a30:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001d0a34:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001d0a38:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d0a3c:;
    {
        cpu->r[14] = 0x001d0a40u; fn_001d0700(cpu);
    }
L_001d0a40:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_001d0a44:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001d0a48:;
    {
        cpu->r[14] = 0x001d0a4cu; fn_001d06dc(cpu);
    }
L_001d0a4c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d0a50:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d0a54u)) return;
    }
L_001d0a54:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001d0a58:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001d0a5c:;
    {
        cpu->r[14] = 0x001d0a60u; imp__Znaj(cpu); /* _Znaj */
    }
L_001d0a60:;
    {
        wr32(cpu->r[5], cpu->r[0]);
    }
L_001d0a64:;
    {
        goto L_001d0a34;
    }
}

/* _Z19SendToServerForNamePPcS_ii @ 001d0a68 (arm) */
void fn_001d0a68(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d0a68:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d0a6c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001d0a70:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001d0a74:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001d0a78:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_001d0a7c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d0aac;
        }
    }
L_001d0a80:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001d0a84:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001d0a88:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001d0a8c:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001d0a90:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d0a94:;
    {
        cpu->r[14] = 0x001d0a98u; fn_001d0700(cpu);
    }
L_001d0a98:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_001d0a9c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001d0aa0:;
    {
        cpu->r[14] = 0x001d0aa4u; fn_001d06dc(cpu);
    }
L_001d0aa4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d0aa8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d0aacu)) return;
    }
L_001d0aac:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001d0ab0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001d0ab4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001d0ab8:;
    {
        cpu->r[14] = 0x001d0abcu; imp__Znaj(cpu); /* _Znaj */
    }
L_001d0abc:;
    {
        wr32(cpu->r[5], cpu->r[0]);
    }
L_001d0ac0:;
    {
        goto L_001d0a8c;
    }
}

/* XP_DEBUG_OUT @ 001d0ac4 (arm) */
void fn_001d0ac4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d0ac4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[0]);
        wr32(cpu->r[13] + 4u, cpu->r[1]);
        wr32(cpu->r[13] + 8u, cpu->r[2]);
        wr32(cpu->r[13] + 12u, cpu->r[3]);
    }
L_001d0ac8:;
    {
        cpu->r[1] = rd32(0x001d0ad0u + + 0x208u);
    }
L_001d0acc:;
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
L_001d0ad0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000a000u, 1, 0);
    }
L_001d0ad4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_001d0ad8:;
    {
        cpu->r[2] = rd32(0x001d0ae0u + + 0x1fcu);
    }
L_001d0adc:;
    {
        cpu->r[1] = add_flags(cpu, 0x001d0ae4u, cpu->r[1], 0, 0);
    }
L_001d0ae0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000a000u, 0, 0);
    }
L_001d0ae4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_001d0ae8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_001d0aec:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x58u);
    }
L_001d0af0:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], 0x00000010u, 1, 0);
    }
L_001d0af4:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_001d0af8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001d0afc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_001d0b00:;
    {
        cpu->r[2] = 0x0000a000u;
    }
L_001d0b04:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], cpu->r[2], 0, 0);
    }
L_001d0b08:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d0b0c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d0b10:;
    {
        cpu->r[11] = 0x00005fecu;
    }
L_001d0b14:;
    {
        cpu->r[11] = (cpu->r[11] & 0xffffu) | (0xffffu << 16);
    }
L_001d0b18:;
    {
        wr32(cpu->r[12] + + 0x2cu, cpu->r[3]);
    }
L_001d0b1c:;
    {
        cpu->r[14] = 0x001d0b20u; fn_001d0700(cpu);
    }
L_001d0b20:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x0000a000u, 0, 0);
    }
L_001d0b24:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000030u, 0, 0);
    }
L_001d0b28:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000a000u, 0, 0);
    }
L_001d0b2c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000005cu, 0, 0);
    }
L_001d0b30:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001d0b34:;
    {
        wr32(cpu->r[14] + cpu->r[11], cpu->r[3]);
    }
L_001d0b38:;
    {
        cpu->r[14] = 0x001d0b3cu; fn_001d0434(cpu);
    }
L_001d0b3c:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d0b40:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d0c04;
        }
    }
L_001d0b44:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x0000a000u, 0, 0);
    }
L_001d0b48:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001d0b4c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000020u, 0, 0);
    }
L_001d0b50:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_001d0b54:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_001d0b58:;
    {
        cpu->r[8] = cpu->r[10];
    }
L_001d0b5c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_001d0b60:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_001d0b64:;
    {
        cpu->r[12] = cpu->r[4];
    }
L_001d0b68:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_001d0b6c:;
    {
        goto L_001d0b7c;
    }
L_001d0b70:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001d0b74:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[4], 1, 1);
    }
L_001d0b78:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d0c04;
        }
    }
L_001d0b7c:;
    {
        cpu->r[3] = rd8(cpu->r[6] + cpu->r[4]);
    }
L_001d0b80:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000025u, 1, 1);
    }
L_001d0b84:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[8] + cpu->r[5], cpu->r[3]);
        }
    }
L_001d0b88:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
        }
    }
L_001d0b8c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d0b70;
        }
    }
L_001d0b90:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], cpu->r[4], 0, 0);
    }
L_001d0b94:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x1u);
    }
L_001d0b98:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000064u, 1, 1);
    }
L_001d0b9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d0c64;
        }
    }
L_001d0ba0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000073u, 1, 1);
    }
L_001d0ba4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d0b70;
        }
    }
L_001d0ba8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000a000u, 0, 0);
    }
L_001d0bac:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000030u, 0, 0);
    }
L_001d0bb0:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[11]);
    }
L_001d0bb4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001d0bb8:;
    {
        wr32(cpu->r[1] + cpu->r[11], cpu->r[2]);
    }
L_001d0bbc:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_001d0bc0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001d0bc4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d0bf4;
        }
    }
L_001d0bc8:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001d0bcc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001d0bd0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001d0bd4:;
    {
        cpu->r[14] = 0x001d0bd8u; fn_001d0434(cpu);
    }
L_001d0bd8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_001d0bdc:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001d0be0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[10], cpu->r[5], 0, 0);
    }
L_001d0be4:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001d0be8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_001d0bec:;
    {
        cpu->r[14] = 0x001d0bf0u; fn_001d06ec(cpu);
    }
L_001d0bf0:;
    {
        cpu->r[12] = rd32(cpu->r[13]);
    }
L_001d0bf4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001d0bf8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001d0bfc:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[4], 1, 1);
    }
L_001d0c00:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001d0b7c;
        }
    }
L_001d0c04:;
    {
        cpu->r[4] = rd32(0x001d0c0cu + + 0xd4u);
    }
L_001d0c08:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001d0c0c:;
    {
        cpu->r[4] = add_flags(cpu, 0x001d0c14u, cpu->r[4], 0, 0);
    }
L_001d0c10:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d0c14:;
    {
        cpu->r[14] = 0x001d0c18u; imp_printf(cpu); /* printf */
    }
L_001d0c18:;
    {
        cpu->r[1] = rd32(0x001d0c20u + + 0xc4u);
    }
L_001d0c1c:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001d0c20:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_001d0c24:;
    {
        cpu->r[1] = add_flags(cpu, 0x001d0c2cu, cpu->r[1], 0, 0);
    }
L_001d0c28:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_001d0c2c:;
    {
        cpu->r[14] = 0x001d0c30u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001d0c30:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001d0c34:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_001d0c38:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000a000u, 0, 0);
    }
L_001d0c3c:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_001d0c40:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x2cu);
    }
L_001d0c44:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d0c48:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001d0c4c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d0cd4;
        }
    }
L_001d0c50:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_001d0c54:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000a000u, 0, 0);
    }
L_001d0c58:;
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
L_001d0c5c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001d0c60:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001d0c64:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000a000u, 0, 0);
    }
L_001d0c68:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x0000a000u, 0, 0);
    }
L_001d0c6c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000030u, 0, 0);
    }
L_001d0c70:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000030u, 0, 0);
    }
L_001d0c74:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001d0c78:;
    {
        cpu->r[2] = 0x0000000au;
    }
L_001d0c7c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[11]);
    }
L_001d0c80:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001d0c84:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_001d0c88:;
    {
        wr32(cpu->r[14] + cpu->r[11], cpu->r[3]);
    }
L_001d0c8c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_001d0c90:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_001d0c94:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001d0c98:;
    {
        wr32(cpu->r[3], cpu->r[12]);
    }
L_001d0c9c:;
    {
        wr32(cpu->r[14], cpu->r[12]);
    }
L_001d0ca0:;
    {
        wr32(cpu->r[9], cpu->r[12]);
    }
L_001d0ca4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001d0ca8:;
    {
        cpu->r[14] = 0x001d0cacu; fn_001cfbbc(cpu);
    }
L_001d0cac:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001d0cb0:;
    {
        cpu->r[14] = 0x001d0cb4u; fn_001d0434(cpu);
    }
L_001d0cb4:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001d0cb8:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001d0cbc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[10], cpu->r[5], 0, 0);
    }
L_001d0cc0:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001d0cc4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_001d0cc8:;
    {
        cpu->r[14] = 0x001d0cccu; fn_001d06ec(cpu);
    }
L_001d0ccc:;
    {
        cpu->r[12] = rd32(cpu->r[13]);
    }
L_001d0cd0:;
    {
        goto L_001d0b70;
    }
L_001d0cd4:;
    {
        cpu->r[14] = 0x001d0cd8u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001d0cd8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[4], 3, (cpu->r[9] & 0xffu), &shc); cpu->r[9] = v;
        }
    }
L_001d0cdc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001d0ce0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] & shifter(cpu->r[8], 2, 15u, &shc); cpu->r[0] = v;
        }
    }
L_001d0ce4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[5] & shifter(cpu->r[0], 4, 19u, &shc); cpu->r[13] = v;
        }
    }
}

/* XP_API_STRNEW @ 001d0ce8 (arm) */
void fn_001d0ce8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d0ce8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001d0cec:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001d0cf0:;
    {
        cpu->r[14] = 0x001d0cf4u; fn_001d0434(cpu);
    }
L_001d0cf4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001d0cf8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001d0cfc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001d0d00:;
    {
        cpu->r[14] = 0x001d0d04u; imp__Znaj(cpu); /* _Znaj */
    }
L_001d0d04:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001d0d08:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d0d0c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d0d10:;
    {
        cpu->r[14] = 0x001d0d14u; fn_001d0700(cpu);
    }
L_001d0d14:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d0d18:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001d0d1c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001d0d20:;
    {
        cpu->r[14] = 0x001d0d24u; fn_001d06ec(cpu);
    }
L_001d0d24:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d0d28:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d0d2cu)) return;
    }
}

/* XP_API_FREE @ 001d0d2c (arm) */
void fn_001d0d2c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d0d2c:;
    {
        return fn_0018ba20(cpu);
    }
}

/* XP_API_MALLOC @ 001d0d30 (arm) */
void fn_001d0d30(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d0d30:;
    {
        imp_malloc(cpu); /* tail malloc */ return;
    }
}

/* _ZN14CAndroidSocket4InitEv @ 001d0d34 (arm) */
void fn_001d0d34(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d0d34:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14CAndroidSocket12IsReadyForRWEv @ 001d0d38 (arm) */
void fn_001d0d38(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d0d38:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_001d0d3c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001d0d40:;
    {
        uint32_t v = cpu->r[3] & 0x0000001fu; cpu->r[2] = v;
    }
L_001d0d44:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 5u, &shc); cpu->r[3] = v;
    }
L_001d0d48:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000218u, 0, 0);
    }
L_001d0d4c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_001d0d50:;
    {
        cpu->r[3] = rd32(cpu->r[0] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_001d0d54:;
    {
        uint32_t v = cpu->r[3] & shifter(cpu->r[1], 2, (cpu->r[2] & 0xffu), &shc); cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_001d0d58:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001d0d5c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001d0d60:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN14CAndroidSocket13SendBroadcastEPKcii @ 001d0d64 (arm) */
void fn_001d0d64(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d0d64:;
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
L_001d0d68:;
    {
        cpu->r[4] = rd32(0x001d0d70u + + 0xd8u);
    }
L_001d0d6c:;
    {
        cpu->r[5] = rd32(0x001d0d74u + + 0xd8u);
    }
L_001d0d70:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_001d0d74:;
    {
        cpu->r[4] = add_flags(cpu, 0x001d0d7cu, cpu->r[4], 0, 0);
    }
L_001d0d78:;
    {
        cpu->r[7] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_001d0d7c:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_001d0d80:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001d0d84:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001d0d88:;
    {
        uint32_t v = shifter(cpu->r[7], 3, 8u, &shc); cpu->r[9] = v;
    }
L_001d0d8c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001d0d90:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_001d0d94:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_001d0d98:;
    {
        cpu->r[3] = cpu->r[14];
    }
L_001d0d9c:;
    {
        cpu->r[10] = rd32(cpu->r[10]);
    }
L_001d0da0:;
    {
        uint32_t v = cpu->r[9] | shifter(cpu->r[7], 2, 8u, &shc); cpu->r[7] = v;
    }
L_001d0da4:;
    {
        cpu->r[11] = 0x00000002u;
    }
L_001d0da8:;
    {
        wr16(cpu->r[13] + + 0xeu, cpu->r[7]);
    }
L_001d0dac:;
    {
        wr16(cpu->r[13] + + 0xcu, cpu->r[11]);
    }
L_001d0db0:;
    {
        cpu->r[7] = (~0x00000000u);
    }
L_001d0db4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[10]);
    }
L_001d0db8:;
    {
        cpu->r[9] = cpu->r[1];
    }
L_001d0dbc:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[7]);
    }
L_001d0dc0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001d0dc4:;
    {
        wr32(cpu->r[13], cpu->r[7]);
    }
L_001d0dc8:;
    {
        cpu->r[7] = 0x00000010u;
    }
L_001d0dcc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_001d0dd0:;
    {
        uint32_t wb_tmp = cpu->r[12] + 0x00000004u;
        wr32(cpu->r[12], cpu->r[14]);
        cpu->r[12] = wb_tmp;
    }
L_001d0dd4:;
    {
        wr32(cpu->r[12], cpu->r[14]);
    }
L_001d0dd8:;
    {
        cpu->r[14] = 0x001d0ddcu; imp_sendto(cpu); /* sendto */
    }
L_001d0ddc:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d0de0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d0e1c;
        }
    }
L_001d0de4:;
    {
        cpu->r[0] = rd32(0x001d0decu + + 0x64u);
    }
L_001d0de8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001d0dec:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_001d0df0:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001d0df4:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d0dfcu, cpu->r[0], 0, 0);
    }
L_001d0df8:;
    {
        cpu->r[14] = 0x001d0dfcu; fn_001d0ac4(cpu);
    }
L_001d0dfc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001d0e00:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001d0e04:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001d0e08:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d0e0c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001d0e10:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d0e44;
        }
    }
L_001d0e14:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_001d0e18:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d0e1cu)) return;
    }
L_001d0e1c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001d0e20:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001d0e24:;
    {
        cpu->r[14] = 0x001d0e2cu;
    }
L_001d0e28:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d0e2cu)) return;
    }
L_001d0e2c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001d0e30:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001d0e34:;
    {
        cpu->r[0] = rd32(0x001d0e3cu + + 0x18u);
    }
L_001d0e38:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d0e40u, cpu->r[0], 0, 0);
    }
L_001d0e3c:;
    {
        cpu->r[14] = 0x001d0e40u; fn_001d0ac4(cpu);
    }
L_001d0e40:;
    {
        goto L_001d0dfc;
    }
L_001d0e44:;
    {
        cpu->r[14] = 0x001d0e48u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001d0e48:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[12] * cpu->r[6]; cpu->r[7] = v;
        }
    }
L_001d0e4c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001d0e50:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[0], 1, 25u, &shc); cpu->r[0] = v;
        }
    }
L_001d0e54:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[12], 3, 25u, &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN14CAndroidSocket12SetBroadcastEv @ 001d0e58 (arm) */
void fn_001d0e58(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d0e58:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d0e5c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_001d0e60:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001d0e64:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_001d0e68:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_001d0e6c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d0e70:;
    {
        cpu->r[2] = 0x00000006u;
    }
L_001d0e74:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_001d0e78:;
    {
        uint32_t wb_tmp = cpu->r[3] + - 0x4u;
        wr32(cpu->r[3] + - 0x4u, cpu->r[12]);
        cpu->r[3] = wb_tmp;
    }
L_001d0e7c:;
    {
        cpu->r[12] = 0x00000004u;
    }
L_001d0e80:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001d0e84:;
    {
        cpu->r[14] = 0x001d0e88u; imp_setsockopt(cpu); /* setsockopt */
    }
L_001d0e88:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d0e8c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001d0e98;
        }
    }
L_001d0e90:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001d0e94:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d0e98u)) return;
    }
L_001d0e98:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d0e9c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001d0ea0:;
    {
        cpu->r[14] = 0x001d0ea8u;
    }
L_001d0ea4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d0ea8u)) return;
    }
L_001d0ea8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001d0eac:;
    {
        cpu->r[0] = rd32(0x001d0eb4u + + 0x8u);
    }
L_001d0eb0:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d0eb8u, cpu->r[0], 0, 0);
    }
L_001d0eb4:;
    {
        cpu->r[14] = 0x001d0eb8u; fn_001d0ac4(cpu);
    }
L_001d0eb8:;
    {
        goto L_001d0e90;
    }
}

/* _ZN14CAndroidSocket6ListenEi @ 001d0ec0 (arm) */
void fn_001d0ec0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d0ec0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d0ec4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_001d0ec8:;
    {
        cpu->r[14] = 0x001d0eccu; imp_listen(cpu); /* listen */
    }
L_001d0ecc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d0ed0:;
    {
        if (cond_test(cpu, 11)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d0ed4u)) return;
        }
    }
L_001d0ed4:;
    {
        cpu->r[0] = rd32(0x001d0edcu + + 0x8u);
    }
L_001d0ed8:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d0ee0u, cpu->r[0], 0, 0);
    }
L_001d0edc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_001d0ee0:;
    {
        return fn_001d0ac4(cpu);
    }
}

/* _ZN14CAndroidSocket13GetSocketPortEv @ 001d0ee8 (arm) */
void fn_001d0ee8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d0ee8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d0eec:;
    {
        cpu->r[14] = rd32(0x001d0ef4u + + 0x70u);
    }
L_001d0ef0:;
    {
        cpu->r[4] = rd32(0x001d0ef8u + + 0x70u);
    }
L_001d0ef4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000018u, 1, 0);
    }
L_001d0ef8:;
    {
        cpu->r[14] = add_flags(cpu, 0x001d0f00u, cpu->r[14], 0, 0);
    }
L_001d0efc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001d0f00:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001d0f04:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001d0f08:;
    {
        cpu->r[4] = rd32(cpu->r[14] + cpu->r[4]);
    }
L_001d0f0c:;
    {
        cpu->r[14] = 0x00000010u;
    }
L_001d0f10:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_001d0f14:;
    {
        cpu->r[2] = cpu->r[13];
    }
L_001d0f18:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001d0f1c:;
    {
        cpu->r[14] = rd32(cpu->r[4]);
    }
L_001d0f20:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[14]);
    }
L_001d0f24:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[12]);
        cpu->r[3] = wb_tmp;
    }
L_001d0f28:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[12]);
        cpu->r[3] = wb_tmp;
    }
L_001d0f2c:;
    {
        wr32(cpu->r[3], cpu->r[12]);
    }
L_001d0f30:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_001d0f34:;
    {
        cpu->r[14] = 0x001d0f38u; imp_getsockname(cpu); /* getsockname */
    }
L_001d0f38:;
    {
        cpu->r[3] = rd16(cpu->r[13] + + 0x6u);
    }
L_001d0f3c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_001d0f40:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_001d0f44:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 8u, &shc); cpu->r[2] = v;
    }
L_001d0f48:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_001d0f4c:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[3], 2, 8u, &shc); cpu->r[3] = v;
    }
L_001d0f50:;
    {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_001d0f54:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d0f60;
        }
    }
L_001d0f58:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001d0f5c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d0f60u)) return;
    }
L_001d0f60:;
    {
        cpu->r[14] = 0x001d0f64u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001d0f64:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[8], 2, (cpu->r[5] & 0xffu), &shc); cpu->r[9] = v;
        }
    }
L_001d0f68:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN14CAndroidSocket13GetSocketAddrEv @ 001d0f6c (arm) */
void fn_001d0f6c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d0f6c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001d0f70:;
    {
        cpu->r[4] = rd32(0x001d0f78u + + 0x84u);
    }
L_001d0f74:;
    {
        cpu->r[6] = rd32(0x001d0f7cu + + 0x84u);
    }
L_001d0f78:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000108u, 1, 0);
    }
L_001d0f7c:;
    {
        cpu->r[4] = add_flags(cpu, 0x001d0f84u, cpu->r[4], 0, 0);
    }
L_001d0f80:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001d0f84:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d0f88:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_001d0f8c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001d0f90:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d0f94:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d0f98:;
    {
        wr32(cpu->r[13] + + 0x104u, cpu->r[3]);
    }
L_001d0f9c:;
    {
        cpu->r[14] = 0x001d0fa0u; fn_001d0700(cpu);
    }
L_001d0fa0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d0fa4:;
    {
        cpu->r[1] = 0x00000100u;
    }
L_001d0fa8:;
    {
        cpu->r[14] = 0x001d0facu; imp_gethostname(cpu); /* gethostname */
    }
L_001d0fac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d0fb0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d0fd4;
        }
    }
L_001d0fb4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001d0fb8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001d0fbc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x104u);
    }
L_001d0fc0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d0fc4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001d0fc8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d0ff8;
        }
    }
L_001d0fcc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000108u, 0, 0);
    }
L_001d0fd0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d0fd4u)) return;
    }
L_001d0fd4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d0fd8:;
    {
        cpu->r[14] = 0x001d0fdcu; imp_gethostbyname(cpu); /* gethostbyname */
    }
L_001d0fdc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d0fe0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d0fb4;
        }
    }
L_001d0fe4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x10u);
    }
L_001d0fe8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d0fec:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001d0ff0:;
    {
        cpu->r[14] = 0x001d0ff4u; imp_inet_ntoa(cpu); /* inet_ntoa */
    }
L_001d0ff4:;
    {
        goto L_001d0fb8;
    }
L_001d0ff8:;
    {
        cpu->r[14] = 0x001d0ffcu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001d0ffc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] * cpu->r[4]; cpu->r[7] = v;
        }
    }
L_001d1000:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN14CAndroidSocket16RecvFromUnkownIPEPciPS0_Pi @ 001d1004 (arm) */
void fn_001d1004(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d1004:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_001d1008:;
    {
        cpu->r[6] = rd32(0x001d1010u + + 0xa8u);
    }
L_001d100c:;
    {
        cpu->r[4] = rd32(0x001d1014u + + 0xa8u);
    }
L_001d1010:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_001d1014:;
    {
        cpu->r[6] = add_flags(cpu, 0x001d101cu, cpu->r[6], 0, 0);
    }
L_001d1018:;
    {
        cpu->r[7] = 0x00000010u;
    }
L_001d101c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[7]);
    }
L_001d1020:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001d1024:;
    {
        cpu->r[4] = rd32(cpu->r[6] + cpu->r[4]);
    }
L_001d1028:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_001d102c:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_001d1030:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[14]);
    }
L_001d1034:;
    {
        cpu->r[3] = cpu->r[14];
    }
L_001d1038:;
    {
        cpu->r[6] = 0x00000002u;
    }
L_001d103c:;
    {
        cpu->r[7] = rd32(cpu->r[4]);
    }
L_001d1040:;
    {
        wr16(cpu->r[13] + + 0xcu, cpu->r[6]);
    }
L_001d1044:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x38u);
    }
L_001d1048:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[7]);
    }
L_001d104c:;
    {
        uint32_t wb_tmp = cpu->r[12] + 0x00000004u;
        wr32(cpu->r[12], cpu->r[14]);
        cpu->r[12] = wb_tmp;
    }
L_001d1050:;
    {
        uint32_t wb_tmp = cpu->r[12] + 0x00000004u;
        wr32(cpu->r[12], cpu->r[14]);
        cpu->r[12] = wb_tmp;
    }
L_001d1054:;
    {
        wr32(cpu->r[12], cpu->r[14]);
    }
L_001d1058:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001d105c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_001d1060:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001d1064:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001d1068:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001d106c:;
    {
        cpu->r[14] = 0x001d1070u; imp_recvfrom(cpu); /* recvfrom */
    }
L_001d1070:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001d1074:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_001d1078:;
    {
        cpu->r[14] = 0x001d107cu; imp_inet_ntoa(cpu); /* inet_ntoa */
    }
L_001d107c:;
    {
        cpu->r[14] = 0x001d1080u; fn_001d0ce8(cpu);
    }
L_001d1080:;
    {
        cpu->r[3] = rd16(cpu->r[13] + + 0xeu);
    }
L_001d1084:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001d1088:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_001d108c:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 8u, &shc); cpu->r[2] = v;
    }
L_001d1090:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[3], 2, 8u, &shc); cpu->r[3] = v;
    }
L_001d1094:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_001d1098:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_001d109c:;
    {
        wr32(cpu->r[6], cpu->r[3]);
    }
L_001d10a0:;
    {
        wr32(cpu->r[5], cpu->r[0]);
    }
L_001d10a4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001d10a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d10b4;
        }
    }
L_001d10ac:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_001d10b0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d10b4u)) return;
    }
L_001d10b4:;
    {
        cpu->r[14] = 0x001d10b8u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001d10b8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[12]);
        wr64(cpu->r[7], ((uint64_t)cpu->r[10] << 32) | cpu->r[9]);
        cpu->r[7] = wb_tmp;
        }
    }
L_001d10bc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN14CAndroidSocket11GetHostNameEPPc @ 001d10c0 (arm) */
void fn_001d10c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d10c0:;
    {
        cpu->r[3] = rd32(0x001d10c8u + + 0x58u);
    }
L_001d10c4:;
    {
        cpu->r[2] = rd32(0x001d10ccu + + 0x58u);
    }
L_001d10c8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001d10d0u, cpu->r[3], 0, 0);
    }
L_001d10cc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001d10d0:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001d10d4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000108u, 1, 0);
    }
L_001d10d8:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001d10dc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001d10e0:;
    {
        cpu->r[1] = 0x000000ffu;
    }
L_001d10e4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001d10e8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d10ec:;
    {
        wr32(cpu->r[13] + + 0x104u, cpu->r[3]);
    }
L_001d10f0:;
    {
        cpu->r[14] = 0x001d10f4u; imp_gethostname(cpu); /* gethostname */
    }
L_001d10f4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d10f8:;
    {
        cpu->r[14] = 0x001d10fcu; fn_001d0ce8(cpu);
    }
L_001d10fc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x104u);
    }
L_001d1100:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001d1104:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001d1108:;
    {
        wr32(cpu->r[6], cpu->r[0]);
    }
L_001d110c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001d1110:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d111c;
        }
    }
L_001d1114:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000108u, 0, 0);
    }
L_001d1118:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d111cu)) return;
    }
L_001d111c:;
    {
        cpu->r[14] = 0x001d1120u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001d1120:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[8], 1, 6u, &shc); cpu->r[9] = v;
        }
    }
L_001d1124:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN14CAndroidSocket8RecvFromEPciPKci @ 001d1128 (arm) */
void fn_001d1128(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d1128:;
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
L_001d112c:;
    {
        cpu->r[4] = rd32(0x001d1134u + + 0x10cu);
    }
L_001d1130:;
    {
        cpu->r[5] = rd32(0x001d1138u + + 0x10cu);
    }
L_001d1134:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001d1138:;
    {
        cpu->r[4] = add_flags(cpu, 0x001d1140u, cpu->r[4], 0, 0);
    }
L_001d113c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_001d1140:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_001d1144:;
    {
        cpu->r[9] = cpu->r[2];
    }
L_001d1148:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001d114c:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001d1150:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[7]);
    }
L_001d1154:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_001d1158:;
    {
        wr16(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_001d115c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001d1160:;
    {
        cpu->r[2] = rd32(cpu->r[1]);
    }
L_001d1164:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001d1168:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001d116c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x48u);
    }
L_001d1170:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_001d1174:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[7]);
        cpu->r[3] = wb_tmp;
    }
L_001d1178:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[7]);
        cpu->r[3] = wb_tmp;
    }
L_001d117c:;
    {
        wr32(cpu->r[3], cpu->r[7]);
    }
L_001d1180:;
    {
        cpu->r[14] = 0x001d1184u; imp_inet_addr(cpu); /* inet_addr */
    }
L_001d1184:;
    {
        cpu->r[14] = rd32(cpu->r[10] + + 0x8u);
    }
L_001d1188:;
    {
        cpu->r[12] = (uint32_t)((uint16_t)cpu->r[11]);
    }
L_001d118c:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_001d1190:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_001d1194:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001d1198:;
    {
        uint32_t v = shifter(cpu->r[12], 3, 8u, &shc); cpu->r[7] = v;
    }
L_001d119c:;
    {
        uint32_t v = cpu->r[7] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[12] = v;
    }
L_001d11a0:;
    {
        wr16(cpu->r[13] + + 0xeu, cpu->r[12]);
    }
L_001d11a4:;
    {
        cpu->r[12] = 0x00000010u;
    }
L_001d11a8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_001d11ac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001d11b0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001d11b4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001d11b8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001d11bc:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_001d11c0:;
    {
        cpu->r[0] = cpu->r[14];
    }
L_001d11c4:;
    {
        cpu->r[14] = 0x001d11c8u; imp_recvfrom(cpu); /* recvfrom */
    }
L_001d11c8:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d11cc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d120c;
        }
    }
L_001d11d0:;
    {
        cpu->r[0] = rd32(0x001d11d8u + + 0x70u);
    }
L_001d11d4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001d11d8:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_001d11dc:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_001d11e0:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d11e8u, cpu->r[0], 0, 0);
    }
L_001d11e4:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_001d11e8:;
    {
        cpu->r[14] = 0x001d11ecu; fn_001d0ac4(cpu);
    }
L_001d11ec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001d11f0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001d11f4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001d11f8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d11fc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001d1200:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d123c;
        }
    }
L_001d1204:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_001d1208:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d120cu)) return;
    }
L_001d120c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d11ec;
        }
    }
L_001d1210:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_001d1214:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001d1218:;
    {
        cpu->r[14] = 0x001d1220u;
    }
L_001d121c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d1220u)) return;
    }
L_001d1220:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001d1224:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_001d1228:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001d122c:;
    {
        cpu->r[0] = rd32(0x001d1234u + + 0x18u);
    }
L_001d1230:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d1238u, cpu->r[0], 0, 0);
    }
L_001d1234:;
    {
        cpu->r[14] = 0x001d1238u; fn_001d0ac4(cpu);
    }
L_001d1238:;
    {
        goto L_001d11ec;
    }
L_001d123c:;
    {
        cpu->r[14] = 0x001d1240u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001d1240:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[8]);
        uint64_t v = rd64(cpu->r[7]);
        cpu->r[9] = (uint32_t)v;
        cpu->r[10] = (uint32_t)(v >> 32);
        cpu->r[7] = wb_tmp;
        }
    }
L_001d1244:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001d1248:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] * cpu->r[9]; cpu->r[6] = v;
        }
    }
L_001d124c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[0], 4, (cpu->r[9] & 0xffu), &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN14CAndroidSocket6SendToEPKciS1_i @ 001d1250 (arm) */
void fn_001d1250(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d1250:;
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
L_001d1254:;
    {
        cpu->r[4] = rd32(0x001d125cu + + 0xd8u);
    }
L_001d1258:;
    {
        cpu->r[5] = rd32(0x001d1260u + + 0xd8u);
    }
L_001d125c:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d1260:;
    {
        cpu->r[4] = add_flags(cpu, 0x001d1268u, cpu->r[4], 0, 0);
    }
L_001d1264:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_001d1268:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001d126c:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001d1270:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001d1274:;
    {
        cpu->r[11] = cpu->r[2];
    }
L_001d1278:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x48u);
    }
L_001d127c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = cpu->r[7];
        }
    }
L_001d1280:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d1284:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_001d1288:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d1310;
        }
    }
L_001d128c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001d1290:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_001d1294:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001d1298:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001d129c:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[10]);
        cpu->r[3] = wb_tmp;
    }
L_001d12a0:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[10]);
        cpu->r[3] = wb_tmp;
    }
L_001d12a4:;
    {
        wr32(cpu->r[3], cpu->r[10]);
    }
L_001d12a8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[10]);
    }
L_001d12ac:;
    {
        wr16(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_001d12b0:;
    {
        cpu->r[14] = 0x001d12b4u; imp_inet_addr(cpu); /* inet_addr */
    }
L_001d12b4:;
    {
        cpu->r[6] = rd32(cpu->r[6] + + 0x8u);
    }
L_001d12b8:;
    {
        cpu->r[12] = (uint32_t)((uint16_t)cpu->r[9]);
    }
L_001d12bc:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_001d12c0:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_001d12c4:;
    {
        uint32_t v = shifter(cpu->r[12], 3, 8u, &shc); cpu->r[14] = v;
    }
L_001d12c8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001d12cc:;
    {
        uint32_t v = cpu->r[14] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[12] = v;
    }
L_001d12d0:;
    {
        wr16(cpu->r[13] + + 0xeu, cpu->r[12]);
    }
L_001d12d4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001d12d8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001d12dc:;
    {
        cpu->r[12] = 0x00000010u;
    }
L_001d12e0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001d12e4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_001d12e8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001d12ec:;
    {
        cpu->r[14] = 0x001d12f0u; imp_sendto(cpu); /* sendto */
    }
L_001d12f0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001d12f4:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_001d12f8:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_001d12fc:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001d1300:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001d1304:;
    {
        cpu->r[0] = rd32(0x001d130cu + + 0x30u);
    }
L_001d1308:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d1310u, cpu->r[0], 0, 0);
    }
L_001d130c:;
    {
        cpu->r[14] = 0x001d1310u; fn_001d0ac4(cpu);
    }
L_001d1310:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001d1314:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001d1318:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001d131c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d1320:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001d1324:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d1330;
        }
    }
L_001d1328:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_001d132c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d1330u)) return;
    }
L_001d1330:;
    {
        cpu->r[14] = 0x001d1334u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001d1334:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[0]);
        wr16(cpu->r[7], cpu->r[9]);
        cpu->r[7] = wb_tmp;
        }
    }
L_001d1338:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001d133c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[6] + (-cpu->r[0]);
        uint64_t v = rd64(cpu->r[6]);
        cpu->r[0] = (uint32_t)v;
        cpu->r[1] = (uint32_t)(v >> 32);
        cpu->r[6] = wb_tmp;
        }
    }
}

/* _ZN14CAndroidSocket15CreateUdpSocketEv @ 001d1340 (arm) */
void fn_001d1340(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d1340:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d1344:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d1348:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_001d134c:;
    {
        cpu->r[2] = 0x00000011u;
    }
L_001d1350:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001d1354:;
    {
        cpu->r[14] = 0x001d1358u; imp_socket(cpu); /* socket */
    }
L_001d1358:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d135c:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_001d1360:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = 0x00000002u;
        }
    }
L_001d1364:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001d1368:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001d136c:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[4] + + 0x820u, cpu->r[3]);
        }
    }
L_001d1370:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d1374u)) return;
    }
}

/* _ZN14CAndroidSocket15CreateTcpSocketEv @ 001d1374 (arm) */
void fn_001d1374(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d1374:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d1378:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001d137c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d1380:;
    {
        cpu->r[2] = 0x00000006u;
    }
L_001d1384:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_001d1388:;
    {
        cpu->r[14] = 0x001d138cu; imp_socket(cpu); /* socket */
    }
L_001d138c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d1390:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_001d1394:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001d1398:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001d139c:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[4] + + 0x820u, cpu->r[0]);
        }
    }
L_001d13a0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d13a4u)) return;
    }
}

/* _ZN14CAndroidSocket12CreateSocketEv @ 001d13a4 (arm) */
void fn_001d13a4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d13a4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001d13a8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001d13ac:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d13b0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001d13b4:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_001d13b8:;
    {
        cpu->r[14] = 0x001d13bcu; imp_socket(cpu); /* socket */
    }
L_001d13bc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d13c0:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_001d13c4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001d13e0;
        }
    }
L_001d13c8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001d13cc:;
    {
        cpu->r[0] = rd32(0x001d13d4u + + 0x3cu);
    }
L_001d13d0:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d13d8u, cpu->r[0], 0, 0);
    }
L_001d13d4:;
    {
        cpu->r[14] = 0x001d13d8u; fn_001d0ac4(cpu);
    }
L_001d13d8:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001d13dc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d13e0u)) return;
    }
L_001d13e0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001d13e4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d13e8:;
    {
        cpu->r[14] = 0x001d13f0u;
    }
L_001d13ec:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d13f0u)) return;
    }
L_001d13f0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001d13f4:;
    {
        cpu->r[0] = rd32(0x001d13fcu + + 0x18u);
    }
L_001d13f8:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d1400u, cpu->r[0], 0, 0);
    }
L_001d13fc:;
    {
        cpu->r[14] = 0x001d1400u; fn_001d0ac4(cpu);
    }
L_001d1400:;
    {
        cpu->r[3] = 0x00000007u;
    }
L_001d1404:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001d1408:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_001d140c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001d1410u)) return;
    }
}

/* _ZN14CAndroidSocket4BindEPct @ 001d1418 (arm) */
void fn_001d1418(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d1418:;
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
L_001d141c:;
    {
        cpu->r[6] = rd32(0x001d1424u + + 0xfcu);
    }
L_001d1420:;
    {
        cpu->r[9] = rd32(0x001d1428u + + 0xfcu);
    }
L_001d1424:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d1428:;
    {
        cpu->r[6] = add_flags(cpu, 0x001d1430u, cpu->r[6], 0, 0);
    }
L_001d142c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000020u, 1, 0);
    }
L_001d1430:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001d1434:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001d1438:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[9]);
    }
L_001d143c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_001d1440:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001d1444:;
    {
        cpu->r[12] = 0x00000002u;
    }
L_001d1448:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001d144c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_001d1450:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001d1454:;
    {
        wr16(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001d1458:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_001d145c:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_001d1460:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
        }
    }
L_001d1464:;
    {
        uint32_t wb_tmp = cpu->r[3] + 0x00000004u;
        wr32(cpu->r[3], cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_001d1468:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_001d146c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d1478;
        }
    }
L_001d1470:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001d1474:;
    {
        cpu->r[14] = 0x001d1478u; imp_inet_addr(cpu); /* inet_addr */
    }
L_001d1478:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_001d147c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_001d1480:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001d1484:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001d1488:;
    {
        uint32_t wb_tmp = cpu->r[3] + - 0x18u;
        wr32(cpu->r[3] + - 0x18u, cpu->r[1]);
        cpu->r[3] = wb_tmp;
    }
L_001d148c:;
    {
        uint32_t v = shifter(cpu->r[7], 3, 8u, &shc); cpu->r[14] = v;
    }
L_001d1490:;
    {
        cpu->r[12] = 0x00000004u;
    }
L_001d1494:;
    {
        uint32_t v = cpu->r[14] | shifter(cpu->r[7], 2, 8u, &shc); cpu->r[14] = v;
    }
L_001d1498:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001d149c:;
    {
        wr16(cpu->r[13] + + 0xeu, cpu->r[14]);
    }
L_001d14a0:;
    {
        cpu->r[14] = 0x001d14a4u; imp_setsockopt(cpu); /* setsockopt */
    }
L_001d14a4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_001d14a8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001d14ac:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_001d14b0:;
    {
        cpu->r[14] = 0x001d14b4u; imp_bind(cpu); /* bind */
    }
L_001d14b4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d14b8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[10] = 0x00000000u;
        }
    }
L_001d14bc:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001d14fc;
        }
    }
L_001d14c0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_001d14c4:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_001d14c8:;
    {
        cpu->r[8] = (uint32_t)((uint16_t)cpu->r[8]);
    }
L_001d14cc:;
    {
        uint32_t v = shifter(cpu->r[8], 3, 8u, &shc); cpu->r[3] = v;
    }
L_001d14d0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_001d14d4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001d14d8:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_001d14dc:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[8], 2, 8u, &shc); cpu->r[3] = v;
    }
L_001d14e0:;
    {
        wr16(cpu->r[13] + + 0xeu, cpu->r[3]);
    }
L_001d14e4:;
    {
        cpu->r[14] = 0x001d14e8u; imp_bind(cpu); /* bind */
    }
L_001d14e8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_001d14ec:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_001d14f0:;
    {
        cpu->r[8] = (uint32_t)((uint16_t)cpu->r[8]);
    }
L_001d14f4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d14f8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001d14cc;
        }
    }
L_001d14fc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[9]);
    }
L_001d1500:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[10], cpu->r[7], 0, 0);
    }
L_001d1504:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001d1508:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d150c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001d1510:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d151c;
        }
    }
L_001d1514:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_001d1518:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d151cu)) return;
    }
L_001d151c:;
    {
        cpu->r[14] = 0x001d1520u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001d1520:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[8], 4, 31u, &shc); cpu->r[8] = v;
        }
    }
L_001d1524:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN14CAndroidSocket4RecvEPci @ 001d1528 (arm) */
void fn_001d1528(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d1528:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001d152c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d1530:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_001d1534:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001d1538:;
    {
        cpu->r[14] = 0x001d153cu; imp_recv(cpu); /* recv */
    }
L_001d153c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d1540:;
    {
        cpu->r[14] = 0x001d1544u; fn_001d05bc(cpu);
    }
L_001d1544:;
    {
        cpu->r[3] = 0x0000079bu;
    }
L_001d1548:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_001d154c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001d1568;
        }
    }
L_001d1550:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001d1554:;
    {
        cpu->r[0] = rd32(0x001d155cu + + 0x14u);
    }
L_001d1558:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_001d155c:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001d1560:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d1568u, cpu->r[0], 0, 0);
    }
L_001d1564:;
    {
        cpu->r[14] = 0x001d1568u; fn_001d0ac4(cpu);
    }
L_001d1568:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d156c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d1570u)) return;
    }
}

/* _ZN14CAndroidSocket4SendEPci @ 001d1574 (arm) */
void fn_001d1574(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d1574:;
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
L_001d1578:;
    {
        cpu->r[4] = rd32(0x001d1580u + + 0xccu);
    }
L_001d157c:;
    {
        cpu->r[6] = rd32(0x001d1584u + + 0xccu);
    }
L_001d1580:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000800u, 1, 0);
    }
L_001d1584:;
    {
        cpu->r[4] = add_flags(cpu, 0x001d158cu, cpu->r[4], 0, 0);
    }
L_001d1588:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001d158c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001d1590:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001d1594:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001d1598:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_001d159c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d15a0:;
    {
        wr32(cpu->r[13] + + 0x804u, cpu->r[3]);
    }
L_001d15a4:;
    {
        cpu->r[14] = 0x001d15a8u; fn_001d05bc(cpu);
    }
L_001d15a8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001d15ac:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001d15b0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001d15b4:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_001d15b8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x8u);
    }
L_001d15bc:;
    {
        cpu->r[14] = 0x001d15c0u; imp_send(cpu); /* send */
    }
L_001d15c0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000800u, 1, 1);
    }
L_001d15c4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001d15c8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001d1604;
        }
    }
L_001d15cc:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001d15d0:;
    {
        cpu->r[0] = rd32(0x001d15d8u + + 0x7cu);
    }
L_001d15d4:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001d15d8:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d15e0u, cpu->r[0], 0, 0);
    }
L_001d15dc:;
    {
        cpu->r[14] = 0x001d15e0u; fn_001d0ac4(cpu);
    }
L_001d15e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_001d15e4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d15e8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x804u);
    }
L_001d15ec:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d15f0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001d15f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d1648;
        }
    }
L_001d15f8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001d15fc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000800u, 0, 0);
    }
L_001d1600:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d1604u)) return;
    }
L_001d1604:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001d1608:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001d160c:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], 0x00000004u, 1, 0);
    }
L_001d1610:;
    {
        cpu->r[2] = 0x00000800u;
    }
L_001d1614:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001d1618:;
    {
        cpu->r[14] = 0x001d161cu; fn_001d0700(cpu);
    }
L_001d161c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001d1620:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001d1624:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001d1628:;
    {
        cpu->r[14] = 0x001d162cu; fn_001d06ec(cpu);
    }
L_001d162c:;
    {
        cpu->r[0] = rd32(0x001d1634u + + 0x24u);
    }
L_001d1630:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001d1634:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_001d1638:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d1640u, cpu->r[0], 0, 0);
    }
L_001d163c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001d1640:;
    {
        cpu->r[14] = 0x001d1644u; fn_001d0ac4(cpu);
    }
L_001d1644:;
    {
        goto L_001d15e0;
    }
L_001d1648:;
    {
        cpu->r[14] = 0x001d164cu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001d164c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[12], 2, 29u, &shc); cpu->r[8] = v;
        }
    }
L_001d1650:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001d1654:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[6] + (-cpu->r[4]);
        uint64_t v = rd64(cpu->r[6]);
        cpu->r[0] = (uint32_t)v;
        cpu->r[1] = (uint32_t)(v >> 32);
        cpu->r[6] = wb_tmp;
        }
    }
L_001d1658:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[8], 1, 12u, &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN14CAndroidSocket6SelectEN15GLXPlayerSocket17XSocketSelectFlagE @ 001d165c (arm) */
void fn_001d165c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d165c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_001d1660:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_001d1664:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001d1668:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_001d166c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001d1670:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001d1674:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001d16d0;
        }
    }
L_001d1678:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000860u, 0, 0);
    }
L_001d167c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001d1680:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_001d1684:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001d1688:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_001d168c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d1690:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[6]);
    }
L_001d1694:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[6]);
    }
L_001d1698:;
    {
        cpu->r[14] = 0x001d169cu; imp_memset(cpu); /* memset */
    }
L_001d169c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_001d16a0:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_001d16a4:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 1);
    }
L_001d16a8:;
    {
        uint32_t v = cpu->r[0] & 0x0000001fu; cpu->r[2] = v;
    }
L_001d16ac:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 5u, &shc); cpu->r[3] = v;
    }
L_001d16b0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000218u, 0, 0);
    }
L_001d16b4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_001d16b8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_001d16bc:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[12], 2, (cpu->r[2] & 0xffu), &shc); cpu->r[2] = v;
    }
L_001d16c0:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[2]);
    }
L_001d16c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d16dc;
        }
    }
L_001d16c8:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 1);
    }
L_001d16cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d16fc;
        }
    }
L_001d16d0:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001d16d4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001d16d8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d16dcu)) return;
    }
L_001d16dc:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001d16e0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[12], 0, 0);
    }
L_001d16e4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001d16e8:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_001d16ec:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001d16f0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001d16f4:;
    {
        cpu->r[14] = 0x001d16f8u; imp_select(cpu); /* select */
    }
L_001d16f8:;
    {
        goto L_001d16d4;
    }
L_001d16fc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001d1700:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001d1704:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_001d1708:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001d170c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001d1710:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001d1714:;
    {
        cpu->r[14] = 0x001d1718u; imp_select(cpu); /* select */
    }
L_001d1718:;
    {
        goto L_001d16d4;
    }
}

/* _ZN14CAndroidSocket11CloseSocketEv @ 001d171c (arm) */
void fn_001d171c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d171c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001d1720:;
    {
        cpu->r[4] = rd32(0x001d1728u + + 0x3cu);
    }
L_001d1724:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001d1728:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x8u);
    }
L_001d172c:;
    {
        cpu->r[4] = add_flags(cpu, 0x001d1734u, cpu->r[4], 0, 0);
    }
L_001d1730:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d1734:;
    {
        cpu->r[14] = 0x001d1738u; fn_001d0ac4(cpu);
    }
L_001d1738:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x8u);
    }
L_001d173c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001d1740:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001d175c;
        }
    }
L_001d1744:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001d1748:;
    {
        cpu->r[14] = 0x001d174cu; fn_001d0ac4(cpu);
    }
L_001d174c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x8u);
    }
L_001d1750:;
    {
        cpu->r[14] = 0x001d1754u; imp_close(cpu); /* close */
    }
L_001d1754:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001d1758:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[3]);
    }
L_001d175c:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001d1760:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d1764u)) return;
    }
}

/* _ZN14CAndroidSocket9ConnectToEPci @ 001d1768 (arm) */
void fn_001d1768(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d1768:;
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
L_001d176c:;
    {
        cpu->r[4] = rd32(0x001d1774u + + 0x220u);
    }
L_001d1770:;
    {
        cpu->r[7] = rd32(0x001d1778u + + 0x220u);
    }
L_001d1774:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000028u, 1, 0);
    }
L_001d1778:;
    {
        cpu->r[4] = add_flags(cpu, 0x001d1780u, cpu->r[4], 0, 0);
    }
L_001d177c:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x858u);
    }
L_001d1780:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001d1784:;
    {
        cpu->r[10] = cpu->r[1];
    }
L_001d1788:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001d178c:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001d1790:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_001d1794:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d1798:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_001d179c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d17c8;
        }
    }
L_001d17a0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_001d17a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d1840;
        }
    }
L_001d17a8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001d17ac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001d17b0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_001d17b4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d17b8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001d17bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d1990;
        }
    }
L_001d17c0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_001d17c4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d17c8u)) return;
    }
L_001d17c8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001d17cc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001d17d0:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_001d17d4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001d17d8:;
    {
        cpu->r[14] = 0x001d17dcu; fn_001d0700(cpu);
    }
L_001d17dc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001d17e0:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_001d17e4:;
    {
        wr16(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_001d17e8:;
    {
        cpu->r[14] = 0x001d17ecu; imp_inet_addr(cpu); /* inet_addr */
    }
L_001d17ec:;
    {
        cpu->r[8] = (uint32_t)((uint16_t)cpu->r[8]);
    }
L_001d17f0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001d17f4:;
    {
        uint32_t v = shifter(cpu->r[8], 3, 8u, &shc); cpu->r[2] = v;
    }
L_001d17f8:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[8], 2, 8u, &shc); cpu->r[8] = v;
    }
L_001d17fc:;
    {
        wr16(cpu->r[13] + + 0x16u, cpu->r[8]);
    }
L_001d1800:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_001d1804:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d1808:;
    {
        cpu->r[14] = 0x001d1810u;
    }
L_001d180c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x30u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d1810u)) return;
    }
L_001d1810:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d1814:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d18d4;
        }
    }
L_001d1818:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001d181c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x8u);
    }
L_001d1820:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_001d1824:;
    {
        cpu->r[14] = 0x001d1828u; imp_connect(cpu); /* connect */
    }
L_001d1828:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d182c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001d1930;
        }
    }
L_001d1830:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001d1834:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001d1838:;
    {
        wr32(cpu->r[5] + + 0x858u, cpu->r[3]);
    }
L_001d183c:;
    {
        goto L_001d17ac;
    }
L_001d1840:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001d1844:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001d1848:;
    {
        cpu->r[14] = 0x001d1850u;
    }
L_001d184c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d1850u)) return;
    }
L_001d1850:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d1854:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001d1908;
        }
    }
L_001d1858:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d17a8;
        }
    }
L_001d185c:;
    {
        cpu->r[8] = 0x00000004u;
    }
L_001d1860:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x8u);
    }
L_001d1864:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001d1868:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001d186c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001d1870:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001d1874:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[8]);
    }
L_001d1878:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001d187c:;
    {
        cpu->r[14] = 0x001d1880u; imp_getsockopt(cpu); /* getsockopt */
    }
L_001d1880:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d1884:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001d1908;
        }
    }
L_001d1888:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x10u);
    }
L_001d188c:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001d1890:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d1908;
        }
    }
L_001d1894:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x8u);
    }
L_001d1898:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_001d189c:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001d18a0:;
    {
        cpu->r[14] = 0x001d18a4u; imp_fcntl(cpu); /* fcntl */
    }
L_001d18a4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d18a8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001d18e0;
        }
    }
L_001d18ac:;
    {
        uint32_t v = cpu->r[0] & ~ 0x00000800u; cpu->r[2] = v;
    }
L_001d18b0:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001d18b4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x8u);
    }
L_001d18b8:;
    {
        cpu->r[14] = 0x001d18bcu; imp_fcntl(cpu); /* fcntl */
    }
L_001d18bc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d18c0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = 0x00000002u;
        }
    }
L_001d18c4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = cpu->r[6];
        }
    }
L_001d18c8:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[5] + + 0x858u, cpu->r[3]);
        }
    }
L_001d18cc:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001d17ac;
        }
    }
L_001d18d0:;
    {
        goto L_001d18e0;
    }
L_001d18d4:;
    {
        cpu->r[0] = rd32(0x001d18dcu + + 0xc0u);
    }
L_001d18d8:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d18e0u, cpu->r[0], 0, 0);
    }
L_001d18dc:;
    {
        cpu->r[14] = 0x001d18e0u; fn_001d0ac4(cpu);
    }
L_001d18e0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001d18e4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d18e8:;
    {
        cpu->r[14] = 0x001d18f0u;
    }
L_001d18ec:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d18f0u)) return;
    }
L_001d18f0:;
    {
        cpu->r[3] = 0x00000007u;
    }
L_001d18f4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001d18f8:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[3]);
    }
L_001d18fc:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_001d1900:;
    {
        wr32(cpu->r[5] + + 0x858u, cpu->r[3]);
    }
L_001d1904:;
    {
        goto L_001d17ac;
    }
L_001d1908:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001d190c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d1910:;
    {
        cpu->r[14] = 0x001d1918u;
    }
L_001d1914:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d1918u)) return;
    }
L_001d1918:;
    {
        cpu->r[3] = 0x00000007u;
    }
L_001d191c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001d1920:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[3]);
    }
L_001d1924:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_001d1928:;
    {
        wr32(cpu->r[5] + + 0x858u, cpu->r[3]);
    }
L_001d192c:;
    {
        goto L_001d17ac;
    }
L_001d1930:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001d1934:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d1938:;
    {
        cpu->r[14] = 0x001d1940u;
    }
L_001d193c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d1940u)) return;
    }
L_001d1940:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000073u, 1, 1);
    }
L_001d1944:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d1830;
        }
    }
L_001d1948:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001d194c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d1950:;
    {
        cpu->r[14] = 0x001d1958u;
    }
L_001d1954:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d1958u)) return;
    }
L_001d1958:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001d195c:;
    {
        cpu->r[0] = rd32(0x001d1964u + + 0x3cu);
    }
L_001d1960:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d1968u, cpu->r[0], 0, 0);
    }
L_001d1964:;
    {
        cpu->r[14] = 0x001d1968u; fn_001d0ac4(cpu);
    }
L_001d1968:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001d196c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d1970:;
    {
        cpu->r[14] = 0x001d1978u;
    }
L_001d1974:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d1978u)) return;
    }
L_001d1978:;
    {
        cpu->r[3] = 0x00000007u;
    }
L_001d197c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001d1980:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[3]);
    }
L_001d1984:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_001d1988:;
    {
        wr32(cpu->r[5] + + 0x858u, cpu->r[3]);
    }
L_001d198c:;
    {
        goto L_001d17ac;
    }
L_001d1990:;
    {
        cpu->r[14] = 0x001d1994u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001d1994:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] * cpu->r[12]; cpu->r[7] = v;
        }
    }
L_001d1998:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001d199c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[0], 3, 8u, &shc); cpu->r[0] = v;
        }
    }
L_001d19a0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[6] + (-cpu->r[4]);
        uint64_t v = rd64(cpu->r[6]);
        cpu->r[0] = (uint32_t)v;
        cpu->r[1] = (uint32_t)(v >> 32);
        cpu->r[6] = wb_tmp;
        }
    }
}

/* _ZN14CAndroidSocket7ConnectEv @ 001d19a4 (arm) */
void fn_001d19a4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d19a4:;
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
L_001d19a8:;
    {
        cpu->r[4] = rd32(0x001d19b0u + + 0x258u);
    }
L_001d19ac:;
    {
        cpu->r[7] = rd32(0x001d19b4u + + 0x258u);
    }
L_001d19b0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_001d19b4:;
    {
        cpu->r[4] = add_flags(cpu, 0x001d19bcu, cpu->r[4], 0, 0);
    }
L_001d19b8:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x858u);
    }
L_001d19bc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001d19c0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001d19c4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001d19c8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d19cc:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_001d19d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d1a00;
        }
    }
L_001d19d4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_001d19d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d1a8c;
        }
    }
L_001d19dc:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001d19e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001d19e4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001d19e8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_001d19ec:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d19f0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001d19f4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d1c04;
        }
    }
L_001d19f8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_001d19fc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d1a00u)) return;
    }
L_001d1a00:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001d1a04:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001d1a08:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001d1a0c:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_001d1a10:;
    {
        cpu->r[14] = 0x001d1a14u; fn_001d0700(cpu);
    }
L_001d1a14:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xcu);
    }
L_001d1a18:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_001d1a1c:;
    {
        wr16(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_001d1a20:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_001d1a24:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x10u);
    }
L_001d1a28:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0xcu);
    }
L_001d1a2c:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_001d1a30:;
    {
        cpu->r[14] = 0x001d1a34u; fn_001d06ec(cpu);
    }
L_001d1a34:;
    {
        cpu->r[2] = rd16(cpu->r[5] + + 0x10u);
    }
L_001d1a38:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001d1a3c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d1a40:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 8u, &shc); cpu->r[1] = v;
    }
L_001d1a44:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[2], 2, 8u, &shc); cpu->r[2] = v;
    }
L_001d1a48:;
    {
        wr16(cpu->r[13] + + 0x16u, cpu->r[2]);
    }
L_001d1a4c:;
    {
        cpu->r[14] = 0x001d1a54u;
    }
L_001d1a50:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x30u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d1a54u)) return;
    }
L_001d1a54:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d1a58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d1b40;
        }
    }
L_001d1a5c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001d1a60:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x8u);
    }
L_001d1a64:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_001d1a68:;
    {
        cpu->r[14] = 0x001d1a6cu; imp_connect(cpu); /* connect */
    }
L_001d1a6c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d1a70:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001d1b6c;
        }
    }
L_001d1a74:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001d1a78:;
    {
        wr32(cpu->r[5] + + 0x858u, cpu->r[3]);
    }
L_001d1a7c:;
    {
        cpu->r[14] = 0x001d1a80u; fn_001d05bc(cpu);
    }
L_001d1a80:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001d1a84:;
    {
        wr32(cpu->r[5] + + 0x860u, cpu->r[0]);
    }
L_001d1a88:;
    {
        goto L_001d19e0;
    }
L_001d1a8c:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001d1a90:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001d1a94:;
    {
        cpu->r[14] = 0x001d1a9cu;
    }
L_001d1a98:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d1a9cu)) return;
    }
L_001d1a9c:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d1aa0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001d1bc0;
        }
    }
L_001d1aa4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d1be8;
        }
    }
L_001d1aa8:;
    {
        cpu->r[8] = 0x00000004u;
    }
L_001d1aac:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x8u);
    }
L_001d1ab0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001d1ab4:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001d1ab8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001d1abc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001d1ac0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[8]);
    }
L_001d1ac4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001d1ac8:;
    {
        cpu->r[14] = 0x001d1accu; imp_getsockopt(cpu); /* getsockopt */
    }
L_001d1acc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d1ad0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001d1bc0;
        }
    }
L_001d1ad4:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x10u);
    }
L_001d1ad8:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001d1adc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d1bc0;
        }
    }
L_001d1ae0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x8u);
    }
L_001d1ae4:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_001d1ae8:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001d1aec:;
    {
        cpu->r[14] = 0x001d1af0u; imp_fcntl(cpu); /* fcntl */
    }
L_001d1af0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d1af4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001d1b18;
        }
    }
L_001d1af8:;
    {
        uint32_t v = cpu->r[0] & ~ 0x00000800u; cpu->r[2] = v;
    }
L_001d1afc:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001d1b00:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x8u);
    }
L_001d1b04:;
    {
        cpu->r[14] = 0x001d1b08u; imp_fcntl(cpu); /* fcntl */
    }
L_001d1b08:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d1b0c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = 0x00000002u;
        }
    }
L_001d1b10:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[5] + + 0x858u, cpu->r[3]);
        }
    }
L_001d1b14:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001d19e0;
        }
    }
L_001d1b18:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001d1b1c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d1b20:;
    {
        cpu->r[14] = 0x001d1b28u;
    }
L_001d1b24:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d1b28u)) return;
    }
L_001d1b28:;
    {
        cpu->r[6] = cpu->r[10];
    }
L_001d1b2c:;
    {
        cpu->r[3] = 0x00000007u;
    }
L_001d1b30:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[3]);
    }
L_001d1b34:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_001d1b38:;
    {
        wr32(cpu->r[5] + + 0x858u, cpu->r[3]);
    }
L_001d1b3c:;
    {
        goto L_001d19e0;
    }
L_001d1b40:;
    {
        cpu->r[0] = rd32(0x001d1b48u + + 0xc8u);
    }
L_001d1b44:;
    {
        cpu->r[6] = cpu->r[10];
    }
L_001d1b48:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d1b50u, cpu->r[0], 0, 0);
    }
L_001d1b4c:;
    {
        cpu->r[14] = 0x001d1b50u; fn_001d0ac4(cpu);
    }
L_001d1b50:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001d1b54:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d1b58:;
    {
        cpu->r[14] = 0x001d1b60u;
    }
L_001d1b5c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d1b60u)) return;
    }
L_001d1b60:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_001d1b64:;
    {
        wr32(cpu->r[5] + + 0x858u, cpu->r[3]);
    }
L_001d1b68:;
    {
        goto L_001d19e0;
    }
L_001d1b6c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001d1b70:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d1b74:;
    {
        cpu->r[14] = 0x001d1b7cu;
    }
L_001d1b78:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d1b7cu)) return;
    }
L_001d1b7c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000073u, 1, 1);
    }
L_001d1b80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d1a74;
        }
    }
L_001d1b84:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001d1b88:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d1b8c:;
    {
        cpu->r[14] = 0x001d1b94u;
    }
L_001d1b90:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d1b94u)) return;
    }
L_001d1b94:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001d1b98:;
    {
        cpu->r[0] = rd32(0x001d1ba0u + + 0x74u);
    }
L_001d1b9c:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d1ba4u, cpu->r[0], 0, 0);
    }
L_001d1ba0:;
    {
        cpu->r[14] = 0x001d1ba4u; fn_001d0ac4(cpu);
    }
L_001d1ba4:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001d1ba8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d1bac:;
    {
        cpu->r[14] = 0x001d1bb4u;
    }
L_001d1bb0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d1bb4u)) return;
    }
L_001d1bb4:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_001d1bb8:;
    {
        wr32(cpu->r[5] + + 0x858u, cpu->r[3]);
    }
L_001d1bbc:;
    {
        goto L_001d19e0;
    }
L_001d1bc0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001d1bc4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d1bc8:;
    {
        cpu->r[14] = 0x001d1bd0u;
    }
L_001d1bcc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d1bd0u)) return;
    }
L_001d1bd0:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001d1bd4:;
    {
        cpu->r[3] = 0x00000007u;
    }
L_001d1bd8:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[3]);
    }
L_001d1bdc:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_001d1be0:;
    {
        wr32(cpu->r[5] + + 0x858u, cpu->r[3]);
    }
L_001d1be4:;
    {
        goto L_001d19e0;
    }
L_001d1be8:;
    {
        cpu->r[14] = 0x001d1becu; fn_001d05bc(cpu);
    }
L_001d1bec:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x860u);
    }
L_001d1bf0:;
    {
        cpu->r[2] = 0x00007530u;
    }
L_001d1bf4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_001d1bf8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001d1bfc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d19dc;
        }
    }
L_001d1c00:;
    {
        goto L_001d1b18;
    }
L_001d1c04:;
    {
        cpu->r[14] = 0x001d1c08u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001d1c08:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[12], 1, (cpu->r[10] & 0xffu), &shc); cpu->r[8] = v;
        }
    }
L_001d1c0c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001d1c10:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[4], 2, (cpu->r[2] & 0xffu), &shc); cpu->r[0] = v;
        }
    }
L_001d1c14:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] * cpu->r[1]; cpu->r[6] = v;
        }
    }
}

/* _ZN14CAndroidSocket13ConnectByNameEPc @ 001d1c18 (arm) */
void fn_001d1c18(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001d1c18:;
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
L_001d1c1c:;
    {
        cpu->r[4] = rd32(0x001d1c24u + + 0x29cu);
    }
L_001d1c20:;
    {
        cpu->r[7] = rd32(0x001d1c28u + + 0x29cu);
    }
L_001d1c24:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_001d1c28:;
    {
        cpu->r[4] = add_flags(cpu, 0x001d1c30u, cpu->r[4], 0, 0);
    }
L_001d1c2c:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x858u);
    }
L_001d1c30:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001d1c34:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001d1c38:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001d1c3c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d1c40:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_001d1c44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d1c74;
        }
    }
L_001d1c48:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_001d1c4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d1d1c;
        }
    }
L_001d1c50:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001d1c54:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_001d1c58:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001d1c5c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_001d1c60:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001d1c64:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001d1c68:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d1ebc;
        }
    }
L_001d1c6c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_001d1c70:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001d1c74u)) return;
    }
L_001d1c74:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001d1c78:;
    {
        cpu->r[14] = 0x001d1c80u;
    }
L_001d1c7c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x20u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d1c80u)) return;
    }
L_001d1c80:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d1c84:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001d1c88:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[0]);
    }
L_001d1c8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d1e64;
        }
    }
L_001d1c90:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001d1c94:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001d1c98:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001d1c9c:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_001d1ca0:;
    {
        cpu->r[14] = 0x001d1ca4u; fn_001d0700(cpu);
    }
L_001d1ca4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0xcu);
    }
L_001d1ca8:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_001d1cac:;
    {
        wr16(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_001d1cb0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_001d1cb4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x10u);
    }
L_001d1cb8:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0xcu);
    }
L_001d1cbc:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_001d1cc0:;
    {
        cpu->r[14] = 0x001d1cc4u; fn_001d06ec(cpu);
    }
L_001d1cc4:;
    {
        cpu->r[2] = rd16(cpu->r[5] + + 0x10u);
    }
L_001d1cc8:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001d1ccc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d1cd0:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 8u, &shc); cpu->r[1] = v;
    }
L_001d1cd4:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[2], 2, 8u, &shc); cpu->r[2] = v;
    }
L_001d1cd8:;
    {
        wr16(cpu->r[13] + + 0x16u, cpu->r[2]);
    }
L_001d1cdc:;
    {
        cpu->r[14] = 0x001d1ce4u;
    }
L_001d1ce0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x30u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d1ce4u)) return;
    }
L_001d1ce4:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d1ce8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d1dac;
        }
    }
L_001d1cec:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001d1cf0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x8u);
    }
L_001d1cf4:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_001d1cf8:;
    {
        cpu->r[14] = 0x001d1cfcu; imp_connect(cpu); /* connect */
    }
L_001d1cfc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d1d00:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001d1de0;
        }
    }
L_001d1d04:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001d1d08:;
    {
        wr32(cpu->r[5] + + 0x858u, cpu->r[3]);
    }
L_001d1d0c:;
    {
        cpu->r[14] = 0x001d1d10u; fn_001d05bc(cpu);
    }
L_001d1d10:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001d1d14:;
    {
        wr32(cpu->r[5] + + 0x860u, cpu->r[0]);
    }
L_001d1d18:;
    {
        goto L_001d1c54;
    }
L_001d1d1c:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001d1d20:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001d1d24:;
    {
        cpu->r[14] = 0x001d1d2cu;
    }
L_001d1d28:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d1d2cu)) return;
    }
L_001d1d2c:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d1d30:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001d1e3c;
        }
    }
L_001d1d34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d1ea0;
        }
    }
L_001d1d38:;
    {
        cpu->r[8] = 0x00000004u;
    }
L_001d1d3c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x8u);
    }
L_001d1d40:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001d1d44:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001d1d48:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001d1d4c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001d1d50:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[8]);
    }
L_001d1d54:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001d1d58:;
    {
        cpu->r[14] = 0x001d1d5cu; imp_getsockopt(cpu); /* getsockopt */
    }
L_001d1d5c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d1d60:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001d1e3c;
        }
    }
L_001d1d64:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x10u);
    }
L_001d1d68:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001d1d6c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001d1e3c;
        }
    }
L_001d1d70:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x8u);
    }
L_001d1d74:;
    {
        cpu->r[1] = 0x00000003u;
    }
L_001d1d78:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001d1d7c:;
    {
        cpu->r[14] = 0x001d1d80u; imp_fcntl(cpu); /* fcntl */
    }
L_001d1d80:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d1d84:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001d1db8;
        }
    }
L_001d1d88:;
    {
        uint32_t v = cpu->r[0] & ~ 0x00000800u; cpu->r[2] = v;
    }
L_001d1d8c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001d1d90:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x8u);
    }
L_001d1d94:;
    {
        cpu->r[14] = 0x001d1d98u; imp_fcntl(cpu); /* fcntl */
    }
L_001d1d98:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001d1d9c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = 0x00000002u;
        }
    }
L_001d1da0:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[5] + + 0x858u, cpu->r[3]);
        }
    }
L_001d1da4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001d1c54;
        }
    }
L_001d1da8:;
    {
        goto L_001d1db8;
    }
L_001d1dac:;
    {
        cpu->r[0] = rd32(0x001d1db4u + + 0x114u);
    }
L_001d1db0:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d1db8u, cpu->r[0], 0, 0);
    }
L_001d1db4:;
    {
        cpu->r[14] = 0x001d1db8u; fn_001d0ac4(cpu);
    }
L_001d1db8:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001d1dbc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d1dc0:;
    {
        cpu->r[14] = 0x001d1dc8u;
    }
L_001d1dc4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d1dc8u)) return;
    }
L_001d1dc8:;
    {
        cpu->r[6] = cpu->r[10];
    }
L_001d1dcc:;
    {
        cpu->r[3] = 0x00000007u;
    }
L_001d1dd0:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[3]);
    }
L_001d1dd4:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_001d1dd8:;
    {
        wr32(cpu->r[5] + + 0x858u, cpu->r[3]);
    }
L_001d1ddc:;
    {
        goto L_001d1c54;
    }
L_001d1de0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001d1de4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d1de8:;
    {
        cpu->r[14] = 0x001d1df0u;
    }
L_001d1dec:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d1df0u)) return;
    }
L_001d1df0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000073u, 1, 1);
    }
L_001d1df4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001d1d04;
        }
    }
L_001d1df8:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001d1dfc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d1e00:;
    {
        cpu->r[14] = 0x001d1e08u;
    }
L_001d1e04:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d1e08u)) return;
    }
L_001d1e08:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001d1e0c:;
    {
        cpu->r[0] = rd32(0x001d1e14u + + 0xb8u);
    }
L_001d1e10:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d1e18u, cpu->r[0], 0, 0);
    }
L_001d1e14:;
    {
        cpu->r[14] = 0x001d1e18u; fn_001d0ac4(cpu);
    }
L_001d1e18:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001d1e1c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d1e20:;
    {
        cpu->r[14] = 0x001d1e28u;
    }
L_001d1e24:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d1e28u)) return;
    }
L_001d1e28:;
    {
        cpu->r[3] = 0x00000007u;
    }
L_001d1e2c:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[3]);
    }
L_001d1e30:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_001d1e34:;
    {
        wr32(cpu->r[5] + + 0x858u, cpu->r[3]);
    }
L_001d1e38:;
    {
        goto L_001d1c54;
    }
L_001d1e3c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001d1e40:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d1e44:;
    {
        cpu->r[14] = 0x001d1e4cu;
    }
L_001d1e48:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d1e4cu)) return;
    }
L_001d1e4c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001d1e50:;
    {
        cpu->r[3] = 0x00000007u;
    }
L_001d1e54:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[3]);
    }
L_001d1e58:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_001d1e5c:;
    {
        wr32(cpu->r[5] + + 0x858u, cpu->r[3]);
    }
L_001d1e60:;
    {
        goto L_001d1c54;
    }
L_001d1e64:;
    {
        cpu->r[14] = 0x001d1e68u; fn_001d05bc(cpu);
    }
L_001d1e68:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x864u);
    }
L_001d1e6c:;
    {
        cpu->r[2] = 0x0000270fu;
    }
L_001d1e70:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_001d1e74:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001d1e78:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d1c50;
        }
    }
L_001d1e7c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001d1e80:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001d1e84:;
    {
        cpu->r[14] = 0x001d1e8cu;
    }
L_001d1e88:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x2cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001d1e8cu)) return;
    }
L_001d1e8c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001d1e90:;
    {
        cpu->r[0] = rd32(0x001d1e98u + + 0x38u);
    }
L_001d1e94:;
    {
        cpu->r[0] = add_flags(cpu, 0x001d1e9cu, cpu->r[0], 0, 0);
    }
L_001d1e98:;
    {
        cpu->r[14] = 0x001d1e9cu; fn_001d0ac4(cpu);
    }
L_001d1e9c:;
    {
        goto L_001d1db8;
    }
L_001d1ea0:;
    {
        cpu->r[14] = 0x001d1ea4u; fn_001d05bc(cpu);
    }
L_001d1ea4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x860u);
    }
L_001d1ea8:;
    {
        cpu->r[2] = 0x00007530u;
    }
L_001d1eac:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_001d1eb0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001d1eb4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001d1c50;
        }
    }
L_001d1eb8:;
    {
        goto L_001d1db8;
    }
L_001d1ebc:;
    {
        cpu->r[14] = 0x001d1ec0u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001d1ec0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[8], 4, 15u, &shc); cpu->r[8] = v;
        }
    }
L_001d1ec4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001d1ec8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[0], 3, 32u, &shc); cpu->r[0] = v;
        }
    }
L_001d1ecc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[6] & shifter(cpu->r[0], 2, (cpu->r[0] & 0xffu), &shc); cpu->r[0] = v;
        }
    }
L_001d1ed0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[5] & shifter(cpu->r[0], 2, 30u, &shc); uint32_t t = v; if (guest_pc_write(cpu, t, entry_lr, 0x001d1ed4u)) return;
        }
    }
}
