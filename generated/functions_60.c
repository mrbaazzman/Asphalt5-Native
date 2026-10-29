#include "functions.h"

/* _ZN4CCar22UpdateBeforeCollisionsEiPK10RoadStructR11CMultiArrayIPS_E @ 0016ed5c (arm) */
void fn_0016ed5c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0016ed5c:;
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
L_0016ed60:;
    {
        cpu->r[13] -= 32u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
        wr64(cpu->r[13] + 16u, *(uint64_t*)vfp_d(cpu, 10));
        wr64(cpu->r[13] + 24u, *(uint64_t*)vfp_d(cpu, 11));
    }
L_0016ed64:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000d4u, 1, 0);
    }
L_0016ed68:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0016ed6c:;
    {
        cpu->r[5] = rd32(0x0016ed74u + + 0x3bcu);
    }
L_0016ed70:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[1]);
    }
L_0016ed74:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
    }
L_0016ed78:;
    {
        cpu->r[5] = add_flags(cpu, 0x0016ed80u, cpu->r[5], 0, 0);
    }
L_0016ed7c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x33cu);
    }
L_0016ed80:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[3]);
    }
L_0016ed84:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0016ed88:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu, 15) = *(float*)G(0x0016ed90u + + 0x380u);
        }
    }
L_0016ed8c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00001788u;
        }
    }
L_0016ed90:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
        }
    }
L_0016ed94:;
    {
        if (cond_test(cpu, 13)) {
        *(uint32_t*)G(cpu->r[0] + + 0xb0u) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_0016ed98:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + + 0x33cu, cpu->r[2]);
        }
    }
L_0016ed9c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[3]);
        }
    }
L_0016eda0:;
    {
        if (cond_test(cpu, 13)) {
        *(uint32_t*)G(cpu->r[0] + + 0xa8u) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_0016eda4:;
    {
        if (cond_test(cpu, 13)) {
        *(uint32_t*)G(cpu->r[0] + + 0xacu) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_0016eda8:;
    {
        if (cond_test(cpu, 14)) {
        uint32_t v = cpu->r[2] & ~ 0x02000000u; cpu->r[2] = v;
        }
    }
L_0016edac:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
        }
    }
L_0016edb0:;
    {
        cpu->r[14] = 0x0016edb4u; fn_00160c54(cpu);
    }
L_0016edb4:;
    {
        cpu->r[7] = rd8(cpu->r[4] + + 0x5a0u);
    }
L_0016edb8:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0016edbc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016f394;
        }
    }
L_0016edc0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x490u);
    }
L_0016edc4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016edc8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001704d0;
        }
    }
L_0016edcc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x494u);
    }
L_0016edd0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_0016edd4:;
    {
        wr32(cpu->r[4] + + 0x494u, cpu->r[3]);
    }
L_0016edd8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000027u, 1, 1);
    }
L_0016eddc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0016f410;
        }
    }
L_0016ede0:;
    {
        cpu->r[6] = rd32(0x0016ede8u + + 0x354u);
    }
L_0016ede4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016ede8:;
    {
        cpu->r[14] = 0x0016edecu; fn_0015d920(cpu);
    }
L_0016edec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016edf0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016ee1c;
        }
    }
L_0016edf4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_0016edf8:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_0016edfc:;
    {
        cpu->r[3] = 0x00004334u;
    }
L_0016ee00:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_0016ee04:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_0016ee08:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0016ee0c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016ee10:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[13] + + 0x44u);
        }
    }
L_0016ee14:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[3] & ~ 0x00000084u; cpu->r[3] = v;
        }
    }
L_0016ee18:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x44u, cpu->r[3]);
        }
    }
L_0016ee1c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x380u);
    }
L_0016ee20:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0016ee28u + + 0x2ecu);
    }
L_0016ee24:;
    {
        cpu->r[8] = rd32(0x0016ee2cu + + 0x308u);
    }
L_0016ee28:;
    {
        uint32_t v = cpu->r[2] ^ shifter(cpu->r[2], 1, 31u, &shc); cpu->r[3] = v;
    }
L_0016ee2c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[2], 1, 31u, &shc), 1, 0);
    }
L_0016ee30:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00001000u, cpu->r[3], 1, 0);
    }
L_0016ee34:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[3];
    }
L_0016ee38:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_0016ee3c:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0016ee40:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0016ee44:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_0016ee48:;
    {
        vfp_vmul(cpu, 17, 14, 15);
    }
L_0016ee4c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016f270;
        }
    }
L_0016ee50:;
    {
        cpu->r[7] = rd32(0x0016ee58u + + 0x2e0u);
    }
L_0016ee54:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0016ee58:;
    {
        cpu->r[14] = 0x0016ee5cu; fn_00093fd8(cpu);
    }
L_0016ee5c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0016ee60:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_0016ee64:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016ee68:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 16) = *(float*)G(0x0016ee70u + + 0x2a8u);
        }
    }
L_0016ee6c:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu, 16) = *(float*)G(0x0016ee74u + + 0x2a8u);
        }
    }
L_0016ee70:;
    {
        if (cond_test(cpu, 1)) {
        vfp_vmla(cpu, 16, 17, 16);
        }
    }
L_0016ee74:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu, 15) = *(float*)G(0x0016ee7cu + + 0x2a4u);
        }
    }
L_0016ee78:;
    {
        if (cond_test(cpu, 2)) {
        vfp_vmla(cpu, 16, 17, 15);
        }
    }
L_0016ee7c:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[4] + + 0x354u);
    }
L_0016ee80:;
    {
        cpu->r[14] = 0x0016ee88u;
    }
L_0016ee84:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x50u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0016ee88u)) return;
    }
L_0016ee88:;
    {
        cpu->r[14] = 0x0000005au;
    }
L_0016ee8c:;
    {
        cpu->r[3] = 0x0000851fu;
    }
L_0016ee90:;
    {
        cpu->r[1] = 0x00001930u;
    }
L_0016ee94:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x51ebu << 16);
    }
L_0016ee98:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[4], cpu->r[1], 0, 0);
    }
L_0016ee9c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0016eea4u + + 0x280u);
    }
L_0016eea0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[10]);
    }
L_0016eea4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x344u);
    }
L_0016eea8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x340u);
    }
L_0016eeac:;
    {
        uint32_t v = cpu->r[14] * cpu->r[0]; cpu->r[14] = v;
    }
L_0016eeb0:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[14]; cpu->r[11] = (uint32_t)v; cpu->r[0] = (uint32_t)(v >> 32); }
    }
L_0016eeb4:;
    {
        uint32_t v = shifter(cpu->r[14], 1, 31u, &shc); cpu->r[14] = v;
    }
L_0016eeb8:;
    {
        cpu->r[14] = sub_flags(cpu, shifter(cpu->r[0], 1, 5u, &shc), cpu->r[14], 1, 0);
    }
L_0016eebc:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[14];
    }
L_0016eec0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0016eec4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,17), *vfp_s(cpu,15));
    }
L_0016eec8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0016eed0u + + 0x258u);
    }
L_0016eecc:;
    {
        vfp_sync_flags(cpu);
    }
L_0016eed0:;
    {
        if (cond_test(cpu, 5)) {
        *vfp_s(cpu,16) = *vfp_s(cpu,15);
        }
    }
L_0016eed4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0016eedcu + + 0x250u);
    }
L_0016eed8:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_0016eedc:;
    {
        vfp_vmul(cpu, 15, 16, 15);
    }
L_0016eee0:;
    {
        vfp_vmla(cpu, 15, 13, 14);
    }
L_0016eee4:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0016eee8:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[12]);
    }
L_0016eeec:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016f228;
        }
    }
L_0016eef0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0016eef4:;
    {
        cpu->r[0] = 0x00000046u;
    }
L_0016eef8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_0016eefc:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x2a4u);
    }
L_0016ef00:;
    {
        uint32_t v = cpu->r[0] * cpu->r[1]; cpu->r[1] = v;
    }
L_0016ef04:;
    {
        cpu->r[0] = 0x0000192cu;
    }
L_0016ef08:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[1]; cpu->r[14] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_0016ef0c:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 31u, &shc); cpu->r[1] = v;
    }
L_0016ef10:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 1, 5u, &shc), cpu->r[1], 1, 0);
    }
L_0016ef14:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[3]);
    }
L_0016ef18:;
    {
        cpu->r[3] = 0x00001920u;
    }
L_0016ef1c:;
    {
        wr32(cpu->r[4] + + 0x344u, cpu->r[2]);
    }
L_0016ef20:;
    {
        cpu->r[2] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_0016ef24:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0016ef28:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
        }
    }
L_0016ef2c:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[2]);
        }
    }
L_0016ef30:;
    {
        cpu->r[3] = 0x00001740u;
    }
L_0016ef34:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_0016ef38:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016ef3c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd32(cpu->r[4] + + 0x5d4u);
        }
    }
L_0016ef40:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016ef64;
        }
    }
L_0016ef44:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_0016ef48:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_0016ef4c:;
    {
        cpu->r[3] = 0x00004334u;
    }
L_0016ef50:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_0016ef54:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_0016ef58:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0016ef5c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000006u, 1, 1);
    }
L_0016ef60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001705b4;
        }
    }
L_0016ef64:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0016ef68:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016ef6c:;
    {
        { uint32_t v = cpu->r[2] & 0x00000080u; set_nz(cpu, v); }
    }
L_0016ef70:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[2] & ~ 0x00000080u; cpu->r[2] = v;
        }
    }
L_0016ef74:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
        }
    }
L_0016ef78:;
    {
        cpu->r[3] = 0x000016f4u;
    }
L_0016ef7c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016ef80:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0016ef84:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
        }
    }
L_0016ef88:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
        }
    }
L_0016ef8c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016f388;
        }
    }
L_0016ef90:;
    {
        cpu->r[2] = 0x00001f34u;
    }
L_0016ef94:;
    {
        cpu->r[3] = 0x00001738u;
    }
L_0016ef98:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_0016ef9c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016efa0:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[2] + + 0x24u);
    }
L_0016efa4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_0016efa8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
        }
    }
L_0016efac:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_0016efb0:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_0016efb4:;
    {
        cpu->r[3] = 0x00001754u;
    }
L_0016efb8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016efbc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0016efc0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016eff8;
        }
    }
L_0016efc4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x2b0u);
    }
L_0016efc8:;
    {
        cpu->r[0] = 0x0000005fu;
    }
L_0016efcc:;
    {
        cpu->r[1] = 0x0000851fu;
    }
L_0016efd0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_0016efd4:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x51ebu << 16);
    }
L_0016efd8:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_0016efdc:;
    {
        uint32_t v = cpu->r[0] * cpu->r[12]; cpu->r[0] = v;
    }
L_0016efe0:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x364u);
    }
L_0016efe4:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[1] * (int64_t)(int32_t)cpu->r[0]; cpu->r[2] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_0016efe8:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 31u, &shc); cpu->r[0] = v;
    }
L_0016efec:;
    {
        cpu->r[0] = sub_flags(cpu, shifter(cpu->r[3], 1, 5u, &shc), cpu->r[0], 1, 0);
    }
L_0016eff0:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[0], 1, 1);
    }
L_0016eff4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0016f3b4;
        }
    }
L_0016eff8:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0016effc:;
    {
        cpu->r[9] = 0x00001bc8u;
    }
L_0016f000:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_0016f004:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0016f008:;
    {
        cpu->r[2] = rd32(cpu->r[10]);
    }
L_0016f00c:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[9]);
    }
L_0016f010:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0016f014:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_0016f018:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_0016f01c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_0016f020:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0016f024:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_0016f028:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_0016f02c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00170464;
        }
    }
L_0016f030:;
    {
        cpu->r[3] = 0x00001c80u;
    }
L_0016f034:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016f038:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0016f03c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
        }
    }
L_0016f040:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
        }
    }
L_0016f044:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1dcu);
    }
L_0016f048:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_0016f04c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016f298;
        }
    }
L_0016f050:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0016f054:;
    {
        cpu->r[1] = 0x00001788u;
    }
L_0016f058:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x58cu);
    }
L_0016f05c:;
    {
        cpu->r[0] = 0x00001bc8u;
    }
L_0016f060:;
    {
        cpu->r[14] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_0016f064:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_0016f068:;
    {
        cpu->r[12] = rd32(cpu->r[9]);
    }
L_0016f06c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00004700u, 0, 0);
    }
L_0016f070:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000002au, 0, 0);
    }
L_0016f074:;
    {
        uint32_t v = cpu->r[14] & ~ 0x02000000u; cpu->r[14] = v;
    }
L_0016f078:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[14]);
    }
L_0016f07c:;
    {
        cpu->r[1] = 0x000018ecu;
    }
L_0016f080:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_0016f084:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_0016f088:;
    {
        wr32(cpu->r[4] + + 0x198u, cpu->r[3]);
    }
L_0016f08c:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[10]);
    }
L_0016f090:;
    {
        cpu->r[0] = rd32(cpu->r[0] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_0016f094:;
    {
        wr32(cpu->r[4] + + 0x1f8u, cpu->r[3]);
    }
L_0016f098:;
    {
        wr32(cpu->r[4] + + 0x398u, cpu->r[3]);
    }
L_0016f09c:;
    {
        wr32(cpu->r[4] + + 0x39cu, cpu->r[3]);
    }
L_0016f0a0:;
    {
        wr32(cpu->r[4] + + 0x3a0u, cpu->r[3]);
    }
L_0016f0a4:;
    {
        cpu->r[3] = 0x00000008u;
    }
L_0016f0a8:;
    {
        wr32(cpu->r[4] + + 0x380u, cpu->r[10]);
    }
L_0016f0ac:;
    {
        wr32(cpu->r[4] + + 0x608u, cpu->r[10]);
    }
L_0016f0b0:;
    {
        wr32(cpu->r[4] + + 0x620u, cpu->r[10]);
    }
L_0016f0b4:;
    {
        wr32(cpu->r[4] + + 0x33cu, cpu->r[10]);
    }
L_0016f0b8:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[3]);
    }
L_0016f0bc:;
    {
        cpu->r[14] = 0x0016f0c0u; fn_000b0480(cpu);
    }
L_0016f0c0:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_0016f0c4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0016f0c8:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0xffffu << 16);
    }
L_0016f0cc:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x418u);
    }
L_0016f0d0:;
    {
        cpu->r[14] = 0x0016f0d4u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0016f0d4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x364u);
    }
L_0016f0d8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_0016f0dc:;
    {
        wr32(cpu->r[4] + + 0x364u, cpu->r[3]);
    }
L_0016f0e0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_0016f0e4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0016f560;
        }
    }
L_0016f0e8:;
    {
        cpu->r[10] = 0x00001788u;
    }
L_0016f0ec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016f0f0:;
    {
        cpu->r[14] = 0x0016f0f4u; fn_00165d90(cpu);
    }
L_0016f0f4:;
    {
        cpu->r[3] = 0x00000400u;
    }
L_0016f0f8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_0016f0fc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x8000u << 16);
    }
L_0016f100:;
    {
        uint32_t v = cpu->r[2] & cpu->r[3]; cpu->r[3] = v;
    }
L_0016f104:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016f108:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016f458;
        }
    }
L_0016f10c:;
    {
        goto L_0016f154;
    }
L_0016f154:;
    {
        cpu->r[1] = 0x000016b4u;
    }
L_0016f158:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0016f15c:;
    {
        uint32_t v = cpu->r[2] & ~ 0x00000400u; cpu->r[2] = v;
    }
L_0016f160:;
    {
        wr32(cpu->r[4] + + 0x62cu, cpu->r[3]);
    }
L_0016f164:;
    {
        wr8(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_0016f168:;
    {
        cpu->r[1] = 0x00001788u;
    }
L_0016f16c:;
    {
        uint32_t v = cpu->r[2] & ~ 0x80000008u; cpu->r[2] = v;
    }
L_0016f170:;
    {
        wr32(cpu->r[4] + + 0x620u, cpu->r[3]);
    }
L_0016f174:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[2]);
    }
L_0016f178:;
    {
        cpu->r[2] = 0x00001810u;
    }
L_0016f17c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_0016f180:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016f184:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_0016f188:;
    {
        cpu->r[2] = 0x000016b0u;
    }
L_0016f18c:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_0016f190:;
    {
        cpu->r[2] = 0x00001758u;
    }
L_0016f194:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_0016f198:;
    {
        cpu->r[2] = 0x000016a0u;
    }
L_0016f19c:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_0016f1a0:;
    {
        cpu->r[14] = 0x0016f1a4u; fn_001745cc(cpu);
    }
L_0016f1a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016f1a8:;
    {
        cpu->r[14] = 0x0016f1acu; fn_00177ad4(cpu);
    }
L_0016f1ac:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4d4u);
    }
L_0016f1b0:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x1dcu);
    }
L_0016f1b4:;
    {
        cpu->r[14] = 0x0016f1b8u; fn_00171b64(cpu);
    }
L_0016f1b8:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_0016f1bc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0016f1c0:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_0016f1c4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x498u);
    }
L_0016f1c8:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x1dcu);
    }
L_0016f1cc:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_0016f1d0:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[4] + + 0x498u, cpu->r[3]);
        }
    }
L_0016f1d4:;
    {
        add_flags(cpu, cpu->r[10], 0x00000001u, 0, 1);
    }
L_0016f1d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016f468;
        }
    }
L_0016f1dc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016f1e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016f4e4;
        }
    }
L_0016f1e4:;
    {
        cpu->r[6] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0016f1e8:;
    {
        cpu->r[5] = 0x00001bc8u;
    }
L_0016f1ec:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_0016f1f0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0016f1f4:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_0016f1f8:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[5]);
    }
L_0016f1fc:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0016f200:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_0016f204:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_0016f208:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_0016f20c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0016f210:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_0016f214:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_0016f218:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00171178;
        }
    }
L_0016f21c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0016f220:;
    {
        wr8(cpu->r[4] + + 0x250u, cpu->r[3]);
    }
L_0016f224:;
    {
        goto L_0016f3a8;
    }
L_0016f228:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x44u);
    }
L_0016f22c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000044u; set_nz(cpu, v); }
    }
L_0016f230:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016f3d0;
        }
    }
L_0016f234:;
    {
        cpu->r[1] = 0x00001658u;
    }
L_0016f238:;
    {
        cpu->r[12] = 0x0000192cu;
    }
L_0016f23c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_0016f240:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[12]);
    }
L_0016f244:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
    }
L_0016f248:;
    {
        sub_flags(cpu, cpu->r[14], 0x000001f4u, 1, 1);
    }
L_0016f24c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016f4b8;
        }
    }
L_0016f250:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x34cu);
    }
L_0016f254:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000000u, 1, 1);
    }
L_0016f258:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016f4b8;
        }
    }
L_0016f25c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000096u, 0, 0);
    }
L_0016f260:;
    {
        uint32_t v = cpu->r[3] & ~ 0x00000004u; cpu->r[3] = v;
    }
L_0016f264:;
    {
        wr32(cpu->r[4] + cpu->r[12], cpu->r[1]);
    }
L_0016f268:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[3]);
    }
L_0016f26c:;
    {
        goto L_0016ef18;
    }
L_0016f270:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0016f274:;
    {
        cpu->r[14] = 0x0016f278u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0016f278:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016f27c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016ee50;
        }
    }
L_0016f280:;
    {
        cpu->r[7] = rd32(0x0016f288u + - 0x150u);
    }
L_0016f284:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0016f288:;
    {
        cpu->r[14] = 0x0016f28cu; fn_00094228(cpu);
    }
L_0016f28c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0016f290:;
    {
        cpu->r[14] = 0x0016f294u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0016f294:;
    {
        goto L_0016ee54;
    }
L_0016f298:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x498u);
    }
L_0016f29c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016f2a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016f050;
        }
    }
L_0016f2a4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1f8u);
    }
L_0016f2a8:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_0016f2ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016f2bc;
        }
    }
L_0016f2b0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_0016f2b4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0016f2b8:;
    {
        cpu->r[14] = 0x0016f2bcu; fn_00174d70(cpu);
    }
L_0016f2bc:;
    {
        cpu->r[10] = 0x00001788u;
    }
L_0016f2c0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_0016f2c4:;
    {
        { uint32_t v = cpu->r[3] & 0x20000000u; set_nz(cpu, v); }
    }
L_0016f2c8:;
    {
        uint32_t v = cpu->r[3] & ~ 0x00000040u; cpu->r[3] = v;
    }
L_0016f2cc:;
    {
        wr32(cpu->r[4] + cpu->r[10], cpu->r[3]);
    }
L_0016f2d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016f71c;
        }
    }
L_0016f2d4:;
    {
        cpu->r[1] = 0x0000182cu;
    }
L_0016f2d8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_0016f2dc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_0016f2e0:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[2]);
    }
L_0016f2e4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0016f2e8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016f590;
        }
    }
L_0016f2ec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016f2f0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000c4u, 0, 0);
    }
L_0016f2f4:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0016f2f8:;
    {
        wr32(cpu->r[13] + + 0xc4u, cpu->r[5]);
    }
L_0016f2fc:;
    {
        wr32(cpu->r[13] + + 0xc8u, cpu->r[5]);
    }
L_0016f300:;
    {
        wr32(cpu->r[13] + + 0xccu, cpu->r[5]);
    }
L_0016f304:;
    {
        cpu->r[14] = 0x0016f308u; fn_00173920(cpu);
    }
L_0016f308:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_0016f30c:;
    {
        cpu->r[2] = 0x000018ecu;
    }
L_0016f310:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0016f318u + - 0x1c8u);
    }
L_0016f314:;
    {
        wr32(cpu->r[4] + + 0x380u, cpu->r[5]);
    }
L_0016f318:;
    {
        uint32_t v = cpu->r[3] & ~ 0x00001000u; cpu->r[3] = v;
    }
L_0016f31c:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[5]);
    }
L_0016f320:;
    {
        uint32_t v = cpu->r[3] & ~ 0x00000208u; cpu->r[3] = v;
    }
L_0016f324:;
    {
        cpu->r[2] = 0x000016b4u;
    }
L_0016f328:;
    {
        uint32_t v = cpu->r[3] & ~ 0x08000001u; cpu->r[3] = v;
    }
L_0016f32c:;
    {
        wr32(cpu->r[4] + cpu->r[10], cpu->r[3]);
    }
L_0016f330:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0016f334:;
    {
        wr32(cpu->r[4] + + 0x340u, cpu->r[3]);
    }
L_0016f338:;
    {
        cpu->r[3] = 0x000018d0u;
    }
L_0016f33c:;
    {
        wr8(cpu->r[4] + cpu->r[2], cpu->r[5]);
    }
L_0016f340:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x354u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0016f344:;
    {
        wr32(cpu->r[4] + + 0x608u, cpu->r[5]);
    }
L_0016f348:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_0016f34c:;
    {
        cpu->r[3] = 0x0000165cu;
    }
L_0016f350:;
    {
        wr32(cpu->r[4] + + 0x620u, cpu->r[5]);
    }
L_0016f354:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_0016f358:;
    {
        cpu->r[3] = 0x00001660u;
    }
L_0016f35c:;
    {
        wr32(cpu->r[4] + + 0x364u, cpu->r[5]);
    }
L_0016f360:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_0016f364:;
    {
        cpu->r[3] = 0x0000166cu;
    }
L_0016f368:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_0016f36c:;
    {
        cpu->r[3] = 0x000016b0u;
    }
L_0016f370:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_0016f374:;
    {
        cpu->r[3] = 0x00001758u;
    }
L_0016f378:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_0016f37c:;
    {
        cpu->r[3] = 0x000016a0u;
    }
L_0016f380:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
    }
L_0016f384:;
    {
        goto L_0016f3a8;
    }
L_0016f388:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
        }
    }
L_0016f38c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
        }
    }
L_0016f390:;
    {
        goto L_0016ef90;
    }
L_0016f394:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016f398:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_0016f39c:;
    {
        cpu->r[14] = 0x0016f3a0u; fn_001745cc(cpu);
    }
L_0016f3a0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016f3a4:;
    {
        cpu->r[14] = 0x0016f3a8u; fn_00174970(cpu);
    }
L_0016f3a8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000d4u, 0, 0);
    }
L_0016f3ac:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        *(uint64_t*)vfp_d(cpu, 10) = rd64(cpu->r[13] + 16u);
        *(uint64_t*)vfp_d(cpu, 11) = rd64(cpu->r[13] + 24u);
        cpu->r[13] += 32u;
    }
L_0016f3b0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0016f3b4u)) return;
    }
L_0016f3b4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
    }
L_0016f3b8:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 4u, &shc); cpu->r[12] = v;
    }
L_0016f3bc:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[1] * (int64_t)(int32_t)cpu->r[12]; cpu->r[3] = (uint32_t)v; cpu->r[1] = (uint32_t)(v >> 32); }
    }
L_0016f3c0:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 31u, &shc); cpu->r[12] = v;
    }
L_0016f3c4:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[1], 1, 5u, &shc), cpu->r[12], 1, 0);
    }
L_0016f3c8:;
    {
        wr32(cpu->r[4] + + 0x364u, cpu->r[1]);
    }
L_0016f3cc:;
    {
        goto L_0016eff8;
    }
L_0016f3d0:;
    {
        cpu->r[1] = 0x0000192cu;
    }
L_0016f3d4:;
    {
        cpu->r[3] = 0x00001658u;
    }
L_0016f3d8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_0016f3dc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016f3e0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x0000003cu, 1, 0);
    }
L_0016f3e4:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[0]);
    }
L_0016f3e8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_0016f3ec:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = cpu->r[0];
        }
    }
L_0016f3f0:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
        }
    }
L_0016f3f4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_0016f3f8:;
    {
        cpu->r[1] = 0x00000bb8u;
    }
L_0016f3fc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x0000000au;
        }
    }
L_0016f400:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_0016f404:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x0000192cu;
        }
    }
L_0016f408:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[1]);
        }
    }
L_0016f40c:;
    {
        goto L_0016ef18;
    }
L_0016f410:;
    {
        cpu->r[6] = rd32(0x0016f418u + - 0x2dcu);
    }
L_0016f414:;
    {
        cpu->r[8] = 0x00001bc8u;
    }
L_0016f418:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0016f41c:;
    {
        cpu->r[2] = 0x0000000au;
    }
L_0016f420:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0016f424:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0016f428:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_0016f42c:;
    {
        cpu->r[14] = 0x0016f430u; fn_000ba68c(cpu);
    }
L_0016f430:;
    {
        cpu->r[1] = rd32(cpu->r[10]);
    }
L_0016f434:;
    {
        cpu->r[3] = 0x0000433cu;
    }
L_0016f438:;
    {
        cpu->r[2] = 0x00004340u;
    }
L_0016f43c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_0016f440:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_0016f444:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[8]);
    }
L_0016f448:;
    {
        wr32(cpu->r[4] + + 0x490u, cpu->r[7]);
    }
L_0016f44c:;
    {
        wr32(cpu->r[1] + cpu->r[2], cpu->r[7]);
    }
L_0016f450:;
    {
        wr32(cpu->r[1] + cpu->r[3], cpu->r[7]);
    }
L_0016f454:;
    {
        goto L_0016ede4;
    }
L_0016f458:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016f45c:;
    {
        cpu->r[14] = 0x0016f460u; fn_00162254(cpu);
    }
L_0016f460:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[10]);
    }
L_0016f464:;
    {
        goto L_0016f154;
    }
L_0016f468:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016f46c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016f4e4;
        }
    }
L_0016f470:;
    {
        cpu->r[1] = rd32(0x0016f478u + - 0x338u);
    }
L_0016f474:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0016f478:;
    {
        cpu->r[12] = rd32(0x0016f480u + - 0x33cu);
    }
L_0016f47c:;
    {
        cpu->r[14] = 0x00000e6eu;
    }
L_0016f480:;
    {
        cpu->r[2] = rd32(0x0016f488u + - 0x340u);
    }
L_0016f484:;
    {
        cpu->r[1] = add_flags(cpu, 0x0016f48cu, cpu->r[1], 0, 0);
    }
L_0016f488:;
    {
        cpu->r[3] = rd32(0x0016f490u + - 0x344u);
    }
L_0016f48c:;
    {
        cpu->r[12] = add_flags(cpu, 0x0016f494u, cpu->r[12], 0, 0);
    }
L_0016f490:;
    {
        cpu->r[2] = add_flags(cpu, 0x0016f498u, cpu->r[2], 0, 0);
    }
L_0016f494:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000184u, 0, 0);
    }
L_0016f498:;
    {
        cpu->r[3] = add_flags(cpu, 0x0016f4a0u, cpu->r[3], 0, 0);
    }
L_0016f49c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_0016f4a0:;
    {
        cpu->r[14] = 0x0016f4a4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0016f4a4:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x1dcu);
    }
L_0016f4a8:;
    {
        add_flags(cpu, cpu->r[10], 0x00000001u, 0, 1);
    }
L_0016f4ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016f4e4;
        }
    }
L_0016f4b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x498u);
    }
L_0016f4b4:;
    {
        goto L_0016f1dc;
    }
L_0016f4b8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_0016f4bc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_0016f4c0:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_0016f4c4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_0016f4c8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x0000000fu, 0, 0);
    }
L_0016f4cc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016f4d0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_0016f4d4:;
    {
        cpu->r[3] = 0x0000192cu;
    }
L_0016f4d8:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 4u, &shc); cpu->r[0] = v;
    }
L_0016f4dc:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_0016f4e0:;
    {
        goto L_0016ef18;
    }
L_0016f4e4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0016f4e8:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_0016f4ec:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_0016f4f0:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_0016f4f4:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_0016f4f8:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_0016f4fc:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_0016f500:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_0016f504:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_0016f508:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_0016f50c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0016f510:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_0016f514:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_0016f518:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016f528;
        }
    }
L_0016f51c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x498u);
    }
L_0016f520:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000dbu, 1, 1);
    }
L_0016f524:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016f21c;
        }
    }
L_0016f528:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0016f52c:;
    {
        wr32(cpu->r[4] + + 0x498u, cpu->r[3]);
    }
L_0016f530:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0016f534:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0016f538:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0016f53c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0016f540:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_0016f544:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0016f548:;
    {
        cpu->r[14] = 0x0016f54cu; fn_000ba68c(cpu);
    }
L_0016f54c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0016f550:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016f554:;
    {
        wr32(cpu->r[4] + + 0x498u, cpu->r[3]);
    }
L_0016f558:;
    {
        cpu->r[14] = 0x0016f55cu; fn_00165670(cpu);
    }
L_0016f55c:;
    {
        goto L_0016f2bc;
    }
L_0016f560:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x340u);
    }
L_0016f564:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0016f568:;
    {
        wr32(cpu->r[4] + + 0x340u, cpu->r[3]);
    }
L_0016f56c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_0016f570:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[4] + + 0x364u, cpu->r[10]);
        }
    }
L_0016f574:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_0016f578:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_0016f57c:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[4] + + 0x340u, cpu->r[3]);
        }
    }
L_0016f580:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_0016f584:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = rd32(cpu->r[3] + + 0x29cu);
        }
    }
L_0016f588:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x364u, cpu->r[3]);
        }
    }
L_0016f58c:;
    {
        goto L_0016f0e8;
    }
L_0016f590:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_0016f594:;
    {
        uint32_t v = cpu->r[3] & ~ 0x20000000u; cpu->r[3] = v;
    }
L_0016f598:;
    {
        wr32(cpu->r[4] + cpu->r[10], cpu->r[3]);
    }
L_0016f59c:;
    {
        cpu->r[3] = 0x000018b8u;
    }
L_0016f5a0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0016f5a4:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x000000acu, 0, 0);
    }
L_0016f5a8:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_0016f5ac:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0016f5b0:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x30u);
    }
L_0016f5b4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0016f5b8:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_0016f5bc:;
    {
        wr32(cpu->r[13] + + 0xb8u, cpu->r[9]);
    }
L_0016f5c0:;
    {
        wr32(cpu->r[13] + + 0xbcu, cpu->r[9]);
    }
L_0016f5c4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_0016f5c8:;
    {
        wr32(cpu->r[13] + + 0xc0u, cpu->r[9]);
    }
L_0016f5cc:;
    {
        cpu->r[14] = 0x0016f5d0u; fn_00161548(cpu);
    }
L_0016f5d0:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_0016f5d4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x000000b8u, 0, 0);
    }
L_0016f5d8:;
    {
        cpu->r[14] = 0x0016f5dcu; fn_00180008(cpu);
    }
L_0016f5dc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000a0u, 0, 0);
    }
L_0016f5e0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_0016f5e4:;
    {
        wr32(cpu->r[13] + + 0xa0u, cpu->r[9]);
    }
L_0016f5e8:;
    {
        wr32(cpu->r[13] + + 0xa8u, cpu->r[9]);
    }
L_0016f5ec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000400u, 0, 0);
    }
L_0016f5f0:;
    {
        wr32(cpu->r[13] + + 0xa4u, cpu->r[0]);
    }
L_0016f5f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016f5f8:;
    {
        cpu->r[14] = 0x0016f5fcu; guest_call(cpu, cpu->r[3]);
    }
L_0016f5fc:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0016f600:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_0016f604:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0016f608:;
    {
        cpu->r[1] = rd32(cpu->r[2]);
    }
L_0016f60c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_0016f610:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], 0x00006300u, 0, 0);
    }
L_0016f614:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_0016f618:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000026u, 0, 0);
    }
L_0016f61c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0016f620:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x4u);
    }
L_0016f624:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016f628:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = rd32(cpu->r[3] + cpu->r[10]);
        }
    }
L_0016f62c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[0]);
        }
    }
L_0016f630:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[12] | 0x00100000u; cpu->r[12] = v;
        }
    }
L_0016f634:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[3] + cpu->r[10], cpu->r[12]);
        }
    }
L_0016f638:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000007u, 1, 1);
    }
L_0016f63c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016f610;
        }
    }
L_0016f640:;
    {
        cpu->r[0] = 0x00008cbcu;
    }
L_0016f644:;
    {
        cpu->r[3] = 0x00008cc4u;
    }
L_0016f648:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_0016f64c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0016f650:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_0016f654:;
    {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0016f658:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], cpu->r[12], 0, 0);
    }
L_0016f65c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_0016f660:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016f714;
        }
    }
L_0016f664:;
    {
        cpu->r[12] = 0x00008cb8u;
    }
L_0016f668:;
    {
        cpu->r[11] = 0x00008cc0u;
    }
L_0016f66c:;
    {
        cpu->r[11] = (cpu->r[11] & 0xffffu) | (0x0001u << 16);
    }
L_0016f670:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_0016f674:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_0016f678:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[7]);
    }
L_0016f67c:;
    {
        cpu->r[10] = cpu->r[9];
    }
L_0016f680:;
    {
        cpu->r[7] = cpu->r[4];
    }
L_0016f684:;
    {
        cpu->r[4] = cpu->r[11];
    }
L_0016f688:;
    {
        cpu->r[11] = cpu->r[12];
    }
L_0016f68c:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[1], 1, 1);
    }
L_0016f690:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[10], cpu->r[1], 1, 0);
    }
L_0016f694:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[4]);
        }
    }
L_0016f698:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[11]);
        }
    }
L_0016f69c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = add_flags(cpu, cpu->r[12], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
        }
    }
L_0016f6a0:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[10], cpu->r[1], 1, 0);
    }
L_0016f6a4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[9], 0, 0);
        }
    }
L_0016f6a8:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0016f6ac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016f6b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016f6d8;
        }
    }
L_0016f6b4:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[1], 1, 1);
    }
L_0016f6b8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_0016f6bc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[11]);
        }
    }
L_0016f6c0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[4]);
        }
    }
L_0016f6c4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = add_flags(cpu, cpu->r[12], cpu->r[9], 0, 0);
        }
    }
L_0016f6c8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[12] = add_flags(cpu, cpu->r[2], shifter(cpu->r[12], 2, 2u, &shc), 0, 0);
        }
    }
L_0016f6cc:;
    {
        cpu->r[0] = rd32(cpu->r[12]);
    }
L_0016f6d0:;
    {
        cpu->r[14] = 0x0016f6d4u; fn_00172214(cpu);
    }
L_0016f6d4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_0016f6d8:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0016f6dc:;
    {
        cpu->r[12] = 0x00001bc8u;
    }
L_0016f6e0:;
    {
        cpu->r[14] = 0x00008cbcu;
    }
L_0016f6e4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000001u, 0, 0);
    }
L_0016f6e8:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x0001u << 16);
    }
L_0016f6ec:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_0016f6f0:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0016f6f4:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[12]);
    }
L_0016f6f8:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[14]);
    }
L_0016f6fc:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_0016f700:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], cpu->r[0], 0, 0);
    }
L_0016f704:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[0], 1, 1);
    }
L_0016f708:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0016f68c;
        }
    }
L_0016f70c:;
    {
        cpu->r[4] = cpu->r[7];
    }
L_0016f710:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x14u);
    }
L_0016f714:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0016f718:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016f71c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x44u);
    }
L_0016f720:;
    {
        { uint32_t v = cpu->r[2] & 0x00000008u; set_nz(cpu, v); }
    }
L_0016f724:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016fcc0;
        }
    }
L_0016f728:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0016f72c:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_0016f730:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0x424u);
    }
L_0016f734:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0016f738:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016fcc0;
        }
    }
L_0016f73c:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_0016f740:;
    {
        uint32_t v = cpu->r[3] | 0x00000001u; cpu->r[3] = v;
    }
L_0016f744:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_0016f748:;
    {
        cpu->r[3] = 0x00001920u;
    }
L_0016f74c:;
    {
        cpu->r[2] = 0x0000000au;
    }
L_0016f750:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_0016f754:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0016f758:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016f75c:;
    {
        cpu->r[14] = 0x0016f764u;
    }
L_0016f760:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0016f764u)) return;
    }
L_0016f764:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_0016f768:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016f76c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[13] + + 0x44u);
        }
    }
L_0016f770:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[3] & ~ 0x00000008u; cpu->r[3] = v;
        }
    }
L_0016f774:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x44u, cpu->r[3]);
        }
    }
L_0016f778:;
    {
        cpu->r[3] = 0x00000400u;
    }
L_0016f77c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0016f780:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x8000u << 16);
    }
L_0016f784:;
    {
        uint32_t v = cpu->r[2] & cpu->r[3]; cpu->r[3] = v;
    }
L_0016f788:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016f78c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000800u;
        }
    }
L_0016f790:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001703b4;
        }
    }
L_0016f794:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0016f798:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0016f79c:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x424u);
    }
L_0016f7a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016f7a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016f7bc;
        }
    }
L_0016f7a8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x380u);
    }
L_0016f7ac:;
    {
        uint32_t v = cpu->r[1] ^ shifter(cpu->r[1], 1, 31u, &shc); cpu->r[3] = v;
    }
L_0016f7b0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[1], 1, 31u, &shc), 1, 0);
    }
L_0016f7b4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0016f7b8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00170a70;
        }
    }
L_0016f7bc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x44u);
    }
L_0016f7c0:;
    {
        uint32_t v = cpu->r[3] & 0x00000008u; cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_0016f7c4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4acu);
        }
    }
L_0016f7c8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_0016f7cc:;
    {
        wr32(cpu->r[4] + + 0x4acu, cpu->r[3]);
    }
L_0016f7d0:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0016f7d4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016f7d8:;
    {
        { uint32_t v = cpu->r[2] & 0x00004000u; set_nz(cpu, v); }
    }
L_0016f7dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016f820;
        }
    }
L_0016f7e0:;
    {
        cpu->r[3] = 0x00001740u;
    }
L_0016f7e4:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_0016f7e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016f7ec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016f820;
        }
    }
L_0016f7f0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_0016f7f4:;
    {
        cpu->r[1] = 0x00001bc8u;
    }
L_0016f7f8:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_0016f7fc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0016f800:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[1]);
    }
L_0016f804:;
    {
        cpu->r[0] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_0016f808:;
    {
        cpu->r[3] = 0x000010d0u;
    }
L_0016f80c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0016f810:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_0016f814:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00170f78;
        }
    }
L_0016f818:;
    {
        { uint32_t v = cpu->r[2] & 0x04000000u; set_nz(cpu, v); }
    }
L_0016f81c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00170c88;
        }
    }
L_0016f820:;
    {
        cpu->r[3] = 0x00000400u;
    }
L_0016f824:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x8000u << 16);
    }
L_0016f828:;
    {
        uint32_t v = cpu->r[2] & cpu->r[3]; cpu->r[3] = v;
    }
L_0016f82c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016f830:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00170878;
        }
    }
L_0016f834:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_0016f838:;
    {
        cpu->r[0] = 0x00001c90u;
    }
L_0016f83c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0016f840:;
    {
        wr32(cpu->r[4] + + 0x62cu, cpu->r[3]);
    }
L_0016f844:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0016f848:;
    {
        wr8(cpu->r[4] + cpu->r[0], cpu->r[3]);
    }
L_0016f84c:;
    {
        cpu->r[0] = 0x00001c98u;
    }
L_0016f850:;
    {
        uint32_t v = cpu->r[1] & ~ 0x80000000u; cpu->r[1] = v;
    }
L_0016f854:;
    {
        wr32(cpu->r[4] + + 0x620u, cpu->r[3]);
    }
L_0016f858:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[3]);
    }
L_0016f85c:;
    {
        uint32_t v = cpu->r[1] & ~ 0x00000400u; cpu->r[1] = v;
    }
L_0016f860:;
    {
        cpu->r[0] = 0x00001c8cu;
    }
L_0016f864:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_0016f868:;
    {
        cpu->r[2] = 0x00001c94u;
    }
L_0016f86c:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[3]);
    }
L_0016f870:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_0016f874:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016f878:;
    {
        cpu->r[14] = 0x0016f87cu; fn_0015d920(cpu);
    }
L_0016f87c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016f880:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016f8dc;
        }
    }
L_0016f884:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_0016f888:;
    {
        cpu->r[3] = 0x00000400u;
    }
L_0016f88c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x8000u << 16);
    }
L_0016f890:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0016f894:;
    {
        uint32_t v = cpu->r[10] & cpu->r[3]; cpu->r[3] = v;
    }
L_0016f898:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016f89c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016f8a8;
        }
    }
L_0016f8a0:;
    {
        uint32_t v = cpu->r[10] & 0x00000008u; cpu->r[10] = v;
        set_nz(cpu, v);
    }
L_0016f8a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00170dec;
        }
    }
L_0016f8a8:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0016f8ac:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0016f8b0:;
    {
        cpu->r[1] = 0x0000007bu;
    }
L_0016f8b4:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_0016f8b8:;
    {
        cpu->r[0] = rd32(cpu->r[10]);
    }
L_0016f8bc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_0016f8c0:;
    {
        cpu->r[14] = 0x0016f8c4u; fn_000fd224(cpu);
    }
L_0016f8c4:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_0016f8c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016f8dc;
        }
    }
L_0016f8cc:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0016f8d0:;
    {
        cpu->r[1] = 0x0000007bu;
    }
L_0016f8d4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x490u);
    }
L_0016f8d8:;
    {
        cpu->r[14] = 0x0016f8dcu; fn_000fd218(cpu);
    }
L_0016f8dc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x44u);
    }
L_0016f8e0:;
    {
        { uint32_t v = cpu->r[2] & 0x00000040u; set_nz(cpu, v); }
    }
L_0016f8e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017033c;
        }
    }
L_0016f8e8:;
    {
        cpu->r[1] = 0x00001788u;
    }
L_0016f8ec:;
    {
        uint32_t v = cpu->r[2] & ~ 0x00000040u; cpu->r[2] = v;
    }
L_0016f8f0:;
    {
        uint32_t v = cpu->r[2] | 0x00000004u; cpu->r[2] = v;
    }
L_0016f8f4:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[2]);
    }
L_0016f8f8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_0016f8fc:;
    {
        uint32_t v = cpu->r[3] | 0x00000010u; cpu->r[3] = v;
    }
L_0016f900:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_0016f904:;
    {
        { uint32_t v = cpu->r[3] & 0x00000008u; set_nz(cpu, v); }
    }
L_0016f908:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00170320;
        }
    }
L_0016f90c:;
    {
        cpu->r[3] = 0x0000178cu;
    }
L_0016f910:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x44u);
    }
L_0016f914:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_0016f918:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016f91c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016f920:;
    {
        uint32_t v = cpu->r[12] & ~ 0x00000018u; cpu->r[12] = v;
    }
L_0016f924:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[12]);
    }
L_0016f928:;
    {
        uint32_t v = cpu->r[2] | 0x00000008u; cpu->r[2] = v;
    }
L_0016f92c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_0016f930:;
    {
        cpu->r[14] = 0x0016f934u; fn_001745cc(cpu);
    }
L_0016f934:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016f938:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x44u);
    }
L_0016f93c:;
    {
        cpu->r[14] = 0x0016f940u; fn_0016e000(cpu);
    }
L_0016f940:;
    {
        cpu->r[3] = 0x0000178cu;
    }
L_0016f944:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016f948:;
    {
        { uint32_t v = cpu->r[2] & 0x00000008u; set_nz(cpu, v); }
    }
L_0016f94c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016f960;
        }
    }
L_0016f950:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_0016f954:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0016f958:;
    {
        uint32_t v = cpu->r[2] & 0x00000008u; cpu->r[2] = v;
        set_nz(cpu, v);
    }
L_0016f95c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
        }
    }
L_0016f960:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x44u);
    }
L_0016f964:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016f968:;
    {
        cpu->r[14] = 0x0016f96cu; fn_0016cea4(cpu);
    }
L_0016f96c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016f970:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x44u);
    }
L_0016f974:;
    {
        cpu->r[14] = 0x0016f978u; fn_0015dc9c(cpu);
    }
L_0016f978:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016f97c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_0016f980:;
    {
        cpu->r[14] = 0x0016f984u; fn_0015e2b8(cpu);
    }
L_0016f984:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x55cu);
    }
L_0016f988:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016f98c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00170520;
        }
    }
L_0016f990:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x44u);
    }
L_0016f994:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016f998:;
    {
        cpu->r[14] = 0x0016f99cu; fn_0016e384(cpu);
    }
L_0016f99c:;
    {
        cpu->r[9] = 0x00001bc8u;
    }
L_0016f9a0:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0016f9a4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0016f9a8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016f9ac:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[3]);
    }
L_0016f9b0:;
    {
        cpu->r[14] = 0x0016f9b4u; fn_0016d17c(cpu);
    }
L_0016f9b4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_0016f9b8:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_0016f9bc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x374u);
    }
L_0016f9c0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_0016f9c4:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0016f9c8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[9]);
    }
L_0016f9cc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x354u);
    }
L_0016f9d0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0016f9d4:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_0016f9d8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_0016f9dc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00006300u, 0, 0);
    }
L_0016f9e0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001eu, 0, 0);
    }
L_0016f9e4:;
    {
        vfp_sync_flags(cpu);
    }
L_0016f9e8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0016f9ec:;
    {
        cpu->r[10] = rd32(cpu->r[2] + + 0x4u);
    }
L_0016f9f0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016fa0c;
        }
    }
L_0016f9f4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[10] + + 0x374u);
    }
L_0016f9f8:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0016f9fc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[10] + + 0x354u);
    }
L_0016fa00:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_0016fa04:;
    {
        vfp_sync_flags(cpu);
    }
L_0016fa08:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00170954;
        }
    }
L_0016fa0c:;
    {
        cpu->r[10] = 0x0000432cu;
    }
L_0016fa10:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0006u << 16);
    }
L_0016fa14:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[10]);
    }
L_0016fa18:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016fa1c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00170a9c;
        }
    }
L_0016fa20:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x354u);
    }
L_0016fa24:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0016fa28:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x184u);
    }
L_0016fa2c:;
    {
        cpu->r[3] = 0x00001ca0u;
    }
L_0016fa30:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x17cu);
    }
L_0016fa34:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0016fa38:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x180u);
    }
L_0016fa3c:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_0016fa40:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x198u);
    }
L_0016fa44:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0016fa48:;
    {
        uint32_t v = cpu->r[9] * cpu->r[0]; cpu->r[9] = v;
    }
L_0016fa4c:;
    {
        uint32_t v = cpu->r[10] * cpu->r[0]; cpu->r[10] = v;
    }
L_0016fa50:;
    {
        uint32_t v = cpu->r[11] * cpu->r[0]; cpu->r[11] = v;
    }
L_0016fa54:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[9], 0x00000ff0u, 0, 0);
    }
L_0016fa58:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[10], 0x00000ff0u, 0, 0);
    }
L_0016fa5c:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_0016fa60:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000fu, 0, 0);
    }
L_0016fa64:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000fu, 0, 0);
    }
L_0016fa68:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[9] = cpu->r[3];
        }
    }
L_0016fa6c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[11], 0x00000ff0u, 0, 0);
    }
L_0016fa70:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0016fa74:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000fu, 0, 0);
    }
L_0016fa78:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[10] = cpu->r[2];
        }
    }
L_0016fa7c:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_0016fa80:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[11] = cpu->r[3];
        }
    }
L_0016fa84:;
    {
        add_flags(cpu, cpu->r[1], 0x00000001u, 0, 1);
    }
L_0016fa88:;
    {
        uint32_t v = shifter(cpu->r[9], 1, 12u, &shc); cpu->r[9] = v;
    }
L_0016fa8c:;
    {
        uint32_t v = shifter(cpu->r[10], 1, 12u, &shc); cpu->r[10] = v;
    }
L_0016fa90:;
    {
        uint32_t v = shifter(cpu->r[11], 1, 12u, &shc); cpu->r[11] = v;
    }
L_0016fa94:;
    {
        wr32(cpu->r[4] + + 0x604u, cpu->r[9]);
    }
L_0016fa98:;
    {
        wr32(cpu->r[4] + + 0x5fcu, cpu->r[10]);
    }
L_0016fa9c:;
    {
        wr32(cpu->r[4] + + 0x600u, cpu->r[11]);
    }
L_0016faa0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00170374;
        }
    }
L_0016faa4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016faa8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_0016faac:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_0016fab0:;
    {
        cpu->r[14] = 0x0016fab4u; fn_001608d8(cpu);
    }
L_0016fab4:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x5fcu);
    }
L_0016fab8:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x600u);
    }
L_0016fabc:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x604u);
    }
L_0016fac0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_0016fac4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x480u);
    }
L_0016fac8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x428u);
    }
L_0016facc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_0016fad0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x42cu);
    }
L_0016fad4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000009u, 1, 1);
    }
L_0016fad8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x430u);
    }
L_0016fadc:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], cpu->r[1], 1, 0);
    }
L_0016fae0:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], cpu->r[2], 1, 0);
    }
L_0016fae4:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 0);
    }
L_0016fae8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001702e4;
        }
    }
L_0016faec:;
    {
        cpu->r[2] = 0x00001654u;
    }
L_0016faf0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0016faf4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_0016faf8:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_0016fafc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0016fb00:;
    {
        uint32_t v = cpu->r[10] * cpu->r[10]; cpu->r[0] = v;
    }
L_0016fb04:;
    {
        uint32_t v = cpu->r[11] * cpu->r[11] + cpu->r[0]; cpu->r[0] = v;
    }
L_0016fb08:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0016fb0c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x418u);
    }
L_0016fb10:;
    {
        uint32_t v = cpu->r[9] * cpu->r[9] + cpu->r[0]; cpu->r[0] = v;
    }
L_0016fb14:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
    }
L_0016fb18:;
    {
        cpu->r[14] = 0x0016fb1cu; fn_0017fdfc(cpu);
    }
L_0016fb1c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_0016fb20:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 4u, &shc); cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_0016fb24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016fba0;
        }
    }
L_0016fb28:;
    {
        uint32_t v = cpu->r[1] * cpu->r[1]; cpu->r[1] = v;
    }
L_0016fb2c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_0016fb30:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_0016fb34:;
    {
        cpu->r[14] = 0x0016fb38u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0016fb38:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_0016fb3c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0016fb40:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x198u);
    }
L_0016fb44:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_0016fb48:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_0016fb4c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_0016fb50:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_0016fb54:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_0016fb58:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0016fb5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016fba0;
        }
    }
L_0016fb60:;
    {
        uint32_t v = cpu->r[10] * cpu->r[2]; cpu->r[0] = v;
    }
L_0016fb64:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0016fb68:;
    {
        uint32_t v = cpu->r[11] * cpu->r[2]; cpu->r[11] = v;
    }
L_0016fb6c:;
    {
        uint32_t v = cpu->r[9] * cpu->r[2]; cpu->r[9] = v;
    }
L_0016fb70:;
    {
        cpu->r[14] = 0x0016fb74u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0016fb74:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_0016fb78:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0016fb7c:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_0016fb80:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0016fb84:;
    {
        cpu->r[14] = 0x0016fb88u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0016fb88:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_0016fb8c:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0016fb90:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_0016fb94:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0016fb98:;
    {
        cpu->r[14] = 0x0016fb9cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0016fb9c:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_0016fba0:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0016fba4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x42cu);
    }
L_0016fba8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x430u);
    }
L_0016fbac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016fbb0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[1], 0, 0);
    }
L_0016fbb4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[9], cpu->r[2], 0, 0);
    }
L_0016fbb8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x428u);
    }
L_0016fbbc:;
    {
        uint32_t v = cpu->r[3] & 0x00000010u; cpu->r[9] = v;
        set_nz(cpu, v);
    }
L_0016fbc0:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[11]);
    }
L_0016fbc4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], cpu->r[1], 0, 0);
    }
L_0016fbc8:;
    {
        wr32(cpu->r[13] + + 0x84u, cpu->r[2]);
    }
L_0016fbcc:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[10]);
    }
L_0016fbd0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00170584;
        }
    }
L_0016fbd4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x340u);
    }
L_0016fbd8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0016fbdc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00170e64;
        }
    }
L_0016fbe0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0016fbe4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_0016fbe8:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x29cu);
    }
L_0016fbec:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0016fbf0:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[4] + + 0x37cu, cpu->r[9]);
        }
    }
L_0016fbf4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016fc24;
        }
    }
L_0016fbf8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_0016fbfc:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x2a8u);
    }
L_0016fc00:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x364u);
    }
L_0016fc04:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0016fc08:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0016fc0c:;
    {
        cpu->r[10] = rd32(cpu->r[3] + + 0x2a8u);
    }
L_0016fc10:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[10], 1, 0);
    }
L_0016fc14:;
    {
        uint32_t v = cpu->r[0] * cpu->r[3]; cpu->r[0] = v;
    }
L_0016fc18:;
    {
        cpu->r[14] = 0x0016fc1cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0016fc1c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_0016fc20:;
    {
        wr32(cpu->r[4] + + 0x37cu, cpu->r[0]);
    }
L_0016fc24:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x44u);
    }
L_0016fc28:;
    {
        { uint32_t v = cpu->r[3] & 0x00000004u; set_nz(cpu, v); }
    }
L_0016fc2c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016fc50;
        }
    }
L_0016fc30:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x37cu);
    }
L_0016fc34:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_0016fc38:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[3] = v;
    }
L_0016fc3c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000007u, 0, 0);
    }
L_0016fc40:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016fc44:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_0016fc48:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 3u, &shc); cpu->r[3] = v;
    }
L_0016fc4c:;
    {
        wr32(cpu->r[4] + + 0x37cu, cpu->r[3]);
    }
L_0016fc50:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0016fc54:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016fc58:;
    {
        { uint32_t v = cpu->r[2] & 0x00004000u; set_nz(cpu, v); }
    }
L_0016fc5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016fcd0;
        }
    }
L_0016fc60:;
    {
        cpu->r[1] = 0x00001660u;
    }
L_0016fc64:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016fc68:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x340u);
    }
L_0016fc6c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_0016fc70:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_0016fc74:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[2] & ~ 0x00000002u; cpu->r[2] = v;
        }
    }
L_0016fc78:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
        }
    }
L_0016fc7c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0016fc80:;
    {
        cpu->r[14] = 0x0016fc88u;
    }
L_0016fc84:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0016fc88u)) return;
    }
L_0016fc88:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016fc8c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001705f0;
        }
    }
L_0016fc90:;
    {
        cpu->r[2] = 0x0000166cu;
    }
L_0016fc94:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_0016fc98:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016fc9c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00170d48;
        }
    }
L_0016fca0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00170654;
        }
    }
L_0016fca4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0016fca8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00170d34;
        }
    }
L_0016fcac:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 0);
    }
L_0016fcb0:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_0016fcb4:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0016fcb8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016fcbc:;
    {
        goto L_0017065c;
    }
L_0016fcc0:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_0016fcc4:;
    {
        uint32_t v = cpu->r[3] & ~ 0x08000001u; cpu->r[3] = v;
    }
L_0016fcc8:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_0016fccc:;
    {
        goto L_0016f754;
    }
L_0016fcd0:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x380u);
    }
L_0016fcd4:;
    {
        cpu->r[3] = 0x00000400u;
    }
L_0016fcd8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x8000u << 16);
    }
L_0016fcdc:;
    {
        uint32_t v = cpu->r[2] & cpu->r[3]; cpu->r[3] = v;
    }
L_0016fce0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016fce4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000800u;
        }
    }
L_0016fce8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00170404;
        }
    }
L_0016fcec:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[2], 1, 1);
    }
L_0016fcf0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00170278;
        }
    }
L_0016fcf4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016fcf8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000800u;
        }
    }
L_0016fcfc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00170114;
        }
    }
L_0016fd00:;
    {
        wr32(cpu->r[4] + + 0x380u, cpu->r[0]);
    }
L_0016fd04:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000fa0u, 0, 0);
    }
L_0016fd08:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_0016fd0c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_0016fd10:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_0016fd14:;
    {
        cpu->r[8] = rd16(cpu->r[0] + + 0x2u);
    }
L_0016fd18:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016fd1c:;
    {
        cpu->r[14] = 0x0016fd20u; fn_0015d920(cpu);
    }
L_0016fd20:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016fd24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017010c;
        }
    }
L_0016fd28:;
    {
        cpu->r[3] = 0x00001c88u;
    }
L_0016fd2c:;
    {
        cpu->r[10] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016fd30:;
    {
        sub_flags(cpu, cpu->r[10], 0x0000000du, 1, 1);
    }
L_0016fd34:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = shifter(cpu->r[10], 2, 1u, &shc); cpu->r[10] = v;
        }
    }
L_0016fd38:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x0000004au, 0, 0);
        }
    }
L_0016fd3c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017010c;
        }
    }
L_0016fd40:;
    {
        cpu->r[9] = 0x00001788u;
    }
L_0016fd44:;
    {
        cpu->r[3] = 0x00000400u;
    }
L_0016fd48:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x8000u << 16);
    }
L_0016fd4c:;
    {
        cpu->r[1] = 0x00000999u;
    }
L_0016fd50:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[9]);
    }
L_0016fd54:;
    {
        cpu->r[2] = 0x00005556u;
    }
L_0016fd58:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_0016fd5c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x5555u << 16);
    }
L_0016fd60:;
    {
        uint32_t v = cpu->r[0] & cpu->r[3]; cpu->r[3] = v;
    }
L_0016fd64:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x624u);
    }
L_0016fd68:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016fd6c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_0016fd70:;
    {
        { uint32_t v = cpu->r[0] & 0x00004000u; set_nz(cpu, v); }
    }
L_0016fd74:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000fa0u, 0, 0);
    }
L_0016fd78:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_0016fd7c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[14], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_0016fd80:;
    {
        cpu->r[1] = rd16(cpu->r[1] + + 0x2u);
    }
L_0016fd84:;
    {
        uint32_t v = cpu->r[12] * cpu->r[1]; cpu->r[1] = v;
    }
L_0016fd88:;
    {
        cpu->r[1] = sub_flags(cpu, 0x00000000u, cpu->r[1], 1, 0);
    }
L_0016fd8c:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_0016fd90:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[2] * (int64_t)(int32_t)cpu->r[1]; cpu->r[14] = (uint32_t)v; cpu->r[7] = (uint32_t)(v >> 32); }
    }
L_0016fd94:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], shifter(cpu->r[1], 1, 31u, &shc), 1, 0);
    }
L_0016fd98:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001704e8;
        }
    }
L_0016fd9c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016fda0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016fe08;
        }
    }
L_0016fda4:;
    {
        uint32_t v = cpu->r[7] ^ shifter(cpu->r[7], 1, 31u, &shc); cpu->r[2] = v;
    }
L_0016fda8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[7], 1, 31u, &shc), 1, 0);
    }
L_0016fdac:;
    {
        cpu->r[3] = 0x0000851fu;
    }
L_0016fdb0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x51ebu << 16);
    }
L_0016fdb4:;
    {
        uint32_t v = cpu->r[8] ^ shifter(cpu->r[8], 1, 31u, &shc); cpu->r[0] = v;
    }
L_0016fdb8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[8], 1, 31u, &shc), 1, 0);
    }
L_0016fdbc:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 7u, &shc); cpu->r[1] = v;
    }
L_0016fdc0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 3u, &shc), 1, 0);
    }
L_0016fdc4:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[2]; cpu->r[1] = (uint32_t)v; cpu->r[12] = (uint32_t)(v >> 32); }
    }
L_0016fdc8:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 31u, &shc); cpu->r[1] = v;
    }
L_0016fdcc:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[12], 1, 5u, &shc), cpu->r[1], 1, 0);
    }
L_0016fdd0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_0016fdd4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016fe08;
        }
    }
L_0016fdd8:;
    {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
    }
L_0016fddc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0016fde0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_0016fde4:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0016fde8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_0016fdec:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = (~0x00000000u);
        }
    }
L_0016fdf0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_0016fdf4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = cpu->r[0];
        }
    }
L_0016fdf8:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[2] * cpu->r[1]; cpu->r[2] = v;
        }
    }
L_0016fdfc:;
    {
        if (cond_test(cpu, 2)) {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[2]; cpu->r[11] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
        }
    }
L_0016fe00:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = shifter(cpu->r[2], 1, 31u, &shc); cpu->r[2] = v;
        }
    }
L_0016fe04:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[8] = sub_flags(cpu, shifter(cpu->r[3], 1, 5u, &shc), cpu->r[2], 1, 0);
        }
    }
L_0016fe08:;
    {
        cpu->r[3] = 0x00001740u;
    }
L_0016fe0c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_0016fe10:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016fe14:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001702b8;
        }
    }
L_0016fe18:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_0016fe1c:;
    {
        cpu->r[2] = 0x000084b8u;
    }
L_0016fe20:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x0016fe28u + + 0x3dcu);
    }
L_0016fe24:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x0016fe2cu + + 0x3dcu);
    }
L_0016fe28:;
    {
        *vfp_s(cpu, 18) = *(float*)G(0x0016fe30u + + 0x3dcu);
    }
L_0016fe2c:;
    {
        *vfp_s(cpu, 19) = *(float*)G(0x0016fe34u + + 0x3dcu);
    }
L_0016fe30:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0016fe34:;
    {
        cpu->r[0] = 0x00005dc0u;
    }
L_0016fe38:;
    {
        *vfp_s(cpu, 20) = *(float*)G(0x0016fe40u + + 0x3d4u);
    }
L_0016fe3c:;
    {
        *vfp_s(cpu, 22) = *(float*)G(cpu->r[4] + + 0x354u);
    }
L_0016fe40:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0016fe44:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[2];
    }
L_0016fe48:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0016fe4c:;
    {
        cpu->r[2] = 0x000084bcu;
    }
L_0016fe50:;
    {
        cpu->r[9] = rd32(cpu->r[3] + + 0x418u);
    }
L_0016fe54:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0016fe58:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], shifter(cpu->r[9], 2, 3u, &shc), 0, 0);
    }
L_0016fe5c:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[2]);
    }
L_0016fe60:;
    {
        cpu->r[2] = 0x000084b4u;
    }
L_0016fe64:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_0016fe68:;
    {
        vfp_vdiv(cpu, 15, 15, 16);
    }
L_0016fe6c:;
    {
        cpu->r[11] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0016fe70:;
    {
        vfp_vmul(cpu, 15, 15, 17);
    }
L_0016fe74:;
    {
        vfp_vdiv(cpu, 15, 15, 18);
    }
L_0016fe78:;
    {
        vfp_vmul(cpu, 15, 15, 19);
    }
L_0016fe7c:;
    {
        vfp_vmul(cpu, 23, 15, 20);
    }
L_0016fe80:;
    {
        cpu->r[14] = 0x0016fe84u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0016fe84:;
    {
        *(int32_t*)vfp_s(cpu,23) = (int32_t)*vfp_s(cpu,23);
    }
L_0016fe88:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0016fe8c:;
    {
        *vfp_s(cpu,21) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0016fe90:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,22), *vfp_s(cpu,21));
    }
L_0016fe94:;
    {
        vfp_sync_flags(cpu);
    }
L_0016fe98:;
    {
        if (cond_test(cpu, 6)) {
        goto L_0017081c;
        }
    }
L_0016fe9c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[11];
    }
L_0016fea0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0016fea4:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,22);
    }
L_0016fea8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0016feac:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 21);
    }
L_0016feb0:;
    {
        vfp_vdiv(cpu, 15, 15, 16);
    }
L_0016feb4:;
    {
        vfp_vmul(cpu, 15, 15, 17);
    }
L_0016feb8:;
    {
        vfp_vdiv(cpu, 15, 15, 18);
    }
L_0016febc:;
    {
        vfp_vmul(cpu, 15, 15, 19);
    }
L_0016fec0:;
    {
        vfp_vmul(cpu, 15, 15, 20);
    }
L_0016fec4:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0016fec8:;
    {
        *vfp_s(cpu,23) = (float)*(int32_t*)vfp_s(cpu,23);
    }
L_0016fecc:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0016fed0:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,23);
    }
L_0016fed4:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0016fed8:;
    {
        cpu->r[14] = 0x0016fedcu; fn_0017fc18(cpu);
    }
L_0016fedc:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[0];
    }
L_0016fee0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0016fee4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016fee8:;
    {
        cpu->r[14] = 0x0016fef0u;
    }
L_0016feec:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0016fef0u)) return;
    }
L_0016fef0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], cpu->r[7], 0, 0);
    }
L_0016fef4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0016fefcu + + 0x31cu);
    }
L_0016fef8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], shifter(cpu->r[10], 2, 6u, &shc), 0, 0);
    }
L_0016fefc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016ff00:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0016ff04:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu,16) = *vfp_s(cpu,15);
        }
    }
L_0016ff08:;
    {
        cpu->r[14] = 0x0016ff0cu; fn_0015d920(cpu);
    }
L_0016ff0c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[8];
    }
L_0016ff10:;
    {
        cpu->r[3] = 0x00008badu;
    }
L_0016ff14:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x68dbu << 16);
    }
L_0016ff18:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0016ff1c:;
    {
        vfp_vmul(cpu, 14, 15, 16);
    }
L_0016ff20:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0016ff28u + + 0x2f4u);
    }
L_0016ff24:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_0016ff28:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0016ff2c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0016ff30:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
        }
    }
L_0016ff34:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
        }
    }
L_0016ff38:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[2] * cpu->r[10]; cpu->r[10] = v;
        }
    }
L_0016ff3c:;
    {
        cpu->r[2] = 0x00001668u;
    }
L_0016ff40:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[0] * cpu->r[10]; cpu->r[10] = v;
        }
    }
L_0016ff44:;
    {
        if (cond_test(cpu, 1)) {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[10]; cpu->r[11] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
        }
    }
L_0016ff48:;
    {
        if (cond_test(cpu, 2)) {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[10]; cpu->r[1] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
        }
    }
L_0016ff4c:;
    {
        uint32_t v = shifter(cpu->r[10], 1, 31u, &shc); cpu->r[10] = v;
    }
L_0016ff50:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 1, 12u, &shc), cpu->r[10], 1, 0);
    }
L_0016ff54:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_0016ff58:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x354u);
    }
L_0016ff5c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_0016ff60:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x88u);
    }
L_0016ff64:;
    {
        vfp_sync_flags(cpu);
    }
L_0016ff68:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
        }
    }
L_0016ff6c:;
    {
        if (cond_test(cpu, 6)) {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
        }
    }
L_0016ff70:;
    {
        wr32(cpu->r[4] + + 0x88u, cpu->r[3]);
    }
L_0016ff74:;
    {
        cpu->r[3] = 0x00001740u;
    }
L_0016ff78:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_0016ff7c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016ff80:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00170194;
        }
    }
L_0016ff84:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0016ff88:;
    {
        cpu->r[5] = 0x00001788u;
    }
L_0016ff8c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_0016ff90:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0016ff94:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x7cu);
    }
L_0016ff98:;
    {
        { uint32_t v = cpu->r[3] & 0x00000008u; set_nz(cpu, v); }
    }
L_0016ff9c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_0016ffa0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_0016ffa4:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[13] + + 0x80u, cpu->r[3]);
        }
    }
L_0016ffa8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0016ffac:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_0016ffb0:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_0016ffb4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x80u);
    }
L_0016ffb8:;
    {
        uint32_t v = cpu->r[2] & 0x00004000u; cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_0016ffbc:;
    {
        wr32(cpu->r[4] + + 0x3d4u, cpu->r[1]);
    }
L_0016ffc0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x84u);
    }
L_0016ffc4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[14], cpu->r[0], 0, 0);
    }
L_0016ffc8:;
    {
        wr32(cpu->r[4] + + 0x3d8u, cpu->r[0]);
    }
L_0016ffcc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], cpu->r[1], 0, 0);
    }
L_0016ffd0:;
    {
        wr32(cpu->r[4] + + 0x3dcu, cpu->r[1]);
    }
L_0016ffd4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00170164;
        }
    }
L_0016ffd8:;
    {
        cpu->r[1] = 0x00001820u;
    }
L_0016ffdc:;
    {
        cpu->r[1] = rd8(cpu->r[4] + cpu->r[1]);
    }
L_0016ffe0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0016ffe4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001701f4;
        }
    }
L_0016ffe8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0016ffec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00170b68;
        }
    }
L_0016fff0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x620u);
    }
L_0016fff4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0016fff8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001700a0;
        }
    }
L_0016fffc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00170000:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00170254;
        }
    }
L_00170004:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x61cu);
    }
L_00170008:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x62cu);
    }
L_0017000c:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x184u);
    }
L_00170010:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x180u);
    }
L_00170014:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[2] = v;
    }
L_00170018:;
    {
        cpu->r[14] = sub_flags(cpu, 0x00000000u, cpu->r[14], 1, 0);
    }
L_0017001c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x17cu);
    }
L_00170020:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00170024:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_00170028:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[2], 0x00000ff0u, 0, 0);
    }
L_0017002c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00170030:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000fu, 0, 0);
    }
L_00170034:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00170038:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = cpu->r[0];
        }
    }
L_0017003c:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_00170040:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_00170044:;
    {
        uint32_t v = cpu->r[3] & 0x00004000u; cpu->r[3] = v;
    }
L_00170048:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 12u, &shc); cpu->r[2] = v;
    }
L_0017004c:;
    {
        uint32_t v = cpu->r[14] * cpu->r[2]; cpu->r[14] = v;
    }
L_00170050:;
    {
        uint32_t v = cpu->r[12] * cpu->r[2]; cpu->r[12] = v;
    }
L_00170054:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2]; cpu->r[1] = v;
    }
L_00170058:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[14], 0x0000ff00u, 0, 0);
    }
L_0017005c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], 0x0000ff00u, 0, 0);
    }
L_00170060:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x000000ffu, 0, 0);
    }
L_00170064:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000000u, 1, 1);
    }
L_00170068:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000ffu, 0, 0);
    }
L_0017006c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[14] = cpu->r[2];
        }
    }
L_00170070:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x0000ff00u, 0, 0);
    }
L_00170074:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00170078:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x000000ffu, 0, 0);
    }
L_0017007c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[12] = cpu->r[0];
        }
    }
L_00170080:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00170084:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = cpu->r[2];
        }
    }
L_00170088:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], shifter(cpu->r[14], 1, 16u, &shc), 1, 0);
    }
L_0017008c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], shifter(cpu->r[12], 1, 16u, &shc), 1, 0);
    }
L_00170090:;
    {
        wr32(cpu->r[4] + + 0x3d4u, cpu->r[7]);
    }
L_00170094:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], shifter(cpu->r[1], 1, 16u, &shc), 1, 0);
    }
L_00170098:;
    {
        wr32(cpu->r[4] + + 0x3d8u, cpu->r[6]);
    }
L_0017009c:;
    {
        wr32(cpu->r[4] + + 0x3dcu, cpu->r[5]);
    }
L_001700a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001700a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00170254;
        }
    }
L_001700a8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1dcu);
    }
L_001700ac:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_001700b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001705d8;
        }
    }
L_001700b4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_001700b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001700bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000800u, 1, 1);
    }
L_001700c0:;
    {
        if (cond_test(cpu, 11)) {
        uint32_t v = shifter(cpu->r[3], 2, 21u, &shc); cpu->r[3] = v;
        }
    }
L_001700c4:;
    {
        if (cond_test(cpu, 11)) {
        uint32_t v = shifter(cpu->r[3], 3, 21u, &shc); cpu->r[3] = v;
        }
    }
L_001700c8:;
    {
        if (cond_test(cpu, 11)) {
        wr32(cpu->r[4] + + 0x88u, cpu->r[3]);
        }
    }
L_001700cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001700d0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[2] = (~cpu->r[3]);
        }
    }
L_001700d4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000800u, 0, 0);
        }
    }
L_001700d8:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = shifter(cpu->r[2], 3, 11u, &shc); cpu->r[2] = v;
        }
    }
L_001700dc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 11u, &shc), 0, 0);
        }
    }
L_001700e0:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + + 0x88u, cpu->r[3]);
        }
    }
L_001700e4:;
    {
        cpu->r[14] = 0x001700e8u; fn_00174970(cpu);
    }
L_001700e8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001700ec:;
    {
        wr8(cpu->r[4] + + 0x250u, cpu->r[3]);
    }
L_001700f0:;
    {
        cpu->r[3] = 0x00001740u;
    }
L_001700f4:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_001700f8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001700fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016f3a8;
        }
    }
L_00170100:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00170104:;
    {
        cpu->r[14] = 0x00170108u; fn_0015edb0(cpu);
    }
L_00170108:;
    {
        goto L_0016f3a8;
    }
L_0017010c:;
    {
        cpu->r[10] = 0x00000064u;
    }
L_00170110:;
    {
        goto L_0016fd40;
    }
L_00170114:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00170118:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_0017011c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00170120:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00170ce0;
        }
    }
L_00170124:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00170128:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_0017012c:;
    {
        cpu->r[14] = 0x00170130u; fn_00093fd8(cpu);
    }
L_00170130:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_00170134:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017015c;
        }
    }
L_00170138:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_0017013c:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_00170140:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00170144:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001710dc;
        }
    }
L_00170148:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0017014c:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x4u);
    }
L_00170150:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_00170154:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00001000u;
        }
    }
L_00170158:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016fd00;
        }
    }
L_0017015c:;
    {
        cpu->r[0] = 0x00000c00u;
    }
L_00170160:;
    {
        goto L_0016fd00;
    }
L_00170164:;
    {
        cpu->r[1] = 0x00000400u;
    }
L_00170168:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x8000u << 16);
    }
L_0017016c:;
    {
        uint32_t v = cpu->r[2] & cpu->r[1]; cpu->r[1] = v;
    }
L_00170170:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00170174:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016ffd8;
        }
    }
L_00170178:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0017017c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00170180:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_00170184:;
    {
        cpu->r[14] = 0x00170188u; fn_00161bec(cpu);
    }
L_00170188:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0017018c:;
    {
        uint32_t v = cpu->r[2] & 0x00004000u; cpu->r[3] = v;
    }
L_00170190:;
    {
        goto L_0016ffd8;
    }
L_00170194:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00170198:;
    {
        cpu->r[14] = 0x0017019cu; fn_0015d920(cpu);
    }
L_0017019c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001701a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016ff84;
        }
    }
L_001701a4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_001701a8:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_001701ac:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001701b0:;
    {
        cpu->r[2] = 0x00008c78u;
    }
L_001701b4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_001701b8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001701bc:;
    {
        cpu->r[3] = 0x0000191cu;
    }
L_001701c0:;
    {
        cpu->r[12] = rd32(cpu->r[1]);
    }
L_001701c4:;
    {
        cpu->r[1] = 0x0000173cu;
    }
L_001701c8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_001701cc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_001701d0:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x418u);
    }
L_001701d4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
    }
L_001701d8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001701dc:;
    {
        uint32_t v = cpu->r[0] * cpu->r[2] + cpu->r[2]; cpu->r[2] = v;
    }
L_001701e0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001701e4:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[1]);
    }
L_001701e8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_001701ec:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
        }
    }
L_001701f0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00170540;
        }
    }
L_001701f4:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_001701f8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001701fc:;
    {
        uint32_t v = cpu->r[3] & 0x00004000u; cpu->r[3] = v;
    }
L_00170200:;
    {
        goto L_0016fff0;
    }
L_00170254:;
    {
        cpu->r[3] = 0x000017b4u;
    }
L_00170258:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0017025c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_00170260:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001700a8;
        }
    }
L_00170264:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_00170268:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017026c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_00170270:;
    {
        cpu->r[14] = 0x00170274u; fn_00164598(cpu);
    }
L_00170274:;
    {
        goto L_001700a8;
    }
L_00170278:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017027c:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x380u);
    }
L_00170280:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x0000f800u;
        }
    }
L_00170284:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xffffu << 16);
        }
    }
L_00170288:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00170884;
        }
    }
L_0017028c:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_00170290:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = rd32(cpu->r[4] + + 0x380u);
        }
    }
L_00170294:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00170940;
        }
    }
L_00170298:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017029c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0016fd04;
        }
    }
L_001702a0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_001702a4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000fa0u, 1, 0);
    }
L_001702a8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 1u, &shc), 1, 0);
    }
L_001702ac:;
    {
        cpu->r[8] = rd16(cpu->r[0] + + 0xau);
    }
L_001702b0:;
    {
        cpu->r[8] = sub_flags(cpu, 0x00000000u, cpu->r[8], 1, 0);
    }
L_001702b4:;
    {
        goto L_0016fd18;
    }
L_001702b8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x37cu);
    }
L_001702bc:;
    {
        cpu->r[3] = 0x0000851fu;
    }
L_001702c0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x51ebu << 16);
    }
L_001702c4:;
    {
        uint32_t v = cpu->r[2] * cpu->r[8] + cpu->r[7]; cpu->r[7] = v;
    }
L_001702c8:;
    {
        cpu->r[2] = 0x00001668u;
    }
L_001702cc:;
    {
        uint32_t v = cpu->r[10] * cpu->r[7]; cpu->r[10] = v;
    }
L_001702d0:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[10]; cpu->r[12] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_001702d4:;
    {
        uint32_t v = shifter(cpu->r[10], 1, 31u, &shc); cpu->r[10] = v;
    }
L_001702d8:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 1, 17u, &shc), cpu->r[10], 1, 0);
    }
L_001702dc:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_001702e0:;
    {
        goto L_0016ff58;
    }
L_001702e4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_001702e8:;
    {
        cpu->r[0] = 0x0000a000u;
    }
L_001702ec:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001702f0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x418u);
    }
L_001702f4:;
    {
        cpu->r[14] = 0x001702f8u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001702f8:;
    {
        cpu->r[3] = 0x00001654u;
    }
L_001702fc:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00170300:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
    }
L_00170304:;
    {
        sub_flags(cpu, cpu->r[2], 0x00100000u, 1, 1);
    }
L_00170308:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = 0x00100000u;
        }
    }
L_0017030c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_00170310:;
    {
        cpu->r[3] = 0x000001f4u;
    }
L_00170314:;
    {
        uint32_t v = cpu->r[3] * cpu->r[2]; cpu->r[3] = v;
    }
L_00170318:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[3]);
    }
L_0017031c:;
    {
        goto L_0016fafc;
    }
L_00170320:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_00170324:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00170328:;
    {
        cpu->r[14] = 0x0017032cu; fn_001745cc(cpu);
    }
L_0017032c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00170330:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x44u);
    }
L_00170334:;
    {
        cpu->r[14] = 0x00170338u; fn_0016d970(cpu);
    }
L_00170338:;
    {
        goto L_0016f940;
    }
L_0017033c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x354u);
    }
L_00170340:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_00170344:;
    {
        vfp_sync_flags(cpu);
    }
L_00170348:;
    {
        if (cond_test(cpu, 6)) {
        goto L_00170808;
        }
    }
L_0017034c:;
    {
        cpu->r[1] = 0x00001788u;
    }
L_00170350:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_00170354:;
    {
        uint32_t v = cpu->r[3] | 0x00000010u; cpu->r[3] = v;
    }
L_00170358:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
    }
L_0017035c:;
    {
        uint32_t v = cpu->r[3] | cpu->r[2]; cpu->r[1] = v;
    }
L_00170360:;
    {
        { uint32_t v = cpu->r[1] & 0x00000004u; set_nz(cpu, v); }
    }
L_00170364:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[2] & ~ 0x00000004u; cpu->r[2] = v;
        }
    }
L_00170368:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[2] | 0x00000008u; cpu->r[2] = v;
        }
    }
L_0017036c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[13] + + 0x44u, cpu->r[2]);
        }
    }
L_00170370:;
    {
        goto L_0016f904;
    }
L_00170374:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00170378:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0017037c:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_00170380:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016fac0;
        }
    }
L_00170384:;
    {
        cpu->r[3] = 0x000017b4u;
    }
L_00170388:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0017038c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 1);
    }
L_00170390:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016fac0;
        }
    }
L_00170394:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00170398:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_0017039c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_001703a0:;
    {
        cpu->r[14] = 0x001703a4u; fn_001689a8(cpu);
    }
L_001703a4:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x5fcu);
    }
L_001703a8:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x600u);
    }
L_001703ac:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x604u);
    }
L_001703b0:;
    {
        goto L_0016fac0;
    }
L_001703b4:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_001703b8:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_001703bc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001703c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017091c;
        }
    }
L_001703c4:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_001703c8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001703cc:;
    {
        cpu->r[14] = 0x001703d0u; fn_00093fd8(cpu);
    }
L_001703d0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_001703d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001703fc;
        }
    }
L_001703d8:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_001703dc:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_001703e0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001703e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00170cbc;
        }
    }
L_001703e8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_001703ec:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x4u);
    }
L_001703f0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_001703f4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00001000u;
        }
    }
L_001703f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016f794;
        }
    }
L_001703fc:;
    {
        cpu->r[2] = 0x00000c00u;
    }
L_00170400:;
    {
        goto L_0016f794;
    }
L_00170404:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00170408:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_0017040c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00170410:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001708f8;
        }
    }
L_00170414:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00170418:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0017041c:;
    {
        cpu->r[14] = 0x00170420u; fn_00093fd8(cpu);
    }
L_00170420:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_00170424:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001708dc;
        }
    }
L_00170428:;
    {
        cpu->r[11] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_0017042c:;
    {
        cpu->r[3] = rd32(cpu->r[11]);
    }
L_00170430:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00170434:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00170c98;
        }
    }
L_00170438:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0017043c:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x4u);
    }
L_00170440:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_00170444:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001708dc;
        }
    }
L_00170448:;
    {
        cpu->r[1] = 0x00001788u;
    }
L_0017044c:;
    {
        cpu->r[3] = 0x00000400u;
    }
L_00170450:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x8000u << 16);
    }
L_00170454:;
    {
        cpu->r[2] = 0x00001000u;
    }
L_00170458:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_0017045c:;
    {
        uint32_t v = cpu->r[1] & cpu->r[3]; cpu->r[3] = v;
    }
L_00170460:;
    {
        goto L_0016fcec;
    }
L_00170464:;
    {
        cpu->r[11] = 0x0000425cu;
    }
L_00170468:;
    {
        cpu->r[11] = (cpu->r[11] & 0xffffu) | (0x0006u << 16);
    }
L_0017046c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[11]);
    }
L_00170470:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_00170474:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016f030;
        }
    }
L_00170478:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017047c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
        }
    }
L_00170480:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + cpu->r[11], cpu->r[3]);
        }
    }
L_00170484:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016f030;
        }
    }
L_00170488:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_0017048c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00170490:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00170494:;
    {
        cpu->r[14] = 0x00170498u; fn_000ba68c(cpu);
    }
L_00170498:;
    {
        cpu->r[1] = rd32(cpu->r[10]);
    }
L_0017049c:;
    {
        cpu->r[2] = 0x00004344u;
    }
L_001704a0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001704a4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_001704a8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001704ac:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[9]);
    }
L_001704b0:;
    {
        wr32(cpu->r[1] + cpu->r[2], cpu->r[3]);
    }
L_001704b4:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001704b8:;
    {
        wr32(cpu->r[1] + cpu->r[11], cpu->r[3]);
    }
L_001704bc:;
    {
        cpu->r[14] = 0x001704c0u; fn_00165670(cpu);
    }
L_001704c0:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_001704c4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[9]);
    }
L_001704c8:;
    {
        cpu->r[14] = 0x001704ccu; fn_000bb368(cpu);
    }
L_001704cc:;
    {
        goto L_0016f3a8;
    }
L_001704d0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x494u);
    }
L_001704d4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001704d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016ede0;
        }
    }
L_001704dc:;
    {
        cpu->r[6] = rd32(0x001704e4u + - 0x2c4u);
    }
L_001704e0:;
    {
        wr32(cpu->r[4] + + 0x494u, cpu->r[3]);
    }
L_001704e4:;
    {
        goto L_0016ede4;
    }
L_001704e8:;
    {
        cpu->r[14] = 0x001704ecu; fn_0009b4d0(cpu);
    }
L_001704ec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x638u);
    }
L_001704f0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_001704f4:;
    {
        sub_flags(cpu, cpu->r[3], 0x000003e8u, 1, 1);
    }
L_001704f8:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[3] = 0x00000400u;
        }
    }
L_001704fc:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[3] = 0x00000400u;
        }
    }
L_00170500:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[9]);
        }
    }
L_00170504:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[7] = add_flags(cpu, cpu->r[7], shifter(cpu->r[7], 3, 31u, &shc), 0, 0);
        }
    }
L_00170508:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[9]);
        }
    }
L_0017050c:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x8000u << 16);
        }
    }
L_00170510:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x8000u << 16);
        }
    }
L_00170514:;
    {
        if (cond_test(cpu, 4)) {
        uint32_t v = shifter(cpu->r[7], 1, 1u, &shc); cpu->r[7] = v;
        }
    }
L_00170518:;
    {
        uint32_t v = cpu->r[2] & cpu->r[3]; cpu->r[3] = v;
    }
L_0017051c:;
    {
        goto L_0016fd9c;
    }
L_00170520:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00170524:;
    {
        wr32(cpu->r[4] + + 0x55cu, cpu->r[3]);
    }
L_00170528:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x44u);
    }
L_0017052c:;
    {
        uint32_t v = cpu->r[3] | 0x00000020u; cpu->r[3] = v;
    }
L_00170530:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[3]);
    }
L_00170534:;
    {
        cpu->r[14] = 0x00170538u; fn_0009b4d0(cpu);
    }
L_00170538:;
    {
        wr32(cpu->r[4] + + 0x560u, cpu->r[0]);
    }
L_0017053c:;
    {
        goto L_0016f990;
    }
L_00170540:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001701f4;
        }
    }
L_00170544:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_00170548:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0017054c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x7cu);
    }
L_00170550:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_00170554:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], cpu->r[2], 0, 0);
    }
L_00170558:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_0017055c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x80u);
    }
L_00170560:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00170564:;
    {
        wr32(cpu->r[4] + + 0x3d4u, cpu->r[2]);
    }
L_00170568:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], cpu->r[1], 0, 0);
    }
L_0017056c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x84u);
    }
L_00170570:;
    {
        uint32_t v = cpu->r[3] & 0x00004000u; cpu->r[3] = v;
    }
L_00170574:;
    {
        wr32(cpu->r[4] + + 0x3d8u, cpu->r[1]);
    }
L_00170578:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
    }
L_0017057c:;
    {
        wr32(cpu->r[4] + + 0x3dcu, cpu->r[2]);
    }
L_00170580:;
    {
        goto L_0016fff0;
    }
L_00170584:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00170588:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017058c:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x2a8u);
    }
L_00170590:;
    {
        cpu->r[14] = 0x00170598u;
    }
L_00170594:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00170598u)) return;
    }
L_00170598:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x374u);
    }
L_0017059c:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 1u, &shc); cpu->r[1] = v;
    }
L_001705a0:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
    }
L_001705a4:;
    {
        uint32_t v = cpu->r[10] * cpu->r[0]; cpu->r[0] = v;
    }
L_001705a8:;
    {
        cpu->r[14] = 0x001705acu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001705ac:;
    {
        wr32(cpu->r[4] + + 0x37cu, cpu->r[0]);
    }
L_001705b0:;
    {
        goto L_0016fc50;
    }
L_001705b4:;
    {
        cpu->r[2] = 0x00001674u;
    }
L_001705b8:;
    {
        cpu->r[3] = 0x0000167cu;
    }
L_001705bc:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001705c0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001705c4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_001705c8:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[12]);
    }
L_001705cc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001705d0:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001705d4:;
    {
        goto L_0016ef64;
    }
L_001705d8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x498u);
    }
L_001705dc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001705e0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001700b4;
        }
    }
L_001705e4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001705e8:;
    {
        cpu->r[14] = 0x001705ecu; fn_0015da48(cpu);
    }
L_001705ec:;
    {
        goto L_001700b4;
    }
L_001705f0:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_001705f4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001705f8:;
    {
        { uint32_t v = cpu->r[2] & 0x00000002u; set_nz(cpu, v); }
    }
L_001705fc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016fc90;
        }
    }
L_00170600:;
    {
        cpu->r[3] = 0x00001660u;
    }
L_00170604:;
    {
        cpu->r[10] = sub_flags(cpu, 0x00000007u, cpu->r[10], 1, 0);
    }
L_00170608:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0017060c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], shifter(cpu->r[10], 2, 1u, &shc), 0, 0);
    }
L_00170610:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00170614:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 1u, &shc); cpu->r[3] = v;
    }
L_00170618:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0017061c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00170f90;
        }
    }
L_00170620:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017065c;
        }
    }
L_00170624:;
    {
        cpu->r[1] = 0x0000166cu;
    }
L_00170628:;
    {
        { uint32_t v = cpu->r[2] & 0x00000010u; set_nz(cpu, v); }
    }
L_0017062c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = (~0x00000005u);
        }
    }
L_00170630:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000006u;
        }
    }
L_00170634:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_00170638:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_0017063c:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[2]);
    }
L_00170640:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00170644:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00170e48;
        }
    }
L_00170648:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_0017064c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00170650:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00170e48;
        }
    }
L_00170654:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00170658:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0017065c:;
    {
        { uint32_t v = cpu->r[2] & 0x00004000u; set_nz(cpu, v); }
    }
L_00170660:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016fcd0;
        }
    }
L_00170664:;
    {
        cpu->r[3] = 0x00000400u;
    }
L_00170668:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x8000u << 16);
    }
L_0017066c:;
    {
        uint32_t v = cpu->r[2] & cpu->r[3]; cpu->r[3] = v;
    }
L_00170670:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00170674:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[14] = 0x00000800u;
        }
    }
L_00170678:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[13] + + 0x14u, cpu->r[14]);
        }
    }
L_0017067c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00170d94;
        }
    }
L_00170680:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00170684:;
    {
        cpu->r[14] = 0x00170688u; fn_0016d76c(cpu);
    }
L_00170688:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x608u);
    }
L_0017068c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00170690:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_00170694:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001706a4;
        }
    }
L_00170698:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x44u);
    }
L_0017069c:;
    {
        { uint32_t v = cpu->r[2] & 0x00000003u; set_nz(cpu, v); }
    }
L_001706a0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001706bc;
        }
    }
L_001706a4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x380u);
    }
L_001706a8:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x14u);
    }
L_001706ac:;
    {
        uint32_t v = cpu->r[1] ^ shifter(cpu->r[1], 1, 31u, &shc); cpu->r[2] = v;
    }
L_001706b0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[1], 1, 31u, &shc), 1, 0);
    }
L_001706b4:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[11], 1, 1);
    }
L_001706b8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00170d64;
        }
    }
L_001706bc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001706c0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001706c4:;
    {
        cpu->r[14] = 0x001706ccu;
    }
L_001706c8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001706ccu)) return;
    }
L_001706cc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x374u);
    }
L_001706d0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001706d4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x608u);
        }
    }
L_001706d8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00170d64;
        }
    }
L_001706dc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x380u);
    }
L_001706e0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001706e4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001710b0;
        }
    }
L_001706e8:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x608u);
    }
L_001706ec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x610u);
    }
L_001706f0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[3], cpu->r[9], 0, 0);
    }
L_001706f4:;
    {
        wr32(cpu->r[4] + + 0x608u, cpu->r[11]);
    }
L_001706f8:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_001706fc:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = cpu->r[11];
        }
    }
L_00170700:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00171124;
        }
    }
L_00170704:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[3], 1, 1);
    }
L_00170708:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00170720;
        }
    }
L_0017070c:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_00170710:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[11] = (~0x00000000u);
        }
    }
L_00170714:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[11] = 0x00000001u;
        }
    }
L_00170718:;
    {
        uint32_t v = cpu->r[10] * cpu->r[11]; cpu->r[11] = v;
    }
L_0017071c:;
    {
        wr32(cpu->r[4] + + 0x608u, cpu->r[11]);
    }
L_00170720:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_00170724:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00170ec4;
        }
    }
L_00170728:;
    {
        uint32_t v = shifter(cpu->r[11], 2, 12u, &shc); cpu->r[11] = v;
    }
L_0017072c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00170730:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00170734:;
    {
        cpu->r[14] = 0x00170738u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00170738:;
    {
        sub_flags(cpu, cpu->r[0], 0x00001000u, 1, 1);
    }
L_0017073c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00170fc8;
        }
    }
L_00170740:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00170744:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00170748:;
    {
        cpu->r[14] = 0x0017074cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0017074c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00170750:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[9] = rd32(cpu->r[4] + + 0x608u);
        }
    }
L_00170754:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00171138;
        }
    }
L_00170758:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_0017075c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00170760:;
    {
        cpu->r[14] = 0x00170764u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00170764:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_00170768:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001f80u, 0, 0);
    }
L_0017076c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000024u, 0, 0);
    }
L_00170770:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_00170774:;
    {
        cpu->r[3] = rd16(cpu->r[3] + + 0x6u);
    }
L_00170778:;
    {
        uint32_t v = cpu->r[10] * cpu->r[3]; cpu->r[10] = v;
    }
L_0017077c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[10], 0x00000ff0u, 0, 0);
    }
L_00170780:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_00170784:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000fu, 0, 0);
    }
L_00170788:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[10] = cpu->r[2];
        }
    }
L_0017078c:;
    {
        uint32_t v = shifter(cpu->r[10], 1, 12u, &shc); cpu->r[3] = v;
    }
L_00170790:;
    {
        wr32(cpu->r[4] + + 0x60cu, cpu->r[3]);
    }
L_00170794:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x37cu);
    }
L_00170798:;
    {
        uint32_t v = cpu->r[3] ^ shifter(cpu->r[3], 1, 31u, &shc); cpu->r[10] = v;
    }
L_0017079c:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], shifter(cpu->r[3], 1, 31u, &shc), 1, 0);
    }
L_001707a0:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000100u, 0, 0);
    }
L_001707a4:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 4u, &shc); cpu->r[3] = v;
    }
L_001707a8:;
    {
        uint32_t v = cpu->r[10] * cpu->r[3]; cpu->r[10] = v;
    }
L_001707ac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], 0x00000ff0u, 0, 0);
    }
L_001707b0:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001707b4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000fu, 0, 0);
    }
L_001707b8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[10] = cpu->r[3];
        }
    }
L_001707bc:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001707c0:;
    {
        uint32_t v = shifter(cpu->r[10], 1, 12u, &shc); cpu->r[10] = v;
    }
L_001707c4:;
    {
        wr32(cpu->r[4] + + 0x37cu, cpu->r[10]);
    }
L_001707c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001707dc;
        }
    }
L_001707cc:;
    {
        cpu->r[3] = 0x0000165cu;
    }
L_001707d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001707d4:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000fu, 1, 1);
    }
L_001707d8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00171078;
        }
    }
L_001707dc:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x380u);
    }
L_001707e0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_001707e4:;
    {
        uint32_t v = cpu->r[10] ^ shifter(cpu->r[10], 1, 31u, &shc); cpu->r[3] = v;
    }
L_001707e8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[10], 1, 31u, &shc), 1, 0);
    }
L_001707ec:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_001707f0:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_001707f4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001707f8:;
    {
        if (cond_test(cpu, 11)) {
        uint32_t v = cpu->r[2] | 0x00000100u; cpu->r[2] = v;
        }
    }
L_001707fc:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = cpu->r[2] & ~ 0x00000100u; cpu->r[2] = v;
        }
    }
L_00170800:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_00170804:;
    {
        goto L_0016fcd4;
    }
L_00170808:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_0017080c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00170810:;
    {
        uint32_t v = cpu->r[3] & ~ 0x00000010u; cpu->r[3] = v;
    }
L_00170814:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_00170818:;
    {
        goto L_0016f904;
    }
L_0017081c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x14u);
    }
L_00170820:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00170824:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_00170828:;
    {
        cpu->r[0] = 0x0000dac0u;
    }
L_0017082c:;
    {
        vfp_vdiv(cpu, 15, 15, 16);
    }
L_00170830:;
    {
        vfp_vmul(cpu, 15, 15, 17);
    }
L_00170834:;
    {
        vfp_vdiv(cpu, 15, 15, 18);
    }
L_00170838:;
    {
        vfp_vmul(cpu, 15, 15, 19);
    }
L_0017083c:;
    {
        vfp_vmul(cpu, 16, 15, 20);
    }
L_00170840:;
    {
        cpu->r[14] = 0x00170844u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00170844:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,21);
    }
L_00170848:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,22);
    }
L_0017084c:;
    {
        *(int32_t*)vfp_s(cpu,16) = (int32_t)*vfp_s(cpu,16);
    }
L_00170850:;
    {
        *vfp_s(cpu,23) = (float)*(int32_t*)vfp_s(cpu,23);
    }
L_00170854:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_00170858:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_0017085c:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,23);
    }
L_00170860:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00170864:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,16);
    }
L_00170868:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0017086c:;
    {
        cpu->r[14] = 0x00170870u; fn_0017fc18(cpu);
    }
L_00170870:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[0];
    }
L_00170874:;
    {
        goto L_0016fee0;
    }
L_00170878:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017087c:;
    {
        cpu->r[14] = 0x00170880u; fn_00162254(cpu);
    }
L_00170880:;
    {
        goto L_0016f834;
    }
L_00170884:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00170888:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_0017088c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00170890:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00170d04;
        }
    }
L_00170894:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00170898:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_0017089c:;
    {
        cpu->r[14] = 0x001708a0u; fn_00093fd8(cpu);
    }
L_001708a0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_001708a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001708d0;
        }
    }
L_001708a8:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_001708ac:;
    {
        cpu->r[3] = rd32(cpu->r[8]);
    }
L_001708b0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001708b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00171100;
        }
    }
L_001708b8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_001708bc:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x4u);
    }
L_001708c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_001708c4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x0000f000u;
        }
    }
L_001708c8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xffffu << 16);
        }
    }
L_001708cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017028c;
        }
    }
L_001708d0:;
    {
        cpu->r[3] = 0x0000f400u;
    }
L_001708d4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xffffu << 16);
    }
L_001708d8:;
    {
        goto L_0017028c;
    }
L_001708dc:;
    {
        cpu->r[1] = 0x00001788u;
    }
L_001708e0:;
    {
        cpu->r[3] = 0x00000400u;
    }
L_001708e4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x8000u << 16);
    }
L_001708e8:;
    {
        cpu->r[2] = 0x00000c00u;
    }
L_001708ec:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_001708f0:;
    {
        uint32_t v = cpu->r[1] & cpu->r[3]; cpu->r[3] = v;
    }
L_001708f4:;
    {
        goto L_0016fcec;
    }
L_001708f8:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001708fc:;
    {
        cpu->r[14] = 0x00170900u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00170900:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00170904:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00170414;
        }
    }
L_00170908:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_0017090c:;
    {
        cpu->r[14] = 0x00170910u; fn_00094228(cpu);
    }
L_00170910:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00170914:;
    {
        cpu->r[14] = 0x00170918u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00170918:;
    {
        goto L_00170414;
    }
L_0017091c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00170920:;
    {
        cpu->r[14] = 0x00170924u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00170924:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00170928:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001703c4;
        }
    }
L_0017092c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00170930:;
    {
        cpu->r[14] = 0x00170934u; fn_00094228(cpu);
    }
L_00170934:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00170938:;
    {
        cpu->r[14] = 0x0017093cu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_0017093c:;
    {
        goto L_001703c4;
    }
L_00170940:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00170944:;
    {
        cpu->r[14] = 0x00170948u; fn_0016cb70(cpu);
    }
L_00170948:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
    }
L_0017094c:;
    {
        wr32(cpu->r[4] + + 0x380u, cpu->r[0]);
    }
L_00170950:;
    {
        goto L_00170298;
    }
L_00170954:;
    {
        cpu->r[3] = rd32(cpu->r[10] + + 0x3d4u);
    }
L_00170958:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000094u, 0, 0);
    }
L_0017095c:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_00170960:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00170964:;
    {
        cpu->r[2] = rd32(cpu->r[10] + + 0x3d8u);
    }
L_00170968:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], cpu->r[3], 1, 0);
    }
L_0017096c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_00170970:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_00170974:;
    {
        cpu->r[14] = rd32(cpu->r[10] + + 0x3dcu);
    }
L_00170978:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 0);
    }
L_0017097c:;
    {
        cpu->r[2] = rd32(cpu->r[10]);
    }
L_00170980:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[3], cpu->r[14], 1, 0);
    }
L_00170984:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_00170988:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[14]);
    }
L_0017098c:;
    {
        cpu->r[14] = 0x00170994u;
    }
L_00170990:;
    {
        uint32_t t = rd32(cpu->r[2] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00170994u)) return;
    }
L_00170994:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x94u);
    }
L_00170998:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x98u);
    }
L_0017099c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000088u, 0, 0);
    }
L_001709a0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_001709a4:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_001709a8:;
    {
        uint32_t v = cpu->r[2] * cpu->r[11]; cpu->r[2] = v;
    }
L_001709ac:;
    {
        cpu->r[11] = rd32(cpu->r[10] + + 0x3d4u);
    }
L_001709b0:;
    {
        uint32_t v = cpu->r[3] * cpu->r[12] + cpu->r[2]; cpu->r[2] = v;
    }
L_001709b4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_001709b8:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_001709bc:;
    {
        cpu->r[14] = rd32(cpu->r[10] + + 0x3d8u);
    }
L_001709c0:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_001709c4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_001709c8:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[12]);
    }
L_001709cc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_001709d0:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[3]);
    }
L_001709d4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x9cu);
    }
L_001709d8:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[11]);
    }
L_001709dc:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[14]);
    }
L_001709e0:;
    {
        uint32_t v = cpu->r[3] * cpu->r[12] + cpu->r[2]; cpu->r[11] = v;
    }
L_001709e4:;
    {
        cpu->r[14] = rd32(cpu->r[10] + + 0x3dcu);
    }
L_001709e8:;
    {
        cpu->r[2] = rd32(cpu->r[10]);
    }
L_001709ec:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[14]);
    }
L_001709f0:;
    {
        cpu->r[14] = 0x001709f8u;
    }
L_001709f4:;
    {
        uint32_t t = rd32(cpu->r[2] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001709f8u)) return;
    }
L_001709f8:;
    {
        cpu->r[3] = 0x000009c2u;
    }
L_001709fc:;
    {
        uint32_t v = shifter(cpu->r[11], 1, 12u, &shc); cpu->r[12] = v;
    }
L_00170a00:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x88u);
    }
L_00170a04:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 0);
    }
L_00170a08:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8cu);
    }
L_00170a0c:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_00170a10:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x90u);
    }
L_00170a14:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00170d28;
        }
    }
L_00170a18:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_00170a1c:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        uint32_t v3 = rd32(ea + 12u);
        cpu->r[3] = v0;
        cpu->r[11] = v1;
        cpu->r[12] = v2;
        cpu->r[14] = v3;
    }
L_00170a20:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[11], 1, 0);
    }
L_00170a24:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00170a28:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_00170a2c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[12], cpu->r[14], 1, 0);
    }
L_00170a30:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_00170a34:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[11], cpu->r[14], 1, 0);
    }
L_00170a38:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00170a3c:;
    {
        uint32_t v = cpu->r[0] * cpu->r[11]; cpu->r[0] = v;
    }
L_00170a40:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3] + cpu->r[0]; cpu->r[3] = v;
    }
L_00170a44:;
    {
        uint32_t v = cpu->r[2] * cpu->r[12] + cpu->r[3]; cpu->r[3] = v;
    }
L_00170a48:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 12u, &shc); cpu->r[3] = v;
    }
L_00170a4c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000063u, 0, 0);
    }
L_00170a50:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000c6u, 1, 1);
    }
L_00170a54:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00170d28;
        }
    }
L_00170a58:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_00170a5c:;
    {
        cpu->r[2] = 0x00001ca0u;
    }
L_00170a60:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00170a64:;
    {
        wr8(cpu->r[10] + cpu->r[2], cpu->r[1]);
    }
L_00170a68:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[9]);
    }
L_00170a6c:;
    {
        goto L_0016fa0c;
    }
L_00170a70:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x608u);
    }
L_00170a74:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00170a78:;
    {
        uint32_t v = cpu->r[3] ^ shifter(cpu->r[3], 1, 31u, &shc); cpu->r[10] = v;
    }
L_00170a7c:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[10], shifter(cpu->r[3], 1, 31u, &shc), 1, 0);
    }
L_00170a80:;
    {
        cpu->r[14] = 0x00170a84u; fn_0016d76c(cpu);
    }
L_00170a84:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[10], 1, 1);
    }
L_00170a88:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00001788u;
        }
    }
L_00170a8c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_00170a90:;
    {
        if (cond_test(cpu, 14)) {
        uint32_t v = cpu->r[2] | 0x00000001u; cpu->r[2] = v;
        }
    }
L_00170a94:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
        }
    }
L_00170a98:;
    {
        goto L_0016f7bc;
    }
L_00170a9c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00170aa0:;
    {
        cpu->r[14] = 0x00170aa4u; fn_00165d90(cpu);
    }
L_00170aa4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_00170aa8:;
    {
        cpu->r[0] = 0x00001bc8u;
    }
L_00170aac:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_00170ab0:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[12]);
    }
L_00170ab4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[10]);
    }
L_00170ab8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00170abc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0016fa20;
        }
    }
L_00170ac0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00170ac4:;
    {
        cpu->r[2] = 0x00008cbcu;
    }
L_00170ac8:;
    {
        cpu->r[3] = 0x00008cc4u;
    }
L_00170acc:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_00170ad0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00170ad4:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00170ad8:;
    {
        cpu->r[12] = rd32(cpu->r[1] + cpu->r[0]);
    }
L_00170adc:;
    {
        cpu->r[14] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_00170ae0:;
    {
        cpu->r[10] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_00170ae4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[14], cpu->r[10], 0, 0);
    }
L_00170ae8:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_00170aec:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_00170af0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00170b44;
        }
    }
L_00170af4:;
    {
        uint32_t v = shifter(cpu->r[14], 2, 2u, &shc); cpu->r[2] = v;
    }
L_00170af8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00170afc:;
    {
        cpu->r[11] = 0x00008cb8u;
    }
L_00170b00:;
    {
        cpu->r[9] = 0x00008cc0u;
    }
L_00170b04:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000000u, cpu->r[2], 1, 0);
    }
L_00170b08:;
    {
        cpu->r[11] = (cpu->r[11] & 0xffffu) | (0x0001u << 16);
    }
L_00170b0c:;
    {
        cpu->r[9] = (cpu->r[9] & 0xffffu) | (0x0001u << 16);
    }
L_00170b10:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00170b14:;
    {
        sub_flags(cpu, cpu->r[14], cpu->r[3], 1, 1);
    }
L_00170b18:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[9]);
        }
    }
L_00170b1c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[11]);
        }
    }
L_00170b20:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
        }
    }
L_00170b24:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_00170b28:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
        }
    }
L_00170b2c:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_00170b30:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[0], 1, 1);
    }
L_00170b34:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = cpu->r[3];
        }
    }
L_00170b38:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00170b3c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_00170b40:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00170b14;
        }
    }
L_00170b44:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x354u);
    }
L_00170b48:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00170b4c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_00170b50:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00170b54:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00170b58:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00170b5c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00170b60:;
    {
        cpu->r[14] = 0x00170b64u; fn_0009962c(cpu);
    }
L_00170b64:;
    {
        goto L_0016fa20;
    }
L_00170b68:;
    {
        { uint32_t v = cpu->r[2] & 0x00100000u; set_nz(cpu, v); }
    }
L_00170b6c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016fff0;
        }
    }
L_00170b70:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000007cu, 0, 0);
    }
L_00170b74:;
    {
        cpu->r[14] = 0x00170b78u; fn_0018572c(cpu);
    }
L_00170b78:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00170b7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001701f4;
        }
    }
L_00170b80:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000070u, 0, 0);
    }
L_00170b84:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00170b88:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00170b8c:;
    {
        cpu->r[14] = 0x00170b94u;
    }
L_00170b90:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00170b94u)) return;
    }
L_00170b94:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x70u);
    }
L_00170b98:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x7cu);
    }
L_00170b9c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000064u, 0, 0);
    }
L_00170ba0:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x74u);
    }
L_00170ba4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00170ba8:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x78u);
    }
L_00170bac:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_00170bb0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x80u);
    }
L_00170bb4:;
    {
        uint32_t v = cpu->r[12] * cpu->r[2] + cpu->r[3]; cpu->r[2] = v;
    }
L_00170bb8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x84u);
    }
L_00170bbc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00170bc0:;
    {
        uint32_t v = cpu->r[5] * cpu->r[12] + cpu->r[2]; cpu->r[5] = v;
    }
L_00170bc4:;
    {
        cpu->r[14] = 0x00170bccu;
    }
L_00170bc8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00170bccu)) return;
    }
L_00170bcc:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x64u);
    }
L_00170bd0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x7cu);
    }
L_00170bd4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x68u);
    }
L_00170bd8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x6cu);
    }
L_00170bdc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x84u);
    }
L_00170be0:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 12u, &shc); cpu->r[5] = v;
    }
L_00170be4:;
    {
        uint32_t v = cpu->r[5] ^ shifter(cpu->r[5], 1, 31u, &shc); cpu->r[3] = v;
    }
L_00170be8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[5], 1, 31u, &shc), 1, 0);
    }
L_00170bec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00170bf0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x80u);
    }
L_00170bf4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001701f4;
        }
    }
L_00170bf8:;
    {
        uint32_t v = cpu->r[14] * cpu->r[0]; cpu->r[14] = v;
    }
L_00170bfc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000058u, 0, 0);
    }
L_00170c00:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3] + cpu->r[14]; cpu->r[14] = v;
    }
L_00170c04:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00170c08:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00170c0c:;
    {
        uint32_t v = cpu->r[12] * cpu->r[2] + cpu->r[14]; cpu->r[2] = v;
    }
L_00170c10:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 12u, &shc); cpu->r[5] = v;
    }
L_00170c14:;
    {
        cpu->r[14] = 0x00170c1cu;
    }
L_00170c18:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00170c1cu)) return;
    }
L_00170c1c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x5cu);
    }
L_00170c20:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_00170c24:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x58u);
    }
L_00170c28:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00170c2c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x60u);
    }
L_00170c30:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00170c34:;
    {
        uint32_t v = cpu->r[7] * cpu->r[5]; cpu->r[7] = v;
    }
L_00170c38:;
    {
        uint32_t v = cpu->r[6] * cpu->r[5]; cpu->r[6] = v;
    }
L_00170c3c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[5]; cpu->r[5] = v;
    }
L_00170c40:;
    {
        cpu->r[14] = 0x00170c48u;
    }
L_00170c44:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00170c48u)) return;
    }
L_00170c48:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4cu);
    }
L_00170c4c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x50u);
    }
L_00170c50:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00170c54:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x54u);
    }
L_00170c58:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[7], cpu->r[0], 0, 0);
    }
L_00170c5c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00170c60:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], cpu->r[1], 0, 0);
    }
L_00170c64:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], cpu->r[2], 0, 0);
    }
L_00170c68:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 12u, &shc); cpu->r[0] = v;
    }
L_00170c6c:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 12u, &shc); cpu->r[1] = v;
    }
L_00170c70:;
    {
        wr32(cpu->r[13] + + 0x7cu, cpu->r[0]);
    }
L_00170c74:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 12u, &shc); cpu->r[2] = v;
    }
L_00170c78:;
    {
        wr32(cpu->r[13] + + 0x80u, cpu->r[1]);
    }
L_00170c7c:;
    {
        wr32(cpu->r[13] + + 0x84u, cpu->r[2]);
    }
L_00170c80:;
    {
        uint32_t v = cpu->r[3] & 0x00004000u; cpu->r[3] = v;
    }
L_00170c84:;
    {
        goto L_0016fff0;
    }
L_00170c88:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00170c8c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000044u, 0, 0);
    }
L_00170c90:;
    {
        cpu->r[14] = 0x00170c94u; fn_0016631c(cpu);
    }
L_00170c94:;
    {
        goto L_0016f874;
    }
L_00170c98:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00170c9c:;
    {
        cpu->r[14] = 0x00170ca0u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00170ca0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00170ca4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00170438;
        }
    }
L_00170ca8:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00170cac:;
    {
        cpu->r[14] = 0x00170cb0u; fn_00094228(cpu);
    }
L_00170cb0:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00170cb4:;
    {
        cpu->r[14] = 0x00170cb8u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00170cb8:;
    {
        goto L_00170438;
    }
L_00170cbc:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00170cc0:;
    {
        cpu->r[14] = 0x00170cc4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00170cc4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00170cc8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001703e8;
        }
    }
L_00170ccc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00170cd0:;
    {
        cpu->r[14] = 0x00170cd4u; fn_00094228(cpu);
    }
L_00170cd4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00170cd8:;
    {
        cpu->r[14] = 0x00170cdcu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00170cdc:;
    {
        goto L_001703e8;
    }
L_00170ce0:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00170ce4:;
    {
        cpu->r[14] = 0x00170ce8u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00170ce8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00170cec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00170124;
        }
    }
L_00170cf0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00170cf4:;
    {
        cpu->r[14] = 0x00170cf8u; fn_00094228(cpu);
    }
L_00170cf8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00170cfc:;
    {
        cpu->r[14] = 0x00170d00u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00170d00:;
    {
        goto L_00170124;
    }
L_00170d04:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00170d08:;
    {
        cpu->r[14] = 0x00170d0cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00170d0c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00170d10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00170894;
        }
    }
L_00170d14:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00170d18:;
    {
        cpu->r[14] = 0x00170d1cu; fn_00094228(cpu);
    }
L_00170d1c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00170d20:;
    {
        cpu->r[14] = 0x00170d24u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00170d24:;
    {
        goto L_00170894;
    }
L_00170d28:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_00170d2c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[9]);
    }
L_00170d30:;
    {
        goto L_0016fa0c;
    }
L_00170d34:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00170d38:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_00170d3c:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00170d40:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00170d44:;
    {
        goto L_0017065c;
    }
L_00170d48:;
    {
        add_flags(cpu, cpu->r[3], 0x00000003u, 0, 1);
    }
L_00170d4c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00170d34;
        }
    }
L_00170d50:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00170d54:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_00170d58:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00170d5c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00170d60:;
    {
        goto L_0017065c;
    }
L_00170d64:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x614u);
    }
L_00170d68:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[3], 1, 1);
    }
L_00170d6c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00170f3c;
        }
    }
L_00170d70:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[11], shifter(cpu->r[11], 3, 31u, &shc), 0, 0);
    }
L_00170d74:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x88u);
    }
L_00170d78:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[3], cpu->r[11], 1, 0);
    }
L_00170d7c:;
    {
        wr32(cpu->r[4] + + 0x608u, cpu->r[11]);
    }
L_00170d80:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], shifter(cpu->r[1], 1, 1u, &shc), 0, 0);
    }
L_00170d84:;
    {
        wr32(cpu->r[4] + + 0x88u, cpu->r[3]);
    }
L_00170d88:;
    {
        uint32_t v = cpu->r[11] ^ shifter(cpu->r[11], 1, 31u, &shc); cpu->r[3] = v;
    }
L_00170d8c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[11], 1, 31u, &shc), 1, 0);
    }
L_00170d90:;
    {
        goto L_00170704;
    }
L_00170d94:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00170d98:;
    {
        cpu->r[3] = rd32(cpu->r[10]);
    }
L_00170d9c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00170da0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00171054;
        }
    }
L_00170da4:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00170da8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00170dac:;
    {
        cpu->r[14] = 0x00170db0u; fn_00093fd8(cpu);
    }
L_00170db0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_00170db4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00170de0;
        }
    }
L_00170db8:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_00170dbc:;
    {
        cpu->r[3] = rd32(cpu->r[9]);
    }
L_00170dc0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00170dc4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001711ac;
        }
    }
L_00170dc8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00170dcc:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x4u);
    }
L_00170dd0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_00170dd4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00001000u;
        }
    }
L_00170dd8:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
        }
    }
L_00170ddc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00170680;
        }
    }
L_00170de0:;
    {
        cpu->r[1] = 0x00000c00u;
    }
L_00170de4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[1]);
    }
L_00170de8:;
    {
        goto L_00170680;
    }
L_00170dec:;
    {
        cpu->r[9] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00170df0:;
    {
        cpu->r[1] = 0x0000007bu;
    }
L_00170df4:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_00170df8:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_00170dfc:;
    {
        cpu->r[0] = rd32(cpu->r[9]);
    }
L_00170e00:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00170e04:;
    {
        cpu->r[14] = 0x00170e08u; fn_000fd224(cpu);
    }
L_00170e08:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_00170e0c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00171214;
        }
    }
L_00170e10:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_00170e14:;
    {
        cpu->r[10] = rd32(cpu->r[3] + + 0x490u);
    }
L_00170e18:;
    {
        cpu->r[14] = 0x00170e1cu; fn_000979a0(cpu);
    }
L_00170e1c:;
    {
        cpu->r[14] = 0x00170e20u; fn_00093fc8(cpu);
    }
L_00170e20:;
    {
        cpu->r[1] = 0x0000007bu;
    }
L_00170e24:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00170e28:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 3, 31u, &shc), 0, 0);
    }
L_00170e2c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00170e30:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 1u, &shc); cpu->r[3] = v;
    }
L_00170e34:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_00170e38:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00170e3c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00170e40:;
    {
        cpu->r[14] = 0x00170e44u; fn_000fd1d0(cpu);
    }
L_00170e44:;
    {
        goto L_0016f8dc;
    }
L_00170e48:;
    {
        cpu->r[1] = 0x00001788u;
    }
L_00170e4c:;
    {
        cpu->r[0] = 0x0000166cu;
    }
L_00170e50:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_00170e54:;
    {
        wr32(cpu->r[4] + cpu->r[0], cpu->r[3]);
    }
L_00170e58:;
    {
        uint32_t v = cpu->r[2] | 0x00000002u; cpu->r[2] = v;
    }
L_00170e5c:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[2]);
    }
L_00170e60:;
    {
        goto L_0017065c;
    }
L_00170e64:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00170e68:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00170e6c:;
    {
        cpu->r[14] = 0x00170e74u;
    }
L_00170e70:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00170e74u)) return;
    }
L_00170e74:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x374u);
    }
L_00170e78:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_00170e7c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00171008;
        }
    }
L_00170e80:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00170e84:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00170e88:;
    {
        cpu->r[14] = 0x00170e90u;
    }
L_00170e8c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00170e90u)) return;
    }
L_00170e90:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00170e94:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[4] + + 0x37cu, cpu->r[9]);
        }
    }
L_00170e98:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0016fc50;
        }
    }
L_00170e9c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00170ea0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00170ea4:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x2a8u);
    }
L_00170ea8:;
    {
        cpu->r[14] = 0x00170eb0u;
    }
L_00170eac:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00170eb0u)) return;
    }
L_00170eb0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x374u);
    }
L_00170eb4:;
    {
        uint32_t v = cpu->r[10] * cpu->r[0]; cpu->r[0] = v;
    }
L_00170eb8:;
    {
        cpu->r[14] = 0x00170ebcu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00170ebc:;
    {
        wr32(cpu->r[4] + + 0x37cu, cpu->r[0]);
    }
L_00170ec0:;
    {
        goto L_0016fc50;
    }
L_00170ec4:;
    {
        uint32_t v = shifter(cpu->r[11], 2, 12u, &shc); cpu->r[11] = v;
    }
L_00170ec8:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00170ecc:;
    {
        cpu->r[11] = sub_flags(cpu, 0x00000000u, cpu->r[11], 1, 0);
    }
L_00170ed0:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00170ed4:;
    {
        cpu->r[14] = 0x00170ed8u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00170ed8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00001000u, 1, 1);
    }
L_00170edc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001711d0;
        }
    }
L_00170ee0:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00170ee4:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00170ee8:;
    {
        cpu->r[14] = 0x00170eecu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00170eec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00170ef0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[9] = rd32(cpu->r[4] + + 0x608u);
        }
    }
L_00170ef4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00171234;
        }
    }
L_00170ef8:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00170efc:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00170f00:;
    {
        cpu->r[14] = 0x00170f04u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00170f04:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_00170f08:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00001f80u, 0, 0);
    }
L_00170f0c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000024u, 0, 0);
    }
L_00170f10:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_00170f14:;
    {
        cpu->r[3] = rd16(cpu->r[3] + + 0x6u);
    }
L_00170f18:;
    {
        uint32_t v = cpu->r[10] * cpu->r[3]; cpu->r[10] = v;
    }
L_00170f1c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], 0x00000ff0u, 0, 0);
    }
L_00170f20:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_00170f24:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000fu, 0, 0);
    }
L_00170f28:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[10] = cpu->r[3];
        }
    }
L_00170f2c:;
    {
        uint32_t v = shifter(cpu->r[10], 1, 12u, &shc); cpu->r[3] = v;
    }
L_00170f30:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_00170f34:;
    {
        wr32(cpu->r[4] + + 0x60cu, cpu->r[3]);
    }
L_00170f38:;
    {
        goto L_00170794;
    }
L_00170f3c:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000000u, cpu->r[11], 1, 0);
    }
L_00170f40:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00170f44:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00170f48:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + + 0x608u, cpu->r[3]);
        }
    }
L_00170f4c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[11] = cpu->r[3];
        }
    }
L_00170f50:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00170704;
        }
    }
L_00170f54:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x88u);
    }
L_00170f58:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[11], shifter(cpu->r[11], 3, 31u, &shc), 0, 0);
    }
L_00170f5c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[3], cpu->r[11], 0, 0);
    }
L_00170f60:;
    {
        wr32(cpu->r[4] + + 0x608u, cpu->r[11]);
    }
L_00170f64:;
    {
        uint32_t v = cpu->r[11] ^ shifter(cpu->r[11], 1, 31u, &shc); cpu->r[3] = v;
    }
L_00170f68:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[11], 1, 31u, &shc), 1, 0);
    }
L_00170f6c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], shifter(cpu->r[2], 1, 1u, &shc), 1, 0);
    }
L_00170f70:;
    {
        wr32(cpu->r[4] + + 0x88u, cpu->r[2]);
    }
L_00170f74:;
    {
        goto L_00170704;
    }
L_00170f78:;
    {
        cpu->r[3] = 0x00003e80u;
    }
L_00170f7c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_00170f80:;
    {
        cpu->r[3] = rd8(cpu->r[1] + cpu->r[3]);
    }
L_00170f84:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00170f88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0016f820;
        }
    }
L_00170f8c:;
    {
        goto L_0016f818;
    }
L_00170f90:;
    {
        cpu->r[1] = 0x0000166cu;
    }
L_00170f94:;
    {
        { uint32_t v = cpu->r[2] & 0x00000010u; set_nz(cpu, v); }
    }
L_00170f98:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = (~0x00000005u);
        }
    }
L_00170f9c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000006u;
        }
    }
L_00170fa0:;
    {
        cpu->r[12] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_00170fa4:;
    {
        cpu->r[14] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_00170fa8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[14], cpu->r[0], 1, 0);
    }
L_00170fac:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[0]);
    }
L_00170fb0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 1);
    }
L_00170fb4:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[12]);
        }
    }
L_00170fb8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0017065c;
        }
    }
L_00170fbc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_00170fc0:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[3]);
        }
    }
L_00170fc4:;
    {
        goto L_0017065c;
    }
L_00170fc8:;
    {
        cpu->r[1] = rd32(0x00170fd0u + - 0xdacu);
    }
L_00170fcc:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00170fd0:;
    {
        cpu->r[12] = rd32(0x00170fd8u + - 0xdb0u);
    }
L_00170fd4:;
    {
        cpu->r[14] = 0x000010c0u;
    }
L_00170fd8:;
    {
        cpu->r[2] = rd32(0x00170fe0u + - 0xdb4u);
    }
L_00170fdc:;
    {
        cpu->r[1] = add_flags(cpu, 0x00170fe4u, cpu->r[1], 0, 0);
    }
L_00170fe0:;
    {
        cpu->r[3] = rd32(0x00170fe8u + - 0xdb8u);
    }
L_00170fe4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00170fecu, cpu->r[12], 0, 0);
    }
L_00170fe8:;
    {
        cpu->r[2] = add_flags(cpu, 0x00170ff0u, cpu->r[2], 0, 0);
    }
L_00170fec:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000184u, 0, 0);
    }
L_00170ff0:;
    {
        cpu->r[3] = add_flags(cpu, 0x00170ff8u, cpu->r[3], 0, 0);
    }
L_00170ff4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00170ff8:;
    {
        cpu->r[14] = 0x00170ffcu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00170ffc:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x608u);
    }
L_00171000:;
    {
        uint32_t v = shifter(cpu->r[9], 2, 12u, &shc); cpu->r[11] = v;
    }
L_00171004:;
    {
        goto L_00170740;
    }
L_00171008:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0017100c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00171010:;
    {
        cpu->r[14] = 0x00171018u;
    }
L_00171014:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00171018u)) return;
    }
L_00171018:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x340u);
    }
L_0017101c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x374u);
    }
L_00171020:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x2a8u);
    }
L_00171024:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00171028:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_0017102c:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x2a8u);
    }
L_00171030:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0x298u);
    }
L_00171034:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[10], 1, 0);
    }
L_00171038:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_0017103c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_00171040:;
    {
        uint32_t v = cpu->r[2] * cpu->r[0]; cpu->r[0] = v;
    }
L_00171044:;
    {
        cpu->r[14] = 0x00171048u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00171048:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[10], 0, 0);
    }
L_0017104c:;
    {
        wr32(cpu->r[4] + + 0x37cu, cpu->r[0]);
    }
L_00171050:;
    {
        goto L_0016fc50;
    }
L_00171054:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00171058:;
    {
        cpu->r[14] = 0x0017105cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0017105c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00171060:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00170da4;
        }
    }
L_00171064:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00171068:;
    {
        cpu->r[14] = 0x0017106cu; fn_00094228(cpu);
    }
L_0017106c:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00171070:;
    {
        cpu->r[14] = 0x00171074u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00171074:;
    {
        goto L_00170da4;
    }
L_00171078:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0017107c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00171080:;
    {
        wr32(cpu->r[4] + + 0x608u, cpu->r[3]);
    }
L_00171084:;
    {
        uint32_t v = shifter(cpu->r[10], 2, 4u, &shc); cpu->r[10] = v;
    }
L_00171088:;
    {
        cpu->r[14] = 0x0017108cu; fn_0016d76c(cpu);
    }
L_0017108c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000100u, 0, 0);
    }
L_00171090:;
    {
        uint32_t v = cpu->r[0] * cpu->r[10]; cpu->r[10] = v;
    }
L_00171094:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[10], 0x00000ff0u, 0, 0);
    }
L_00171098:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_0017109c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000fu, 0, 0);
    }
L_001710a0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[10] = cpu->r[3];
        }
    }
L_001710a4:;
    {
        uint32_t v = shifter(cpu->r[10], 1, 12u, &shc); cpu->r[3] = v;
    }
L_001710a8:;
    {
        wr32(cpu->r[4] + + 0x37cu, cpu->r[3]);
    }
L_001710ac:;
    {
        goto L_001707dc;
    }
L_001710b0:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x608u);
    }
L_001710b4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x610u);
    }
L_001710b8:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 0);
    }
L_001710bc:;
    {
        wr32(cpu->r[4] + + 0x608u, cpu->r[11]);
    }
L_001710c0:;
    {
        sub_flags(cpu, cpu->r[11], 0x00000000u, 1, 1);
    }
L_001710c4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[11], 1, 0);
        }
    }
L_001710c8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[11] = sub_flags(cpu, cpu->r[11], cpu->r[3], 1, 0);
        }
    }
L_001710cc:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x608u, cpu->r[11]);
        }
    }
L_001710d0:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = cpu->r[11] ^ shifter(cpu->r[11], 1, 31u, &shc); cpu->r[3] = v;
        }
    }
L_001710d4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[11], 1, 31u, &shc), 1, 0);
        }
    }
L_001710d8:;
    {
        goto L_00170704;
    }
L_001710dc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001710e0:;
    {
        cpu->r[14] = 0x001710e4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001710e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001710e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00170148;
        }
    }
L_001710ec:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001710f0:;
    {
        cpu->r[14] = 0x001710f4u; fn_00094228(cpu);
    }
L_001710f4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001710f8:;
    {
        cpu->r[14] = 0x001710fcu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001710fc:;
    {
        goto L_00170148;
    }
L_00171100:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00171104:;
    {
        cpu->r[14] = 0x00171108u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_00171108:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017110c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001708b8;
        }
    }
L_00171110:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00171114:;
    {
        cpu->r[14] = 0x00171118u; fn_00094228(cpu);
    }
L_00171118:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0017111c:;
    {
        cpu->r[14] = 0x00171120u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00171120:;
    {
        goto L_001708b8;
    }
L_00171124:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], cpu->r[3], 0, 0);
    }
L_00171128:;
    {
        wr32(cpu->r[4] + + 0x608u, cpu->r[11]);
    }
L_0017112c:;
    {
        uint32_t v = cpu->r[11] ^ shifter(cpu->r[11], 1, 31u, &shc); cpu->r[3] = v;
    }
L_00171130:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[11], 1, 31u, &shc), 1, 0);
    }
L_00171134:;
    {
        goto L_00170704;
    }
L_00171138:;
    {
        cpu->r[1] = rd32(0x00171140u + - 0xf0cu);
    }
L_0017113c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00171140:;
    {
        cpu->r[12] = rd32(0x00171148u + - 0xf10u);
    }
L_00171144:;
    {
        cpu->r[14] = 0x000010c1u;
    }
L_00171148:;
    {
        cpu->r[2] = rd32(0x00171150u + - 0xf14u);
    }
L_0017114c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00171154u, cpu->r[1], 0, 0);
    }
L_00171150:;
    {
        cpu->r[3] = rd32(0x00171158u + - 0xf18u);
    }
L_00171154:;
    {
        cpu->r[12] = add_flags(cpu, 0x0017115cu, cpu->r[12], 0, 0);
    }
L_00171158:;
    {
        cpu->r[2] = add_flags(cpu, 0x00171160u, cpu->r[2], 0, 0);
    }
L_0017115c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000184u, 0, 0);
    }
L_00171160:;
    {
        cpu->r[3] = add_flags(cpu, 0x00171168u, cpu->r[3], 0, 0);
    }
L_00171164:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00171168:;
    {
        cpu->r[14] = 0x0017116cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0017116c:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x608u);
    }
L_00171170:;
    {
        uint32_t v = shifter(cpu->r[9], 2, 12u, &shc); cpu->r[11] = v;
    }
L_00171174:;
    {
        goto L_00170758;
    }
L_00171178:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4d4u);
    }
L_0017117c:;
    {
        cpu->r[14] = 0x00171180u; fn_00171b64(cpu);
    }
L_00171180:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00171184:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000006u, 1, 0);
    }
L_00171188:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[10], 1, 1);
    }
L_0017118c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0016f21c;
        }
    }
L_00171190:;
    {
        cpu->r[2] = rd32(cpu->r[6]);
    }
L_00171194:;
    {
        cpu->r[3] = 0x00004344u;
    }
L_00171198:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_0017119c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001711a0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[5]);
    }
L_001711a4:;
    {
        wr32(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_001711a8:;
    {
        goto L_0016f21c;
    }
L_001711ac:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001711b0:;
    {
        cpu->r[14] = 0x001711b4u; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_001711b4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001711b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00170dc8;
        }
    }
L_001711bc:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001711c0:;
    {
        cpu->r[14] = 0x001711c4u; fn_00094228(cpu);
    }
L_001711c4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001711c8:;
    {
        cpu->r[14] = 0x001711ccu; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_001711cc:;
    {
        goto L_00170dc8;
    }
L_001711d0:;
    {
        cpu->r[1] = rd32(0x001711d8u + - 0xf94u);
    }
L_001711d4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001711d8:;
    {
        cpu->r[12] = rd32(0x001711e0u + - 0xf98u);
    }
L_001711dc:;
    {
        cpu->r[14] = 0x000010c6u;
    }
L_001711e0:;
    {
        cpu->r[2] = rd32(0x001711e8u + - 0xf9cu);
    }
L_001711e4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001711ecu, cpu->r[1], 0, 0);
    }
L_001711e8:;
    {
        cpu->r[3] = rd32(0x001711f0u + - 0xfa0u);
    }
L_001711ec:;
    {
        cpu->r[12] = add_flags(cpu, 0x001711f4u, cpu->r[12], 0, 0);
    }
L_001711f0:;
    {
        cpu->r[2] = add_flags(cpu, 0x001711f8u, cpu->r[2], 0, 0);
    }
L_001711f4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000184u, 0, 0);
    }
L_001711f8:;
    {
        cpu->r[3] = add_flags(cpu, 0x00171200u, cpu->r[3], 0, 0);
    }
L_001711fc:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00171200:;
    {
        cpu->r[14] = 0x00171204u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00171204:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x608u);
    }
L_00171208:;
    {
        uint32_t v = shifter(cpu->r[9], 2, 12u, &shc); cpu->r[9] = v;
    }
L_0017120c:;
    {
        cpu->r[11] = sub_flags(cpu, 0x00000000u, cpu->r[9], 1, 0);
    }
L_00171210:;
    {
        goto L_00170ee0;
    }
L_00171214:;
    {
        cpu->r[0] = rd32(cpu->r[9]);
    }
L_00171218:;
    {
        cpu->r[3] = cpu->r[10];
    }
L_0017121c:;
    {
        cpu->r[1] = 0x0000007bu;
    }
L_00171220:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00171224:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x490u);
    }
L_00171228:;
    {
        wr32(cpu->r[13], cpu->r[10]);
    }
L_0017122c:;
    {
        cpu->r[14] = 0x00171230u; fn_000fd248(cpu);
    }
L_00171230:;
    {
        goto L_00170e10;
    }
L_00171234:;
    {
        cpu->r[1] = rd32(0x0017123cu + + 0x40u);
    }
L_00171238:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0017123c:;
    {
        cpu->r[12] = rd32(0x00171244u + + 0x3cu);
    }
L_00171240:;
    {
        cpu->r[14] = 0x000010c7u;
    }
L_00171244:;
    {
        cpu->r[2] = rd32(0x0017124cu + + 0x38u);
    }
L_00171248:;
    {
        cpu->r[1] = add_flags(cpu, 0x00171250u, cpu->r[1], 0, 0);
    }
L_0017124c:;
    {
        cpu->r[3] = rd32(0x00171254u + + 0x34u);
    }
L_00171250:;
    {
        cpu->r[12] = add_flags(cpu, 0x00171258u, cpu->r[12], 0, 0);
    }
L_00171254:;
    {
        cpu->r[2] = add_flags(cpu, 0x0017125cu, cpu->r[2], 0, 0);
    }
L_00171258:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000184u, 0, 0);
    }
L_0017125c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00171264u, cpu->r[3], 0, 0);
    }
L_00171260:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00171264:;
    {
        cpu->r[11] = 0x0000f000u;
    }
L_00171268:;
    {
        cpu->r[14] = 0x0017126cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0017126c:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x608u);
    }
L_00171270:;
    {
        cpu->r[11] = (cpu->r[11] & 0xffffu) | (0xffffu << 16);
    }
L_00171274:;
    {
        uint32_t v = cpu->r[11] * cpu->r[9]; cpu->r[11] = v;
    }
L_00171278:;
    {
        goto L_00170ef8;
    }
}

/* _ZN4CCar24UpdateAIBeforeCollisionsEPK10RoadStructR11CMultiArrayIPS_E @ 0017128c (arm) */
void fn_0017128c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017128c:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x5a0u);
    }
L_00171290:;
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
L_00171294:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00171298:;
    {
        cpu->r[5] = rd32(0x001712a0u + + 0x660u);
    }
L_0017129c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000074u, 1, 0);
    }
L_001712a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001712a4:;
    {
        cpu->r[5] = add_flags(cpu, 0x001712acu, cpu->r[5], 0, 0);
    }
L_001712a8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001712ac:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[1]);
        wr32(ea + 4u, cpu->r[2]);
    }
L_001712b0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00171614;
        }
    }
L_001712b4:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_001712b8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001712bc:;
    {
        uint32_t v = cpu->r[3] & 0x00100000u; cpu->r[6] = v;
        set_nz(cpu, v);
    }
L_001712c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001712d0;
        }
    }
L_001712c4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000074u, 0, 0);
    }
L_001712c8:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001712cc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001712d0u)) return;
    }
L_001712d0:;
    {
        cpu->r[14] = 0x001712d4u; fn_0015de34(cpu);
    }
L_001712d4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_001712d8:;
    {
        cpu->r[7] = 0x00001bc8u;
    }
L_001712dc:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_001712e0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_001712e4:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[6]);
    }
L_001712e8:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[7]);
    }
L_001712ec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001712f0:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_001712f4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_001712f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_001712fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_00171300:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00171304:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x4u);
    }
L_00171308:;
    {
        cpu->r[14] = 0x0017130cu; fn_00168404(cpu);
    }
L_0017130c:;
    {
        cpu->r[3] = 0x0000167cu;
    }
L_00171310:;
    {
        cpu->r[2] = 0x00001774u;
    }
L_00171314:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00171318:;
    {
        { uint32_t v = cpu->r[3] & 0x0000003fu; set_nz(cpu, v); }
    }
L_0017131c:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[0]);
    }
L_00171320:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00171624;
        }
    }
L_00171324:;
    {
        cpu->r[0] = rd32(0x0017132cu + + 0x5d8u);
    }
L_00171328:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_0017132c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00171330:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_00171334:;
    {
        cpu->r[3] = 0x0000179cu;
    }
L_00171338:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0017133c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00171340:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
        }
    }
L_00171344:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
        }
    }
L_00171348:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001717fc;
        }
    }
L_0017134c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000006cu, 0, 0);
    }
L_00171350:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00171354:;
    {
        cpu->r[14] = 0x00171358u; fn_00167a24(cpu);
    }
L_00171358:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x590u);
    }
L_0017135c:;
    {
        cpu->r[3] = 0x0000fc19u;
    }
L_00171360:;
    {
        cpu->r[1] = 0x00001794u;
    }
L_00171364:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xffffu << 16);
    }
L_00171368:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0017136c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00171370:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x594u, cpu->r[3]);
        }
    }
L_00171374:;
    {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[0]);
    }
L_00171378:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x590u, cpu->r[0]);
        }
    }
L_0017137c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001713a8;
        }
    }
L_00171380:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_00171384:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00171388:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x594u, cpu->r[3]);
        }
    }
L_0017138c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001713a8;
        }
    }
L_00171390:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x594u);
    }
L_00171394:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00171398:;
    {
        wr32(cpu->r[4] + + 0x594u, cpu->r[3]);
    }
L_0017139c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000007u, 1, 1);
    }
L_001713a0:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x590u, cpu->r[0]);
        }
    }
L_001713a4:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[4] + cpu->r[1], cpu->r[2]);
        }
    }
L_001713a8:;
    {
        cpu->r[3] = 0x0000173cu;
    }
L_001713ac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001713b0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_001713b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00171874;
        }
    }
L_001713b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001713bc:;
    {
        cpu->r[14] = 0x001713c0u; fn_00173e08(cpu);
    }
L_001713c0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001713c4:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_001713c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001713cc:;
    {
        cpu->r[14] = 0x001713d0u; fn_00173e84(cpu);
    }
L_001713d0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_001713d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001713d8:;
    {
        cpu->r[14] = 0x001713dcu; fn_00164bd8(cpu);
    }
L_001713dc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x34cu);
    }
L_001713e0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001713e4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001713e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001717b4;
        }
    }
L_001713ec:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_001713f0:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_001713f4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001713f8:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x424u);
    }
L_001713fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00171400:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00171420;
        }
    }
L_00171404:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_00171408:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[2] + + 0x6cu);
    }
L_0017140c:;
    {
        uint32_t v = cpu->r[3] ^ shifter(cpu->r[3], 1, 31u, &shc); cpu->r[2] = v;
    }
L_00171410:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[3], 1, 31u, &shc), 1, 0);
    }
L_00171414:;
    {
        cpu->r[3] = 0x00000c77u;
    }
L_00171418:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0017141c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001719c0;
        }
    }
L_00171420:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x6cu);
    }
L_00171424:;
    {
        { uint32_t v = cpu->r[3] & 0x00000008u; set_nz(cpu, v); }
    }
L_00171428:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00001788u;
        }
    }
L_0017142c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
        }
    }
L_00171430:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[2] & ~ 0x08000001u; cpu->r[2] = v;
        }
    }
L_00171434:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
        }
    }
L_00171438:;
    {
        cpu->r[3] = 0x00001740u;
    }
L_0017143c:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_00171440:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00171444:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017181c;
        }
    }
L_00171448:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x88u);
    }
L_0017144c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00171450:;
    {
        cpu->r[0] = 0x0000869fu;
    }
L_00171454:;
    {
        cpu->r[7] = 0x00000001u;
    }
L_00171458:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[3], 0x00000400u, 1, 1);
    }
L_0017145c:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_00171460:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[8] = add_flags(cpu, cpu->r[3], 0x00000400u, 0, 0);
        }
    }
L_00171464:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[0];
    }
L_00171468:;
    {
        cpu->r[10] = cpu->r[6];
    }
L_0017146c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_00171470:;
    {
        cpu->r[11] = 0x000007ffu;
    }
L_00171474:;
    {
        cpu->r[9] = 0x00003a97u;
    }
L_00171478:;
    {
        goto L_00171480;
    }
L_0017147c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_00171480:;
    {
        cpu->r[3] = (uint32_t)(int32_t)s16(cpu->r[0] + + 0xb6u);
    }
L_00171484:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_00171488:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000800u, 0, 0);
        }
    }
L_0017148c:;
    {
        if (cond_test(cpu, 5)) {
        goto L_00171498;
        }
    }
L_00171490:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[11], 1, 1);
    }
L_00171494:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000800u, 1, 0);
        }
    }
L_00171498:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000400u, 1, 1);
    }
L_0017149c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000800u, 1, 0);
        }
    }
L_001714a0:;
    {
        uint32_t v = cpu->r[3] ^ shifter(cpu->r[3], 1, 31u, &shc); cpu->r[2] = v;
    }
L_001714a4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[3], 1, 31u, &shc), 1, 0);
    }
L_001714a8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[10], 1, 1);
    }
L_001714ac:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001714dc;
        }
    }
L_001714b0:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[6];
    }
L_001714b4:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_001714b8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x000005f0u, 0, 0);
    }
L_001714bc:;
    {
        cpu->r[3] = 0x000001ffu;
    }
L_001714c0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_001714c4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_001714c8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001714cc:;
    {
        vfp_vmul(cpu, 16, 14, 15);
    }
L_001714d0:;
    {
        *(int32_t*)vfp_s(cpu,16) = (int32_t)*vfp_s(cpu,16);
    }
L_001714d4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001716f0;
        }
    }
L_001714d8:;
    {
        cpu->r[10] = cpu->r[2];
    }
L_001714dc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xb8u);
    }
L_001714e0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001714e4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001714e8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], cpu->r[3], 0, 0);
    }
L_001714ec:;
    {
        cpu->r[14] = 0x001714f0u; fn_00173e84(cpu);
    }
L_001714f0:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[9], 1, 1);
    }
L_001714f4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017147c;
        }
    }
L_001714f8:;
    {
        cpu->r[10] = sub_flags(cpu, 0x00000200u, cpu->r[10], 1, 0);
    }
L_001714fc:;
    {
        cpu->r[1] = 0x000000c8u;
    }
L_00171500:;
    {
        uint32_t v = cpu->r[1] * cpu->r[10]; cpu->r[1] = v;
    }
L_00171504:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 9u, &shc); cpu->r[1] = v;
    }
L_00171508:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000078u, 0, 0);
    }
L_0017150c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x8u);
    }
L_00171510:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x354u);
    }
L_00171514:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[14]);
    }
L_00171518:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0017151c:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x424u);
    }
L_00171520:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x418u);
    }
L_00171524:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00171528:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001716e4;
        }
    }
L_0017152c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 3u, &shc), 0, 0);
    }
L_00171530:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[3];
    }
L_00171534:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00171538:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[1];
    }
L_0017153c:;
    {
        cpu->r[3] = 0x00000096u;
    }
L_00171540:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,16);
    }
L_00171544:;
    {
        vfp_vmul(cpu, 13, 15, 13);
    }
L_00171548:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00171550u + + 0x3acu);
    }
L_0017154c:;
    {
        vfp_vdiv(cpu, 15, 13, 15);
    }
L_00171550:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_00171554:;
    {
        vfp_vsub(cpu, 15, 15, 14);
    }
L_00171558:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_0017155c:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00171560:;
    {
        uint32_t v = cpu->r[3] * cpu->r[0]; cpu->r[3] = v;
    }
L_00171564:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_00171568:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001716e4;
        }
    }
L_0017156c:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_00171570:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x6cu);
    }
L_00171574:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00171578:;
    {
        uint32_t v = cpu->r[1] & ~ 0x00000004u; cpu->r[1] = v;
    }
L_0017157c:;
    {
        uint32_t v = cpu->r[1] | 0x00000008u; cpu->r[1] = v;
    }
L_00171580:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[1]);
    }
L_00171584:;
    {
        uint32_t v = cpu->r[3] | 0x00000001u; cpu->r[3] = v;
    }
L_00171588:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[3]);
    }
L_0017158c:;
    {
        { uint32_t v = cpu->r[3] & 0x00000008u; set_nz(cpu, v); }
    }
L_00171590:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0x6cu);
        }
    }
L_00171594:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00171600;
        }
    }
L_00171598:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_0017159c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001715a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017188c;
        }
    }
L_001715a4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1c4u);
    }
L_001715a8:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_001715ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00171b18;
        }
    }
L_001715b0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_001715b4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_001715b8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_001715bc:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x48u);
    }
L_001715c0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_001715c4:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[3]);
    }
L_001715c8:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x50u);
    }
L_001715cc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_001715d0:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[2]);
    }
L_001715d4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001715d8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001716f8;
        }
    }
L_001715dc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x68u);
    }
L_001715e0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001715e4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001716f8;
        }
    }
L_001715e8:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x6cu);
    }
L_001715ec:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_001715f0:;
    {
        cpu->r[2] = 0x00001788u;
    }
L_001715f4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_001715f8:;
    {
        { uint32_t v = cpu->r[2] & 0x00000020u; set_nz(cpu, v); }
    }
L_001715fc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00171a14;
        }
    }
L_00171600:;
    {
        wr32(cpu->r[4] + + 0x5a4u, cpu->r[1]);
    }
L_00171604:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00171608:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_0017160c:;
    {
        cpu->r[14] = 0x00171610u; fn_0016ed5c(cpu);
    }
L_00171610:;
    {
        goto L_001712c4;
    }
L_00171614:;
    {
        cpu->r[14] = 0x00171618u; fn_001745cc(cpu);
    }
L_00171618:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017161c:;
    {
        cpu->r[14] = 0x00171620u; fn_00174970(cpu);
    }
L_00171620:;
    {
        goto L_001712c4;
    }
L_00171624:;
    {
        cpu->r[1] = rd32(0x0017162cu + + 0x2d8u);
    }
L_00171628:;
    {
        cpu->r[2] = 0x0000432cu;
    }
L_0017162c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0006u << 16);
    }
L_00171630:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[1]);
    }
L_00171634:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[1]);
    }
L_00171638:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_0017163c:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[7]);
    }
L_00171640:;
    {
        cpu->r[2] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_00171644:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00171648:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0017132c;
        }
    }
L_0017164c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000096u, 1, 1);
    }
L_00171650:;
    {
        cpu->r[3] = 0x00001694u;
    }
L_00171654:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_00171658:;
    {
        cpu->r[14] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0017165c:;
    {
        cpu->r[3] = 0x00001698u;
    }
L_00171660:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_00171664:;
    {
        cpu->r[12] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00171668:;
    {
        cpu->r[3] = 0x0000169cu;
    }
L_0017166c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[14], cpu->r[1], 1, 0);
    }
L_00171670:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[1]);
    }
L_00171674:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00171678:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 0);
    }
L_0017167c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_00171680:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[2]);
    }
L_00171684:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_00171688:;
    {
        wr32(cpu->r[13] + + 0x60u, cpu->r[3]);
    }
L_0017168c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001716c4;
        }
    }
L_00171690:;
    {
        uint32_t v = cpu->r[1] ^ shifter(cpu->r[1], 1, 31u, &shc); cpu->r[0] = v;
    }
L_00171694:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[1], 1, 31u, &shc), 1, 0);
    }
L_00171698:;
    {
        uint32_t v = cpu->r[2] ^ shifter(cpu->r[2], 1, 31u, &shc); cpu->r[1] = v;
    }
L_0017169c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], shifter(cpu->r[2], 1, 31u, &shc), 1, 0);
    }
L_001716a0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_001716a4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = cpu->r[0];
        }
    }
L_001716a8:;
    {
        uint32_t v = cpu->r[3] ^ shifter(cpu->r[3], 1, 31u, &shc); cpu->r[2] = v;
    }
L_001716ac:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[3], 1, 31u, &shc), 1, 0);
    }
L_001716b0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_001716b4:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = cpu->r[1];
        }
    }
L_001716b8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_001716bc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000063u, 1, 1);
    }
L_001716c0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00171a74;
        }
    }
L_001716c4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001716c8:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_001716cc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x000003d4u, 0, 0);
    }
L_001716d0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00001680u, 0, 0);
    }
L_001716d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000014u, 0, 0);
    }
L_001716d8:;
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
L_001716dc:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_001716e0:;
    {
        goto L_00171334;
    }
L_001716e4:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_001716e8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001716ec:;
    {
        goto L_0017158c;
    }
L_001716f0:;
    {
        cpu->r[1] = 0x00000078u;
    }
L_001716f4:;
    {
        goto L_0017150c;
    }
L_001716f8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000064u, 0, 0);
    }
L_001716fc:;
    {
        cpu->r[14] = 0x00171700u; fn_00185d64(cpu);
    }
L_00171700:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x68u);
    }
L_00171704:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_00171708:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000040u, 0, 0);
    }
L_0017170c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00171710:;
    {
        wr32(cpu->r[13] + + 0x38u, cpu->r[3]);
    }
L_00171714:;
    {
        wr32(cpu->r[13] + + 0x3cu, cpu->r[2]);
    }
L_00171718:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x64u);
    }
L_0017171c:;
    {
        wr32(cpu->r[13] + + 0x40u, cpu->r[3]);
    }
L_00171720:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[3]);
    }
L_00171724:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[2]);
    }
L_00171728:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[3]);
    }
L_0017172c:;
    {
        cpu->r[14] = 0x00171730u; fn_00180008(cpu);
    }
L_00171730:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x88u);
    }
L_00171734:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x00000400u, 0, 0);
    }
L_00171738:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000400u, 0, 0);
    }
L_0017173c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00171740:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = (~cpu->r[2]);
        }
    }
L_00171744:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000400u, 1, 0);
        }
    }
L_00171748:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = add_flags(cpu, cpu->r[1], cpu->r[0], 0, 0);
        }
    }
L_0017174c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[2], 0x00000400u, 1, 0);
    }
L_00171750:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = shifter(cpu->r[0], 3, 11u, &shc); cpu->r[0] = v;
        }
    }
L_00171754:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 11u, &shc), 1, 0);
        }
    }
L_00171758:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_0017175c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
        }
    }
L_00171760:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000800u, 0, 0);
        }
    }
L_00171764:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
        }
    }
L_00171768:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x37cu);
    }
L_0017176c:;
    {
        if (cond_test(cpu, 13)) {
        uint32_t v = shifter(cpu->r[3], 3, 11u, &shc); cpu->r[3] = v;
        }
    }
L_00171770:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = add_flags(cpu, cpu->r[0], shifter(cpu->r[3], 2, 11u, &shc), 0, 0);
        }
    }
L_00171774:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_00171778:;
    {
        cpu->r[2] = 0x00001668u;
    }
L_0017177c:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[3] = v;
    }
L_00171780:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00171784:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x0000001fu, 0, 0);
    }
L_00171788:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017178c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[1];
        }
    }
L_00171790:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 5u, &shc); cpu->r[3] = v;
    }
L_00171794:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 0);
    }
L_00171798:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000008u, 1, 1);
    }
L_0017179c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001719a0;
        }
    }
L_001717a0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x6cu);
    }
L_001717a4:;
    {
        uint32_t v = cpu->r[1] | 0x00000001u; cpu->r[3] = v;
    }
L_001717a8:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[3]);
    }
L_001717ac:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001717b0:;
    {
        goto L_001715f0;
    }
L_001717b4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001717b8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001717bc:;
    {
        cpu->r[14] = 0x001717c4u;
    }
L_001717c0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001717c4u)) return;
    }
L_001717c4:;
    {
        cpu->r[3] = 0x000017c4u;
    }
L_001717c8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001717cc:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001717d0:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001713ec;
        }
    }
L_001717d4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x39cu);
    }
L_001717d8:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_001717dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001713ec;
        }
    }
L_001717e0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x6cu);
    }
L_001717e4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001717e8:;
    {
        uint32_t v = cpu->r[3] | 0x00000004u; cpu->r[2] = v;
    }
L_001717ec:;
    {
        if (cond_test(cpu, 2)) {
        uint32_t v = cpu->r[3] | 0x00000084u; cpu->r[3] = v;
        }
    }
L_001717f0:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[2]);
    }
L_001717f4:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[3]);
        }
    }
L_001717f8:;
    {
        goto L_001713ec;
    }
L_001717fc:;
    {
        cpu->r[2] = 0x00000005u;
    }
L_00171800:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], 0x000003d4u, 0, 0);
    }
L_00171804:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_00171808:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x000003d4u, 0, 0);
    }
L_0017180c:;
    {
        cpu->r[14] = 0x00171810u; fn_00164ba0(cpu);
    }
L_00171810:;
    {
        cpu->r[3] = 0x00001778u;
    }
L_00171814:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_00171818:;
    {
        goto L_0017134c;
    }
L_0017181c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00171820:;
    {
        cpu->r[14] = 0x00171824u; fn_0015d920(cpu);
    }
L_00171824:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00171828:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00171448;
        }
    }
L_0017182c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x8u);
    }
L_00171830:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[14]);
    }
L_00171834:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00171838:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x424u);
    }
L_0017183c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00171840:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00171448;
        }
    }
L_00171844:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00171848:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x6cu);
    }
L_0017184c:;
    {
        cpu->r[0] = 0x00001920u;
    }
L_00171850:;
    {
        cpu->r[12] = 0x0000000au;
    }
L_00171854:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00171858:;
    {
        uint32_t v = cpu->r[1] & ~ 0x000000c4u; cpu->r[1] = v;
    }
L_0017185c:;
    {
        wr8(cpu->r[4] + cpu->r[0], cpu->r[12]);
    }
L_00171860:;
    {
        uint32_t v = cpu->r[1] | 0x00000008u; cpu->r[1] = v;
    }
L_00171864:;
    {
        uint32_t v = cpu->r[2] | 0x00000001u; cpu->r[2] = v;
    }
L_00171868:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[1]);
    }
L_0017186c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_00171870:;
    {
        goto L_00171448;
    }
L_00171874:;
    {
        cpu->r[3] = 0x00001794u;
    }
L_00171878:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0017187c:;
    {
        cpu->r[3] = rd32(0x00171884u + + 0x84u);
    }
L_00171880:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00171884:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_00171888:;
    {
        goto L_001713b8;
    }
L_0017188c:;
    {
        cpu->r[3] = 0x00001794u;
    }
L_00171890:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00171894:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00171898:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017190c;
        }
    }
L_0017189c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_001718a0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000004u, 1, 1);
    }
L_001718a4:;
    {
        if (cond_test(cpu, 9)) {
        goto L_0017190c;
        }
    }
L_001718a8:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
    }
L_001718ac:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0xcu);
    }
L_001718b0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_001718b4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 1u, &shc), 0, 0);
    }
L_001718b8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_001718bc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_001718c0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000eu, 0, 0);
    }
L_001718c4:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x30u);
    }
L_001718c8:;
    {
        cpu->r[12] = rd32(cpu->r[14] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_001718cc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_001718d0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_001718d4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_001718d8:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 1, 1u, &shc), cpu->r[0], 1, 0);
    }
L_001718dc:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[3]);
    }
L_001718e0:;
    {
        cpu->r[2] = rd32(cpu->r[14] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_001718e4:;
    {
        cpu->r[3] = rd32(cpu->r[14] + + 0x38u);
    }
L_001718e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_001718ec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 3, 31u, &shc), 0, 0);
    }
L_001718f0:;
    {
        cpu->r[3] = sub_flags(cpu, shifter(cpu->r[3], 1, 1u, &shc), cpu->r[1], 1, 0);
    }
L_001718f4:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[3]);
    }
L_001718f8:;
    {
        goto L_00171944;
    }
L_0017190c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_00171910:;
    {
        cpu->r[3] = 0x000017a0u;
    }
L_00171914:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_00171918:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x30u);
    }
L_0017191c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00171920:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_00171924:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[2]);
    }
L_00171928:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_0017192c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00171930:;
    {
        cpu->r[1] = rd32(cpu->r[2] + + 0x38u);
    }
L_00171934:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_00171938:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_0017193c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_00171940:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[3]);
    }
L_00171944:;
    {
        cpu->r[2] = 0x00001820u;
    }
L_00171948:;
    {
        cpu->r[3] = 0x000017a4u;
    }
L_0017194c:;
    {
        cpu->r[1] = rd8(cpu->r[4] + cpu->r[2]);
    }
L_00171950:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00171954:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00171958:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0017195c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_00171960:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00171998;
        }
    }
L_00171964:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00171968:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0017196c:;
    {
        { uint32_t v = cpu->r[3] & 0x00004000u; set_nz(cpu, v); }
    }
L_00171970:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00171998;
        }
    }
L_00171974:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_00171978:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017197c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000064u, 0, 0);
    }
L_00171980:;
    {
        cpu->r[14] = 0x00171984u; fn_0016943c(cpu);
    }
L_00171984:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x6cu);
    }
L_00171988:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x64u);
    }
L_0017198c:;
    {
        uint32_t v = cpu->r[2] | cpu->r[0]; cpu->r[2] = v;
    }
L_00171990:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[2]);
    }
L_00171994:;
    {
        goto L_001715d4;
    }
L_00171998:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x64u);
    }
L_0017199c:;
    {
        goto L_001715d4;
    }
L_001719a0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 0);
    }
L_001719a4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 1);
    }
L_001719a8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001715e8;
        }
    }
L_001719ac:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x6cu);
    }
L_001719b0:;
    {
        uint32_t v = cpu->r[1] | 0x00000002u; cpu->r[3] = v;
    }
L_001719b4:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[3]);
    }
L_001719b8:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001719bc:;
    {
        goto L_001715f0;
    }
L_001719c0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001719c4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001719c8:;
    {
        cpu->r[14] = 0x001719d0u;
    }
L_001719cc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001719d0u)) return;
    }
L_001719d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x374u);
    }
L_001719d4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_001719d8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00171420;
        }
    }
L_001719dc:;
    {
        cpu->r[3] = 0x00001774u;
    }
L_001719e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001719e4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 0);
    }
L_001719e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001719ec:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00171420;
        }
    }
L_001719f0:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_001719f4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x6cu);
    }
L_001719f8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001719fc:;
    {
        uint32_t v = cpu->r[1] & ~ 0x00000004u; cpu->r[1] = v;
    }
L_00171a00:;
    {
        uint32_t v = cpu->r[1] | 0x00000008u; cpu->r[1] = v;
    }
L_00171a04:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[1]);
    }
L_00171a08:;
    {
        uint32_t v = cpu->r[2] | 0x00000001u; cpu->r[2] = v;
    }
L_00171a0c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_00171a10:;
    {
        goto L_00171438;
    }
L_00171a14:;
    {
        uint32_t v = cpu->r[3] & ~ 0x00000003u; cpu->r[3] = v;
    }
L_00171a18:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_00171a1c:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[3]);
    }
L_00171a20:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00171a24:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00171a28:;
    {
        cpu->r[14] = 0x00171a30u;
    }
L_00171a2c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00171a30u)) return;
    }
L_00171a30:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00171a34:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00171a38:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_00171a3c:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x28u);
    }
L_00171a40:;
    {
        cpu->r[14] = 0x00171a48u;
    }
L_00171a44:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00171a48u)) return;
    }
L_00171a48:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4b0u);
    }
L_00171a4c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_00171a50:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4b4u);
    }
L_00171a54:;
    {
        uint32_t v = cpu->r[1] * cpu->r[2]; cpu->r[2] = v;
    }
L_00171a58:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x6cu);
    }
L_00171a5c:;
    {
        uint32_t v = cpu->r[2] - cpu->r[3] * cpu->r[5]; cpu->r[5] = v;
    }
L_00171a60:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00171a64:;
    {
        if (cond_test(cpu, 12)) {
        uint32_t v = cpu->r[1] | 0x00000002u; cpu->r[1] = v;
        }
    }
L_00171a68:;
    {
        if (cond_test(cpu, 11)) {
        uint32_t v = cpu->r[1] | 0x00000001u; cpu->r[1] = v;
        }
    }
L_00171a6c:;
    {
        wr32(cpu->r[13] + + 0x6cu, cpu->r[1]);
    }
L_00171a70:;
    {
        goto L_00171600;
    }
L_00171a74:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000058u, 0, 0);
    }
L_00171a78:;
    {
        cpu->r[14] = 0x00171a7cu; fn_0018572c(cpu);
    }
L_00171a7c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000063u, 1, 1);
    }
L_00171a80:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001716c4;
        }
    }
L_00171a84:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x5d4u);
    }
L_00171a88:;
    {
        cpu->r[3] = 0x00004334u;
    }
L_00171a8c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0006u << 16);
    }
L_00171a90:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[7]);
    }
L_00171a94:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00171a98:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_00171a9c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001716c4;
        }
    }
L_00171aa0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00171aa4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00171aa8:;
    {
        cpu->r[14] = 0x00171aacu; fn_001615c0(cpu);
    }
L_00171aac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00171ab0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00171b44;
        }
    }
L_00171ab4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00171ab8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00171abc:;
    {
        cpu->r[14] = 0x00171ac0u; fn_001615c0(cpu);
    }
L_00171ac0:;
    {
        sub_flags(cpu, cpu->r[0], 0x000001f4u, 1, 1);
    }
L_00171ac4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00171ac8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00171acc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00171ad0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_00171ad4:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[13] + + 0x10u, cpu->r[2]);
        }
    }
L_00171ad8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001716cc;
        }
    }
L_00171adc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00171ae0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_00171ae4:;
    {
        cpu->r[1] = 0x00000c00u;
    }
L_00171ae8:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_00171aec:;
    {
        cpu->r[14] = 0x00171af0u; fn_00162ae4(cpu);
    }
L_00171af0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00171af4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000004cu, 0, 0);
    }
L_00171af8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00171afc:;
    {
        cpu->r[14] = 0x00000001u;
    }
L_00171b00:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[3]);
    }
L_00171b04:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[14]);
    }
L_00171b08:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[3]);
    }
L_00171b0c:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[3]);
    }
L_00171b10:;
    {
        cpu->r[14] = 0x00171b14u; fn_00173920(cpu);
    }
L_00171b14:;
    {
        goto L_001716cc;
    }
L_00171b18:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_00171b1c:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x14u);
    }
L_00171b20:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_00171b24:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x18u);
    }
L_00171b28:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_00171b2c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_00171b30:;
    {
        wr32(cpu->r[13] + + 0x64u, cpu->r[3]);
    }
L_00171b34:;
    {
        cpu->r[1] = rd32(cpu->r[14] + + 0x20u);
    }
L_00171b38:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
    }
L_00171b3c:;
    {
        wr32(cpu->r[13] + + 0x68u, cpu->r[2]);
    }
L_00171b40:;
    {
        goto L_001715d4;
    }
L_00171b44:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00171b48:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00171b4c:;
    {
        cpu->r[14] = 0x00171b50u; fn_001615c0(cpu);
    }
L_00171b50:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
    }
L_00171b54:;
    {
        sub_flags(cpu, cpu->r[0], 0x000001f4u, 1, 1);
    }
L_00171b58:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00171b5c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00171b60:;
    {
        goto L_00171acc;
    }
}

/* _ZN8CCarAnim7GetAnimE8ECarAnim @ 00171b64 (arm) */
void fn_00171b64(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00171b64:;
    {
        cpu->r[3] = rd32(0x00171b6cu + + 0x14u);
    }
L_00171b68:;
    {
        cpu->r[2] = rd32(0x00171b70u + + 0x14u);
    }
L_00171b6c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00171b74u, cpu->r[3], 0, 0);
    }
L_00171b70:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00171b74:;
    {
        cpu->r[2] = 0x00001184u;
    }
L_00171b78:;
    {
        uint32_t v = cpu->r[2] * cpu->r[0] + cpu->r[3]; cpu->r[0] = v;
    }
L_00171b7c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8CCarAnim17GetRandomPushAnimEiiib @ 00171b88 (arm) */
void fn_00171b88(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00171b88:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000002u, 1, 1);
    }
L_00171b8c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00171b90:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00171b94:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00171b98:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_00171b9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00171c70;
        }
    }
L_00171ba0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000003u, 1, 1);
    }
L_00171ba4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00171c3c;
        }
    }
L_00171ba8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 1);
    }
L_00171bac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00171bf0;
        }
    }
L_00171bb0:;
    {
        cpu->r[1] = rd32(0x00171bb8u + + 0x114u);
    }
L_00171bb4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00171bb8:;
    {
        cpu->r[12] = rd32(0x00171bc0u + + 0x110u);
    }
L_00171bbc:;
    {
        cpu->r[14] = 0x00000181u;
    }
L_00171bc0:;
    {
        cpu->r[2] = rd32(0x00171bc8u + + 0x10cu);
    }
L_00171bc4:;
    {
        cpu->r[1] = add_flags(cpu, 0x00171bccu, cpu->r[1], 0, 0);
    }
L_00171bc8:;
    {
        cpu->r[3] = rd32(0x00171bd0u + + 0x108u);
    }
L_00171bcc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00171bd4u, cpu->r[12], 0, 0);
    }
L_00171bd0:;
    {
        cpu->r[2] = add_flags(cpu, 0x00171bd8u, cpu->r[2], 0, 0);
    }
L_00171bd4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000144u, 0, 0);
    }
L_00171bd8:;
    {
        cpu->r[3] = add_flags(cpu, 0x00171be0u, cpu->r[3], 0, 0);
    }
L_00171bdc:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00171be0:;
    {
        cpu->r[14] = 0x00171be4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00171be4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00171be8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00171bec:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00171bf0u)) return;
    }
L_00171bf0:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 6u, &shc); cpu->r[3] = v;
    }
L_00171bf4:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 5u, &shc); cpu->r[2] = v;
    }
L_00171bf8:;
    {
        cpu->r[6] = rd32(0x00171c00u + + 0xdcu);
    }
L_00171bfc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00171c00:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[5], 2, 2u, &shc), 1, 0);
    }
L_00171c04:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 3u, &shc), 1, 0);
    }
L_00171c08:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_00171c0c:;
    {
        cpu->r[6] = add_flags(cpu, 0x00171c14u, cpu->r[6], 0, 0);
    }
L_00171c10:;
    {
        cpu->r[5] = sub_flags(cpu, shifter(cpu->r[5], 2, 3u, &shc), cpu->r[5], 1, 0);
    }
L_00171c14:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_00171c18:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_00171c1c:;
    {
        cpu->r[14] = 0x00171c20u; fn_000965cc(cpu);
    }
L_00171c20:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 4u, &shc); cpu->r[3] = v;
    }
L_00171c24:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[4], 2, 1u, &shc), 1, 0);
    }
L_00171c28:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], cpu->r[4], 0, 0);
    }
L_00171c2c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00171c30:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00171c34:;
    {
        cpu->r[0] = rd32(cpu->r[6] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_00171c38:;
    {
        goto L_00171be8;
    }
L_00171c3c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00171c40:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00171ca0;
        }
    }
L_00171c44:;
    {
        cpu->r[5] = rd32(0x00171c4cu + + 0x94u);
    }
L_00171c48:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00171c4c:;
    {
        cpu->r[5] = add_flags(cpu, 0x00171c54u, cpu->r[5], 0, 0);
    }
L_00171c50:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[1], 2, 4u, &shc), 0, 0);
    }
L_00171c54:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0xe4u);
    }
L_00171c58:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_00171c5c:;
    {
        cpu->r[14] = 0x00171c60u; fn_000965cc(cpu);
    }
L_00171c60:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_00171c64:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_00171c68:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xe8u);
    }
L_00171c6c:;
    {
        goto L_00171be8;
    }
L_00171c70:;
    {
        cpu->r[5] = rd32(0x00171c78u + + 0x6cu);
    }
L_00171c74:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00171c78:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00171c7c:;
    {
        cpu->r[5] = add_flags(cpu, 0x00171c84u, cpu->r[5], 0, 0);
    }
L_00171c80:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_00171c84:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0xa8u);
    }
L_00171c88:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_00171c8c:;
    {
        cpu->r[14] = 0x00171c90u; fn_000965cc(cpu);
    }
L_00171c90:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00171c94:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_00171c98:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xacu);
    }
L_00171c9c:;
    {
        goto L_00171be8;
    }
L_00171ca0:;
    {
        cpu->r[5] = rd32(0x00171ca8u + + 0x40u);
    }
L_00171ca4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00171ca8:;
    {
        cpu->r[5] = add_flags(cpu, 0x00171cb0u, cpu->r[5], 0, 0);
    }
L_00171cac:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[1], 2, 4u, &shc), 0, 0);
    }
L_00171cb0:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x114u);
    }
L_00171cb4:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_00171cb8:;
    {
        cpu->r[14] = 0x00171cbcu; fn_000965cc(cpu);
    }
L_00171cbc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_00171cc0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_00171cc4:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x118u);
    }
L_00171cc8:;
    {
        goto L_00171be8;
    }
}

/* _ZN8CCarAnim18GetRandomCrashAnimEiii @ 00171cec (arm) */
void fn_00171cec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00171cec:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00171cf0:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00171cf4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00171cf8:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_00171cfc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000007u, 1, 1);
    }
L_00171d00:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[0]) {
        case 0: goto L_00171d98;
        case 1: goto L_00171dc4;
        case 2: goto L_00171e14;
        case 3: goto L_00171e64;
        case 4: goto L_00171eb4;
        case 5: goto L_00171ee4;
        case 6: goto L_00171f14;
        case 7: goto L_00171d28;
        default: guest_unimplemented(cpu, 0x00171d00u); return; }
        }
    }
L_00171d04:;
    {
        goto L_00171d58;
    }
L_00171d28:;
    {
        cpu->r[5] = rd32(0x00171d30u + + 0x210u);
    }
L_00171d2c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00171d30:;
    {
        cpu->r[5] = add_flags(cpu, 0x00171d38u, cpu->r[5], 0, 0);
    }
L_00171d34:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[1], 2, 4u, &shc), 0, 0);
    }
L_00171d38:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x188u);
    }
L_00171d3c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_00171d40:;
    {
        cpu->r[14] = 0x00171d44u; fn_000965cc(cpu);
    }
L_00171d44:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_00171d48:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_00171d4c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x18cu);
    }
L_00171d50:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00171d54:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00171d58u)) return;
    }
L_00171d58:;
    {
        cpu->r[12] = rd32(0x00171d60u + + 0x1e4u);
    }
L_00171d5c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00171d60:;
    {
        cpu->r[1] = rd32(0x00171d68u + + 0x1e0u);
    }
L_00171d64:;
    {
        cpu->r[14] = 0x00000110u;
    }
L_00171d68:;
    {
        cpu->r[2] = rd32(0x00171d70u + + 0x1dcu);
    }
L_00171d6c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00171d74u, cpu->r[12], 0, 0);
    }
L_00171d70:;
    {
        cpu->r[3] = rd32(0x00171d78u + + 0x1d8u);
    }
L_00171d74:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000450u, 0, 0);
    }
L_00171d78:;
    {
        cpu->r[1] = add_flags(cpu, 0x00171d80u, cpu->r[1], 0, 0);
    }
L_00171d7c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00171d84u, cpu->r[2], 0, 0);
    }
L_00171d80:;
    {
        cpu->r[3] = add_flags(cpu, 0x00171d88u, cpu->r[3], 0, 0);
    }
L_00171d84:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_00171d88:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00171d8c:;
    {
        cpu->r[14] = 0x00171d90u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00171d90:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00171d94:;
    {
        goto L_00171d50;
    }
L_00171d98:;
    {
        cpu->r[5] = rd32(0x00171da0u + + 0x1b4u);
    }
L_00171d9c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00171da0:;
    {
        cpu->r[5] = add_flags(cpu, 0x00171da8u, cpu->r[5], 0, 0);
    }
L_00171da4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[1], 2, 4u, &shc), 0, 0);
    }
L_00171da8:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x158u);
    }
L_00171dac:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_00171db0:;
    {
        cpu->r[14] = 0x00171db4u; fn_000965cc(cpu);
    }
L_00171db4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_00171db8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_00171dbc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x15cu);
    }
L_00171dc0:;
    {
        goto L_00171d50;
    }
L_00171dc4:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 6u, &shc); cpu->r[3] = v;
    }
L_00171dc8:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 5u, &shc); cpu->r[2] = v;
    }
L_00171dcc:;
    {
        cpu->r[6] = rd32(0x00171dd4u + + 0x184u);
    }
L_00171dd0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00171dd4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[5], 2, 2u, &shc), 1, 0);
    }
L_00171dd8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 3u, &shc), 1, 0);
    }
L_00171ddc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_00171de0:;
    {
        cpu->r[6] = add_flags(cpu, 0x00171de8u, cpu->r[6], 0, 0);
    }
L_00171de4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], cpu->r[3], 0, 0);
    }
L_00171de8:;
    {
        cpu->r[5] = sub_flags(cpu, shifter(cpu->r[5], 2, 3u, &shc), cpu->r[5], 1, 0);
    }
L_00171dec:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x1b8u);
    }
L_00171df0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_00171df4:;
    {
        cpu->r[14] = 0x00171df8u; fn_000965cc(cpu);
    }
L_00171df8:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 4u, &shc); cpu->r[3] = v;
    }
L_00171dfc:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[4], 2, 1u, &shc), 1, 0);
    }
L_00171e00:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], cpu->r[4], 0, 0);
    }
L_00171e04:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00171e08:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_00171e0c:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x1bcu);
    }
L_00171e10:;
    {
        goto L_00171d50;
    }
L_00171e14:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 6u, &shc); cpu->r[3] = v;
    }
L_00171e18:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 5u, &shc); cpu->r[2] = v;
    }
L_00171e1c:;
    {
        cpu->r[6] = rd32(0x00171e24u + + 0x138u);
    }
L_00171e20:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00171e24:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[5], 2, 2u, &shc), 1, 0);
    }
L_00171e28:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 3u, &shc), 1, 0);
    }
L_00171e2c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_00171e30:;
    {
        cpu->r[6] = add_flags(cpu, 0x00171e38u, cpu->r[6], 0, 0);
    }
L_00171e34:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], cpu->r[3], 0, 0);
    }
L_00171e38:;
    {
        cpu->r[5] = sub_flags(cpu, shifter(cpu->r[5], 2, 3u, &shc), cpu->r[5], 1, 0);
    }
L_00171e3c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x260u);
    }
L_00171e40:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_00171e44:;
    {
        cpu->r[14] = 0x00171e48u; fn_000965cc(cpu);
    }
L_00171e48:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 4u, &shc); cpu->r[3] = v;
    }
L_00171e4c:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[4], 2, 1u, &shc), 1, 0);
    }
L_00171e50:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], cpu->r[4], 0, 0);
    }
L_00171e54:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00171e58:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_00171e5c:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x264u);
    }
L_00171e60:;
    {
        goto L_00171d50;
    }
L_00171e64:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 6u, &shc); cpu->r[3] = v;
    }
L_00171e68:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 5u, &shc); cpu->r[2] = v;
    }
L_00171e6c:;
    {
        cpu->r[6] = rd32(0x00171e74u + + 0xecu);
    }
L_00171e70:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00171e74:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[5], 2, 2u, &shc), 1, 0);
    }
L_00171e78:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 3u, &shc), 1, 0);
    }
L_00171e7c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_00171e80:;
    {
        cpu->r[6] = add_flags(cpu, 0x00171e88u, cpu->r[6], 0, 0);
    }
L_00171e84:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], cpu->r[3], 0, 0);
    }
L_00171e88:;
    {
        cpu->r[5] = sub_flags(cpu, shifter(cpu->r[5], 2, 3u, &shc), cpu->r[5], 1, 0);
    }
L_00171e8c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x308u);
    }
L_00171e90:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_00171e94:;
    {
        cpu->r[14] = 0x00171e98u; fn_000965cc(cpu);
    }
L_00171e98:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 4u, &shc); cpu->r[3] = v;
    }
L_00171e9c:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[4], 2, 1u, &shc), 1, 0);
    }
L_00171ea0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], cpu->r[4], 0, 0);
    }
L_00171ea4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00171ea8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_00171eac:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x30cu);
    }
L_00171eb0:;
    {
        goto L_00171d50;
    }
L_00171eb4:;
    {
        cpu->r[5] = rd32(0x00171ebcu + + 0xa8u);
    }
L_00171eb8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00171ebc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00171ec0:;
    {
        cpu->r[5] = add_flags(cpu, 0x00171ec8u, cpu->r[5], 0, 0);
    }
L_00171ec4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_00171ec8:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x3b0u);
    }
L_00171ecc:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_00171ed0:;
    {
        cpu->r[14] = 0x00171ed4u; fn_000965cc(cpu);
    }
L_00171ed4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00171ed8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_00171edc:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x3b4u);
    }
L_00171ee0:;
    {
        goto L_00171d50;
    }
L_00171ee4:;
    {
        cpu->r[5] = rd32(0x00171eecu + + 0x7cu);
    }
L_00171ee8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00171eec:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00171ef0:;
    {
        cpu->r[5] = add_flags(cpu, 0x00171ef8u, cpu->r[5], 0, 0);
    }
L_00171ef4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_00171ef8:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x3ecu);
    }
L_00171efc:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_00171f00:;
    {
        cpu->r[14] = 0x00171f04u; fn_000965cc(cpu);
    }
L_00171f04:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00171f08:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_00171f0c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x3f0u);
    }
L_00171f10:;
    {
        goto L_00171d50;
    }
L_00171f14:;
    {
        cpu->r[5] = rd32(0x00171f1cu + + 0x50u);
    }
L_00171f18:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00171f1c:;
    {
        cpu->r[5] = add_flags(cpu, 0x00171f24u, cpu->r[5], 0, 0);
    }
L_00171f20:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], shifter(cpu->r[1], 2, 4u, &shc), 0, 0);
    }
L_00171f24:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x428u);
    }
L_00171f28:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_00171f2c:;
    {
        cpu->r[14] = 0x00171f30u; fn_000965cc(cpu);
    }
L_00171f30:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[0], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_00171f34:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_00171f38:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x42cu);
    }
L_00171f3c:;
    {
        goto L_00171d50;
    }
}

/* _ZNK8CCarAnim20GetAccelerationLocalEi @ 00171f70 (arm) */
void fn_00171f70(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00171f70:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_00171f74:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00171f78:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00171f7c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00171f80:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001720a8;
        }
    }
L_00171f84:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 0);
    }
L_00171f88:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_00171f8c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 5u, &shc); cpu->r[7] = v;
    }
L_00171f90:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 5u, &shc); cpu->r[6] = v;
    }
L_00171f94:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 5u, &shc); cpu->r[5] = v;
    }
L_00171f98:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], shifter(cpu->r[2], 2, 2u, &shc), 1, 0);
    }
L_00171f9c:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], shifter(cpu->r[0], 2, 2u, &shc), 1, 0);
    }
L_00171fa0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[1], cpu->r[7], 0, 0);
    }
L_00171fa4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[1], cpu->r[6], 0, 0);
    }
L_00171fa8:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], shifter(cpu->r[3], 2, 2u, &shc), 1, 0);
    }
L_00171fac:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[1], cpu->r[5], 0, 0);
    }
L_00171fb0:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x14u);
    }
L_00171fb4:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x14u);
    }
L_00171fb8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x18u);
    }
L_00171fbc:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0x14u);
    }
L_00171fc0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[1], 0, 0);
    }
L_00171fc4:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x18u);
    }
L_00171fc8:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x18u);
    }
L_00171fcc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_00171fd0:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x1cu);
    }
L_00171fd4:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x1cu);
    }
L_00171fd8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], shifter(cpu->r[8], 2, 1u, &shc), 1, 0);
    }
L_00171fdc:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0x1cu);
    }
L_00171fe0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[12], 2, 1u, &shc), 1, 0);
    }
L_00171fe4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_00171fe8:;
    {
        uint32_t v = cpu->r[2] ^ shifter(cpu->r[2], 1, 31u, &shc); cpu->r[12] = v;
    }
L_00171fec:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[2], 1, 31u, &shc), 1, 0);
    }
L_00171ff0:;
    {
        uint32_t v = cpu->r[1] ^ shifter(cpu->r[1], 1, 31u, &shc); cpu->r[0] = v;
    }
L_00171ff4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[1], 1, 31u, &shc), 1, 0);
    }
L_00171ff8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[8], 2, 1u, &shc), 1, 0);
    }
L_00171ffc:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 1);
    }
L_00172000:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = cpu->r[12];
        }
    }
L_00172004:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = cpu->r[0];
        }
    }
L_00172008:;
    {
        uint32_t v = cpu->r[3] ^ shifter(cpu->r[3], 1, 31u, &shc); cpu->r[12] = v;
    }
L_0017200c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[3], 1, 31u, &shc), 1, 0);
    }
L_00172010:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 1);
    }
L_00172014:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = cpu->r[12];
        }
    }
L_00172018:;
    {
        sub_flags(cpu, cpu->r[0], 0x000001f4u, 1, 1);
    }
L_0017201c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00172030;
        }
    }
L_00172020:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[1]);
        wr32(ea + 4u, cpu->r[2]);
        wr32(ea + 8u, cpu->r[3]);
    }
L_00172024:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00172028:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0017202c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00172030u)) return;
    }
L_00172030:;
    {
        cpu->r[12] = rd32(0x00172038u + + 0x84u);
    }
L_00172034:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00172038:;
    {
        cpu->r[1] = rd32(0x00172040u + + 0x80u);
    }
L_0017203c:;
    {
        cpu->r[14] = 0x00000010u;
    }
L_00172040:;
    {
        cpu->r[2] = rd32(0x00172048u + + 0x7cu);
    }
L_00172044:;
    {
        cpu->r[12] = add_flags(cpu, 0x0017204cu, cpu->r[12], 0, 0);
    }
L_00172048:;
    {
        cpu->r[3] = rd32(0x00172050u + + 0x78u);
    }
L_0017204c:;
    {
        cpu->r[1] = add_flags(cpu, 0x00172054u, cpu->r[1], 0, 0);
    }
L_00172050:;
    {
        cpu->r[2] = add_flags(cpu, 0x00172058u, cpu->r[2], 0, 0);
    }
L_00172054:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000460u, 0, 0);
    }
L_00172058:;
    {
        cpu->r[3] = add_flags(cpu, 0x00172060u, cpu->r[3], 0, 0);
    }
L_0017205c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000000cu, 0, 0);
    }
L_00172060:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00172064:;
    {
        cpu->r[14] = 0x00172068u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00172068:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x1cu);
    }
L_0017206c:;
    {
        cpu->r[3] = rd32(cpu->r[7] + + 0x1cu);
    }
L_00172070:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x14u);
    }
L_00172074:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x18u);
    }
L_00172078:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_0017207c:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x14u);
    }
L_00172080:;
    {
        cpu->r[2] = rd32(cpu->r[7] + + 0x18u);
    }
L_00172084:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], cpu->r[1], 0, 0);
    }
L_00172088:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x1cu);
    }
L_0017208c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], cpu->r[2], 0, 0);
    }
L_00172090:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x14u);
    }
L_00172094:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x18u);
    }
L_00172098:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[6], 2, 1u, &shc), 1, 0);
    }
L_0017209c:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], shifter(cpu->r[12], 2, 1u, &shc), 1, 0);
    }
L_001720a0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[0], 2, 1u, &shc), 1, 0);
    }
L_001720a4:;
    {
        goto L_00172020;
    }
L_001720a8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001720ac:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_001720b0:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_001720b4:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_001720b8:;
    {
        goto L_00172024;
    }
}

/* _ZdvRK8Vector4si @ 001720cc (arm) */
void fn_001720cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001720cc:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001720d0:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001720d4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001720d8:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001720dc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_001720e0:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001720e4:;
    {
        cpu->r[14] = 0x001720e8u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001720e8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001720ec:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001720f0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_001720f4:;
    {
        cpu->r[14] = 0x001720f8u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001720f8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001720fc:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00172100:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_00172104:;
    {
        cpu->r[14] = 0x00172108u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00172108:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[8]);
    }
L_0017210c:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[7]);
    }
L_00172110:;
    {
        wr32(cpu->r[5], cpu->r[0]);
    }
L_00172114:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00172118:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0017211cu)) return;
    }
}

/* _ZN8CCarBase23GetBorderCrashThresholdEb @ 0017211c (arm) */
void fn_0017211c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017211c:;
    {
        cpu->r[0] = (~0x80000000u);
    }
L_00172120:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK8CCarBase11GetCarClassEb @ 00172124 (arm) */
void fn_00172124(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00172124:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x53cu);
    }
L_00172128:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8CCarBase10CastToCCarEv @ 0017212c (arm) */
void fn_0017212c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017212c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00172130:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK8CCarBase10CastToCCarEv @ 00172134 (arm) */
void fn_00172134(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00172134:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00172138:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8CCarBaseD2Ev @ 0017213c (arm) */
void fn_0017213c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017213c:;
    {
        cpu->r[2] = rd32(0x00172144u + + 0x44u);
    }
L_00172140:;
    {
        cpu->r[1] = rd32(0x00172148u + + 0x44u);
    }
L_00172144:;
    {
        cpu->r[2] = add_flags(cpu, 0x0017214cu, cpu->r[2], 0, 0);
    }
L_00172148:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x548u);
    }
L_0017214c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00172150:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_00172154:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00172158:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0017215c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_00172160:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_00172164:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00172180;
        }
    }
L_00172168:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0017216c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00172170:;
    {
        cpu->r[14] = 0x00172178u;
    }
L_00172174:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00172178u)) return;
    }
L_00172178:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0017217c:;
    {
        wr32(cpu->r[4] + + 0x548u, cpu->r[3]);
    }
L_00172180:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00172184:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00172188u)) return;
    }
}

/* _ZN8CCarBaseD1Ev @ 00172190 (arm) */
void fn_00172190(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00172190:;
    {
        cpu->r[2] = rd32(0x00172198u + + 0x44u);
    }
L_00172194:;
    {
        cpu->r[1] = rd32(0x0017219cu + + 0x44u);
    }
L_00172198:;
    {
        cpu->r[2] = add_flags(cpu, 0x001721a0u, cpu->r[2], 0, 0);
    }
L_0017219c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x548u);
    }
L_001721a0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001721a4:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_001721a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001721ac:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001721b0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_001721b4:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_001721b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001721d4;
        }
    }
L_001721bc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001721c0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001721c4:;
    {
        cpu->r[14] = 0x001721ccu;
    }
L_001721c8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001721ccu)) return;
    }
L_001721cc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001721d0:;
    {
        wr32(cpu->r[4] + + 0x548u, cpu->r[3]);
    }
L_001721d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001721d8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001721dcu)) return;
    }
}

/* _ZNK8CCarBase14GetLengthFrontEv @ 001721e4 (arm) */
void fn_001721e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001721e4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x548u);
    }
L_001721e8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x24u);
    }
L_001721ec:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK8CCarBase13GetLengthRearEv @ 001721f0 (arm) */
void fn_001721f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001721f0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x548u);
    }
L_001721f4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x28u);
    }
L_001721f8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK8CCarBase12GetHalfWidthEv @ 001721fc (arm) */
void fn_001721fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001721fc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x548u);
    }
L_00172200:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x2cu);
    }
L_00172204:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK8CCarBase9GetHeightEv @ 00172208 (arm) */
void fn_00172208(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00172208:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x548u);
    }
L_0017220c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x30u);
    }
L_00172210:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8CCarBase14ClearCollisionEv @ 00172214 (arm) */
void fn_00172214(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00172214:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x488u);
    }
L_00172218:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0017221c:;
    {
        wr32(cpu->r[0] + + 0x484u, cpu->r[3]);
    }
L_00172220:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00172224:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00172228:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4a0u);
        }
    }
L_0017222c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00172230:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0x48cu, cpu->r[2]);
        }
    }
L_00172234:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
        }
    }
L_00172238:;
    {
        wr32(cpu->r[0] + + 0x4a0u, cpu->r[3]);
    }
L_0017223c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00172240:;
    {
        wr32(cpu->r[0] + + 0x4c4u, cpu->r[3]);
    }
L_00172244:;
    {
        wr32(cpu->r[0] + + 0x488u, cpu->r[3]);
    }
L_00172248:;
    {
        wr32(cpu->r[4] + + 0x4c0u, cpu->r[3]);
    }
L_0017224c:;
    {
        wr32(cpu->r[4] + + 0x4bcu, cpu->r[3]);
    }
L_00172250:;
    {
        wr32(cpu->r[4] + + 0x4b8u, cpu->r[3]);
    }
L_00172254:;
    {
        wr32(cpu->r[4] + + 0x4ccu, cpu->r[3]);
    }
L_00172258:;
    {
        wr32(cpu->r[4] + + 0x4c8u, cpu->r[3]);
    }
L_0017225c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00172260:;
    {
        cpu->r[14] = 0x00172268u;
    }
L_00172264:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00172268u)) return;
    }
L_00172268:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017226c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00172270u)) return;
        }
    }
L_00172270:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00172274:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00172278:;
    {
        cpu->r[14] = 0x00172280u;
    }
L_0017227c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00172280u)) return;
    }
L_00172280:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00172284:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00172288:;
    {
        uint32_t v = cpu->r[2] & ~ 0x01800000u; cpu->r[2] = v;
    }
L_0017228c:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[2]);
    }
L_00172290:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00172294u)) return;
    }
}

/* _ZN8CCarBase8InitJumpEPK10RoadStructf @ 00172294 (arm) */
void fn_00172294(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00172294:;
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
L_00172298:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_0017229c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_001722a0:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[2];
    }
L_001722a4:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001722a8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001722ac:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_001722b0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001722b4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001722b8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001722bc:;
    {
        cpu->r[14] = 0x001722c4u;
    }
L_001722c0:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x54u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001722c4u)) return;
    }
L_001722c4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), 0.0f);
    }
L_001722c8:;
    {
        cpu->r[5] = rd32(0x001722d0u + + 0x240u);
    }
L_001722cc:;
    {
        cpu->r[5] = add_flags(cpu, 0x001722d4u, cpu->r[5], 0, 0);
    }
L_001722d0:;
    {
        vfp_sync_flags(cpu);
    }
L_001722d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00172430;
        }
    }
L_001722d8:;
    {
        cpu->r[8] = rd32(0x001722e0u + + 0x234u);
    }
L_001722dc:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x001722e4u + + 0x210u);
    }
L_001722e0:;
    {
        vfp_vmul(cpu, 15, 16, 13);
    }
L_001722e4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001722ecu + + 0x20cu);
    }
L_001722e8:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x001722f0u + + 0x20cu);
    }
L_001722ec:;
    {
        vfp_vmul(cpu, 15, 15, 14);
    }
L_001722f0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,12));
    }
L_001722f4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001722f8:;
    {
        vfp_sync_flags(cpu);
    }
L_001722fc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001724e0;
        }
    }
L_00172300:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[4] + + 0x8u);
    }
L_00172304:;
    {
        vfp_vmul(cpu, 15, 16, 13);
    }
L_00172308:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_0017230c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00172310:;
    {
        vfp_vmul(cpu, 15, 15, 14);
    }
L_00172314:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,16);
    }
L_00172318:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0017231c:;
    {
        cpu->r[10] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00172320:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000410u, 0, 0);
    }
L_00172324:;
    {
        cpu->r[14] = rd32(cpu->r[3] + + 0x4dcu);
    }
L_00172328:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_0017232c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x420u);
    }
L_00172330:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x0000002cu, 0, 0);
    }
L_00172334:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x4cu);
    }
L_00172338:;
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
L_0017233c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x50u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00172340:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[14]);
    }
L_00172344:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x48u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00172348:;
    {
        wr32(cpu->r[4] + + 0x3d8u, cpu->r[3]);
    }
L_0017234c:;
    {
        cpu->r[6] = 0x00001788u;
    }
L_00172350:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00172354:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_00172358:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_0017235c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00172360:;
    {
        cpu->r[14] = 0x00172368u;
    }
L_00172364:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00172368u)) return;
    }
L_00172368:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_0017236c:;
    {
        cpu->r[1] = 0x0000fc19u;
    }
L_00172370:;
    {
        cpu->r[2] = 0x00006667u;
    }
L_00172374:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0xffffu << 16);
    }
L_00172378:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x6666u << 16);
    }
L_0017237c:;
    {
        cpu->r[12] = rd32(cpu->r[3]);
    }
L_00172380:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00172388u + + 0x178u);
    }
L_00172384:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0017238cu + + 0x178u);
    }
L_00172388:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0017238c:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x418u);
    }
L_00172390:;
    {
        wr32(cpu->r[4] + + 0x5cu, cpu->r[1]);
    }
L_00172394:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], shifter(cpu->r[12], 2, 3u, &shc), 0, 0);
    }
L_00172398:;
    {
        uint32_t v = cpu->r[0] * cpu->r[12]; cpu->r[1] = v;
    }
L_0017239c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001723a0:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[2] * (int64_t)(int32_t)cpu->r[1]; cpu->r[12] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_001723a4:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 31u, &shc); cpu->r[1] = v;
    }
L_001723a8:;
    {
        cpu->r[1] = sub_flags(cpu, shifter(cpu->r[2], 1, 6u, &shc), cpu->r[1], 1, 0);
    }
L_001723ac:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[1];
    }
L_001723b0:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_001723b4:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_001723b8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_001723bc:;
    {
        vfp_sync_flags(cpu);
    }
L_001723c0:;
    {
        if (cond_test(cpu, 6)) {
        *vfp_s(cpu,15) = *vfp_s(cpu,14);
        }
    }
L_001723c4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x44u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001723c8:;
    {
        cpu->r[14] = 0x001723d0u;
    }
L_001723cc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001723d0u)) return;
    }
L_001723d0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001723d4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[6]);
    }
L_001723d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001723dc:;
    {
        wr32(cpu->r[4] + + 0x38u, cpu->r[10]);
    }
L_001723e0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_001723e4:;
    {
        cpu->r[2] = (cpu->r[2] >> 5) & 0x1u;
    }
L_001723e8:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[7]);
    }
L_001723ec:;
    {
        wr8(cpu->r[4] + + 0x69u, cpu->r[2]);
    }
L_001723f0:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[1]);
    }
L_001723f4:;
    {
        cpu->r[14] = 0x001723fcu;
    }
L_001723f8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001723fcu)) return;
    }
L_001723fc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00172400:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00172404:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00172408:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[6]);
    }
L_0017240c:;
    {
        uint32_t v = cpu->r[1] | 0x00000008u; cpu->r[1] = v;
    }
L_00172410:;
    {
        wr32(cpu->r[2] + cpu->r[6], cpu->r[1]);
    }
L_00172414:;
    {
        cpu->r[14] = 0x0017241cu;
    }
L_00172418:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017241cu)) return;
    }
L_0017241c:;
    {
        cpu->r[3] = 0x000016b0u;
    }
L_00172420:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[7]);
    }
L_00172424:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00172428:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0017242c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00172430u)) return;
    }
L_00172430:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00172434:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00172438:;
    {
        cpu->r[6] = rd32(cpu->r[6] + + 0x10u);
    }
L_0017243c:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[13] + + 0xcu);
    }
L_00172440:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x1b0u);
    }
L_00172444:;
    {
        cpu->r[14] = 0x0017244cu;
    }
L_00172448:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017244cu)) return;
    }
L_0017244c:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_00172450:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00172454:;
    {
        cpu->r[14] = 0x0017245cu;
    }
L_00172458:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017245cu)) return;
    }
L_0017245c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00172460:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00172464:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00172468:;
    {
        cpu->r[14] = 0x00172470u;
    }
L_0017246c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00172470u)) return;
    }
L_00172470:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00172474:;
    {
        cpu->r[14] = 0x0017247cu;
    }
L_00172478:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x50u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017247cu)) return;
    }
L_0017247c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[6], 1, 1);
    }
L_00172480:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001722d8;
        }
    }
L_00172484:;
    {
        cpu->r[3] = 0x00006667u;
    }
L_00172488:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_0017248c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x6666u << 16);
    }
L_00172490:;
    {
        uint32_t v = shifter(cpu->r[0], 1, 31u, &shc); cpu->r[2] = v;
    }
L_00172494:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[0]; cpu->r[1] = (uint32_t)v; cpu->r[0] = (uint32_t)(v >> 32); }
    }
L_00172498:;
    {
        cpu->r[0] = sub_flags(cpu, shifter(cpu->r[0], 1, 1u, &shc), cpu->r[2], 1, 0);
    }
L_0017249c:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[0], 1, 1);
    }
L_001724a0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001722d8;
        }
    }
L_001724a4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,16), 0.0f);
    }
L_001724a8:;
    {
        vfp_sync_flags(cpu);
    }
L_001724ac:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001722d8;
        }
    }
L_001724b0:;
    {
        cpu->r[8] = rd32(0x001724b8u + + 0x5cu);
    }
L_001724b4:;
    {
        cpu->r[2] = 0x00001bd0u;
    }
L_001724b8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_001724bc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001724c0:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001724c4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000005u, 1, 1);
    }
L_001724c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001722dc;
        }
    }
L_001724cc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001724d4u + + 0x34u);
    }
L_001724d0:;
    {
        cpu->r[10] = (~0x00000063u);
    }
L_001724d4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001724d8:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x001724e0u + + 0x2cu);
    }
L_001724dc:;
    {
        goto L_00172320;
    }
L_001724e0:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,16);
    }
L_001724e4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[8]);
    }
L_001724e8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001724ec:;
    {
        cpu->r[10] = *(uint32_t*)vfp_s(cpu,14);
    }
L_001724f0:;
    {
        goto L_00172320;
    }
}

/* _ZN8CCarBase17UpdateSuspensionsEv @ 00172518 (arm) */
void fn_00172518(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00172518:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0017251c:;
    {
        cpu->r[13] -= 40u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
        wr64(cpu->r[13] + 16u, *(uint64_t*)vfp_d(cpu, 10));
        wr64(cpu->r[13] + 24u, *(uint64_t*)vfp_d(cpu, 11));
        wr64(cpu->r[13] + 32u, *(uint64_t*)vfp_d(cpu, 12));
    }
L_00172520:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00172524:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00172528:;
    {
        cpu->r[14] = 0x00172530u;
    }
L_0017252c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00172530u)) return;
    }
L_00172530:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00172534:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00172558;
        }
    }
L_00172538:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0017253c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00172540:;
    {
        cpu->r[14] = 0x00172548u;
    }
L_00172544:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00172548u)) return;
    }
L_00172548:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_0017254c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00172550:;
    {
        { uint32_t v = cpu->r[3] & 0x04000000u; set_nz(cpu, v); }
    }
L_00172554:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001727bc;
        }
    }
L_00172558:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_0017255c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_00172560:;
    {
        cpu->r[4] = cpu->r[5];
    }
L_00172564:;
    {
        cpu->r[7] = cpu->r[5];
    }
L_00172568:;
    {
        *vfp_s(cpu, 21) = *(float*)G(0x00172570u + + 0x268u);
    }
L_0017256c:;
    {
        *vfp_s(cpu, 25) = *(float*)G(0x00172574u + + 0x268u);
    }
L_00172570:;
    {
        *vfp_s(cpu, 19) = *(float*)G(0x00172578u + + 0x268u);
    }
L_00172574:;
    {
        *vfp_s(cpu, 18) = *(float*)G(0x0017257cu + + 0x268u);
    }
L_00172578:;
    {
        *vfp_s(cpu, 22) = *(float*)G(0x00172580u + + 0x268u);
    }
L_0017257c:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x00172584u + + 0x268u);
    }
L_00172580:;
    {
        *vfp_s(cpu, 23) = *(float*)G(0x00172588u + + 0x268u);
    }
L_00172584:;
    {
        *vfp_s(cpu, 24) = *(float*)G(0x0017258cu + + 0x268u);
    }
L_00172588:;
    {
        cpu->r[3] = rd8(cpu->r[7] + + 0x524u);
    }
L_0017258c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x130u);
    }
L_00172590:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00172594:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001725d0;
        }
    }
L_00172598:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0017259c:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[3], 0x00000006u, 1, 1);
        }
    }
L_001725a0:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x4e4u);
    }
L_001725a4:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x104u);
    }
L_001725a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001727c4;
        }
    }
L_001725ac:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
    }
L_001725b0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0xd0u);
    }
L_001725b4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000005u, 1, 1);
    }
L_001725b8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = 0x00000005u;
        }
    }
L_001725bc:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[1];
    }
L_001725c0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_001725c4:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_001725c8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xd0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001725cc:;
    {
        wr32(cpu->r[4] + + 0x130u, cpu->r[3]);
    }
L_001725d0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0xd0u);
    }
L_001725d4:;
    {
        vfp_vabs(cpu, 14, 15);
    }
L_001725d8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[6], 0x000004e0u, 0, 0);
    }
L_001725dc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], 0x00000100u, 0, 0);
    }
L_001725e0:;
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
L_001725e4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,21));
    }
L_001725e8:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_001725ec:;
    {
        vfp_sync_flags(cpu);
    }
L_001725f0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017260c;
        }
    }
L_001725f4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_001725f8:;
    {
        vfp_sync_flags(cpu);
    }
L_001725fc:;
    {
        if (cond_test(cpu, 6)) {
        *vfp_s(cpu,15) = *vfp_s(cpu,21);
        }
    }
L_00172600:;
    {
        if (cond_test(cpu, 5)) {
        *vfp_s(cpu,15) = *vfp_s(cpu,25);
        }
    }
L_00172604:;
    {
        vfp_vabs(cpu, 14, 15);
    }
L_00172608:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xd0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0017260c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0xf0u);
    }
L_00172610:;
    {
        vfp_vabs(cpu, 12, 13);
    }
L_00172614:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00172618:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0017261c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,12), *vfp_s(cpu,14));
    }
L_00172620:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0xe0u);
    }
L_00172624:;
    {
        vfp_sync_flags(cpu);
    }
L_00172628:;
    {
        if (cond_test(cpu, 6)) {
        *vfp_s(cpu,15) = *vfp_s(cpu,13);
        }
    }
L_0017262c:;
    {
        if (cond_test(cpu, 5)) {
        *(uint32_t*)G(cpu->r[4] + + 0xf0u) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_00172630:;
    {
        vfp_vmul(cpu, 15, 15, 22);
    }
L_00172634:;
    {
        vfp_vmla(cpu, 15, 14, 18);
    }
L_00172638:;
    {
        vfp_vdiv(cpu, 15, 15, 17);
    }
L_0017263c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xe0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00172640:;
    {
        vfp_vadd(cpu, 20, 15, 15);
    }
L_00172644:;
    {
        cpu->r[14] = 0x0017264cu;
    }
L_00172648:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x50u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017264cu)) return;
    }
L_0017264c:;
    {
        *(int32_t*)vfp_s(cpu,20) = (int32_t)*vfp_s(cpu,20);
    }
L_00172650:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00172654:;
    {
        if (cond_test(cpu, 14)) {
        *vfp_s(cpu, 15) = *(float*)G(0x0017265cu + + 0x19cu);
        }
    }
L_00172658:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001726a0;
        }
    }
L_0017265c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00172660:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00172664:;
    {
        cpu->r[14] = 0x0017266cu;
    }
L_00172668:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017266cu)) return;
    }
L_0017266c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00172670:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[0];
    }
L_00172674:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00172678:;
    {
        cpu->r[14] = 0x00172680u;
    }
L_0017267c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x50u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00172680u)) return;
    }
L_00172680:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_00172684:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0017268cu + + 0x170u);
    }
L_00172688:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_0017268c:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00172690:;
    {
        vfp_vdiv(cpu, 14, 16, 14);
    }
L_00172694:;
    {
        vfp_vsub(cpu, 14, 23, 14);
    }
L_00172698:;
    {
        vfp_vmla(cpu, 15, 14, 24);
    }
L_0017269c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_001726a0:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_001726a4:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001726a8:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,20);
    }
L_001726ac:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[2] = v;
    }
L_001726b0:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[2];
    }
L_001726b4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0xc0u);
    }
L_001726b8:;
    {
        vfp_vsub(cpu, 13, 17, 13);
    }
L_001726bc:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_001726c0:;
    {
        vfp_vmla(cpu, 15, 13, 14);
    }
L_001726c4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001726ccu + + 0x134u);
    }
L_001726c8:;
    {
        vfp_vdiv(cpu, 15, 15, 17);
    }
L_001726cc:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_001726d0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xc0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001726d4:;
    {
        vfp_sync_flags(cpu);
    }
L_001726d8:;
    {
        if (cond_test(cpu, 5)) {
        goto L_001726ec;
        }
    }
L_001726dc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001726e4u + + 0x120u);
    }
L_001726e0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_001726e4:;
    {
        vfp_sync_flags(cpu);
    }
L_001726e8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001726f4;
        }
    }
L_001726ec:;
    {
        *vfp_s(cpu,15) = *vfp_s(cpu,19);
    }
L_001726f0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xc0u) = *(uint32_t*)vfp_s(cpu, 19);
    }
L_001726f4:;
    {
        *vfp_s(cpu,20) = (float)*(int32_t*)vfp_s(cpu,20);
    }
L_001726f8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00172700u + + 0x108u);
    }
L_001726fc:;
    {
        vfp_vsub(cpu, 15, 20, 15);
    }
L_00172700:;
    {
        vfp_vabs(cpu, 15, 15);
    }
L_00172704:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_00172708:;
    {
        vfp_sync_flags(cpu);
    }
L_0017270c:;
    {
        if (cond_test(cpu, 6)) {
        goto L_00172734;
        }
    }
L_00172710:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0xf0u);
    }
L_00172714:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0017271cu + + 0xf0u);
    }
L_00172718:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_0017271c:;
    {
        vfp_vdiv(cpu, 15, 15, 17);
    }
L_00172720:;
    {
        vfp_vabs(cpu, 13, 15);
    }
L_00172724:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xf0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00172728:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), *vfp_s(cpu,14));
    }
L_0017272c:;
    {
        vfp_sync_flags(cpu);
    }
L_00172730:;
    {
        if (cond_test(cpu, 5)) {
        *(uint32_t*)G(cpu->r[4] + + 0xf0u) = *(uint32_t*)vfp_s(cpu, 19);
        }
    }
L_00172734:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0xd0u);
    }
L_00172738:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00172740u + + 0xd0u);
    }
L_0017273c:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_00172740:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_00172744:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[8], 1, 1);
    }
L_00172748:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x0000000cu, 0, 0);
    }
L_0017274c:;
    {
        vfp_vdiv(cpu, 15, 15, 18);
    }
L_00172750:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xd0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00172754:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_00172758:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00172588;
        }
    }
L_0017275c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0xd0u);
    }
L_00172760:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_00172764:;
    {
        vfp_sync_flags(cpu);
    }
L_00172768:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017278c;
        }
    }
L_0017276c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[5] + + 0xdcu);
    }
L_00172770:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), 0.0f);
    }
L_00172774:;
    {
        vfp_sync_flags(cpu);
    }
L_00172778:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017278c;
        }
    }
L_0017277c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_00172780:;
    {
        vfp_sync_flags(cpu);
    }
L_00172784:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 15) = *(float*)G(0x0017278cu + + 0x7cu);
        }
    }
L_00172788:;
    {
        if (cond_test(cpu, 1)) {
        *(uint32_t*)G(cpu->r[5] + + 0xd0u) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_0017278c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0xd4u);
    }
L_00172790:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_00172794:;
    {
        vfp_sync_flags(cpu);
    }
L_00172798:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001727bc;
        }
    }
L_0017279c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[5] + + 0xd8u);
    }
L_001727a0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), 0.0f);
    }
L_001727a4:;
    {
        vfp_sync_flags(cpu);
    }
L_001727a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001727bc;
        }
    }
L_001727ac:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_001727b0:;
    {
        vfp_sync_flags(cpu);
    }
L_001727b4:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 15) = *(float*)G(0x001727bcu + + 0x4cu);
        }
    }
L_001727b8:;
    {
        if (cond_test(cpu, 1)) {
        *(uint32_t*)G(cpu->r[5] + + 0xd4u) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_001727bc:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        *(uint64_t*)vfp_d(cpu, 10) = rd64(cpu->r[13] + 16u);
        *(uint64_t*)vfp_d(cpu, 11) = rd64(cpu->r[13] + 24u);
        *(uint64_t*)vfp_d(cpu, 12) = rd64(cpu->r[13] + 32u);
        cpu->r[13] += 40u;
    }
L_001727c0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001727c4u)) return;
    }
L_001727c4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_001727c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001725ac;
        }
    }
L_001727cc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000006u, 1, 1);
    }
L_001727d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001725cc;
        }
    }
L_001727d4:;
    {
        goto L_001725ac;
    }
}

/* _ZN8CCarBase14UpdateLandAnimEiii @ 00172814 (arm) */
void fn_00172814(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00172814:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x398u);
    }
L_00172818:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0017281c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00172948;
        }
    }
L_00172820:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00172824:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00172900;
        }
    }
L_00172828:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0017282c:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00172830:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x14u);
    }
L_00172834:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0017283cu + + 0x214u);
    }
L_00172838:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_0017283c:;
    {
        vfp_sync_flags(cpu);
    }
L_00172840:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00172998;
        }
    }
L_00172844:;
    {
        *(uint32_t*)vfp_s(cpu,8) = cpu->r[1];
    }
L_00172848:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,8);
    }
L_0017284c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x18u);
    }
L_00172850:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0xcu);
    }
L_00172854:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_00172858:;
    {
        vfp_sync_flags(cpu);
    }
L_0017285c:;
    {
        if (cond_test(cpu, 6)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00172860:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_00172864:;
    {
        *vfp_s(cpu, 11) = *(float*)G(0x0017286cu + + 0x1e8u);
    }
L_00172868:;
    {
        vfp_vmul(cpu, 9, 14, 11);
    }
L_0017286c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00172874u + + 0x1e4u);
    }
L_00172870:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00172874:;
    {
        *vfp_s(cpu, 11) = *(float*)G(0x0017287cu + + 0x1d4u);
    }
L_00172878:;
    {
        *vfp_s(cpu, 10) = *(float*)G(0x00172880u + + 0x1dcu);
    }
L_0017287c:;
    {
        vfp_vdiv(cpu, 9, 9, 14);
    }
L_00172880:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00172888u + + 0x1d8u);
    }
L_00172884:;
    {
        vfp_vadd(cpu, 14, 9, 14);
    }
L_00172888:;
    {
        *vfp_s(cpu,8) = *vfp_s(cpu,12);
    }
L_0017288c:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu,9) = *vfp_s(cpu,10);
        }
    }
L_00172890:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu,9) = *vfp_s(cpu,11);
        }
    }
L_00172894:;
    {
        vfp_vmla(cpu, 8, 9, 14);
    }
L_00172898:;
    {
        *vfp_s(cpu, 9) = *(float*)G(0x001728a0u + + 0x1c4u);
    }
L_0017289c:;
    {
        *vfp_s(cpu,14) = *vfp_s(cpu,8);
    }
L_001728a0:;
    {
        vfp_vsub(cpu, 8, 13, 8);
    }
L_001728a4:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001728a8:;
    {
        vfp_vabs(cpu, 8, 8);
    }
L_001728ac:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,8), *vfp_s(cpu,9));
    }
L_001728b0:;
    {
        vfp_sync_flags(cpu);
    }
L_001728b4:;
    {
        if (cond_test(cpu, 6)) {
        goto L_00172a28;
        }
    }
L_001728b8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_001728bc:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001728c0:;
    {
        wr32(cpu->r[0] + + 0x398u, cpu->r[3]);
    }
L_001728c4:;
    {
        vfp_sync_flags(cpu);
    }
L_001728c8:;
    {
        if (cond_test(cpu, 6)) {
        goto L_00172a44;
        }
    }
L_001728cc:;
    {
        *vfp_s(cpu,11) = *vfp_s(cpu,10);
    }
L_001728d0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001728d8u + + 0x190u);
    }
L_001728d4:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001728d8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001728e0u + + 0x180u);
    }
L_001728dc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x18u);
    }
L_001728e0:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_001728e4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001728ecu + + 0x16cu);
    }
L_001728e8:;
    {
        vfp_vdiv(cpu, 14, 14, 15);
    }
L_001728ec:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001728f4u + + 0x178u);
    }
L_001728f0:;
    {
        vfp_vadd(cpu, 15, 14, 15);
    }
L_001728f4:;
    {
        vfp_vmla(cpu, 12, 11, 15);
    }
L_001728f8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_001728fc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00172900:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0xcu);
    }
L_00172904:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x10u);
    }
L_00172908:;
    {
        vfp_vsub(cpu, 12, 15, 14);
    }
L_0017290c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x00172914u + + 0x154u);
    }
L_00172910:;
    {
        vfp_vabs(cpu, 12, 12);
    }
L_00172914:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,12), *vfp_s(cpu,13));
    }
L_00172918:;
    {
        vfp_sync_flags(cpu);
    }
L_0017291c:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[3] = (~0x00000000u);
        }
    }
L_00172920:;
    {
        if (cond_test(cpu, 5)) {
        wr32(cpu->r[0] + + 0x398u, cpu->r[3]);
        }
    }
L_00172924:;
    {
        if (cond_test(cpu, 5)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00172928:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_0017292c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x14u);
    }
L_00172930:;
    {
        vfp_vabs(cpu, 14, 14);
    }
L_00172934:;
    {
        vfp_sync_flags(cpu);
    }
L_00172938:;
    {
        if (cond_test(cpu, 5)) {
        vfp_vadd(cpu, 15, 15, 14);
        }
    }
L_0017293c:;
    {
        if (cond_test(cpu, 6)) {
        vfp_vsub(cpu, 15, 15, 14);
        }
    }
L_00172940:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00172944:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00172948:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0xcu);
    }
L_0017294c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x10u);
    }
L_00172950:;
    {
        vfp_vsub(cpu, 12, 15, 14);
    }
L_00172954:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x0017295cu + + 0x10cu);
    }
L_00172958:;
    {
        vfp_vabs(cpu, 12, 12);
    }
L_0017295c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,12), *vfp_s(cpu,13));
    }
L_00172960:;
    {
        vfp_sync_flags(cpu);
    }
L_00172964:;
    {
        if (cond_test(cpu, 6)) {
        goto L_00172928;
        }
    }
L_00172968:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x14u);
    }
L_0017296c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_00172970:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[1];
    }
L_00172974:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x0017297cu + + 0xf4u);
    }
L_00172978:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_0017297c:;
    {
        wr32(cpu->r[0] + + 0x398u, cpu->r[3]);
    }
L_00172980:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_00172984:;
    {
        vfp_sync_flags(cpu);
    }
L_00172988:;
    {
        if (cond_test(cpu, 6)) {
        *vfp_s(cpu,13) = *vfp_s(cpu,14);
        }
    }
L_0017298c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00172990:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00172994:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00172998:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[1];
    }
L_0017299c:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_001729a0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0xcu);
    }
L_001729a4:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[0] + + 0x30u);
    }
L_001729a8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), *vfp_s(cpu,12));
    }
L_001729ac:;
    {
        *vfp_s(cpu,11) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_001729b0:;
    {
        vfp_sync_flags(cpu);
    }
L_001729b4:;
    {
        if (cond_test(cpu, 5)) {
        *vfp_s(cpu, 15) = *(float*)G(0x001729bcu + + 0xa0u);
        }
    }
L_001729b8:;
    {
        if (cond_test(cpu, 5)) {
        *(uint32_t*)G(cpu->r[0] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_001729bc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x3d8u);
    }
L_001729c0:;
    {
        if (cond_test(cpu, 6)) {
        *(uint32_t*)G(cpu->r[0] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 14);
        }
    }
L_001729c4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001729ccu + + 0xa8u);
    }
L_001729c8:;
    {
        if (cond_test(cpu, 5)) {
        *vfp_s(cpu, 10) = *(float*)G(0x001729d0u + + 0x9cu);
        }
    }
L_001729cc:;
    {
        if (cond_test(cpu, 6)) {
        *vfp_s(cpu, 10) = *(float*)G(0x001729d4u + + 0xa4u);
        }
    }
L_001729d0:;
    {
        if (cond_test(cpu, 6)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001729d4:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 10);
    }
L_001729d8:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_001729dc:;
    {
        vfp_vsub(cpu, 15, 11, 15);
    }
L_001729e0:;
    {
        vfp_vabs(cpu, 15, 15);
    }
L_001729e4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_001729e8:;
    {
        vfp_sync_flags(cpu);
    }
L_001729ec:;
    {
        if (cond_test(cpu, 5)) {
        *vfp_s(cpu,15) = *vfp_s(cpu,14);
        }
    }
L_001729f0:;
    {
        if (cond_test(cpu, 5)) {
        goto L_00172a04;
        }
    }
L_001729f4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001729fcu + + 0x80u);
    }
L_001729f8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_001729fc:;
    {
        vfp_sync_flags(cpu);
    }
L_00172a00:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,15) = *vfp_s(cpu,14);
        }
    }
L_00172a04:;
    {
        *vfp_s(cpu, 11) = *(float*)G(0x00172a0cu + + 0x68u);
    }
L_00172a08:;
    {
        vfp_vsub(cpu, 11, 15, 11);
    }
L_00172a0c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00172a14u + + 0x44u);
    }
L_00172a10:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x14u);
    }
L_00172a14:;
    {
        vfp_vmul(cpu, 11, 11, 14);
    }
L_00172a18:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00172a20u + + 0x60u);
    }
L_00172a1c:;
    {
        vfp_vdiv(cpu, 14, 11, 14);
    }
L_00172a20:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00172a24:;
    {
        goto L_00172864;
    }
L_00172a28:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,13));
    }
L_00172a2c:;
    {
        vfp_vabs(cpu, 15, 15);
    }
L_00172a30:;
    {
        vfp_sync_flags(cpu);
    }
L_00172a34:;
    {
        if (cond_test(cpu, 13)) {
        vfp_vadd(cpu, 13, 13, 15);
        }
    }
L_00172a38:;
    {
        if (cond_test(cpu, 14)) {
        vfp_vsub(cpu, 13, 13, 15);
        }
    }
L_00172a3c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00172a40:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00172a44:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00172a4cu + + 0x24u);
    }
L_00172a48:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00172a4c:;
    {
        goto L_001728d8;
    }
}

/* _ZN8CCarBase21UpdateForcedBrakeAnimEiii @ 00172a84 (arm) */
void fn_00172a84(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00172a84:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x39cu);
    }
L_00172a88:;
    {
        cpu->r[3] = rd32(0x00172a90u + + 0x1d8u);
    }
L_00172a8c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00172a90:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00172a94:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00172a98:;
    {
        cpu->r[3] = add_flags(cpu, 0x00172aa0u, cpu->r[3], 0, 0);
    }
L_00172a9c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00172aa0:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00172aa4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00172b7c;
        }
    }
L_00172aa8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x14u);
    }
L_00172aac:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00172ab4u + + 0x190u);
    }
L_00172ab0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_00172ab4:;
    {
        vfp_sync_flags(cpu);
    }
L_00172ab8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00172bcc;
        }
    }
L_00172abc:;
    {
        cpu->r[2] = rd32(0x00172ac4u + + 0x1a8u);
    }
L_00172ac0:;
    {
        cpu->r[1] = 0x00008c50u;
    }
L_00172ac4:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_00172ac8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00172ad0u + + 0x178u);
    }
L_00172acc:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00172ad0:;
    {
        *vfp_s(cpu, 17) = *(float*)G(0x00172ad8u + + 0x174u);
    }
L_00172ad4:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00172ad8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00172ae0u + + 0x170u);
    }
L_00172adc:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00172ae0:;
    {
        cpu->r[12] = rd32(cpu->r[2]);
    }
L_00172ae4:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_00172ae8:;
    {
        cpu->r[12] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_00172aec:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[1]);
    }
L_00172af0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_00172af4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00006300u, 0, 0);
    }
L_00172af8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001eu, 0, 0);
    }
L_00172afc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[12], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_00172b00:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_00172b04:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[2], 1, 1);
    }
L_00172b08:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu,17) = *vfp_s(cpu,15);
        }
    }
L_00172b0c:;
    {
        cpu->r[14] = 0x00172b14u;
    }
L_00172b10:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x50u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00172b14u)) return;
    }
L_00172b14:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00172b18:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00172c0c;
        }
    }
L_00172b1c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00172b24u + + 0x130u);
    }
L_00172b20:;
    {
        vfp_vmul(cpu, 14, 15, 17);
    }
L_00172b24:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00172b2cu + + 0x12cu);
    }
L_00172b28:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_00172b2c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[5];
    }
L_00172b30:;
    {
        vfp_vadd(cpu, 17, 15, 17);
    }
L_00172b34:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00172b38:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00172b40u + + 0x108u);
    }
L_00172b3c:;
    {
        vfp_vadd(cpu, 17, 15, 17);
    }
L_00172b40:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00172b44:;
    {
        vfp_vsub(cpu, 13, 15, 17);
    }
L_00172b48:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_00172b4c:;
    {
        vfp_vabs(cpu, 13, 13);
    }
L_00172b50:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), *vfp_s(cpu,14));
    }
L_00172b54:;
    {
        vfp_sync_flags(cpu);
    }
L_00172b58:;
    {
        if (cond_test(cpu, 5)) {
        goto L_00172bec;
        }
    }
L_00172b5c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x00172b64u + + 0xf8u);
    }
L_00172b60:;
    {
        vfp_vmul(cpu, 13, 17, 13);
    }
L_00172b64:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x00172b6cu + + 0xf4u);
    }
L_00172b68:;
    {
        vfp_vmla(cpu, 13, 15, 12);
    }
L_00172b6c:;
    {
        vfp_vdiv(cpu, 15, 13, 14);
    }
L_00172b70:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00172b74:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00172b78:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00172b7cu)) return;
    }
L_00172b7c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_00172b80:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00172b74;
        }
    }
L_00172b84:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0xcu);
    }
L_00172b88:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x10u);
    }
L_00172b8c:;
    {
        vfp_vsub(cpu, 12, 14, 13);
    }
L_00172b90:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00172b98u + + 0xccu);
    }
L_00172b94:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00172b98:;
    {
        vfp_vabs(cpu, 12, 12);
    }
L_00172b9c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,12), *vfp_s(cpu,15));
    }
L_00172ba0:;
    {
        vfp_sync_flags(cpu);
    }
L_00172ba4:;
    {
        if (cond_test(cpu, 6)) {
        *vfp_s(cpu, 15) = *(float*)G(0x00172bacu + + 0xb0u);
        }
    }
L_00172ba8:;
    {
        if (cond_test(cpu, 6)) {
        vfp_vmul(cpu, 15, 13, 15);
        }
    }
L_00172bac:;
    {
        if (cond_test(cpu, 6)) {
        *vfp_s(cpu, 13) = *(float*)G(0x00172bb4u + + 0xacu);
        }
    }
L_00172bb0:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[3] = (~0x00000000u);
        }
    }
L_00172bb4:;
    {
        if (cond_test(cpu, 5)) {
        wr32(cpu->r[0] + + 0x39cu, cpu->r[3]);
        }
    }
L_00172bb8:;
    {
        if (cond_test(cpu, 6)) {
        vfp_vmla(cpu, 15, 14, 13);
        }
    }
L_00172bbc:;
    {
        if (cond_test(cpu, 6)) {
        *vfp_s(cpu, 14) = *(float*)G(0x00172bc4u + + 0x84u);
        }
    }
L_00172bc0:;
    {
        if (cond_test(cpu, 6)) {
        vfp_vdiv(cpu, 15, 15, 14);
        }
    }
L_00172bc4:;
    {
        if (cond_test(cpu, 6)) {
        *(uint32_t*)G(cpu->r[0] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_00172bc8:;
    {
        goto L_00172b74;
    }
L_00172bcc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0xcu);
    }
L_00172bd0:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[0] + + 0x10u);
    }
L_00172bd4:;
    {
        vfp_vsub(cpu, 13, 15, 17);
    }
L_00172bd8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00172be0u + + 0x68u);
    }
L_00172bdc:;
    {
        vfp_vabs(cpu, 13, 13);
    }
L_00172be0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), *vfp_s(cpu,14));
    }
L_00172be4:;
    {
        vfp_sync_flags(cpu);
    }
L_00172be8:;
    {
        if (cond_test(cpu, 6)) {
        goto L_00172b5c;
        }
    }
L_00172bec:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[5];
    }
L_00172bf0:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00172bf4:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00172bf8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00172c00u + + 0x64u);
    }
L_00172bfc:;
    {
        wr32(cpu->r[4] + + 0x39cu, cpu->r[3]);
    }
L_00172c00:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00172c04:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00172c08:;
    {
        goto L_00172b74;
    }
L_00172c0c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00172c10:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00172c14:;
    {
        cpu->r[14] = 0x00172c1cu;
    }
L_00172c18:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00172c1cu)) return;
    }
L_00172c1c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00172c20:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[0];
    }
L_00172c24:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00172c28:;
    {
        cpu->r[14] = 0x00172c30u;
    }
L_00172c2c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x50u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00172c30u)) return;
    }
L_00172c30:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_00172c34:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00172c38:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00172c3c:;
    {
        vfp_vdiv(cpu, 15, 16, 15);
    }
L_00172c40:;
    {
        goto L_00172b20;
    }
}

/* _ZN8CCarBase18ComputeCarRotationERiS0_S0_S0_S0_S0_ @ 00172c70 (arm) */
void fn_00172c70(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00172c70:;
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
L_00172c74:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_00172c78:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00172c7c:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_00172c80:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00172c84:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00172c88:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_00172c8c:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00172c90:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_00172c94:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_00172c98:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00172c9c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x30u);
    }
L_00172ca0:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x34u);
    }
L_00172ca4:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x38u);
    }
L_00172ca8:;
    {
        cpu->r[14] = 0x00172cb0u;
    }
L_00172cac:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00172cb0u)) return;
    }
L_00172cb0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00172cb4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00172cd8;
        }
    }
L_00172cb8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00172cbc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00172cc0:;
    {
        cpu->r[14] = 0x00172cc8u;
    }
L_00172cc4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x3cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00172cc8u)) return;
    }
L_00172cc8:;
    {
        cpu->r[3] = 0x00001788u;
    }
L_00172ccc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00172cd0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000008u; set_nz(cpu, v); }
    }
L_00172cd4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00172d64;
        }
    }
L_00172cd8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x38u);
    }
L_00172cdc:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_00172ce0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_00172ce4:;
    {
        wr32(cpu->r[6], cpu->r[3]);
    }
L_00172ce8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x3cu);
    }
L_00172cec:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_00172cf0:;
    {
        wr32(cpu->r[5], cpu->r[0]);
    }
L_00172cf4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x40u);
    }
L_00172cf8:;
    {
        wr32(cpu->r[7], cpu->r[0]);
    }
L_00172cfc:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_00172d00:;
    {
        wr32(cpu->r[8], cpu->r[0]);
    }
L_00172d04:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_00172d08:;
    {
        wr32(cpu->r[10], cpu->r[0]);
    }
L_00172d0c:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_00172d10:;
    {
        wr32(cpu->r[9], cpu->r[0]);
    }
L_00172d14:;
    {
        *(uint32_t*)vfp_s(cpu,9) = cpu->r[1];
    }
L_00172d18:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[5]);
    }
L_00172d1c:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,9);
    }
L_00172d20:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[7]);
    }
L_00172d24:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[6]);
    }
L_00172d28:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[2];
    }
L_00172d2c:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00172d30:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xb4u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00172d34:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[3];
    }
L_00172d38:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00172d3c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xacu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00172d40:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00172d44:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xb0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00172d48:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_00172d4c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xa8u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00172d50:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_00172d54:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xb8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00172d58:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xbcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00172d5c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_00172d60:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00172d64u)) return;
    }
L_00172d64:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00172d68:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_00172d6c:;
    {
        cpu->r[12] = rd32(cpu->r[4]);
    }
L_00172d70:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00172d74:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00172d78:;
    {
        cpu->r[14] = 0x00172d80u;
    }
L_00172d7c:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x54u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00172d80u)) return;
    }
L_00172d80:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_00172d84:;
    {
        *(uint32_t*)vfp_s(cpu,7) = cpu->r[1];
    }
L_00172d88:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,7);
    }
L_00172d8c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00172d94u + + 0x204u);
    }
L_00172d90:;
    {
        vfp_vmul(cpu, 13, 15, 14);
    }
L_00172d94:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00172d9cu + + 0x200u);
    }
L_00172d98:;
    {
        vfp_vmul(cpu, 13, 13, 14);
    }
L_00172d9c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00172da4u + + 0x1fcu);
    }
L_00172da0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), *vfp_s(cpu,14));
    }
L_00172da4:;
    {
        vfp_sync_flags(cpu);
    }
L_00172da8:;
    {
        if (cond_test(cpu, 6)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x8u);
        }
    }
L_00172dac:;
    {
        if (cond_test(cpu, 6)) {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
        }
    }
L_00172db0:;
    {
        if (cond_test(cpu, 5)) {
        *(uint32_t*)G(cpu->r[4] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_00172db4:;
    {
        if (cond_test(cpu, 6)) {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
        }
    }
L_00172db8:;
    {
        if (cond_test(cpu, 6)) {
        wr32(cpu->r[13] + + 0xcu, cpu->r[1]);
        }
    }
L_00172dbc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x398u);
    }
L_00172dc0:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_00172dc4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00172e08;
        }
    }
L_00172dc8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00172dcc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_00172dd0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_00172dd4:;
    {
        cpu->r[14] = 0x00172dd8u; fn_00172814(cpu);
    }
L_00172dd8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0xcu);
    }
L_00172ddc:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00172de0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_00172de4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_00172de8:;
    {
        *(uint32_t*)G(cpu->r[6]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00172dec:;
    {
        wr32(cpu->r[5], cpu->r[2]);
    }
L_00172df0:;
    {
        wr32(cpu->r[7], cpu->r[3]);
    }
L_00172df4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_00172df8:;
    {
        wr32(cpu->r[8], cpu->r[1]);
    }
L_00172dfc:;
    {
        wr32(cpu->r[10], cpu->r[2]);
    }
L_00172e00:;
    {
        wr32(cpu->r[9], cpu->r[3]);
    }
L_00172e04:;
    {
        goto L_00172d14;
    }
L_00172e08:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x39cu);
    }
L_00172e0c:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_00172e10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00172e28;
        }
    }
L_00172e14:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00172e18:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_00172e1c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_00172e20:;
    {
        cpu->r[14] = 0x00172e24u; fn_00172a84(cpu);
    }
L_00172e24:;
    {
        goto L_00172dd8;
    }
L_00172e28:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00172e30u + + 0x174u);
    }
L_00172e2c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0xa8u);
    }
L_00172e30:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), *vfp_s(cpu,15));
    }
L_00172e34:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x00172e3cu + + 0x168u);
    }
L_00172e38:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0xacu);
    }
L_00172e3c:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_00172e40:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_00172e44:;
    {
        vfp_sync_flags(cpu);
    }
L_00172e48:;
    {
        if (cond_test(cpu, 1)) {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[1];
        }
    }
L_00172e4c:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,11);
        }
    }
L_00172e50:;
    {
        if (cond_test(cpu, 2)) {
        *(uint32_t*)vfp_s(cpu,9) = cpu->r[1];
        }
    }
L_00172e54:;
    {
        *vfp_s(cpu, 11) = *(float*)G(0x00172e5cu + + 0x148u);
    }
L_00172e58:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x380u);
    }
L_00172e5c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,12));
    }
L_00172e60:;
    {
        if (cond_test(cpu, 1)) {
        *(uint32_t*)G(cpu->r[4] + + 0xa8u) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_00172e64:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,9);
        }
    }
L_00172e68:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu,13) = *vfp_s(cpu,15);
        }
    }
L_00172e6c:;
    {
        vfp_sync_flags(cpu);
    }
L_00172e70:;
    {
        if (cond_test(cpu, 1)) {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[2];
        }
    }
L_00172e74:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,12);
        }
    }
L_00172e78:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[4] + + 0xb0u);
    }
L_00172e7c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,12), *vfp_s(cpu,11));
    }
L_00172e80:;
    {
        if (cond_test(cpu, 1)) {
        *(uint32_t*)G(cpu->r[4] + + 0xacu) = *(uint32_t*)vfp_s(cpu, 14);
        }
    }
L_00172e84:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[4] + + 0xd0u);
    }
L_00172e88:;
    {
        vfp_sync_flags(cpu);
    }
L_00172e8c:;
    {
        if (cond_test(cpu, 1)) {
        *(uint32_t*)vfp_s(cpu,7) = cpu->r[3];
        }
    }
L_00172e90:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,7);
        }
    }
L_00172e94:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,11), 0.0f);
    }
L_00172e98:;
    {
        if (cond_test(cpu, 1)) {
        *(uint32_t*)G(cpu->r[4] + + 0xb0u) = *(uint32_t*)vfp_s(cpu, 12);
        }
    }
L_00172e9c:;
    {
        vfp_sync_flags(cpu);
    }
L_00172ea0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00172f90;
        }
    }
L_00172ea4:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[4] + + 0xd4u);
    }
L_00172ea8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,11), 0.0f);
    }
L_00172eac:;
    {
        vfp_sync_flags(cpu);
    }
L_00172eb0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00172f90;
        }
    }
L_00172eb4:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[4] + + 0xd8u);
    }
L_00172eb8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,11), 0.0f);
    }
L_00172ebc:;
    {
        vfp_sync_flags(cpu);
    }
L_00172ec0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00172f90;
        }
    }
L_00172ec4:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[4] + + 0xdcu);
    }
L_00172ec8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,11), 0.0f);
    }
L_00172ecc:;
    {
        vfp_sync_flags(cpu);
    }
L_00172ed0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00172ed4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00172ed8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00172edc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00172f34;
        }
    }
L_00172ee0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00172ee4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00172f34;
        }
    }
L_00172ee8:;
    {
        *vfp_s(cpu, 8) = *(float*)G(0x00172ef0u + + 0xb8u);
    }
L_00172eec:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[2];
    }
L_00172ef0:;
    {
        *(uint32_t*)vfp_s(cpu,7) = cpu->r[3];
    }
L_00172ef4:;
    {
        *vfp_s(cpu,10) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_00172ef8:;
    {
        *vfp_s(cpu, 11) = *(float*)G(0x00172f00u + + 0xacu);
    }
L_00172efc:;
    {
        *vfp_s(cpu,9) = (float)*(int32_t*)vfp_s(cpu,7);
    }
L_00172f00:;
    {
        vfp_vmla(cpu, 15, 13, 8);
    }
L_00172f04:;
    {
        vfp_vmla(cpu, 9, 12, 8);
    }
L_00172f08:;
    {
        vfp_vmla(cpu, 10, 14, 8);
    }
L_00172f0c:;
    {
        vfp_vdiv(cpu, 15, 15, 11);
    }
L_00172f10:;
    {
        vfp_vdiv(cpu, 12, 9, 11);
    }
L_00172f14:;
    {
        vfp_vdiv(cpu, 14, 10, 11);
    }
L_00172f18:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00172f1c:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_00172f20:;
    {
        *(uint32_t*)G(cpu->r[6]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00172f24:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,12);
    }
L_00172f28:;
    {
        *(uint32_t*)G(cpu->r[5]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00172f2c:;
    {
        *(uint32_t*)G(cpu->r[7]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00172f30:;
    {
        goto L_00172df4;
    }
L_00172f34:;
    {
        *(uint32_t*)vfp_s(cpu,9) = cpu->r[2];
    }
L_00172f38:;
    {
        *vfp_s(cpu,6) = (float)*(int32_t*)vfp_s(cpu,9);
    }
L_00172f3c:;
    {
        *(uint32_t*)vfp_s(cpu,9) = cpu->r[3];
    }
L_00172f40:;
    {
        *vfp_s(cpu, 7) = *(float*)G(0x00172f48u + + 0x68u);
    }
L_00172f44:;
    {
        *vfp_s(cpu, 8) = *(float*)G(0x00172f4cu + + 0x68u);
    }
L_00172f48:;
    {
        *vfp_s(cpu, 11) = *(float*)G(0x00172f50u + + 0x68u);
    }
L_00172f4c:;
    {
        *vfp_s(cpu,10) = (float)*(int32_t*)vfp_s(cpu,9);
    }
L_00172f50:;
    {
        vfp_vmul(cpu, 9, 10, 7);
    }
L_00172f54:;
    {
        vfp_vmul(cpu, 10, 15, 7);
    }
L_00172f58:;
    {
        vfp_vmul(cpu, 15, 6, 7);
    }
L_00172f5c:;
    {
        vfp_vmla(cpu, 10, 13, 8);
    }
L_00172f60:;
    {
        vfp_vmla(cpu, 9, 12, 8);
    }
L_00172f64:;
    {
        vfp_vmla(cpu, 15, 14, 8);
    }
L_00172f68:;
    {
        vfp_vdiv(cpu, 12, 10, 11);
    }
L_00172f6c:;
    {
        vfp_vdiv(cpu, 14, 15, 11);
    }
L_00172f70:;
    {
        vfp_vdiv(cpu, 13, 9, 11);
    }
L_00172f74:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,12);
    }
L_00172f78:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_00172f7c:;
    {
        *(uint32_t*)G(cpu->r[6]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00172f80:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,13);
    }
L_00172f84:;
    {
        *(uint32_t*)G(cpu->r[5]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00172f88:;
    {
        *(uint32_t*)G(cpu->r[7]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00172f8c:;
    {
        goto L_00172df4;
    }
L_00172f90:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00172f94:;
    {
        goto L_00172ed8;
    }
}

/* _ZN8CCarBase17UpdateBalanceAnimERiS0_S0_ @ 00172fbc (arm) */
void fn_00172fbc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00172fbc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x3a0u);
    }
L_00172fc0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00172fc4:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00172fc8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00172fcc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00172fd0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00172fd4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001730c4;
        }
    }
L_00172fd8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00172fdc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00173084;
        }
    }
L_00172fe0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00172fe4:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x1cu);
        }
    }
L_00172fe8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00173000;
        }
    }
L_00172fec:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00172ff0:;
    {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00172ff4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00172ff8:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00172ffc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00173000u)) return;
    }
L_00173000:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00173008u + + 0x224u);
    }
L_00173004:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x24u);
    }
L_00173008:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), *vfp_s(cpu,15));
    }
L_0017300c:;
    {
        vfp_sync_flags(cpu);
    }
L_00173010:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x20u);
        }
    }
L_00173014:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00173130;
        }
    }
L_00173018:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x1cu);
    }
L_0017301c:;
    {
        vfp_vsub(cpu, 11, 15, 14);
    }
L_00173020:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x00173028u + + 0x208u);
    }
L_00173024:;
    {
        vfp_vabs(cpu, 11, 11);
    }
L_00173028:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,11), *vfp_s(cpu,12));
    }
L_0017302c:;
    {
        vfp_sync_flags(cpu);
    }
L_00173030:;
    {
        if (cond_test(cpu, 6)) {
        goto L_00173114;
        }
    }
L_00173034:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), 0.0f);
    }
L_00173038:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_0017303c:;
    {
        wr32(cpu->r[4] + + 0x3a0u, cpu->r[3]);
    }
L_00173040:;
    {
        vfp_sync_flags(cpu);
    }
L_00173044:;
    {
        if (cond_test(cpu, 6)) {
        goto L_00173214;
        }
    }
L_00173048:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2]);
    }
L_0017304c:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00173050:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x00173058u + + 0x1dcu);
    }
L_00173054:;
    {
        *vfp_s(cpu, 11) = *(float*)G(0x0017305cu + + 0x1dcu);
    }
L_00173058:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0017305c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x00173064u + + 0x1d8u);
    }
L_00173060:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[4] + + 0x28u);
    }
L_00173064:;
    {
        vfp_vmul(cpu, 12, 12, 13);
    }
L_00173068:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x00173070u + + 0x1d0u);
    }
L_0017306c:;
    {
        vfp_vdiv(cpu, 12, 12, 13);
    }
L_00173070:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x00173078u + + 0x1ccu);
    }
L_00173074:;
    {
        vfp_vadd(cpu, 13, 12, 13);
    }
L_00173078:;
    {
        vfp_vmla(cpu, 14, 11, 13);
    }
L_0017307c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00173080:;
    {
        goto L_00172fec;
    }
L_00173084:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x1cu);
    }
L_00173088:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x20u);
    }
L_0017308c:;
    {
        vfp_vsub(cpu, 12, 15, 14);
    }
L_00173090:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x00173098u + + 0x19cu);
    }
L_00173094:;
    {
        vfp_vabs(cpu, 12, 12);
    }
L_00173098:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,12), *vfp_s(cpu,13));
    }
L_0017309c:;
    {
        vfp_sync_flags(cpu);
    }
L_001730a0:;
    {
        if (cond_test(cpu, 5)) {
        goto L_00173200;
        }
    }
L_001730a4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_001730a8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x24u);
    }
L_001730ac:;
    {
        vfp_vabs(cpu, 14, 14);
    }
L_001730b0:;
    {
        vfp_sync_flags(cpu);
    }
L_001730b4:;
    {
        if (cond_test(cpu, 5)) {
        vfp_vadd(cpu, 15, 15, 14);
        }
    }
L_001730b8:;
    {
        if (cond_test(cpu, 6)) {
        vfp_vsub(cpu, 15, 15, 14);
        }
    }
L_001730bc:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001730c0:;
    {
        goto L_00172fec;
    }
L_001730c4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x1cu);
    }
L_001730c8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x20u);
    }
L_001730cc:;
    {
        vfp_vsub(cpu, 12, 15, 14);
    }
L_001730d0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x001730d8u + + 0x15cu);
    }
L_001730d4:;
    {
        vfp_vabs(cpu, 12, 12);
    }
L_001730d8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,12), *vfp_s(cpu,13));
    }
L_001730dc:;
    {
        vfp_sync_flags(cpu);
    }
L_001730e0:;
    {
        if (cond_test(cpu, 6)) {
        goto L_001730a4;
        }
    }
L_001730e4:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0] + + 0x24u);
    }
L_001730e8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,12), 0.0f);
    }
L_001730ec:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_001730f0:;
    {
        wr32(cpu->r[0] + + 0x3a0u, cpu->r[3]);
    }
L_001730f4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2]);
    }
L_001730f8:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x00173100u + + 0x148u);
    }
L_001730fc:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00173100:;
    {
        vfp_sync_flags(cpu);
    }
L_00173104:;
    {
        if (cond_test(cpu, 6)) {
        *vfp_s(cpu,13) = *vfp_s(cpu,12);
        }
    }
L_00173108:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0017310c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00173110:;
    {
        goto L_00172fec;
    }
L_00173114:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_00173118:;
    {
        vfp_vabs(cpu, 13, 13);
    }
L_0017311c:;
    {
        vfp_sync_flags(cpu);
    }
L_00173120:;
    {
        if (cond_test(cpu, 5)) {
        vfp_vadd(cpu, 15, 15, 13);
        }
    }
L_00173124:;
    {
        if (cond_test(cpu, 6)) {
        vfp_vsub(cpu, 15, 15, 13);
        }
    }
L_00173128:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0017312c:;
    {
        goto L_00172fec;
    }
L_00173130:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2]);
    }
L_00173134:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00173138:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xa0u);
    }
L_0017313c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_00173140:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00173144:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu, 15) = *(float*)G(0x0017314cu + + 0xecu);
        }
    }
L_00173148:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0017314c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00173154u + + 0xdcu);
    }
L_00173150:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00173154:;
    {
        wr32(cpu->r[0] + + 0xa0u, cpu->r[3]);
    }
L_00173158:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0017315c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00173160:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x24u);
    }
L_00173164:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_00173168:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0017316c:;
    {
        cpu->r[14] = 0x00173174u;
    }
L_00173170:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00173174u)) return;
    }
L_00173174:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00173178:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[0];
    }
L_0017317c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00173180:;
    {
        cpu->r[14] = 0x00173188u;
    }
L_00173184:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x50u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00173188u)) return;
    }
L_00173188:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0x24u);
    }
L_0017318c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), 0.0f);
    }
L_00173190:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00173198u + + 0xa0u);
    }
L_00173194:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x0017319cu + + 0x90u);
    }
L_00173198:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_0017319c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2]);
    }
L_001731a0:;
    {
        vfp_sync_flags(cpu);
    }
L_001731a4:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_001731a8:;
    {
        if (cond_test(cpu, 6)) {
        *vfp_s(cpu,12) = *vfp_s(cpu,15);
        }
    }
L_001731ac:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_001731b0:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[0];
    }
L_001731b4:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_001731b8:;
    {
        *vfp_s(cpu, 11) = *(float*)G(0x001731c0u + + 0x8cu);
    }
L_001731bc:;
    {
        vfp_vdiv(cpu, 15, 16, 15);
    }
L_001731c0:;
    {
        vfp_vmul(cpu, 11, 15, 11);
    }
L_001731c4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001731c8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001731d0u + + 0x70u);
    }
L_001731cc:;
    {
        vfp_vdiv(cpu, 11, 11, 15);
    }
L_001731d0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001731d8u + + 0x64u);
    }
L_001731d4:;
    {
        vfp_vadd(cpu, 15, 11, 15);
    }
L_001731d8:;
    {
        vfp_vmla(cpu, 14, 12, 15);
    }
L_001731dc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x1cu);
    }
L_001731e0:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x001731e8u + + 0x48u);
    }
L_001731e4:;
    {
        vfp_vsub(cpu, 11, 15, 14);
    }
L_001731e8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001731ec:;
    {
        vfp_vabs(cpu, 11, 11);
    }
L_001731f0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,11), *vfp_s(cpu,12));
    }
L_001731f4:;
    {
        vfp_sync_flags(cpu);
    }
L_001731f8:;
    {
        if (cond_test(cpu, 6)) {
        goto L_00173114;
        }
    }
L_001731fc:;
    {
        goto L_00173034;
    }
L_00173200:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_00173204:;
    {
        wr32(cpu->r[0] + + 0x3a0u, cpu->r[3]);
    }
L_00173208:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0017320c:;
    {
        wr32(cpu->r[0] + + 0x3a4u, cpu->r[3]);
    }
L_00173210:;
    {
        goto L_00172fec;
    }
L_00173214:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2]);
    }
L_00173218:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x00173220u + + 0x28u);
    }
L_0017321c:;
    {
        *vfp_s(cpu, 11) = *(float*)G(0x00173224u + + 0x8u);
    }
L_00173220:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00173224:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00173228:;
    {
        goto L_0017305c;
    }
}

/* _ZN8CCarBase16UpdateBounceAnimERiS0_S0_ @ 00173250 (arm) */
void fn_00173250(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00173250:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x3a8u);
    }
L_00173254:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00173258:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017337c;
        }
    }
L_0017325c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00173260:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00173330;
        }
    }
L_00173264:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00173268:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x1cu);
        }
    }
L_0017326c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017327c;
        }
    }
L_00173270:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00173274:;
    {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00173278:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0017327c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x24u);
    }
L_00173280:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00173288u + + 0x200u);
    }
L_00173284:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_00173288:;
    {
        vfp_sync_flags(cpu);
    }
L_0017328c:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x20u);
        }
    }
L_00173290:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001733f8;
        }
    }
L_00173294:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x1cu);
    }
L_00173298:;
    {
        vfp_vsub(cpu, 13, 15, 14);
    }
L_0017329c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x001732a4u + + 0x1e8u);
    }
L_001732a0:;
    {
        vfp_vabs(cpu, 13, 13);
    }
L_001732a4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), *vfp_s(cpu,12));
    }
L_001732a8:;
    {
        vfp_sync_flags(cpu);
    }
L_001732ac:;
    {
        if (cond_test(cpu, 6)) {
        goto L_00173358;
        }
    }
L_001732b0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x28u);
    }
L_001732b4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001732bcu + + 0x1d4u);
    }
L_001732b8:;
    {
        vfp_vmul(cpu, 8, 13, 14);
    }
L_001732bc:;
    {
        *vfp_s(cpu, 10) = *(float*)G(0x001732c4u + + 0x1d0u);
    }
L_001732c0:;
    {
        *vfp_s(cpu, 11) = *(float*)G(0x001732c8u + + 0x1d0u);
    }
L_001732c4:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[0] + + 0x24u);
    }
L_001732c8:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001732cc:;
    {
        wr32(cpu->r[0] + + 0x3a8u, cpu->r[3]);
    }
L_001732d0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2]);
    }
L_001732d4:;
    {
        vfp_vmla(cpu, 11, 13, 10);
    }
L_001732d8:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x001732e0u + + 0x1bcu);
    }
L_001732dc:;
    {
        vfp_vdiv(cpu, 13, 8, 13);
    }
L_001732e0:;
    {
        *(int32_t*)vfp_s(cpu,11) = (int32_t)*vfp_s(cpu,11);
    }
L_001732e4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,9), 0.0f);
    }
L_001732e8:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,11);
    }
L_001732ec:;
    {
        vfp_sync_flags(cpu);
    }
L_001732f0:;
    {
        if (cond_test(cpu, 6)) {
        cpu->r[3] = (~0x00000000u);
        }
    }
L_001732f4:;
    {
        vfp_vadd(cpu, 10, 13, 10);
    }
L_001732f8:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x00173300u + + 0x188u);
    }
L_001732fc:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[1] = v;
    }
L_00173300:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[1];
    }
L_00173304:;
    {
        *vfp_s(cpu,11) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_00173308:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,11), 0.0f);
    }
L_0017330c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_00173310:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00173314:;
    {
        vfp_sync_flags(cpu);
    }
L_00173318:;
    {
        if (cond_test(cpu, 5)) {
        *vfp_s(cpu,12) = *vfp_s(cpu,13);
        }
    }
L_0017331c:;
    {
        vfp_vmla(cpu, 14, 12, 10);
    }
L_00173320:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00173324:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00173328:;
    {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0017332c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00173330:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x1cu);
    }
L_00173334:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x20u);
    }
L_00173338:;
    {
        vfp_vsub(cpu, 12, 15, 14);
    }
L_0017333c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x00173344u + + 0x148u);
    }
L_00173340:;
    {
        vfp_vabs(cpu, 12, 12);
    }
L_00173344:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,12), *vfp_s(cpu,13));
    }
L_00173348:;
    {
        vfp_sync_flags(cpu);
    }
L_0017334c:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[3] = (~0x00000000u);
        }
    }
L_00173350:;
    {
        if (cond_test(cpu, 5)) {
        wr32(cpu->r[0] + + 0x3a8u, cpu->r[3]);
        }
    }
L_00173354:;
    {
        if (cond_test(cpu, 5)) {
        goto L_00173270;
        }
    }
L_00173358:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x00173360u + + 0x140u);
    }
L_0017335c:;
    {
        vfp_vmul(cpu, 14, 14, 13);
    }
L_00173360:;
    {
        vfp_vmla(cpu, 14, 15, 13);
    }
L_00173364:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0017336cu + + 0x12cu);
    }
L_00173368:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_0017336c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00173370:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00173374:;
    {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00173378:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_0017337c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x1cu);
    }
L_00173380:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x20u);
    }
L_00173384:;
    {
        vfp_vsub(cpu, 12, 15, 14);
    }
L_00173388:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x00173390u + + 0xfcu);
    }
L_0017338c:;
    {
        vfp_vabs(cpu, 12, 12);
    }
L_00173390:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,12), *vfp_s(cpu,13));
    }
L_00173394:;
    {
        vfp_sync_flags(cpu);
    }
L_00173398:;
    {
        if (cond_test(cpu, 6)) {
        goto L_00173358;
        }
    }
L_0017339c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0] + + 0x28u);
    }
L_001733a0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x001733a8u + + 0xecu);
    }
L_001733a4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001733acu + + 0xecu);
    }
L_001733a8:;
    {
        vfp_vmla(cpu, 14, 12, 13);
    }
L_001733ac:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0] + + 0x24u);
    }
L_001733b0:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_001733b4:;
    {
        wr32(cpu->r[0] + + 0x3a8u, cpu->r[3]);
    }
L_001733b8:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[2]);
    }
L_001733bc:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_001733c0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,12), 0.0f);
    }
L_001733c4:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,14);
    }
L_001733c8:;
    {
        vfp_sync_flags(cpu);
    }
L_001733cc:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001733d0:;
    {
        if (cond_test(cpu, 6)) {
        cpu->r[3] = (~0x00000000u);
        }
    }
L_001733d4:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_001733d8:;
    {
        uint32_t v = cpu->r[1] * cpu->r[3]; cpu->r[1] = v;
    }
L_001733dc:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[1];
    }
L_001733e0:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_001733e4:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_001733e8:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_001733ec:;
    {
        *(uint32_t*)G(cpu->r[2]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001733f0:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001733f4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001733f8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2]);
    }
L_001733fc:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00173400:;
    {
        *vfp_s(cpu, 11) = *(float*)G(0x00173408u + + 0x9cu);
    }
L_00173404:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x0017340cu + + 0x84u);
    }
L_00173408:;
    {
        *vfp_s(cpu, 9) = *(float*)G(0x00173410u + + 0x98u);
    }
L_0017340c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x484u);
    }
L_00173410:;
    {
        { uint32_t v = cpu->r[3] & 0x00000004u; set_nz(cpu, v); }
    }
L_00173414:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 15) = *(float*)G(0x0017341cu + + 0x70u);
        }
    }
L_00173418:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0017341c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00173420:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x28u);
    }
L_00173424:;
    {
        vfp_vmul(cpu, 10, 13, 11);
    }
L_00173428:;
    {
        vfp_vmla(cpu, 12, 13, 9);
    }
L_0017342c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x00173434u + + 0x68u);
    }
L_00173430:;
    {
        vfp_vdiv(cpu, 13, 10, 13);
    }
L_00173434:;
    {
        *(int32_t*)vfp_s(cpu,12) = (int32_t)*vfp_s(cpu,12);
    }
L_00173438:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,12);
    }
L_0017343c:;
    {
        vfp_vmul(cpu, 15, 12, 15);
    }
L_00173440:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x00173448u + + 0x44u);
    }
L_00173444:;
    {
        vfp_vadd(cpu, 11, 13, 11);
    }
L_00173448:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0017344c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x00173454u + + 0x34u);
    }
L_00173450:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_00173454:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0017345cu + + 0x30u);
    }
L_00173458:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0017345c:;
    {
        vfp_sync_flags(cpu);
    }
L_00173460:;
    {
        if (cond_test(cpu, 5)) {
        *vfp_s(cpu,15) = *vfp_s(cpu,13);
        }
    }
L_00173464:;
    {
        vfp_vmla(cpu, 14, 15, 11);
    }
L_00173468:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x1cu);
    }
L_0017346c:;
    {
        vfp_vsub(cpu, 13, 15, 14);
    }
L_00173470:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00173474:;
    {
        vfp_vabs(cpu, 13, 13);
    }
L_00173478:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), *vfp_s(cpu,12));
    }
L_0017347c:;
    {
        vfp_sync_flags(cpu);
    }
L_00173480:;
    {
        if (cond_test(cpu, 5)) {
        goto L_001732b0;
        }
    }
L_00173484:;
    {
        goto L_00173358;
    }
}

/* _ZN8CCarBase27AreCarsAlignedAlmostParalelEPS_ @ 001734ac (arm) */
void fn_001734ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001734ac:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001734b0:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001734b4:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001734b8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000018u, 1, 0);
    }
L_001734bc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[4];
        }
    }
L_001734c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017354c;
        }
    }
L_001734c4:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001734c8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001734cc:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001734d0:;
    {
        cpu->r[14] = 0x001734d8u;
    }
L_001734d4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001734d8u)) return;
    }
L_001734d8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001734dc:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001734e0:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_001734e4:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0xcu);
    }
L_001734e8:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x10u);
    }
L_001734ec:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x14u);
    }
L_001734f0:;
    {
        cpu->r[14] = 0x001734f8u;
    }
L_001734f4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001734f8u)) return;
    }
L_001734f8:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_001734fc:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 6u, &shc); cpu->r[6] = v;
    }
L_00173500:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_00173504:;
    {
        uint32_t v = shifter(cpu->r[4], 1, 6u, &shc); cpu->r[4] = v;
    }
L_00173508:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 6u, &shc); cpu->r[5] = v;
    }
L_0017350c:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 6u, &shc); cpu->r[2] = v;
    }
L_00173510:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 6u, &shc); cpu->r[3] = v;
    }
L_00173514:;
    {
        uint32_t v = cpu->r[6] * cpu->r[2]; cpu->r[6] = v;
    }
L_00173518:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_0017351c:;
    {
        uint32_t v = cpu->r[4] * cpu->r[3] + cpu->r[6]; cpu->r[4] = v;
    }
L_00173520:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 6u, &shc); cpu->r[2] = v;
    }
L_00173524:;
    {
        uint32_t v = cpu->r[5] * cpu->r[2] + cpu->r[4]; cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_00173528:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00001000u, 0, 0);
        }
    }
L_0017352c:;
    {
        if (cond_test(cpu, 5)) {
        goto L_00173538;
        }
    }
L_00173530:;
    {
        sub_flags(cpu, cpu->r[3], 0x00001000u, 1, 1);
    }
L_00173534:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00001000u, 1, 0);
        }
    }
L_00173538:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x000000c8u, 1, 0);
    }
L_0017353c:;
    {
        cpu->r[2] = 0x00000e74u;
    }
L_00173540:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00173544:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00173548:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_0017354c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_00173550:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00173554u)) return;
    }
}

/* _ZN8CCarBase27AreCarsAlignedForSideImpactEPS_ @ 00173554 (arm) */
void fn_00173554(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00173554:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00173558:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0017355c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00173560:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000018u, 1, 0);
    }
L_00173564:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[4];
        }
    }
L_00173568:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001735f4;
        }
    }
L_0017356c:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00173570:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00173574:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00173578:;
    {
        cpu->r[14] = 0x00173580u;
    }
L_0017357c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00173580u)) return;
    }
L_00173580:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00173584:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00173588:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_0017358c:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0xcu);
    }
L_00173590:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x10u);
    }
L_00173594:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x14u);
    }
L_00173598:;
    {
        cpu->r[14] = 0x001735a0u;
    }
L_0017359c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001735a0u)) return;
    }
L_001735a0:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_001735a4:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 6u, &shc); cpu->r[6] = v;
    }
L_001735a8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001735ac:;
    {
        uint32_t v = shifter(cpu->r[4], 1, 6u, &shc); cpu->r[4] = v;
    }
L_001735b0:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 6u, &shc); cpu->r[5] = v;
    }
L_001735b4:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 6u, &shc); cpu->r[2] = v;
    }
L_001735b8:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 6u, &shc); cpu->r[3] = v;
    }
L_001735bc:;
    {
        uint32_t v = cpu->r[6] * cpu->r[2]; cpu->r[6] = v;
    }
L_001735c0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_001735c4:;
    {
        uint32_t v = cpu->r[4] * cpu->r[3] + cpu->r[6]; cpu->r[4] = v;
    }
L_001735c8:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 6u, &shc); cpu->r[2] = v;
    }
L_001735cc:;
    {
        uint32_t v = cpu->r[5] * cpu->r[2] + cpu->r[4]; cpu->r[3] = v;
        set_nz(cpu, v);
    }
L_001735d0:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00001000u, 0, 0);
        }
    }
L_001735d4:;
    {
        if (cond_test(cpu, 5)) {
        goto L_001735e0;
        }
    }
L_001735d8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00001000u, 1, 1);
    }
L_001735dc:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00001000u, 1, 0);
        }
    }
L_001735e0:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000190u, 1, 0);
    }
L_001735e4:;
    {
        cpu->r[2] = 0x00000ce3u;
    }
L_001735e8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_001735ec:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001735f0:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001735f4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001735f8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001735fcu)) return;
    }
}

/* _ZN8CCarBase10DeleteMeshEv @ 001735fc (arm) */
void fn_001735fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001735fc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x548u);
    }
L_00173600:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00173604:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00173608:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0017360c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00173620;
        }
    }
L_00173610:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00173614:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00173618:;
    {
        cpu->r[14] = 0x00173620u;
    }
L_0017361c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00173620u)) return;
    }
L_00173620:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00173624:;
    {
        wr32(cpu->r[4] + + 0x548u, cpu->r[3]);
    }
L_00173628:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0017362cu)) return;
    }
}

/* _ZN8CCarBase11SetRotationERK8Vector4s @ 0017362c (arm) */
void fn_0017362c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017362c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000084u, 0, 0);
    }
L_00173630:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_00173634:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_00173638:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8CCarBase14UpdateRotationEv @ 0017363c (arm) */
void fn_0017363c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017363c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8CCarBase32ComputePlayerPositionFrontBehindEv @ 00173640 (arm) */
void fn_00173640(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00173640:;
    {
        cpu->r[3] = rd32(0x00173648u + + 0xecu);
    }
L_00173644:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_00173648:;
    {
        cpu->r[1] = rd32(0x00173650u + + 0xe8u);
    }
L_0017364c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_00173650:;
    {
        cpu->r[3] = add_flags(cpu, 0x00173658u, cpu->r[3], 0, 0);
    }
L_00173654:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x1b0u);
    }
L_00173658:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0017365c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00173660:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00173664:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_00173668:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_0017366c:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_00173670:;
    {
        cpu->r[0] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_00173674:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x8u);
    }
L_00173678:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_0017367c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_00173680:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_00173684:;
    {
        cpu->r[5] = rd32(cpu->r[3] + + 0x4u);
    }
L_00173688:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x1b0u);
    }
L_0017368c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 1);
    }
L_00173690:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001736c8;
        }
    }
L_00173694:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[12];
    }
L_00173698:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0017369c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[1];
    }
L_001736a0:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_001736a4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_001736a8:;
    {
        vfp_sync_flags(cpu);
    }
L_001736ac:;
    {
        if (cond_test(cpu, 13)) {
        *vfp_s(cpu,15) = *vfp_s(cpu,14);
        }
    }
L_001736b0:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_001736b4:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001736b8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_001736bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017372c;
        }
    }
L_001736c0:;
    {
        cpu->r[0] = 0x00000005u;
    }
L_001736c4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001736c8u)) return;
    }
L_001736c8:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001736cc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_001736d0:;
    {
        cpu->r[14] = 0x001736d4u; fn_00180bf0(cpu);
    }
L_001736d4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x3d4u);
    }
L_001736d8:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x30u);
    }
L_001736dc:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x38u);
    }
L_001736e0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x3dcu);
    }
L_001736e4:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 4u, &shc); cpu->r[6] = v;
    }
L_001736e8:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 4u, &shc); cpu->r[5] = v;
    }
L_001736ec:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[6], shifter(cpu->r[3], 1, 4u, &shc), 1, 0);
    }
L_001736f0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[5], shifter(cpu->r[0], 1, 4u, &shc), 1, 0);
    }
L_001736f4:;
    {
        uint32_t v = cpu->r[3] * cpu->r[3]; cpu->r[3] = v;
    }
L_001736f8:;
    {
        uint32_t v = cpu->r[0] * cpu->r[0] + cpu->r[3]; cpu->r[0] = v;
    }
L_001736fc:;
    {
        cpu->r[14] = 0x00173700u; fn_0017fa74(cpu);
    }
L_00173700:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_00173704:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_00173708:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], shifter(cpu->r[2], 1, 4u, &shc), 1, 0);
    }
L_0017370c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], shifter(cpu->r[3], 1, 4u, &shc), 1, 0);
    }
L_00173710:;
    {
        uint32_t v = cpu->r[6] * cpu->r[6]; cpu->r[6] = v;
    }
L_00173714:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00173718:;
    {
        uint32_t v = cpu->r[5] * cpu->r[5] + cpu->r[6]; cpu->r[0] = v;
    }
L_0017371c:;
    {
        cpu->r[14] = 0x00173720u; fn_0017fa74(cpu);
    }
L_00173720:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 4u, &shc); cpu->r[0] = v;
    }
L_00173724:;
    {
        sub_flags(cpu, cpu->r[0], shifter(cpu->r[7], 2, 4u, &shc), 1, 1);
    }
L_00173728:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001736c0;
        }
    }
L_0017372c:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_00173730:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00173734u)) return;
    }
}

/* _ZN8CCarBase20InitFrontalCollisionEii @ 0017373c (arm) */
void fn_0017373c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0017373c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x198u);
    }
L_00173740:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00173744:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_00173748:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0017374c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00173750:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017375c;
        }
    }
L_00173754:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00173758:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0017375cu)) return;
    }
L_0017375c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000420u, 0, 0);
    }
L_00173760:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_00173764:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_00173768:;
    {
        cpu->r[14] = 0x0017376cu; fn_0018572c(cpu);
    }
L_0017376c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_00173770:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00173774:;
    {
        wr32(cpu->r[4] + + 0x1a0u, cpu->r[1]);
    }
L_00173778:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017377c:;
    {
        wr32(cpu->r[4] + + 0x198u, cpu->r[0]);
    }
L_00173780:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00173784:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x198u, cpu->r[0]);
        }
    }
L_00173788:;
    {
        wr32(cpu->r[4] + + 0x19cu, cpu->r[0]);
    }
L_0017378c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00173790:;
    {
        cpu->r[14] = 0x00173798u;
    }
L_00173794:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x50u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00173798u)) return;
    }
L_00173798:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017379c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001737b0;
        }
    }
L_001737a0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001737a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001737a8:;
    {
        cpu->r[14] = 0x001737b0u;
    }
L_001737ac:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001737b0u)) return;
    }
L_001737b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x198u);
    }
L_001737b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001737b8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000003u, 0, 0);
    }
L_001737bc:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[2];
        }
    }
L_001737c0:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_001737c4:;
    {
        wr32(cpu->r[4] + + 0x1a4u, cpu->r[3]);
    }
L_001737c8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001737cc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001737d0:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + + 0x1a4u, cpu->r[3]);
        }
    }
L_001737d4:;
    {
        goto L_00173754;
    }
}

/* _ZN8CCarBase11GetMaxSpeedEv @ 001737d8 (arm) */
void fn_001737d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001737d8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001737dc:;
    {
        cpu->r[4] = rd32(0x001737e4u + + 0x68u);
    }
L_001737e0:;
    {
        cpu->r[3] = rd32(0x001737e8u + + 0x68u);
    }
L_001737e4:;
    {
        cpu->r[4] = add_flags(cpu, 0x001737ecu, cpu->r[4], 0, 0);
    }
L_001737e8:;
    {
        cpu->r[7] = rd32(cpu->r[0] + + 0x464u);
    }
L_001737ec:;
    {
        cpu->r[5] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001737f0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001737f4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001737f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00173824;
        }
    }
L_001737fc:;
    {
        cpu->r[6] = rd32(0x00173804u + + 0x50u);
    }
L_00173800:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00173804:;
    {
        cpu->r[3] = 0x0000851fu;
    }
L_00173808:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x51ebu << 16);
    }
L_0017380c:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0x1cu);
    }
L_00173810:;
    {
        uint32_t v = cpu->r[7] * cpu->r[2]; cpu->r[7] = v;
    }
L_00173814:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[3] * (int64_t)(int32_t)cpu->r[7]; cpu->r[2] = (uint32_t)v; cpu->r[3] = (uint32_t)(v >> 32); }
    }
L_00173818:;
    {
        uint32_t v = shifter(cpu->r[7], 1, 31u, &shc); cpu->r[7] = v;
    }
L_0017381c:;
    {
        cpu->r[0] = sub_flags(cpu, shifter(cpu->r[3], 1, 5u, &shc), cpu->r[7], 1, 0);
    }
L_00173820:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00173824u)) return;
    }
L_00173824:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00173828:;
    {
        cpu->r[14] = 0x0017382cu; imp___cxa_guard_acquire(cpu); /* __cxa_guard_acquire */
    }
L_0017382c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00173830:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001737fc;
        }
    }
L_00173834:;
    {
        cpu->r[6] = rd32(0x0017383cu + + 0x18u);
    }
L_00173838:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_0017383c:;
    {
        cpu->r[14] = 0x00173840u; fn_00094228(cpu);
    }
L_00173840:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00173844:;
    {
        cpu->r[14] = 0x00173848u; imp___cxa_guard_release(cpu); /* __cxa_guard_release */
    }
L_00173848:;
    {
        goto L_00173800;
    }
}

/* _ZN8CCarBase11SetVelocityEf @ 00173858 (arm) */
void fn_00173858(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00173858:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[1];
    }
L_0017385c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00173860:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00173864:;
    {
        wr32(cpu->r[0] + + 0x428u, cpu->r[3]);
    }
L_00173868:;
    {
        wr32(cpu->r[0] + + 0x42cu, cpu->r[3]);
    }
L_0017386c:;
    {
        cpu->r[3] = 0x0000afc7u;
    }
L_00173870:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_00173874:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00173878:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0017387c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00173880:;
    {
        uint32_t v = cpu->r[1] ^ shifter(cpu->r[1], 1, 31u, &shc); cpu->r[2] = v;
    }
L_00173884:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[1], 1, 31u, &shc), 1, 0);
    }
L_00173888:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_0017388c:;
    {
        wr32(cpu->r[0] + + 0x430u, cpu->r[1]);
    }
L_00173890:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001738c8;
        }
    }
L_00173894:;
    {
        cpu->r[1] = rd32(0x0017389cu + + 0x74u);
    }
L_00173898:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0017389c:;
    {
        cpu->r[2] = rd32(0x001738a4u + + 0x70u);
    }
L_001738a0:;
    {
        cpu->r[14] = 0x000001c1u;
    }
L_001738a4:;
    {
        cpu->r[3] = rd32(0x001738acu + + 0x6cu);
    }
L_001738a8:;
    {
        cpu->r[1] = add_flags(cpu, 0x001738b0u, cpu->r[1], 0, 0);
    }
L_001738ac:;
    {
        cpu->r[12] = rd32(0x001738b4u + + 0x68u);
    }
L_001738b0:;
    {
        cpu->r[2] = add_flags(cpu, 0x001738b8u, cpu->r[2], 0, 0);
    }
L_001738b4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001738bcu, cpu->r[3], 0, 0);
    }
L_001738b8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_001738bc:;
    {
        cpu->r[12] = add_flags(cpu, 0x001738c4u, cpu->r[12], 0, 0);
    }
L_001738c0:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001738c4:;
    {
        cpu->r[14] = 0x001738c8u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001738c8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000420u, 0, 0);
    }
L_001738cc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_001738d0:;
    {
        cpu->r[14] = 0x001738d4u; fn_0018572c(cpu);
    }
L_001738d4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x428u);
    }
L_001738d8:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_001738dc:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_001738e0:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 0);
    }
L_001738e4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x42cu);
    }
L_001738e8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_001738ec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x430u);
    }
L_001738f0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 0);
    }
L_001738f4:;
    {
        wr32(cpu->r[4] + + 0x3c8u, cpu->r[12]);
    }
L_001738f8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_001738fc:;
    {
        wr32(cpu->r[4] + + 0x3ccu, cpu->r[2]);
    }
L_00173900:;
    {
        wr32(cpu->r[4] + + 0x3d0u, cpu->r[3]);
    }
L_00173904:;
    {
        wr32(cpu->r[4] + + 0x45cu, cpu->r[0]);
    }
L_00173908:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0017390c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00173910u)) return;
    }
}

/* _ZN8CCarBase18SetInitialVelocityERK8Vector4s @ 00173920 (arm) */
void fn_00173920(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00173920:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_00173924:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00173928:;
    {
        uint32_t base = cpu->r[1];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_0017392c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x00000420u, 0, 0);
    }
L_00173930:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_00173934:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00173938:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_0017393c:;
    {
        wr32(cpu->r[4] + + 0x474u, cpu->r[3]);
    }
L_00173940:;
    {
        wr32(cpu->r[4] + + 0x470u, cpu->r[3]);
    }
L_00173944:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_00173948:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x428u);
    }
L_0017394c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x42cu);
    }
L_00173950:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x430u);
    }
L_00173954:;
    {
        uint32_t v = cpu->r[1] ^ shifter(cpu->r[1], 1, 31u, &shc); cpu->r[2] = v;
    }
L_00173958:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[1], 1, 31u, &shc), 1, 0);
    }
L_0017395c:;
    {
        uint32_t v = cpu->r[12] ^ shifter(cpu->r[12], 1, 31u, &shc); cpu->r[1] = v;
    }
L_00173960:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], shifter(cpu->r[12], 1, 31u, &shc), 1, 0);
    }
L_00173964:;
    {
        wr32(cpu->r[4] + + 0x46cu, cpu->r[3]);
    }
L_00173968:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_0017396c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = cpu->r[2];
        }
    }
L_00173970:;
    {
        uint32_t v = cpu->r[0] ^ shifter(cpu->r[0], 1, 31u, &shc); cpu->r[2] = v;
    }
L_00173974:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[0], 1, 31u, &shc), 1, 0);
    }
L_00173978:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_0017397c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = cpu->r[2];
        }
    }
L_00173980:;
    {
        cpu->r[2] = 0x0000afc7u;
    }
L_00173984:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_00173988:;
    {
        wr32(cpu->r[4] + + 0x468u, cpu->r[3]);
    }
L_0017398c:;
    {
        wr32(cpu->r[4] + + 0x47cu, cpu->r[3]);
    }
L_00173990:;
    {
        wr32(cpu->r[4] + + 0x478u, cpu->r[3]);
    }
L_00173994:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001739cc;
        }
    }
L_00173998:;
    {
        cpu->r[1] = rd32(0x001739a0u + + 0x70u);
    }
L_0017399c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001739a0:;
    {
        cpu->r[12] = rd32(0x001739a8u + + 0x6cu);
    }
L_001739a4:;
    {
        cpu->r[14] = 0x000001b5u;
    }
L_001739a8:;
    {
        cpu->r[2] = rd32(0x001739b0u + + 0x68u);
    }
L_001739ac:;
    {
        cpu->r[1] = add_flags(cpu, 0x001739b4u, cpu->r[1], 0, 0);
    }
L_001739b0:;
    {
        cpu->r[3] = rd32(0x001739b8u + + 0x64u);
    }
L_001739b4:;
    {
        cpu->r[12] = add_flags(cpu, 0x001739bcu, cpu->r[12], 0, 0);
    }
L_001739b8:;
    {
        cpu->r[2] = add_flags(cpu, 0x001739c0u, cpu->r[2], 0, 0);
    }
L_001739bc:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000000cu, 0, 0);
    }
L_001739c0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001739c8u, cpu->r[3], 0, 0);
    }
L_001739c4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_001739c8:;
    {
        cpu->r[14] = 0x001739ccu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001739cc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001739d0:;
    {
        cpu->r[14] = 0x001739d4u; fn_0018572c(cpu);
    }
L_001739d4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x428u);
    }
L_001739d8:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_001739dc:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_001739e0:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 0);
    }
L_001739e4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x42cu);
    }
L_001739e8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_001739ec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x430u);
    }
L_001739f0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 0);
    }
L_001739f4:;
    {
        wr32(cpu->r[4] + + 0x3c8u, cpu->r[12]);
    }
L_001739f8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_001739fc:;
    {
        wr32(cpu->r[4] + + 0x3ccu, cpu->r[2]);
    }
L_00173a00:;
    {
        wr32(cpu->r[4] + + 0x3d0u, cpu->r[3]);
    }
L_00173a04:;
    {
        wr32(cpu->r[4] + + 0x45cu, cpu->r[0]);
    }
L_00173a08:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00173a0c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00173a10u)) return;
    }
}

/* _ZN8CCarBase13NoteCarImpactERK8Vector4sS2_ @ 00173a20 (arm) */
void fn_00173a20(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00173a20:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00173a24:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00173a28:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_00173a2c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x4c8u);
    }
L_00173a30:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x4c4u);
    }
L_00173a34:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00173a38:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4ccu);
    }
L_00173a3c:;
    {
        uint32_t v = cpu->r[1] ^ shifter(cpu->r[1], 1, 31u, &shc); cpu->r[12] = v;
    }
L_00173a40:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[1], 1, 31u, &shc), 1, 0);
    }
L_00173a44:;
    {
        uint32_t v = cpu->r[2] ^ shifter(cpu->r[2], 1, 31u, &shc); cpu->r[3] = v;
    }
L_00173a48:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[2], 1, 31u, &shc), 1, 0);
    }
L_00173a4c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00173a50:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_00173a54:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = cpu->r[12];
        }
    }
L_00173a58:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[3];
        }
    }
L_00173a5c:;
    {
        uint32_t v = cpu->r[0] ^ shifter(cpu->r[0], 1, 31u, &shc); cpu->r[12] = v;
    }
L_00173a60:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[0], 1, 31u, &shc), 1, 0);
    }
L_00173a64:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_00173a68:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[12];
        }
    }
L_00173a6c:;
    {
        cpu->r[12] = 0x00009c3fu;
    }
L_00173a70:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_00173a74:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00173b40;
        }
    }
L_00173a78:;
    {
        sub_flags(cpu, cpu->r[3], 0x000003e8u, 1, 1);
    }
L_00173a7c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00173af8;
        }
    }
L_00173a80:;
    {
        cpu->r[12] = rd32(cpu->r[6]);
    }
L_00173a84:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00173a88:;
    {
        cpu->r[7] = rd32(cpu->r[6] + + 0x4u);
    }
L_00173a8c:;
    {
        cpu->r[8] = rd32(cpu->r[5] + + 0x4u);
    }
L_00173a90:;
    {
        uint32_t v = cpu->r[3] * cpu->r[12]; cpu->r[3] = v;
    }
L_00173a94:;
    {
        cpu->r[6] = rd32(cpu->r[6] + + 0x8u);
    }
L_00173a98:;
    {
        uint32_t v = cpu->r[8] * cpu->r[7] + cpu->r[3]; cpu->r[3] = v;
    }
L_00173a9c:;
    {
        cpu->r[5] = rd32(cpu->r[5] + + 0x8u);
    }
L_00173aa0:;
    {
        uint32_t v = cpu->r[5] * cpu->r[6] + cpu->r[3]; cpu->r[3] = v;
    }
L_00173aa4:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 12u, &shc); cpu->r[3] = v;
    }
L_00173aa8:;
    {
        uint32_t v = cpu->r[6] * cpu->r[3]; cpu->r[6] = v;
    }
L_00173aac:;
    {
        uint32_t v = cpu->r[7] * cpu->r[3]; cpu->r[7] = v;
    }
L_00173ab0:;
    {
        uint32_t v = cpu->r[12] * cpu->r[3]; cpu->r[3] = v;
    }
L_00173ab4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[6], 1, 12u, &shc), 0, 0);
    }
L_00173ab8:;
    {
        wr32(cpu->r[4] + + 0x4ccu, cpu->r[0]);
    }
L_00173abc:;
    {
        uint32_t v = cpu->r[0] ^ shifter(cpu->r[0], 1, 31u, &shc); cpu->r[5] = v;
    }
L_00173ac0:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], shifter(cpu->r[0], 1, 31u, &shc), 1, 0);
    }
L_00173ac4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[7], 1, 12u, &shc), 0, 0);
    }
L_00173ac8:;
    {
        wr32(cpu->r[4] + + 0x4c8u, cpu->r[1]);
    }
L_00173acc:;
    {
        uint32_t v = cpu->r[1] ^ shifter(cpu->r[1], 1, 31u, &shc); cpu->r[0] = v;
    }
L_00173ad0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[1], 1, 31u, &shc), 1, 0);
    }
L_00173ad4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[3], 1, 12u, &shc), 0, 0);
    }
L_00173ad8:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_00173adc:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = cpu->r[5];
        }
    }
L_00173ae0:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[0];
        }
    }
L_00173ae4:;
    {
        uint32_t v = cpu->r[2] ^ shifter(cpu->r[2], 1, 31u, &shc); cpu->r[1] = v;
    }
L_00173ae8:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], shifter(cpu->r[2], 1, 31u, &shc), 1, 0);
    }
L_00173aec:;
    {
        wr32(cpu->r[4] + + 0x4c4u, cpu->r[2]);
    }
L_00173af0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00173af4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[1];
        }
    }
L_00173af8:;
    {
        cpu->r[2] = 0x00009c3fu;
    }
L_00173afc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00173b00:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00173b38;
        }
    }
L_00173b04:;
    {
        cpu->r[1] = rd32(0x00173b0cu + + 0xa4u);
    }
L_00173b08:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00173b0c:;
    {
        cpu->r[12] = rd32(0x00173b14u + + 0xa0u);
    }
L_00173b10:;
    {
        cpu->r[14] = 0x00000139u;
    }
L_00173b14:;
    {
        cpu->r[2] = rd32(0x00173b1cu + + 0x9cu);
    }
L_00173b18:;
    {
        cpu->r[1] = add_flags(cpu, 0x00173b20u, cpu->r[1], 0, 0);
    }
L_00173b1c:;
    {
        cpu->r[3] = rd32(0x00173b24u + + 0x98u);
    }
L_00173b20:;
    {
        cpu->r[12] = add_flags(cpu, 0x00173b28u, cpu->r[12], 0, 0);
    }
L_00173b24:;
    {
        cpu->r[2] = add_flags(cpu, 0x00173b2cu, cpu->r[2], 0, 0);
    }
L_00173b28:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000020u, 0, 0);
    }
L_00173b2c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00173b34u, cpu->r[3], 0, 0);
    }
L_00173b30:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00173b34:;
    {
        cpu->r[14] = 0x00173b38u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00173b38:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00173b3c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00173b40u)) return;
    }
L_00173b40:;
    {
        cpu->r[1] = rd32(0x00173b48u + + 0x78u);
    }
L_00173b44:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00173b48:;
    {
        cpu->r[12] = rd32(0x00173b50u + + 0x74u);
    }
L_00173b4c:;
    {
        cpu->r[14] = 0x00000132u;
    }
L_00173b50:;
    {
        cpu->r[2] = rd32(0x00173b58u + + 0x70u);
    }
L_00173b54:;
    {
        cpu->r[1] = add_flags(cpu, 0x00173b5cu, cpu->r[1], 0, 0);
    }
L_00173b58:;
    {
        cpu->r[3] = rd32(0x00173b60u + + 0x6cu);
    }
L_00173b5c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00173b64u, cpu->r[12], 0, 0);
    }
L_00173b60:;
    {
        cpu->r[2] = add_flags(cpu, 0x00173b68u, cpu->r[2], 0, 0);
    }
L_00173b64:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000020u, 0, 0);
    }
L_00173b68:;
    {
        cpu->r[3] = add_flags(cpu, 0x00173b70u, cpu->r[3], 0, 0);
    }
L_00173b6c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00173b70:;
    {
        cpu->r[14] = 0x00173b74u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00173b74:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4c8u);
    }
L_00173b78:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4ccu);
    }
L_00173b7c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4c4u);
    }
L_00173b80:;
    {
        uint32_t v = cpu->r[1] ^ shifter(cpu->r[1], 1, 31u, &shc); cpu->r[12] = v;
    }
L_00173b84:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[1], 1, 31u, &shc), 1, 0);
    }
L_00173b88:;
    {
        uint32_t v = cpu->r[0] ^ shifter(cpu->r[0], 1, 31u, &shc); cpu->r[3] = v;
    }
L_00173b8c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 31u, &shc), 1, 0);
    }
L_00173b90:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_00173b94:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = cpu->r[12];
        }
    }
L_00173b98:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[3];
        }
    }
L_00173b9c:;
    {
        uint32_t v = cpu->r[2] ^ shifter(cpu->r[2], 1, 31u, &shc); cpu->r[12] = v;
    }
L_00173ba0:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[2], 1, 31u, &shc), 1, 0);
    }
L_00173ba4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_00173ba8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[12];
        }
    }
L_00173bac:;
    {
        goto L_00173a78;
    }
}

/* _ZN8CCarBase14NoteWallImpactERK8Vector4sS2_ @ 00173bd0 (arm) */
void fn_00173bd0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00173bd0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00173bd4:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00173bd8:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_00173bdc:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x4bcu);
    }
L_00173be0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x4b8u);
    }
L_00173be4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00173be8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4c0u);
    }
L_00173bec:;
    {
        uint32_t v = cpu->r[1] ^ shifter(cpu->r[1], 1, 31u, &shc); cpu->r[12] = v;
    }
L_00173bf0:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[1], 1, 31u, &shc), 1, 0);
    }
L_00173bf4:;
    {
        uint32_t v = cpu->r[2] ^ shifter(cpu->r[2], 1, 31u, &shc); cpu->r[3] = v;
    }
L_00173bf8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[2], 1, 31u, &shc), 1, 0);
    }
L_00173bfc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00173c00:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_00173c04:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = cpu->r[12];
        }
    }
L_00173c08:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[3];
        }
    }
L_00173c0c:;
    {
        uint32_t v = cpu->r[0] ^ shifter(cpu->r[0], 1, 31u, &shc); cpu->r[12] = v;
    }
L_00173c10:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[0], 1, 31u, &shc), 1, 0);
    }
L_00173c14:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_00173c18:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[12];
        }
    }
L_00173c1c:;
    {
        cpu->r[12] = 0x00009c3fu;
    }
L_00173c20:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_00173c24:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00173d04;
        }
    }
L_00173c28:;
    {
        sub_flags(cpu, cpu->r[3], 0x000003e8u, 1, 1);
    }
L_00173c2c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00173cbc;
        }
    }
L_00173c30:;
    {
        cpu->r[12] = rd32(cpu->r[5]);
    }
L_00173c34:;
    {
        cpu->r[3] = 0x0000270fu;
    }
L_00173c38:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_00173c3c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00173cfc;
        }
    }
L_00173c40:;
    {
        cpu->r[7] = rd32(cpu->r[5] + + 0x4u);
    }
L_00173c44:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[3], 1, 1);
    }
L_00173c48:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00173cfc;
        }
    }
L_00173c4c:;
    {
        cpu->r[5] = rd32(cpu->r[5] + + 0x8u);
    }
L_00173c50:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_00173c54:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00173cfc;
        }
    }
L_00173c58:;
    {
        uint32_t base = cpu->r[6];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[3] = v0;
        cpu->r[8] = v1;
    }
L_00173c5c:;
    {
        cpu->r[6] = rd32(cpu->r[6] + + 0x8u);
    }
L_00173c60:;
    {
        uint32_t v = cpu->r[12] * cpu->r[3]; cpu->r[12] = v;
    }
L_00173c64:;
    {
        uint32_t v = cpu->r[7] * cpu->r[8] + cpu->r[12]; cpu->r[7] = v;
    }
L_00173c68:;
    {
        uint32_t v = cpu->r[5] * cpu->r[6] + cpu->r[7]; cpu->r[5] = v;
    }
L_00173c6c:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 12u, &shc); cpu->r[5] = v;
    }
L_00173c70:;
    {
        uint32_t v = cpu->r[6] * cpu->r[5]; cpu->r[6] = v;
    }
L_00173c74:;
    {
        uint32_t v = cpu->r[8] * cpu->r[5]; cpu->r[8] = v;
    }
L_00173c78:;
    {
        uint32_t v = cpu->r[3] * cpu->r[5]; cpu->r[5] = v;
    }
L_00173c7c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[6], 1, 12u, &shc), 0, 0);
    }
L_00173c80:;
    {
        wr32(cpu->r[4] + + 0x4c0u, cpu->r[0]);
    }
L_00173c84:;
    {
        uint32_t v = cpu->r[0] ^ shifter(cpu->r[0], 1, 31u, &shc); cpu->r[3] = v;
    }
L_00173c88:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[0], 1, 31u, &shc), 1, 0);
    }
L_00173c8c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[8], 1, 12u, &shc), 0, 0);
    }
L_00173c90:;
    {
        wr32(cpu->r[4] + + 0x4bcu, cpu->r[1]);
    }
L_00173c94:;
    {
        uint32_t v = cpu->r[1] ^ shifter(cpu->r[1], 1, 31u, &shc); cpu->r[0] = v;
    }
L_00173c98:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[1], 1, 31u, &shc), 1, 0);
    }
L_00173c9c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[5], 1, 12u, &shc), 0, 0);
    }
L_00173ca0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_00173ca4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[0];
        }
    }
L_00173ca8:;
    {
        uint32_t v = cpu->r[2] ^ shifter(cpu->r[2], 1, 31u, &shc); cpu->r[1] = v;
    }
L_00173cac:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], shifter(cpu->r[2], 1, 31u, &shc), 1, 0);
    }
L_00173cb0:;
    {
        wr32(cpu->r[4] + + 0x4b8u, cpu->r[2]);
    }
L_00173cb4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00173cb8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[1];
        }
    }
L_00173cbc:;
    {
        cpu->r[2] = 0x00009c3fu;
    }
L_00173cc0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00173cc4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00173cfc;
        }
    }
L_00173cc8:;
    {
        cpu->r[1] = rd32(0x00173cd0u + + 0xa4u);
    }
L_00173ccc:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00173cd0:;
    {
        cpu->r[12] = rd32(0x00173cd8u + + 0xa0u);
    }
L_00173cd4:;
    {
        cpu->r[14] = 0x00000129u;
    }
L_00173cd8:;
    {
        cpu->r[2] = rd32(0x00173ce0u + + 0x9cu);
    }
L_00173cdc:;
    {
        cpu->r[1] = add_flags(cpu, 0x00173ce4u, cpu->r[1], 0, 0);
    }
L_00173ce0:;
    {
        cpu->r[3] = rd32(0x00173ce8u + + 0x98u);
    }
L_00173ce4:;
    {
        cpu->r[12] = add_flags(cpu, 0x00173cecu, cpu->r[12], 0, 0);
    }
L_00173ce8:;
    {
        cpu->r[2] = add_flags(cpu, 0x00173cf0u, cpu->r[2], 0, 0);
    }
L_00173cec:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000030u, 0, 0);
    }
L_00173cf0:;
    {
        cpu->r[3] = add_flags(cpu, 0x00173cf8u, cpu->r[3], 0, 0);
    }
L_00173cf4:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00173cf8:;
    {
        cpu->r[14] = 0x00173cfcu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00173cfc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00173d00:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00173d04u)) return;
    }
L_00173d04:;
    {
        cpu->r[1] = rd32(0x00173d0cu + + 0x78u);
    }
L_00173d08:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00173d0c:;
    {
        cpu->r[12] = rd32(0x00173d14u + + 0x74u);
    }
L_00173d10:;
    {
        cpu->r[14] = 0x0000011fu;
    }
L_00173d14:;
    {
        cpu->r[2] = rd32(0x00173d1cu + + 0x70u);
    }
L_00173d18:;
    {
        cpu->r[1] = add_flags(cpu, 0x00173d20u, cpu->r[1], 0, 0);
    }
L_00173d1c:;
    {
        cpu->r[3] = rd32(0x00173d24u + + 0x6cu);
    }
L_00173d20:;
    {
        cpu->r[12] = add_flags(cpu, 0x00173d28u, cpu->r[12], 0, 0);
    }
L_00173d24:;
    {
        cpu->r[2] = add_flags(cpu, 0x00173d2cu, cpu->r[2], 0, 0);
    }
L_00173d28:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000030u, 0, 0);
    }
L_00173d2c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00173d34u, cpu->r[3], 0, 0);
    }
L_00173d30:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00173d34:;
    {
        cpu->r[14] = 0x00173d38u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00173d38:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4b8u);
    }
L_00173d3c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4c0u);
    }
L_00173d40:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4bcu);
    }
L_00173d44:;
    {
        uint32_t v = cpu->r[2] ^ shifter(cpu->r[2], 1, 31u, &shc); cpu->r[3] = v;
    }
L_00173d48:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], shifter(cpu->r[2], 1, 31u, &shc), 1, 0);
    }
L_00173d4c:;
    {
        uint32_t v = cpu->r[0] ^ shifter(cpu->r[0], 1, 31u, &shc); cpu->r[12] = v;
    }
L_00173d50:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[0], 1, 31u, &shc), 1, 0);
    }
L_00173d54:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[3], 1, 1);
    }
L_00173d58:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[3] = cpu->r[12];
        }
    }
L_00173d5c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[3];
        }
    }
L_00173d60:;
    {
        uint32_t v = cpu->r[1] ^ shifter(cpu->r[1], 1, 31u, &shc); cpu->r[12] = v;
    }
L_00173d64:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], shifter(cpu->r[1], 1, 31u, &shc), 1, 0);
    }
L_00173d68:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_00173d6c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[12];
        }
    }
L_00173d70:;
    {
        goto L_00173c28;
    }
}

/* _ZN8CCarBase19IsSectionImpassableEi @ 00173d94 (arm) */
void fn_00173d94(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00173d94:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00173d98:;
    {
        cpu->r[4] = rd32(0x00173da0u + + 0x5cu);
    }
L_00173d9c:;
    {
        cpu->r[2] = rd32(0x00173da4u + + 0x5cu);
    }
L_00173da0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00173da4:;
    {
        cpu->r[4] = add_flags(cpu, 0x00173dacu, cpu->r[4], 0, 0);
    }
L_00173da8:;
    {
        cpu->r[3] = 0x00008c50u;
    }
L_00173dac:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00173db0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00173db4:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_00173db8:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_00173dbc:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_00173dc0:;
    {
        cpu->r[0] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00173dc4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_00173dc8:;
    {
        cpu->r[14] = 0x00173dccu; fn_00180c78(cpu);
    }
L_00173dcc:;
    {
        cpu->r[3] = rd32(0x00173dd4u + + 0x30u);
    }
L_00173dd0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00173dd4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00173dd8:;
    {
        cpu->r[2] = (uint32_t)(int32_t)s16(cpu->r[0] + + 0xb4u);
    }
L_00173ddc:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00173de0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00173de4:;
    {
        if (cond_test(cpu, 14)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00173de8u)) return;
        }
    }
L_00173de8:;
    {
        cpu->r[3] = sub_flags(cpu, 0x00000800u, cpu->r[3], 1, 0);
    }
L_00173dec:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00173df0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00173df4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00173df8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00173dfcu)) return;
    }
}

/* _ZNK8CCarBase10GetSectionEv @ 00173e08 (arm) */
void fn_00173e08(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00173e08:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x1b0u);
    }
L_00173e0c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x1acu);
    }
L_00173e10:;
    {
        return fn_00180c78(cpu);
    }
}

/* _ZNK8CCarBase22GetPrevSectionIndexCarEi @ 00173e14 (arm) */
void fn_00173e14(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00173e14:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_00173e18:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00173e1c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = rd32(cpu->r[0] + + 0x1b4u);
        }
    }
L_00173e20:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00173e24:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00173e28:;
    {
        if (cond_test(cpu, 14)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00173e2c:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x1b4u);
    }
L_00173e30:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_00173e34:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x1acu);
    }
L_00173e38:;
    {
        return fn_00180634(cpu);
    }
}

/* _ZNK8CCarBase17GetPrevSectionCarEi @ 00173e3c (arm) */
void fn_00173e3c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00173e3c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00173e40:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x1acu);
    }
L_00173e44:;
    {
        cpu->r[14] = 0x00173e48u; fn_00173e14(cpu);
    }
L_00173e48:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00173e4c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00173e50:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_00173e54:;
    {
        return fn_00180c78(cpu);
    }
}

/* _ZNK8CCarBase22GetNextSectionIndexCarEi @ 00173e58 (arm) */
void fn_00173e58(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00173e58:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_00173e5c:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00173e60:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = rd32(cpu->r[0] + + 0x1b8u);
        }
    }
L_00173e64:;
    {
        if (cond_test(cpu, 1)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00173e68:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00173e74;
        }
    }
L_00173e6c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x1b0u);
    }
L_00173e70:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00173e74:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x1b8u);
    }
L_00173e78:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_00173e7c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x1acu);
    }
L_00173e80:;
    {
        return fn_001805dc(cpu);
    }
}

/* _ZNK8CCarBase17GetNextSectionCarEi @ 00173e84 (arm) */
void fn_00173e84(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00173e84:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00173e88:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x1acu);
    }
L_00173e8c:;
    {
        cpu->r[14] = 0x00173e90u; fn_00173e58(cpu);
    }
L_00173e90:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00173e94:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00173e98:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_00173e9c:;
    {
        return fn_00180c78(cpu);
    }
}

/* _ZN8CCarBase34AreCarsAlignedForParalelSideImpactEPS_ @ 00173ea0 (arm) */
void fn_00173ea0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00173ea0:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_00173ea4:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00173ea8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_00173eac:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00173eb0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00173fc4;
        }
    }
L_00173eb4:;
    {
        cpu->r[14] = rd32(cpu->r[5] + + 0x3dcu);
    }
L_00173eb8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_00173ebc:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x3d8u);
    }
L_00173ec0:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x3d4u);
    }
L_00173ec4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_00173ec8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_00173ecc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_00173ed0:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[6], cpu->r[12], 1, 0);
    }
L_00173ed4:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[14], cpu->r[2], 1, 0);
    }
L_00173ed8:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[12]);
    }
L_00173edc:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_00173ee0:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[2]);
    }
L_00173ee4:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_00173ee8:;
    {
        cpu->r[14] = 0x00173eecu; fn_001855bc(cpu);
    }
L_00173eec:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00173ef0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00173ef4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_00173ef8:;
    {
        cpu->r[14] = 0x00173f00u;
    }
L_00173efc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00173f00u)) return;
    }
L_00173f00:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_00173f04:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_00173f08:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00173f0c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_00173f10:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00173f14:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_00173f18:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00173f1c:;
    {
        uint32_t v = cpu->r[12] * cpu->r[2] + cpu->r[3]; cpu->r[2] = v;
    }
L_00173f20:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00173f24:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_00173f28:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00173f2c:;
    {
        uint32_t v = cpu->r[5] * cpu->r[12] + cpu->r[2]; cpu->r[5] = v;
    }
L_00173f30:;
    {
        cpu->r[14] = 0x00173f38u;
    }
L_00173f34:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00173f38u)) return;
    }
L_00173f38:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00173f3c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00173f40:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_00173f44:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xcu);
    }
L_00173f48:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x10u);
    }
L_00173f4c:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x14u);
    }
L_00173f50:;
    {
        cpu->r[14] = 0x00173f58u;
    }
L_00173f54:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00173f58u)) return;
    }
L_00173f58:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_00173f5c:;
    {
        uint32_t v = shifter(cpu->r[7], 1, 6u, &shc); cpu->r[7] = v;
    }
L_00173f60:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_00173f64:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 6u, &shc); cpu->r[6] = v;
    }
L_00173f68:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 12u, &shc); cpu->r[5] = v;
    }
L_00173f6c:;
    {
        uint32_t v = shifter(cpu->r[4], 1, 6u, &shc); cpu->r[4] = v;
    }
L_00173f70:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 6u, &shc); cpu->r[3] = v;
    }
L_00173f74:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00173f78:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 6u, &shc); cpu->r[2] = v;
    }
L_00173f7c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00001000u, 0, 0);
        }
    }
L_00173f80:;
    {
        uint32_t v = cpu->r[7] * cpu->r[3]; cpu->r[7] = v;
    }
L_00173f84:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_00173f88:;
    {
        uint32_t v = cpu->r[6] * cpu->r[2] + cpu->r[7]; cpu->r[6] = v;
    }
L_00173f8c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 6u, &shc); cpu->r[3] = v;
    }
L_00173f90:;
    {
        uint32_t v = cpu->r[4] * cpu->r[3] + cpu->r[6]; cpu->r[4] = v;
    }
L_00173f94:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00173fa0;
        }
    }
L_00173f98:;
    {
        sub_flags(cpu, cpu->r[5], 0x00001000u, 1, 1);
    }
L_00173f9c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00001000u, 1, 0);
        }
    }
L_00173fa0:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00173fa4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00001000u, 0, 0);
        }
    }
L_00173fa8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00173fb4;
        }
    }
L_00173fac:;
    {
        sub_flags(cpu, cpu->r[4], 0x00001000u, 1, 1);
    }
L_00173fb0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00001000u, 1, 0);
        }
    }
L_00173fb4:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000258u, 1, 0);
    }
L_00173fb8:;
    {
        cpu->r[3] = 0x00000b54u;
    }
L_00173fbc:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_00173fc0:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00173fd0;
        }
    }
L_00173fc4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00173fc8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_00173fcc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00173fd0u)) return;
    }
L_00173fd0:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000384u, 1, 0);
    }
L_00173fd4:;
    {
        cpu->r[3] = 0x000008fbu;
    }
L_00173fd8:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_00173fdc:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00173fe0:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00173fe4:;
    {
        goto L_00173fc8;
    }
}

/* _ZN8CCarBase10InitBounceEPS_ @ 00173fe8 (arm) */
void fn_00173fe8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00173fe8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00173fec:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00173ff0:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00173ff4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00173ff8:;
    {
        cpu->r[14] = 0x00173ffcu; fn_00173ea0(cpu);
    }
L_00173ffc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x484u);
    }
L_00174000:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x484u);
    }
L_00174004:;
    {
        { uint32_t v = cpu->r[3] & 0x0000000cu; set_nz(cpu, v); }
    }
L_00174008:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_0017400c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017401c;
        }
    }
L_00174010:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3a8u);
    }
L_00174014:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_00174018:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00174050;
        }
    }
L_0017401c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00174020:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00174024:;
    {
        cpu->r[14] = 0x0017402cu;
    }
L_00174028:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017402cu)) return;
    }
L_0017402c:;
    {
        sub_flags(cpu, cpu->r[0], 0x0000000au, 1, 1);
    }
L_00174030:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00174048;
        }
    }
L_00174034:;
    {
        { uint32_t v = cpu->r[6] & 0x0000000cu; set_nz(cpu, v); }
    }
L_00174038:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00174048;
        }
    }
L_0017403c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x3a8u);
    }
L_00174040:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_00174044:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00174078;
        }
    }
L_00174048:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0017404c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00174050u)) return;
    }
L_00174050:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00174054:;
    {
        wr32(cpu->r[4] + + 0x3a0u, cpu->r[3]);
    }
L_00174058:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00174060u + + 0xe8u);
    }
L_0017405c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00174060:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00174064:;
    {
        wr32(cpu->r[4] + + 0x3a8u, cpu->r[3]);
    }
L_00174068:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001740f4;
        }
    }
L_0017406c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00174074u + + 0xd8u);
    }
L_00174070:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00174074:;
    {
        goto L_0017401c;
    }
L_00174078:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0017407c:;
    {
        wr32(cpu->r[5] + + 0x3a0u, cpu->r[3]);
    }
L_00174080:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00174088u + + 0xc0u);
    }
L_00174084:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00174088:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0017408c:;
    {
        wr32(cpu->r[5] + + 0x3a8u, cpu->r[3]);
    }
L_00174090:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001740a0;
        }
    }
L_00174094:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0017409cu + + 0xb0u);
    }
L_00174098:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0017409c:;
    {
        goto L_00174048;
    }
L_001740a0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001740a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001740a8:;
    {
        cpu->r[14] = 0x001740b0u;
    }
L_001740ac:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x50u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001740b0u)) return;
    }
L_001740b0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001740b4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00174094;
        }
    }
L_001740b8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001740bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001740c0:;
    {
        cpu->r[14] = 0x001740c8u;
    }
L_001740c4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001740c8u)) return;
    }
L_001740c8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001740cc:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[0];
    }
L_001740d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001740d4:;
    {
        cpu->r[14] = 0x001740dcu;
    }
L_001740d8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x50u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001740dcu)) return;
    }
L_001740dc:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_001740e0:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_001740e4:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_001740e8:;
    {
        vfp_vdiv(cpu, 15, 16, 15);
    }
L_001740ec:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001740f0:;
    {
        goto L_00174048;
    }
L_001740f4:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001740f8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001740fc:;
    {
        cpu->r[14] = 0x00174104u;
    }
L_00174100:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x50u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00174104u)) return;
    }
L_00174104:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00174108:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0017406c;
        }
    }
L_0017410c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00174110:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00174114:;
    {
        cpu->r[14] = 0x0017411cu;
    }
L_00174118:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017411cu)) return;
    }
L_0017411c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00174120:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[0];
    }
L_00174124:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00174128:;
    {
        cpu->r[14] = 0x00174130u;
    }
L_0017412c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x50u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00174130u)) return;
    }
L_00174130:;
    {
        *vfp_s(cpu,16) = (float)*(int32_t*)vfp_s(cpu,16);
    }
L_00174134:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00174138:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0017413c:;
    {
        vfp_vdiv(cpu, 15, 16, 15);
    }
L_00174140:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00174144:;
    {
        goto L_0017401c;
    }
}

/* _ZN8CCarBase30AreCarsAlignedForFrontalImpactEPS_ @ 00174150 (arm) */
void fn_00174150(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00174150:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_00174154:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00174158:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_0017415c:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00174160:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00174274;
        }
    }
L_00174164:;
    {
        cpu->r[14] = rd32(cpu->r[5] + + 0x3dcu);
    }
L_00174168:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_0017416c:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x3d8u);
    }
L_00174170:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x3d4u);
    }
L_00174174:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_00174178:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_0017417c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_00174180:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[6], cpu->r[12], 1, 0);
    }
L_00174184:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[14], cpu->r[2], 1, 0);
    }
L_00174188:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[12]);
    }
L_0017418c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_00174190:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[2]);
    }
L_00174194:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_00174198:;
    {
        cpu->r[14] = 0x0017419cu; fn_001855bc(cpu);
    }
L_0017419c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001741a0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001741a4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001741a8:;
    {
        cpu->r[14] = 0x001741b0u;
    }
L_001741ac:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001741b0u)) return;
    }
L_001741b0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_001741b4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_001741b8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001741bc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_001741c0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001741c4:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_001741c8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001741cc:;
    {
        uint32_t v = cpu->r[12] * cpu->r[2] + cpu->r[3]; cpu->r[2] = v;
    }
L_001741d0:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001741d4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_001741d8:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001741dc:;
    {
        uint32_t v = cpu->r[5] * cpu->r[12] + cpu->r[2]; cpu->r[5] = v;
    }
L_001741e0:;
    {
        cpu->r[14] = 0x001741e8u;
    }
L_001741e4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001741e8u)) return;
    }
L_001741e8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001741ec:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001741f0:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_001741f4:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xcu);
    }
L_001741f8:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x10u);
    }
L_001741fc:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x14u);
    }
L_00174200:;
    {
        cpu->r[14] = 0x00174208u;
    }
L_00174204:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00174208u)) return;
    }
L_00174208:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_0017420c:;
    {
        uint32_t v = shifter(cpu->r[7], 1, 6u, &shc); cpu->r[7] = v;
    }
L_00174210:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_00174214:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 6u, &shc); cpu->r[6] = v;
    }
L_00174218:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 12u, &shc); cpu->r[5] = v;
    }
L_0017421c:;
    {
        uint32_t v = shifter(cpu->r[4], 1, 6u, &shc); cpu->r[4] = v;
    }
L_00174220:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 6u, &shc); cpu->r[3] = v;
    }
L_00174224:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00174228:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 6u, &shc); cpu->r[2] = v;
    }
L_0017422c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00001000u, 0, 0);
        }
    }
L_00174230:;
    {
        uint32_t v = cpu->r[7] * cpu->r[3]; cpu->r[7] = v;
    }
L_00174234:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_00174238:;
    {
        uint32_t v = cpu->r[6] * cpu->r[2] + cpu->r[7]; cpu->r[6] = v;
    }
L_0017423c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 6u, &shc); cpu->r[3] = v;
    }
L_00174240:;
    {
        uint32_t v = cpu->r[4] * cpu->r[3] + cpu->r[6]; cpu->r[4] = v;
    }
L_00174244:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00174250;
        }
    }
L_00174248:;
    {
        sub_flags(cpu, cpu->r[5], 0x00001000u, 1, 1);
    }
L_0017424c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00001000u, 1, 0);
        }
    }
L_00174250:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00174254:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00001000u, 0, 0);
        }
    }
L_00174258:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00174264;
        }
    }
L_0017425c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00001000u, 1, 1);
    }
L_00174260:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00001000u, 1, 0);
        }
    }
L_00174264:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x000000c8u, 1, 0);
    }
L_00174268:;
    {
        cpu->r[3] = 0x00000e74u;
    }
L_0017426c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_00174270:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00174280;
        }
    }
L_00174274:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00174278:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_0017427c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00174280u)) return;
    }
L_00174280:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000190u, 1, 0);
    }
L_00174284:;
    {
        cpu->r[3] = 0x00000ce4u;
    }
L_00174288:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_0017428c:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00174290:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00174294:;
    {
        goto L_00174278;
    }
}

/* _ZN8CCarBase32AreCarsAlignedForFrontBackImpactEPS_ @ 00174298 (arm) */
void fn_00174298(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00174298:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_0017429c:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001742a0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_001742a4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001742a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001743bc;
        }
    }
L_001742ac:;
    {
        cpu->r[14] = rd32(cpu->r[5] + + 0x3dcu);
    }
L_001742b0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_001742b4:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x3d8u);
    }
L_001742b8:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x3d4u);
    }
L_001742bc:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_001742c0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_001742c4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_001742c8:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[6], cpu->r[12], 1, 0);
    }
L_001742cc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[14], cpu->r[2], 1, 0);
    }
L_001742d0:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[12]);
    }
L_001742d4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_001742d8:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[2]);
    }
L_001742dc:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[3]);
    }
L_001742e0:;
    {
        cpu->r[14] = 0x001742e4u; fn_001855bc(cpu);
    }
L_001742e4:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001742e8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001742ec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001742f0:;
    {
        cpu->r[14] = 0x001742f8u;
    }
L_001742f4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001742f8u)) return;
    }
L_001742f8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x24u);
    }
L_001742fc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_00174300:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00174304:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x28u);
    }
L_00174308:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0017430c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[3] = v;
    }
L_00174310:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00174314:;
    {
        uint32_t v = cpu->r[12] * cpu->r[2] + cpu->r[3]; cpu->r[2] = v;
    }
L_00174318:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_0017431c:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x20u);
    }
L_00174320:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00174324:;
    {
        uint32_t v = cpu->r[5] * cpu->r[12] + cpu->r[2]; cpu->r[5] = v;
    }
L_00174328:;
    {
        cpu->r[14] = 0x00174330u;
    }
L_0017432c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00174330u)) return;
    }
L_00174330:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00174334:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00174338:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_0017433c:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0xcu);
    }
L_00174340:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x10u);
    }
L_00174344:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x14u);
    }
L_00174348:;
    {
        cpu->r[14] = 0x00174350u;
    }
L_0017434c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00174350u)) return;
    }
L_00174350:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_00174354:;
    {
        uint32_t v = shifter(cpu->r[7], 1, 6u, &shc); cpu->r[7] = v;
    }
L_00174358:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_0017435c:;
    {
        uint32_t v = shifter(cpu->r[6], 1, 6u, &shc); cpu->r[6] = v;
    }
L_00174360:;
    {
        uint32_t v = shifter(cpu->r[5], 1, 12u, &shc); cpu->r[5] = v;
    }
L_00174364:;
    {
        uint32_t v = shifter(cpu->r[4], 1, 6u, &shc); cpu->r[4] = v;
    }
L_00174368:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 6u, &shc); cpu->r[3] = v;
    }
L_0017436c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00174370:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 6u, &shc); cpu->r[2] = v;
    }
L_00174374:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00001000u, 0, 0);
        }
    }
L_00174378:;
    {
        uint32_t v = cpu->r[7] * cpu->r[3]; cpu->r[7] = v;
    }
L_0017437c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_00174380:;
    {
        uint32_t v = cpu->r[6] * cpu->r[2] + cpu->r[7]; cpu->r[6] = v;
    }
L_00174384:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 6u, &shc); cpu->r[3] = v;
    }
L_00174388:;
    {
        uint32_t v = cpu->r[4] * cpu->r[3] + cpu->r[6]; cpu->r[4] = v;
    }
L_0017438c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00174398;
        }
    }
L_00174390:;
    {
        sub_flags(cpu, cpu->r[5], 0x00001000u, 1, 1);
    }
L_00174394:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00001000u, 1, 0);
        }
    }
L_00174398:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0017439c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00001000u, 0, 0);
        }
    }
L_001743a0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001743ac;
        }
    }
L_001743a4:;
    {
        sub_flags(cpu, cpu->r[4], 0x00001000u, 1, 1);
    }
L_001743a8:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00001000u, 1, 0);
        }
    }
L_001743ac:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x000000c8u, 1, 0);
    }
L_001743b0:;
    {
        cpu->r[3] = 0x00000e74u;
    }
L_001743b4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_001743b8:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001743c8;
        }
    }
L_001743bc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001743c0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_001743c4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001743c8u)) return;
    }
L_001743c8:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000190u, 1, 0);
    }
L_001743cc:;
    {
        cpu->r[3] = 0x00000ce4u;
    }
L_001743d0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_001743d4:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_001743d8:;
    {
        if (cond_test(cpu, 9)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_001743dc:;
    {
        goto L_001743c0;
    }
}

/* _ZN8CCarBase16InitPushRotationEPS_ @ 001743e0 (arm) */
void fn_001743e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001743e0:;
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
L_001743e4:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_001743e8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001743ec:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x001743f4u + + 0x1c4u);
    }
L_001743f0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000018u, 1, 0);
    }
L_001743f4:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_001743f8:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001743fc:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00174400:;
    {
        cpu->r[8] = rd32(cpu->r[1] + + 0x484u);
    }
L_00174404:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x484u);
    }
L_00174408:;
    {
        cpu->r[14] = 0x00174410u;
    }
L_0017440c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00174410u)) return;
    }
L_00174410:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00174414:;
    {
        cpu->r[6] = rd32(0x0017441cu + + 0x1a8u);
    }
L_00174418:;
    {
        cpu->r[6] = add_flags(cpu, 0x00174420u, cpu->r[6], 0, 0);
    }
L_0017441c:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_00174420:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00174424:;
    {
        cpu->r[14] = 0x0017442cu;
    }
L_00174428:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0017442cu)) return;
    }
L_0017442c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00174430:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_00174434:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00174438:;
    {
        cpu->r[14] = 0x00174440u;
    }
L_0017443c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x50u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00174440u)) return;
    }
L_00174440:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], cpu->r[10], 1, 0);
    }
L_00174444:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[9];
    }
L_00174448:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_0017444c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00174450:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_00174454:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00174458:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017445c:;
    {
        vfp_vdiv(cpu, 17, 14, 15);
    }
L_00174460:;
    {
        cpu->r[14] = 0x00174468u;
    }
L_00174464:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x44u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00174468u)) return;
    }
L_00174468:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_0017446c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00174470:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00174474:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 15) = *(float*)G(0x0017447cu + + 0x140u);
        }
    }
L_00174478:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu, 15) = *(float*)G(0x00174480u + + 0x140u);
        }
    }
L_0017447c:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu, 14) = *(float*)G(0x00174484u + + 0x134u);
        }
    }
L_00174480:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00174484:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu,14) = *vfp_s(cpu,15);
        }
    }
L_00174488:;
    {
        vfp_vmla(cpu, 14, 17, 15);
    }
L_0017448c:;
    {
        *vfp_s(cpu,15) = *vfp_s(cpu,14);
    }
L_00174490:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00174498u + + 0x128u);
    }
L_00174494:;
    {
        vfp_vmla(cpu, 16, 17, 14);
    }
L_00174498:;
    {
        *(int32_t*)vfp_s(cpu,17) = (int32_t)*vfp_s(cpu,15);
    }
L_0017449c:;
    {
        cpu->r[14] = 0x001744a4u;
    }
L_001744a0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001744a4u)) return;
    }
L_001744a4:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001744a8:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_001744ac:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001744b0:;
    {
        cpu->r[14] = 0x001744b8u;
    }
L_001744b4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001744b8u)) return;
    }
L_001744b8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001744bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001744c0:;
    {
        cpu->r[14] = 0x001744c4u; fn_00174298(cpu);
    }
L_001744c4:;
    {
        cpu->r[3] = rd32(0x001744ccu + + 0xfcu);
    }
L_001744c8:;
    {
        cpu->r[2] = 0x00008c50u;
    }
L_001744cc:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_001744d0:;
    {
        *(int32_t*)vfp_s(cpu,16) = (int32_t)*vfp_s(cpu,16);
    }
L_001744d4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_001744d8:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_001744dc:;
    {
        cpu->r[3] = 0x00001bc8u;
    }
L_001744e0:;
    {
        cpu->r[1] = rd32(cpu->r[1] + cpu->r[3]);
    }
L_001744e4:;
    {
        cpu->r[3] = rd32(cpu->r[1] + cpu->r[2]);
    }
L_001744e8:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x8u);
    }
L_001744ec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00006300u, 0, 0);
    }
L_001744f0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001eu, 0, 0);
    }
L_001744f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001744f8:;
    {
        cpu->r[6] = rd32(cpu->r[3] + + 0x4u);
    }
L_001744fc:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[5], 1, 1);
    }
L_00174500:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_00174504:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00174550;
        }
    }
L_00174508:;
    {
        { uint32_t v = cpu->r[7] & 0x00000001u; set_nz(cpu, v); }
    }
L_0017450c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00174534;
        }
    }
L_00174510:;
    {
        { uint32_t v = cpu->r[7] & 0x00000004u; set_nz(cpu, v); }
    }
L_00174514:;
    {
        if (cond_test(cpu, 2)) {
        *(uint32_t*)G(cpu->r[4] + + 0x3c4u) = *(uint32_t*)vfp_s(cpu, 16);
        }
    }
L_00174518:;
    {
        { uint32_t v = cpu->r[7] & 0x00000008u; set_nz(cpu, v); }
    }
L_0017451c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,16);
        }
    }
L_00174520:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[2], 1, 0);
        }
    }
L_00174524:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x3c4u, cpu->r[3]);
        }
    }
L_00174528:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_0017452c:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00174530:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00174534u)) return;
    }
L_00174534:;
    {
        { uint32_t v = cpu->r[7] & 0x00000004u; set_nz(cpu, v); }
    }
L_00174538:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,17);
        }
    }
L_0017453c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[2], 1, 0);
        }
    }
L_00174540:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x3c4u, cpu->r[3]);
        }
    }
L_00174544:;
    {
        { uint32_t v = cpu->r[7] & 0x00000008u; set_nz(cpu, v); }
    }
L_00174548:;
    {
        if (cond_test(cpu, 2)) {
        *(uint32_t*)G(cpu->r[4] + + 0x3c4u) = *(uint32_t*)vfp_s(cpu, 17);
        }
    }
L_0017454c:;
    {
        goto L_00174528;
    }
L_00174550:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00174554:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00174558:;
    {
        cpu->r[14] = 0x00174560u;
    }
L_0017455c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x44u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00174560u)) return;
    }
L_00174560:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00174564:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00174508;
        }
    }
L_00174568:;
    {
        { uint32_t v = cpu->r[8] & 0x00000001u; set_nz(cpu, v); }
    }
L_0017456c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017458c;
        }
    }
L_00174570:;
    {
        { uint32_t v = cpu->r[8] & 0x00000004u; set_nz(cpu, v); }
    }
L_00174574:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,17);
        }
    }
L_00174578:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[2], 1, 0);
        }
    }
L_0017457c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[5] + + 0x3c4u, cpu->r[3]);
        }
    }
L_00174580:;
    {
        { uint32_t v = cpu->r[8] & 0x00000008u; set_nz(cpu, v); }
    }
L_00174584:;
    {
        if (cond_test(cpu, 2)) {
        *(uint32_t*)G(cpu->r[5] + + 0x3c4u) = *(uint32_t*)vfp_s(cpu, 17);
        }
    }
L_00174588:;
    {
        goto L_00174528;
    }
L_0017458c:;
    {
        { uint32_t v = cpu->r[8] & 0x00000004u; set_nz(cpu, v); }
    }
L_00174590:;
    {
        if (cond_test(cpu, 2)) {
        *(uint32_t*)G(cpu->r[5] + + 0x3c4u) = *(uint32_t*)vfp_s(cpu, 16);
        }
    }
L_00174594:;
    {
        { uint32_t v = cpu->r[8] & 0x00000008u; set_nz(cpu, v); }
    }
L_00174598:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,16);
        }
    }
L_0017459c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[2], 1, 0);
        }
    }
L_001745a0:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[5] + + 0x3c4u, cpu->r[3]);
        }
    }
L_001745a4:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_001745a8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[5] + + 0x3c4u);
        }
    }
L_001745ac:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = sub_flags(cpu, 0x00000000u, cpu->r[3], 1, 0);
        }
    }
L_001745b0:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[6] + + 0x3c4u, cpu->r[3]);
        }
    }
L_001745b4:;
    {
        goto L_00174528;
    }
}

/* _ZN8CCarBase28ComputeWheelPositionAndLanesEPK10RoadStruct @ 001745cc (arm) */
void fn_001745cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001745cc:;
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
L_001745d0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000064u, 1, 0);
    }
L_001745d4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x0000003cu, 0, 0);
    }
L_001745d8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_001745dc:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001745e0:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_001745e4:;
    {
        cpu->r[11] = cpu->r[1];
    }
L_001745e8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001745ec:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001745f0:;
    {
        cpu->r[14] = 0x001745f8u;
    }
L_001745f4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x20u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001745f8u)) return;
    }
L_001745f8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001745fc:;
    {
        cpu->r[14] = 0x00174600u; fn_001855bc(cpu);
    }
L_00174600:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00174604:;
    {
        cpu->r[14] = 0x00174608u; fn_001855bc(cpu);
    }
L_00174608:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017460c:;
    {
        cpu->r[14] = 0x00174610u; fn_001721e4(cpu);
    }
L_00174610:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000003cu, 0, 0);
    }
L_00174614:;
    {
        uint32_t base = cpu->r[2];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[2] = v0;
        cpu->r[12] = v1;
        cpu->r[14] = v2;
    }
L_00174618:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0017461c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00174620:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[2] = v;
    }
L_00174624:;
    {
        uint32_t v = cpu->r[14] * cpu->r[3]; cpu->r[14] = v;
    }
L_00174628:;
    {
        uint32_t v = cpu->r[12] * cpu->r[3]; cpu->r[3] = v;
    }
L_0017462c:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 12u, &shc); cpu->r[2] = v;
    }
L_00174630:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[2]);
    }
L_00174634:;
    {
        uint32_t v = shifter(cpu->r[14], 1, 12u, &shc); cpu->r[14] = v;
    }
L_00174638:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[14]);
    }
L_0017463c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 12u, &shc); cpu->r[3] = v;
    }
L_00174640:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
    }
L_00174644:;
    {
        cpu->r[14] = 0x00174648u; fn_001721f0(cpu);
    }
L_00174648:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x44u);
    }
L_0017464c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0x3cu);
    }
L_00174650:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x40u);
    }
L_00174654:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00174658:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0017465c:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[2] = v;
    }
L_00174660:;
    {
        uint32_t v = cpu->r[8] * cpu->r[3]; cpu->r[8] = v;
    }
L_00174664:;
    {
        uint32_t v = cpu->r[10] * cpu->r[3]; cpu->r[10] = v;
    }
L_00174668:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 12u, &shc); cpu->r[9] = v;
    }
L_0017466c:;
    {
        cpu->r[14] = 0x00174670u; fn_001721fc(cpu);
    }
L_00174670:;
    {
        uint32_t v = shifter(cpu->r[8], 1, 12u, &shc); cpu->r[8] = v;
    }
L_00174674:;
    {
        uint32_t v = shifter(cpu->r[10], 1, 12u, &shc); cpu->r[10] = v;
    }
L_00174678:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0017467c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00174960;
        }
    }
L_00174680:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00174684:;
    {
        cpu->r[14] = 0x00174688u; fn_001721fc(cpu);
    }
L_00174688:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x30u);
    }
L_0017468c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000048u, 0, 0);
    }
L_00174690:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x38u);
    }
L_00174694:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00174698:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x34u);
    }
L_0017469c:;
    {
        cpu->r[7] = cpu->r[4];
    }
L_001746a0:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x3d4u);
    }
L_001746a4:;
    {
        uint32_t v = cpu->r[3] * cpu->r[0]; cpu->r[3] = v;
    }
L_001746a8:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[6]);
    }
L_001746ac:;
    {
        uint32_t v = cpu->r[1] * cpu->r[0]; cpu->r[1] = v;
    }
L_001746b0:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_001746b4:;
    {
        uint32_t v = cpu->r[2] * cpu->r[0]; cpu->r[2] = v;
    }
L_001746b8:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x3d8u);
    }
L_001746bc:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[12], cpu->r[8], 1, 0);
    }
L_001746c0:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[8]);
    }
L_001746c4:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[6], cpu->r[9], 1, 0);
    }
L_001746c8:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x20u);
    }
L_001746cc:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x28u);
    }
L_001746d0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000058u, 0, 0);
    }
L_001746d4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_001746d8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000050u, 0, 0);
    }
L_001746dc:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[0]);
    }
L_001746e0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[9], cpu->r[12], 0, 0);
    }
L_001746e4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[6], cpu->r[14], 0, 0);
    }
L_001746e8:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x2cu);
    }
L_001746ec:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x3dcu);
    }
L_001746f0:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 12u, &shc); cpu->r[3] = v;
    }
L_001746f4:;
    {
        uint32_t v = shifter(cpu->r[2], 1, 12u, &shc); cpu->r[2] = v;
    }
L_001746f8:;
    {
        uint32_t v = shifter(cpu->r[1], 1, 12u, &shc); cpu->r[1] = v;
    }
L_001746fc:;
    {
        cpu->r[10] = sub_flags(cpu, cpu->r[14], cpu->r[10], 1, 0);
    }
L_00174700:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[9], cpu->r[6], 0, 0);
    }
L_00174704:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[1], cpu->r[8], 0, 0);
    }
L_00174708:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x24u);
    }
L_0017470c:;
    {
        wr32(cpu->r[4] + + 0x50cu, cpu->r[9]);
    }
L_00174710:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[2], cpu->r[10], 0, 0);
    }
L_00174714:;
    {
        wr32(cpu->r[4] + + 0x508u, cpu->r[9]);
    }
L_00174718:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[1], cpu->r[14], 0, 0);
    }
L_0017471c:;
    {
        wr32(cpu->r[4] + + 0x4f4u, cpu->r[9]);
    }
L_00174720:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_00174724:;
    {
        wr32(cpu->r[4] + + 0x4ecu, cpu->r[9]);
    }
L_00174728:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_0017472c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x24u);
    }
L_00174730:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 0);
    }
L_00174734:;
    {
        wr32(cpu->r[4] + + 0x504u, cpu->r[6]);
    }
L_00174738:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[2], cpu->r[12], 0, 0);
    }
L_0017473c:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 0);
    }
L_00174740:;
    {
        wr32(cpu->r[4] + + 0x4f0u, cpu->r[6]);
    }
L_00174744:;
    {
        cpu->r[9] = cpu->r[4];
    }
L_00174748:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_0017474c:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], cpu->r[1], 1, 0);
    }
L_00174750:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 0);
    }
L_00174754:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[8], cpu->r[1], 1, 0);
    }
L_00174758:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[10], cpu->r[2], 1, 0);
    }
L_0017475c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[4]);
    }
L_00174760:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[4]);
    }
L_00174764:;
    {
        wr32(cpu->r[4] + + 0x4e8u, cpu->r[14]);
    }
L_00174768:;
    {
        wr32(cpu->r[4] + + 0x4e4u, cpu->r[12]);
    }
L_0017476c:;
    {
        wr32(cpu->r[4] + + 0x4e0u, cpu->r[0]);
    }
L_00174770:;
    {
        wr32(cpu->r[4] + + 0x500u, cpu->r[1]);
    }
L_00174774:;
    {
        wr32(cpu->r[4] + + 0x4fcu, cpu->r[2]);
    }
L_00174778:;
    {
        wr32(cpu->r[4] + + 0x4f8u, cpu->r[3]);
    }
L_0017477c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x1b0u);
    }
L_00174780:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 1u, &shc), 0, 0);
    }
L_00174784:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000148u, 0, 0);
    }
L_00174788:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_0017478c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_00174790:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_00174794:;
    {
        wr32(cpu->r[6] + + 0x528u, cpu->r[0]);
    }
L_00174798:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x000004e0u, 0, 0);
    }
L_0017479c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001747a0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001747a4:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001747a8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001747ac:;
    {
        cpu->r[14] = 0x001747b0u; fn_0017bf58(cpu);
    }
L_001747b0:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x528u);
    }
L_001747b4:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001747b8:;
    {
        cpu->r[14] = 0x001747bcu; fn_00180c78(cpu);
    }
L_001747bc:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x528u);
    }
L_001747c0:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001747c4:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_001747c8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[2], 0, 0);
    }
L_001747cc:;
    {
        cpu->r[10] = cpu->r[0];
    }
L_001747d0:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_001747d4:;
    {
        cpu->r[14] = 0x001747d8u; fn_00180b68(cpu);
    }
L_001747d8:;
    {
        cpu->r[1] = rd32(cpu->r[7] + + 0x4e8u);
    }
L_001747dc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_001747e0:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001747e4:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_001747e8:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x4e0u);
    }
L_001747ec:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_001747f0:;
    {
        wr32(cpu->r[13] + + 0x5cu, cpu->r[1]);
    }
L_001747f4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x0000000cu, 0, 0);
    }
L_001747f8:;
    {
        wr32(cpu->r[13] + + 0x58u, cpu->r[0]);
    }
L_001747fc:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_00174800:;
    {
        cpu->r[14] = 0x00174804u; fn_0017a860(cpu);
    }
L_00174804:;
    {
        cpu->r[0] = (uint32_t)((uint8_t)cpu->r[0]);
    }
L_00174808:;
    {
        wr8(cpu->r[9] + + 0x524u, cpu->r[0]);
    }
L_0017480c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00174810:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[0], 2, 1u, &shc), 0, 0);
    }
L_00174814:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_00174818:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_0017481c:;
    {
        cpu->r[1] = rd32(cpu->r[8] + shifter(cpu->r[0], 2, 2u, &shc));
    }
L_00174820:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_00174824:;
    {
        cpu->r[0] = rd32(cpu->r[8] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_00174828:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x14u);
    }
L_0017482c:;
    {
        wr32(cpu->r[13] + + 0x50u, cpu->r[1]);
    }
L_00174830:;
    {
        wr32(cpu->r[13] + + 0x54u, cpu->r[0]);
    }
L_00174834:;
    {
        cpu->r[1] = rd32(cpu->r[10] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_00174838:;
    {
        cpu->r[0] = rd32(cpu->r[10] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_0017483c:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_00174840:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x18u);
    }
L_00174844:;
    {
        wr32(cpu->r[13] + + 0x48u, cpu->r[1]);
    }
L_00174848:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[0]);
    }
L_0017484c:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_00174850:;
    {
        cpu->r[12] = cpu->r[13];
    }
L_00174854:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_00174858:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x10u);
    }
L_0017485c:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_00174860:;
    {
        cpu->r[14] = 0x00174864u; fn_0017a764(cpu);
    }
L_00174864:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000001u, cpu->r[0], 1, 1);
    }
L_00174868:;
    {
        if (cond_test(cpu, 4)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0017486c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 1);
    }
L_00174870:;
    {
        wr8(cpu->r[9] + + 0x538u, cpu->r[0]);
    }
L_00174874:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_00174878:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0017477c;
        }
    }
L_0017487c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x100u);
    }
L_00174880:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_00174884:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00174938;
        }
    }
L_00174888:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10cu);
    }
L_0017488c:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_00174890:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0017490c;
        }
    }
L_00174894:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x118u);
    }
L_00174898:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_0017489c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001748e0;
        }
    }
L_001748a0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x124u);
    }
L_001748a4:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_001748a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001748b4;
        }
    }
L_001748ac:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000064u, 0, 0);
    }
L_001748b0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001748b4u)) return;
    }
L_001748b4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x128u);
    }
L_001748b8:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_001748bc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001748ac;
        }
    }
L_001748c0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x12cu);
    }
L_001748c4:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_001748c8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000500u, 0, 0);
        }
    }
L_001748cc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000124u, 0, 0);
        }
    }
L_001748d0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
        }
    }
L_001748d4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
        }
    }
L_001748d8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        }
    }
L_001748dc:;
    {
        goto L_001748ac;
    }
L_001748e0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x11cu);
    }
L_001748e4:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_001748e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001748a0;
        }
    }
L_001748ec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x120u);
    }
L_001748f0:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_001748f4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x000004f0u, 0, 0);
        }
    }
L_001748f8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000118u, 0, 0);
        }
    }
L_001748fc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
        }
    }
L_00174900:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t base = cpu->r[2];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
        }
    }
L_00174904:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        }
    }
L_00174908:;
    {
        goto L_001748a0;
    }
L_0017490c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x110u);
    }
L_00174910:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_00174914:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00174894;
        }
    }
L_00174918:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x114u);
    }
L_0017491c:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_00174920:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x000004e0u, 0, 0);
        }
    }
L_00174924:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x0000010cu, 0, 0);
        }
    }
L_00174928:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
        }
    }
L_0017492c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t base = cpu->r[2];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
        }
    }
L_00174930:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        }
    }
L_00174934:;
    {
        goto L_00174894;
    }
L_00174938:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x104u);
    }
L_0017493c:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_00174940:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00174888;
        }
    }
L_00174944:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x108u);
    }
L_00174948:;
    {
        add_flags(cpu, cpu->r[3], 0x00000001u, 0, 1);
    }
L_0017494c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x000004e0u, 0, 0);
        }
    }
L_00174950:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000100u, 0, 0);
        }
    }
L_00174954:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t base = cpu->r[2];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
        }
    }
L_00174958:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        }
    }
L_0017495c:;
    {
        goto L_00174888;
    }
L_00174960:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00174964:;
    {
        cpu->r[14] = 0x00174968u; fn_001721fc(cpu);
    }
L_00174968:;
    {
        cpu->r[0] = sub_flags(cpu, 0x00000000u, cpu->r[0], 1, 0);
    }
L_0017496c:;
    {
        goto L_00174688;
    }
}
