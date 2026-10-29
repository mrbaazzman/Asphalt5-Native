#include "functions.h"

/* _ZN15Lib3D_NameSpace10GetXOrientERK8Vector4sS2_ @ 0018002c (arm) */
void fn_0018002c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018002c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00180030:;
    {
        cpu->r[2] = rd32(cpu->r[0]);
    }
L_00180034:;
    {
        cpu->r[14] = rd32(cpu->r[1]);
    }
L_00180038:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x8u);
    }
L_0018003c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_00180040:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[14], cpu->r[2], 1, 0);
    }
L_00180044:;
    {
        cpu->r[4] = rd32(cpu->r[1] + + 0x4u);
    }
L_00180048:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 0);
    }
L_0018004c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x4u);
    }
L_00180050:;
    {
        uint32_t v = cpu->r[2] * cpu->r[2]; cpu->r[2] = v;
    }
L_00180054:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 0);
    }
L_00180058:;
    {
        uint32_t v = cpu->r[3] * cpu->r[3] + cpu->r[2]; cpu->r[0] = v;
    }
L_0018005c:;
    {
        cpu->r[14] = 0x00180060u; fn_0017fa74(cpu);
    }
L_00180060:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00180064:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_00180068:;
    {
        return fn_0017fe7c(cpu);
    }
}

/* _ZN15Lib3D_NameSpace9AngleDiffEii @ 0018006c (arm) */
void fn_0018006c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018006c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 0);
    }
L_00180070:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 21u, &shc); cpu->r[0] = v;
    }
L_00180074:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 21u, &shc); cpu->r[0] = v;
    }
L_00180078:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000400u, 1, 1);
    }
L_0018007c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000800u, 1, 0);
        }
    }
L_00180080:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15Lib3D_NameSpace4Log2Ei @ 00180084 (arm) */
void fn_00180084(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00180084:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00180088:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0018008c:;
    {
        if (cond_test(cpu, 14)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00180090:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00180094:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00180098:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_0018009c:;
    {
        sub_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, (cpu->r[0] & 0xffu), &shc), 1, 1);
    }
L_001800a0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00180098;
        }
    }
L_001800a4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15Lib3D_NameSpace23PositiveQuadraticRoot12Eiii @ 001800a8 (arm) */
void fn_001800a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001800a8:;
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
L_001800ac:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001800b0:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001800b4:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001800b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001800cc;
        }
    }
L_001800bc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001800c0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00180204;
        }
    }
L_001800c4:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001800c8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001800ccu)) return;
    }
L_001800cc:;
    {
        uint32_t v = cpu->r[4] ^ shifter(cpu->r[4], 1, 31u, &shc); cpu->r[3] = v;
    }
L_001800d0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[4], 1, 31u, &shc), 1, 0);
    }
L_001800d4:;
    {
        uint32_t v = cpu->r[1] ^ shifter(cpu->r[1], 1, 31u, &shc); cpu->r[8] = v;
    }
L_001800d8:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], shifter(cpu->r[1], 1, 31u, &shc), 1, 0);
    }
L_001800dc:;
    {
        uint32_t v = cpu->r[2] ^ shifter(cpu->r[2], 1, 31u, &shc); cpu->r[10] = v;
    }
L_001800e0:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], shifter(cpu->r[2], 1, 31u, &shc), 1, 0);
    }
L_001800e4:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_001800e8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[7] = cpu->r[8];
        }
    }
L_001800ec:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = cpu->r[3];
        }
    }
L_001800f0:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[10], 1, 1);
    }
L_001800f4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = cpu->r[10];
        }
    }
L_001800f8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00080000u, 1, 1);
    }
L_001800fc:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001801c4;
        }
    }
L_00180100:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 12u, &shc); cpu->r[0] = v;
    }
L_00180104:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00180108:;
    {
        cpu->r[14] = 0x0018010cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0018010c:;
    {
        sub_flags(cpu, cpu->r[8], 0x00080000u, 1, 1);
    }
L_00180110:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_00180114:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001801d8;
        }
    }
L_00180118:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 12u, &shc); cpu->r[0] = v;
    }
L_0018011c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00180120:;
    {
        cpu->r[14] = 0x00180124u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00180124:;
    {
        sub_flags(cpu, cpu->r[10], 0x00080000u, 1, 1);
    }
L_00180128:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0018012c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001801f0;
        }
    }
L_00180130:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 12u, &shc); cpu->r[0] = v;
    }
L_00180134:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00180138:;
    {
        cpu->r[14] = 0x0018013cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0018013c:;
    {
        uint32_t v = cpu->r[9] * cpu->r[0]; cpu->r[9] = v;
    }
L_00180140:;
    {
        uint32_t v = cpu->r[8] * cpu->r[8]; cpu->r[8] = v;
    }
L_00180144:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], shifter(cpu->r[9], 2, 2u, &shc), 1, 1);
    }
L_00180148:;
    {
        if (cond_test(cpu, 5)) {
        goto L_001800c4;
        }
    }
L_0018014c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00180150:;
    {
        cpu->r[14] = 0x00180154u; fn_0017fa74(cpu);
    }
L_00180154:;
    {
        cpu->r[3] = 0x0000b504u;
    }
L_00180158:;
    {
        uint32_t v = cpu->r[0] ^ shifter(cpu->r[0], 1, 31u, &shc); cpu->r[2] = v;
    }
L_0018015c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[0], 1, 31u, &shc), 1, 0);
    }
L_00180160:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00180164:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = shifter(cpu->r[0], 1, 12u, &shc); cpu->r[0] = v;
        }
    }
L_00180168:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = cpu->r[7] * cpu->r[0]; cpu->r[0] = v;
        }
    }
L_0018016c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0018018c;
        }
    }
L_00180170:;
    {
        uint32_t v = cpu->r[7] ^ shifter(cpu->r[7], 1, 31u, &shc); cpu->r[2] = v;
    }
L_00180174:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[7], 1, 31u, &shc), 1, 0);
    }
L_00180178:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0018017c:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = shifter(cpu->r[7], 1, 12u, &shc); cpu->r[7] = v;
        }
    }
L_00180180:;
    {
        if (cond_test(cpu, 14)) {
        uint32_t v = cpu->r[7] * cpu->r[0]; cpu->r[0] = v;
        }
    }
L_00180184:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = cpu->r[7] * cpu->r[0]; cpu->r[0] = v;
        }
    }
L_00180188:;
    {
        if (cond_test(cpu, 14)) {
        uint32_t v = shifter(cpu->r[0], 1, 12u, &shc); cpu->r[0] = v;
        }
    }
L_0018018c:;
    {
        uint32_t v = shifter(cpu->r[4], 3, 31u, &shc); cpu->r[3] = v;
    }
L_00180190:;
    {
        sub_flags(cpu, cpu->r[3], shifter(cpu->r[9], 3, 31u, &shc), 1, 1);
    }
L_00180194:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
        }
    }
L_00180198:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 0);
    }
L_0018019c:;
    {
        sub_flags(cpu, cpu->r[3], shifter(cpu->r[0], 3, 31u, &shc), 1, 1);
    }
L_001801a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001800c4;
        }
    }
L_001801a4:;
    {
        uint32_t v = cpu->r[0] ^ shifter(cpu->r[0], 1, 31u, &shc); cpu->r[3] = v;
    }
L_001801a8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 31u, &shc), 1, 0);
    }
L_001801ac:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 1u, &shc); cpu->r[1] = v;
    }
L_001801b0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00080000u, 1, 1);
    }
L_001801b4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00180224;
        }
    }
L_001801b8:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 12u, &shc); cpu->r[0] = v;
    }
L_001801bc:;
    {
        cpu->r[14] = 0x001801c0u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001801c0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001801c4u)) return;
    }
L_001801c4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001801c8:;
    {
        cpu->r[14] = 0x001801ccu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001801cc:;
    {
        sub_flags(cpu, cpu->r[8], 0x00080000u, 1, 1);
    }
L_001801d0:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 12u, &shc); cpu->r[9] = v;
    }
L_001801d4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00180118;
        }
    }
L_001801d8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001801dc:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001801e0:;
    {
        cpu->r[14] = 0x001801e4u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001801e4:;
    {
        sub_flags(cpu, cpu->r[10], 0x00080000u, 1, 1);
    }
L_001801e8:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 12u, &shc); cpu->r[8] = v;
    }
L_001801ec:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00180130;
        }
    }
L_001801f0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001801f4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001801f8:;
    {
        cpu->r[14] = 0x001801fcu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001801fc:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 12u, &shc); cpu->r[0] = v;
    }
L_00180200:;
    {
        goto L_0018013c;
    }
L_00180204:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[2], 1, 0);
    }
L_00180208:;
    {
        uint32_t v = cpu->r[0] ^ shifter(cpu->r[0], 1, 31u, &shc); cpu->r[3] = v;
    }
L_0018020c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 31u, &shc), 1, 0);
    }
L_00180210:;
    {
        sub_flags(cpu, cpu->r[3], 0x00080000u, 1, 1);
    }
L_00180214:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00180224;
        }
    }
L_00180218:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 12u, &shc); cpu->r[0] = v;
    }
L_0018021c:;
    {
        cpu->r[14] = 0x00180220u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00180220:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00180224u)) return;
    }
L_00180224:;
    {
        cpu->r[14] = 0x00180228u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00180228:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 12u, &shc); cpu->r[0] = v;
    }
L_0018022c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00180230u)) return;
    }
}

/* _Z25SetShortcutCollisionVertsPK11RoadSectionP14CCollisionBodyR8Vector4sS5_ @ 00180230 (arm) */
void fn_00180230(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00180230:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x24u);
    }
L_00180234:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x28u);
    }
L_00180238:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
    }
L_0018023c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 1);
    }
L_00180240:;
    {
        cpu->r[7] = rd32(cpu->r[1]);
    }
L_00180244:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[4] = rd32(cpu->r[1] + + 0xcu);
        }
    }
L_00180248:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[5] = rd32(cpu->r[1] + + 0x14u);
        }
    }
L_0018024c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[4] = rd32(cpu->r[1] + + 0x18u);
        }
    }
L_00180250:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[12] = rd32(cpu->r[1] + + 0x1cu);
        }
    }
L_00180254:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[5] = rd32(cpu->r[1] + + 0x20u);
        }
    }
L_00180258:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = rd32(cpu->r[1] + + 0x10u);
        }
    }
L_0018025c:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = cpu->r[4] * cpu->r[12]; cpu->r[4] = v;
        }
    }
L_00180260:;
    {
        cpu->r[6] = rd32(cpu->r[1] + + 0x4u);
    }
L_00180264:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = cpu->r[5] * cpu->r[12]; cpu->r[5] = v;
        }
    }
L_00180268:;
    {
        if (cond_test(cpu, 14)) {
        uint32_t v = cpu->r[4] * cpu->r[0]; cpu->r[4] = v;
        }
    }
L_0018026c:;
    {
        if (cond_test(cpu, 14)) {
        uint32_t v = cpu->r[5] * cpu->r[0]; cpu->r[5] = v;
        }
    }
L_00180270:;
    {
        uint32_t v = cpu->r[12] * cpu->r[0]; cpu->r[0] = v;
    }
L_00180274:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x8u);
    }
L_00180278:;
    {
        uint32_t v = shifter(cpu->r[4], 1, 12u, &shc); cpu->r[4] = v;
    }
L_0018027c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], cpu->r[7], 0, 0);
    }
L_00180280:;
    {
        wr32(cpu->r[2], cpu->r[7]);
    }
L_00180284:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 12u, &shc); cpu->r[5] = v;
    }
L_00180288:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[5], cpu->r[12], 0, 0);
    }
L_0018028c:;
    {
        wr32(cpu->r[2] + + 0x8u, cpu->r[12]);
    }
L_00180290:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 12u, &shc); cpu->r[0] = v;
    }
L_00180294:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
    }
L_00180298:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[6]);
    }
L_0018029c:;
    {
        cpu->r[6] = rd32(cpu->r[1] + + 0x8u);
    }
L_001802a0:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[12] = v1;
    }
L_001802a4:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 0);
    }
L_001802a8:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 0);
    }
L_001802ac:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[5]);
    }
L_001802b0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 0);
    }
L_001802b4:;
    {
        wr32(cpu->r[3], cpu->r[4]);
    }
L_001802b8:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[0]);
    }
L_001802bc:;
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
L_001802c0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4CMapC2Ev @ 001802c4 (arm) */
void fn_001802c4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001802c4:;
    {
        cpu->r[2] = rd32(0x001802ccu + + 0x90u);
    }
L_001802c8:;
    {
        cpu->r[12] = 0x000010c4u;
    }
L_001802cc:;
    {
        cpu->r[1] = rd32(0x001802d4u + + 0x8cu);
    }
L_001802d0:;
    {
        cpu->r[2] = add_flags(cpu, 0x001802d8u, cpu->r[2], 0, 0);
    }
L_001802d4:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_001802d8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001802dc:;
    {
        wr32(cpu->r[0] + + 0x38u, cpu->r[2]);
    }
L_001802e0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_001802e4:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_001802e8:;
    {
        cpu->r[1] = 0x000010bcu;
    }
L_001802ec:;
    {
        wr32(cpu->r[0] + + 0x3cu, cpu->r[2]);
    }
L_001802f0:;
    {
        wr32(cpu->r[0] + cpu->r[1], cpu->r[2]);
    }
L_001802f4:;
    {
        cpu->r[1] = 0x00001084u;
    }
L_001802f8:;
    {
        wr32(cpu->r[0] + cpu->r[1], cpu->r[2]);
    }
L_001802fc:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_00180300:;
    {
        wr32(cpu->r[0] + cpu->r[12], cpu->r[1]);
    }
L_00180304:;
    {
        cpu->r[12] = 0x00001098u;
    }
L_00180308:;
    {
        wr32(cpu->r[0] + + 0x34u, cpu->r[1]);
    }
L_0018030c:;
    {
        wr32(cpu->r[0] + cpu->r[12], cpu->r[2]);
    }
L_00180310:;
    {
        cpu->r[12] = 0x0000109cu;
    }
L_00180314:;
    {
        wr32(cpu->r[0] + cpu->r[12], cpu->r[2]);
    }
L_00180318:;
    {
        cpu->r[12] = 0x000010a0u;
    }
L_0018031c:;
    {
        wr32(cpu->r[0] + cpu->r[12], cpu->r[2]);
    }
L_00180320:;
    {
        cpu->r[12] = 0x000010a4u;
    }
L_00180324:;
    {
        wr32(cpu->r[0] + cpu->r[12], cpu->r[2]);
    }
L_00180328:;
    {
        cpu->r[12] = 0x000010a8u;
    }
L_0018032c:;
    {
        wr32(cpu->r[0] + cpu->r[12], cpu->r[2]);
    }
L_00180330:;
    {
        cpu->r[12] = 0x000010acu;
    }
L_00180334:;
    {
        wr32(cpu->r[0] + cpu->r[12], cpu->r[2]);
    }
L_00180338:;
    {
        cpu->r[12] = 0x000010b0u;
    }
L_0018033c:;
    {
        wr32(cpu->r[0] + cpu->r[12], cpu->r[2]);
    }
L_00180340:;
    {
        cpu->r[12] = 0x000010b4u;
    }
L_00180344:;
    {
        wr32(cpu->r[0] + cpu->r[12], cpu->r[2]);
    }
L_00180348:;
    {
        cpu->r[12] = 0x000010b8u;
    }
L_0018034c:;
    {
        wr32(cpu->r[0] + cpu->r[12], cpu->r[1]);
    }
L_00180350:;
    {
        cpu->r[12] = 0x000010c0u;
    }
L_00180354:;
    {
        wr32(cpu->r[0] + cpu->r[12], cpu->r[1]);
    }
L_00180358:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4CMapC1Ev @ 00180364 (arm) */
void fn_00180364(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00180364:;
    {
        cpu->r[2] = rd32(0x0018036cu + + 0x90u);
    }
L_00180368:;
    {
        cpu->r[12] = 0x000010c4u;
    }
L_0018036c:;
    {
        cpu->r[1] = rd32(0x00180374u + + 0x8cu);
    }
L_00180370:;
    {
        cpu->r[2] = add_flags(cpu, 0x00180378u, cpu->r[2], 0, 0);
    }
L_00180374:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_00180378:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0018037c:;
    {
        wr32(cpu->r[0] + + 0x38u, cpu->r[2]);
    }
L_00180380:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_00180384:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_00180388:;
    {
        cpu->r[1] = 0x000010bcu;
    }
L_0018038c:;
    {
        wr32(cpu->r[0] + + 0x3cu, cpu->r[2]);
    }
L_00180390:;
    {
        wr32(cpu->r[0] + cpu->r[1], cpu->r[2]);
    }
L_00180394:;
    {
        cpu->r[1] = 0x00001084u;
    }
L_00180398:;
    {
        wr32(cpu->r[0] + cpu->r[1], cpu->r[2]);
    }
L_0018039c:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_001803a0:;
    {
        wr32(cpu->r[0] + cpu->r[12], cpu->r[1]);
    }
L_001803a4:;
    {
        cpu->r[12] = 0x00001098u;
    }
L_001803a8:;
    {
        wr32(cpu->r[0] + + 0x34u, cpu->r[1]);
    }
L_001803ac:;
    {
        wr32(cpu->r[0] + cpu->r[12], cpu->r[2]);
    }
L_001803b0:;
    {
        cpu->r[12] = 0x0000109cu;
    }
L_001803b4:;
    {
        wr32(cpu->r[0] + cpu->r[12], cpu->r[2]);
    }
L_001803b8:;
    {
        cpu->r[12] = 0x000010a0u;
    }
L_001803bc:;
    {
        wr32(cpu->r[0] + cpu->r[12], cpu->r[2]);
    }
L_001803c0:;
    {
        cpu->r[12] = 0x000010a4u;
    }
L_001803c4:;
    {
        wr32(cpu->r[0] + cpu->r[12], cpu->r[2]);
    }
L_001803c8:;
    {
        cpu->r[12] = 0x000010a8u;
    }
L_001803cc:;
    {
        wr32(cpu->r[0] + cpu->r[12], cpu->r[2]);
    }
L_001803d0:;
    {
        cpu->r[12] = 0x000010acu;
    }
L_001803d4:;
    {
        wr32(cpu->r[0] + cpu->r[12], cpu->r[2]);
    }
L_001803d8:;
    {
        cpu->r[12] = 0x000010b0u;
    }
L_001803dc:;
    {
        wr32(cpu->r[0] + cpu->r[12], cpu->r[2]);
    }
L_001803e0:;
    {
        cpu->r[12] = 0x000010b4u;
    }
L_001803e4:;
    {
        wr32(cpu->r[0] + cpu->r[12], cpu->r[2]);
    }
L_001803e8:;
    {
        cpu->r[12] = 0x000010b8u;
    }
L_001803ec:;
    {
        wr32(cpu->r[0] + cpu->r[12], cpu->r[1]);
    }
L_001803f0:;
    {
        cpu->r[12] = 0x000010c0u;
    }
L_001803f4:;
    {
        wr32(cpu->r[0] + cpu->r[12], cpu->r[1]);
    }
L_001803f8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4CMap9SetupRaceEiii @ 00180404 (arm) */
void fn_00180404(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00180404:;
    {
        cpu->r[12] = 0x000010dcu;
    }
L_00180408:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0018040c:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_00180410:;
    {
        wr32(cpu->r[0] + cpu->r[12], cpu->r[3]);
    }
L_00180414:;
    {
        cpu->r[12] = 0x000010d4u;
    }
L_00180418:;
    {
        wr32(cpu->r[0] + cpu->r[12], cpu->r[2]);
    }
L_0018041c:;
    {
        cpu->r[2] = 0x000010d0u;
    }
L_00180420:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[1]);
    }
L_00180424:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4CMap15GetShortcutsNumEv @ 00180428 (arm) */
void fn_00180428(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00180428:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x20u);
    }
L_0018042c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4CMap24GetShortcutCenterSectionEi @ 00180430 (arm) */
void fn_00180430(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00180430:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x24u);
    }
L_00180434:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x28u);
    }
L_00180438:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_0018043c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_00180440:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_00180444:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 1, 1u, &shc), 0, 0);
    }
L_00180448:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4CMap26GetShortcutStartSectionIdxEi @ 0018044c (arm) */
void fn_0018044c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018044c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x28u);
    }
L_00180450:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_00180454:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4CMap24GetShortcutEndSectionIdxEi @ 00180458 (arm) */
void fn_00180458(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00180458:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x24u);
    }
L_0018045c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x28u);
    }
L_00180460:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_00180464:;
    {
        cpu->r[0] = rd32(cpu->r[2] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_00180468:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_0018046c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_00180470:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4CMap19InterpolationModuloERiS0_i @ 00180474 (arm) */
void fn_00180474(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00180474:;
    {
        cpu->r[12] = rd32(cpu->r[2]);
    }
L_00180478:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_0018047c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 1);
    }
L_00180480:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00180498;
        }
    }
L_00180484:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 0);
    }
L_00180488:;
    {
        sub_flags(cpu, cpu->r[0], shifter(cpu->r[3], 1, 1u, &shc), 1, 1);
    }
L_0018048c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 0);
        }
    }
L_00180490:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[2], cpu->r[12]);
        }
    }
L_00180494:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00180498:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 0);
    }
L_0018049c:;
    {
        sub_flags(cpu, cpu->r[12], shifter(cpu->r[3], 1, 1u, &shc), 1, 1);
    }
L_001804a0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
        }
    }
L_001804a4:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[1], cpu->r[0]);
        }
    }
L_001804a8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4CMap14IsWoodenObjectEi @ 001804ac (arm) */
void fn_001804ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001804ac:;
    {
        cpu->r[3] = 0x00000741u;
    }
L_001804b0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001804b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001804e8;
        }
    }
L_001804b8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001804f0;
        }
    }
L_001804bc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000980u, 1, 1);
    }
L_001804c0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00180518;
        }
    }
L_001804c4:;
    {
        cpu->r[3] = 0x0000097fu;
    }
L_001804c8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001804cc:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001804e8;
        }
    }
L_001804d0:;
    {
        cpu->r[3] = 0x00000743u;
    }
L_001804d4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001804d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001804e8;
        }
    }
L_001804dc:;
    {
        cpu->r[3] = 0x000007ceu;
    }
L_001804e0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001804e4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00180528;
        }
    }
L_001804e8:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001804ec:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001804f0:;
    {
        cpu->r[3] = 0x0000060au;
    }
L_001804f4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001804f8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00180530;
        }
    }
L_001804fc:;
    {
        cpu->r[3] = 0x00000612u;
    }
L_00180500:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_00180504:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001804e8;
        }
    }
L_00180508:;
    {
        cpu->r[3] = 0x000006deu;
    }
L_0018050c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_00180510:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00180528;
        }
    }
L_00180514:;
    {
        goto L_001804e8;
    }
L_00180518:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000980u, 1, 0);
    }
L_0018051c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x0000000fu, 1, 0);
    }
L_00180520:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_00180524:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001804e8;
        }
    }
L_00180528:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0018052c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00180530:;
    {
        cpu->r[3] = 0x00000607u;
    }
L_00180534:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_00180538:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001804e8;
        }
    }
L_0018053c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000600u, 1, 0);
    }
L_00180540:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000004u, 1, 0);
    }
L_00180544:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_00180548:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00180528;
        }
    }
L_0018054c:;
    {
        goto L_001804e8;
    }
}

/* _ZN4CMap15GetLanePositionER8Vector2dPK11RoadSectioni @ 00180550 (arm) */
void fn_00180550(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00180550:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000007u, 1, 1);
    }
L_00180554:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
        }
    }
L_00180558:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
        }
    }
L_0018055c:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_00180560:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
        }
    }
L_00180564:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[12] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
        }
    }
L_00180568:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[4] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
        }
    }
L_0018056c:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[4] = 0x0000000eu;
        }
    }
L_00180570:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[12] = 0x0000000bu;
        }
    }
L_00180574:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[3] = 0x0000000cu;
        }
    }
L_00180578:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[2] = 0x00000009u;
        }
    }
L_0018057c:;
    {
        cpu->r[4] = rd32(cpu->r[1] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_00180580:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[4];
    }
L_00180584:;
    {
        cpu->r[2] = rd32(cpu->r[1] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_00180588:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0018058c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_00180590:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[2];
    }
L_00180594:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[3];
    }
L_00180598:;
    {
        cpu->r[1] = rd32(cpu->r[1] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_0018059c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[1];
    }
L_001805a0:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_001805a4:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_001805a8:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_001805ac:;
    {
        vfp_vadd(cpu, 14, 12, 14);
    }
L_001805b0:;
    {
        vfp_vadd(cpu, 13, 13, 15);
    }
L_001805b4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001805bcu + + 0x18u);
    }
L_001805b8:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_001805bc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001805c4u + + 0x14u);
    }
L_001805c0:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_001805c4:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001805c8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001805cc:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_001805d0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK10RoadStruct19GetNextSectionIndexEii @ 001805dc (arm) */
void fn_001805dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001805dc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x10u);
    }
L_001805e0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
    }
L_001805e4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001805e8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00180620;
        }
    }
L_001805ec:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0xcu);
    }
L_001805f0:;
    {
        cpu->r[5] = 0x000001d0u;
    }
L_001805f4:;
    {
        cpu->r[0] = 0x000001c4u;
    }
L_001805f8:;
    {
        uint32_t v = cpu->r[5] * cpu->r[1] + cpu->r[12]; cpu->r[4] = v;
    }
L_001805fc:;
    {
        cpu->r[4] = (uint32_t)(int32_t)s16(cpu->r[4] + cpu->r[0]);
    }
L_00180600:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 0);
    }
L_00180604:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 1);
    }
L_00180608:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[0] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
        }
    }
L_0018060c:;
    {
        if (cond_test(cpu, 5)) {
        goto L_0018062c;
        }
    }
L_00180610:;
    {
        uint32_t v = cpu->r[5] * cpu->r[4] + cpu->r[12]; cpu->r[12] = v;
    }
L_00180614:;
    {
        cpu->r[1] = 0x000001c6u;
    }
L_00180618:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0018061c:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[12] + cpu->r[1]);
    }
L_00180620:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_00180624:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_00180628:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
        }
    }
L_0018062c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[13] += 8u;
    }
L_00180630:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK10RoadStruct19GetPrevSectionIndexEii @ 00180634 (arm) */
void fn_00180634(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00180634:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x10u);
    }
L_00180638:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
    }
L_0018063c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00180640:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0018067c;
        }
    }
L_00180644:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0xcu);
    }
L_00180648:;
    {
        cpu->r[5] = 0x000001d0u;
    }
L_0018064c:;
    {
        cpu->r[4] = 0x000001c2u;
    }
L_00180650:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
    }
L_00180654:;
    {
        uint32_t v = cpu->r[5] * cpu->r[1] + cpu->r[12]; cpu->r[6] = v;
    }
L_00180658:;
    {
        cpu->r[4] = (uint32_t)(int32_t)s16(cpu->r[6] + cpu->r[4]);
    }
L_0018065c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[4], 0, 0);
    }
L_00180660:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00180664:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
        }
    }
L_00180668:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00180684;
        }
    }
L_0018066c:;
    {
        uint32_t v = cpu->r[5] * cpu->r[4] + cpu->r[12]; cpu->r[12] = v;
    }
L_00180670:;
    {
        cpu->r[1] = 0x000001c6u;
    }
L_00180674:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00180678:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[12] + cpu->r[1]);
    }
L_0018067c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_00180680:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
        }
    }
L_00180684:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[13] += 12u;
    }
L_00180688:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK10RoadStruct14GetSectionDiffEii @ 0018068c (arm) */
void fn_0018068c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018068c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x10u);
    }
L_00180690:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
    }
L_00180694:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00180698:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001806c8;
        }
    }
L_0018069c:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0xcu);
    }
L_001806a0:;
    {
        cpu->r[5] = 0x000001d0u;
    }
L_001806a4:;
    {
        cpu->r[12] = 0x000001c2u;
    }
L_001806a8:;
    {
        uint32_t v = cpu->r[5] * cpu->r[1] + cpu->r[4]; cpu->r[6] = v;
    }
L_001806ac:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[6] + cpu->r[12]);
    }
L_001806b0:;
    {
        cpu->r[6] = 0x000001c6u;
    }
L_001806b4:;
    {
        uint32_t v = cpu->r[5] * cpu->r[12] + cpu->r[4]; cpu->r[4] = v;
    }
L_001806b8:;
    {
        cpu->r[4] = (uint32_t)(int32_t)s16(cpu->r[4] + cpu->r[6]);
    }
L_001806bc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001806c0:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[4], cpu->r[12], 1, 0);
    }
L_001806c4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[12], 0, 0);
    }
L_001806c8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001806cc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001806fc;
        }
    }
L_001806d0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_001806d4:;
    {
        cpu->r[12] = 0x000001d0u;
    }
L_001806d8:;
    {
        cpu->r[3] = 0x000001c2u;
    }
L_001806dc:;
    {
        uint32_t v = cpu->r[12] * cpu->r[2] + cpu->r[0]; cpu->r[4] = v;
    }
L_001806e0:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[4] + cpu->r[3]);
    }
L_001806e4:;
    {
        cpu->r[4] = 0x000001c6u;
    }
L_001806e8:;
    {
        uint32_t v = cpu->r[12] * cpu->r[3] + cpu->r[0]; cpu->r[0] = v;
    }
L_001806ec:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[4]);
    }
L_001806f0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001806f4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_001806f8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_001806fc:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_00180700:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[13] += 12u;
    }
L_00180704:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK10RoadStruct16GetSectionDiffExEii @ 00180708 (arm) */
void fn_00180708(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00180708:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0018070c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00180710:;
    {
        cpu->r[14] = 0x00180714u; fn_0018068c(cpu);
    }
L_00180714:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_00180718:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_0018071c:;
    {
        sub_flags(cpu, cpu->r[0], shifter(cpu->r[2], 1, 1u, &shc), 1, 1);
    }
L_00180720:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 0);
        }
    }
L_00180724:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00180728u)) return;
    }
}

/* _ZNK10RoadStruct21GetSectionIndexAndLapEiRii @ 00180728 (arm) */
void fn_00180728(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00180728:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x10u);
    }
L_0018072c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
    }
L_00180730:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_00180734:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00180770;
        }
    }
L_00180738:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018073c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001807a8;
        }
    }
L_00180740:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0xcu);
    }
L_00180744:;
    {
        cpu->r[7] = 0x000001d0u;
    }
L_00180748:;
    {
        cpu->r[4] = 0x000001c4u;
    }
L_0018074c:;
    {
        uint32_t v = cpu->r[7] * cpu->r[1] + cpu->r[5]; cpu->r[6] = v;
    }
L_00180750:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[6] + cpu->r[4]);
    }
L_00180754:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], cpu->r[6], 1, 0);
    }
L_00180758:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 1);
    }
L_0018075c:;
    {
        if (cond_test(cpu, 5)) {
        goto L_001807f8;
        }
    }
L_00180760:;
    {
        uint32_t v = cpu->r[7] * cpu->r[6] + cpu->r[5]; cpu->r[5] = v;
    }
L_00180764:;
    {
        cpu->r[1] = 0x000001c6u;
    }
L_00180768:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_0018076c:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[5] + cpu->r[1]);
    }
L_00180770:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_00180774:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 1);
    }
L_00180778:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00180794;
        }
    }
L_0018077c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 0);
    }
L_00180780:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00180784:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = rd32(cpu->r[2]);
        }
    }
L_00180788:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_0018078c:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[2], cpu->r[3]);
        }
    }
L_00180790:;
    {
        goto L_0018079c;
    }
L_00180794:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00180798:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001807e4;
        }
    }
L_0018079c:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001807a0:;
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
L_001807a4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001807a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018079c;
        }
    }
L_001807ac:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0xcu);
    }
L_001807b0:;
    {
        cpu->r[7] = 0x000001d0u;
    }
L_001807b4:;
    {
        cpu->r[4] = 0x000001c2u;
    }
L_001807b8:;
    {
        uint32_t v = cpu->r[7] * cpu->r[1] + cpu->r[5]; cpu->r[6] = v;
    }
L_001807bc:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[6] + cpu->r[4]);
    }
L_001807c0:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[6], cpu->r[1], 1, 0);
    }
L_001807c4:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 0);
    }
L_001807c8:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001807cc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001807f8;
        }
    }
L_001807d0:;
    {
        uint32_t v = cpu->r[7] * cpu->r[6] + cpu->r[5]; cpu->r[5] = v;
    }
L_001807d4:;
    {
        cpu->r[1] = 0x000001c6u;
    }
L_001807d8:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[4], 1, 0);
    }
L_001807dc:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[5] + cpu->r[1]);
    }
L_001807e0:;
    {
        goto L_00180770;
    }
L_001807e4:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_001807e8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_001807ec:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_001807f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018079c;
        }
    }
L_001807f4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x10u);
    }
L_001807f8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_001807fc:;
    {
        goto L_0018079c;
    }
}

/* _ZN10RoadStruct20SearchNearestSectionEiiiiii @ 00180800 (arm) */
void fn_00180800(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00180800:;
    {
        cpu->r[13] -= 28u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[9]);
        wr32(cpu->r[13] + 24u, cpu->r[10]);
    }
L_00180804:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00180808:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x20u);
    }
L_0018080c:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x24u);
    }
L_00180810:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[4], 1, 1);
    }
L_00180814:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_00180818:;
    {
        uint32_t v = shifter(cpu->r[7], 1, 6u, &shc); cpu->r[7] = v;
    }
L_0018081c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00180894;
        }
    }
L_00180820:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0xcu);
    }
L_00180824:;
    {
        cpu->r[10] = 0x000001d0u;
    }
L_00180828:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_0018082c:;
    {
        cpu->r[8] = (~0x00000000u);
    }
L_00180830:;
    {
        cpu->r[6] = (~0x80000000u);
    }
L_00180834:;
    {
        uint32_t v = cpu->r[10] * cpu->r[12] + cpu->r[5]; cpu->r[12] = v;
    }
L_00180838:;
    {
        goto L_00180848;
    }
L_0018083c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00180840:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[0], 1, 1);
    }
L_00180844:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0018089c;
        }
    }
L_00180848:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[12], 0x00000030u, 0, 0);
    }
L_0018084c:;
    {
        cpu->r[9] = rd32(cpu->r[12] + + 0x30u);
    }
L_00180850:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000001d0u, 0, 0);
    }
L_00180854:;
    {
        cpu->r[10] = rd32(cpu->r[5] + + 0x8u);
    }
L_00180858:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[1], 1, 0);
    }
L_0018085c:;
    {
        cpu->r[5] = rd32(cpu->r[5] + + 0x4u);
    }
L_00180860:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[2], 1, 0);
    }
L_00180864:;
    {
        uint32_t v = shifter(cpu->r[9], 1, 3u, &shc); cpu->r[9] = v;
    }
L_00180868:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 0);
    }
L_0018086c:;
    {
        uint32_t v = shifter(cpu->r[10], 1, 3u, &shc); cpu->r[10] = v;
    }
L_00180870:;
    {
        uint32_t v = cpu->r[9] * cpu->r[9]; cpu->r[9] = v;
    }
L_00180874:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 3u, &shc); cpu->r[5] = v;
    }
L_00180878:;
    {
        uint32_t v = cpu->r[10] * cpu->r[10] + cpu->r[9]; cpu->r[10] = v;
    }
L_0018087c:;
    {
        uint32_t v = cpu->r[5] * cpu->r[5] + cpu->r[10]; cpu->r[5] = v;
    }
L_00180880:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 1);
    }
L_00180884:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[8] = cpu->r[0];
        }
    }
L_00180888:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[6] = cpu->r[5];
        }
    }
L_0018088c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[5], 1, 1);
    }
L_00180890:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018083c;
        }
    }
L_00180894:;
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
        cpu->r[10] = v6;
        cpu->r[13] += 28u;
    }
L_00180898:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0018089c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001808a0:;
    {
        goto L_00180894;
    }
}

/* _ZNK10RoadStruct24ConvertIndexToMainTrack2Ei @ 001808a4 (arm) */
void fn_001808a4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001808a4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x10u);
    }
L_001808a8:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_001808ac:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_001808b0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001808e4;
        }
    }
L_001808b4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_001808b8:;
    {
        cpu->r[12] = 0x000001d0u;
    }
L_001808bc:;
    {
        cpu->r[3] = 0x000001c2u;
    }
L_001808c0:;
    {
        uint32_t v = cpu->r[12] * cpu->r[1] + cpu->r[0]; cpu->r[4] = v;
    }
L_001808c4:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[4] + cpu->r[3]);
    }
L_001808c8:;
    {
        cpu->r[4] = 0x000001c6u;
    }
L_001808cc:;
    {
        uint32_t v = cpu->r[12] * cpu->r[3] + cpu->r[0]; cpu->r[0] = v;
    }
L_001808d0:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[4]);
    }
L_001808d4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_001808d8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_001808dc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_001808e0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
        }
    }
L_001808e4:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001808e8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_001808ec:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4CMap17AddCollidableBodyEii @ 001808f0 (arm) */
void fn_001808f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001808f0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001808f4:;
    {
        cpu->r[5] = 0x00001050u;
    }
L_001808f8:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_001808fc:;
    {
        cpu->r[2] = 0x000003feu;
    }
L_00180900:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[5]);
    }
L_00180904:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00180908:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_0018090c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00180910:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00180914:;
    {
        if (cond_test(cpu, 13)) {
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00180918u)) return;
        }
    }
L_00180918:;
    {
        cpu->r[0] = 0x00000078u;
    }
L_0018091c:;
    {
        cpu->r[14] = 0x00180920u; fn_0018ba6c(cpu);
    }
L_00180920:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00180924:;
    {
        cpu->r[2] = 0x00000078u;
    }
L_00180928:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0018092c:;
    {
        cpu->r[14] = 0x00180930u; imp_memset(cpu); /* memset */
    }
L_00180930:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00180934:;
    {
        cpu->r[14] = 0x00180938u; fn_0017a4d8(cpu);
    }
L_00180938:;
    {
        wr8(cpu->r[6] + + 0x74u, cpu->r[8]);
    }
L_0018093c:;
    {
        wr32(cpu->r[6] + + 0x70u, cpu->r[7]);
    }
L_00180940:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00180944:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00180948:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0018094c:;
    {
        wr8(cpu->r[6] + + 0x76u, cpu->r[3]);
    }
L_00180950:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x00000014u, 0, 0);
    }
L_00180954:;
    {
        wr8(cpu->r[6] + + 0x75u, cpu->r[3]);
    }
L_00180958:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_0018095c:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[2]);
    }
L_00180960:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[6]);
    }
L_00180964:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00180968u)) return;
    }
}

/* _ZNK10RoadStruct23ConvertIndexToMainTrackEi @ 00180968 (arm) */
void fn_00180968(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00180968:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
    }
L_0018096c:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x10u);
    }
L_00180970:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 1);
    }
L_00180974:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00180ab4;
        }
    }
L_00180978:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0xcu);
    }
L_0018097c:;
    {
        cpu->r[2] = 0x000001d0u;
    }
L_00180980:;
    {
        cpu->r[3] = 0x000001c2u;
    }
L_00180984:;
    {
        cpu->r[6] = 0x000001c6u;
    }
L_00180988:;
    {
        uint32_t v = cpu->r[2] * cpu->r[1] + cpu->r[12]; cpu->r[5] = v;
    }
L_0018098c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[5] + cpu->r[3]);
    }
L_00180990:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3] + cpu->r[12]; cpu->r[3] = v;
    }
L_00180994:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[3] + cpu->r[6]);
    }
L_00180998:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_0018099c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00180ab0;
        }
    }
L_001809a0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001809a4:;
    {
        uint32_t v = cpu->r[2] * cpu->r[1] + cpu->r[12]; cpu->r[3] = v;
    }
L_001809a8:;
    {
        cpu->r[6] = (uint32_t)(int32_t)s16(cpu->r[3] + cpu->r[6]);
    }
L_001809ac:;
    {
        add_flags(cpu, cpu->r[6], 0x00000001u, 0, 1);
    }
L_001809b0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001809e8;
        }
    }
L_001809b4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_001809b8:;
    {
        cpu->r[0] = 0x0000fe30u;
    }
L_001809bc:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0xffffu << 16);
    }
L_001809c0:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3] + cpu->r[12]; cpu->r[3] = v;
    }
L_001809c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000001c4u, 0, 0);
    }
L_001809c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_001809cc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000001d0u, 0, 0);
    }
L_001809d0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001809d4:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[3] + cpu->r[0]);
    }
L_001809d8:;
    {
        add_flags(cpu, cpu->r[2], 0x00000001u, 0, 1);
    }
L_001809dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001809cc;
        }
    }
L_001809e0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000394u, 1, 0);
    }
L_001809e4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 0);
    }
L_001809e8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000030u, 0, 0);
    }
L_001809ec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x00000030u, 0, 0);
    }
L_001809f0:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0x30u);
    }
L_001809f4:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x8u);
    }
L_001809f8:;
    {
        cpu->r[8] = rd32(cpu->r[2] + + 0x8u);
    }
L_001809fc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x30u);
    }
L_00180a00:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[6], 1, 0);
    }
L_00180a04:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[8];
    }
L_00180a08:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00180a0c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 0);
    }
L_00180a10:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[3];
    }
L_00180a14:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x4u);
    }
L_00180a18:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x4u);
    }
L_00180a1c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 0);
    }
L_00180a20:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_00180a24:;
    {
        vfp_vmul(cpu, 12, 13, 13);
    }
L_00180a28:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00180a2c:;
    {
        vfp_vmla(cpu, 12, 14, 14);
    }
L_00180a30:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00180a34:;
    {
        vfp_vmla(cpu, 12, 15, 15);
    }
L_00180a38:;
    {
        vfp_vsqrt(cpu, 12, 12);
    }
L_00180a3c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,12), 0.0f);
    }
L_00180a40:;
    {
        vfp_sync_flags(cpu);
    }
L_00180a44:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00180aa8;
        }
    }
L_00180a48:;
    {
        cpu->r[8] = 0x000001d0u;
    }
L_00180a4c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_00180a50:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[4], 0, 0);
        }
    }
L_00180a54:;
    {
        uint32_t v = cpu->r[8] * cpu->r[1] + cpu->r[12]; cpu->r[2] = v;
    }
L_00180a58:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000030u, 0, 0);
    }
L_00180a5c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x8u);
    }
L_00180a60:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x30u);
    }
L_00180a64:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 0);
    }
L_00180a68:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_00180a6c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00180a70:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 0);
    }
L_00180a74:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[2];
    }
L_00180a78:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_00180a7c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 0);
    }
L_00180a80:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[3];
    }
L_00180a84:;
    {
        vfp_vmul(cpu, 15, 15, 15);
    }
L_00180a88:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00180a8c:;
    {
        vfp_vmla(cpu, 15, 13, 13);
    }
L_00180a90:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00180a94:;
    {
        vfp_vmla(cpu, 15, 14, 14);
    }
L_00180a98:;
    {
        vfp_vsqrt(cpu, 15, 15);
    }
L_00180a9c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,12), *vfp_s(cpu,15));
    }
L_00180aa0:;
    {
        vfp_sync_flags(cpu);
    }
L_00180aa4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00180a4c;
        }
    }
L_00180aa8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_00180aac:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00180ab4;
        }
    }
L_00180ab0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 0);
    }
L_00180ab4:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00180ab8:;
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
L_00180abc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10RoadStruct26SearchCrossingSectionIndexEi @ 00180ac0 (arm) */
void fn_00180ac0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00180ac0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x24u);
    }
L_00180ac4:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_00180ac8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00180acc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_00180ad0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00180ad4:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00180ad8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00180b10;
        }
    }
L_00180adc:;
    {
        cpu->r[1] = rd32(0x00180ae4u + + 0x74u);
    }
L_00180ae0:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00180ae4:;
    {
        cpu->r[2] = rd32(0x00180aecu + + 0x70u);
    }
L_00180ae8:;
    {
        cpu->r[14] = 0x00000675u;
    }
L_00180aec:;
    {
        cpu->r[3] = rd32(0x00180af4u + + 0x6cu);
    }
L_00180af0:;
    {
        cpu->r[1] = add_flags(cpu, 0x00180af8u, cpu->r[1], 0, 0);
    }
L_00180af4:;
    {
        cpu->r[12] = rd32(0x00180afcu + + 0x68u);
    }
L_00180af8:;
    {
        cpu->r[2] = add_flags(cpu, 0x00180b00u, cpu->r[2], 0, 0);
    }
L_00180afc:;
    {
        cpu->r[3] = add_flags(cpu, 0x00180b04u, cpu->r[3], 0, 0);
    }
L_00180b00:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_00180b04:;
    {
        cpu->r[12] = add_flags(cpu, 0x00180b0cu, cpu->r[12], 0, 0);
    }
L_00180b08:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00180b0c:;
    {
        cpu->r[14] = 0x00180b10u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00180b10:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00180b14:;
    {
        cpu->r[2] = 0x000001d0u;
    }
L_00180b18:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x10u);
    }
L_00180b1c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00180b20:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_00180b24:;
    {
        uint32_t v = cpu->r[2] * cpu->r[5] + cpu->r[3]; cpu->r[5] = v;
    }
L_00180b28:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 0);
    }
L_00180b2c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x00000030u, 0, 0);
    }
L_00180b30:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x30u);
    }
L_00180b34:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x4u);
    }
L_00180b38:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_00180b3c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00180b40:;
    {
        cpu->r[12] = 0x00000064u;
    }
L_00180b44:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_00180b48:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_00180b4c:;
    {
        cpu->r[14] = 0x00180b50u; fn_00180800(cpu);
    }
L_00180b50:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00180b54:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00180b58u)) return;
    }
}

/* _ZNK10RoadStruct14GetPrevSectionEii @ 00180b68 (arm) */
void fn_00180b68(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00180b68:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x24u);
    }
L_00180b6c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00180b70:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00180b74:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00180b78:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00180b7c:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00180b80:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_00180b84:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00180bbc;
        }
    }
L_00180b88:;
    {
        cpu->r[1] = rd32(0x00180b90u + + 0x50u);
    }
L_00180b8c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00180b90:;
    {
        cpu->r[12] = rd32(0x00180b98u + + 0x4cu);
    }
L_00180b94:;
    {
        cpu->r[14] = 0x000005e7u;
    }
L_00180b98:;
    {
        cpu->r[2] = rd32(0x00180ba0u + + 0x48u);
    }
L_00180b9c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00180ba4u, cpu->r[1], 0, 0);
    }
L_00180ba0:;
    {
        cpu->r[3] = rd32(0x00180ba8u + + 0x44u);
    }
L_00180ba4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00180bacu, cpu->r[12], 0, 0);
    }
L_00180ba8:;
    {
        cpu->r[2] = add_flags(cpu, 0x00180bb0u, cpu->r[2], 0, 0);
    }
L_00180bac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000001cu, 0, 0);
    }
L_00180bb0:;
    {
        cpu->r[3] = add_flags(cpu, 0x00180bb8u, cpu->r[3], 0, 0);
    }
L_00180bb4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00180bb8:;
    {
        cpu->r[14] = 0x00180bbcu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00180bbc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00180bc0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00180bc4:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00180bc8:;
    {
        cpu->r[4] = rd32(cpu->r[4] + + 0xcu);
    }
L_00180bcc:;
    {
        cpu->r[14] = 0x00180bd0u; fn_00180634(cpu);
    }
L_00180bd0:;
    {
        cpu->r[3] = 0x000001d0u;
    }
L_00180bd4:;
    {
        uint32_t v = cpu->r[3] * cpu->r[0] + cpu->r[4]; cpu->r[0] = v;
    }
L_00180bd8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00180bdc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00180be0u)) return;
    }
}

/* _ZNK10RoadStruct14GetNextSectionEii @ 00180bf0 (arm) */
void fn_00180bf0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00180bf0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x24u);
    }
L_00180bf4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00180bf8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00180bfc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00180c00:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00180c04:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00180c08:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_00180c0c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00180c44;
        }
    }
L_00180c10:;
    {
        cpu->r[1] = rd32(0x00180c18u + + 0x50u);
    }
L_00180c14:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00180c18:;
    {
        cpu->r[12] = rd32(0x00180c20u + + 0x4cu);
    }
L_00180c1c:;
    {
        cpu->r[14] = 0x000005e1u;
    }
L_00180c20:;
    {
        cpu->r[2] = rd32(0x00180c28u + + 0x48u);
    }
L_00180c24:;
    {
        cpu->r[1] = add_flags(cpu, 0x00180c2cu, cpu->r[1], 0, 0);
    }
L_00180c28:;
    {
        cpu->r[3] = rd32(0x00180c30u + + 0x44u);
    }
L_00180c2c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00180c34u, cpu->r[12], 0, 0);
    }
L_00180c30:;
    {
        cpu->r[2] = add_flags(cpu, 0x00180c38u, cpu->r[2], 0, 0);
    }
L_00180c34:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000002cu, 0, 0);
    }
L_00180c38:;
    {
        cpu->r[3] = add_flags(cpu, 0x00180c40u, cpu->r[3], 0, 0);
    }
L_00180c3c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00180c40:;
    {
        cpu->r[14] = 0x00180c44u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00180c44:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00180c48:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00180c4c:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00180c50:;
    {
        cpu->r[4] = rd32(cpu->r[4] + + 0xcu);
    }
L_00180c54:;
    {
        cpu->r[14] = 0x00180c58u; fn_001805dc(cpu);
    }
L_00180c58:;
    {
        cpu->r[3] = 0x000001d0u;
    }
L_00180c5c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[0] + cpu->r[4]; cpu->r[0] = v;
    }
L_00180c60:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00180c64:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00180c68u)) return;
    }
}

/* _ZNK10RoadStruct10GetSectionEi @ 00180c78 (arm) */
void fn_00180c78(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00180c78:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x24u);
    }
L_00180c7c:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_00180c80:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00180c84:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00180c88:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00180c8c:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00180c90:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00180cc8;
        }
    }
L_00180c94:;
    {
        cpu->r[1] = rd32(0x00180c9cu + + 0x40u);
    }
L_00180c98:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00180c9c:;
    {
        cpu->r[12] = rd32(0x00180ca4u + + 0x3cu);
    }
L_00180ca0:;
    {
        cpu->r[14] = 0x000005dbu;
    }
L_00180ca4:;
    {
        cpu->r[2] = rd32(0x00180cacu + + 0x38u);
    }
L_00180ca8:;
    {
        cpu->r[1] = add_flags(cpu, 0x00180cb0u, cpu->r[1], 0, 0);
    }
L_00180cac:;
    {
        cpu->r[3] = rd32(0x00180cb4u + + 0x34u);
    }
L_00180cb0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00180cb8u, cpu->r[12], 0, 0);
    }
L_00180cb4:;
    {
        cpu->r[2] = add_flags(cpu, 0x00180cbcu, cpu->r[2], 0, 0);
    }
L_00180cb8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000003cu, 0, 0);
    }
L_00180cbc:;
    {
        cpu->r[3] = add_flags(cpu, 0x00180cc4u, cpu->r[3], 0, 0);
    }
L_00180cc0:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00180cc4:;
    {
        cpu->r[14] = 0x00180cc8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00180cc8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_00180ccc:;
    {
        cpu->r[0] = 0x000001d0u;
    }
L_00180cd0:;
    {
        uint32_t v = cpu->r[0] * cpu->r[4] + cpu->r[3]; cpu->r[0] = v;
    }
L_00180cd4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00180cd8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00180cdcu)) return;
    }
}

/* _ZNK10RoadStruct18CheckShortcutStartER8Vector4siii @ 00180cec (arm) */
void fn_00180cec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00180cec:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00180cf0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00180cf4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x14u);
    }
L_00180cf8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000028u, 1, 0);
    }
L_00180cfc:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_00180d00:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_00180d04:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00180d08:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x40u);
    }
L_00180d0c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00180d44;
        }
    }
L_00180d10:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x1cu);
    }
L_00180d14:;
    {
        cpu->r[3] = rd32(cpu->r[12]);
    }
L_00180d18:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_00180d1c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00180d20:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00180d34;
        }
    }
L_00180d24:;
    {
        goto L_00180e2c;
    }
L_00180d28:;
    {
        cpu->r[2] = rd32(cpu->r[12] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_00180d2c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_00180d30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00180d50;
        }
    }
L_00180d34:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00180d38:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_00180d3c:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[8] = v;
    }
L_00180d40:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00180d28;
        }
    }
L_00180d44:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00180d48:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_00180d4c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00180d50u)) return;
    }
L_00180d50:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[3], 0, 0);
    }
L_00180d54:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 4u, &shc); cpu->r[8] = v;
    }
L_00180d58:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x20u);
    }
L_00180d5c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_00180d60:;
    {
        cpu->r[12] = rd32(cpu->r[1]);
    }
L_00180d64:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_00180d68:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x8u);
    }
L_00180d6c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_00180d70:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_00180d74:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[12]);
    }
L_00180d78:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
    }
L_00180d7c:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x20u);
    }
L_00180d80:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x18u);
    }
L_00180d84:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_00180d88:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_00180d8c:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x24u);
    }
L_00180d90:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x2cu);
    }
L_00180d94:;
    {
        uint32_t base = cpu->r[2];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_00180d98:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_00180d9c:;
    {
        cpu->r[12] = 0x00000003u;
    }
L_00180da0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_00180da4:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_00180da8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_00180dac:;
    {
        cpu->r[12] = cpu->r[13];
    }
L_00180db0:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_00180db4:;
    {
        uint32_t base = cpu->r[14];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_00180db8:;
    {
        cpu->r[14] = 0x00180dbcu; fn_0017a7c4(cpu);
    }
L_00180dbc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x20u);
    }
L_00180dc0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_00180dc4:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x8u);
    }
L_00180dc8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_00180dcc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00180d44;
        }
    }
L_00180dd0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_00180dd4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00180e10;
        }
    }
L_00180dd8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x10u);
    }
L_00180ddc:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_00180de0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00180d44;
        }
    }
L_00180de4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00180de8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00180dec:;
    {
        cpu->r[14] = 0x00180df0u; fn_00180c78(cpu);
    }
L_00180df0:;
    {
        cpu->r[3] = 0x000001c6u;
    }
L_00180df4:;
    {
        cpu->r[4] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[3]);
    }
L_00180df8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00180dfc:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00180e00:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00180e04:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_00180e08:;
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
L_00180e0c:;
    {
        return fn_001805dc(cpu);
    }
L_00180e10:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x10u);
    }
L_00180e14:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_00180e18:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00180d44;
        }
    }
L_00180e1c:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x48u);
    }
L_00180e20:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00180e24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00180df8;
        }
    }
L_00180e28:;
    {
        goto L_00180d44;
    }
L_00180e2c:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_00180e30:;
    {
        goto L_00180d58;
    }
}

/* _ZNK10RoadStruct16CheckShortcutEndER8Vector4siii @ 00180e34 (arm) */
void fn_00180e34(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00180e34:;
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
L_00180e38:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00180e3c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x14u);
    }
L_00180e40:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000028u, 1, 0);
    }
L_00180e44:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_00180e48:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_00180e4c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00180e50:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x48u);
    }
L_00180e54:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00180ea8;
        }
    }
L_00180e58:;
    {
        cpu->r[10] = rd32(cpu->r[5] + + 0x1cu);
    }
L_00180e5c:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x18u);
    }
L_00180e60:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00180e64:;
    {
        cpu->r[2] = rd32(cpu->r[12]);
    }
L_00180e68:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_00180e6c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00180e70:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_00180e74:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00180e78:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00180e98;
        }
    }
L_00180e7c:;
    {
        goto L_00180f90;
    }
L_00180e80:;
    {
        cpu->r[9] = rd32(cpu->r[10] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_00180e84:;
    {
        cpu->r[2] = rd32(cpu->r[12] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_00180e88:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[9], cpu->r[2], 0, 0);
    }
L_00180e8c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_00180e90:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_00180e94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00180eb4;
        }
    }
L_00180e98:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00180e9c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_00180ea0:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[8] = v;
    }
L_00180ea4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00180e80;
        }
    }
L_00180ea8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00180eac:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_00180eb0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00180eb4u)) return;
    }
L_00180eb4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[3], 0, 0);
    }
L_00180eb8:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 4u, &shc); cpu->r[8] = v;
    }
L_00180ebc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x20u);
    }
L_00180ec0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_00180ec4:;
    {
        cpu->r[12] = rd32(cpu->r[1]);
    }
L_00180ec8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_00180ecc:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x8u);
    }
L_00180ed0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_00180ed4:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_00180ed8:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[12]);
    }
L_00180edc:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
    }
L_00180ee0:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x38u);
    }
L_00180ee4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x30u);
    }
L_00180ee8:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_00180eec:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_00180ef0:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x3cu);
    }
L_00180ef4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x44u);
    }
L_00180ef8:;
    {
        uint32_t base = cpu->r[2];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_00180efc:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_00180f00:;
    {
        cpu->r[12] = 0x00000003u;
    }
L_00180f04:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_00180f08:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_00180f0c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_00180f10:;
    {
        cpu->r[12] = cpu->r[13];
    }
L_00180f14:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_00180f18:;
    {
        uint32_t base = cpu->r[14];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_00180f1c:;
    {
        cpu->r[14] = 0x00180f20u; fn_0017a7c4(cpu);
    }
L_00180f20:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x20u);
    }
L_00180f24:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_00180f28:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0xcu);
    }
L_00180f2c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_00180f30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00180ea8;
        }
    }
L_00180f34:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_00180f38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00180f74;
        }
    }
L_00180f3c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x10u);
    }
L_00180f40:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_00180f44:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00180ea8;
        }
    }
L_00180f48:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00180f4c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00180f50:;
    {
        cpu->r[14] = 0x00180f54u; fn_00180c78(cpu);
    }
L_00180f54:;
    {
        cpu->r[3] = 0x000001c6u;
    }
L_00180f58:;
    {
        cpu->r[4] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[3]);
    }
L_00180f5c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00180f60:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00180f64:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00180f68:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_00180f6c:;
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
L_00180f70:;
    {
        return fn_00180634(cpu);
    }
L_00180f74:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x10u);
    }
L_00180f78:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[3], 1, 1);
    }
L_00180f7c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00180ea8;
        }
    }
L_00180f80:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x4cu);
    }
L_00180f84:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00180f88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00180f5c;
        }
    }
L_00180f8c:;
    {
        goto L_00180ea8;
    }
L_00180f90:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_00180f94:;
    {
        goto L_00180ebc;
    }
}

/* _ZNK10RoadStruct19CheckShortcutSwitchE8Vector4si @ 00180f98 (arm) */
void fn_00180f98(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00180f98:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00180f9c:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_00180fa0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00180fa4:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_00180fa8:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_00180fac:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00180fb0:;
    {
        cpu->r[14] = 0x00180fb4u; fn_00180c78(cpu);
    }
L_00180fb4:;
    {
        cpu->r[7] = 0x000001c6u;
    }
L_00180fb8:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[7]);
    }
L_00180fbc:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 31u, &shc); cpu->r[4] = v;
        set_nz(cpu, v);
    }
L_00180fc0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00180ff8;
        }
    }
L_00180fc4:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00180fc8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00180fcc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00180fd0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00180fd4:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00180fd8:;
    {
        cpu->r[14] = 0x00180fdcu; fn_00180bf0(cpu);
    }
L_00180fdc:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[7]);
    }
L_00180fe0:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 31u, &shc); cpu->r[3] = v;
    }
L_00180fe4:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000003u, 1, 1);
    }
L_00180fe8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00180fec:;
    {
        if (cond_test(cpu, 14)) {
        uint32_t v = cpu->r[3] & 0x00000001u; cpu->r[3] = v;
        }
    }
L_00180ff0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00180ff4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00180fc8;
        }
    }
L_00180ff8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00180ffc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0018102c;
        }
    }
L_00181000:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x10u);
    }
L_00181004:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00181008:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[7] = cpu->r[1];
        }
    }
L_0018100c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001810f0;
        }
    }
L_00181010:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00181014:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00181018:;
    {
        cpu->r[14] = 0x0018101cu; fn_00180c78(cpu);
    }
L_0018101c:;
    {
        cpu->r[3] = 0x000001c4u;
    }
L_00181020:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[3]);
    }
L_00181024:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_00181028:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00181104;
        }
    }
L_0018102c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00181030:;
    {
        cpu->r[7] = 0x000001c6u;
    }
L_00181034:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00181038:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0018103c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00181040:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00181044:;
    {
        cpu->r[14] = 0x00181048u; fn_00180b68(cpu);
    }
L_00181048:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[7]);
    }
L_0018104c:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 31u, &shc); cpu->r[3] = v;
    }
L_00181050:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000003u, 1, 1);
    }
L_00181054:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00181058:;
    {
        if (cond_test(cpu, 14)) {
        uint32_t v = cpu->r[3] & 0x00000001u; cpu->r[3] = v;
        }
    }
L_0018105c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00181060:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00181034;
        }
    }
L_00181064:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00181068:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00181098;
        }
    }
L_0018106c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x10u);
    }
L_00181070:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00181074:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[7] = cpu->r[1];
        }
    }
L_00181078:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001810a4;
        }
    }
L_0018107c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00181080:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00181084:;
    {
        cpu->r[14] = 0x00181088u; fn_00180c78(cpu);
    }
L_00181088:;
    {
        cpu->r[3] = 0x000001c2u;
    }
L_0018108c:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[3]);
    }
L_00181090:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_00181094:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001810d0;
        }
    }
L_00181098:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0018109c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001810a0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001810a4u)) return;
    }
L_001810a4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001810a8:;
    {
        cpu->r[14] = 0x001810acu; fn_00180c78(cpu);
    }
L_001810ac:;
    {
        cpu->r[3] = 0x000001c6u;
    }
L_001810b0:;
    {
        cpu->r[7] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[3]);
    }
L_001810b4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001810b8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001810bc:;
    {
        cpu->r[14] = 0x001810c0u; fn_00180c78(cpu);
    }
L_001810c0:;
    {
        cpu->r[3] = 0x000001c2u;
    }
L_001810c4:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[3]);
    }
L_001810c8:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_001810cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00181098;
        }
    }
L_001810d0:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001810d4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001810d8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001810dc:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_001810e0:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_001810e4:;
    {
        cpu->r[14] = 0x001810e8u; fn_00180cec(cpu);
    }
L_001810e8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001810ec:;
    {
        goto L_00181098;
    }
L_001810f0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001810f4:;
    {
        cpu->r[14] = 0x001810f8u; fn_00180c78(cpu);
    }
L_001810f8:;
    {
        cpu->r[3] = 0x000001c6u;
    }
L_001810fc:;
    {
        cpu->r[7] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[3]);
    }
L_00181100:;
    {
        goto L_00181010;
    }
L_00181104:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00181108:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0018110c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00181110:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00181114:;
    {
        wr32(cpu->r[13], cpu->r[4]);
    }
L_00181118:;
    {
        cpu->r[14] = 0x0018111cu; fn_00180e34(cpu);
    }
L_0018111c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00181120:;
    {
        goto L_00181098;
    }
}

/* _ZNK10RoadStruct13GetSectionRefEi @ 00181124 (arm) */
void fn_00181124(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00181124:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x24u);
    }
L_00181128:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_0018112c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00181130:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00181134:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00181138:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0018113c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00181174;
        }
    }
L_00181140:;
    {
        cpu->r[1] = rd32(0x00181148u + + 0x40u);
    }
L_00181144:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00181148:;
    {
        cpu->r[12] = rd32(0x00181150u + + 0x3cu);
    }
L_0018114c:;
    {
        cpu->r[14] = 0x000005d5u;
    }
L_00181150:;
    {
        cpu->r[2] = rd32(0x00181158u + + 0x38u);
    }
L_00181154:;
    {
        cpu->r[1] = add_flags(cpu, 0x0018115cu, cpu->r[1], 0, 0);
    }
L_00181158:;
    {
        cpu->r[3] = rd32(0x00181160u + + 0x34u);
    }
L_0018115c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00181164u, cpu->r[12], 0, 0);
    }
L_00181160:;
    {
        cpu->r[2] = add_flags(cpu, 0x00181168u, cpu->r[2], 0, 0);
    }
L_00181164:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000048u, 0, 0);
    }
L_00181168:;
    {
        cpu->r[3] = add_flags(cpu, 0x00181170u, cpu->r[3], 0, 0);
    }
L_0018116c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00181170:;
    {
        cpu->r[14] = 0x00181174u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00181174:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_00181178:;
    {
        cpu->r[0] = 0x000001d0u;
    }
L_0018117c:;
    {
        uint32_t v = cpu->r[0] * cpu->r[4] + cpu->r[3]; cpu->r[0] = v;
    }
L_00181180:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00181184:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00181188u)) return;
    }
}

/* _ZN4CMap21GetShortcutForSectionEi @ 00181198 (arm) */
void fn_00181198(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00181198:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x1cu);
    }
L_0018119c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001811a0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001811a4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001811a8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001811ac:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001811b0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = (~0x00000000u);
        }
    }
L_001811b4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00181250;
        }
    }
L_001811b8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001811bc:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001811c0:;
    {
        cpu->r[14] = 0x001811c4u; fn_00180428(cpu);
    }
L_001811c4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001811c8:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[0], 1, 1);
    }
L_001811cc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001811d0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001811fc;
        }
    }
L_001811d4:;
    {
        cpu->r[14] = 0x001811d8u; fn_0018044c(cpu);
    }
L_001811d8:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 1);
    }
L_001811dc:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0018123c;
        }
    }
L_001811e0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001811e4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001811e8:;
    {
        cpu->r[14] = 0x001811ecu; fn_00180428(cpu);
    }
L_001811ec:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001811f0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[0], 1, 1);
    }
L_001811f4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001811f8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001811d4;
        }
    }
L_001811fc:;
    {
        cpu->r[1] = rd32(0x00181204u + + 0x58u);
    }
L_00181200:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00181204:;
    {
        cpu->r[12] = rd32(0x0018120cu + + 0x54u);
    }
L_00181208:;
    {
        cpu->r[14] = 0x00000362u;
    }
L_0018120c:;
    {
        cpu->r[2] = rd32(0x00181214u + + 0x50u);
    }
L_00181210:;
    {
        cpu->r[1] = add_flags(cpu, 0x00181218u, cpu->r[1], 0, 0);
    }
L_00181214:;
    {
        cpu->r[3] = rd32(0x0018121cu + + 0x4cu);
    }
L_00181218:;
    {
        cpu->r[12] = add_flags(cpu, 0x00181220u, cpu->r[12], 0, 0);
    }
L_0018121c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00181224u, cpu->r[2], 0, 0);
    }
L_00181220:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000058u, 0, 0);
    }
L_00181224:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018122cu, cpu->r[3], 0, 0);
    }
L_00181228:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_0018122c:;
    {
        cpu->r[4] = (~0x00000000u);
    }
L_00181230:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00181234:;
    {
        cpu->r[14] = 0x00181238u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00181238:;
    {
        goto L_00181250;
    }
L_0018123c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00181240:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00181244:;
    {
        cpu->r[14] = 0x00181248u; fn_00180458(cpu);
    }
L_00181248:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 1);
    }
L_0018124c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001811e0;
        }
    }
L_00181250:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00181254:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00181258:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018125cu)) return;
    }
}

/* _ZN4CMap20IsPointInRoadSectionER8Vector4sih @ 0018126c (arm) */
void fn_0018126c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018126c:;
    {
        cpu->r[12] = cpu->r[1];
    }
L_00181270:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_00181274:;
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
L_00181278:;
    {
        cpu->r[14] = rd32(cpu->r[12]);
    }
L_0018127c:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_00181280:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x8u);
    }
L_00181284:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000020u, 1, 0);
    }
L_00181288:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_0018128c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00181290:;
    {
        cpu->r[9] = cpu->r[3];
    }
L_00181294:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[14]);
    }
L_00181298:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0018129c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_001812a0:;
    {
        cpu->r[14] = 0x001812a4u; fn_00180c78(cpu);
    }
L_001812a4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001812a8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001812ac:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001812b0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001812b4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001812b8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001812bc:;
    {
        cpu->r[14] = 0x001812c0u; fn_00180bf0(cpu);
    }
L_001812c0:;
    {
        cpu->r[12] = cpu->r[13];
    }
L_001812c4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x5cu);
    }
L_001812c8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x54u);
    }
L_001812cc:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_001812d0:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_001812d4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_001812d8:;
    {
        uint32_t base = cpu->r[6];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_001812dc:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001812e0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_001812e4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_001812e8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_001812ec:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001812f0:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_001812f4:;
    {
        uint32_t base = cpu->r[8];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001812f8:;
    {
        cpu->r[14] = 0x001812fcu; fn_0017a764(cpu);
    }
L_001812fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00181300:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00181344;
        }
    }
L_00181304:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x54u);
    }
L_00181308:;
    {
        cpu->r[12] = cpu->r[13];
    }
L_0018130c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x5cu);
    }
L_00181310:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_00181314:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_00181318:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0xcu);
    }
L_0018131c:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x14u);
    }
L_00181320:;
    {
        uint32_t base = cpu->r[6];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_00181324:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_00181328:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_0018132c:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_00181330:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_00181334:;
    {
        uint32_t base = cpu->r[8];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_00181338:;
    {
        cpu->r[14] = 0x0018133cu; fn_0017a764(cpu);
    }
L_0018133c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_00181340:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00181350;
        }
    }
L_00181344:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00181348:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_0018134c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00181350u)) return;
    }
L_00181350:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_00181354:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00181348;
        }
    }
L_00181358:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x54u);
    }
L_0018135c:;
    {
        cpu->r[12] = cpu->r[13];
    }
L_00181360:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5cu);
    }
L_00181364:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_00181368:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_0018136c:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x54u);
    }
L_00181370:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x5cu);
    }
L_00181374:;
    {
        uint32_t base = cpu->r[6];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_00181378:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_0018137c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_00181380:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_00181384:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_00181388:;
    {
        uint32_t base = cpu->r[8];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_0018138c:;
    {
        cpu->r[14] = 0x00181390u; fn_0017a764(cpu);
    }
L_00181390:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_00181394:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00181344;
        }
    }
L_00181398:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x14u);
    }
L_0018139c:;
    {
        cpu->r[12] = cpu->r[13];
    }
L_001813a0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001813a4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_001813a8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_001813ac:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x14u);
    }
L_001813b0:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0xcu);
    }
L_001813b4:;
    {
        uint32_t base = cpu->r[6];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_001813b8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_001813bc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_001813c0:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001813c4:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_001813c8:;
    {
        uint32_t base = cpu->r[8];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001813cc:;
    {
        cpu->r[14] = 0x001813d0u; fn_0017a764(cpu);
    }
L_001813d0:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000001u, cpu->r[0], 1, 1);
    }
L_001813d4:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001813d8:;
    {
        goto L_00181348;
    }
}

/* _ZN4CMap25GetRoadSectionForPositionE8Vector4sih @ 001813dc (arm) */
void fn_001813dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001813dc:;
    {
        add_flags(cpu, cpu->r[2], 0x00000001u, 0, 1);
    }
L_001813e0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001813e4:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_001813e8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001813ec:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001813f0:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_001813f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00181464;
        }
    }
L_001813f8:;
    {
        cpu->r[14] = 0x001813fcu; fn_0018126c(cpu);
    }
L_001813fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00181400:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018145c;
        }
    }
L_00181404:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x30u);
    }
L_00181408:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[8], 0x00000003u, 1, 1);
    }
L_0018140c:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
        }
    }
L_00181410:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00181414:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018145c;
        }
    }
L_00181418:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0018141c:;
    {
        goto L_00181438;
    }
L_00181420:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x30u);
    }
L_00181424:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00181428:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_0018142c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[4] = 0x00000000u;
        }
    }
L_00181430:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_00181434:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018145c;
        }
    }
L_00181438:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0018143c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00181440:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00181444:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00181448:;
    {
        cpu->r[14] = 0x0018144cu; fn_0018126c(cpu);
    }
L_0018144c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00181450:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00181454:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00181420;
        }
    }
L_00181458:;
    {
        cpu->r[8] = cpu->r[4];
    }
L_0018145c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00181460:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00181464u)) return;
    }
L_00181464:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x30u);
    }
L_00181468:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018146c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001814a8;
        }
    }
L_00181470:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_00181474:;
    {
        goto L_00181488;
    }
L_00181478:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x30u);
    }
L_0018147c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_00181480:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_00181484:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001814a8;
        }
    }
L_00181488:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0018148c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00181490:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00181494:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00181498:;
    {
        cpu->r[14] = 0x0018149cu; fn_0018126c(cpu);
    }
L_0018149c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001814a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00181478;
        }
    }
L_001814a4:;
    {
        goto L_0018145c;
    }
L_001814a8:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_001814ac:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001814b0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001814b4u)) return;
    }
}

/* _ZN4CMap34GetRoadSectionForPositionMainTrackE8Vector4sih @ 001814b4 (arm) */
void fn_001814b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001814b4:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001814b8:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_001814bc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x1cu);
    }
L_001814c0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001814c4:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001814c8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001814cc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018150c;
        }
    }
L_001814d0:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001814d4:;
    {
        goto L_001814e8;
    }
L_001814d8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x1cu);
    }
L_001814dc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001814e0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_001814e4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018150c;
        }
    }
L_001814e8:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001814ec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001814f0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001814f4:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_001814f8:;
    {
        cpu->r[14] = 0x001814fcu; fn_0018126c(cpu);
    }
L_001814fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00181500:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001814d8;
        }
    }
L_00181504:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00181508:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018150cu)) return;
    }
L_0018150c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00181510:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00181514:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00181518u)) return;
    }
}

/* _ZN4CMap24CollideCarsWithBGObjectsERK11CMultiArrayIP4CCarE @ 00181518 (arm) */
void fn_00181518(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00181518:;
    {
        cpu->r[3] = rd32(0x00181520u + + 0x488u);
    }
L_0018151c:;
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
L_00181520:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_00181524:;
    {
        cpu->r[2] = rd32(0x0018152cu + + 0x480u);
    }
L_00181528:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_0018152c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_00181530:;
    {
        cpu->r[3] = 0x0000432cu;
    }
L_00181534:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_00181538:;
    {
        cpu->r[2] = add_flags(cpu, 0x00181540u, cpu->r[2], 0, 0);
    }
L_0018153c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_00181540:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_00181544:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00181548:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[12]);
    }
L_0018154c:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_00181550:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_00181554:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_00181558:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0018155c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00181560:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018156c;
        }
    }
L_00181564:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_00181568:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018156cu)) return;
    }
L_0018156c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x48u);
    }
L_00181570:;
    {
        cpu->r[2] = 0x00000085u;
    }
L_00181574:;
    {
        wr32(cpu->r[0] + + 0x34u, cpu->r[2]);
    }
L_00181578:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018157c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00181794;
        }
    }
L_00181580:;
    {
        cpu->r[3] = rd32(0x00181588u + + 0x428u);
    }
L_00181584:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_00181588:;
    {
        cpu->r[2] = rd32(0x00181590u + + 0x424u);
    }
L_0018158c:;
    {
        cpu->r[8] = cpu->r[10];
    }
L_00181590:;
    {
        cpu->r[3] = add_flags(cpu, 0x00181598u, cpu->r[3], 0, 0);
    }
L_00181594:;
    {
        cpu->r[2] = add_flags(cpu, 0x0018159cu, cpu->r[2], 0, 0);
    }
L_00181598:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000070u, 0, 0);
    }
L_0018159c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_001815a0:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_001815a4:;
    {
        cpu->r[2] = rd32(0x001815acu + + 0x40cu);
    }
L_001815a8:;
    {
        cpu->r[3] = rd32(0x001815b0u + + 0x40cu);
    }
L_001815ac:;
    {
        cpu->r[2] = add_flags(cpu, 0x001815b4u, cpu->r[2], 0, 0);
    }
L_001815b0:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_001815b4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001815bcu, cpu->r[3], 0, 0);
    }
L_001815b8:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_001815bc:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x40u);
    }
L_001815c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001815c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00181984;
        }
    }
L_001815c8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_001815cc:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0xcu);
    }
L_001815d0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_001815d4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001815d8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00181780;
        }
    }
L_001815dc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_001815e0:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001815e4:;
    {
        cpu->r[11] = 0x000016b4u;
    }
L_001815e8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_001815ec:;
    {
        cpu->r[9] = 0x00001788u;
    }
L_001815f0:;
    {
        cpu->r[12] = 0x000016a0u;
    }
L_001815f4:;
    {
        goto L_00181648;
    }
L_001815f8:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x40u);
    }
L_001815fc:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[10]);
    }
L_00181600:;
    {
        cpu->r[0] = rd8(cpu->r[1] + + 0x44u);
    }
L_00181604:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00181608:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00181638;
        }
    }
L_0018160c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_00181610:;
    {
        { uint32_t v = cpu->r[0] & 0x00000008u; set_nz(cpu, v); }
    }
L_00181614:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00181678;
        }
    }
L_00181618:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x3cu);
    }
L_0018161c:;
    {
        cpu->r[0] = rd8(cpu->r[1] + + 0x128u);
    }
L_00181620:;
    {
        cpu->r[1] = rd8(cpu->r[5] + cpu->r[11]);
    }
L_00181624:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00181628:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00181688;
        }
    }
L_0018162c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_00181630:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00181634:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00181688;
        }
    }
L_00181638:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0018163c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_00181640:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 1);
    }
L_00181644:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00181780;
        }
    }
L_00181648:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_0018164c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 0);
        }
    }
L_00181650:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = rd32(cpu->r[6] + + 0x8u);
        }
    }
L_00181654:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = rd32(cpu->r[6]);
        }
    }
L_00181658:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
        }
    }
L_0018165c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
        }
    }
L_00181660:;
    {
        cpu->r[5] = rd32(cpu->r[1]);
    }
L_00181664:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00181668:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00181638;
        }
    }
L_0018166c:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x4cu);
    }
L_00181670:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[8], 1, 1);
    }
L_00181674:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001815f8;
        }
    }
L_00181678:;
    {
        cpu->r[1] = rd8(cpu->r[5] + cpu->r[11]);
    }
L_0018167c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00181680:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00181684:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018162c;
        }
    }
L_00181688:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018168c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00181638;
        }
    }
L_00181690:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x40u);
    }
L_00181694:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00181698:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0018169c:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001816a0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_001816a4:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[10]);
    }
L_001816a8:;
    {
        cpu->r[14] = 0x001816acu; fn_0017c4f0(cpu);
    }
L_001816ac:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_001816b0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001816b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00181768;
        }
    }
L_001816b8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x4cu);
    }
L_001816bc:;
    {
        cpu->r[1] = 0x00000085u;
    }
L_001816c0:;
    {
        wr32(cpu->r[7] + + 0x34u, cpu->r[1]);
    }
L_001816c4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_001816c8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00181768;
        }
    }
L_001816cc:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x40u);
    }
L_001816d0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x214u);
    }
L_001816d4:;
    {
        cpu->r[14] = rd32(cpu->r[5] + + 0x21cu);
    }
L_001816d8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[10]);
    }
L_001816dc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_001816e0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_001816e4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x8u);
    }
L_001816e8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001816ec:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[14], 1, 0);
    }
L_001816f0:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[1]);
    }
L_001816f4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_001816f8:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_001816fc:;
    {
        cpu->r[14] = 0x00181700u; fn_00184e04(cpu);
    }
L_00181700:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x40u);
    }
L_00181704:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00181708:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[10]);
    }
L_0018170c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00181710:;
    {
        *vfp_s(cpu,15) = (float)*(uint32_t*)vfp_s(cpu,14);
    }
L_00181714:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x3cu);
    }
L_00181718:;
    {
        vfp_vsqrt(cpu, 15, 15);
    }
L_0018171c:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00181720:;
    {
        cpu->r[14] = 0x00181724u; fn_000ea0e0(cpu);
    }
L_00181724:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x1dcu);
    }
L_00181728:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_0018172c:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_00181730:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00181974;
        }
    }
L_00181734:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x3d8u);
    }
L_00181738:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x1bcu);
    }
L_0018173c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_00181740:;
    {
        wr32(cpu->r[5] + + 0x3d8u, cpu->r[3]);
    }
L_00181744:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_00181748:;
    {
        { uint32_t v = cpu->r[3] & 0x00000008u; set_nz(cpu, v); }
    }
L_0018174c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00181768;
        }
    }
L_00181750:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x3ccu);
    }
L_00181754:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x3d8u);
    }
L_00181758:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0018175c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[5] + + 0x484u);
        }
    }
L_00181760:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = cpu->r[3] | 0x00010000u; cpu->r[3] = v;
        }
    }
L_00181764:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[5] + + 0x484u, cpu->r[3]);
        }
    }
L_00181768:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_0018176c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00181770:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0xcu);
    }
L_00181774:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_00181778:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 1);
    }
L_0018177c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00181648;
        }
    }
L_00181780:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x48u);
    }
L_00181784:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_00181788:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000004u, 0, 0);
    }
L_0018178c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_00181790:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001815bc;
        }
    }
L_00181794:;
    {
        cpu->r[3] = 0x00001050u;
    }
L_00181798:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_0018179c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001817a0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00181564;
        }
    }
L_001817a4:;
    {
        cpu->r[8] = cpu->r[7];
    }
L_001817a8:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_001817ac:;
    {
        cpu->r[10] = 0x000016b4u;
    }
L_001817b0:;
    {
        cpu->r[11] = 0x00001d1cu;
    }
L_001817b4:;
    {
        cpu->r[0] = 0x00006667u;
    }
L_001817b8:;
    {
        cpu->r[1] = 0x00001c60u;
    }
L_001817bc:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x6666u << 16);
    }
L_001817c0:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_001817c4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_001817c8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_001817cc:;
    {
        cpu->r[0] = rd32(cpu->r[8] + + 0x50u);
    }
L_001817d0:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x76u);
    }
L_001817d4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001817d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001818fc;
        }
    }
L_001817dc:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x75u);
    }
L_001817e0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001817e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00181954;
        }
    }
L_001817e8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_001817ec:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0xcu);
    }
L_001817f0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_001817f4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001817f8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[4] = 0x00000000u;
        }
    }
L_001817fc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00181824;
        }
    }
L_00181800:;
    {
        goto L_001818fc;
    }
L_00181804:;
    {
        cpu->r[2] = 0x000016a0u;
    }
L_00181808:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[2]);
    }
L_0018180c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00181810:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00181854;
        }
    }
L_00181814:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00181818:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_0018181c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_00181820:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001818fc;
        }
    }
L_00181824:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_00181828:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 0);
        }
    }
L_0018182c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = rd32(cpu->r[6] + + 0x8u);
        }
    }
L_00181830:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = rd32(cpu->r[6]);
        }
    }
L_00181834:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
        }
    }
L_00181838:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
        }
    }
L_0018183c:;
    {
        cpu->r[5] = rd32(cpu->r[2]);
    }
L_00181840:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00181844:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00181814;
        }
    }
L_00181848:;
    {
        cpu->r[2] = rd8(cpu->r[5] + cpu->r[10]);
    }
L_0018184c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00181850:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00181804;
        }
    }
L_00181854:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00181858:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0018185c:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x50u);
    }
L_00181860:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00181864:;
    {
        cpu->r[14] = 0x00181868u; fn_0017c4f0(cpu);
    }
L_00181868:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018186c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001818e4;
        }
    }
L_00181870:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[11]);
    }
L_00181874:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_00181878:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[2] * (int64_t)(int32_t)cpu->r[3]; cpu->r[2] = (uint32_t)v; cpu->r[1] = (uint32_t)(v >> 32); }
    }
L_0018187c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 31u, &shc); cpu->r[2] = v;
    }
L_00181880:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[1], 1, 2u, &shc), cpu->r[2], 1, 0);
    }
L_00181884:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_00181888:;
    {
        sub_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 1u, &shc), 1, 1);
    }
L_0018188c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00181940;
        }
    }
L_00181890:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_00181894:;
    {
        cpu->r[1] = 0x00001bc8u;
    }
L_00181898:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_0018189c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[12]);
    }
L_001818a0:;
    {
        cpu->r[0] = rd32(cpu->r[8] + + 0x50u);
    }
L_001818a4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_001818a8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001818ac:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x70u);
    }
L_001818b0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_001818b4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_001818b8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001818bc:;
    {
        cpu->r[2] = 0x00000a78u;
    }
L_001818c0:;
    {
        cpu->r[1] = rd16(cpu->r[3] + + 0xe8u);
    }
L_001818c4:;
    {
        cpu->r[3] = 0x00000a81u;
    }
L_001818c8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001818cc:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
        }
    }
L_001818d0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000087u;
        }
    }
L_001818d4:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[7] + + 0x34u, cpu->r[3]);
        }
    }
L_001818d8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00181918;
        }
    }
L_001818dc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001818e0:;
    {
        cpu->r[14] = 0x001818e4u; fn_0017bde0(cpu);
    }
L_001818e4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_001818e8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001818ec:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0xcu);
    }
L_001818f0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_001818f4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_001818f8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00181824;
        }
    }
L_001818fc:;
    {
        cpu->r[3] = 0x00001050u;
    }
L_00181900:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_00181904:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_00181908:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_0018190c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[9], 1, 1);
    }
L_00181910:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001817cc;
        }
    }
L_00181914:;
    {
        goto L_00181564;
    }
L_00181918:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0018191c:;
    {
        cpu->r[14] = 0x00181920u; fn_001804ac(cpu);
    }
L_00181920:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00181924:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = 0x00000088u;
        }
    }
L_00181928:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000085u;
        }
    }
L_0018192c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[7] + + 0x34u, cpu->r[12]);
        }
    }
L_00181930:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[8] + + 0x50u);
        }
    }
L_00181934:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = rd32(cpu->r[8] + + 0x50u);
        }
    }
L_00181938:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[7] + + 0x34u, cpu->r[1]);
        }
    }
L_0018193c:;
    {
        goto L_001818dc;
    }
L_00181940:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00181944:;
    {
        cpu->r[1] = 0x00000016u;
    }
L_00181948:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0018194c:;
    {
        cpu->r[14] = 0x00181950u; fn_00161bec(cpu);
    }
L_00181950:;
    {
        goto L_00181890;
    }
L_00181954:;
    {
        cpu->r[14] = 0x00181958u; fn_0017ae08(cpu);
    }
L_00181958:;
    {
        cpu->r[3] = 0x00001050u;
    }
L_0018195c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_00181960:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_00181964:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_00181968:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[9], 1, 1);
    }
L_0018196c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001817cc;
        }
    }
L_00181970:;
    {
        goto L_00181564;
    }
L_00181974:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x498u);
    }
L_00181978:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018197c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00181744;
        }
    }
L_00181980:;
    {
        goto L_00181734;
    }
L_00181984:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_00181988:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0018198c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_00181990:;
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
L_00181994:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00181998:;
    {
        cpu->r[12] = 0x0000047bu;
    }
L_0018199c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001819a0:;
    {
        cpu->r[14] = 0x001819a4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001819a4:;
    {
        goto L_001815c8;
    }
}

/* _ZN4CMap9DrawDebugEv @ 001819c0 (arm) */
void fn_001819c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001819c0:;
    {
        cpu->r[2] = rd32(0x001819c8u + + 0x2ccu);
    }
L_001819c4:;
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
L_001819c8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000001b4u, 1, 0);
    }
L_001819cc:;
    {
        cpu->r[1] = rd32(0x001819d4u + + 0x2c4u);
    }
L_001819d0:;
    {
        cpu->r[4] = 0x000011e8u;
    }
L_001819d4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_001819d8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001819dc:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_001819e0:;
    {
        cpu->r[1] = add_flags(cpu, 0x001819e8u, cpu->r[1], 0, 0);
    }
L_001819e4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_001819e8:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x000000f8u, 0, 0);
    }
L_001819ec:;
    {
        cpu->r[3] = rd32(0x001819f4u + + 0x2a8u);
    }
L_001819f0:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_001819f4:;
    {
        cpu->r[5] = rd32(cpu->r[1] + cpu->r[0]);
    }
L_001819f8:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_001819fc:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_00181a00:;
    {
        cpu->r[1] = rd32(cpu->r[5]);
    }
L_00181a04:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_00181a08:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_00181a0c:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_00181a10:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[4]);
    }
L_00181a14:;
    {
        wr32(cpu->r[13] + + 0x1acu, cpu->r[1]);
    }
L_00181a18:;
    {
        cpu->r[1] = 0x00001314u;
    }
L_00181a1c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[1]);
    }
L_00181a20:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00181a24:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00181a28:;
    {
        cpu->r[14] = 0x00181a30u;
    }
L_00181a2c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00181a30u)) return;
    }
L_00181a30:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_00181a34:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[4]);
    }
L_00181a38:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00181a3c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00181a40:;
    {
        cpu->r[14] = 0x00181a48u;
    }
L_00181a44:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00181a48u)) return;
    }
L_00181a48:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_00181a4c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00181a50:;
    {
        cpu->r[14] = 0x00181a54u; fn_0012e230(cpu);
    }
L_00181a54:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00181a58:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[2] = v;
    }
L_00181a5c:;
    {
        wr16(cpu->r[9] + cpu->r[2], cpu->r[3]);
    }
L_00181a60:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00181a64:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000012u, 1, 1);
    }
L_00181a68:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00181a58;
        }
    }
L_00181a6c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000164u, 0, 0);
    }
L_00181a70:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_00181a74:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_00181a78:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00181a7c:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_00181a80:;
    {
        cpu->r[0] = 0x000001c2u;
    }
L_00181a84:;
    {
        cpu->r[1] = (cpu->r[2] >> 1) & 0xffu;
    }
L_00181a88:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000019u, 0, 0);
    }
L_00181a8c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_00181a90:;
    {
        wr8(cpu->r[3] + + 0x2u, cpu->r[1]);
    }
L_00181a94:;
    {
        wr8(cpu->r[3], cpu->r[1]);
    }
L_00181a98:;
    {
        wr8(cpu->r[3] + + 0x1u, cpu->r[1]);
    }
L_00181a9c:;
    {
        wr8(cpu->r[3] + + 0x3u, cpu->r[12]);
    }
L_00181aa0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00181aa4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00181a84;
        }
    }
L_00181aa8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_00181aac:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x20u);
    }
L_00181ab0:;
    {
        cpu->r[11] = rd32(cpu->r[0] + + 0x1cu);
    }
L_00181ab4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00181ab8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00181c50;
        }
    }
L_00181abc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_00181ac0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00181ac4:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_00181ac8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_00181acc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_00181ad0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_00181ad4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_00181ad8:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[11], 1, 1);
    }
L_00181adc:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00181c10;
        }
    }
L_00181ae0:;
    {
        cpu->r[6] = cpu->r[7];
    }
L_00181ae4:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_00181ae8:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00181aec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00181af0:;
    {
        cpu->r[14] = 0x00181af4u; fn_00180c78(cpu);
    }
L_00181af4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00181af8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00181afc:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_00181b00:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00181b04:;
    {
        cpu->r[14] = 0x00181b08u; fn_00180bf0(cpu);
    }
L_00181b08:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], 0x00000002u, 0, 0);
    }
L_00181b0c:;
    {
        cpu->r[1] = rd32(cpu->r[10] + shifter(cpu->r[8], 2, 2u, &shc));
    }
L_00181b10:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[1];
    }
L_00181b14:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00181b18:;
    {
        vfp_vneg(cpu, 14, 14);
    }
L_00181b1c:;
    {
        *(uint32_t*)G(cpu->r[6]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00181b20:;
    {
        cpu->r[2] = rd32(cpu->r[0] + shifter(cpu->r[8], 2, 2u, &shc));
    }
L_00181b24:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[2];
    }
L_00181b28:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00181b2c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_00181b30:;
    {
        cpu->r[1] = rd32(cpu->r[0] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_00181b34:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[1];
    }
L_00181b38:;
    {
        cpu->r[0] = rd32(cpu->r[0] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_00181b3c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_00181b40:;
    {
        cpu->r[2] = rd32(cpu->r[10] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_00181b44:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[2];
    }
L_00181b48:;
    {
        cpu->r[3] = rd32(cpu->r[10] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_00181b4c:;
    {
        *(uint32_t*)vfp_s(cpu,10) = cpu->r[3];
    }
L_00181b50:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000003u, 0, 0);
    }
L_00181b54:;
    {
        sub_flags(cpu, cpu->r[8], 0x0000001bu, 1, 1);
    }
L_00181b58:;
    {
        *vfp_s(cpu,10) = (float)*(int32_t*)vfp_s(cpu,10);
    }
L_00181b5c:;
    {
        *vfp_s(cpu,11) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_00181b60:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 10);
    }
L_00181b64:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_00181b68:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_00181b6c:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00181b70:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00181b74:;
    {
        vfp_vneg(cpu, 15, 15);
    }
L_00181b78:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00181b7c:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00181b80:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000018u, 0, 0);
    }
L_00181b84:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00181ae8;
        }
    }
L_00181b88:;
    {
        cpu->r[0] = 0x00000b44u;
    }
L_00181b8c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00181b90:;
    {
        cpu->r[14] = 0x00181b94u; imp_glDisable(cpu); /* glDisable */
    }
L_00181b94:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_00181b98:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_00181b9c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00181ba0:;
    {
        cpu->r[6] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00181ba4:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_00181ba8:;
    {
        cpu->r[14] = 0x00181bacu; fn_0012e19c(cpu);
    }
L_00181bac:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00181bb0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_00181bb4:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_00181bb8:;
    {
        cpu->r[1] = 0x00001401u;
    }
L_00181bbc:;
    {
        cpu->r[14] = 0x00181bc0u; imp_glColorPointer(cpu); /* glColorPointer */
    }
L_00181bc0:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_00181bc4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00181bc8:;
    {
        cpu->r[14] = 0x00181bccu; fn_0012e1c8(cpu);
    }
L_00181bcc:;
    {
        cpu->r[0] = 0x00000003u;
    }
L_00181bd0:;
    {
        cpu->r[1] = 0x00001406u;
    }
L_00181bd4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00181bd8:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00181bdc:;
    {
        cpu->r[14] = 0x00181be0u; imp_glVertexPointer(cpu); /* glVertexPointer */
    }
L_00181be0:;
    {
        cpu->r[1] = 0x00000012u;
    }
L_00181be4:;
    {
        cpu->r[2] = 0x00001403u;
    }
L_00181be8:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_00181bec:;
    {
        cpu->r[0] = 0x00000005u;
    }
L_00181bf0:;
    {
        cpu->r[14] = 0x00181bf4u; imp_glDrawElements(cpu); /* glDrawElements */
    }
L_00181bf4:;
    {
        cpu->r[14] = 0x00181bf8u; imp_glGetError(cpu); /* glGetError */
    }
L_00181bf8:;
    {
        cpu->r[0] = 0x00000b44u;
    }
L_00181bfc:;
    {
        cpu->r[14] = 0x00181c00u; imp_glEnable(cpu); /* glEnable */
    }
L_00181c00:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[11], 1, 1);
    }
L_00181c04:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00181ae0;
        }
    }
L_00181c08:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_00181c0c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x20u);
    }
L_00181c10:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_00181c14:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00181c18:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[1]);
    }
L_00181c1c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00181c20:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00181c50;
        }
    }
L_00181c24:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_00181c28:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_00181c2c:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x28u);
    }
L_00181c30:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x24u);
    }
L_00181c34:;
    {
        cpu->r[4] = rd32(cpu->r[1] + cpu->r[0]);
    }
L_00181c38:;
    {
        cpu->r[11] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_00181c3c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_00181c40:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_00181c44:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[4], cpu->r[11], 0, 0);
    }
L_00181c48:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], 0x00000001u, 1, 0);
    }
L_00181c4c:;
    {
        goto L_00181ad8;
    }
L_00181c50:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_00181c54:;
    {
        cpu->r[3] = 0x000011e8u;
    }
L_00181c58:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00181c5c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00181c60:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00181c64:;
    {
        cpu->r[14] = 0x00181c6cu;
    }
L_00181c68:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00181c6cu)) return;
    }
L_00181c6c:;
    {
        cpu->r[1] = rd32(cpu->r[13]);
    }
L_00181c70:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00181c74:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1acu);
    }
L_00181c78:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[0]);
    }
L_00181c7c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00181c80:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00181c84:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00181c90;
        }
    }
L_00181c88:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000001b4u, 0, 0);
    }
L_00181c8c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00181c90u)) return;
    }
L_00181c90:;
    {
        cpu->r[14] = 0x00181c94u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_00181c94:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[12], 3, 15u, &shc); cpu->r[0] = v;
        }
    }
L_00181c98:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[12] & shifter(cpu->r[0], 3, (cpu->r[10] & 0xffu), &shc); cpu->r[8] = v;
        }
    }
L_00181c9c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
}

/* _ZN4CMap27ComputeCollisionPlaneParamsEiiiii @ 00181ca0 (arm) */
void fn_00181ca0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00181ca0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x18u);
    }
L_00181ca4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_00181ca8:;
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
L_00181cac:;
    {
        cpu->r[4] = 0x000001d0u;
    }
L_00181cb0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000084u, 1, 0);
    }
L_00181cb4:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00181cb8:;
    {
        uint32_t v = cpu->r[4] * cpu->r[2] + cpu->r[0]; cpu->r[2] = v;
    }
L_00181cbc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xa8u);
    }
L_00181cc0:;
    {
        uint32_t v = cpu->r[4] * cpu->r[1] + cpu->r[0]; cpu->r[4] = v;
    }
L_00181cc4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_00181cc8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 1u, &shc), 0, 0);
    }
L_00181ccc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000068u, 0, 0);
    }
L_00181cd0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_00181cd4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x00000002u, 0, 0);
    }
L_00181cd8:;
    {
        cpu->r[11] = rd32(cpu->r[2] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_00181cdc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000074u, 0, 0);
    }
L_00181ce0:;
    {
        cpu->r[9] = rd32(cpu->r[2] + shifter(cpu->r[14], 2, 2u, &shc));
    }
L_00181ce4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00181ce8:;
    {
        cpu->r[10] = rd32(cpu->r[4] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_00181cec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + shifter(cpu->r[14], 2, 2u, &shc));
    }
L_00181cf0:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[11], cpu->r[10], 1, 0);
    }
L_00181cf4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[14]);
    }
L_00181cf8:;
    {
        cpu->r[14] = rd32(cpu->r[4] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_00181cfc:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[8]);
    }
L_00181d00:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x0000005cu, 0, 0);
    }
L_00181d04:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[8]);
    }
L_00181d08:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[14]);
    }
L_00181d0c:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 0);
    }
L_00181d10:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[14]);
    }
L_00181d14:;
    {
        cpu->r[14] = rd32(cpu->r[4] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_00181d18:;
    {
        cpu->r[8] = rd32(cpu->r[2] + shifter(cpu->r[7], 2, 2u, &shc));
    }
L_00181d1c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + shifter(cpu->r[7], 2, 2u, &shc));
    }
L_00181d20:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[14]);
    }
L_00181d24:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[8], cpu->r[7], 1, 0);
    }
L_00181d28:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[14]);
    }
L_00181d2c:;
    {
        cpu->r[14] = rd32(cpu->r[4] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_00181d30:;
    {
        cpu->r[1] = rd32(cpu->r[2] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_00181d34:;
    {
        cpu->r[12] = rd32(cpu->r[2] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_00181d38:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[14]);
    }
L_00181d3c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00181d40:;
    {
        cpu->r[5] = rd32(cpu->r[2] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_00181d44:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], cpu->r[10], 1, 0);
    }
L_00181d48:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_00181d4c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_00181d50:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_00181d54:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_00181d58:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[14], cpu->r[3], 1, 0);
    }
L_00181d5c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x10u);
    }
L_00181d60:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[2]);
    }
L_00181d64:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[12]);
    }
L_00181d68:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[14], cpu->r[7], 1, 0);
    }
L_00181d6c:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[5]);
    }
L_00181d70:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[1]);
    }
L_00181d74:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[12]);
    }
L_00181d78:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00181d7c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_00181d80:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_00181d84:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0xacu);
    }
L_00181d88:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[14]);
    }
L_00181d8c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_00181d90:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[12]);
    }
L_00181d94:;
    {
        wr32(cpu->r[13] + + 0x70u, cpu->r[1]);
    }
L_00181d98:;
    {
        cpu->r[14] = 0x00181d9cu; fn_001855bc(cpu);
    }
L_00181d9c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x30u);
    }
L_00181da0:;
    {
        cpu->r[14] = 0x00181da4u; fn_001855bc(cpu);
    }
L_00181da4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x68u);
    }
L_00181da8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00181dac:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_00181db0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000050u, 0, 0);
    }
L_00181db4:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[12]);
    }
L_00181db8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x6cu);
    }
L_00181dbc:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[12]);
    }
L_00181dc0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x70u);
    }
L_00181dc4:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[12]);
    }
L_00181dc8:;
    {
        cpu->r[14] = 0x00181dccu; fn_00184f0c(cpu);
    }
L_00181dcc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x60u);
    }
L_00181dd0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[5], 0x00000030u, 0, 0);
    }
L_00181dd4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00181dd8:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[5], 0x00000038u, 0, 0);
    }
L_00181ddc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00181de0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_00181de4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_00181de8:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x60u, cpu->r[2]);
        }
    }
L_00181dec:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[12], 2, 2u, &shc), cpu->r[1]);
    }
L_00181df0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000040u, 0, 0);
    }
L_00181df4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_00181df8:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[14], 2, 2u, &shc), cpu->r[2]);
    }
L_00181dfc:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[8], 1, 0);
    }
L_00181e00:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_00181e04:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x64u);
    }
L_00181e08:;
    {
        uint32_t v = cpu->r[1] * cpu->r[10]; cpu->r[10] = v;
    }
L_00181e0c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_00181e10:;
    {
        uint32_t v = cpu->r[12] * cpu->r[7] + cpu->r[10]; cpu->r[7] = v;
    }
L_00181e14:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], cpu->r[9], 1, 0);
    }
L_00181e18:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[14]);
    }
L_00181e1c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000038u, 0, 0);
    }
L_00181e20:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00181e24:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_00181e28:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000048u, 0, 0);
    }
L_00181e2c:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], cpu->r[11], 1, 0);
    }
L_00181e30:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_00181e34:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[14]);
    }
L_00181e38:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_00181e3c:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[1], cpu->r[8], 1, 0);
    }
L_00181e40:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_00181e44:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00181e48:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_00181e4c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[2] + cpu->r[7]; cpu->r[7] = v;
    }
L_00181e50:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[14], 2, 2u, &shc), cpu->r[12]);
    }
L_00181e54:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00181e58:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[1], cpu->r[9], 1, 0);
    }
L_00181e5c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_00181e60:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_00181e64:;
    {
        cpu->r[7] = sub_flags(cpu, 0x00000000u, cpu->r[7], 1, 0);
    }
L_00181e68:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00181e6c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_00181e70:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[14], 2, 2u, &shc), cpu->r[7]);
    }
L_00181e74:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[12], cpu->r[11], 1, 0);
    }
L_00181e78:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[1]);
    }
L_00181e7c:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[2]);
    }
L_00181e80:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[3]);
    }
L_00181e84:;
    {
        wr32(cpu->r[13] + + 0x70u, cpu->r[8]);
    }
L_00181e88:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[9]);
    }
L_00181e8c:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[11]);
    }
L_00181e90:;
    {
        cpu->r[14] = 0x00181e94u; fn_001855bc(cpu);
    }
L_00181e94:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x30u);
    }
L_00181e98:;
    {
        cpu->r[14] = 0x00181e9cu; fn_001855bc(cpu);
    }
L_00181e9c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x68u);
    }
L_00181ea0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00181ea4:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00181ea8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_00181eac:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[5], 0x00000058u, 0, 0);
    }
L_00181eb0:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[3]);
    }
L_00181eb4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x6cu);
    }
L_00181eb8:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[3]);
    }
L_00181ebc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x70u);
    }
L_00181ec0:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[3]);
    }
L_00181ec4:;
    {
        cpu->r[14] = 0x00181ec8u; fn_00184f0c(cpu);
    }
L_00181ec8:;
    {
        uint32_t base = cpu->r[10];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_00181ecc:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xcu);
    }
L_00181ed0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[5], 0x00000050u, 0, 0);
    }
L_00181ed4:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x28u);
    }
L_00181ed8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000068u, 0, 0);
    }
L_00181edc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000060u, 0, 0);
    }
L_00181ee0:;
    {
        uint32_t base = cpu->r[7];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_00181ee4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x60u);
    }
L_00181ee8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00181eec:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00181ef0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_00181ef4:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[6], 2, 2u, &shc), cpu->r[2]);
    }
L_00181ef8:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[12], 2, 2u, &shc), cpu->r[0]);
    }
L_00181efc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x64u);
    }
L_00181f00:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_00181f04:;
    {
        uint32_t v = cpu->r[0] * cpu->r[8]; cpu->r[0] = v;
    }
L_00181f08:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[5], 2, 2u, &shc), cpu->r[1]);
    }
L_00181f0c:;
    {
        uint32_t v = cpu->r[1] * cpu->r[12] + cpu->r[0]; cpu->r[0] = v;
    }
L_00181f10:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_00181f14:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2] + cpu->r[0]; cpu->r[2] = v;
    }
L_00181f18:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000000u, cpu->r[2], 1, 0);
    }
L_00181f1c:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[2]);
    }
L_00181f20:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000084u, 0, 0);
    }
L_00181f24:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00181f28u)) return;
    }
}

/* sub_00181f28 @ 00181f28 (arm) */
void fn_00181f28(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00181f28:;
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
L_00181f2c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00181f30:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00181f34:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_00181f38:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0xcu);
    }
L_00181f3c:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00181f40:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
    }
L_00181f44:;
    {
        cpu->r[9] = cpu->r[2];
    }
L_00181f48:;
    {
        cpu->r[11] = cpu->r[4];
    }
L_00181f4c:;
    {
        cpu->r[0] = 0x00000003u;
    }
L_00181f50:;
    {
        cpu->r[8] = cpu->r[4];
    }
L_00181f54:;
    {
        cpu->r[7] = rd32(cpu->r[6] + cpu->r[4]);
    }
L_00181f58:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[5], 1, 1);
    }
L_00181f5c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_00181f60:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_00181f64:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], cpu->r[7], 1, 0);
    }
L_00181f68:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_00181f6c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_00181f70:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = cpu->r[2] ^ 0x00000001u; cpu->r[3] = v;
        }
    }
L_00181f74:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[5], cpu->r[7], 1, 0);
    }
L_00181f78:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00181f7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00181fa4;
        }
    }
L_00181f80:;
    {
        cpu->r[10] = rd32(cpu->r[9] + cpu->r[4]);
    }
L_00181f84:;
    {
        cpu->r[0] = rd32(cpu->r[9] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_00181f88:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[10], 1, 0);
    }
L_00181f8c:;
    {
        uint32_t v = cpu->r[12] * cpu->r[0]; cpu->r[0] = v;
    }
L_00181f90:;
    {
        cpu->r[14] = 0x00181f94u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00181f94:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_00181f98:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_00181f9c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_00181fa0:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = cpu->r[11] ^ 0x00000001u; cpu->r[11] = v;
        }
    }
L_00181fa4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_00181fa8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00181fac:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000010u, 1, 1);
    }
L_00181fb0:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00181fb4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_00181fb8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00181f54;
        }
    }
L_00181fbc:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00181fc0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00181fc4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00181fc8u)) return;
    }
}

/* _ZN4CMap28GetCarRoadSectionForPositionERK8Vector2dii @ 00181fc8 (arm) */
void fn_00181fc8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00181fc8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_00181fcc:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00181fd0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_00181fd4:;
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
L_00181fd8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_00181fdc:;
    {
        uint32_t v = cpu->r[2] & ~ shifter(cpu->r[2], 1, 31u, &shc); cpu->r[2] = v;
    }
L_00181fe0:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_00181fe4:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00181fe8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00181fec:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_00181ff0:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_00181ff4:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_00181ff8:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_00181ffc:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_00182000:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00182004:;
    {
        cpu->r[9] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_00182008:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_0018200c:;
    {
        cpu->r[10] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00182010:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00182014:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00182018:;
    {
        cpu->r[14] = 0x0018201cu; fn_00180c78(cpu);
    }
L_0018201c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00182020:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00182024:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00182028:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0018202c:;
    {
        cpu->r[14] = 0x00182030u; fn_00180b68(cpu);
    }
L_00182030:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00182034:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_00182038:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_0018203c:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_00182040:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00182044:;
    {
        cpu->r[14] = rd32(cpu->r[12] + + 0x60u);
    }
L_00182048:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[14]);
    }
L_0018204c:;
    {
        cpu->r[14] = rd32(cpu->r[12]);
    }
L_00182050:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[14]);
    }
L_00182054:;
    {
        cpu->r[14] = rd32(cpu->r[5]);
    }
L_00182058:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[14]);
    }
L_0018205c:;
    {
        cpu->r[14] = rd32(cpu->r[5] + + 0x60u);
    }
L_00182060:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[14]);
    }
L_00182064:;
    {
        cpu->r[14] = rd32(cpu->r[12] + + 0x68u);
    }
L_00182068:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[14]);
    }
L_0018206c:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x8u);
    }
L_00182070:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_00182074:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x8u);
    }
L_00182078:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_0018207c:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x68u);
    }
L_00182080:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_00182084:;
    {
        cpu->r[14] = 0x00182088u; fn_00181f28(cpu);
    }
L_00182088:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018208c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001820b4;
        }
    }
L_00182090:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x30u);
    }
L_00182094:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00182098:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_0018209c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[4] = 0x00000000u;
        }
    }
L_001820a0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001820a4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001820c0;
        }
    }
L_001820a8:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_001820ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001820c0;
        }
    }
L_001820b0:;
    {
        cpu->r[4] = (~0x00000000u);
    }
L_001820b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001820b8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_001820bc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001820c0u)) return;
    }
L_001820c0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001820c4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_001820c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00182010;
        }
    }
L_001820cc:;
    {
        goto L_001820b0;
    }
}

/* _ZN4CMap31PointShortcutSectionOnMainTrackEiRK8Vector2d @ 001820d0 (arm) */
void fn_001820d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001820d0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x1cu);
    }
L_001820d4:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_001820d8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001820dc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001820e0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001820e4:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001820e8:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001820ec:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001820fc;
        }
    }
L_001820f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001820f4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001820f8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001820fcu)) return;
    }
L_001820fc:;
    {
        cpu->r[14] = 0x00182100u; fn_00181198(cpu);
    }
L_00182100:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00182104:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00182198;
        }
    }
L_00182108:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0018210c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00182110:;
    {
        cpu->r[14] = 0x00182114u; fn_0018044c(cpu);
    }
L_00182114:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[4], cpu->r[0], 1, 0);
    }
L_00182118:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0018211c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_00182120:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001820f0;
        }
    }
L_00182124:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x30u);
    }
L_00182128:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0018212c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00182160;
        }
    }
L_00182130:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00182134:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x0000000cu, 0, 0);
    }
L_00182138:;
    {
        cpu->r[14] = 0x0018213cu; fn_00180c78(cpu);
    }
L_0018213c:;
    {
        cpu->r[2] = 0x000001c6u;
    }
L_00182140:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00182144:;
    {
        cpu->r[3] = 0x00000005u;
    }
L_00182148:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[0] + cpu->r[2]);
    }
L_0018214c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00182150:;
    {
        cpu->r[14] = 0x00182154u; fn_00181fc8(cpu);
    }
L_00182154:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00182158:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[4] = cpu->r[0];
        }
    }
L_0018215c:;
    {
        goto L_001820f0;
    }
L_00182160:;
    {
        cpu->r[1] = rd32(0x00182168u + + 0x68u);
    }
L_00182164:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00182168:;
    {
        cpu->r[12] = rd32(0x00182170u + + 0x64u);
    }
L_0018216c:;
    {
        cpu->r[14] = 0x0000003au;
    }
L_00182170:;
    {
        cpu->r[2] = rd32(0x00182178u + + 0x60u);
    }
L_00182174:;
    {
        cpu->r[1] = add_flags(cpu, 0x0018217cu, cpu->r[1], 0, 0);
    }
L_00182178:;
    {
        cpu->r[3] = rd32(0x00182180u + + 0x5cu);
    }
L_0018217c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00182184u, cpu->r[12], 0, 0);
    }
L_00182180:;
    {
        cpu->r[2] = add_flags(cpu, 0x00182188u, cpu->r[2], 0, 0);
    }
L_00182184:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000acu, 0, 0);
    }
L_00182188:;
    {
        cpu->r[3] = add_flags(cpu, 0x00182190u, cpu->r[3], 0, 0);
    }
L_0018218c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00182190:;
    {
        cpu->r[14] = 0x00182194u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00182194:;
    {
        goto L_00182130;
    }
L_00182198:;
    {
        cpu->r[1] = rd32(0x001821a0u + + 0x40u);
    }
L_0018219c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001821a0:;
    {
        cpu->r[12] = rd32(0x001821a8u + + 0x3cu);
    }
L_001821a4:;
    {
        cpu->r[14] = 0x0000036du;
    }
L_001821a8:;
    {
        cpu->r[2] = rd32(0x001821b0u + + 0x38u);
    }
L_001821ac:;
    {
        cpu->r[1] = add_flags(cpu, 0x001821b4u, cpu->r[1], 0, 0);
    }
L_001821b0:;
    {
        cpu->r[3] = rd32(0x001821b8u + + 0x34u);
    }
L_001821b4:;
    {
        cpu->r[12] = add_flags(cpu, 0x001821bcu, cpu->r[12], 0, 0);
    }
L_001821b8:;
    {
        cpu->r[2] = add_flags(cpu, 0x001821c0u, cpu->r[2], 0, 0);
    }
L_001821bc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000008cu, 0, 0);
    }
L_001821c0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001821c8u, cpu->r[3], 0, 0);
    }
L_001821c4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_001821c8:;
    {
        cpu->r[14] = 0x001821ccu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001821cc:;
    {
        goto L_00182108;
    }
}

/* _ZN4CMap22GetRoadLaneForPositionERK8Vector3di @ 001821f0 (arm) */
void fn_001821f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001821f0:;
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
L_001821f4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_001821f8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_001821fc:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00182200:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00182204:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_00182208:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_0018220c:;
    {
        cpu->r[14] = 0x00182210u; fn_00180c78(cpu);
    }
L_00182210:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00182214:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00182218:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0018221c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_00182220:;
    {
        cpu->r[11] = cpu->r[13];
    }
L_00182224:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00182228:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0018222c:;
    {
        cpu->r[14] = 0x00182230u; fn_00180b68(cpu);
    }
L_00182230:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4]);
    }
L_00182234:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00182238:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_0018223c:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_00182240:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00182244:;
    {
        cpu->r[10] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_00182248:;
    {
        cpu->r[8] = *(uint32_t*)vfp_s(cpu,14);
    }
L_0018224c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00182250:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_00182254:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00182258:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_0018225c:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_00182260:;
    {
        cpu->r[3] = cpu->r[13];
    }
L_00182264:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_00182268:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_0018226c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_00182270:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_00182274:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0xcu);
    }
L_00182278:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_0018227c:;
    {
        cpu->r[12] = rd32(cpu->r[5]);
    }
L_00182280:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_00182284:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x8u);
    }
L_00182288:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0018228c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x14u);
    }
L_00182290:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x0000000cu, 0, 0);
    }
L_00182294:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00182298:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x14u);
    }
L_0018229c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_001822a0:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x8u);
    }
L_001822a4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x0000000cu, 0, 0);
    }
L_001822a8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_001822ac:;
    {
        cpu->r[14] = 0x001822b0u; fn_00181f28(cpu);
    }
L_001822b0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001822b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001822c8;
        }
    }
L_001822b8:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000009u, 1, 1);
    }
L_001822bc:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_001822c0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00182250;
        }
    }
L_001822c4:;
    {
        cpu->r[7] = (~0x00000000u);
    }
L_001822c8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001822cc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_001822d0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001822d4u)) return;
    }
}

/* _ZN4CMap4InitEiPP4CCariiiP8Vector4s @ 001822d4 (arm) */
void fn_001822d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001822d4:;
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
L_001822d8:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_001822dc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000f4u, 1, 0);
    }
L_001822e0:;
    {
        cpu->r[5] = rd32(0x001822e8u + + 0x4c0u);
    }
L_001822e4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001822e8:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[3]);
    }
L_001822ec:;
    {
        cpu->r[3] = rd32(0x001822f4u + + 0x4b8u);
    }
L_001822f0:;
    {
        cpu->r[5] = add_flags(cpu, 0x001822f8u, cpu->r[5], 0, 0);
    }
L_001822f4:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001822f8:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_001822fc:;
    {
        cpu->r[14] = 0x00182300u; fn_00096b5c(cpu);
    }
L_00182300:;
    {
        cpu->r[1] = rd32(0x00182308u + + 0x4a8u);
    }
L_00182304:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_00182308:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018230c:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[3]);
    }
L_00182310:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_00182314:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00182318:;
    {
        wr16(cpu->r[4] + + 0x14u, cpu->r[1]);
    }
L_0018231c:;
    {
        cpu->r[1] = 0x0000009cu;
    }
L_00182320:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x438u);
    }
L_00182324:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[3]);
    }
L_00182328:;
    {
        uint32_t v = cpu->r[1] * cpu->r[0]; cpu->r[1] = v;
    }
L_0018232c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_00182330:;
    {
        cpu->r[8] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_00182334:;
    {
        cpu->r[2] = 0x00000040u;
    }
L_00182338:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x38u);
    }
L_0018233c:;
    {
        cpu->r[1] = 0x000010c4u;
    }
L_00182340:;
    {
        wr8(cpu->r[4] + + 0xfu, cpu->r[2]);
    }
L_00182344:;
    {
        cpu->r[2] = 0x0000000cu;
    }
L_00182348:;
    {
        wr8(cpu->r[4] + + 0x12u, cpu->r[3]);
    }
L_0018234c:;
    {
        wr8(cpu->r[4] + + 0x10u, cpu->r[2]);
    }
L_00182350:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00182354:;
    {
        wr8(cpu->r[4] + + 0x11u, cpu->r[2]);
    }
L_00182358:;
    {
        cpu->r[2] = rd32(cpu->r[10]);
    }
L_0018235c:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[6]);
    }
L_00182360:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_00182364:;
    {
        cpu->r[2] = 0x00001050u;
    }
L_00182368:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[3]);
    }
L_0018236c:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_00182370:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[3]);
    }
L_00182374:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
    }
L_00182378:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00182698;
        }
    }
L_0018237c:;
    {
        cpu->r[7] = rd32(0x00182384u + + 0x430u);
    }
L_00182380:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00182384:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00182388:;
    {
        cpu->r[14] = 0x0018238cu; fn_00189f5c(cpu);
    }
L_0018238c:;
    {
        cpu->r[1] = 0x0000000cu;
    }
L_00182390:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[0]);
    }
L_00182394:;
    {
        cpu->r[14] = 0x00182398u; fn_001897b4(cpu);
    }
L_00182398:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0018239c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001833e4;
        }
    }
L_001823a0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001823a4:;
    {
        cpu->r[7] = 0x00000006u;
    }
L_001823a8:;
    {
        cpu->r[14] = 0x001823acu; fn_000fc5dc(cpu);
    }
L_001823ac:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001823b0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001823b4:;
    {
        cpu->r[14] = 0x001823b8u; fn_000fc650(cpu);
    }
L_001823b8:;
    {
        uint32_t v = cpu->r[7] * cpu->r[6]; cpu->r[1] = v;
    }
L_001823bc:;
    {
        cpu->r[6] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_001823c0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001823c4:;
    {
        cpu->r[14] = 0x001823c8u; fn_000fc5ec(cpu);
    }
L_001823c8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001823cc:;
    {
        cpu->r[14] = 0x001823d0u; fn_000fc628(cpu);
    }
L_001823d0:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001823d4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001823d8:;
    {
        cpu->r[14] = 0x001823dcu; fn_000fc5dc(cpu);
    }
L_001823dc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000002u, 0, 0);
    }
L_001823e0:;
    {
        cpu->r[1] = (uint32_t)((int16_t)cpu->r[6]);
    }
L_001823e4:;
    {
        uint32_t v = cpu->r[1] * cpu->r[7] + cpu->r[10]; cpu->r[1] = v;
    }
L_001823e8:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[0], cpu->r[8], 1, 0);
    }
L_001823ec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001823f0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[8], 1, 0);
    }
L_001823f4:;
    {
        cpu->r[14] = 0x001823f8u; fn_000fc5ec(cpu);
    }
L_001823f8:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001823fc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00182400:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000ecu, 0, 0);
    }
L_00182404:;
    {
        cpu->r[14] = 0x00182408u; fn_000fc5f4(cpu);
    }
L_00182408:;
    {
        cpu->r[3] = rd16(cpu->r[13] + + 0xecu);
    }
L_0018240c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000032u, 1, 1);
    }
L_00182410:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_00182414:;
    {
        if (cond_test(cpu, 9)) {
        wr16(cpu->r[13] + + 0xeau, cpu->r[3]);
        }
    }
L_00182418:;
    {
        if (cond_test(cpu, 9)) {
        wr16(cpu->r[13] + + 0xecu, cpu->r[2]);
        }
    }
L_0018241c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00182430;
        }
    }
L_00182420:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00182424:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000eau, 0, 0);
    }
L_00182428:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_0018242c:;
    {
        cpu->r[14] = 0x00182430u; fn_000fc5f4(cpu);
    }
L_00182430:;
    {
        cpu->r[0] = rd16(cpu->r[13] + + 0xeau);
    }
L_00182434:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000032u, 1, 1);
    }
L_00182438:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001833a4;
        }
    }
L_0018243c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00182440:;
    {
        cpu->r[1] = 0x00000009u;
    }
L_00182444:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[3]);
    }
L_00182448:;
    {
        cpu->r[14] = 0x0018244cu; imp___aeabi_uidiv(cpu); /* __aeabi_uidiv */
    }
L_0018244c:;
    {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_00182450:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[0]);
    }
L_00182454:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[0]);
    }
L_00182458:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x30u);
    }
L_0018245c:;
    {
        cpu->r[0] = 0x0000003au;
    }
L_00182460:;
    {
        uint32_t v = cpu->r[0] * cpu->r[8]; cpu->r[0] = v;
    }
L_00182464:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00182468:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 3u, &shc); cpu->r[0] = v;
    }
L_0018246c:;
    {
        cpu->r[14] = 0x00182470u; imp__Znaj(cpu); /* _Znaj */
    }
L_00182470:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00182474:;
    {
        cpu->r[3] = 0x000001d0u;
    }
L_00182478:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_0018247c:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[3]);
        wr32(ea + 4u, cpu->r[8]);
    }
L_00182480:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001824ac;
        }
    }
L_00182484:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_00182488:;
    {
        cpu->r[6] = cpu->r[9];
    }
L_0018248c:;
    {
        cpu->r[10] = cpu->r[7];
    }
L_00182490:;
    {
        wr32(cpu->r[6] + + 0xb0u, cpu->r[10]);
    }
L_00182494:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000070u, 0, 0);
    }
L_00182498:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_0018249c:;
    {
        cpu->r[14] = 0x001824a0u; fn_001535e0(cpu);
    }
L_001824a0:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[7], 1, 1);
    }
L_001824a4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x000001d0u, 0, 0);
    }
L_001824a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00182490;
        }
    }
L_001824ac:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x20u);
    }
L_001824b0:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[9]);
    }
L_001824b4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001824b8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00182500;
        }
    }
L_001824bc:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001824c0:;
    {
        cpu->r[6] = 0x00000050u;
    }
L_001824c4:;
    {
        cpu->r[14] = 0x001824c8u; imp__Znaj(cpu); /* _Znaj */
    }
L_001824c8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
    }
L_001824cc:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[0]);
    }
L_001824d0:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001824d4:;
    {
        cpu->r[14] = 0x001824d8u; imp__Znaj(cpu); /* _Znaj */
    }
L_001824d8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
    }
L_001824dc:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[0]);
    }
L_001824e0:;
    {
        uint32_t v = cpu->r[6] * cpu->r[3]; cpu->r[0] = v;
    }
L_001824e4:;
    {
        cpu->r[14] = 0x001824e8u; imp__Znaj(cpu); /* _Znaj */
    }
L_001824e8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x20u);
    }
L_001824ec:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001824f0:;
    {
        uint32_t v = cpu->r[6] * cpu->r[2]; cpu->r[2] = v;
    }
L_001824f4:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[0]);
    }
L_001824f8:;
    {
        cpu->r[14] = 0x001824fcu; imp_memset(cpu); /* memset */
    }
L_001824fc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x20u);
    }
L_00182500:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00182504:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001827d8;
        }
    }
L_00182508:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018250c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_00182510:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00182514:;
    {
        cpu->r[10] = 0x00008e39u;
    }
L_00182518:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x38e3u << 16);
    }
L_0018251c:;
    {
        cpu->r[12] = (~0x00000003u);
    }
L_00182520:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00182524:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x000000eau, 0, 0);
    }
L_00182528:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[10]);
    }
L_0018252c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x0000005cu, 0, 0);
    }
L_00182530:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[12]);
    }
L_00182534:;
    {
        cpu->r[9] = cpu->r[3];
    }
L_00182538:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_0018253c:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[14]);
    }
L_00182540:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018276c;
        }
    }
L_00182544:;
    {
        cpu->r[11] = rd16(cpu->r[13] + + 0xeau);
    }
L_00182548:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x34u);
    }
L_0018254c:;
    {
        { uint64_t v = (uint64_t)cpu->r[14] * (uint64_t)cpu->r[11]; cpu->r[14] = (uint32_t)v; cpu->r[11] = (uint32_t)(v >> 32); }
    }
L_00182550:;
    {
        uint32_t v = shifter(cpu->r[11], 3, 1u, &shc); cpu->r[11] = v;
    }
L_00182554:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_00182558:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[0], 0, 0);
    }
L_0018255c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[11], 1, 1);
    }
L_00182560:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00182738;
        }
    }
L_00182564:;
    {
        cpu->r[1] = 0x000001d0u;
    }
L_00182568:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0018256c:;
    {
        uint32_t v = cpu->r[1] * cpu->r[0]; cpu->r[7] = v;
    }
L_00182570:;
    {
        cpu->r[10] = cpu->r[7];
    }
L_00182574:;
    {
        cpu->r[2] = 0x00000036u;
    }
L_00182578:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0018257c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00182580:;
    {
        cpu->r[14] = 0x00182584u; fn_000fc5f4(cpu);
    }
L_00182584:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_00182588:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0018258c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[10], 0, 0);
    }
L_00182590:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[6] + cpu->r[2]);
    }
L_00182594:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 3u, &shc); cpu->r[1] = v;
    }
L_00182598:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[2], 2, 1u, &shc), cpu->r[1]);
    }
L_0018259c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_001825a0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000036u, 1, 1);
    }
L_001825a4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00182590;
        }
    }
L_001825a8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_001825ac:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x000001d0u, 0, 0);
    }
L_001825b0:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[11], 1, 1);
    }
L_001825b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00182574;
        }
    }
L_001825b8:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x28u);
    }
L_001825bc:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[6]);
    }
L_001825c0:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[11]);
    }
L_001825c4:;
    {
        goto L_00182644;
    }
L_001825c8:;
    {
        cpu->r[14] = 0x001825ccu; fn_000fc678(cpu);
    }
L_001825cc:;
    {
        wr8(cpu->r[6] + + 0x1c0u, cpu->r[0]);
    }
L_001825d0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001825d4:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x18u);
    }
L_001825d8:;
    {
        cpu->r[14] = 0x001825dcu; fn_000fc678(cpu);
    }
L_001825dc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[7], 0, 0);
    }
L_001825e0:;
    {
        wr8(cpu->r[6] + + 0x1c1u, cpu->r[0]);
    }
L_001825e4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001825e8:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x18u);
    }
L_001825ec:;
    {
        cpu->r[14] = 0x001825f0u; fn_000fc678(cpu);
    }
L_001825f0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_001825f4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[7], 0, 0);
    }
L_001825f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_001825fc:;
    {
        wr8(cpu->r[3] + + 0x1ccu, cpu->r[9]);
    }
L_00182600:;
    {
        cpu->r[0] = (uint32_t)((int8_t)cpu->r[0]);
    }
L_00182604:;
    {
        wr16(cpu->r[6] + + 0xbcu, cpu->r[0]);
    }
L_00182608:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_0018260c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_00182610:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[10], 1, 1);
    }
L_00182614:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_00182618:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_0018261c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x000001d0u, 0, 0);
    }
L_00182620:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x000001c0u, 0, 0);
    }
L_00182624:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x000001c4u, 0, 0);
    }
L_00182628:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000002u, 0, 0);
    }
L_0018262c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000002u, 0, 0);
    }
L_00182630:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000001c4u, 0, 0);
    }
L_00182634:;
    {
        wr16(cpu->r[1], cpu->r[12]);
    }
L_00182638:;
    {
        wr16(cpu->r[0], cpu->r[12]);
    }
L_0018263c:;
    {
        wr16(cpu->r[2], cpu->r[12]);
    }
L_00182640:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00182730;
        }
    }
L_00182644:;
    {
        cpu->r[2] = rd16(cpu->r[13] + + 0xecu);
    }
L_00182648:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000006u, 1, 1);
    }
L_0018264c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001826dc;
        }
    }
L_00182650:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000004u, 1, 1);
    }
L_00182654:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00182658:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_0018265c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001825c8;
        }
    }
L_00182660:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00182664:;
    {
        cpu->r[14] = 0x00182668u; fn_000fc678(cpu);
    }
L_00182668:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_0018266c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00182670:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_00182674:;
    {
        wr8(cpu->r[3] + + 0x1c0u, cpu->r[9]);
    }
L_00182678:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_0018267c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_00182680:;
    {
        wr8(cpu->r[3] + + 0x1c1u, cpu->r[9]);
    }
L_00182684:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_00182688:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_0018268c:;
    {
        wr16(cpu->r[3] + + 0xbcu, cpu->r[2]);
    }
L_00182690:;
    {
        wr8(cpu->r[3] + + 0x1ccu, cpu->r[9]);
    }
L_00182694:;
    {
        goto L_00182608;
    }
L_00182698:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0018269c:;
    {
        cpu->r[14] = 0x001826a0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001826a0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001826a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018237c;
        }
    }
L_001826a8:;
    {
        cpu->r[7] = rd32(0x001826b0u + + 0x104u);
    }
L_001826ac:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_001826b0:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001826b4:;
    {
        cpu->r[14] = 0x001826b8u; fn_00189f48(cpu);
    }
L_001826b8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001826bc:;
    {
        cpu->r[14] = 0x001826c0u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001826c0:;
    {
        cpu->r[3] = rd32(0x001826c8u + + 0xf0u);
    }
L_001826c4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001826c8:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001826cc:;
    {
        cpu->r[3] = rd32(0x001826d4u + + 0xe8u);
    }
L_001826d0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001826d4:;
    {
        cpu->r[14] = 0x001826d8u; imp___aeabi_atexit(cpu); /* __aeabi_atexit */
    }
L_001826d8:;
    {
        goto L_00182380;
    }
L_001826dc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001826e0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_001826e4:;
    {
        cpu->r[14] = 0x001826e8u; fn_000fc678(cpu);
    }
L_001826e8:;
    {
        wr8(cpu->r[6] + + 0x1c0u, cpu->r[0]);
    }
L_001826ec:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001826f0:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x18u);
    }
L_001826f4:;
    {
        cpu->r[14] = 0x001826f8u; fn_000fc678(cpu);
    }
L_001826f8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[7], 0, 0);
    }
L_001826fc:;
    {
        wr8(cpu->r[6] + + 0x1c1u, cpu->r[0]);
    }
L_00182700:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00182704:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x18u);
    }
L_00182708:;
    {
        cpu->r[14] = 0x0018270cu; fn_000fc678(cpu);
    }
L_0018270c:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x18u);
    }
L_00182710:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[7], 0, 0);
    }
L_00182714:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[7], 0, 0);
    }
L_00182718:;
    {
        cpu->r[0] = (uint32_t)((int8_t)cpu->r[0]);
    }
L_0018271c:;
    {
        wr16(cpu->r[11] + + 0xbcu, cpu->r[0]);
    }
L_00182720:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00182724:;
    {
        cpu->r[14] = 0x00182728u; fn_000fc678(cpu);
    }
L_00182728:;
    {
        wr8(cpu->r[6] + + 0x1ccu, cpu->r[0]);
    }
L_0018272c:;
    {
        goto L_00182608;
    }
L_00182730:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x28u);
    }
L_00182734:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x38u);
    }
L_00182738:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0018273c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x20u);
    }
L_00182740:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000001u, 0, 0);
    }
L_00182744:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_00182748:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[14], 1, 1);
    }
L_0018274c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[14]);
    }
L_00182750:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_00182754:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[1]);
    }
L_00182758:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001827d8;
        }
    }
L_0018275c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00182760:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[11]);
    }
L_00182764:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00182768:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00182544;
        }
    }
L_0018276c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x3cu);
    }
L_00182770:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00182774:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00182778:;
    {
        cpu->r[14] = 0x0018277cu; fn_000fc5f4(cpu);
    }
L_0018277c:;
    {
        cpu->r[11] = rd16(cpu->r[13] + + 0xeau);
    }
L_00182780:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_00182784:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x30u);
    }
L_00182788:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x24u);
    }
L_0018278c:;
    {
        { uint64_t v = (uint64_t)cpu->r[1] * (uint64_t)cpu->r[11]; cpu->r[1] = (uint32_t)v; cpu->r[11] = (uint32_t)(v >> 32); }
    }
L_00182790:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_00182794:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_00182798:;
    {
        uint32_t v = shifter(cpu->r[11], 3, 1u, &shc); cpu->r[11] = v;
    }
L_0018279c:;
    {
        wr32(cpu->r[2] + cpu->r[10], cpu->r[11]);
    }
L_001827a0:;
    {
        wr32(cpu->r[3] + cpu->r[10], cpu->r[12]);
    }
L_001827a4:;
    {
        goto L_00182554;
    }
L_001827d8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001827dc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001828b4;
        }
    }
L_001827e0:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_001827e4:;
    {
        cpu->r[9] = 0x000001d0u;
    }
L_001827e8:;
    {
        cpu->r[11] = 0x000001c6u;
    }
L_001827ec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x0000000cu, 0, 0);
    }
L_001827f0:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[5]);
    }
L_001827f4:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_001827f8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x28u);
    }
L_001827fc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_00182800:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_00182804:;
    {
        cpu->r[6] = rd32(cpu->r[2] + shifter(cpu->r[8], 2, 2u, &shc));
    }
L_00182808:;
    {
        cpu->r[5] = rd32(cpu->r[3] + shifter(cpu->r[8], 2, 2u, &shc));
    }
L_0018280c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00182810:;
    {
        cpu->r[14] = 0x00182814u; fn_00180ac0(cpu);
    }
L_00182814:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], cpu->r[5], 0, 0);
    }
L_00182818:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 0);
    }
L_0018281c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00182820:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_00182824:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_00182828:;
    {
        cpu->r[14] = 0x0018282cu; fn_00180ac0(cpu);
    }
L_0018282c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x18u);
    }
L_00182830:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[7], 1, 1);
    }
L_00182834:;
    {
        cpu->r[2] = (uint32_t)((uint16_t)cpu->r[6]);
    }
L_00182838:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[7]);
    }
L_0018283c:;
    {
        uint32_t v = cpu->r[9] * cpu->r[6] + cpu->r[12]; cpu->r[1] = v;
    }
L_00182840:;
    {
        uint32_t v = cpu->r[9] * cpu->r[0] + cpu->r[12]; cpu->r[14] = v;
    }
L_00182844:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[14]);
    }
L_00182848:;
    {
        uint32_t v = cpu->r[9] * cpu->r[10] + cpu->r[12]; cpu->r[14] = v;
    }
L_0018284c:;
    {
        uint32_t v = cpu->r[9] * cpu->r[7] + cpu->r[12]; cpu->r[12] = v;
    }
L_00182850:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[14]);
    }
L_00182854:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[1], 0x000001c4u, 0, 0);
    }
L_00182858:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000002u, 0, 0);
    }
L_0018285c:;
    {
        wr16(cpu->r[14], cpu->r[10]);
    }
L_00182860:;
    {
        wr16(cpu->r[12] + cpu->r[11], cpu->r[0]);
    }
L_00182864:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x30u);
    }
L_00182868:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0018286c:;
    {
        wr16(cpu->r[0] + cpu->r[11], cpu->r[2]);
    }
L_00182870:;
    {
        wr16(cpu->r[10] + cpu->r[11], cpu->r[3]);
    }
L_00182874:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001828a0;
        }
    }
L_00182878:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0018287c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], cpu->r[0], 0, 0);
    }
L_00182880:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00182884:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[12], 0x000001c4u, 0, 0);
    }
L_00182888:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 1);
    }
L_0018288c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000001c0u, 0, 0);
    }
L_00182890:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000001d0u, 0, 0);
    }
L_00182894:;
    {
        wr16(cpu->r[14], cpu->r[3]);
    }
L_00182898:;
    {
        wr16(cpu->r[12] + + 0x2u, cpu->r[2]);
    }
L_0018289c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018287c;
        }
    }
L_001828a0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
    }
L_001828a4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_001828a8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_001828ac:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001827f8;
        }
    }
L_001828b0:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x34u);
    }
L_001828b4:;
    {
        cpu->r[3] = rd16(cpu->r[13] + + 0xecu);
    }
L_001828b8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001828bc:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x48u, cpu->r[3]);
        }
    }
L_001828c0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00182e0c;
        }
    }
L_001828c4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x48u);
    }
L_001828c8:;
    {
        cpu->r[1] = 0x0000000cu;
    }
L_001828cc:;
    {
        cpu->r[14] = 0x001828d0u; fn_00189870(cpu);
    }
L_001828d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x30u);
    }
L_001828d4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001828d8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00182dd8;
        }
    }
L_001828dc:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001828e0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], 0x0000000cu, 0, 0);
    }
L_001828e4:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_001828e8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x000000d8u, 0, 0);
    }
L_001828ec:;
    {
        cpu->r[9] = 0x000001d0u;
    }
L_001828f0:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[13], 0x000000d0u, 0, 0);
    }
L_001828f4:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[14]);
    }
L_001828f8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001828fc:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00182900:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00182904:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[2], 0, 0);
    }
L_00182908:;
    {
        cpu->r[14] = 0x0018290cu; fn_001805dc(cpu);
    }
L_0018290c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00182910:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00182914:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00182918:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_0018291c:;
    {
        cpu->r[14] = 0x00182920u; fn_001805dc(cpu);
    }
L_00182920:;
    {
        uint32_t v = cpu->r[9] * cpu->r[8]; cpu->r[8] = v;
    }
L_00182924:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x18u);
    }
L_00182928:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[2], cpu->r[5], 0, 0);
    }
L_0018292c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[8], 0, 0);
    }
L_00182930:;
    {
        cpu->r[1] = rd32(cpu->r[11] + + 0x30u);
    }
L_00182934:;
    {
        cpu->r[12] = rd32(cpu->r[2] + + 0x30u);
    }
L_00182938:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 0);
    }
L_0018293c:;
    {
        wr32(cpu->r[13] + + 0xd8u, cpu->r[1]);
    }
L_00182940:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x38u);
    }
L_00182944:;
    {
        cpu->r[2] = rd32(cpu->r[11] + + 0x38u);
    }
L_00182948:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_0018294c:;
    {
        wr32(cpu->r[13] + + 0xdcu, cpu->r[2]);
    }
L_00182950:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00182954:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00182958:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_0018295c:;
    {
        cpu->r[14] = 0x00182960u; fn_001857e0(cpu);
    }
L_00182960:;
    {
        wr32(cpu->r[11] + + 0xb8u, cpu->r[0]);
    }
L_00182964:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00182968:;
    {
        cpu->r[14] = 0x0018296cu; fn_00185794(cpu);
    }
L_0018296c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x18u);
    }
L_00182970:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_00182974:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[2], cpu->r[8], 0, 0);
    }
L_00182978:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_0018297c:;
    {
        uint32_t v = cpu->r[9] * cpu->r[3] + cpu->r[2]; cpu->r[3] = v;
    }
L_00182980:;
    {
        cpu->r[2] = rd32(cpu->r[8] + + 0x30u);
    }
L_00182984:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x30u);
    }
L_00182988:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_0018298c:;
    {
        wr32(cpu->r[13] + + 0xd0u, cpu->r[2]);
    }
L_00182990:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x38u);
    }
L_00182994:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x38u);
    }
L_00182998:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0018299c:;
    {
        wr32(cpu->r[13] + + 0xd4u, cpu->r[3]);
    }
L_001829a0:;
    {
        cpu->r[14] = 0x001829a4u; fn_00185794(cpu);
    }
L_001829a4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xd8u);
    }
L_001829a8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xd0u);
    }
L_001829ac:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xdcu);
    }
L_001829b0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xd4u);
    }
L_001829b4:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[8] = v;
    }
L_001829b8:;
    {
        cpu->r[12] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
    }
L_001829bc:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2] + cpu->r[8]; cpu->r[0] = v;
    }
L_001829c0:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x18u);
    }
L_001829c4:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2]; cpu->r[2] = v;
    }
L_001829c8:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x30u);
    }
L_001829cc:;
    {
        uint32_t v = cpu->r[3] * cpu->r[12] + cpu->r[2]; cpu->r[3] = v;
    }
L_001829d0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[5], 0, 0);
    }
L_001829d4:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 12u, &shc); cpu->r[2] = v;
    }
L_001829d8:;
    {
        cpu->r[0] = 0x0000ffffu;
    }
L_001829dc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00001000u, 1, 1);
    }
L_001829e0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = 0x00001000u;
        }
    }
L_001829e4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x000001d0u, 0, 0);
    }
L_001829e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001829ec:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001829f0:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[6], 1, 1);
    }
L_001829f4:;
    {
        uint32_t v = cpu->r[2] * cpu->r[0]; cpu->r[3] = v;
    }
L_001829f8:;
    {
        wr16(cpu->r[11] + + 0x6cu, cpu->r[3]);
    }
L_001829fc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001828f8;
        }
    }
L_00182a00:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00182a04:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00182dd8;
        }
    }
L_00182a08:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00182a0c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000094u, 0, 0);
    }
L_00182a10:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_00182a14:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x000000c4u, 0, 0);
    }
L_00182a18:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x00182a20u + - 0x250u);
    }
L_00182a1c:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x00182a24u + - 0x250u);
    }
L_00182a20:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00182a24:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00182a28:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00182a2c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[2], 0, 0);
    }
L_00182a30:;
    {
        cpu->r[14] = 0x00182a34u; fn_00180634(cpu);
    }
L_00182a34:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x18u);
    }
L_00182a38:;
    {
        cpu->r[12] = 0x000001d0u;
    }
L_00182a3c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00182a40:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[5], 0, 0);
    }
L_00182a44:;
    {
        uint32_t v = cpu->r[12] * cpu->r[0] + cpu->r[2]; cpu->r[2] = v;
    }
L_00182a48:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00182a4c:;
    {
        cpu->r[14] = rd32(cpu->r[2] + + 0x30u);
    }
L_00182a50:;
    {
        cpu->r[12] = rd32(cpu->r[2] + + 0x34u);
    }
L_00182a54:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x38u);
    }
L_00182a58:;
    {
        wr32(cpu->r[13] + + 0xc4u, cpu->r[14]);
    }
L_00182a5c:;
    {
        wr32(cpu->r[13] + + 0xc8u, cpu->r[12]);
    }
L_00182a60:;
    {
        wr32(cpu->r[13] + + 0xccu, cpu->r[2]);
    }
L_00182a64:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0x30u);
    }
L_00182a68:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x34u);
    }
L_00182a6c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x38u);
    }
L_00182a70:;
    {
        wr32(cpu->r[13] + + 0x94u, cpu->r[12]);
    }
L_00182a74:;
    {
        wr32(cpu->r[13] + + 0x98u, cpu->r[2]);
    }
L_00182a78:;
    {
        wr32(cpu->r[13] + + 0x9cu, cpu->r[3]);
    }
L_00182a7c:;
    {
        cpu->r[14] = 0x00182a80u; fn_00180008(cpu);
    }
L_00182a80:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00182a84:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_00182a88:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00182a8c:;
    {
        cpu->r[14] = 0x00182a90u; fn_0018002c(cpu);
    }
L_00182a90:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[9], 0x00000800u, 0, 0);
    }
L_00182a94:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_00182a98:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_00182a9c:;
    {
        cpu->r[0] = (~cpu->r[9]);
    }
L_00182aa0:;
    {
        cpu->r[1] = (~cpu->r[11]);
    }
L_00182aa4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[11], 0x00000800u, 0, 0);
    }
L_00182aa8:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 11u, &shc); cpu->r[0] = v;
    }
L_00182aac:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 11u, &shc); cpu->r[1] = v;
    }
L_00182ab0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[9] = add_flags(cpu, cpu->r[2], shifter(cpu->r[0], 2, 11u, &shc), 0, 0);
        }
    }
L_00182ab4:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_00182ab8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[9], 0x00000800u, 1, 0);
    }
L_00182abc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[11] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 11u, &shc), 0, 0);
        }
    }
L_00182ac0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_00182ac4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[11], 0x00000800u, 1, 0);
    }
L_00182ac8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00182acc:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000800u, 1, 1);
    }
L_00182ad0:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 11u, &shc); cpu->r[0] = v;
    }
L_00182ad4:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 11u, &shc); cpu->r[1] = v;
    }
L_00182ad8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[9] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[0], 2, 11u, &shc), 1, 0);
        }
    }
L_00182adc:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000800u, 1, 1);
    }
L_00182ae0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[11] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 11u, &shc), 1, 0);
        }
    }
L_00182ae4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_00182ae8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_00182aec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000070u, 0, 0);
    }
L_00182af0:;
    {
        wr16(cpu->r[3] + + 0xb6u, cpu->r[9]);
    }
L_00182af4:;
    {
        wr16(cpu->r[3] + + 0xb4u, cpu->r[11]);
    }
L_00182af8:;
    {
        cpu->r[14] = 0x00182afcu; fn_00153600(cpu);
    }
L_00182afc:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[9];
    }
L_00182b00:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00182b04:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x18u);
    }
L_00182b08:;
    {
        cpu->r[9] = sub_flags(cpu, 0x00000000u, cpu->r[9], 1, 0);
    }
L_00182b0c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[5], 0, 0);
    }
L_00182b10:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000070u, 0, 0);
    }
L_00182b14:;
    {
        vfp_vmul(cpu, 15, 15, 16);
    }
L_00182b18:;
    {
        vfp_vmul(cpu, 14, 15, 17);
    }
L_00182b1c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00182b20:;
    {
        cpu->r[14] = 0x00182b24u; fn_00154350(cpu);
    }
L_00182b24:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[11];
    }
L_00182b28:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00182b2c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x18u);
    }
L_00182b30:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[5], 0, 0);
    }
L_00182b34:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000070u, 0, 0);
    }
L_00182b38:;
    {
        vfp_vmul(cpu, 15, 15, 16);
    }
L_00182b3c:;
    {
        vfp_vmul(cpu, 14, 15, 17);
    }
L_00182b40:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00182b44:;
    {
        cpu->r[14] = 0x00182b48u; fn_00154734(cpu);
    }
L_00182b48:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[9];
    }
L_00182b4c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00182b50:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x18u);
    }
L_00182b54:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[5], 0, 0);
    }
L_00182b58:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x000001d0u, 0, 0);
    }
L_00182b5c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000070u, 0, 0);
    }
L_00182b60:;
    {
        vfp_vmul(cpu, 15, 15, 16);
    }
L_00182b64:;
    {
        vfp_vmul(cpu, 14, 15, 17);
    }
L_00182b68:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00182b6c:;
    {
        cpu->r[14] = 0x00182b70u; fn_00154350(cpu);
    }
L_00182b70:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x30u);
    }
L_00182b74:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_00182b78:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00182a20;
        }
    }
L_00182b7c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00182b80:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00182dd8;
        }
    }
L_00182b84:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_00182b88:;
    {
        cpu->r[10] = 0x00000001u;
    }
L_00182b8c:;
    {
        cpu->r[5] = cpu->r[8];
    }
L_00182b90:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00182b94:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00182b98:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00182b9c:;
    {
        cpu->r[14] = 0x00182ba0u; fn_00180634(cpu);
    }
L_00182ba0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00182ba4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00182ba8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00182bac:;
    {
        cpu->r[14] = 0x00182bb0u; fn_00180c78(cpu);
    }
L_00182bb0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00182bb4:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_00182bb8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00182bbc:;
    {
        cpu->r[14] = 0x00182bc0u; fn_00180c78(cpu);
    }
L_00182bc0:;
    {
        cpu->r[2] = rd32(cpu->r[9] + + 0x30u);
    }
L_00182bc4:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x38u);
    }
L_00182bc8:;
    {
        cpu->r[1] = rd32(cpu->r[9] + + 0x8u);
    }
L_00182bcc:;
    {
        cpu->r[14] = rd32(cpu->r[0] + + 0x30u);
    }
L_00182bd0:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_00182bd4:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x38u);
    }
L_00182bd8:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], cpu->r[2], 1, 0);
    }
L_00182bdc:;
    {
        cpu->r[0] = rd32(cpu->r[9]);
    }
L_00182be0:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 0);
    }
L_00182be4:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], shifter(cpu->r[14], 3, 31u, &shc), 0, 0);
    }
L_00182be8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 3, 31u, &shc), 0, 0);
    }
L_00182bec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[14], 1, 1u, &shc), 0, 0);
    }
L_00182bf0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[12], 1, 1u, &shc), 0, 0);
    }
L_00182bf4:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 4u, &shc); cpu->r[2] = v;
    }
L_00182bf8:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_00182bfc:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 4u, &shc); cpu->r[3] = v;
    }
L_00182c00:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_00182c04:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[0], 1, 4u, &shc), 1, 0);
    }
L_00182c08:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[1], 1, 4u, &shc), 1, 0);
    }
L_00182c0c:;
    {
        uint32_t v = cpu->r[0] * cpu->r[0]; cpu->r[0] = v;
    }
L_00182c10:;
    {
        uint32_t v = cpu->r[1] * cpu->r[1] + cpu->r[0]; cpu->r[0] = v;
    }
L_00182c14:;
    {
        cpu->r[14] = 0x00182c18u; fn_0017fa74(cpu);
    }
L_00182c18:;
    {
        cpu->r[2] = rd32(cpu->r[9] + + 0x60u);
    }
L_00182c1c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_00182c20:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00182c24:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], shifter(cpu->r[2], 1, 4u, &shc), 1, 0);
    }
L_00182c28:;
    {
        uint32_t v = cpu->r[2] * cpu->r[2]; cpu->r[2] = v;
    }
L_00182c2c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00182c30:;
    {
        cpu->r[0] = rd32(cpu->r[9] + + 0x68u);
    }
L_00182c34:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_00182c38:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[0], 1, 4u, &shc), 1, 0);
    }
L_00182c3c:;
    {
        uint32_t v = cpu->r[0] * cpu->r[0] + cpu->r[2]; cpu->r[0] = v;
    }
L_00182c40:;
    {
        cpu->r[14] = 0x00182c44u; fn_0017fa74(cpu);
    }
L_00182c44:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_00182c48:;
    {
        cpu->r[1] = rd32(cpu->r[11]);
    }
L_00182c4c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00182c50:;
    {
        cpu->r[2] = rd32(cpu->r[11] + + 0x8u);
    }
L_00182c54:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_00182c58:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[14], shifter(cpu->r[1], 1, 4u, &shc), 1, 0);
    }
L_00182c5c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[2], 1, 4u, &shc), 1, 0);
    }
L_00182c60:;
    {
        uint32_t v = cpu->r[1] * cpu->r[1]; cpu->r[1] = v;
    }
L_00182c64:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 4u, &shc); cpu->r[3] = v;
    }
L_00182c68:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 4u, &shc); cpu->r[0] = v;
    }
L_00182c6c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_00182c70:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[0];
        }
    }
L_00182c74:;
    {
        uint32_t v = cpu->r[2] * cpu->r[2] + cpu->r[1]; cpu->r[0] = v;
    }
L_00182c78:;
    {
        uint32_t v = cpu->r[3] & ~ shifter(cpu->r[3], 1, 31u, &shc); cpu->r[9] = v;
    }
L_00182c7c:;
    {
        cpu->r[14] = 0x00182c80u; fn_0017fa74(cpu);
    }
L_00182c80:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_00182c84:;
    {
        cpu->r[2] = rd32(cpu->r[11] + + 0x60u);
    }
L_00182c88:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00182c8c:;
    {
        cpu->r[3] = rd32(cpu->r[11] + + 0x68u);
    }
L_00182c90:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[14], shifter(cpu->r[2], 1, 4u, &shc), 1, 0);
    }
L_00182c94:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], shifter(cpu->r[3], 1, 4u, &shc), 1, 0);
    }
L_00182c98:;
    {
        uint32_t v = cpu->r[2] * cpu->r[2]; cpu->r[2] = v;
    }
L_00182c9c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 4u, &shc); cpu->r[1] = v;
    }
L_00182ca0:;
    {
        uint32_t v = cpu->r[3] * cpu->r[3] + cpu->r[2]; cpu->r[0] = v;
    }
L_00182ca4:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[1], 1, 1);
    }
L_00182ca8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[9] = cpu->r[1];
        }
    }
L_00182cac:;
    {
        cpu->r[14] = 0x00182cb0u; fn_0017fa74(cpu);
    }
L_00182cb0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x18u);
    }
L_00182cb4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00182cb8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00182cbc:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00182cc0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[8], 0, 0);
    }
L_00182cc4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x000001d0u, 0, 0);
    }
L_00182cc8:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 4u, &shc); cpu->r[0] = v;
    }
L_00182ccc:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[0], 1, 1);
    }
L_00182cd0:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[12] + + 0x1c8u, cpu->r[9]);
        }
    }
L_00182cd4:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[12] + + 0x1c8u, cpu->r[0]);
        }
    }
L_00182cd8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00182cdc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00182ce0:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_00182ce4:;
    {
        cpu->r[14] = 0x00182ce8u; fn_00181ca0(cpu);
    }
L_00182ce8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00182cec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00182cf0:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00182cf4:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_00182cf8:;
    {
        cpu->r[12] = 0x00000002u;
    }
L_00182cfc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[10]);
    }
L_00182d00:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00182d04:;
    {
        cpu->r[14] = 0x00182d08u; fn_00181ca0(cpu);
    }
L_00182d08:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00182d0c:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_00182d10:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00182d14:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00182d18:;
    {
        cpu->r[14] = 0x00000003u;
    }
L_00182d1c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00182d20:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_00182d24:;
    {
        cpu->r[14] = 0x00182d28u; fn_00181ca0(cpu);
    }
L_00182d28:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00182d2c:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_00182d30:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00182d34:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00182d38:;
    {
        cpu->r[12] = 0x00000004u;
    }
L_00182d3c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00182d40:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00182d44:;
    {
        cpu->r[14] = 0x00182d48u; fn_00181ca0(cpu);
    }
L_00182d48:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00182d4c:;
    {
        cpu->r[3] = 0x00000004u;
    }
L_00182d50:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00182d54:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00182d58:;
    {
        cpu->r[14] = 0x00000005u;
    }
L_00182d5c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00182d60:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_00182d64:;
    {
        cpu->r[14] = 0x00182d68u; fn_00181ca0(cpu);
    }
L_00182d68:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00182d6c:;
    {
        cpu->r[3] = 0x00000005u;
    }
L_00182d70:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00182d74:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00182d78:;
    {
        cpu->r[12] = 0x00000006u;
    }
L_00182d7c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00182d80:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00182d84:;
    {
        cpu->r[14] = 0x00182d88u; fn_00181ca0(cpu);
    }
L_00182d88:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00182d8c:;
    {
        cpu->r[3] = 0x00000006u;
    }
L_00182d90:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00182d94:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00182d98:;
    {
        cpu->r[14] = 0x00000007u;
    }
L_00182d9c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00182da0:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_00182da4:;
    {
        cpu->r[14] = 0x00182da8u; fn_00181ca0(cpu);
    }
L_00182da8:;
    {
        cpu->r[3] = 0x00000007u;
    }
L_00182dac:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00182db0:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00182db4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00182db8:;
    {
        cpu->r[12] = 0x00000008u;
    }
L_00182dbc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00182dc0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00182dc4:;
    {
        cpu->r[14] = 0x00182dc8u; fn_00181ca0(cpu);
    }
L_00182dc8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x30u);
    }
L_00182dcc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00182dd0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00182dd4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00182b90;
        }
    }
L_00182dd8:;
    {
        cpu->r[3] = 0x000010d4u;
    }
L_00182ddc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4cu);
    }
L_00182de0:;
    {
        cpu->r[2] = 0x00000005u;
    }
L_00182de4:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_00182de8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 0);
    }
L_00182dec:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_00182df0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00182df4:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_00182df8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x120u);
    }
L_00182dfc:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_00182e00:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000f4u, 0, 0);
    }
L_00182e04:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00182e08:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00182e0cu)) return;
    }
L_00182e0c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00182e10:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000048u, 0, 0);
    }
L_00182e14:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00182e18:;
    {
        cpu->r[14] = 0x00182e1cu; fn_000fc5f4(cpu);
    }
L_00182e1c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x48u);
    }
L_00182e20:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00182e24:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00182f98;
        }
    }
L_00182e28:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00182e2c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000094u, 0, 0);
    }
L_00182e30:;
    {
        cpu->r[14] = 0x00182e34u; imp__Znaj(cpu); /* _Znaj */
    }
L_00182e34:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[6], 0x0000000cu, 0, 0);
    }
L_00182e38:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[6], 0x00000018u, 0, 0);
    }
L_00182e3c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], 0x00000024u, 0, 0);
    }
L_00182e40:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x000000efu, 0, 0);
    }
L_00182e44:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[12]);
    }
L_00182e48:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[14]);
    }
L_00182e4c:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_00182e50:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[1]);
    }
L_00182e54:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[2]);
    }
L_00182e58:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[0]);
    }
L_00182e5c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x48u);
    }
L_00182e60:;
    {
        cpu->r[14] = 0x00182e64u; imp__Znaj(cpu); /* _Znaj */
    }
L_00182e64:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[0]);
    }
L_00182e68:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x48u);
    }
L_00182e6c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_00182e70:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00182f98;
        }
    }
L_00182e74:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_00182e78:;
    {
        cpu->r[11] = cpu->r[7];
    }
L_00182e7c:;
    {
        cpu->r[8] = cpu->r[10];
    }
L_00182e80:;
    {
        cpu->r[9] = cpu->r[4];
    }
L_00182e84:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 1u, &shc); cpu->r[4] = v;
    }
L_00182e88:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00182e8c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], cpu->r[8], 0, 0);
    }
L_00182e90:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00182e94:;
    {
        uint32_t v = cpu->r[7] * cpu->r[2] + cpu->r[6]; cpu->r[7] = v;
    }
L_00182e98:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00182e9c:;
    {
        cpu->r[14] = 0x00182ea0u; fn_000fc5f4(cpu);
    }
L_00182ea0:;
    {
        cpu->r[3] = rd16(cpu->r[13] + + 0xecu);
    }
L_00182ea4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_00182ea8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00182eac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00182eb0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], cpu->r[10], 0, 0);
    }
L_00182eb4:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_00182eb8:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00182ebc:;
    {
        if (cond_test(cpu, 10)) {
        wr32(cpu->r[3] + + 0x4u, cpu->r[12]);
        }
    }
L_00182ec0:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00182ec8;
        }
    }
L_00182ec4:;
    {
        cpu->r[14] = 0x00182ec8u; fn_000fc5f4(cpu);
    }
L_00182ec8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], cpu->r[8], 0, 0);
    }
L_00182ecc:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00182ed0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x0000000cu, 0, 0);
    }
L_00182ed4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00182ed8:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2] + cpu->r[6]; cpu->r[1] = v;
    }
L_00182edc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_00182ee0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_00182ee4:;
    {
        cpu->r[14] = 0x00182ee8u; fn_000fc5f4(cpu);
    }
L_00182ee8:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000030u, 1, 1);
    }
L_00182eec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00182e84;
        }
    }
L_00182ef0:;
    {
        cpu->r[0] = 0x0000003cu;
    }
L_00182ef4:;
    {
        cpu->r[7] = cpu->r[11];
    }
L_00182ef8:;
    {
        cpu->r[14] = 0x00182efcu; fn_0018ba6c(cpu);
    }
L_00182efc:;
    {
        cpu->r[4] = cpu->r[9];
    }
L_00182f00:;
    {
        uint32_t v = shifter(cpu->r[11], 2, 2u, &shc); cpu->r[10] = v;
    }
L_00182f04:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00182f08:;
    {
        cpu->r[14] = 0x00182f0cu; fn_0017a4e8(cpu);
    }
L_00182f0c:;
    {
        cpu->r[0] = rd32(cpu->r[9] + + 0x40u);
    }
L_00182f10:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00182f14:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x30u);
    }
L_00182f18:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00182f1c:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[11], 2, 2u, &shc), cpu->r[8]);
    }
L_00182f20:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_00182f24:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_00182f28:;
    {
        cpu->r[0] = rd32(cpu->r[0] + shifter(cpu->r[11], 2, 2u, &shc));
    }
L_00182f2c:;
    {
        cpu->r[14] = 0x00182f30u; fn_0017ddd0(cpu);
    }
L_00182f30:;
    {
        cpu->r[3] = rd16(cpu->r[13] + + 0xecu);
    }
L_00182f34:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00182f38:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_00182f3c:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[3] = rd32(cpu->r[9] + + 0x44u);
        }
    }
L_00182f40:;
    {
        if (cond_test(cpu, 10)) {
        wr8(cpu->r[3] + cpu->r[11], cpu->r[1]);
        }
    }
L_00182f44:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
        }
    }
L_00182f48:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00182e68;
        }
    }
L_00182f4c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00182f50:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_00182f54:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00182f58:;
    {
        cpu->r[14] = 0x00182f5cu; fn_000fc5f4(cpu);
    }
L_00182f5c:;
    {
        cpu->r[3] = rd16(cpu->r[13] + + 0xecu);
    }
L_00182f60:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000005u, 1, 1);
    }
L_00182f64:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00182f80;
        }
    }
L_00182f68:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s8(cpu->r[13] + + 0xefu);
    }
L_00182f6c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00182f70:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00182f74:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[9] + + 0x40u);
        }
    }
L_00182f78:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[10]);
        }
    }
L_00182f7c:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[3] + + 0x30u, cpu->r[0]);
        }
    }
L_00182f80:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x44u);
    }
L_00182f84:;
    {
        cpu->r[2] = rd8(cpu->r[13] + + 0xefu);
    }
L_00182f88:;
    {
        uint32_t v = cpu->r[2] & 0x0000007fu; cpu->r[2] = v;
    }
L_00182f8c:;
    {
        wr8(cpu->r[3] + cpu->r[7], cpu->r[2]);
    }
L_00182f90:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_00182f94:;
    {
        goto L_00182e68;
    }
L_00182f98:;
    {
        cpu->r[3] = rd16(cpu->r[13] + + 0xecu);
    }
L_00182f9c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_00182fa0:;
    {
        if (cond_test(cpu, 10)) {
        goto L_001828c4;
        }
    }
L_00182fa4:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00182fa8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x000000d8u, 0, 0);
    }
L_00182fac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x000000e0u, 0, 0);
    }
L_00182fb0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x000000d0u, 0, 0);
    }
L_00182fb4:;
    {
        cpu->r[11] = 0x00000003u;
    }
L_00182fb8:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_00182fbc:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_00182fc0:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_00182fc4:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[5]);
    }
L_00182fc8:;
    {
        goto L_00183394;
    }
L_00182fcc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x44u);
    }
L_00182fd0:;
    {
        cpu->r[14] = 0x00182fd4u; fn_000fc628(cpu);
    }
L_00182fd4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00182fd8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x44u);
    }
L_00182fdc:;
    {
        cpu->r[14] = 0x00182fe0u; fn_000fc628(cpu);
    }
L_00182fe0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00182fe4:;
    {
        if (cond_test(cpu, 13)) {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
        }
    }
L_00182fe8:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00182fec:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0018338c;
        }
    }
L_00182ff0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x28u);
    }
L_00182ff4:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_00182ff8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x40u);
    }
L_00182ffc:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 0);
    }
L_00183000:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x18u);
    }
L_00183004:;
    {
        cpu->r[0] = 0x000001d0u;
    }
L_00183008:;
    {
        cpu->r[2] = rd32(cpu->r[2] + shifter(cpu->r[7], 2, 2u, &shc));
    }
L_0018300c:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[10]);
    }
L_00183010:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[14]);
    }
L_00183014:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[2]);
    }
L_00183018:;
    {
        cpu->r[14] = rd32(cpu->r[1] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_0018301c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + shifter(cpu->r[10], 2, 2u, &shc));
    }
L_00183020:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x40u);
    }
L_00183024:;
    {
        uint32_t v = cpu->r[0] * cpu->r[10]; cpu->r[8] = v;
    }
L_00183028:;
    {
        uint32_t base = cpu->r[14];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[10] = v1;
        cpu->r[14] = v2;
    }
L_0018302c:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[10]);
    }
L_00183030:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x18u);
    }
L_00183034:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[0]);
    }
L_00183038:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[10], cpu->r[8], 0, 0);
    }
L_0018303c:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[14]);
    }
L_00183040:;
    {
        cpu->r[10] = rd32(cpu->r[2]);
    }
L_00183044:;
    {
        cpu->r[14] = rd32(cpu->r[0] + + 0x30u);
    }
L_00183048:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[14], cpu->r[10], 1, 0);
    }
L_0018304c:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[10]);
    }
L_00183050:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x38u);
    }
L_00183054:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], cpu->r[10], 1, 0);
    }
L_00183058:;
    {
        cpu->r[10] = rd32(cpu->r[2] + + 0x4u);
    }
L_0018305c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[14]);
    }
L_00183060:;
    {
        cpu->r[14] = rd32(cpu->r[0] + + 0x34u);
    }
L_00183064:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_00183068:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], cpu->r[10], 1, 0);
    }
L_0018306c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x50u);
    }
L_00183070:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[14]);
    }
L_00183074:;
    {
        cpu->r[14] = rd32(cpu->r[0] + + 0x34u);
    }
L_00183078:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x38u);
    }
L_0018307c:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], cpu->r[10], 1, 0);
    }
L_00183080:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x34u);
    }
L_00183084:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[14]);
    }
L_00183088:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0018308c:;
    {
        uint32_t v = cpu->r[10] * cpu->r[10]; cpu->r[10] = v;
    }
L_00183090:;
    {
        uint32_t v = cpu->r[14] * cpu->r[14]; cpu->r[14] = v;
    }
L_00183094:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[10]);
    }
L_00183098:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_0018309c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001830a0:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x14u);
    }
L_001830a4:;
    {
        uint32_t v = cpu->r[2] * cpu->r[2] + cpu->r[14]; cpu->r[14] = v;
    }
L_001830a8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x34u);
    }
L_001830ac:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[0], cpu->r[10], 1, 0);
    }
L_001830b0:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[10]);
    }
L_001830b4:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x54u);
    }
L_001830b8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[10], 1, 0);
    }
L_001830bc:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x50u);
    }
L_001830c0:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[14]);
    }
L_001830c4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x38u);
    }
L_001830c8:;
    {
        uint32_t v = cpu->r[14] * cpu->r[14] + cpu->r[2]; cpu->r[14] = v;
    }
L_001830cc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001830d0:;
    {
        uint32_t v = cpu->r[0] * cpu->r[0] + cpu->r[2]; cpu->r[0] = v;
    }
L_001830d4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x40u);
    }
L_001830d8:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[14]);
    }
L_001830dc:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x24u);
    }
L_001830e0:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[0]);
    }
L_001830e4:;
    {
        cpu->r[0] = rd32(cpu->r[14] + shifter(cpu->r[7], 2, 2u, &shc));
    }
L_001830e8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x3cu);
    }
L_001830ec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_001830f0:;
    {
        uint32_t v = cpu->r[10] * cpu->r[10] + cpu->r[14]; cpu->r[10] = v;
    }
L_001830f4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x38u);
    }
L_001830f8:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[10]);
    }
L_001830fc:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_00183100:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x34u);
    }
L_00183104:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[0], 1, 1);
    }
L_00183108:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00183124;
        }
    }
L_0018310c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00183110:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_00183114:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 0);
    }
L_00183118:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0018311c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_00183120:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[2]);
    }
L_00183124:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x2cu);
    }
L_00183128:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_0018312c:;
    {
        cpu->r[1] = rd32(cpu->r[1] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_00183130:;
    {
        cpu->r[12] = 0x000001d0u;
    }
L_00183134:;
    {
        uint32_t wb_tmp = cpu->r[2] + cpu->r[6];
        wr32(cpu->r[2] + cpu->r[6], cpu->r[5]);
        cpu->r[2] = wb_tmp;
    }
L_00183138:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[14], cpu->r[8], 0, 0);
    }
L_0018313c:;
    {
        uint32_t v = cpu->r[12] * cpu->r[10]; cpu->r[10] = v;
    }
L_00183140:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[3]);
    }
L_00183144:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000024u, 0, 0);
    }
L_00183148:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000018u, 0, 0);
    }
L_0018314c:;
    {
        cpu->r[14] = 0x00183150u; fn_00180230(cpu);
    }
L_00183150:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x30u);
    }
L_00183154:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x2cu);
    }
L_00183158:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x40u);
    }
L_0018315c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x18u);
    }
L_00183160:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[6], 0, 0);
    }
L_00183164:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x0000003cu, 0, 0);
    }
L_00183168:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000030u, 0, 0);
    }
L_0018316c:;
    {
        cpu->r[1] = rd32(cpu->r[1] + shifter(cpu->r[14], 2, 2u, &shc));
    }
L_00183170:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_00183174:;
    {
        cpu->r[14] = 0x00183178u; fn_00180230(cpu);
    }
L_00183178:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x18u);
    }
L_0018317c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], 0x000003a0u, 0, 0);
    }
L_00183180:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x2cu);
    }
L_00183184:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_00183188:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0018318c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[6], 0, 0);
    }
L_00183190:;
    {
        cpu->r[12] = cpu->r[13];
    }
L_00183194:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x30u);
    }
L_00183198:;
    {
        wr32(cpu->r[13] + + 0xd8u, cpu->r[2]);
    }
L_0018319c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x38u);
    }
L_001831a0:;
    {
        wr32(cpu->r[13] + + 0xdcu, cpu->r[3]);
    }
L_001831a4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x18u);
    }
L_001831a8:;
    {
        wr32(cpu->r[13] + + 0xe0u, cpu->r[3]);
    }
L_001831ac:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x20u);
    }
L_001831b0:;
    {
        wr32(cpu->r[13] + + 0xe4u, cpu->r[3]);
    }
L_001831b4:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x24u);
    }
L_001831b8:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_001831bc:;
    {
        wr32(cpu->r[13] + + 0xd0u, cpu->r[1]);
    }
L_001831c0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x2cu);
    }
L_001831c4:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[11]);
    }
L_001831c8:;
    {
        wr32(cpu->r[13] + + 0xd4u, cpu->r[1]);
    }
L_001831cc:;
    {
        uint32_t base = cpu->r[9];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001831d0:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_001831d4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_001831d8:;
    {
        uint32_t base = cpu->r[14];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001831dc:;
    {
        cpu->r[14] = 0x001831e0u; fn_0017a7c4(cpu);
    }
L_001831e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_001831e4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001831e8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_001831ec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[6], 0, 0);
    }
L_001831f0:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[2]);
    }
L_001831f4:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[0]);
    }
L_001831f8:;
    {
        cpu->r[14] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_001831fc:;
    {
        uint32_t base = cpu->r[9];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_00183200:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00183204:;
    {
        wr32(cpu->r[13] + + 0xd8u, cpu->r[14]);
    }
L_00183208:;
    {
        cpu->r[14] = cpu->r[13];
    }
L_0018320c:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x8u);
    }
L_00183210:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_00183214:;
    {
        uint32_t base = cpu->r[14];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_00183218:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x28u);
    }
L_0018321c:;
    {
        wr32(cpu->r[13] + + 0xdcu, cpu->r[12]);
    }
L_00183220:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[11]);
    }
L_00183224:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_00183228:;
    {
        cpu->r[5] = cpu->r[13];
    }
L_0018322c:;
    {
        cpu->r[14] = 0x00183230u; fn_0017a7c4(cpu);
    }
L_00183230:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_00183234:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_00183238:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_0018323c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00183240:;
    {
        wr32(cpu->r[12] + + 0x10u, cpu->r[0]);
    }
L_00183244:;
    {
        cpu->r[12] = rd32(cpu->r[8] + + 0x60u);
    }
L_00183248:;
    {
        uint32_t base = cpu->r[9];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_0018324c:;
    {
        uint32_t base = cpu->r[14];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_00183250:;
    {
        wr32(cpu->r[13] + + 0xd8u, cpu->r[12]);
    }
L_00183254:;
    {
        cpu->r[12] = rd32(cpu->r[8] + + 0x68u);
    }
L_00183258:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_0018325c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[11]);
    }
L_00183260:;
    {
        wr32(cpu->r[13] + + 0xdcu, cpu->r[12]);
    }
L_00183264:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_00183268:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_0018326c:;
    {
        cpu->r[14] = 0x00183270u; fn_0017a7c4(cpu);
    }
L_00183270:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x2cu);
    }
L_00183274:;
    {
        cpu->r[12] = cpu->r[13];
    }
L_00183278:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], cpu->r[6], 0, 0);
    }
L_0018327c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[6], 0, 0);
    }
L_00183280:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x10u);
    }
L_00183284:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_00183288:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x18u);
    }
L_0018328c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[14] = 0x00000001u;
        }
    }
L_00183290:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[3] + + 0x48u, cpu->r[14]);
        }
    }
L_00183294:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[10], 0x000003a0u, 1, 0);
    }
L_00183298:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0018329c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_001832a0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x30u);
    }
L_001832a4:;
    {
        wr32(cpu->r[13] + + 0xd8u, cpu->r[2]);
    }
L_001832a8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x38u);
    }
L_001832ac:;
    {
        wr32(cpu->r[13] + + 0xdcu, cpu->r[3]);
    }
L_001832b0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x30u);
    }
L_001832b4:;
    {
        wr32(cpu->r[13] + + 0xe0u, cpu->r[3]);
    }
L_001832b8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x38u);
    }
L_001832bc:;
    {
        wr32(cpu->r[13] + + 0xe4u, cpu->r[3]);
    }
L_001832c0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x3cu);
    }
L_001832c4:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_001832c8:;
    {
        wr32(cpu->r[13] + + 0xd0u, cpu->r[1]);
    }
L_001832cc:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x44u);
    }
L_001832d0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[11]);
    }
L_001832d4:;
    {
        wr32(cpu->r[13] + + 0xd4u, cpu->r[1]);
    }
L_001832d8:;
    {
        uint32_t base = cpu->r[9];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001832dc:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_001832e0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_001832e4:;
    {
        uint32_t base = cpu->r[14];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_001832e8:;
    {
        cpu->r[14] = 0x001832ecu; fn_0017a7c4(cpu);
    }
L_001832ec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_001832f0:;
    {
        cpu->r[8] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001832f4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], cpu->r[10], 0, 0);
    }
L_001832f8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[6], 0, 0);
    }
L_001832fc:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[0]);
    }
L_00183300:;
    {
        cpu->r[14] = rd32(cpu->r[3] + cpu->r[10]);
    }
L_00183304:;
    {
        uint32_t base = cpu->r[9];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_00183308:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0018330c:;
    {
        wr32(cpu->r[13] + + 0xd8u, cpu->r[14]);
    }
L_00183310:;
    {
        cpu->r[14] = cpu->r[13];
    }
L_00183314:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x8u);
    }
L_00183318:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_0018331c:;
    {
        uint32_t base = cpu->r[14];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_00183320:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x28u);
    }
L_00183324:;
    {
        wr32(cpu->r[13] + + 0xdcu, cpu->r[12]);
    }
L_00183328:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[11]);
    }
L_0018332c:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_00183330:;
    {
        cpu->r[5] = cpu->r[13];
    }
L_00183334:;
    {
        cpu->r[14] = 0x00183338u; fn_0017a7c4(cpu);
    }
L_00183338:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_0018333c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00183340:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[3], cpu->r[10], 0, 0);
    }
L_00183344:;
    {
        wr32(cpu->r[8] + + 0x14u, cpu->r[0]);
    }
L_00183348:;
    {
        cpu->r[12] = rd32(cpu->r[10] + + 0x60u);
    }
L_0018334c:;
    {
        uint32_t base = cpu->r[9];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_00183350:;
    {
        uint32_t base = cpu->r[14];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_00183354:;
    {
        wr32(cpu->r[13] + + 0xd8u, cpu->r[12]);
    }
L_00183358:;
    {
        cpu->r[12] = rd32(cpu->r[10] + + 0x68u);
    }
L_0018335c:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_00183360:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x28u);
    }
L_00183364:;
    {
        wr32(cpu->r[13] + + 0xdcu, cpu->r[12]);
    }
L_00183368:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[11]);
    }
L_0018336c:;
    {
        uint32_t base = cpu->r[10];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_00183370:;
    {
        cpu->r[14] = 0x00183374u; fn_0017a7c4(cpu);
    }
L_00183374:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x2cu);
    }
L_00183378:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_0018337c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x14u);
    }
L_00183380:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_00183384:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[12] = 0x00000001u;
        }
    }
L_00183388:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[3] + + 0x4cu, cpu->r[12]);
        }
    }
L_0018338c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_00183390:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000050u, 0, 0);
    }
L_00183394:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x20u);
    }
L_00183398:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_0018339c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00182fcc;
        }
    }
L_001833a0:;
    {
        goto L_001828c4;
    }
L_001833a4:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[0]);
    }
L_001833a8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001833ac:;
    {
        cpu->r[14] = 0x001833b0u; fn_000fc628(cpu);
    }
L_001833b0:;
    {
        cpu->r[1] = 0x00000009u;
    }
L_001833b4:;
    {
        cpu->r[14] = 0x001833b8u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001833b8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000eau, 0, 0);
    }
L_001833bc:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_001833c0:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[0]);
    }
L_001833c4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001833c8:;
    {
        cpu->r[14] = 0x001833ccu; fn_000fc5f4(cpu);
    }
L_001833cc:;
    {
        cpu->r[0] = rd16(cpu->r[13] + + 0xeau);
    }
L_001833d0:;
    {
        cpu->r[1] = 0x00000009u;
    }
L_001833d4:;
    {
        cpu->r[14] = 0x001833d8u; imp___aeabi_uidiv(cpu); /* __aeabi_uidiv */
    }
L_001833d8:;
    {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_001833dc:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[0]);
    }
L_001833e0:;
    {
        goto L_00182458;
    }
L_001833e4:;
    {
        cpu->r[1] = rd32(0x001833ecu + - 0xc2cu);
    }
L_001833e8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000006u, 0, 0);
    }
L_001833ec:;
    {
        cpu->r[12] = rd32(0x001833f4u + - 0xc30u);
    }
L_001833f0:;
    {
        cpu->r[14] = 0x000000d6u;
    }
L_001833f4:;
    {
        cpu->r[2] = rd32(0x001833fcu + - 0xc34u);
    }
L_001833f8:;
    {
        cpu->r[1] = add_flags(cpu, 0x00183400u, cpu->r[1], 0, 0);
    }
L_001833fc:;
    {
        cpu->r[3] = rd32(0x00183404u + - 0xc38u);
    }
L_00183400:;
    {
        cpu->r[12] = add_flags(cpu, 0x00183408u, cpu->r[12], 0, 0);
    }
L_00183404:;
    {
        cpu->r[2] = add_flags(cpu, 0x0018340cu, cpu->r[2], 0, 0);
    }
L_00183408:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x000000bcu, 0, 0);
    }
L_0018340c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00183414u, cpu->r[3], 0, 0);
    }
L_00183410:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00183414:;
    {
        cpu->r[14] = 0x00183418u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00183418:;
    {
        goto L_001823a0;
    }
}

/* _ZN4CMapD1Ev @ 0018341c (arm) */
void fn_0018341c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018341c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00183420:;
    {
        cpu->r[3] = rd32(0x00183428u + + 0x1e0u);
    }
L_00183424:;
    {
        cpu->r[7] = 0x00001050u;
    }
L_00183428:;
    {
        cpu->r[2] = rd32(0x00183430u + + 0x1dcu);
    }
L_0018342c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00183434u, cpu->r[3], 0, 0);
    }
L_00183430:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00183434:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_00183438:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0018343c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00183440:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00183444:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00183448:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00183480;
        }
    }
L_0018344c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00183450:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00183454:;
    {
        cpu->r[8] = cpu->r[5];
    }
L_00183458:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x50u);
    }
L_0018345c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00183460:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00183464:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00183470;
        }
    }
L_00183468:;
    {
        cpu->r[14] = 0x0018346cu; fn_0018ba20(cpu);
    }
L_0018346c:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[8]);
    }
L_00183470:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_00183474:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_00183478:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0018347c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00183458;
        }
    }
L_00183480:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x48u);
    }
L_00183484:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00183488:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = rd32(cpu->r[6] + + 0x40u);
        }
    }
L_0018348c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001834c8;
        }
    }
L_00183490:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00183494:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x40u);
    }
L_00183498:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_0018349c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001834a0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001834a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001834bc;
        }
    }
L_001834a8:;
    {
        cpu->r[14] = 0x001834acu; fn_0018ba20(cpu);
    }
L_001834ac:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x40u);
    }
L_001834b0:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x48u);
    }
L_001834b4:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001834b8:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[5]);
    }
L_001834bc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001834c0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_001834c4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0018349c;
        }
    }
L_001834c8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001834cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001834e0;
        }
    }
L_001834d0:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001834d4:;
    {
        cpu->r[14] = 0x001834d8u; fn_0018ba60(cpu);
    }
L_001834d8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001834dc:;
    {
        wr32(cpu->r[6] + + 0x40u, cpu->r[3]);
    }
L_001834e0:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x44u);
    }
L_001834e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001834e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001834f8;
        }
    }
L_001834ec:;
    {
        cpu->r[14] = 0x001834f0u; fn_0018ba60(cpu);
    }
L_001834f0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001834f4:;
    {
        wr32(cpu->r[6] + + 0x44u, cpu->r[3]);
    }
L_001834f8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x18u);
    }
L_001834fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00183500:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00183558;
        }
    }
L_00183504:;
    {
        cpu->r[2] = rd32(cpu->r[3] + - 0x4u);
    }
L_00183508:;
    {
        cpu->r[4] = 0x000001d0u;
    }
L_0018350c:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_00183510:;
    {
        uint32_t v = cpu->r[4] * cpu->r[2] + cpu->r[3]; cpu->r[4] = v;
    }
L_00183514:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_00183518:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00183548;
        }
    }
L_0018351c:;
    {
        cpu->r[5] = rd32(cpu->r[4] + - 0x120u);
    }
L_00183520:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00183524:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018353c;
        }
    }
L_00183528:;
    {
        cpu->r[14] = 0x0018352cu; fn_000b2bc8(cpu);
    }
L_0018352c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00183530:;
    {
        cpu->r[14] = 0x00183534u; fn_0018ba20(cpu);
    }
L_00183534:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x18u);
    }
L_00183538:;
    {
        wr32(cpu->r[4] + - 0x120u, cpu->r[7]);
    }
L_0018353c:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x000001d0u, 1, 0);
    }
L_00183540:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_00183544:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018351c;
        }
    }
L_00183548:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 0);
    }
L_0018354c:;
    {
        cpu->r[14] = 0x00183550u; fn_0018ba60(cpu);
    }
L_00183550:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00183554:;
    {
        wr32(cpu->r[6] + + 0x18u, cpu->r[3]);
    }
L_00183558:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x24u);
    }
L_0018355c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00183560:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00183570;
        }
    }
L_00183564:;
    {
        cpu->r[14] = 0x00183568u; fn_0018ba60(cpu);
    }
L_00183568:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018356c:;
    {
        wr32(cpu->r[6] + + 0x24u, cpu->r[3]);
    }
L_00183570:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x28u);
    }
L_00183574:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00183578:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00183588;
        }
    }
L_0018357c:;
    {
        cpu->r[14] = 0x00183580u; fn_0018ba60(cpu);
    }
L_00183580:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00183584:;
    {
        wr32(cpu->r[6] + + 0x28u, cpu->r[3]);
    }
L_00183588:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x2cu);
    }
L_0018358c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00183590:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001835a0;
        }
    }
L_00183594:;
    {
        cpu->r[14] = 0x00183598u; fn_0018ba60(cpu);
    }
L_00183598:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018359c:;
    {
        wr32(cpu->r[6] + + 0x2cu, cpu->r[3]);
    }
L_001835a0:;
    {
        cpu->r[3] = 0x000010b4u;
    }
L_001835a4:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001835a8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001835ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001835b4;
        }
    }
L_001835b0:;
    {
        cpu->r[14] = 0x001835b4u; fn_0018ba60(cpu);
    }
L_001835b4:;
    {
        cpu->r[3] = 0x000010acu;
    }
L_001835b8:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001835bc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001835c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001835c8;
        }
    }
L_001835c4:;
    {
        cpu->r[14] = 0x001835c8u; fn_0018ba60(cpu);
    }
L_001835c8:;
    {
        cpu->r[3] = 0x000010a4u;
    }
L_001835cc:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001835d0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001835d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001835dc;
        }
    }
L_001835d8:;
    {
        cpu->r[14] = 0x001835dcu; fn_0018ba60(cpu);
    }
L_001835dc:;
    {
        cpu->r[3] = 0x0000109cu;
    }
L_001835e0:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001835e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001835e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001835f0;
        }
    }
L_001835ec:;
    {
        cpu->r[14] = 0x001835f0u; fn_0018ba60(cpu);
    }
L_001835f0:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x3cu);
    }
L_001835f4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001835f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00183600;
        }
    }
L_001835fc:;
    {
        cpu->r[14] = 0x00183600u; fn_0018ba60(cpu);
    }
L_00183600:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00183604:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00183608u)) return;
    }
}

/* _ZN4CMapD0Ev @ 00183610 (arm) */
void fn_00183610(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00183610:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00183614:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00183618:;
    {
        cpu->r[14] = 0x0018361cu; fn_0018341c(cpu);
    }
L_0018361c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00183620:;
    {
        cpu->r[14] = 0x00183624u; fn_0018ba20(cpu);
    }
L_00183624:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00183628:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0018362cu)) return;
    }
}

/* _ZN4CMapD2Ev @ 0018362c (arm) */
void fn_0018362c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018362c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00183630:;
    {
        cpu->r[3] = rd32(0x00183638u + + 0x1e0u);
    }
L_00183634:;
    {
        cpu->r[7] = 0x00001050u;
    }
L_00183638:;
    {
        cpu->r[2] = rd32(0x00183640u + + 0x1dcu);
    }
L_0018363c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00183644u, cpu->r[3], 0, 0);
    }
L_00183640:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00183644:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_00183648:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0018364c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00183650:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00183654:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00183658:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00183690;
        }
    }
L_0018365c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00183660:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00183664:;
    {
        cpu->r[8] = cpu->r[5];
    }
L_00183668:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x50u);
    }
L_0018366c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00183670:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00183674:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00183680;
        }
    }
L_00183678:;
    {
        cpu->r[14] = 0x0018367cu; fn_0018ba20(cpu);
    }
L_0018367c:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[8]);
    }
L_00183680:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_00183684:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_00183688:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0018368c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00183668;
        }
    }
L_00183690:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x48u);
    }
L_00183694:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00183698:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = rd32(cpu->r[6] + + 0x40u);
        }
    }
L_0018369c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001836d8;
        }
    }
L_001836a0:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001836a4:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x40u);
    }
L_001836a8:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_001836ac:;
    {
        cpu->r[3] = rd32(cpu->r[2] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001836b0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001836b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001836cc;
        }
    }
L_001836b8:;
    {
        cpu->r[14] = 0x001836bcu; fn_0018ba20(cpu);
    }
L_001836bc:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x40u);
    }
L_001836c0:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x48u);
    }
L_001836c4:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001836c8:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[5]);
    }
L_001836cc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001836d0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_001836d4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001836ac;
        }
    }
L_001836d8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001836dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001836f0;
        }
    }
L_001836e0:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001836e4:;
    {
        cpu->r[14] = 0x001836e8u; fn_0018ba60(cpu);
    }
L_001836e8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001836ec:;
    {
        wr32(cpu->r[6] + + 0x40u, cpu->r[3]);
    }
L_001836f0:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x44u);
    }
L_001836f4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001836f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00183708;
        }
    }
L_001836fc:;
    {
        cpu->r[14] = 0x00183700u; fn_0018ba60(cpu);
    }
L_00183700:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00183704:;
    {
        wr32(cpu->r[6] + + 0x44u, cpu->r[3]);
    }
L_00183708:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x18u);
    }
L_0018370c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00183710:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00183768;
        }
    }
L_00183714:;
    {
        cpu->r[2] = rd32(cpu->r[3] + - 0x4u);
    }
L_00183718:;
    {
        cpu->r[4] = 0x000001d0u;
    }
L_0018371c:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_00183720:;
    {
        uint32_t v = cpu->r[4] * cpu->r[2] + cpu->r[3]; cpu->r[4] = v;
    }
L_00183724:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_00183728:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00183758;
        }
    }
L_0018372c:;
    {
        cpu->r[5] = rd32(cpu->r[4] + - 0x120u);
    }
L_00183730:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00183734:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0018374c;
        }
    }
L_00183738:;
    {
        cpu->r[14] = 0x0018373cu; fn_000b2bc8(cpu);
    }
L_0018373c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00183740:;
    {
        cpu->r[14] = 0x00183744u; fn_0018ba20(cpu);
    }
L_00183744:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x18u);
    }
L_00183748:;
    {
        wr32(cpu->r[4] + - 0x120u, cpu->r[7]);
    }
L_0018374c:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x000001d0u, 1, 0);
    }
L_00183750:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_00183754:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018372c;
        }
    }
L_00183758:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 0);
    }
L_0018375c:;
    {
        cpu->r[14] = 0x00183760u; fn_0018ba60(cpu);
    }
L_00183760:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00183764:;
    {
        wr32(cpu->r[6] + + 0x18u, cpu->r[3]);
    }
L_00183768:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x24u);
    }
L_0018376c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00183770:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00183780;
        }
    }
L_00183774:;
    {
        cpu->r[14] = 0x00183778u; fn_0018ba60(cpu);
    }
L_00183778:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018377c:;
    {
        wr32(cpu->r[6] + + 0x24u, cpu->r[3]);
    }
L_00183780:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x28u);
    }
L_00183784:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00183788:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00183798;
        }
    }
L_0018378c:;
    {
        cpu->r[14] = 0x00183790u; fn_0018ba60(cpu);
    }
L_00183790:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00183794:;
    {
        wr32(cpu->r[6] + + 0x28u, cpu->r[3]);
    }
L_00183798:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x2cu);
    }
L_0018379c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001837a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001837b0;
        }
    }
L_001837a4:;
    {
        cpu->r[14] = 0x001837a8u; fn_0018ba60(cpu);
    }
L_001837a8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001837ac:;
    {
        wr32(cpu->r[6] + + 0x2cu, cpu->r[3]);
    }
L_001837b0:;
    {
        cpu->r[3] = 0x000010b4u;
    }
L_001837b4:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001837b8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001837bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001837c4;
        }
    }
L_001837c0:;
    {
        cpu->r[14] = 0x001837c4u; fn_0018ba60(cpu);
    }
L_001837c4:;
    {
        cpu->r[3] = 0x000010acu;
    }
L_001837c8:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001837cc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001837d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001837d8;
        }
    }
L_001837d4:;
    {
        cpu->r[14] = 0x001837d8u; fn_0018ba60(cpu);
    }
L_001837d8:;
    {
        cpu->r[3] = 0x000010a4u;
    }
L_001837dc:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001837e0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001837e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001837ec;
        }
    }
L_001837e8:;
    {
        cpu->r[14] = 0x001837ecu; fn_0018ba60(cpu);
    }
L_001837ec:;
    {
        cpu->r[3] = 0x0000109cu;
    }
L_001837f0:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001837f4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001837f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00183800;
        }
    }
L_001837fc:;
    {
        cpu->r[14] = 0x00183800u; fn_0018ba60(cpu);
    }
L_00183800:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x3cu);
    }
L_00183804:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00183808:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00183810;
        }
    }
L_0018380c:;
    {
        cpu->r[14] = 0x00183810u; fn_0018ba60(cpu);
    }
L_00183810:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00183814:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00183818u)) return;
    }
}

/* _ZN4CMap24AddStaticCollisionBodiesEPP17StaticSceneObjecti @ 00183820 (arm) */
void fn_00183820(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00183820:;
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
L_00183824:;
    {
        cpu->r[13] -= 24u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
        wr64(cpu->r[13] + 16u, *(uint64_t*)vfp_d(cpu, 10));
    }
L_00183828:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0018382c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000e4u, 1, 0);
    }
L_00183830:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00183834:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_00183838:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_0018383c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00183d7c;
        }
    }
L_00183840:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00183844:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00183848:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_0018384c:;
    {
        cpu->r[2] = rd32(cpu->r[8] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_00183850:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00183854:;
    {
        cpu->r[1] = rd8(cpu->r[2] + + 0x185u);
    }
L_00183858:;
    {
        { uint32_t v = cpu->r[1] & 0x00000010u; set_nz(cpu, v); }
    }
L_0018385c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018386c;
        }
    }
L_00183860:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0x12au);
    }
L_00183864:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00183868:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00183870;
        }
    }
L_0018386c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00183870:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_00183874:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018384c;
        }
    }
L_00183878:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x48u);
    }
L_0018387c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00183880:;
    {
        wr32(cpu->r[5] + + 0x4cu, cpu->r[3]);
    }
L_00183884:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00183894;
        }
    }
L_00183888:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000e4u, 0, 0);
    }
L_0018388c:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        *(uint64_t*)vfp_d(cpu, 10) = rd64(cpu->r[13] + 16u);
        cpu->r[13] += 24u;
    }
L_00183890:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00183894u)) return;
    }
L_00183894:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_00183898:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0018389c:;
    {
        cpu->r[14] = 0x001838a0u; imp__Znaj(cpu); /* _Znaj */
    }
L_001838a0:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_001838a4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x48u);
    }
L_001838a8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_001838ac:;
    {
        cpu->r[14] = 0x001838b0u; imp__Znaj(cpu); /* _Znaj */
    }
L_001838b0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x48u);
    }
L_001838b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001838b8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[0]);
    }
L_001838bc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001838fc;
        }
    }
L_001838c0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001838c4:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001838c8:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001838cc:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_001838d0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x40u);
    }
L_001838d4:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x44u);
    }
L_001838d8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_001838dc:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[0]);
    }
L_001838e0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_001838e4:;
    {
        cpu->r[1] = rd8(cpu->r[1] + cpu->r[3]);
    }
L_001838e8:;
    {
        wr8(cpu->r[12] + cpu->r[3], cpu->r[1]);
    }
L_001838ec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001838f0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x48u);
    }
L_001838f4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001838f8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001838d0;
        }
    }
L_001838fc:;
    {
        cpu->r[1] = rd32(0x00183904u + + 0x48cu);
    }
L_00183900:;
    {
        cpu->r[10] = cpu->r[5];
    }
L_00183904:;
    {
        cpu->r[2] = rd32(0x0018390cu + + 0x488u);
    }
L_00183908:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_0018390c:;
    {
        cpu->r[3] = rd32(0x00183914u + + 0x484u);
    }
L_00183910:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
    }
L_00183914:;
    {
        cpu->r[2] = add_flags(cpu, 0x0018391cu, cpu->r[2], 0, 0);
    }
L_00183918:;
    {
        cpu->r[1] = rd32(0x00183920u + + 0x47cu);
    }
L_0018391c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00183924u, cpu->r[3], 0, 0);
    }
L_00183920:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x000000c4u, 0, 0);
    }
L_00183924:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x000000c4u, 0, 0);
    }
L_00183928:;
    {
        cpu->r[1] = add_flags(cpu, 0x00183930u, cpu->r[1], 0, 0);
    }
L_0018392c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[9]);
    }
L_00183930:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_00183934:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_00183938:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_0018393c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[8]);
    }
L_00183940:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_00183944:;
    {
        cpu->r[6] = rd32(cpu->r[2] + cpu->r[9]);
    }
L_00183948:;
    {
        cpu->r[3] = rd8(cpu->r[6] + + 0x185u);
    }
L_0018394c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000010u; set_nz(cpu, v); }
    }
L_00183950:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00183960;
        }
    }
L_00183954:;
    {
        cpu->r[3] = rd8(cpu->r[6] + + 0x12au);
    }
L_00183958:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018395c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00183b4c;
        }
    }
L_00183960:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x17cu);
    }
L_00183964:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[13], 0x00000074u, 0, 0);
    }
L_00183968:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_0018396c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_00183970:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00183974:;
    {
        cpu->r[11] = 0x00000000u;
    }
L_00183978:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0018397c:;
    {
        cpu->r[4] = cpu->r[11];
    }
L_00183980:;
    {
        cpu->r[14] = 0x00183988u;
    }
L_00183984:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x48u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00183988u)) return;
    }
L_00183988:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_0018398c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00183990:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00183994:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[5] + + 0x80u);
    }
L_00183998:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000074u, 0, 0);
    }
L_0018399c:;
    {
        *vfp_s(cpu, 20) = *(float*)G(cpu->r[5] + + 0x74u);
    }
L_001839a0:;
    {
        *vfp_s(cpu, 19) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_001839a4:;
    {
        *vfp_s(cpu, 21) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_001839a8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000080u, 0, 0);
    }
L_001839ac:;
    {
        *vfp_s(cpu, 18) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_001839b0:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_001839b4:;
    {
        wr32(cpu->r[13] + + 0x70u, cpu->r[11]);
    }
L_001839b8:;
    {
        cpu->r[14] = 0x001839bcu; fn_001535e0(cpu);
    }
L_001839bc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[5], 0x0000008cu, 0, 0);
    }
L_001839c0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x8cu);
    }
L_001839c4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001839c8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12] + + 0xcu);
    }
L_001839cc:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x4u);
    }
L_001839d0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x000000a4u, 0, 0);
    }
L_001839d4:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x8u);
    }
L_001839d8:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001839dc:;
    {
        cpu->r[14] = 0x001839e0u; fn_00153678(cpu);
    }
L_001839e0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xcu);
    }
L_001839e4:;
    {
        *vfp_s(cpu,14) = *vfp_s(cpu,17);
    }
L_001839e8:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[14], 0x00000008u, 0, 0);
    }
L_001839ec:;
    {
        *vfp_s(cpu,15) = *vfp_s(cpu,18);
    }
L_001839f0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001839f4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001839f8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xa4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001839fc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xa8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00183a00:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xacu) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00183a04:;
    {
        cpu->r[14] = 0x00183a08u; fn_00153c38(cpu);
    }
L_00183a08:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00183a0c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00183a10:;
    {
        cpu->r[14] = 0x00183a14u; fn_00153c38(cpu);
    }
L_00183a14:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0xa4u);
    }
L_00183a18:;
    {
        vfp_vneg(cpu, 15, 15);
    }
L_00183a1c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0xacu);
    }
L_00183a20:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0xa8u);
    }
L_00183a24:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00183a28:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000004u, 1, 1);
    }
L_00183a2c:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_s(cpu,13);
    }
L_00183a30:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_00183a34:;
    {
        *(uint32_t*)G(cpu->r[11] + - 0x4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00183a38:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00183a3c:;
    {
        *(uint32_t*)G(cpu->r[11]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00183a40:;
    {
        *(uint32_t*)G(cpu->r[11] + - 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00183a44:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x0000000cu, 0, 0);
    }
L_00183a48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00183a68;
        }
    }
L_00183a4c:;
    {
        { uint32_t v = cpu->r[4] & 0x00000001u; set_nz(cpu, v); }
    }
L_00183a50:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu,14) = *vfp_s(cpu,17);
        }
    }
L_00183a54:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu,14) = *vfp_s(cpu,20);
        }
    }
L_00183a58:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 1);
    }
L_00183a5c:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu,15) = *vfp_s(cpu,18);
        }
    }
L_00183a60:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,15) = *vfp_s(cpu,19);
        }
    }
L_00183a64:;
    {
        goto L_001839f0;
    }
L_00183a68:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_00183a6c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[9]);
    }
L_00183a70:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x12au);
    }
L_00183a74:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00183a78:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00183bb0;
        }
    }
L_00183a7c:;
    {
        cpu->r[3] = rd8(cpu->r[6] + + 0x185u);
    }
L_00183a80:;
    {
        { uint32_t v = cpu->r[3] & 0x00000010u; set_nz(cpu, v); }
    }
L_00183a84:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00183d08;
        }
    }
L_00183a88:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00183a8c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00183a90:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00183a98u + + 0x2f0u);
    }
L_00183a94:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xacu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00183a98:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xa4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00183a9c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xa8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00183aa0:;
    {
        cpu->r[14] = 0x00183aa4u; fn_000b5cc4(cpu);
    }
L_00183aa4:;
    {
        cpu->r[0] = 0x00000048u;
    }
L_00183aa8:;
    {
        cpu->r[14] = 0x00183aacu; fn_0018ba6c(cpu);
    }
L_00183aac:;
    {
        vfp_vsub(cpu, 16, 16, 21);
    }
L_00183ab0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00183ab4:;
    {
        cpu->r[14] = 0x00183ab8u; fn_0017a524(cpu);
    }
L_00183ab8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_00183abc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00183ac0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_00183ac4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x00000018u, 0, 0);
    }
L_00183ac8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], 0x00000024u, 0, 0);
    }
L_00183acc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00183ad0:;
    {
        cpu->r[14] = 0x00183ad4u; fn_0017ddd0(cpu);
    }
L_00183ad4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00183adcu + + 0x2b0u);
    }
L_00183ad8:;
    {
        vfp_vmul(cpu, 15, 16, 15);
    }
L_00183adc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0xacu);
    }
L_00183ae0:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_00183ae4:;
    {
        wr16(cpu->r[4] + + 0x38u, cpu->r[1]);
    }
L_00183ae8:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_00183aec:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00183af0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00183af4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00183af8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_00183afc:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00183b00:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00183b04:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_00183b08:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[2]);
    }
L_00183b0c:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x48u);
    }
L_00183b10:;
    {
        wr32(cpu->r[6] + + 0x198u, cpu->r[4]);
    }
L_00183b14:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[6]);
    }
L_00183b18:;
    {
        wr32(cpu->r[12] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[4]);
    }
L_00183b1c:;
    {
        wr8(cpu->r[1] + cpu->r[3], cpu->r[5]);
    }
L_00183b20:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x70u);
    }
L_00183b24:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x48u);
    }
L_00183b28:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 1);
    }
L_00183b2c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00183b30:;
    {
        wr32(cpu->r[10] + + 0x48u, cpu->r[3]);
    }
L_00183b34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00183b4c;
        }
    }
L_00183b38:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00183b3c:;
    {
        cpu->r[14] = 0x00183b40u; fn_000b2bc8(cpu);
    }
L_00183b40:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00183b44:;
    {
        cpu->r[14] = 0x00183b48u; fn_0018ba20(cpu);
    }
L_00183b48:;
    {
        wr32(cpu->r[13] + + 0x70u, cpu->r[5]);
    }
L_00183b4c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_00183b50:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_00183b54:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_00183b58:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00183b5c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_00183b60:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00183b64:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00183940;
        }
    }
L_00183b68:;
    {
        cpu->r[0] = rd32(cpu->r[10] + + 0x40u);
    }
L_00183b6c:;
    {
        cpu->r[5] = cpu->r[10];
    }
L_00183b70:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00183b74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00183b84;
        }
    }
L_00183b78:;
    {
        cpu->r[14] = 0x00183b7cu; fn_0018ba60(cpu);
    }
L_00183b7c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00183b80:;
    {
        wr32(cpu->r[10] + + 0x40u, cpu->r[3]);
    }
L_00183b84:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x44u);
    }
L_00183b88:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00183b8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00183b9c;
        }
    }
L_00183b90:;
    {
        cpu->r[14] = 0x00183b94u; fn_0018ba60(cpu);
    }
L_00183b94:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00183b98:;
    {
        wr32(cpu->r[5] + + 0x44u, cpu->r[3]);
    }
L_00183b9c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_00183ba0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00183ba4:;
    {
        wr32(cpu->r[5] + + 0x44u, cpu->r[12]);
    }
L_00183ba8:;
    {
        wr32(cpu->r[5] + + 0x40u, cpu->r[1]);
    }
L_00183bac:;
    {
        goto L_00183888;
    }
L_00183bb0:;
    {
        cpu->r[0] = 0x00000064u;
    }
L_00183bb4:;
    {
        vfp_vsub(cpu, 16, 16, 21);
    }
L_00183bb8:;
    {
        cpu->r[14] = 0x00183bbcu; fn_0018ba6c(cpu);
    }
L_00183bbc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x000000d4u, 0, 0);
    }
L_00183bc0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00183bc4:;
    {
        cpu->r[14] = 0x00183bc8u; fn_0017a56c(cpu);
    }
L_00183bc8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), 0.0f);
    }
L_00183bcc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_00183bd0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00183bd4:;
    {
        cpu->r[4] = cpu->r[5];
    }
L_00183bd8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_00183bdc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x00000018u, 0, 0);
    }
L_00183be0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], 0x00000024u, 0, 0);
    }
L_00183be4:;
    {
        vfp_sync_flags(cpu);
    }
L_00183be8:;
    {
        if (cond_test(cpu, 5)) {
        vfp_vneg(cpu, 16, 16);
        }
    }
L_00183bec:;
    {
        *(int32_t*)vfp_s(cpu,16) = (int32_t)*vfp_s(cpu,16);
    }
L_00183bf0:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x58u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00183bf4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00183bf8:;
    {
        cpu->r[14] = 0x00183bfcu; fn_0017ddd0(cpu);
    }
L_00183bfc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x58u);
    }
L_00183c00:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x78u);
    }
L_00183c04:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00183c08:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_00183c0c:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[2]);
    }
L_00183c10:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x90u);
    }
L_00183c14:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_00183c18:;
    {
        wr32(cpu->r[13] + + 0x90u, cpu->r[3]);
    }
L_00183c1c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x24u);
    }
L_00183c20:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[0] = v;
    }
L_00183c24:;
    {
        cpu->r[14] = 0x00183c28u; fn_0017fe7c(cpu);
    }
L_00183c28:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x84u);
    }
L_00183c2c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x78u);
    }
L_00183c30:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x9cu);
    }
L_00183c34:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x88u);
    }
L_00183c38:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], cpu->r[3], 1, 0);
    }
L_00183c3c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 0);
    }
L_00183c40:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x7cu);
    }
L_00183c44:;
    {
        wr32(cpu->r[5] + + 0x60u, cpu->r[3]);
    }
L_00183c48:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xa0u);
    }
L_00183c4c:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[1], 1, 0);
    }
L_00183c50:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x80u);
    }
L_00183c54:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 0);
    }
L_00183c58:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x74u);
    }
L_00183c5c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x98u);
    }
L_00183c60:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], cpu->r[2], 1, 0);
    }
L_00183c64:;
    {
        wr32(cpu->r[13] + + 0xccu, cpu->r[12]);
    }
L_00183c68:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_00183c6c:;
    {
        wr32(cpu->r[13] + + 0xd4u, cpu->r[14]);
    }
L_00183c70:;
    {
        wr32(cpu->r[13] + + 0xc8u, cpu->r[3]);
    }
L_00183c74:;
    {
        wr32(cpu->r[13] + + 0xd0u, cpu->r[1]);
    }
L_00183c78:;
    {
        wr32(cpu->r[13] + + 0xd8u, cpu->r[11]);
    }
L_00183c7c:;
    {
        wr32(cpu->r[13] + + 0xdcu, cpu->r[8]);
    }
L_00183c80:;
    {
        wr32(cpu->r[5] + + 0x5cu, cpu->r[0]);
    }
L_00183c84:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00183c88:;
    {
        cpu->r[14] = 0x00183c8cu; fn_001855bc(cpu);
    }
L_00183c8c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x000000c8u, 0, 0);
    }
L_00183c90:;
    {
        cpu->r[14] = 0x00183c94u; fn_001855bc(cpu);
    }
L_00183c94:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xc8u);
    }
L_00183c98:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00183c9c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x000000bcu, 0, 0);
    }
L_00183ca0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x000000b0u, 0, 0);
    }
L_00183ca4:;
    {
        wr32(cpu->r[13] + + 0xb0u, cpu->r[3]);
    }
L_00183ca8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xccu);
    }
L_00183cac:;
    {
        wr32(cpu->r[13] + + 0xb4u, cpu->r[3]);
    }
L_00183cb0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xd0u);
    }
L_00183cb4:;
    {
        wr32(cpu->r[13] + + 0xb8u, cpu->r[3]);
    }
L_00183cb8:;
    {
        cpu->r[14] = 0x00183cbcu; fn_00184f0c(cpu);
    }
L_00183cbc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xc0u);
    }
L_00183cc0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00183cc4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00183d38;
        }
    }
L_00183cc8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xbcu);
    }
L_00183ccc:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00183cd0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x80u);
    }
L_00183cd4:;
    {
        wr16(cpu->r[5] + + 0x38u, cpu->r[2]);
    }
L_00183cd8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x88u);
    }
L_00183cdc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xc4u);
    }
L_00183ce0:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1]; cpu->r[0] = v;
    }
L_00183ce4:;
    {
        wr32(cpu->r[5] + + 0x4cu, cpu->r[3]);
    }
L_00183ce8:;
    {
        uint32_t v = cpu->r[12] * cpu->r[2] + cpu->r[0]; cpu->r[0] = v;
    }
L_00183cec:;
    {
        wr32(cpu->r[5] + + 0x50u, cpu->r[2]);
    }
L_00183cf0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x84u);
    }
L_00183cf4:;
    {
        wr32(cpu->r[5] + + 0x48u, cpu->r[1]);
    }
L_00183cf8:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3] + cpu->r[0]; cpu->r[3] = v;
    }
L_00183cfc:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_00183d00:;
    {
        wr32(cpu->r[5] + + 0x54u, cpu->r[3]);
    }
L_00183d04:;
    {
        goto L_00183af8;
    }
L_00183d08:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_00183d0c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00183d10:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_00183d14:;
    {
        cpu->r[2] = add_flags(cpu, 0x00183d1cu, cpu->r[3], 0, 0);
    }
L_00183d18:;
    {
        cpu->r[3] = rd32(0x00183d20u + + 0x80u);
    }
L_00183d1c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_00183d20:;
    {
        cpu->r[3] = add_flags(cpu, 0x00183d28u, cpu->r[3], 0, 0);
    }
L_00183d24:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00183d28:;
    {
        cpu->r[12] = 0x00000311u;
    }
L_00183d2c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00183d30:;
    {
        cpu->r[14] = 0x00183d34u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00183d34:;
    {
        goto L_00183a88;
    }
L_00183d38:;
    {
        cpu->r[3] = 0x00000303u;
    }
L_00183d3c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00183d40:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00183d44:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00183d48:;
    {
        cpu->r[1] = rd32(0x00183d50u + + 0x54u);
    }
L_00183d4c:;
    {
        cpu->r[2] = rd32(0x00183d54u + + 0x54u);
    }
L_00183d50:;
    {
        cpu->r[3] = rd32(0x00183d58u + + 0x54u);
    }
L_00183d54:;
    {
        cpu->r[1] = add_flags(cpu, 0x00183d5cu, cpu->r[1], 0, 0);
    }
L_00183d58:;
    {
        cpu->r[2] = add_flags(cpu, 0x00183d60u, cpu->r[2], 0, 0);
    }
L_00183d5c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00183d60:;
    {
        cpu->r[3] = add_flags(cpu, 0x00183d68u, cpu->r[3], 0, 0);
    }
L_00183d64:;
    {
        cpu->r[14] = 0x00183d68u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00183d68:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xc0u);
    }
L_00183d6c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00183d70:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_00183d74:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0xc0u, cpu->r[3]);
        }
    }
L_00183d78:;
    {
        goto L_00183cc8;
    }
L_00183d7c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x48u);
    }
L_00183d80:;
    {
        wr32(cpu->r[0] + + 0x4cu, cpu->r[3]);
    }
L_00183d84:;
    {
        goto L_00183888;
    }
}

/* _ZN9CMatrix444LoadEPKS_ @ 00183db0 (arm) */
void fn_00183db0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00183db0:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_00183db4:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_00183db8:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x4u);
    }
L_00183dbc:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_00183dc0:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x8u);
    }
L_00183dc4:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_00183dc8:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0xcu);
    }
L_00183dcc:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[3]);
    }
L_00183dd0:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x10u);
    }
L_00183dd4:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_00183dd8:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x14u);
    }
L_00183ddc:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_00183de0:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x18u);
    }
L_00183de4:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[3]);
    }
L_00183de8:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x1cu);
    }
L_00183dec:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[3]);
    }
L_00183df0:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x20u);
    }
L_00183df4:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[3]);
    }
L_00183df8:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x24u);
    }
L_00183dfc:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[3]);
    }
L_00183e00:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x28u);
    }
L_00183e04:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[3]);
    }
L_00183e08:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x2cu);
    }
L_00183e0c:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[3]);
    }
L_00183e10:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9CMatrix4412LoadIdentityEv @ 00183e14 (arm) */
void fn_00183e14(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00183e14:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00183e18:;
    {
        cpu->r[2] = 0x00001000u;
    }
L_00183e1c:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[3]);
    }
L_00183e20:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[2]);
    }
L_00183e24:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00183e28:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[3]);
    }
L_00183e2c:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[3]);
    }
L_00183e30:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[3]);
    }
L_00183e34:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_00183e38:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_00183e3c:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[3]);
    }
L_00183e40:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[3]);
    }
L_00183e44:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_00183e48:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_00183e4c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9CMatrix444MultEPKS_ @ 00183e50 (arm) */
void fn_00183e50(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00183e50:;
    {
        cpu->r[13] -= 28u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[9]);
        wr32(cpu->r[13] + 24u, cpu->r[10]);
    }
L_00183e54:;
    {
        cpu->r[8] = rd32(cpu->r[1]);
    }
L_00183e58:;
    {
        cpu->r[6] = rd32(cpu->r[0]);
    }
L_00183e5c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x4u);
    }
L_00183e60:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0xcu);
    }
L_00183e64:;
    {
        uint32_t v = cpu->r[8] * cpu->r[6]; cpu->r[8] = v;
    }
L_00183e68:;
    {
        cpu->r[10] = rd32(cpu->r[1] + + 0x8u);
    }
L_00183e6c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[5] + cpu->r[8]; cpu->r[8] = v;
    }
L_00183e70:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x18u);
    }
L_00183e74:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0x24u);
    }
L_00183e78:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x4u);
    }
L_00183e7c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x10u);
    }
L_00183e80:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x1cu);
    }
L_00183e84:;
    {
        uint32_t v = cpu->r[10] * cpu->r[12] + cpu->r[8]; cpu->r[8] = v;
    }
L_00183e88:;
    {
        uint32_t v = shifter(cpu->r[8], 1, 12u, &shc); cpu->r[8] = v;
    }
L_00183e8c:;
    {
        wr32(cpu->r[0], cpu->r[8]);
    }
L_00183e90:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_00183e94:;
    {
        uint32_t base = cpu->r[8];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[8] = v0;
        cpu->r[9] = v1;
        cpu->r[10] = v2;
    }
L_00183e98:;
    {
        uint32_t v = cpu->r[8] * cpu->r[6]; cpu->r[8] = v;
    }
L_00183e9c:;
    {
        uint32_t v = cpu->r[9] * cpu->r[5] + cpu->r[8]; cpu->r[8] = v;
    }
L_00183ea0:;
    {
        uint32_t v = cpu->r[10] * cpu->r[12] + cpu->r[8]; cpu->r[8] = v;
    }
L_00183ea4:;
    {
        uint32_t v = shifter(cpu->r[8], 1, 12u, &shc); cpu->r[8] = v;
    }
L_00183ea8:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[8]);
    }
L_00183eac:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[1], 0x00000018u, 0, 0);
    }
L_00183eb0:;
    {
        uint32_t base = cpu->r[8];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[8] = v0;
        cpu->r[9] = v1;
        cpu->r[10] = v2;
    }
L_00183eb4:;
    {
        uint32_t v = cpu->r[8] * cpu->r[6]; cpu->r[8] = v;
    }
L_00183eb8:;
    {
        uint32_t v = cpu->r[9] * cpu->r[5] + cpu->r[8]; cpu->r[8] = v;
    }
L_00183ebc:;
    {
        uint32_t v = cpu->r[10] * cpu->r[12] + cpu->r[8]; cpu->r[8] = v;
    }
L_00183ec0:;
    {
        uint32_t v = shifter(cpu->r[8], 1, 12u, &shc); cpu->r[8] = v;
    }
L_00183ec4:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[8]);
    }
L_00183ec8:;
    {
        cpu->r[9] = rd32(cpu->r[1] + + 0x24u);
    }
L_00183ecc:;
    {
        cpu->r[10] = rd32(cpu->r[1] + + 0x28u);
    }
L_00183ed0:;
    {
        cpu->r[8] = rd32(cpu->r[1] + + 0x2cu);
    }
L_00183ed4:;
    {
        uint32_t v = cpu->r[9] * cpu->r[6]; cpu->r[6] = v;
    }
L_00183ed8:;
    {
        uint32_t v = cpu->r[10] * cpu->r[5] + cpu->r[6]; cpu->r[5] = v;
    }
L_00183edc:;
    {
        uint32_t v = cpu->r[8] * cpu->r[12] + cpu->r[5]; cpu->r[12] = v;
    }
L_00183ee0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[7], shifter(cpu->r[12], 1, 12u, &shc), 0, 0);
    }
L_00183ee4:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[12]);
    }
L_00183ee8:;
    {
        cpu->r[12] = rd32(cpu->r[1]);
    }
L_00183eec:;
    {
        cpu->r[6] = rd32(cpu->r[1] + + 0x4u);
    }
L_00183ef0:;
    {
        cpu->r[5] = rd32(cpu->r[1] + + 0x8u);
    }
L_00183ef4:;
    {
        uint32_t v = cpu->r[12] * cpu->r[2]; cpu->r[12] = v;
    }
L_00183ef8:;
    {
        uint32_t v = cpu->r[6] * cpu->r[3] + cpu->r[12]; cpu->r[12] = v;
    }
L_00183efc:;
    {
        uint32_t v = cpu->r[5] * cpu->r[4] + cpu->r[12]; cpu->r[12] = v;
    }
L_00183f00:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 12u, &shc); cpu->r[12] = v;
    }
L_00183f04:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[12]);
    }
L_00183f08:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0xcu);
    }
L_00183f0c:;
    {
        cpu->r[6] = rd32(cpu->r[1] + + 0x10u);
    }
L_00183f10:;
    {
        cpu->r[5] = rd32(cpu->r[1] + + 0x14u);
    }
L_00183f14:;
    {
        uint32_t v = cpu->r[12] * cpu->r[2]; cpu->r[12] = v;
    }
L_00183f18:;
    {
        uint32_t v = cpu->r[6] * cpu->r[3] + cpu->r[12]; cpu->r[12] = v;
    }
L_00183f1c:;
    {
        uint32_t v = cpu->r[5] * cpu->r[4] + cpu->r[12]; cpu->r[12] = v;
    }
L_00183f20:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 12u, &shc); cpu->r[12] = v;
    }
L_00183f24:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[12]);
    }
L_00183f28:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x18u);
    }
L_00183f2c:;
    {
        cpu->r[6] = rd32(cpu->r[1] + + 0x1cu);
    }
L_00183f30:;
    {
        cpu->r[5] = rd32(cpu->r[1] + + 0x20u);
    }
L_00183f34:;
    {
        uint32_t v = cpu->r[12] * cpu->r[2]; cpu->r[12] = v;
    }
L_00183f38:;
    {
        uint32_t v = cpu->r[6] * cpu->r[3] + cpu->r[12]; cpu->r[12] = v;
    }
L_00183f3c:;
    {
        uint32_t v = cpu->r[5] * cpu->r[4] + cpu->r[12]; cpu->r[12] = v;
    }
L_00183f40:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 12u, &shc); cpu->r[12] = v;
    }
L_00183f44:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[12]);
    }
L_00183f48:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x24u);
    }
L_00183f4c:;
    {
        cpu->r[7] = rd32(cpu->r[1] + + 0x28u);
    }
L_00183f50:;
    {
        cpu->r[8] = rd32(cpu->r[1] + + 0x2cu);
    }
L_00183f54:;
    {
        uint32_t v = cpu->r[12] * cpu->r[2]; cpu->r[2] = v;
    }
L_00183f58:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x28u);
    }
L_00183f5c:;
    {
        uint32_t v = cpu->r[7] * cpu->r[3] + cpu->r[2]; cpu->r[7] = v;
    }
L_00183f60:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x8u);
    }
L_00183f64:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x14u);
    }
L_00183f68:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x20u);
    }
L_00183f6c:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x2cu);
    }
L_00183f70:;
    {
        uint32_t v = cpu->r[8] * cpu->r[4] + cpu->r[7]; cpu->r[4] = v;
    }
L_00183f74:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[6], shifter(cpu->r[4], 1, 12u, &shc), 0, 0);
    }
L_00183f78:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[4]);
    }
L_00183f7c:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[4] = v0;
        cpu->r[7] = v1;
    }
L_00183f80:;
    {
        cpu->r[6] = rd32(cpu->r[1] + + 0x8u);
    }
L_00183f84:;
    {
        uint32_t v = cpu->r[4] * cpu->r[12]; cpu->r[4] = v;
    }
L_00183f88:;
    {
        uint32_t v = cpu->r[7] * cpu->r[2] + cpu->r[4]; cpu->r[4] = v;
    }
L_00183f8c:;
    {
        uint32_t v = cpu->r[6] * cpu->r[3] + cpu->r[4]; cpu->r[4] = v;
    }
L_00183f90:;
    {
        uint32_t v = shifter(cpu->r[4], 1, 12u, &shc); cpu->r[4] = v;
    }
L_00183f94:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[4]);
    }
L_00183f98:;
    {
        cpu->r[4] = rd32(cpu->r[1] + + 0xcu);
    }
L_00183f9c:;
    {
        cpu->r[7] = rd32(cpu->r[1] + + 0x10u);
    }
L_00183fa0:;
    {
        cpu->r[6] = rd32(cpu->r[1] + + 0x14u);
    }
L_00183fa4:;
    {
        uint32_t v = cpu->r[4] * cpu->r[12]; cpu->r[4] = v;
    }
L_00183fa8:;
    {
        uint32_t v = cpu->r[7] * cpu->r[2] + cpu->r[4]; cpu->r[4] = v;
    }
L_00183fac:;
    {
        uint32_t v = cpu->r[6] * cpu->r[3] + cpu->r[4]; cpu->r[4] = v;
    }
L_00183fb0:;
    {
        uint32_t v = shifter(cpu->r[4], 1, 12u, &shc); cpu->r[4] = v;
    }
L_00183fb4:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[4]);
    }
L_00183fb8:;
    {
        cpu->r[4] = rd32(cpu->r[1] + + 0x18u);
    }
L_00183fbc:;
    {
        cpu->r[7] = rd32(cpu->r[1] + + 0x1cu);
    }
L_00183fc0:;
    {
        cpu->r[6] = rd32(cpu->r[1] + + 0x20u);
    }
L_00183fc4:;
    {
        uint32_t v = cpu->r[4] * cpu->r[12]; cpu->r[4] = v;
    }
L_00183fc8:;
    {
        uint32_t v = cpu->r[7] * cpu->r[2] + cpu->r[4]; cpu->r[4] = v;
    }
L_00183fcc:;
    {
        uint32_t v = cpu->r[6] * cpu->r[3] + cpu->r[4]; cpu->r[4] = v;
    }
L_00183fd0:;
    {
        uint32_t v = shifter(cpu->r[4], 1, 12u, &shc); cpu->r[4] = v;
    }
L_00183fd4:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[4]);
    }
L_00183fd8:;
    {
        cpu->r[6] = rd32(cpu->r[1] + + 0x24u);
    }
L_00183fdc:;
    {
        cpu->r[4] = rd32(cpu->r[1] + + 0x28u);
    }
L_00183fe0:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x2cu);
    }
L_00183fe4:;
    {
        uint32_t v = cpu->r[6] * cpu->r[12]; cpu->r[12] = v;
    }
L_00183fe8:;
    {
        uint32_t v = cpu->r[4] * cpu->r[2] + cpu->r[12]; cpu->r[2] = v;
    }
L_00183fec:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3] + cpu->r[2]; cpu->r[3] = v;
    }
L_00183ff0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[3], 1, 12u, &shc), 0, 0);
    }
L_00183ff4:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[3]);
    }
L_00183ff8:;
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
        cpu->r[10] = v6;
        cpu->r[13] += 28u;
    }
L_00183ffc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9CMatrix449MultFlipXEPKS_ @ 00184000 (arm) */
void fn_00184000(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00184000:;
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
L_00184004:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00184008:;
    {
        cpu->r[8] = rd32(cpu->r[1]);
    }
L_0018400c:;
    {
        cpu->r[5] = rd32(cpu->r[1] + + 0x4u);
    }
L_00184010:;
    {
        cpu->r[6] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_00184014:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0xcu);
    }
L_00184018:;
    {
        uint32_t v = cpu->r[8] * cpu->r[3]; cpu->r[8] = v;
    }
L_0018401c:;
    {
        cpu->r[10] = rd32(cpu->r[1] + + 0x8u);
    }
L_00184020:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x18u);
    }
L_00184024:;
    {
        cpu->r[11] = rd32(cpu->r[0] + + 0x24u);
    }
L_00184028:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0x4u);
    }
L_0018402c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x10u);
    }
L_00184030:;
    {
        uint32_t v = cpu->r[8] - cpu->r[5] * cpu->r[4]; cpu->r[8] = v;
    }
L_00184034:;
    {
        cpu->r[5] = sub_flags(cpu, 0x00000000u, cpu->r[7], 1, 0);
    }
L_00184038:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x1cu);
    }
L_0018403c:;
    {
        uint32_t v = cpu->r[8] - cpu->r[10] * cpu->r[12]; cpu->r[8] = v;
    }
L_00184040:;
    {
        uint32_t v = shifter(cpu->r[8], 1, 12u, &shc); cpu->r[8] = v;
    }
L_00184044:;
    {
        wr32(cpu->r[0], cpu->r[8]);
    }
L_00184048:;
    {
        cpu->r[10] = rd32(cpu->r[1] + + 0x10u);
    }
L_0018404c:;
    {
        cpu->r[9] = rd32(cpu->r[1] + + 0x14u);
    }
L_00184050:;
    {
        cpu->r[8] = rd32(cpu->r[1] + + 0xcu);
    }
L_00184054:;
    {
        uint32_t v = cpu->r[10] * cpu->r[4]; cpu->r[10] = v;
    }
L_00184058:;
    {
        uint32_t v = cpu->r[9] * cpu->r[12] + cpu->r[10]; cpu->r[10] = v;
    }
L_0018405c:;
    {
        uint32_t v = cpu->r[8] * cpu->r[6] + cpu->r[10]; cpu->r[8] = v;
    }
L_00184060:;
    {
        uint32_t v = shifter(cpu->r[8], 1, 12u, &shc); cpu->r[8] = v;
    }
L_00184064:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[8]);
    }
L_00184068:;
    {
        cpu->r[10] = rd32(cpu->r[1] + + 0x1cu);
    }
L_0018406c:;
    {
        cpu->r[9] = rd32(cpu->r[1] + + 0x20u);
    }
L_00184070:;
    {
        cpu->r[8] = rd32(cpu->r[1] + + 0x18u);
    }
L_00184074:;
    {
        uint32_t v = cpu->r[10] * cpu->r[4]; cpu->r[10] = v;
    }
L_00184078:;
    {
        uint32_t v = cpu->r[9] * cpu->r[12] + cpu->r[10]; cpu->r[10] = v;
    }
L_0018407c:;
    {
        uint32_t v = cpu->r[8] * cpu->r[6] + cpu->r[10]; cpu->r[8] = v;
    }
L_00184080:;
    {
        uint32_t v = shifter(cpu->r[8], 1, 12u, &shc); cpu->r[8] = v;
    }
L_00184084:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[8]);
    }
L_00184088:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[1], 0x00000024u, 0, 0);
    }
L_0018408c:;
    {
        uint32_t base = cpu->r[8];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[8] = v0;
        cpu->r[9] = v1;
        cpu->r[10] = v2;
    }
L_00184090:;
    {
        uint32_t v = cpu->r[9] * cpu->r[4]; cpu->r[4] = v;
    }
L_00184094:;
    {
        uint32_t v = cpu->r[10] * cpu->r[12] + cpu->r[4]; cpu->r[12] = v;
    }
L_00184098:;
    {
        uint32_t v = cpu->r[8] * cpu->r[6] + cpu->r[12]; cpu->r[6] = v;
    }
L_0018409c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], shifter(cpu->r[6], 1, 12u, &shc), 0, 0);
    }
L_001840a0:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[11]);
    }
L_001840a4:;
    {
        cpu->r[6] = rd32(cpu->r[1]);
    }
L_001840a8:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[4] = v0;
        cpu->r[12] = v1;
    }
L_001840ac:;
    {
        uint32_t v = cpu->r[6] * cpu->r[7]; cpu->r[7] = v;
    }
L_001840b0:;
    {
        uint32_t v = cpu->r[7] - cpu->r[4] * cpu->r[2]; cpu->r[7] = v;
    }
L_001840b4:;
    {
        uint32_t v = cpu->r[7] - cpu->r[12] * cpu->r[3]; cpu->r[7] = v;
    }
L_001840b8:;
    {
        uint32_t v = shifter(cpu->r[7], 1, 12u, &shc); cpu->r[7] = v;
    }
L_001840bc:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[7]);
    }
L_001840c0:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x10u);
    }
L_001840c4:;
    {
        cpu->r[6] = rd32(cpu->r[1] + + 0x14u);
    }
L_001840c8:;
    {
        cpu->r[4] = rd32(cpu->r[1] + + 0xcu);
    }
L_001840cc:;
    {
        uint32_t v = cpu->r[12] * cpu->r[2]; cpu->r[12] = v;
    }
L_001840d0:;
    {
        uint32_t v = cpu->r[6] * cpu->r[3] + cpu->r[12]; cpu->r[12] = v;
    }
L_001840d4:;
    {
        uint32_t v = cpu->r[4] * cpu->r[5] + cpu->r[12]; cpu->r[12] = v;
    }
L_001840d8:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 12u, &shc); cpu->r[12] = v;
    }
L_001840dc:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[12]);
    }
L_001840e0:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x1cu);
    }
L_001840e4:;
    {
        cpu->r[6] = rd32(cpu->r[1] + + 0x20u);
    }
L_001840e8:;
    {
        cpu->r[4] = rd32(cpu->r[1] + + 0x18u);
    }
L_001840ec:;
    {
        uint32_t v = cpu->r[12] * cpu->r[2]; cpu->r[12] = v;
    }
L_001840f0:;
    {
        uint32_t v = cpu->r[6] * cpu->r[3] + cpu->r[12]; cpu->r[12] = v;
    }
L_001840f4:;
    {
        uint32_t v = cpu->r[4] * cpu->r[5] + cpu->r[12]; cpu->r[12] = v;
    }
L_001840f8:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 12u, &shc); cpu->r[12] = v;
    }
L_001840fc:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[12]);
    }
L_00184100:;
    {
        cpu->r[4] = rd32(cpu->r[1] + + 0x28u);
    }
L_00184104:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x2cu);
    }
L_00184108:;
    {
        cpu->r[9] = rd32(cpu->r[1] + + 0x24u);
    }
L_0018410c:;
    {
        uint32_t v = cpu->r[4] * cpu->r[2]; cpu->r[2] = v;
    }
L_00184110:;
    {
        cpu->r[10] = rd32(cpu->r[0] + + 0x28u);
    }
L_00184114:;
    {
        uint32_t v = cpu->r[12] * cpu->r[3] + cpu->r[2]; cpu->r[3] = v;
    }
L_00184118:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0x8u);
    }
L_0018411c:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x14u);
    }
L_00184120:;
    {
        cpu->r[6] = sub_flags(cpu, 0x00000000u, cpu->r[7], 1, 0);
    }
L_00184124:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x20u);
    }
L_00184128:;
    {
        cpu->r[8] = rd32(cpu->r[0] + + 0x2cu);
    }
L_0018412c:;
    {
        uint32_t v = cpu->r[9] * cpu->r[5] + cpu->r[3]; cpu->r[5] = v;
    }
L_00184130:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[10], shifter(cpu->r[5], 1, 12u, &shc), 0, 0);
    }
L_00184134:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[5]);
    }
L_00184138:;
    {
        cpu->r[5] = rd32(cpu->r[1]);
    }
L_0018413c:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_00184140:;
    {
        uint32_t v = cpu->r[5] * cpu->r[7]; cpu->r[7] = v;
    }
L_00184144:;
    {
        uint32_t v = cpu->r[7] - cpu->r[2] * cpu->r[4]; cpu->r[7] = v;
    }
L_00184148:;
    {
        uint32_t v = cpu->r[7] - cpu->r[3] * cpu->r[12]; cpu->r[7] = v;
    }
L_0018414c:;
    {
        uint32_t v = shifter(cpu->r[7], 1, 12u, &shc); cpu->r[7] = v;
    }
L_00184150:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[7]);
    }
L_00184154:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_00184158:;
    {
        uint32_t base = cpu->r[2];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
        cpu->r[5] = v2;
    }
L_0018415c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[4]; cpu->r[3] = v;
    }
L_00184160:;
    {
        uint32_t v = cpu->r[5] * cpu->r[12] + cpu->r[3]; cpu->r[3] = v;
    }
L_00184164:;
    {
        uint32_t v = cpu->r[2] * cpu->r[6] + cpu->r[3]; cpu->r[3] = v;
    }
L_00184168:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 12u, &shc); cpu->r[3] = v;
    }
L_0018416c:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_00184170:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000018u, 0, 0);
    }
L_00184174:;
    {
        uint32_t base = cpu->r[2];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
        cpu->r[5] = v2;
    }
L_00184178:;
    {
        uint32_t v = cpu->r[3] * cpu->r[4]; cpu->r[3] = v;
    }
L_0018417c:;
    {
        uint32_t v = cpu->r[5] * cpu->r[12] + cpu->r[3]; cpu->r[3] = v;
    }
L_00184180:;
    {
        uint32_t v = cpu->r[2] * cpu->r[6] + cpu->r[3]; cpu->r[3] = v;
    }
L_00184184:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 12u, &shc); cpu->r[3] = v;
    }
L_00184188:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[3]);
    }
L_0018418c:;
    {
        cpu->r[5] = rd32(cpu->r[1] + + 0x28u);
    }
L_00184190:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x2cu);
    }
L_00184194:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x24u);
    }
L_00184198:;
    {
        uint32_t v = cpu->r[5] * cpu->r[4]; cpu->r[4] = v;
    }
L_0018419c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[12] + cpu->r[4]; cpu->r[12] = v;
    }
L_001841a0:;
    {
        uint32_t v = cpu->r[3] * cpu->r[6] + cpu->r[12]; cpu->r[6] = v;
    }
L_001841a4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[8], shifter(cpu->r[6], 1, 12u, &shc), 0, 0);
    }
L_001841a8:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[6]);
    }
L_001841ac:;
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
L_001841b0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9CMatrix4410GetProductEPKS_S1_ @ 001841b4 (arm) */
void fn_001841b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001841b4:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_001841b8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
    }
L_001841bc:;
    {
        cpu->r[5] = rd32(cpu->r[1]);
    }
L_001841c0:;
    {
        cpu->r[6] = rd32(cpu->r[2] + + 0x4u);
    }
L_001841c4:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0xcu);
    }
L_001841c8:;
    {
        uint32_t v = cpu->r[5] * cpu->r[3]; cpu->r[5] = v;
    }
L_001841cc:;
    {
        cpu->r[4] = rd32(cpu->r[2] + + 0x8u);
    }
L_001841d0:;
    {
        uint32_t v = cpu->r[12] * cpu->r[6] + cpu->r[5]; cpu->r[12] = v;
    }
L_001841d4:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x18u);
    }
L_001841d8:;
    {
        uint32_t v = cpu->r[3] * cpu->r[4] + cpu->r[12]; cpu->r[3] = v;
    }
L_001841dc:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 12u, &shc); cpu->r[3] = v;
    }
L_001841e0:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_001841e4:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_001841e8:;
    {
        cpu->r[6] = rd32(cpu->r[2] + + 0xcu);
    }
L_001841ec:;
    {
        cpu->r[7] = rd32(cpu->r[2] + + 0x10u);
    }
L_001841f0:;
    {
        cpu->r[4] = rd32(cpu->r[1] + + 0xcu);
    }
L_001841f4:;
    {
        uint32_t v = cpu->r[6] * cpu->r[3]; cpu->r[6] = v;
    }
L_001841f8:;
    {
        cpu->r[5] = rd32(cpu->r[2] + + 0x14u);
    }
L_001841fc:;
    {
        uint32_t v = cpu->r[4] * cpu->r[7] + cpu->r[6]; cpu->r[4] = v;
    }
L_00184200:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x18u);
    }
L_00184204:;
    {
        uint32_t v = cpu->r[12] * cpu->r[5] + cpu->r[4]; cpu->r[12] = v;
    }
L_00184208:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 12u, &shc); cpu->r[12] = v;
    }
L_0018420c:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[12]);
    }
L_00184210:;
    {
        cpu->r[5] = rd32(cpu->r[2] + + 0x18u);
    }
L_00184214:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0xcu);
    }
L_00184218:;
    {
        cpu->r[4] = rd32(cpu->r[2] + + 0x1cu);
    }
L_0018421c:;
    {
        uint32_t v = cpu->r[5] * cpu->r[3]; cpu->r[5] = v;
    }
L_00184220:;
    {
        cpu->r[6] = rd32(cpu->r[2] + + 0x20u);
    }
L_00184224:;
    {
        uint32_t v = cpu->r[4] * cpu->r[12] + cpu->r[5]; cpu->r[5] = v;
    }
L_00184228:;
    {
        cpu->r[4] = rd32(cpu->r[1] + + 0x18u);
    }
L_0018422c:;
    {
        uint32_t v = cpu->r[4] * cpu->r[6] + cpu->r[5]; cpu->r[4] = v;
    }
L_00184230:;
    {
        uint32_t v = shifter(cpu->r[4], 1, 12u, &shc); cpu->r[4] = v;
    }
L_00184234:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[4]);
    }
L_00184238:;
    {
        cpu->r[6] = rd32(cpu->r[2] + + 0x24u);
    }
L_0018423c:;
    {
        cpu->r[4] = rd32(cpu->r[2] + + 0x28u);
    }
L_00184240:;
    {
        cpu->r[5] = rd32(cpu->r[2] + + 0x2cu);
    }
L_00184244:;
    {
        uint32_t v = cpu->r[6] * cpu->r[3]; cpu->r[3] = v;
    }
L_00184248:;
    {
        cpu->r[6] = rd32(cpu->r[1] + + 0x18u);
    }
L_0018424c:;
    {
        uint32_t v = cpu->r[4] * cpu->r[12] + cpu->r[3]; cpu->r[3] = v;
    }
L_00184250:;
    {
        cpu->r[4] = rd32(cpu->r[1] + + 0x24u);
    }
L_00184254:;
    {
        uint32_t v = cpu->r[6] * cpu->r[5] + cpu->r[3]; cpu->r[12] = v;
    }
L_00184258:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], shifter(cpu->r[12], 1, 12u, &shc), 0, 0);
    }
L_0018425c:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[12]);
    }
L_00184260:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_00184264:;
    {
        cpu->r[5] = rd32(cpu->r[1] + + 0x4u);
    }
L_00184268:;
    {
        cpu->r[6] = rd32(cpu->r[2] + + 0x4u);
    }
L_0018426c:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x10u);
    }
L_00184270:;
    {
        uint32_t v = cpu->r[5] * cpu->r[3]; cpu->r[5] = v;
    }
L_00184274:;
    {
        cpu->r[4] = rd32(cpu->r[2] + + 0x8u);
    }
L_00184278:;
    {
        uint32_t v = cpu->r[12] * cpu->r[6] + cpu->r[5]; cpu->r[12] = v;
    }
L_0018427c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x1cu);
    }
L_00184280:;
    {
        uint32_t v = cpu->r[3] * cpu->r[4] + cpu->r[12]; cpu->r[3] = v;
    }
L_00184284:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 12u, &shc); cpu->r[3] = v;
    }
L_00184288:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_0018428c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x4u);
    }
L_00184290:;
    {
        cpu->r[6] = rd32(cpu->r[2] + + 0xcu);
    }
L_00184294:;
    {
        cpu->r[7] = rd32(cpu->r[2] + + 0x10u);
    }
L_00184298:;
    {
        cpu->r[4] = rd32(cpu->r[1] + + 0x10u);
    }
L_0018429c:;
    {
        uint32_t v = cpu->r[6] * cpu->r[3]; cpu->r[6] = v;
    }
L_001842a0:;
    {
        cpu->r[5] = rd32(cpu->r[2] + + 0x14u);
    }
L_001842a4:;
    {
        uint32_t v = cpu->r[4] * cpu->r[7] + cpu->r[6]; cpu->r[4] = v;
    }
L_001842a8:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x1cu);
    }
L_001842ac:;
    {
        uint32_t v = cpu->r[12] * cpu->r[5] + cpu->r[4]; cpu->r[12] = v;
    }
L_001842b0:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 12u, &shc); cpu->r[12] = v;
    }
L_001842b4:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[12]);
    }
L_001842b8:;
    {
        cpu->r[5] = rd32(cpu->r[2] + + 0x18u);
    }
L_001842bc:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x10u);
    }
L_001842c0:;
    {
        cpu->r[4] = rd32(cpu->r[2] + + 0x1cu);
    }
L_001842c4:;
    {
        uint32_t v = cpu->r[5] * cpu->r[3]; cpu->r[5] = v;
    }
L_001842c8:;
    {
        cpu->r[6] = rd32(cpu->r[2] + + 0x20u);
    }
L_001842cc:;
    {
        uint32_t v = cpu->r[4] * cpu->r[12] + cpu->r[5]; cpu->r[5] = v;
    }
L_001842d0:;
    {
        cpu->r[4] = rd32(cpu->r[1] + + 0x1cu);
    }
L_001842d4:;
    {
        uint32_t v = cpu->r[4] * cpu->r[6] + cpu->r[5]; cpu->r[4] = v;
    }
L_001842d8:;
    {
        uint32_t v = shifter(cpu->r[4], 1, 12u, &shc); cpu->r[4] = v;
    }
L_001842dc:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[4]);
    }
L_001842e0:;
    {
        cpu->r[6] = rd32(cpu->r[2] + + 0x24u);
    }
L_001842e4:;
    {
        cpu->r[4] = rd32(cpu->r[2] + + 0x28u);
    }
L_001842e8:;
    {
        cpu->r[5] = rd32(cpu->r[2] + + 0x2cu);
    }
L_001842ec:;
    {
        uint32_t v = cpu->r[6] * cpu->r[3]; cpu->r[3] = v;
    }
L_001842f0:;
    {
        cpu->r[6] = rd32(cpu->r[1] + + 0x1cu);
    }
L_001842f4:;
    {
        uint32_t v = cpu->r[4] * cpu->r[12] + cpu->r[3]; cpu->r[3] = v;
    }
L_001842f8:;
    {
        cpu->r[4] = rd32(cpu->r[1] + + 0x28u);
    }
L_001842fc:;
    {
        uint32_t v = cpu->r[6] * cpu->r[5] + cpu->r[3]; cpu->r[12] = v;
    }
L_00184300:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], shifter(cpu->r[12], 1, 12u, &shc), 0, 0);
    }
L_00184304:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[12]);
    }
L_00184308:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_0018430c:;
    {
        cpu->r[5] = rd32(cpu->r[1] + + 0x8u);
    }
L_00184310:;
    {
        cpu->r[6] = rd32(cpu->r[2] + + 0x4u);
    }
L_00184314:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x14u);
    }
L_00184318:;
    {
        uint32_t v = cpu->r[5] * cpu->r[3]; cpu->r[5] = v;
    }
L_0018431c:;
    {
        cpu->r[4] = rd32(cpu->r[2] + + 0x8u);
    }
L_00184320:;
    {
        uint32_t v = cpu->r[12] * cpu->r[6] + cpu->r[5]; cpu->r[12] = v;
    }
L_00184324:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x20u);
    }
L_00184328:;
    {
        uint32_t v = cpu->r[3] * cpu->r[4] + cpu->r[12]; cpu->r[3] = v;
    }
L_0018432c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 12u, &shc); cpu->r[3] = v;
    }
L_00184330:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_00184334:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x8u);
    }
L_00184338:;
    {
        cpu->r[6] = rd32(cpu->r[2] + + 0xcu);
    }
L_0018433c:;
    {
        cpu->r[7] = rd32(cpu->r[2] + + 0x10u);
    }
L_00184340:;
    {
        cpu->r[4] = rd32(cpu->r[1] + + 0x14u);
    }
L_00184344:;
    {
        uint32_t v = cpu->r[6] * cpu->r[3]; cpu->r[6] = v;
    }
L_00184348:;
    {
        cpu->r[5] = rd32(cpu->r[2] + + 0x14u);
    }
L_0018434c:;
    {
        uint32_t v = cpu->r[4] * cpu->r[7] + cpu->r[6]; cpu->r[4] = v;
    }
L_00184350:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x20u);
    }
L_00184354:;
    {
        uint32_t v = cpu->r[12] * cpu->r[5] + cpu->r[4]; cpu->r[12] = v;
    }
L_00184358:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 12u, &shc); cpu->r[12] = v;
    }
L_0018435c:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[12]);
    }
L_00184360:;
    {
        cpu->r[5] = rd32(cpu->r[2] + + 0x18u);
    }
L_00184364:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x14u);
    }
L_00184368:;
    {
        cpu->r[4] = rd32(cpu->r[2] + + 0x1cu);
    }
L_0018436c:;
    {
        uint32_t v = cpu->r[5] * cpu->r[3]; cpu->r[5] = v;
    }
L_00184370:;
    {
        cpu->r[6] = rd32(cpu->r[2] + + 0x20u);
    }
L_00184374:;
    {
        uint32_t v = cpu->r[4] * cpu->r[12] + cpu->r[5]; cpu->r[5] = v;
    }
L_00184378:;
    {
        cpu->r[4] = rd32(cpu->r[1] + + 0x20u);
    }
L_0018437c:;
    {
        uint32_t v = cpu->r[4] * cpu->r[6] + cpu->r[5]; cpu->r[4] = v;
    }
L_00184380:;
    {
        uint32_t v = shifter(cpu->r[4], 1, 12u, &shc); cpu->r[4] = v;
    }
L_00184384:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[4]);
    }
L_00184388:;
    {
        cpu->r[5] = rd32(cpu->r[2] + + 0x24u);
    }
L_0018438c:;
    {
        cpu->r[6] = rd32(cpu->r[2] + + 0x28u);
    }
L_00184390:;
    {
        cpu->r[4] = rd32(cpu->r[2] + + 0x2cu);
    }
L_00184394:;
    {
        uint32_t v = cpu->r[5] * cpu->r[3]; cpu->r[3] = v;
    }
L_00184398:;
    {
        cpu->r[5] = rd32(cpu->r[1] + + 0x20u);
    }
L_0018439c:;
    {
        uint32_t v = cpu->r[6] * cpu->r[12] + cpu->r[3]; cpu->r[3] = v;
    }
L_001843a0:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x2cu);
    }
L_001843a4:;
    {
        uint32_t v = cpu->r[5] * cpu->r[4] + cpu->r[3]; cpu->r[12] = v;
    }
L_001843a8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], shifter(cpu->r[12], 1, 12u, &shc), 0, 0);
    }
L_001843ac:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[12]);
    }
L_001843b0:;
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
L_001843b4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9CMatrix4415InvRotateVectorEPK8Vector4sPS0_ @ 001843b8 (arm) */
void fn_001843b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001843b8:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
    }
L_001843bc:;
    {
        cpu->r[4] = rd32(cpu->r[1]);
    }
L_001843c0:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[5] = v0;
        cpu->r[6] = v1;
    }
L_001843c4:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x4u);
    }
L_001843c8:;
    {
        uint32_t v = cpu->r[5] * cpu->r[4]; cpu->r[5] = v;
    }
L_001843cc:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x8u);
    }
L_001843d0:;
    {
        uint32_t v = cpu->r[6] * cpu->r[12] + cpu->r[5]; cpu->r[1] = v;
    }
L_001843d4:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x8u);
    }
L_001843d8:;
    {
        uint32_t v = cpu->r[5] * cpu->r[3] + cpu->r[1]; cpu->r[1] = v;
    }
L_001843dc:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 12u, &shc); cpu->r[1] = v;
    }
L_001843e0:;
    {
        wr32(cpu->r[2], cpu->r[1]);
    }
L_001843e4:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0xcu);
    }
L_001843e8:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x10u);
    }
L_001843ec:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x14u);
    }
L_001843f0:;
    {
        uint32_t v = cpu->r[1] * cpu->r[4]; cpu->r[1] = v;
    }
L_001843f4:;
    {
        uint32_t v = cpu->r[6] * cpu->r[12] + cpu->r[1]; cpu->r[1] = v;
    }
L_001843f8:;
    {
        uint32_t v = cpu->r[5] * cpu->r[3] + cpu->r[1]; cpu->r[1] = v;
    }
L_001843fc:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 12u, &shc); cpu->r[1] = v;
    }
L_00184400:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[1]);
    }
L_00184404:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x18u);
    }
L_00184408:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x1cu);
    }
L_0018440c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x20u);
    }
L_00184410:;
    {
        uint32_t v = cpu->r[6] * cpu->r[4]; cpu->r[4] = v;
    }
L_00184414:;
    {
        uint32_t v = cpu->r[5] * cpu->r[12] + cpu->r[4]; cpu->r[12] = v;
    }
L_00184418:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3] + cpu->r[12]; cpu->r[3] = v;
    }
L_0018441c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 12u, &shc); cpu->r[3] = v;
    }
L_00184420:;
    {
        wr32(cpu->r[2] + + 0x8u, cpu->r[3]);
    }
L_00184424:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[13] += 12u;
    }
L_00184428:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9CMatrix448DefScaleEi @ 0018442c (arm) */
void fn_0018442c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018442c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00184430:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00184434:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00184438:;
    {
        cpu->r[14] = 0x0018443cu; fn_00183e14(cpu);
    }
L_0018443c:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[5]);
    }
L_00184440:;
    {
        wr32(cpu->r[4], cpu->r[5]);
    }
L_00184444:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[5]);
    }
L_00184448:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018444cu)) return;
    }
}

/* _ZN9CMatrix445ScaleEi @ 0018444c (arm) */
void fn_0018444c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018444c:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 12u, &shc); cpu->r[1] = v;
    }
L_00184450:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_00184454:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_00184458:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0018445c:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 8u, &shc); cpu->r[1] = v;
    }
L_00184460:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_00184464:;
    {
        cpu->r[4] = cpu->r[13];
    }
L_00184468:;
    {
        cpu->r[14] = 0x0018446cu; fn_0018442c(cpu);
    }
L_0018446c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00184470:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_00184474:;
    {
        cpu->r[14] = 0x00184478u; fn_00183e50(cpu);
    }
L_00184478:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_0018447c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00184480u)) return;
    }
}

/* _ZN9CMatrix4412DefTranslateEiii @ 00184480 (arm) */
void fn_00184480(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00184480:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00184484:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00184488:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0018448c:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_00184490:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_00184494:;
    {
        cpu->r[14] = 0x00184498u; fn_00183e14(cpu);
    }
L_00184498:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[7]);
    }
L_0018449c:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[5]);
    }
L_001844a0:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[6]);
    }
L_001844a4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001844a8u)) return;
    }
}

/* _ZN9CMatrix449TranslateEiii @ 001844a8 (arm) */
void fn_001844a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001844a8:;
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
L_001844ac:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[7] = v0;
        cpu->r[11] = v1;
    }
L_001844b0:;
    {
        cpu->r[10] = rd32(cpu->r[0] + + 0x8u);
    }
L_001844b4:;
    {
        cpu->r[8] = rd32(cpu->r[0] + + 0xcu);
    }
L_001844b8:;
    {
        cpu->r[9] = rd32(cpu->r[0] + + 0x14u);
    }
L_001844bc:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x10u);
    }
L_001844c0:;
    {
        uint32_t v = cpu->r[10] * cpu->r[1]; cpu->r[10] = v;
    }
L_001844c4:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x18u);
    }
L_001844c8:;
    {
        uint32_t v = cpu->r[7] * cpu->r[1]; cpu->r[7] = v;
    }
L_001844cc:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x1cu);
    }
L_001844d0:;
    {
        uint32_t v = cpu->r[11] * cpu->r[1]; cpu->r[1] = v;
    }
L_001844d4:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x20u);
    }
L_001844d8:;
    {
        uint32_t v = cpu->r[9] * cpu->r[2] + cpu->r[10]; cpu->r[10] = v;
    }
L_001844dc:;
    {
        cpu->r[11] = rd32(cpu->r[0] + + 0x24u);
    }
L_001844e0:;
    {
        uint32_t v = cpu->r[8] * cpu->r[2] + cpu->r[7]; cpu->r[7] = v;
    }
L_001844e4:;
    {
        cpu->r[9] = rd32(cpu->r[0] + + 0x28u);
    }
L_001844e8:;
    {
        uint32_t v = cpu->r[6] * cpu->r[2] + cpu->r[1]; cpu->r[1] = v;
    }
L_001844ec:;
    {
        cpu->r[8] = rd32(cpu->r[0] + + 0x2cu);
    }
L_001844f0:;
    {
        uint32_t v = cpu->r[5] * cpu->r[3] + cpu->r[10]; cpu->r[10] = v;
    }
L_001844f4:;
    {
        uint32_t v = cpu->r[4] * cpu->r[3] + cpu->r[7]; cpu->r[4] = v;
    }
L_001844f8:;
    {
        uint32_t v = cpu->r[12] * cpu->r[3] + cpu->r[1]; cpu->r[3] = v;
    }
L_001844fc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[8], shifter(cpu->r[10], 1, 12u, &shc), 0, 0);
    }
L_00184500:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[10]);
    }
L_00184504:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], shifter(cpu->r[4], 1, 12u, &shc), 0, 0);
    }
L_00184508:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[11]);
    }
L_0018450c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], shifter(cpu->r[3], 1, 12u, &shc), 0, 0);
    }
L_00184510:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[3]);
    }
L_00184514:;
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
L_00184518:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9CMatrix4410DefRotateXEi @ 0018451c (arm) */
void fn_0018451c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018451c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000200u, 0, 0);
    }
L_00184520:;
    {
        cpu->r[3] = rd32(0x00184528u + + 0x80u);
    }
L_00184524:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 21u, &shc); cpu->r[1] = v;
    }
L_00184528:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0018452c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 21u, &shc); cpu->r[2] = v;
    }
L_00184530:;
    {
        cpu->r[3] = add_flags(cpu, 0x00184538u, cpu->r[3], 0, 0);
    }
L_00184534:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 21u, &shc); cpu->r[1] = v;
    }
L_00184538:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[12]);
    }
L_0018453c:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 21u, &shc); cpu->r[2] = v;
    }
L_00184540:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[12]);
    }
L_00184544:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_00184548:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_0018454c:;
    {
        cpu->r[2] = 0x00001000u;
    }
L_00184550:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00184554:;
    {
        cpu->r[2] = (uint32_t)((int16_t)cpu->r[1]);
    }
L_00184558:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[12]);
    }
L_0018455c:;
    {
        cpu->r[3] = (uint32_t)((int16_t)cpu->r[3]);
    }
L_00184560:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x00000003u, 0, 0);
    }
L_00184564:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_00184568:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[12]);
    }
L_0018456c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[1];
        }
    }
L_00184570:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000003u, 0, 0);
    }
L_00184574:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_00184578:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[12]);
    }
L_0018457c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[1];
        }
    }
L_00184580:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[2] = v;
    }
L_00184584:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[12]);
    }
L_00184588:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_0018458c:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_00184590:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[3]);
    }
L_00184594:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000000u, cpu->r[2], 1, 0);
    }
L_00184598:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_0018459c:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[2]);
    }
L_001845a0:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[12]);
    }
L_001845a4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9CMatrix4410DefRotateYEi @ 001845ac (arm) */
void fn_001845ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001845ac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000200u, 0, 0);
    }
L_001845b0:;
    {
        cpu->r[3] = rd32(0x001845b8u + + 0x80u);
    }
L_001845b4:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 21u, &shc); cpu->r[1] = v;
    }
L_001845b8:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001845bc:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 21u, &shc); cpu->r[2] = v;
    }
L_001845c0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001845c8u, cpu->r[3], 0, 0);
    }
L_001845c4:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 21u, &shc); cpu->r[1] = v;
    }
L_001845c8:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[12]);
    }
L_001845cc:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 21u, &shc); cpu->r[2] = v;
    }
L_001845d0:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[12]);
    }
L_001845d4:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_001845d8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001845dc:;
    {
        cpu->r[2] = 0x00001000u;
    }
L_001845e0:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_001845e4:;
    {
        cpu->r[2] = (uint32_t)((int16_t)cpu->r[1]);
    }
L_001845e8:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[12]);
    }
L_001845ec:;
    {
        cpu->r[3] = (uint32_t)((int16_t)cpu->r[3]);
    }
L_001845f0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x00000003u, 0, 0);
    }
L_001845f4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_001845f8:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[12]);
    }
L_001845fc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[1];
        }
    }
L_00184600:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000003u, 0, 0);
    }
L_00184604:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_00184608:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[12]);
    }
L_0018460c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[1];
        }
    }
L_00184610:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[2] = v;
    }
L_00184614:;
    {
        cpu->r[1] = sub_flags(cpu, 0x00000000u, cpu->r[2], 1, 0);
    }
L_00184618:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[2]);
    }
L_0018461c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_00184620:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[1]);
    }
L_00184624:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[3]);
    }
L_00184628:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_0018462c:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[12]);
    }
L_00184630:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[12]);
    }
L_00184634:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9CMatrix4410DefRotateZEi @ 0018463c (arm) */
void fn_0018463c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018463c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000200u, 0, 0);
    }
L_00184640:;
    {
        cpu->r[3] = rd32(0x00184648u + + 0x80u);
    }
L_00184644:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 21u, &shc); cpu->r[1] = v;
    }
L_00184648:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0018464c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 21u, &shc); cpu->r[2] = v;
    }
L_00184650:;
    {
        cpu->r[3] = add_flags(cpu, 0x00184658u, cpu->r[3], 0, 0);
    }
L_00184654:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 21u, &shc); cpu->r[1] = v;
    }
L_00184658:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[12]);
    }
L_0018465c:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 21u, &shc); cpu->r[2] = v;
    }
L_00184660:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[12]);
    }
L_00184664:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[1], 2, 2u, &shc));
    }
L_00184668:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_0018466c:;
    {
        cpu->r[2] = 0x00001000u;
    }
L_00184670:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[2]);
    }
L_00184674:;
    {
        cpu->r[2] = (uint32_t)((int16_t)cpu->r[1]);
    }
L_00184678:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[12]);
    }
L_0018467c:;
    {
        cpu->r[3] = (uint32_t)((int16_t)cpu->r[3]);
    }
L_00184680:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x00000003u, 0, 0);
    }
L_00184684:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_00184688:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[12]);
    }
L_0018468c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[1];
        }
    }
L_00184690:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000003u, 0, 0);
    }
L_00184694:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_00184698:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[12]);
    }
L_0018469c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[1];
        }
    }
L_001846a0:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[2] = v;
    }
L_001846a4:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[12]);
    }
L_001846a8:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001846ac:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_001846b0:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_001846b4:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000000u, cpu->r[2], 1, 0);
    }
L_001846b8:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_001846bc:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_001846c0:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[12]);
    }
L_001846c4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z9Componentiiiii @ 001846cc (arm) */
void fn_001846cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001846cc:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1]; cpu->r[1] = v;
    }
L_001846d0:;
    {
        cpu->r[0] = rd32(cpu->r[13]);
    }
L_001846d4:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00001000u, cpu->r[3], 1, 0);
    }
L_001846d8:;
    {
        uint32_t v = cpu->r[2] * cpu->r[0]; cpu->r[0] = v;
    }
L_001846dc:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 12u, &shc); cpu->r[1] = v;
    }
L_001846e0:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[3] = v;
    }
L_001846e4:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 12u, &shc); cpu->r[0] = v;
    }
L_001846e8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 1, 12u, &shc), 0, 0);
    }
L_001846ec:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9CMatrix447RotateXEi @ 001846f0 (arm) */
void fn_001846f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001846f0:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_001846f4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_001846f8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001846fc:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_00184700:;
    {
        cpu->r[14] = 0x00184704u; fn_0018451c(cpu);
    }
L_00184704:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00184708:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_0018470c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00184710:;
    {
        cpu->r[4] = cpu->r[13];
    }
L_00184714:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_00184718:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_0018471c:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_00184720:;
    {
        cpu->r[14] = 0x00184724u; fn_00183e50(cpu);
    }
L_00184724:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_00184728:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0018472cu)) return;
    }
}

/* _ZN9CMatrix447RotateYEi @ 0018472c (arm) */
void fn_0018472c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018472c:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_00184730:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_00184734:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00184738:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_0018473c:;
    {
        cpu->r[14] = 0x00184740u; fn_001845ac(cpu);
    }
L_00184740:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00184744:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_00184748:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0018474c:;
    {
        cpu->r[4] = cpu->r[13];
    }
L_00184750:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_00184754:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_00184758:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_0018475c:;
    {
        cpu->r[14] = 0x00184760u; fn_00183e50(cpu);
    }
L_00184760:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_00184764:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00184768u)) return;
    }
}

/* _ZN9CMatrix447RotateZEi @ 00184768 (arm) */
void fn_00184768(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00184768:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_0018476c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_00184770:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00184774:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_00184778:;
    {
        cpu->r[14] = 0x0018477cu; fn_0018463c(cpu);
    }
L_0018477c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00184780:;
    {
        cpu->r[1] = cpu->r[13];
    }
L_00184784:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00184788:;
    {
        cpu->r[4] = cpu->r[13];
    }
L_0018478c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_00184790:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_00184794:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_00184798:;
    {
        cpu->r[14] = 0x0018479cu; fn_00183e50(cpu);
    }
L_0018479c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_001847a0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001847a4u)) return;
    }
}

/* _ZN9CMatrix449TransposeEv @ 001847a4 (arm) */
void fn_001847a4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001847a4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
    }
L_001847a8:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0xcu);
    }
L_001847ac:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x4u);
    }
L_001847b0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x18u);
    }
L_001847b4:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x8u);
    }
L_001847b8:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x1cu);
    }
L_001847bc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x14u);
    }
L_001847c0:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[5]);
    }
L_001847c4:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[4]);
    }
L_001847c8:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[12]);
    }
L_001847cc:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[1]);
    }
L_001847d0:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_001847d4:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[3]);
    }
L_001847d8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[13] += 8u;
    }
L_001847dc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9CMatrix4411ProjectToXZEv @ 001847e0 (arm) */
void fn_001847e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001847e0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001847e4:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_001847e8:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[3]);
    }
L_001847ec:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_001847f0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK9CMatrix44eqERKS_ @ 001847f4 (arm) */
void fn_001847f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001847f4:;
    {
        cpu->r[2] = rd32(cpu->r[0]);
    }
L_001847f8:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_001847fc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00184800:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018482c;
        }
    }
L_00184804:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00184808:;
    {
        cpu->r[12] = rd32(cpu->r[0] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_0018480c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_00184810:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00184814:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_00184818:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0018482c;
        }
    }
L_0018481c:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000cu, 1, 1);
    }
L_00184820:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00184808;
        }
    }
L_00184824:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00184828:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0018482c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00184830:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN9CMatrix449TranslateEPK8Vector4s @ 00184834 (arm) */
void fn_00184834(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00184834:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00184838:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x8u);
    }
L_0018483c:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00184840:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_00184844:;
    {
        return fn_001844a8(cpu);
    }
}

/* _ZN9CMatrix449TranslateERK8Vector4s @ 00184848 (arm) */
void fn_00184848(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00184848:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0018484c:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x8u);
    }
L_00184850:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00184854:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_00184858:;
    {
        return fn_001844a8(cpu);
    }
}

/* _ZN11CTrafficCar17CastToCTrafficCarEv @ 0018485c (arm) */
void fn_0018485c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018485c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK11CTrafficCar17CastToCTrafficCarEv @ 00184860 (arm) */
void fn_00184860(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00184860:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK11CTrafficCar10GetCarMassEb @ 00184864 (arm) */
void fn_00184864(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00184864:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x54cu);
    }
L_00184868:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0018486c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00184870:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00001388u;
        }
    }
L_00184874:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00184878:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_0018487c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00002710u;
        }
    }
L_00184880:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = rd32(cpu->r[0] + + 0x540u);
        }
    }
L_00184884:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK11CTrafficCar18GetCarBounceFactorEv @ 00184888 (arm) */
void fn_00184888(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00184888:;
    {
        cpu->r[0] = 0x000001f4u;
    }
L_0018488c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK11CTrafficCar15IsCarCollidableEv @ 00184890 (arm) */
void fn_00184890(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00184890:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x62cu);
    }
L_00184894:;
    {
        uint32_t v = cpu->r[0] & 0x00000001u; cpu->r[0] = v;
    }
L_00184898:;
    {
        uint32_t v = cpu->r[0] ^ 0x00000001u; cpu->r[0] = v;
    }
L_0018489c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK11CTrafficCar22GetCarForwardShifted12Ev @ 001848a0 (arm) */
void fn_001848a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001848a0:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x55cu);
    }
L_001848a4:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x560u);
    }
L_001848a8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001848ac:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_001848b0:;
    {
        wr32(cpu->r[0], cpu->r[12]);
    }
L_001848b4:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_001848b8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK11CTrafficCar20GetCarRightShifted12Ev @ 001848bc (arm) */
void fn_001848bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001848bc:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x55cu);
    }
L_001848c0:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x560u);
    }
L_001848c4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001848c8:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_001848cc:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000000u, cpu->r[2], 1, 0);
    }
L_001848d0:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[12]);
    }
L_001848d4:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001848d8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11CTrafficCar11AddRotationERK8Vector4s @ 001848dc (arm) */
void fn_001848dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001848dc:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x4u);
    }
L_001848e0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x550u);
    }
L_001848e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_001848e8:;
    {
        wr32(cpu->r[0] + + 0x550u, cpu->r[3]);
    }
L_001848ec:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11CTrafficCar11SetRotationERK8Vector4s @ 001848f0 (arm) */
void fn_001848f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001848f0:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x4u);
    }
L_001848f4:;
    {
        wr32(cpu->r[0] + + 0x550u, cpu->r[3]);
    }
L_001848f8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK11CTrafficCar16GetCarRotation3dEv @ 001848fc (arm) */
void fn_001848fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001848fc:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x550u);
    }
L_00184900:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00184904:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_00184908:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0018490c:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_00184910:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK11CTrafficCar16GetCarRotation2dEv @ 00184914 (arm) */
void fn_00184914(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00184914:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x550u);
    }
L_00184918:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11CTrafficCar11GetPushQuatER6Quat4s @ 0018491c (arm) */
void fn_0018491c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018491c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00184920:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00184924:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4d8u);
    }
L_00184928:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0018492c:;
    {
        cpu->r[14] = 0x00184930u; fn_00171b64(cpu);
    }
L_00184930:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x1f8u);
    }
L_00184934:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00184938:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4d8u);
    }
L_0018493c:;
    {
        cpu->r[14] = 0x00184940u; fn_00171b64(cpu);
    }
L_00184940:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00184944:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00184948:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_0018494c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1f8u);
        }
    }
L_00184950:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00184964;
        }
    }
L_00184954:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4d8u);
    }
L_00184958:;
    {
        cpu->r[14] = 0x0018495cu; fn_00171b64(cpu);
    }
L_0018495c:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00184960:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00184964:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 5u, &shc); cpu->r[2] = v;
    }
L_00184968:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 1, 0);
    }
L_0018496c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[3], 0, 0);
    }
L_00184970:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x4u);
    }
L_00184974:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x10u);
    }
L_00184978:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xcu);
    }
L_0018497c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x8u);
    }
L_00184980:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[0]);
    }
L_00184984:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[1]);
        wr32(ea + 4u, cpu->r[2]);
        wr32(ea + 8u, cpu->r[3]);
    }
L_00184988:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018498cu)) return;
    }
}

/* _ZN11CTrafficCar12GetCrashQuatER6Quat4s @ 0018498c (arm) */
void fn_0018498c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0018498c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00184990:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00184994:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4d4u);
    }
L_00184998:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0018499c:;
    {
        cpu->r[14] = 0x001849a0u; fn_00171b64(cpu);
    }
L_001849a0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x498u);
    }
L_001849a4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001849a8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001849ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001849f8;
        }
    }
L_001849b0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4d4u);
    }
L_001849b4:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x1dcu);
    }
L_001849b8:;
    {
        cpu->r[14] = 0x001849bcu; fn_00171b64(cpu);
    }
L_001849bc:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001849c0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_001849c4:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_001849c8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1dcu);
        }
    }
L_001849cc:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001849f8;
        }
    }
L_001849d0:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 5u, &shc); cpu->r[2] = v;
    }
L_001849d4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 1, 0);
    }
L_001849d8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[3], 0, 0);
    }
L_001849dc:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x4u);
    }
L_001849e0:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x10u);
    }
L_001849e4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xcu);
    }
L_001849e8:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x8u);
    }
L_001849ec:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[0]);
    }
L_001849f0:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[1]);
        wr32(ea + 4u, cpu->r[2]);
        wr32(ea + 8u, cpu->r[3]);
    }
L_001849f4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001849f8u)) return;
    }
L_001849f8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4d4u);
    }
L_001849fc:;
    {
        cpu->r[14] = 0x00184a00u; fn_00171b64(cpu);
    }
L_00184a00:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00184a04:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00184a08:;
    {
        goto L_001849d0;
    }
}

/* _ZN11CTrafficCar12ResetFactorsEv @ 00184a0c (arm) */
void fn_00184a0c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00184a0c:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_00184a10:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00184a14:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_00184a18:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00184a1c:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00184a20:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_00184a24:;
    {
        wr32(cpu->r[0] + + 0x1d0u, cpu->r[3]);
    }
L_00184a28:;
    {
        cpu->r[3] = 0x00000fffu;
    }
L_00184a2c:;
    {
        wr32(cpu->r[0] + + 0x1c4u, cpu->r[4]);
    }
L_00184a30:;
    {
        wr32(cpu->r[0] + + 0x1d8u, cpu->r[3]);
    }
L_00184a34:;
    {
        wr32(cpu->r[0] + + 0x1ccu, cpu->r[4]);
    }
L_00184a38:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_00184a3c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[4]);
    }
L_00184a40:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[4]);
    }
L_00184a44:;
    {
        cpu->r[14] = 0x00184a48u; fn_00173920(cpu);
    }
L_00184a48:;
    {
        wr32(cpu->r[5] + + 0x4c4u, cpu->r[4]);
    }
L_00184a4c:;
    {
        wr32(cpu->r[5] + + 0x484u, cpu->r[4]);
    }
L_00184a50:;
    {
        wr32(cpu->r[5] + + 0x48cu, cpu->r[4]);
    }
L_00184a54:;
    {
        wr32(cpu->r[5] + + 0x488u, cpu->r[4]);
    }
L_00184a58:;
    {
        wr32(cpu->r[5] + + 0x4a0u, cpu->r[4]);
    }
L_00184a5c:;
    {
        wr32(cpu->r[5] + + 0x4c0u, cpu->r[4]);
    }
L_00184a60:;
    {
        wr32(cpu->r[5] + + 0x4bcu, cpu->r[4]);
    }
L_00184a64:;
    {
        wr32(cpu->r[5] + + 0x4b8u, cpu->r[4]);
    }
L_00184a68:;
    {
        wr32(cpu->r[5] + + 0x4ccu, cpu->r[4]);
    }
L_00184a6c:;
    {
        wr32(cpu->r[5] + + 0x4c8u, cpu->r[4]);
    }
L_00184a70:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00184a74:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00184a78u)) return;
    }
}

/* _ZNK11CTrafficCar32GetCarForwardAndRight3dShifted12ER8Vector4sS1_ @ 00184a78 (arm) */
void fn_00184a78(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00184a78:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_00184a7c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00184a80:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_00184a84:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00184a88:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00184a8c:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x550u);
    }
L_00184a90:;
    {
        cpu->r[3] = 0x0000f000u;
    }
L_00184a94:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_00184a98:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00184a9c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xffffu << 16);
    }
L_00184aa0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[6]);
    }
L_00184aa4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00184aa8:;
    {
        cpu->r[3] = 0x00001000u;
    }
L_00184aac:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[3]);
        wr32(ea + 4u, cpu->r[6]);
    }
L_00184ab0:;
    {
        cpu->r[14] = 0x00184ab4u; fn_001850e0(cpu);
    }
L_00184ab4:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x550u);
    }
L_00184ab8:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_00184abc:;
    {
        cpu->r[14] = 0x00184ac0u; fn_001850e0(cpu);
    }
L_00184ac0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_00184ac4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[1] = v0;
        cpu->r[3] = v1;
    }
L_00184ac8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_00184acc:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[2]);
    }
L_00184ad0:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[6]);
    }
L_00184ad4:;
    {
        wr32(cpu->r[7] + + 0x8u, cpu->r[3]);
    }
L_00184ad8:;
    {
        uint32_t base = cpu->r[7];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[1]);
        wr32(ea + 4u, cpu->r[6]);
    }
L_00184adc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00184ae0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00184ae4u)) return;
    }
}

/* _ZNK11CTrafficCar22ImpactNeededToTakeDownERK8CCarBasei @ 00184ae4 (arm) */
void fn_00184ae4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00184ae4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00184ae8:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_00184aec:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00184af0:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00184af4:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_00184af8:;
    {
        cpu->r[14] = 0x00184b00u;
    }
L_00184afc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00184b00u)) return;
    }
L_00184b00:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00184b04:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00184b10;
        }
    }
L_00184b08:;
    {
        { uint32_t v = cpu->r[6] & 0x00000100u; set_nz(cpu, v); }
    }
L_00184b0c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00184b18;
        }
    }
L_00184b10:;
    {
        cpu->r[0] = (~0x80000000u);
    }
L_00184b14:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00184b18u)) return;
    }
L_00184b18:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00184b1c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00184b20:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00184b24:;
    {
        cpu->r[14] = 0x00184b2cu;
    }
L_00184b28:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x38u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00184b2cu)) return;
    }
L_00184b2c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00184b30:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00184b34:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00184b38:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00184b3c:;
    {
        cpu->r[14] = 0x00184b44u;
    }
L_00184b40:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x38u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00184b44u)) return;
    }
L_00184b44:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 1);
    }
L_00184b48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00184b88;
        }
    }
L_00184b4c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00184b50:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00184b54:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00184b58:;
    {
        cpu->r[14] = 0x00184b60u;
    }
L_00184b5c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x38u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00184b60u)) return;
    }
L_00184b60:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00184b64:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00184b68:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00184b6c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00184b70:;
    {
        cpu->r[14] = 0x00184b78u;
    }
L_00184b74:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x38u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00184b78u)) return;
    }
L_00184b78:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[0], 1, 1);
    }
L_00184b7c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00184b10;
        }
    }
L_00184b80:;
    {
        cpu->r[0] = 0x0000003cu;
    }
L_00184b84:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00184b88u)) return;
    }
L_00184b88:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00184b8c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00184b90:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00184b94:;
    {
        cpu->r[14] = 0x00184b9cu;
    }
L_00184b98:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00184b9cu)) return;
    }
L_00184b9c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00184ba0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00184ba4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00184ba8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00184bac:;
    {
        cpu->r[14] = 0x00184bb4u;
    }
L_00184bb0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00184bb4u)) return;
    }
L_00184bb4:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[0], 1, 1);
    }
L_00184bb8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00184bf4;
        }
    }
L_00184bbc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00184bc0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00184bc4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00184bc8:;
    {
        cpu->r[14] = 0x00184bd0u;
    }
L_00184bcc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00184bd0u)) return;
    }
L_00184bd0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00184bd4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00184bd8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00184bdc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00184be0:;
    {
        cpu->r[14] = 0x00184be8u;
    }
L_00184be4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00184be8u)) return;
    }
L_00184be8:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[0], 1, 1);
    }
L_00184bec:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00184b10;
        }
    }
L_00184bf0:;
    {
        goto L_00184b80;
    }
L_00184bf4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00184bf8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00184bfc:;
    {
        cpu->r[14] = 0x00184c00u; fn_000964c8(cpu);
    }
L_00184c00:;
    {
        cpu->r[0] = sub_flags(cpu, shifter(cpu->r[0], 2, 31u, &shc), cpu->r[0], 1, 0);
    }
L_00184c04:;
    {
        sub_flags(cpu, cpu->r[0], 0x0000003bu, 1, 1);
    }
L_00184c08:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00184b80;
        }
    }
L_00184c0c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00184c10:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00184c14:;
    {
        cpu->r[14] = 0x00184c18u; fn_000964c8(cpu);
    }
L_00184c18:;
    {
        cpu->r[0] = sub_flags(cpu, shifter(cpu->r[0], 2, 31u, &shc), cpu->r[0], 1, 0);
    }
L_00184c1c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00184c20u)) return;
    }
}

/* _ZN11CTrafficCarD1Ev @ 00184c20 (arm) */
void fn_00184c20(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00184c20:;
    {
        cpu->r[3] = rd32(0x00184c28u + + 0x40u);
    }
L_00184c24:;
    {
        cpu->r[2] = rd32(0x00184c2cu + + 0x40u);
    }
L_00184c28:;
    {
        cpu->r[3] = add_flags(cpu, 0x00184c30u, cpu->r[3], 0, 0);
    }
L_00184c2c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00184c30:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00184c34:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x54cu);
    }
L_00184c38:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00184c3c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00184c40:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00184c44:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_00184c48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00184c58;
        }
    }
L_00184c4c:;
    {
        cpu->r[14] = 0x00184c50u; fn_0018ba20(cpu);
    }
L_00184c50:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00184c54:;
    {
        wr32(cpu->r[4] + + 0x54cu, cpu->r[3]);
    }
L_00184c58:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00184c5c:;
    {
        cpu->r[14] = 0x00184c60u; fn_0017213c(cpu);
    }
L_00184c60:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00184c64:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00184c68u)) return;
    }
}

/* _ZN11CTrafficCarD0Ev @ 00184c70 (arm) */
void fn_00184c70(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00184c70:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00184c74:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00184c78:;
    {
        cpu->r[14] = 0x00184c7cu; fn_00184c20(cpu);
    }
L_00184c7c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00184c80:;
    {
        cpu->r[14] = 0x00184c84u; fn_0018ba20(cpu);
    }
L_00184c84:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00184c88:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00184c8cu)) return;
    }
}

/* _ZN11CTrafficCarD2Ev @ 00184c8c (arm) */
void fn_00184c8c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00184c8c:;
    {
        cpu->r[3] = rd32(0x00184c94u + + 0x40u);
    }
L_00184c90:;
    {
        cpu->r[2] = rd32(0x00184c98u + + 0x40u);
    }
L_00184c94:;
    {
        cpu->r[3] = add_flags(cpu, 0x00184c9cu, cpu->r[3], 0, 0);
    }
L_00184c98:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00184c9c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00184ca0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x54cu);
    }
L_00184ca4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00184ca8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00184cac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00184cb0:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_00184cb4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00184cc4;
        }
    }
L_00184cb8:;
    {
        cpu->r[14] = 0x00184cbcu; fn_0018ba20(cpu);
    }
L_00184cbc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00184cc0:;
    {
        wr32(cpu->r[4] + + 0x54cu, cpu->r[3]);
    }
L_00184cc4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00184cc8:;
    {
        cpu->r[14] = 0x00184cccu; fn_0017213c(cpu);
    }
L_00184ccc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00184cd0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00184cd4u)) return;
    }
}

/* _ZN11CTrafficCarC1Ev @ 00184cdc (arm) */
void fn_00184cdc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00184cdc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00184ce0:;
    {
        cpu->r[6] = rd32(0x00184ce8u + + 0x80u);
    }
L_00184ce4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00184ce8:;
    {
        cpu->r[14] = 0x00184cecu; fn_001781cc(cpu);
    }
L_00184cec:;
    {
        cpu->r[3] = rd32(0x00184cf4u + + 0x78u);
    }
L_00184cf0:;
    {
        cpu->r[6] = add_flags(cpu, 0x00184cf8u, cpu->r[6], 0, 0);
    }
L_00184cf4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00184cf8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00184cfc:;
    {
        wr32(cpu->r[4] + + 0x568u, cpu->r[5]);
    }
L_00184d00:;
    {
        cpu->r[0] = 0x0000000cu;
    }
L_00184d04:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_00184d08:;
    {
        wr8(cpu->r[4] + + 0x5u, cpu->r[2]);
    }
L_00184d0c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00184d10:;
    {
        wr32(cpu->r[4] + + 0x564u, cpu->r[5]);
    }
L_00184d14:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00184d18:;
    {
        wr32(cpu->r[4] + + 0x558u, cpu->r[5]);
    }
L_00184d1c:;
    {
        wr32(cpu->r[4] + + 0x554u, cpu->r[5]);
    }
L_00184d20:;
    {
        wr32(cpu->r[4] + + 0x550u, cpu->r[5]);
    }
L_00184d24:;
    {
        wr32(cpu->r[4] + + 0x62cu, cpu->r[5]);
    }
L_00184d28:;
    {
        wr32(cpu->r[4] + + 0x630u, cpu->r[5]);
    }
L_00184d2c:;
    {
        wr32(cpu->r[4] + + 0x634u, cpu->r[5]);
    }
L_00184d30:;
    {
        wr32(cpu->r[4] + + 0x638u, cpu->r[5]);
    }
L_00184d34:;
    {
        wr32(cpu->r[4] + + 0x63cu, cpu->r[5]);
    }
L_00184d38:;
    {
        wr32(cpu->r[4] + + 0x670u, cpu->r[5]);
    }
L_00184d3c:;
    {
        wr32(cpu->r[4] + + 0x674u, cpu->r[5]);
    }
L_00184d40:;
    {
        wr32(cpu->r[4] + + 0x678u, cpu->r[5]);
    }
L_00184d44:;
    {
        wr32(cpu->r[4] + + 0x67cu, cpu->r[5]);
    }
L_00184d48:;
    {
        cpu->r[14] = 0x00184d4cu; fn_0018ba6c(cpu);
    }
L_00184d4c:;
    {
        cpu->r[2] = (~0x000000ffu);
    }
L_00184d50:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00184d54:;
    {
        wr32(cpu->r[4] + + 0x54cu, cpu->r[0]);
    }
L_00184d58:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00184d5c:;
    {
        wr32(cpu->r[3], cpu->r[5]);
    }
L_00184d60:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_00184d64:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00184d68u)) return;
    }
}

/* _ZN11CTrafficCarC2Ev @ 00184d70 (arm) */
void fn_00184d70(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00184d70:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00184d74:;
    {
        cpu->r[6] = rd32(0x00184d7cu + + 0x80u);
    }
L_00184d78:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00184d7c:;
    {
        cpu->r[14] = 0x00184d80u; fn_001781cc(cpu);
    }
L_00184d80:;
    {
        cpu->r[3] = rd32(0x00184d88u + + 0x78u);
    }
L_00184d84:;
    {
        cpu->r[6] = add_flags(cpu, 0x00184d8cu, cpu->r[6], 0, 0);
    }
L_00184d88:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00184d8c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00184d90:;
    {
        wr32(cpu->r[4] + + 0x568u, cpu->r[5]);
    }
L_00184d94:;
    {
        cpu->r[0] = 0x0000000cu;
    }
L_00184d98:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_00184d9c:;
    {
        wr8(cpu->r[4] + + 0x5u, cpu->r[2]);
    }
L_00184da0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00184da4:;
    {
        wr32(cpu->r[4] + + 0x564u, cpu->r[5]);
    }
L_00184da8:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00184dac:;
    {
        wr32(cpu->r[4] + + 0x558u, cpu->r[5]);
    }
L_00184db0:;
    {
        wr32(cpu->r[4] + + 0x554u, cpu->r[5]);
    }
L_00184db4:;
    {
        wr32(cpu->r[4] + + 0x550u, cpu->r[5]);
    }
L_00184db8:;
    {
        wr32(cpu->r[4] + + 0x62cu, cpu->r[5]);
    }
L_00184dbc:;
    {
        wr32(cpu->r[4] + + 0x630u, cpu->r[5]);
    }
L_00184dc0:;
    {
        wr32(cpu->r[4] + + 0x634u, cpu->r[5]);
    }
L_00184dc4:;
    {
        wr32(cpu->r[4] + + 0x638u, cpu->r[5]);
    }
L_00184dc8:;
    {
        wr32(cpu->r[4] + + 0x63cu, cpu->r[5]);
    }
L_00184dcc:;
    {
        wr32(cpu->r[4] + + 0x670u, cpu->r[5]);
    }
L_00184dd0:;
    {
        wr32(cpu->r[4] + + 0x674u, cpu->r[5]);
    }
L_00184dd4:;
    {
        wr32(cpu->r[4] + + 0x678u, cpu->r[5]);
    }
L_00184dd8:;
    {
        wr32(cpu->r[4] + + 0x67cu, cpu->r[5]);
    }
L_00184ddc:;
    {
        cpu->r[14] = 0x00184de0u; fn_0018ba6c(cpu);
    }
L_00184de0:;
    {
        cpu->r[2] = (~0x000000ffu);
    }
L_00184de4:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00184de8:;
    {
        wr32(cpu->r[4] + + 0x54cu, cpu->r[0]);
    }
L_00184dec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00184df0:;
    {
        wr32(cpu->r[3], cpu->r[5]);
    }
L_00184df4:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_00184df8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00184dfcu)) return;
    }
}

/* _ZNK8Vector2s7Length2Ev @ 00184e04 (arm) */
void fn_00184e04(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00184e04:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[1] = v0;
        cpu->r[2] = v1;
    }
L_00184e08:;
    {
        uint32_t v = cpu->r[1] ^ shifter(cpu->r[1], 1, 31u, &shc); cpu->r[3] = v;
    }
L_00184e0c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[1], 1, 31u, &shc), 1, 0);
    }
L_00184e10:;
    {
        uint32_t v = cpu->r[2] ^ shifter(cpu->r[2], 1, 31u, &shc); cpu->r[0] = v;
    }
L_00184e14:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[2], 1, 31u, &shc), 1, 0);
    }
L_00184e18:;
    {
        uint32_t v = cpu->r[3] * cpu->r[3]; cpu->r[3] = v;
    }
L_00184e1c:;
    {
        uint32_t v = cpu->r[0] * cpu->r[0] + cpu->r[3]; cpu->r[0] = v;
    }
L_00184e20:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8Vector2s9RightSideERKS_S1_ @ 00184e24 (arm) */
void fn_00184e24(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00184e24:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_00184e28:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x4u);
    }
L_00184e2c:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[3] = v1;
    }
L_00184e30:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000000u, cpu->r[2], 1, 0);
    }
L_00184e34:;
    {
        uint32_t v = cpu->r[12] * cpu->r[3]; cpu->r[3] = v;
    }
L_00184e38:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2] + cpu->r[3]; cpu->r[0] = v;
    }
L_00184e3c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00184e40:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00184e44:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00184e48:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8Vector4s10NullVectorEv @ 00184e4c (arm) */
void fn_00184e4c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00184e4c:;
    {
        cpu->r[0] = rd32(0x00184e54u + + 0x4u);
    }
L_00184e50:;
    {
        cpu->r[0] = add_flags(cpu, 0x00184e58u, cpu->r[0], 0, 0);
    }
L_00184e54:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8Vector4s8LinIndexEiii @ 00184e5c (arm) */
void fn_00184e5c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00184e5c:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_00184e60:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[4] = v0;
        cpu->r[12] = v1;
    }
L_00184e64:;
    {
        uint32_t v = cpu->r[4] * cpu->r[1] + cpu->r[2]; cpu->r[2] = v;
    }
L_00184e68:;
    {
        uint32_t v = cpu->r[12] * cpu->r[2] + cpu->r[3]; cpu->r[0] = v;
    }
L_00184e6c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_00184e70:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8Vector4s5ScaleEi @ 00184e74 (arm) */
void fn_00184e74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00184e74:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[12] = v1;
    }
L_00184e78:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_00184e7c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[1]; cpu->r[2] = v;
    }
L_00184e80:;
    {
        uint32_t v = cpu->r[3] * cpu->r[1]; cpu->r[3] = v;
    }
L_00184e84:;
    {
        uint32_t v = cpu->r[12] * cpu->r[1]; cpu->r[1] = v;
    }
L_00184e88:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 12u, &shc); cpu->r[2] = v;
    }
L_00184e8c:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00184e90:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 12u, &shc); cpu->r[3] = v;
    }
L_00184e94:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_00184e98:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 12u, &shc); cpu->r[1] = v;
    }
L_00184e9c:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_00184ea0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8Vector4s6GetMinEPKS_ @ 00184ea4 (arm) */
void fn_00184ea4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00184ea4:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_00184ea8:;
    {
        cpu->r[2] = rd32(cpu->r[0]);
    }
L_00184eac:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00184eb0:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[0], cpu->r[3]);
        }
    }
L_00184eb4:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x4u);
    }
L_00184eb8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x4u);
    }
L_00184ebc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00184ec0:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
        }
    }
L_00184ec4:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x8u);
    }
L_00184ec8:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8u);
    }
L_00184ecc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00184ed0:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
        }
    }
L_00184ed4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8Vector4s6GetMaxEPKS_ @ 00184ed8 (arm) */
void fn_00184ed8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00184ed8:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_00184edc:;
    {
        cpu->r[2] = rd32(cpu->r[0]);
    }
L_00184ee0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00184ee4:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0], cpu->r[3]);
        }
    }
L_00184ee8:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x4u);
    }
L_00184eec:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x4u);
    }
L_00184ef0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00184ef4:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
        }
    }
L_00184ef8:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x8u);
    }
L_00184efc:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8u);
    }
L_00184f00:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00184f04:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
        }
    }
L_00184f08:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8Vector4s10CrossShiftES_ @ 00184f0c (arm) */
void fn_00184f0c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00184f0c:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
    }
L_00184f10:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x4u);
    }
L_00184f14:;
    {
        uint32_t base = cpu->r[2];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
    }
L_00184f18:;
    {
        cpu->r[6] = rd32(cpu->r[1] + + 0x8u);
    }
L_00184f1c:;
    {
        uint32_t v = cpu->r[12] * cpu->r[5]; cpu->r[12] = v;
    }
L_00184f20:;
    {
        uint32_t v = cpu->r[12] - cpu->r[6] * cpu->r[4]; cpu->r[12] = v;
    }
L_00184f24:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 12u, &shc); cpu->r[12] = v;
    }
L_00184f28:;
    {
        wr32(cpu->r[0], cpu->r[12]);
    }
L_00184f2c:;
    {
        cpu->r[12] = rd32(cpu->r[2]);
    }
L_00184f30:;
    {
        cpu->r[4] = rd32(cpu->r[1]);
    }
L_00184f34:;
    {
        uint32_t v = cpu->r[6] * cpu->r[12]; cpu->r[6] = v;
    }
L_00184f38:;
    {
        uint32_t v = cpu->r[6] - cpu->r[5] * cpu->r[4]; cpu->r[5] = v;
    }
L_00184f3c:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 12u, &shc); cpu->r[5] = v;
    }
L_00184f40:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[5]);
    }
L_00184f44:;
    {
        cpu->r[5] = rd32(cpu->r[2] + + 0x4u);
    }
L_00184f48:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x4u);
    }
L_00184f4c:;
    {
        uint32_t v = cpu->r[5] * cpu->r[4]; cpu->r[4] = v;
    }
L_00184f50:;
    {
        uint32_t v = cpu->r[4] - cpu->r[2] * cpu->r[12]; cpu->r[12] = v;
    }
L_00184f54:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 12u, &shc); cpu->r[12] = v;
    }
L_00184f58:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[12]);
    }
L_00184f5c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[13] += 12u;
    }
L_00184f60:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK8Vector4s11GetMainAxisEv @ 00184f64 (arm) */
void fn_00184f64(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00184f64:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00184f68:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x4u);
    }
L_00184f6c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_00184f70:;
    {
        uint32_t v = cpu->r[3] ^ shifter(cpu->r[3], 1, 31u, &shc); cpu->r[2] = v;
    }
L_00184f74:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[3], 1, 31u, &shc), 1, 0);
    }
L_00184f78:;
    {
        uint32_t v = cpu->r[1] ^ shifter(cpu->r[1], 1, 31u, &shc); cpu->r[3] = v;
    }
L_00184f7c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[1], 1, 31u, &shc), 1, 0);
    }
L_00184f80:;
    {
        uint32_t v = cpu->r[0] ^ shifter(cpu->r[0], 1, 31u, &shc); cpu->r[1] = v;
    }
L_00184f84:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], shifter(cpu->r[0], 1, 31u, &shc), 1, 0);
    }
L_00184f88:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00184f8c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00184fa4;
        }
    }
L_00184f90:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_00184f94:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00184f98:;
    {
        if (cond_test(cpu, 11)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00184f9c:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_00184fa0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00184fa4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00184fa8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00184fac:;
    {
        if (cond_test(cpu, 11)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00184fb0:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_00184fb4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8Vector4s11SelfRotateYEi @ 00184fb8 (arm) */
void fn_00184fb8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00184fb8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000200u, 0, 0);
    }
L_00184fbc:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 21u, &shc); cpu->r[1] = v;
    }
L_00184fc0:;
    {
        cpu->r[3] = rd32(0x00184fc8u + + 0x7cu);
    }
L_00184fc4:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 21u, &shc); cpu->r[2] = v;
    }
L_00184fc8:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 21u, &shc); cpu->r[1] = v;
    }
L_00184fcc:;
    {
        cpu->r[3] = add_flags(cpu, 0x00184fd4u, cpu->r[3], 0, 0);
    }
L_00184fd0:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_00184fd4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00184fd8:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 21u, &shc); cpu->r[2] = v;
    }
L_00184fdc:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_00184fe0:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[1] + + 0x10u);
    }
L_00184fe4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_00184fe8:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x8u);
    }
L_00184fec:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00184ff0:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[2] + + 0x10u);
    }
L_00184ff4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000003u, 0, 0);
    }
L_00184ff8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = cpu->r[2];
        }
    }
L_00184ffc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000003u, 0, 0);
    }
L_00185000:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00185004:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 2u, &shc); cpu->r[1] = v;
    }
L_00185008:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_0018500c:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000000u, cpu->r[1], 1, 0);
    }
L_00185010:;
    {
        uint32_t v = cpu->r[4] * cpu->r[1]; cpu->r[1] = v;
    }
L_00185014:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_00185018:;
    {
        uint32_t v = cpu->r[4] * cpu->r[3]; cpu->r[4] = v;
    }
L_0018501c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000800u, 0, 0);
    }
L_00185020:;
    {
        uint32_t v = cpu->r[12] * cpu->r[2] + cpu->r[4]; cpu->r[4] = v;
    }
L_00185024:;
    {
        uint32_t v = cpu->r[12] * cpu->r[3] + cpu->r[1]; cpu->r[3] = v;
    }
L_00185028:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000800u, 0, 0);
    }
L_0018502c:;
    {
        uint32_t v = shifter(cpu->r[4], 1, 12u, &shc); cpu->r[4] = v;
    }
L_00185030:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[4]);
    }
L_00185034:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 12u, &shc); cpu->r[3] = v;
    }
L_00185038:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_0018503c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_00185040:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK8Vector4s11GetRotatedYEi @ 00185048 (arm) */
void fn_00185048(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00185048:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], 0x00000200u, 0, 0);
    }
L_0018504c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 21u, &shc); cpu->r[2] = v;
    }
L_00185050:;
    {
        cpu->r[3] = rd32(0x00185058u + + 0x84u);
    }
L_00185054:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 21u, &shc); cpu->r[12] = v;
    }
L_00185058:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 21u, &shc); cpu->r[2] = v;
    }
L_0018505c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00185064u, cpu->r[3], 0, 0);
    }
L_00185060:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_00185064:;
    {
        uint32_t v = shifter(cpu->r[12], 3, 21u, &shc); cpu->r[12] = v;
    }
L_00185068:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
    }
L_0018506c:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[2] + + 0x10u);
    }
L_00185070:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_00185074:;
    {
        cpu->r[5] = rd32(cpu->r[1] + + 0x8u);
    }
L_00185078:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0018507c:;
    {
        cpu->r[4] = rd32(cpu->r[1]);
    }
L_00185080:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[12] + + 0x10u);
    }
L_00185084:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], 0x00000003u, 0, 0);
    }
L_00185088:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[12];
        }
    }
L_0018508c:;
    {
        cpu->r[6] = rd32(cpu->r[1] + + 0x4u);
    }
L_00185090:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], 0x00000003u, 0, 0);
    }
L_00185094:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00185098:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[2] = v;
    }
L_0018509c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[12];
        }
    }
L_001850a0:;
    {
        cpu->r[12] = sub_flags(cpu, 0x00000000u, cpu->r[2], 1, 0);
    }
L_001850a4:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[6]);
    }
L_001850a8:;
    {
        uint32_t v = cpu->r[5] * cpu->r[2]; cpu->r[2] = v;
    }
L_001850ac:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001850b0:;
    {
        uint32_t v = cpu->r[5] * cpu->r[3]; cpu->r[5] = v;
    }
L_001850b4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000800u, 0, 0);
    }
L_001850b8:;
    {
        uint32_t v = cpu->r[4] * cpu->r[12] + cpu->r[5]; cpu->r[5] = v;
    }
L_001850bc:;
    {
        uint32_t v = cpu->r[4] * cpu->r[3] + cpu->r[2]; cpu->r[3] = v;
    }
L_001850c0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000800u, 0, 0);
    }
L_001850c4:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 12u, &shc); cpu->r[5] = v;
    }
L_001850c8:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[5]);
    }
L_001850cc:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 12u, &shc); cpu->r[3] = v;
    }
L_001850d0:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_001850d4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[13] += 12u;
    }
L_001850d8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8Vector2s10SelfRotateEi @ 001850e0 (arm) */
void fn_001850e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001850e0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000200u, 0, 0);
    }
L_001850e4:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 21u, &shc); cpu->r[1] = v;
    }
L_001850e8:;
    {
        cpu->r[3] = rd32(0x001850f0u + + 0x7cu);
    }
L_001850ec:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 21u, &shc); cpu->r[2] = v;
    }
L_001850f0:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 21u, &shc); cpu->r[1] = v;
    }
L_001850f4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001850fcu, cpu->r[3], 0, 0);
    }
L_001850f8:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_001850fc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00185100:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 21u, &shc); cpu->r[2] = v;
    }
L_00185104:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_00185108:;
    {
        cpu->r[1] = (uint32_t)(int32_t)s16(cpu->r[1] + + 0x10u);
    }
L_0018510c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_00185110:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x4u);
    }
L_00185114:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00185118:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[2] + + 0x10u);
    }
L_0018511c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000003u, 0, 0);
    }
L_00185120:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = cpu->r[2];
        }
    }
L_00185124:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000003u, 0, 0);
    }
L_00185128:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0018512c:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 2u, &shc); cpu->r[1] = v;
    }
L_00185130:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_00185134:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000000u, cpu->r[1], 1, 0);
    }
L_00185138:;
    {
        uint32_t v = cpu->r[4] * cpu->r[1]; cpu->r[1] = v;
    }
L_0018513c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_00185140:;
    {
        uint32_t v = cpu->r[4] * cpu->r[3]; cpu->r[4] = v;
    }
L_00185144:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000800u, 0, 0);
    }
L_00185148:;
    {
        uint32_t v = cpu->r[12] * cpu->r[2] + cpu->r[4]; cpu->r[4] = v;
    }
L_0018514c:;
    {
        uint32_t v = cpu->r[12] * cpu->r[3] + cpu->r[1]; cpu->r[3] = v;
    }
L_00185150:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000800u, 0, 0);
    }
L_00185154:;
    {
        uint32_t v = shifter(cpu->r[4], 1, 12u, &shc); cpu->r[4] = v;
    }
L_00185158:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[4]);
    }
L_0018515c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 12u, &shc); cpu->r[3] = v;
    }
L_00185160:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_00185164:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_00185168:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK8Vector2s10GetRotatedEi @ 00185170 (arm) */
void fn_00185170(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00185170:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], 0x00000200u, 0, 0);
    }
L_00185174:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 21u, &shc); cpu->r[2] = v;
    }
L_00185178:;
    {
        cpu->r[3] = rd32(0x00185180u + + 0x7cu);
    }
L_0018517c:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 21u, &shc); cpu->r[12] = v;
    }
L_00185180:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 21u, &shc); cpu->r[2] = v;
    }
L_00185184:;
    {
        cpu->r[3] = add_flags(cpu, 0x0018518cu, cpu->r[3], 0, 0);
    }
L_00185188:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0018518c:;
    {
        uint32_t v = shifter(cpu->r[12], 3, 21u, &shc); cpu->r[12] = v;
    }
L_00185190:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
    }
L_00185194:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[2] + + 0x10u);
    }
L_00185198:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_0018519c:;
    {
        cpu->r[5] = rd32(cpu->r[1] + + 0x4u);
    }
L_001851a0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001851a4:;
    {
        cpu->r[4] = rd32(cpu->r[1]);
    }
L_001851a8:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[12] + + 0x10u);
    }
L_001851ac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], 0x00000003u, 0, 0);
    }
L_001851b0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[12];
        }
    }
L_001851b4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], 0x00000003u, 0, 0);
    }
L_001851b8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001851bc:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 2u, &shc); cpu->r[2] = v;
    }
L_001851c0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[12];
        }
    }
L_001851c4:;
    {
        cpu->r[12] = sub_flags(cpu, 0x00000000u, cpu->r[2], 1, 0);
    }
L_001851c8:;
    {
        uint32_t v = cpu->r[5] * cpu->r[2]; cpu->r[2] = v;
    }
L_001851cc:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001851d0:;
    {
        uint32_t v = cpu->r[5] * cpu->r[3]; cpu->r[5] = v;
    }
L_001851d4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000800u, 0, 0);
    }
L_001851d8:;
    {
        uint32_t v = cpu->r[4] * cpu->r[12] + cpu->r[5]; cpu->r[5] = v;
    }
L_001851dc:;
    {
        uint32_t v = cpu->r[4] * cpu->r[3] + cpu->r[2]; cpu->r[3] = v;
    }
L_001851e0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000800u, 0, 0);
    }
L_001851e4:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 12u, &shc); cpu->r[5] = v;
    }
L_001851e8:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[5]);
    }
L_001851ec:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 12u, &shc); cpu->r[3] = v;
    }
L_001851f0:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_001851f4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[13] += 8u;
    }
L_001851f8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z13RayPlaneInterRK8Vector4sS1_S1_S1_RS_ @ 00185200 (arm) */
void fn_00185200(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00185200:;
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
L_00185204:;
    {
        cpu->r[11] = rd32(cpu->r[1]);
    }
L_00185208:;
    {
        cpu->r[6] = rd32(cpu->r[3]);
    }
L_0018520c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_00185210:;
    {
        cpu->r[9] = rd32(cpu->r[1] + + 0x4u);
    }
L_00185214:;
    {
        cpu->r[5] = rd32(cpu->r[3] + + 0x4u);
    }
L_00185218:;
    {
        uint32_t v = cpu->r[11] * cpu->r[6]; cpu->r[7] = v;
    }
L_0018521c:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0x8u);
    }
L_00185220:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x8u);
    }
L_00185224:;
    {
        uint32_t v = cpu->r[9] * cpu->r[5] + cpu->r[7]; cpu->r[3] = v;
    }
L_00185228:;
    {
        uint32_t v = cpu->r[12] * cpu->r[4] + cpu->r[3]; cpu->r[1] = v;
        set_nz(cpu, v);
    }
L_0018522c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x38u);
    }
L_00185230:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[1];
        }
    }
L_00185234:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001852fc;
        }
    }
L_00185238:;
    {
        cpu->r[8] = rd32(cpu->r[2]);
    }
L_0018523c:;
    {
        cpu->r[14] = rd32(cpu->r[0]);
    }
L_00185240:;
    {
        uint32_t base = cpu->r[2];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[7] = v0;
        cpu->r[10] = v1;
    }
L_00185244:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[8], cpu->r[14], 1, 0);
    }
L_00185248:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x4u);
    }
L_0018524c:;
    {
        uint32_t v = cpu->r[11] * cpu->r[14]; cpu->r[11] = v;
    }
L_00185250:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[7], cpu->r[2], 1, 0);
    }
L_00185254:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_00185258:;
    {
        uint32_t v = cpu->r[9] * cpu->r[2] + cpu->r[11]; cpu->r[9] = v;
    }
L_0018525c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_00185260:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00185264:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[10], cpu->r[0], 1, 0);
    }
L_00185268:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x7f80u << 16);
    }
L_0018526c:;
    {
        uint32_t v = cpu->r[12] * cpu->r[14] + cpu->r[9]; cpu->r[0] = v;
        set_nz(cpu, v);
    }
L_00185270:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
        }
    }
L_00185274:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[1] = sub_flags(cpu, 0x00000000u, cpu->r[1], 1, 0);
        }
    }
L_00185278:;
    {
        uint32_t v = cpu->r[0] & cpu->r[2]; cpu->r[2] = v;
    }
L_0018527c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00185280:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00185304;
        }
    }
L_00185284:;
    {
        cpu->r[2] = 0x00008000u;
    }
L_00185288:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_0018528c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x007fu << 16);
    }
L_00185290:;
    {
        uint32_t v = cpu->r[0] & cpu->r[2]; cpu->r[2] = v;
    }
L_00185294:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00185298:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000007fu, 0, 0);
        }
    }
L_0018529c:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[0], 2, 8u, &shc); cpu->r[0] = v;
        }
    }
L_001852a0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = shifter(cpu->r[0], 2, 16u, &shc); cpu->r[0] = v;
        }
    }
L_001852a4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
        }
    }
L_001852a8:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[1], 1, 8u, &shc); cpu->r[1] = v;
        }
    }
L_001852ac:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
        }
    }
L_001852b0:;
    {
        cpu->r[14] = 0x001852b4u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001852b4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001852b8:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001852bc:;
    {
        uint32_t v = cpu->r[4] * cpu->r[2]; cpu->r[4] = v;
    }
L_001852c0:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001852c4:;
    {
        uint32_t v = cpu->r[6] * cpu->r[2]; cpu->r[6] = v;
    }
L_001852c8:;
    {
        uint32_t v = cpu->r[5] * cpu->r[2]; cpu->r[5] = v;
    }
L_001852cc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00007f00u, 0, 0);
    }
L_001852d0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00007f00u, 0, 0);
    }
L_001852d4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x000000ffu, 0, 0);
    }
L_001852d8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x000000ffu, 0, 0);
    }
L_001852dc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00007f00u, 0, 0);
    }
L_001852e0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[10], shifter(cpu->r[4], 1, 16u, &shc), 0, 0);
    }
L_001852e4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x000000ffu, 0, 0);
    }
L_001852e8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[8], shifter(cpu->r[6], 1, 16u, &shc), 0, 0);
    }
L_001852ec:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[4]);
    }
L_001852f0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[7], shifter(cpu->r[5], 1, 16u, &shc), 0, 0);
    }
L_001852f4:;
    {
        wr32(cpu->r[3], cpu->r[6]);
    }
L_001852f8:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[5]);
    }
L_001852fc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00185300:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00185304u)) return;
    }
L_00185304:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00007f00u, 0, 0);
    }
L_00185308:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
    }
L_0018530c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x000000ffu, 0, 0);
    }
L_00185310:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00185314:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 16u, &shc); cpu->r[1] = v;
    }
L_00185318:;
    {
        cpu->r[14] = 0x0018531cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0018531c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00185320:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00185324:;
    {
        goto L_001852bc;
    }
}

/* _Z13PointRayDist2RK8Vector4sS1_S1_ @ 00185328 (arm) */
void fn_00185328(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00185328:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0018532c:;
    {
        cpu->r[12] = rd32(cpu->r[2]);
    }
L_00185330:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00185334:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 0);
    }
L_00185338:;
    {
        cpu->r[5] = rd32(cpu->r[1]);
    }
L_0018533c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_00185340:;
    {
        cpu->r[4] = rd32(cpu->r[2] + + 0x4u);
    }
L_00185344:;
    {
        cpu->r[14] = rd32(cpu->r[1] + + 0x4u);
    }
L_00185348:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 0);
    }
L_0018534c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_00185350:;
    {
        uint32_t v = cpu->r[5] * cpu->r[12]; cpu->r[6] = v;
    }
L_00185354:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_00185358:;
    {
        uint32_t v = cpu->r[14] * cpu->r[4] + cpu->r[6]; cpu->r[0] = v;
    }
L_0018535c:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x8u);
    }
L_00185360:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_00185364:;
    {
        uint32_t v = cpu->r[5] * cpu->r[5]; cpu->r[5] = v;
    }
L_00185368:;
    {
        uint32_t v = cpu->r[14] * cpu->r[14] + cpu->r[5]; cpu->r[14] = v;
    }
L_0018536c:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3] + cpu->r[0]; cpu->r[0] = v;
    }
L_00185370:;
    {
        uint32_t v = cpu->r[12] * cpu->r[12]; cpu->r[12] = v;
    }
L_00185374:;
    {
        uint32_t v = cpu->r[4] * cpu->r[4] + cpu->r[12]; cpu->r[4] = v;
    }
L_00185378:;
    {
        uint32_t v = cpu->r[1] * cpu->r[1] + cpu->r[14]; cpu->r[1] = v;
    }
L_0018537c:;
    {
        uint32_t v = cpu->r[0] * cpu->r[0]; cpu->r[0] = v;
    }
L_00185380:;
    {
        uint32_t v = cpu->r[3] * cpu->r[3] + cpu->r[4]; cpu->r[4] = v;
    }
L_00185384:;
    {
        cpu->r[14] = 0x00185388u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00185388:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[4], cpu->r[0], 1, 0);
    }
L_0018538c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00185390u)) return;
    }
}

/* _ZN8Vector2s9IntersectERKS_S1_S1_S1_ @ 00185390 (arm) */
void fn_00185390(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00185390:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_00185394:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00185398:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_0018539c:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_001853a0:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001853a4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001853a8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001853ac:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001853b0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001853b4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00185448;
        }
    }
L_001853b8:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001853bc:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_001853c0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_001853c4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00185448;
        }
    }
L_001853c8:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x4u);
    }
L_001853cc:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_001853d0:;
    {
        cpu->r[7] = rd32(cpu->r[7] + + 0x4u);
    }
L_001853d4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_001853d8:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x4u);
    }
L_001853dc:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[12], cpu->r[7], 1, 0);
    }
L_001853e0:;
    {
        cpu->r[4] = rd32(cpu->r[4] + + 0x4u);
    }
L_001853e4:;
    {
        uint32_t v = cpu->r[5] * cpu->r[1]; cpu->r[12] = v;
    }
L_001853e8:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 0);
    }
L_001853ec:;
    {
        uint32_t v = cpu->r[12] - cpu->r[4] * cpu->r[0]; cpu->r[12] = v;
    }
L_001853f0:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001853f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00185490;
        }
    }
L_001853f8:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[6], cpu->r[7], 1, 0);
    }
L_001853fc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_00185400:;
    {
        uint32_t v = cpu->r[7] * cpu->r[1]; cpu->r[1] = v;
    }
L_00185404:;
    {
        uint32_t v = cpu->r[7] * cpu->r[0]; cpu->r[0] = v;
    }
L_00185408:;
    {
        uint32_t v = cpu->r[1] - cpu->r[4] * cpu->r[3]; cpu->r[1] = v;
    }
L_0018540c:;
    {
        uint32_t v = cpu->r[0] - cpu->r[5] * cpu->r[3]; cpu->r[3] = v;
    }
L_00185410:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0018549c;
        }
    }
L_00185414:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_00185418:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_0018541c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_00185420:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00185424:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_00185428:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0018542c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00185490;
        }
    }
L_00185430:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 1);
    }
L_00185434:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00185438:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0018543c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00185440:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00185444:;
    {
        goto L_00185494;
    }
L_00185448:;
    {
        cpu->r[1] = rd32(0x00185450u + + 0x80u);
    }
L_0018544c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00185450:;
    {
        cpu->r[12] = rd32(0x00185458u + + 0x7cu);
    }
L_00185454:;
    {
        cpu->r[14] = 0x00000282u;
    }
L_00185458:;
    {
        cpu->r[2] = rd32(0x00185460u + + 0x78u);
    }
L_0018545c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00185464u, cpu->r[1], 0, 0);
    }
L_00185460:;
    {
        cpu->r[3] = rd32(0x00185468u + + 0x74u);
    }
L_00185464:;
    {
        cpu->r[12] = add_flags(cpu, 0x0018546cu, cpu->r[12], 0, 0);
    }
L_00185468:;
    {
        cpu->r[2] = add_flags(cpu, 0x00185470u, cpu->r[2], 0, 0);
    }
L_0018546c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000018u, 0, 0);
    }
L_00185470:;
    {
        cpu->r[3] = add_flags(cpu, 0x00185478u, cpu->r[3], 0, 0);
    }
L_00185474:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00185478:;
    {
        cpu->r[14] = 0x0018547cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0018547c:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_00185480:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00185484:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_00185488:;
    {
        cpu->r[2] = rd32(cpu->r[7]);
    }
L_0018548c:;
    {
        goto L_001853c8;
    }
L_00185490:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00185494:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00185498:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0018549cu)) return;
    }
L_0018549c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_001854a0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001854a4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_001854a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001854ac:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_001854b0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001854b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00185490;
        }
    }
L_001854b8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 1);
    }
L_001854bc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001854c0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001854c4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001854c8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001854cc:;
    {
        goto L_00185494;
    }
}

/* _ZN8Vector4s17GetReciprocalAxisEi @ 001854e0 (arm) */
void fn_001854e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001854e0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_001854e4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001854e8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001854ec:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001854f0:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00185528;
        }
    }
L_001854f4:;
    {
        cpu->r[1] = rd32(0x001854fcu + + 0x44u);
    }
L_001854f8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001854fc:;
    {
        cpu->r[12] = rd32(0x00185504u + + 0x40u);
    }
L_00185500:;
    {
        cpu->r[14] = 0x00000170u;
    }
L_00185504:;
    {
        cpu->r[2] = rd32(0x0018550cu + + 0x3cu);
    }
L_00185508:;
    {
        cpu->r[1] = add_flags(cpu, 0x00185510u, cpu->r[1], 0, 0);
    }
L_0018550c:;
    {
        cpu->r[3] = rd32(0x00185514u + + 0x38u);
    }
L_00185510:;
    {
        cpu->r[12] = add_flags(cpu, 0x00185518u, cpu->r[12], 0, 0);
    }
L_00185514:;
    {
        cpu->r[2] = add_flags(cpu, 0x0018551cu, cpu->r[2], 0, 0);
    }
L_00185518:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000024u, 0, 0);
    }
L_0018551c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00185524u, cpu->r[3], 0, 0);
    }
L_00185520:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00185524:;
    {
        cpu->r[14] = 0x00185528u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00185528:;
    {
        cpu->r[0] = rd32(0x00185530u + + 0x20u);
    }
L_0018552c:;
    {
        cpu->r[0] = add_flags(cpu, 0x00185534u, cpu->r[0], 0, 0);
    }
L_00185530:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000038u, 0, 0);
    }
L_00185534:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[4], 2, 3u, &shc), 0, 0);
    }
L_00185538:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0018553c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00185540u)) return;
    }
}

/* _ZN8Vector4s6ResizeEi @ 00185554 (arm) */
void fn_00185554(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00185554:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_00185558:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0018555c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00185560:;
    {
        uint32_t v = cpu->r[2] * cpu->r[2]; cpu->r[2] = v;
    }
L_00185564:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_00185568:;
    {
        uint32_t v = cpu->r[3] * cpu->r[3] + cpu->r[2]; cpu->r[3] = v;
    }
L_0018556c:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00185570:;
    {
        uint32_t v = cpu->r[0] * cpu->r[0] + cpu->r[3]; cpu->r[0] = v;
    }
L_00185574:;
    {
        cpu->r[14] = 0x00185578u; fn_0017fa74(cpu);
    }
L_00185578:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0018557c:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_00185580:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00185584:;
    {
        uint32_t v = cpu->r[0] * cpu->r[5]; cpu->r[0] = v;
    }
L_00185588:;
    {
        cpu->r[14] = 0x0018558cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0018558c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_00185590:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00185594:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_00185598:;
    {
        uint32_t v = cpu->r[3] * cpu->r[5]; cpu->r[0] = v;
    }
L_0018559c:;
    {
        cpu->r[14] = 0x001855a0u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001855a0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001855a4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001855a8:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_001855ac:;
    {
        uint32_t v = cpu->r[3] * cpu->r[5]; cpu->r[0] = v;
    }
L_001855b0:;
    {
        cpu->r[14] = 0x001855b4u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001855b4:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_001855b8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001855bcu)) return;
    }
}

/* _ZN8Vector4s9NormalizeEv @ 001855bc (arm) */
void fn_001855bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001855bc:;
    {
        cpu->r[2] = rd32(cpu->r[0]);
    }
L_001855c0:;
    {
        cpu->r[3] = 0x000088b7u;
    }
L_001855c4:;
    {
        cpu->r[1] = 0x000088b7u;
    }
L_001855c8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001855cc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_001855d0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x000088b8u;
        }
    }
L_001855d4:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0], cpu->r[2]);
        }
    }
L_001855d8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001855dc:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x8u);
    }
L_001855e0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001855e4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x000088b8u;
        }
    }
L_001855e8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001855ec:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
        }
    }
L_001855f0:;
    {
        cpu->r[0] = 0x000088b7u;
    }
L_001855f4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_001855f8:;
    {
        uint32_t v = cpu->r[2] * cpu->r[2]; cpu->r[2] = v;
    }
L_001855fc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = 0x00000440u;
        }
    }
L_00185600:;
    {
        uint32_t v = cpu->r[3] * cpu->r[3] + cpu->r[2]; cpu->r[3] = v;
    }
L_00185604:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x4904u << 16);
        }
    }
L_00185608:;
    {
        if (cond_test(cpu, 14)) {
        uint32_t v = cpu->r[1] * cpu->r[1]; cpu->r[1] = v;
        }
    }
L_0018560c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x000088b8u;
        }
    }
L_00185610:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
        }
    }
L_00185614:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_00185618:;
    {
        cpu->r[14] = 0x0018561cu; fn_0017fa74(cpu);
    }
L_0018561c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00185620:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00185624:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = cpu->r[0];
        }
    }
L_00185628:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = 0x00000001u;
        }
    }
L_0018562c:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 12u, &shc); cpu->r[0] = v;
    }
L_00185630:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00185634:;
    {
        cpu->r[14] = 0x00185638u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00185638:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_0018563c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00185640:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_00185644:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 12u, &shc); cpu->r[0] = v;
    }
L_00185648:;
    {
        cpu->r[14] = 0x0018564cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0018564c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_00185650:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00185654:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_00185658:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 12u, &shc); cpu->r[0] = v;
    }
L_0018565c:;
    {
        cpu->r[14] = 0x00185660u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00185660:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_00185664:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00185668u)) return;
    }
}
