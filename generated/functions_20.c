#include "functions.h"

/* tcd_rateallocate @ 0008ee30 (arm) */
void fn_0008ee30(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0008ee30:;
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
L_0008ee34:;
    {
        cpu->r[13] -= 64u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
        wr64(cpu->r[13] + 16u, *(uint64_t*)vfp_d(cpu, 10));
        wr64(cpu->r[13] + 24u, *(uint64_t*)vfp_d(cpu, 11));
        wr64(cpu->r[13] + 32u, *(uint64_t*)vfp_d(cpu, 12));
        wr64(cpu->r[13] + 40u, *(uint64_t*)vfp_d(cpu, 13));
        wr64(cpu->r[13] + 48u, *(uint64_t*)vfp_d(cpu, 14));
        wr64(cpu->r[13] + 56u, *(uint64_t*)vfp_d(cpu, 15));
    }
L_0008ee38:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000037cu, 1, 0);
    }
L_0008ee3c:;
    {
        *vfp_d(cpu, 11) = *(double*)G(0x0008ee44u + + 0x314u);
    }
L_0008ee40:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_0008ee44:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0008ee48:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008ee4c:;
    {
        *vfp_d(cpu,10) = *vfp_d(cpu,11);
    }
L_0008ee50:;
    {
        *vfp_d(cpu, 9) = *(double*)G(0x0008ee58u + + 0x308u);
    }
L_0008ee54:;
    {
        *vfp_d(cpu, 5) = *(double*)G(0x0008ee5cu + + 0x30cu);
    }
L_0008ee58:;
    {
        cpu->r[4] = rd32(cpu->r[9] + + 0x24u);
    }
L_0008ee5c:;
    {
        cpu->r[10] = rd32(cpu->r[9] + + 0x20u);
    }
L_0008ee60:;
    {
        cpu->r[12] = rd32(cpu->r[9] + + 0x28u);
    }
L_0008ee64:;
    {
        cpu->r[8] = rd32(0x0008ee6cu + + 0x304u);
    }
L_0008ee68:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[0]);
    }
L_0008ee6c:;
    {
        cpu->r[8] = add_flags(cpu, 0x0008ee74u, cpu->r[8], 0, 0);
    }
L_0008ee70:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[1]);
    }
L_0008ee74:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[8]);
    }
L_0008ee78:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[2]);
    }
L_0008ee7c:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[3]);
    }
L_0008ee80:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[0]);
    }
L_0008ee84:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[10]);
    }
L_0008ee88:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[12]);
    }
L_0008ee8c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[0]);
    }
L_0008ee90:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_0008ee94:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0008ee98:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_0008ee9c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0008f0cc;
        }
    }
L_0008eea0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0008eea4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0008eea8:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x14u);
    }
L_0008eeac:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[0]);
    }
L_0008eeb0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], shifter(cpu->r[1], 2, 5u, &shc), 0, 0);
    }
L_0008eeb4:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[0]);
    }
L_0008eeb8:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x10u);
    }
L_0008eebc:;
    {
        wr32(cpu->r[10] + + 0x1cu, cpu->r[0]);
    }
L_0008eec0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x48u);
    }
L_0008eec4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0008eec8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0008f078;
        }
    }
L_0008eecc:;
    {
        cpu->r[11] = rd32(cpu->r[10] + + 0x14u);
    }
L_0008eed0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x34u);
    }
L_0008eed4:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[2], 0, 0);
    }
L_0008eed8:;
    {
        cpu->r[1] = rd32(cpu->r[11] + + 0x18u);
    }
L_0008eedc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0008eee0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008f05c;
        }
    }
L_0008eee4:;
    {
        cpu->r[2] = rd32(cpu->r[11] + + 0x14u);
    }
L_0008eee8:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_0008eeec:;
    {
        cpu->r[3] = rd32(cpu->r[11] + + 0x10u);
    }
L_0008eef0:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[11]);
    }
L_0008eef4:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[8]);
    }
L_0008eef8:;
    {
        uint32_t v = cpu->r[3] * cpu->r[2]; cpu->r[0] = v;
    }
L_0008eefc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0008ef00:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008f038;
        }
    }
L_0008ef04:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x38u);
    }
L_0008ef08:;
    {
        cpu->r[6] = rd32(cpu->r[9] + + 0x30u);
    }
L_0008ef0c:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_0008ef10:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x10u);
    }
L_0008ef14:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x14u);
    }
L_0008ef18:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1]; cpu->r[1] = v;
    }
L_0008ef1c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0008ef20:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008f020;
        }
    }
L_0008ef24:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_0008ef28:;
    {
        cpu->r[8] = cpu->r[7];
    }
L_0008ef2c:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x18u);
    }
L_0008ef30:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[7], 0, 0);
    }
L_0008ef34:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x2cu);
    }
L_0008ef38:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0008ef3c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008efb4;
        }
    }
L_0008ef40:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_0008ef44:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0008ef48:;
    {
        goto L_0008ef90;
    }
L_0008ef4c:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_0008ef50:;
    {
        *vfp_d(cpu, 7) = *(double*)G(cpu->r[3] + + 0x8u);
    }
L_0008ef54:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0008ef58:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0008ef5c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000018u, 0, 0);
    }
L_0008ef60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008ef88;
        }
    }
L_0008ef64:;
    {
        *(uint32_t*)vfp_s(cpu,9) = cpu->r[12];
    }
L_0008ef68:;
    {
        *vfp_d(cpu,6) = (double)*(int32_t*)vfp_s(cpu,9);
    }
L_0008ef6c:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 7) / *vfp_d(cpu, 6);
    }
L_0008ef70:;
    {
        vfp_set_cmp(cpu, *vfp_d(cpu,7), *vfp_d(cpu,9));
    }
L_0008ef74:;
    {
        vfp_sync_flags(cpu);
    }
L_0008ef78:;
    {
        vfp_set_cmp(cpu, *vfp_d(cpu,7), *vfp_d(cpu,10));
    }
L_0008ef7c:;
    {
        if (cond_test(cpu, 5)) {
        *vfp_d(cpu,9) = *vfp_d(cpu,7);
        }
    }
L_0008ef80:;
    {
        vfp_sync_flags(cpu);
    }
L_0008ef84:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_d(cpu,10) = *vfp_d(cpu,7);
        }
    }
L_0008ef88:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_0008ef8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008efb4;
        }
    }
L_0008ef90:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0008ef94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008ef4c;
        }
    }
L_0008ef98:;
    {
        *vfp_d(cpu, 6) = *(double*)G(cpu->r[3] + + 0x8u);
    }
L_0008ef9c:;
    {
        *vfp_d(cpu, 7) = *(double*)G(cpu->r[3] + - 0x10u);
    }
L_0008efa0:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_0008efa4:;
    {
        cpu->r[12] = rd32(cpu->r[3] + - 0x18u);
    }
L_0008efa8:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 6) - *vfp_d(cpu, 7);
    }
L_0008efac:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[5], cpu->r[12], 1, 0);
    }
L_0008efb0:;
    {
        goto L_0008ef54;
    }
L_0008efb4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x10u);
    }
L_0008efb8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_0008efbc:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x18u);
    }
L_0008efc0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000030u, 0, 0);
    }
L_0008efc4:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x14u);
    }
L_0008efc8:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0xcu);
    }
L_0008efcc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0008efd0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_0008efd4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 0);
    }
L_0008efd8:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2] + cpu->r[3]; cpu->r[1] = v;
    }
L_0008efdc:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[1]);
    }
L_0008efe0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0xcu);
    }
L_0008efe4:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x18u);
    }
L_0008efe8:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x10u);
    }
L_0008efec:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x14u);
    }
L_0008eff0:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x1cu);
    }
L_0008eff4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 0);
    }
L_0008eff8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 0);
    }
L_0008effc:;
    {
        uint32_t v = cpu->r[2] * cpu->r[1] + cpu->r[3]; cpu->r[1] = v;
    }
L_0008f000:;
    {
        wr32(cpu->r[10] + + 0x1cu, cpu->r[1]);
    }
L_0008f004:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x14u);
    }
L_0008f008:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x10u);
    }
L_0008f00c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_0008f010:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_0008f014:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008ef2c;
        }
    }
L_0008f018:;
    {
        cpu->r[2] = rd32(cpu->r[11] + + 0x14u);
    }
L_0008f01c:;
    {
        cpu->r[3] = rd32(cpu->r[11] + + 0x10u);
    }
L_0008f020:;
    {
        uint32_t v = cpu->r[3] * cpu->r[2]; cpu->r[1] = v;
    }
L_0008f024:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_0008f028:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000024u, 0, 0);
    }
L_0008f02c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[9], 1, 1);
    }
L_0008f030:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008ef10;
        }
    }
L_0008f034:;
    {
        cpu->r[1] = rd32(cpu->r[11] + + 0x18u);
    }
L_0008f038:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x44u);
    }
L_0008f03c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x38u);
    }
L_0008f040:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_0008f044:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[0]);
    }
L_0008f048:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_0008f04c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000020u, 0, 0);
    }
L_0008f050:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[8]);
    }
L_0008f054:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008eef8;
        }
    }
L_0008f058:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x10u);
    }
L_0008f05c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x48u);
    }
L_0008f060:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x34u);
    }
L_0008f064:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_0008f068:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[9]);
    }
L_0008f06c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000007cu, 0, 0);
    }
L_0008f070:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[12]);
    }
L_0008f074:;
    {
        goto L_0008eec0;
    }
L_0008f078:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008f07c:;
    {
        cpu->r[9] = 0x00000001u;
    }
L_0008f080:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x28u);
    }
L_0008f084:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[10] + + 0x1cu);
    }
L_0008f088:;
    {
        *vfp_d(cpu,6) = (double)*(int32_t*)vfp_s(cpu,12);
    }
L_0008f08c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0008f090:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x1cu);
    }
L_0008f094:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0008f098:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[2]);
    }
L_0008f09c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x18u);
    }
L_0008f0a0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_0008f0a4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000030u, 0, 0);
    }
L_0008f0a8:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[8]);
    }
L_0008f0ac:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x18u);
    }
L_0008f0b0:;
    {
        uint32_t v = shifter(cpu->r[9], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[3] = v;
    }
L_0008f0b4:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[3];
    }
L_0008f0b8:;
    {
        *vfp_d(cpu,7) = (double)*(int32_t*)vfp_s(cpu,14);
    }
L_0008f0bc:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 7) - *vfp_d(cpu, 5);
    }
L_0008f0c0:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 7) * *vfp_d(cpu, 7);
    }
L_0008f0c4:;
    {
        *vfp_d(cpu, 11) = *vfp_d(cpu, 11) + *vfp_d(cpu, 7) * *vfp_d(cpu, 6);
    }
L_0008f0c8:;
    {
        goto L_0008ee90;
    }
L_0008f0cc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0008f0d0:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0008f0d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008f12c;
        }
    }
L_0008f0d8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008f0dc:;
    {
        cpu->r[5] = 0x00000240u;
    }
L_0008f0e0:;
    {
        cpu->r[6] = rd32(cpu->r[12] + + 0x58u);
    }
L_0008f0e4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x18u);
    }
L_0008f0e8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x2cu);
    }
L_0008f0ec:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x40u);
    }
L_0008f0f0:;
    {
        *vfp_d(cpu, 7) = *(double*)G(cpu->r[4] + + 0x20u);
    }
L_0008f0f4:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,7); cpu->r[8]= (uint32_t)v; cpu->r[9]=(uint32_t)(v>>32);
    }
L_0008f0f8:;
    {
        uint32_t v = cpu->r[5] * cpu->r[3]; cpu->r[5] = v;
    }
L_0008f0fc:;
    {
        cpu->r[3] = 0x00000230u;
    }
L_0008f100:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], cpu->r[5], 0, 0);
    }
L_0008f104:;
    {
        wr64(cpu->r[2] + cpu->r[3], ((uint64_t)cpu->r[9] << 32) | cpu->r[8]);
    }
L_0008f108:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x30u);
    }
L_0008f10c:;
    {
        wr32(cpu->r[2] + + 0x228u, cpu->r[1]);
    }
L_0008f110:;
    {
        cpu->r[3] = rd32(0x0008f118u + + 0x5cu);
    }
L_0008f114:;
    {
        cpu->r[0] = rd32(cpu->r[10] + + 0xcu);
    }
L_0008f118:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_0008f11c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 3u, &shc); cpu->r[0] = v;
    }
L_0008f120:;
    {
        cpu->r[14] = 0x0008f128u;
    }
L_0008f124:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0008f128u)) return;
    }
L_0008f128:;
    {
        wr32(cpu->r[6] + cpu->r[5], cpu->r[0]);
    }
L_0008f12c:;
    {
        cpu->r[12] = 0x0000fc19u;
    }
L_0008f130:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_0008f134:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0xffffu << 16);
    }
L_0008f138:;
    {
        cpu->r[8] = cpu->r[4];
    }
L_0008f13c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0008f140:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[12]);
    }
L_0008f144:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000058u, 0, 0);
    }
L_0008f148:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x40u);
    }
L_0008f14c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x54u);
    }
L_0008f150:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008f154:;
    {
        goto L_0008f18c;
    }
L_0008f178:;
    {
        *vfp_d(cpu, 7) = *(double*)G(cpu->r[8] + + 0x28u);
    }
L_0008f17c:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x28u);
    }
L_0008f180:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000008u, 0, 0);
    }
L_0008f184:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000004u, 0, 0);
    }
L_0008f188:;
    {
        uint32_t base = cpu->r[7];
        uint32_t ea = base;
        wr64(ea + 0u, *(uint64_t*)vfp_d(cpu, 7));
        cpu->r[7] = ea + 8u;
    }
L_0008f18c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x40u);
    }
L_0008f190:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0xcu);
    }
L_0008f194:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_0008f198:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0008f474;
        }
    }
L_0008f19c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[10] + + 0x14u);
    }
L_0008f1a0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_0008f1a4:;
    {
        vfp_sync_flags(cpu);
    }
L_0008f1a8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = rd32(cpu->r[13] + + 0x50u);
        }
    }
L_0008f1ac:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
        }
    }
L_0008f1b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008f1dc;
        }
    }
L_0008f1b4:;
    {
        *vfp_d(cpu,6) = (double)*vfp_s(cpu,15);
    }
L_0008f1b8:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,6); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_0008f1bc:;
    {
        cpu->r[14] = 0x0008f1c0u; imp_ceil(cpu); /* ceil */
    }
L_0008f1c0:;
    {
        *(uint64_t*)vfp_d(cpu,7) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_0008f1c4:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_d(cpu,7);
    }
L_0008f1c8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x50u);
    }
L_0008f1cc:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0008f1d0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_0008f1d4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = cpu->r[1];
        }
    }
L_0008f1d8:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_0008f1dc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0008f1e0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[10], 0x00001440u, 0, 0);
    }
L_0008f1e4:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x4120u << 16);
    }
L_0008f1e8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[9]);
    }
L_0008f1ec:;
    {
        *(uint32_t*)vfp_s(cpu,9) = cpu->r[0];
    }
L_0008f1f0:;
    {
        vfp_vdiv(cpu, 15, 15, 9);
    }
L_0008f1f4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0008f1f8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0008f1fc:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x4024u << 16);
    }
L_0008f200:;
    {
        *vfp_d(cpu, 8) = *(double*)G(cpu->r[8] + + 0x20u);
    }
L_0008f204:;
    {
        *vfp_d(cpu,6) = (double)*vfp_s(cpu,15);
    }
L_0008f208:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,6); cpu->r[2]= (uint32_t)v; cpu->r[3]=(uint32_t)(v>>32);
    }
L_0008f20c:;
    {
        cpu->r[14] = 0x0008f210u; imp_pow(cpu); /* pow */
    }
L_0008f210:;
    {
        cpu->r[3] = rd32(cpu->r[11] + + 0x18u);
    }
L_0008f214:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0008f218:;
    {
        *(uint64_t*)vfp_d(cpu,7) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_0008f21c:;
    {
        *vfp_d(cpu, 15) = *vfp_d(cpu, 11) / *vfp_d(cpu, 7);
    }
L_0008f220:;
    {
        *vfp_d(cpu, 15) = *vfp_d(cpu, 8) - *vfp_d(cpu, 15);
    }
L_0008f224:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008f460;
        }
    }
L_0008f228:;
    {
        cpu->r[3] = rd32(cpu->r[11] + + 0x20u);
    }
L_0008f22c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0008f230:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008f2a0;
        }
    }
L_0008f234:;
    {
        *vfp_d(cpu,8) = *vfp_d(cpu,9);
    }
L_0008f238:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0008f23c:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_0008f240:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0008f244:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008f248:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008f270;
        }
    }
L_0008f24c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x2cu);
    }
L_0008f250:;
    {
        cpu->r[12] = 0x00000240u;
    }
L_0008f254:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0008f258:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 3u, &shc); cpu->r[3] = v;
    }
L_0008f25c:;
    {
        uint32_t v = cpu->r[12] * cpu->r[2]; cpu->r[2] = v;
    }
L_0008f260:;
    {
        cpu->r[1] = rd32(cpu->r[9] + + 0x58u);
    }
L_0008f264:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_0008f268:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,8); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_0008f26c:;
    {
        wr64(cpu->r[2] + cpu->r[3], ((uint64_t)cpu->r[1] << 32) | cpu->r[0]);
    }
L_0008f270:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,8); cpu->r[2]= (uint32_t)v; cpu->r[3]=(uint32_t)(v>>32);
    }
L_0008f274:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0008f278:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0008f27c:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_0008f280:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0008f284:;
    {
        cpu->r[14] = 0x0008f288u; fn_0008dda0(cpu);
    }
L_0008f288:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0008f28c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008f178;
        }
    }
L_0008f290:;
    {
        *vfp_d(cpu, 6) = *(double*)G(cpu->r[7] + - 0x8u);
    }
L_0008f294:;
    {
        *vfp_d(cpu, 7) = *(double*)G(cpu->r[6] + + 0x28u);
    }
L_0008f298:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 6) + *vfp_d(cpu, 7);
    }
L_0008f29c:;
    {
        goto L_0008f17c;
    }
L_0008f2a0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[9]);
    }
L_0008f2a4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_0008f2a8:;
    {
        vfp_sync_flags(cpu);
    }
L_0008f2ac:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008f234;
        }
    }
L_0008f2b0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_0008f2b4:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_0008f2b8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x1cu);
    }
L_0008f2bc:;
    {
        *vfp_d(cpu,12) = *vfp_d(cpu,10);
    }
L_0008f2c0:;
    {
        cpu->r[14] = 0x0008f2c4u; fn_0008ba3c(cpu);
    }
L_0008f2c4:;
    {
        *vfp_d(cpu, 14) = *(double*)G(0x0008f2ccu + + 0x1bcu);
    }
L_0008f2c8:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_0008f2cc:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[10]);
    }
L_0008f2d0:;
    {
        *vfp_d(cpu,13) = *vfp_d(cpu,9);
    }
L_0008f2d4:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[0]);
    }
L_0008f2d8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0008f2dc:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[0]);
    }
L_0008f2e0:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 13) + *vfp_d(cpu, 12);
    }
L_0008f2e4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0008f2e8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0008f2ec:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x3fe0u << 16);
    }
L_0008f2f0:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_0008f2f4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0008f2f8:;
    {
        *(uint64_t*)vfp_d(cpu,6) = ((uint64_t)cpu->r[3]<<32)|cpu->r[2];
    }
L_0008f2fc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0008f300:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0008f304:;
    {
        *vfp_d(cpu, 8) = *vfp_d(cpu, 7) * *vfp_d(cpu, 6);
    }
L_0008f308:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,8); cpu->r[2]= (uint32_t)v; cpu->r[3]=(uint32_t)(v>>32);
    }
L_0008f30c:;
    {
        cpu->r[14] = 0x0008f310u; fn_0008dda0(cpu);
    }
L_0008f310:;
    {
        cpu->r[3] = rd32(cpu->r[11] + + 0x20u);
    }
L_0008f314:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008f318:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008f3f0;
        }
    }
L_0008f31c:;
    {
        cpu->r[3] = rd32(cpu->r[11]);
    }
L_0008f320:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008f324:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008f370;
        }
    }
L_0008f328:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0008f32c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008f3e0;
        }
    }
L_0008f330:;
    {
        *vfp_d(cpu, 7) = *(double*)G(cpu->r[8] + + 0x28u);
    }
L_0008f334:;
    {
        vfp_set_cmp(cpu, *vfp_d(cpu,7), *vfp_d(cpu,15));
    }
L_0008f338:;
    {
        vfp_sync_flags(cpu);
    }
L_0008f33c:;
    {
        if (cond_test(cpu, 6)) {
        goto L_0008f3d8;
        }
    }
L_0008f340:;
    {
        *vfp_d(cpu,14) = *vfp_d(cpu,8);
    }
L_0008f344:;
    {
        *vfp_d(cpu,12) = *vfp_d(cpu,8);
    }
L_0008f348:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_0008f34c:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000020u, 1, 1);
    }
L_0008f350:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008f2e0;
        }
    }
L_0008f354:;
    {
        vfp_set_cmp(cpu, *vfp_d(cpu,14), 0.0);
    }
L_0008f358:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x30u);
    }
L_0008f35c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x34u);
    }
L_0008f360:;
    {
        vfp_sync_flags(cpu);
    }
L_0008f364:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_d(cpu,8) = *vfp_d(cpu,14);
        }
    }
L_0008f368:;
    {
        cpu->r[14] = 0x0008f36cu; fn_0008ba84(cpu);
    }
L_0008f36c:;
    {
        goto L_0008f240;
    }
L_0008f370:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0xcu);
    }
L_0008f374:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0008f378:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_0008f37c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x2cu);
    }
L_0008f380:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[10]);
    }
L_0008f384:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x8u);
    }
L_0008f388:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x10u);
    }
L_0008f38c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_0008f390:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[10]);
    }
L_0008f394:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x38u);
    }
L_0008f398:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x4cu);
    }
L_0008f39c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x30u);
    }
L_0008f3a0:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_0008f3a4:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_0008f3a8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008f3ac:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0008f3b0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_0008f3b4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0008f3b8:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0008f3bc:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[14]);
    }
L_0008f3c0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[10]);
    }
L_0008f3c4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_0008f3c8:;
    {
        cpu->r[14] = 0x0008f3ccu; fn_0008d16c(cpu);
    }
L_0008f3cc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0008f3d0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_0008f3d4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008f328;
        }
    }
L_0008f3d8:;
    {
        *vfp_d(cpu,13) = *vfp_d(cpu,8);
    }
L_0008f3dc:;
    {
        goto L_0008f348;
    }
L_0008f3e0:;
    {
        *vfp_d(cpu, 6) = *(double*)G(cpu->r[7] + - 0x8u);
    }
L_0008f3e4:;
    {
        *vfp_d(cpu, 7) = *(double*)G(cpu->r[6] + + 0x28u);
    }
L_0008f3e8:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 6) + *vfp_d(cpu, 7);
    }
L_0008f3ec:;
    {
        goto L_0008f334;
    }
L_0008f3f0:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0xcu);
    }
L_0008f3f4:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_0008f3f8:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_0008f3fc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x2cu);
    }
L_0008f400:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[10]);
    }
L_0008f404:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x8u);
    }
L_0008f408:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x10u);
    }
L_0008f40c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_0008f410:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[10]);
    }
L_0008f414:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x38u);
    }
L_0008f418:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x4cu);
    }
L_0008f41c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x30u);
    }
L_0008f420:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[12]);
    }
L_0008f424:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_0008f428:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008f42c:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0008f430:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_0008f434:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_0008f438:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0008f43c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[14]);
    }
L_0008f440:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[10]);
    }
L_0008f444:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_0008f448:;
    {
        cpu->r[14] = 0x0008f44cu; fn_0008d16c(cpu);
    }
L_0008f44c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0008f450:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_0008f454:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008f340;
        }
    }
L_0008f458:;
    {
        *vfp_d(cpu,13) = *vfp_d(cpu,8);
    }
L_0008f45c:;
    {
        goto L_0008f348;
    }
L_0008f460:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[10] + + 0x14u);
    }
L_0008f464:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_0008f468:;
    {
        vfp_sync_flags(cpu);
    }
L_0008f46c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008f2b0;
        }
    }
L_0008f470:;
    {
        goto L_0008f228;
    }
L_0008f474:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_0008f478:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000037cu, 0, 0);
    }
L_0008f47c:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        *(uint64_t*)vfp_d(cpu, 10) = rd64(cpu->r[13] + 16u);
        *(uint64_t*)vfp_d(cpu, 11) = rd64(cpu->r[13] + 24u);
        *(uint64_t*)vfp_d(cpu, 12) = rd64(cpu->r[13] + 32u);
        *(uint64_t*)vfp_d(cpu, 13) = rd64(cpu->r[13] + 40u);
        *(uint64_t*)vfp_d(cpu, 14) = rd64(cpu->r[13] + 48u);
        *(uint64_t*)vfp_d(cpu, 15) = rd64(cpu->r[13] + 56u);
        cpu->r[13] += 64u;
    }
L_0008f480:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0008f484u)) return;
    }
}

/* tcd_encode_tile @ 0008f490 (arm) */
void fn_0008f490(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0008f490:;
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
L_0008f494:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000005cu, 1, 0);
    }
L_0008f498:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_0008f49c:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[1]);
    }
L_0008f4a0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008f4a4:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0008f4a8:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[2]);
    }
L_0008f4ac:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x20u);
    }
L_0008f4b0:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[3]);
    }
L_0008f4b4:;
    {
        cpu->r[3] = 0x000015d4u;
    }
L_0008f4b8:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008f4bc:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[1]);
    }
L_0008f4c0:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x48u);
    }
L_0008f4c4:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x18u);
    }
L_0008f4c8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008f4cc:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x6cu);
    }
L_0008f4d0:;
    {
        cpu->r[0] = rd32(0x0008f4d8u + + 0x640u);
    }
L_0008f4d4:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x8u);
    }
L_0008f4d8:;
    {
        uint32_t v = cpu->r[3] * cpu->r[8] + cpu->r[2]; cpu->r[3] = v;
    }
L_0008f4dc:;
    {
        cpu->r[0] = add_flags(cpu, 0x0008f4e4u, cpu->r[0], 0, 0);
    }
L_0008f4e0:;
    {
        cpu->r[4] = rd32(cpu->r[1] + + 0x8u);
    }
L_0008f4e4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0008f4e8:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[0]);
    }
L_0008f4ec:;
    {
        cpu->r[0] = rd32(cpu->r[12] + + 0x1cu);
    }
L_0008f4f0:;
    {
        wr32(cpu->r[5] + + 0x2cu, cpu->r[8]);
    }
L_0008f4f4:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[3]);
    }
L_0008f4f8:;
    {
        cpu->r[3] = 0x000015d0u;
    }
L_0008f4fc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x44u);
    }
L_0008f500:;
    {
        cpu->r[5] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0008f504:;
    {
        wr32(cpu->r[12] + + 0x24u, cpu->r[4]);
    }
L_0008f508:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[0]);
    }
L_0008f50c:;
    {
        wr32(cpu->r[12] + + 0x28u, cpu->r[1]);
    }
L_0008f510:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008f5c4;
        }
    }
L_0008f514:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x80u);
    }
L_0008f518:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0008f51c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0008f520:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x48u);
    }
L_0008f524:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_0008f528:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0xcu, cpu->r[3]);
        }
    }
L_0008f52c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008f530:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x14u);
    }
L_0008f534:;
    {
        cpu->r[14] = 0x0008f538u; fn_0008ba3c(cpu);
    }
L_0008f538:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008f53c:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x44u);
    }
L_0008f540:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_0008f544:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0008f548:;
    {
        cpu->r[6] = rd32(cpu->r[8] + + 0x4u);
    }
L_0008f54c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xcu);
    }
L_0008f550:;
    {
        cpu->r[14] = rd32(cpu->r[8]);
    }
L_0008f554:;
    {
        cpu->r[12] = rd32(cpu->r[8] + + 0x10u);
    }
L_0008f558:;
    {
        cpu->r[7] = rd32(cpu->r[8] + + 0xcu);
    }
L_0008f55c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x50u);
    }
L_0008f560:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[6]);
    }
L_0008f564:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[14]);
    }
L_0008f568:;
    {
        wr32(cpu->r[13], cpu->r[8]);
    }
L_0008f56c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x54u);
    }
L_0008f570:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_0008f574:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_0008f578:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[7]);
    }
L_0008f57c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[8]);
    }
L_0008f580:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x80u);
    }
L_0008f584:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_0008f588:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[8]);
    }
L_0008f58c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0008f590:;
    {
        cpu->r[14] = 0x0008f594u; fn_0008d16c(cpu);
    }
L_0008f594:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_0008f598:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0008f59c:;
    {
        cpu->r[14] = 0x0008f5a0u; fn_0008ba84(cpu);
    }
L_0008f5a0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008f5a4:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0xcu);
    }
L_0008f5a8:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x8u);
    }
L_0008f5ac:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0008f5b0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0008f5b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008fa18;
        }
    }
L_0008f5b8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0008f5bc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000005cu, 0, 0);
    }
L_0008f5c0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0008f5c4u)) return;
    }
L_0008f5c4:;
    {
        cpu->r[14] = 0x0008f5c8u; fn_000849f4(cpu);
    }
L_0008f5c8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x80u);
    }
L_0008f5cc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008f5d0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0008f5d4:;
    {
        wr64(cpu->r[3] + + 0x30u, ((uint64_t)cpu->r[1] << 32) | cpu->r[0]);
    }
L_0008f5d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008f6b4;
        }
    }
L_0008f5dc:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x14u);
    }
L_0008f5e0:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x10u);
    }
L_0008f5e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008f5e8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008fb04;
        }
    }
L_0008f5ec:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x3cu);
    }
L_0008f5f0:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x80u);
    }
L_0008f5f4:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x14u);
    }
L_0008f5f8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 2, 3u, &shc), 0, 0);
    }
L_0008f5fc:;
    {
        cpu->r[11] = rd32(cpu->r[8] + + 0x58u);
    }
L_0008f600:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 6u, &shc); cpu->r[2] = v;
    }
L_0008f604:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_0008f608:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_0008f60c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0008f610:;
    {
        cpu->r[5] = cpu->r[6];
    }
L_0008f614:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[11], cpu->r[12], 0, 0);
    }
L_0008f618:;
    {
        cpu->r[14] = cpu->r[1];
    }
L_0008f61c:;
    {
        cpu->r[12] = cpu->r[1];
    }
L_0008f620:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_0008f624:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0x10u);
    }
L_0008f628:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0008f62c:;
    {
        wr32(cpu->r[1] + + 0x14u, cpu->r[7]);
    }
L_0008f630:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_0008f634:;
    {
        cpu->r[7] = rd32(cpu->r[3] + + 0x14u);
    }
L_0008f638:;
    {
        wr32(cpu->r[0] + + 0x98u, cpu->r[7]);
    }
L_0008f63c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_0008f640:;
    {
        cpu->r[7] = rd32(cpu->r[2] + + 0x32cu);
    }
L_0008f644:;
    {
        cpu->r[8] = rd32(cpu->r[3] + + 0x14u);
    }
L_0008f648:;
    {
        cpu->r[10] = rd32(cpu->r[3] + + 0x10u);
    }
L_0008f64c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000007cu, 0, 0);
    }
L_0008f650:;
    {
        wr32(cpu->r[12] + + 0x11cu, cpu->r[7]);
    }
L_0008f654:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_0008f658:;
    {
        cpu->r[7] = rd32(cpu->r[2] + + 0x3b0u);
    }
L_0008f65c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_0008f660:;
    {
        uint32_t v = cpu->r[10] * cpu->r[8] + cpu->r[6]; cpu->r[6] = v;
    }
L_0008f664:;
    {
        wr32(cpu->r[14] + + 0x1a0u, cpu->r[7]);
    }
L_0008f668:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000004u, 0, 0);
    }
L_0008f66c:;
    {
        cpu->r[7] = rd32(cpu->r[9] + + 0x10u);
    }
L_0008f670:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[5], 1, 1);
    }
L_0008f674:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008f624;
        }
    }
L_0008f678:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x80u);
    }
L_0008f67c:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x40u);
    }
L_0008f680:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_0008f684:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x38u);
    }
L_0008f688:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x34u);
    }
L_0008f68c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[11], cpu->r[1], 0, 0);
    }
L_0008f690:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[2] = v;
    }
L_0008f694:;
    {
        cpu->r[3] = rd32(0x0008f69cu + + 0x480u);
    }
L_0008f698:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_0008f69c:;
    {
        uint32_t v = cpu->r[6] * cpu->r[2]; cpu->r[6] = v;
    }
L_0008f6a0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
    }
L_0008f6a4:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 3u, &shc); cpu->r[0] = v;
    }
L_0008f6a8:;
    {
        cpu->r[14] = 0x0008f6b0u;
    }
L_0008f6ac:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0008f6b0u)) return;
    }
L_0008f6b0:;
    {
        wr32(cpu->r[5] + + 0x224u, cpu->r[0]);
    }
L_0008f6b4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_0008f6b8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008f6bc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008f884;
        }
    }
L_0008f6c0:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0008f6c4:;
    {
        cpu->r[2] = 0x000015d0u;
    }
L_0008f6c8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x44u);
    }
L_0008f6cc:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_0008f6d0:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x14u);
    }
L_0008f6d4:;
    {
        cpu->r[9] = rd32(cpu->r[8] + + 0x18u);
    }
L_0008f6d8:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_0008f6dc:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[10]);
    }
L_0008f6e0:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[9]);
    }
L_0008f6e4:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_0008f6e8:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[4]);
    }
L_0008f6ec:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_0008f6f0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x30u);
    }
L_0008f6f4:;
    {
        cpu->r[5] = cpu->r[9];
    }
L_0008f6f8:;
    {
        uint32_t wb_tmp = cpu->r[5] + cpu->r[10];
        cpu->r[4] = rd32(cpu->r[5] + cpu->r[10]);
        cpu->r[5] = wb_tmp;
    }
L_0008f6fc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x20u);
    }
L_0008f700:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008f704:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0008f708:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_0008f70c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_0008f710:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
        }
    }
L_0008f714:;
    {
        cpu->r[8] = rd32(cpu->r[3]);
    }
L_0008f718:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = rd32(cpu->r[1] + + 0x18u);
        }
    }
L_0008f71c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], cpu->r[4], 0, 0);
    }
L_0008f720:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0008f724:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_0008f728:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
        }
    }
L_0008f72c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = shifter(cpu->r[2], 2, (cpu->r[6] & 0xffu), &shc); cpu->r[6] = v;
        }
    }
L_0008f730:;
    {
        cpu->r[14] = 0x0008f734u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0008f734:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_0008f738:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0008f73c:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0008f740:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x4u);
    }
L_0008f744:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_0008f748:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_0008f74c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0008f750:;
    {
        cpu->r[14] = 0x0008f754u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0008f754:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0008f758:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[0]);
    }
L_0008f75c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x8u);
    }
L_0008f760:;
    {
        cpu->r[5] = rd32(cpu->r[7] + + 0x8u);
    }
L_0008f764:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_0008f768:;
    {
        cpu->r[4] = rd32(cpu->r[7]);
    }
L_0008f76c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_0008f770:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[8], 1, 0);
    }
L_0008f774:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 0);
    }
L_0008f778:;
    {
        cpu->r[14] = 0x0008f77cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0008f77c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_0008f780:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x14u);
    }
L_0008f784:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0008f788:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008f96c;
        }
    }
L_0008f78c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008f790:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008f840;
        }
    }
L_0008f794:;
    {
        cpu->r[12] = rd32(cpu->r[7] + + 0x4u);
    }
L_0008f798:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xcu);
    }
L_0008f79c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_0008f7a0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0008f840;
        }
    }
L_0008f7a4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x38u);
    }
L_0008f7a8:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x18u);
    }
L_0008f7ac:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[12], cpu->r[1], 1, 0);
    }
L_0008f7b0:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_0008f7b4:;
    {
        uint32_t v = cpu->r[0] * cpu->r[14]; cpu->r[14] = v;
    }
L_0008f7b8:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_0008f7bc:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_0008f7c0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[10], 0, 0);
    }
L_0008f7c4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_0008f7c8:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x2cu);
    }
L_0008f7cc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008f818;
        }
    }
L_0008f7d0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 0);
    }
L_0008f7d4:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[4], cpu->r[11], 1, 0);
    }
L_0008f7d8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[14], 0, 0);
    }
L_0008f7dc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0008f7e0:;
    {
        uint32_t v = cpu->r[8] * cpu->r[2]; cpu->r[2] = v;
    }
L_0008f7e4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_0008f7e8:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008f7ec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0008f7f0:;
    {
        cpu->r[5] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_0008f7f4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0008f7f8:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 0);
    }
L_0008f7fc:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 11u, &shc); cpu->r[5] = v;
    }
L_0008f800:;
    {
        wr32(cpu->r[2] + cpu->r[3], cpu->r[5]);
    }
L_0008f804:;
    {
        cpu->r[5] = rd32(cpu->r[7] + + 0x8u);
    }
L_0008f808:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0008f80c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_0008f810:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008f7f0;
        }
    }
L_0008f814:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xcu);
    }
L_0008f818:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0008f81c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], cpu->r[0], 0, 0);
    }
L_0008f820:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_0008f824:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = cpu->r[9];
        }
    }
L_0008f828:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[4] = rd32(cpu->r[7]);
        }
    }
L_0008f82c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = rd32(cpu->r[7] + + 0x4u);
        }
    }
L_0008f830:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008f7c0;
        }
    }
L_0008f834:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x4cu);
    }
L_0008f838:;
    {
        cpu->r[8] = rd32(cpu->r[8] + + 0x10u);
    }
L_0008f83c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[8]);
    }
L_0008f840:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x34u);
    }
L_0008f844:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000030u, 0, 0);
    }
L_0008f848:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008f84c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000020u, 0, 0);
    }
L_0008f850:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0008f854:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_0008f858:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x30u);
    }
L_0008f85c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 1);
    }
L_0008f860:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000430u, 0, 0);
    }
L_0008f864:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[12]);
    }
L_0008f868:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000030u, 0, 0);
    }
L_0008f86c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_0008f870:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[2]);
    }
L_0008f874:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[0]);
    }
L_0008f878:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008f6f0;
        }
    }
L_0008f87c:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x4cu);
    }
L_0008f880:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_0008f884:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x44u);
    }
L_0008f888:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x10u);
    }
L_0008f88c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0008f890:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008fa94;
        }
    }
L_0008f894:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008f898:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008f904;
        }
    }
L_0008f89c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0008f8a0:;
    {
        cpu->r[7] = 0x000015d0u;
    }
L_0008f8a4:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_0008f8a8:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x44u);
    }
L_0008f8ac:;
    {
        goto L_0008f8c4;
    }
L_0008f8b0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0008f8b4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000430u, 0, 0);
    }
L_0008f8b8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_0008f8bc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_0008f8c0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008f904;
        }
    }
L_0008f8c4:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[7]);
    }
L_0008f8c8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_0008f8cc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[5], 0, 0);
    }
L_0008f8d0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[6], 2, 5u, &shc), 0, 0);
    }
L_0008f8d4:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x14u);
    }
L_0008f8d8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_0008f8dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008fa0c;
        }
    }
L_0008f8e0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0008f8e4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008f8b0;
        }
    }
L_0008f8e8:;
    {
        cpu->r[14] = 0x0008f8ecu; fn_0007f010(cpu);
    }
L_0008f8ec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_0008f8f0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0008f8f4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000430u, 0, 0);
    }
L_0008f8f8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_0008f8fc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_0008f900:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008f8c4;
        }
    }
L_0008f904:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008f908:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x14u);
    }
L_0008f90c:;
    {
        cpu->r[14] = 0x0008f910u; fn_0008b924(cpu);
    }
L_0008f910:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0008f914:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x44u);
    }
L_0008f918:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0008f91c:;
    {
        cpu->r[14] = 0x0008f920u; fn_0008a3f0(cpu);
    }
L_0008f920:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0008f924:;
    {
        cpu->r[14] = 0x0008f928u; fn_0008b8c8(cpu);
    }
L_0008f928:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x80u);
    }
L_0008f92c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x48u);
    }
L_0008f930:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0008f934:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_0008f938:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[8] + + 0xcu, cpu->r[3]);
        }
    }
L_0008f93c:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x18u);
    }
L_0008f940:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008f944:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008f954;
        }
    }
L_0008f948:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x20u);
    }
L_0008f94c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008f950:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008fae0;
        }
    }
L_0008f954:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008f958:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x50u);
    }
L_0008f95c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x54u);
    }
L_0008f960:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x80u);
    }
L_0008f964:;
    {
        cpu->r[14] = 0x0008f968u; fn_0008ee30(cpu);
    }
L_0008f968:;
    {
        goto L_0008f514;
    }
L_0008f96c:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x4u);
    }
L_0008f970:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xcu);
    }
L_0008f974:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_0008f978:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0008f840;
        }
    }
L_0008f97c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x38u);
    }
L_0008f980:;
    {
        cpu->r[14] = cpu->r[9];
    }
L_0008f984:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_0008f988:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x18u);
    }
L_0008f98c:;
    {
        uint32_t v = cpu->r[0] * cpu->r[12]; cpu->r[12] = v;
    }
L_0008f990:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_0008f994:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0008f998:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], cpu->r[10], 0, 0);
    }
L_0008f99c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_0008f9a0:;
    {
        cpu->r[14] = rd32(cpu->r[14] + + 0x2cu);
    }
L_0008f9a4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008f9ec;
        }
    }
L_0008f9a8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_0008f9ac:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[4], cpu->r[11], 1, 0);
    }
L_0008f9b0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[12], 0, 0);
    }
L_0008f9b4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0008f9b8:;
    {
        uint32_t v = cpu->r[8] * cpu->r[2]; cpu->r[2] = v;
    }
L_0008f9bc:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], shifter(cpu->r[5], 2, 2u, &shc), 0, 0);
    }
L_0008f9c0:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008f9c4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0008f9c8:;
    {
        cpu->r[5] = rd32(cpu->r[14] + cpu->r[3]);
    }
L_0008f9cc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0008f9d0:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[6], 1, 0);
    }
L_0008f9d4:;
    {
        wr32(cpu->r[2] + cpu->r[3], cpu->r[5]);
    }
L_0008f9d8:;
    {
        cpu->r[5] = rd32(cpu->r[7] + + 0x8u);
    }
L_0008f9dc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0008f9e0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_0008f9e4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008f9c8;
        }
    }
L_0008f9e8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xcu);
    }
L_0008f9ec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0008f9f0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[0], 0, 0);
    }
L_0008f9f4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0008f9f8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008f834;
        }
    }
L_0008f9fc:;
    {
        cpu->r[14] = cpu->r[9];
    }
L_0008fa00:;
    {
        cpu->r[4] = rd32(cpu->r[7]);
    }
L_0008fa04:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x4u);
    }
L_0008fa08:;
    {
        goto L_0008f998;
    }
L_0008fa0c:;
    {
        cpu->r[14] = 0x0008fa10u; fn_0007ec04(cpu);
    }
L_0008fa10:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_0008fa14:;
    {
        goto L_0008f8b0;
    }
L_0008fa18:;
    {
        cpu->r[14] = 0x0008fa1cu; fn_000849f4(cpu);
    }
L_0008fa1c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008fa20:;
    {
        *vfp_d(cpu, 7) = *(double*)G(cpu->r[2] + + 0x30u);
    }
L_0008fa24:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x14u);
    }
L_0008fa28:;
    {
        cpu->r[2] = rd32(0x0008fa30u + + 0xf0u);
    }
L_0008fa2c:;
    {
        cpu->r[2] = add_flags(cpu, 0x0008fa34u, cpu->r[2], 0, 0);
    }
L_0008fa30:;
    {
        *(uint64_t*)vfp_d(cpu,6) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_0008fa34:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 6) - *vfp_d(cpu, 7);
    }
L_0008fa38:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0008fa3c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008fa40:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_0008fa44:;
    {
        *(uint64_t*)G(cpu->r[3] + + 0x30u) = *(uint64_t*)vfp_d(cpu, 7);
    }
L_0008fa48:;
    {
        *(uint64_t*)G(cpu->r[13]) = *(uint64_t*)vfp_d(cpu, 7);
    }
L_0008fa4c:;
    {
        cpu->r[14] = 0x0008fa50u; fn_00080304(cpu);
    }
L_0008fa50:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_0008fa54:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008fa58:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0008f5b8;
        }
    }
L_0008fa5c:;
    {
        cpu->r[3] = rd32(0x0008fa64u + + 0xc0u);
    }
L_0008fa60:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0008fa64:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x40u);
    }
L_0008fa68:;
    {
        cpu->r[7] = rd32(cpu->r[8] + cpu->r[3]);
    }
L_0008fa6c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_0008fa70:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 5u, &shc), 0, 0);
    }
L_0008fa74:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0008fa78:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x18u);
    }
L_0008fa7c:;
    {
        cpu->r[14] = 0x0008fa84u;
    }
L_0008fa80:;
    {
        uint32_t t = rd32(cpu->r[7]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0008fa84u)) return;
    }
L_0008fa84:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_0008fa88:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0008fa8c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008fa6c;
        }
    }
L_0008fa90:;
    {
        goto L_0008f5b8;
    }
L_0008fa94:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x14u);
    }
L_0008fa98:;
    {
        cpu->r[3] = 0x000015d0u;
    }
L_0008fa9c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0008faa0:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0xcu);
    }
L_0008faa4:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x4u);
    }
L_0008faa8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x14u);
    }
L_0008faac:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0008fab0:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x8u);
    }
L_0008fab4:;
    {
        cpu->r[2] = rd32(cpu->r[1]);
    }
L_0008fab8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0008fabc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 0);
    }
L_0008fac0:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_0008fac4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0008faec;
        }
    }
L_0008fac8:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x58u);
    }
L_0008facc:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x18u);
    }
L_0008fad0:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x38u);
    }
L_0008fad4:;
    {
        cpu->r[14] = 0x0008fad8u; fn_00085d24(cpu);
    }
L_0008fad8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_0008fadc:;
    {
        goto L_0008f894;
    }
L_0008fae0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008fae4:;
    {
        cpu->r[14] = 0x0008fae8u; fn_0008dd58(cpu);
    }
L_0008fae8:;
    {
        goto L_0008f514;
    }
L_0008faec:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x58u);
    }
L_0008faf0:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x18u);
    }
L_0008faf4:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x38u);
    }
L_0008faf8:;
    {
        cpu->r[14] = 0x0008fafcu; fn_00085c60(cpu);
    }
L_0008fafc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_0008fb00:;
    {
        goto L_0008f894;
    }
L_0008fb04:;
    {
        cpu->r[3] = 0x00000240u;
    }
L_0008fb08:;
    {
        cpu->r[11] = rd32(cpu->r[2] + + 0x58u);
    }
L_0008fb0c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[8]; cpu->r[3] = v;
    }
L_0008fb10:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_0008fb14:;
    {
        goto L_0008f678;
    }
}

/* tcd_malloc_decode_tile @ 0008fb28 (arm) */
void fn_0008fb28(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0008fb28:;
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
L_0008fb2c:;
    {
        cpu->r[13] -= 32u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
        wr64(cpu->r[13] + 16u, *(uint64_t*)vfp_d(cpu, 10));
        wr64(cpu->r[13] + 24u, *(uint64_t*)vfp_d(cpu, 11));
    }
L_0008fb30:;
    {
        cpu->r[4] = rd32(cpu->r[2] + + 0x4cu);
    }
L_0008fb34:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x18u);
    }
L_0008fb38:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000a4u, 1, 0);
    }
L_0008fb3c:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0008fb40:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[2]);
    }
L_0008fb44:;
    {
        cpu->r[3] = rd32(cpu->r[4] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_0008fb48:;
    {
        cpu->r[5] = rd32(cpu->r[5] + + 0x8u);
    }
L_0008fb4c:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[1]);
    }
L_0008fb50:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0008fb54:;
    {
        wr32(cpu->r[13] + + 0x70u, cpu->r[12]);
    }
L_0008fb58:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0008fb5c:;
    {
        cpu->r[12] = rd32(cpu->r[2] + + 0x6cu);
    }
L_0008fb60:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000350u, 0, 0);
    }
L_0008fb64:;
    {
        cpu->r[6] = rd32(0x0008fb6cu + + 0x474u);
    }
L_0008fb68:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3] + cpu->r[5]; cpu->r[5] = v;
    }
L_0008fb6c:;
    {
        cpu->r[2] = 0x000015d4u;
    }
L_0008fb70:;
    {
        cpu->r[6] = add_flags(cpu, 0x0008fb78u, cpu->r[6], 0, 0);
    }
L_0008fb74:;
    {
        wr32(cpu->r[13] + + 0x98u, cpu->r[1]);
    }
L_0008fb78:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3] + cpu->r[12]; cpu->r[12] = v;
    }
L_0008fb7c:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[6]);
    }
L_0008fb80:;
    {
        wr32(cpu->r[13] + + 0x94u, cpu->r[1]);
    }
L_0008fb84:;
    {
        wr32(cpu->r[13] + + 0x90u, cpu->r[5]);
    }
L_0008fb88:;
    {
        wr32(cpu->r[13] + + 0x9cu, cpu->r[12]);
    }
L_0008fb8c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x90u);
    }
L_0008fb90:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x94u);
    }
L_0008fb94:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x10u);
    }
L_0008fb98:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_0008fb9c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00090460;
        }
    }
L_0008fba0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x80u);
    }
L_0008fba4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x90u);
    }
L_0008fba8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x70u);
    }
L_0008fbac:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x18u);
    }
L_0008fbb0:;
    {
        cpu->r[3] = 0x000015d0u;
    }
L_0008fbb4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x9cu);
    }
L_0008fbb8:;
    {
        cpu->r[5] = cpu->r[6];
    }
L_0008fbbc:;
    {
        cpu->r[0] = rd32(cpu->r[12]);
    }
L_0008fbc0:;
    {
        cpu->r[7] = rd32(cpu->r[12] + + 0x14u);
    }
L_0008fbc4:;
    {
        uint32_t wb_tmp = cpu->r[5] + cpu->r[2];
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[2]);
        cpu->r[5] = wb_tmp;
    }
L_0008fbc8:;
    {
        cpu->r[3] = rd32(cpu->r[14] + cpu->r[3]);
    }
L_0008fbcc:;
    {
        cpu->r[2] = rd32(0x0008fbd4u + + 0x410u);
    }
L_0008fbd0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], cpu->r[0], 0, 0);
    }
L_0008fbd4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x94u);
    }
L_0008fbd8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_0008fbdc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x98u);
    }
L_0008fbe0:;
    {
        wr32(cpu->r[13] + + 0x84u, cpu->r[2]);
    }
L_0008fbe4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_0008fbe8:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[7], shifter(cpu->r[14], 2, 5u, &shc), 0, 0);
    }
L_0008fbec:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[3]);
    }
L_0008fbf0:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[14]);
    }
L_0008fbf4:;
    {
        cpu->r[14] = 0x0008fbf8u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0008fbf8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x90u);
    }
L_0008fbfc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x94u);
    }
L_0008fc00:;
    {
        wr32(cpu->r[7] + shifter(cpu->r[3], 2, 5u, &shc), cpu->r[0]);
    }
L_0008fc04:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x4u);
    }
L_0008fc08:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_0008fc0c:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0008fc10:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_0008fc14:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0008fc18:;
    {
        cpu->r[14] = 0x0008fc1cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0008fc1c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x48u);
    }
L_0008fc20:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x90u);
    }
L_0008fc24:;
    {
        wr32(cpu->r[14] + + 0x4u, cpu->r[0]);
    }
L_0008fc28:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x70u);
    }
L_0008fc2c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x8u);
    }
L_0008fc30:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[0]);
    }
L_0008fc34:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0008fc38:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_0008fc3c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0008fc40:;
    {
        cpu->r[14] = 0x0008fc44u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0008fc44:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x48u);
    }
L_0008fc48:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x90u);
    }
L_0008fc4c:;
    {
        wr32(cpu->r[2] + + 0x8u, cpu->r[0]);
    }
L_0008fc50:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0xcu);
    }
L_0008fc54:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_0008fc58:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0008fc5c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_0008fc60:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0008fc64:;
    {
        cpu->r[14] = 0x0008fc68u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0008fc68:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x48u);
    }
L_0008fc6c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x5cu);
    }
L_0008fc70:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x84u);
    }
L_0008fc74:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x78u);
    }
L_0008fc78:;
    {
        cpu->r[3] = rd32(cpu->r[14] + cpu->r[12]);
    }
L_0008fc7c:;
    {
        wr32(cpu->r[1] + + 0xcu, cpu->r[0]);
    }
L_0008fc80:;
    {
        cpu->r[0] = 0x0000007cu;
    }
L_0008fc84:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x4u);
    }
L_0008fc88:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2]; cpu->r[0] = v;
    }
L_0008fc8c:;
    {
        wr32(cpu->r[1] + + 0x10u, cpu->r[2]);
    }
L_0008fc90:;
    {
        cpu->r[14] = 0x0008fc98u;
    }
L_0008fc94:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x0008fc98u)) return;
    }
L_0008fc98:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x48u);
    }
L_0008fc9c:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x10u);
    }
L_0008fca0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008fca4:;
    {
        wr32(cpu->r[12] + + 0x14u, cpu->r[0]);
    }
L_0008fca8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00090368;
        }
    }
L_0008fcac:;
    {
        *vfp_d(cpu, 10) = *(double*)G(0x0008fcb4u + + 0x314u);
    }
L_0008fcb0:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_0008fcb4:;
    {
        *vfp_d(cpu, 11) = *(double*)G(0x0008fcbcu + + 0x314u);
    }
L_0008fcb8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x0000001cu, 0, 0);
    }
L_0008fcbc:;
    {
        cpu->r[1] = (~0x0000000fu);
    }
L_0008fcc0:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[14]);
    }
L_0008fcc4:;
    {
        wr32(cpu->r[13] + + 0x8cu, cpu->r[0]);
    }
L_0008fcc8:;
    {
        wr32(cpu->r[13] + + 0x88u, cpu->r[6]);
    }
L_0008fccc:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[1]);
    }
L_0008fcd0:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[14]);
    }
L_0008fcd4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x48u);
    }
L_0008fcd8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0008fcdc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x54u);
    }
L_0008fce0:;
    {
        cpu->r[6] = 0x00000001u;
    }
L_0008fce4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x74u);
    }
L_0008fce8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 0);
    }
L_0008fcec:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[3]);
    }
L_0008fcf0:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_0008fcf4:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0008fcf8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x4cu);
    }
L_0008fcfc:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_0008fd00:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x14u);
    }
L_0008fd04:;
    {
        uint32_t v = shifter(cpu->r[6], 2, (cpu->r[14] & 0xffu), &shc); cpu->r[14] = v;
    }
L_0008fd08:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[14]);
    }
L_0008fd0c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[14], 0, 0);
    }
L_0008fd10:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x74u);
    }
L_0008fd14:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4cu);
    }
L_0008fd18:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_0008fd1c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[1]);
    }
L_0008fd20:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = cpu->r[6];
        }
    }
L_0008fd24:;
    {
        uint32_t v = shifter(cpu->r[0], 1, (cpu->r[12] & 0xffu), &shc); cpu->r[0] = v;
    }
L_0008fd28:;
    {
        wr32(cpu->r[3] + cpu->r[14], cpu->r[0]);
    }
L_0008fd2c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x48u);
    }
L_0008fd30:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000003u;
        }
    }
L_0008fd34:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x58u);
    }
L_0008fd38:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x4cu);
    }
L_0008fd3c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_0008fd40:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008fd44:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_0008fd48:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[12], 0, 0);
    }
L_0008fd4c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x48u);
    }
L_0008fd50:;
    {
        uint32_t v = shifter(cpu->r[1], 1, (cpu->r[14] & 0xffu), &shc); cpu->r[1] = v;
    }
L_0008fd54:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[1]);
    }
L_0008fd58:;
    {
        cpu->r[5] = rd32(cpu->r[12] + + 0x8u);
    }
L_0008fd5c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x58u);
    }
L_0008fd60:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 0);
    }
L_0008fd64:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008fd68:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[14], 0, 0);
    }
L_0008fd6c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x48u);
    }
L_0008fd70:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4cu);
    }
L_0008fd74:;
    {
        uint32_t v = shifter(cpu->r[5], 1, (cpu->r[3] & 0xffu), &shc); cpu->r[5] = v;
    }
L_0008fd78:;
    {
        wr32(cpu->r[12] + + 0x8u, cpu->r[5]);
    }
L_0008fd7c:;
    {
        cpu->r[3] = rd32(cpu->r[14] + + 0xcu);
    }
L_0008fd80:;
    {
        wr32(cpu->r[12] + + 0x18u, cpu->r[2]);
    }
L_0008fd84:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x58u);
    }
L_0008fd88:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0008fd8c:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_0008fd90:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4cu);
    }
L_0008fd94:;
    {
        uint32_t v = shifter(cpu->r[14], 1, (cpu->r[3] & 0xffu), &shc); cpu->r[14] = v;
    }
L_0008fd98:;
    {
        wr32(cpu->r[12] + + 0xcu, cpu->r[14]);
    }
L_0008fd9c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x5cu);
    }
L_0008fda0:;
    {
        cpu->r[3] = rd32(cpu->r[12]);
    }
L_0008fda4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0008fda8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x0000000fu;
        }
    }
L_0008fdac:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = 0x00008000u;
        }
    }
L_0008fdb0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[13] + + 0x88u);
        }
    }
L_0008fdb4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = cpu->r[3];
        }
    }
L_0008fdb8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[7] = cpu->r[6];
        }
    }
L_0008fdbc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[3] + + 0x32cu);
        }
    }
L_0008fdc0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[3] + + 0x3b0u);
        }
    }
L_0008fdc4:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[6], 2, (cpu->r[2] & 0xffu), &shc); cpu->r[7] = v;
        }
    }
L_0008fdc8:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[6], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[6] = v;
        }
    }
L_0008fdcc:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_0008fdd0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 0);
        }
    }
L_0008fdd4:;
    {
        uint32_t v = shifter(cpu->r[0], 1, (cpu->r[2] & 0xffu), &shc); cpu->r[0] = v;
    }
L_0008fdd8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[7], 0, 0);
        }
    }
L_0008fddc:;
    {
        uint32_t v = shifter(cpu->r[1], 1, (cpu->r[3] & 0xffu), &shc); cpu->r[12] = v;
    }
L_0008fde0:;
    {
        uint32_t v = shifter(cpu->r[0], 2, (cpu->r[2] & 0xffu), &shc); cpu->r[0] = v;
    }
L_0008fde4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = 0x00000000u;
        }
    }
L_0008fde8:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[5], 1, (cpu->r[2] & 0xffu), &shc); cpu->r[5] = v;
        }
    }
L_0008fdec:;
    {
        uint32_t v = shifter(cpu->r[12], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[12] = v;
    }
L_0008fdf0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = sub_flags(cpu, shifter(cpu->r[5], 2, (cpu->r[2] & 0xffu), &shc), cpu->r[0], 1, 0);
        }
    }
L_0008fdf4:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[5], 1, (cpu->r[2] & 0xffu), &shc); cpu->r[5] = v;
        }
    }
L_0008fdf8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[14], 1, 1);
    }
L_0008fdfc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008fe00:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], 0x00000001u, 1, 0);
        }
    }
L_0008fe04:;
    {
        wr32(cpu->r[1] + + 0x10u, cpu->r[5]);
    }
L_0008fe08:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = add_flags(cpu, cpu->r[14], cpu->r[6], 0, 0);
        }
    }
L_0008fe0c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x54u);
    }
L_0008fe10:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_0008fe14:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[1], 1, (cpu->r[3] & 0xffu), &shc); cpu->r[1] = v;
        }
    }
L_0008fe18:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008fe1c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[1], 2, (cpu->r[3] & 0xffu), &shc), cpu->r[12], 1, 0);
        }
    }
L_0008fe20:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[1], 1, (cpu->r[3] & 0xffu), &shc); cpu->r[1] = v;
        }
    }
L_0008fe24:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_0008fe28:;
    {
        wr32(cpu->r[14] + + 0x14u, cpu->r[1]);
    }
L_0008fe2c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00090434;
        }
    }
L_0008fe30:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_0008fe34:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_0008fe38:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[12]);
    }
L_0008fe3c:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[0]);
    }
L_0008fe40:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x5cu);
    }
L_0008fe44:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0008fe48:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_0008fe4c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_0008fe50:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x8u);
    }
L_0008fe54:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0xcu);
    }
L_0008fe58:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4cu);
    }
L_0008fe5c:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 1);
    }
L_0008fe60:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[6] = cpu->r[2];
        }
    }
L_0008fe64:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[12], 1, 1);
    }
L_0008fe68:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[5] = cpu->r[12];
        }
    }
L_0008fe6c:;
    {
        uint32_t v = shifter(cpu->r[3], 2, (cpu->r[6] & 0xffu), &shc); cpu->r[14] = v;
    }
L_0008fe70:;
    {
        uint32_t v = shifter(cpu->r[3], 2, (cpu->r[5] & 0xffu), &shc); cpu->r[0] = v;
    }
L_0008fe74:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[3], 0, 0);
    }
L_0008fe78:;
    {
        uint32_t v = shifter(cpu->r[3], 2, (cpu->r[2] & 0xffu), &shc); cpu->r[2] = v;
    }
L_0008fe7c:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[1]);
    }
L_0008fe80:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[3]);
    }
L_0008fe84:;
    {
        uint32_t v = shifter(cpu->r[3], 2, (cpu->r[1] & 0xffu), &shc); cpu->r[1] = v;
    }
L_0008fe88:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[14]);
    }
L_0008fe8c:;
    {
        uint32_t v = shifter(cpu->r[3], 2, (cpu->r[12] & 0xffu), &shc); cpu->r[3] = v;
    }
L_0008fe90:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_0008fe94:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_0008fe98:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[3]);
    }
L_0008fe9c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[14], 0x00000001u, 1, 0);
    }
L_0008fea0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x7cu);
    }
L_0008fea4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x20u);
    }
L_0008fea8:;
    {
        *vfp_d(cpu, 9) = *(double*)G(0x0008feb0u + + 0x128u);
    }
L_0008feac:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[1]);
    }
L_0008feb0:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[2]);
    }
L_0008feb4:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[3]);
    }
L_0008feb8:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[12]);
    }
L_0008febc:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[14]);
    }
L_0008fec0:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[0]);
    }
L_0008fec4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x54u);
    }
L_0008fec8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0008fecc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00090394;
        }
    }
L_0008fed0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x50u);
    }
L_0008fed4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_0008fed8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x48u);
    }
L_0008fedc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_0008fee0:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[2], 0x00000003u, 1, 1);
        }
    }
L_0008fee4:;
    {
        cpu->r[14] = cpu->r[2];
    }
L_0008fee8:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[14]);
    }
L_0008feec:;
    {
        wr32(cpu->r[3] + + 0x2cu, cpu->r[2]);
    }
L_0008fef0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_0008fef4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_0008fef8:;
    {
        cpu->r[0] = rd32(cpu->r[12]);
    }
L_0008fefc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 0);
    }
L_0008ff00:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4cu);
    }
L_0008ff04:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_0008ff08:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_0008ff0c:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_0008ff10:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x68u);
    }
L_0008ff14:;
    {
        uint32_t v = shifter(cpu->r[3], 2, (cpu->r[12] & 0xffu), &shc); cpu->r[1] = v;
    }
L_0008ff18:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_0008ff1c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, (cpu->r[12] & 0xffu), &shc); cpu->r[2] = v;
    }
L_0008ff20:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[14], 0, 0);
    }
L_0008ff24:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_0008ff28:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 0);
    }
L_0008ff2c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x48u);
    }
L_0008ff30:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x64u);
    }
L_0008ff34:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x60u);
    }
L_0008ff38:;
    {
        uint32_t v = shifter(cpu->r[3], 1, (cpu->r[0] & 0xffu), &shc); cpu->r[3] = v;
    }
L_0008ff3c:;
    {
        wr32(cpu->r[12] + + 0x1cu, cpu->r[3]);
    }
L_0008ff40:;
    {
        cpu->r[3] = rd32(cpu->r[14] + + 0x4u);
    }
L_0008ff44:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x68u);
    }
L_0008ff48:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0008ff4c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_0008ff50:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_0008ff54:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x48u);
    }
L_0008ff58:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_0008ff5c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x64u);
    }
L_0008ff60:;
    {
        uint32_t v = shifter(cpu->r[3], 1, (cpu->r[12] & 0xffu), &shc); cpu->r[3] = v;
    }
L_0008ff64:;
    {
        wr32(cpu->r[14] + + 0x20u, cpu->r[3]);
    }
L_0008ff68:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_0008ff6c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x68u);
    }
L_0008ff70:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0008ff74:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_0008ff78:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_0008ff7c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x64u);
    }
L_0008ff80:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 0);
    }
L_0008ff84:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x48u);
    }
L_0008ff88:;
    {
        uint32_t v = shifter(cpu->r[3], 1, (cpu->r[14] & 0xffu), &shc); cpu->r[3] = v;
    }
L_0008ff8c:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[3]);
    }
L_0008ff90:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0xcu);
    }
L_0008ff94:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0008ff98:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_0008ff9c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8cu);
    }
L_0008ffa0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_0008ffa4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x5cu);
    }
L_0008ffa8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[12], cpu->r[7], 0, 0);
    }
L_0008ffac:;
    {
        uint32_t v = shifter(cpu->r[3], 1, (cpu->r[14] & 0xffu), &shc); cpu->r[3] = v;
    }
L_0008ffb0:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[3]);
    }
L_0008ffb4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x14u);
    }
L_0008ffb8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0008ffbc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00090420;
        }
    }
L_0008ffc0:;
    {
        goto L_0008ffe8;
    }
L_0008ffe8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_0008ffec:;
    {
        cpu->r[0] = rd32(cpu->r[14] + + 0x2cu);
    }
L_0008fff0:;
    {
        cpu->r[14] = 0x0008fff4u; fn_0007f3e0(cpu);
    }
L_0008fff4:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0008fff8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x80u);
    }
L_0008fffc:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[7] + + 0x4u);
    }
L_00090000:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x70u);
    }
L_00090004:;
    {
        *vfp_d(cpu,8) = (double)*(int32_t*)vfp_s(cpu,16);
    }
L_00090008:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0009000c:;
    {
        cpu->r[1] = 0x40000000u;
    }
L_00090010:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x18u);
    }
L_00090014:;
    {
        cpu->r[12] = rd32(cpu->r[7]);
    }
L_00090018:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[14], 0, 0);
    }
L_0009001c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x18u);
    }
L_00090020:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 0);
    }
L_00090024:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_00090028:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_0009002c:;
    {
        *vfp_d(cpu,6) = (double)*(int32_t*)vfp_s(cpu,15);
    }
L_00090030:;
    {
        *vfp_d(cpu,7) = *vfp_d(cpu,11);
    }
L_00090034:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,6); cpu->r[2]= (uint32_t)v; cpu->r[3]=(uint32_t)(v>>32);
    }
L_00090038:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 7) + *vfp_d(cpu, 8) * *vfp_d(cpu, 10);
    }
L_0009003c:;
    {
        *vfp_d(cpu,8) = *vfp_d(cpu,7);
    }
L_00090040:;
    {
        cpu->r[14] = 0x00090044u; imp_pow(cpu); /* pow */
    }
L_00090044:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00090048:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x84u);
    }
L_0009004c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00090050:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x324u);
    }
L_00090054:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x78u);
    }
L_00090058:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_0009005c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00090060:;
    {
        cpu->r[7] = rd32(cpu->r[12] + cpu->r[14]);
    }
L_00090064:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_00090068:;
    {
        wr32(cpu->r[14] + + 0x34u, cpu->r[3]);
    }
L_0009006c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_00090070:;
    {
        cpu->r[2] = rd32(cpu->r[3] + + 0x14u);
    }
L_00090074:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x10u);
    }
L_00090078:;
    {
        uint32_t v = cpu->r[3] * cpu->r[2]; cpu->r[3] = v;
    }
L_0009007c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_00090080:;
    {
        *(uint64_t*)vfp_d(cpu,6) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_00090084:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 8) * *vfp_d(cpu, 6);
    }
L_00090088:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0009008c:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 7) * *vfp_d(cpu, 9);
    }
L_00090090:;
    {
        *vfp_s(cpu,15) = (float)*vfp_d(cpu,7);
    }
L_00090094:;
    {
        *(uint32_t*)G(cpu->r[14] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00090098:;
    {
        cpu->r[14] = 0x000900a0u;
    }
L_0009009c:;
    {
        uint32_t t = rd32(cpu->r[7]);
        if (guest_pc_write(cpu, t, entry_lr, 0x000900a0u)) return;
    }
L_000900a0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_000900a4:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_000900a8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_000900ac:;
    {
        wr32(cpu->r[1] + + 0x30u, cpu->r[10]);
    }
L_000900b0:;
    {
        cpu->r[8] = rd32(cpu->r[0] + + 0x10u);
    }
L_000900b4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x14u);
    }
L_000900b8:;
    {
        uint32_t v = cpu->r[3] * cpu->r[8]; cpu->r[3] = v;
    }
L_000900bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000900c0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000902f0;
        }
    }
L_000900c4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000900c8:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[7]);
    }
L_000900cc:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_000900d0:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_000900d4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_000900d8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000900dc:;
    {
        cpu->r[14] = 0x000900e0u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_000900e0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x44u);
    }
L_000900e4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_000900e8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000900ec:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_000900f0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[10], cpu->r[3], 0, 0);
    }
L_000900f4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[12], shifter(cpu->r[1], 2, (cpu->r[14] & 0xffu), &shc), 0, 0);
    }
L_000900f8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000900fc:;
    {
        cpu->r[14] = 0x00090100u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00090100:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_00090104:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00090108:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x30u);
    }
L_0009010c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x1cu);
    }
L_00090110:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], cpu->r[12], 0, 0);
    }
L_00090114:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x40u);
    }
L_00090118:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[2], 1, 1);
    }
L_0009011c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[9] = cpu->r[2];
        }
    }
L_00090120:;
    {
        wr32(cpu->r[10] + cpu->r[14], cpu->r[9]);
    }
L_00090124:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x24u);
    }
L_00090128:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x20u);
    }
L_0009012c:;
    {
        uint32_t v = shifter(cpu->r[9], 1, (cpu->r[6] & 0xffu), &shc); cpu->r[9] = v;
    }
L_00090130:;
    {
        uint32_t v = shifter(cpu->r[9], 2, (cpu->r[6] & 0xffu), &shc); cpu->r[9] = v;
    }
L_00090134:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[9]);
    }
L_00090138:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], shifter(cpu->r[0], 2, (cpu->r[14] & 0xffu), &shc), 0, 0);
    }
L_0009013c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_00090140:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_00090144:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = cpu->r[2];
        }
    }
L_00090148:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = cpu->r[1];
        }
    }
L_0009014c:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[1]);
    }
L_00090150:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x3cu);
    }
L_00090154:;
    {
        cpu->r[0] = rd32(cpu->r[12] + + 0x24u);
    }
L_00090158:;
    {
        uint32_t v = shifter(cpu->r[1], 1, (cpu->r[5] & 0xffu), &shc); cpu->r[1] = v;
    }
L_0009015c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[14], 0, 0);
    }
L_00090160:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x34u);
    }
L_00090164:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_00090168:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = cpu->r[0];
        }
    }
L_0009016c:;
    {
        wr32(cpu->r[7] + + 0x8u, cpu->r[3]);
    }
L_00090170:;
    {
        cpu->r[0] = rd32(cpu->r[12] + + 0x28u);
    }
L_00090174:;
    {
        uint32_t v = shifter(cpu->r[1], 2, (cpu->r[5] & 0xffu), &shc); cpu->r[1] = v;
    }
L_00090178:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x38u);
    }
L_0009017c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_00090180:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = cpu->r[0];
        }
    }
L_00090184:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_00090188:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_0009018c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[14], 0, 0);
    }
L_00090190:;
    {
        wr32(cpu->r[7] + + 0xcu, cpu->r[2]);
    }
L_00090194:;
    {
        cpu->r[12] = 0x0000002cu;
    }
L_00090198:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_0009019c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, (cpu->r[6] & 0xffu), &shc); cpu->r[3] = v;
    }
L_000901a0:;
    {
        uint32_t v = shifter(cpu->r[1], 1, (cpu->r[5] & 0xffu), &shc); cpu->r[1] = v;
    }
L_000901a4:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 2, (cpu->r[6] & 0xffu), &shc), cpu->r[9], 1, 0);
    }
L_000901a8:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[1], 2, (cpu->r[5] & 0xffu), &shc), cpu->r[2], 1, 0);
    }
L_000901ac:;
    {
        uint32_t v = shifter(cpu->r[3], 1, (cpu->r[6] & 0xffu), &shc); cpu->r[3] = v;
    }
L_000901b0:;
    {
        wr32(cpu->r[7] + + 0x10u, cpu->r[3]);
    }
L_000901b4:;
    {
        uint32_t v = shifter(cpu->r[1], 1, (cpu->r[5] & 0xffu), &shc); cpu->r[1] = v;
    }
L_000901b8:;
    {
        wr32(cpu->r[7] + + 0x14u, cpu->r[1]);
    }
L_000901bc:;
    {
        uint32_t v = cpu->r[3] * cpu->r[1]; cpu->r[3] = v;
    }
L_000901c0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_000901c4:;
    {
        uint32_t v = cpu->r[12] * cpu->r[3]; cpu->r[0] = v;
    }
L_000901c8:;
    {
        cpu->r[14] = 0x000901d0u;
    }
L_000901cc:;
    {
        uint32_t t = rd32(cpu->r[1]);
        if (guest_pc_write(cpu, t, entry_lr, 0x000901d0u)) return;
    }
L_000901d0:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x14u);
    }
L_000901d4:;
    {
        wr32(cpu->r[7] + + 0x18u, cpu->r[0]);
    }
L_000901d8:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x10u);
    }
L_000901dc:;
    {
        cpu->r[14] = 0x000901e0u; fn_000920d4(cpu);
    }
L_000901e0:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x14u);
    }
L_000901e4:;
    {
        wr32(cpu->r[7] + + 0x1cu, cpu->r[0]);
    }
L_000901e8:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x10u);
    }
L_000901ec:;
    {
        cpu->r[14] = 0x000901f0u; fn_000920d4(cpu);
    }
L_000901f0:;
    {
        cpu->r[10] = rd32(cpu->r[7] + + 0x10u);
    }
L_000901f4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x14u);
    }
L_000901f8:;
    {
        uint32_t v = cpu->r[3] * cpu->r[10]; cpu->r[3] = v;
    }
L_000901fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00090200:;
    {
        wr32(cpu->r[7] + + 0x20u, cpu->r[0]);
    }
L_00090204:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000902b8;
        }
    }
L_00090208:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_0009020c:;
    {
        cpu->r[8] = cpu->r[9];
    }
L_00090210:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00090214:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00090218:;
    {
        cpu->r[14] = 0x0009021cu; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_0009021c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_00090220:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00090224:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_00090228:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[2], shifter(cpu->r[1], 2, (cpu->r[6] & 0xffu), &shc), 0, 0);
    }
L_0009022c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00090230:;
    {
        cpu->r[14] = 0x00090234u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00090234:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x18u);
    }
L_00090238:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_0009023c:;
    {
        cpu->r[12] = rd32(cpu->r[7]);
    }
L_00090240:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[11], cpu->r[3], 0, 0);
    }
L_00090244:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[9], 0, 0);
    }
L_00090248:;
    {
        wr32(cpu->r[2] + cpu->r[9], cpu->r[4]);
    }
L_0009024c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x0000002cu, 0, 0);
    }
L_00090250:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[12], 1, 1);
    }
L_00090254:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[3] + + 0x8u, cpu->r[11]);
        }
    }
L_00090258:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[3] + + 0x8u, cpu->r[12]);
        }
    }
L_0009025c:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x4u);
    }
L_00090260:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4u);
    }
L_00090264:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[4]);
    }
L_00090268:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], shifter(cpu->r[0], 2, (cpu->r[5] & 0xffu), &shc), 0, 0);
    }
L_0009026c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_00090270:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[3] + + 0xcu, cpu->r[0]);
        }
    }
L_00090274:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[3] + + 0xcu, cpu->r[2]);
        }
    }
L_00090278:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x8u);
    }
L_0009027c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_00090280:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_00090284:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[3] + + 0x10u, cpu->r[1]);
        }
    }
L_00090288:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[3] + + 0x10u, cpu->r[2]);
        }
    }
L_0009028c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[12], 0, 0);
    }
L_00090290:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0xcu);
    }
L_00090294:;
    {
        wr32(cpu->r[3] + + 0x28u, cpu->r[4]);
    }
L_00090298:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_0009029c:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[3] + + 0x14u, cpu->r[0]);
        }
    }
L_000902a0:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[3] + + 0x14u, cpu->r[2]);
        }
    }
L_000902a4:;
    {
        cpu->r[10] = rd32(cpu->r[7] + + 0x10u);
    }
L_000902a8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x14u);
    }
L_000902ac:;
    {
        uint32_t v = cpu->r[3] * cpu->r[10]; cpu->r[3] = v;
    }
L_000902b0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_000902b4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00090210;
        }
    }
L_000902b8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_000902bc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_000902c0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000902c4:;
    {
        cpu->r[8] = rd32(cpu->r[0] + + 0x10u);
    }
L_000902c8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_000902cc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x14u);
    }
L_000902d0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000024u, 0, 0);
    }
L_000902d4:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[1]);
    }
L_000902d8:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_000902dc:;
    {
        uint32_t v = cpu->r[3] * cpu->r[8]; cpu->r[3] = v;
    }
L_000902e0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_000902e4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
        }
    }
L_000902e8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[10] = rd32(cpu->r[3] + + 0x30u);
        }
    }
L_000902ec:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000900d4;
        }
    }
L_000902f0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_000902f4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_000902f8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x60u);
    }
L_000902fc:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x18u);
    }
L_00090300:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000020u, 0, 0);
    }
L_00090304:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x6cu);
    }
L_00090308:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_0009030c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x50u);
    }
L_00090310:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_00090314:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_00090318:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0009031c:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[1]);
    }
L_00090320:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[2]);
    }
L_00090324:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008fec4;
        }
    }
L_00090328:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x48u);
    }
L_0009032c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x54u);
    }
L_00090330:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x74u);
    }
L_00090334:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x10u);
    }
L_00090338:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0009033c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x88u);
    }
L_00090340:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000007cu, 0, 0);
    }
L_00090344:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x7cu);
    }
L_00090348:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_0009034c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_00090350:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[1]);
    }
L_00090354:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000018u, 0, 0);
    }
L_00090358:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[2]);
    }
L_0009035c:;
    {
        wr32(cpu->r[13] + + 0x88u, cpu->r[6]);
    }
L_00090360:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[12]);
    }
L_00090364:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0008fcd4;
        }
    }
L_00090368:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x98u);
    }
L_0009036c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x94u);
    }
L_00090370:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x70u);
    }
L_00090374:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000430u, 0, 0);
    }
L_00090378:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_0009037c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00090380:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000030u, 0, 0);
    }
L_00090384:;
    {
        wr32(cpu->r[13] + + 0x94u, cpu->r[1]);
    }
L_00090388:;
    {
        wr32(cpu->r[13] + + 0x98u, cpu->r[3]);
    }
L_0009038c:;
    {
        wr32(cpu->r[13] + + 0x70u, cpu->r[2]);
    }
L_00090390:;
    {
        goto L_0008fb8c;
    }
L_00090394:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_00090398:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x48u);
    }
L_0009039c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x54u);
    }
L_000903a0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x58u);
    }
L_000903a4:;
    {
        cpu->r[7] = cpu->r[14];
    }
L_000903a8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x50u);
    }
L_000903ac:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[14]);
    }
L_000903b0:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_000903b4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x4cu);
    }
L_000903b8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_000903bc:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[1]);
    }
L_000903c0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_000903c4:;
    {
        uint32_t v = shifter(cpu->r[3], 1, (cpu->r[14] & 0xffu), &shc); cpu->r[3] = v;
    }
L_000903c8:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[3]);
    }
L_000903cc:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x4u);
    }
L_000903d0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_000903d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_000903d8:;
    {
        uint32_t v = shifter(cpu->r[3], 1, (cpu->r[14] & 0xffu), &shc); cpu->r[3] = v;
    }
L_000903dc:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[3]);
    }
L_000903e0:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x8u);
    }
L_000903e4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_000903e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_000903ec:;
    {
        uint32_t v = shifter(cpu->r[3], 1, (cpu->r[14] & 0xffu), &shc); cpu->r[3] = v;
    }
L_000903f0:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[3]);
    }
L_000903f4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0xcu);
    }
L_000903f8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x5cu);
    }
L_000903fc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00090400:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_00090404:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8cu);
    }
L_00090408:;
    {
        uint32_t v = shifter(cpu->r[3], 1, (cpu->r[14] & 0xffu), &shc); cpu->r[3] = v;
    }
L_0009040c:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[3]);
    }
L_00090410:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x14u);
    }
L_00090414:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[12], cpu->r[7], 0, 0);
    }
L_00090418:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0009041c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0008ffe8;
        }
    }
L_00090420:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_00090424:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x2cu);
    }
L_00090428:;
    {
        cpu->r[14] = 0x0009042cu; fn_0007efd4(cpu);
    }
L_0009042c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00090430:;
    {
        goto L_0008fff8;
    }
L_00090434:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00090438:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_0009043c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_00090440:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00090444:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 1u, &shc); cpu->r[0] = v;
    }
L_00090448:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 1u, &shc); cpu->r[12] = v;
    }
L_0009044c:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_00090450:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_00090454:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[0]);
    }
L_00090458:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[12]);
    }
L_0009045c:;
    {
        goto L_0008fe40;
    }
L_00090460:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000a4u, 0, 0);
    }
L_00090464:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        *(uint64_t*)vfp_d(cpu, 10) = rd64(cpu->r[13] + 16u);
        *(uint64_t*)vfp_d(cpu, 11) = rd64(cpu->r[13] + 24u);
        cpu->r[13] += 32u;
    }
L_00090468:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0009046cu)) return;
    }
}

/* tcd_init_encode @ 00090470 (arm) */
void fn_00090470(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00090470:;
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
L_00090474:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_00090478:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_0009047c:;
    {
        cpu->r[8] = rd32(cpu->r[2] + + 0x44u);
    }
L_00090480:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_00090484:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x6cu);
    }
L_00090488:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000acu, 1, 0);
    }
L_0009048c:;
    {
        cpu->r[2] = rd32(0x00090494u + + 0x1d8u);
    }
L_00090490:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00090494:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[1]);
    }
L_00090498:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0009049c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000904a0:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
    }
L_000904a4:;
    {
        cpu->r[2] = 0x000015d4u;
    }
L_000904a8:;
    {
        uint32_t v = cpu->r[2] * cpu->r[7] + cpu->r[3]; cpu->r[3] = v;
    }
L_000904ac:;
    {
        wr32(cpu->r[13] + + 0xa0u, cpu->r[3]);
    }
L_000904b0:;
    {
        cpu->r[14] = 0x000904b4u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_000904b4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000904b8:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_000904bc:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000904c0:;
    {
        cpu->r[14] = 0x000904c4u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_000904c4:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x38u);
    }
L_000904c8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x30u);
    }
L_000904cc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_000904d0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_000904d4:;
    {
        *vfp_s(cpu, 9) = *(float*)G(0x000904dcu + + 0x17cu);
    }
L_000904d8:;
    {
        cpu->r[6] = rd32(cpu->r[6] + + 0x18u);
    }
L_000904dc:;
    {
        *vfp_s(cpu, 10) = *(float*)G(0x000904e4u + + 0x178u);
    }
L_000904e0:;
    {
        uint32_t v = cpu->r[7] * cpu->r[5] + cpu->r[2]; cpu->r[5] = v;
    }
L_000904e4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000904ecu + + 0x174u);
    }
L_000904e8:;
    {
        cpu->r[3] = add_flags(cpu, 0x000904f0u, cpu->r[3], 0, 0);
    }
L_000904ec:;
    {
        *vfp_s(cpu, 11) = *(float*)G(0x000904f4u + + 0x170u);
    }
L_000904f0:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_000904f4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000904f8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x7cu);
    }
L_000904fc:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x00090504u + + 0x164u);
    }
L_00090500:;
    {
        cpu->r[6] = rd32(cpu->r[6] + + 0x8u);
    }
L_00090504:;
    {
        cpu->r[8] = rd32(cpu->r[3]);
    }
L_00090508:;
    {
        wr32(cpu->r[13] + + 0x88u, cpu->r[6]);
    }
L_0009050c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xa0u);
    }
L_00090510:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[8], 1, 1);
    }
L_00090514:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[6], cpu->r[5]);
        }
    }
L_00090518:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[6], cpu->r[8]);
        }
    }
L_0009051c:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x3cu);
    }
L_00090520:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x34u);
    }
L_00090524:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x7cu);
    }
L_00090528:;
    {
        cpu->r[7] = rd32(cpu->r[8] + + 0x4u);
    }
L_0009052c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00090530:;
    {
        uint32_t v = cpu->r[6] * cpu->r[0] + cpu->r[5]; cpu->r[0] = v;
    }
L_00090534:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x88u);
    }
L_00090538:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 1);
    }
L_0009053c:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[5] + + 0x4u, cpu->r[0]);
        }
    }
L_00090540:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[5] + + 0x4u, cpu->r[7]);
        }
    }
L_00090544:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_00090548:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x38u);
    }
L_0009054c:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x30u);
    }
L_00090550:;
    {
        cpu->r[0] = rd32(cpu->r[8] + + 0x8u);
    }
L_00090554:;
    {
        uint32_t v = cpu->r[6] * cpu->r[12] + cpu->r[5]; cpu->r[12] = v;
    }
L_00090558:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x88u);
    }
L_0009055c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 1);
    }
L_00090560:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[6] + + 0x8u, cpu->r[12]);
        }
    }
L_00090564:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[6] + + 0x8u, cpu->r[0]);
        }
    }
L_00090568:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x34u);
    }
L_0009056c:;
    {
        cpu->r[4] = rd32(cpu->r[4] + + 0x3cu);
    }
L_00090570:;
    {
        cpu->r[0] = rd32(cpu->r[8] + + 0xcu);
    }
L_00090574:;
    {
        uint32_t v = cpu->r[4] * cpu->r[1] + cpu->r[12]; cpu->r[1] = v;
    }
L_00090578:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_0009057c:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[6] + + 0xcu, cpu->r[1]);
        }
    }
L_00090580:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[6] + + 0xcu, cpu->r[0]);
        }
    }
L_00090584:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00090588:;
    {
        cpu->r[1] = rd32(cpu->r[8] + + 0x10u);
    }
L_0009058c:;
    {
        cpu->r[12] = cpu->r[1];
    }
L_00090590:;
    {
        wr32(cpu->r[6] + + 0x10u, cpu->r[1]);
    }
L_00090594:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0xcu);
    }
L_00090598:;
    {
        goto L_000905bc;
    }
L_0009059c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + + 0x10u);
    }
L_000905a0:;
    {
        vfp_vadd(cpu, 8, 13, 11);
    }
L_000905a4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,8));
    }
L_000905a8:;
    {
        vfp_sync_flags(cpu);
    }
L_000905ac:;
    {
        if (cond_test(cpu, 5)) {
        vfp_vadd(cpu, 13, 13, 12);
        }
    }
L_000905b0:;
    {
        if (cond_test(cpu, 5)) {
        *(uint32_t*)G(cpu->r[3] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 13);
        }
    }
L_000905b4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000905b8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_000905bc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_000905c0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00090678;
        }
    }
L_000905c4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x14u);
    }
L_000905c8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_000905cc:;
    {
        vfp_sync_flags(cpu);
    }
L_000905d0:;
    {
        if (cond_test(cpu, 1)) {
        *(uint32_t*)G(cpu->r[3] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 9);
        }
    }
L_000905d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000905b4;
        }
    }
L_000905d8:;
    {
        vfp_vmul(cpu, 8, 15, 10);
    }
L_000905dc:;
    {
        cpu->r[5] = rd32(cpu->r[8] + + 0x18u);
    }
L_000905e0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[5]);
    }
L_000905e4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x4u);
    }
L_000905e8:;
    {
        cpu->r[10] = rd32(cpu->r[0] + + 0x8u);
    }
L_000905ec:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x18u);
    }
L_000905f0:;
    {
        cpu->r[6] = rd32(cpu->r[0]);
    }
L_000905f4:;
    {
        uint32_t v = cpu->r[1] * cpu->r[7]; cpu->r[5] = v;
    }
L_000905f8:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[10], cpu->r[6], 1, 0);
    }
L_000905fc:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0x4u);
    }
L_00090600:;
    {
        cpu->r[10] = rd32(cpu->r[0] + + 0xcu);
    }
L_00090604:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[10], cpu->r[7], 1, 0);
    }
L_00090608:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0009060c:;
    {
        uint32_t v = cpu->r[6] * cpu->r[5]; cpu->r[5] = v;
    }
L_00090610:;
    {
        vfp_vmul(cpu, 8, 8, 13);
    }
L_00090614:;
    {
        uint32_t v = cpu->r[7] * cpu->r[5]; cpu->r[7] = v;
    }
L_00090618:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[7];
    }
L_0009061c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00090620:;
    {
        vfp_vmul(cpu, 15, 8, 15);
    }
L_00090624:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00090628:;
    {
        vfp_vdiv(cpu, 15, 13, 15);
    }
L_0009062c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_00090630:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00090634:;
    {
        vfp_sync_flags(cpu);
    }
L_00090638:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000905b4;
        }
    }
L_0009063c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00090640:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009059c;
        }
    }
L_00090644:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_00090648:;
    {
        vfp_sync_flags(cpu);
    }
L_0009064c:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[5] = rd32(cpu->r[13] + + 0xa0u);
        }
    }
L_00090650:;
    {
        if (cond_test(cpu, 5)) {
        *(uint32_t*)G(cpu->r[5] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 14);
        }
    }
L_00090654:;
    {
        goto L_000905b4;
    }
L_00090678:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_0009067c:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[6]);
    }
L_00090680:;
    {
        wr32(cpu->r[13] + + 0xa4u, cpu->r[6]);
    }
L_00090684:;
    {
        wr32(cpu->r[13] + + 0x9cu, cpu->r[6]);
    }
L_00090688:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x9cu);
    }
L_0009068c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[12], 1, 1);
    }
L_00090690:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00090f3c;
        }
    }
L_00090694:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x7cu);
    }
L_00090698:;
    {
        cpu->r[3] = 0x000015d0u;
    }
L_0009069c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x88u);
    }
L_000906a0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x80u);
    }
L_000906a4:;
    {
        cpu->r[6] = rd32(cpu->r[7] + + 0x18u);
    }
L_000906a8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xa0u);
    }
L_000906ac:;
    {
        cpu->r[4] = cpu->r[6];
    }
L_000906b0:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_000906b4:;
    {
        cpu->r[7] = rd32(cpu->r[8] + + 0x14u);
    }
L_000906b8:;
    {
        uint32_t wb_tmp = cpu->r[4] + cpu->r[14];
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[14]);
        cpu->r[4] = wb_tmp;
    }
L_000906bc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x9cu);
    }
L_000906c0:;
    {
        cpu->r[8] = rd32(0x000906c8u + - 0x58u);
    }
L_000906c4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], cpu->r[0], 0, 0);
    }
L_000906c8:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_000906cc:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_000906d0:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0xa4u);
    }
L_000906d4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], shifter(cpu->r[2], 2, 5u, &shc), 0, 0);
    }
L_000906d8:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[8]);
    }
L_000906dc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_000906e0:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[2]);
    }
L_000906e4:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[3]);
    }
L_000906e8:;
    {
        cpu->r[14] = 0x000906ecu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_000906ec:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x88u);
    }
L_000906f0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x9cu);
    }
L_000906f4:;
    {
        wr32(cpu->r[7] + shifter(cpu->r[12], 2, 5u, &shc), cpu->r[0]);
    }
L_000906f8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000906fc:;
    {
        cpu->r[2] = rd32(cpu->r[14] + + 0x4u);
    }
L_00090700:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_00090704:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00090708:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_0009070c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00090710:;
    {
        cpu->r[14] = 0x00090714u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00090714:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x80u);
    }
L_00090718:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0009071c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x54u);
    }
L_00090720:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[7]);
    }
L_00090724:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[1]);
    }
L_00090728:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x88u);
    }
L_0009072c:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00090730:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x8u);
    }
L_00090734:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_00090738:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0009073c:;
    {
        cpu->r[14] = 0x00090740u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00090740:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x54u);
    }
L_00090744:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x88u);
    }
L_00090748:;
    {
        wr32(cpu->r[8] + + 0x8u, cpu->r[0]);
    }
L_0009074c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00090750:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0xcu);
    }
L_00090754:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 0);
    }
L_00090758:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_0009075c:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00090760:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_00090764:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00090768:;
    {
        cpu->r[14] = 0x0009076cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0009076c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x28u);
    }
L_00090770:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00090774:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[14]);
    }
L_00090778:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 0);
    }
L_0009077c:;
    {
        wr32(cpu->r[8] + + 0xcu, cpu->r[0]);
    }
L_00090780:;
    {
        uint32_t v = cpu->r[5] * cpu->r[7]; cpu->r[0] = v;
    }
L_00090784:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00090788:;
    {
        cpu->r[14] = 0x00090790u;
    }
L_0009078c:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00090790u)) return;
    }
L_00090790:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x68u);
    }
L_00090794:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x4u);
    }
L_00090798:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0009079c:;
    {
        wr32(cpu->r[8] + + 0x10u, cpu->r[3]);
    }
L_000907a0:;
    {
        wr32(cpu->r[8] + + 0x18u, cpu->r[0]);
    }
L_000907a4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00090e40;
        }
    }
L_000907a8:;
    {
        cpu->r[6] = rd32(0x000907b0u + - 0x13cu);
    }
L_000907ac:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000907b0:;
    {
        *vfp_d(cpu, 9) = *(double*)G(0x000907b8u + + 0x368u);
    }
L_000907b4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[2], 0x0000001cu, 0, 0);
    }
L_000907b8:;
    {
        cpu->r[8] = (~0x0000000fu);
    }
L_000907bc:;
    {
        wr32(cpu->r[13] + + 0x84u, cpu->r[5]);
    }
L_000907c0:;
    {
        wr32(cpu->r[13] + + 0x98u, cpu->r[6]);
    }
L_000907c4:;
    {
        wr32(cpu->r[13] + + 0x94u, cpu->r[7]);
    }
L_000907c8:;
    {
        wr32(cpu->r[13] + + 0x90u, cpu->r[2]);
    }
L_000907cc:;
    {
        wr32(cpu->r[13] + + 0x8cu, cpu->r[8]);
    }
L_000907d0:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[5]);
    }
L_000907d4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x54u);
    }
L_000907d8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_000907dc:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x60u);
    }
L_000907e0:;
    {
        cpu->r[4] = 0x00000001u;
    }
L_000907e4:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x84u);
    }
L_000907e8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[14], 1, 0);
    }
L_000907ec:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[3]);
    }
L_000907f0:;
    {
        cpu->r[0] = rd32(cpu->r[12]);
    }
L_000907f4:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000000u, 1, 1);
    }
L_000907f8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x58u);
    }
L_000907fc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = cpu->r[4];
        }
    }
L_00090800:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x14u);
    }
L_00090804:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_00090808:;
    {
        uint32_t v = shifter(cpu->r[4], 2, (cpu->r[1] & 0xffu), &shc); cpu->r[1] = v;
    }
L_0009080c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x58u);
    }
L_00090810:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_00090814:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[1]);
    }
L_00090818:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x64u);
    }
L_0009081c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000003u;
        }
    }
L_00090820:;
    {
        uint32_t v = shifter(cpu->r[0], 1, (cpu->r[6] & 0xffu), &shc); cpu->r[0] = v;
    }
L_00090824:;
    {
        wr32(cpu->r[3] + cpu->r[7], cpu->r[0]);
    }
L_00090828:;
    {
        cpu->r[1] = rd32(cpu->r[12] + + 0x4u);
    }
L_0009082c:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x84u);
    }
L_00090830:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_00090834:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_00090838:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[8], 0, 0);
    }
L_0009083c:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[5]);
    }
L_00090840:;
    {
        uint32_t v = shifter(cpu->r[1], 1, (cpu->r[6] & 0xffu), &shc); cpu->r[1] = v;
    }
L_00090844:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[1]);
    }
L_00090848:;
    {
        cpu->r[14] = rd32(cpu->r[12] + + 0x8u);
    }
L_0009084c:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], 0x00000001u, 1, 0);
    }
L_00090850:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], cpu->r[8], 0, 0);
    }
L_00090854:;
    {
        uint32_t v = shifter(cpu->r[14], 1, (cpu->r[6] & 0xffu), &shc); cpu->r[14] = v;
    }
L_00090858:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[14]);
    }
L_0009085c:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0xcu);
    }
L_00090860:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], 0x00000001u, 1, 0);
    }
L_00090864:;
    {
        wr32(cpu->r[5] + + 0x18u, cpu->r[2]);
    }
L_00090868:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0009086c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x68u);
    }
L_00090870:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_00090874:;
    {
        uint32_t v = shifter(cpu->r[12], 1, (cpu->r[6] & 0xffu), &shc); cpu->r[12] = v;
    }
L_00090878:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[12]);
    }
L_0009087c:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_00090880:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 0);
    }
L_00090884:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x24u);
    }
L_00090888:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0009088c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = 0x00008000u;
        }
    }
L_00090890:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x0000000fu;
        }
    }
L_00090894:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[13] + + 0x90u);
        }
    }
L_00090898:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = cpu->r[4];
        }
    }
L_0009089c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = cpu->r[3];
        }
    }
L_000908a0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[3] + + 0x32cu);
        }
    }
L_000908a4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[3] + + 0x3b0u);
        }
    }
L_000908a8:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[4], 2, (cpu->r[2] & 0xffu), &shc); cpu->r[5] = v;
        }
    }
L_000908ac:;
    {
        uint32_t v = shifter(cpu->r[0], 1, (cpu->r[2] & 0xffu), &shc); cpu->r[0] = v;
    }
L_000908b0:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[4], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[4] = v;
        }
    }
L_000908b4:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], cpu->r[5], 0, 0);
    }
L_000908b8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[12], cpu->r[4], 0, 0);
    }
L_000908bc:;
    {
        uint32_t v = shifter(cpu->r[1], 1, (cpu->r[3] & 0xffu), &shc); cpu->r[1] = v;
    }
L_000908c0:;
    {
        uint32_t v = shifter(cpu->r[14], 1, (cpu->r[2] & 0xffu), &shc); cpu->r[12] = v;
    }
L_000908c4:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x60u);
    }
L_000908c8:;
    {
        uint32_t v = shifter(cpu->r[4], 1, (cpu->r[3] & 0xffu), &shc); cpu->r[4] = v;
    }
L_000908cc:;
    {
        uint32_t v = shifter(cpu->r[0], 2, (cpu->r[2] & 0xffu), &shc); cpu->r[0] = v;
    }
L_000908d0:;
    {
        uint32_t v = shifter(cpu->r[1], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[1] = v;
    }
L_000908d4:;
    {
        cpu->r[12] = sub_flags(cpu, shifter(cpu->r[12], 2, (cpu->r[2] & 0xffu), &shc), cpu->r[0], 1, 0);
    }
L_000908d8:;
    {
        cpu->r[4] = sub_flags(cpu, shifter(cpu->r[4], 2, (cpu->r[3] & 0xffu), &shc), cpu->r[1], 1, 0);
    }
L_000908dc:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000908e0:;
    {
        uint32_t v = shifter(cpu->r[12], 1, (cpu->r[2] & 0xffu), &shc); cpu->r[12] = v;
    }
L_000908e4:;
    {
        wr32(cpu->r[6] + + 0x10u, cpu->r[12]);
    }
L_000908e8:;
    {
        uint32_t v = shifter(cpu->r[4], 1, (cpu->r[3] & 0xffu), &shc); cpu->r[4] = v;
    }
L_000908ec:;
    {
        wr32(cpu->r[6] + + 0x14u, cpu->r[4]);
    }
L_000908f0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00090f10;
        }
    }
L_000908f4:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[3]);
    }
L_000908f8:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[2]);
    }
L_000908fc:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[1]);
    }
L_00090900:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[0]);
    }
L_00090904:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x68u);
    }
L_00090908:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0009090c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x34u);
    }
L_00090910:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x30u);
    }
L_00090914:;
    {
        cpu->r[5] = rd32(cpu->r[7] + + 0x8u);
    }
L_00090918:;
    {
        uint32_t v = shifter(cpu->r[3], 2, (cpu->r[12] & 0xffu), &shc); cpu->r[6] = v;
    }
L_0009091c:;
    {
        cpu->r[4] = rd32(cpu->r[7] + + 0xcu);
    }
L_00090920:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x58u);
    }
L_00090924:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[12], 1, 1);
    }
L_00090928:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[5] = cpu->r[12];
        }
    }
L_0009092c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[14], 1, 1);
    }
L_00090930:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[4] = cpu->r[14];
        }
    }
L_00090934:;
    {
        uint32_t v = shifter(cpu->r[3], 2, (cpu->r[5] & 0xffu), &shc); cpu->r[0] = v;
    }
L_00090938:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[3], 0, 0);
    }
L_0009093c:;
    {
        uint32_t v = shifter(cpu->r[3], 2, (cpu->r[4] & 0xffu), &shc); cpu->r[1] = v;
    }
L_00090940:;
    {
        uint32_t v = shifter(cpu->r[3], 2, (cpu->r[8] & 0xffu), &shc); cpu->r[2] = v;
    }
L_00090944:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[3]);
    }
L_00090948:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_0009094c:;
    {
        uint32_t v = shifter(cpu->r[3], 2, (cpu->r[14] & 0xffu), &shc); cpu->r[3] = v;
    }
L_00090950:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x8cu);
    }
L_00090954:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_00090958:;
    {
        wr32(cpu->r[13] + + 0x70u, cpu->r[8]);
    }
L_0009095c:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_00090960:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_00090964:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_00090968:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[2]);
    }
L_0009096c:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[6]);
    }
L_00090970:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[3]);
    }
L_00090974:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[7]);
    }
L_00090978:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[8]);
    }
L_0009097c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_00090980:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[14]);
    }
L_00090984:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x60u);
    }
L_00090988:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009098c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00090e74;
        }
    }
L_00090990:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00090994:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_00090998:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x54u);
    }
L_0009099c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_000909a0:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[1], 0x00000003u, 1, 1);
        }
    }
L_000909a4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000909a8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000909ac:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x58u);
    }
L_000909b0:;
    {
        wr32(cpu->r[2] + + 0x2cu, cpu->r[1]);
    }
L_000909b4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 0);
    }
L_000909b8:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000909bc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_000909c0:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_000909c4:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_000909c8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x74u);
    }
L_000909cc:;
    {
        uint32_t v = shifter(cpu->r[3], 2, (cpu->r[7] & 0xffu), &shc); cpu->r[1] = v;
    }
L_000909d0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_000909d4:;
    {
        uint32_t v = shifter(cpu->r[2], 2, (cpu->r[7] & 0xffu), &shc); cpu->r[2] = v;
    }
L_000909d8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_000909dc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_000909e0:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x54u);
    }
L_000909e4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 0);
    }
L_000909e8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x70u);
    }
L_000909ec:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x5cu);
    }
L_000909f0:;
    {
        uint32_t v = shifter(cpu->r[3], 1, (cpu->r[14] & 0xffu), &shc); cpu->r[3] = v;
    }
L_000909f4:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[3]);
    }
L_000909f8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x4u);
    }
L_000909fc:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[8]);
    }
L_00090a00:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00090a04:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x68u);
    }
L_00090a08:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_00090a0c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x6cu);
    }
L_00090a10:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_00090a14:;
    {
        uint32_t v = shifter(cpu->r[3], 1, (cpu->r[14] & 0xffu), &shc); cpu->r[3] = v;
    }
L_00090a18:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[3]);
    }
L_00090a1c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x8u);
    }
L_00090a20:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00090a24:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_00090a28:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 0);
    }
L_00090a2c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, (cpu->r[14] & 0xffu), &shc); cpu->r[3] = v;
    }
L_00090a30:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[3]);
    }
L_00090a34:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0xcu);
    }
L_00090a38:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00090a3c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_00090a40:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x94u);
    }
L_00090a44:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_00090a48:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[12], cpu->r[6], 0, 0);
    }
L_00090a4c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, (cpu->r[14] & 0xffu), &shc); cpu->r[3] = v;
    }
L_00090a50:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[3]);
    }
L_00090a54:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x14u);
    }
L_00090a58:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00090a5c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00090efc;
        }
    }
L_00090a60:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x18u);
    }
L_00090a64:;
    {
        cpu->r[0] = rd32(cpu->r[14] + + 0x2cu);
    }
L_00090a68:;
    {
        cpu->r[14] = 0x00090a6cu; fn_0007f3e0(cpu);
    }
L_00090a6c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00090a70:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x7cu);
    }
L_00090a74:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[6] + + 0x4u);
    }
L_00090a78:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x80u);
    }
L_00090a7c:;
    {
        *vfp_d(cpu,7) = (double)*(int32_t*)vfp_s(cpu,14);
    }
L_00090a80:;
    {
        cpu->r[12] = rd32(cpu->r[6]);
    }
L_00090a84:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00090a88:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x18u);
    }
L_00090a8c:;
    {
        cpu->r[1] = 0x40000000u;
    }
L_00090a90:;
    {
        *vfp_d(cpu, 8) = *(double*)G(0x00090a98u + + 0x90u);
    }
L_00090a94:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_00090a98:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x18u);
    }
L_00090a9c:;
    {
        *vfp_d(cpu, 8) = *vfp_d(cpu, 8) + *vfp_d(cpu, 7) * *vfp_d(cpu, 9);
    }
L_00090aa0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 0);
    }
L_00090aa4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_00090aa8:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[3];
    }
L_00090aac:;
    {
        *vfp_d(cpu,5) = (double)*(int32_t*)vfp_s(cpu,13);
    }
L_00090ab0:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,5); cpu->r[2]= (uint32_t)v; cpu->r[3]=(uint32_t)(v>>32);
    }
L_00090ab4:;
    {
        cpu->r[14] = 0x00090ab8u; imp_pow(cpu); /* pow */
    }
L_00090ab8:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_00090abc:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x68u);
    }
L_00090ac0:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x18u);
    }
L_00090ac4:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x24u);
    }
L_00090ac8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x324u);
    }
L_00090acc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_00090ad0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00090ad4:;
    {
        wr32(cpu->r[7] + + 0x34u, cpu->r[3]);
    }
L_00090ad8:;
    {
        cpu->r[6] = rd32(cpu->r[8] + + 0x10u);
    }
L_00090adc:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x14u);
    }
L_00090ae0:;
    {
        uint32_t v = cpu->r[3] * cpu->r[6]; cpu->r[3] = v;
    }
L_00090ae4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00090ae8:;
    {
        *(uint64_t*)vfp_d(cpu,5) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_00090aec:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 8) * *vfp_d(cpu, 5);
    }
L_00090af0:;
    {
        *vfp_s(cpu,15) = (float)*vfp_d(cpu,7);
    }
L_00090af4:;
    {
        *(uint32_t*)G(cpu->r[7] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00090af8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00090dc8;
        }
    }
L_00090afc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_00090b00:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00090b04:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x98u);
    }
L_00090b08:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[0]);
    }
L_00090b0c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[0]);
    }
L_00090b10:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_00090b14:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[1]);
    }
L_00090b18:;
    {
        goto L_00090b30;
    }
L_00090b30:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00090b34:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00090b38:;
    {
        cpu->r[14] = 0x00090b3cu; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_00090b3c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x50u);
    }
L_00090b40:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x34u);
    }
L_00090b44:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00090b48:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, (cpu->r[8] & 0xffu), &shc), 0, 0);
    }
L_00090b4c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00090b50:;
    {
        cpu->r[14] = 0x00090b54u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00090b54:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_00090b58:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x3cu);
    }
L_00090b5c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x20u);
    }
L_00090b60:;
    {
        cpu->r[1] = rd32(cpu->r[12] + + 0x1cu);
    }
L_00090b64:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[7], cpu->r[14], 0, 0);
    }
L_00090b68:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x30u);
    }
L_00090b6c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[1], 1, 1);
    }
L_00090b70:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[7] = cpu->r[1];
        }
    }
L_00090b74:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x30u);
    }
L_00090b78:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_00090b7c:;
    {
        wr32(cpu->r[3] + cpu->r[8], cpu->r[7]);
    }
L_00090b80:;
    {
        uint32_t v = shifter(cpu->r[7], 1, (cpu->r[5] & 0xffu), &shc); cpu->r[7] = v;
    }
L_00090b84:;
    {
        cpu->r[1] = rd32(cpu->r[12] + + 0x20u);
    }
L_00090b88:;
    {
        uint32_t v = shifter(cpu->r[7], 2, (cpu->r[5] & 0xffu), &shc); cpu->r[7] = v;
    }
L_00090b8c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4cu);
    }
L_00090b90:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[7]);
    }
L_00090b94:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x18u);
    }
L_00090b98:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x48u);
    }
L_00090b9c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], shifter(cpu->r[0], 2, (cpu->r[14] & 0xffu), &shc), 0, 0);
    }
L_00090ba0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x40u);
    }
L_00090ba4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00090ba8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = cpu->r[3];
        }
    }
L_00090bac:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = cpu->r[1];
        }
    }
L_00090bb0:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[1]);
    }
L_00090bb4:;
    {
        cpu->r[12] = rd32(cpu->r[7] + + 0x24u);
    }
L_00090bb8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[8], 0, 0);
    }
L_00090bbc:;
    {
        uint32_t v = shifter(cpu->r[1], 1, (cpu->r[4] & 0xffu), &shc); cpu->r[1] = v;
    }
L_00090bc0:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x18u);
    }
L_00090bc4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_00090bc8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = cpu->r[12];
        }
    }
L_00090bcc:;
    {
        wr32(cpu->r[6] + + 0x8u, cpu->r[2]);
    }
L_00090bd0:;
    {
        cpu->r[12] = rd32(cpu->r[7] + + 0x28u);
    }
L_00090bd4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[14], 0, 0);
    }
L_00090bd8:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x44u);
    }
L_00090bdc:;
    {
        uint32_t v = shifter(cpu->r[1], 2, (cpu->r[4] & 0xffu), &shc); cpu->r[1] = v;
    }
L_00090be0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_00090be4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = cpu->r[12];
        }
    }
L_00090be8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_00090bec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[7], 0, 0);
    }
L_00090bf0:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0xcu);
    }
L_00090bf4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_00090bf8:;
    {
        uint32_t v = shifter(cpu->r[2], 1, (cpu->r[5] & 0xffu), &shc); cpu->r[2] = v;
    }
L_00090bfc:;
    {
        uint32_t v = shifter(cpu->r[1], 1, (cpu->r[4] & 0xffu), &shc); cpu->r[1] = v;
    }
L_00090c00:;
    {
        wr32(cpu->r[6] + + 0xcu, cpu->r[3]);
    }
L_00090c04:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[2], 2, (cpu->r[5] & 0xffu), &shc), cpu->r[8], 1, 0);
    }
L_00090c08:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[1], 2, (cpu->r[4] & 0xffu), &shc), cpu->r[12], 1, 0);
    }
L_00090c0c:;
    {
        uint32_t v = shifter(cpu->r[2], 1, (cpu->r[5] & 0xffu), &shc); cpu->r[2] = v;
    }
L_00090c10:;
    {
        wr32(cpu->r[6] + + 0x10u, cpu->r[2]);
    }
L_00090c14:;
    {
        uint32_t v = shifter(cpu->r[1], 1, (cpu->r[4] & 0xffu), &shc); cpu->r[1] = v;
    }
L_00090c18:;
    {
        wr32(cpu->r[6] + + 0x14u, cpu->r[1]);
    }
L_00090c1c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x38u);
    }
L_00090c20:;
    {
        cpu->r[14] = 0x00090c28u;
    }
L_00090c24:;
    {
        uint32_t t = rd32(cpu->r[1]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00090c28u)) return;
    }
L_00090c28:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x14u);
    }
L_00090c2c:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x10u);
    }
L_00090c30:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x28u);
    }
L_00090c34:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00090c38:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2]; cpu->r[2] = v;
    }
L_00090c3c:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[7]);
    }
L_00090c40:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_00090c44:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 4u, &shc); cpu->r[0] = v;
    }
L_00090c48:;
    {
        cpu->r[14] = 0x00090c50u;
    }
L_00090c4c:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00090c50u)) return;
    }
L_00090c50:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x1cu);
    }
L_00090c54:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00090c58:;
    {
        wr32(cpu->r[6] + + 0x18u, cpu->r[0]);
    }
L_00090c5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00090c68;
        }
    }
L_00090c60:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00090c64:;
    {
        cpu->r[14] = 0x00090c68u; fn_00092054(cpu);
    }
L_00090c68:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x20u);
    }
L_00090c6c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00090c70:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00090c78;
        }
    }
L_00090c74:;
    {
        cpu->r[14] = 0x00090c78u; fn_00092054(cpu);
    }
L_00090c78:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x14u);
    }
L_00090c7c:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x10u);
    }
L_00090c80:;
    {
        cpu->r[14] = 0x00090c84u; fn_000920d4(cpu);
    }
L_00090c84:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x14u);
    }
L_00090c88:;
    {
        wr32(cpu->r[6] + + 0x1cu, cpu->r[0]);
    }
L_00090c8c:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x10u);
    }
L_00090c90:;
    {
        cpu->r[14] = 0x00090c94u; fn_000920d4(cpu);
    }
L_00090c94:;
    {
        cpu->r[8] = rd32(cpu->r[6] + + 0x10u);
    }
L_00090c98:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x14u);
    }
L_00090c9c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[8]; cpu->r[3] = v;
    }
L_00090ca0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00090ca4:;
    {
        wr32(cpu->r[6] + + 0x20u, cpu->r[0]);
    }
L_00090ca8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00090d98;
        }
    }
L_00090cac:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_00090cb0:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_00090cb4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00090cb8:;
    {
        cpu->r[7] = cpu->r[10];
    }
L_00090cbc:;
    {
        cpu->r[9] = rd32(cpu->r[14] + cpu->r[12]);
    }
L_00090cc0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00090cc4:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00090cc8:;
    {
        cpu->r[14] = 0x00090cccu; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_00090ccc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_00090cd0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00090cd4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_00090cd8:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[2], shifter(cpu->r[1], 2, (cpu->r[5] & 0xffu), &shc), 0, 0);
    }
L_00090cdc:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00090ce0:;
    {
        cpu->r[14] = 0x00090ce4u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00090ce4:;
    {
        cpu->r[8] = rd32(cpu->r[6] + + 0x18u);
    }
L_00090ce8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_00090cec:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_00090cf0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[11], cpu->r[3], 0, 0);
    }
L_00090cf4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], cpu->r[10], 0, 0);
    }
L_00090cf8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x8u);
    }
L_00090cfc:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[2], 1, 1);
    }
L_00090d00:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[3] + + 0xcu, cpu->r[11]);
        }
    }
L_00090d04:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[3] + + 0xcu, cpu->r[2]);
        }
    }
L_00090d08:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x4u);
    }
L_00090d0c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00090d10:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[14], shifter(cpu->r[0], 2, (cpu->r[4] & 0xffu), &shc), 0, 0);
    }
L_00090d14:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_00090d18:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[3] + + 0x10u, cpu->r[2]);
        }
    }
L_00090d1c:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[3] + + 0x10u, cpu->r[12]);
        }
    }
L_00090d20:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x8u);
    }
L_00090d24:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_00090d28:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 1);
    }
L_00090d2c:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[3] + + 0x14u, cpu->r[1]);
        }
    }
L_00090d30:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[3] + + 0x14u, cpu->r[12]);
        }
    }
L_00090d34:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_00090d38:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0xcu);
    }
L_00090d3c:;
    {
        cpu->r[0] = 0x00002000u;
    }
L_00090d40:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_00090d44:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[3] + + 0x18u, cpu->r[2]);
        }
    }
L_00090d48:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[3] + + 0x18u, cpu->r[1]);
        }
    }
L_00090d4c:;
    {
        cpu->r[14] = 0x00090d54u;
    }
L_00090d50:;
    {
        uint32_t t = rd32(cpu->r[9]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00090d54u)) return;
    }
L_00090d54:;
    {
        wr32(cpu->r[8] + cpu->r[10], cpu->r[0]);
    }
L_00090d58:;
    {
        cpu->r[0] = 0x00000960u;
    }
L_00090d5c:;
    {
        cpu->r[14] = 0x00090d64u;
    }
L_00090d60:;
    {
        uint32_t t = rd32(cpu->r[9]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00090d64u)) return;
    }
L_00090d64:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_00090d68:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000030u, 0, 0);
    }
L_00090d6c:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[0]);
    }
L_00090d70:;
    {
        cpu->r[0] = 0x00000960u;
    }
L_00090d74:;
    {
        cpu->r[14] = 0x00090d7cu;
    }
L_00090d78:;
    {
        uint32_t t = rd32(cpu->r[9]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00090d7cu)) return;
    }
L_00090d7c:;
    {
        cpu->r[8] = rd32(cpu->r[6] + + 0x10u);
    }
L_00090d80:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x14u);
    }
L_00090d84:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_00090d88:;
    {
        uint32_t v = cpu->r[2] * cpu->r[8]; cpu->r[2] = v;
    }
L_00090d8c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 1);
    }
L_00090d90:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[0]);
    }
L_00090d94:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00090cc0;
        }
    }
L_00090d98:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_00090d9c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00090da0:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x20u);
    }
L_00090da4:;
    {
        cpu->r[6] = rd32(cpu->r[1] + + 0x10u);
    }
L_00090da8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00090dac:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x14u);
    }
L_00090db0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000024u, 0, 0);
    }
L_00090db4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[2]);
    }
L_00090db8:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[7]);
    }
L_00090dbc:;
    {
        uint32_t v = cpu->r[3] * cpu->r[6]; cpu->r[3] = v;
    }
L_00090dc0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00090dc4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00090b30;
        }
    }
L_00090dc8:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x24u);
    }
L_00090dcc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x78u);
    }
L_00090dd0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_00090dd4:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x18u);
    }
L_00090dd8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x6cu);
    }
L_00090ddc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000020u, 0, 0);
    }
L_00090de0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00090de4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00090de8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_00090dec:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_00090df0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00090df4:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[0]);
    }
L_00090df8:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[1]);
    }
L_00090dfc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00090984;
        }
    }
L_00090e00:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x54u);
    }
L_00090e04:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x60u);
    }
L_00090e08:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x84u);
    }
L_00090e0c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x10u);
    }
L_00090e10:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00090e14:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x90u);
    }
L_00090e18:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000007cu, 0, 0);
    }
L_00090e1c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8cu);
    }
L_00090e20:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_00090e24:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_00090e28:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[6]);
    }
L_00090e2c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000018u, 0, 0);
    }
L_00090e30:;
    {
        wr32(cpu->r[13] + + 0x84u, cpu->r[7]);
    }
L_00090e34:;
    {
        wr32(cpu->r[13] + + 0x90u, cpu->r[8]);
    }
L_00090e38:;
    {
        wr32(cpu->r[13] + + 0x8cu, cpu->r[12]);
    }
L_00090e3c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000907d4;
        }
    }
L_00090e40:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xa4u);
    }
L_00090e44:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x88u);
    }
L_00090e48:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000430u, 0, 0);
    }
L_00090e4c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x9cu);
    }
L_00090e50:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00090e54:;
    {
        wr32(cpu->r[13] + + 0xa4u, cpu->r[3]);
    }
L_00090e58:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x80u);
    }
L_00090e5c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00090e60:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x10u);
    }
L_00090e64:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000030u, 0, 0);
    }
L_00090e68:;
    {
        wr32(cpu->r[13] + + 0x9cu, cpu->r[2]);
    }
L_00090e6c:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[3]);
    }
L_00090e70:;
    {
        goto L_00090688;
    }
L_00090e74:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x18u);
    }
L_00090e78:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x54u);
    }
L_00090e7c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x60u);
    }
L_00090e80:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x64u);
    }
L_00090e84:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x58u);
    }
L_00090e88:;
    {
        wr32(cpu->r[7] + + 0x2cu, cpu->r[6]);
    }
L_00090e8c:;
    {
        cpu->r[3] = rd32(cpu->r[12]);
    }
L_00090e90:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00090e94:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00090e98:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[14], 0, 0);
    }
L_00090e9c:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[8]);
    }
L_00090ea0:;
    {
        uint32_t v = shifter(cpu->r[3], 1, (cpu->r[0] & 0xffu), &shc); cpu->r[3] = v;
    }
L_00090ea4:;
    {
        wr32(cpu->r[7] + + 0x1cu, cpu->r[3]);
    }
L_00090ea8:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x4u);
    }
L_00090eac:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x68u);
    }
L_00090eb0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00090eb4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[14], 0, 0);
    }
L_00090eb8:;
    {
        uint32_t v = shifter(cpu->r[3], 1, (cpu->r[0] & 0xffu), &shc); cpu->r[3] = v;
    }
L_00090ebc:;
    {
        wr32(cpu->r[7] + + 0x20u, cpu->r[3]);
    }
L_00090ec0:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x8u);
    }
L_00090ec4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00090ec8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[14], 0, 0);
    }
L_00090ecc:;
    {
        uint32_t v = shifter(cpu->r[3], 1, (cpu->r[0] & 0xffu), &shc); cpu->r[3] = v;
    }
L_00090ed0:;
    {
        wr32(cpu->r[7] + + 0x24u, cpu->r[3]);
    }
L_00090ed4:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0xcu);
    }
L_00090ed8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x94u);
    }
L_00090edc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00090ee0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[14], 0, 0);
    }
L_00090ee4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[12], cpu->r[6], 0, 0);
    }
L_00090ee8:;
    {
        uint32_t v = shifter(cpu->r[3], 1, (cpu->r[0] & 0xffu), &shc); cpu->r[3] = v;
    }
L_00090eec:;
    {
        wr32(cpu->r[7] + + 0x28u, cpu->r[3]);
    }
L_00090ef0:;
    {
        cpu->r[3] = rd32(cpu->r[8] + + 0x14u);
    }
L_00090ef4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00090ef8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00090a60;
        }
    }
L_00090efc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_00090f00:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x2cu);
    }
L_00090f04:;
    {
        cpu->r[14] = 0x00090f08u; fn_0007efd4(cpu);
    }
L_00090f08:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00090f0c:;
    {
        goto L_00090a70;
    }
L_00090f10:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00090f14:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00090f18:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_00090f1c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00090f20:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 1u, &shc); cpu->r[0] = v;
    }
L_00090f24:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 1u, &shc); cpu->r[1] = v;
    }
L_00090f28:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[2]);
    }
L_00090f2c:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[3]);
    }
L_00090f30:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[0]);
    }
L_00090f34:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[1]);
    }
L_00090f38:;
    {
        goto L_00090904;
    }
L_00090f3c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000acu, 0, 0);
    }
L_00090f40:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_00090f44:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00090f48u)) return;
    }
}

/* tcd_malloc_encode @ 00090f48 (arm) */
void fn_00090f48(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00090f48:;
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
L_00090f4c:;
    {
        cpu->r[13] -= 24u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
        wr64(cpu->r[13] + 16u, *(uint64_t*)vfp_d(cpu, 10));
    }
L_00090f50:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00090f54:;
    {
        *vfp_s(cpu, 18) = *(float*)G(0x00090f5cu + + 0x2bcu);
    }
L_00090f58:;
    {
        cpu->r[0] = rd32(0x00090f60u + + 0x2d0u);
    }
L_00090f5c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000a4u, 1, 0);
    }
L_00090f60:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_00090f64:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x18u);
    }
L_00090f68:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x44u);
    }
L_00090f6c:;
    {
        cpu->r[10] = cpu->r[3];
    }
L_00090f70:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_00090f74:;
    {
        cpu->r[0] = 0x00000350u;
    }
L_00090f78:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[1]);
    }
L_00090f7c:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_00090f80:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_00090f84:;
    {
        *vfp_s(cpu, 19) = *(float*)G(0x00090f8cu + + 0x290u);
    }
L_00090f88:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x74u);
    }
L_00090f8c:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x00090f94u + + 0x28cu);
    }
L_00090f90:;
    {
        cpu->r[9] = rd32(0x00090f98u + + 0x29cu);
    }
L_00090f94:;
    {
        cpu->r[1] = add_flags(cpu, 0x00090f9cu, cpu->r[1], 0, 0);
    }
L_00090f98:;
    {
        wr32(cpu->r[6], cpu->r[2]);
    }
L_00090f9c:;
    {
        *vfp_s(cpu, 20) = *(float*)G(0x00090fa4u + + 0x280u);
    }
L_00090fa0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x48u);
    }
L_00090fa4:;
    {
        *vfp_s(cpu, 21) = *(float*)G(0x00090facu + + 0x27cu);
    }
L_00090fa8:;
    {
        wr32(cpu->r[5] + + 0x1cu, cpu->r[12]);
    }
L_00090fac:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[9]);
    }
L_00090fb0:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
    }
L_00090fb4:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[2]);
    }
L_00090fb8:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[9]);
    }
L_00090fbc:;
    {
        wr32(cpu->r[5] + + 0x20u, cpu->r[4]);
    }
L_00090fc0:;
    {
        cpu->r[14] = 0x00090fc8u;
    }
L_00090fc4:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00090fc8u)) return;
    }
L_00090fc8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x6cu);
    }
L_00090fcc:;
    {
        cpu->r[3] = 0x000015d4u;
    }
L_00090fd0:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x44u);
    }
L_00090fd4:;
    {
        uint32_t v = cpu->r[3] * cpu->r[10] + cpu->r[2]; cpu->r[2] = v;
    }
L_00090fd8:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_00090fdc:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_00090fe0:;
    {
        wr32(cpu->r[13] + + 0x94u, cpu->r[2]);
    }
L_00090fe4:;
    {
        wr32(cpu->r[6] + + 0x8u, cpu->r[0]);
    }
L_00090fe8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00090fec:;
    {
        cpu->r[14] = 0x00090ff0u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_00090ff0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00090ff4:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00090ff8:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_00090ffc:;
    {
        cpu->r[14] = 0x00091000u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00091000:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x38u);
    }
L_00091004:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x30u);
    }
L_00091008:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_0009100c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x74u);
    }
L_00091010:;
    {
        cpu->r[14] = rd32(cpu->r[5] + + 0x18u);
    }
L_00091014:;
    {
        uint32_t v = cpu->r[12] * cpu->r[6] + cpu->r[1]; cpu->r[1] = v;
    }
L_00091018:;
    {
        cpu->r[10] = rd32(cpu->r[9]);
    }
L_0009101c:;
    {
        cpu->r[14] = rd32(cpu->r[14] + + 0x8u);
    }
L_00091020:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x74u);
    }
L_00091024:;
    {
        wr32(cpu->r[13] + + 0x84u, cpu->r[14]);
    }
L_00091028:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[10], 1, 1);
    }
L_0009102c:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[14], cpu->r[1]);
        }
    }
L_00091030:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[14], cpu->r[10]);
        }
    }
L_00091034:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x3cu);
    }
L_00091038:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x34u);
    }
L_0009103c:;
    {
        cpu->r[14] = rd32(cpu->r[9] + + 0x4u);
    }
L_00091040:;
    {
        uint32_t v = cpu->r[12] * cpu->r[0] + cpu->r[1]; cpu->r[1] = v;
    }
L_00091044:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x84u);
    }
L_00091048:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_0009104c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[14], 1, 1);
    }
L_00091050:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[12] + + 0x4u, cpu->r[1]);
        }
    }
L_00091054:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[12] + + 0x4u, cpu->r[14]);
        }
    }
L_00091058:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x30u);
    }
L_0009105c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x38u);
    }
L_00091060:;
    {
        cpu->r[1] = rd32(cpu->r[9] + + 0x8u);
    }
L_00091064:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x84u);
    }
L_00091068:;
    {
        uint32_t v = cpu->r[12] * cpu->r[2] + cpu->r[0]; cpu->r[2] = v;
    }
L_0009106c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_00091070:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[14] + + 0x8u, cpu->r[2]);
        }
    }
L_00091074:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[14] + + 0x8u, cpu->r[1]);
        }
    }
L_00091078:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x3cu);
    }
L_0009107c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x34u);
    }
L_00091080:;
    {
        cpu->r[2] = rd32(cpu->r[9] + + 0xcu);
    }
L_00091084:;
    {
        uint32_t v = cpu->r[0] * cpu->r[3] + cpu->r[1]; cpu->r[3] = v;
    }
L_00091088:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x94u);
    }
L_0009108c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00091090:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[14] + + 0xcu, cpu->r[3]);
        }
    }
L_00091094:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[14] + + 0xcu, cpu->r[2]);
        }
    }
L_00091098:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x10u);
    }
L_0009109c:;
    {
        cpu->r[9] = cpu->r[14];
    }
L_000910a0:;
    {
        wr32(cpu->r[14] + + 0x10u, cpu->r[3]);
    }
L_000910a4:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0xcu);
    }
L_000910a8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_000910ac:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000010u, 0, 0);
    }
L_000910b0:;
    {
        goto L_00091180;
    }
L_000910b4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000910bcu + + 0x170u);
    }
L_000910b8:;
    {
        vfp_vmul(cpu, 13, 15, 14);
    }
L_000910bc:;
    {
        cpu->r[3] = rd32(cpu->r[11] + + 0x18u);
    }
L_000910c0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3]);
    }
L_000910c4:;
    {
        cpu->r[14] = rd32(cpu->r[9] + + 0x10u);
    }
L_000910c8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_000910cc:;
    {
        cpu->r[2] = rd32(cpu->r[9]);
    }
L_000910d0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_000910d4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x18u);
    }
L_000910d8:;
    {
        cpu->r[12] = rd32(cpu->r[9] + + 0x8u);
    }
L_000910dc:;
    {
        uint32_t v = cpu->r[14] * cpu->r[0]; cpu->r[3] = v;
    }
L_000910e0:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 0);
    }
L_000910e4:;
    {
        cpu->r[14] = rd32(cpu->r[9] + + 0xcu);
    }
L_000910e8:;
    {
        cpu->r[2] = rd32(cpu->r[9] + + 0x4u);
    }
L_000910ec:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_000910f0:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000910f4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[14], cpu->r[2], 1, 0);
    }
L_000910f8:;
    {
        uint32_t v = cpu->r[12] * cpu->r[3]; cpu->r[3] = v;
    }
L_000910fc:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_00091100:;
    {
        cpu->r[12] = 0x0000000eu;
    }
L_00091104:;
    {
        uint32_t v = cpu->r[12] * cpu->r[0]; cpu->r[0] = v;
    }
L_00091108:;
    {
        vfp_vmul(cpu, 13, 13, 14);
    }
L_0009110c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[2] = v;
    }
L_00091110:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[2];
    }
L_00091114:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00091118:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_0009111c:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00091120:;
    {
        vfp_vdiv(cpu, 16, 14, 15);
    }
L_00091124:;
    {
        cpu->r[14] = 0x00091128u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00091128:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[0];
    }
L_0009112c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_00091130:;
    {
        vfp_vsub(cpu, 16, 16, 15);
    }
L_00091134:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), 0.0f);
    }
L_00091138:;
    {
        *(uint32_t*)G(cpu->r[7] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_0009113c:;
    {
        vfp_sync_flags(cpu);
    }
L_00091140:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00091178;
        }
    }
L_00091144:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00091148:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00091204;
        }
    }
L_0009114c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7] + + 0x10u);
    }
L_00091150:;
    {
        vfp_vadd(cpu, 14, 15, 20);
    }
L_00091154:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,14));
    }
L_00091158:;
    {
        vfp_sync_flags(cpu);
    }
L_0009115c:;
    {
        if (cond_test(cpu, 5)) {
        vfp_vadd(cpu, 15, 15, 21);
        }
    }
L_00091160:;
    {
        if (cond_test(cpu, 5)) {
        *(uint32_t*)G(cpu->r[7] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_00091164:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
    }
L_00091168:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_0009116c:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[10]);
        }
    }
L_00091170:;
    {
        if (cond_test(cpu, 1)) {
        vfp_vsub(cpu, 15, 15, 19);
        }
    }
L_00091174:;
    {
        if (cond_test(cpu, 1)) {
        *(uint32_t*)G(cpu->r[10]) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_00091178:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_0009117c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_00091180:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[6], 1, 1);
    }
L_00091184:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00091238;
        }
    }
L_00091188:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7] + + 0x14u);
    }
L_0009118c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_00091190:;
    {
        vfp_sync_flags(cpu);
    }
L_00091194:;
    {
        if (cond_test(cpu, 1)) {
        *(uint32_t*)G(cpu->r[7] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 18);
        }
    }
L_00091198:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00091178;
        }
    }
L_0009119c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x10u);
    }
L_000911a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000911a4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000910b4;
        }
    }
L_000911a8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x000911b0u + + 0x7cu);
    }
L_000911ac:;
    {
        vfp_vmul(cpu, 13, 15, 14);
    }
L_000911b0:;
    {
        cpu->r[3] = rd32(cpu->r[11] + + 0x18u);
    }
L_000911b4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3]);
    }
L_000911b8:;
    {
        cpu->r[12] = rd32(cpu->r[9] + + 0x10u);
    }
L_000911bc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_000911c0:;
    {
        cpu->r[1] = rd32(cpu->r[9] + + 0x8u);
    }
L_000911c4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x18u);
    }
L_000911c8:;
    {
        uint32_t base = cpu->r[9];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_000911cc:;
    {
        uint32_t v = cpu->r[12] * cpu->r[0]; cpu->r[0] = v;
    }
L_000911d0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_000911d4:;
    {
        cpu->r[1] = rd32(cpu->r[9] + + 0xcu);
    }
L_000911d8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_000911dc:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000911e0:;
    {
        uint32_t v = cpu->r[2] * cpu->r[0]; cpu->r[2] = v;
    }
L_000911e4:;
    {
        vfp_vmul(cpu, 13, 13, 14);
    }
L_000911e8:;
    {
        uint32_t v = cpu->r[3] * cpu->r[2]; cpu->r[3] = v;
    }
L_000911ec:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[3];
    }
L_000911f0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_000911f4:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_000911f8:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_000911fc:;
    {
        vfp_vdiv(cpu, 16, 14, 15);
    }
L_00091200:;
    {
        goto L_00091134;
    }
L_00091204:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), *vfp_s(cpu,17));
    }
L_00091208:;
    {
        vfp_sync_flags(cpu);
    }
L_0009120c:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[0] = rd32(cpu->r[13] + + 0x94u);
        }
    }
L_00091210:;
    {
        if (cond_test(cpu, 5)) {
        *(uint32_t*)G(cpu->r[0] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 17);
        }
    }
L_00091214:;
    {
        goto L_00091164;
    }
L_00091238:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x74u);
    }
L_0009123c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00091240:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x24u);
    }
L_00091244:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x28u);
    }
L_00091248:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x10u);
    }
L_0009124c:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[2]);
    }
L_00091250:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[5]);
    }
L_00091254:;
    {
        wr32(cpu->r[13] + + 0x9cu, cpu->r[2]);
    }
L_00091258:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 5u, &shc); cpu->r[0] = v;
    }
L_0009125c:;
    {
        wr32(cpu->r[13] + + 0x98u, cpu->r[2]);
    }
L_00091260:;
    {
        cpu->r[14] = 0x00091268u;
    }
L_00091264:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00091268u)) return;
    }
L_00091268:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x84u);
    }
L_0009126c:;
    {
        wr32(cpu->r[9] + + 0x14u, cpu->r[0]);
    }
L_00091270:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x84u);
    }
L_00091274:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x98u);
    }
L_00091278:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x10u);
    }
L_0009127c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_00091280:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00091b88;
        }
    }
L_00091284:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x74u);
    }
L_00091288:;
    {
        cpu->r[3] = 0x000015d0u;
    }
L_0009128c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x84u);
    }
L_00091290:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x7cu);
    }
L_00091294:;
    {
        cpu->r[6] = rd32(cpu->r[12] + + 0x18u);
    }
L_00091298:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x94u);
    }
L_0009129c:;
    {
        cpu->r[4] = cpu->r[6];
    }
L_000912a0:;
    {
        cpu->r[0] = rd32(cpu->r[14]);
    }
L_000912a4:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x98u);
    }
L_000912a8:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_000912ac:;
    {
        uint32_t wb_tmp = cpu->r[4] + cpu->r[2];
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
        cpu->r[4] = wb_tmp;
    }
L_000912b0:;
    {
        cpu->r[7] = rd32(cpu->r[14] + + 0x14u);
    }
L_000912b4:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x9cu);
    }
L_000912b8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], cpu->r[0], 0, 0);
    }
L_000912bc:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_000912c0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[7], shifter(cpu->r[5], 2, 5u, &shc), 0, 0);
    }
L_000912c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[9], 0, 0);
    }
L_000912c8:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[5]);
    }
L_000912cc:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[3]);
    }
L_000912d0:;
    {
        cpu->r[14] = 0x000912d4u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_000912d4:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x84u);
    }
L_000912d8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x98u);
    }
L_000912dc:;
    {
        wr32(cpu->r[7] + shifter(cpu->r[12], 2, 5u, &shc), cpu->r[0]);
    }
L_000912e0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_000912e4:;
    {
        cpu->r[2] = rd32(cpu->r[14] + + 0x4u);
    }
L_000912e8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_000912ec:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_000912f0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000912f4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_000912f8:;
    {
        cpu->r[14] = 0x000912fcu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_000912fc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x7cu);
    }
L_00091300:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00091304:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x50u);
    }
L_00091308:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[7]);
    }
L_0009130c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[1]);
    }
L_00091310:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x84u);
    }
L_00091314:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00091318:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x8u);
    }
L_0009131c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_00091320:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00091324:;
    {
        cpu->r[14] = 0x00091328u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00091328:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x50u);
    }
L_0009132c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x84u);
    }
L_00091330:;
    {
        wr32(cpu->r[9] + + 0x8u, cpu->r[0]);
    }
L_00091334:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00091338:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0xcu);
    }
L_0009133c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 0);
    }
L_00091340:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_00091344:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00091348:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_0009134c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00091350:;
    {
        cpu->r[14] = 0x00091354u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00091354:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
    }
L_00091358:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_0009135c:;
    {
        cpu->r[4] = rd32(cpu->r[1] + cpu->r[14]);
    }
L_00091360:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 0);
    }
L_00091364:;
    {
        wr32(cpu->r[9] + + 0xcu, cpu->r[0]);
    }
L_00091368:;
    {
        uint32_t v = cpu->r[5] * cpu->r[7]; cpu->r[0] = v;
    }
L_0009136c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00091370:;
    {
        cpu->r[14] = 0x00091378u;
    }
L_00091374:;
    {
        uint32_t t = rd32(cpu->r[4]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00091378u)) return;
    }
L_00091378:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x64u);
    }
L_0009137c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x4u);
    }
L_00091380:;
    {
        wr32(cpu->r[9] + + 0x10u, cpu->r[3]);
    }
L_00091384:;
    {
        wr32(cpu->r[9] + + 0x18u, cpu->r[0]);
    }
L_00091388:;
    {
        cpu->r[0] = 0x0000007cu;
    }
L_0009138c:;
    {
        uint32_t v = cpu->r[0] * cpu->r[3]; cpu->r[0] = v;
    }
L_00091390:;
    {
        cpu->r[14] = 0x00091398u;
    }
L_00091394:;
    {
        uint32_t t = rd32(cpu->r[4]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00091398u)) return;
    }
L_00091398:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x10u);
    }
L_0009139c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000913a0:;
    {
        wr32(cpu->r[9] + + 0x14u, cpu->r[0]);
    }
L_000913a4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00091a8c;
        }
    }
L_000913a8:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x64u);
    }
L_000913ac:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_000913b0:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x64u);
    }
L_000913b4:;
    {
        cpu->r[12] = (~0x0000000fu);
    }
L_000913b8:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[5]);
    }
L_000913bc:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000001cu, 0, 0);
    }
L_000913c0:;
    {
        wr32(cpu->r[13] + + 0x8cu, cpu->r[9]);
    }
L_000913c4:;
    {
        wr32(cpu->r[13] + + 0x90u, cpu->r[6]);
    }
L_000913c8:;
    {
        wr32(cpu->r[13] + + 0x88u, cpu->r[12]);
    }
L_000913cc:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[5]);
    }
L_000913d0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x5cu);
    }
L_000913d4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_000913d8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x50u);
    }
L_000913dc:;
    {
        cpu->r[4] = 0x00000001u;
    }
L_000913e0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 0);
    }
L_000913e4:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[3]);
    }
L_000913e8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x54u);
    }
L_000913ec:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_000913f0:;
    {
        cpu->r[0] = rd32(cpu->r[14]);
    }
L_000913f4:;
    {
        uint32_t v = shifter(cpu->r[4], 2, (cpu->r[2] & 0xffu), &shc); cpu->r[2] = v;
    }
L_000913f8:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[2]);
    }
L_000913fc:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x60u);
    }
L_00091400:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_00091404:;
    {
        cpu->r[3] = rd32(cpu->r[14] + + 0x14u);
    }
L_00091408:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = cpu->r[4];
        }
    }
L_0009140c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x80u);
    }
L_00091410:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[5], 0, 0);
    }
L_00091414:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x54u);
    }
L_00091418:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000003u;
        }
    }
L_0009141c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x80u);
    }
L_00091420:;
    {
        uint32_t v = shifter(cpu->r[0], 1, (cpu->r[9] & 0xffu), &shc); cpu->r[0] = v;
    }
L_00091424:;
    {
        wr32(cpu->r[3] + cpu->r[12], cpu->r[0]);
    }
L_00091428:;
    {
        cpu->r[1] = rd32(cpu->r[14] + + 0x4u);
    }
L_0009142c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_00091430:;
    {
        cpu->r[3] = cpu->r[14];
    }
L_00091434:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[6]);
    }
L_00091438:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_0009143c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[5], 0, 0);
    }
L_00091440:;
    {
        uint32_t v = shifter(cpu->r[1], 1, (cpu->r[9] & 0xffu), &shc); cpu->r[1] = v;
    }
L_00091444:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[1]);
    }
L_00091448:;
    {
        cpu->r[14] = rd32(cpu->r[14] + + 0x8u);
    }
L_0009144c:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], 0x00000001u, 1, 0);
    }
L_00091450:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], cpu->r[5], 0, 0);
    }
L_00091454:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_00091458:;
    {
        uint32_t v = shifter(cpu->r[14], 1, (cpu->r[9] & 0xffu), &shc); cpu->r[14] = v;
    }
L_0009145c:;
    {
        wr32(cpu->r[6] + + 0x8u, cpu->r[14]);
    }
L_00091460:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0xcu);
    }
L_00091464:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], 0x00000001u, 1, 0);
    }
L_00091468:;
    {
        wr32(cpu->r[6] + + 0x18u, cpu->r[2]);
    }
L_0009146c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x60u);
    }
L_00091470:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00091474:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x64u);
    }
L_00091478:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_0009147c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x20u);
    }
L_00091480:;
    {
        uint32_t v = shifter(cpu->r[12], 1, (cpu->r[9] & 0xffu), &shc); cpu->r[12] = v;
    }
L_00091484:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x20u);
    }
L_00091488:;
    {
        wr32(cpu->r[9] + + 0xcu, cpu->r[12]);
    }
L_0009148c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 0);
    }
L_00091490:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_00091494:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00091498:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = 0x00008000u;
        }
    }
L_0009149c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x0000000fu;
        }
    }
L_000914a0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8cu);
        }
    }
L_000914a4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = cpu->r[4];
        }
    }
L_000914a8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = cpu->r[3];
        }
    }
L_000914ac:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[3] + + 0x32cu);
        }
    }
L_000914b0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[3] + + 0x3b0u);
        }
    }
L_000914b4:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[4], 2, (cpu->r[2] & 0xffu), &shc); cpu->r[5] = v;
        }
    }
L_000914b8:;
    {
        uint32_t v = shifter(cpu->r[0], 1, (cpu->r[2] & 0xffu), &shc); cpu->r[0] = v;
    }
L_000914bc:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[4], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[4] = v;
        }
    }
L_000914c0:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], cpu->r[5], 0, 0);
    }
L_000914c4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[12], cpu->r[4], 0, 0);
    }
L_000914c8:;
    {
        uint32_t v = shifter(cpu->r[1], 1, (cpu->r[3] & 0xffu), &shc); cpu->r[1] = v;
    }
L_000914cc:;
    {
        uint32_t v = shifter(cpu->r[14], 1, (cpu->r[2] & 0xffu), &shc); cpu->r[12] = v;
    }
L_000914d0:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x5cu);
    }
L_000914d4:;
    {
        uint32_t v = shifter(cpu->r[4], 1, (cpu->r[3] & 0xffu), &shc); cpu->r[4] = v;
    }
L_000914d8:;
    {
        uint32_t v = shifter(cpu->r[0], 2, (cpu->r[2] & 0xffu), &shc); cpu->r[0] = v;
    }
L_000914dc:;
    {
        uint32_t v = shifter(cpu->r[1], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[1] = v;
    }
L_000914e0:;
    {
        cpu->r[12] = sub_flags(cpu, shifter(cpu->r[12], 2, (cpu->r[2] & 0xffu), &shc), cpu->r[0], 1, 0);
    }
L_000914e4:;
    {
        cpu->r[4] = sub_flags(cpu, shifter(cpu->r[4], 2, (cpu->r[3] & 0xffu), &shc), cpu->r[1], 1, 0);
    }
L_000914e8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000914ec:;
    {
        uint32_t v = shifter(cpu->r[12], 1, (cpu->r[2] & 0xffu), &shc); cpu->r[12] = v;
    }
L_000914f0:;
    {
        wr32(cpu->r[6] + + 0x10u, cpu->r[12]);
    }
L_000914f4:;
    {
        uint32_t v = shifter(cpu->r[4], 1, (cpu->r[3] & 0xffu), &shc); cpu->r[4] = v;
    }
L_000914f8:;
    {
        wr32(cpu->r[6] + + 0x14u, cpu->r[4]);
    }
L_000914fc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00091b5c;
        }
    }
L_00091500:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_00091504:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[2]);
    }
L_00091508:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[1]);
    }
L_0009150c:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[0]);
    }
L_00091510:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x64u);
    }
L_00091514:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00091518:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x30u);
    }
L_0009151c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00091520:;
    {
        cpu->r[5] = rd32(cpu->r[9] + + 0x8u);
    }
L_00091524:;
    {
        cpu->r[4] = rd32(cpu->r[9] + + 0xcu);
    }
L_00091528:;
    {
        uint32_t v = shifter(cpu->r[3], 2, (cpu->r[14] & 0xffu), &shc); cpu->r[9] = v;
    }
L_0009152c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x54u);
    }
L_00091530:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[14], 1, 1);
    }
L_00091534:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[5] = cpu->r[14];
        }
    }
L_00091538:;
    {
        uint32_t v = shifter(cpu->r[3], 2, (cpu->r[5] & 0xffu), &shc); cpu->r[1] = v;
    }
L_0009153c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[0], 1, 1);
    }
L_00091540:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[4] = cpu->r[0];
        }
    }
L_00091544:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_00091548:;
    {
        uint32_t v = shifter(cpu->r[3], 2, (cpu->r[4] & 0xffu), &shc); cpu->r[2] = v;
    }
L_0009154c:;
    {
        uint32_t v = shifter(cpu->r[3], 2, (cpu->r[12] & 0xffu), &shc); cpu->r[6] = v;
    }
L_00091550:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[12]);
    }
L_00091554:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[3]);
    }
L_00091558:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_0009155c:;
    {
        uint32_t v = shifter(cpu->r[3], 2, (cpu->r[0] & 0xffu), &shc); cpu->r[3] = v;
    }
L_00091560:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_00091564:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_00091568:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_0009156c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x88u);
    }
L_00091570:;
    {
        *vfp_d(cpu, 9) = *(double*)G(0x00091578u + + 0x100u);
    }
L_00091574:;
    {
        *vfp_d(cpu, 10) = *(double*)G(0x0009157cu + + 0x104u);
    }
L_00091578:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_0009157c:;
    {
        wr32(cpu->r[13] + + 0x70u, cpu->r[6]);
    }
L_00091580:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[9]);
    }
L_00091584:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[3]);
    }
L_00091588:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[12]);
    }
L_0009158c:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[14]);
    }
L_00091590:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_00091594:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[1]);
    }
L_00091598:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x5cu);
    }
L_0009159c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000915a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00091ab8;
        }
    }
L_000915a4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x58u);
    }
L_000915a8:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x14u);
    }
L_000915ac:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x50u);
    }
L_000915b0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_000915b4:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
        }
    }
L_000915b8:;
    {
        cpu->r[9] = cpu->r[3];
    }
L_000915bc:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x54u);
    }
L_000915c0:;
    {
        wr32(cpu->r[6] + + 0x2cu, cpu->r[3]);
    }
L_000915c4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_000915c8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000915cc:;
    {
        cpu->r[0] = rd32(cpu->r[12]);
    }
L_000915d0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[9], 0x00000002u, 1, 0);
    }
L_000915d4:;
    {
        uint32_t v = shifter(cpu->r[3], 2, (cpu->r[14] & 0xffu), &shc); cpu->r[1] = v;
    }
L_000915d8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_000915dc:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_000915e0:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_000915e4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_000915e8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x70u);
    }
L_000915ec:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_000915f0:;
    {
        uint32_t v = shifter(cpu->r[2], 2, (cpu->r[14] & 0xffu), &shc); cpu->r[2] = v;
    }
L_000915f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_000915f8:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x50u);
    }
L_000915fc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 0);
    }
L_00091600:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[9]);
    }
L_00091604:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x6cu);
    }
L_00091608:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x68u);
    }
L_0009160c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, (cpu->r[9] & 0xffu), &shc); cpu->r[3] = v;
    }
L_00091610:;
    {
        wr32(cpu->r[12] + + 0x1cu, cpu->r[3]);
    }
L_00091614:;
    {
        cpu->r[3] = rd32(cpu->r[14] + + 0x4u);
    }
L_00091618:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0009161c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_00091620:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_00091624:;
    {
        uint32_t v = shifter(cpu->r[3], 1, (cpu->r[9] & 0xffu), &shc); cpu->r[3] = v;
    }
L_00091628:;
    {
        wr32(cpu->r[12] + + 0x20u, cpu->r[3]);
    }
L_0009162c:;
    {
        cpu->r[3] = rd32(cpu->r[14] + + 0x8u);
    }
L_00091630:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00091634:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_00091638:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 0);
    }
L_0009163c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x90u);
    }
L_00091640:;
    {
        uint32_t v = shifter(cpu->r[3], 1, (cpu->r[9] & 0xffu), &shc); cpu->r[3] = v;
    }
L_00091644:;
    {
        wr32(cpu->r[12] + + 0x24u, cpu->r[3]);
    }
L_00091648:;
    {
        cpu->r[3] = rd32(cpu->r[14] + + 0xcu);
    }
L_0009164c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[1], cpu->r[6], 0, 0);
    }
L_00091650:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00091654:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_00091658:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x64u);
    }
L_0009165c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_00091660:;
    {
        uint32_t v = shifter(cpu->r[3], 1, (cpu->r[9] & 0xffu), &shc); cpu->r[3] = v;
    }
L_00091664:;
    {
        wr32(cpu->r[12] + + 0x28u, cpu->r[3]);
    }
L_00091668:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x14u);
    }
L_0009166c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00091670:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00091b48;
        }
    }
L_00091674:;
    {
        goto L_00091688;
    }
L_00091688:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_0009168c:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x2cu);
    }
L_00091690:;
    {
        cpu->r[14] = 0x00091694u; fn_0007f3e0(cpu);
    }
L_00091694:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00091698:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x74u);
    }
L_0009169c:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[6] + + 0x4u);
    }
L_000916a0:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x7cu);
    }
L_000916a4:;
    {
        *vfp_d(cpu,8) = (double)*(int32_t*)vfp_s(cpu,16);
    }
L_000916a8:;
    {
        cpu->r[12] = rd32(cpu->r[6]);
    }
L_000916ac:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000916b0:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x18u);
    }
L_000916b4:;
    {
        cpu->r[1] = 0x40000000u;
    }
L_000916b8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[14], 0, 0);
    }
L_000916bc:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x18u);
    }
L_000916c0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 0);
    }
L_000916c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_000916c8:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_000916cc:;
    {
        *vfp_d(cpu,6) = (double)*(int32_t*)vfp_s(cpu,15);
    }
L_000916d0:;
    {
        *vfp_d(cpu,7) = *vfp_d(cpu,10);
    }
L_000916d4:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,6); cpu->r[2]= (uint32_t)v; cpu->r[3]=(uint32_t)(v>>32);
    }
L_000916d8:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 7) + *vfp_d(cpu, 8) * *vfp_d(cpu, 9);
    }
L_000916dc:;
    {
        *vfp_d(cpu,8) = *vfp_d(cpu,7);
    }
L_000916e0:;
    {
        cpu->r[14] = 0x000916e4u; imp_pow(cpu); /* pow */
    }
L_000916e4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x64u);
    }
L_000916e8:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000916ec:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x20u);
    }
L_000916f0:;
    {
        cpu->r[12] = rd32(cpu->r[2] + + 0x324u);
    }
L_000916f4:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x24u);
    }
L_000916f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_000916fc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_00091700:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00091704:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x28u);
    }
L_00091708:;
    {
        wr32(cpu->r[12] + + 0x34u, cpu->r[3]);
    }
L_0009170c:;
    {
        cpu->r[12] = rd32(cpu->r[14] + + 0x10u);
    }
L_00091710:;
    {
        cpu->r[3] = rd32(cpu->r[14] + + 0x14u);
    }
L_00091714:;
    {
        cpu->r[2] = rd32(cpu->r[9] + cpu->r[6]);
    }
L_00091718:;
    {
        uint32_t v = cpu->r[3] * cpu->r[12]; cpu->r[3] = v;
    }
L_0009171c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_00091720:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_00091724:;
    {
        *(uint64_t*)vfp_d(cpu,6) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_00091728:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 8) * *vfp_d(cpu, 6);
    }
L_0009172c:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00091730:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_00091734:;
    {
        *vfp_s(cpu,15) = (float)*vfp_d(cpu,7);
    }
L_00091738:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0009173c:;
    {
        cpu->r[14] = 0x00091744u;
    }
L_00091740:;
    {
        uint32_t t = rd32(cpu->r[2]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00091744u)) return;
    }
L_00091744:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x20u);
    }
L_00091748:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_0009174c:;
    {
        cpu->r[7] = rd32(cpu->r[2] + + 0x10u);
    }
L_00091750:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x14u);
    }
L_00091754:;
    {
        uint32_t v = cpu->r[2] * cpu->r[7]; cpu->r[2] = v;
    }
L_00091758:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0009175c:;
    {
        wr32(cpu->r[3] + + 0x30u, cpu->r[0]);
    }
L_00091760:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00091a14;
        }
    }
L_00091764:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00091768:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_0009176c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00091770:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_00091774:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00091778:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0009177c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_00091780:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[2], 1, 1);
    }
L_00091784:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00091788:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0009178c:;
    {
        wr32(cpu->r[1] + + 0x1cu, cpu->r[6]);
    }
L_00091790:;
    {
        wr32(cpu->r[12] + + 0x20u, cpu->r[6]);
    }
L_00091794:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000024u, 0, 0);
    }
L_00091798:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000024u, 0, 0);
    }
L_0009179c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00091778;
        }
    }
L_000917a0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_000917a4:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x28u);
    }
L_000917a8:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[6]);
    }
L_000917ac:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[6]);
    }
L_000917b0:;
    {
        cpu->r[9] = rd32(cpu->r[12] + cpu->r[9]);
    }
L_000917b4:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[9]);
    }
L_000917b8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_000917bc:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000917c0:;
    {
        cpu->r[14] = 0x000917c4u; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_000917c4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4cu);
    }
L_000917c8:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x30u);
    }
L_000917cc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000917d0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_000917d4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[8], cpu->r[2], 0, 0);
    }
L_000917d8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, (cpu->r[9] & 0xffu), &shc), 0, 0);
    }
L_000917dc:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_000917e0:;
    {
        cpu->r[14] = 0x000917e4u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_000917e4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_000917e8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000917ec:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x3cu);
    }
L_000917f0:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x1cu);
    }
L_000917f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], cpu->r[14], 0, 0);
    }
L_000917f8:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x48u);
    }
L_000917fc:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[2], 1, 1);
    }
L_00091800:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[10] = cpu->r[2];
        }
    }
L_00091804:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_00091808:;
    {
        wr32(cpu->r[8] + cpu->r[1], cpu->r[10]);
    }
L_0009180c:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x20u);
    }
L_00091810:;
    {
        uint32_t v = shifter(cpu->r[10], 1, (cpu->r[5] & 0xffu), &shc); cpu->r[10] = v;
    }
L_00091814:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00091818:;
    {
        uint32_t v = shifter(cpu->r[10], 2, (cpu->r[5] & 0xffu), &shc); cpu->r[10] = v;
    }
L_0009181c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[10]);
    }
L_00091820:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[9], shifter(cpu->r[0], 2, (cpu->r[12] & 0xffu), &shc), 0, 0);
    }
L_00091824:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x44u);
    }
L_00091828:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_0009182c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = cpu->r[1];
        }
    }
L_00091830:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[2];
        }
    }
L_00091834:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[2]);
    }
L_00091838:;
    {
        cpu->r[0] = rd32(cpu->r[14] + + 0x24u);
    }
L_0009183c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[9], 0, 0);
    }
L_00091840:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x38u);
    }
L_00091844:;
    {
        uint32_t v = shifter(cpu->r[2], 1, (cpu->r[4] & 0xffu), &shc); cpu->r[2] = v;
    }
L_00091848:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_0009184c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = cpu->r[0];
        }
    }
L_00091850:;
    {
        wr32(cpu->r[6] + + 0x8u, cpu->r[3]);
    }
L_00091854:;
    {
        cpu->r[0] = rd32(cpu->r[14] + + 0x28u);
    }
L_00091858:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_0009185c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x40u);
    }
L_00091860:;
    {
        uint32_t v = shifter(cpu->r[2], 2, (cpu->r[4] & 0xffu), &shc); cpu->r[2] = v;
    }
L_00091864:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_00091868:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = cpu->r[0];
        }
    }
L_0009186c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_00091870:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[14], 0, 0);
    }
L_00091874:;
    {
        wr32(cpu->r[6] + + 0xcu, cpu->r[1]);
    }
L_00091878:;
    {
        uint32_t v = shifter(cpu->r[3], 1, (cpu->r[5] & 0xffu), &shc); cpu->r[3] = v;
    }
L_0009187c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_00091880:;
    {
        uint32_t v = shifter(cpu->r[2], 1, (cpu->r[4] & 0xffu), &shc); cpu->r[2] = v;
    }
L_00091884:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 2, (cpu->r[5] & 0xffu), &shc), cpu->r[10], 1, 0);
    }
L_00091888:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[2], 2, (cpu->r[4] & 0xffu), &shc), cpu->r[1], 1, 0);
    }
L_0009188c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, (cpu->r[5] & 0xffu), &shc); cpu->r[3] = v;
    }
L_00091890:;
    {
        wr32(cpu->r[6] + + 0x10u, cpu->r[3]);
    }
L_00091894:;
    {
        uint32_t v = shifter(cpu->r[2], 1, (cpu->r[4] & 0xffu), &shc); cpu->r[2] = v;
    }
L_00091898:;
    {
        wr32(cpu->r[6] + + 0x14u, cpu->r[2]);
    }
L_0009189c:;
    {
        uint32_t v = cpu->r[3] * cpu->r[2]; cpu->r[3] = v;
    }
L_000918a0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x34u);
    }
L_000918a4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_000918a8:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 4u, &shc); cpu->r[0] = v;
    }
L_000918ac:;
    {
        cpu->r[14] = 0x000918b4u;
    }
L_000918b0:;
    {
        uint32_t t = rd32(cpu->r[2]);
        if (guest_pc_write(cpu, t, entry_lr, 0x000918b4u)) return;
    }
L_000918b4:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x14u);
    }
L_000918b8:;
    {
        wr32(cpu->r[6] + + 0x18u, cpu->r[0]);
    }
L_000918bc:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x10u);
    }
L_000918c0:;
    {
        cpu->r[14] = 0x000918c4u; fn_000920d4(cpu);
    }
L_000918c4:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x14u);
    }
L_000918c8:;
    {
        wr32(cpu->r[6] + + 0x1cu, cpu->r[0]);
    }
L_000918cc:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x10u);
    }
L_000918d0:;
    {
        cpu->r[14] = 0x000918d4u; fn_000920d4(cpu);
    }
L_000918d4:;
    {
        cpu->r[8] = rd32(cpu->r[6] + + 0x10u);
    }
L_000918d8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x14u);
    }
L_000918dc:;
    {
        uint32_t v = cpu->r[3] * cpu->r[8]; cpu->r[3] = v;
    }
L_000918e0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000918e4:;
    {
        wr32(cpu->r[6] + + 0x20u, cpu->r[0]);
    }
L_000918e8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000919dc;
        }
    }
L_000918ec:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_000918f0:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_000918f4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x28u);
    }
L_000918f8:;
    {
        cpu->r[7] = cpu->r[10];
    }
L_000918fc:;
    {
        cpu->r[9] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_00091900:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00091904:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00091908:;
    {
        cpu->r[14] = 0x0009190cu; imp___aeabi_idivmod(cpu); /* __aeabi_idivmod */
    }
L_0009190c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x8u);
    }
L_00091910:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00091914:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_00091918:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[14], shifter(cpu->r[1], 2, (cpu->r[5] & 0xffu), &shc), 0, 0);
    }
L_0009191c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00091920:;
    {
        cpu->r[14] = 0x00091924u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00091924:;
    {
        cpu->r[8] = rd32(cpu->r[6] + + 0x18u);
    }
L_00091928:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_0009192c:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_00091930:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[11], cpu->r[3], 0, 0);
    }
L_00091934:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], cpu->r[10], 0, 0);
    }
L_00091938:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x4u);
    }
L_0009193c:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[2], 1, 1);
    }
L_00091940:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[3] + + 0xcu, cpu->r[11]);
        }
    }
L_00091944:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[3] + + 0xcu, cpu->r[2]);
        }
    }
L_00091948:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x4u);
    }
L_0009194c:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_00091950:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[14], shifter(cpu->r[0], 2, (cpu->r[4] & 0xffu), &shc), 0, 0);
    }
L_00091954:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_00091958:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[3] + + 0x10u, cpu->r[2]);
        }
    }
L_0009195c:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[3] + + 0x10u, cpu->r[12]);
        }
    }
L_00091960:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x8u);
    }
L_00091964:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_00091968:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 1);
    }
L_0009196c:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[3] + + 0x14u, cpu->r[1]);
        }
    }
L_00091970:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[3] + + 0x14u, cpu->r[12]);
        }
    }
L_00091974:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_00091978:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0xcu);
    }
L_0009197c:;
    {
        cpu->r[0] = 0x00002002u;
    }
L_00091980:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_00091984:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[3] + + 0x18u, cpu->r[2]);
        }
    }
L_00091988:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[3] + + 0x18u, cpu->r[1]);
        }
    }
L_0009198c:;
    {
        cpu->r[14] = 0x00091994u;
    }
L_00091990:;
    {
        uint32_t t = rd32(cpu->r[9]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00091994u)) return;
    }
L_00091994:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_00091998:;
    {
        wr32(cpu->r[8] + cpu->r[10], cpu->r[0]);
    }
L_0009199c:;
    {
        cpu->r[0] = 0x00000960u;
    }
L_000919a0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000030u, 0, 0);
    }
L_000919a4:;
    {
        cpu->r[14] = 0x000919acu;
    }
L_000919a8:;
    {
        uint32_t t = rd32(cpu->r[9]);
        if (guest_pc_write(cpu, t, entry_lr, 0x000919acu)) return;
    }
L_000919ac:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_000919b0:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[0]);
    }
L_000919b4:;
    {
        cpu->r[0] = 0x00000960u;
    }
L_000919b8:;
    {
        cpu->r[14] = 0x000919c0u;
    }
L_000919bc:;
    {
        uint32_t t = rd32(cpu->r[9]);
        if (guest_pc_write(cpu, t, entry_lr, 0x000919c0u)) return;
    }
L_000919c0:;
    {
        cpu->r[8] = rd32(cpu->r[6] + + 0x10u);
    }
L_000919c4:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x14u);
    }
L_000919c8:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_000919cc:;
    {
        uint32_t v = cpu->r[2] * cpu->r[8]; cpu->r[2] = v;
    }
L_000919d0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[7], 1, 1);
    }
L_000919d4:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[0]);
    }
L_000919d8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00091900;
        }
    }
L_000919dc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x20u);
    }
L_000919e0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_000919e4:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x1cu);
    }
L_000919e8:;
    {
        cpu->r[7] = rd32(cpu->r[1] + + 0x10u);
    }
L_000919ec:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000919f0:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x14u);
    }
L_000919f4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000024u, 0, 0);
    }
L_000919f8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_000919fc:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[6]);
    }
L_00091a00:;
    {
        uint32_t v = cpu->r[3] * cpu->r[7]; cpu->r[3] = v;
    }
L_00091a04:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00091a08:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[9] = rd32(cpu->r[13] + + 0x14u);
        }
    }
L_00091a0c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[8] = rd32(cpu->r[9] + + 0x30u);
        }
    }
L_00091a10:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000917b8;
        }
    }
L_00091a14:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_00091a18:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x78u);
    }
L_00091a1c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_00091a20:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x18u);
    }
L_00091a24:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x68u);
    }
L_00091a28:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000020u, 0, 0);
    }
L_00091a2c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x58u);
    }
L_00091a30:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_00091a34:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_00091a38:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_00091a3c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00091a40:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[1]);
    }
L_00091a44:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[2]);
    }
L_00091a48:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00091598;
        }
    }
L_00091a4c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x50u);
    }
L_00091a50:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00091a54:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x80u);
    }
L_00091a58:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x10u);
    }
L_00091a5c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_00091a60:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8cu);
    }
L_00091a64:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000007cu, 0, 0);
    }
L_00091a68:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x88u);
    }
L_00091a6c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_00091a70:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_00091a74:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[12]);
    }
L_00091a78:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000018u, 0, 0);
    }
L_00091a7c:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[0]);
    }
L_00091a80:;
    {
        wr32(cpu->r[13] + + 0x8cu, cpu->r[1]);
    }
L_00091a84:;
    {
        wr32(cpu->r[13] + + 0x88u, cpu->r[2]);
    }
L_00091a88:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000913d0;
        }
    }
L_00091a8c:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x9cu);
    }
L_00091a90:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x98u);
    }
L_00091a94:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x7cu);
    }
L_00091a98:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000430u, 0, 0);
    }
L_00091a9c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00091aa0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00091aa4:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000030u, 0, 0);
    }
L_00091aa8:;
    {
        wr32(cpu->r[13] + + 0x98u, cpu->r[6]);
    }
L_00091aac:;
    {
        wr32(cpu->r[13] + + 0x9cu, cpu->r[3]);
    }
L_00091ab0:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[9]);
    }
L_00091ab4:;
    {
        goto L_00091270;
    }
L_00091ab8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x14u);
    }
L_00091abc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00091ac0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x58u);
    }
L_00091ac4:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x50u);
    }
L_00091ac8:;
    {
        wr32(cpu->r[2] + + 0x2cu, cpu->r[1]);
    }
L_00091acc:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[3]);
    }
L_00091ad0:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_00091ad4:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00091ad8:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x60u);
    }
L_00091adc:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x50u);
    }
L_00091ae0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00091ae4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x54u);
    }
L_00091ae8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[9], 0, 0);
    }
L_00091aec:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x64u);
    }
L_00091af0:;
    {
        uint32_t v = shifter(cpu->r[3], 1, (cpu->r[12] & 0xffu), &shc); cpu->r[3] = v;
    }
L_00091af4:;
    {
        wr32(cpu->r[2] + + 0x1cu, cpu->r[3]);
    }
L_00091af8:;
    {
        cpu->r[3] = rd32(cpu->r[14] + + 0x4u);
    }
L_00091afc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x90u);
    }
L_00091b00:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00091b04:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[9], 0, 0);
    }
L_00091b08:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[1], cpu->r[6], 0, 0);
    }
L_00091b0c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, (cpu->r[12] & 0xffu), &shc); cpu->r[3] = v;
    }
L_00091b10:;
    {
        wr32(cpu->r[2] + + 0x20u, cpu->r[3]);
    }
L_00091b14:;
    {
        cpu->r[3] = rd32(cpu->r[14] + + 0x8u);
    }
L_00091b18:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00091b1c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[9], 0, 0);
    }
L_00091b20:;
    {
        uint32_t v = shifter(cpu->r[3], 1, (cpu->r[12] & 0xffu), &shc); cpu->r[3] = v;
    }
L_00091b24:;
    {
        wr32(cpu->r[2] + + 0x24u, cpu->r[3]);
    }
L_00091b28:;
    {
        cpu->r[3] = rd32(cpu->r[14] + + 0xcu);
    }
L_00091b2c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00091b30:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[9], 0, 0);
    }
L_00091b34:;
    {
        uint32_t v = shifter(cpu->r[3], 1, (cpu->r[12] & 0xffu), &shc); cpu->r[3] = v;
    }
L_00091b38:;
    {
        wr32(cpu->r[2] + + 0x28u, cpu->r[3]);
    }
L_00091b3c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x14u);
    }
L_00091b40:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00091b44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00091688;
        }
    }
L_00091b48:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_00091b4c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x2cu);
    }
L_00091b50:;
    {
        cpu->r[14] = 0x00091b54u; fn_0007efd4(cpu);
    }
L_00091b54:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00091b58:;
    {
        goto L_00091698;
    }
L_00091b5c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00091b60:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00091b64:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_00091b68:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00091b6c:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 1u, &shc); cpu->r[0] = v;
    }
L_00091b70:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 1u, &shc); cpu->r[1] = v;
    }
L_00091b74:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[2]);
    }
L_00091b78:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_00091b7c:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[0]);
    }
L_00091b80:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[1]);
    }
L_00091b84:;
    {
        goto L_00091510;
    }
L_00091b88:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000a4u, 0, 0);
    }
L_00091b8c:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        *(uint64_t*)vfp_d(cpu, 10) = rd64(cpu->r[13] + 16u);
        cpu->r[13] += 24u;
    }
L_00091b90:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00091b94u)) return;
    }
}

/* tcd_dump @ 00091b98 (arm) */
void fn_00091b98(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00091b98:;
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
L_00091b9c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00091ba0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000074u, 1, 0);
    }
L_00091ba4:;
    {
        cpu->r[0] = rd32(0x00091bacu + + 0x460u);
    }
L_00091ba8:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00091bac:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[1]);
    }
L_00091bb0:;
    {
        cpu->r[0] = add_flags(cpu, 0x00091bb8u, cpu->r[0], 0, 0);
    }
L_00091bb4:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[2]);
    }
L_00091bb8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00091bbc:;
    {
        cpu->r[2] = 0x00000008u;
    }
L_00091bc0:;
    {
        cpu->r[14] = 0x00091bc4u; imp_fwrite(cpu); /* fwrite */
    }
L_00091bc4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x6cu);
    }
L_00091bc8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x58u);
    }
L_00091bcc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00091bd0:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x58u);
    }
L_00091bd4:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x1cu);
    }
L_00091bd8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00091bdc:;
    {
        cpu->r[2] = rd32(cpu->r[1]);
    }
L_00091be0:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[3]);
    }
L_00091be4:;
    {
        cpu->r[14] = rd32(cpu->r[12]);
    }
L_00091be8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_00091bec:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00091bf0:;
    {
        cpu->r[1] = rd32(0x00091bf8u + + 0x418u);
    }
L_00091bf4:;
    {
        wr32(cpu->r[13], cpu->r[14]);
    }
L_00091bf8:;
    {
        cpu->r[14] = rd32(cpu->r[12] + + 0x8u);
    }
L_00091bfc:;
    {
        cpu->r[1] = add_flags(cpu, 0x00091c04u, cpu->r[1], 0, 0);
    }
L_00091c00:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[4]);
    }
L_00091c04:;
    {
        cpu->r[4] = rd32(0x00091c0cu + + 0x408u);
    }
L_00091c08:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_00091c0c:;
    {
        cpu->r[14] = rd32(cpu->r[12] + + 0x4u);
    }
L_00091c10:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[4]);
    }
L_00091c14:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[14]);
    }
L_00091c18:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0xcu);
    }
L_00091c1c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_00091c20:;
    {
        cpu->r[14] = 0x00091c24u; imp_fprintf(cpu); /* fprintf */
    }
L_00091c24:;
    {
        cpu->r[3] = rd32(0x00091c2cu + + 0x3ecu);
    }
L_00091c28:;
    {
        cpu->r[3] = add_flags(cpu, 0x00091c30u, cpu->r[3], 0, 0);
    }
L_00091c2c:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[3]);
    }
L_00091c30:;
    {
        cpu->r[3] = rd32(0x00091c38u + + 0x3e4u);
    }
L_00091c34:;
    {
        cpu->r[3] = add_flags(cpu, 0x00091c3cu, cpu->r[3], 0, 0);
    }
L_00091c38:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[3]);
    }
L_00091c3c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x58u);
    }
L_00091c40:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x4u);
    }
L_00091c44:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_00091c48:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_00091c4c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00091c50:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00091c54:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00091fec;
        }
    }
L_00091c58:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x6cu);
    }
L_00091c5c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00091c60:;
    {
        cpu->r[2] = 0x00000009u;
    }
L_00091c64:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00091c68:;
    {
        cpu->r[0] = rd32(cpu->r[12] + + 0x18u);
    }
L_00091c6c:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x8u);
    }
L_00091c70:;
    {
        cpu->r[0] = rd32(0x00091c78u + + 0x3a8u);
    }
L_00091c74:;
    {
        cpu->r[0] = add_flags(cpu, 0x00091c7cu, cpu->r[0], 0, 0);
    }
L_00091c78:;
    {
        cpu->r[14] = 0x00091c7cu; imp_fwrite(cpu); /* fwrite */
    }
L_00091c7c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x54u);
    }
L_00091c80:;
    {
        cpu->r[1] = rd32(0x00091c88u + + 0x39cu);
    }
L_00091c84:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00091c88:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[4], cpu->r[14], 0, 0);
    }
L_00091c8c:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[14]);
    }
L_00091c90:;
    {
        cpu->r[1] = add_flags(cpu, 0x00091c98u, cpu->r[1], 0, 0);
    }
L_00091c94:;
    {
        cpu->r[3] = rd32(cpu->r[14] + + 0x8u);
    }
L_00091c98:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_00091c9c:;
    {
        cpu->r[3] = rd32(cpu->r[14] + + 0xcu);
    }
L_00091ca0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00091ca4:;
    {
        cpu->r[3] = rd32(cpu->r[14] + + 0x10u);
    }
L_00091ca8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_00091cac:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x54u);
    }
L_00091cb0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00091cb4:;
    {
        cpu->r[3] = rd32(cpu->r[14] + + 0x4u);
    }
L_00091cb8:;
    {
        cpu->r[14] = 0x00091cbcu; imp_fprintf(cpu); /* fprintf */
    }
L_00091cbc:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x50u);
    }
L_00091cc0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_00091cc4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00091cc8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00091fb8;
        }
    }
L_00091ccc:;
    {
        cpu->r[11] = rd32(0x00091cd4u + + 0x354u);
    }
L_00091cd0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00091cd4:;
    {
        cpu->r[14] = rd32(0x00091cdcu + + 0x350u);
    }
L_00091cd8:;
    {
        cpu->r[0] = rd32(0x00091ce0u + + 0x350u);
    }
L_00091cdc:;
    {
        cpu->r[11] = add_flags(cpu, 0x00091ce4u, cpu->r[11], 0, 0);
    }
L_00091ce0:;
    {
        cpu->r[1] = rd32(0x00091ce8u + + 0x34cu);
    }
L_00091ce4:;
    {
        cpu->r[3] = rd32(0x00091cecu + + 0x34cu);
    }
L_00091ce8:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[12]);
    }
L_00091cec:;
    {
        cpu->r[3] = add_flags(cpu, 0x00091cf4u, cpu->r[3], 0, 0);
    }
L_00091cf0:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[14]);
    }
L_00091cf4:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[0]);
    }
L_00091cf8:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_00091cfc:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[1]);
    }
L_00091d00:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x50u);
    }
L_00091d04:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00091d08:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x60u);
    }
L_00091d0c:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00091d10:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x4cu);
    }
L_00091d14:;
    {
        cpu->r[4] = rd32(cpu->r[2] + + 0x14u);
    }
L_00091d18:;
    {
        cpu->r[0] = add_flags(cpu, 0x00091d20u, cpu->r[14], 0, 0);
    }
L_00091d1c:;
    {
        cpu->r[2] = 0x0000000cu;
    }
L_00091d20:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], shifter(cpu->r[12], 2, 5u, &shc), 0, 0);
    }
L_00091d24:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[12]);
    }
L_00091d28:;
    {
        cpu->r[14] = 0x00091d2cu; imp_fwrite(cpu); /* fwrite */
    }
L_00091d2c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x3cu);
    }
L_00091d30:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4cu);
    }
L_00091d34:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x3cu);
    }
L_00091d38:;
    {
        cpu->r[12] = rd32(cpu->r[1] + + 0x8u);
    }
L_00091d3c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[0], 2, 5u, &shc));
    }
L_00091d40:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00091d44:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x4u);
    }
L_00091d48:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00091d4c:;
    {
        cpu->r[12] = rd32(cpu->r[14] + + 0xcu);
    }
L_00091d50:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x64u);
    }
L_00091d54:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00091d58:;
    {
        cpu->r[1] = add_flags(cpu, 0x00091d60u, cpu->r[4], 0, 0);
    }
L_00091d5c:;
    {
        cpu->r[12] = rd32(cpu->r[14] + + 0x10u);
    }
L_00091d60:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_00091d64:;
    {
        cpu->r[14] = 0x00091d68u; imp_fprintf(cpu); /* fprintf */
    }
L_00091d68:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x3cu);
    }
L_00091d6c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x10u);
    }
L_00091d70:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00091d74:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00091f84;
        }
    }
L_00091d78:;
    {
        cpu->r[2] = rd32(0x00091d80u + + 0x2bcu);
    }
L_00091d7c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00091d80:;
    {
        cpu->r[3] = rd32(0x00091d88u + + 0x2b8u);
    }
L_00091d84:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[1]);
    }
L_00091d88:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[2]);
    }
L_00091d8c:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[3]);
    }
L_00091d90:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[1]);
    }
L_00091d94:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x3cu);
    }
L_00091d98:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00091d9c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_00091da0:;
    {
        cpu->r[2] = 0x0000000au;
    }
L_00091da4:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00091da8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x48u);
    }
L_00091dac:;
    {
        cpu->r[4] = rd32(cpu->r[12] + + 0x14u);
    }
L_00091db0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], cpu->r[14], 0, 0);
    }
L_00091db4:;
    {
        cpu->r[14] = 0x00091db8u; imp_fwrite(cpu); /* fwrite */
    }
L_00091db8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_00091dbc:;
    {
        uint32_t base = cpu->r[7];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[3] = v0;
        cpu->r[12] = v1;
    }
L_00091dc0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[0]);
    }
L_00091dc4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00091dc8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00091dcc:;
    {
        cpu->r[12] = rd32(cpu->r[7] + + 0xcu);
    }
L_00091dd0:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x44u);
    }
L_00091dd4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00091dd8:;
    {
        cpu->r[1] = add_flags(cpu, 0x00091de0u, cpu->r[4], 0, 0);
    }
L_00091ddc:;
    {
        cpu->r[12] = rd32(cpu->r[7] + + 0x10u);
    }
L_00091de0:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_00091de4:;
    {
        cpu->r[12] = rd32(cpu->r[7] + + 0x14u);
    }
L_00091de8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_00091dec:;
    {
        cpu->r[12] = rd32(cpu->r[7] + + 0x18u);
    }
L_00091df0:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_00091df4:;
    {
        cpu->r[14] = 0x00091df8u; imp_fprintf(cpu); /* fprintf */
    }
L_00091df8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x18u);
    }
L_00091dfc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00091e00:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00091f44;
        }
    }
L_00091e04:;
    {
        cpu->r[12] = rd32(0x00091e0cu + + 0x238u);
    }
L_00091e08:;
    {
        cpu->r[9] = cpu->r[7];
    }
L_00091e0c:;
    {
        cpu->r[14] = rd32(0x00091e14u + + 0x234u);
    }
L_00091e10:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00091e14:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_00091e18:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[12]);
    }
L_00091e1c:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[14]);
    }
L_00091e20:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x38u);
    }
L_00091e24:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00091e28:;
    {
        cpu->r[2] = 0x0000000fu;
    }
L_00091e2c:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00091e30:;
    {
        cpu->r[0] = add_flags(cpu, 0x00091e38u, cpu->r[4], 0, 0);
    }
L_00091e34:;
    {
        cpu->r[14] = 0x00091e38u; imp_fwrite(cpu); /* fwrite */
    }
L_00091e38:;
    {
        cpu->r[12] = rd32(cpu->r[9] + + 0x24u);
    }
L_00091e3c:;
    {
        cpu->r[2] = rd32(cpu->r[9] + + 0x1cu);
    }
L_00091e40:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00091e44:;
    {
        cpu->r[3] = rd32(cpu->r[9] + + 0x20u);
    }
L_00091e48:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00091e4c:;
    {
        cpu->r[12] = rd32(cpu->r[9] + + 0x28u);
    }
L_00091e50:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00091e54:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00091e58:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[9] + + 0x38u);
    }
L_00091e5c:;
    {
        *vfp_d(cpu,7) = (double)*vfp_s(cpu,14);
    }
L_00091e60:;
    {
        cpu->r[1] = add_flags(cpu, 0x00091e68u, cpu->r[14], 0, 0);
    }
L_00091e64:;
    {
        *(uint64_t*)G(cpu->r[13] + + 0x8u) = *(uint64_t*)vfp_d(cpu, 7);
    }
L_00091e68:;
    {
        cpu->r[12] = rd32(cpu->r[9] + + 0x34u);
    }
L_00091e6c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_00091e70:;
    {
        cpu->r[14] = 0x00091e74u; imp_fprintf(cpu); /* fprintf */
    }
L_00091e74:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x14u);
    }
L_00091e78:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x10u);
    }
L_00091e7c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_00091e80:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00091e84:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00091f10;
        }
    }
L_00091e88:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00091e8c:;
    {
        cpu->r[8] = cpu->r[5];
    }
L_00091e90:;
    {
        cpu->r[10] = rd32(cpu->r[9] + + 0x30u);
    }
L_00091e94:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00091e98:;
    {
        cpu->r[2] = 0x00000011u;
    }
L_00091e9c:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00091ea0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[10], cpu->r[5], 0, 0);
    }
L_00091ea4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_00091ea8:;
    {
        cpu->r[14] = 0x00091eacu; imp_fwrite(cpu); /* fwrite */
    }
L_00091eac:;
    {
        cpu->r[2] = rd32(cpu->r[10] + cpu->r[5]);
    }
L_00091eb0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x8u);
    }
L_00091eb4:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_00091eb8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_00091ebc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00091ec0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_00091ec4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000024u, 0, 0);
    }
L_00091ec8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00091ecc:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_00091ed0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00091ed4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x10u);
    }
L_00091ed8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_00091edc:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x14u);
    }
L_00091ee0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_00091ee4:;
    {
        cpu->r[14] = 0x00091ee8u; imp_fprintf(cpu); /* fprintf */
    }
L_00091ee8:;
    {
        cpu->r[2] = 0x0000000cu;
    }
L_00091eec:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00091ef0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00091ef4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00091ef8:;
    {
        cpu->r[14] = 0x00091efcu; imp_fwrite(cpu); /* fwrite */
    }
L_00091efc:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x14u);
    }
L_00091f00:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x10u);
    }
L_00091f04:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_00091f08:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[8], 1, 1);
    }
L_00091f0c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00091e90;
        }
    }
L_00091f10:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_00091f14:;
    {
        cpu->r[2] = 0x0000000au;
    }
L_00091f18:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00091f1c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000020u, 0, 0);
    }
L_00091f20:;
    {
        cpu->r[0] = add_flags(cpu, 0x00091f28u, cpu->r[1], 0, 0);
    }
L_00091f24:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00091f28:;
    {
        cpu->r[14] = 0x00091f2cu; imp_fwrite(cpu); /* fwrite */
    }
L_00091f2c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_00091f30:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x18u);
    }
L_00091f34:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00091f38:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[2]);
    }
L_00091f3c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00091f40:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00091e20;
        }
    }
L_00091f44:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x40u);
    }
L_00091f48:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00091f4c:;
    {
        cpu->r[2] = 0x00000008u;
    }
L_00091f50:;
    {
        cpu->r[0] = add_flags(cpu, 0x00091f58u, cpu->r[3], 0, 0);
    }
L_00091f54:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00091f58:;
    {
        cpu->r[14] = 0x00091f5cu; imp_fwrite(cpu); /* fwrite */
    }
L_00091f5c:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x3cu);
    }
L_00091f60:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x34u);
    }
L_00091f64:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_00091f68:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_00091f6c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_00091f70:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x0000007cu, 0, 0);
    }
L_00091f74:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[12]);
    }
L_00091f78:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_00091f7c:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[14]);
    }
L_00091f80:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00091d94;
        }
    }
L_00091f84:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x68u);
    }
L_00091f88:;
    {
        cpu->r[2] = 0x00000006u;
    }
L_00091f8c:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00091f90:;
    {
        cpu->r[0] = add_flags(cpu, 0x00091f98u, cpu->r[1], 0, 0);
    }
L_00091f94:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00091f98:;
    {
        cpu->r[14] = 0x00091f9cu; imp_fwrite(cpu); /* fwrite */
    }
L_00091f9c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x50u);
    }
L_00091fa0:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x4cu);
    }
L_00091fa4:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x10u);
    }
L_00091fa8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00091fac:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[4]);
    }
L_00091fb0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_00091fb4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00091d00;
        }
    }
L_00091fb8:;
    {
        cpu->r[0] = rd32(0x00091fc0u + + 0x8cu);
    }
L_00091fbc:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00091fc0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00091fc4:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00091fc8:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00091fcc:;
    {
        cpu->r[0] = add_flags(cpu, 0x00091fd4u, cpu->r[0], 0, 0);
    }
L_00091fd0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[1], 0, 0);
    }
L_00091fd4:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[12]);
    }
L_00091fd8:;
    {
        cpu->r[14] = 0x00091fdcu; imp_fwrite(cpu); /* fwrite */
    }
L_00091fdc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x54u);
    }
L_00091fe0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000350u, 0, 0);
    }
L_00091fe4:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[0]);
    }
L_00091fe8:;
    {
        goto L_00091c3c;
    }
L_00091fec:;
    {
        cpu->r[0] = rd32(0x00091ff4u + + 0x5cu);
    }
L_00091ff0:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00091ff4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00091ff8:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00091ffc:;
    {
        cpu->r[0] = add_flags(cpu, 0x00092004u, cpu->r[0], 0, 0);
    }
L_00092000:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000074u, 0, 0);
    }
L_00092004:;
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
L_00092008:;
    {
        imp_fwrite(cpu); /* tail fwrite */ return;
    }
}

/* tgt_destroy @ 00092054 (arm) */
void fn_00092054(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00092054:;
    {
        cpu->r[3] = rd32(0x0009205cu + + 0x2cu);
    }
L_00092058:;
    {
        cpu->r[2] = rd32(0x00092060u + + 0x2cu);
    }
L_0009205c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00092064u, cpu->r[3], 0, 0);
    }
L_00092060:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00092064:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00092068:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0009206c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_00092070:;
    {
        cpu->r[14] = 0x00092078u;
    }
L_00092074:;
    {
        uint32_t t = rd32(cpu->r[4]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00092078u)) return;
    }
L_00092078:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0009207c:;
    {
        cpu->r[14] = 0x00092084u;
    }
L_00092080:;
    {
        uint32_t t = rd32(cpu->r[4]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00092084u)) return;
    }
L_00092084:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00092088u)) return;
    }
}

/* tgt_reset @ 00092090 (arm) */
void fn_00092090(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00092090:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00092094:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00092098:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x8u);
    }
L_0009209c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000920a0:;
    {
        if (cond_test(cpu, 14)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000920a4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000920a8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xcu);
    }
L_000920ac:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_000920b0:;
    {
        cpu->r[0] = 0x000003e7u;
    }
L_000920b4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_000920b8:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[0]);
    }
L_000920bc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_000920c0:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[1]);
    }
L_000920c4:;
    {
        wr32(cpu->r[3] + + 0xcu, cpu->r[1]);
    }
L_000920c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000010u, 0, 0);
    }
L_000920cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000920b4;
        }
    }
L_000920d0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* tgt_create @ 000920d4 (arm) */
void fn_000920d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000920d4:;
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
L_000920d8:;
    {
        cpu->r[7] = rd32(0x000920e0u + + 0x1e4u);
    }
L_000920dc:;
    {
        cpu->r[8] = rd32(0x000920e4u + + 0x1e4u);
    }
L_000920e0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000010cu, 1, 0);
    }
L_000920e4:;
    {
        cpu->r[7] = add_flags(cpu, 0x000920ecu, cpu->r[7], 0, 0);
    }
L_000920e8:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_000920ec:;
    {
        cpu->r[0] = 0x00000010u;
    }
L_000920f0:;
    {
        cpu->r[10] = cpu->r[1];
    }
L_000920f4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_000920f8:;
    {
        cpu->r[14] = 0x00092100u;
    }
L_000920fc:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00092100u)) return;
    }
L_00092100:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00092104:;
    {
        wr32(cpu->r[13], cpu->r[0]);
    }
L_00092108:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009227c;
        }
    }
L_0009210c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00092110:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[6]);
        wr32(ea + 4u, cpu->r[10]);
    }
L_00092114:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000088u, 0, 0);
    }
L_00092118:;
    {
        cpu->r[9] = cpu->r[2];
    }
L_0009211c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00092120:;
    {
        wr32(cpu->r[13] + + 0x88u, cpu->r[6]);
    }
L_00092124:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[10]);
    }
L_00092128:;
    {
        goto L_00092130;
    }
L_0009212c:;
    {
        cpu->r[9] = cpu->r[3];
    }
L_00092130:;
    {
        uint32_t v = cpu->r[10] * cpu->r[6]; cpu->r[1] = v;
    }
L_00092134:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00092138:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_0009213c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_00092140:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 3, 31u, &shc), 0, 0);
    }
L_00092144:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], shifter(cpu->r[10], 3, 31u, &shc), 0, 0);
    }
L_00092148:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_0009214c:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 1u, &shc); cpu->r[6] = v;
    }
L_00092150:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[1], 0, 0);
    }
L_00092154:;
    {
        uint32_t v = shifter(cpu->r[10], 1, 1u, &shc); cpu->r[10] = v;
    }
L_00092158:;
    {
        wr32(cpu->r[5] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[6]);
    }
L_0009215c:;
    {
        wr32(cpu->r[4] + shifter(cpu->r[3], 2, 2u, &shc), cpu->r[10]);
    }
L_00092160:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0009212c;
        }
    }
L_00092164:;
    {
        cpu->r[0] = rd32(cpu->r[13]);
    }
L_00092168:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0009216c:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_00092170:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00092290;
        }
    }
L_00092174:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_00092178:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 4u, &shc); cpu->r[0] = v;
    }
L_0009217c:;
    {
        cpu->r[14] = 0x00092184u;
    }
L_00092180:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x00092184u)) return;
    }
L_00092184:;
    {
        cpu->r[1] = rd32(cpu->r[13]);
    }
L_00092188:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009218c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00092190:;
    {
        wr32(cpu->r[1] + + 0xcu, cpu->r[0]);
    }
L_00092194:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000922a8;
        }
    }
L_00092198:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_0009219c:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_000921a0:;
    {
        uint32_t base = cpu->r[2];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[1] = v0;
        cpu->r[2] = v1;
    }
L_000921a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009226c;
        }
    }
L_000921a8:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2]; cpu->r[2] = v;
    }
L_000921ac:;
    {
        uint32_t v = shifter(cpu->r[9], 2, 2u, &shc); cpu->r[9] = v;
    }
L_000921b0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[9]);
    }
L_000921b4:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_000921b8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 4u, &shc), 0, 0);
    }
L_000921bc:;
    {
        cpu->r[14] = cpu->r[2];
    }
L_000921c0:;
    {
        cpu->r[7] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_000921c4:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_000921c8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0009225c;
        }
    }
L_000921cc:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[9]);
    }
L_000921d0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_000921d4:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[7], 0x00000001u, 1, 0);
    }
L_000921d8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 0);
    }
L_000921dc:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[6], 0x00000004u, 1, 0);
    }
L_000921e0:;
    {
        uint32_t v = cpu->r[1] & ~ 0x00000001u; cpu->r[1] = v;
    }
L_000921e4:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 4u, &shc); cpu->r[11] = v;
    }
L_000921e8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
    }
L_000921ec:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[6], 0x00000002u, 1, 0);
    }
L_000921f0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_000921f4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00092238;
        }
    }
L_000921f8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000921fc:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_00092200:;
    {
        add_flags(cpu, cpu->r[1], 0x00000001u, 0, 1);
    }
L_00092204:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 0);
    }
L_00092208:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00092230;
        }
    }
L_0009220c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_00092210:;
    {
        wr32(cpu->r[3] + + 0x10u, cpu->r[2]);
    }
L_00092214:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000020u, 0, 0);
    }
L_00092218:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000010u, 0, 0);
    }
L_0009221c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00092238;
        }
    }
L_00092220:;
    {
        add_flags(cpu, cpu->r[1], 0x00000001u, 0, 1);
    }
L_00092224:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_00092228:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000002u, 1, 0);
    }
L_0009222c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009220c;
        }
    }
L_00092230:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000010u, 0, 0);
    }
L_00092234:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000010u, 0, 0);
    }
L_00092238:;
    {
        { uint32_t v = cpu->r[12] & 0x00000001u; set_nz(cpu, v); }
    }
L_0009223c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00092288;
        }
    }
L_00092240:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[12], 1, 1);
    }
L_00092244:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = cpu->r[14];
        }
    }
L_00092248:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[14] = add_flags(cpu, cpu->r[14], cpu->r[11], 0, 0);
        }
    }
L_0009224c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00092288;
        }
    }
L_00092250:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_00092254:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[7], 1, 1);
    }
L_00092258:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000921f0;
        }
    }
L_0009225c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_00092260:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_00092264:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[0], 1, 1);
    }
L_00092268:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000921c0;
        }
    }
L_0009226c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00092270:;
    {
        cpu->r[0] = rd32(cpu->r[13]);
    }
L_00092274:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_00092278:;
    {
        cpu->r[14] = 0x0009227cu; fn_00092090(cpu);
    }
L_0009227c:;
    {
        cpu->r[0] = rd32(cpu->r[13]);
    }
L_00092280:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000010cu, 0, 0);
    }
L_00092284:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00092288u)) return;
    }
L_00092288:;
    {
        cpu->r[14] = cpu->r[2];
    }
L_0009228c:;
    {
        goto L_00092250;
    }
L_00092290:;
    {
        cpu->r[3] = rd32(0x00092298u + + 0x34u);
    }
L_00092294:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_00092298:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_0009229c:;
    {
        cpu->r[14] = 0x000922a4u;
    }
L_000922a0:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x000922a4u)) return;
    }
L_000922a4:;
    {
        goto L_0009227c;
    }
L_000922a8:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_000922ac:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_000922b0:;
    {
        cpu->r[3] = rd32(0x000922b8u + + 0x14u);
    }
L_000922b4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_000922b8:;
    {
        cpu->r[14] = 0x000922c0u;
    }
L_000922bc:;
    {
        uint32_t t = rd32(cpu->r[3]);
        if (guest_pc_write(cpu, t, entry_lr, 0x000922c0u)) return;
    }
L_000922c0:;
    {
        goto L_0009227c;
    }
}

/* tgt_setvalue @ 000922d0 (arm) */
void fn_000922d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000922d0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xcu);
    }
L_000922d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 4u, &shc), 0, 1);
    }
L_000922d8:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000922dc:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_000922e0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_000922e4:;
    {
        if (cond_test(cpu, 11)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000922e8:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_000922ec:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000922f0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000922f4:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000922f8:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x4u);
    }
L_000922fc:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_00092300:;
    {
        if (cond_test(cpu, 13)) {
        goto L_000922e8;
        }
    }
L_00092304:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* tgt_decode @ 00092308 (arm) */
void fn_00092308(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00092308:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0xcu);
    }
L_0009230c:;
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
L_00092310:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_00092314:;
    {
        cpu->r[3] = rd32(cpu->r[1] + shifter(cpu->r[2], 2, 4u, &shc));
    }
L_00092318:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000084u, 1, 0);
    }
L_0009231c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00092320:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 4u, &shc), 0, 0);
    }
L_00092324:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00092328:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
        }
    }
L_0009232c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = cpu->r[10];
        }
    }
L_00092330:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00092350;
        }
    }
L_00092334:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_00092338:;
    {
        cpu->r[8] = cpu->r[10];
    }
L_0009233c:;
    {
        uint32_t wb_tmp = cpu->r[8] + 0x00000004u;
        wr32(cpu->r[8], cpu->r[6]);
        cpu->r[8] = wb_tmp;
    }
L_00092340:;
    {
        cpu->r[6] = rd32(cpu->r[6]);
    }
L_00092344:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_00092348:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0009234c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009233c;
        }
    }
L_00092350:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00092354:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_00092358:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_0009235c:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[6] + + 0x8u, cpu->r[5]);
        }
    }
L_00092360:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[5] = cpu->r[3];
        }
    }
L_00092364:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[5], 1, 1);
    }
L_00092368:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000923a8;
        }
    }
L_0009236c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_00092370:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_00092374:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00092388;
        }
    }
L_00092378:;
    {
        goto L_000923a8;
    }
L_0009237c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_00092380:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00092384:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000923a8;
        }
    }
L_00092388:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009238c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00092390:;
    {
        cpu->r[14] = 0x00092394u; fn_0007db94(cpu);
    }
L_00092394:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00092398:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[6] + + 0x4u, cpu->r[5]);
        }
    }
L_0009239c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
        }
    }
L_000923a0:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[5], 1, 1);
    }
L_000923a4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0009237c;
        }
    }
L_000923a8:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[8], 1, 1);
    }
L_000923ac:;
    {
        wr32(cpu->r[6] + + 0x8u, cpu->r[5]);
    }
L_000923b0:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t wb_tmp = cpu->r[8] + - 0x4u;
        cpu->r[6] = rd32(cpu->r[8] + - 0x4u);
        cpu->r[8] = wb_tmp;
        }
    }
L_000923b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00092354;
        }
    }
L_000923b8:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x4u);
    }
L_000923bc:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[7], 1, 1);
    }
L_000923c0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000923c4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_000923c8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000084u, 0, 0);
    }
L_000923cc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000923d0u)) return;
    }
}

/* tgt_encode @ 000923d0 (arm) */
void fn_000923d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000923d0:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0xcu);
    }
L_000923d4:;
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
L_000923d8:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_000923dc:;
    {
        cpu->r[3] = rd32(cpu->r[1] + shifter(cpu->r[2], 2, 4u, &shc));
    }
L_000923e0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000080u, 1, 0);
    }
L_000923e4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000923e8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 4u, &shc), 0, 0);
    }
L_000923ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000923f0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
        }
    }
L_000923f4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[8] = cpu->r[10];
        }
    }
L_000923f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00092418;
        }
    }
L_000923fc:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_00092400:;
    {
        cpu->r[8] = cpu->r[10];
    }
L_00092404:;
    {
        uint32_t wb_tmp = cpu->r[8] + 0x00000004u;
        wr32(cpu->r[8], cpu->r[6]);
        cpu->r[8] = wb_tmp;
    }
L_00092408:;
    {
        cpu->r[6] = rd32(cpu->r[6]);
    }
L_0009240c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_00092410:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00092414:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00092404;
        }
    }
L_00092418:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0009241c:;
    {
        cpu->r[9] = 0x00000001u;
    }
L_00092420:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_00092424:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_00092428:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[6] + + 0x8u, cpu->r[5]);
        }
    }
L_0009242c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[5] = cpu->r[3];
        }
    }
L_00092430:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[5], 1, 1);
    }
L_00092434:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00092470;
        }
    }
L_00092438:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_0009243c:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_00092440:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00092454;
        }
    }
L_00092444:;
    {
        goto L_00092484;
    }
L_00092448:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_0009244c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00092450:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00092484;
        }
    }
L_00092454:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00092458:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0009245c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00092460:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00092464:;
    {
        cpu->r[14] = 0x00092468u; fn_0007db0c(cpu);
    }
L_00092468:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[7], 1, 1);
    }
L_0009246c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00092448;
        }
    }
L_00092470:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[8], 1, 1);
    }
L_00092474:;
    {
        wr32(cpu->r[6] + + 0x8u, cpu->r[5]);
    }
L_00092478:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000924b0;
        }
    }
L_0009247c:;
    {
        uint32_t wb_tmp = cpu->r[8] + - 0x4u;
        cpu->r[6] = rd32(cpu->r[8] + - 0x4u);
        cpu->r[8] = wb_tmp;
    }
L_00092480:;
    {
        goto L_00092420;
    }
L_00092484:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xcu);
    }
L_00092488:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0009248c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00092470;
        }
    }
L_00092490:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00092494:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00092498:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0009249c:;
    {
        cpu->r[14] = 0x000924a0u; fn_0007db0c(cpu);
    }
L_000924a0:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[8], 1, 1);
    }
L_000924a4:;
    {
        wr32(cpu->r[6] + + 0xcu, cpu->r[9]);
    }
L_000924a8:;
    {
        wr32(cpu->r[6] + + 0x8u, cpu->r[5]);
    }
L_000924ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009247c;
        }
    }
L_000924b0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000080u, 0, 0);
    }
L_000924b4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000924b8u)) return;
    }
}

/* getMaxInstancesOfSameSound @ 000924b8 (arm) */
void fn_000924b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000924b8:;
    {
        cpu->r[0] = 0x00000003u;
    }
L_000924bc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* setStopOnMusic @ 000924c0 (arm) */
void fn_000924c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000924c0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* changeOption @ 000924c4 (arm) */
void fn_000924c4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000924c4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* startGame @ 000924c8 (arm) */
void fn_000924c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000924c8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* startCheckpoint @ 000924cc (arm) */
void fn_000924cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000924cc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* GetAccelerometerParams @ 000924d0 (arm) */
void fn_000924d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000924d0:;
    {
        cpu->r[3] = rd32(0x000924d8u + + 0x34u);
    }
L_000924d4:;
    {
        cpu->r[12] = rd32(0x000924dcu + + 0x34u);
    }
L_000924d8:;
    {
        cpu->r[3] = add_flags(cpu, 0x000924e0u, cpu->r[3], 0, 0);
    }
L_000924dc:;
    {
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_000924e0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12]);
    }
L_000924e4:;
    {
        cpu->r[12] = rd32(0x000924ecu + + 0x28u);
    }
L_000924e8:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000924ec:;
    {
        cpu->r[0] = rd32(0x000924f4u + + 0x24u);
    }
L_000924f0:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_000924f4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0]);
    }
L_000924f8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_000924fc:;
    {
        *(uint32_t*)G(cpu->r[1]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00092500:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_00092504:;
    {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00092508:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* UpdatePhoneOrientation @ 0009251c (arm) */
void fn_0009251c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009251c:;
    {
        cpu->r[3] = rd32(0x00092524u + + 0xf4u);
    }
L_00092520:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_00092524:;
    {
        cpu->r[2] = rd32(0x0009252cu + + 0xf0u);
    }
L_00092528:;
    {
        cpu->r[3] = add_flags(cpu, 0x00092530u, cpu->r[3], 0, 0);
    }
L_0009252c:;
    {
        wr32(cpu->r[1], cpu->r[0]);
    }
L_00092530:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00092534:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_00092538:;
    {
        cpu->r[2] = rd32(0x00092540u + + 0xe0u);
    }
L_0009253c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00092540:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2]);
    }
L_00092544:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000925a8;
        }
    }
L_00092548:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000003u, 1, 1);
    }
L_0009254c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000925e0;
        }
    }
L_00092550:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00092554:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000925fc;
        }
    }
L_00092558:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00092560u + + 0xa8u);
    }
L_0009255c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_00092560:;
    {
        vfp_sync_flags(cpu);
    }
L_00092564:;
    {
        if (cond_test(cpu, 6)) {
        goto L_00092580;
        }
    }
L_00092568:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_0009256c:;
    {
        wr32(cpu->r[1], cpu->r[2]);
    }
L_00092570:;
    {
        cpu->r[2] = rd32(0x00092578u + + 0xacu);
    }
L_00092574:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00092578:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0009257c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00092580:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00092588u + + 0x84u);
    }
L_00092584:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_00092588:;
    {
        vfp_sync_flags(cpu);
    }
L_0009258c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00092570;
        }
    }
L_00092590:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00092594:;
    {
        wr32(cpu->r[1], cpu->r[2]);
    }
L_00092598:;
    {
        cpu->r[2] = rd32(0x000925a0u + + 0x84u);
    }
L_0009259c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000925a0:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000925a4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000925a8:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x000925b0u + + 0x60u);
    }
L_000925ac:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,13));
    }
L_000925b0:;
    {
        vfp_sync_flags(cpu);
    }
L_000925b4:;
    {
        if (cond_test(cpu, 5)) {
        goto L_00092568;
        }
    }
L_000925b8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000925c0u + + 0x48u);
    }
L_000925bc:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_000925c0:;
    {
        vfp_sync_flags(cpu);
    }
L_000925c4:;
    {
        if (cond_test(cpu, 6)) {
        goto L_00092570;
        }
    }
L_000925c8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_000925cc:;
    {
        wr32(cpu->r[1], cpu->r[2]);
    }
L_000925d0:;
    {
        cpu->r[2] = rd32(0x000925d8u + + 0x4cu);
    }
L_000925d4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000925d8:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_000925dc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000925e0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x000925e8u + + 0x2cu);
    }
L_000925e4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,13));
    }
L_000925e8:;
    {
        vfp_sync_flags(cpu);
    }
L_000925ec:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000925b8;
        }
    }
L_000925f0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_000925f4:;
    {
        wr32(cpu->r[1], cpu->r[2]);
    }
L_000925f8:;
    {
        goto L_00092598;
    }
L_000925fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_00092600:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000925c8;
        }
    }
L_00092604:;
    {
        goto L_00092570;
    }
}

/* GetPhoneRotLeftRight @ 00092628 (arm) */
void fn_00092628(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00092628:;
    {
        cpu->r[3] = rd32(0x00092630u + + 0x3cu);
    }
L_0009262c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_00092630:;
    {
        cpu->r[2] = rd32(0x00092638u + + 0x38u);
    }
L_00092634:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 14) = *(float*)G(0x0009263cu + + 0x28u);
        }
    }
L_00092638:;
    {
        cpu->r[3] = add_flags(cpu, 0x00092640u, cpu->r[3], 0, 0);
    }
L_0009263c:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu, 14) = *(float*)G(0x00092644u + + 0x24u);
        }
    }
L_00092640:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00092644:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_00092648:;
    {
        if (cond_test(cpu, 1)) {
        vfp_vmul(cpu, 15, 15, 14);
        }
    }
L_0009264c:;
    {
        if (cond_test(cpu, 2)) {
        vfp_vmul(cpu, 15, 15, 14);
        }
    }
L_00092650:;
    {
        if (cond_test(cpu, 1)) {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
        }
    }
L_00092654:;
    {
        if (cond_test(cpu, 2)) {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
        }
    }
L_00092658:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
        }
    }
L_0009265c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
        }
    }
L_00092660:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* GetPhoneRotSpeedLeftRight @ 00092674 (arm) */
void fn_00092674(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00092674:;
    {
        cpu->r[3] = rd32(0x0009267cu + + 0xd4u);
    }
L_00092678:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_0009267c:;
    {
        cpu->r[2] = rd32(0x00092684u + + 0xd0u);
    }
L_00092680:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x00092688u + + 0xc0u);
    }
L_00092684:;
    {
        cpu->r[3] = add_flags(cpu, 0x0009268cu, cpu->r[3], 0, 0);
    }
L_00092688:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0009268c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_00092690:;
    {
        cpu->r[2] = rd32(0x00092698u + + 0xc0u);
    }
L_00092694:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00092698:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2]);
    }
L_0009269c:;
    {
        cpu->r[2] = rd32(0x000926a4u + + 0xb8u);
    }
L_000926a0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000926a4:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[2]);
    }
L_000926a8:;
    {
        cpu->r[2] = rd32(0x000926b0u + + 0xb0u);
    }
L_000926ac:;
    {
        vfp_vmul(cpu, 11, 12, 13);
    }
L_000926b0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000926b4:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[3]);
    }
L_000926b8:;
    {
        vfp_vmul(cpu, 13, 12, 13);
    }
L_000926bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000926f8;
        }
    }
L_000926c0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000003u, 1, 1);
    }
L_000926c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00092720;
        }
    }
L_000926c8:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_000926cc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000926d0:;
    {
        if (cond_test(cpu, 1)) {
        vfp_vmul(cpu, 11, 11, 15);
        }
    }
L_000926d4:;
    {
        if (cond_test(cpu, 1)) {
        vfp_vmul(cpu, 12, 14, 14);
        }
    }
L_000926d8:;
    {
        if (cond_test(cpu, 1)) {
        vfp_vmls(cpu, 11, 14, 13);
        }
    }
L_000926dc:;
    {
        if (cond_test(cpu, 1)) {
        vfp_vmla(cpu, 12, 15, 15);
        }
    }
L_000926e0:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 15) = *(float*)G(0x000926e8u + + 0x64u);
        }
    }
L_000926e4:;
    {
        if (cond_test(cpu, 1)) {
        vfp_vdiv(cpu, 14, 11, 12);
        }
    }
L_000926e8:;
    {
        if (cond_test(cpu, 1)) {
        vfp_vmul(cpu, 15, 14, 15);
        }
    }
L_000926ec:;
    {
        if (cond_test(cpu, 1)) {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
        }
    }
L_000926f0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
        }
    }
L_000926f4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000926f8:;
    {
        vfp_vmul(cpu, 13, 14, 13);
    }
L_000926fc:;
    {
        vfp_vmul(cpu, 14, 14, 14);
    }
L_00092700:;
    {
        vfp_vnmls(cpu, 13, 11, 15);
    }
L_00092704:;
    {
        vfp_vmla(cpu, 14, 15, 15);
    }
L_00092708:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00092710u + + 0x3cu);
    }
L_0009270c:;
    {
        vfp_vdiv(cpu, 14, 13, 14);
    }
L_00092710:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_00092714:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00092718:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0009271c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00092720:;
    {
        vfp_vmul(cpu, 13, 14, 13);
    }
L_00092724:;
    {
        vfp_vmul(cpu, 14, 14, 14);
    }
L_00092728:;
    {
        vfp_vnmls(cpu, 13, 11, 15);
    }
L_0009272c:;
    {
        vfp_vmla(cpu, 14, 15, 15);
    }
L_00092730:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00092738u + + 0x14u);
    }
L_00092734:;
    {
        vfp_vdiv(cpu, 14, 13, 14);
    }
L_00092738:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_0009273c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00092740:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00092744:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* GetPhoneRotSpeedFwdBack @ 00092764 (arm) */
void fn_00092764(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00092764:;
    {
        cpu->r[3] = rd32(0x0009276cu + + 0xf4u);
    }
L_00092768:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_0009276c:;
    {
        cpu->r[2] = rd32(0x00092774u + + 0xf0u);
    }
L_00092770:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00092778u + + 0xe0u);
    }
L_00092774:;
    {
        cpu->r[3] = add_flags(cpu, 0x0009277cu, cpu->r[3], 0, 0);
    }
L_00092778:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0009277c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[2]);
    }
L_00092780:;
    {
        cpu->r[2] = rd32(0x00092788u + + 0xe0u);
    }
L_00092784:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00092788:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[2]);
    }
L_0009278c:;
    {
        cpu->r[2] = rd32(0x00092794u + + 0xd8u);
    }
L_00092790:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00092794:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_00092798:;
    {
        cpu->r[2] = rd32(0x000927a0u + + 0xd0u);
    }
L_0009279c:;
    {
        vfp_vmul(cpu, 11, 15, 14);
    }
L_000927a0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000927a4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_000927a8:;
    {
        cpu->r[2] = rd32(0x000927b0u + + 0xc4u);
    }
L_000927ac:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000927b0:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[2]);
    }
L_000927b4:;
    {
        cpu->r[2] = rd32(0x000927bcu + + 0xbcu);
    }
L_000927b8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000927bc:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[3]);
    }
L_000927c0:;
    {
        vfp_vmul(cpu, 12, 12, 14);
    }
L_000927c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00092830;
        }
    }
L_000927c8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000003u, 1, 1);
    }
L_000927cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00092808;
        }
    }
L_000927d0:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_000927d4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_000927d8:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_000927dc:;
    {
        vfp_vmul(cpu, 14, 9, 14);
    }
L_000927e0:;
    {
        vfp_vmul(cpu, 13, 15, 14);
    }
L_000927e4:;
    {
        vfp_vmul(cpu, 14, 10, 10);
    }
L_000927e8:;
    {
        vfp_vnmls(cpu, 13, 11, 10);
    }
L_000927ec:;
    {
        vfp_vmla(cpu, 14, 15, 15);
    }
L_000927f0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000927f8u + + 0x64u);
    }
L_000927f4:;
    {
        vfp_vdiv(cpu, 14, 13, 14);
    }
L_000927f8:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_000927fc:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00092800:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00092804:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00092808:;
    {
        vfp_vmul(cpu, 12, 15, 12);
    }
L_0009280c:;
    {
        vfp_vmul(cpu, 14, 13, 13);
    }
L_00092810:;
    {
        vfp_vnmls(cpu, 12, 11, 13);
    }
L_00092814:;
    {
        vfp_vmla(cpu, 14, 15, 15);
    }
L_00092818:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00092820u + + 0x3cu);
    }
L_0009281c:;
    {
        vfp_vdiv(cpu, 14, 12, 14);
    }
L_00092820:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_00092824:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00092828:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0009282c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00092830:;
    {
        vfp_vmul(cpu, 12, 15, 12);
    }
L_00092834:;
    {
        vfp_vmul(cpu, 14, 13, 13);
    }
L_00092838:;
    {
        vfp_vmls(cpu, 12, 11, 13);
    }
L_0009283c:;
    {
        vfp_vmla(cpu, 14, 15, 15);
    }
L_00092840:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00092848u + + 0x14u);
    }
L_00092844:;
    {
        vfp_vdiv(cpu, 14, 12, 14);
    }
L_00092848:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_0009284c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00092850:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00092854:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _Z11GetDateTimeRiS_S_S_S_S_ @ 0009287c (arm) */
void fn_0009287c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009287c:;
    {
        cpu->r[12] = 0x000007d9u;
    }
L_00092880:;
    {
        wr32(cpu->r[0], cpu->r[12]);
    }
L_00092884:;
    {
        cpu->r[0] = 0x0000000bu;
    }
L_00092888:;
    {
        wr32(cpu->r[1], cpu->r[0]);
    }
L_0009288c:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_00092890:;
    {
        wr32(cpu->r[2], cpu->r[1]);
    }
L_00092894:;
    {
        cpu->r[2] = 0x00000009u;
    }
L_00092898:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_0009289c:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_000928a0:;
    {
        cpu->r[2] = 0x00000008u;
    }
L_000928a4:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_000928a8:;
    {
        cpu->r[2] = 0x00000007u;
    }
L_000928ac:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_000928b0:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_000928b4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* fail @ 000928b8 (arm) */
void fn_000928b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000928b8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* GetPhoneRotFwdBack @ 000928c0 (arm) */
void fn_000928c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000928c0:;
    {
        cpu->r[3] = rd32(0x000928c8u + + 0xdcu);
    }
L_000928c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_000928c8:;
    {
        cpu->r[2] = rd32(0x000928d0u + + 0xd8u);
    }
L_000928cc:;
    {
        cpu->r[3] = add_flags(cpu, 0x000928d4u, cpu->r[3], 0, 0);
    }
L_000928d0:;
    {
        cpu->r[12] = rd32(0x000928d8u + + 0xd4u);
    }
L_000928d4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000928d8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000928dc:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_000928e0:;
    {
        cpu->r[2] = rd32(0x000928e8u + + 0xc8u);
    }
L_000928e4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000928e8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_000928ec:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_000928f0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000928f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009296c;
        }
    }
L_000928f8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000003u, 1, 1);
    }
L_000928fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009293c;
        }
    }
L_00092900:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_00092904:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00092908:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0009290cu)) return;
        }
    }
L_0009290c:;
    {
        uint32_t v = cpu->r[3] ^ 0x80000000u; cpu->r[0] = v;
    }
L_00092910:;
    {
        uint32_t v = cpu->r[2] ^ 0x80000000u; cpu->r[1] = v;
    }
L_00092914:;
    {
        cpu->r[14] = 0x00092918u; imp_atan2f(cpu); /* atan2f */
    }
L_00092918:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00092920u + + 0x80u);
    }
L_0009291c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_00092920:;
    {
        vfp_vmul(cpu, 12, 13, 15);
    }
L_00092924:;
    {
        *vfp_d(cpu, 7) = *(double*)G(0x0009292cu + + 0x6cu);
    }
L_00092928:;
    {
        *vfp_d(cpu,6) = (double)*vfp_s(cpu,12);
    }
L_0009292c:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 6) / *vfp_d(cpu, 7);
    }
L_00092930:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_d(cpu,7);
    }
L_00092934:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,13);
    }
L_00092938:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0009293cu)) return;
    }
L_0009293c:;
    {
        uint32_t v = cpu->r[3] ^ 0x80000000u; cpu->r[0] = v;
    }
L_00092940:;
    {
        uint32_t v = cpu->r[1] ^ 0x80000000u; cpu->r[1] = v;
    }
L_00092944:;
    {
        cpu->r[14] = 0x00092948u; imp_atan2f(cpu); /* atan2f */
    }
L_00092948:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00092950u + + 0x50u);
    }
L_0009294c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00092950:;
    {
        vfp_vmul(cpu, 12, 14, 15);
    }
L_00092954:;
    {
        *vfp_d(cpu, 7) = *(double*)G(0x0009295cu + + 0x3cu);
    }
L_00092958:;
    {
        *vfp_d(cpu,6) = (double)*vfp_s(cpu,12);
    }
L_0009295c:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 6) / *vfp_d(cpu, 7);
    }
L_00092960:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_d(cpu,7);
    }
L_00092964:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,13);
    }
L_00092968:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0009296cu)) return;
    }
L_0009296c:;
    {
        uint32_t v = cpu->r[3] ^ 0x80000000u; cpu->r[0] = v;
    }
L_00092970:;
    {
        cpu->r[14] = 0x00092974u; imp_atan2f(cpu); /* atan2f */
    }
L_00092974:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0009297cu + + 0x24u);
    }
L_00092978:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0009297c:;
    {
        vfp_vmul(cpu, 12, 14, 15);
    }
L_00092980:;
    {
        *vfp_d(cpu, 7) = *(double*)G(0x00092988u + + 0x10u);
    }
L_00092984:;
    {
        *vfp_d(cpu,6) = (double)*vfp_s(cpu,12);
    }
L_00092988:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 6) / *vfp_d(cpu, 7);
    }
L_0009298c:;
    {
        *(int32_t*)vfp_s(cpu,13) = (int32_t)*vfp_d(cpu,7);
    }
L_00092990:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,13);
    }
L_00092994:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00092998u)) return;
    }
}

/* GetPhoneOrientationAngle @ 000929b8 (arm) */
void fn_000929b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000929b8:;
    {
        cpu->r[3] = rd32(0x000929c0u + + 0x58u);
    }
L_000929bc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_000929c0:;
    {
        cpu->r[2] = rd32(0x000929c8u + + 0x54u);
    }
L_000929c4:;
    {
        cpu->r[3] = add_flags(cpu, 0x000929ccu, cpu->r[3], 0, 0);
    }
L_000929c8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000929cc:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_000929d0:;
    {
        cpu->r[2] = rd32(0x000929d8u + + 0x48u);
    }
L_000929d4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_000929d8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_000929dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00092a10;
        }
    }
L_000929e0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000003u, 1, 1);
    }
L_000929e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00092a04;
        }
    }
L_000929e8:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_000929ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000929f8;
        }
    }
L_000929f0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000929f4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000929f8:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_000929fc:;
    {
        uint32_t v = cpu->r[3] ^ 0x80000000u; cpu->r[1] = v;
    }
L_00092a00:;
    {
        imp_atan2f(cpu); /* tail atan2f */ return;
    }
L_00092a04:;
    {
        uint32_t v = cpu->r[3] ^ 0x80000000u; cpu->r[0] = v;
    }
L_00092a08:;
    {
        uint32_t v = cpu->r[1] ^ 0x80000000u; cpu->r[1] = v;
    }
L_00092a0c:;
    {
        imp_atan2f(cpu); /* tail atan2f */ return;
    }
L_00092a10:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00092a14:;
    {
        imp_atan2f(cpu); /* tail atan2f */ return;
    }
}

/* appDeinit @ 00092a24 (arm) */
void fn_00092a24(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00092a24:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00092a28:;
    {
        cpu->r[4] = rd32(0x00092a30u + + 0x34u);
    }
L_00092a2c:;
    {
        cpu->r[6] = rd32(0x00092a34u + + 0x34u);
    }
L_00092a30:;
    {
        cpu->r[4] = add_flags(cpu, 0x00092a38u, cpu->r[4], 0, 0);
    }
L_00092a34:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00092a38:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_00092a3c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00092a40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00092a54;
        }
    }
L_00092a44:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00092a48:;
    {
        cpu->r[14] = 0x00092a4cu; fn_000a1958(cpu);
    }
L_00092a4c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00092a50:;
    {
        cpu->r[14] = 0x00092a54u; fn_0018ba20(cpu);
    }
L_00092a54:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00092a58:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00092a5c:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_00092a60:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00092a64u)) return;
    }
}

/* appPause @ 00092a6c (arm) */
void fn_00092a6c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00092a6c:;
    {
        cpu->r[3] = rd32(0x00092a74u + + 0x34u);
    }
L_00092a70:;
    {
        cpu->r[2] = rd32(0x00092a78u + + 0x34u);
    }
L_00092a74:;
    {
        cpu->r[3] = add_flags(cpu, 0x00092a7cu, cpu->r[3], 0, 0);
    }
L_00092a78:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00092a7c:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_00092a80:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00092a84:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00092a88:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00092a8c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00092aa4;
        }
    }
L_00092a90:;
    {
        cpu->r[2] = rd32(0x00092a98u + + 0x18u);
    }
L_00092a94:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00092a98:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00092a9c:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_00092aa0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00092aa4:;
    {
        return fn_000992fc(cpu);
    }
}

/* notifyKeyReleased @ 00092ab4 (arm) */
void fn_00092ab4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00092ab4:;
    {
        cpu->r[3] = rd32(0x00092abcu + + 0x20u);
    }
L_00092ab8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00092abc:;
    {
        cpu->r[2] = rd32(0x00092ac4u + + 0x1cu);
    }
L_00092ac0:;
    {
        cpu->r[3] = add_flags(cpu, 0x00092ac8u, cpu->r[3], 0, 0);
    }
L_00092ac4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00092ac8:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00092acc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00092ad0:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00092ad4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00092ad8:;
    {
        return fn_000a1e08(cpu);
    }
}

/* notifyKeyPressed @ 00092ae4 (arm) */
void fn_00092ae4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00092ae4:;
    {
        cpu->r[1] = rd32(0x00092aecu + + 0xa0u);
    }
L_00092ae8:;
    {
        cpu->r[2] = rd32(0x00092af0u + + 0xa0u);
    }
L_00092aec:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00092af0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00092af4:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_00092af8:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_00092afc:;
    {
        cpu->r[1] = add_flags(cpu, 0x00092b04u, cpu->r[1], 0, 0);
    }
L_00092b00:;
    {
        cpu->r[4] = rd32(0x00092b08u + + 0x8cu);
    }
L_00092b04:;
    {
        cpu->r[2] = add_flags(cpu, 0x00092b0cu, cpu->r[2], 0, 0);
    }
L_00092b08:;
    {
        cpu->r[14] = 0x00092b0cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00092b0c:;
    {
        cpu->r[3] = rd32(0x00092b14u + + 0x84u);
    }
L_00092b10:;
    {
        cpu->r[4] = add_flags(cpu, 0x00092b18u, cpu->r[4], 0, 0);
    }
L_00092b14:;
    {
        cpu->r[4] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00092b18:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_00092b1c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00092b20:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00092b24u)) return;
        }
    }
L_00092b24:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00092b28:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00092b2c:;
    {
        cpu->r[14] = 0x00092b30u; fn_000a1e08(cpu);
    }
L_00092b30:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000096u, 1, 1);
    }
L_00092b34:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00092b5c;
        }
    }
L_00092b38:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000097u, 1, 1);
    }
L_00092b3c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00092b78;
        }
    }
L_00092b40:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00092b44:;
    {
        cpu->r[2] = 0x000067b4u;
    }
L_00092b48:;
    {
        cpu->r[2] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_00092b4c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00092b50:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x000067b0u;
        }
    }
L_00092b54:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[5]);
        }
    }
L_00092b58:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00092b5cu)) return;
    }
L_00092b5c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00092b60:;
    {
        cpu->r[2] = 0x000067b4u;
    }
L_00092b64:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00092b68:;
    {
        wr8(cpu->r[3] + cpu->r[2], cpu->r[1]);
    }
L_00092b6c:;
    {
        cpu->r[2] = 0x000067b0u;
    }
L_00092b70:;
    {
        wr32(cpu->r[3] + cpu->r[2], cpu->r[5]);
    }
L_00092b74:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00092b78u)) return;
    }
L_00092b78:;
    {
        cpu->r[2] = rd32(cpu->r[4]);
    }
L_00092b7c:;
    {
        cpu->r[3] = 0x000067b4u;
    }
L_00092b80:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00092b84:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_00092b88:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00092b8cu)) return;
    }
}

/* notifyTouchReleased @ 00092b9c (arm) */
void fn_00092b9c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00092b9c:;
    {
        cpu->r[12] = rd32(0x00092ba4u + + 0x8cu);
    }
L_00092ba0:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00092ba4:;
    {
        cpu->r[2] = rd32(0x00092bacu + + 0x88u);
    }
L_00092ba8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00092bb0u, cpu->r[12], 0, 0);
    }
L_00092bac:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00092bb0:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_00092bb4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00092bb8:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00092bbc:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_00092bc0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00092bc4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00092c04;
        }
    }
L_00092bc8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00092bcc:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00092c0c;
        }
    }
L_00092bd0:;
    {
        cpu->r[1] = rd32(0x00092bd8u + + 0x60u);
    }
L_00092bd4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00092bd8:;
    {
        cpu->r[2] = rd32(0x00092be0u + + 0x5cu);
    }
L_00092bdc:;
    {
        cpu->r[14] = 0x000000b6u;
    }
L_00092be0:;
    {
        cpu->r[3] = rd32(0x00092be8u + + 0x58u);
    }
L_00092be4:;
    {
        cpu->r[1] = add_flags(cpu, 0x00092becu, cpu->r[1], 0, 0);
    }
L_00092be8:;
    {
        cpu->r[12] = rd32(0x00092bf0u + + 0x54u);
    }
L_00092bec:;
    {
        cpu->r[2] = add_flags(cpu, 0x00092bf4u, cpu->r[2], 0, 0);
    }
L_00092bf0:;
    {
        cpu->r[3] = add_flags(cpu, 0x00092bf8u, cpu->r[3], 0, 0);
    }
L_00092bf4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_00092bf8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00092c00u, cpu->r[12], 0, 0);
    }
L_00092bfc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00092c00:;
    {
        cpu->r[14] = 0x00092c04u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00092c04:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00092c08:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00092c0cu)) return;
    }
L_00092c0c:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00092c10:;
    {
        cpu->r[4] = rd32(0x00092c18u + + 0x30u);
    }
L_00092c14:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00092c18:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00092c1c:;
    {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[4]);
    }
L_00092c20:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00092c24:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00092c28:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_00092c2c:;
    {
        return fn_0015cafc(cpu);
    }
}

/* notifyTouchPress @ 00092c4c (arm) */
void fn_00092c4c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00092c4c:;
    {
        cpu->r[12] = rd32(0x00092c54u + + 0x8cu);
    }
L_00092c50:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00092c54:;
    {
        cpu->r[2] = rd32(0x00092c5cu + + 0x88u);
    }
L_00092c58:;
    {
        cpu->r[12] = add_flags(cpu, 0x00092c60u, cpu->r[12], 0, 0);
    }
L_00092c5c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00092c60:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_00092c64:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00092c68:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00092c6c:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_00092c70:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00092c74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00092cb4;
        }
    }
L_00092c78:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00092c7c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00092cbc;
        }
    }
L_00092c80:;
    {
        cpu->r[1] = rd32(0x00092c88u + + 0x60u);
    }
L_00092c84:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00092c88:;
    {
        cpu->r[12] = rd32(0x00092c90u + + 0x5cu);
    }
L_00092c8c:;
    {
        cpu->r[14] = 0x000000acu;
    }
L_00092c90:;
    {
        cpu->r[2] = rd32(0x00092c98u + + 0x58u);
    }
L_00092c94:;
    {
        cpu->r[1] = add_flags(cpu, 0x00092c9cu, cpu->r[1], 0, 0);
    }
L_00092c98:;
    {
        cpu->r[3] = rd32(0x00092ca0u + + 0x54u);
    }
L_00092c9c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00092ca4u, cpu->r[12], 0, 0);
    }
L_00092ca0:;
    {
        cpu->r[2] = add_flags(cpu, 0x00092ca8u, cpu->r[2], 0, 0);
    }
L_00092ca4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000014u, 0, 0);
    }
L_00092ca8:;
    {
        cpu->r[3] = add_flags(cpu, 0x00092cb0u, cpu->r[3], 0, 0);
    }
L_00092cac:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00092cb0:;
    {
        cpu->r[14] = 0x00092cb4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00092cb4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00092cb8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00092cbcu)) return;
    }
L_00092cbc:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00092cc0:;
    {
        cpu->r[4] = rd32(0x00092cc8u + + 0x30u);
    }
L_00092cc4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00092cc8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00092ccc:;
    {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[4]);
    }
L_00092cd0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00092cd4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00092cd8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_00092cdc:;
    {
        return fn_0015cafc(cpu);
    }
}

/* notifyTouchMoved @ 00092cfc (arm) */
void fn_00092cfc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00092cfc:;
    {
        cpu->r[12] = rd32(0x00092d04u + + 0x8cu);
    }
L_00092d00:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00092d04:;
    {
        cpu->r[2] = rd32(0x00092d0cu + + 0x88u);
    }
L_00092d08:;
    {
        cpu->r[12] = add_flags(cpu, 0x00092d10u, cpu->r[12], 0, 0);
    }
L_00092d0c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00092d10:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_00092d14:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00092d18:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00092d1c:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_00092d20:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00092d24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00092d64;
        }
    }
L_00092d28:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00092d2c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00092d6c;
        }
    }
L_00092d30:;
    {
        cpu->r[1] = rd32(0x00092d38u + + 0x60u);
    }
L_00092d34:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00092d38:;
    {
        cpu->r[12] = rd32(0x00092d40u + + 0x5cu);
    }
L_00092d3c:;
    {
        cpu->r[14] = 0x000000a1u;
    }
L_00092d40:;
    {
        cpu->r[2] = rd32(0x00092d48u + + 0x58u);
    }
L_00092d44:;
    {
        cpu->r[1] = add_flags(cpu, 0x00092d4cu, cpu->r[1], 0, 0);
    }
L_00092d48:;
    {
        cpu->r[3] = rd32(0x00092d50u + + 0x54u);
    }
L_00092d4c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00092d54u, cpu->r[12], 0, 0);
    }
L_00092d50:;
    {
        cpu->r[2] = add_flags(cpu, 0x00092d58u, cpu->r[2], 0, 0);
    }
L_00092d54:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000028u, 0, 0);
    }
L_00092d58:;
    {
        cpu->r[3] = add_flags(cpu, 0x00092d60u, cpu->r[3], 0, 0);
    }
L_00092d5c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00092d60:;
    {
        cpu->r[14] = 0x00092d64u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00092d64:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00092d68:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00092d6cu)) return;
    }
L_00092d6c:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_00092d70:;
    {
        cpu->r[4] = rd32(0x00092d78u + + 0x30u);
    }
L_00092d74:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00092d78:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_00092d7c:;
    {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[4]);
    }
L_00092d80:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00092d84:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00092d88:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_00092d8c:;
    {
        return fn_0015cafc(cpu);
    }
}

/* JNI_OnLoad @ 00092dac (arm) */
void fn_00092dac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00092dac:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00092db0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00092db4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00092db8:;
    {
        cpu->r[14] = 0x00092dbcu; fn_001da010(cpu);
    }
L_00092dbc:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00092dc0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00092dc4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00092dc8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_00092dcc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_00092dd0:;
    {
        cpu->r[14] = 0x00092dd8u;
    }
L_00092dd4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00092dd8u)) return;
    }
L_00092dd8:;
    {
        cpu->r[3] = 0x00000004u;
    }
L_00092ddc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00092de0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00092de4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_00092de8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_00092dec:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00092df0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00092df4u)) return;
    }
}

/* _Z6InitGLv @ 00092df4 (arm) */
void fn_00092df4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00092df4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00092df8:;
    {
        cpu->r[0] = 0x00001d01u;
    }
L_00092dfc:;
    {
        cpu->r[14] = 0x00092e00u; imp_glShadeModel(cpu); /* glShadeModel */
    }
L_00092e00:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00092e04:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00092e08:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00092e0c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00092e10:;
    {
        cpu->r[14] = 0x00092e14u; imp_glClearColor(cpu); /* glClearColor */
    }
L_00092e14:;
    {
        cpu->r[0] = 0x3f800000u;
    }
L_00092e18:;
    {
        cpu->r[14] = 0x00092e1cu; imp_glClearDepthf(cpu); /* glClearDepthf */
    }
L_00092e1c:;
    {
        cpu->r[0] = 0x00004100u;
    }
L_00092e20:;
    {
        cpu->r[14] = 0x00092e24u; imp_glClear(cpu); /* glClear */
    }
L_00092e24:;
    {
        cpu->r[0] = 0x00000b71u;
    }
L_00092e28:;
    {
        cpu->r[14] = 0x00092e2cu; imp_glEnable(cpu); /* glEnable */
    }
L_00092e2c:;
    {
        cpu->r[0] = 0x00000201u;
    }
L_00092e30:;
    {
        cpu->r[14] = 0x00092e34u; imp_glDepthFunc(cpu); /* glDepthFunc */
    }
L_00092e34:;
    {
        cpu->r[0] = 0x00000c50u;
    }
L_00092e38:;
    {
        cpu->r[1] = 0x00001101u;
    }
L_00092e3c:;
    {
        cpu->r[14] = 0x00092e40u; imp_glHint(cpu); /* glHint */
    }
L_00092e40:;
    {
        cpu->r[1] = 0x00001101u;
    }
L_00092e44:;
    {
        cpu->r[0] = 0x00008192u;
    }
L_00092e48:;
    {
        cpu->r[14] = 0x00092e4cu; imp_glHint(cpu); /* glHint */
    }
L_00092e4c:;
    {
        cpu->r[0] = 0x00000b50u;
    }
L_00092e50:;
    {
        cpu->r[14] = 0x00092e54u; imp_glDisable(cpu); /* glDisable */
    }
L_00092e54:;
    {
        cpu->r[0] = 0x00001701u;
    }
L_00092e58:;
    {
        cpu->r[14] = 0x00092e5cu; imp_glMatrixMode(cpu); /* glMatrixMode */
    }
L_00092e5c:;
    {
        cpu->r[14] = 0x00092e60u; imp_glLoadIdentity(cpu); /* glLoadIdentity */
    }
L_00092e60:;
    {
        cpu->r[0] = 0x00001700u;
    }
L_00092e64:;
    {
        cpu->r[14] = 0x00092e68u; imp_glMatrixMode(cpu); /* glMatrixMode */
    }
L_00092e68:;
    {
        cpu->r[14] = 0x00092e6cu; imp_glLoadIdentity(cpu); /* glLoadIdentity */
    }
L_00092e6c:;
    {
        cpu->r[0] = 0x00000de1u;
    }
L_00092e70:;
    {
        cpu->r[14] = 0x00092e74u; imp_glEnable(cpu); /* glEnable */
    }
L_00092e74:;
    {
        cpu->r[0] = 0x00000900u;
    }
L_00092e78:;
    {
        cpu->r[14] = 0x00092e7cu; imp_glFrontFace(cpu); /* glFrontFace */
    }
L_00092e7c:;
    {
        cpu->r[0] = 0x00000be2u;
    }
L_00092e80:;
    {
        cpu->r[14] = 0x00092e84u; imp_glEnable(cpu); /* glEnable */
    }
L_00092e84:;
    {
        cpu->r[0] = 0x00000302u;
    }
L_00092e88:;
    {
        cpu->r[1] = 0x00000303u;
    }
L_00092e8c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_00092e90:;
    {
        imp_glBlendFunc(cpu); /* tail glBlendFunc */ return;
    }
}

/* appRender @ 00092e94 (arm) */
void fn_00092e94(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00092e94:;
    {
        cpu->r[2] = rd32(0x00092e9cu + + 0xccu);
    }
L_00092e98:;
    {
        cpu->r[3] = rd32(0x00092ea0u + + 0xccu);
    }
L_00092e9c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00092ea4u, cpu->r[2], 0, 0);
    }
L_00092ea0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00092ea4:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00092ea8:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_00092eac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00092eb0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00092eb4u)) return;
        }
    }
L_00092eb4:;
    {
        cpu->r[3] = rd32(0x00092ebcu + + 0xb4u);
    }
L_00092eb8:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00092ebc:;
    {
        cpu->r[4] = rd32(cpu->r[3]);
    }
L_00092ec0:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00092ec4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00092ec8u)) return;
        }
    }
L_00092ec8:;
    {
        cpu->r[3] = rd32(0x00092ed0u + + 0xa4u);
    }
L_00092ecc:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00092ed0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00092ed4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00092ed8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00092f34;
        }
    }
L_00092edc:;
    {
        cpu->r[1] = rd32(0x00092ee4u + + 0x94u);
    }
L_00092ee0:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_00092ee4:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_00092ee8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00092eec:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00092f0c;
        }
    }
L_00092ef0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_00092ef4:;
    {
        wr32(cpu->r[1], cpu->r[0]);
    }
L_00092ef8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00092efc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00092f00u)) return;
        }
    }
L_00092f00:;
    {
        cpu->r[14] = 0x00092f04u; fn_00092df4(cpu);
    }
L_00092f04:;
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
L_00092f08:;
    {
        return fn_0009b6c4(cpu);
    }
L_00092f0c:;
    {
        cpu->r[0] = rd32(0x00092f14u + + 0x68u);
    }
L_00092f10:;
    {
        cpu->r[1] = rd32(0x00092f18u + + 0x68u);
    }
L_00092f14:;
    {
        cpu->r[4] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_00092f18:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_00092f1c:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00092f20:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_00092f24:;
    {
        cpu->r[14] = 0x00092f28u; fn_000a35e0(cpu);
    }
L_00092f28:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00092f2c:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00092f30:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00092f34u)) return;
    }
L_00092f34:;
    {
        cpu->r[3] = rd32(0x00092f3cu + + 0x44u);
    }
L_00092f38:;
    {
        wr32(cpu->r[1], cpu->r[4]);
    }
L_00092f3c:;
    {
        cpu->r[6] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00092f40:;
    {
        cpu->r[5] = rd32(cpu->r[6]);
    }
L_00092f44:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00092f48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00092f60;
        }
    }
L_00092f4c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00092f50:;
    {
        cpu->r[14] = 0x00092f54u; fn_000a1958(cpu);
    }
L_00092f54:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00092f58:;
    {
        cpu->r[14] = 0x00092f5cu; fn_0018ba20(cpu);
    }
L_00092f5c:;
    {
        wr32(cpu->r[6], cpu->r[4]);
    }
L_00092f60:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00092f64:;
    {
        cpu->r[14] = 0x00092f68u; imp_exit(cpu); /* exit */
    }
L_00092f68:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[11] & shifter(cpu->r[4], 4, (cpu->r[5] & 0xffu), &shc); cpu->r[7] = v;
        set_nz(cpu, v);
        }
    }
L_00092f6c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[0] + (-cpu->r[4]);
        wr64(cpu->r[0], ((uint64_t)cpu->r[1] << 32) | cpu->r[0]);
        cpu->r[0] = wb_tmp;
        }
    }
L_00092f70:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 1, 12u, &shc); cpu->r[0] = v;
        }
    }
L_00092f74:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[8], 2, 8u, &shc); cpu->r[0] = v;
        }
    }
L_00092f78:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[4], 4, 13u, &shc); cpu->r[0] = v;
        }
    }
L_00092f7c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[12], 4, 19u, &shc); cpu->r[0] = v;
        }
    }
L_00092f80:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] * cpu->r[10]; cpu->r[0] = v;
        }
    }
}

/* _Z8GameInitiiii @ 00092f84 (arm) */
void fn_00092f84(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00092f84:;
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
L_00092f88:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00092f8c:;
    {
        cpu->r[0] = 0x0000ee0cu;
    }
L_00092f90:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_00092f94:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_00092f98:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_00092f9c:;
    {
        cpu->r[10] = cpu->r[1];
    }
L_00092fa0:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_00092fa4:;
    {
        cpu->r[14] = 0x00092fa8u; fn_0018ba6c(cpu);
    }
L_00092fa8:;
    {
        cpu->r[4] = rd32(0x00092fb0u + + 0xc0u);
    }
L_00092fac:;
    {
        cpu->r[1] = rd32(0x00092fb4u + + 0xc0u);
    }
L_00092fb0:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_00092fb4:;
    {
        cpu->r[4] = add_flags(cpu, 0x00092fbcu, cpu->r[4], 0, 0);
    }
L_00092fb8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[6]);
        wr32(ea + 4u, cpu->r[8]);
    }
L_00092fbc:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00092fc0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_00092fc4:;
    {
        cpu->r[1] = rd32(0x00092fccu + + 0xacu);
    }
L_00092fc8:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_00092fcc:;
    {
        cpu->r[1] = add_flags(cpu, 0x00092fd4u, cpu->r[1], 0, 0);
    }
L_00092fd0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00092fd4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00092fd8:;
    {
        cpu->r[14] = 0x00092fdcu; fn_0009bb48(cpu);
    }
L_00092fdc:;
    {
        cpu->r[3] = rd32(0x00092fe4u + + 0x98u);
    }
L_00092fe0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00092fe4:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00092fe8:;
    {
        wr32(cpu->r[6], cpu->r[5]);
    }
L_00092fec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00093064;
        }
    }
L_00092ff0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00092ff4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00092ff8:;
    {
        cpu->r[14] = 0x00092ffcu; fn_0009b794(cpu);
    }
L_00092ffc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00093000:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00093064;
        }
    }
L_00093004:;
    {
        cpu->r[14] = 0x00093008u; fn_00092df4(cpu);
    }
L_00093008:;
    {
        cpu->r[3] = rd32(0x00093010u + + 0x70u);
    }
L_0009300c:;
    {
        cpu->r[4] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00093010:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_00093014:;
    {
        cpu->r[14] = 0x00093018u; fn_00131404(cpu);
    }
L_00093018:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009301c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00093064;
        }
    }
L_00093020:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_00093024:;
    {
        cpu->r[14] = 0x00093028u; fn_00131310(cpu);
    }
L_00093028:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0009302c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00093064;
        }
    }
L_00093030:;
    {
        cpu->r[0] = 0x00000024u;
    }
L_00093034:;
    {
        cpu->r[14] = 0x00093038u; fn_0018ba6c(cpu);
    }
L_00093038:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0009303c:;
    {
        cpu->r[14] = 0x00093040u; fn_000aed98(cpu);
    }
L_00093040:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_00093044:;
    {
        cpu->r[3] = 0x00001bc4u;
    }
L_00093048:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0009304c:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[4]);
    }
L_00093050:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00093064;
        }
    }
L_00093054:;
    {
        cpu->r[14] = 0x00093058u; fn_0009b3b8(cpu);
    }
L_00093058:;
    {
        cpu->r[0] = (~cpu->r[0]);
    }
L_0009305c:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 31u, &shc); cpu->r[0] = v;
    }
L_00093060:;
    {
        goto L_00093068;
    }
L_00093064:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00093068:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_0009306c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00093070u)) return;
    }
}

/* appInit @ 00093084 (arm) */
void fn_00093084(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00093084:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00093088:;
    {
        cpu->r[14] = 0x0009308cu; fn_00092f84(cpu);
    }
L_0009308c:;
    {
        cpu->r[4] = rd32(0x00093094u + + 0x3cu);
    }
L_00093090:;
    {
        cpu->r[4] = add_flags(cpu, 0x00093098u, cpu->r[4], 0, 0);
    }
L_00093094:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00093098:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000930a0;
        }
    }
L_0009309c:;
    {
        cpu->r[14] = 0x000930a0u; fn_00092a24(cpu);
    }
L_000930a0:;
    {
        cpu->r[3] = rd32(0x000930a8u + + 0x2cu);
    }
L_000930a4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x000930acu + + 0x20u);
    }
L_000930a8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000930ac:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000930b0:;
    {
        cpu->r[3] = rd32(0x000930b8u + + 0x20u);
    }
L_000930b4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000930b8:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000930bc:;
    {
        cpu->r[3] = rd32(0x000930c4u + + 0x18u);
    }
L_000930c0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_000930c4:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_000930c8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000930ccu)) return;
    }
}

/* _ZN10CCarAspect5ResetEv @ 000930e0 (arm) */
void fn_000930e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000930e0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000930e4:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_000930e8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
    }
L_000930ec:;
    {
        cpu->r[12] = 0x0000003fu;
    }
L_000930f0:;
    {
        cpu->r[4] = 0x00000043u;
    }
L_000930f4:;
    {
        cpu->r[1] = 0x00000042u;
    }
L_000930f8:;
    {
        wr8(cpu->r[0] + + 0xfu, cpu->r[4]);
    }
L_000930fc:;
    {
        cpu->r[5] = 0x0000003eu;
    }
L_00093100:;
    {
        wr8(cpu->r[0] + + 0x3u, cpu->r[4]);
    }
L_00093104:;
    {
        cpu->r[4] = 0x0000002fu;
    }
L_00093108:;
    {
        wr8(cpu->r[0] + + 0x2u, cpu->r[5]);
    }
L_0009310c:;
    {
        cpu->r[5] = 0x00000053u;
    }
L_00093110:;
    {
        wr8(cpu->r[0] + + 0xau, cpu->r[2]);
    }
L_00093114:;
    {
        wr8(cpu->r[0] + + 0xeu, cpu->r[5]);
    }
L_00093118:;
    {
        cpu->r[5] = 0x00000070u;
    }
L_0009311c:;
    {
        wr8(cpu->r[0] + + 0x1eu, cpu->r[2]);
    }
L_00093120:;
    {
        wr8(cpu->r[0] + + 0x1au, cpu->r[5]);
    }
L_00093124:;
    {
        cpu->r[5] = 0x000000bfu;
    }
L_00093128:;
    {
        wr8(cpu->r[0], cpu->r[3]);
    }
L_0009312c:;
    {
        wr8(cpu->r[0] + + 0x1u, cpu->r[3]);
    }
L_00093130:;
    {
        wr8(cpu->r[0] + + 0x1fu, cpu->r[5]);
    }
L_00093134:;
    {
        wr8(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_00093138:;
    {
        wr8(cpu->r[0] + + 0x5u, cpu->r[3]);
    }
L_0009313c:;
    {
        wr8(cpu->r[0] + + 0x6u, cpu->r[3]);
    }
L_00093140:;
    {
        wr8(cpu->r[0] + + 0x7u, cpu->r[3]);
    }
L_00093144:;
    {
        wr8(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_00093148:;
    {
        wr8(cpu->r[0] + + 0x9u, cpu->r[3]);
    }
L_0009314c:;
    {
        wr8(cpu->r[0] + + 0xbu, cpu->r[12]);
    }
L_00093150:;
    {
        wr8(cpu->r[0] + + 0xcu, cpu->r[3]);
    }
L_00093154:;
    {
        wr8(cpu->r[0] + + 0xdu, cpu->r[3]);
    }
L_00093158:;
    {
        wr8(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_0009315c:;
    {
        wr8(cpu->r[0] + + 0x11u, cpu->r[3]);
    }
L_00093160:;
    {
        wr8(cpu->r[0] + + 0x12u, cpu->r[3]);
    }
L_00093164:;
    {
        wr8(cpu->r[0] + + 0x13u, cpu->r[3]);
    }
L_00093168:;
    {
        wr8(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_0009316c:;
    {
        wr8(cpu->r[0] + + 0x15u, cpu->r[3]);
    }
L_00093170:;
    {
        wr8(cpu->r[0] + + 0x16u, cpu->r[3]);
    }
L_00093174:;
    {
        wr8(cpu->r[0] + + 0x17u, cpu->r[3]);
    }
L_00093178:;
    {
        wr8(cpu->r[0] + + 0x18u, cpu->r[3]);
    }
L_0009317c:;
    {
        wr8(cpu->r[0] + + 0x19u, cpu->r[3]);
    }
L_00093180:;
    {
        wr8(cpu->r[0] + + 0x1bu, cpu->r[1]);
    }
L_00093184:;
    {
        wr8(cpu->r[0] + + 0x1cu, cpu->r[3]);
    }
L_00093188:;
    {
        wr8(cpu->r[0] + + 0x1du, cpu->r[3]);
    }
L_0009318c:;
    {
        wr8(cpu->r[0] + + 0x20u, cpu->r[3]);
    }
L_00093190:;
    {
        wr8(cpu->r[0] + + 0x22u, cpu->r[2]);
    }
L_00093194:;
    {
        cpu->r[2] = 0x000000c8u;
    }
L_00093198:;
    {
        wr8(cpu->r[0] + + 0x21u, cpu->r[3]);
    }
L_0009319c:;
    {
        wr8(cpu->r[0] + + 0x26u, cpu->r[2]);
    }
L_000931a0:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_000931a4:;
    {
        wr8(cpu->r[0] + + 0x31u, cpu->r[4]);
    }
L_000931a8:;
    {
        wr8(cpu->r[0] + + 0x23u, cpu->r[12]);
    }
L_000931ac:;
    {
        wr8(cpu->r[0] + + 0x27u, cpu->r[1]);
    }
L_000931b0:;
    {
        wr8(cpu->r[0] + + 0x2fu, cpu->r[3]);
    }
L_000931b4:;
    {
        wr8(cpu->r[0] + + 0x30u, cpu->r[2]);
    }
L_000931b8:;
    {
        wr8(cpu->r[0] + + 0x24u, cpu->r[3]);
    }
L_000931bc:;
    {
        wr8(cpu->r[0] + + 0x25u, cpu->r[3]);
    }
L_000931c0:;
    {
        wr8(cpu->r[0] + + 0x28u, cpu->r[3]);
    }
L_000931c4:;
    {
        wr8(cpu->r[0] + + 0x29u, cpu->r[3]);
    }
L_000931c8:;
    {
        wr8(cpu->r[0] + + 0x2au, cpu->r[3]);
    }
L_000931cc:;
    {
        wr8(cpu->r[0] + + 0x2bu, cpu->r[3]);
    }
L_000931d0:;
    {
        wr8(cpu->r[0] + + 0x2cu, cpu->r[3]);
    }
L_000931d4:;
    {
        wr8(cpu->r[0] + + 0x2du, cpu->r[3]);
    }
L_000931d8:;
    {
        wr8(cpu->r[0] + + 0x2eu, cpu->r[3]);
    }
L_000931dc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[13] += 8u;
    }
L_000931e0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10CCarAspectC1Ev @ 000931e4 (arm) */
void fn_000931e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000931e4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000931e8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000931ec:;
    {
        cpu->r[14] = 0x000931f0u; fn_000930e0(cpu);
    }
L_000931f0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_000931f4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x000931f8u)) return;
    }
}

/* _ZN10CCarAspectC2Ev @ 000931f8 (arm) */
void fn_000931f8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000931f8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_000931fc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00093200:;
    {
        cpu->r[14] = 0x00093204u; fn_000930e0(cpu);
    }
L_00093204:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00093208:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0009320cu)) return;
    }
}

/* _ZN10CCarAspect12SaveToStreamEPv @ 0009320c (arm) */
void fn_0009320c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009320c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00093210:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_00093214:;
    {
        cpu->r[12] = rd8(cpu->r[0] + cpu->r[2]);
    }
L_00093218:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0009321c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000031u, 1, 1);
    }
L_00093220:;
    {
        wr8(cpu->r[1] + cpu->r[3], cpu->r[12]);
    }
L_00093224:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00093228:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00093214;
        }
    }
L_0009322c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10CCarAspect14LoadFromStreamEPv @ 00093230 (arm) */
void fn_00093230(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00093230:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00093234:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_00093238:;
    {
        cpu->r[3] = rd8(cpu->r[1] + cpu->r[3]);
    }
L_0009323c:;
    {
        wr8(cpu->r[0] + cpu->r[2], cpu->r[3]);
    }
L_00093240:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00093244:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000031u, 1, 1);
    }
L_00093248:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0009324c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00093238;
        }
    }
L_00093250:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10CCarAspect8LoadFromEPf @ 00093254 (arm) */
void fn_00093254(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00093254:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_00093258:;
    {
        wr8(cpu->r[0], cpu->r[3]);
    }
L_0009325c:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 24u, &shc); cpu->r[2] = v;
    }
L_00093260:;
    {
        wr8(cpu->r[0] + + 0x3u, cpu->r[2]);
    }
L_00093264:;
    {
        cpu->r[2] = (cpu->r[3] >> 8) & 0xffu;
    }
L_00093268:;
    {
        cpu->r[3] = (cpu->r[3] >> 16) & 0xffu;
    }
L_0009326c:;
    {
        wr8(cpu->r[0] + + 0x1u, cpu->r[2]);
    }
L_00093270:;
    {
        wr8(cpu->r[0] + + 0x2u, cpu->r[3]);
    }
L_00093274:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x4u);
    }
L_00093278:;
    {
        wr8(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_0009327c:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 24u, &shc); cpu->r[2] = v;
    }
L_00093280:;
    {
        wr8(cpu->r[0] + + 0x7u, cpu->r[2]);
    }
L_00093284:;
    {
        cpu->r[2] = (cpu->r[3] >> 8) & 0xffu;
    }
L_00093288:;
    {
        cpu->r[3] = (cpu->r[3] >> 16) & 0xffu;
    }
L_0009328c:;
    {
        wr8(cpu->r[0] + + 0x5u, cpu->r[2]);
    }
L_00093290:;
    {
        wr8(cpu->r[0] + + 0x6u, cpu->r[3]);
    }
L_00093294:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x8u);
    }
L_00093298:;
    {
        wr8(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_0009329c:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 24u, &shc); cpu->r[2] = v;
    }
L_000932a0:;
    {
        wr8(cpu->r[0] + + 0xbu, cpu->r[2]);
    }
L_000932a4:;
    {
        cpu->r[2] = (cpu->r[3] >> 8) & 0xffu;
    }
L_000932a8:;
    {
        cpu->r[3] = (cpu->r[3] >> 16) & 0xffu;
    }
L_000932ac:;
    {
        wr8(cpu->r[0] + + 0x9u, cpu->r[2]);
    }
L_000932b0:;
    {
        wr8(cpu->r[0] + + 0xau, cpu->r[3]);
    }
L_000932b4:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0xcu);
    }
L_000932b8:;
    {
        wr8(cpu->r[0] + + 0xcu, cpu->r[3]);
    }
L_000932bc:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 24u, &shc); cpu->r[2] = v;
    }
L_000932c0:;
    {
        wr8(cpu->r[0] + + 0xfu, cpu->r[2]);
    }
L_000932c4:;
    {
        cpu->r[2] = (cpu->r[3] >> 8) & 0xffu;
    }
L_000932c8:;
    {
        cpu->r[3] = (cpu->r[3] >> 16) & 0xffu;
    }
L_000932cc:;
    {
        wr8(cpu->r[0] + + 0xdu, cpu->r[2]);
    }
L_000932d0:;
    {
        wr8(cpu->r[0] + + 0xeu, cpu->r[3]);
    }
L_000932d4:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x10u);
    }
L_000932d8:;
    {
        wr8(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_000932dc:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 24u, &shc); cpu->r[2] = v;
    }
L_000932e0:;
    {
        wr8(cpu->r[0] + + 0x13u, cpu->r[2]);
    }
L_000932e4:;
    {
        cpu->r[2] = (cpu->r[3] >> 8) & 0xffu;
    }
L_000932e8:;
    {
        cpu->r[3] = (cpu->r[3] >> 16) & 0xffu;
    }
L_000932ec:;
    {
        wr8(cpu->r[0] + + 0x11u, cpu->r[2]);
    }
L_000932f0:;
    {
        wr8(cpu->r[0] + + 0x12u, cpu->r[3]);
    }
L_000932f4:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x14u);
    }
L_000932f8:;
    {
        wr8(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_000932fc:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 24u, &shc); cpu->r[2] = v;
    }
L_00093300:;
    {
        wr8(cpu->r[0] + + 0x17u, cpu->r[2]);
    }
L_00093304:;
    {
        cpu->r[2] = (cpu->r[3] >> 8) & 0xffu;
    }
L_00093308:;
    {
        cpu->r[3] = (cpu->r[3] >> 16) & 0xffu;
    }
L_0009330c:;
    {
        wr8(cpu->r[0] + + 0x15u, cpu->r[2]);
    }
L_00093310:;
    {
        wr8(cpu->r[0] + + 0x16u, cpu->r[3]);
    }
L_00093314:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x18u);
    }
L_00093318:;
    {
        cpu->r[12] = (cpu->r[3] >> 8) & 0xffu;
    }
L_0009331c:;
    {
        wr8(cpu->r[0] + + 0x19u, cpu->r[12]);
    }
L_00093320:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 24u, &shc); cpu->r[2] = v;
    }
L_00093324:;
    {
        wr8(cpu->r[0] + + 0x18u, cpu->r[3]);
    }
L_00093328:;
    {
        cpu->r[3] = (cpu->r[3] >> 16) & 0xffu;
    }
L_0009332c:;
    {
        wr8(cpu->r[0] + + 0x1au, cpu->r[3]);
    }
L_00093330:;
    {
        wr8(cpu->r[0] + + 0x1bu, cpu->r[2]);
    }
L_00093334:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x1cu);
    }
L_00093338:;
    {
        wr8(cpu->r[0] + + 0x1cu, cpu->r[3]);
    }
L_0009333c:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 24u, &shc); cpu->r[2] = v;
    }
L_00093340:;
    {
        wr8(cpu->r[0] + + 0x1fu, cpu->r[2]);
    }
L_00093344:;
    {
        cpu->r[2] = (cpu->r[3] >> 8) & 0xffu;
    }
L_00093348:;
    {
        cpu->r[3] = (cpu->r[3] >> 16) & 0xffu;
    }
L_0009334c:;
    {
        wr8(cpu->r[0] + + 0x1du, cpu->r[2]);
    }
L_00093350:;
    {
        wr8(cpu->r[0] + + 0x1eu, cpu->r[3]);
    }
L_00093354:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x20u);
    }
L_00093358:;
    {
        wr8(cpu->r[0] + + 0x20u, cpu->r[3]);
    }
L_0009335c:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 24u, &shc); cpu->r[2] = v;
    }
L_00093360:;
    {
        wr8(cpu->r[0] + + 0x23u, cpu->r[2]);
    }
L_00093364:;
    {
        cpu->r[2] = (cpu->r[3] >> 8) & 0xffu;
    }
L_00093368:;
    {
        cpu->r[3] = (cpu->r[3] >> 16) & 0xffu;
    }
L_0009336c:;
    {
        wr8(cpu->r[0] + + 0x21u, cpu->r[2]);
    }
L_00093370:;
    {
        wr8(cpu->r[0] + + 0x22u, cpu->r[3]);
    }
L_00093374:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x24u);
    }
L_00093378:;
    {
        wr8(cpu->r[0] + + 0x24u, cpu->r[3]);
    }
L_0009337c:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 24u, &shc); cpu->r[2] = v;
    }
L_00093380:;
    {
        wr8(cpu->r[0] + + 0x27u, cpu->r[2]);
    }
L_00093384:;
    {
        cpu->r[2] = (cpu->r[3] >> 8) & 0xffu;
    }
L_00093388:;
    {
        cpu->r[3] = (cpu->r[3] >> 16) & 0xffu;
    }
L_0009338c:;
    {
        wr8(cpu->r[0] + + 0x25u, cpu->r[2]);
    }
L_00093390:;
    {
        wr8(cpu->r[0] + + 0x26u, cpu->r[3]);
    }
L_00093394:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x28u);
    }
L_00093398:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 24u, &shc); cpu->r[2] = v;
    }
L_0009339c:;
    {
        wr8(cpu->r[0] + + 0x28u, cpu->r[3]);
    }
L_000933a0:;
    {
        wr8(cpu->r[0] + + 0x2bu, cpu->r[2]);
    }
L_000933a4:;
    {
        cpu->r[2] = (cpu->r[3] >> 8) & 0xffu;
    }
L_000933a8:;
    {
        cpu->r[3] = (cpu->r[3] >> 16) & 0xffu;
    }
L_000933ac:;
    {
        wr8(cpu->r[0] + + 0x29u, cpu->r[2]);
    }
L_000933b0:;
    {
        wr8(cpu->r[0] + + 0x2au, cpu->r[3]);
    }
L_000933b4:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_000933b8:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x2cu);
    }
L_000933bc:;
    {
        wr8(cpu->r[0] + + 0x30u, cpu->r[2]);
    }
L_000933c0:;
    {
        wr8(cpu->r[0] + + 0x2cu, cpu->r[3]);
    }
L_000933c4:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 24u, &shc); cpu->r[2] = v;
    }
L_000933c8:;
    {
        wr8(cpu->r[0] + + 0x2fu, cpu->r[2]);
    }
L_000933cc:;
    {
        cpu->r[2] = (cpu->r[3] >> 8) & 0xffu;
    }
L_000933d0:;
    {
        wr8(cpu->r[0] + + 0x2du, cpu->r[2]);
    }
L_000933d4:;
    {
        cpu->r[2] = (cpu->r[3] >> 16) & 0xffu;
    }
L_000933d8:;
    {
        wr8(cpu->r[0] + + 0x2eu, cpu->r[2]);
    }
L_000933dc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10CCarAspect6SaveToEib @ 000933e0 (arm) */
void fn_000933e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000933e0:;
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
L_000933e4:;
    {
        cpu->r[5] = rd32(0x000933ecu + + 0x630u);
    }
L_000933e8:;
    {
        cpu->r[3] = rd32(0x000933f0u + + 0x630u);
    }
L_000933ec:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000d4u, 1, 0);
    }
L_000933f0:;
    {
        cpu->r[5] = add_flags(cpu, 0x000933f8u, cpu->r[5], 0, 0);
    }
L_000933f4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_000933f8:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_000933fc:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_00093400:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00093404:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00093408:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0009340c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000939f4;
        }
    }
L_00093410:;
    {
        cpu->r[8] = rd32(0x00093418u + + 0x60cu);
    }
L_00093414:;
    {
        cpu->r[12] = rd8(cpu->r[4] + + 0x1u);
    }
L_00093418:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
    }
L_0009341c:;
    {
        cpu->r[0] = rd8(cpu->r[4] + + 0x2u);
    }
L_00093420:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_00093424:;
    {
        cpu->r[3] = rd8(cpu->r[4]);
    }
L_00093428:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[1], 2, 4u, &shc), 0, 0);
    }
L_0009342c:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x3u);
    }
L_00093430:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00093434:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[3] = v;
    }
L_00093438:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[0], 2, 16u, &shc); cpu->r[3] = v;
    }
L_0009343c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[6], 0, 0);
    }
L_00093440:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[2], 2, 24u, &shc); cpu->r[3] = v;
    }
L_00093444:;
    {
        uint32_t v = cpu->r[3] & 0x000000ffu; cpu->r[0] = v;
    }
L_00093448:;
    {
        cpu->r[2] = (cpu->r[3] >> 8) & 0xffu;
    }
L_0009344c:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_00093450:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 24u, &shc); cpu->r[5] = v;
    }
L_00093454:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_00093458:;
    {
        cpu->r[3] = (cpu->r[3] >> 16) & 0xffu;
    }
L_0009345c:;
    {
        wr8(cpu->r[1] + + 0x1f4u, cpu->r[0]);
    }
L_00093460:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[5]);
    }
L_00093464:;
    {
        wr8(cpu->r[1] + + 0x1f5u, cpu->r[2]);
    }
L_00093468:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_0009346c:;
    {
        wr8(cpu->r[1] + + 0x1f7u, cpu->r[5]);
    }
L_00093470:;
    {
        wr8(cpu->r[1] + + 0x1f6u, cpu->r[3]);
    }
L_00093474:;
    {
        cpu->r[12] = rd8(cpu->r[4] + + 0x5u);
    }
L_00093478:;
    {
        cpu->r[0] = rd8(cpu->r[4] + + 0x6u);
    }
L_0009347c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x4u);
    }
L_00093480:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x7u);
    }
L_00093484:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[3] = v;
    }
L_00093488:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[0], 2, 16u, &shc); cpu->r[3] = v;
    }
L_0009348c:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[2], 2, 24u, &shc); cpu->r[3] = v;
    }
L_00093490:;
    {
        uint32_t v = cpu->r[3] & 0x000000ffu; cpu->r[6] = v;
    }
L_00093494:;
    {
        cpu->r[8] = (cpu->r[3] >> 8) & 0xffu;
    }
L_00093498:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[6]);
    }
L_0009349c:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 24u, &shc); cpu->r[7] = v;
    }
L_000934a0:;
    {
        wr8(cpu->r[1] + + 0x1f8u, cpu->r[6]);
    }
L_000934a4:;
    {
        cpu->r[3] = (cpu->r[3] >> 16) & 0xffu;
    }
L_000934a8:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[7]);
    }
L_000934ac:;
    {
        wr8(cpu->r[1] + + 0x1fbu, cpu->r[7]);
    }
L_000934b0:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[8]);
    }
L_000934b4:;
    {
        wr8(cpu->r[1] + + 0x1f9u, cpu->r[8]);
    }
L_000934b8:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_000934bc:;
    {
        wr8(cpu->r[1] + + 0x1fau, cpu->r[3]);
    }
L_000934c0:;
    {
        cpu->r[12] = rd8(cpu->r[4] + + 0x9u);
    }
L_000934c4:;
    {
        cpu->r[0] = rd8(cpu->r[4] + + 0xau);
    }
L_000934c8:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x8u);
    }
L_000934cc:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0xbu);
    }
L_000934d0:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[3] = v;
    }
L_000934d4:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[0], 2, 16u, &shc); cpu->r[3] = v;
    }
L_000934d8:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[2], 2, 24u, &shc); cpu->r[3] = v;
    }
L_000934dc:;
    {
        uint32_t v = cpu->r[3] & 0x000000ffu; cpu->r[9] = v;
    }
L_000934e0:;
    {
        cpu->r[11] = (cpu->r[3] >> 8) & 0xffu;
    }
L_000934e4:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[9]);
    }
L_000934e8:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 24u, &shc); cpu->r[10] = v;
    }
L_000934ec:;
    {
        wr8(cpu->r[1] + + 0x1fcu, cpu->r[9]);
    }
L_000934f0:;
    {
        cpu->r[3] = (cpu->r[3] >> 16) & 0xffu;
    }
L_000934f4:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[10]);
    }
L_000934f8:;
    {
        wr8(cpu->r[1] + + 0x1ffu, cpu->r[10]);
    }
L_000934fc:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[11]);
    }
L_00093500:;
    {
        wr8(cpu->r[1] + + 0x1fdu, cpu->r[11]);
    }
L_00093504:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[3]);
    }
L_00093508:;
    {
        wr8(cpu->r[1] + + 0x1feu, cpu->r[3]);
    }
L_0009350c:;
    {
        cpu->r[12] = rd8(cpu->r[4] + + 0xdu);
    }
L_00093510:;
    {
        cpu->r[0] = rd8(cpu->r[4] + + 0xeu);
    }
L_00093514:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0xcu);
    }
L_00093518:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0xfu);
    }
L_0009351c:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[3] = v;
    }
L_00093520:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[0], 2, 16u, &shc); cpu->r[3] = v;
    }
L_00093524:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[2], 2, 24u, &shc); cpu->r[3] = v;
    }
L_00093528:;
    {
        uint32_t v = cpu->r[3] & 0x000000ffu; cpu->r[12] = v;
    }
L_0009352c:;
    {
        cpu->r[2] = (cpu->r[3] >> 8) & 0xffu;
    }
L_00093530:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[12]);
    }
L_00093534:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 24u, &shc); cpu->r[0] = v;
    }
L_00093538:;
    {
        wr8(cpu->r[1] + + 0x200u, cpu->r[12]);
    }
L_0009353c:;
    {
        cpu->r[3] = (cpu->r[3] >> 16) & 0xffu;
    }
L_00093540:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[0]);
    }
L_00093544:;
    {
        wr8(cpu->r[1] + + 0x203u, cpu->r[0]);
    }
L_00093548:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[2]);
    }
L_0009354c:;
    {
        wr8(cpu->r[1] + + 0x201u, cpu->r[2]);
    }
L_00093550:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[3]);
    }
L_00093554:;
    {
        wr8(cpu->r[1] + + 0x202u, cpu->r[3]);
    }
L_00093558:;
    {
        cpu->r[12] = rd8(cpu->r[4] + + 0x11u);
    }
L_0009355c:;
    {
        cpu->r[0] = rd8(cpu->r[4] + + 0x12u);
    }
L_00093560:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x10u);
    }
L_00093564:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x13u);
    }
L_00093568:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[3] = v;
    }
L_0009356c:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[0], 2, 16u, &shc); cpu->r[3] = v;
    }
L_00093570:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[2], 2, 24u, &shc); cpu->r[3] = v;
    }
L_00093574:;
    {
        uint32_t v = cpu->r[3] & 0x000000ffu; cpu->r[5] = v;
    }
L_00093578:;
    {
        cpu->r[7] = (cpu->r[3] >> 8) & 0xffu;
    }
L_0009357c:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[5]);
    }
L_00093580:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 24u, &shc); cpu->r[6] = v;
    }
L_00093584:;
    {
        wr8(cpu->r[1] + + 0x204u, cpu->r[5]);
    }
L_00093588:;
    {
        cpu->r[3] = (cpu->r[3] >> 16) & 0xffu;
    }
L_0009358c:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[6]);
    }
L_00093590:;
    {
        wr8(cpu->r[1] + + 0x207u, cpu->r[6]);
    }
L_00093594:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[7]);
    }
L_00093598:;
    {
        wr8(cpu->r[1] + + 0x205u, cpu->r[7]);
    }
L_0009359c:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[3]);
    }
L_000935a0:;
    {
        wr8(cpu->r[1] + + 0x206u, cpu->r[3]);
    }
L_000935a4:;
    {
        cpu->r[12] = rd8(cpu->r[4] + + 0x15u);
    }
L_000935a8:;
    {
        cpu->r[0] = rd8(cpu->r[4] + + 0x16u);
    }
L_000935ac:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x14u);
    }
L_000935b0:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x17u);
    }
L_000935b4:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[3] = v;
    }
L_000935b8:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[0], 2, 16u, &shc); cpu->r[3] = v;
    }
L_000935bc:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[2], 2, 24u, &shc); cpu->r[3] = v;
    }
L_000935c0:;
    {
        uint32_t v = cpu->r[3] & 0x000000ffu; cpu->r[8] = v;
    }
L_000935c4:;
    {
        cpu->r[10] = (cpu->r[3] >> 8) & 0xffu;
    }
L_000935c8:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 24u, &shc); cpu->r[9] = v;
    }
L_000935cc:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[8]);
    }
L_000935d0:;
    {
        cpu->r[3] = (cpu->r[3] >> 16) & 0xffu;
    }
L_000935d4:;
    {
        wr8(cpu->r[1] + + 0x208u, cpu->r[8]);
    }
L_000935d8:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[9]);
    }
L_000935dc:;
    {
        wr8(cpu->r[1] + + 0x20bu, cpu->r[9]);
    }
L_000935e0:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[10]);
    }
L_000935e4:;
    {
        wr8(cpu->r[1] + + 0x209u, cpu->r[10]);
    }
L_000935e8:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[3]);
    }
L_000935ec:;
    {
        wr8(cpu->r[1] + + 0x20au, cpu->r[3]);
    }
L_000935f0:;
    {
        cpu->r[12] = rd8(cpu->r[4] + + 0x19u);
    }
L_000935f4:;
    {
        cpu->r[0] = rd8(cpu->r[4] + + 0x1au);
    }
L_000935f8:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x18u);
    }
L_000935fc:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x1bu);
    }
L_00093600:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[3] = v;
    }
L_00093604:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[0], 2, 16u, &shc); cpu->r[3] = v;
    }
L_00093608:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[2], 2, 24u, &shc); cpu->r[3] = v;
    }
L_0009360c:;
    {
        uint32_t v = cpu->r[3] & 0x000000ffu; cpu->r[11] = v;
    }
L_00093610:;
    {
        cpu->r[0] = (cpu->r[3] >> 8) & 0xffu;
    }
L_00093614:;
    {
        wr32(cpu->r[13] + + 0x70u, cpu->r[11]);
    }
L_00093618:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 24u, &shc); cpu->r[12] = v;
    }
L_0009361c:;
    {
        wr8(cpu->r[1] + + 0x20cu, cpu->r[11]);
    }
L_00093620:;
    {
        cpu->r[3] = (cpu->r[3] >> 16) & 0xffu;
    }
L_00093624:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[12]);
    }
L_00093628:;
    {
        wr8(cpu->r[1] + + 0x20fu, cpu->r[12]);
    }
L_0009362c:;
    {
        wr32(cpu->r[13] + + 0x74u, cpu->r[0]);
    }
L_00093630:;
    {
        wr8(cpu->r[1] + + 0x20du, cpu->r[0]);
    }
L_00093634:;
    {
        wr32(cpu->r[13] + + 0x78u, cpu->r[3]);
    }
L_00093638:;
    {
        wr8(cpu->r[1] + + 0x20eu, cpu->r[3]);
    }
L_0009363c:;
    {
        cpu->r[12] = rd8(cpu->r[4] + + 0x1du);
    }
L_00093640:;
    {
        cpu->r[0] = rd8(cpu->r[4] + + 0x1eu);
    }
L_00093644:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x1cu);
    }
L_00093648:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x1fu);
    }
L_0009364c:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[3] = v;
    }
L_00093650:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[0], 2, 16u, &shc); cpu->r[3] = v;
    }
L_00093654:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[2], 2, 24u, &shc); cpu->r[3] = v;
    }
L_00093658:;
    {
        uint32_t v = cpu->r[3] & 0x000000ffu; cpu->r[2] = v;
    }
L_0009365c:;
    {
        cpu->r[6] = (cpu->r[3] >> 8) & 0xffu;
    }
L_00093660:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[2]);
    }
L_00093664:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 24u, &shc); cpu->r[5] = v;
    }
L_00093668:;
    {
        wr8(cpu->r[1] + + 0x210u, cpu->r[2]);
    }
L_0009366c:;
    {
        cpu->r[3] = (cpu->r[3] >> 16) & 0xffu;
    }
L_00093670:;
    {
        wr32(cpu->r[13] + + 0x8cu, cpu->r[5]);
    }
L_00093674:;
    {
        wr8(cpu->r[1] + + 0x213u, cpu->r[5]);
    }
L_00093678:;
    {
        wr32(cpu->r[13] + + 0x84u, cpu->r[6]);
    }
L_0009367c:;
    {
        wr8(cpu->r[1] + + 0x211u, cpu->r[6]);
    }
L_00093680:;
    {
        wr32(cpu->r[13] + + 0x88u, cpu->r[3]);
    }
L_00093684:;
    {
        wr8(cpu->r[1] + + 0x212u, cpu->r[3]);
    }
L_00093688:;
    {
        cpu->r[12] = rd8(cpu->r[4] + + 0x21u);
    }
L_0009368c:;
    {
        cpu->r[0] = rd8(cpu->r[4] + + 0x22u);
    }
L_00093690:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x20u);
    }
L_00093694:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x23u);
    }
L_00093698:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[3] = v;
    }
L_0009369c:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[0], 2, 16u, &shc); cpu->r[3] = v;
    }
L_000936a0:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[2], 2, 24u, &shc); cpu->r[3] = v;
    }
L_000936a4:;
    {
        uint32_t v = cpu->r[3] & 0x000000ffu; cpu->r[7] = v;
    }
L_000936a8:;
    {
        cpu->r[9] = (cpu->r[3] >> 8) & 0xffu;
    }
L_000936ac:;
    {
        wr32(cpu->r[13] + + 0x90u, cpu->r[7]);
    }
L_000936b0:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 24u, &shc); cpu->r[8] = v;
    }
L_000936b4:;
    {
        wr8(cpu->r[1] + + 0x214u, cpu->r[7]);
    }
L_000936b8:;
    {
        cpu->r[3] = (cpu->r[3] >> 16) & 0xffu;
    }
L_000936bc:;
    {
        wr32(cpu->r[13] + + 0x9cu, cpu->r[8]);
    }
L_000936c0:;
    {
        wr32(cpu->r[13] + + 0x94u, cpu->r[9]);
    }
L_000936c4:;
    {
        wr8(cpu->r[1] + + 0x215u, cpu->r[9]);
    }
L_000936c8:;
    {
        wr32(cpu->r[13] + + 0x98u, cpu->r[3]);
    }
L_000936cc:;
    {
        wr8(cpu->r[1] + + 0x217u, cpu->r[8]);
    }
L_000936d0:;
    {
        wr8(cpu->r[1] + + 0x216u, cpu->r[3]);
    }
L_000936d4:;
    {
        cpu->r[12] = rd8(cpu->r[4] + + 0x25u);
    }
L_000936d8:;
    {
        cpu->r[0] = rd8(cpu->r[4] + + 0x26u);
    }
L_000936dc:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x24u);
    }
L_000936e0:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x27u);
    }
L_000936e4:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[3] = v;
    }
L_000936e8:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[0], 2, 16u, &shc); cpu->r[3] = v;
    }
L_000936ec:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[2], 2, 24u, &shc); cpu->r[3] = v;
    }
L_000936f0:;
    {
        cpu->r[12] = (cpu->r[3] >> 8) & 0xffu;
    }
L_000936f4:;
    {
        uint32_t v = cpu->r[3] & 0x000000ffu; cpu->r[10] = v;
    }
L_000936f8:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 24u, &shc); cpu->r[11] = v;
    }
L_000936fc:;
    {
        wr32(cpu->r[13] + + 0xa0u, cpu->r[10]);
    }
L_00093700:;
    {
        cpu->r[3] = (cpu->r[3] >> 16) & 0xffu;
    }
L_00093704:;
    {
        wr8(cpu->r[1] + + 0x218u, cpu->r[10]);
    }
L_00093708:;
    {
        wr32(cpu->r[13] + + 0xacu, cpu->r[11]);
    }
L_0009370c:;
    {
        wr8(cpu->r[1] + + 0x21bu, cpu->r[11]);
    }
L_00093710:;
    {
        wr32(cpu->r[13] + + 0xa4u, cpu->r[12]);
    }
L_00093714:;
    {
        wr8(cpu->r[1] + + 0x219u, cpu->r[12]);
    }
L_00093718:;
    {
        wr32(cpu->r[13] + + 0xa8u, cpu->r[3]);
    }
L_0009371c:;
    {
        wr8(cpu->r[1] + + 0x21au, cpu->r[3]);
    }
L_00093720:;
    {
        cpu->r[12] = rd8(cpu->r[4] + + 0x29u);
    }
L_00093724:;
    {
        cpu->r[0] = rd8(cpu->r[4] + + 0x2au);
    }
L_00093728:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x28u);
    }
L_0009372c:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x2bu);
    }
L_00093730:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[3] = v;
    }
L_00093734:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[0], 2, 16u, &shc); cpu->r[3] = v;
    }
L_00093738:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[2], 2, 24u, &shc); cpu->r[3] = v;
    }
L_0009373c:;
    {
        uint32_t v = cpu->r[3] & 0x000000ffu; cpu->r[0] = v;
    }
L_00093740:;
    {
        cpu->r[5] = (cpu->r[3] >> 8) & 0xffu;
    }
L_00093744:;
    {
        wr32(cpu->r[13] + + 0xb0u, cpu->r[0]);
    }
L_00093748:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 24u, &shc); cpu->r[2] = v;
    }
L_0009374c:;
    {
        wr8(cpu->r[1] + + 0x21cu, cpu->r[0]);
    }
L_00093750:;
    {
        cpu->r[3] = (cpu->r[3] >> 16) & 0xffu;
    }
L_00093754:;
    {
        wr32(cpu->r[13] + + 0xbcu, cpu->r[2]);
    }
L_00093758:;
    {
        wr8(cpu->r[1] + + 0x21fu, cpu->r[2]);
    }
L_0009375c:;
    {
        wr32(cpu->r[13] + + 0xb4u, cpu->r[5]);
    }
L_00093760:;
    {
        wr8(cpu->r[1] + + 0x21du, cpu->r[5]);
    }
L_00093764:;
    {
        wr32(cpu->r[13] + + 0xb8u, cpu->r[3]);
    }
L_00093768:;
    {
        wr8(cpu->r[1] + + 0x21eu, cpu->r[3]);
    }
L_0009376c:;
    {
        cpu->r[12] = rd8(cpu->r[4] + + 0x2du);
    }
L_00093770:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x2cu);
    }
L_00093774:;
    {
        cpu->r[0] = rd8(cpu->r[4] + + 0x2eu);
    }
L_00093778:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0x2fu);
    }
L_0009377c:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[3] = v;
    }
L_00093780:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[0], 2, 16u, &shc); cpu->r[3] = v;
    }
L_00093784:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[2], 2, 24u, &shc); cpu->r[3] = v;
    }
L_00093788:;
    {
        uint32_t v = cpu->r[3] & 0x000000ffu; cpu->r[6] = v;
    }
L_0009378c:;
    {
        cpu->r[8] = (cpu->r[3] >> 8) & 0xffu;
    }
L_00093790:;
    {
        wr32(cpu->r[13] + + 0xc0u, cpu->r[6]);
    }
L_00093794:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 24u, &shc); cpu->r[7] = v;
    }
L_00093798:;
    {
        wr8(cpu->r[1] + + 0x220u, cpu->r[6]);
    }
L_0009379c:;
    {
        cpu->r[3] = (cpu->r[3] >> 16) & 0xffu;
    }
L_000937a0:;
    {
        wr32(cpu->r[13] + + 0xccu, cpu->r[7]);
    }
L_000937a4:;
    {
        wr8(cpu->r[1] + + 0x223u, cpu->r[7]);
    }
L_000937a8:;
    {
        wr32(cpu->r[13] + + 0xc4u, cpu->r[8]);
    }
L_000937ac:;
    {
        wr8(cpu->r[1] + + 0x221u, cpu->r[8]);
    }
L_000937b0:;
    {
        wr32(cpu->r[13] + + 0xc8u, cpu->r[3]);
    }
L_000937b4:;
    {
        wr8(cpu->r[1] + + 0x222u, cpu->r[3]);
    }
L_000937b8:;
    {
        cpu->r[4] = rd8(cpu->r[4] + + 0x30u);
    }
L_000937bc:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[4]);
    }
L_000937c0:;
    {
        wr8(cpu->r[1] + + 0x224u, cpu->r[4]);
    }
L_000937c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000939ec;
        }
    }
L_000937c8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[1], 0x00001140u, 0, 0);
    }
L_000937cc:;
    {
        cpu->r[11] = cpu->r[10];
    }
L_000937d0:;
    {
        cpu->r[9] = cpu->r[10];
    }
L_000937d4:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x0000002cu, 0, 0);
    }
L_000937d8:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[11]);
    }
L_000937dc:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x10u);
    }
L_000937e0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000028u, 0, 0);
    }
L_000937e4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[9]);
    }
L_000937e8:;
    {
        cpu->r[9] = 0x00001144u;
    }
L_000937ec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], 0x00000030u, 0, 0);
    }
L_000937f0:;
    {
        cpu->r[8] = cpu->r[10];
    }
L_000937f4:;
    {
        wr8(cpu->r[1] + cpu->r[9], cpu->r[11]);
    }
L_000937f8:;
    {
        cpu->r[7] = cpu->r[10];
    }
L_000937fc:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00093800:;
    {
        cpu->r[6] = cpu->r[10];
    }
L_00093804:;
    {
        cpu->r[5] = cpu->r[10];
    }
L_00093808:;
    {
        cpu->r[4] = cpu->r[10];
    }
L_0009380c:;
    {
        cpu->r[12] = cpu->r[10];
    }
L_00093810:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00093814:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_00093818:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000004u, 0, 0);
    }
L_0009381c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000008u, 0, 0);
    }
L_00093820:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_00093824:;
    {
        wr8(cpu->r[10] + + 0x3u, cpu->r[9]);
    }
L_00093828:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000010u, 0, 0);
    }
L_0009382c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x14u);
    }
L_00093830:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000014u, 0, 0);
    }
L_00093834:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000018u, 0, 0);
    }
L_00093838:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000001cu, 0, 0);
    }
L_0009383c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000020u, 0, 0);
    }
L_00093840:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000024u, 0, 0);
    }
L_00093844:;
    {
        wr8(cpu->r[10] + + 0x1u, cpu->r[11]);
    }
L_00093848:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x18u);
    }
L_0009384c:;
    {
        wr8(cpu->r[10] + + 0x2u, cpu->r[9]);
    }
L_00093850:;
    {
        cpu->r[10] = 0x00001148u;
    }
L_00093854:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x20u);
    }
L_00093858:;
    {
        wr8(cpu->r[1] + cpu->r[10], cpu->r[11]);
    }
L_0009385c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00093860:;
    {
        wr8(cpu->r[8] + + 0x3u, cpu->r[9]);
    }
L_00093864:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x24u);
    }
L_00093868:;
    {
        wr8(cpu->r[8] + + 0x1u, cpu->r[10]);
    }
L_0009386c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x28u);
    }
L_00093870:;
    {
        wr8(cpu->r[8] + + 0x2u, cpu->r[11]);
    }
L_00093874:;
    {
        cpu->r[8] = 0x0000114cu;
    }
L_00093878:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x30u);
    }
L_0009387c:;
    {
        wr8(cpu->r[1] + cpu->r[8], cpu->r[9]);
    }
L_00093880:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x3cu);
    }
L_00093884:;
    {
        wr8(cpu->r[7] + + 0x3u, cpu->r[10]);
    }
L_00093888:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x34u);
    }
L_0009388c:;
    {
        wr8(cpu->r[7] + + 0x1u, cpu->r[11]);
    }
L_00093890:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x38u);
    }
L_00093894:;
    {
        wr8(cpu->r[7] + + 0x2u, cpu->r[8]);
    }
L_00093898:;
    {
        cpu->r[7] = 0x00001150u;
    }
L_0009389c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x40u);
    }
L_000938a0:;
    {
        wr8(cpu->r[1] + cpu->r[7], cpu->r[9]);
    }
L_000938a4:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x4cu);
    }
L_000938a8:;
    {
        wr8(cpu->r[6] + + 0x3u, cpu->r[10]);
    }
L_000938ac:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x44u);
    }
L_000938b0:;
    {
        wr8(cpu->r[6] + + 0x1u, cpu->r[11]);
    }
L_000938b4:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x48u);
    }
L_000938b8:;
    {
        wr8(cpu->r[6] + + 0x2u, cpu->r[7]);
    }
L_000938bc:;
    {
        cpu->r[6] = 0x00001154u;
    }
L_000938c0:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x50u);
    }
L_000938c4:;
    {
        wr8(cpu->r[1] + cpu->r[6], cpu->r[8]);
    }
L_000938c8:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x5cu);
    }
L_000938cc:;
    {
        wr8(cpu->r[5] + + 0x3u, cpu->r[9]);
    }
L_000938d0:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x54u);
    }
L_000938d4:;
    {
        wr8(cpu->r[5] + + 0x1u, cpu->r[10]);
    }
L_000938d8:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x58u);
    }
L_000938dc:;
    {
        wr8(cpu->r[5] + + 0x2u, cpu->r[11]);
    }
L_000938e0:;
    {
        cpu->r[5] = 0x00001158u;
    }
L_000938e4:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x60u);
    }
L_000938e8:;
    {
        wr8(cpu->r[1] + cpu->r[5], cpu->r[6]);
    }
L_000938ec:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x6cu);
    }
L_000938f0:;
    {
        wr8(cpu->r[4] + + 0x3u, cpu->r[7]);
    }
L_000938f4:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x64u);
    }
L_000938f8:;
    {
        wr8(cpu->r[4] + + 0x1u, cpu->r[8]);
    }
L_000938fc:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x68u);
    }
L_00093900:;
    {
        wr8(cpu->r[4] + + 0x2u, cpu->r[9]);
    }
L_00093904:;
    {
        cpu->r[4] = 0x0000115cu;
    }
L_00093908:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x70u);
    }
L_0009390c:;
    {
        wr8(cpu->r[1] + cpu->r[4], cpu->r[10]);
    }
L_00093910:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x7cu);
    }
L_00093914:;
    {
        wr8(cpu->r[12] + + 0x3u, cpu->r[11]);
    }
L_00093918:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x74u);
    }
L_0009391c:;
    {
        wr8(cpu->r[12] + + 0x1u, cpu->r[4]);
    }
L_00093920:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x78u);
    }
L_00093924:;
    {
        wr8(cpu->r[12] + + 0x2u, cpu->r[5]);
    }
L_00093928:;
    {
        cpu->r[12] = 0x00001160u;
    }
L_0009392c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x80u);
    }
L_00093930:;
    {
        wr8(cpu->r[1] + cpu->r[12], cpu->r[6]);
    }
L_00093934:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x8cu);
    }
L_00093938:;
    {
        wr8(cpu->r[0] + + 0x3u, cpu->r[7]);
    }
L_0009393c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x84u);
    }
L_00093940:;
    {
        wr8(cpu->r[0] + + 0x1u, cpu->r[8]);
    }
L_00093944:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x88u);
    }
L_00093948:;
    {
        wr8(cpu->r[0] + + 0x2u, cpu->r[9]);
    }
L_0009394c:;
    {
        cpu->r[0] = 0x00001164u;
    }
L_00093950:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x90u);
    }
L_00093954:;
    {
        wr8(cpu->r[1] + cpu->r[0], cpu->r[10]);
    }
L_00093958:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x94u);
    }
L_0009395c:;
    {
        wr8(cpu->r[2] + + 0x1u, cpu->r[11]);
    }
L_00093960:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x9cu);
    }
L_00093964:;
    {
        wr8(cpu->r[2] + + 0x3u, cpu->r[12]);
    }
L_00093968:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x98u);
    }
L_0009396c:;
    {
        wr8(cpu->r[2] + + 0x2u, cpu->r[0]);
    }
L_00093970:;
    {
        cpu->r[2] = 0x00001168u;
    }
L_00093974:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0xa0u);
    }
L_00093978:;
    {
        wr8(cpu->r[1] + cpu->r[2], cpu->r[4]);
    }
L_0009397c:;
    {
        cpu->r[2] = 0x0000116cu;
    }
L_00093980:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0xacu);
    }
L_00093984:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x4u);
    }
L_00093988:;
    {
        wr8(cpu->r[6] + + 0x3u, cpu->r[5]);
    }
L_0009398c:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xa4u);
    }
L_00093990:;
    {
        wr8(cpu->r[6] + + 0x1u, cpu->r[7]);
    }
L_00093994:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0xa8u);
    }
L_00093998:;
    {
        wr8(cpu->r[6] + + 0x2u, cpu->r[8]);
    }
L_0009399c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0xb0u);
    }
L_000939a0:;
    {
        wr8(cpu->r[1] + cpu->r[2], cpu->r[9]);
    }
L_000939a4:;
    {
        cpu->r[2] = 0x00001170u;
    }
L_000939a8:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0xbcu);
    }
L_000939ac:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x8u);
    }
L_000939b0:;
    {
        wr8(cpu->r[11] + + 0x3u, cpu->r[10]);
    }
L_000939b4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xb4u);
    }
L_000939b8:;
    {
        wr8(cpu->r[11] + + 0x1u, cpu->r[12]);
    }
L_000939bc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xb8u);
    }
L_000939c0:;
    {
        wr8(cpu->r[11] + + 0x2u, cpu->r[0]);
    }
L_000939c4:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0xc0u);
    }
L_000939c8:;
    {
        wr8(cpu->r[1] + cpu->r[2], cpu->r[4]);
    }
L_000939cc:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0xcu);
    }
L_000939d0:;
    {
        wr8(cpu->r[3] + + 0x4u, cpu->r[5]);
    }
L_000939d4:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0xc4u);
    }
L_000939d8:;
    {
        wr8(cpu->r[3] + + 0x1u, cpu->r[6]);
    }
L_000939dc:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xc8u);
    }
L_000939e0:;
    {
        wr8(cpu->r[3] + + 0x2u, cpu->r[7]);
    }
L_000939e4:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0xccu);
    }
L_000939e8:;
    {
        wr8(cpu->r[3] + + 0x3u, cpu->r[8]);
    }
L_000939ec:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000d4u, 0, 0);
    }
L_000939f0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x000939f4u)) return;
    }
L_000939f4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_000939f8:;
    {
        cpu->r[14] = 0x000939fcu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_000939fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00093a00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00093410;
        }
    }
L_00093a04:;
    {
        cpu->r[8] = rd32(0x00093a0cu + + 0x18u);
    }
L_00093a08:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00093a0c:;
    {
        cpu->r[14] = 0x00093a10u; fn_00094228(cpu);
    }
L_00093a10:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00093a14:;
    {
        cpu->r[14] = 0x00093a18u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00093a18:;
    {
        goto L_00093414;
    }
}

/* _ZN10CCarAspect9RandomizeEi @ 00093a28 (arm) */
void fn_00093a28(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00093a28:;
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
L_00093a2c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00093a30:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00093a34:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_00093a38:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_00093a3c:;
    {
        cpu->r[14] = 0x00093a40u; fn_000930e0(cpu);
    }
L_00093a40:;
    {
        cpu->r[2] = rd32(0x00093a48u + + 0x1acu);
    }
L_00093a44:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00093a48:;
    {
        cpu->r[1] = 0x00000168u;
    }
L_00093a4c:;
    {
        cpu->r[7] = rd32(0x00093a54u + + 0x1a4u);
    }
L_00093a50:;
    {
        cpu->r[9] = 0x00000001u;
    }
L_00093a54:;
    {
        cpu->r[4] = cpu->r[8];
    }
L_00093a58:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_00093a5c:;
    {
        cpu->r[14] = 0x00093a60u; fn_000964c8(cpu);
    }
L_00093a60:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00093a64:;
    {
        cpu->r[7] = add_flags(cpu, 0x00093a6cu, cpu->r[7], 0, 0);
    }
L_00093a68:;
    {
        cpu->r[6] = 0x00000167u;
    }
L_00093a6c:;
    {
        cpu->r[10] = rd32(0x00093a74u + + 0x188u);
    }
L_00093a70:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00093b78;
        }
    }
L_00093a74:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_00093a78:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[2]);
    }
L_00093a7c:;
    {
        cpu->r[11] = rd32(cpu->r[3]);
    }
L_00093a80:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000118u, 1, 0);
    }
L_00093a84:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00093a88:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000026u, 1, 1);
    }
L_00093a8c:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_00093a90:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00093bec;
        }
    }
L_00093a94:;
    {
        cpu->r[14] = rd32(cpu->r[7] + cpu->r[10]);
    }
L_00093a98:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00093a9c:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_00093aa0:;
    {
        cpu->r[2] = rd32(cpu->r[14] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_00093aa4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x00000013u, 0, 0);
    }
L_00093aa8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000013u, 1, 0);
    }
L_00093aac:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_00093ab0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00093ac4;
        }
    }
L_00093ab4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_00093ab8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00093ac4;
        }
    }
L_00093abc:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[3], 1, 1);
    }
L_00093ac0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = 0x00000000u;
        }
    }
L_00093ac4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00093ac8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 1);
    }
L_00093acc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00093aa0;
        }
    }
L_00093ad0:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00093ad4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00093bec;
        }
    }
L_00093ad8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 1);
    }
L_00093adc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000168u, 1, 0);
        }
    }
L_00093ae0:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00093ae4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00093a80;
        }
    }
L_00093ae8:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_00093aec:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00093af0:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_00093af4:;
    {
        cpu->r[1] = rd32(cpu->r[7] + cpu->r[10]);
    }
L_00093af8:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_00093afc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_00093b00:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 1);
    }
L_00093b04:;
    {
        wr32(cpu->r[1] + shifter(cpu->r[11], 2, 2u, &shc), cpu->r[0]);
    }
L_00093b08:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = cpu->r[3];
        }
    }
L_00093b0c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[12] = cpu->r[4];
        }
    }
L_00093b10:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00093b14:;
    {
        wr32(cpu->r[2], cpu->r[12]);
    }
L_00093b18:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 24u, &shc); cpu->r[3] = v;
    }
L_00093b1c:;
    {
        cpu->r[2] = (~0x0000007fu);
    }
L_00093b20:;
    {
        wr8(cpu->r[5] + + 0x3u, cpu->r[3]);
    }
L_00093b24:;
    {
        cpu->r[3] = (cpu->r[0] >> 8) & 0xffu;
    }
L_00093b28:;
    {
        wr8(cpu->r[5], cpu->r[0]);
    }
L_00093b2c:;
    {
        cpu->r[0] = (cpu->r[0] >> 16) & 0xffu;
    }
L_00093b30:;
    {
        wr8(cpu->r[5] + + 0x1u, cpu->r[3]);
    }
L_00093b34:;
    {
        cpu->r[3] = 0x0000003fu;
    }
L_00093b38:;
    {
        wr8(cpu->r[5] + + 0x4u, cpu->r[4]);
    }
L_00093b3c:;
    {
        wr8(cpu->r[5] + + 0x5u, cpu->r[4]);
    }
L_00093b40:;
    {
        wr8(cpu->r[5] + + 0x6u, cpu->r[4]);
    }
L_00093b44:;
    {
        wr8(cpu->r[5] + + 0x7u, cpu->r[4]);
    }
L_00093b48:;
    {
        wr8(cpu->r[5] + + 0x8u, cpu->r[4]);
    }
L_00093b4c:;
    {
        wr8(cpu->r[5] + + 0x9u, cpu->r[4]);
    }
L_00093b50:;
    {
        wr8(cpu->r[5] + + 0xau, cpu->r[2]);
    }
L_00093b54:;
    {
        wr8(cpu->r[5] + + 0x2u, cpu->r[0]);
    }
L_00093b58:;
    {
        wr8(cpu->r[5] + + 0xbu, cpu->r[3]);
    }
L_00093b5c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_00093b60:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00093b64:;
    {
        cpu->r[1] = 0x00000168u;
    }
L_00093b68:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_00093b6c:;
    {
        cpu->r[14] = 0x00093b70u; fn_000964c8(cpu);
    }
L_00093b70:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_00093b74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00093a74;
        }
    }
L_00093b78:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_00093b7c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00093b80:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[8], shifter(cpu->r[8], 2, 1u, &shc), 0, 0);
    }
L_00093b84:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000003u, 1, 1);
    }
L_00093b88:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00093b8c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00093b90:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00093b94:;
    {
        wr8(cpu->r[5] + shifter(cpu->r[1], 2, 2u, &shc), cpu->r[0]);
    }
L_00093b98:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 24u, &shc); cpu->r[12] = v;
    }
L_00093b9c:;
    {
        wr8(cpu->r[3] + + 0x8u, cpu->r[4]);
    }
L_00093ba0:;
    {
        wr8(cpu->r[3] + + 0x3u, cpu->r[12]);
    }
L_00093ba4:;
    {
        cpu->r[1] = (cpu->r[0] >> 8) & 0xffu;
    }
L_00093ba8:;
    {
        wr8(cpu->r[3] + + 0x4u, cpu->r[4]);
    }
L_00093bac:;
    {
        cpu->r[0] = (cpu->r[0] >> 16) & 0xffu;
    }
L_00093bb0:;
    {
        wr8(cpu->r[3] + + 0x1u, cpu->r[1]);
    }
L_00093bb4:;
    {
        wr8(cpu->r[3] + + 0x2u, cpu->r[0]);
    }
L_00093bb8:;
    {
        wr8(cpu->r[3] + + 0x5u, cpu->r[4]);
    }
L_00093bbc:;
    {
        wr8(cpu->r[3] + + 0x6u, cpu->r[4]);
    }
L_00093bc0:;
    {
        wr8(cpu->r[3] + + 0x7u, cpu->r[4]);
    }
L_00093bc4:;
    {
        wr8(cpu->r[2] + + 0x3u, cpu->r[4]);
    }
L_00093bc8:;
    {
        wr8(cpu->r[2] + + 0x1u, cpu->r[4]);
    }
L_00093bcc:;
    {
        wr8(cpu->r[2] + + 0x2u, cpu->r[4]);
    }
L_00093bd0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00093b5c;
        }
    }
L_00093bd4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_00093bd8:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_00093bdc:;
    {
        cpu->r[14] = 0x00093be0u; fn_000964c8(cpu);
    }
L_00093be0:;
    {
        wr8(cpu->r[5] + + 0x30u, cpu->r[0]);
    }
L_00093be4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00093be8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00093becu)) return;
    }
L_00093bec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000005u, 0, 0);
    }
L_00093bf0:;
    {
        goto L_00093ad8;
    }
}

/* _ZN10CCarAspect8LoadFromEi @ 00093c00 (arm) */
void fn_00093c00(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00093c00:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00093c04:;
    {
        cpu->r[5] = rd32(0x00093c0cu + + 0x31cu);
    }
L_00093c08:;
    {
        cpu->r[3] = rd32(0x00093c10u + + 0x31cu);
    }
L_00093c0c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00093c10:;
    {
        cpu->r[5] = add_flags(cpu, 0x00093c18u, cpu->r[5], 0, 0);
    }
L_00093c14:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00093c18:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00093c1c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00093c20:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00093c24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00093f00;
        }
    }
L_00093c28:;
    {
        cpu->r[8] = rd32(0x00093c30u + + 0x300u);
    }
L_00093c2c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
    }
L_00093c30:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00093c34:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[2], 2, 4u, &shc), 0, 0);
    }
L_00093c38:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_00093c3c:;
    {
        cpu->r[0] = rd8(cpu->r[6] + + 0x1f5u);
    }
L_00093c40:;
    {
        cpu->r[3] = rd8(cpu->r[6] + + 0x1f4u);
    }
L_00093c44:;
    {
        cpu->r[1] = rd8(cpu->r[6] + + 0x1f6u);
    }
L_00093c48:;
    {
        cpu->r[2] = rd8(cpu->r[6] + + 0x1f7u);
    }
L_00093c4c:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[0], 2, 8u, &shc); cpu->r[3] = v;
    }
L_00093c50:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[1], 2, 16u, &shc); cpu->r[3] = v;
    }
L_00093c54:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[2], 2, 24u, &shc); cpu->r[3] = v;
    }
L_00093c58:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_00093c5c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_00093c60:;
    {
        vfp_sync_flags(cpu);
    }
L_00093c64:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00093c68:;
    {
        if (cond_test(cpu, 5)) {
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00093c6cu)) return;
        }
    }
L_00093c6c:;
    {
        wr8(cpu->r[4], cpu->r[3]);
    }
L_00093c70:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 24u, &shc); cpu->r[2] = v;
    }
L_00093c74:;
    {
        wr8(cpu->r[4] + + 0x3u, cpu->r[2]);
    }
L_00093c78:;
    {
        cpu->r[2] = (cpu->r[3] >> 8) & 0xffu;
    }
L_00093c7c:;
    {
        cpu->r[3] = (cpu->r[3] >> 16) & 0xffu;
    }
L_00093c80:;
    {
        wr8(cpu->r[4] + + 0x1u, cpu->r[2]);
    }
L_00093c84:;
    {
        wr8(cpu->r[4] + + 0x2u, cpu->r[3]);
    }
L_00093c88:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00093c8c:;
    {
        cpu->r[12] = rd8(cpu->r[6] + + 0x1f9u);
    }
L_00093c90:;
    {
        cpu->r[1] = rd8(cpu->r[6] + + 0x1fau);
    }
L_00093c94:;
    {
        cpu->r[3] = rd8(cpu->r[6] + + 0x1f8u);
    }
L_00093c98:;
    {
        cpu->r[2] = rd8(cpu->r[6] + + 0x1fbu);
    }
L_00093c9c:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[3] = v;
    }
L_00093ca0:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[1], 2, 16u, &shc); cpu->r[3] = v;
    }
L_00093ca4:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[2], 2, 24u, &shc); cpu->r[3] = v;
    }
L_00093ca8:;
    {
        wr8(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_00093cac:;
    {
        cpu->r[2] = (cpu->r[3] >> 8) & 0xffu;
    }
L_00093cb0:;
    {
        wr8(cpu->r[4] + + 0x5u, cpu->r[2]);
    }
L_00093cb4:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 24u, &shc); cpu->r[2] = v;
    }
L_00093cb8:;
    {
        cpu->r[3] = (cpu->r[3] >> 16) & 0xffu;
    }
L_00093cbc:;
    {
        wr8(cpu->r[4] + + 0x7u, cpu->r[2]);
    }
L_00093cc0:;
    {
        wr8(cpu->r[4] + + 0x6u, cpu->r[3]);
    }
L_00093cc4:;
    {
        cpu->r[12] = rd8(cpu->r[6] + + 0x1fdu);
    }
L_00093cc8:;
    {
        cpu->r[1] = rd8(cpu->r[6] + + 0x1feu);
    }
L_00093ccc:;
    {
        cpu->r[3] = rd8(cpu->r[6] + + 0x1fcu);
    }
L_00093cd0:;
    {
        cpu->r[2] = rd8(cpu->r[6] + + 0x1ffu);
    }
L_00093cd4:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[3] = v;
    }
L_00093cd8:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[1], 2, 16u, &shc); cpu->r[3] = v;
    }
L_00093cdc:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[2], 2, 24u, &shc); cpu->r[3] = v;
    }
L_00093ce0:;
    {
        wr8(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_00093ce4:;
    {
        cpu->r[2] = (cpu->r[3] >> 8) & 0xffu;
    }
L_00093ce8:;
    {
        wr8(cpu->r[4] + + 0x9u, cpu->r[2]);
    }
L_00093cec:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 24u, &shc); cpu->r[2] = v;
    }
L_00093cf0:;
    {
        cpu->r[3] = (cpu->r[3] >> 16) & 0xffu;
    }
L_00093cf4:;
    {
        wr8(cpu->r[4] + + 0xbu, cpu->r[2]);
    }
L_00093cf8:;
    {
        wr8(cpu->r[4] + + 0xau, cpu->r[3]);
    }
L_00093cfc:;
    {
        cpu->r[12] = rd8(cpu->r[6] + + 0x201u);
    }
L_00093d00:;
    {
        cpu->r[1] = rd8(cpu->r[6] + + 0x202u);
    }
L_00093d04:;
    {
        cpu->r[3] = rd8(cpu->r[6] + + 0x200u);
    }
L_00093d08:;
    {
        cpu->r[2] = rd8(cpu->r[6] + + 0x203u);
    }
L_00093d0c:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[3] = v;
    }
L_00093d10:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[1], 2, 16u, &shc); cpu->r[3] = v;
    }
L_00093d14:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[2], 2, 24u, &shc); cpu->r[3] = v;
    }
L_00093d18:;
    {
        wr8(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_00093d1c:;
    {
        cpu->r[2] = (cpu->r[3] >> 8) & 0xffu;
    }
L_00093d20:;
    {
        wr8(cpu->r[4] + + 0xdu, cpu->r[2]);
    }
L_00093d24:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 24u, &shc); cpu->r[2] = v;
    }
L_00093d28:;
    {
        cpu->r[3] = (cpu->r[3] >> 16) & 0xffu;
    }
L_00093d2c:;
    {
        wr8(cpu->r[4] + + 0xfu, cpu->r[2]);
    }
L_00093d30:;
    {
        wr8(cpu->r[4] + + 0xeu, cpu->r[3]);
    }
L_00093d34:;
    {
        cpu->r[12] = rd8(cpu->r[6] + + 0x205u);
    }
L_00093d38:;
    {
        cpu->r[1] = rd8(cpu->r[6] + + 0x206u);
    }
L_00093d3c:;
    {
        cpu->r[3] = rd8(cpu->r[6] + + 0x204u);
    }
L_00093d40:;
    {
        cpu->r[2] = rd8(cpu->r[6] + + 0x207u);
    }
L_00093d44:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[3] = v;
    }
L_00093d48:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[1], 2, 16u, &shc); cpu->r[3] = v;
    }
L_00093d4c:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[2], 2, 24u, &shc); cpu->r[3] = v;
    }
L_00093d50:;
    {
        wr8(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_00093d54:;
    {
        cpu->r[2] = (cpu->r[3] >> 8) & 0xffu;
    }
L_00093d58:;
    {
        wr8(cpu->r[4] + + 0x11u, cpu->r[2]);
    }
L_00093d5c:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 24u, &shc); cpu->r[2] = v;
    }
L_00093d60:;
    {
        cpu->r[3] = (cpu->r[3] >> 16) & 0xffu;
    }
L_00093d64:;
    {
        wr8(cpu->r[4] + + 0x13u, cpu->r[2]);
    }
L_00093d68:;
    {
        wr8(cpu->r[4] + + 0x12u, cpu->r[3]);
    }
L_00093d6c:;
    {
        cpu->r[12] = rd8(cpu->r[6] + + 0x209u);
    }
L_00093d70:;
    {
        cpu->r[1] = rd8(cpu->r[6] + + 0x20au);
    }
L_00093d74:;
    {
        cpu->r[3] = rd8(cpu->r[6] + + 0x208u);
    }
L_00093d78:;
    {
        cpu->r[2] = rd8(cpu->r[6] + + 0x20bu);
    }
L_00093d7c:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[3] = v;
    }
L_00093d80:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[1], 2, 16u, &shc); cpu->r[3] = v;
    }
L_00093d84:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[2], 2, 24u, &shc); cpu->r[3] = v;
    }
L_00093d88:;
    {
        wr8(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_00093d8c:;
    {
        cpu->r[2] = (cpu->r[3] >> 8) & 0xffu;
    }
L_00093d90:;
    {
        wr8(cpu->r[4] + + 0x15u, cpu->r[2]);
    }
L_00093d94:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 24u, &shc); cpu->r[2] = v;
    }
L_00093d98:;
    {
        cpu->r[3] = (cpu->r[3] >> 16) & 0xffu;
    }
L_00093d9c:;
    {
        wr8(cpu->r[4] + + 0x17u, cpu->r[2]);
    }
L_00093da0:;
    {
        wr8(cpu->r[4] + + 0x16u, cpu->r[3]);
    }
L_00093da4:;
    {
        cpu->r[12] = rd8(cpu->r[6] + + 0x20du);
    }
L_00093da8:;
    {
        cpu->r[1] = rd8(cpu->r[6] + + 0x20eu);
    }
L_00093dac:;
    {
        cpu->r[3] = rd8(cpu->r[6] + + 0x20cu);
    }
L_00093db0:;
    {
        cpu->r[2] = rd8(cpu->r[6] + + 0x20fu);
    }
L_00093db4:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[3] = v;
    }
L_00093db8:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[1], 2, 16u, &shc); cpu->r[3] = v;
    }
L_00093dbc:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[2], 2, 24u, &shc); cpu->r[3] = v;
    }
L_00093dc0:;
    {
        wr8(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_00093dc4:;
    {
        cpu->r[2] = (cpu->r[3] >> 8) & 0xffu;
    }
L_00093dc8:;
    {
        wr8(cpu->r[4] + + 0x19u, cpu->r[2]);
    }
L_00093dcc:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 24u, &shc); cpu->r[2] = v;
    }
L_00093dd0:;
    {
        cpu->r[3] = (cpu->r[3] >> 16) & 0xffu;
    }
L_00093dd4:;
    {
        wr8(cpu->r[4] + + 0x1bu, cpu->r[2]);
    }
L_00093dd8:;
    {
        wr8(cpu->r[4] + + 0x1au, cpu->r[3]);
    }
L_00093ddc:;
    {
        cpu->r[12] = rd8(cpu->r[6] + + 0x211u);
    }
L_00093de0:;
    {
        cpu->r[1] = rd8(cpu->r[6] + + 0x212u);
    }
L_00093de4:;
    {
        cpu->r[3] = rd8(cpu->r[6] + + 0x210u);
    }
L_00093de8:;
    {
        cpu->r[2] = rd8(cpu->r[6] + + 0x213u);
    }
L_00093dec:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[3] = v;
    }
L_00093df0:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[1], 2, 16u, &shc); cpu->r[3] = v;
    }
L_00093df4:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[2], 2, 24u, &shc); cpu->r[3] = v;
    }
L_00093df8:;
    {
        wr8(cpu->r[4] + + 0x1cu, cpu->r[3]);
    }
L_00093dfc:;
    {
        cpu->r[2] = (cpu->r[3] >> 8) & 0xffu;
    }
L_00093e00:;
    {
        wr8(cpu->r[4] + + 0x1du, cpu->r[2]);
    }
L_00093e04:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 24u, &shc); cpu->r[2] = v;
    }
L_00093e08:;
    {
        cpu->r[3] = (cpu->r[3] >> 16) & 0xffu;
    }
L_00093e0c:;
    {
        wr8(cpu->r[4] + + 0x1fu, cpu->r[2]);
    }
L_00093e10:;
    {
        wr8(cpu->r[4] + + 0x1eu, cpu->r[3]);
    }
L_00093e14:;
    {
        cpu->r[12] = rd8(cpu->r[6] + + 0x215u);
    }
L_00093e18:;
    {
        cpu->r[1] = rd8(cpu->r[6] + + 0x216u);
    }
L_00093e1c:;
    {
        cpu->r[3] = rd8(cpu->r[6] + + 0x214u);
    }
L_00093e20:;
    {
        cpu->r[2] = rd8(cpu->r[6] + + 0x217u);
    }
L_00093e24:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[3] = v;
    }
L_00093e28:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[1], 2, 16u, &shc); cpu->r[3] = v;
    }
L_00093e2c:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[2], 2, 24u, &shc); cpu->r[3] = v;
    }
L_00093e30:;
    {
        wr8(cpu->r[4] + + 0x20u, cpu->r[3]);
    }
L_00093e34:;
    {
        cpu->r[2] = (cpu->r[3] >> 8) & 0xffu;
    }
L_00093e38:;
    {
        wr8(cpu->r[4] + + 0x21u, cpu->r[2]);
    }
L_00093e3c:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 24u, &shc); cpu->r[2] = v;
    }
L_00093e40:;
    {
        cpu->r[3] = (cpu->r[3] >> 16) & 0xffu;
    }
L_00093e44:;
    {
        wr8(cpu->r[4] + + 0x22u, cpu->r[3]);
    }
L_00093e48:;
    {
        wr8(cpu->r[4] + + 0x23u, cpu->r[2]);
    }
L_00093e4c:;
    {
        cpu->r[12] = rd8(cpu->r[6] + + 0x219u);
    }
L_00093e50:;
    {
        cpu->r[1] = rd8(cpu->r[6] + + 0x21au);
    }
L_00093e54:;
    {
        cpu->r[3] = rd8(cpu->r[6] + + 0x218u);
    }
L_00093e58:;
    {
        cpu->r[2] = rd8(cpu->r[6] + + 0x21bu);
    }
L_00093e5c:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[3] = v;
    }
L_00093e60:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[1], 2, 16u, &shc); cpu->r[3] = v;
    }
L_00093e64:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[2], 2, 24u, &shc); cpu->r[3] = v;
    }
L_00093e68:;
    {
        wr8(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_00093e6c:;
    {
        cpu->r[2] = (cpu->r[3] >> 8) & 0xffu;
    }
L_00093e70:;
    {
        wr8(cpu->r[4] + + 0x25u, cpu->r[2]);
    }
L_00093e74:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 24u, &shc); cpu->r[2] = v;
    }
L_00093e78:;
    {
        cpu->r[3] = (cpu->r[3] >> 16) & 0xffu;
    }
L_00093e7c:;
    {
        wr8(cpu->r[4] + + 0x27u, cpu->r[2]);
    }
L_00093e80:;
    {
        wr8(cpu->r[4] + + 0x26u, cpu->r[3]);
    }
L_00093e84:;
    {
        cpu->r[12] = rd8(cpu->r[6] + + 0x21du);
    }
L_00093e88:;
    {
        cpu->r[1] = rd8(cpu->r[6] + + 0x21eu);
    }
L_00093e8c:;
    {
        cpu->r[3] = rd8(cpu->r[6] + + 0x21cu);
    }
L_00093e90:;
    {
        cpu->r[2] = rd8(cpu->r[6] + + 0x21fu);
    }
L_00093e94:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[3] = v;
    }
L_00093e98:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[1], 2, 16u, &shc); cpu->r[3] = v;
    }
L_00093e9c:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[2], 2, 24u, &shc); cpu->r[3] = v;
    }
L_00093ea0:;
    {
        wr8(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_00093ea4:;
    {
        cpu->r[2] = (cpu->r[3] >> 8) & 0xffu;
    }
L_00093ea8:;
    {
        wr8(cpu->r[4] + + 0x29u, cpu->r[2]);
    }
L_00093eac:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 24u, &shc); cpu->r[2] = v;
    }
L_00093eb0:;
    {
        cpu->r[3] = (cpu->r[3] >> 16) & 0xffu;
    }
L_00093eb4:;
    {
        wr8(cpu->r[4] + + 0x2bu, cpu->r[2]);
    }
L_00093eb8:;
    {
        wr8(cpu->r[4] + + 0x2au, cpu->r[3]);
    }
L_00093ebc:;
    {
        cpu->r[12] = rd8(cpu->r[6] + + 0x221u);
    }
L_00093ec0:;
    {
        cpu->r[3] = rd8(cpu->r[6] + + 0x220u);
    }
L_00093ec4:;
    {
        cpu->r[1] = rd8(cpu->r[6] + + 0x222u);
    }
L_00093ec8:;
    {
        cpu->r[2] = rd8(cpu->r[6] + + 0x223u);
    }
L_00093ecc:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[3] = v;
    }
L_00093ed0:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[1], 2, 16u, &shc); cpu->r[3] = v;
    }
L_00093ed4:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[2], 2, 24u, &shc); cpu->r[3] = v;
    }
L_00093ed8:;
    {
        wr8(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_00093edc:;
    {
        cpu->r[2] = (cpu->r[3] >> 8) & 0xffu;
    }
L_00093ee0:;
    {
        wr8(cpu->r[4] + + 0x2du, cpu->r[2]);
    }
L_00093ee4:;
    {
        uint32_t v = shifter(cpu->r[3], 3, 24u, &shc); cpu->r[2] = v;
    }
L_00093ee8:;
    {
        cpu->r[3] = (cpu->r[3] >> 16) & 0xffu;
    }
L_00093eec:;
    {
        wr8(cpu->r[4] + + 0x2fu, cpu->r[2]);
    }
L_00093ef0:;
    {
        wr8(cpu->r[4] + + 0x2eu, cpu->r[3]);
    }
L_00093ef4:;
    {
        cpu->r[3] = rd8(cpu->r[6] + + 0x224u);
    }
L_00093ef8:;
    {
        wr8(cpu->r[4] + + 0x30u, cpu->r[3]);
    }
L_00093efc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00093f00u)) return;
    }
L_00093f00:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00093f04:;
    {
        cpu->r[14] = 0x00093f08u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00093f08:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00093f0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00093c28;
        }
    }
L_00093f10:;
    {
        cpu->r[8] = rd32(0x00093f18u + + 0x18u);
    }
L_00093f14:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00093f18:;
    {
        cpu->r[14] = 0x00093f1cu; fn_00094228(cpu);
    }
L_00093f1c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00093f20:;
    {
        cpu->r[14] = 0x00093f24u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00093f24:;
    {
        goto L_00093c2c;
    }
}

/* _ZN3CFG3GetEi @ 00093f34 (arm) */
void fn_00093f34(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00093f34:;
    {
        cpu->r[3] = rd32(0x00093f3cu + + 0x14u);
    }
L_00093f38:;
    {
        cpu->r[2] = rd32(0x00093f40u + + 0x14u);
    }
L_00093f3c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00093f44u, cpu->r[3], 0, 0);
    }
L_00093f40:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00093f44:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 3u, &shc), 0, 0);
    }
L_00093f48:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x4u);
    }
L_00093f4c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN3CFG5ParseEv @ 00093f58 (arm) */
void fn_00093f58(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00093f58:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00093f5c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CGameSettings11SetLanguageEi @ 00093f60 (arm) */
void fn_00093f60(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00093f60:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_00093f64:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CGameSettings11GetLanguageEv @ 00093f68 (arm) */
void fn_00093f68(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00093f68:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_00093f6c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CGameSettings19SetIngameCameraViewEi @ 00093f70 (arm) */
void fn_00093f70(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00093f70:;
    {
        wr32(cpu->r[0] + + 0x54u, cpu->r[1]);
    }
L_00093f74:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CGameSettings19GetIngameCameraViewEv @ 00093f78 (arm) */
void fn_00093f78(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00093f78:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x54u);
    }
L_00093f7c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CGameSettings15SetEngineVolumeEi @ 00093f80 (arm) */
void fn_00093f80(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00093f80:;
    {
        wr32(cpu->r[0] + + 0x30u, cpu->r[1]);
    }
L_00093f84:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CGameSettings15GetEngineVolumeEv @ 00093f88 (arm) */
void fn_00093f88(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00093f88:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x30u);
    }
L_00093f8c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CGameSettings15SetMasterVolumeEi @ 00093f90 (arm) */
void fn_00093f90(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00093f90:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[1]);
    }
L_00093f94:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CGameSettings15GetMasterVolumeEv @ 00093f98 (arm) */
void fn_00093f98(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00093f98:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x24u);
    }
L_00093f9c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CGameSettings14SetUserMetricsEi @ 00093fa0 (arm) */
void fn_00093fa0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00093fa0:;
    {
        wr32(cpu->r[0] + + 0x34u, cpu->r[1]);
    }
L_00093fa4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CGameSettings14GetUserMetricsEv @ 00093fa8 (arm) */
void fn_00093fa8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00093fa8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x34u);
    }
L_00093fac:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CGameSettings14SetMusicVolumeEi @ 00093fb0 (arm) */
void fn_00093fb0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00093fb0:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[1]);
    }
L_00093fb4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CGameSettings14GetMusicVolumeEv @ 00093fb8 (arm) */
void fn_00093fb8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00093fb8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x2cu);
    }
L_00093fbc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CGameSettings14SetSoundVolumeEi @ 00093fc0 (arm) */
void fn_00093fc0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00093fc0:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[1]);
    }
L_00093fc4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CGameSettings14GetSoundVolumeEv @ 00093fc8 (arm) */
void fn_00093fc8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00093fc8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x28u);
    }
L_00093fcc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CGameSettings14SetControlModeEi @ 00093fd0 (arm) */
void fn_00093fd0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00093fd0:;
    {
        wr8(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_00093fd4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CGameSettings14GetControlModeEv @ 00093fd8 (arm) */
void fn_00093fd8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00093fd8:;
    {
        cpu->r[0] = rd8(cpu->r[0] + + 0x4u);
    }
L_00093fdc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CGameSettings15SetControlCountEi @ 00093fe0 (arm) */
void fn_00093fe0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00093fe0:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[1]);
    }
L_00093fe4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CGameSettings15GetControlCountEv @ 00093fe8 (arm) */
void fn_00093fe8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00093fe8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_00093fec:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CGameSettings15SetMinimapStyleEi @ 00093ff0 (arm) */
void fn_00093ff0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00093ff0:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[1]);
    }
L_00093ff4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CGameSettings15GetMinimapStyleEv @ 00093ff8 (arm) */
void fn_00093ff8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00093ff8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x14u);
    }
L_00093ffc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CGameSettings11SetEventWonEii @ 00094000 (arm) */
void fn_00094000(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00094000:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 3, 31u, &shc), 0, 0);
    }
L_00094004:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 31u, &shc); cpu->r[3] = v;
    }
L_00094008:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_0009400c:;
    {
        uint32_t v = cpu->r[1] & 0x00000001u; cpu->r[1] = v;
    }
L_00094010:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], shifter(cpu->r[12], 1, 1u, &shc), 0, 0);
    }
L_00094014:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000060u, 0, 0);
    }
L_00094018:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 0);
    }
L_0009401c:;
    {
        cpu->r[0] = rd8(cpu->r[12] + + 0x4u);
    }
L_00094020:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 2, 2u, &shc), cpu->r[2], 1, 0);
    }
L_00094024:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00094028:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000007u, 0, 0);
    }
L_0009402c:;
    {
        uint32_t v = cpu->r[0] | shifter(cpu->r[2], 2, (cpu->r[3] & 0xffu), &shc); cpu->r[3] = v;
    }
L_00094030:;
    {
        wr8(cpu->r[12] + + 0x4u, cpu->r[3]);
    }
L_00094034:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CGameSettings10IsEventWonEii @ 00094038 (arm) */
void fn_00094038(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00094038:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 3, 31u, &shc), 0, 0);
    }
L_0009403c:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 31u, &shc); cpu->r[3] = v;
    }
L_00094040:;
    {
        uint32_t v = cpu->r[12] & 0x00000001u; cpu->r[1] = v;
    }
L_00094044:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[12], 1, 1u, &shc), 0, 0);
    }
L_00094048:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 0);
    }
L_0009404c:;
    {
        cpu->r[0] = rd8(cpu->r[0] + + 0x64u);
    }
L_00094050:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 2, 2u, &shc), cpu->r[2], 1, 0);
    }
L_00094054:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000007u, 0, 0);
    }
L_00094058:;
    {
        uint32_t v = shifter(cpu->r[0], 1, (cpu->r[3] & 0xffu), &shc); cpu->r[0] = v;
    }
L_0009405c:;
    {
        uint32_t v = cpu->r[0] & 0x00000001u; cpu->r[0] = v;
    }
L_00094060:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CGameSettings24ApplyPerformanceSettingsEv @ 00094064 (arm) */
void fn_00094064(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00094064:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00094068:;
    {
        cpu->r[2] = 0x00000003u;
    }
L_0009406c:;
    {
        wr8(cpu->r[0] + + 0x1du, cpu->r[3]);
    }
L_00094070:;
    {
        wr16(cpu->r[0] + + 0x12u, cpu->r[2]);
    }
L_00094074:;
    {
        cpu->r[2] = 0x00000064u;
    }
L_00094078:;
    {
        wr8(cpu->r[0] + + 0xdu, cpu->r[3]);
    }
L_0009407c:;
    {
        wr8(cpu->r[0] + + 0x1cu, cpu->r[2]);
    }
L_00094080:;
    {
        wr8(cpu->r[0] + + 0xeu, cpu->r[3]);
    }
L_00094084:;
    {
        wr8(cpu->r[0] + + 0xfu, cpu->r[3]);
    }
L_00094088:;
    {
        wr8(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_0009408c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CGameSettings9SaveFlagsERj @ 00094090 (arm) */
void fn_00094090(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00094090:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0xcu);
    }
L_00094094:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
    }
L_00094098:;
    {
        cpu->r[12] = rd8(cpu->r[0] + + 0xdu);
    }
L_0009409c:;
    {
        cpu->r[4] = rd8(cpu->r[0] + + 0x4u);
    }
L_000940a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000940a4:;
    {
        cpu->r[2] = rd8(cpu->r[0] + + 0xeu);
    }
L_000940a8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = cpu->r[3];
        }
    }
L_000940ac:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = 0x00000004u;
        }
    }
L_000940b0:;
    {
        uint32_t v = cpu->r[4] & 0x00000003u; cpu->r[4] = v;
    }
L_000940b4:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000940b8:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0xfu);
    }
L_000940bc:;
    {
        uint32_t v = cpu->r[5] | cpu->r[4]; cpu->r[4] = v;
    }
L_000940c0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = 0x00000008u;
        }
    }
L_000940c4:;
    {
        cpu->r[5] = rd8(cpu->r[0] + + 0x10u);
    }
L_000940c8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_000940cc:;
    {
        uint32_t v = cpu->r[12] | cpu->r[4]; cpu->r[12] = v;
    }
L_000940d0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000010u;
        }
    }
L_000940d4:;
    {
        cpu->r[4] = rd8(cpu->r[0] + + 0x11u);
    }
L_000940d8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000940dc:;
    {
        uint32_t v = cpu->r[2] | cpu->r[12]; cpu->r[2] = v;
    }
L_000940e0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000020u;
        }
    }
L_000940e4:;
    {
        cpu->r[12] = rd16(cpu->r[0] + + 0x12u);
    }
L_000940e8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_000940ec:;
    {
        uint32_t v = cpu->r[3] | cpu->r[2]; cpu->r[3] = v;
    }
L_000940f0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = 0x00000040u;
        }
    }
L_000940f4:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_000940f8:;
    {
        uint32_t v = cpu->r[5] | cpu->r[3]; cpu->r[5] = v;
    }
L_000940fc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = 0x00000080u;
        }
    }
L_00094100:;
    {
        uint32_t v = cpu->r[12] & 0x00000007u; cpu->r[12] = v;
    }
L_00094104:;
    {
        uint32_t v = cpu->r[4] | cpu->r[5]; cpu->r[4] = v;
    }
L_00094108:;
    {
        uint32_t v = cpu->r[4] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[12] = v;
    }
L_0009410c:;
    {
        wr32(cpu->r[1], cpu->r[12]);
    }
L_00094110:;
    {
        cpu->r[2] = rd8(cpu->r[0] + + 0x1cu);
    }
L_00094114:;
    {
        uint32_t v = cpu->r[2] & 0x0000007fu; cpu->r[2] = v;
    }
L_00094118:;
    {
        uint32_t v = cpu->r[12] | shifter(cpu->r[2], 2, 11u, &shc); cpu->r[2] = v;
    }
L_0009411c:;
    {
        wr32(cpu->r[1], cpu->r[2]);
    }
L_00094120:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x1du);
    }
L_00094124:;
    {
        uint32_t v = cpu->r[3] & 0x0000000fu; cpu->r[3] = v;
    }
L_00094128:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[3], 2, 18u, &shc); cpu->r[3] = v;
    }
L_0009412c:;
    {
        wr32(cpu->r[1], cpu->r[3]);
    }
L_00094130:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x20u);
    }
L_00094134:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000032u, 1, 0);
    }
L_00094138:;
    {
        uint32_t v = cpu->r[2] & 0x0000003fu; cpu->r[2] = v;
    }
L_0009413c:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[2], 2, 22u, &shc); cpu->r[3] = v;
    }
L_00094140:;
    {
        wr32(cpu->r[1], cpu->r[3]);
    }
L_00094144:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[13] += 8u;
    }
L_00094148:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CGameSettings9LoadFlagsEj @ 0009414c (arm) */
void fn_0009414c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0009414c:;
    {
        cpu->r[3] = (cpu->r[1] >> 22) & 0x3fu;
    }
L_00094150:;
    {
        uint32_t v = cpu->r[1] & 0x00000003u; cpu->r[2] = v;
    }
L_00094154:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000032u, 0, 0);
    }
L_00094158:;
    {
        wr8(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_0009415c:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[3]);
    }
L_00094160:;
    {
        cpu->r[3] = (cpu->r[1] >> 2) & 0x1u;
    }
L_00094164:;
    {
        wr8(cpu->r[0] + + 0xcu, cpu->r[3]);
    }
L_00094168:;
    {
        cpu->r[3] = (cpu->r[1] >> 3) & 0x1u;
    }
L_0009416c:;
    {
        wr8(cpu->r[0] + + 0xdu, cpu->r[3]);
    }
L_00094170:;
    {
        cpu->r[3] = (cpu->r[1] >> 4) & 0x1u;
    }
L_00094174:;
    {
        wr8(cpu->r[0] + + 0xeu, cpu->r[3]);
    }
L_00094178:;
    {
        cpu->r[3] = (cpu->r[1] >> 5) & 0x1u;
    }
L_0009417c:;
    {
        wr8(cpu->r[0] + + 0xfu, cpu->r[3]);
    }
L_00094180:;
    {
        cpu->r[3] = (cpu->r[1] >> 6) & 0x1u;
    }
L_00094184:;
    {
        wr8(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_00094188:;
    {
        cpu->r[3] = (cpu->r[1] >> 7) & 0x1u;
    }
L_0009418c:;
    {
        wr8(cpu->r[0] + + 0x11u, cpu->r[3]);
    }
L_00094190:;
    {
        cpu->r[3] = (cpu->r[1] >> 8) & 0x7u;
    }
L_00094194:;
    {
        wr16(cpu->r[0] + + 0x12u, cpu->r[3]);
    }
L_00094198:;
    {
        cpu->r[3] = (cpu->r[1] >> 11) & 0x7fu;
    }
L_0009419c:;
    {
        cpu->r[1] = (cpu->r[1] >> 18) & 0xfu;
    }
L_000941a0:;
    {
        wr8(cpu->r[0] + + 0x1cu, cpu->r[3]);
    }
L_000941a4:;
    {
        wr8(cpu->r[0] + + 0x1du, cpu->r[1]);
    }
L_000941a8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CGameSettings15wasTutorialSeenEi @ 000941ac (arm) */
void fn_000941ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_000941ac:;
    {
        cpu->r[3] = 0x00002094u;
    }
L_000941b0:;
    {
        cpu->r[12] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000941b4:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_000941b8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000941f4;
        }
    }
L_000941bc:;
    {
        cpu->r[3] = 0x00002098u;
    }
L_000941c0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000941c4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_000941c8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00002080u, 0, 0);
        }
    }
L_000941cc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_000941d0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000001cu, 0, 0);
        }
    }
L_000941d4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000941e8;
        }
    }
L_000941d8:;
    {
        goto L_000941fc;
    }
L_000941dc:;
    {
        uint32_t wb_tmp = cpu->r[0] + 0x00000004u;
        cpu->r[2] = rd32(cpu->r[0]);
        cpu->r[0] = wb_tmp;
    }
L_000941e0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_000941e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_000941fc;
        }
    }
L_000941e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000941ec:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_000941f0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_000941dc;
        }
    }
L_000941f4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_000941f8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_000941fc:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00094200:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CGameSettings18markTutorialAsSeenEi @ 00094204 (arm) */
void fn_00094204(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00094204:;
    {
        cpu->r[2] = 0x00002094u;
    }
L_00094208:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_0009420c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00094210:;
    {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[3]);
    }
L_00094214:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000820u, 0, 0);
    }
L_00094218:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0009421c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00094220:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_00094224:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CGameSettingsC1Ev @ 00094228 (arm) */
void fn_00094228(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00094228:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0009422c:;
    {
        cpu->r[12] = 0x00000064u;
    }
L_00094230:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
    }
L_00094234:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[12]);
    }
L_00094238:;
    {
        cpu->r[4] = (~0x00000000u);
    }
L_0009423c:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[12]);
    }
L_00094240:;
    {
        cpu->r[5] = 0x00000002u;
    }
L_00094244:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[12]);
    }
L_00094248:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[12]);
    }
L_0009424c:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00094250:;
    {
        wr8(cpu->r[0] + + 0xfu, cpu->r[2]);
    }
L_00094254:;
    {
        cpu->r[6] = 0x00000032u;
    }
L_00094258:;
    {
        wr16(cpu->r[0] + + 0x12u, cpu->r[1]);
    }
L_0009425c:;
    {
        cpu->r[12] = 0x00000005u;
    }
L_00094260:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00094264:;
    {
        wr32(cpu->r[0] + + 0x30u, cpu->r[6]);
    }
L_00094268:;
    {
        wr8(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_0009426c:;
    {
        wr8(cpu->r[0] + + 0xcu, cpu->r[1]);
    }
L_00094270:;
    {
        wr8(cpu->r[0] + + 0xdu, cpu->r[1]);
    }
L_00094274:;
    {
        wr8(cpu->r[0] + + 0xeu, cpu->r[1]);
    }
L_00094278:;
    {
        wr8(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_0009427c:;
    {
        wr8(cpu->r[0] + + 0x11u, cpu->r[2]);
    }
L_00094280:;
    {
        wr8(cpu->r[0] + + 0x18u, cpu->r[2]);
    }
L_00094284:;
    {
        wr8(cpu->r[0] + + 0x19u, cpu->r[2]);
    }
L_00094288:;
    {
        wr8(cpu->r[0] + + 0x1au, cpu->r[2]);
    }
L_0009428c:;
    {
        wr8(cpu->r[0] + + 0x1bu, cpu->r[2]);
    }
L_00094290:;
    {
        wr32(cpu->r[0] + + 0x34u, cpu->r[2]);
    }
L_00094294:;
    {
        wr8(cpu->r[0] + + 0x38u, cpu->r[2]);
    }
L_00094298:;
    {
        wr8(cpu->r[0] + + 0x39u, cpu->r[2]);
    }
L_0009429c:;
    {
        wr8(cpu->r[0] + + 0x3au, cpu->r[2]);
    }
L_000942a0:;
    {
        wr8(cpu->r[0] + + 0x3bu, cpu->r[2]);
    }
L_000942a4:;
    {
        wr8(cpu->r[0] + + 0x3cu, cpu->r[2]);
    }
L_000942a8:;
    {
        wr8(cpu->r[0] + + 0x3du, cpu->r[2]);
    }
L_000942ac:;
    {
        wr32(cpu->r[0], cpu->r[4]);
    }
L_000942b0:;
    {
        wr32(cpu->r[0] + + 0x88u, cpu->r[4]);
    }
L_000942b4:;
    {
        wr32(cpu->r[0] + + 0x8cu, cpu->r[2]);
    }
L_000942b8:;
    {
        wr32(cpu->r[0] + + 0x44u, cpu->r[2]);
    }
L_000942bc:;
    {
        wr32(cpu->r[0] + + 0x1ecu, cpu->r[2]);
    }
L_000942c0:;
    {
        wr32(cpu->r[0] + + 0x1f0u, cpu->r[2]);
    }
L_000942c4:;
    {
        wr8(cpu->r[0] + + 0x49u, cpu->r[2]);
    }
L_000942c8:;
    {
        wr8(cpu->r[0] + + 0x4au, cpu->r[2]);
    }
L_000942cc:;
    {
        wr8(cpu->r[0] + + 0x4bu, cpu->r[2]);
    }
L_000942d0:;
    {
        wr8(cpu->r[0] + + 0x4cu, cpu->r[2]);
    }
L_000942d4:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[5]);
    }
L_000942d8:;
    {
        wr32(cpu->r[0] + + 0x54u, cpu->r[12]);
    }
L_000942dc:;
    {
        wr8(cpu->r[0] + + 0x3eu, cpu->r[1]);
    }
L_000942e0:;
    {
        wr32(cpu->r[0] + + 0x98u, cpu->r[4]);
    }
L_000942e4:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_000942e8:;
    {
        wr8(cpu->r[0] + + 0x4du, cpu->r[2]);
    }
L_000942ec:;
    {
        wr8(cpu->r[0] + + 0x4eu, cpu->r[2]);
    }
L_000942f0:;
    {
        wr8(cpu->r[0] + + 0x4fu, cpu->r[2]);
    }
L_000942f4:;
    {
        wr8(cpu->r[0] + + 0x50u, cpu->r[2]);
    }
L_000942f8:;
    {
        wr32(cpu->r[0] + + 0x90u, cpu->r[2]);
    }
L_000942fc:;
    {
        wr32(cpu->r[0] + + 0x94u, cpu->r[2]);
    }
L_00094300:;
    {
        wr32(cpu->r[0] + + 0x60u, cpu->r[2]);
    }
L_00094304:;
    {
        wr8(cpu->r[0] + + 0x48u, cpu->r[5]);
    }
L_00094308:;
    {
        wr32(cpu->r[0] + + 0x64u, cpu->r[2]);
    }
L_0009430c:;
    {
        wr32(cpu->r[0] + + 0x68u, cpu->r[2]);
    }
L_00094310:;
    {
        wr32(cpu->r[0] + + 0x6cu, cpu->r[2]);
    }
L_00094314:;
    {
        wr32(cpu->r[0] + + 0x70u, cpu->r[2]);
    }
L_00094318:;
    {
        wr32(cpu->r[0] + + 0x74u, cpu->r[2]);
    }
L_0009431c:;
    {
        wr32(cpu->r[0] + + 0x78u, cpu->r[2]);
    }
L_00094320:;
    {
        wr32(cpu->r[0] + + 0x7cu, cpu->r[2]);
    }
L_00094324:;
    {
        wr16(cpu->r[0] + + 0x80u, cpu->r[2]);
    }
L_00094328:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[13] += 12u;
    }
L_0009432c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CGameSettingsC2Ev @ 00094330 (arm) */
void fn_00094330(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00094330:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00094334:;
    {
        cpu->r[12] = 0x00000064u;
    }
L_00094338:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
    }
L_0009433c:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[12]);
    }
L_00094340:;
    {
        cpu->r[4] = (~0x00000000u);
    }
L_00094344:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[12]);
    }
L_00094348:;
    {
        cpu->r[5] = 0x00000002u;
    }
L_0009434c:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[12]);
    }
L_00094350:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[12]);
    }
L_00094354:;
    {
        cpu->r[1] = 0x00000004u;
    }
L_00094358:;
    {
        wr8(cpu->r[0] + + 0xfu, cpu->r[2]);
    }
L_0009435c:;
    {
        cpu->r[6] = 0x00000032u;
    }
L_00094360:;
    {
        wr16(cpu->r[0] + + 0x12u, cpu->r[1]);
    }
L_00094364:;
    {
        cpu->r[12] = 0x00000005u;
    }
L_00094368:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0009436c:;
    {
        wr32(cpu->r[0] + + 0x30u, cpu->r[6]);
    }
L_00094370:;
    {
        wr8(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_00094374:;
    {
        wr8(cpu->r[0] + + 0xcu, cpu->r[1]);
    }
L_00094378:;
    {
        wr8(cpu->r[0] + + 0xdu, cpu->r[1]);
    }
L_0009437c:;
    {
        wr8(cpu->r[0] + + 0xeu, cpu->r[1]);
    }
L_00094380:;
    {
        wr8(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_00094384:;
    {
        wr8(cpu->r[0] + + 0x11u, cpu->r[2]);
    }
L_00094388:;
    {
        wr8(cpu->r[0] + + 0x18u, cpu->r[2]);
    }
L_0009438c:;
    {
        wr8(cpu->r[0] + + 0x19u, cpu->r[2]);
    }
L_00094390:;
    {
        wr8(cpu->r[0] + + 0x1au, cpu->r[2]);
    }
L_00094394:;
    {
        wr8(cpu->r[0] + + 0x1bu, cpu->r[2]);
    }
L_00094398:;
    {
        wr32(cpu->r[0] + + 0x34u, cpu->r[2]);
    }
L_0009439c:;
    {
        wr8(cpu->r[0] + + 0x38u, cpu->r[2]);
    }
L_000943a0:;
    {
        wr8(cpu->r[0] + + 0x39u, cpu->r[2]);
    }
L_000943a4:;
    {
        wr8(cpu->r[0] + + 0x3au, cpu->r[2]);
    }
L_000943a8:;
    {
        wr8(cpu->r[0] + + 0x3bu, cpu->r[2]);
    }
L_000943ac:;
    {
        wr8(cpu->r[0] + + 0x3cu, cpu->r[2]);
    }
L_000943b0:;
    {
        wr8(cpu->r[0] + + 0x3du, cpu->r[2]);
    }
L_000943b4:;
    {
        wr32(cpu->r[0], cpu->r[4]);
    }
L_000943b8:;
    {
        wr32(cpu->r[0] + + 0x88u, cpu->r[4]);
    }
L_000943bc:;
    {
        wr32(cpu->r[0] + + 0x8cu, cpu->r[2]);
    }
L_000943c0:;
    {
        wr32(cpu->r[0] + + 0x44u, cpu->r[2]);
    }
L_000943c4:;
    {
        wr32(cpu->r[0] + + 0x1ecu, cpu->r[2]);
    }
L_000943c8:;
    {
        wr32(cpu->r[0] + + 0x1f0u, cpu->r[2]);
    }
L_000943cc:;
    {
        wr8(cpu->r[0] + + 0x49u, cpu->r[2]);
    }
L_000943d0:;
    {
        wr8(cpu->r[0] + + 0x4au, cpu->r[2]);
    }
L_000943d4:;
    {
        wr8(cpu->r[0] + + 0x4bu, cpu->r[2]);
    }
L_000943d8:;
    {
        wr8(cpu->r[0] + + 0x4cu, cpu->r[2]);
    }
L_000943dc:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[5]);
    }
L_000943e0:;
    {
        wr32(cpu->r[0] + + 0x54u, cpu->r[12]);
    }
L_000943e4:;
    {
        wr8(cpu->r[0] + + 0x3eu, cpu->r[1]);
    }
L_000943e8:;
    {
        wr32(cpu->r[0] + + 0x98u, cpu->r[4]);
    }
L_000943ec:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_000943f0:;
    {
        wr8(cpu->r[0] + + 0x4du, cpu->r[2]);
    }
L_000943f4:;
    {
        wr8(cpu->r[0] + + 0x4eu, cpu->r[2]);
    }
L_000943f8:;
    {
        wr8(cpu->r[0] + + 0x4fu, cpu->r[2]);
    }
L_000943fc:;
    {
        wr8(cpu->r[0] + + 0x50u, cpu->r[2]);
    }
L_00094400:;
    {
        wr32(cpu->r[0] + + 0x90u, cpu->r[2]);
    }
L_00094404:;
    {
        wr32(cpu->r[0] + + 0x94u, cpu->r[2]);
    }
L_00094408:;
    {
        wr32(cpu->r[0] + + 0x60u, cpu->r[2]);
    }
L_0009440c:;
    {
        wr8(cpu->r[0] + + 0x48u, cpu->r[5]);
    }
L_00094410:;
    {
        wr32(cpu->r[0] + + 0x64u, cpu->r[2]);
    }
L_00094414:;
    {
        wr32(cpu->r[0] + + 0x68u, cpu->r[2]);
    }
L_00094418:;
    {
        wr32(cpu->r[0] + + 0x6cu, cpu->r[2]);
    }
L_0009441c:;
    {
        wr32(cpu->r[0] + + 0x70u, cpu->r[2]);
    }
L_00094420:;
    {
        wr32(cpu->r[0] + + 0x74u, cpu->r[2]);
    }
L_00094424:;
    {
        wr32(cpu->r[0] + + 0x78u, cpu->r[2]);
    }
L_00094428:;
    {
        wr32(cpu->r[0] + + 0x7cu, cpu->r[2]);
    }
L_0009442c:;
    {
        wr16(cpu->r[0] + + 0x80u, cpu->r[2]);
    }
L_00094430:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        cpu->r[13] += 12u;
    }
L_00094434:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CGameSettings5ResetEv @ 00094438 (arm) */
void fn_00094438(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00094438:;
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
L_0009443c:;
    {
        cpu->r[6] = rd32(0x00094444u + + 0x3d0u);
    }
L_00094440:;
    {
        cpu->r[7] = rd32(0x00094448u + + 0x3d0u);
    }
L_00094444:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00094448:;
    {
        cpu->r[6] = add_flags(cpu, 0x00094450u, cpu->r[6], 0, 0);
    }
L_0009444c:;
    {
        wr8(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_00094450:;
    {
        cpu->r[3] = 0x00000004u;
    }
L_00094454:;
    {
        wr16(cpu->r[0] + + 0x12u, cpu->r[3]);
    }
L_00094458:;
    {
        cpu->r[8] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_0009445c:;
    {
        cpu->r[3] = 0x00000064u;
    }
L_00094460:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[3]);
    }
L_00094464:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00094468:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0009446c:;
    {
        wr8(cpu->r[0] + + 0xeu, cpu->r[2]);
    }
L_00094470:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_00094474:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00094478:;
    {
        wr8(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_0009447c:;
    {
        cpu->r[12] = 0x00000002u;
    }
L_00094480:;
    {
        wr8(cpu->r[4] + + 0xdu, cpu->r[2]);
    }
L_00094484:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000049u, 0, 0);
    }
L_00094488:;
    {
        wr8(cpu->r[4] + + 0xfu, cpu->r[5]);
    }
L_0009448c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000007u, 0, 0);
    }
L_00094490:;
    {
        wr8(cpu->r[4] + + 0x10u, cpu->r[5]);
    }
L_00094494:;
    {
        wr8(cpu->r[4] + + 0x11u, cpu->r[5]);
    }
L_00094498:;
    {
        wr8(cpu->r[4] + + 0x18u, cpu->r[5]);
    }
L_0009449c:;
    {
        wr8(cpu->r[4] + + 0x19u, cpu->r[5]);
    }
L_000944a0:;
    {
        wr8(cpu->r[4] + + 0x1au, cpu->r[5]);
    }
L_000944a4:;
    {
        wr8(cpu->r[4] + + 0x1bu, cpu->r[5]);
    }
L_000944a8:;
    {
        wr8(cpu->r[3] + + 0x4cdu, cpu->r[12]);
    }
L_000944ac:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[5]);
    }
L_000944b0:;
    {
        cpu->r[14] = 0x000944b4u; imp_memset(cpu); /* memset */
    }
L_000944b4:;
    {
        cpu->r[2] = rd32(cpu->r[8]);
    }
L_000944b8:;
    {
        cpu->r[3] = 0x00006f97u;
    }
L_000944bc:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_000944c0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x96f9u << 16);
    }
L_000944c4:;
    {
        wr32(cpu->r[4] + + 0x88u, cpu->r[1]);
    }
L_000944c8:;
    {
        cpu->r[8] = rd32(cpu->r[2] + + 0x43cu);
    }
L_000944cc:;
    {
        cpu->r[1] = 0x00001c4cu;
    }
L_000944d0:;
    {
        cpu->r[14] = rd32(cpu->r[2] + + 0x438u);
    }
L_000944d4:;
    {
        wr32(cpu->r[4] + + 0x8cu, cpu->r[5]);
    }
L_000944d8:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], cpu->r[14], 1, 0);
    }
L_000944dc:;
    {
        wr32(cpu->r[2] + cpu->r[1], cpu->r[5]);
    }
L_000944e0:;
    {
        cpu->r[2] = 0x00000005u;
    }
L_000944e4:;
    {
        wr32(cpu->r[4] + + 0x84u, cpu->r[5]);
    }
L_000944e8:;
    {
        uint32_t v = shifter(cpu->r[8], 1, 2u, &shc); cpu->r[8] = v;
    }
L_000944ec:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[2]);
    }
L_000944f0:;
    {
        uint32_t v = cpu->r[3] * cpu->r[8]; cpu->r[8] = v;
    }
L_000944f4:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[5], 1, 1);
    }
L_000944f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00094548;
        }
    }
L_000944fc:;
    {
        cpu->r[12] = cpu->r[5];
    }
L_00094500:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00094504:;
    {
        cpu->r[10] = 0x0000009cu;
    }
L_00094508:;
    {
        cpu->r[5] = (~0xc0000000u);
    }
L_0009450c:;
    {
        cpu->r[1] = cpu->r[12];
    }
L_00094510:;
    {
        uint32_t v = cpu->r[10] * cpu->r[12] + cpu->r[14]; cpu->r[12] = v;
    }
L_00094514:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00094518:;
    {
        cpu->r[3] = cpu->r[12];
    }
L_0009451c:;
    {
        wr32(cpu->r[12] + + 0x18u, cpu->r[5]);
    }
L_00094520:;
    {
        wr32(cpu->r[12] + + 0x1cu, cpu->r[1]);
    }
L_00094524:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00094528:;
    {
        wr8(cpu->r[3] + + 0x54u, cpu->r[1]);
    }
L_0009452c:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000000au, 1, 1);
    }
L_00094530:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00094534:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00094524;
        }
    }
L_00094538:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_0009453c:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[0], 1, 1);
    }
L_00094540:;
    {
        cpu->r[12] = cpu->r[0];
    }
L_00094544:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00094510;
        }
    }
L_00094548:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0009454c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00094550:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[5]);
    }
L_00094554:;
    {
        wr8(cpu->r[4] + + 0x38u, cpu->r[5]);
    }
L_00094558:;
    {
        cpu->r[14] = 0x0009455cu; fn_00094064(cpu);
    }
L_0009455c:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_00094560:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00094564:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00094568:;
    {
        wr32(cpu->r[4] + + 0x90u, cpu->r[5]);
    }
L_0009456c:;
    {
        wr8(cpu->r[4] + + 0x3eu, cpu->r[2]);
    }
L_00094570:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_00094574:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[5]);
    }
L_00094578:;
    {
        wr32(cpu->r[4] + + 0x98u, cpu->r[2]);
    }
L_0009457c:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[5]);
    }
L_00094580:;
    {
        wr32(cpu->r[4] + + 0x5cu, cpu->r[5]);
    }
L_00094584:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x44u);
    }
L_00094588:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0009458c:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[0]);
    }
L_00094590:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00094594:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000064u, 1, 1);
    }
L_00094598:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00094584;
        }
    }
L_0009459c:;
    {
        cpu->r[10] = cpu->r[1];
    }
L_000945a0:;
    {
        cpu->r[5] = cpu->r[4];
    }
L_000945a4:;
    {
        cpu->r[14] = cpu->r[4];
    }
L_000945a8:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_000945ac:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_000945b0:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[1]);
    }
L_000945b4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000945b8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[4], cpu->r[10], 0, 0);
    }
L_000945bc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[14], cpu->r[3], 0, 0);
    }
L_000945c0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[8], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_000945c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_000945c8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_000945cc:;
    {
        wr32(cpu->r[12] + + 0x9cu, cpu->r[2]);
    }
L_000945d0:;
    {
        wr8(cpu->r[1] + + 0x1bcu, cpu->r[0]);
    }
L_000945d4:;
    {
        wr8(cpu->r[1] + + 0x15cu, cpu->r[0]);
    }
L_000945d8:;
    {
        wr8(cpu->r[1] + + 0x18cu, cpu->r[2]);
    }
L_000945dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000945bc;
        }
    }
L_000945e0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000010u, 0, 0);
    }
L_000945e4:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000004u, 0, 0);
    }
L_000945e8:;
    {
        sub_flags(cpu, cpu->r[10], 0x000000c0u, 1, 1);
    }
L_000945ec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000945b4;
        }
    }
L_000945f0:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_000945f4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_000945f8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x1ecu);
    }
L_000945fc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_00094600:;
    {
        wr8(cpu->r[0] + cpu->r[3], cpu->r[1]);
    }
L_00094604:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x1ecu);
    }
L_00094608:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_0009460c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_00094610:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_00094614:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000003cu, 1, 1);
    }
L_00094618:;
    {
        wr8(cpu->r[0] + + 0x1u, cpu->r[1]);
    }
L_0009461c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000945f8;
        }
    }
L_00094620:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_00094624:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000190u, 1, 1);
    }
L_00094628:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000945f4;
        }
    }
L_0009462c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_00094630:;
    {
        cpu->r[2] = 0x00008c78u;
    }
L_00094634:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00094638:;
    {
        cpu->r[1] = rd8(cpu->r[3] + cpu->r[2]);
    }
L_0009463c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00094640:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00094664;
        }
    }
L_00094644:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00008700u, 0, 0);
    }
L_00094648:;
    {
        cpu->r[0] = 0x00000064u;
    }
L_0009464c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00094650:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000074u, 0, 0);
    }
L_00094654:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00094658:;
    {
        uint32_t wb_tmp = cpu->r[2] + 0x0000002cu;
        wr32(cpu->r[2], cpu->r[0]);
        cpu->r[2] = wb_tmp;
    }
L_0009465c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_00094660:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00094654;
        }
    }
L_00094664:;
    {
        cpu->r[14] = 0x00094668u; fn_000a5b24(cpu);
    }
L_00094668:;
    {
        cpu->r[10] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_0009466c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00094670:;
    {
        cpu->r[2] = 0x00000030u;
    }
L_00094674:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_00094678:;
    {
        cpu->r[0] = rd32(cpu->r[10]);
    }
L_0009467c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00008600u, 0, 0);
    }
L_00094680:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000a8u, 0, 0);
    }
L_00094684:;
    {
        cpu->r[14] = 0x00094688u; imp_memset(cpu); /* memset */
    }
L_00094688:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0009468c:;
    {
        cpu->r[0] = 0x000086acu;
    }
L_00094690:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00094694:;
    {
        cpu->r[2] = 0x00000064u;
    }
L_00094698:;
    {
        wr8(cpu->r[3] + cpu->r[0], cpu->r[8]);
    }
L_0009469c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000004u, 1, 0);
    }
L_000946a0:;
    {
        wr8(cpu->r[3] + cpu->r[0], cpu->r[8]);
    }
L_000946a4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x1f0u);
    }
L_000946a8:;
    {
        cpu->r[14] = 0x000946acu; imp_memset(cpu); /* memset */
    }
L_000946ac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1f0u);
    }
L_000946b0:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_000946b4:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_000946b8:;
    {
        cpu->r[2] = 0x0000001eu;
    }
L_000946bc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000064u, 0, 0);
    }
L_000946c0:;
    {
        wr8(cpu->r[3] + + 0xbu, cpu->r[12]);
    }
L_000946c4:;
    {
        cpu->r[14] = 0x000946c8u; imp_memset(cpu); /* memset */
    }
L_000946c8:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_000946cc:;
    {
        cpu->r[12] = 0x00000080u;
    }
L_000946d0:;
    {
        cpu->r[0] = 0x000000bfu;
    }
L_000946d4:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_000946d8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], shifter(cpu->r[8], 2, 1u, &shc), 0, 0);
    }
L_000946dc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[8], shifter(cpu->r[3], 2, 4u, &shc), 0, 0);
    }
L_000946e0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
    }
L_000946e4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_000946e8:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000050u, 1, 1);
    }
L_000946ec:;
    {
        wr8(cpu->r[3] + + 0x1f7u, cpu->r[0]);
    }
L_000946f0:;
    {
        wr8(cpu->r[3] + + 0x1f4u, cpu->r[2]);
    }
L_000946f4:;
    {
        wr8(cpu->r[3] + + 0x1f5u, cpu->r[2]);
    }
L_000946f8:;
    {
        wr8(cpu->r[3] + + 0x1f6u, cpu->r[12]);
    }
L_000946fc:;
    {
        wr8(cpu->r[5] + + 0x224u, cpu->r[1]);
    }
L_00094700:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000031u, 0, 0);
    }
L_00094704:;
    {
        if (cond_test(cpu, 2)) {
        goto L_000946d8;
        }
    }
L_00094708:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_0009470c:;
    {
        cpu->r[1] = 0x00001b8cu;
    }
L_00094710:;
    {
        cpu->r[12] = 0x00001bbdu;
    }
L_00094714:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00094718:;
    {
        cpu->r[14] = (~0x00000000u);
    }
L_0009471c:;
    {
        cpu->r[5] = cpu->r[3];
    }
L_00094720:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_00094724:;
    {
        cpu->r[0] = rd8(cpu->r[2] + cpu->r[1]);
    }
L_00094728:;
    {
        wr8(cpu->r[2] + cpu->r[12], cpu->r[14]);
    }
L_0009472c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x0000002du, 1, 0);
    }
L_00094730:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x000000c0u, 0, 0);
    }
L_00094734:;
    {
        uint32_t v = cpu->r[0] | 0x80000000u; cpu->r[0] = v;
    }
L_00094738:;
    {
        wr8(cpu->r[2] + cpu->r[12], cpu->r[14]);
    }
L_0009473c:;
    {
        wr32(cpu->r[2] + cpu->r[1], cpu->r[0]);
    }
L_00094740:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[3], 0, 0);
    }
L_00094744:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00094748:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00002080u, 0, 0);
    }
L_0009474c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000078u, 1, 1);
    }
L_00094750:;
    {
        wr32(cpu->r[2] + + 0x14u, cpu->r[5]);
    }
L_00094754:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00094740;
        }
    }
L_00094758:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0009475c:;
    {
        cpu->r[0] = 0x00000045u;
    }
L_00094760:;
    {
        wr32(cpu->r[4] + + 0x98u, cpu->r[3]);
    }
L_00094764:;
    {
        cpu->r[8] = 0x00001c38u;
    }
L_00094768:;
    {
        cpu->r[14] = 0x0009476cu; fn_00093f34(cpu);
    }
L_0009476c:;
    {
        cpu->r[6] = rd32(cpu->r[6] + cpu->r[7]);
    }
L_00094770:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x94u);
    }
L_00094774:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00094778:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0009477c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,14);
    }
L_00094780:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_00094784:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00094788:;
    {
        cpu->r[14] = 0x0009478cu; fn_0009fd1c(cpu);
    }
L_0009478c:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_00094790:;
    {
        cpu->r[14] = 0x00094794u; fn_000a062c(cpu);
    }
L_00094794:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_00094798:;
    {
        cpu->r[2] = 0x00001bbfu;
    }
L_0009479c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_000947a0:;
    {
        wr32(cpu->r[4] + + 0x84u, cpu->r[5]);
    }
L_000947a4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[8]);
    }
L_000947a8:;
    {
        wr8(cpu->r[0] + cpu->r[2], cpu->r[1]);
    }
L_000947ac:;
    {
        cpu->r[2] = 0x0000150du;
    }
L_000947b0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_000947b4:;
    {
        wr8(cpu->r[0] + cpu->r[2], cpu->r[5]);
    }
L_000947b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0009480c;
        }
    }
L_000947bc:;
    {
        cpu->r[4] = rd32(cpu->r[3] + + 0xb58u);
    }
L_000947c0:;
    {
        cpu->r[3] = 0x00001c4cu;
    }
L_000947c4:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_000947c8:;
    {
        cpu->r[14] = 0x000947ccu; fn_00096028(cpu);
    }
L_000947cc:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_000947d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0009480c;
        }
    }
L_000947d4:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000947d8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001b80u, 0, 0);
    }
L_000947dc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000du, 0, 0);
    }
L_000947e0:;
    {
        cpu->r[14] = 0x000947e4u; fn_000930e0(cpu);
    }
L_000947e4:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_000947e8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000019c0u, 0, 0);
    }
L_000947ec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000003du, 0, 0);
    }
L_000947f0:;
    {
        cpu->r[14] = 0x000947f4u; fn_000930e0(cpu);
    }
L_000947f4:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_000947f8:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_000947fc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00001b80u, 0, 0);
    }
L_00094800:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_00094804:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000du, 0, 0);
    }
L_00094808:;
    {
        cpu->r[14] = 0x0009480cu; fn_000b0c4c(cpu);
    }
L_0009480c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00094810:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00094814u)) return;
    }
}
