#include "functions.h"

/* _ZN9CarSounds6UpdateEP18CarSoundParameters @ 00190054 (arm) */
void fn_00190054(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00190054:;
    {
        cpu->r[2] = rd32(cpu->r[1]);
    }
L_00190058:;
    {
        cpu->r[3] = rd32(0x00190060u + + 0x260u);
    }
L_0019005c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_00190060:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00190064:;
    {
        cpu->r[3] = add_flags(cpu, 0x0019006cu, cpu->r[3], 0, 0);
    }
L_00190068:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0019006c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00190070:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00190074:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00190090;
        }
    }
L_00190078:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_0019007c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00190080u)) return;
        }
    }
L_00190080:;
    {
        cpu->r[14] = 0x00190084u; fn_0018ee78(cpu);
    }
L_00190084:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00190088:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_0019008c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00190090u)) return;
    }
L_00190090:;
    {
        cpu->r[1] = rd32(0x00190098u + + 0x22cu);
    }
L_00190094:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00190098:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0019009c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001900a0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001900a4u)) return;
        }
    }
L_001900a4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x10u);
    }
L_001900a8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x14u);
    }
L_001900ac:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x48u);
    }
L_001900b0:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001900b4:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001900b8:;
    {
        wr8(cpu->r[4] + + 0x54u, cpu->r[0]);
    }
L_001900bc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001900c0:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[3]);
    }
L_001900c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001900f0;
        }
    }
L_001900c8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4cu);
    }
L_001900cc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_001900d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001900f0;
        }
    }
L_001900d4:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x50u);
    }
L_001900d8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_001900dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001900f0;
        }
    }
L_001900e0:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_001900e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001900f0;
        }
    }
L_001900e8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 1);
    }
L_001900ec:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[4] + + 0x54u, cpu->r[2]);
        }
    }
L_001900f0:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x30u);
    }
L_001900f4:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x8u);
    }
L_001900f8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001900fc:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[1]);
    }
L_00190100:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019024c;
        }
    }
L_00190104:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00190108:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_0019010c:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[3]);
        }
    }
L_00190110:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00190124;
        }
    }
L_00190114:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_00190118:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_0019011c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = cpu->r[1];
        }
    }
L_00190120:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[3]);
        }
    }
L_00190124:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_00190128:;
    {
        *vfp_s(cpu,12) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_0019012c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x28u);
    }
L_00190130:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0x20u);
    }
L_00190134:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x2cu);
    }
L_00190138:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0xe9u);
    }
L_0019013c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x98u);
    }
L_00190140:;
    {
        vfp_vadd(cpu, 14, 12, 14);
    }
L_00190144:;
    {
        *vfp_s(cpu,13) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00190148:;
    {
        vfp_vsub(cpu, 14, 14, 13);
    }
L_0019014c:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_00190150:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_00190154:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00190158:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0019015c:;
    {
        vfp_sync_flags(cpu);
    }
L_00190160:;
    {
        if (cond_test(cpu, 5)) {
        vfp_vneg(cpu, 15, 15);
        }
    }
L_00190164:;
    {
        if (cond_test(cpu, 5)) {
        *(uint32_t*)G(cpu->r[4] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_00190168:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0019016c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[5] + + 0x1cu);
        }
    }
L_00190170:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1cu);
        }
    }
L_00190174:;
    {
        wr32(cpu->r[4] + + 0xecu, cpu->r[3]);
    }
L_00190178:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0xf0u);
    }
L_0019017c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00190180:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[5] + + 0x18u);
        }
    }
L_00190184:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1cu);
        }
    }
L_00190188:;
    {
        wr32(cpu->r[4] + + 0xf4u, cpu->r[3]);
    }
L_0019018c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xcu);
    }
L_00190190:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_00190194:;
    {
        cpu->r[14] = 0x00190198u; fn_0018ebfc(cpu);
    }
L_00190198:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019019c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00190260;
        }
    }
L_001901a0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001901a4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001901a8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001901ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001901d0;
        }
    }
L_001901b0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001901b4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00190294;
        }
    }
L_001901b8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x98u);
    }
L_001901bc:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001901c0:;
    {
        cpu->r[14] = 0x001901c4u; fn_0018ec0c(cpu);
    }
L_001901c4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x74u);
    }
L_001901c8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001901cc:;
    {
        cpu->r[14] = 0x001901d0u; fn_0018ec0c(cpu);
    }
L_001901d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001901d4:;
    {
        cpu->r[14] = 0x001901d8u; fn_0018f330(cpu);
    }
L_001901d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001901dc:;
    {
        cpu->r[14] = 0x001901e0u; fn_0018f6e4(cpu);
    }
L_001901e0:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0xa0u);
    }
L_001901e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001901e8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00190288;
        }
    }
L_001901ec:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0xc8u);
    }
L_001901f0:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x4u);
    }
L_001901f4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001901f8:;
    {
        wr8(cpu->r[4] + + 0xc9u, cpu->r[3]);
    }
L_001901fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00190208;
        }
    }
L_00190200:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00190204:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001902b4;
        }
    }
L_00190208:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0xd8u);
    }
L_0019020c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00190210:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019027c;
        }
    }
L_00190214:;
    {
        cpu->r[2] = rd8(cpu->r[4] + + 0xe8u);
    }
L_00190218:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x1cu);
    }
L_0019021c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00190220:;
    {
        wr32(cpu->r[4] + + 0xecu, cpu->r[3]);
    }
L_00190224:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00190230;
        }
    }
L_00190228:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019022c:;
    {
        cpu->r[14] = 0x00190230u; fn_0018fd74(cpu);
    }
L_00190230:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_00190234:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x1cu);
    }
L_00190238:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_0019023c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x10u);
    }
L_00190240:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[2]);
    }
L_00190244:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[3]);
    }
L_00190248:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0019024cu)) return;
    }
L_0019024c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00190250:;
    {
        cpu->r[14] = 0x00190254u; fn_0018edb0(cpu);
    }
L_00190254:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00190258:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[0]);
    }
L_0019025c:;
    {
        goto L_00190104;
    }
L_00190260:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x98u);
    }
L_00190264:;
    {
        cpu->r[14] = 0x00190268u; fn_0018ec94(cpu);
    }
L_00190268:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x74u);
    }
L_0019026c:;
    {
        cpu->r[14] = 0x00190270u; fn_0018ec94(cpu);
    }
L_00190270:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00190274:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_00190278:;
    {
        goto L_001901d0;
    }
L_0019027c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00190280:;
    {
        cpu->r[14] = 0x00190284u; fn_0018f29c(cpu);
    }
L_00190284:;
    {
        goto L_00190214;
    }
L_00190288:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019028c:;
    {
        cpu->r[14] = 0x00190290u; fn_0018fa98(cpu);
    }
L_00190290:;
    {
        goto L_001901ec;
    }
L_00190294:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001901d0;
        }
    }
L_00190298:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x98u);
    }
L_0019029c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001902a0:;
    {
        cpu->r[14] = 0x001902a4u; fn_0018ec0c(cpu);
    }
L_001902a4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x74u);
    }
L_001902a8:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001902ac:;
    {
        cpu->r[14] = 0x001902b0u; fn_0018ec0c(cpu);
    }
L_001902b0:;
    {
        goto L_001901d0;
    }
L_001902b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001902b8:;
    {
        cpu->r[14] = 0x001902bcu; fn_0018fcc4(cpu);
    }
L_001902bc:;
    {
        goto L_00190208;
    }
}

/* _ZN9CarSounds24SetRPMFilterCoefficientsEf @ 001902c8 (arm) */
void fn_001902c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001902c8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001902d0u + + 0x6cu);
    }
L_001902cc:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[1];
    }
L_001902d0:;
    {
        vfp_vmul(cpu, 13, 14, 15);
    }
L_001902d4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001902d8:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_001902dc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001902e0:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x001902e8u + + 0x58u);
    }
L_001902e4:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,13);
    }
L_001902e8:;
    {
        cpu->r[14] = 0x001902ecu; imp_cosf(cpu); /* cosf */
    }
L_001902ec:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001902f4u + + 0x50u);
    }
L_001902f0:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_001902f4:;
    {
        vfp_vsub(cpu, 16, 16, 15);
    }
L_001902f8:;
    {
        vfp_vnmls(cpu, 14, 16, 16);
    }
L_001902fc:;
    {
        vfp_vsqrt(cpu, 15, 14);
    }
L_00190300:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,15));
    }
L_00190304:;
    {
        vfp_sync_flags(cpu);
    }
L_00190308:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00190318;
        }
    }
L_0019030c:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00190310:;
    {
        cpu->r[14] = 0x00190314u; imp_sqrtf(cpu); /* sqrtf */
    }
L_00190314:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_00190318:;
    {
        vfp_vsub(cpu, 16, 15, 16);
    }
L_0019031c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00190324u + + 0x24u);
    }
L_00190320:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00190324:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0019032cu + + 0x18u);
    }
L_00190328:;
    {
        vfp_vadd(cpu, 15, 16, 15);
    }
L_0019032c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x40u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00190330:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x3cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00190334:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00190338:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019033cu)) return;
    }
}

/* _ZN9CarSounds19UnRegisterCallbacksEv @ 0019034c (arm) */
void fn_0019034c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019034c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00190350:;
    {
        cpu->r[4] = rd32(0x00190358u + + 0x34u);
    }
L_00190354:;
    {
        cpu->r[6] = rd32(0x0019035cu + + 0x34u);
    }
L_00190358:;
    {
        cpu->r[4] = add_flags(cpu, 0x00190360u, cpu->r[4], 0, 0);
    }
L_0019035c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00190360:;
    {
        cpu->r[5] = rd32(cpu->r[3]);
    }
L_00190364:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00190368:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019037c;
        }
    }
L_0019036c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00190370:;
    {
        cpu->r[14] = 0x00190374u; fn_0018ebc8(cpu);
    }
L_00190374:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00190378:;
    {
        cpu->r[14] = 0x0019037cu; fn_0018ba20(cpu);
    }
L_0019037c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00190380:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00190384:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_00190388:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0019038cu)) return;
    }
}

/* _ZN9CarSounds14AddTurboSoundsEP18TurboSoundSettings @ 00190394 (arm) */
void fn_00190394(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00190394:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x4u);
    }
L_00190398:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0019039c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001903a0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001903a4:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_001903a8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001903acu)) return;
        }
    }
L_001903ac:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_001903b0:;
    {
        wr8(cpu->r[0] + + 0xe8u, cpu->r[3]);
    }
L_001903b4:;
    {
        cpu->r[2] = rd8(cpu->r[1] + + 0x28u);
    }
L_001903b8:;
    {
        wr8(cpu->r[0] + + 0x114u, cpu->r[2]);
    }
L_001903bc:;
    {
        cpu->r[3] = rd8(cpu->r[1]);
    }
L_001903c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001903c4:;
    {
        wr8(cpu->r[0] + + 0xe9u, cpu->r[3]);
    }
L_001903c8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00190534;
        }
    }
L_001903cc:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x18u);
    }
L_001903d0:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[1];
    }
L_001903d4:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_001903d8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001903e0u + + 0x1fcu);
    }
L_001903dc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x1cu);
    }
L_001903e0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001903e4:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x124u, cpu->r[1]);
        }
    }
L_001903e8:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x128u, cpu->r[3]);
        }
    }
L_001903ec:;
    {
        wr32(cpu->r[4] + + 0xecu, cpu->r[0]);
    }
L_001903f0:;
    {
        vfp_vmul(cpu, 13, 15, 14);
    }
L_001903f4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001903fcu + + 0x1e4u);
    }
L_001903f8:;
    {
        vfp_vmul(cpu, 12, 15, 14);
    }
L_001903fc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00190404u + + 0x1e0u);
    }
L_00190400:;
    {
        vfp_vmul(cpu, 14, 15, 14);
    }
L_00190404:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,12);
    }
L_00190408:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_0019040c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x104u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00190410:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,13);
    }
L_00190414:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x10cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00190418:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x110u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0019041c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6] + + 0x14u);
    }
L_00190420:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00190428u + + 0x1c0u);
    }
L_00190424:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_00190428:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x114u);
    }
L_0019042c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x10u);
    }
L_00190430:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_00190434:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00190438:;
    {
        wr32(cpu->r[4] + + 0xfcu, cpu->r[3]);
    }
L_0019043c:;
    {
        wr32(cpu->r[4] + + 0xf8u, cpu->r[2]);
    }
L_00190440:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[6] + + 0x2cu);
        }
    }
L_00190444:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x11cu, cpu->r[3]);
        }
    }
L_00190448:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x118u, cpu->r[2]);
        }
    }
L_0019044c:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x3cu);
    }
L_00190450:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x100u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00190454:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6] + + 0x1cu);
    }
L_00190458:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x108u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0019045c:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6] + + 0x30u);
        }
    }
L_00190460:;
    {
        if (cond_test(cpu, 2)) {
        *(uint32_t*)G(cpu->r[4] + + 0x120u) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_00190464:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00190468:;
    {
        wr32(cpu->r[4] + + 0x12cu, cpu->r[0]);
    }
L_0019046c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00190470u)) return;
        }
    }
L_00190470:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00190474:;
    {
        cpu->r[14] = 0x00190478u; imp__Znaj(cpu); /* _Znaj */
    }
L_00190478:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x12cu);
    }
L_0019047c:;
    {
        wr32(cpu->r[4] + + 0x130u, cpu->r[0]);
    }
L_00190480:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00190484:;
    {
        cpu->r[14] = 0x00190488u; imp__Znaj(cpu); /* _Znaj */
    }
L_00190488:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x12cu);
    }
L_0019048c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00190490:;
    {
        wr32(cpu->r[4] + + 0x134u, cpu->r[0]);
    }
L_00190494:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001904cc;
        }
    }
L_00190498:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0019049c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x130u);
    }
L_001904a0:;
    {
        cpu->r[14] = rd32(cpu->r[6] + + 0x40u);
    }
L_001904a4:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_001904a8:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_001904ac:;
    {
        cpu->r[1] = rd32(cpu->r[14] + cpu->r[3]);
    }
L_001904b0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001904b4:;
    {
        wr32(cpu->r[7] + cpu->r[3], cpu->r[1]);
    }
L_001904b8:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[12]);
    }
L_001904bc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001904c0:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x12cu);
    }
L_001904c4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_001904c8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001904ac;
        }
    }
L_001904cc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001904d0:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001904d4:;
    {
        cpu->r[14] = 0x001904d8u; imp__Znaj(cpu); /* _Znaj */
    }
L_001904d8:;
    {
        cpu->r[3] = rd8(cpu->r[6] + + 0x8u);
    }
L_001904dc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001904e0:;
    {
        wr8(cpu->r[4] + + 0xf0u, cpu->r[3]);
    }
L_001904e4:;
    {
        wr32(cpu->r[4] + + 0x138u, cpu->r[0]);
    }
L_001904e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019056c;
        }
    }
L_001904ec:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xcu);
    }
L_001904f0:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001904f4:;
    {
        wr32(cpu->r[4] + + 0xf4u, cpu->r[3]);
    }
L_001904f8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00190528;
        }
    }
L_001904fc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00190500:;
    {
        cpu->r[12] = rd32(cpu->r[6] + + 0x44u);
    }
L_00190504:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_00190508:;
    {
        goto L_00190510;
    }
L_0019050c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x138u);
    }
L_00190510:;
    {
        cpu->r[1] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_00190514:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 1);
    }
L_00190518:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0019051c:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[1]);
    }
L_00190520:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00190524:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019050c;
        }
    }
L_00190528:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6] + + 0x48u);
    }
L_0019052c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x13cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00190530:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00190534u)) return;
    }
L_00190534:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x4u);
    }
L_00190538:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0019053c:;
    {
        wr32(cpu->r[0] + + 0xecu, cpu->r[3]);
    }
L_00190540:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x20u);
    }
L_00190544:;
    {
        wr32(cpu->r[0] + + 0x10cu, cpu->r[3]);
    }
L_00190548:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x24u);
    }
L_0019054c:;
    {
        wr32(cpu->r[0] + + 0x110u, cpu->r[3]);
    }
L_00190550:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x18u);
    }
L_00190554:;
    {
        wr32(cpu->r[0] + + 0x104u, cpu->r[3]);
    }
L_00190558:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[1] + + 0x34u);
        }
    }
L_0019055c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0x124u, cpu->r[3]);
        }
    }
L_00190560:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[1] + + 0x38u);
        }
    }
L_00190564:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0x128u, cpu->r[3]);
        }
    }
L_00190568:;
    {
        goto L_0019041c;
    }
L_0019056c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x1cu);
    }
L_00190570:;
    {
        wr32(cpu->r[4] + + 0xf4u, cpu->r[2]);
    }
L_00190574:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_00190578:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x12cu);
    }
L_0019057c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x18u);
    }
L_00190580:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[1]);
    }
L_00190584:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x18u);
    }
L_00190588:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x12cu);
    }
L_0019058c:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00190590:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[2];
    }
L_00190594:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_00190598:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0019059c:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_001905a0:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_001905a4:;
    {
        cpu->r[5] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001905a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00190528;
        }
    }
L_001905ac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001905b0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_001905b4:;
    {
        cpu->r[12] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001905b8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_001905bc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_001905c0:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[5], 1, 0);
    }
L_001905c4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 0);
    }
L_001905c8:;
    {
        wr32(cpu->r[1] + - 0x4u, cpu->r[12]);
    }
L_001905cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001905b0;
        }
    }
L_001905d0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[6] + + 0x48u);
    }
L_001905d4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x13cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001905d8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001905dcu)) return;
    }
}

/* _ZN9CarSoundsD1Ev @ 001905ec (arm) */
void fn_001905ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001905ec:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001905f0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001905f4:;
    {
        cpu->r[14] = 0x001905f8u; fn_0018ee78(cpu);
    }
L_001905f8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x5cu);
    }
L_001905fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00190600:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00190608;
        }
    }
L_00190604:;
    {
        cpu->r[14] = 0x00190608u; fn_0018ba60(cpu);
    }
L_00190608:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x60u);
    }
L_0019060c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00190610:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00190618;
        }
    }
L_00190614:;
    {
        cpu->r[14] = 0x00190618u; fn_0018ba60(cpu);
    }
L_00190618:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x68u);
    }
L_0019061c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00190620:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00190628;
        }
    }
L_00190624:;
    {
        cpu->r[14] = 0x00190628u; fn_0018ba60(cpu);
    }
L_00190628:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x6cu);
    }
L_0019062c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00190630:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00190638;
        }
    }
L_00190634:;
    {
        cpu->r[14] = 0x00190638u; fn_0018ba60(cpu);
    }
L_00190638:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x70u);
    }
L_0019063c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00190640:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00190648;
        }
    }
L_00190644:;
    {
        cpu->r[14] = 0x00190648u; fn_0018ba60(cpu);
    }
L_00190648:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x74u);
    }
L_0019064c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00190650:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00190664;
        }
    }
L_00190654:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00190658:;
    {
        cpu->r[14] = 0x0019065cu; fn_0018ebf0(cpu);
    }
L_0019065c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00190660:;
    {
        cpu->r[14] = 0x00190664u; fn_0018ba20(cpu);
    }
L_00190664:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x80u);
    }
L_00190668:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019066c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00190674;
        }
    }
L_00190670:;
    {
        cpu->r[14] = 0x00190674u; fn_0018ba60(cpu);
    }
L_00190674:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x84u);
    }
L_00190678:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019067c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00190684;
        }
    }
L_00190680:;
    {
        cpu->r[14] = 0x00190684u; fn_0018ba60(cpu);
    }
L_00190684:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8cu);
    }
L_00190688:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019068c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00190694;
        }
    }
L_00190690:;
    {
        cpu->r[14] = 0x00190694u; fn_0018ba60(cpu);
    }
L_00190694:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x90u);
    }
L_00190698:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019069c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001906a4;
        }
    }
L_001906a0:;
    {
        cpu->r[14] = 0x001906a4u; fn_0018ba60(cpu);
    }
L_001906a4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x94u);
    }
L_001906a8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001906ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001906b4;
        }
    }
L_001906b0:;
    {
        cpu->r[14] = 0x001906b4u; fn_0018ba60(cpu);
    }
L_001906b4:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x98u);
    }
L_001906b8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001906bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001906d0;
        }
    }
L_001906c0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001906c4:;
    {
        cpu->r[14] = 0x001906c8u; fn_0018ebf0(cpu);
    }
L_001906c8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001906cc:;
    {
        cpu->r[14] = 0x001906d0u; fn_0018ba20(cpu);
    }
L_001906d0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x130u);
    }
L_001906d4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001906d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001906e0;
        }
    }
L_001906dc:;
    {
        cpu->r[14] = 0x001906e0u; fn_0018ba60(cpu);
    }
L_001906e0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x134u);
    }
L_001906e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001906e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001906f0;
        }
    }
L_001906ec:;
    {
        cpu->r[14] = 0x001906f0u; fn_0018ba60(cpu);
    }
L_001906f0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x138u);
    }
L_001906f4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001906f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00190700;
        }
    }
L_001906fc:;
    {
        cpu->r[14] = 0x00190700u; fn_0018ba60(cpu);
    }
L_00190700:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00190704:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00190708u)) return;
    }
}

/* _ZN9CarSoundsD2Ev @ 00190708 (arm) */
void fn_00190708(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00190708:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0019070c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00190710:;
    {
        cpu->r[14] = 0x00190714u; fn_0018ee78(cpu);
    }
L_00190714:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x5cu);
    }
L_00190718:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019071c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00190724;
        }
    }
L_00190720:;
    {
        cpu->r[14] = 0x00190724u; fn_0018ba60(cpu);
    }
L_00190724:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x60u);
    }
L_00190728:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019072c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00190734;
        }
    }
L_00190730:;
    {
        cpu->r[14] = 0x00190734u; fn_0018ba60(cpu);
    }
L_00190734:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x68u);
    }
L_00190738:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019073c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00190744;
        }
    }
L_00190740:;
    {
        cpu->r[14] = 0x00190744u; fn_0018ba60(cpu);
    }
L_00190744:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x6cu);
    }
L_00190748:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019074c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00190754;
        }
    }
L_00190750:;
    {
        cpu->r[14] = 0x00190754u; fn_0018ba60(cpu);
    }
L_00190754:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x70u);
    }
L_00190758:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019075c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00190764;
        }
    }
L_00190760:;
    {
        cpu->r[14] = 0x00190764u; fn_0018ba60(cpu);
    }
L_00190764:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x74u);
    }
L_00190768:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0019076c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00190780;
        }
    }
L_00190770:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00190774:;
    {
        cpu->r[14] = 0x00190778u; fn_0018ebf0(cpu);
    }
L_00190778:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0019077c:;
    {
        cpu->r[14] = 0x00190780u; fn_0018ba20(cpu);
    }
L_00190780:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x80u);
    }
L_00190784:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00190788:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00190790;
        }
    }
L_0019078c:;
    {
        cpu->r[14] = 0x00190790u; fn_0018ba60(cpu);
    }
L_00190790:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x84u);
    }
L_00190794:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00190798:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001907a0;
        }
    }
L_0019079c:;
    {
        cpu->r[14] = 0x001907a0u; fn_0018ba60(cpu);
    }
L_001907a0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8cu);
    }
L_001907a4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001907a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001907b0;
        }
    }
L_001907ac:;
    {
        cpu->r[14] = 0x001907b0u; fn_0018ba60(cpu);
    }
L_001907b0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x90u);
    }
L_001907b4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001907b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001907c0;
        }
    }
L_001907bc:;
    {
        cpu->r[14] = 0x001907c0u; fn_0018ba60(cpu);
    }
L_001907c0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x94u);
    }
L_001907c4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001907c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001907d0;
        }
    }
L_001907cc:;
    {
        cpu->r[14] = 0x001907d0u; fn_0018ba60(cpu);
    }
L_001907d0:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x98u);
    }
L_001907d4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001907d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001907ec;
        }
    }
L_001907dc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001907e0:;
    {
        cpu->r[14] = 0x001907e4u; fn_0018ebf0(cpu);
    }
L_001907e4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001907e8:;
    {
        cpu->r[14] = 0x001907ecu; fn_0018ba20(cpu);
    }
L_001907ec:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x130u);
    }
L_001907f0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001907f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001907fc;
        }
    }
L_001907f8:;
    {
        cpu->r[14] = 0x001907fcu; fn_0018ba60(cpu);
    }
L_001907fc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x134u);
    }
L_00190800:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00190804:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019080c;
        }
    }
L_00190808:;
    {
        cpu->r[14] = 0x0019080cu; fn_0018ba60(cpu);
    }
L_0019080c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x138u);
    }
L_00190810:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00190814:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019081c;
        }
    }
L_00190818:;
    {
        cpu->r[14] = 0x0019081cu; fn_0018ba60(cpu);
    }
L_0019081c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00190820:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00190824u)) return;
    }
}

/* _ZN9SoundFade5CleanEv @ 00190824 (arm) */
void fn_00190824(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00190824:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00190828:;
    {
        cpu->r[4] = rd32(0x00190830u + + 0x28u);
    }
L_0019082c:;
    {
        cpu->r[5] = rd32(0x00190834u + + 0x28u);
    }
L_00190830:;
    {
        cpu->r[4] = add_flags(cpu, 0x00190838u, cpu->r[4], 0, 0);
    }
L_00190834:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00190838:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0019083c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00190840:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00190848;
        }
    }
L_00190844:;
    {
        cpu->r[14] = 0x00190848u; fn_0018ba60(cpu);
    }
L_00190848:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_0019084c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00190850:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_00190854:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00190858u)) return;
    }
}

/* _ZN9CarSounds5CleanEv @ 00190860 (arm) */
void fn_00190860(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00190860:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00190864:;
    {
        cpu->r[14] = 0x00190868u; fn_00190824(cpu);
    }
L_00190868:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_0019086c:;
    {
        return fn_0019034c(cpu);
    }
}

/* _ZN18TurboSoundSettingsD1Ev @ 00190870 (arm) */
void fn_00190870(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00190870:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00190874:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00190878:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x40u);
    }
L_0019087c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00190880:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00190888;
        }
    }
L_00190884:;
    {
        cpu->r[14] = 0x00190888u; fn_0018ba60(cpu);
    }
L_00190888:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x44u);
    }
L_0019088c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00190890:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00190898;
        }
    }
L_00190894:;
    {
        cpu->r[14] = 0x00190898u; fn_0018ba60(cpu);
    }
L_00190898:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019089c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001908a0u)) return;
    }
}

/* _ZN18TurboSoundSettingsD2Ev @ 001908a0 (arm) */
void fn_001908a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001908a0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001908a4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001908a8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x40u);
    }
L_001908ac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001908b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001908b8;
        }
    }
L_001908b4:;
    {
        cpu->r[14] = 0x001908b8u; fn_0018ba60(cpu);
    }
L_001908b8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x44u);
    }
L_001908bc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001908c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001908c8;
        }
    }
L_001908c4:;
    {
        cpu->r[14] = 0x001908c8u; fn_0018ba60(cpu);
    }
L_001908c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001908cc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001908d0u)) return;
    }
}

/* _ZN16CarSoundSettingsD1Ev @ 001908d0 (arm) */
void fn_001908d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001908d0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001908d4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001908d8:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x24u);
    }
L_001908dc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001908e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001908e8;
        }
    }
L_001908e4:;
    {
        cpu->r[14] = 0x001908e8u; fn_0018ba60(cpu);
    }
L_001908e8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001908ec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001908f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001908f8;
        }
    }
L_001908f4:;
    {
        cpu->r[14] = 0x001908f8u; fn_0018ba60(cpu);
    }
L_001908f8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x30u);
    }
L_001908fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00190900:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00190908;
        }
    }
L_00190904:;
    {
        cpu->r[14] = 0x00190908u; fn_0018ba60(cpu);
    }
L_00190908:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x34u);
    }
L_0019090c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00190910:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00190918;
        }
    }
L_00190914:;
    {
        cpu->r[14] = 0x00190918u; fn_0018ba60(cpu);
    }
L_00190918:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x3cu);
    }
L_0019091c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00190920:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00190928;
        }
    }
L_00190924:;
    {
        cpu->r[14] = 0x00190928u; fn_0018ba60(cpu);
    }
L_00190928:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x44u);
    }
L_0019092c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00190930:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00190938;
        }
    }
L_00190934:;
    {
        cpu->r[14] = 0x00190938u; fn_0018ba60(cpu);
    }
L_00190938:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x48u);
    }
L_0019093c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00190940:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00190948;
        }
    }
L_00190944:;
    {
        cpu->r[14] = 0x00190948u; fn_0018ba60(cpu);
    }
L_00190948:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4cu);
    }
L_0019094c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00190950:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00190958;
        }
    }
L_00190954:;
    {
        cpu->r[14] = 0x00190958u; fn_0018ba60(cpu);
    }
L_00190958:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xccu);
    }
L_0019095c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00190960:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00190968;
        }
    }
L_00190964:;
    {
        cpu->r[14] = 0x00190968u; fn_0018ba60(cpu);
    }
L_00190968:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xd0u);
    }
L_0019096c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00190970:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00190978;
        }
    }
L_00190974:;
    {
        cpu->r[14] = 0x00190978u; fn_0018ba60(cpu);
    }
L_00190978:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019097c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00190980u)) return;
    }
}

/* _ZN16CarSoundSettingsD2Ev @ 00190980 (arm) */
void fn_00190980(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00190980:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00190984:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00190988:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x24u);
    }
L_0019098c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00190990:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00190998;
        }
    }
L_00190994:;
    {
        cpu->r[14] = 0x00190998u; fn_0018ba60(cpu);
    }
L_00190998:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x2cu);
    }
L_0019099c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001909a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001909a8;
        }
    }
L_001909a4:;
    {
        cpu->r[14] = 0x001909a8u; fn_0018ba60(cpu);
    }
L_001909a8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x30u);
    }
L_001909ac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001909b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001909b8;
        }
    }
L_001909b4:;
    {
        cpu->r[14] = 0x001909b8u; fn_0018ba60(cpu);
    }
L_001909b8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x34u);
    }
L_001909bc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001909c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001909c8;
        }
    }
L_001909c4:;
    {
        cpu->r[14] = 0x001909c8u; fn_0018ba60(cpu);
    }
L_001909c8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x3cu);
    }
L_001909cc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001909d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001909d8;
        }
    }
L_001909d4:;
    {
        cpu->r[14] = 0x001909d8u; fn_0018ba60(cpu);
    }
L_001909d8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x44u);
    }
L_001909dc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001909e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001909e8;
        }
    }
L_001909e4:;
    {
        cpu->r[14] = 0x001909e8u; fn_0018ba60(cpu);
    }
L_001909e8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x48u);
    }
L_001909ec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001909f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001909f8;
        }
    }
L_001909f4:;
    {
        cpu->r[14] = 0x001909f8u; fn_0018ba60(cpu);
    }
L_001909f8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4cu);
    }
L_001909fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00190a00:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00190a08;
        }
    }
L_00190a04:;
    {
        cpu->r[14] = 0x00190a08u; fn_0018ba60(cpu);
    }
L_00190a08:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xccu);
    }
L_00190a0c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00190a10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00190a18;
        }
    }
L_00190a14:;
    {
        cpu->r[14] = 0x00190a18u; fn_0018ba60(cpu);
    }
L_00190a18:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xd0u);
    }
L_00190a1c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00190a20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00190a28;
        }
    }
L_00190a24:;
    {
        cpu->r[14] = 0x00190a28u; fn_0018ba60(cpu);
    }
L_00190a28:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00190a2c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00190a30u)) return;
    }
}

/* _ZN9SoundFade13InitFadeGainsEi @ 00190a30 (arm) */
void fn_00190a30(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00190a30:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00190a34:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_00190a38:;
    {
        cpu->r[4] = rd32(0x00190a40u + + 0xa8u);
    }
L_00190a3c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00190a44u + + 0x90u);
    }
L_00190a40:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00190a44:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[2];
    }
L_00190a48:;
    {
        cpu->r[2] = rd32(0x00190a50u + + 0x9cu);
    }
L_00190a4c:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_00190a50:;
    {
        cpu->r[4] = add_flags(cpu, 0x00190a58u, cpu->r[4], 0, 0);
    }
L_00190a54:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], 0x00000002u, 0, 0);
    }
L_00190a58:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00190a5c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00190a60:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00190a64:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_00190a68:;
    {
        vfp_vdiv(cpu, 17, 14, 15);
    }
L_00190a6c:;
    {
        cpu->r[14] = 0x00190a70u; imp__Znaj(cpu); /* _Znaj */
    }
L_00190a70:;
    {
        cpu->r[3] = rd32(0x00190a78u + + 0x78u);
    }
L_00190a74:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00190a78:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00190a7c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00190a80:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_00190a84:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00190acc;
        }
    }
L_00190a88:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00190a8c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00190a94u + + 0x44u);
    }
L_00190a90:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x00190a98u + + 0x44u);
    }
L_00190a94:;
    {
        *vfp_s(cpu, 18) = *(float*)G(0x00190a9cu + + 0x44u);
    }
L_00190a98:;
    {
        *vfp_s(cpu, 19) = *(float*)G(0x00190aa0u + + 0x44u);
    }
L_00190a9c:;
    {
        goto L_00190ab0;
    }
L_00190aa0:;
    {
        vfp_vadd(cpu, 16, 16, 17);
    }
L_00190aa4:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,16);
    }
L_00190aa8:;
    {
        cpu->r[14] = 0x00190aacu; imp_sinf(cpu); /* sinf */
    }
L_00190aac:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_00190ab0:;
    {
        vfp_vadd(cpu, 15, 15, 18);
    }
L_00190ab4:;
    {
        vfp_vmul(cpu, 15, 15, 19);
    }
L_00190ab8:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00190abc:;
    {
        wr32(cpu->r[6] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[3]);
    }
L_00190ac0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00190ac4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[4], 1, 1);
    }
L_00190ac8:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00190aa0;
        }
    }
L_00190acc:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_00190ad0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00190ad4u)) return;
    }
}

/* _ZN9CarSounds23InitOnOffCrossFadeGainsEi @ 00190af4 (arm) */
void fn_00190af4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00190af4:;
    {
        cpu->r[3] = rd32(0x00190afcu + + 0x3cu);
    }
L_00190af8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00190afc:;
    {
        cpu->r[1] = rd32(0x00190b04u + + 0x38u);
    }
L_00190b00:;
    {
        cpu->r[2] = rd32(0x00190b08u + + 0x38u);
    }
L_00190b04:;
    {
        cpu->r[3] = add_flags(cpu, 0x00190b0cu, cpu->r[3], 0, 0);
    }
L_00190b08:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00190b0c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00190b10:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00190b14:;
    {
        wr8(cpu->r[2], cpu->r[1]);
    }
L_00190b18:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_00190b1c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00190b20:;
    {
        if (cond_test(cpu, 12)) {
        wr32(cpu->r[3], cpu->r[0]);
        }
    }
L_00190b24:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00190b34;
        }
    }
L_00190b28:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000064u, 1, 1);
    }
L_00190b2c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[0] = 0x00000064u;
        }
    }
L_00190b30:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[3], cpu->r[0]);
        }
    }
L_00190b34:;
    {
        return fn_00190a30(cpu);
    }
}

/* _ZN9CarSounds4InitEP16CarSoundSettings @ 00190b44 (arm) */
void fn_00190b44(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00190b44:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x8u);
    }
L_00190b48:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00190b50u + + 0x3f4u);
    }
L_00190b4c:;
    {
        cpu->r[3] = rd32(0x00190b54u + + 0x404u);
    }
L_00190b50:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00190b54:;
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
L_00190b58:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00190b5c:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[2]);
    }
L_00190b60:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0x10u);
    }
L_00190b64:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0xcu);
    }
L_00190b68:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00190b6c:;
    {
        cpu->r[1] = rd32(0x00190b74u + + 0x3e8u);
    }
L_00190b70:;
    {
        cpu->r[3] = add_flags(cpu, 0x00190b78u, cpu->r[3], 0, 0);
    }
L_00190b74:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00190b78:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00190b7c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00190b80:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00190b84:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[2]);
    }
L_00190b88:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[2]);
    }
L_00190b8c:;
    {
        cpu->r[1] = rd32(cpu->r[5]);
    }
L_00190b90:;
    {
        cpu->r[2] = rd8(cpu->r[0]);
    }
L_00190b94:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_00190b98:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_00190b9c:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[1]);
    }
L_00190ba0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00190ba4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x4u);
    }
L_00190ba8:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[2]);
    }
L_00190bac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00191098;
        }
    }
L_00190bb0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x18u);
    }
L_00190bb4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00190bb8:;
    {
        wr8(cpu->r[4] + + 0x54u, cpu->r[3]);
    }
L_00190bbc:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0xd8u);
    }
L_00190bc0:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[2]);
    }
L_00190bc4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x1cu);
    }
L_00190bc8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00190bcc:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0xdcu);
    }
L_00190bd0:;
    {
        wr8(cpu->r[4] + + 0x30u, cpu->r[3]);
    }
L_00190bd4:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[2]);
    }
L_00190bd8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x14u);
    }
L_00190bdc:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[1]);
    }
L_00190be0:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[3]);
    }
L_00190be4:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[3]);
    }
L_00190be8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019108c;
        }
    }
L_00190bec:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x20u);
    }
L_00190bf0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x28u);
    }
L_00190bf4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x64u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00190bf8:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[0]);
    }
L_00190bfc:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00190c00:;
    {
        cpu->r[14] = 0x00190c04u; imp__Znaj(cpu); /* _Znaj */
    }
L_00190c04:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x58u);
    }
L_00190c08:;
    {
        wr32(cpu->r[4] + + 0x5cu, cpu->r[0]);
    }
L_00190c0c:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00190c10:;
    {
        cpu->r[14] = 0x00190c14u; imp__Znaj(cpu); /* _Znaj */
    }
L_00190c14:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x58u);
    }
L_00190c18:;
    {
        wr32(cpu->r[4] + + 0x60u, cpu->r[0]);
    }
L_00190c1c:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00190c20:;
    {
        cpu->r[14] = 0x00190c24u; imp__Znaj(cpu); /* _Znaj */
    }
L_00190c24:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x58u);
    }
L_00190c28:;
    {
        wr32(cpu->r[4] + + 0x68u, cpu->r[0]);
    }
L_00190c2c:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00190c30:;
    {
        cpu->r[14] = 0x00190c34u; imp__Znaj(cpu); /* _Znaj */
    }
L_00190c34:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x58u);
    }
L_00190c38:;
    {
        wr32(cpu->r[4] + + 0x6cu, cpu->r[0]);
    }
L_00190c3c:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00190c40:;
    {
        cpu->r[14] = 0x00190c44u; imp__Znaj(cpu); /* _Znaj */
    }
L_00190c44:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x58u);
    }
L_00190c48:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00190c4c:;
    {
        wr32(cpu->r[4] + + 0x70u, cpu->r[0]);
    }
L_00190c50:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00190cc4;
        }
    }
L_00190c54:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x6cu);
    }
L_00190c58:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00190c5c:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x5cu);
    }
L_00190c60:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_00190c64:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x60u);
    }
L_00190c68:;
    {
        cpu->r[8] = (~0x00000000u);
    }
L_00190c6c:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x68u);
    }
L_00190c70:;
    {
        cpu->r[9] = rd32(cpu->r[5] + + 0x24u);
    }
L_00190c74:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x2cu);
    }
L_00190c78:;
    {
        cpu->r[14] = rd32(cpu->r[5] + + 0x30u);
    }
L_00190c7c:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x34u);
    }
L_00190c80:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00190c84:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00190c88:;
    {
        cpu->r[1] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_00190c8c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00190c90:;
    {
        wr32(cpu->r[11] + cpu->r[3], cpu->r[1]);
    }
L_00190c94:;
    {
        wr32(cpu->r[10] + cpu->r[3], cpu->r[8]);
    }
L_00190c98:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_00190c9c:;
    {
        wr32(cpu->r[7] + cpu->r[3], cpu->r[1]);
    }
L_00190ca0:;
    {
        cpu->r[1] = rd32(cpu->r[14] + cpu->r[3]);
    }
L_00190ca4:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[1]);
    }
L_00190ca8:;
    {
        cpu->r[1] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_00190cac:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[1]);
    }
L_00190cb0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00190cb4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x58u);
    }
L_00190cb8:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_00190cbc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00190c88;
        }
    }
L_00190cc0:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x4u);
    }
L_00190cc4:;
    {
        cpu->r[0] = 0x0000000cu;
    }
L_00190cc8:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00190ccc:;
    {
        cpu->r[14] = 0x00190cd0u; fn_0018ba6c(cpu);
    }
L_00190cd0:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00190cd4:;
    {
        cpu->r[14] = 0x00190cd8u; fn_0018ebdc(cpu);
    }
L_00190cd8:;
    {
        wr32(cpu->r[4] + + 0x78u, cpu->r[6]);
    }
L_00190cdc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x40u);
    }
L_00190ce0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x38u);
    }
L_00190ce4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x88u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00190ce8:;
    {
        wr32(cpu->r[4] + + 0x74u, cpu->r[7]);
    }
L_00190cec:;
    {
        wr32(cpu->r[4] + + 0x7cu, cpu->r[0]);
    }
L_00190cf0:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00190cf4:;
    {
        cpu->r[14] = 0x00190cf8u; imp__Znaj(cpu); /* _Znaj */
    }
L_00190cf8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x7cu);
    }
L_00190cfc:;
    {
        wr32(cpu->r[4] + + 0x80u, cpu->r[0]);
    }
L_00190d00:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00190d04:;
    {
        cpu->r[14] = 0x00190d08u; imp__Znaj(cpu); /* _Znaj */
    }
L_00190d08:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x7cu);
    }
L_00190d0c:;
    {
        wr32(cpu->r[4] + + 0x84u, cpu->r[0]);
    }
L_00190d10:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00190d14:;
    {
        cpu->r[14] = 0x00190d18u; imp__Znaj(cpu); /* _Znaj */
    }
L_00190d18:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x7cu);
    }
L_00190d1c:;
    {
        wr32(cpu->r[4] + + 0x8cu, cpu->r[0]);
    }
L_00190d20:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00190d24:;
    {
        cpu->r[14] = 0x00190d28u; imp__Znaj(cpu); /* _Znaj */
    }
L_00190d28:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x7cu);
    }
L_00190d2c:;
    {
        wr32(cpu->r[4] + + 0x90u, cpu->r[0]);
    }
L_00190d30:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00190d34:;
    {
        cpu->r[14] = 0x00190d38u; imp__Znaj(cpu); /* _Znaj */
    }
L_00190d38:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x7cu);
    }
L_00190d3c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_00190d40:;
    {
        wr32(cpu->r[4] + + 0x94u, cpu->r[0]);
    }
L_00190d44:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00190db8;
        }
    }
L_00190d48:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x90u);
    }
L_00190d4c:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00190d50:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x80u);
    }
L_00190d54:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00190d58:;
    {
        cpu->r[10] = rd32(cpu->r[4] + + 0x84u);
    }
L_00190d5c:;
    {
        cpu->r[8] = (~0x00000000u);
    }
L_00190d60:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x8cu);
    }
L_00190d64:;
    {
        cpu->r[9] = rd32(cpu->r[5] + + 0x3cu);
    }
L_00190d68:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x44u);
    }
L_00190d6c:;
    {
        cpu->r[14] = rd32(cpu->r[5] + + 0x48u);
    }
L_00190d70:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x4cu);
    }
L_00190d74:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[5]);
    }
L_00190d78:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00190d7c:;
    {
        cpu->r[1] = rd32(cpu->r[9] + cpu->r[3]);
    }
L_00190d80:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00190d84:;
    {
        wr32(cpu->r[11] + cpu->r[3], cpu->r[1]);
    }
L_00190d88:;
    {
        wr32(cpu->r[10] + cpu->r[3], cpu->r[8]);
    }
L_00190d8c:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_00190d90:;
    {
        wr32(cpu->r[7] + cpu->r[3], cpu->r[1]);
    }
L_00190d94:;
    {
        cpu->r[1] = rd32(cpu->r[14] + cpu->r[3]);
    }
L_00190d98:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[1]);
    }
L_00190d9c:;
    {
        cpu->r[1] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_00190da0:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[1]);
    }
L_00190da4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00190da8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x7cu);
    }
L_00190dac:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_00190db0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00190d7c;
        }
    }
L_00190db4:;
    {
        cpu->r[5] = rd32(cpu->r[13] + + 0x4u);
    }
L_00190db8:;
    {
        cpu->r[0] = 0x0000000cu;
    }
L_00190dbc:;
    {
        cpu->r[14] = 0x00190dc0u; fn_0018ba6c(cpu);
    }
L_00190dc0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00190dc4:;
    {
        cpu->r[14] = 0x00190dc8u; fn_0018ebdc(cpu);
    }
L_00190dc8:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x50u);
    }
L_00190dcc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00190dd0:;
    {
        wr32(cpu->r[4] + + 0x98u, cpu->r[6]);
    }
L_00190dd4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00190dd8:;
    {
        wr32(cpu->r[4] + + 0x9cu, cpu->r[2]);
    }
L_00190ddc:;
    {
        wr8(cpu->r[4] + + 0xa0u, cpu->r[3]);
    }
L_00190de0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00190e3c;
        }
    }
L_00190de4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x54u);
    }
L_00190de8:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_00190dec:;
    {
        wr32(cpu->r[4] + + 0xa8u, cpu->r[2]);
    }
L_00190df0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x58u);
    }
L_00190df4:;
    {
        cpu->r[2] = rd8(cpu->r[5] + + 0x51u);
    }
L_00190df8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xacu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00190dfc:;
    {
        wr32(cpu->r[4] + + 0xa4u, cpu->r[3]);
    }
L_00190e00:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x6cu);
    }
L_00190e04:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x5cu);
    }
L_00190e08:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xc0u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00190e0c:;
    {
        wr8(cpu->r[4] + + 0xa1u, cpu->r[2]);
    }
L_00190e10:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x70u);
    }
L_00190e14:;
    {
        cpu->r[2] = rd8(cpu->r[5] + + 0x52u);
    }
L_00190e18:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xc4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00190e1c:;
    {
        wr32(cpu->r[4] + + 0xb0u, cpu->r[3]);
    }
L_00190e20:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x60u);
    }
L_00190e24:;
    {
        wr8(cpu->r[4] + + 0xa2u, cpu->r[2]);
    }
L_00190e28:;
    {
        wr32(cpu->r[4] + + 0xb4u, cpu->r[3]);
    }
L_00190e2c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x64u);
    }
L_00190e30:;
    {
        wr32(cpu->r[4] + + 0xb8u, cpu->r[3]);
    }
L_00190e34:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x68u);
    }
L_00190e38:;
    {
        wr32(cpu->r[4] + + 0xbcu, cpu->r[3]);
    }
L_00190e3c:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x74u);
    }
L_00190e40:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00190e44:;
    {
        wr8(cpu->r[4] + + 0xc8u, cpu->r[3]);
    }
L_00190e48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00190e6c;
        }
    }
L_00190e4c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x78u);
    }
L_00190e50:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00190e54:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x7cu);
    }
L_00190e58:;
    {
        wr8(cpu->r[4] + + 0xc9u, cpu->r[2]);
    }
L_00190e5c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xd4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00190e60:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_00190e64:;
    {
        wr32(cpu->r[4] + + 0xccu, cpu->r[3]);
    }
L_00190e68:;
    {
        wr32(cpu->r[4] + + 0xd0u, cpu->r[2]);
    }
L_00190e6c:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x80u);
    }
L_00190e70:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00190e74:;
    {
        wr8(cpu->r[4] + + 0xd8u, cpu->r[3]);
    }
L_00190e78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00190e94;
        }
    }
L_00190e7c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x84u);
    }
L_00190e80:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_00190e84:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x88u);
    }
L_00190e88:;
    {
        wr32(cpu->r[4] + + 0xe0u, cpu->r[2]);
    }
L_00190e8c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0xe4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00190e90:;
    {
        wr32(cpu->r[4] + + 0xdcu, cpu->r[3]);
    }
L_00190e94:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x8cu);
    }
L_00190e98:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00190e9c:;
    {
        wr8(cpu->r[4] + + 0xe8u, cpu->r[3]);
    }
L_00190ea0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00191044;
        }
    }
L_00190ea4:;
    {
        cpu->r[2] = rd8(cpu->r[5] + + 0xb4u);
    }
L_00190ea8:;
    {
        wr8(cpu->r[4] + + 0x114u, cpu->r[2]);
    }
L_00190eac:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x8du);
    }
L_00190eb0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00190eb4:;
    {
        wr8(cpu->r[4] + + 0xe9u, cpu->r[3]);
    }
L_00190eb8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00191054;
        }
    }
L_00190ebc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x18u);
    }
L_00190ec0:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[1];
    }
L_00190ec4:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00190ec8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00190ed0u + + 0x78u);
    }
L_00190ecc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x1cu);
    }
L_00190ed0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00190ed4:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x124u, cpu->r[1]);
        }
    }
L_00190ed8:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x128u, cpu->r[3]);
        }
    }
L_00190edc:;
    {
        wr32(cpu->r[4] + + 0xecu, cpu->r[0]);
    }
L_00190ee0:;
    {
        vfp_vmul(cpu, 13, 15, 14);
    }
L_00190ee4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00190eecu + + 0x60u);
    }
L_00190ee8:;
    {
        vfp_vmul(cpu, 12, 15, 14);
    }
L_00190eec:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00190ef4u + + 0x5cu);
    }
L_00190ef0:;
    {
        vfp_vmul(cpu, 14, 15, 14);
    }
L_00190ef4:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,12);
    }
L_00190ef8:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_00190efc:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x104u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00190f00:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,13);
    }
L_00190f04:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x10cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00190f08:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x110u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00190f0c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0xa0u);
    }
L_00190f10:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00190f18u + + 0x3cu);
    }
L_00190f14:;
    {
        vfp_vsub(cpu, 15, 14, 15);
    }
L_00190f18:;
    {
        cpu->r[1] = rd8(cpu->r[4] + + 0x114u);
    }
L_00190f1c:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x9cu);
    }
L_00190f20:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_00190f24:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00190f28:;
    {
        wr32(cpu->r[4] + + 0xfcu, cpu->r[3]);
    }
L_00190f2c:;
    {
        wr32(cpu->r[4] + + 0xf8u, cpu->r[2]);
    }
L_00190f30:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = rd32(cpu->r[5] + + 0xb8u);
        }
    }
L_00190f34:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x11cu, cpu->r[3]);
        }
    }
L_00190f38:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x118u, cpu->r[2]);
        }
    }
L_00190f3c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xc8u);
    }
L_00190f40:;
    {
        goto L_00190f64;
    }
L_00190f64:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x100u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00190f68:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0xa8u);
    }
L_00190f6c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x108u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00190f70:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0xbcu);
        }
    }
L_00190f74:;
    {
        if (cond_test(cpu, 2)) {
        *(uint32_t*)G(cpu->r[4] + + 0x120u) = *(uint32_t*)vfp_s(cpu, 15);
        }
    }
L_00190f78:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00190f7c:;
    {
        wr32(cpu->r[4] + + 0x12cu, cpu->r[0]);
    }
L_00190f80:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00191044;
        }
    }
L_00190f84:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00190f88:;
    {
        cpu->r[14] = 0x00190f8cu; imp__Znaj(cpu); /* _Znaj */
    }
L_00190f8c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x12cu);
    }
L_00190f90:;
    {
        wr32(cpu->r[4] + + 0x130u, cpu->r[0]);
    }
L_00190f94:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00190f98:;
    {
        cpu->r[14] = 0x00190f9cu; imp__Znaj(cpu); /* _Znaj */
    }
L_00190f9c:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x12cu);
    }
L_00190fa0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00190fa4:;
    {
        wr32(cpu->r[4] + + 0x134u, cpu->r[0]);
    }
L_00190fa8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00190fe0;
        }
    }
L_00190fac:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00190fb0:;
    {
        cpu->r[7] = rd32(cpu->r[4] + + 0x130u);
    }
L_00190fb4:;
    {
        cpu->r[14] = rd32(cpu->r[5] + + 0xccu);
    }
L_00190fb8:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_00190fbc:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_00190fc0:;
    {
        cpu->r[1] = rd32(cpu->r[14] + cpu->r[3]);
    }
L_00190fc4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00190fc8:;
    {
        wr32(cpu->r[7] + cpu->r[3], cpu->r[1]);
    }
L_00190fcc:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[12]);
    }
L_00190fd0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00190fd4:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x12cu);
    }
L_00190fd8:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[2], 1, 1);
    }
L_00190fdc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00190fc0;
        }
    }
L_00190fe0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00190fe4:;
    {
        uint32_t v = shifter(cpu->r[7], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00190fe8:;
    {
        cpu->r[14] = 0x00190fecu; imp__Znaj(cpu); /* _Znaj */
    }
L_00190fec:;
    {
        cpu->r[3] = rd8(cpu->r[5] + + 0x94u);
    }
L_00190ff0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00190ff4:;
    {
        wr8(cpu->r[4] + + 0xf0u, cpu->r[3]);
    }
L_00190ff8:;
    {
        wr32(cpu->r[4] + + 0x138u, cpu->r[0]);
    }
L_00190ffc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001910ac;
        }
    }
L_00191000:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x98u);
    }
L_00191004:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_00191008:;
    {
        wr32(cpu->r[4] + + 0xf4u, cpu->r[3]);
    }
L_0019100c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0019103c;
        }
    }
L_00191010:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00191014:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0xd0u);
    }
L_00191018:;
    {
        cpu->r[2] = cpu->r[3];
    }
L_0019101c:;
    {
        goto L_00191024;
    }
L_00191020:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x138u);
    }
L_00191024:;
    {
        cpu->r[1] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_00191028:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[6], 1, 1);
    }
L_0019102c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00191030:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[1]);
    }
L_00191034:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00191038:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00191020;
        }
    }
L_0019103c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0xd4u);
    }
L_00191040:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x13cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00191044:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00191048:;
    {
        wr8(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_0019104c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00191050:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00191054u)) return;
    }
L_00191054:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x90u);
    }
L_00191058:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0019105c:;
    {
        wr32(cpu->r[4] + + 0xecu, cpu->r[3]);
    }
L_00191060:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xacu);
    }
L_00191064:;
    {
        wr32(cpu->r[4] + + 0x10cu, cpu->r[3]);
    }
L_00191068:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xb0u);
    }
L_0019106c:;
    {
        wr32(cpu->r[4] + + 0x110u, cpu->r[3]);
    }
L_00191070:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xa4u);
    }
L_00191074:;
    {
        wr32(cpu->r[4] + + 0x104u, cpu->r[3]);
    }
L_00191078:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[5] + + 0xc0u);
        }
    }
L_0019107c:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x124u, cpu->r[3]);
        }
    }
L_00191080:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[5] + + 0xc4u);
        }
    }
L_00191084:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x128u, cpu->r[3]);
        }
    }
L_00191088:;
    {
        goto L_00190f0c;
    }
L_0019108c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00191090:;
    {
        cpu->r[14] = 0x00191094u; fn_001902c8(cpu);
    }
L_00191094:;
    {
        goto L_00190bec;
    }
L_00191098:;
    {
        cpu->r[2] = rd32(0x001910a0u + - 0x140u);
    }
L_0019109c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001910a0:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_001910a4:;
    {
        cpu->r[14] = 0x001910a8u; fn_00190af4(cpu);
    }
L_001910a8:;
    {
        goto L_00190bb0;
    }
L_001910ac:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x1cu);
    }
L_001910b0:;
    {
        wr32(cpu->r[4] + + 0xf4u, cpu->r[2]);
    }
L_001910b4:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_001910b8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x12cu);
    }
L_001910bc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x18u);
    }
L_001910c0:;
    {
        wr32(cpu->r[0] + shifter(cpu->r[2], 2, 2u, &shc), cpu->r[1]);
    }
L_001910c4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x18u);
    }
L_001910c8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x12cu);
    }
L_001910cc:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_001910d0:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[2];
    }
L_001910d4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_001910d8:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_001910dc:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_001910e0:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_001910e4:;
    {
        cpu->r[6] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001910e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019103c;
        }
    }
L_001910ec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_001910f0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_001910f4:;
    {
        cpu->r[12] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001910f8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_001910fc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_00191100:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], cpu->r[6], 1, 0);
    }
L_00191104:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000004u, 1, 0);
    }
L_00191108:;
    {
        wr32(cpu->r[1] + - 0x4u, cpu->r[12]);
    }
L_0019110c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001910f0;
        }
    }
L_00191110:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0xd4u);
    }
L_00191114:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x13cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00191118:;
    {
        goto L_00191044;
    }
}

/* _ZN6CSound14CacheSoundFileEv @ 0019111c (arm) */
void fn_0019111c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019111c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6CSound12CacheBuffersEv @ 00191120 (arm) */
void fn_00191120(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00191120:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6CSound7ReleaseEv @ 00191124 (arm) */
void fn_00191124(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00191124:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x14u);
    }
L_00191128:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0019112c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00191130:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
        }
    }
L_00191134:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6CSoundD1Ev @ 00191138 (arm) */
void fn_00191138(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00191138:;
    {
        cpu->r[3] = rd32(0x00191140u + + 0x24u);
    }
L_0019113c:;
    {
        cpu->r[2] = rd32(0x00191144u + + 0x24u);
    }
L_00191140:;
    {
        cpu->r[3] = add_flags(cpu, 0x00191148u, cpu->r[3], 0, 0);
    }
L_00191144:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00191148:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0019114c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00191150:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00191154:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00191158:;
    {
        cpu->r[14] = 0x0019115cu; fn_00191124(cpu);
    }
L_0019115c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00191160:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00191164u)) return;
    }
}

/* _ZN6CSoundD2Ev @ 0019116c (arm) */
void fn_0019116c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019116c:;
    {
        cpu->r[3] = rd32(0x00191174u + + 0x24u);
    }
L_00191170:;
    {
        cpu->r[2] = rd32(0x00191178u + + 0x24u);
    }
L_00191174:;
    {
        cpu->r[3] = add_flags(cpu, 0x0019117cu, cpu->r[3], 0, 0);
    }
L_00191178:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0019117c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00191180:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00191184:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00191188:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_0019118c:;
    {
        cpu->r[14] = 0x00191190u; fn_00191124(cpu);
    }
L_00191190:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00191194:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00191198u)) return;
    }
}

/* _ZNK6CSound9GetStatusEv @ 001911a0 (arm) */
void fn_001911a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001911a0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x10u);
    }
L_001911a4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6CSound4PlayEbfi @ 001911a8 (arm) */
void fn_001911a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001911a8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001911ac:;
    {
        wr8(cpu->r[0] + + 0x9u, cpu->r[1]);
    }
L_001911b0:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + + 0x24u, cpu->r[3]);
        }
    }
L_001911b4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_001911b8:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_001911bc:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + + 0x20u, cpu->r[3]);
        }
    }
L_001911c0:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[3]);
        }
    }
L_001911c4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001911c8:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_001911cc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6CSound4StopEi @ 001911d0 (arm) */
void fn_001911d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001911d0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001911d4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001911ec;
        }
    }
L_001911d8:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001911dc:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[1]);
    }
L_001911e0:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[3]);
    }
L_001911e4:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[1]);
    }
L_001911e8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001911ec:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x10u);
    }
L_001911f0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_001911f4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000002u;
        }
    }
L_001911f8:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
        }
    }
L_001911fc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6CSound5PauseEv @ 00191200 (arm) */
void fn_00191200(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00191200:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00191204:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_00191208:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6CSound6ResumeEv @ 0019120c (arm) */
void fn_0019120c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019120c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00191210:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_00191214:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6CSound11SetPositionEPKf @ 00191218 (arm) */
void fn_00191218(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00191218:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6CSound11SetVelocityEPKf @ 0019121c (arm) */
void fn_0019121c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019121c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK6CSound17GetAbsoluteVolumeEv @ 00191220 (arm) */
void fn_00191220(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00191220:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x1cu);
    }
L_00191224:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0xcu);
    }
L_00191228:;
    {
        cpu->r[3] = rd32(0x00191230u + + 0x38u);
    }
L_0019122c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00191230:;
    {
        cpu->r[2] = rd32(0x00191238u + + 0x34u);
    }
L_00191234:;
    {
        cpu->r[3] = add_flags(cpu, 0x0019123cu, cpu->r[3], 0, 0);
    }
L_00191238:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0019123c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_00191240:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_00191244:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00191260;
        }
    }
L_00191248:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x20u);
    }
L_0019124c:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00191250:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x24u);
    }
L_00191254:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_00191258:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0019125c:;
    {
        vfp_vdiv(cpu, 15, 14, 15);
    }
L_00191260:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00191264:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6CSound18GetProcessedBufferEv @ 00191270 (arm) */
void fn_00191270(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00191270:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00191274:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6CSound9SetVolumeEf @ 00191278 (arm) */
void fn_00191278(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00191278:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6CSound8SetPitchEf @ 0019127c (arm) */
void fn_0019127c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019127c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6CSound17QueueStreamBufferEPcii @ 00191280 (arm) */
void fn_00191280(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00191280:;
    {
        add_flags(cpu, cpu->r[2], 0x00000001u, 0, 1);
    }
L_00191284:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00191288:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_0019128c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00191290:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00191294:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_00191298:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_0019129c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00191324;
        }
    }
L_001912a0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001912a4:;
    {
        cpu->r[6] = rd32(cpu->r[0] + + 0x4u);
    }
L_001912a8:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001912fc;
        }
    }
L_001912ac:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x2cu);
    }
L_001912b0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001912b4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = cpu->r[6];
        }
    }
L_001912b8:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001912fc;
        }
    }
L_001912bc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[6], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_001912c0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x1cu);
    }
L_001912c4:;
    {
        cpu->r[14] = rd32(cpu->r[3] + + 0x10u);
    }
L_001912c8:;
    {
        cpu->r[1] = 0x00001101u;
    }
L_001912cc:;
    {
        cpu->r[12] = rd32(cpu->r[3] + + 0xcu);
    }
L_001912d0:;
    {
        cpu->r[3] = 0x00001103u;
    }
L_001912d4:;
    {
        sub_flags(cpu, cpu->r[14], 0x00000001u, 1, 1);
    }
L_001912d8:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001912dc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = cpu->r[3];
        }
    }
L_001912e0:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_001912e4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001912e8:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_001912ec:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001912f0:;
    {
        cpu->r[14] = 0x001912f4u; fn_001914dc(cpu);
    }
L_001912f4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001912f8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001912fcu)) return;
    }
L_001912fc:;
    {
        cpu->r[0] = rd32(0x00191304u + + 0x38u);
    }
L_00191300:;
    {
        cpu->r[2] = 0x00000031u;
    }
L_00191304:;
    {
        cpu->r[1] = rd32(0x0019130cu + + 0x34u);
    }
L_00191308:;
    {
        cpu->r[3] = rd32(0x00191310u + + 0x34u);
    }
L_0019130c:;
    {
        cpu->r[0] = add_flags(cpu, 0x00191314u, cpu->r[0], 0, 0);
    }
L_00191310:;
    {
        cpu->r[1] = add_flags(cpu, 0x00191318u, cpu->r[1], 0, 0);
    }
L_00191314:;
    {
        cpu->r[3] = add_flags(cpu, 0x0019131cu, cpu->r[3], 0, 0);
    }
L_00191318:;
    {
        cpu->r[14] = 0x0019131cu; imp_printf(cpu); /* printf */
    }
L_0019131c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_00191320:;
    {
        goto L_001912bc;
    }
L_00191324:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x18u);
    }
L_00191328:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0019132c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x4u);
    }
L_00191330:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00191334:;
    {
        wr32(cpu->r[5] + + 0x18u, cpu->r[2]);
    }
L_00191338:;
    {
        goto L_001912c4;
    }
}

/* _ZN6CSound6UpdateEi @ 00191348 (arm) */
void fn_00191348(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00191348:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x14u);
    }
L_0019134c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00191350:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00191354:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00191358u)) return;
        }
    }
L_00191358:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x10u);
    }
L_0019135c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00191360:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00191378;
        }
    }
L_00191364:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00191368:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_0019136c:;
    {
        cpu->r[14] = 0x00191374u;
    }
L_00191370:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00191374u)) return;
    }
L_00191374:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00191378u)) return;
    }
L_00191378:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000002u, 1, 1);
    }
L_0019137c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = rd32(cpu->r[0] + + 0x2cu);
        }
    }
L_00191380:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 0);
        }
    }
L_00191384:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[1]);
        }
    }
L_00191388:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019138cu)) return;
    }
}

/* _ZN6CSound4InitEv @ 0019138c (arm) */
void fn_0019138c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019138c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00191390:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x14u);
    }
L_00191394:;
    {
        cpu->r[3] = rd32(0x0019139cu + + 0x44u);
    }
L_00191398:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019139c:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001913a0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001913a8u, cpu->r[3], 0, 0);
    }
L_001913a4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001913a8u)) return;
        }
    }
L_001913a8:;
    {
        cpu->r[2] = rd32(0x001913b0u + + 0x34u);
    }
L_001913ac:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001913b0:;
    {
        cpu->r[14] = 0x001913b4u; fn_001930dc(cpu);
    }
L_001913b4:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_001913b8:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[5]);
    }
L_001913bc:;
    {
        wr8(cpu->r[4] + + 0x9u, cpu->r[5]);
    }
L_001913c0:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_001913c4:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[5]);
    }
L_001913c8:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[5]);
    }
L_001913cc:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[5]);
    }
L_001913d0:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[5]);
    }
L_001913d4:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[5]);
    }
L_001913d8:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[0]);
    }
L_001913dc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001913e0u)) return;
    }
}

/* _ZN6CSoundC1EP10CSoundDatabb @ 001913e8 (arm) */
void fn_001913e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001913e8:;
    {
        cpu->r[12] = rd32(0x001913f0u + + 0x44u);
    }
L_001913ec:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001913f0:;
    {
        cpu->r[2] = rd32(0x001913f8u + + 0x40u);
    }
L_001913f4:;
    {
        cpu->r[12] = add_flags(cpu, 0x001913fcu, cpu->r[12], 0, 0);
    }
L_001913f8:;
    {
        wr8(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_001913fc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00191400:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_00191404:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_00191408:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0019140c:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_00191410:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00191414:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00191418:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_0019141c:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_00191420:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00191424:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019142c;
        }
    }
L_00191428:;
    {
        cpu->r[14] = 0x0019142cu; fn_0019138c(cpu);
    }
L_0019142c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00191430:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00191434u)) return;
    }
}

/* _ZN6CSoundC2EP10CSoundDatabb @ 0019143c (arm) */
void fn_0019143c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019143c:;
    {
        cpu->r[12] = rd32(0x00191444u + + 0x44u);
    }
L_00191440:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00191444:;
    {
        cpu->r[2] = rd32(0x0019144cu + + 0x40u);
    }
L_00191448:;
    {
        cpu->r[12] = add_flags(cpu, 0x00191450u, cpu->r[12], 0, 0);
    }
L_0019144c:;
    {
        wr8(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_00191450:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00191454:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_00191458:;
    {
        cpu->r[3] = 0x00000003u;
    }
L_0019145c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00191460:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[3]);
    }
L_00191464:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00191468:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0019146c:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_00191470:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_00191474:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00191478:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00191480;
        }
    }
L_0019147c:;
    {
        cpu->r[14] = 0x00191480u; fn_0019138c(cpu);
    }
L_00191480:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00191484:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00191488u)) return;
    }
}

/* _ZN6CSoundD0Ev @ 00191490 (arm) */
void fn_00191490(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00191490:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00191494:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00191498:;
    {
        cpu->r[14] = 0x0019149cu; fn_00191138(cpu);
    }
L_0019149c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001914a0:;
    {
        cpu->r[14] = 0x001914a4u; fn_0018ba20(cpu);
    }
L_001914a4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001914a8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001914acu)) return;
    }
}

/* _ZN10CSoundData13InitALBuffersEi @ 001914ac (arm) */
void fn_001914ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001914ac:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10CSoundData16ReleaseALBuffersEv @ 001914b0 (arm) */
void fn_001914b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001914b0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10CSoundDataD1Ev @ 001914b4 (arm) */
void fn_001914b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001914b4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001914b8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001914bc:;
    {
        cpu->r[14] = 0x001914c0u; fn_001914b0(cpu);
    }
L_001914c0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001914c4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001914c8u)) return;
    }
}

/* _ZN10CSoundDataD2Ev @ 001914c8 (arm) */
void fn_001914c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001914c8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001914cc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001914d0:;
    {
        cpu->r[14] = 0x001914d4u; fn_001914b0(cpu);
    }
L_001914d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001914d8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001914dcu)) return;
    }
}

/* _ZN10CSoundData16UploadBufferDataEiiPviib @ 001914dc (arm) */
void fn_001914dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001914dc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10CSoundDataC1EiiiiiiPci @ 001914e0 (arm) */
void fn_001914e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001914e0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001914e4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001914e8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001914ec:;
    {
        { uint32_t v = cpu->r[1] & 0x00000001u; set_nz(cpu, v); }
    }
L_001914f0:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[2]);
        wr32(ea + 4u, cpu->r[3]);
    }
L_001914f4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_001914f8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001914fc:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_00191500:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_00191504:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[0]);
    }
L_00191508:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_0019150c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_00191510:;
    {
        wr32(cpu->r[4], cpu->r[1]);
    }
L_00191514:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_00191518:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0019151c:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_00191520:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00191584;
        }
    }
L_00191524:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_00191528:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001915f4;
        }
    }
L_0019152c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00191530:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00191534:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[1]);
    }
L_00191538:;
    {
        cpu->r[14] = 0x0019153cu; fn_001914ac(cpu);
    }
L_0019153c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_00191540:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x14u);
    }
L_00191544:;
    {
        cpu->r[0] = 0x00001101u;
    }
L_00191548:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0019154c:;
    {
        cpu->r[1] = 0x00001103u;
    }
L_00191550:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = cpu->r[0];
        }
    }
L_00191554:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000008u, 1, 1);
    }
L_00191558:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001915c0;
        }
    }
L_0019155c:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_00191560:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_00191564:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x1cu);
    }
L_00191568:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x18u);
    }
L_0019156c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_00191570:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00191574:;
    {
        cpu->r[14] = 0x00191578u; fn_001914dc(cpu);
    }
L_00191578:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019157c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00191580:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00191584u)) return;
    }
L_00191584:;
    {
        { uint32_t v = cpu->r[1] & 0x00000002u; set_nz(cpu, v); }
    }
L_00191588:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001915d0;
        }
    }
L_0019158c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00191590:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001915b4;
        }
    }
L_00191594:;
    {
        cpu->r[0] = rd32(0x0019159cu + + 0x7cu);
    }
L_00191598:;
    {
        cpu->r[2] = 0x0000003cu;
    }
L_0019159c:;
    {
        cpu->r[1] = rd32(0x001915a4u + + 0x78u);
    }
L_001915a0:;
    {
        cpu->r[3] = rd32(0x001915a8u + + 0x78u);
    }
L_001915a4:;
    {
        cpu->r[0] = add_flags(cpu, 0x001915acu, cpu->r[0], 0, 0);
    }
L_001915a8:;
    {
        cpu->r[1] = add_flags(cpu, 0x001915b0u, cpu->r[1], 0, 0);
    }
L_001915ac:;
    {
        cpu->r[3] = add_flags(cpu, 0x001915b4u, cpu->r[3], 0, 0);
    }
L_001915b0:;
    {
        cpu->r[14] = 0x001915b4u; imp_printf(cpu); /* printf */
    }
L_001915b4:;
    {
        cpu->r[3] = 0x00000004u;
    }
L_001915b8:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_001915bc:;
    {
        goto L_00191578;
    }
L_001915c0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001915c4:;
    {
        cpu->r[1] = 0x00001102u;
    }
L_001915c8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00001100u;
        }
    }
L_001915cc:;
    {
        goto L_0019155c;
    }
L_001915d0:;
    {
        cpu->r[0] = rd32(0x001915d8u + + 0x4cu);
    }
L_001915d4:;
    {
        cpu->r[2] = 0x00000044u;
    }
L_001915d8:;
    {
        cpu->r[1] = rd32(0x001915e0u + + 0x48u);
    }
L_001915dc:;
    {
        cpu->r[3] = rd32(0x001915e4u + + 0x48u);
    }
L_001915e0:;
    {
        cpu->r[0] = add_flags(cpu, 0x001915e8u, cpu->r[0], 0, 0);
    }
L_001915e4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001915ecu, cpu->r[1], 0, 0);
    }
L_001915e8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001915f0u, cpu->r[3], 0, 0);
    }
L_001915ec:;
    {
        cpu->r[14] = 0x001915f0u; imp_printf(cpu); /* printf */
    }
L_001915f0:;
    {
        goto L_00191578;
    }
L_001915f4:;
    {
        cpu->r[0] = rd32(0x001915fcu + + 0x34u);
    }
L_001915f8:;
    {
        cpu->r[2] = 0x00000030u;
    }
L_001915fc:;
    {
        cpu->r[1] = rd32(0x00191604u + + 0x30u);
    }
L_00191600:;
    {
        cpu->r[3] = rd32(0x00191608u + + 0x30u);
    }
L_00191604:;
    {
        cpu->r[0] = add_flags(cpu, 0x0019160cu, cpu->r[0], 0, 0);
    }
L_00191608:;
    {
        cpu->r[1] = add_flags(cpu, 0x00191610u, cpu->r[1], 0, 0);
    }
L_0019160c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00191614u, cpu->r[3], 0, 0);
    }
L_00191610:;
    {
        cpu->r[14] = 0x00191614u; imp_printf(cpu); /* printf */
    }
L_00191614:;
    {
        goto L_0019152c;
    }
}

/* _ZN10CSoundDataC2EiiiiiiPci @ 0019163c (arm) */
void fn_0019163c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019163c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00191640:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00191644:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00191648:;
    {
        { uint32_t v = cpu->r[1] & 0x00000001u; set_nz(cpu, v); }
    }
L_0019164c:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[2]);
        wr32(ea + 4u, cpu->r[3]);
    }
L_00191650:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_00191654:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00191658:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_0019165c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x14u);
    }
L_00191660:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[0]);
    }
L_00191664:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_00191668:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_0019166c:;
    {
        wr32(cpu->r[4], cpu->r[1]);
    }
L_00191670:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_00191674:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00191678:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_0019167c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001916e0;
        }
    }
L_00191680:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_00191684:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00191750;
        }
    }
L_00191688:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0019168c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00191690:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[1]);
    }
L_00191694:;
    {
        cpu->r[14] = 0x00191698u; fn_001914ac(cpu);
    }
L_00191698:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_0019169c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x14u);
    }
L_001916a0:;
    {
        cpu->r[0] = 0x00001101u;
    }
L_001916a4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001916a8:;
    {
        cpu->r[1] = 0x00001103u;
    }
L_001916ac:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = cpu->r[0];
        }
    }
L_001916b0:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000008u, 1, 1);
    }
L_001916b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019171c;
        }
    }
L_001916b8:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_001916bc:;
    {
        cpu->r[14] = 0x00000000u;
    }
L_001916c0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x1cu);
    }
L_001916c4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x18u);
    }
L_001916c8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x20u);
    }
L_001916cc:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_001916d0:;
    {
        cpu->r[14] = 0x001916d4u; fn_001914dc(cpu);
    }
L_001916d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001916d8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001916dc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001916e0u)) return;
    }
L_001916e0:;
    {
        { uint32_t v = cpu->r[1] & 0x00000002u; set_nz(cpu, v); }
    }
L_001916e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019172c;
        }
    }
L_001916e8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001916ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00191710;
        }
    }
L_001916f0:;
    {
        cpu->r[0] = rd32(0x001916f8u + + 0x7cu);
    }
L_001916f4:;
    {
        cpu->r[2] = 0x0000003cu;
    }
L_001916f8:;
    {
        cpu->r[1] = rd32(0x00191700u + + 0x78u);
    }
L_001916fc:;
    {
        cpu->r[3] = rd32(0x00191704u + + 0x78u);
    }
L_00191700:;
    {
        cpu->r[0] = add_flags(cpu, 0x00191708u, cpu->r[0], 0, 0);
    }
L_00191704:;
    {
        cpu->r[1] = add_flags(cpu, 0x0019170cu, cpu->r[1], 0, 0);
    }
L_00191708:;
    {
        cpu->r[3] = add_flags(cpu, 0x00191710u, cpu->r[3], 0, 0);
    }
L_0019170c:;
    {
        cpu->r[14] = 0x00191710u; imp_printf(cpu); /* printf */
    }
L_00191710:;
    {
        cpu->r[3] = 0x00000004u;
    }
L_00191714:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_00191718:;
    {
        goto L_001916d4;
    }
L_0019171c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00191720:;
    {
        cpu->r[1] = 0x00001102u;
    }
L_00191724:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00001100u;
        }
    }
L_00191728:;
    {
        goto L_001916b8;
    }
L_0019172c:;
    {
        cpu->r[0] = rd32(0x00191734u + + 0x4cu);
    }
L_00191730:;
    {
        cpu->r[2] = 0x00000044u;
    }
L_00191734:;
    {
        cpu->r[1] = rd32(0x0019173cu + + 0x48u);
    }
L_00191738:;
    {
        cpu->r[3] = rd32(0x00191740u + + 0x48u);
    }
L_0019173c:;
    {
        cpu->r[0] = add_flags(cpu, 0x00191744u, cpu->r[0], 0, 0);
    }
L_00191740:;
    {
        cpu->r[1] = add_flags(cpu, 0x00191748u, cpu->r[1], 0, 0);
    }
L_00191744:;
    {
        cpu->r[3] = add_flags(cpu, 0x0019174cu, cpu->r[3], 0, 0);
    }
L_00191748:;
    {
        cpu->r[14] = 0x0019174cu; imp_printf(cpu); /* printf */
    }
L_0019174c:;
    {
        goto L_001916d4;
    }
L_00191750:;
    {
        cpu->r[0] = rd32(0x00191758u + + 0x34u);
    }
L_00191754:;
    {
        cpu->r[2] = 0x00000030u;
    }
L_00191758:;
    {
        cpu->r[1] = rd32(0x00191760u + + 0x30u);
    }
L_0019175c:;
    {
        cpu->r[3] = rd32(0x00191764u + + 0x30u);
    }
L_00191760:;
    {
        cpu->r[0] = add_flags(cpu, 0x00191768u, cpu->r[0], 0, 0);
    }
L_00191764:;
    {
        cpu->r[1] = add_flags(cpu, 0x0019176cu, cpu->r[1], 0, 0);
    }
L_00191768:;
    {
        cpu->r[3] = add_flags(cpu, 0x00191770u, cpu->r[3], 0, 0);
    }
L_0019176c:;
    {
        cpu->r[14] = 0x00191770u; imp_printf(cpu); /* printf */
    }
L_00191770:;
    {
        goto L_00191688;
    }
}

/* _ZN11StaticSoundD1Ev @ 00191798 (arm) */
void fn_00191798(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00191798:;
    {
        cpu->r[3] = rd32(0x001917a0u + + 0x24u);
    }
L_0019179c:;
    {
        cpu->r[2] = rd32(0x001917a4u + + 0x24u);
    }
L_001917a0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001917a8u, cpu->r[3], 0, 0);
    }
L_001917a4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001917a8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001917ac:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001917b0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001917b4:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001917b8:;
    {
        cpu->r[14] = 0x001917bcu; fn_0019116c(cpu);
    }
L_001917bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001917c0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001917c4u)) return;
    }
}

/* _ZN11StaticSoundD0Ev @ 001917cc (arm) */
void fn_001917cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001917cc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001917d0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001917d4:;
    {
        cpu->r[14] = 0x001917d8u; fn_00191798(cpu);
    }
L_001917d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001917dc:;
    {
        cpu->r[14] = 0x001917e0u; fn_0018ba20(cpu);
    }
L_001917e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001917e4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001917e8u)) return;
    }
}

/* _ZN11StaticSoundD2Ev @ 001917e8 (arm) */
void fn_001917e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001917e8:;
    {
        cpu->r[3] = rd32(0x001917f0u + + 0x24u);
    }
L_001917ec:;
    {
        cpu->r[2] = rd32(0x001917f4u + + 0x24u);
    }
L_001917f0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001917f8u, cpu->r[3], 0, 0);
    }
L_001917f4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001917f8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001917fc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00191800:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00191804:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00191808:;
    {
        cpu->r[14] = 0x0019180cu; fn_0019116c(cpu);
    }
L_0019180c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00191810:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00191814u)) return;
    }
}

/* _ZN11StaticSoundC1EP10CSoundDatab @ 0019181c (arm) */
void fn_0019181c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019181c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00191820:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00191824:;
    {
        cpu->r[4] = rd32(0x0019182cu + + 0x20u);
    }
L_00191828:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0019182c:;
    {
        cpu->r[14] = 0x00191830u; fn_0019143c(cpu);
    }
L_00191830:;
    {
        cpu->r[3] = rd32(0x00191838u + + 0x18u);
    }
L_00191834:;
    {
        cpu->r[4] = add_flags(cpu, 0x0019183cu, cpu->r[4], 0, 0);
    }
L_00191838:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0019183c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00191840:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00191844:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_00191848:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0019184cu)) return;
    }
}

/* _ZN11StaticSoundC2EP10CSoundDatab @ 00191854 (arm) */
void fn_00191854(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00191854:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00191858:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0019185c:;
    {
        cpu->r[4] = rd32(0x00191864u + + 0x20u);
    }
L_00191860:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00191864:;
    {
        cpu->r[14] = 0x00191868u; fn_0019143c(cpu);
    }
L_00191868:;
    {
        cpu->r[3] = rd32(0x00191870u + + 0x18u);
    }
L_0019186c:;
    {
        cpu->r[4] = add_flags(cpu, 0x00191874u, cpu->r[4], 0, 0);
    }
L_00191870:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00191874:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00191878:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0019187c:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_00191880:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00191884u)) return;
    }
}

/* _ZN13ISoundDecoderD1Ev @ 0019188c (arm) */
void fn_0019188c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019188c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13ISoundDecoder22GetNumSamplesPerDecodeEi @ 00191890 (arm) */
void fn_00191890(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00191890:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00191894:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK13ISoundDecoder15GetSamplingRateEv @ 00191898 (arm) */
void fn_00191898(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00191898:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_0019189c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK13ISoundDecoder10GetChannelEv @ 001918a0 (arm) */
void fn_001918a0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001918a0:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001918a4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK13ISoundDecoder10GetPCMSizeEv @ 001918a8 (arm) */
void fn_001918a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001918a8:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001918ac:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK13ISoundDecoder21GetNbEffectiveSamplesEv @ 001918b0 (arm) */
void fn_001918b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001918b0:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001918b4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK13ISoundDecoder15GetTotalSamplesEv @ 001918b8 (arm) */
void fn_001918b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001918b8:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001918bc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK13ISoundDecoder9GetBitsNoEv @ 001918c0 (arm) */
void fn_001918c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001918c0:;
    {
        cpu->r[0] = (~0x00000000u);
    }
L_001918c4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13ISoundDecoder9CacheFileEv @ 001918c8 (arm) */
void fn_001918c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001918c8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK18CSoundDecoderMSWAV15GetSamplingRateEv @ 001918cc (arm) */
void fn_001918cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001918cc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_001918d0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001918d4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001918d8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_001918dc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001918e0u)) return;
        }
    }
L_001918e0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001918e4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001918e8:;
    {
        cpu->r[14] = 0x001918f0u;
    }
L_001918ec:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001918f0u)) return;
    }
L_001918f0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001918f4u)) return;
    }
}

/* _ZNK18CSoundDecoderMSWAV10GetChannelEv @ 001918f4 (arm) */
void fn_001918f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001918f4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_001918f8:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001918fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00191900:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_00191904:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00191908u)) return;
        }
    }
L_00191908:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0019190c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00191910:;
    {
        cpu->r[14] = 0x00191918u;
    }
L_00191914:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00191918u)) return;
    }
L_00191918:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019191cu)) return;
    }
}

/* _ZNK18CSoundDecoderMSWAV10GetPCMSizeEv @ 0019191c (arm) */
void fn_0019191c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019191c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_00191920:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00191924:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00191928:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_0019192c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00191930u)) return;
        }
    }
L_00191930:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00191934:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00191938:;
    {
        cpu->r[14] = 0x00191940u;
    }
L_0019193c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00191940u)) return;
    }
L_00191940:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00191944u)) return;
    }
}

/* _ZNK18CSoundDecoderMSWAV21GetNbEffectiveSamplesEv @ 00191944 (arm) */
void fn_00191944(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00191944:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_00191948:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0019194c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00191950:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_00191954:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00191958u)) return;
        }
    }
L_00191958:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0019195c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00191960:;
    {
        cpu->r[14] = 0x00191968u;
    }
L_00191964:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x20u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00191968u)) return;
    }
L_00191968:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0019196cu)) return;
    }
}

/* _ZNK18CSoundDecoderMSWAV15GetTotalSamplesEv @ 0019196c (arm) */
void fn_0019196c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019196c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_00191970:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00191974:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00191978:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_0019197c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00191980u)) return;
        }
    }
L_00191980:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00191984:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00191988:;
    {
        cpu->r[14] = 0x00191990u;
    }
L_0019198c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00191990u)) return;
    }
L_00191990:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00191994u)) return;
    }
}

/* _ZN18CSoundDecoderMSWAVC2Eii @ 00191994 (arm) */
void fn_00191994(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00191994:;
    {
        cpu->r[1] = rd32(0x0019199cu + + 0x70u);
    }
L_00191998:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019199c:;
    {
        cpu->r[12] = rd32(0x001919a4u + + 0x6cu);
    }
L_001919a0:;
    {
        cpu->r[1] = add_flags(cpu, 0x001919a8u, cpu->r[1], 0, 0);
    }
L_001919a4:;
    {
        wr16(cpu->r[0] + + 0x2eu, cpu->r[2]);
    }
L_001919a8:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_001919ac:;
    {
        cpu->r[12] = rd32(cpu->r[1] + cpu->r[12]);
    }
L_001919b0:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_001919b4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_001919b8:;
    {
        wr8(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_001919bc:;
    {
        wr32(cpu->r[0], cpu->r[12]);
    }
L_001919c0:;
    {
        wr8(cpu->r[0] + + 0xdu, cpu->r[2]);
    }
L_001919c4:;
    {
        wr8(cpu->r[0] + + 0xeu, cpu->r[2]);
    }
L_001919c8:;
    {
        wr8(cpu->r[0] + + 0xfu, cpu->r[2]);
    }
L_001919cc:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_001919d0:;
    {
        wr8(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_001919d4:;
    {
        wr8(cpu->r[0] + + 0x15u, cpu->r[2]);
    }
L_001919d8:;
    {
        wr8(cpu->r[0] + + 0x16u, cpu->r[2]);
    }
L_001919dc:;
    {
        wr8(cpu->r[0] + + 0x17u, cpu->r[2]);
    }
L_001919e0:;
    {
        wr8(cpu->r[0] + + 0x18u, cpu->r[2]);
    }
L_001919e4:;
    {
        wr8(cpu->r[0] + + 0x19u, cpu->r[2]);
    }
L_001919e8:;
    {
        wr8(cpu->r[0] + + 0x1au, cpu->r[2]);
    }
L_001919ec:;
    {
        wr8(cpu->r[0] + + 0x1bu, cpu->r[2]);
    }
L_001919f0:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[2]);
    }
L_001919f4:;
    {
        wr16(cpu->r[0] + + 0x20u, cpu->r[2]);
    }
L_001919f8:;
    {
        wr16(cpu->r[0] + + 0x22u, cpu->r[2]);
    }
L_001919fc:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[2]);
    }
L_00191a00:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[2]);
    }
L_00191a04:;
    {
        wr16(cpu->r[0] + + 0x2cu, cpu->r[2]);
    }
L_00191a08:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN18CSoundDecoderMSWAVC1Eii @ 00191a14 (arm) */
void fn_00191a14(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00191a14:;
    {
        cpu->r[1] = rd32(0x00191a1cu + + 0x70u);
    }
L_00191a18:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00191a1c:;
    {
        cpu->r[12] = rd32(0x00191a24u + + 0x6cu);
    }
L_00191a20:;
    {
        cpu->r[1] = add_flags(cpu, 0x00191a28u, cpu->r[1], 0, 0);
    }
L_00191a24:;
    {
        wr16(cpu->r[0] + + 0x2eu, cpu->r[2]);
    }
L_00191a28:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_00191a2c:;
    {
        cpu->r[12] = rd32(cpu->r[1] + cpu->r[12]);
    }
L_00191a30:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_00191a34:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_00191a38:;
    {
        wr8(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_00191a3c:;
    {
        wr32(cpu->r[0], cpu->r[12]);
    }
L_00191a40:;
    {
        wr8(cpu->r[0] + + 0xdu, cpu->r[2]);
    }
L_00191a44:;
    {
        wr8(cpu->r[0] + + 0xeu, cpu->r[2]);
    }
L_00191a48:;
    {
        wr8(cpu->r[0] + + 0xfu, cpu->r[2]);
    }
L_00191a4c:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_00191a50:;
    {
        wr8(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_00191a54:;
    {
        wr8(cpu->r[0] + + 0x15u, cpu->r[2]);
    }
L_00191a58:;
    {
        wr8(cpu->r[0] + + 0x16u, cpu->r[2]);
    }
L_00191a5c:;
    {
        wr8(cpu->r[0] + + 0x17u, cpu->r[2]);
    }
L_00191a60:;
    {
        wr8(cpu->r[0] + + 0x18u, cpu->r[2]);
    }
L_00191a64:;
    {
        wr8(cpu->r[0] + + 0x19u, cpu->r[2]);
    }
L_00191a68:;
    {
        wr8(cpu->r[0] + + 0x1au, cpu->r[2]);
    }
L_00191a6c:;
    {
        wr8(cpu->r[0] + + 0x1bu, cpu->r[2]);
    }
L_00191a70:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[2]);
    }
L_00191a74:;
    {
        wr16(cpu->r[0] + + 0x20u, cpu->r[2]);
    }
L_00191a78:;
    {
        wr16(cpu->r[0] + + 0x22u, cpu->r[2]);
    }
L_00191a7c:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[2]);
    }
L_00191a80:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[2]);
    }
L_00191a84:;
    {
        wr16(cpu->r[0] + + 0x2cu, cpu->r[2]);
    }
L_00191a88:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN18CSoundDecoderMSWAVD2Ev @ 00191a94 (arm) */
void fn_00191a94(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00191a94:;
    {
        cpu->r[2] = rd32(0x00191a9cu + + 0x58u);
    }
L_00191a98:;
    {
        cpu->r[1] = rd32(0x00191aa0u + + 0x58u);
    }
L_00191a9c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00191aa4u, cpu->r[2], 0, 0);
    }
L_00191aa0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_00191aa4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00191aa8:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_00191aac:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00191ab0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00191ab4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_00191ab8:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_00191abc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00191ad0;
        }
    }
L_00191ac0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00191ac4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00191ac8:;
    {
        cpu->r[14] = 0x00191ad0u;
    }
L_00191acc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00191ad0u)) return;
    }
L_00191ad0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_00191ad4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00191ad8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00191aec;
        }
    }
L_00191adc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00191ae0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00191ae4:;
    {
        cpu->r[14] = 0x00191aecu;
    }
L_00191ae8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00191aecu)) return;
    }
L_00191aec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00191af0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00191af4u)) return;
    }
}

/* _ZN18CSoundDecoderMSWAVD1Ev @ 00191afc (arm) */
void fn_00191afc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00191afc:;
    {
        cpu->r[2] = rd32(0x00191b04u + + 0x58u);
    }
L_00191b00:;
    {
        cpu->r[1] = rd32(0x00191b08u + + 0x58u);
    }
L_00191b04:;
    {
        cpu->r[2] = add_flags(cpu, 0x00191b0cu, cpu->r[2], 0, 0);
    }
L_00191b08:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_00191b0c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00191b10:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_00191b14:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00191b18:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00191b1c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_00191b20:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_00191b24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00191b38;
        }
    }
L_00191b28:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00191b2c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00191b30:;
    {
        cpu->r[14] = 0x00191b38u;
    }
L_00191b34:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00191b38u)) return;
    }
L_00191b38:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_00191b3c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00191b40:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00191b54;
        }
    }
L_00191b44:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00191b48:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00191b4c:;
    {
        cpu->r[14] = 0x00191b54u;
    }
L_00191b50:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00191b54u)) return;
    }
L_00191b54:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00191b58:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00191b5cu)) return;
    }
}

/* _ZN18CSoundDecoderMSWAV9CacheFileEv @ 00191b64 (arm) */
void fn_00191b64(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00191b64:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00191b68:;
    {
        cpu->r[7] = rd32(0x00191b70u + + 0x90u);
    }
L_00191b6c:;
    {
        cpu->r[8] = rd32(0x00191b74u + + 0x90u);
    }
L_00191b70:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00001000u, 1, 0);
    }
L_00191b74:;
    {
        cpu->r[7] = add_flags(cpu, 0x00191b7cu, cpu->r[7], 0, 0);
    }
L_00191b78:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00191b7c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00191b80:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00001000u, 0, 0);
    }
L_00191b84:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_00191b88:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00191b8c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 0);
    }
L_00191b90:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00191b94:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00191b98:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[3]);
    }
L_00191b9c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_00191ba0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00191ba4:;
    {
        cpu->r[2] = 0x00001000u;
    }
L_00191ba8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00191bac:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00191bb0:;
    {
        cpu->r[14] = 0x00191bb8u;
    }
L_00191bb4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00191bb8u)) return;
    }
L_00191bb8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[0], 0, 0);
    }
L_00191bbc:;
    {
        sub_flags(cpu, cpu->r[4], 0x00400000u, 1, 1);
    }
L_00191bc0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00191bc4:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_00191bc8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00191bcc:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00191bd0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00191bd4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00191b9c;
        }
    }
L_00191bd8:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[8]);
    }
L_00191bdc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00001000u, 0, 0);
    }
L_00191be0:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0x4u);
    }
L_00191be4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00191be8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00191bec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00191bfc;
        }
    }
L_00191bf0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00191bf4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00001000u, 0, 0);
    }
L_00191bf8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00191bfcu)) return;
    }
L_00191bfc:;
    {
        cpu->r[14] = 0x00191c00u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_00191c00:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[12] * cpu->r[8]; cpu->r[11] = v;
        }
    }
L_00191c04:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
}

/* _ZNK18CSoundDecoderMSWAV9GetBitsNoEv @ 00191c08 (arm) */
void fn_00191c08(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00191c08:;
    {
        cpu->r[0] = rd16(cpu->r[0] + + 0x2eu);
    }
L_00191c0c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN18CSoundDecoderMSWAV6DecodeEPsib @ 00191c10 (arm) */
void fn_00191c10(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00191c10:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x4u);
    }
L_00191c14:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00191c18:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00191c1c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[12];
        }
    }
L_00191c20:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00191c24u)) return;
        }
    }
L_00191c24:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_00191c28:;
    {
        cpu->r[12] = rd32(cpu->r[12]);
    }
L_00191c2c:;
    {
        cpu->r[14] = 0x00191c34u;
    }
L_00191c30:;
    {
        uint32_t t = rd32(cpu->r[12] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00191c34u)) return;
    }
L_00191c34:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00191c38u)) return;
    }
}

/* _ZN18CSoundDecoderMSWAV4GoToEi @ 00191c38 (arm) */
void fn_00191c38(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00191c38:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_00191c3c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00191c40:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00191c44:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00191c48u)) return;
        }
    }
L_00191c48:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00191c4c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00191c50:;
    {
        cpu->r[14] = 0x00191c58u;
    }
L_00191c54:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00191c58u)) return;
    }
L_00191c58:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00191c5cu)) return;
    }
}

/* _ZN18CSoundDecoderMSWAV22GetNumSamplesPerDecodeEi @ 00191c5c (arm) */
void fn_00191c5c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00191c5c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_00191c60:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00191c64:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00191c68:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = cpu->r[3];
        }
    }
L_00191c6c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00191c70u)) return;
        }
    }
L_00191c70:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00191c74:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00191c78:;
    {
        cpu->r[14] = 0x00191c80u;
    }
L_00191c7c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x10u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00191c80u)) return;
    }
L_00191c80:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00191c84u)) return;
    }
}

/* _ZN18CSoundDecoderMSWAVD0Ev @ 00191c84 (arm) */
void fn_00191c84(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00191c84:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00191c88:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00191c8c:;
    {
        cpu->r[14] = 0x00191c90u; fn_00191afc(cpu);
    }
L_00191c90:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00191c94:;
    {
        cpu->r[14] = 0x00191c98u; fn_0018ba20(cpu);
    }
L_00191c98:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00191c9c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00191ca0u)) return;
    }
}

/* _ZN13ISoundDecoderD0Ev @ 00191ca0 (arm) */
void fn_00191ca0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00191ca0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00191ca4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00191ca8:;
    {
        cpu->r[14] = 0x00191cacu; fn_0018ba20(cpu);
    }
L_00191cac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00191cb0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00191cb4u)) return;
    }
}

/* _ZN18CSoundDecoderMSWAVC1EPc @ 00191cb4 (arm) */
void fn_00191cb4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00191cb4:;
    {
        cpu->r[2] = rd32(0x00191cbcu + + 0x16cu);
    }
L_00191cb8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00191cbc:;
    {
        cpu->r[12] = rd32(0x00191cc4u + + 0x168u);
    }
L_00191cc0:;
    {
        cpu->r[2] = add_flags(cpu, 0x00191cc8u, cpu->r[2], 0, 0);
    }
L_00191cc4:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00191cc8:;
    {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[12]);
    }
L_00191ccc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00191cd0:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00191cd4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_00191cd8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00191cdc:;
    {
        wr16(cpu->r[4] + + 0x2eu, cpu->r[3]);
    }
L_00191ce0:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_00191ce4:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_00191ce8:;
    {
        wr8(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_00191cec:;
    {
        wr8(cpu->r[4] + + 0xdu, cpu->r[3]);
    }
L_00191cf0:;
    {
        wr8(cpu->r[4] + + 0xeu, cpu->r[3]);
    }
L_00191cf4:;
    {
        wr8(cpu->r[4] + + 0xfu, cpu->r[3]);
    }
L_00191cf8:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_00191cfc:;
    {
        wr8(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_00191d00:;
    {
        wr8(cpu->r[4] + + 0x15u, cpu->r[3]);
    }
L_00191d04:;
    {
        wr8(cpu->r[4] + + 0x16u, cpu->r[3]);
    }
L_00191d08:;
    {
        wr8(cpu->r[4] + + 0x17u, cpu->r[3]);
    }
L_00191d0c:;
    {
        wr8(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_00191d10:;
    {
        wr8(cpu->r[4] + + 0x19u, cpu->r[3]);
    }
L_00191d14:;
    {
        wr8(cpu->r[4] + + 0x1au, cpu->r[3]);
    }
L_00191d18:;
    {
        wr8(cpu->r[4] + + 0x1bu, cpu->r[3]);
    }
L_00191d1c:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[3]);
    }
L_00191d20:;
    {
        wr16(cpu->r[4] + + 0x20u, cpu->r[3]);
    }
L_00191d24:;
    {
        wr16(cpu->r[4] + + 0x22u, cpu->r[3]);
    }
L_00191d28:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_00191d2c:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_00191d30:;
    {
        wr16(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_00191d34:;
    {
        wr32(cpu->r[4], cpu->r[12]);
    }
L_00191d38:;
    {
        cpu->r[14] = 0x00191d3cu; fn_000fc960(cpu);
    }
L_00191d3c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00191d40:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00191d44:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_00191d48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00191e00;
        }
    }
L_00191d4c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], 0x0000000cu, 0, 0);
    }
L_00191d50:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00191d54:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00191d58:;
    {
        cpu->r[2] = 0x0000000cu;
    }
L_00191d5c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00191d60:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[4], 0x00000018u, 0, 0);
    }
L_00191d64:;
    {
        cpu->r[14] = 0x00191d6cu;
    }
L_00191d68:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00191d6cu)) return;
    }
L_00191d6c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_00191d70:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00191d74:;
    {
        cpu->r[2] = 0x00000018u;
    }
L_00191d78:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00191d7c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00191d80:;
    {
        cpu->r[14] = 0x00191d88u;
    }
L_00191d84:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00191d88u)) return;
    }
L_00191d88:;
    {
        cpu->r[1] = rd16(cpu->r[4] + + 0x20u);
    }
L_00191d8c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_00191d90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00191db0;
        }
    }
L_00191d94:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000011u, 1, 1);
    }
L_00191d98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00191dd8;
        }
    }
L_00191d9c:;
    {
        cpu->r[0] = rd32(0x00191da4u + + 0x8cu);
    }
L_00191da0:;
    {
        cpu->r[0] = add_flags(cpu, 0x00191da8u, cpu->r[0], 0, 0);
    }
L_00191da4:;
    {
        cpu->r[14] = 0x00191da8u; imp_printf(cpu); /* printf */
    }
L_00191da8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00191dac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00191db0u)) return;
    }
L_00191db0:;
    {
        cpu->r[0] = 0x00000028u;
    }
L_00191db4:;
    {
        cpu->r[14] = 0x00191db8u; fn_0018ba6c(cpu);
    }
L_00191db8:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00191dbc:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00191dc0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8u);
    }
L_00191dc4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00191dc8:;
    {
        cpu->r[14] = 0x00191dccu; fn_00192ef0(cpu);
    }
L_00191dcc:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[5]);
    }
L_00191dd0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00191dd4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00191dd8u)) return;
    }
L_00191dd8:;
    {
        cpu->r[0] = 0x0000005cu;
    }
L_00191ddc:;
    {
        cpu->r[14] = 0x00191de0u; fn_0018ba6c(cpu);
    }
L_00191de0:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00191de4:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00191de8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8u);
    }
L_00191dec:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00191df0:;
    {
        cpu->r[14] = 0x00191df4u; fn_00192240(cpu);
    }
L_00191df4:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[5]);
    }
L_00191df8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00191dfc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00191e00u)) return;
    }
L_00191e00:;
    {
        cpu->r[0] = rd32(0x00191e08u + + 0x2cu);
    }
L_00191e04:;
    {
        cpu->r[2] = 0x00000036u;
    }
L_00191e08:;
    {
        cpu->r[1] = rd32(0x00191e10u + + 0x28u);
    }
L_00191e0c:;
    {
        cpu->r[3] = rd32(0x00191e14u + + 0x28u);
    }
L_00191e10:;
    {
        cpu->r[0] = add_flags(cpu, 0x00191e18u, cpu->r[0], 0, 0);
    }
L_00191e14:;
    {
        cpu->r[1] = add_flags(cpu, 0x00191e1cu, cpu->r[1], 0, 0);
    }
L_00191e18:;
    {
        cpu->r[3] = add_flags(cpu, 0x00191e20u, cpu->r[3], 0, 0);
    }
L_00191e1c:;
    {
        cpu->r[14] = 0x00191e20u; imp_printf(cpu); /* printf */
    }
L_00191e20:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_00191e24:;
    {
        goto L_00191d4c;
    }
}

/* _ZN18CSoundDecoderMSWAVC2EPc @ 00191e40 (arm) */
void fn_00191e40(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00191e40:;
    {
        cpu->r[2] = rd32(0x00191e48u + + 0x16cu);
    }
L_00191e44:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00191e48:;
    {
        cpu->r[12] = rd32(0x00191e50u + + 0x168u);
    }
L_00191e4c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00191e54u, cpu->r[2], 0, 0);
    }
L_00191e50:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00191e54:;
    {
        cpu->r[12] = rd32(cpu->r[2] + cpu->r[12]);
    }
L_00191e58:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00191e5c:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00191e60:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000008u, 0, 0);
    }
L_00191e64:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00191e68:;
    {
        wr16(cpu->r[4] + + 0x2eu, cpu->r[3]);
    }
L_00191e6c:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[3]);
    }
L_00191e70:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_00191e74:;
    {
        wr8(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_00191e78:;
    {
        wr8(cpu->r[4] + + 0xdu, cpu->r[3]);
    }
L_00191e7c:;
    {
        wr8(cpu->r[4] + + 0xeu, cpu->r[3]);
    }
L_00191e80:;
    {
        wr8(cpu->r[4] + + 0xfu, cpu->r[3]);
    }
L_00191e84:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_00191e88:;
    {
        wr8(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_00191e8c:;
    {
        wr8(cpu->r[4] + + 0x15u, cpu->r[3]);
    }
L_00191e90:;
    {
        wr8(cpu->r[4] + + 0x16u, cpu->r[3]);
    }
L_00191e94:;
    {
        wr8(cpu->r[4] + + 0x17u, cpu->r[3]);
    }
L_00191e98:;
    {
        wr8(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_00191e9c:;
    {
        wr8(cpu->r[4] + + 0x19u, cpu->r[3]);
    }
L_00191ea0:;
    {
        wr8(cpu->r[4] + + 0x1au, cpu->r[3]);
    }
L_00191ea4:;
    {
        wr8(cpu->r[4] + + 0x1bu, cpu->r[3]);
    }
L_00191ea8:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[3]);
    }
L_00191eac:;
    {
        wr16(cpu->r[4] + + 0x20u, cpu->r[3]);
    }
L_00191eb0:;
    {
        wr16(cpu->r[4] + + 0x22u, cpu->r[3]);
    }
L_00191eb4:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_00191eb8:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_00191ebc:;
    {
        wr16(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_00191ec0:;
    {
        wr32(cpu->r[4], cpu->r[12]);
    }
L_00191ec4:;
    {
        cpu->r[14] = 0x00191ec8u; fn_000fc960(cpu);
    }
L_00191ec8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00191ecc:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00191ed0:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_00191ed4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00191f8c;
        }
    }
L_00191ed8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], 0x0000000cu, 0, 0);
    }
L_00191edc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00191ee0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00191ee4:;
    {
        cpu->r[2] = 0x0000000cu;
    }
L_00191ee8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00191eec:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[4], 0x00000018u, 0, 0);
    }
L_00191ef0:;
    {
        cpu->r[14] = 0x00191ef8u;
    }
L_00191ef4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00191ef8u)) return;
    }
L_00191ef8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_00191efc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00191f00:;
    {
        cpu->r[2] = 0x00000018u;
    }
L_00191f04:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00191f08:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00191f0c:;
    {
        cpu->r[14] = 0x00191f14u;
    }
L_00191f10:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00191f14u)) return;
    }
L_00191f14:;
    {
        cpu->r[1] = rd16(cpu->r[4] + + 0x20u);
    }
L_00191f18:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_00191f1c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00191f3c;
        }
    }
L_00191f20:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000011u, 1, 1);
    }
L_00191f24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00191f64;
        }
    }
L_00191f28:;
    {
        cpu->r[0] = rd32(0x00191f30u + + 0x8cu);
    }
L_00191f2c:;
    {
        cpu->r[0] = add_flags(cpu, 0x00191f34u, cpu->r[0], 0, 0);
    }
L_00191f30:;
    {
        cpu->r[14] = 0x00191f34u; imp_printf(cpu); /* printf */
    }
L_00191f34:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00191f38:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00191f3cu)) return;
    }
L_00191f3c:;
    {
        cpu->r[0] = 0x00000028u;
    }
L_00191f40:;
    {
        cpu->r[14] = 0x00191f44u; fn_0018ba6c(cpu);
    }
L_00191f44:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00191f48:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00191f4c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8u);
    }
L_00191f50:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00191f54:;
    {
        cpu->r[14] = 0x00191f58u; fn_00192ef0(cpu);
    }
L_00191f58:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[5]);
    }
L_00191f5c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00191f60:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00191f64u)) return;
    }
L_00191f64:;
    {
        cpu->r[0] = 0x0000005cu;
    }
L_00191f68:;
    {
        cpu->r[14] = 0x00191f6cu; fn_0018ba6c(cpu);
    }
L_00191f6c:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00191f70:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00191f74:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8u);
    }
L_00191f78:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00191f7c:;
    {
        cpu->r[14] = 0x00191f80u; fn_00192240(cpu);
    }
L_00191f80:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[5]);
    }
L_00191f84:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00191f88:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00191f8cu)) return;
    }
L_00191f8c:;
    {
        cpu->r[0] = rd32(0x00191f94u + + 0x2cu);
    }
L_00191f90:;
    {
        cpu->r[2] = 0x00000036u;
    }
L_00191f94:;
    {
        cpu->r[1] = rd32(0x00191f9cu + + 0x28u);
    }
L_00191f98:;
    {
        cpu->r[3] = rd32(0x00191fa0u + + 0x28u);
    }
L_00191f9c:;
    {
        cpu->r[0] = add_flags(cpu, 0x00191fa4u, cpu->r[0], 0, 0);
    }
L_00191fa0:;
    {
        cpu->r[1] = add_flags(cpu, 0x00191fa8u, cpu->r[1], 0, 0);
    }
L_00191fa4:;
    {
        cpu->r[3] = add_flags(cpu, 0x00191facu, cpu->r[3], 0, 0);
    }
L_00191fa8:;
    {
        cpu->r[14] = 0x00191facu; imp_printf(cpu); /* printf */
    }
L_00191fac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_00191fb0:;
    {
        goto L_00191ed8;
    }
}

/* _ZNK20CSoundDecoderMSADPCM15GetSamplingRateEv @ 00191fcc (arm) */
void fn_00191fcc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00191fcc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x28u);
    }
L_00191fd0:;
    {
        cpu->r[12] = rd8(cpu->r[3] + + 0xdu);
    }
L_00191fd4:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0xeu);
    }
L_00191fd8:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0xcu);
    }
L_00191fdc:;
    {
        cpu->r[0] = rd8(cpu->r[3] + + 0xfu);
    }
L_00191fe0:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[3] = v;
    }
L_00191fe4:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[2], 2, 16u, &shc); cpu->r[3] = v;
    }
L_00191fe8:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[0], 2, 24u, &shc); cpu->r[0] = v;
    }
L_00191fec:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK20CSoundDecoderMSADPCM10GetChannelEv @ 00191ff0 (arm) */
void fn_00191ff0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00191ff0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x28u);
    }
L_00191ff4:;
    {
        cpu->r[0] = rd8(cpu->r[3] + + 0xbu);
    }
L_00191ff8:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0xau);
    }
L_00191ffc:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[0], 2, 8u, &shc); cpu->r[0] = v;
    }
L_00192000:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK20CSoundDecoderMSADPCM10GetPCMSizeEv @ 00192004 (arm) */
void fn_00192004(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00192004:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x40u);
    }
L_00192008:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK20CSoundDecoderMSADPCM21GetNbEffectiveSamplesEv @ 0019200c (arm) */
void fn_0019200c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019200c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x44u);
    }
L_00192010:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK20CSoundDecoderMSADPCM15GetTotalSamplesEv @ 00192014 (arm) */
void fn_00192014(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00192014:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x28u);
    }
L_00192018:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0019201c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00192020:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0x15u);
    }
L_00192024:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x14u);
    }
L_00192028:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x3cu);
    }
L_0019202c:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[1], 2, 8u, &shc); cpu->r[1] = v;
    }
L_00192030:;
    {
        cpu->r[14] = 0x00192034u; imp___aeabi_uidiv(cpu); /* __aeabi_uidiv */
    }
L_00192034:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x48u);
    }
L_00192038:;
    {
        uint32_t v = cpu->r[3] * cpu->r[0]; cpu->r[0] = v;
    }
L_0019203c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00192040u)) return;
    }
}

/* _ZN20CSoundDecoderMSADPCM22GetNumSamplesPerDecodeEi @ 00192040 (arm) */
void fn_00192040(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00192040:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00192044:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00192048:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_0019204c:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00192050:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x48u);
    }
L_00192054:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00192058:;
    {
        cpu->r[14] = 0x0019205cu; imp___aeabi_uidivmod(cpu); /* __aeabi_uidivmod */
    }
L_0019205c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00192060:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = add_flags(cpu, cpu->r[4], cpu->r[6], 0, 0);
        }
    }
L_00192064:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 0);
        }
    }
L_00192068:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_0019206c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00192070:;
    {
        cpu->r[14] = 0x00192074u; imp___aeabi_uidiv(cpu); /* __aeabi_uidiv */
    }
L_00192074:;
    {
        uint32_t v = cpu->r[6] * cpu->r[0]; cpu->r[0] = v;
    }
L_00192078:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[0], 1, 1);
    }
L_0019207c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001920a4;
        }
    }
L_00192080:;
    {
        cpu->r[0] = rd32(0x00192088u + + 0x4cu);
    }
L_00192084:;
    {
        cpu->r[2] = 0x000001e6u;
    }
L_00192088:;
    {
        cpu->r[1] = rd32(0x00192090u + + 0x48u);
    }
L_0019208c:;
    {
        cpu->r[3] = rd32(0x00192094u + + 0x48u);
    }
L_00192090:;
    {
        cpu->r[0] = add_flags(cpu, 0x00192098u, cpu->r[0], 0, 0);
    }
L_00192094:;
    {
        cpu->r[1] = add_flags(cpu, 0x0019209cu, cpu->r[1], 0, 0);
    }
L_00192098:;
    {
        cpu->r[3] = add_flags(cpu, 0x001920a0u, cpu->r[3], 0, 0);
    }
L_0019209c:;
    {
        cpu->r[14] = 0x001920a0u; imp_printf(cpu); /* printf */
    }
L_001920a0:;
    {
        cpu->r[6] = rd32(cpu->r[5] + + 0x48u);
    }
L_001920a4:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[6], 1, 1);
    }
L_001920a8:;
    {
        if (cond_test(cpu, 3)) {
        goto L_001920cc;
        }
    }
L_001920ac:;
    {
        cpu->r[0] = rd32(0x001920b4u + + 0x2cu);
    }
L_001920b0:;
    {
        cpu->r[2] = 0x000001e7u;
    }
L_001920b4:;
    {
        cpu->r[1] = rd32(0x001920bcu + + 0x28u);
    }
L_001920b8:;
    {
        cpu->r[3] = rd32(0x001920c0u + + 0x28u);
    }
L_001920bc:;
    {
        cpu->r[0] = add_flags(cpu, 0x001920c4u, cpu->r[0], 0, 0);
    }
L_001920c0:;
    {
        cpu->r[1] = add_flags(cpu, 0x001920c8u, cpu->r[1], 0, 0);
    }
L_001920c4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001920ccu, cpu->r[3], 0, 0);
    }
L_001920c8:;
    {
        cpu->r[14] = 0x001920ccu; imp_printf(cpu); /* printf */
    }
L_001920cc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001920d0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001920d4u)) return;
    }
}

/* _ZN20CSoundDecoderMSADPCM4GoToEi @ 001920ec (arm) */
void fn_001920ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001920ec:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001920f0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001920f4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001920f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019211c;
        }
    }
L_001920fc:;
    {
        cpu->r[0] = rd32(0x00192104u + + 0x74u);
    }
L_00192100:;
    {
        cpu->r[2] = 0x000001d4u;
    }
L_00192104:;
    {
        cpu->r[1] = rd32(0x0019210cu + + 0x70u);
    }
L_00192108:;
    {
        cpu->r[3] = rd32(0x00192110u + + 0x70u);
    }
L_0019210c:;
    {
        cpu->r[0] = add_flags(cpu, 0x00192114u, cpu->r[0], 0, 0);
    }
L_00192110:;
    {
        cpu->r[1] = add_flags(cpu, 0x00192118u, cpu->r[1], 0, 0);
    }
L_00192114:;
    {
        cpu->r[3] = add_flags(cpu, 0x0019211cu, cpu->r[3], 0, 0);
    }
L_00192118:;
    {
        cpu->r[14] = 0x0019211cu; imp_printf(cpu); /* printf */
    }
L_0019211c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_00192120:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00192124:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0xcu);
    }
L_00192128:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x54u);
    }
L_0019212c:;
    {
        cpu->r[7] = rd8(cpu->r[3] + + 0x5u);
    }
L_00192130:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_00192134:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0x4u);
    }
L_00192138:;
    {
        cpu->r[6] = rd8(cpu->r[3] + + 0x6u);
    }
L_0019213c:;
    {
        cpu->r[5] = rd8(cpu->r[3] + + 0x7u);
    }
L_00192140:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[7], 2, 8u, &shc); cpu->r[1] = v;
    }
L_00192144:;
    {
        cpu->r[3] = rd32(cpu->r[12]);
    }
L_00192148:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[6], 2, 16u, &shc); cpu->r[1] = v;
    }
L_0019214c:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[5], 2, 24u, &shc); cpu->r[1] = v;
    }
L_00192150:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000028u, 0, 0);
    }
L_00192154:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[14], 0, 0);
    }
L_00192158:;
    {
        cpu->r[14] = 0x00192160u;
    }
L_0019215c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00192160u)) return;
    }
L_00192160:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x58u);
    }
L_00192164:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00192168:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[2]);
    }
L_0019216c:;
    {
        uint32_t v = cpu->r[3] | 0x00000001u; cpu->r[3] = v;
    }
L_00192170:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[3]);
    }
L_00192174:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00192178u)) return;
    }
}

/* _ZN20CSoundDecoderMSADPCMD1Ev @ 00192184 (arm) */
void fn_00192184(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00192184:;
    {
        cpu->r[3] = rd32(0x0019218cu + + 0x40u);
    }
L_00192188:;
    {
        cpu->r[2] = rd32(0x00192190u + + 0x40u);
    }
L_0019218c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00192194u, cpu->r[3], 0, 0);
    }
L_00192190:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00192194:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00192198:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x10u);
    }
L_0019219c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001921a0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001921a4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001921a8:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001921ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001921b4;
        }
    }
L_001921b0:;
    {
        cpu->r[14] = 0x001921b4u; fn_0018ba60(cpu);
    }
L_001921b4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_001921b8:;
    {
        cpu->r[14] = 0x001921bcu; fn_001930d4(cpu);
    }
L_001921bc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_001921c0:;
    {
        cpu->r[14] = 0x001921c4u; fn_001930d4(cpu);
    }
L_001921c4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001921c8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001921ccu)) return;
    }
}

/* _ZN20CSoundDecoderMSADPCMD0Ev @ 001921d4 (arm) */
void fn_001921d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001921d4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001921d8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001921dc:;
    {
        cpu->r[14] = 0x001921e0u; fn_00192184(cpu);
    }
L_001921e0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001921e4:;
    {
        cpu->r[14] = 0x001921e8u; fn_0018ba20(cpu);
    }
L_001921e8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001921ec:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001921f0u)) return;
    }
}

/* _ZN20CSoundDecoderMSADPCMD2Ev @ 001921f0 (arm) */
void fn_001921f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001921f0:;
    {
        cpu->r[3] = rd32(0x001921f8u + + 0x40u);
    }
L_001921f4:;
    {
        cpu->r[2] = rd32(0x001921fcu + + 0x40u);
    }
L_001921f8:;
    {
        cpu->r[3] = add_flags(cpu, 0x00192200u, cpu->r[3], 0, 0);
    }
L_001921fc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00192200:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00192204:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x10u);
    }
L_00192208:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0019220c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00192210:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00192214:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_00192218:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00192220;
        }
    }
L_0019221c:;
    {
        cpu->r[14] = 0x00192220u; fn_0018ba60(cpu);
    }
L_00192220:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_00192224:;
    {
        cpu->r[14] = 0x00192228u; fn_001930d4(cpu);
    }
L_00192228:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_0019222c:;
    {
        cpu->r[14] = 0x00192230u; fn_001930d4(cpu);
    }
L_00192230:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00192234:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00192238u)) return;
    }
}

/* _ZN20CSoundDecoderMSADPCMC1EP10ISoundFileRK10RiffHeaderRK12FormatHeader @ 00192240 (arm) */
void fn_00192240(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00192240:;
    {
        cpu->r[12] = rd32(0x00192248u + + 0x1e0u);
    }
L_00192244:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00192248:;
    {
        cpu->r[14] = rd32(0x00192250u + + 0x1dcu);
    }
L_0019224c:;
    {
        cpu->r[12] = add_flags(cpu, 0x00192254u, cpu->r[12], 0, 0);
    }
L_00192250:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00192254:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00192258:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_0019225c:;
    {
        cpu->r[14] = rd32(cpu->r[12] + cpu->r[14]);
    }
L_00192260:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_00192264:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000008u, 0, 0);
    }
L_00192268:;
    {
        uint32_t wb_tmp = cpu->r[0] + 0x00000004u;
        wr32(cpu->r[0], cpu->r[14]);
        cpu->r[0] = wb_tmp;
    }
L_0019226c:;
    {
        cpu->r[14] = 0x00192270u; fn_001930c0(cpu);
    }
L_00192270:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_00192274:;
    {
        cpu->r[14] = 0x00192278u; fn_001930c0(cpu);
    }
L_00192278:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0019227c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00192280:;
    {
        cpu->r[0] = 0x00001000u;
    }
L_00192284:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00192288:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[6]);
    }
L_0019228c:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[7]);
    }
L_00192290:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[3]);
    }
L_00192294:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[2]);
    }
L_00192298:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[5]);
    }
L_0019229c:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_001922a0:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[3]);
    }
L_001922a4:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[3]);
    }
L_001922a8:;
    {
        wr8(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_001922ac:;
    {
        wr8(cpu->r[4] + + 0x2du, cpu->r[3]);
    }
L_001922b0:;
    {
        wr8(cpu->r[4] + + 0x2eu, cpu->r[3]);
    }
L_001922b4:;
    {
        wr8(cpu->r[4] + + 0x2fu, cpu->r[3]);
    }
L_001922b8:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[3]);
    }
L_001922bc:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[3]);
    }
L_001922c0:;
    {
        wr8(cpu->r[4] + + 0x38u, cpu->r[3]);
    }
L_001922c4:;
    {
        wr8(cpu->r[4] + + 0x39u, cpu->r[3]);
    }
L_001922c8:;
    {
        wr8(cpu->r[4] + + 0x3au, cpu->r[3]);
    }
L_001922cc:;
    {
        wr8(cpu->r[4] + + 0x3bu, cpu->r[3]);
    }
L_001922d0:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[3]);
    }
L_001922d4:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[3]);
    }
L_001922d8:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[0]);
    }
L_001922dc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00192400;
        }
    }
L_001922e0:;
    {
        cpu->r[14] = 0x001922e4u; imp__Znaj(cpu); /* _Znaj */
    }
L_001922e4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001922e8:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_001922ec:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[0]);
    }
L_001922f0:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001922f4:;
    {
        cpu->r[14] = 0x001922fcu;
    }
L_001922f8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001922fcu)) return;
    }
L_001922fc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_00192300:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000024u, 1, 0);
    }
L_00192304:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[0]);
    }
L_00192308:;
    {
        cpu->r[12] = rd8(cpu->r[3] + + 0x5u);
    }
L_0019230c:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x4u);
    }
L_00192310:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0x6u);
    }
L_00192314:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x7u);
    }
L_00192318:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[2] = v;
    }
L_0019231c:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[1], 2, 16u, &shc); cpu->r[2] = v;
    }
L_00192320:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[3], 2, 24u, &shc); cpu->r[2] = v;
    }
L_00192324:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000010u, 1, 1);
    }
L_00192328:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001923dc;
        }
    }
L_0019232c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00192330:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x0000002cu, 0, 0);
    }
L_00192334:;
    {
        cpu->r[2] = 0x0000000cu;
    }
L_00192338:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0019233c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00192340:;
    {
        cpu->r[14] = 0x00192348u;
    }
L_00192344:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00192348u)) return;
    }
L_00192348:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019234c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000038u, 0, 0);
    }
L_00192350:;
    {
        cpu->r[2] = 0x00000008u;
    }
L_00192354:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00192358:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0019235c:;
    {
        cpu->r[14] = 0x00192364u;
    }
L_00192360:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00192364u)) return;
    }
L_00192364:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_00192368:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0xau);
    }
L_0019236c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_00192370:;
    {
        uint32_t v = cpu->r[2] & 0x000000fcu; cpu->r[2] = v;
    }
L_00192374:;
    {
        wr8(cpu->r[4] + + 0x4cu, cpu->r[2]);
    }
L_00192378:;
    {
        cpu->r[0] = rd8(cpu->r[3] + + 0xbu);
    }
L_0019237c:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0xau);
    }
L_00192380:;
    {
        cpu->r[5] = rd8(cpu->r[3] + + 0x15u);
    }
L_00192384:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[0], 2, 8u, &shc); cpu->r[1] = v;
    }
L_00192388:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x3cu);
    }
L_0019238c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_00192390:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0x14u);
    }
L_00192394:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[5], 2, 8u, &shc); cpu->r[5] = v;
    }
L_00192398:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 0);
        }
    }
L_0019239c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
        }
    }
L_001923a0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 0);
        }
    }
L_001923a4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[5] = v;
        }
    }
L_001923a8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
        }
    }
L_001923ac:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[5]);
    }
L_001923b0:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0x15u);
    }
L_001923b4:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x14u);
    }
L_001923b8:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[1], 2, 8u, &shc); cpu->r[1] = v;
    }
L_001923bc:;
    {
        cpu->r[14] = 0x001923c0u; imp___aeabi_uidiv(cpu); /* __aeabi_uidiv */
    }
L_001923c0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x34u);
    }
L_001923c4:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[3]);
    }
L_001923c8:;
    {
        uint32_t v = cpu->r[0] * cpu->r[5]; cpu->r[5] = v;
    }
L_001923cc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001923d0:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[5] = v;
    }
L_001923d4:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[5]);
    }
L_001923d8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001923dcu)) return;
    }
L_001923dc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001923e0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000014u, 0, 0);
    }
L_001923e4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_001923e8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001923ec:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001923f0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001923f4:;
    {
        cpu->r[14] = 0x001923fcu;
    }
L_001923f8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001923fcu)) return;
    }
L_001923fc:;
    {
        goto L_0019232c;
    }
L_00192400:;
    {
        cpu->r[0] = rd32(0x00192408u + + 0x28u);
    }
L_00192404:;
    {
        cpu->r[2] = 0x0000002au;
    }
L_00192408:;
    {
        cpu->r[1] = rd32(0x00192410u + + 0x24u);
    }
L_0019240c:;
    {
        cpu->r[3] = rd32(0x00192414u + + 0x24u);
    }
L_00192410:;
    {
        cpu->r[0] = add_flags(cpu, 0x00192418u, cpu->r[0], 0, 0);
    }
L_00192414:;
    {
        cpu->r[1] = add_flags(cpu, 0x0019241cu, cpu->r[1], 0, 0);
    }
L_00192418:;
    {
        cpu->r[3] = add_flags(cpu, 0x00192420u, cpu->r[3], 0, 0);
    }
L_0019241c:;
    {
        cpu->r[14] = 0x00192420u; imp_printf(cpu); /* printf */
    }
L_00192420:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_00192424:;
    {
        goto L_001922e0;
    }
}

/* _ZN20CSoundDecoderMSADPCMC2EP10ISoundFileRK10RiffHeaderRK12FormatHeader @ 0019243c (arm) */
void fn_0019243c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019243c:;
    {
        cpu->r[12] = rd32(0x00192444u + + 0x1e0u);
    }
L_00192440:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00192444:;
    {
        cpu->r[14] = rd32(0x0019244cu + + 0x1dcu);
    }
L_00192448:;
    {
        cpu->r[12] = add_flags(cpu, 0x00192450u, cpu->r[12], 0, 0);
    }
L_0019244c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00192450:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00192454:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_00192458:;
    {
        cpu->r[14] = rd32(cpu->r[12] + cpu->r[14]);
    }
L_0019245c:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_00192460:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000008u, 0, 0);
    }
L_00192464:;
    {
        uint32_t wb_tmp = cpu->r[0] + 0x00000004u;
        wr32(cpu->r[0], cpu->r[14]);
        cpu->r[0] = wb_tmp;
    }
L_00192468:;
    {
        cpu->r[14] = 0x0019246cu; fn_001930c0(cpu);
    }
L_0019246c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_00192470:;
    {
        cpu->r[14] = 0x00192474u; fn_001930c0(cpu);
    }
L_00192474:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00192478:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0019247c:;
    {
        cpu->r[0] = 0x00001000u;
    }
L_00192480:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00192484:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[6]);
    }
L_00192488:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[7]);
    }
L_0019248c:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[3]);
    }
L_00192490:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[2]);
    }
L_00192494:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[5]);
    }
L_00192498:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_0019249c:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[3]);
    }
L_001924a0:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[3]);
    }
L_001924a4:;
    {
        wr8(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_001924a8:;
    {
        wr8(cpu->r[4] + + 0x2du, cpu->r[3]);
    }
L_001924ac:;
    {
        wr8(cpu->r[4] + + 0x2eu, cpu->r[3]);
    }
L_001924b0:;
    {
        wr8(cpu->r[4] + + 0x2fu, cpu->r[3]);
    }
L_001924b4:;
    {
        wr32(cpu->r[4] + + 0x30u, cpu->r[3]);
    }
L_001924b8:;
    {
        wr32(cpu->r[4] + + 0x34u, cpu->r[3]);
    }
L_001924bc:;
    {
        wr8(cpu->r[4] + + 0x38u, cpu->r[3]);
    }
L_001924c0:;
    {
        wr8(cpu->r[4] + + 0x39u, cpu->r[3]);
    }
L_001924c4:;
    {
        wr8(cpu->r[4] + + 0x3au, cpu->r[3]);
    }
L_001924c8:;
    {
        wr8(cpu->r[4] + + 0x3bu, cpu->r[3]);
    }
L_001924cc:;
    {
        wr32(cpu->r[4] + + 0x3cu, cpu->r[3]);
    }
L_001924d0:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[3]);
    }
L_001924d4:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[0]);
    }
L_001924d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001925fc;
        }
    }
L_001924dc:;
    {
        cpu->r[14] = 0x001924e0u; imp__Znaj(cpu); /* _Znaj */
    }
L_001924e0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xcu);
    }
L_001924e4:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_001924e8:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[0]);
    }
L_001924ec:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001924f0:;
    {
        cpu->r[14] = 0x001924f8u;
    }
L_001924f4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001924f8u)) return;
    }
L_001924f8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_001924fc:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000024u, 1, 0);
    }
L_00192500:;
    {
        wr32(cpu->r[4] + + 0x54u, cpu->r[0]);
    }
L_00192504:;
    {
        cpu->r[12] = rd8(cpu->r[3] + + 0x5u);
    }
L_00192508:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x4u);
    }
L_0019250c:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0x6u);
    }
L_00192510:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x7u);
    }
L_00192514:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[2] = v;
    }
L_00192518:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[1], 2, 16u, &shc); cpu->r[2] = v;
    }
L_0019251c:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[3], 2, 24u, &shc); cpu->r[2] = v;
    }
L_00192520:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000010u, 1, 1);
    }
L_00192524:;
    {
        if (cond_test(cpu, 9)) {
        goto L_001925d8;
        }
    }
L_00192528:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_0019252c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x0000002cu, 0, 0);
    }
L_00192530:;
    {
        cpu->r[2] = 0x0000000cu;
    }
L_00192534:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00192538:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0019253c:;
    {
        cpu->r[14] = 0x00192544u;
    }
L_00192540:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00192544u)) return;
    }
L_00192544:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00192548:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000038u, 0, 0);
    }
L_0019254c:;
    {
        cpu->r[2] = 0x00000008u;
    }
L_00192550:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00192554:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00192558:;
    {
        cpu->r[14] = 0x00192560u;
    }
L_0019255c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00192560u)) return;
    }
L_00192560:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_00192564:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0xau);
    }
L_00192568:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_0019256c:;
    {
        uint32_t v = cpu->r[2] & 0x000000fcu; cpu->r[2] = v;
    }
L_00192570:;
    {
        wr8(cpu->r[4] + + 0x4cu, cpu->r[2]);
    }
L_00192574:;
    {
        cpu->r[0] = rd8(cpu->r[3] + + 0xbu);
    }
L_00192578:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0xau);
    }
L_0019257c:;
    {
        cpu->r[5] = rd8(cpu->r[3] + + 0x15u);
    }
L_00192580:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[0], 2, 8u, &shc); cpu->r[1] = v;
    }
L_00192584:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x3cu);
    }
L_00192588:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_0019258c:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0x14u);
    }
L_00192590:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[5], 2, 8u, &shc); cpu->r[5] = v;
    }
L_00192594:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 0);
        }
    }
L_00192598:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
        }
    }
L_0019259c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 0);
        }
    }
L_001925a0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[5] = v;
        }
    }
L_001925a4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
        }
    }
L_001925a8:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[5]);
    }
L_001925ac:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0x15u);
    }
L_001925b0:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x14u);
    }
L_001925b4:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[1], 2, 8u, &shc); cpu->r[1] = v;
    }
L_001925b8:;
    {
        cpu->r[14] = 0x001925bcu; imp___aeabi_uidiv(cpu); /* __aeabi_uidiv */
    }
L_001925bc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x34u);
    }
L_001925c0:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[3]);
    }
L_001925c4:;
    {
        uint32_t v = cpu->r[0] * cpu->r[5]; cpu->r[5] = v;
    }
L_001925c8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001925cc:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[5] = v;
    }
L_001925d0:;
    {
        wr32(cpu->r[4] + + 0x40u, cpu->r[5]);
    }
L_001925d4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001925d8u)) return;
    }
L_001925d8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001925dc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000014u, 0, 0);
    }
L_001925e0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_001925e4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001925e8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001925ec:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001925f0:;
    {
        cpu->r[14] = 0x001925f8u;
    }
L_001925f4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001925f8u)) return;
    }
L_001925f8:;
    {
        goto L_00192528;
    }
L_001925fc:;
    {
        cpu->r[0] = rd32(0x00192604u + + 0x28u);
    }
L_00192600:;
    {
        cpu->r[2] = 0x0000002au;
    }
L_00192604:;
    {
        cpu->r[1] = rd32(0x0019260cu + + 0x24u);
    }
L_00192608:;
    {
        cpu->r[3] = rd32(0x00192610u + + 0x24u);
    }
L_0019260c:;
    {
        cpu->r[0] = add_flags(cpu, 0x00192614u, cpu->r[0], 0, 0);
    }
L_00192610:;
    {
        cpu->r[1] = add_flags(cpu, 0x00192618u, cpu->r[1], 0, 0);
    }
L_00192614:;
    {
        cpu->r[3] = add_flags(cpu, 0x0019261cu, cpu->r[3], 0, 0);
    }
L_00192618:;
    {
        cpu->r[14] = 0x0019261cu; imp_printf(cpu); /* printf */
    }
L_0019261c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x14u);
    }
L_00192620:;
    {
        goto L_001924dc;
    }
}

/* _ZN20CSoundDecoderMSADPCM6DecodeEPsib @ 00192638 (arm) */
void fn_00192638(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00192638:;
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
L_0019263c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00192640:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000003cu, 1, 0);
    }
L_00192644:;
    {
        cpu->r[10] = cpu->r[1];
    }
L_00192648:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_0019264c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x48u);
    }
L_00192650:;
    {
        wr32(cpu->r[13] + + 0x30u, cpu->r[2]);
    }
L_00192654:;
    {
        cpu->r[7] = cpu->r[10];
    }
L_00192658:;
    {
        wr32(cpu->r[13] + + 0x34u, cpu->r[3]);
    }
L_0019265c:;
    {
        cpu->r[14] = 0x00192660u; imp___aeabi_uidiv(cpu); /* __aeabi_uidiv */
    }
L_00192660:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_00192664:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000002u, 0, 0);
    }
L_00192668:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x50u);
    }
L_0019266c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x3cu);
    }
L_00192670:;
    {
        cpu->r[12] = rd8(cpu->r[3] + + 0x15u);
    }
L_00192674:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x14u);
    }
L_00192678:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x14u);
    }
L_0019267c:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[3] = v;
    }
L_00192680:;
    {
        cpu->r[9] = rd32(0x00192688u + + 0x63cu);
    }
L_00192684:;
    {
        cpu->r[11] = rd32(0x0019268cu + + 0x63cu);
    }
L_00192688:;
    {
        cpu->r[8] = rd32(0x00192690u + + 0x63cu);
    }
L_0019268c:;
    {
        cpu->r[8] = add_flags(cpu, 0x00192694u, cpu->r[8], 0, 0);
    }
L_00192690:;
    {
        uint32_t v = cpu->r[3] * cpu->r[0]; cpu->r[3] = v;
    }
L_00192694:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[2], 0, 0);
    }
L_00192698:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_0019269c:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 0);
        }
    }
L_001926a0:;
    {
        if (cond_test(cpu, 4)) {
        wr32(cpu->r[13] + + 0x28u, cpu->r[3]);
        }
    }
L_001926a4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001926a8:;
    {
        if (cond_test(cpu, 3)) {
        wr32(cpu->r[13] + + 0x28u, cpu->r[2]);
        }
    }
L_001926ac:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_001926b0:;
    {
        cpu->r[14] = 0x001926b4u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_001926b4:;
    {
        cpu->r[3] = 0x00008000u;
    }
L_001926b8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001926bc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0xffffu << 16);
    }
L_001926c0:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[2]);
    }
L_001926c4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_001926c8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[9]);
    }
L_001926cc:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[11]);
    }
L_001926d0:;
    {
        uint32_t v = cpu->r[5] * cpu->r[0]; cpu->r[5] = v;
    }
L_001926d4:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_001926d8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x28u);
    }
L_001926dc:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_001926e0:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = rd32(cpu->r[13] + + 0x24u);
        }
    }
L_001926e4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
        }
    }
L_001926e8:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[13] + + 0x24u, cpu->r[1]);
        }
    }
L_001926ec:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x24u);
    }
L_001926f0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000001u, 1, 0);
    }
L_001926f4:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_001926f8:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001926fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00192c70;
        }
    }
L_00192700:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_00192704:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x14u);
    }
L_00192708:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x28u);
    }
L_0019270c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00192710:;
    {
        cpu->r[14] = rd32(cpu->r[13] + + 0x28u);
    }
L_00192714:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_00192718:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = cpu->r[12];
        }
    }
L_0019271c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x10u);
    }
L_00192720:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[14], cpu->r[12], 1, 0);
    }
L_00192724:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00192728:;
    {
        wr32(cpu->r[13] + + 0x28u, cpu->r[14]);
    }
L_0019272c:;
    {
        cpu->r[14] = 0x00192734u;
    }
L_00192730:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00192734u)) return;
    }
L_00192734:;
    {
        cpu->r[9] = rd32(cpu->r[4] + + 0x28u);
    }
L_00192738:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x50u);
    }
L_0019273c:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x10u);
    }
L_00192740:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_00192744:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[3]);
    }
L_00192748:;
    {
        cpu->r[11] = rd8(cpu->r[9] + + 0x15u);
    }
L_0019274c:;
    {
        cpu->r[3] = rd8(cpu->r[9] + + 0x14u);
    }
L_00192750:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[11], 2, 8u, &shc); cpu->r[11] = v;
    }
L_00192754:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_00192758:;
    {
        cpu->r[14] = 0x0019275cu; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_0019275c:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x48u);
    }
L_00192760:;
    {
        cpu->r[3] = rd8(cpu->r[9] + + 0xbu);
    }
L_00192764:;
    {
        cpu->r[2] = rd8(cpu->r[9] + + 0xau);
    }
L_00192768:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x2cu);
    }
L_0019276c:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[3], 2, 8u, &shc); cpu->r[3] = v;
    }
L_00192770:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00192774:;
    {
        uint32_t v = cpu->r[6] * cpu->r[0]; cpu->r[6] = v;
    }
L_00192778:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], cpu->r[1], 0, 0);
    }
L_0019277c:;
    {
        wr32(cpu->r[13] + + 0x2cu, cpu->r[1]);
    }
L_00192780:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00192ab4;
        }
    }
L_00192784:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_00192788:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x00000008u, 0, 0);
    }
L_0019278c:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[12]);
    }
L_00192790:;
    {
        wr32(cpu->r[13] + + 0x20u, cpu->r[0]);
    }
L_00192794:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_00192798:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001926ec;
        }
    }
L_0019279c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x58u);
    }
L_001927a0:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_001927a4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00192804;
        }
    }
L_001927a8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001927ac:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_001927b0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_001927b4:;
    {
        cpu->r[14] = 0x001927b8u; imp_memcpy(cpu); /* memcpy */
    }
L_001927b8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_001927bc:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_001927c0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x20u);
    }
L_001927c4:;
    {
        cpu->r[14] = 0x001927c8u; imp_memcpy(cpu); /* memcpy */
    }
L_001927c8:;
    {
        cpu->r[1] = rd16(cpu->r[4] + + 0x4u);
    }
L_001927cc:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_001927d0:;
    {
        uint32_t wb_tmp = cpu->r[7] + 0x00000004u;
        wr16(cpu->r[7], cpu->r[1]);
        cpu->r[7] = wb_tmp;
    }
L_001927d4:;
    {
        cpu->r[2] = rd16(cpu->r[4] + + 0x8u);
    }
L_001927d8:;
    {
        uint32_t wb_tmp = cpu->r[10] + 0x00000004u;
        wr16(cpu->r[10], cpu->r[2]);
        cpu->r[10] = wb_tmp;
    }
L_001927dc:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x4cu);
    }
L_001927e0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x58u);
    }
L_001927e4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_001927e8:;
    {
        uint32_t v = cpu->r[2] & ~ 0x00000001u; cpu->r[2] = v;
    }
L_001927ec:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[3]);
    }
L_001927f0:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[2]);
    }
L_001927f4:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001926ec;
        }
    }
L_001927f8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x58u);
    }
L_001927fc:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00192800:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001927a8;
        }
    }
L_00192804:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x1cu);
    }
L_00192808:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000003u, 1, 1);
    }
L_0019280c:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00192958;
        }
    }
L_00192810:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0xcu);
    }
L_00192814:;
    {
        cpu->r[0] = rd8(cpu->r[4] + + 0x6u);
    }
L_00192818:;
    {
        cpu->r[1] = rd8(cpu->r[5]);
    }
L_0019281c:;
    {
        cpu->r[9] = rd32(cpu->r[8] + cpu->r[11]);
    }
L_00192820:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[12] = v;
    }
L_00192824:;
    {
        { uint32_t v = cpu->r[1] & 0x00000004u; set_nz(cpu, v); }
    }
L_00192828:;
    {
        uint32_t v = cpu->r[1] & 0x0000000fu; cpu->r[1] = v;
    }
L_0019282c:;
    {
        cpu->r[11] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x4u);
    }
L_00192830:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[9] + cpu->r[12]);
    }
L_00192834:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 3u, &shc); cpu->r[9] = v;
    }
L_00192838:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[12], 0, 0);
        }
    }
L_0019283c:;
    {
        { uint32_t v = cpu->r[1] & 0x00000002u; set_nz(cpu, v); }
    }
L_00192840:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[9] = add_flags(cpu, cpu->r[9], shifter(cpu->r[12], 1, 1u, &shc), 0, 0);
        }
    }
L_00192844:;
    {
        { uint32_t v = cpu->r[1] & 0x00000001u; set_nz(cpu, v); }
    }
L_00192848:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[9] = add_flags(cpu, cpu->r[9], shifter(cpu->r[12], 1, 2u, &shc), 0, 0);
        }
    }
L_0019284c:;
    {
        { uint32_t v = cpu->r[1] & 0x00000008u; set_nz(cpu, v); }
    }
L_00192850:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00192a74;
        }
    }
L_00192854:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00192858:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[11], cpu->r[9], 1, 0);
    }
L_0019285c:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[12], 1, 1);
    }
L_00192860:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[9] = cpu->r[12];
        }
    }
L_00192864:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x10u);
    }
L_00192868:;
    {
        cpu->r[9] = (uint32_t)((uint16_t)cpu->r[9]);
    }
L_0019286c:;
    {
        wr16(cpu->r[4] + + 0x4u, cpu->r[9]);
    }
L_00192870:;
    {
        cpu->r[12] = rd32(cpu->r[8] + cpu->r[11]);
    }
L_00192874:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0xcu);
    }
L_00192878:;
    {
        cpu->r[1] = rd8(cpu->r[12] + cpu->r[1]);
    }
L_0019287c:;
    {
        cpu->r[11] = rd32(cpu->r[8] + cpu->r[11]);
    }
L_00192880:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[0], 0, 0);
    }
L_00192884:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000058u, 1, 1);
    }
L_00192888:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = 0x00000058u;
        }
    }
L_0019288c:;
    {
        wr8(cpu->r[4] + + 0x6u, cpu->r[1]);
    }
L_00192890:;
    {
        uint32_t wb_tmp = cpu->r[7] + 0x00000004u;
        wr16(cpu->r[7], cpu->r[9]);
        cpu->r[7] = wb_tmp;
    }
L_00192894:;
    {
        cpu->r[12] = rd8(cpu->r[4] + + 0x6u);
    }
L_00192898:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x4u);
    }
L_0019289c:;
    {
        cpu->r[1] = rd8(cpu->r[5]);
    }
L_001928a0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
    }
L_001928a4:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[0] = v;
    }
L_001928a8:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 4u, &shc); cpu->r[1] = v;
    }
L_001928ac:;
    {
        cpu->r[9] = (uint32_t)(int32_t)s16(cpu->r[11] + cpu->r[0]);
    }
L_001928b0:;
    {
        { uint32_t v = cpu->r[1] & 0x00000004u; set_nz(cpu, v); }
    }
L_001928b4:;
    {
        uint32_t v = shifter(cpu->r[9], 1, 3u, &shc); cpu->r[0] = v;
    }
L_001928b8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[9], 0, 0);
        }
    }
L_001928bc:;
    {
        { uint32_t v = cpu->r[1] & 0x00000002u; set_nz(cpu, v); }
    }
L_001928c0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[9], 1, 1u, &shc), 0, 0);
        }
    }
L_001928c4:;
    {
        { uint32_t v = cpu->r[1] & 0x00000001u; set_nz(cpu, v); }
    }
L_001928c8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[9], 1, 2u, &shc), 0, 0);
        }
    }
L_001928cc:;
    {
        { uint32_t v = cpu->r[1] & 0x00000008u; set_nz(cpu, v); }
    }
L_001928d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00192a5c;
        }
    }
L_001928d4:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x4u);
    }
L_001928d8:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001928dc:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[9], cpu->r[0], 1, 0);
    }
L_001928e0:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[11], 1, 1);
    }
L_001928e4:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = cpu->r[11];
        }
    }
L_001928e8:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x10u);
    }
L_001928ec:;
    {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_001928f0:;
    {
        wr16(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_001928f4:;
    {
        cpu->r[9] = rd32(cpu->r[8] + cpu->r[11]);
    }
L_001928f8:;
    {
        cpu->r[1] = rd8(cpu->r[9] + cpu->r[1]);
    }
L_001928fc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[12], 0, 0);
    }
L_00192900:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000058u, 1, 1);
    }
L_00192904:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = 0x00000058u;
        }
    }
L_00192908:;
    {
        wr8(cpu->r[4] + + 0x6u, cpu->r[1]);
    }
L_0019290c:;
    {
        uint32_t wb_tmp = cpu->r[7] + 0x00000004u;
        wr16(cpu->r[7], cpu->r[0]);
        cpu->r[7] = wb_tmp;
    }
L_00192910:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00192914:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x20u);
    }
L_00192918:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000007u, 1, 1);
    }
L_0019291c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00192920:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_00192924:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[2]);
    }
L_00192928:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[1]);
    }
L_0019292c:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00192794;
        }
    }
L_00192930:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x28u);
    }
L_00192934:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00192938:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[12]);
    }
L_0019293c:;
    {
        cpu->r[0] = rd8(cpu->r[2] + + 0x15u);
    }
L_00192940:;
    {
        cpu->r[2] = rd8(cpu->r[2] + + 0x14u);
    }
L_00192944:;
    {
        uint32_t v = cpu->r[2] | shifter(cpu->r[0], 2, 8u, &shc); cpu->r[0] = v;
    }
L_00192948:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[0], 1, 1);
    }
L_0019294c:;
    {
        if (cond_test(cpu, 3)) {
        uint32_t v = cpu->r[3] | 0x00000001u; cpu->r[3] = v;
        }
    }
L_00192950:;
    {
        if (cond_test(cpu, 3)) {
        wr32(cpu->r[4] + + 0x58u, cpu->r[3]);
        }
    }
L_00192954:;
    {
        goto L_00192794;
    }
L_00192958:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_0019295c:;
    {
        cpu->r[0] = rd8(cpu->r[4] + + 0xau);
    }
L_00192960:;
    {
        cpu->r[1] = rd8(cpu->r[5]);
    }
L_00192964:;
    {
        cpu->r[9] = rd32(cpu->r[8] + cpu->r[12]);
    }
L_00192968:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[12] = v;
    }
L_0019296c:;
    {
        { uint32_t v = cpu->r[1] & 0x00000004u; set_nz(cpu, v); }
    }
L_00192970:;
    {
        uint32_t v = cpu->r[1] & 0x0000000fu; cpu->r[1] = v;
    }
L_00192974:;
    {
        cpu->r[11] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x8u);
    }
L_00192978:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[9] + cpu->r[12]);
    }
L_0019297c:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 3u, &shc); cpu->r[9] = v;
    }
L_00192980:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[12], 0, 0);
        }
    }
L_00192984:;
    {
        { uint32_t v = cpu->r[1] & 0x00000002u; set_nz(cpu, v); }
    }
L_00192988:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[9] = add_flags(cpu, cpu->r[9], shifter(cpu->r[12], 1, 1u, &shc), 0, 0);
        }
    }
L_0019298c:;
    {
        { uint32_t v = cpu->r[1] & 0x00000001u; set_nz(cpu, v); }
    }
L_00192990:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[9] = add_flags(cpu, cpu->r[9], shifter(cpu->r[12], 1, 2u, &shc), 0, 0);
        }
    }
L_00192994:;
    {
        { uint32_t v = cpu->r[1] & 0x00000008u; set_nz(cpu, v); }
    }
L_00192998:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00192aa0;
        }
    }
L_0019299c:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[11], cpu->r[9], 1, 0);
    }
L_001929a0:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001929a4:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[11], 1, 1);
    }
L_001929a8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[9] = cpu->r[11];
        }
    }
L_001929ac:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x10u);
    }
L_001929b0:;
    {
        cpu->r[9] = (uint32_t)((uint16_t)cpu->r[9]);
    }
L_001929b4:;
    {
        wr16(cpu->r[4] + + 0x8u, cpu->r[9]);
    }
L_001929b8:;
    {
        cpu->r[12] = rd32(cpu->r[8] + cpu->r[11]);
    }
L_001929bc:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0xcu);
    }
L_001929c0:;
    {
        cpu->r[1] = rd8(cpu->r[12] + cpu->r[1]);
    }
L_001929c4:;
    {
        cpu->r[11] = rd32(cpu->r[8] + cpu->r[11]);
    }
L_001929c8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[0], 0, 0);
    }
L_001929cc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000058u, 1, 1);
    }
L_001929d0:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = 0x00000058u;
        }
    }
L_001929d4:;
    {
        wr8(cpu->r[4] + + 0xau, cpu->r[1]);
    }
L_001929d8:;
    {
        uint32_t wb_tmp = cpu->r[10] + 0x00000004u;
        wr16(cpu->r[10], cpu->r[9]);
        cpu->r[10] = wb_tmp;
    }
L_001929dc:;
    {
        cpu->r[12] = rd8(cpu->r[4] + + 0xau);
    }
L_001929e0:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x8u);
    }
L_001929e4:;
    {
        cpu->r[1] = rd8(cpu->r[5]);
    }
L_001929e8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
    }
L_001929ec:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[0] = v;
    }
L_001929f0:;
    {
        uint32_t v = shifter(cpu->r[1], 3, 4u, &shc); cpu->r[1] = v;
    }
L_001929f4:;
    {
        cpu->r[9] = (uint32_t)(int32_t)s16(cpu->r[11] + cpu->r[0]);
    }
L_001929f8:;
    {
        { uint32_t v = cpu->r[1] & 0x00000004u; set_nz(cpu, v); }
    }
L_001929fc:;
    {
        uint32_t v = shifter(cpu->r[9], 1, 3u, &shc); cpu->r[0] = v;
    }
L_00192a00:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[9], 0, 0);
        }
    }
L_00192a04:;
    {
        { uint32_t v = cpu->r[1] & 0x00000002u; set_nz(cpu, v); }
    }
L_00192a08:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[9], 1, 1u, &shc), 0, 0);
        }
    }
L_00192a0c:;
    {
        { uint32_t v = cpu->r[1] & 0x00000001u; set_nz(cpu, v); }
    }
L_00192a10:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = add_flags(cpu, cpu->r[0], shifter(cpu->r[9], 1, 2u, &shc), 0, 0);
        }
    }
L_00192a14:;
    {
        { uint32_t v = cpu->r[1] & 0x00000008u; set_nz(cpu, v); }
    }
L_00192a18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00192a88;
        }
    }
L_00192a1c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x4u);
    }
L_00192a20:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00192a24:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[9], cpu->r[0], 1, 0);
    }
L_00192a28:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[11], 1, 1);
    }
L_00192a2c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = cpu->r[11];
        }
    }
L_00192a30:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x10u);
    }
L_00192a34:;
    {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_00192a38:;
    {
        wr16(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_00192a3c:;
    {
        cpu->r[9] = rd32(cpu->r[8] + cpu->r[11]);
    }
L_00192a40:;
    {
        cpu->r[1] = rd8(cpu->r[9] + cpu->r[1]);
    }
L_00192a44:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[12], 0, 0);
    }
L_00192a48:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000058u, 1, 1);
    }
L_00192a4c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = 0x00000058u;
        }
    }
L_00192a50:;
    {
        wr8(cpu->r[4] + + 0xau, cpu->r[1]);
    }
L_00192a54:;
    {
        uint32_t wb_tmp = cpu->r[10] + 0x00000004u;
        wr16(cpu->r[10], cpu->r[0]);
        cpu->r[10] = wb_tmp;
    }
L_00192a58:;
    {
        goto L_00192910;
    }
L_00192a5c:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x4u);
    }
L_00192a60:;
    {
        cpu->r[11] = 0x00007fffu;
    }
L_00192a64:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[9], 0, 0);
    }
L_00192a68:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[11], 1, 1);
    }
L_00192a6c:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = cpu->r[11];
        }
    }
L_00192a70:;
    {
        goto L_001928e8;
    }
L_00192a74:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[11], 0, 0);
    }
L_00192a78:;
    {
        cpu->r[11] = 0x00007fffu;
    }
L_00192a7c:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[11], 1, 1);
    }
L_00192a80:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[9] = cpu->r[11];
        }
    }
L_00192a84:;
    {
        goto L_00192864;
    }
L_00192a88:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x4u);
    }
L_00192a8c:;
    {
        cpu->r[11] = 0x00007fffu;
    }
L_00192a90:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[9], 0, 0);
    }
L_00192a94:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[11], 1, 1);
    }
L_00192a98:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = cpu->r[11];
        }
    }
L_00192a9c:;
    {
        goto L_00192a30;
    }
L_00192aa0:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], cpu->r[11], 0, 0);
    }
L_00192aa4:;
    {
        cpu->r[12] = 0x00007fffu;
    }
L_00192aa8:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[12], 1, 1);
    }
L_00192aac:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[9] = cpu->r[12];
        }
    }
L_00192ab0:;
    {
        goto L_001929ac;
    }
L_00192ab4:;
    {
        cpu->r[6] = rd8(cpu->r[4] + + 0x4cu);
    }
L_00192ab8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_00192abc:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_00192ac0:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[11], cpu->r[6], 1, 0);
    }
L_00192ac4:;
    {
        uint32_t v = cpu->r[6] * cpu->r[0] + cpu->r[0]; cpu->r[6] = v;
    }
L_00192ac8:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_00192acc:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001926ec;
        }
    }
L_00192ad0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x58u);
    }
L_00192ad4:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00192ad8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00192b20;
        }
    }
L_00192adc:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00192ae0:;
    {
        cpu->r[2] = 0x00000004u;
    }
L_00192ae4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_00192ae8:;
    {
        cpu->r[14] = 0x00192aecu; imp_memcpy(cpu); /* memcpy */
    }
L_00192aec:;
    {
        cpu->r[3] = rd16(cpu->r[4] + + 0x4u);
    }
L_00192af0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x58u);
    }
L_00192af4:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], 0x00000001u, 1, 1);
    }
L_00192af8:;
    {
        uint32_t wb_tmp = cpu->r[7] + 0x00000002u;
        wr16(cpu->r[7], cpu->r[3]);
        cpu->r[7] = wb_tmp;
    }
L_00192afc:;
    {
        uint32_t v = cpu->r[2] & ~ 0x00000001u; cpu->r[2] = v;
    }
L_00192b00:;
    {
        cpu->r[3] = rd8(cpu->r[4] + + 0x4cu);
    }
L_00192b04:;
    {
        wr32(cpu->r[4] + + 0x58u, cpu->r[2]);
    }
L_00192b08:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], cpu->r[3], 0, 0);
    }
L_00192b0c:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[3]);
    }
L_00192b10:;
    {
        if (cond_test(cpu, 4)) {
        goto L_001926ec;
        }
    }
L_00192b14:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x58u);
    }
L_00192b18:;
    {
        { uint32_t v = cpu->r[3] & 0x00000001u; set_nz(cpu, v); }
    }
L_00192b1c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00192adc;
        }
    }
L_00192b20:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0xcu);
    }
L_00192b24:;
    {
        cpu->r[0] = rd8(cpu->r[4] + + 0x6u);
    }
L_00192b28:;
    {
        cpu->r[2] = rd8(cpu->r[5]);
    }
L_00192b2c:;
    {
        cpu->r[12] = rd32(cpu->r[8] + cpu->r[9]);
    }
L_00192b30:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 1u, &shc); cpu->r[1] = v;
    }
L_00192b34:;
    {
        { uint32_t v = cpu->r[2] & 0x00000004u; set_nz(cpu, v); }
    }
L_00192b38:;
    {
        uint32_t v = cpu->r[2] & 0x0000000fu; cpu->r[2] = v;
    }
L_00192b3c:;
    {
        cpu->r[9] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x4u);
    }
L_00192b40:;
    {
        cpu->r[12] = (uint32_t)(int32_t)s16(cpu->r[12] + cpu->r[1]);
    }
L_00192b44:;
    {
        uint32_t v = shifter(cpu->r[12], 1, 3u, &shc); cpu->r[1] = v;
    }
L_00192b48:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[12], 0, 0);
        }
    }
L_00192b4c:;
    {
        { uint32_t v = cpu->r[2] & 0x00000002u; set_nz(cpu, v); }
    }
L_00192b50:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[12], 1, 1u, &shc), 0, 0);
        }
    }
L_00192b54:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_00192b58:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[12], 1, 2u, &shc), 0, 0);
        }
    }
L_00192b5c:;
    {
        { uint32_t v = cpu->r[2] & 0x00000008u; set_nz(cpu, v); }
    }
L_00192b60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00192c48;
        }
    }
L_00192b64:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00192b68:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[9], cpu->r[1], 1, 0);
    }
L_00192b6c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[11], 1, 1);
    }
L_00192b70:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = cpu->r[11];
        }
    }
L_00192b74:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x10u);
    }
L_00192b78:;
    {
        cpu->r[1] = (uint32_t)((uint16_t)cpu->r[1]);
    }
L_00192b7c:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0xcu);
    }
L_00192b80:;
    {
        wr16(cpu->r[4] + + 0x4u, cpu->r[1]);
    }
L_00192b84:;
    {
        cpu->r[12] = rd32(cpu->r[8] + cpu->r[9]);
    }
L_00192b88:;
    {
        cpu->r[9] = rd32(cpu->r[8] + cpu->r[11]);
    }
L_00192b8c:;
    {
        cpu->r[2] = rd8(cpu->r[12] + cpu->r[2]);
    }
L_00192b90:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_00192b94:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000058u, 1, 1);
    }
L_00192b98:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = 0x00000058u;
        }
    }
L_00192b9c:;
    {
        wr8(cpu->r[4] + + 0x6u, cpu->r[2]);
    }
L_00192ba0:;
    {
        uint32_t wb_tmp = cpu->r[7] + 0x00000002u;
        wr16(cpu->r[7], cpu->r[1]);
        cpu->r[7] = wb_tmp;
    }
L_00192ba4:;
    {
        cpu->r[12] = rd8(cpu->r[4] + + 0x6u);
    }
L_00192ba8:;
    {
        cpu->r[2] = rd8(cpu->r[5]);
    }
L_00192bac:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[4] + + 0x4u);
    }
L_00192bb0:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 1u, &shc); cpu->r[1] = v;
    }
L_00192bb4:;
    {
        uint32_t v = shifter(cpu->r[2], 3, 4u, &shc); cpu->r[2] = v;
    }
L_00192bb8:;
    {
        cpu->r[9] = (uint32_t)(int32_t)s16(cpu->r[9] + cpu->r[1]);
    }
L_00192bbc:;
    {
        { uint32_t v = cpu->r[2] & 0x00000004u; set_nz(cpu, v); }
    }
L_00192bc0:;
    {
        uint32_t v = shifter(cpu->r[9], 1, 3u, &shc); cpu->r[1] = v;
    }
L_00192bc4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[9], 0, 0);
        }
    }
L_00192bc8:;
    {
        { uint32_t v = cpu->r[2] & 0x00000002u; set_nz(cpu, v); }
    }
L_00192bcc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[9], 1, 1u, &shc), 0, 0);
        }
    }
L_00192bd0:;
    {
        { uint32_t v = cpu->r[2] & 0x00000001u; set_nz(cpu, v); }
    }
L_00192bd4:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[9], 1, 2u, &shc), 0, 0);
        }
    }
L_00192bd8:;
    {
        { uint32_t v = cpu->r[2] & 0x00000008u; set_nz(cpu, v); }
    }
L_00192bdc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00192c5c;
        }
    }
L_00192be0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 0);
    }
L_00192be4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00192be8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[1], 1, 1);
    }
L_00192bec:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = cpu->r[1];
        }
    }
L_00192bf0:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x10u);
    }
L_00192bf4:;
    {
        cpu->r[0] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_00192bf8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x28u);
    }
L_00192bfc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00192c00:;
    {
        wr16(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_00192c04:;
    {
        cpu->r[9] = rd32(cpu->r[8] + cpu->r[11]);
    }
L_00192c08:;
    {
        cpu->r[11] = rd32(cpu->r[4] + + 0x20u);
    }
L_00192c0c:;
    {
        cpu->r[2] = rd8(cpu->r[9] + cpu->r[2]);
    }
L_00192c10:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x00000001u, 0, 0);
    }
L_00192c14:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[11]);
    }
L_00192c18:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[12], 0, 0);
    }
L_00192c1c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000058u, 1, 1);
    }
L_00192c20:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[2] = 0x00000058u;
        }
    }
L_00192c24:;
    {
        wr8(cpu->r[4] + + 0x6u, cpu->r[2]);
    }
L_00192c28:;
    {
        uint32_t wb_tmp = cpu->r[7] + 0x00000002u;
        wr16(cpu->r[7], cpu->r[0]);
        cpu->r[7] = wb_tmp;
    }
L_00192c2c:;
    {
        cpu->r[2] = rd8(cpu->r[1] + + 0x15u);
    }
L_00192c30:;
    {
        cpu->r[1] = rd8(cpu->r[1] + + 0x14u);
    }
L_00192c34:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[2], 2, 8u, &shc); cpu->r[2] = v;
    }
L_00192c38:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[2], 1, 1);
    }
L_00192c3c:;
    {
        if (cond_test(cpu, 3)) {
        uint32_t v = cpu->r[3] | 0x00000001u; cpu->r[3] = v;
        }
    }
L_00192c40:;
    {
        if (cond_test(cpu, 3)) {
        wr32(cpu->r[4] + + 0x58u, cpu->r[3]);
        }
    }
L_00192c44:;
    {
        goto L_00192ac8;
    }
L_00192c48:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[9], 0, 0);
    }
L_00192c4c:;
    {
        cpu->r[12] = 0x00007fffu;
    }
L_00192c50:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[12], 1, 1);
    }
L_00192c54:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[1] = cpu->r[12];
        }
    }
L_00192c58:;
    {
        goto L_00192b74;
    }
L_00192c5c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], cpu->r[0], 0, 0);
    }
L_00192c60:;
    {
        cpu->r[9] = 0x00007fffu;
    }
L_00192c64:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[9], 1, 1);
    }
L_00192c68:;
    {
        if (cond_test(cpu, 11)) {
        cpu->r[0] = cpu->r[9];
        }
    }
L_00192c6c:;
    {
        goto L_00192bf0;
    }
L_00192c70:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x34u);
    }
L_00192c74:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00192c78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00192c8c;
        }
    }
L_00192c7c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x50u);
    }
L_00192c80:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_00192c84:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00192c88:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00192c98;
        }
    }
L_00192c8c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x2cu);
    }
L_00192c90:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000003cu, 0, 0);
    }
L_00192c94:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00192c98u)) return;
    }
L_00192c98:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00192c9c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00192ca0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00192ca4:;
    {
        cpu->r[14] = 0x00192cacu;
    }
L_00192ca8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00192cacu)) return;
    }
L_00192cac:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x34u);
    }
L_00192cb0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x30u);
    }
L_00192cb4:;
    {
        cpu->r[14] = 0x00192cb8u; imp___aeabi_uidivmod(cpu); /* __aeabi_uidivmod */
    }
L_00192cb8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00192cbc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00192c8c;
        }
    }
L_00192cc0:;
    {
        goto L_00192c90;
    }
}

/* _ZNK16CSoundDecoderPCM15GetSamplingRateEv @ 00192cd0 (arm) */
void fn_00192cd0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00192cd0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x18u);
    }
L_00192cd4:;
    {
        cpu->r[12] = rd8(cpu->r[3] + + 0xdu);
    }
L_00192cd8:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0xeu);
    }
L_00192cdc:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0xcu);
    }
L_00192ce0:;
    {
        cpu->r[0] = rd8(cpu->r[3] + + 0xfu);
    }
L_00192ce4:;
    {
        uint32_t v = cpu->r[1] | shifter(cpu->r[12], 2, 8u, &shc); cpu->r[3] = v;
    }
L_00192ce8:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[2], 2, 16u, &shc); cpu->r[3] = v;
    }
L_00192cec:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[0], 2, 24u, &shc); cpu->r[0] = v;
    }
L_00192cf0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK16CSoundDecoderPCM10GetChannelEv @ 00192cf4 (arm) */
void fn_00192cf4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00192cf4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x18u);
    }
L_00192cf8:;
    {
        cpu->r[0] = rd8(cpu->r[3] + + 0xbu);
    }
L_00192cfc:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0xau);
    }
L_00192d00:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[0], 2, 8u, &shc); cpu->r[0] = v;
    }
L_00192d04:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK16CSoundDecoderPCM10GetPCMSizeEv @ 00192d08 (arm) */
void fn_00192d08(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00192d08:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x20u);
    }
L_00192d0c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZNK16CSoundDecoderPCM21GetNbEffectiveSamplesEv @ 00192d10 (arm) */
void fn_00192d10(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00192d10:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x18u);
    }
L_00192d14:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00192d18:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x20u);
    }
L_00192d1c:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0x15u);
    }
L_00192d20:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x14u);
    }
L_00192d24:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[1], 2, 8u, &shc); cpu->r[1] = v;
    }
L_00192d28:;
    {
        cpu->r[14] = 0x00192d2cu; imp___aeabi_uidiv(cpu); /* __aeabi_uidiv */
    }
L_00192d2c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00192d30u)) return;
    }
}

/* _ZNK16CSoundDecoderPCM15GetTotalSamplesEv @ 00192d30 (arm) */
void fn_00192d30(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00192d30:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x18u);
    }
L_00192d34:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00192d38:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x20u);
    }
L_00192d3c:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0x15u);
    }
L_00192d40:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x14u);
    }
L_00192d44:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[1], 2, 8u, &shc); cpu->r[1] = v;
    }
L_00192d48:;
    {
        cpu->r[14] = 0x00192d4cu; imp___aeabi_uidiv(cpu); /* __aeabi_uidiv */
    }
L_00192d4c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00192d50u)) return;
    }
}

/* _ZN16CSoundDecoderPCM6DecodeEPsib @ 00192d50 (arm) */
void fn_00192d50(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00192d50:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00192d54:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_00192d58:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x18u);
    }
L_00192d5c:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_00192d60:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00192d64:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x24u);
    }
L_00192d68:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x15u);
    }
L_00192d6c:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x14u);
    }
L_00192d70:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x20u);
    }
L_00192d74:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[2], 2, 8u, &shc); cpu->r[2] = v;
    }
L_00192d78:;
    {
        uint32_t v = cpu->r[2] * cpu->r[5]; cpu->r[2] = v;
    }
L_00192d7c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], cpu->r[0], 0, 0);
    }
L_00192d80:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_00192d84:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_00192d88:;
    {
        if (cond_test(cpu, 3)) {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 0);
        }
    }
L_00192d8c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00192d90:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00192d94:;
    {
        cpu->r[14] = 0x00192d9cu;
    }
L_00192d98:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00192d9cu)) return;
    }
L_00192d9c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_00192da0:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[0]);
    }
L_00192da4:;
    {
        cpu->r[1] = rd8(cpu->r[3] + + 0x15u);
    }
L_00192da8:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x14u);
    }
L_00192dac:;
    {
        uint32_t v = cpu->r[3] | shifter(cpu->r[1], 2, 8u, &shc); cpu->r[1] = v;
    }
L_00192db0:;
    {
        cpu->r[14] = 0x00192db4u; imp___aeabi_idiv(cpu); /* __aeabi_idiv */
    }
L_00192db4:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00192db8:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00192dbc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00192dc8;
        }
    }
L_00192dc0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[0], 1, 1);
    }
L_00192dc4:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00192dd0;
        }
    }
L_00192dc8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00192dcc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00192dd0u)) return;
    }
L_00192dd0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00192dd4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00192dd8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00192ddc:;
    {
        cpu->r[14] = 0x00192de4u;
    }
L_00192de0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00192de4u)) return;
    }
L_00192de4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00192de8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00192decu)) return;
    }
}

/* _ZN16CSoundDecoderPCM4GoToEi @ 00192dec (arm) */
void fn_00192dec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00192dec:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00192df0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00192df4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00192df8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00192e1c;
        }
    }
L_00192dfc:;
    {
        cpu->r[0] = rd32(0x00192e04u + + 0x44u);
    }
L_00192e00:;
    {
        cpu->r[2] = 0x00000076u;
    }
L_00192e04:;
    {
        cpu->r[1] = rd32(0x00192e0cu + + 0x40u);
    }
L_00192e08:;
    {
        cpu->r[3] = rd32(0x00192e10u + + 0x40u);
    }
L_00192e0c:;
    {
        cpu->r[0] = add_flags(cpu, 0x00192e14u, cpu->r[0], 0, 0);
    }
L_00192e10:;
    {
        cpu->r[1] = add_flags(cpu, 0x00192e18u, cpu->r[1], 0, 0);
    }
L_00192e14:;
    {
        cpu->r[3] = add_flags(cpu, 0x00192e1cu, cpu->r[3], 0, 0);
    }
L_00192e18:;
    {
        cpu->r[14] = 0x00192e1cu; imp_printf(cpu); /* printf */
    }
L_00192e1c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_00192e20:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00192e24:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8u);
    }
L_00192e28:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00192e2c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000002cu, 0, 0);
    }
L_00192e30:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00192e34:;
    {
        cpu->r[14] = 0x00192e3cu;
    }
L_00192e38:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00192e3cu)) return;
    }
L_00192e3c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00192e40:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_00192e44:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00192e48u)) return;
    }
}

/* _ZN16CSoundDecoderPCMD1Ev @ 00192e54 (arm) */
void fn_00192e54(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00192e54:;
    {
        cpu->r[3] = rd32(0x00192e5cu + + 0x30u);
    }
L_00192e58:;
    {
        cpu->r[2] = rd32(0x00192e60u + + 0x30u);
    }
L_00192e5c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00192e64u, cpu->r[3], 0, 0);
    }
L_00192e60:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00192e64:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00192e68:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_00192e6c:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00192e70:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00192e74:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00192e78:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_00192e7c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00192e84;
        }
    }
L_00192e80:;
    {
        cpu->r[14] = 0x00192e84u; fn_0018ba60(cpu);
    }
L_00192e84:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00192e88:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00192e8cu)) return;
    }
}

/* _ZN16CSoundDecoderPCMD0Ev @ 00192e94 (arm) */
void fn_00192e94(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00192e94:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00192e98:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00192e9c:;
    {
        cpu->r[14] = 0x00192ea0u; fn_00192e54(cpu);
    }
L_00192ea0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00192ea4:;
    {
        cpu->r[14] = 0x00192ea8u; fn_0018ba20(cpu);
    }
L_00192ea8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00192eac:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00192eb0u)) return;
    }
}

/* _ZN16CSoundDecoderPCMD2Ev @ 00192eb0 (arm) */
void fn_00192eb0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00192eb0:;
    {
        cpu->r[3] = rd32(0x00192eb8u + + 0x30u);
    }
L_00192eb4:;
    {
        cpu->r[2] = rd32(0x00192ebcu + + 0x30u);
    }
L_00192eb8:;
    {
        cpu->r[3] = add_flags(cpu, 0x00192ec0u, cpu->r[3], 0, 0);
    }
L_00192ebc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00192ec0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00192ec4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_00192ec8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00192ecc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00192ed0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00192ed4:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_00192ed8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00192ee0;
        }
    }
L_00192edc:;
    {
        cpu->r[14] = 0x00192ee0u; fn_0018ba60(cpu);
    }
L_00192ee0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00192ee4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00192ee8u)) return;
    }
}

/* _ZN16CSoundDecoderPCMC1EP10ISoundFileRK10RiffHeaderRK12FormatHeader @ 00192ef0 (arm) */
void fn_00192ef0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00192ef0:;
    {
        cpu->r[12] = rd32(0x00192ef8u + + 0xc4u);
    }
L_00192ef4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00192ef8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00192efc:;
    {
        cpu->r[14] = rd32(0x00192f04u + + 0xbcu);
    }
L_00192f00:;
    {
        cpu->r[12] = add_flags(cpu, 0x00192f08u, cpu->r[12], 0, 0);
    }
L_00192f04:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00192f08:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00192f0c:;
    {
        cpu->r[0] = 0x00000200u;
    }
L_00192f10:;
    {
        cpu->r[14] = rd32(cpu->r[12] + cpu->r[14]);
    }
L_00192f14:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[2]);
    }
L_00192f18:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000008u, 0, 0);
    }
L_00192f1c:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_00192f20:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[5]);
    }
L_00192f24:;
    {
        wr32(cpu->r[4], cpu->r[14]);
    }
L_00192f28:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[1]);
        wr32(ea + 4u, cpu->r[5]);
    }
L_00192f2c:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[5]);
    }
L_00192f30:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[0]);
    }
L_00192f34:;
    {
        wr8(cpu->r[4] + + 0x1cu, cpu->r[5]);
    }
L_00192f38:;
    {
        wr8(cpu->r[4] + + 0x1du, cpu->r[5]);
    }
L_00192f3c:;
    {
        wr8(cpu->r[4] + + 0x1eu, cpu->r[5]);
    }
L_00192f40:;
    {
        wr8(cpu->r[4] + + 0x1fu, cpu->r[5]);
    }
L_00192f44:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[5]);
    }
L_00192f48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00192f94;
        }
    }
L_00192f4c:;
    {
        cpu->r[14] = 0x00192f50u; imp__Znaj(cpu); /* _Znaj */
    }
L_00192f50:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_00192f54:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_00192f58:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_00192f5c:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00192f60:;
    {
        cpu->r[14] = 0x00192f68u;
    }
L_00192f64:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00192f68u)) return;
    }
L_00192f68:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_00192f6c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00192f70:;
    {
        cpu->r[2] = 0x00000008u;
    }
L_00192f74:;
    {
        cpu->r[3] = rd32(cpu->r[12]);
    }
L_00192f78:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000024u, 1, 0);
    }
L_00192f7c:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_00192f80:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_00192f84:;
    {
        cpu->r[14] = 0x00192f8cu;
    }
L_00192f88:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00192f8cu)) return;
    }
L_00192f8c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00192f90:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00192f94u)) return;
    }
L_00192f94:;
    {
        cpu->r[0] = rd32(0x00192f9cu + + 0x28u);
    }
L_00192f98:;
    {
        cpu->r[2] = 0x00000018u;
    }
L_00192f9c:;
    {
        cpu->r[1] = rd32(0x00192fa4u + + 0x24u);
    }
L_00192fa0:;
    {
        cpu->r[3] = rd32(0x00192fa8u + + 0x24u);
    }
L_00192fa4:;
    {
        cpu->r[0] = add_flags(cpu, 0x00192facu, cpu->r[0], 0, 0);
    }
L_00192fa8:;
    {
        cpu->r[1] = add_flags(cpu, 0x00192fb0u, cpu->r[1], 0, 0);
    }
L_00192fac:;
    {
        cpu->r[3] = add_flags(cpu, 0x00192fb4u, cpu->r[3], 0, 0);
    }
L_00192fb0:;
    {
        cpu->r[14] = 0x00192fb4u; imp_printf(cpu); /* printf */
    }
L_00192fb4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x10u);
    }
L_00192fb8:;
    {
        goto L_00192f4c;
    }
}

/* _ZN16CSoundDecoderPCMC2EP10ISoundFileRK10RiffHeaderRK12FormatHeader @ 00192fd0 (arm) */
void fn_00192fd0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00192fd0:;
    {
        cpu->r[12] = rd32(0x00192fd8u + + 0xc4u);
    }
L_00192fd4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00192fd8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00192fdc:;
    {
        cpu->r[14] = rd32(0x00192fe4u + + 0xbcu);
    }
L_00192fe0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00192fe8u, cpu->r[12], 0, 0);
    }
L_00192fe4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00192fe8:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00192fec:;
    {
        cpu->r[0] = 0x00000200u;
    }
L_00192ff0:;
    {
        cpu->r[14] = rd32(cpu->r[12] + cpu->r[14]);
    }
L_00192ff4:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[2]);
    }
L_00192ff8:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], 0x00000008u, 0, 0);
    }
L_00192ffc:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_00193000:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[5]);
    }
L_00193004:;
    {
        wr32(cpu->r[4], cpu->r[14]);
    }
L_00193008:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[1]);
        wr32(ea + 4u, cpu->r[5]);
    }
L_0019300c:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[5]);
    }
L_00193010:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[0]);
    }
L_00193014:;
    {
        wr8(cpu->r[4] + + 0x1cu, cpu->r[5]);
    }
L_00193018:;
    {
        wr8(cpu->r[4] + + 0x1du, cpu->r[5]);
    }
L_0019301c:;
    {
        wr8(cpu->r[4] + + 0x1eu, cpu->r[5]);
    }
L_00193020:;
    {
        wr8(cpu->r[4] + + 0x1fu, cpu->r[5]);
    }
L_00193024:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[5]);
    }
L_00193028:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00193074;
        }
    }
L_0019302c:;
    {
        cpu->r[14] = 0x00193030u; imp__Znaj(cpu); /* _Znaj */
    }
L_00193030:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_00193034:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_00193038:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_0019303c:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00193040:;
    {
        cpu->r[14] = 0x00193048u;
    }
L_00193044:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00193048u)) return;
    }
L_00193048:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x4u);
    }
L_0019304c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x0000001cu, 0, 0);
    }
L_00193050:;
    {
        cpu->r[2] = 0x00000008u;
    }
L_00193054:;
    {
        cpu->r[3] = rd32(cpu->r[12]);
    }
L_00193058:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000024u, 1, 0);
    }
L_0019305c:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_00193060:;
    {
        cpu->r[0] = cpu->r[12];
    }
L_00193064:;
    {
        cpu->r[14] = 0x0019306cu;
    }
L_00193068:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019306cu)) return;
    }
L_0019306c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00193070:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00193074u)) return;
    }
L_00193074:;
    {
        cpu->r[0] = rd32(0x0019307cu + + 0x28u);
    }
L_00193078:;
    {
        cpu->r[2] = 0x00000018u;
    }
L_0019307c:;
    {
        cpu->r[1] = rd32(0x00193084u + + 0x24u);
    }
L_00193080:;
    {
        cpu->r[3] = rd32(0x00193088u + + 0x24u);
    }
L_00193084:;
    {
        cpu->r[0] = add_flags(cpu, 0x0019308cu, cpu->r[0], 0, 0);
    }
L_00193088:;
    {
        cpu->r[1] = add_flags(cpu, 0x00193090u, cpu->r[1], 0, 0);
    }
L_0019308c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00193094u, cpu->r[3], 0, 0);
    }
L_00193090:;
    {
        cpu->r[14] = 0x00193094u; imp_printf(cpu); /* printf */
    }
L_00193094:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x10u);
    }
L_00193098:;
    {
        goto L_0019302c;
    }
}

/* _ZN10AdpcmStateC2Ev @ 001930b0 (arm) */
void fn_001930b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001930b0:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001930b4:;
    {
        wr8(cpu->r[0] + + 0x2u, cpu->r[2]);
    }
L_001930b8:;
    {
        wr16(cpu->r[0], cpu->r[2]);
    }
L_001930bc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10AdpcmStateC1Ev @ 001930c0 (arm) */
void fn_001930c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001930c0:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001930c4:;
    {
        wr8(cpu->r[0] + + 0x2u, cpu->r[2]);
    }
L_001930c8:;
    {
        wr16(cpu->r[0], cpu->r[2]);
    }
L_001930cc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10AdpcmStateD2Ev @ 001930d0 (arm) */
void fn_001930d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001930d0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN10AdpcmStateD1Ev @ 001930d4 (arm) */
void fn_001930d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001930d4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12CSourcesPoolD1Ev @ 001930d8 (arm) */
void fn_001930d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001930d8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12CSourcesPool22GetNextAvailableSourceEv @ 001930dc (arm) */
void fn_001930dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001930dc:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001930e0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12CSourcesPool13ReleaseSourceEj @ 001930e4 (arm) */
void fn_001930e4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001930e4:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x98u);
    }
L_001930e8:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001930ec:;
    {
        if (cond_test(cpu, 14)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_001930f0:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001930f4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001930f8:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001930fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00193124;
        }
    }
L_00193100:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00193104:;
    {
        goto L_00193114;
    }
L_00193108:;
    {
        cpu->r[2] = rd32(cpu->r[0] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_0019310c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_00193110:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00193124;
        }
    }
L_00193114:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00193118:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_0019311c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00193108;
        }
    }
L_00193120:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00193124:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], cpu->r[3], 0, 0);
    }
L_00193128:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0019312c:;
    {
        wr8(cpu->r[3] + + 0x78u, cpu->r[2]);
    }
L_00193130:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12CSourcesPool15GenerateSourcesEv @ 00193134 (arm) */
void fn_00193134(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00193134:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12CSourcesPool14DestroySourcesEv @ 00193138 (arm) */
void fn_00193138(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00193138:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0019313c:;
    {
        wr32(cpu->r[0] + + 0x98u, cpu->r[3]);
    }
L_00193140:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_52 @ 00193144 (arm) */
void fn_00193144(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00193144:;
    {
        cpu->r[2] = rd32(0x0019314cu + + 0x28u);
    }
L_00193148:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_0019314c:;
    {
        cpu->r[3] = rd32(0x00193154u + + 0x24u);
    }
L_00193150:;
    {
        cpu->r[2] = add_flags(cpu, 0x00193158u, cpu->r[2], 0, 0);
    }
L_00193154:;
    {
        cpu->r[0] = rd32(0x0019315cu + + 0x20u);
    }
L_00193158:;
    {
        cpu->r[1] = rd32(0x00193160u + + 0x20u);
    }
L_0019315c:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_00193160:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_00193164:;
    {
        wr32(cpu->r[3] + + 0x98u, cpu->r[12]);
    }
L_00193168:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_0019316c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00193170:;
    {
        imp___aeabi_atexit(cpu); /* tail __aeabi_atexit */ return;
    }
}

/* _Z8FS_PrintPcz @ 00193184 (arm) */
void fn_00193184(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00193184:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[0]);
        wr32(cpu->r[13] + 4u, cpu->r[1]);
        wr32(cpu->r[13] + 8u, cpu->r[2]);
        wr32(cpu->r[13] + 12u, cpu->r[3]);
    }
L_00193188:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0019318c:;
    {
        cpu->r[4] = rd32(0x00193194u + + 0x70u);
    }
L_00193190:;
    {
        cpu->r[5] = rd32(0x00193198u + + 0x70u);
    }
L_00193194:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00193198:;
    {
        cpu->r[4] = add_flags(cpu, 0x001931a0u, cpu->r[4], 0, 0);
    }
L_0019319c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001931a0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001931a4:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001931a8:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_001931ac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001931b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001931e8;
        }
    }
L_001931b4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x18u);
    }
L_001931b8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_001931bc:;
    {
        cpu->r[14] = 0x001931c0u; imp_vfprintf(cpu); /* vfprintf */
    }
L_001931c0:;
    {
        cpu->r[4] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001931c4:;
    {
        cpu->r[0] = 0x0000000au;
    }
L_001931c8:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_001931cc:;
    {
        cpu->r[14] = 0x001931d0u; imp_fputc(cpu); /* fputc */
    }
L_001931d0:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_001931d4:;
    {
        cpu->r[14] = 0x001931d8u; imp_fflush(cpu); /* fflush */
    }
L_001931d8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001931dc:;
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
L_001931e0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001931e4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001931e8:;
    {
        cpu->r[0] = rd32(0x001931f0u + + 0x1cu);
    }
L_001931ec:;
    {
        cpu->r[1] = rd32(0x001931f4u + + 0x1cu);
    }
L_001931f0:;
    {
        cpu->r[0] = add_flags(cpu, 0x001931f8u, cpu->r[0], 0, 0);
    }
L_001931f4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001931fcu, cpu->r[1], 0, 0);
    }
L_001931f8:;
    {
        cpu->r[14] = 0x001931fcu; imp_fopen(cpu); /* fopen */
    }
L_001931fc:;
    {
        wr32(cpu->r[6], cpu->r[0]);
    }
L_00193200:;
    {
        goto L_001931b4;
    }
}

/* _Z7S_PrintPcz @ 00193214 (arm) */
void fn_00193214(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00193214:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[0]);
        wr32(cpu->r[13] + 4u, cpu->r[1]);
        wr32(cpu->r[13] + 8u, cpu->r[2]);
        wr32(cpu->r[13] + 12u, cpu->r[3]);
    }
L_00193218:;
    {
        cpu->r[3] = rd32(0x00193220u + + 0x50u);
    }
L_0019321c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00193220:;
    {
        cpu->r[4] = rd32(0x00193228u + + 0x4cu);
    }
L_00193224:;
    {
        cpu->r[3] = add_flags(cpu, 0x0019322cu, cpu->r[3], 0, 0);
    }
L_00193228:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_0019322c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00193230:;
    {
        cpu->r[4] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_00193234:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00193238:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_0019323c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x000000a8u, 0, 0);
    }
L_00193240:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[0]);
    }
L_00193244:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00193248:;
    {
        cpu->r[14] = 0x0019324cu; imp_vfprintf(cpu); /* vfprintf */
    }
L_0019324c:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00193250:;
    {
        cpu->r[0] = 0x0000000au;
    }
L_00193254:;
    {
        cpu->r[14] = 0x00193258u; imp_fputc(cpu); /* fputc */
    }
L_00193258:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019325c:;
    {
        cpu->r[14] = 0x00193260u; imp_fflush(cpu); /* fflush */
    }
L_00193260:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00193264:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_00193268:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_0019326c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game13UpdateXPlayerEv @ 00193278 (arm) */
void fn_00193278(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00193278:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0019327c:;
    {
        cpu->r[5] = 0x00006774u;
    }
L_00193280:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00193284:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[5]);
    }
L_00193288:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0019328c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00193290u)) return;
        }
    }
L_00193290:;
    {
        cpu->r[3] = 0x00006778u;
    }
L_00193294:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00193298:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0019329c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001932a0:;
    {
        cpu->r[14] = 0x001932a8u;
    }
L_001932a4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001932a8u)) return;
    }
L_001932a8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_001932ac:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001932b0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001932b4:;
    {
        cpu->r[14] = 0x001932bcu;
    }
L_001932b8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001932bcu)) return;
    }
L_001932bc:;
    {
        cpu->r[3] = 0x00006764u;
    }
L_001932c0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001932c4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001932c8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001932cc:;
    {
        cpu->r[14] = 0x001932d4u;
    }
L_001932d0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001932d4u)) return;
    }
L_001932d4:;
    {
        cpu->r[3] = 0x0000676cu;
    }
L_001932d8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001932dc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001932e0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001932e4:;
    {
        cpu->r[14] = 0x001932ecu;
    }
L_001932e8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001932ecu)) return;
    }
L_001932ec:;
    {
        cpu->r[3] = 0x00006768u;
    }
L_001932f0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001932f4:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001932f8:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001932fc:;
    {
        cpu->r[14] = 0x00193304u;
    }
L_00193300:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00193304u)) return;
    }
L_00193304:;
    {
        cpu->r[3] = 0x00006770u;
    }
L_00193308:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0019330c:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00193310:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00193314:;
    {
        cpu->r[14] = 0x0019331cu;
    }
L_00193318:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019331cu)) return;
    }
L_0019331c:;
    {
        cpu->r[3] = 0x0000677cu;
    }
L_00193320:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00193324:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00193328:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0019332c:;
    {
        cpu->r[14] = 0x00193334u;
    }
L_00193330:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00193334u)) return;
    }
L_00193334:;
    {
        cpu->r[3] = 0x00006760u;
    }
L_00193338:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_0019333c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00193340:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00193344u)) return;
        }
    }
L_00193344:;
    {
        cpu->r[3] = 0x0000e21cu;
    }
L_00193348:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0019334c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00193350:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000006u, 1, 1);
    }
L_00193354:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019336c;
        }
    }
L_00193358:;
    {
        cpu->r[3] = 0x00006788u;
    }
L_0019335c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00193360:;
    {
        cpu->r[2] = rd8(cpu->r[3] + + 0x64u);
    }
L_00193364:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00193368:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019339c;
        }
    }
L_0019336c:;
    {
        cpu->r[3] = 0x00006774u;
    }
L_00193370:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00193374:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x40u);
    }
L_00193378:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0019337c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00193380u)) return;
        }
    }
L_00193380:;
    {
        cpu->r[3] = 0x00006788u;
    }
L_00193384:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00193388:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0019338c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00193390:;
    {
        cpu->r[14] = 0x00193398u;
    }
L_00193394:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x8u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00193398u)) return;
    }
L_00193398:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0019339cu)) return;
    }
L_0019339c:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x8au);
    }
L_001933a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001933a4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001933a8u)) return;
        }
    }
L_001933a8:;
    {
        cpu->r[3] = 0x00006774u;
    }
L_001933ac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001933b0:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x40u);
    }
L_001933b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001933b8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001933bcu)) return;
        }
    }
L_001933bc:;
    {
        goto L_00193380;
    }
}

/* _ZN4Game21OnMPListGameParameterEP10DataPacket @ 001933c0 (arm) */
void fn_001933c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001933c0:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001933c4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game9TransToIpERPc @ 001933c8 (arm) */
void fn_001933c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001933c8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game21OnMPFinishGameSuccessEv @ 001933cc (arm) */
void fn_001933cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001933cc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game19OnMPuPnPTestSuccessEv @ 001933d0 (arm) */
void fn_001933d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001933d0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game17SetOnlineSubStateENS_14OnlineSubStateE @ 001933d4 (arm) */
void fn_001933d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001933d4:;
    {
        cpu->r[3] = 0x0000e21cu;
    }
L_001933d8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001933dc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001933e0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000006u, 1, 1);
    }
L_001933e4:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
        }
    }
L_001933e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00193404;
        }
    }
L_001933ec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001933f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00193404;
        }
    }
L_001933f4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001933f8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x0000e220u;
        }
    }
L_001933fc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
        }
    }
L_00193400:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[0] + cpu->r[2], cpu->r[3]);
        }
    }
L_00193404:;
    {
        cpu->r[3] = 0x0000e21cu;
    }
L_00193408:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0019340c:;
    {
        wr32(cpu->r[0] + cpu->r[3], cpu->r[1]);
    }
L_00193410:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game20OnMPStartGameSuccessEv @ 00193414 (arm) */
void fn_00193414(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00193414:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_00193418:;
    {
        return fn_001933d4(cpu);
    }
}

/* _ZN4Game19OnMPStartGameFailedEi @ 0019341c (arm) */
void fn_0019341c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019341c:;
    {
        cpu->r[3] = 0x00004020u;
    }
L_00193420:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_00193424:;
    {
        if (cond_test(cpu, 2)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00193428:;
    {
        cpu->r[1] = 0x0000000fu;
    }
L_0019342c:;
    {
        return fn_001933d4(cpu);
    }
}

/* _ZN4Game22OnMPJoinSessionSuccessEv @ 00193430 (arm) */
void fn_00193430(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00193430:;
    {
        cpu->r[1] = 0x00000007u;
    }
L_00193434:;
    {
        return fn_001933d4(cpu);
    }
}

/* _ZN4Game24OnMPCreateSessionSuccessEv @ 00193438 (arm) */
void fn_00193438(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00193438:;
    {
        cpu->r[1] = 0x00000007u;
    }
L_0019343c:;
    {
        return fn_001933d4(cpu);
    }
}

/* _ZN4Game22OnMPListSessionSuccessEv @ 00193440 (arm) */
void fn_00193440(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00193440:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_00193444:;
    {
        return fn_001933d4(cpu);
    }
}

/* _ZN4Game20OnMPLeaveGameSuccessEv @ 00193448 (arm) */
void fn_00193448(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00193448:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* init_array_53 @ 0019344c (arm) */
void fn_0019344c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019344c:;
    {
        cpu->r[3] = rd32(0x00193454u + + 0x20u);
    }
L_00193450:;
    {
        cpu->r[1] = rd32(0x00193458u + + 0x20u);
    }
L_00193454:;
    {
        cpu->r[3] = add_flags(cpu, 0x0019345cu, cpu->r[3], 0, 0);
    }
L_00193458:;
    {
        cpu->r[2] = rd32(0x00193460u + + 0x1cu);
    }
L_0019345c:;
    {
        cpu->r[3] = rd32(cpu->r[3] + cpu->r[1]);
    }
L_00193460:;
    {
        cpu->r[2] = add_flags(cpu, 0x00193468u, cpu->r[2], 0, 0);
    }
L_00193464:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00193468:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 0);
    }
L_0019346c:;
    {
        wr32(cpu->r[2], cpu->r[3]);
    }
L_00193470:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4Game16OnMPLoginSuccessEv @ 00193480 (arm) */
void fn_00193480(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00193480:;
    {
        cpu->r[3] = 0x0000676cu;
    }
L_00193484:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_00193488:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0019348c:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00193490:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00193494:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00193498:;
    {
        cpu->r[14] = 0x0019349cu; fn_001c3490(cpu);
    }
L_0019349c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001934a0:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_001934a4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_001934a8:;
    {
        return fn_001933d4(cpu);
    }
}

/* _ZThn4_N4Game16OnRequestFailureEii @ 001934ac (arm) */
void fn_001934ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001934ac:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000004u, 1, 0);
    }
L_001934b0:;
    {
        return fn_001934b4(cpu);
    }
}

/* _ZN4Game16OnRequestFailureEii @ 001934b4 (arm) */
void fn_001934b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001934b4:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000000fu, 1, 1);
    }
L_001934b8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001934bc:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001934c0:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001934c4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001934c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00193508;
        }
    }
L_001934cc:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000003du, 1, 1);
    }
L_001934d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019353c;
        }
    }
L_001934d4:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001934d8:;
    {
        cpu->r[14] = 0x001934dcu; fn_001933d4(cpu);
    }
L_001934dc:;
    {
        cpu->r[2] = 0x0000e224u;
    }
L_001934e0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_001934e4:;
    {
        cpu->r[0] = rd32(0x001934ecu + + 0x94u);
    }
L_001934e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[6], 0x0001e000u, 0, 0);
    }
L_001934ec:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001934f0:;
    {
        wr32(cpu->r[6] + cpu->r[2], cpu->r[5]);
    }
L_001934f4:;
    {
        cpu->r[0] = add_flags(cpu, 0x001934fcu, cpu->r[0], 0, 0);
    }
L_001934f8:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001934fc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000024cu, 0, 0);
    }
L_00193500:;
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
L_00193504:;
    {
        return fn_001d0ac4(cpu);
    }
L_00193508:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000043u, 1, 1);
    }
L_0019350c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00193568;
        }
    }
L_00193510:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00193514:;
    {
        cpu->r[14] = 0x00193518u; fn_001933d4(cpu);
    }
L_00193518:;
    {
        cpu->r[3] = 0x0000e224u;
    }
L_0019351c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00193520:;
    {
        cpu->r[0] = rd32(0x00193528u + + 0x5cu);
    }
L_00193524:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00193528:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0019352c:;
    {
        wr32(cpu->r[6] + cpu->r[3], cpu->r[5]);
    }
L_00193530:;
    {
        cpu->r[0] = add_flags(cpu, 0x00193538u, cpu->r[0], 0, 0);
    }
L_00193534:;
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
L_00193538:;
    {
        return fn_001d0ac4(cpu);
    }
L_0019353c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00193540:;
    {
        cpu->r[14] = 0x00193544u; fn_001933d4(cpu);
    }
L_00193544:;
    {
        cpu->r[3] = 0x0000e224u;
    }
L_00193548:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0019354c:;
    {
        cpu->r[0] = rd32(0x00193554u + + 0x34u);
    }
L_00193550:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00193554:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00193558:;
    {
        wr32(cpu->r[6] + cpu->r[3], cpu->r[5]);
    }
L_0019355c:;
    {
        cpu->r[0] = add_flags(cpu, 0x00193564u, cpu->r[0], 0, 0);
    }
L_00193560:;
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
L_00193564:;
    {
        return fn_001d0ac4(cpu);
    }
L_00193568:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_0019356c:;
    {
        cpu->r[14] = 0x00193570u; fn_001933d4(cpu);
    }
L_00193570:;
    {
        cpu->r[3] = 0x0000e224u;
    }
L_00193574:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00193578:;
    {
        wr32(cpu->r[6] + cpu->r[3], cpu->r[5]);
    }
L_0019357c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00193580u)) return;
    }
}

/* _ZThn4_N4Game16OnRequestTimeoutEi @ 0019358c (arm) */
void fn_0019358c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019358c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000004u, 1, 0);
    }
L_00193590:;
    {
        return fn_00193594(cpu);
    }
}

/* _ZN4Game16OnRequestTimeoutEi @ 00193594 (arm) */
void fn_00193594(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00193594:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000004du, 1, 1);
    }
L_00193598:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0019359c:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001935a0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001935a4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001935a8u)) return;
        }
    }
L_001935a8:;
    {
        cpu->r[3] = 0x00006788u;
    }
L_001935ac:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001935b0:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001935b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001935b8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = (~0x00000000u);
        }
    }
L_001935bc:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[3] + + 0x8cu, cpu->r[2]);
        }
    }
L_001935c0:;
    {
        cpu->r[14] = 0x001935c4u; fn_001933d4(cpu);
    }
L_001935c4:;
    {
        cpu->r[3] = 0x0000e224u;
    }
L_001935c8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001935cc:;
    {
        cpu->r[0] = rd32(0x001935d4u + + 0x14u);
    }
L_001935d0:;
    {
        cpu->r[2] = 0x00000029u;
    }
L_001935d4:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001935d8:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
    }
L_001935dc:;
    {
        cpu->r[0] = add_flags(cpu, 0x001935e4u, cpu->r[0], 0, 0);
    }
L_001935e0:;
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
L_001935e4:;
    {
        return fn_001d0ac4(cpu);
    }
}

/* _ZThn4_N4Game14OnNetworkErrorEv @ 001935ec (arm) */
void fn_001935ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001935ec:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000004u, 1, 0);
    }
L_001935f0:;
    {
        return fn_001935f4(cpu);
    }
}

/* _ZN4Game14OnNetworkErrorEv @ 001935f4 (arm) */
void fn_001935f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001935f4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001935f8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001935fc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00193600:;
    {
        cpu->r[14] = 0x00193604u; fn_001933d4(cpu);
    }
L_00193604:;
    {
        cpu->r[3] = 0x0000e224u;
    }
L_00193608:;
    {
        cpu->r[0] = rd32(0x00193610u + + 0x14u);
    }
L_0019360c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00193610:;
    {
        cpu->r[1] = (~0x00000001u);
    }
L_00193614:;
    {
        cpu->r[0] = add_flags(cpu, 0x0019361cu, cpu->r[0], 0, 0);
    }
L_00193618:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[1]);
    }
L_0019361c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_00193620:;
    {
        return fn_001d0ac4(cpu);
    }
}

/* _ZN4Game20OnMPStartGameSuccessEP10DataPacket @ 00193628 (arm) */
void fn_00193628(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00193628:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0019362c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00193630:;
    {
        cpu->r[0] = rd32(0x00193638u + + 0x14u);
    }
L_00193634:;
    {
        cpu->r[0] = add_flags(cpu, 0x0019363cu, cpu->r[0], 0, 0);
    }
L_00193638:;
    {
        cpu->r[14] = 0x0019363cu; fn_001d0ac4(cpu);
    }
L_0019363c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00193640:;
    {
        cpu->r[1] = 0x00000009u;
    }
L_00193644:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_00193648:;
    {
        return fn_001933d4(cpu);
    }
}

/* _ZN4Game23OnMPLeaveSessionSuccessEv @ 00193650 (arm) */
void fn_00193650(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00193650:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00193654:;
    {
        cpu->r[1] = 0x0000000cu;
    }
L_00193658:;
    {
        cpu->r[14] = 0x0019365cu; fn_001933d4(cpu);
    }
L_0019365c:;
    {
        cpu->r[0] = rd32(0x00193664u + + 0x8u);
    }
L_00193660:;
    {
        cpu->r[0] = add_flags(cpu, 0x00193668u, cpu->r[0], 0, 0);
    }
L_00193664:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_00193668:;
    {
        return fn_001d0ac4(cpu);
    }
}

/* _ZN4Game17OnMPFunctionErrorEPci @ 00193670 (arm) */
void fn_00193670(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00193670:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00193674:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00193678:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0019367c:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_00193680:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00193684:;
    {
        cpu->r[14] = 0x00193688u; fn_001933d4(cpu);
    }
L_00193688:;
    {
        cpu->r[2] = 0x0000e224u;
    }
L_0019368c:;
    {
        cpu->r[3] = 0x0000e228u;
    }
L_00193690:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_00193694:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00193698:;
    {
        cpu->r[0] = rd32(0x001936a0u + + 0x14u);
    }
L_0019369c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001936a0:;
    {
        wr32(cpu->r[5] + cpu->r[2], cpu->r[6]);
    }
L_001936a4:;
    {
        wr32(cpu->r[5] + cpu->r[3], cpu->r[4]);
    }
L_001936a8:;
    {
        cpu->r[0] = add_flags(cpu, 0x001936b0u, cpu->r[0], 0, 0);
    }
L_001936ac:;
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
L_001936b0:;
    {
        return fn_001d0ac4(cpu);
    }
}

/* _ZN4Game16OnMPNetworkErrorEi @ 001936b8 (arm) */
void fn_001936b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001936b8:;
    {
        cpu->r[3] = rd32(0x001936c0u + + 0x11cu);
    }
L_001936bc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001936c0:;
    {
        cpu->r[2] = rd32(0x001936c8u + + 0x118u);
    }
L_001936c4:;
    {
        cpu->r[6] = 0x00006788u;
    }
L_001936c8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001936d0u, cpu->r[3], 0, 0);
    }
L_001936cc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001936d0:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001936d4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[6]);
    }
L_001936d8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001936dc:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x8au);
    }
L_001936e0:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_001936e4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001936e8:;
    {
        cpu->r[3] = 0x0000677cu;
    }
L_001936ec:;
    {
        cpu->r[3] = rd32(cpu->r[2] + cpu->r[3]);
    }
L_001936f0:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_001936f4:;
    {
        wr32(cpu->r[3] + + 0x3cu, cpu->r[2]);
    }
L_001936f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019376c;
        }
    }
L_001936fc:;
    {
        cpu->r[3] = 0x0000e21cu;
    }
L_00193700:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00193704:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00193708:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_0019370c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00193790;
        }
    }
L_00193710:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000006u, 1, 1);
    }
L_00193714:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00193790;
        }
    }
L_00193718:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0019371c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00193790;
        }
    }
L_00193720:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00193724:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00193790;
        }
    }
L_00193728:;
    {
        cpu->r[2] = 0x0000ecf6u;
    }
L_0019372c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_00193730:;
    {
        cpu->r[2] = rd8(cpu->r[4] + cpu->r[2]);
    }
L_00193734:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00193738:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00193778;
        }
    }
L_0019373c:;
    {
        cpu->r[3] = 0x0000e224u;
    }
L_00193740:;
    {
        cpu->r[0] = rd32(0x00193748u + + 0x9cu);
    }
L_00193744:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00193748:;
    {
        cpu->r[0] = add_flags(cpu, 0x00193750u, cpu->r[0], 0, 0);
    }
L_0019374c:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[1]);
    }
L_00193750:;
    {
        cpu->r[14] = 0x00193754u; fn_001d0ac4(cpu);
    }
L_00193754:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00193758:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0019375c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00193760:;
    {
        cpu->r[14] = 0x00193768u;
    }
L_00193764:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00193768u)) return;
    }
L_00193768:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0019376cu)) return;
    }
L_0019376c:;
    {
        cpu->r[3] = 0x0000e21cu;
    }
L_00193770:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00193774:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00193778:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000009u, 1, 0);
    }
L_0019377c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00193780:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[3] = 0x0000e224u;
        }
    }
L_00193784:;
    {
        if (cond_test(cpu, 10)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_00193788:;
    {
        if (cond_test(cpu, 10)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
        }
    }
L_0019378c:;
    {
        if (cond_test(cpu, 10)) {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        uint32_t v3 = rd32(cpu->r[13] + 12u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[6] = v2;
        uint32_t t = v3;
        cpu->r[13] += 16u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00193790u)) return;
        }
    }
L_00193790:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00193794:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00193798:;
    {
        cpu->r[14] = 0x0019379cu; fn_001933d4(cpu);
    }
L_0019379c:;
    {
        cpu->r[3] = 0x0000ecf6u;
    }
L_001937a0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001937a4:;
    {
        cpu->r[0] = rd32(0x001937acu + + 0x3cu);
    }
L_001937a8:;
    {
        cpu->r[3] = rd8(cpu->r[4] + cpu->r[3]);
    }
L_001937ac:;
    {
        cpu->r[0] = add_flags(cpu, 0x001937b4u, cpu->r[0], 0, 0);
    }
L_001937b0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001937b4:;
    {
        cpu->r[3] = 0x0000e224u;
    }
L_001937b8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00004050u;
        }
    }
L_001937bc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_001937c0:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
        }
    }
L_001937c4:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[5]);
        }
    }
L_001937c8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[5] = cpu->r[2];
        }
    }
L_001937cc:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[2]);
        }
    }
L_001937d0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001937d4:;
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
L_001937d8:;
    {
        return fn_001d0ac4(cpu);
    }
}

/* _ZN4Game11SaveProfileEv @ 001937ec (arm) */
void fn_001937ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001937ec:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001937f0:;
    {
        cpu->r[4] = rd32(0x001937f8u + + 0xc0u);
    }
L_001937f4:;
    {
        cpu->r[6] = rd32(0x001937fcu + + 0xc0u);
    }
L_001937f8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000d0u, 1, 0);
    }
L_001937fc:;
    {
        cpu->r[4] = add_flags(cpu, 0x00193804u, cpu->r[4], 0, 0);
    }
L_00193800:;
    {
        cpu->r[5] = rd32(0x00193808u + + 0xb8u);
    }
L_00193804:;
    {
        cpu->r[1] = rd32(0x0019380cu + + 0xb8u);
    }
L_00193808:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_0019380c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00193810:;
    {
        cpu->r[5] = add_flags(cpu, 0x00193818u, cpu->r[5], 0, 0);
    }
L_00193814:;
    {
        cpu->r[1] = add_flags(cpu, 0x0019381cu, cpu->r[1], 0, 0);
    }
L_00193818:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_0019381c:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00193820:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00193824:;
    {
        cpu->r[12] = rd32(cpu->r[2]);
    }
L_00193828:;
    {
        cpu->r[2] = rd32(0x00193830u + + 0x98u);
    }
L_0019382c:;
    {
        cpu->r[2] = add_flags(cpu, 0x00193834u, cpu->r[2], 0, 0);
    }
L_00193830:;
    {
        wr32(cpu->r[13] + + 0xccu, cpu->r[12]);
    }
L_00193834:;
    {
        cpu->r[14] = 0x00193838u; imp_sprintf(cpu); /* sprintf */
    }
L_00193838:;
    {
        cpu->r[1] = rd32(0x00193840u + + 0x8cu);
    }
L_0019383c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00193840:;
    {
        cpu->r[1] = add_flags(cpu, 0x00193848u, cpu->r[1], 0, 0);
    }
L_00193844:;
    {
        cpu->r[14] = 0x00193848u; fn_001d038c(cpu);
    }
L_00193848:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019384c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019389c;
        }
    }
L_00193850:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], 0x0001e000u, 0, 0);
    }
L_00193854:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00193858:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000024cu, 0, 0);
    }
L_0019385c:;
    {
        cpu->r[14] = 0x00193860u; fn_001d0630(cpu);
    }
L_00193860:;
    {
        cpu->r[0] = 0x0000e6bau;
    }
L_00193864:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_00193868:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_0019386c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[8], cpu->r[0], 0, 0);
    }
L_00193870:;
    {
        cpu->r[14] = 0x00193874u; fn_001d0630(cpu);
    }
L_00193874:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00193878:;
    {
        cpu->r[14] = 0x0019387cu; fn_001d02d0(cpu);
    }
L_0019387c:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00193880:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[6]);
    }
L_00193884:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xccu);
    }
L_00193888:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0019388c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00193890:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001938b4;
        }
    }
L_00193894:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000d0u, 0, 0);
    }
L_00193898:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0019389cu)) return;
    }
L_0019389c:;
    {
        cpu->r[0] = rd32(0x001938a4u + + 0x2cu);
    }
L_001938a0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001938a4:;
    {
        cpu->r[0] = add_flags(cpu, 0x001938acu, cpu->r[0], 0, 0);
    }
L_001938a8:;
    {
        cpu->r[14] = 0x001938acu; fn_001d0ac4(cpu);
    }
L_001938ac:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001938b0:;
    {
        goto L_00193880;
    }
L_001938b4:;
    {
        cpu->r[14] = 0x001938b8u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001938b8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[11] & shifter(cpu->r[4], 2, (cpu->r[12] & 0xffu), &shc); cpu->r[6] = v;
        }
    }
L_001938bc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001938c0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[12] * cpu->r[7]; cpu->r[9] = v;
        }
    }
L_001938c4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 1, (cpu->r[2] & 0xffu), &shc); cpu->r[11] = v;
        }
    }
L_001938c8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[0], 1, 4u, &shc); cpu->r[11] = v;
        }
    }
L_001938cc:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[4], 4, 4u, &shc); cpu->r[11] = v;
        }
    }
L_001938d0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[9] & shifter(cpu->r[12], 2, (cpu->r[7] & 0xffu), &shc); cpu->r[11] = v;
        }
    }
}

/* _ZN4Game19DisGameServerSocketEv @ 001938d4 (arm) */
void fn_001938d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001938d4:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001938d8:;
    {
        cpu->r[5] = 0x0000e7acu;
    }
L_001938dc:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_001938e0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001938e4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[5]);
    }
L_001938e8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001938ec:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00193908;
        }
    }
L_001938f0:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001938f4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001938f8:;
    {
        cpu->r[14] = 0x00193900u;
    }
L_001938fc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00193900u)) return;
    }
L_00193900:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00193904:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_00193908:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x0001e800u, 0, 0);
    }
L_0019390c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00193910:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000b0u, 0, 0);
    }
L_00193914:;
    {
        cpu->r[2] = 0x00000400u;
    }
L_00193918:;
    {
        cpu->r[14] = 0x0019391cu; fn_001d0700(cpu);
    }
L_0019391c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x0001e400u, 0, 0);
    }
L_00193920:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000003b0u, 0, 0);
    }
L_00193924:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00193928:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_0019392c:;
    {
        cpu->r[14] = 0x00193930u; fn_001d0700(cpu);
    }
L_00193930:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x0001ec00u, 0, 0);
    }
L_00193934:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00193938:;
    {
        cpu->r[2] = 0x00000040u;
    }
L_0019393c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000b0u, 0, 0);
    }
L_00193940:;
    {
        cpu->r[14] = 0x00193944u; fn_001d0700(cpu);
    }
L_00193944:;
    {
        cpu->r[2] = 0x0000ecf0u;
    }
L_00193948:;
    {
        cpu->r[3] = 0x0000ecf2u;
    }
L_0019394c:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_00193950:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00193954:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_00193958:;
    {
        wr16(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_0019395c:;
    {
        wr16(cpu->r[4] + cpu->r[3], cpu->r[1]);
    }
L_00193960:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00193964u)) return;
    }
}

/* _ZN4Game11LoadProfileEv @ 00193964 (arm) */
void fn_00193964(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00193964:;
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
L_00193968:;
    {
        cpu->r[5] = rd32(0x00193970u + + 0xecu);
    }
L_0019396c:;
    {
        cpu->r[10] = rd32(0x00193974u + + 0xecu);
    }
L_00193970:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000d4u, 1, 0);
    }
L_00193974:;
    {
        cpu->r[5] = add_flags(cpu, 0x0019397cu, cpu->r[5], 0, 0);
    }
L_00193978:;
    {
        cpu->r[6] = rd32(0x00193980u + + 0xe4u);
    }
L_0019397c:;
    {
        cpu->r[1] = rd32(0x00193984u + + 0xe4u);
    }
L_00193980:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_00193984:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_00193988:;
    {
        cpu->r[6] = add_flags(cpu, 0x00193990u, cpu->r[6], 0, 0);
    }
L_0019398c:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_00193990:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00193994:;
    {
        cpu->r[1] = add_flags(cpu, 0x0019399cu, cpu->r[1], 0, 0);
    }
L_00193998:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019399c:;
    {
        cpu->r[12] = rd32(cpu->r[2]);
    }
L_001939a0:;
    {
        cpu->r[4] = 0x0000e6bau;
    }
L_001939a4:;
    {
        cpu->r[2] = rd32(0x001939acu + + 0xc0u);
    }
L_001939a8:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0001u << 16);
    }
L_001939ac:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[8], cpu->r[4], 0, 0);
    }
L_001939b0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x0001e000u, 0, 0);
    }
L_001939b4:;
    {
        cpu->r[2] = add_flags(cpu, 0x001939bcu, cpu->r[2], 0, 0);
    }
L_001939b8:;
    {
        wr32(cpu->r[13] + + 0xccu, cpu->r[12]);
    }
L_001939bc:;
    {
        cpu->r[14] = 0x001939c0u; imp_sprintf(cpu); /* sprintf */
    }
L_001939c0:;
    {
        cpu->r[1] = rd32(0x001939c8u + + 0xa8u);
    }
L_001939c4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001939c8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x0000024cu, 0, 0);
    }
L_001939cc:;
    {
        cpu->r[1] = add_flags(cpu, 0x001939d4u, cpu->r[1], 0, 0);
    }
L_001939d0:;
    {
        cpu->r[14] = 0x001939d4u; fn_001d038c(cpu);
    }
L_001939d4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001939d8:;
    {
        cpu->r[2] = 0x00000020u;
    }
L_001939dc:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_001939e0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001939e4:;
    {
        cpu->r[14] = 0x001939e8u; fn_001d0700(cpu);
    }
L_001939e8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001939ec:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001939f0:;
    {
        cpu->r[2] = 0x00000020u;
    }
L_001939f4:;
    {
        cpu->r[14] = 0x001939f8u; fn_001d0700(cpu);
    }
L_001939f8:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_001939fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00193a40;
        }
    }
L_00193a00:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00193a04:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00193a08:;
    {
        cpu->r[14] = 0x00193a0cu; fn_001d0664(cpu);
    }
L_00193a0c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00193a10:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00193a14:;
    {
        cpu->r[14] = 0x00193a18u; fn_001d0664(cpu);
    }
L_00193a18:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00193a1c:;
    {
        cpu->r[14] = 0x00193a20u; fn_001d02d0(cpu);
    }
L_00193a20:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00193a24:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[10]);
    }
L_00193a28:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xccu);
    }
L_00193a2c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00193a30:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00193a34:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00193a58;
        }
    }
L_00193a38:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000d4u, 0, 0);
    }
L_00193a3c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00193a40u)) return;
    }
L_00193a40:;
    {
        cpu->r[0] = rd32(0x00193a48u + + 0x2cu);
    }
L_00193a44:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00193a48:;
    {
        cpu->r[0] = add_flags(cpu, 0x00193a50u, cpu->r[0], 0, 0);
    }
L_00193a4c:;
    {
        cpu->r[14] = 0x00193a50u; fn_001d0ac4(cpu);
    }
L_00193a50:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00193a54:;
    {
        goto L_00193a24;
    }
L_00193a58:;
    {
        cpu->r[14] = 0x00193a5cu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_00193a5c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[12] * cpu->r[10]; cpu->r[11] = v;
        }
    }
L_00193a60:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_00193a64:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[9] & shifter(cpu->r[4], 3, 12u, &shc); cpu->r[11] = v;
        }
    }
L_00193a68:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[0]);
        uint64_t v = rd64(cpu->r[7]);
        cpu->r[11] = (uint32_t)v;
        cpu->r[12] = (uint32_t)(v >> 32);
        cpu->r[7] = wb_tmp;
        }
    }
L_00193a6c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[7] + (-cpu->r[8]);
        wr16(cpu->r[7], cpu->r[11]);
        cpu->r[7] = wb_tmp;
        }
    }
L_00193a70:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[7] & shifter(cpu->r[4], 1, 1u, &shc); cpu->r[11] = v;
        }
    }
L_00193a74:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[9] & shifter(cpu->r[0], 3, 11u, &shc); cpu->r[11] = v;
        }
    }
}

/* _ZN4Game20InitGameServerSocketEv @ 00193a78 (arm) */
void fn_00193a78(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00193a78:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00193a7c:;
    {
        cpu->r[5] = 0x0000e7acu;
    }
L_00193a80:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_00193a84:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00193a88:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[5]);
    }
L_00193a8c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00193a90:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00193aac;
        }
    }
L_00193a94:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00193a98:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00193a9c:;
    {
        cpu->r[14] = 0x00193aa4u;
    }
L_00193aa0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x4u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00193aa4u)) return;
    }
L_00193aa4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00193aa8:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[3]);
    }
L_00193aac:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00193ab0:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00193ab4:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00193ab8:;
    {
        cpu->r[14] = 0x00193abcu; fn_001b6b08(cpu);
    }
L_00193abc:;
    {
        cpu->r[2] = 0x0000e7acu;
    }
L_00193ac0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_00193ac4:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00193ac8:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[0]);
    }
L_00193acc:;
    {
        cpu->r[14] = 0x00193ad4u;
    }
L_00193ad0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x70u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00193ad4u)) return;
    }
L_00193ad4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x0001e800u, 0, 0);
    }
L_00193ad8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000b0u, 0, 0);
    }
L_00193adc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00193ae0:;
    {
        cpu->r[2] = 0x00000400u;
    }
L_00193ae4:;
    {
        cpu->r[14] = 0x00193ae8u; fn_001d0700(cpu);
    }
L_00193ae8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x0001e400u, 0, 0);
    }
L_00193aec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000003b0u, 0, 0);
    }
L_00193af0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00193af4:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_00193af8:;
    {
        cpu->r[14] = 0x00193afcu; fn_001d0700(cpu);
    }
L_00193afc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[4], 0x0001ec00u, 0, 0);
    }
L_00193b00:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x000000b0u, 0, 0);
    }
L_00193b04:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00193b08:;
    {
        cpu->r[2] = 0x00000040u;
    }
L_00193b0c:;
    {
        cpu->r[14] = 0x00193b10u; fn_001d0700(cpu);
    }
L_00193b10:;
    {
        cpu->r[0] = 0x0000ecf0u;
    }
L_00193b14:;
    {
        cpu->r[1] = 0x0000ecf2u;
    }
L_00193b18:;
    {
        cpu->r[2] = 0x0000ecf8u;
    }
L_00193b1c:;
    {
        cpu->r[3] = 0x0000ecf4u;
    }
L_00193b20:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_00193b24:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_00193b28:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_00193b2c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00193b30:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_00193b34:;
    {
        wr16(cpu->r[4] + cpu->r[1], cpu->r[12]);
    }
L_00193b38:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00193b3c:;
    {
        wr16(cpu->r[4] + cpu->r[0], cpu->r[12]);
    }
L_00193b40:;
    {
        wr32(cpu->r[4] + cpu->r[2], cpu->r[1]);
    }
L_00193b44:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[1]);
    }
L_00193b48:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00193b4cu)) return;
    }
}

/* _ZN4Game16OnMPGetLobbyInfoEP10DataPacket @ 00193b4c (arm) */
void fn_00193b4c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00193b4c:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_00193b50:;
    {
        cpu->r[6] = 0x0000e798u;
    }
L_00193b54:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_00193b58:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00193b5c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00193b60:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00193b64:;
    {
        cpu->r[1] = rd32(cpu->r[0] + cpu->r[6]);
    }
L_00193b68:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00193b6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00193ce8;
        }
    }
L_00193b70:;
    {
        cpu->r[0] = rd32(cpu->r[1]);
    }
L_00193b74:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00193b78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00193b90;
        }
    }
L_00193b7c:;
    {
        cpu->r[14] = 0x00193b80u; fn_0018ba20(cpu);
    }
L_00193b80:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00193b84:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00193b88:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00193b8c:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_00193b90:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x4u);
    }
L_00193b94:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00193b98:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00193bb8;
        }
    }
L_00193b9c:;
    {
        cpu->r[14] = 0x00193ba0u; fn_0018ba20(cpu);
    }
L_00193ba0:;
    {
        cpu->r[3] = 0x0000e798u;
    }
L_00193ba4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00193ba8:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00193bac:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00193bb0:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00193bb4:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[2]);
    }
L_00193bb8:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x14u);
    }
L_00193bbc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00193bc0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00193be0;
        }
    }
L_00193bc4:;
    {
        cpu->r[14] = 0x00193bc8u; fn_0018ba20(cpu);
    }
L_00193bc8:;
    {
        cpu->r[3] = 0x0000e798u;
    }
L_00193bcc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00193bd0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00193bd4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00193bd8:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00193bdc:;
    {
        wr32(cpu->r[3] + + 0x14u, cpu->r[2]);
    }
L_00193be0:;
    {
        cpu->r[6] = 0x0000e798u;
    }
L_00193be4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00193be8:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_00193bec:;
    {
        wr16(cpu->r[13] + + 0x6u, cpu->r[3]);
    }
L_00193bf0:;
    {
        wr16(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00193bf4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000006u, 0, 0);
    }
L_00193bf8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00193bfc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00193c00:;
    {
        cpu->r[14] = 0x00193c08u;
    }
L_00193c04:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00193c08u)) return;
    }
L_00193c08:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00193c0c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_00193c10:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00193c14:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00193c18:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_00193c1c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00193c20:;
    {
        cpu->r[14] = 0x00193c28u;
    }
L_00193c24:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x50u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00193c28u)) return;
    }
L_00193c28:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00193c2c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00193c30:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00193c34:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_00193c38:;
    {
        cpu->r[14] = 0x00193c40u;
    }
L_00193c3c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00193c40u)) return;
    }
L_00193c40:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00193c44:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00193c48:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00193c4c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000009u, 0, 0);
    }
L_00193c50:;
    {
        cpu->r[14] = 0x00193c58u;
    }
L_00193c54:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00193c58u)) return;
    }
L_00193c58:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00193c5c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00193c60:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00193c64:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_00193c68:;
    {
        cpu->r[14] = 0x00193c70u;
    }
L_00193c6c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00193c70u)) return;
    }
L_00193c70:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00193c74:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00193c78:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00193c7c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000010u, 0, 0);
    }
L_00193c80:;
    {
        cpu->r[14] = 0x00193c88u;
    }
L_00193c84:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00193c88u)) return;
    }
L_00193c88:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00193c8c:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00193c90:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00193c94:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000014u, 0, 0);
    }
L_00193c98:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00193c9c:;
    {
        cpu->r[14] = 0x00193ca4u;
    }
L_00193ca0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00193ca4u)) return;
    }
L_00193ca4:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00193ca8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00193cac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00193cb0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000018u, 0, 0);
    }
L_00193cb4:;
    {
        cpu->r[14] = 0x00193cbcu;
    }
L_00193cb8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00193cbcu)) return;
    }
L_00193cbc:;
    {
        cpu->r[1] = rd32(cpu->r[5] + cpu->r[6]);
    }
L_00193cc0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00193cc4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00193cc8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000019u, 0, 0);
    }
L_00193ccc:;
    {
        cpu->r[14] = 0x00193cd4u;
    }
L_00193cd0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00193cd4u)) return;
    }
L_00193cd4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00193cd8:;
    {
        cpu->r[1] = 0x00000010u;
    }
L_00193cdc:;
    {
        cpu->r[14] = 0x00193ce0u; fn_001933d4(cpu);
    }
L_00193ce0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00193ce4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00193ce8u)) return;
    }
L_00193ce8:;
    {
        cpu->r[0] = 0x0000001cu;
    }
L_00193cec:;
    {
        cpu->r[14] = 0x00193cf0u; fn_0018ba6c(cpu);
    }
L_00193cf0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00193cf4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00193cf8:;
    {
        wr32(cpu->r[5] + cpu->r[6], cpu->r[0]);
    }
L_00193cfc:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[3]);
    }
L_00193d00:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_00193d04:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_00193d08:;
    {
        goto L_00193be0;
    }
}

/* _ZThn4_N4Game16OnRequestSuccessEiPci @ 00193d0c (arm) */
void fn_00193d0c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00193d0c:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], 0x00000004u, 1, 0);
    }
L_00193d10:;
    {
        return fn_00193d14(cpu);
    }
}

/* _ZN4Game16OnRequestSuccessEiPci @ 00193d14 (arm) */
void fn_00193d14(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00193d14:;
    {
        cpu->r[12] = rd32(0x00193d1cu + + 0x388u);
    }
L_00193d18:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000003du, 1, 1);
    }
L_00193d1c:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_00193d20:;
    {
        cpu->r[12] = add_flags(cpu, 0x00193d28u, cpu->r[12], 0, 0);
    }
L_00193d24:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_00193d28:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00193d2c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00193f20;
        }
    }
L_00193d30:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00193e48;
        }
    }
L_00193d34:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000000cu, 1, 1);
    }
L_00193d38:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00193f08;
        }
    }
L_00193d3c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00193ea4;
        }
    }
L_00193d40:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000000du, 1, 1);
    }
L_00193d44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00193f14;
        }
    }
L_00193d48:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000000fu, 1, 1);
    }
L_00193d4c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00193e64;
        }
    }
L_00193d50:;
    {
        cpu->r[6] = 0x0000e6e5u;
    }
L_00193d54:;
    {
        cpu->r[5] = 0x00006774u;
    }
L_00193d58:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_00193d5c:;
    {
        cpu->r[2] = 0x00000080u;
    }
L_00193d60:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
    }
L_00193d64:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00193d68:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00193d6c:;
    {
        cpu->r[14] = 0x00193d70u; fn_001d0700(cpu);
    }
L_00193d70:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00193d74:;
    {
        cpu->r[14] = 0x00193d78u; fn_001b3814(cpu);
    }
L_00193d78:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00193d7c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00193d80:;
    {
        cpu->r[14] = 0x00193d84u; fn_001d06dc(cpu);
    }
L_00193d84:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00193d88:;
    {
        cpu->r[14] = 0x00193d8cu; fn_001b380c(cpu);
    }
L_00193d8c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00193d90:;
    {
        cpu->r[3] = 0x0000e768u;
    }
L_00193d94:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00193d98:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_00193d9c:;
    {
        cpu->r[0] = rd32(cpu->r[2] + + 0x78u);
    }
L_00193da0:;
    {
        cpu->r[14] = 0x00193da4u; fn_001d06cc(cpu);
    }
L_00193da4:;
    {
        cpu->r[3] = 0x0000e794u;
    }
L_00193da8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00193dac:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00193db0:;
    {
        wr32(cpu->r[4] + cpu->r[3], cpu->r[0]);
    }
L_00193db4:;
    {
        cpu->r[3] = 0x00006770u;
    }
L_00193db8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00193dbc:;
    {
        cpu->r[14] = 0x00193dc0u; fn_001b38d8(cpu);
    }
L_00193dc0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00193dc4:;
    {
        cpu->r[14] = 0x00193dc8u; fn_001b7b60(cpu);
    }
L_00193dc8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00193dcc:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_00193dd0:;
    {
        cpu->r[14] = 0x00193dd4u; fn_001933d4(cpu);
    }
L_00193dd4:;
    {
        cpu->r[3] = 0x00006768u;
    }
L_00193dd8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00193ddc:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00193de0:;
    {
        cpu->r[14] = 0x00193de4u; fn_001b3814(cpu);
    }
L_00193de4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00193de8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00193dec:;
    {
        cpu->r[14] = 0x00193df0u; fn_001b38d8(cpu);
    }
L_00193df0:;
    {
        cpu->r[3] = 0x0000677cu;
    }
L_00193df4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00193df8:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00193dfc:;
    {
        cpu->r[14] = 0x00193e00u; fn_001b3814(cpu);
    }
L_00193e00:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00193e04:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00193e08:;
    {
        cpu->r[14] = 0x00193e0cu; fn_001b38d8(cpu);
    }
L_00193e0c:;
    {
        cpu->r[3] = 0x00006778u;
    }
L_00193e10:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00193e14:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00193e18:;
    {
        cpu->r[14] = 0x00193e1cu; fn_001b3814(cpu);
    }
L_00193e1c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00193e20:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00193e24:;
    {
        cpu->r[14] = 0x00193e28u; fn_001b38d8(cpu);
    }
L_00193e28:;
    {
        cpu->r[3] = 0x0000676cu;
    }
L_00193e2c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00193e30:;
    {
        cpu->r[4] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00193e34:;
    {
        cpu->r[14] = 0x00193e38u; fn_001b3814(cpu);
    }
L_00193e38:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00193e3c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00193e40:;
    {
        cpu->r[14] = 0x00193e44u; fn_001b38d8(cpu);
    }
L_00193e44:;
    {
        goto L_00193e64;
    }
L_00193e48:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000006cu, 1, 1);
    }
L_00193e4c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00193e6c;
        }
    }
L_00193e50:;
    {
        cpu->r[3] = 0x000022b8u;
    }
L_00193e54:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 1);
    }
L_00193e58:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00193e64;
        }
    }
L_00193e5c:;
    {
        cpu->r[1] = 0x00000019u;
    }
L_00193e60:;
    {
        cpu->r[14] = 0x00193e64u; fn_001933d4(cpu);
    }
L_00193e64:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_00193e68:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00193e6cu)) return;
    }
L_00193e6c:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000006bu, 1, 1);
    }
L_00193e70:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00193fd0;
        }
    }
L_00193e74:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000069u, 1, 1);
    }
L_00193e78:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00193f48;
        }
    }
L_00193e7c:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000006au, 1, 1);
    }
L_00193e80:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00193e64;
        }
    }
L_00193e84:;
    {
        cpu->r[2] = rd32(0x00193e8cu + + 0x21cu);
    }
L_00193e88:;
    {
        cpu->r[3] = 0x0000e26cu;
    }
L_00193e8c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00193e90:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_00193e94:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[2]);
    }
L_00193e98:;
    {
        cpu->r[2] = rd32(cpu->r[2]);
    }
L_00193e9c:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_00193ea0:;
    {
        goto L_00193e64;
    }
L_00193ea4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00193ea8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00193f08;
        }
    }
L_00193eac:;
    {
        sub_flags(cpu, cpu->r[1], 0x0000000bu, 1, 1);
    }
L_00193eb0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00193e64;
        }
    }
L_00193eb4:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_00193eb8:;
    {
        cpu->r[14] = 0x00193ebcu; fn_001933d4(cpu);
    }
L_00193ebc:;
    {
        cpu->r[3] = 0x00006774u;
    }
L_00193ec0:;
    {
        cpu->r[2] = 0x0000e6bau;
    }
L_00193ec4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x0001e000u, 0, 0);
    }
L_00193ec8:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_00193ecc:;
    {
        cpu->r[12] = rd32(0x00193ed4u + + 0x1d8u);
    }
L_00193ed0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00193ed4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[2], 0, 0);
    }
L_00193ed8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000024cu, 0, 0);
    }
L_00193edc:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_00193ee0:;
    {
        cpu->r[12] = add_flags(cpu, 0x00193ee8u, cpu->r[12], 0, 0);
    }
L_00193ee4:;
    {
        cpu->r[14] = 0x00000001u;
    }
L_00193ee8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[12]);
    }
L_00193eec:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_00193ef0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_00193ef4:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[12]);
    }
L_00193ef8:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00193efc:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_00193f00:;
    {
        cpu->r[14] = 0x00193f04u; fn_001b8240(cpu);
    }
L_00193f04:;
    {
        goto L_00193e64;
    }
L_00193f08:;
    {
        cpu->r[1] = 0x00000017u;
    }
L_00193f0c:;
    {
        cpu->r[14] = 0x00193f10u; fn_001933d4(cpu);
    }
L_00193f10:;
    {
        goto L_00193e64;
    }
L_00193f14:;
    {
        cpu->r[1] = 0x00000018u;
    }
L_00193f18:;
    {
        cpu->r[14] = 0x00193f1cu; fn_001933d4(cpu);
    }
L_00193f1c:;
    {
        goto L_00193e64;
    }
L_00193f20:;
    {
        cpu->r[3] = 0x00006788u;
    }
L_00193f24:;
    {
        cpu->r[1] = 0x0000e794u;
    }
L_00193f28:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_00193f2c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00193f30:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00193f34:;
    {
        cpu->r[3] = 0x00006770u;
    }
L_00193f38:;
    {
        cpu->r[1] = rd32(cpu->r[4] + cpu->r[1]);
    }
L_00193f3c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00193f40:;
    {
        cpu->r[14] = 0x00193f44u; fn_001c3e5c(cpu);
    }
L_00193f44:;
    {
        goto L_00193e64;
    }
L_00193f48:;
    {
        cpu->r[0] = rd32(0x00193f50u + + 0x160u);
    }
L_00193f4c:;
    {
        cpu->r[1] = rd32(0x00193f54u + + 0x160u);
    }
L_00193f50:;
    {
        cpu->r[0] = add_flags(cpu, 0x00193f58u, cpu->r[0], 0, 0);
    }
L_00193f54:;
    {
        cpu->r[1] = add_flags(cpu, 0x00193f5cu, cpu->r[1], 0, 0);
    }
L_00193f58:;
    {
        cpu->r[14] = 0x00193f5cu; imp_fopen(cpu); /* fopen */
    }
L_00193f5c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00193f60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00193e64;
        }
    }
L_00193f64:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00193f68:;
    {
        cpu->r[2] = 0x00000002u;
    }
L_00193f6c:;
    {
        cpu->r[14] = 0x00193f70u; imp_fseek(cpu); /* fseek */
    }
L_00193f70:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00193f74:;
    {
        cpu->r[14] = 0x00193f78u; imp_ftell(cpu); /* ftell */
    }
L_00193f78:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_00193f7c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00193f80:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_00193f84:;
    {
        wr32(cpu->r[13] + + 0x24u, cpu->r[0]);
    }
L_00193f88:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00193f8c:;
    {
        cpu->r[14] = 0x00193f90u; imp_fseek(cpu); /* fseek */
    }
L_00193f90:;
    {
        uint32_t wb_tmp = cpu->r[7] + - 0x4u;
        cpu->r[0] = rd32(cpu->r[7] + - 0x4u);
        cpu->r[7] = wb_tmp;
    }
L_00193f94:;
    {
        cpu->r[14] = 0x00193f98u; imp_malloc(cpu); /* malloc */
    }
L_00193f98:;
    {
        cpu->r[3] = 0x00006778u;
    }
L_00193f9c:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00193fa0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00193fa4:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00193fa8:;
    {
        cpu->r[0] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00193fac:;
    {
        cpu->r[14] = 0x00193fb0u; fn_001b9144(cpu);
    }
L_00193fb0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00193fb4:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_00193fb8:;
    {
        cpu->r[14] = 0x00193fbcu; fn_001933d4(cpu);
    }
L_00193fbc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00193fc0:;
    {
        cpu->r[14] = 0x00193fc4u; imp_fclose(cpu); /* fclose */
    }
L_00193fc4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00193fc8:;
    {
        cpu->r[14] = 0x00193fccu; imp_free(cpu); /* free */
    }
L_00193fcc:;
    {
        goto L_00193e64;
    }
L_00193fd0:;
    {
        cpu->r[5] = 0x00006760u;
    }
L_00193fd4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[5]);
    }
L_00193fd8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00193fdc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00193ffc;
        }
    }
L_00193fe0:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_00193fe4:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_00193fe8:;
    {
        cpu->r[14] = 0x00193fecu; fn_0018ba20(cpu);
    }
L_00193fec:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00193ff0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00193ff4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_00193ff8:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[1]);
    }
L_00193ffc:;
    {
        cpu->r[6] = rd32(0x00194004u + + 0xb4u);
    }
L_00194000:;
    {
        cpu->r[7] = 0x00006760u;
    }
L_00194004:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[2]);
    }
L_00194008:;
    {
        cpu->r[5] = 0x00006788u;
    }
L_0019400c:;
    {
        cpu->r[6] = add_flags(cpu, 0x00194014u, cpu->r[6], 0, 0);
    }
L_00194010:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_00194014:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00194018:;
    {
        cpu->r[14] = 0x0019401cu; fn_001d0434(cpu);
    }
L_0019401c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00194020:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00194024:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_00194028:;
    {
        cpu->r[14] = 0x0019402cu; imp__Znaj(cpu); /* _Znaj */
    }
L_0019402c:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00194030:;
    {
        wr32(cpu->r[4] + cpu->r[7], cpu->r[0]);
    }
L_00194034:;
    {
        cpu->r[14] = 0x00194038u; fn_001d06dc(cpu);
    }
L_00194038:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_0019403c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00194040:;
    {
        cpu->r[14] = 0x00194044u; fn_001d0434(cpu);
    }
L_00194044:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x18u);
    }
L_00194048:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_0019404c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], cpu->r[0], 0, 0);
    }
L_00194050:;
    {
        cpu->r[14] = 0x00194054u; fn_001d06dc(cpu);
    }
L_00194054:;
    {
        cpu->r[0] = 0x00000098u;
    }
L_00194058:;
    {
        cpu->r[14] = 0x0019405cu; fn_0018ba6c(cpu);
    }
L_0019405c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + cpu->r[7]);
    }
L_00194060:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00194064:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00194068:;
    {
        cpu->r[14] = 0x0019406cu; fn_001c686c(cpu);
    }
L_0019406c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x0001e000u, 0, 0);
    }
L_00194070:;
    {
        wr32(cpu->r[4] + cpu->r[5], cpu->r[6]);
    }
L_00194074:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000024cu, 0, 0);
    }
L_00194078:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x00000008u, 0, 0);
    }
L_0019407c:;
    {
        cpu->r[14] = 0x00194080u; fn_001d06dc(cpu);
    }
L_00194080:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00194084:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00194088:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0019408c:;
    {
        cpu->r[14] = 0x00194094u;
    }
L_00194090:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00194094u)) return;
    }
L_00194094:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00194098:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_0019409c:;
    {
        cpu->r[14] = 0x001940a0u; fn_001933d4(cpu);
    }
L_001940a0:;
    {
        goto L_00193e64;
    }
}

/* _ZN4Game21OnMPDisconnectSuccessEv @ 001940bc (arm) */
void fn_001940bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001940bc:;
    {
        cpu->r[3] = 0x00006774u;
    }
L_001940c0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001940c4:;
    {
        return fn_001b7f58(cpu);
    }
}

/* _ZN4Game19OnMPSetParamSuccessEi @ 001940c8 (arm) */
void fn_001940c8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001940c8:;
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
L_001940cc:;
    {
        cpu->r[8] = rd32(0x001940d4u + + 0x184u);
    }
L_001940d0:;
    {
        cpu->r[2] = rd32(0x001940d8u + + 0x184u);
    }
L_001940d4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000e4u, 1, 0);
    }
L_001940d8:;
    {
        cpu->r[8] = add_flags(cpu, 0x001940e0u, cpu->r[8], 0, 0);
    }
L_001940dc:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000025u, 1, 1);
    }
L_001940e0:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_001940e4:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[2]);
    }
L_001940e8:;
    {
        wr32(cpu->r[13], cpu->r[2]);
    }
L_001940ec:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001940f0:;
    {
        wr32(cpu->r[13] + + 0xdcu, cpu->r[3]);
    }
L_001940f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00194120;
        }
    }
L_001940f8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000028u, 1, 1);
    }
L_001940fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00194224;
        }
    }
L_00194100:;
    {
        cpu->r[2] = rd32(cpu->r[13]);
    }
L_00194104:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[2]);
    }
L_00194108:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xdcu);
    }
L_0019410c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00194110:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00194114:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00194254;
        }
    }
L_00194118:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000e4u, 0, 0);
    }
L_0019411c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00194120u)) return;
    }
L_00194120:;
    {
        cpu->r[3] = 0x0000e780u;
    }
L_00194124:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], 0x0001e400u, 0, 0);
    }
L_00194128:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0019412c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000380u, 0, 0);
    }
L_00194130:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x0001e000u, 0, 0);
    }
L_00194134:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[8]);
    }
L_00194138:;
    {
        cpu->r[4] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0019413c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000024cu, 0, 0);
    }
L_00194140:;
    {
        cpu->r[3] = rd32(0x00194148u + + 0x118u);
    }
L_00194144:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_00194148:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[4], 1, 1);
    }
L_0019414c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00194150:;
    {
        cpu->r[3] = add_flags(cpu, 0x00194158u, cpu->r[3], 0, 0);
    }
L_00194154:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00194158:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_0019415c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[0]);
    }
L_00194160:;
    {
        cpu->r[9] = cpu->r[2];
    }
L_00194164:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_00194168:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019421c;
        }
    }
L_0019416c:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x8u);
    }
L_00194170:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[7]);
    }
L_00194174:;
    {
        cpu->r[11] = rd32(cpu->r[5]);
    }
L_00194178:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0019417c:;
    {
        cpu->r[14] = 0x00194180u; fn_001d0434(cpu);
    }
L_00194180:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_00194184:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00194188:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0019418c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00194190:;
    {
        cpu->r[14] = 0x00194194u; fn_001d0a68(cpu);
    }
L_00194194:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x10u);
    }
L_00194198:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_0019419c:;
    {
        cpu->r[14] = 0x001941a0u; fn_001d06e4(cpu);
    }
L_001941a0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001941a4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00194210;
        }
    }
L_001941a8:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_001941ac:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001941b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001941bc;
        }
    }
L_001941b4:;
    {
        cpu->r[14] = 0x001941b8u; fn_0018ba20(cpu);
    }
L_001941b8:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[7]);
    }
L_001941bc:;
    {
        cpu->r[2] = 0x000000c8u;
    }
L_001941c0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001941c4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001941c8:;
    {
        cpu->r[14] = 0x001941ccu; imp_memset(cpu); /* memset */
    }
L_001941cc:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x8u);
    }
L_001941d0:;
    {
        cpu->r[3] = 0x00001c4cu;
    }
L_001941d4:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_001941d8:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001941dc:;
    {
        cpu->r[2] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_001941e0:;
    {
        cpu->r[14] = 0x001941e4u; imp_sprintf(cpu); /* sprintf */
    }
L_001941e4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001941e8:;
    {
        cpu->r[14] = 0x001941ecu; fn_001d0434(cpu);
    }
L_001941ec:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_001941f0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_001941f4:;
    {
        cpu->r[14] = 0x001941f8u; imp__Znaj(cpu); /* _Znaj */
    }
L_001941f8:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_001941fc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00194200:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[0]);
    }
L_00194204:;
    {
        wr8(cpu->r[0] + cpu->r[11], cpu->r[7]);
    }
L_00194208:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_0019420c:;
    {
        cpu->r[14] = 0x00194210u; fn_001d06ec(cpu);
    }
L_00194210:;
    {
        cpu->r[4] = rd32(cpu->r[4]);
    }
L_00194214:;
    {
        sub_flags(cpu, cpu->r[10], cpu->r[4], 1, 1);
    }
L_00194218:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019416c;
        }
    }
L_0019421c:;
    {
        cpu->r[8] = rd32(cpu->r[13] + + 0xcu);
    }
L_00194220:;
    {
        goto L_00194100;
    }
L_00194224:;
    {
        cpu->r[3] = 0x0000e788u;
    }
L_00194228:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0019422c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00194230:;
    {
        cpu->r[3] = rd8(cpu->r[2] + + 0x8u);
    }
L_00194234:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00194238:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000003u;
        }
    }
L_0019423c:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[2] + + 0x8u, cpu->r[3]);
        }
    }
L_00194240:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00194100;
        }
    }
L_00194244:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_00194248:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000002u;
        }
    }
L_0019424c:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[2] + + 0x8u, cpu->r[3]);
        }
    }
L_00194250:;
    {
        goto L_00194100;
    }
L_00194254:;
    {
        cpu->r[14] = 0x00194258u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_00194258:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[11] & shifter(cpu->r[8], 3, (cpu->r[3] & 0xffu), &shc); cpu->r[6] = v;
        }
    }
L_0019425c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_00194260:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[9] & shifter(cpu->r[8], 3, 11u, &shc); cpu->r[11] = v;
        }
    }
}

/* _ZN4Game16OnMPLoginSuccessEP10DataPacket @ 00194264 (arm) */
void fn_00194264(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00194264:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00194268:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_0019426c:;
    {
        cpu->r[5] = rd32(0x00194274u + + 0x18cu);
    }
L_00194270:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_00194274:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00194278:;
    {
        cpu->r[5] = add_flags(cpu, 0x00194280u, cpu->r[5], 0, 0);
    }
L_0019427c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019435c;
        }
    }
L_00194280:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x0000000eu, 0, 0);
    }
L_00194284:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00194288:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_0019428c:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00194290:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_00194294:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00194298:;
    {
        wr16(cpu->r[13] + + 0xeu, cpu->r[4]);
    }
L_0019429c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[4]);
    }
L_001942a0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[4]);
    }
L_001942a4:;
    {
        cpu->r[14] = 0x001942acu;
    }
L_001942a8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001942acu)) return;
    }
L_001942ac:;
    {
        cpu->r[3] = rd32(0x001942b4u + + 0x150u);
    }
L_001942b0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001942b4:;
    {
        cpu->r[3] = rd32(cpu->r[2]);
    }
L_001942b8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0001e000u, 0, 0);
    }
L_001942bc:;
    {
        wr32(cpu->r[3] + + 0x268u, cpu->r[4]);
    }
L_001942c0:;
    {
        wr32(cpu->r[3] + + 0x24cu, cpu->r[4]);
    }
L_001942c4:;
    {
        wr32(cpu->r[3] + + 0x250u, cpu->r[4]);
    }
L_001942c8:;
    {
        wr32(cpu->r[3] + + 0x254u, cpu->r[4]);
    }
L_001942cc:;
    {
        wr32(cpu->r[3] + + 0x258u, cpu->r[4]);
    }
L_001942d0:;
    {
        wr32(cpu->r[3] + + 0x25cu, cpu->r[4]);
    }
L_001942d4:;
    {
        wr32(cpu->r[3] + + 0x260u, cpu->r[4]);
    }
L_001942d8:;
    {
        wr32(cpu->r[3] + + 0x264u, cpu->r[4]);
    }
L_001942dc:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_001942e0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x8u);
    }
L_001942e4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0001e000u, 0, 0);
    }
L_001942e8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000024cu, 0, 0);
    }
L_001942ec:;
    {
        cpu->r[14] = 0x001942f0u; fn_001d06dc(cpu);
    }
L_001942f0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x8u);
    }
L_001942f4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[4], 1, 1);
    }
L_001942f8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00194304;
        }
    }
L_001942fc:;
    {
        cpu->r[14] = 0x00194300u; fn_0018ba20(cpu);
    }
L_00194300:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[4]);
    }
L_00194304:;
    {
        cpu->r[4] = 0x0000e6b2u;
    }
L_00194308:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0019430c:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0001u << 16);
    }
L_00194310:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00194314:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[7], cpu->r[4], 0, 0);
    }
L_00194318:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_0019431c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00194320:;
    {
        cpu->r[14] = 0x00194328u;
    }
L_00194324:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00194328u)) return;
    }
L_00194328:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_0019432c:;
    {
        cpu->r[2] = 0x00000008u;
    }
L_00194330:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00194334:;
    {
        cpu->r[14] = 0x00194338u; fn_001d0700(cpu);
    }
L_00194338:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019433c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_00194340:;
    {
        cpu->r[14] = 0x00194344u; fn_001d06dc(cpu);
    }
L_00194344:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_00194348:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019434c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019435c;
        }
    }
L_00194350:;
    {
        cpu->r[14] = 0x00194354u; fn_0018ba20(cpu);
    }
L_00194354:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00194358:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_0019435c:;
    {
        cpu->r[3] = 0x00006788u;
    }
L_00194360:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00194364:;
    {
        cpu->r[2] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_00194368:;
    {
        cpu->r[3] = rd8(cpu->r[2] + + 0x8au);
    }
L_0019436c:;
    {
        wr32(cpu->r[2] + + 0x8cu, cpu->r[1]);
    }
L_00194370:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00194374:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001943ac;
        }
    }
L_00194378:;
    {
        cpu->r[3] = 0x0000e21cu;
    }
L_0019437c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00194380:;
    {
        cpu->r[3] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_00194384:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000007u, 1, 1);
    }
L_00194388:;
    {
        if (cond_test(cpu, 2)) {
        sub_flags(cpu, cpu->r[3], 0x0000000eu, 1, 1);
        }
    }
L_0019438c:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[1] = 0x00000000u;
        }
    }
L_00194390:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[1] = 0x00000001u;
        }
    }
L_00194394:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001943b4;
        }
    }
L_00194398:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000009u, 1, 1);
    }
L_0019439c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001943b4;
        }
    }
L_001943a0:;
    {
        sub_flags(cpu, cpu->r[3], 0x0000000au, 1, 1);
    }
L_001943a4:;
    {
        if (cond_test(cpu, 2)) {
        wr8(cpu->r[2] + + 0x8au, cpu->r[1]);
        }
    }
L_001943a8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001943b4;
        }
    }
L_001943ac:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001943b0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001943b4u)) return;
    }
L_001943b4:;
    {
        cpu->r[3] = rd8(cpu->r[2] + + 0x90u);
    }
L_001943b8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001943bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001943e0;
        }
    }
L_001943c0:;
    {
        cpu->r[0] = rd32(0x001943c8u + + 0x40u);
    }
L_001943c4:;
    {
        cpu->r[0] = add_flags(cpu, 0x001943ccu, cpu->r[0], 0, 0);
    }
L_001943c8:;
    {
        cpu->r[14] = 0x001943ccu; fn_001d0ac4(cpu);
    }
L_001943cc:;
    {
        cpu->r[3] = 0x00006788u;
    }
L_001943d0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001943d4:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_001943d8:;
    {
        cpu->r[14] = 0x001943dcu; fn_001c4600(cpu);
    }
L_001943dc:;
    {
        goto L_001943ac;
    }
L_001943e0:;
    {
        cpu->r[0] = rd32(0x001943e8u + + 0x24u);
    }
L_001943e4:;
    {
        cpu->r[0] = add_flags(cpu, 0x001943ecu, cpu->r[0], 0, 0);
    }
L_001943e8:;
    {
        cpu->r[14] = 0x001943ecu; fn_001d0ac4(cpu);
    }
L_001943ec:;
    {
        cpu->r[3] = 0x00006788u;
    }
L_001943f0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001943f4:;
    {
        cpu->r[0] = rd32(cpu->r[7] + cpu->r[3]);
    }
L_001943f8:;
    {
        cpu->r[14] = 0x001943fcu; fn_001c4600(cpu);
    }
L_001943fc:;
    {
        goto L_001943ac;
    }
}

/* _ZN4Game30OnMPEstablishConnectionSuccessEv @ 00194410 (arm) */
void fn_00194410(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00194410:;
    {
        cpu->r[3] = 0x00006788u;
    }
L_00194414:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00194418:;
    {
        cpu->r[7] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_0019441c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00194420:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00194424:;
    {
        cpu->r[5] = rd8(cpu->r[7] + + 0x8au);
    }
L_00194428:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0019442c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00194488;
        }
    }
L_00194430:;
    {
        cpu->r[3] = 0x0000e768u;
    }
L_00194434:;
    {
        cpu->r[5] = 0x0000e6e5u;
    }
L_00194438:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0019443c:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_00194440:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[0], cpu->r[5], 0, 0);
    }
L_00194444:;
    {
        cpu->r[6] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00194448:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0019444c:;
    {
        cpu->r[14] = 0x00194450u; fn_001d0434(cpu);
    }
L_00194450:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00194454:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00194458:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_0019445c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00194460:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00194464:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00194468:;
    {
        cpu->r[14] = 0x0019446cu; fn_001c4a5c(cpu);
    }
L_0019446c:;
    {
        cpu->r[3] = 0x00006788u;
    }
L_00194470:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00194474:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x8au);
    }
L_00194478:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0019447c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001944d4;
        }
    }
L_00194480:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00194484:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00194488u)) return;
    }
L_00194488:;
    {
        cpu->r[3] = 0x0000e768u;
    }
L_0019448c:;
    {
        cpu->r[6] = 0x0000e6e5u;
    }
L_00194490:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00194494:;
    {
        cpu->r[6] = (cpu->r[6] & 0xffffu) | (0x0001u << 16);
    }
L_00194498:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], cpu->r[6], 0, 0);
    }
L_0019449c:;
    {
        cpu->r[8] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_001944a0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001944a4:;
    {
        cpu->r[14] = 0x001944a8u; fn_001d0434(cpu);
    }
L_001944a8:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001944ac:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001944b0:;
    {
        wr32(cpu->r[13], cpu->r[5]);
    }
L_001944b4:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001944b8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001944bc:;
    {
        cpu->r[14] = 0x001944c0u; fn_001c4a5c(cpu);
    }
L_001944c0:;
    {
        cpu->r[3] = 0x00006788u;
    }
L_001944c4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001944c8:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x8au);
    }
L_001944cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001944d0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00194480;
        }
    }
L_001944d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001944d8:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_001944dc:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001944e0:;
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
L_001944e4:;
    {
        return fn_001933d4(cpu);
    }
}

/* _ZNSt4listIPN4Game7_PLAYERESaIS2_EE9push_backERKS2_ @ 001944e8 (arm) */
void fn_001944e8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001944e8:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_001944ec:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_001944f0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001944f4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001944f8:;
    {
        cpu->r[2] = 0x0000000cu;
    }
L_001944fc:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00194500:;
    {
        uint32_t wb_tmp = cpu->r[3] + - 0x4u;
        wr32(cpu->r[3] + - 0x4u, cpu->r[2]);
        cpu->r[3] = wb_tmp;
    }
L_00194504:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00194508:;
    {
        cpu->r[14] = 0x0019450cu; fn_00208278(cpu);
    }
L_0019450c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x4u);
    }
L_00194510:;
    {
        cpu->r[2] = rd32(cpu->r[5]);
    }
L_00194514:;
    {
        wr32(cpu->r[0], cpu->r[4]);
    }
L_00194518:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_0019451c:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_00194520:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_00194524:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_00194528:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_0019452c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00194530u)) return;
    }
}

/* _ZNSt4priv10_List_baseIPN4Game7_PLAYERESaIS3_EE5clearEv @ 00194530 (arm) */
void fn_00194530(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00194530:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00194534:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00194538:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_0019453c:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_00194540:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00194560;
        }
    }
L_00194544:;
    {
        cpu->r[4] = rd32(cpu->r[0]);
    }
L_00194548:;
    {
        cpu->r[1] = 0x0000000cu;
    }
L_0019454c:;
    {
        cpu->r[14] = 0x00194550u; fn_002082a8(cpu);
    }
L_00194550:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 1);
    }
L_00194554:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00194558:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00194544;
        }
    }
L_0019455c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00194560:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[0]);
    }
L_00194564:;
    {
        wr32(cpu->r[5], cpu->r[0]);
    }
L_00194568:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0019456cu)) return;
    }
}

/* _ZN4Game24OnMPCreateSessionSuccessEP10DataPacket @ 0019456c (arm) */
void fn_0019456c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0019456c:;
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
L_00194570:;
    {
        cpu->r[9] = rd32(0x00194578u + + 0x274u);
    }
L_00194574:;
    {
        cpu->r[2] = rd32(0x0019457cu + + 0x274u);
    }
L_00194578:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000e4u, 1, 0);
    }
L_0019457c:;
    {
        cpu->r[9] = add_flags(cpu, 0x00194584u, cpu->r[9], 0, 0);
    }
L_00194580:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x0001e400u, 0, 0);
    }
L_00194584:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00194588:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0019458c:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[2]);
    }
L_00194590:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_00194594:;
    {
        cpu->r[0] = rd32(0x0019459cu + + 0x258u);
    }
L_00194598:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_0019459c:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001945a0:;
    {
        cpu->r[0] = add_flags(cpu, 0x001945a8u, cpu->r[0], 0, 0);
    }
L_001945a4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001945a8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_001945ac:;
    {
        wr32(cpu->r[13] + + 0xdcu, cpu->r[3]);
    }
L_001945b0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[2], 0x00000380u, 0, 0);
    }
L_001945b4:;
    {
        cpu->r[14] = 0x001945b8u; fn_001d0ac4(cpu);
    }
L_001945b8:;
    {
        cpu->r[3] = 0x0000e780u;
    }
L_001945bc:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001945c0:;
    {
        cpu->r[4] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001945c4:;
    {
        goto L_00194614;
    }
L_001945c8:;
    {
        cpu->r[6] = rd32(cpu->r[4] + + 0x8u);
    }
L_001945cc:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_001945d0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001945d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001945e0;
        }
    }
L_001945d8:;
    {
        cpu->r[14] = 0x001945dcu; fn_0018ba20(cpu);
    }
L_001945dc:;
    {
        wr32(cpu->r[6], cpu->r[7]);
    }
L_001945e0:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x4u);
    }
L_001945e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001945e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001945f4;
        }
    }
L_001945ec:;
    {
        cpu->r[14] = 0x001945f0u; fn_0018ba20(cpu);
    }
L_001945f0:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[7]);
    }
L_001945f4:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0xcu);
    }
L_001945f8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001945fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00194608;
        }
    }
L_00194600:;
    {
        cpu->r[14] = 0x00194604u; fn_0018ba20(cpu);
    }
L_00194604:;
    {
        wr32(cpu->r[6] + + 0xcu, cpu->r[7]);
    }
L_00194608:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0019460c:;
    {
        cpu->r[14] = 0x00194610u; fn_0018ba20(cpu);
    }
L_00194610:;
    {
        cpu->r[4] = rd32(cpu->r[4]);
    }
L_00194614:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[8], 1, 1);
    }
L_00194618:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001945c8;
        }
    }
L_0019461c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00194620:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[5], 0x0001e000u, 0, 0);
    }
L_00194624:;
    {
        cpu->r[14] = 0x00194628u; fn_00194530(cpu);
    }
L_00194628:;
    {
        cpu->r[0] = 0x00000010u;
    }
L_0019462c:;
    {
        cpu->r[14] = 0x00194630u; fn_0018ba6c(cpu);
    }
L_00194630:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[11], 0x0000024cu, 0, 0);
    }
L_00194634:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_00194638:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x0000022cu, 0, 0);
    }
L_0019463c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00194640:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00194644:;
    {
        wr32(cpu->r[0], cpu->r[7]);
    }
L_00194648:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0019464c:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[7]);
    }
L_00194650:;
    {
        cpu->r[14] = 0x00194654u; fn_001d0434(cpu);
    }
L_00194654:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_00194658:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_0019465c:;
    {
        cpu->r[14] = 0x00194660u; imp__Znaj(cpu); /* _Znaj */
    }
L_00194660:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_00194664:;
    {
        wr32(cpu->r[6], cpu->r[0]);
    }
L_00194668:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0019466c:;
    {
        cpu->r[14] = 0x00194670u; fn_001d0434(cpu);
    }
L_00194670:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00194674:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00194678:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_0019467c:;
    {
        cpu->r[14] = 0x00194680u; fn_001d0700(cpu);
    }
L_00194680:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00194684:;
    {
        cpu->r[11] = rd32(cpu->r[6]);
    }
L_00194688:;
    {
        cpu->r[14] = 0x0019468cu; fn_001d0434(cpu);
    }
L_0019468c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00194690:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00194694:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00194698:;
    {
        cpu->r[14] = 0x0019469cu; fn_001d06ec(cpu);
    }
L_0019469c:;
    {
        cpu->r[0] = 0x00000008u;
    }
L_001946a0:;
    {
        cpu->r[14] = 0x001946a4u; imp__Znaj(cpu); /* _Znaj */
    }
L_001946a4:;
    {
        cpu->r[2] = 0x00000008u;
    }
L_001946a8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001946ac:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[0]);
    }
L_001946b0:;
    {
        cpu->r[14] = 0x001946b4u; fn_001d0700(cpu);
    }
L_001946b4:;
    {
        cpu->r[1] = 0x0000e6b2u;
    }
L_001946b8:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x0001u << 16);
    }
L_001946bc:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0x4u);
    }
L_001946c0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], cpu->r[1], 0, 0);
    }
L_001946c4:;
    {
        cpu->r[14] = 0x001946c8u; fn_001d06dc(cpu);
    }
L_001946c8:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001946cc:;
    {
        cpu->r[3] = 0x00000002u;
    }
L_001946d0:;
    {
        cpu->r[2] = 0x000000c8u;
    }
L_001946d4:;
    {
        wr8(cpu->r[6] + + 0x8u, cpu->r[3]);
    }
L_001946d8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001946dc:;
    {
        cpu->r[14] = 0x001946e0u; imp_memset(cpu); /* memset */
    }
L_001946e0:;
    {
        cpu->r[3] = 0x00001c4cu;
    }
L_001946e4:;
    {
        cpu->r[1] = rd32(0x001946ecu + + 0x10cu);
    }
L_001946e8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001946ec:;
    {
        cpu->r[2] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001946f0:;
    {
        cpu->r[1] = add_flags(cpu, 0x001946f8u, cpu->r[1], 0, 0);
    }
L_001946f4:;
    {
        cpu->r[14] = 0x001946f8u; imp_sprintf(cpu); /* sprintf */
    }
L_001946f8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001946fc:;
    {
        cpu->r[14] = 0x00194700u; fn_001d0434(cpu);
    }
L_00194700:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_00194704:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00194708:;
    {
        cpu->r[14] = 0x0019470cu; imp__Znaj(cpu); /* _Znaj */
    }
L_0019470c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00194710:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_00194714:;
    {
        wr32(cpu->r[6] + + 0xcu, cpu->r[0]);
    }
L_00194718:;
    {
        wr8(cpu->r[0] + cpu->r[11], cpu->r[7]);
    }
L_0019471c:;
    {
        cpu->r[0] = rd32(cpu->r[6] + + 0xcu);
    }
L_00194720:;
    {
        cpu->r[14] = 0x00194724u; fn_001d06ec(cpu);
    }
L_00194724:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x000000e0u, 0, 0);
    }
L_00194728:;
    {
        cpu->r[3] = 0x0000000cu;
    }
L_0019472c:;
    {
        uint32_t wb_tmp = cpu->r[0] + - 0xd0u;
        wr32(cpu->r[0] + - 0xd0u, cpu->r[3]);
        cpu->r[0] = wb_tmp;
    }
L_00194730:;
    {
        cpu->r[14] = 0x00194734u; fn_00208278(cpu);
    }
L_00194734:;
    {
        cpu->r[12] = 0x0000e784u;
    }
L_00194738:;
    {
        cpu->r[12] = (cpu->r[12] & 0xffffu) | (0x0001u << 16);
    }
L_0019473c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00194740:;
    {
        cpu->r[14] = 0x0000e788u;
    }
L_00194744:;
    {
        cpu->r[2] = 0x00000020u;
    }
L_00194748:;
    {
        cpu->r[10] = rd32(cpu->r[5] + cpu->r[12]);
    }
L_0019474c:;
    {
        cpu->r[14] = (cpu->r[14] & 0xffffu) | (0x0001u << 16);
    }
L_00194750:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00194754:;
    {
        cpu->r[0] = 0x0000e780u;
    }
L_00194758:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_0019475c:;
    {
        wr32(cpu->r[3], cpu->r[4]);
    }
L_00194760:;
    {
        cpu->r[4] = 0x0000e78cu;
    }
L_00194764:;
    {
        wr32(cpu->r[10], cpu->r[3]);
    }
L_00194768:;
    {
        cpu->r[4] = (cpu->r[4] & 0xffffu) | (0x0001u << 16);
    }
L_0019476c:;
    {
        cpu->r[7] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_00194770:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[10]);
    }
L_00194774:;
    {
        wr32(cpu->r[3] + + 0x8u, cpu->r[6]);
    }
L_00194778:;
    {
        wr32(cpu->r[5] + cpu->r[12], cpu->r[3]);
    }
L_0019477c:;
    {
        wr32(cpu->r[5] + cpu->r[14], cpu->r[6]);
    }
L_00194780:;
    {
        cpu->r[0] = rd32(cpu->r[13]);
    }
L_00194784:;
    {
        wr32(cpu->r[5] + cpu->r[4], cpu->r[7]);
    }
L_00194788:;
    {
        cpu->r[14] = 0x0019478cu; fn_001d0700(cpu);
    }
L_0019478c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00194790:;
    {
        cpu->r[14] = 0x00194794u; fn_001d0434(cpu);
    }
L_00194794:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00194798:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_0019479c:;
    {
        cpu->r[0] = rd32(cpu->r[13]);
    }
L_001947a0:;
    {
        cpu->r[14] = 0x001947a4u; fn_001d06ec(cpu);
    }
L_001947a4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_001947a8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001947ac:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000390u, 0, 0);
    }
L_001947b0:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_001947b4:;
    {
        cpu->r[14] = 0x001947bcu;
    }
L_001947b8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001947bcu)) return;
    }
L_001947bc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001947c0:;
    {
        cpu->r[1] = 0x00000007u;
    }
L_001947c4:;
    {
        cpu->r[14] = 0x001947c8u; fn_001933d4(cpu);
    }
L_001947c8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x8u);
    }
L_001947cc:;
    {
        cpu->r[3] = rd32(cpu->r[9] + cpu->r[2]);
    }
L_001947d0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xdcu);
    }
L_001947d4:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_001947d8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_001947dc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001947e8;
        }
    }
L_001947e0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000e4u, 0, 0);
    }
L_001947e4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001947e8u)) return;
    }
L_001947e8:;
    {
        cpu->r[14] = 0x001947ecu; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_001947ec:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[4] * cpu->r[14]; cpu->r[11] = v;
        }
    }
L_001947f0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_001947f4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[9] + (-cpu->r[0]);
        wr64(cpu->r[9], ((uint64_t)cpu->r[11] << 32) | cpu->r[10]);
        cpu->r[9] = wb_tmp;
        }
    }
L_001947f8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[9] & cpu->r[8]; cpu->r[11] = v;
        }
    }
}

/* _ZN4Game23OnMPProcessPushMessagesEP10DataPacketi @ 001947fc (arm) */
void fn_001947fc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001947fc:;
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
L_00194800:;
    {
        cpu->r[4] = rd32(0x00194808u + + 0xb80u);
    }
L_00194804:;
    {
        cpu->r[5] = rd32(0x0019480cu + + 0xb80u);
    }
L_00194808:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000fcu, 1, 0);
    }
L_0019480c:;
    {
        cpu->r[4] = add_flags(cpu, 0x00194814u, cpu->r[4], 0, 0);
    }
L_00194810:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000011u, 1, 0);
    }
L_00194814:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00194818:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_0019481c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00194820:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00194824:;
    {
        wr32(cpu->r[13] + + 0xf4u, cpu->r[3]);
    }
L_00194828:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000003fu, 1, 1);
    }
L_0019482c:;
    {
        if (cond_test(cpu, 10)) {
        switch (cpu->r[2]) {
        case 0: goto L_00194af0;
        case 1: goto L_00194b94;
        case 2: goto L_00194a70;
        case 3: goto L_00194a70;
        case 4: goto L_00194be0;
        case 5: goto L_00194a70;
        case 6: goto L_00194a70;
        case 7: goto L_00194a70;
        case 8: goto L_00194a70;
        case 9: goto L_00194a70;
        case 10: goto L_00194a70;
        case 11: goto L_00194a70;
        case 12: goto L_00194a70;
        case 13: goto L_00194a70;
        case 14: goto L_00194a70;
        case 15: goto L_00194be0;
        case 16: goto L_00194a70;
        case 17: goto L_00194a70;
        case 18: goto L_00194d60;
        case 19: goto L_00194a70;
        case 20: goto L_00194a70;
        case 21: goto L_00194dc8;
        case 22: goto L_00194a70;
        case 23: goto L_00194a70;
        case 24: goto L_00194f10;
        case 25: goto L_00194a70;
        case 26: goto L_00194a70;
        case 27: goto L_00194fa8;
        case 28: goto L_00194a70;
        case 29: goto L_00194a70;
        case 30: goto L_00194fb4;
        case 31: goto L_00194a70;
        case 32: goto L_00194a70;
        case 33: goto L_00194934;
        case 34: goto L_00194a70;
        case 35: goto L_00194a70;
        case 36: goto L_00194a70;
        case 37: goto L_00194a70;
        case 38: goto L_00194a70;
        case 39: goto L_00194a70;
        case 40: goto L_00194a70;
        case 41: goto L_00194a70;
        case 42: goto L_00194a70;
        case 43: goto L_00194a70;
        case 44: goto L_00194a70;
        case 45: goto L_00194a70;
        case 46: goto L_00194a70;
        case 47: goto L_00194a70;
        case 48: goto L_00194a70;
        case 49: goto L_00194a70;
        case 50: goto L_00194a70;
        case 51: goto L_00194a70;
        case 52: goto L_00194a70;
        case 53: goto L_00194a70;
        case 54: goto L_00194a70;
        case 55: goto L_00194a70;
        case 56: goto L_00194a70;
        case 57: goto L_00194a70;
        case 58: goto L_00194a70;
        case 59: goto L_00194a70;
        case 60: goto L_00194a70;
        case 61: goto L_00194a70;
        case 62: goto L_00194a70;
        case 63: goto L_00194a8c;
        default: guest_unimplemented(cpu, 0x0019482cu); return; }
        }
    }
L_00194830:;
    {
        goto L_00194a70;
    }
L_00194934:;
    {
        cpu->r[3] = 0x0000e21cu;
    }
L_00194938:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0019493c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00194940:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000009u, 1, 1);
    }
L_00194944:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00194a70;
        }
    }
L_00194948:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x000000f8u, 0, 0);
    }
L_0019494c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00194950:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000002au, 0, 0);
    }
L_00194954:;
    {
        wr16(cpu->r[13] + + 0x2au, cpu->r[3]);
    }
L_00194958:;
    {
        uint32_t wb_tmp = cpu->r[8] + - 0xdcu;
        wr32(cpu->r[8] + - 0xdcu, cpu->r[3]);
        cpu->r[8] = wb_tmp;
    }
L_0019495c:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00194960:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_00194964:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00194968:;
    {
        cpu->r[14] = 0x00194970u;
    }
L_0019496c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00194970u)) return;
    }
L_00194970:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00194974:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00194978:;
    {
        cpu->r[14] = 0x0019497cu; fn_001933c8(cpu);
    }
L_0019497c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00194980:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00194984:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019536c;
        }
    }
L_00194988:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[6], 0x0001ec00u, 0, 0);
    }
L_0019498c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x000000b0u, 0, 0);
    }
L_00194990:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00194994:;
    {
        cpu->r[14] = 0x00194998u; fn_001d06dc(cpu);
    }
L_00194998:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0019499c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001949a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001949b0;
        }
    }
L_001949a4:;
    {
        cpu->r[14] = 0x001949a8u; fn_0018ba20(cpu);
    }
L_001949a8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001949ac:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_001949b0:;
    {
        cpu->r[0] = (uint32_t)(int32_t)s16(cpu->r[13] + + 0x2au);
    }
L_001949b4:;
    {
        cpu->r[14] = 0x001949b8u; imp__Znaj(cpu); /* _Znaj */
    }
L_001949b8:;
    {
        cpu->r[3] = rd32(0x001949c0u + + 0x9d0u);
    }
L_001949bc:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001949c0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_001949c4:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_001949c8:;
    {
        cpu->r[14] = 0x001949ccu; imp_strcpy(cpu); /* strcpy */
    }
L_001949cc:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001949d0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000026u, 0, 0);
    }
L_001949d4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001949d8:;
    {
        cpu->r[14] = 0x001949e0u;
    }
L_001949dc:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001949e0u)) return;
    }
L_001949e0:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001949e4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_001949e8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001949ec:;
    {
        cpu->r[14] = 0x001949f4u;
    }
L_001949f0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x24u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001949f4u)) return;
    }
L_001949f4:;
    {
        cpu->r[2] = rd32(0x001949fcu + + 0x998u);
    }
L_001949f8:;
    {
        cpu->r[12] = rd16(cpu->r[13] + + 0x26u);
    }
L_001949fc:;
    {
        cpu->r[0] = 0x0000ecf0u;
    }
L_00194a00:;
    {
        cpu->r[3] = 0x0000ecf2u;
    }
L_00194a04:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000f8u, 0, 0);
    }
L_00194a08:;
    {
        cpu->r[14] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00194a0c:;
    {
        cpu->r[0] = (cpu->r[0] & 0xffffu) | (0x0001u << 16);
    }
L_00194a10:;
    {
        cpu->r[2] = rd32(0x00194a18u + + 0x980u);
    }
L_00194a14:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00194a18:;
    {
        cpu->r[8] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00194a1c:;
    {
        cpu->r[2] = rd16(cpu->r[13] + + 0x28u);
    }
L_00194a20:;
    {
        wr16(cpu->r[6] + cpu->r[0], cpu->r[12]);
    }
L_00194a24:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00194a28:;
    {
        wr32(cpu->r[8], cpu->r[12]);
    }
L_00194a2c:;
    {
        cpu->r[12] = (~0x00000000u);
    }
L_00194a30:;
    {
        wr16(cpu->r[6] + cpu->r[3], cpu->r[2]);
    }
L_00194a34:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0xd8u;
        wr32(cpu->r[1] + - 0xd8u, cpu->r[12]);
        cpu->r[1] = wb_tmp;
    }
L_00194a38:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00194a3c:;
    {
        wr32(cpu->r[14], cpu->r[2]);
    }
L_00194a40:;
    {
        cpu->r[14] = 0x00194a48u;
    }
L_00194a44:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00194a48u)) return;
    }
L_00194a48:;
    {
        cpu->r[1] = 0x0000000au;
    }
L_00194a4c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00194a50:;
    {
        cpu->r[14] = 0x00194a54u; fn_001933d4(cpu);
    }
L_00194a54:;
    {
        cpu->r[0] = 0x00000960u;
    }
L_00194a58:;
    {
        cpu->r[14] = 0x00194a5cu; fn_0018ba6c(cpu);
    }
L_00194a5c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00194a60:;
    {
        cpu->r[14] = 0x00194a64u; fn_0019fb34(cpu);
    }
L_00194a64:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00194a68:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00194a6c:;
    {
        cpu->r[14] = 0x00194a70u; fn_000f361c(cpu);
    }
L_00194a70:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[5]);
    }
L_00194a74:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xf4u);
    }
L_00194a78:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00194a7c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[3], 1, 1);
    }
L_00194a80:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00195384;
        }
    }
L_00194a84:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000fcu, 0, 0);
    }
L_00194a88:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00194a8cu)) return;
    }
L_00194a8c:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_00194a90:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00194a94:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[8]);
    }
L_00194a98:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00194a9c:;
    {
        wr16(cpu->r[13] + + 0x26u, cpu->r[8]);
    }
L_00194aa0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000026u, 0, 0);
    }
L_00194aa4:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00194aa8:;
    {
        cpu->r[14] = 0x00194ab0u;
    }
L_00194aac:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00194ab0u)) return;
    }
L_00194ab0:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_00194ab4:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[8], 1, 1);
    }
L_00194ab8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00194ac4;
        }
    }
L_00194abc:;
    {
        cpu->r[14] = 0x00194ac0u; fn_0018ba20(cpu);
    }
L_00194ac0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[8]);
    }
L_00194ac4:;
    {
        cpu->r[3] = 0x00006788u;
    }
L_00194ac8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_00194acc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00194ad0:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00194ad4:;
    {
        cpu->r[14] = 0x00194adcu;
    }
L_00194ad8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x18u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00194adcu)) return;
    }
L_00194adc:;
    {
        cpu->r[3] = 0x0000ecf6u;
    }
L_00194ae0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00194ae4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00194ae8:;
    {
        wr8(cpu->r[6] + cpu->r[3], cpu->r[2]);
    }
L_00194aec:;
    {
        goto L_00194a70;
    }
L_00194af0:;
    {
        cpu->r[0] = 0x00000010u;
    }
L_00194af4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x000000f8u, 0, 0);
    }
L_00194af8:;
    {
        cpu->r[14] = 0x00194afcu; fn_0018ba6c(cpu);
    }
L_00194afc:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_00194b00:;
    {
        uint32_t wb_tmp = cpu->r[8] + - 0xceu;
        wr16(cpu->r[8] + - 0xceu, cpu->r[3]);
        cpu->r[8] = wb_tmp;
    }
L_00194b04:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00194b08:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00194b0c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x000000f8u, 0, 0);
    }
L_00194b10:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_00194b14:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00194b18:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_00194b1c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00194b20:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_00194b24:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00194b28:;
    {
        cpu->r[14] = 0x00194b30u;
    }
L_00194b2c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00194b30u)) return;
    }
L_00194b30:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_00194b34:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00194b38:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00194b3c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_00194b40:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00194b44:;
    {
        cpu->r[14] = 0x00194b4cu;
    }
L_00194b48:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00194b4cu)) return;
    }
L_00194b4c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_00194b50:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00194b54:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00194b58:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_00194b5c:;
    {
        cpu->r[14] = 0x00194b64u;
    }
L_00194b60:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00194b64u)) return;
    }
L_00194b64:;
    {
        uint32_t wb_tmp = cpu->r[10] + - 0xe8u;
        cpu->r[1] = rd32(cpu->r[10] + - 0xe8u);
        cpu->r[10] = wb_tmp;
    }
L_00194b68:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00194b6c:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00194b70:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_00194b74:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00194b78:;
    {
        cpu->r[14] = 0x00194b80u;
    }
L_00194b7c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00194b80u)) return;
    }
L_00194b80:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[6], 0x0001e400u, 0, 0);
    }
L_00194b84:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000380u, 0, 0);
    }
L_00194b88:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00194b8c:;
    {
        cpu->r[14] = 0x00194b90u; fn_001944e8(cpu);
    }
L_00194b90:;
    {
        goto L_00194a70;
    }
L_00194b94:;
    {
        cpu->r[3] = 0x0000e7a8u;
    }
L_00194b98:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00194b9c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00194ba0:;
    {
        cpu->r[0] = 0x00000010u;
    }
L_00194ba4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x000000f8u, 0, 0);
    }
L_00194ba8:;
    {
        wr8(cpu->r[6] + cpu->r[3], cpu->r[2]);
    }
L_00194bac:;
    {
        cpu->r[10] = cpu->r[8];
    }
L_00194bb0:;
    {
        cpu->r[14] = 0x00194bb4u; fn_0018ba6c(cpu);
    }
L_00194bb4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00194bb8:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_00194bbc:;
    {
        uint32_t wb_tmp = cpu->r[8] + - 0xceu;
        wr16(cpu->r[8] + - 0xceu, cpu->r[2]);
        cpu->r[8] = wb_tmp;
    }
L_00194bc0:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00194bc4:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_00194bc8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00194bcc:;
    {
        wr32(cpu->r[0], cpu->r[3]);
    }
L_00194bd0:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[0]);
    }
L_00194bd4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00194bd8:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00194bdc:;
    {
        goto L_00194b28;
    }
L_00194be0:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[0], 0x0001e000u, 0, 0);
    }
L_00194be4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_00194be8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x0000002au, 0, 0);
    }
L_00194bec:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[11], 0x0000022cu, 0, 0);
    }
L_00194bf0:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_00194bf4:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00194bf8:;
    {
        wr16(cpu->r[13] + + 0x2au, cpu->r[3]);
    }
L_00194bfc:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_00194c00:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00194c04:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00194c08:;
    {
        cpu->r[14] = 0x00194c10u;
    }
L_00194c0c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00194c10u)) return;
    }
L_00194c10:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00194c14:;
    {
        cpu->r[2] = 0x00000020u;
    }
L_00194c18:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00194c1c:;
    {
        cpu->r[14] = 0x00194c20u; fn_001d0700(cpu);
    }
L_00194c20:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00194c24:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[11], 0x0000024cu, 0, 0);
    }
L_00194c28:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00194c2c:;
    {
        wr32(cpu->r[13], cpu->r[1]);
    }
L_00194c30:;
    {
        cpu->r[14] = 0x00194c34u; fn_001d0434(cpu);
    }
L_00194c34:;
    {
        cpu->r[1] = rd32(cpu->r[13]);
    }
L_00194c38:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00194c3c:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00194c40:;
    {
        cpu->r[14] = 0x00194c44u; fn_001d06ec(cpu);
    }
L_00194c44:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_00194c48:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_00194c4c:;
    {
        cpu->r[14] = 0x00194c50u; fn_001d06e4(cpu);
    }
L_00194c50:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00194c54:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[9] = 0x00000000u;
        }
    }
L_00194c58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00195118;
        }
    }
L_00194c5c:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00194c60:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00194c64:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00194c74;
        }
    }
L_00194c68:;
    {
        cpu->r[14] = 0x00194c6cu; fn_0018ba20(cpu);
    }
L_00194c6c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00194c70:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_00194c74:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00194c78:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_00194c7c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00194c80:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00194c84:;
    {
        cpu->r[14] = 0x00194c8cu;
    }
L_00194c88:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00194c8cu)) return;
    }
L_00194c8c:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_00194c90:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00194c94:;
    {
        cpu->r[14] = 0x00194c98u; fn_001d06e4(cpu);
    }
L_00194c98:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00194c9c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00195158;
        }
    }
L_00194ca0:;
    {
        cpu->r[3] = 0x0000e780u;
    }
L_00194ca4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[6], 0x0001e400u, 0, 0);
    }
L_00194ca8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00194cac:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000380u, 0, 0);
    }
L_00194cb0:;
    {
        cpu->r[9] = cpu->r[0];
    }
L_00194cb4:;
    {
        cpu->r[10] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_00194cb8:;
    {
        goto L_00194d08;
    }
L_00194cbc:;
    {
        cpu->r[7] = rd32(cpu->r[10] + + 0x8u);
    }
L_00194cc0:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_00194cc4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00194cc8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00194cd4;
        }
    }
L_00194ccc:;
    {
        cpu->r[14] = 0x00194cd0u; fn_0018ba20(cpu);
    }
L_00194cd0:;
    {
        wr32(cpu->r[7], cpu->r[9]);
    }
L_00194cd4:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0x4u);
    }
L_00194cd8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00194cdc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00194ce8;
        }
    }
L_00194ce0:;
    {
        cpu->r[14] = 0x00194ce4u; fn_0018ba20(cpu);
    }
L_00194ce4:;
    {
        wr32(cpu->r[7] + + 0x4u, cpu->r[9]);
    }
L_00194ce8:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0xcu);
    }
L_00194cec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00194cf0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00194cfc;
        }
    }
L_00194cf4:;
    {
        cpu->r[14] = 0x00194cf8u; fn_0018ba20(cpu);
    }
L_00194cf8:;
    {
        wr32(cpu->r[7] + + 0xcu, cpu->r[9]);
    }
L_00194cfc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00194d00:;
    {
        cpu->r[14] = 0x00194d04u; fn_0018ba20(cpu);
    }
L_00194d04:;
    {
        cpu->r[10] = rd32(cpu->r[10]);
    }
L_00194d08:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[10], 1, 1);
    }
L_00194d0c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00194cbc;
        }
    }
L_00194d10:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00194d14:;
    {
        cpu->r[14] = 0x00194d18u; fn_00194530(cpu);
    }
L_00194d18:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00194d1c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00194d20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00194d30;
        }
    }
L_00194d24:;
    {
        cpu->r[14] = 0x00194d28u; fn_0018ba20(cpu);
    }
L_00194d28:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00194d2c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_00194d30:;
    {
        cpu->r[1] = 0x0000000cu;
    }
L_00194d34:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00194d38:;
    {
        cpu->r[14] = 0x00194d3cu; fn_001933d4(cpu);
    }
L_00194d3c:;
    {
        cpu->r[2] = 0x00006788u;
    }
L_00194d40:;
    {
        cpu->r[3] = 0x0000e7a9u;
    }
L_00194d44:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_00194d48:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_00194d4c:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00194d50:;
    {
        wr8(cpu->r[2] + + 0x64u, cpu->r[1]);
    }
L_00194d54:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00194d58:;
    {
        wr8(cpu->r[6] + cpu->r[3], cpu->r[2]);
    }
L_00194d5c:;
    {
        goto L_00194a70;
    }
L_00194d60:;
    {
        cpu->r[8] = 0x0000ed06u;
    }
L_00194d64:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_00194d68:;
    {
        cpu->r[8] = (cpu->r[8] & 0xffffu) | (0x0001u << 16);
    }
L_00194d6c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00194d70:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00194d74:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[6], cpu->r[8], 0, 0);
    }
L_00194d78:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_00194d7c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_00194d80:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[10]);
    }
L_00194d84:;
    {
        wr16(cpu->r[13] + + 0x28u, cpu->r[10]);
    }
L_00194d88:;
    {
        cpu->r[14] = 0x00194d90u;
    }
L_00194d8c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x50u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00194d90u)) return;
    }
L_00194d90:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00194d94:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00194d98:;
    {
        cpu->r[2] = 0x00000100u;
    }
L_00194d9c:;
    {
        cpu->r[14] = 0x00194da0u; fn_001d0700(cpu);
    }
L_00194da0:;
    {
        cpu->r[1] = rd32(0x00194da8u + + 0x5f4u);
    }
L_00194da4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00194da8:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00194dac:;
    {
        cpu->r[1] = add_flags(cpu, 0x00194db4u, cpu->r[1], 0, 0);
    }
L_00194db0:;
    {
        cpu->r[14] = 0x00194db4u; imp_sprintf(cpu); /* sprintf */
    }
L_00194db4:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00194db8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[10], 1, 1);
    }
L_00194dbc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00194a70;
        }
    }
L_00194dc0:;
    {
        cpu->r[14] = 0x00194dc4u; fn_0018ba20(cpu);
    }
L_00194dc4:;
    {
        goto L_00194a70;
    }
L_00194dc8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000028u, 0, 0);
    }
L_00194dcc:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_00194dd0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_00194dd4:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_00194dd8:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00194ddc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00194de0:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[8]);
    }
L_00194de4:;
    {
        wr16(cpu->r[13] + + 0x28u, cpu->r[8]);
    }
L_00194de8:;
    {
        cpu->r[14] = 0x00194df0u;
    }
L_00194dec:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00194df0u)) return;
    }
L_00194df0:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[8]);
    }
L_00194df4:;
    {
        wr16(cpu->r[13] + + 0x28u, cpu->r[8]);
    }
L_00194df8:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_00194dfc:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00194e00:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00194e04:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_00194e08:;
    {
        cpu->r[14] = 0x00194e10u;
    }
L_00194e0c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00194e10u)) return;
    }
L_00194e10:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x18u);
    }
L_00194e14:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[8], 1, 1);
    }
L_00194e18:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00194e24;
        }
    }
L_00194e1c:;
    {
        cpu->r[14] = 0x00194e20u; fn_0018ba20(cpu);
    }
L_00194e20:;
    {
        wr32(cpu->r[13] + + 0x18u, cpu->r[8]);
    }
L_00194e24:;
    {
        cpu->r[10] = 0x00000000u;
    }
L_00194e28:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000026u, 0, 0);
    }
L_00194e2c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00194e30:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00194e34:;
    {
        wr32(cpu->r[13] + + 0x14u, cpu->r[10]);
    }
L_00194e38:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00194e3c:;
    {
        wr16(cpu->r[13] + + 0x26u, cpu->r[10]);
    }
L_00194e40:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[6], 0x0001e400u, 0, 0);
    }
L_00194e44:;
    {
        cpu->r[14] = 0x00194e4cu;
    }
L_00194e48:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x50u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00194e4cu)) return;
    }
L_00194e4c:;
    {
        cpu->r[3] = 0x0000e780u;
    }
L_00194e50:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00194e54:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000380u, 0, 0);
    }
L_00194e58:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_00194e5c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00194e60:;
    {
        cpu->r[6] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_00194e64:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_00194e68:;
    {
        sub_flags(cpu, cpu->r[6], cpu->r[9], 1, 1);
    }
L_00194e6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001950ec;
        }
    }
L_00194e70:;
    {
        cpu->r[7] = rd32(cpu->r[6] + + 0x8u);
    }
L_00194e74:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[10]);
    }
L_00194e78:;
    {
        cpu->r[11] = rd32(cpu->r[7]);
    }
L_00194e7c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00194e80:;
    {
        cpu->r[14] = 0x00194e84u; fn_001d0434(cpu);
    }
L_00194e84:;
    {
        cpu->r[1] = cpu->r[11];
    }
L_00194e88:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00194e8c:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_00194e90:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x4u);
    }
L_00194e94:;
    {
        cpu->r[14] = 0x00194e98u; fn_001d0a68(cpu);
    }
L_00194e98:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_00194e9c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00194ea0:;
    {
        cpu->r[14] = 0x00194ea4u; imp_strcmp(cpu); /* strcmp */
    }
L_00194ea4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00194ea8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00194f08;
        }
    }
L_00194eac:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0xcu);
    }
L_00194eb0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00194eb4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00194ec0;
        }
    }
L_00194eb8:;
    {
        cpu->r[14] = 0x00194ebcu; fn_0018ba20(cpu);
    }
L_00194ebc:;
    {
        wr32(cpu->r[7] + + 0xcu, cpu->r[10]);
    }
L_00194ec0:;
    {
        cpu->r[2] = 0x000000c8u;
    }
L_00194ec4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00194ec8:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00194ecc:;
    {
        cpu->r[14] = 0x00194ed0u; imp_memset(cpu); /* memset */
    }
L_00194ed0:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x14u);
    }
L_00194ed4:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00194ed8:;
    {
        cpu->r[14] = 0x00194edcu; imp_strcpy(cpu); /* strcpy */
    }
L_00194edc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00194ee0:;
    {
        cpu->r[14] = 0x00194ee4u; fn_001d0434(cpu);
    }
L_00194ee4:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_00194ee8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00194eec:;
    {
        cpu->r[14] = 0x00194ef0u; imp__Znaj(cpu); /* _Znaj */
    }
L_00194ef0:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_00194ef4:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00194ef8:;
    {
        wr32(cpu->r[7] + + 0xcu, cpu->r[0]);
    }
L_00194efc:;
    {
        wr8(cpu->r[0] + cpu->r[11], cpu->r[10]);
    }
L_00194f00:;
    {
        cpu->r[0] = rd32(cpu->r[7] + + 0xcu);
    }
L_00194f04:;
    {
        cpu->r[14] = 0x00194f08u; fn_001d06ec(cpu);
    }
L_00194f08:;
    {
        cpu->r[6] = rd32(cpu->r[6]);
    }
L_00194f0c:;
    {
        goto L_00194e68;
    }
L_00194f10:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x000000f8u, 0, 0);
    }
L_00194f14:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x0000002au, 0, 0);
    }
L_00194f18:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_00194f1c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00194f20:;
    {
        wr16(cpu->r[13] + + 0x2au, cpu->r[2]);
    }
L_00194f24:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00194f28:;
    {
        uint32_t wb_tmp = cpu->r[8] + - 0xdcu;
        wr32(cpu->r[8] + - 0xdcu, cpu->r[3]);
        cpu->r[8] = wb_tmp;
    }
L_00194f2c:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_00194f30:;
    {
        cpu->r[3] = rd32(cpu->r[1]);
    }
L_00194f34:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00194f38:;
    {
        cpu->r[14] = 0x00194f40u;
    }
L_00194f3c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00194f40u)) return;
    }
L_00194f40:;
    {
        cpu->r[3] = 0x0000e780u;
    }
L_00194f44:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00194f48:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[6], 0x0001e400u, 0, 0);
    }
L_00194f4c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000380u, 0, 0);
    }
L_00194f50:;
    {
        cpu->r[11] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_00194f54:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[9], 1, 1);
    }
L_00194f58:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00195340;
        }
    }
L_00194f5c:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_00194f60:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00194f64:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[3], 1, 1);
    }
L_00194f68:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00194f60;
        }
    }
L_00194f6c:;
    {
        goto L_00194f8c;
    }
L_00194f70:;
    {
        cpu->r[6] = rd32(cpu->r[11] + + 0x8u);
    }
L_00194f74:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00194f78:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_00194f7c:;
    {
        cpu->r[14] = 0x00194f80u; fn_001d06e8(cpu);
    }
L_00194f80:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00194f84:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00195244;
        }
    }
L_00194f88:;
    {
        cpu->r[11] = rd32(cpu->r[11]);
    }
L_00194f8c:;
    {
        sub_flags(cpu, cpu->r[11], cpu->r[9], 1, 1);
    }
L_00194f90:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00194f70;
        }
    }
L_00194f94:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00194f98:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00194f9c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00194a70;
        }
    }
L_00194fa0:;
    {
        cpu->r[14] = 0x00194fa4u; fn_0018ba20(cpu);
    }
L_00194fa4:;
    {
        goto L_00194a70;
    }
L_00194fa8:;
    {
        cpu->r[1] = 0x00000009u;
    }
L_00194fac:;
    {
        cpu->r[14] = 0x00194fb0u; fn_001933d4(cpu);
    }
L_00194fb0:;
    {
        goto L_00194a70;
    }
L_00194fb4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x000000f8u, 0, 0);
    }
L_00194fb8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000026u, 0, 0);
    }
L_00194fbc:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_00194fc0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00194fc4:;
    {
        wr16(cpu->r[13] + + 0x26u, cpu->r[3]);
    }
L_00194fc8:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_00194fcc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00194fd0:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0xecu;
        wr32(cpu->r[1] + - 0xecu, cpu->r[3]);
        cpu->r[1] = wb_tmp;
    }
L_00194fd4:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00194fd8:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[6], 0x0001e400u, 0, 0);
    }
L_00194fdc:;
    {
        cpu->r[14] = 0x00194fe4u;
    }
L_00194fe0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00194fe4u)) return;
    }
L_00194fe4:;
    {
        cpu->r[3] = 0x0000e780u;
    }
L_00194fe8:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00194fec:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000380u, 0, 0);
    }
L_00194ff0:;
    {
        cpu->r[6] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_00194ff4:;
    {
        goto L_00195014;
    }
L_00194ff8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_00194ffc:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_00195000:;
    {
        cpu->r[1] = rd32(cpu->r[3]);
    }
L_00195004:;
    {
        cpu->r[14] = 0x00195008u; fn_001d06e8(cpu);
    }
L_00195008:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019500c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001951d4;
        }
    }
L_00195010:;
    {
        cpu->r[6] = rd32(cpu->r[6]);
    }
L_00195014:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[6], 1, 1);
    }
L_00195018:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00194ff8;
        }
    }
L_0019501c:;
    {
        cpu->r[0] = 0x00000010u;
    }
L_00195020:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00195024:;
    {
        cpu->r[14] = 0x00195028u; fn_0018ba6c(cpu);
    }
L_00195028:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[13], 0x000000f8u, 0, 0);
    }
L_0019502c:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00195030:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_00195034:;
    {
        wr32(cpu->r[13] + + 0x10u, cpu->r[3]);
    }
L_00195038:;
    {
        wr32(cpu->r[3], cpu->r[6]);
    }
L_0019503c:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[6]);
    }
L_00195040:;
    {
        cpu->r[14] = 0x00195044u; fn_001d0434(cpu);
    }
L_00195044:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x10u);
    }
L_00195048:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_0019504c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00195050:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_00195054:;
    {
        cpu->r[14] = 0x00195058u; imp__Znaj(cpu); /* _Znaj */
    }
L_00195058:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_0019505c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_00195060:;
    {
        wr32(cpu->r[11], cpu->r[0]);
    }
L_00195064:;
    {
        cpu->r[0] = rd32(cpu->r[2]);
    }
L_00195068:;
    {
        cpu->r[14] = 0x0019506cu; fn_001d06dc(cpu);
    }
L_0019506c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_00195070:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_00195074:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_00195078:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019507c:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00195080:;
    {
        wr8(cpu->r[1] + cpu->r[3], cpu->r[6]);
    }
L_00195084:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_00195088:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0019508c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_00195090:;
    {
        cpu->r[14] = 0x00195098u;
    }
L_00195094:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00195098u)) return;
    }
L_00195098:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x10u);
    }
L_0019509c:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001950a0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001950a4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_001950a8:;
    {
        cpu->r[14] = 0x001950b0u;
    }
L_001950ac:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001950b0u)) return;
    }
L_001950b0:;
    {
        uint32_t wb_tmp = cpu->r[9] + - 0xe8u;
        cpu->r[1] = rd32(cpu->r[9] + - 0xe8u);
        cpu->r[9] = wb_tmp;
    }
L_001950b4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001950b8:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001950bc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_001950c0:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001950c4:;
    {
        cpu->r[14] = 0x001950ccu;
    }
L_001950c8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001950ccu)) return;
    }
L_001950cc:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001950d0:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001950d4:;
    {
        cpu->r[14] = 0x001950d8u; fn_001944e8(cpu);
    }
L_001950d8:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0xcu);
    }
L_001950dc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001950e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00194a70;
        }
    }
L_001950e4:;
    {
        cpu->r[14] = 0x001950e8u; fn_0018ba20(cpu);
    }
L_001950e8:;
    {
        goto L_00194a70;
    }
L_001950ec:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001950f0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001950f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00195104;
        }
    }
L_001950f8:;
    {
        cpu->r[14] = 0x001950fcu; fn_0018ba20(cpu);
    }
L_001950fc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00195100:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_00195104:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x14u);
    }
L_00195108:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019510c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00194a70;
        }
    }
L_00195110:;
    {
        cpu->r[14] = 0x00195114u; fn_0018ba20(cpu);
    }
L_00195114:;
    {
        goto L_00194a70;
    }
L_00195118:;
    {
        cpu->r[3] = 0x0000e788u;
    }
L_0019511c:;
    {
        cpu->r[2] = 0x00006788u;
    }
L_00195120:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00195124:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_00195128:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0019512c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_00195130:;
    {
        wr8(cpu->r[0] + + 0x89u, cpu->r[2]);
    }
L_00195134:;
    {
        cpu->r[3] = rd8(cpu->r[3] + + 0x8u);
    }
L_00195138:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000003u, 1, 1);
    }
L_0019513c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00195350;
        }
    }
L_00195140:;
    {
        cpu->r[3] = 0x0000ecf5u;
    }
L_00195144:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00195148:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_0019514c:;
    {
        cpu->r[9] = cpu->r[2];
    }
L_00195150:;
    {
        wr8(cpu->r[6] + cpu->r[3], cpu->r[2]);
    }
L_00195154:;
    {
        goto L_00194c5c;
    }
L_00195158:;
    {
        cpu->r[3] = 0x0000e780u;
    }
L_0019515c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[6], 0x0001e400u, 0, 0);
    }
L_00195160:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00195164:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000380u, 0, 0);
    }
L_00195168:;
    {
        cpu->r[7] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_0019516c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[8], 1, 1);
    }
L_00195170:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019535c;
        }
    }
L_00195174:;
    {
        cpu->r[3] = cpu->r[7];
    }
L_00195178:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_0019517c:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[3], 1, 1);
    }
L_00195180:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00195178;
        }
    }
L_00195184:;
    {
        goto L_001951a4;
    }
L_00195188:;
    {
        cpu->r[10] = rd32(cpu->r[7] + + 0x8u);
    }
L_0019518c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00195190:;
    {
        cpu->r[0] = rd32(cpu->r[10]);
    }
L_00195194:;
    {
        cpu->r[14] = 0x00195198u; fn_001d06e4(cpu);
    }
L_00195198:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019519c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001952bc;
        }
    }
L_001951a0:;
    {
        cpu->r[7] = rd32(cpu->r[7]);
    }
L_001951a4:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[8], 1, 1);
    }
L_001951a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00195188;
        }
    }
L_001951ac:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_001951b0:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000000u, 1, 1);
    }
L_001951b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001950dc;
        }
    }
L_001951b8:;
    {
        cpu->r[2] = 0x0000e780u;
    }
L_001951bc:;
    {
        cpu->r[3] = 0x0000e78cu;
    }
L_001951c0:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_001951c4:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001951c8:;
    {
        cpu->r[2] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_001951cc:;
    {
        wr32(cpu->r[6] + cpu->r[3], cpu->r[2]);
    }
L_001951d0:;
    {
        goto L_001950dc;
    }
L_001951d4:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x8u);
    }
L_001951d8:;
    {
        cpu->r[0] = rd32(cpu->r[1] + + 0x4u);
    }
L_001951dc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001951e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001951f4;
        }
    }
L_001951e4:;
    {
        cpu->r[14] = 0x001951e8u; fn_0018ba20(cpu);
    }
L_001951e8:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_001951ec:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_001951f0:;
    {
        wr32(cpu->r[3] + + 0x4u, cpu->r[9]);
    }
L_001951f4:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_001951f8:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_001951fc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_00195200:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00195204:;
    {
        cpu->r[14] = 0x0019520cu;
    }
L_00195208:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019520cu)) return;
    }
L_0019520c:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x8u);
    }
L_00195210:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00195214:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00195218:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_0019521c:;
    {
        cpu->r[14] = 0x00195224u;
    }
L_00195220:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00195224u)) return;
    }
L_00195224:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x8u);
    }
L_00195228:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019522c:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_00195230:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000000cu, 0, 0);
    }
L_00195234:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_00195238:;
    {
        cpu->r[14] = 0x00195240u;
    }
L_0019523c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00195240u)) return;
    }
L_00195240:;
    {
        goto L_001950d8;
    }
L_00195244:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00195248:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019524c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00195260;
        }
    }
L_00195250:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_00195254:;
    {
        cpu->r[14] = 0x00195258u; fn_0018ba20(cpu);
    }
L_00195258:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_0019525c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_00195260:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00195264:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_00195268:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0019526c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00195270:;
    {
        cpu->r[14] = 0x00195278u;
    }
L_00195274:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00195278u)) return;
    }
L_00195278:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_0019527c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00195280:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00195290;
        }
    }
L_00195284:;
    {
        cpu->r[14] = 0x00195288u; fn_0018ba20(cpu);
    }
L_00195288:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0019528c:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_00195290:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00195294:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[6], 0x00000008u, 0, 0);
    }
L_00195298:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0019529c:;
    {
        cpu->r[14] = 0x001952a4u;
    }
L_001952a0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001952a4u)) return;
    }
L_001952a4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001952a8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00194f94;
        }
    }
L_001952ac:;
    {
        cpu->r[0] = rd32(0x001952b4u + + 0xecu);
    }
L_001952b0:;
    {
        cpu->r[0] = add_flags(cpu, 0x001952b8u, cpu->r[0], 0, 0);
    }
L_001952b4:;
    {
        cpu->r[14] = 0x001952b8u; fn_001d0ac4(cpu);
    }
L_001952b8:;
    {
        goto L_00194f94;
    }
L_001952bc:;
    {
        cpu->r[0] = rd32(cpu->r[10]);
    }
L_001952c0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001952c4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001952d0;
        }
    }
L_001952c8:;
    {
        cpu->r[14] = 0x001952ccu; fn_0018ba20(cpu);
    }
L_001952cc:;
    {
        wr32(cpu->r[10], cpu->r[11]);
    }
L_001952d0:;
    {
        cpu->r[0] = rd32(cpu->r[10] + + 0x4u);
    }
L_001952d4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001952d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001952e8;
        }
    }
L_001952dc:;
    {
        cpu->r[14] = 0x001952e0u; fn_0018ba20(cpu);
    }
L_001952e0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001952e4:;
    {
        wr32(cpu->r[10] + + 0x4u, cpu->r[3]);
    }
L_001952e8:;
    {
        cpu->r[0] = rd32(cpu->r[10] + + 0xcu);
    }
L_001952ec:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001952f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00195300;
        }
    }
L_001952f4:;
    {
        cpu->r[14] = 0x001952f8u; fn_0018ba20(cpu);
    }
L_001952f8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001952fc:;
    {
        wr32(cpu->r[10] + + 0xcu, cpu->r[3]);
    }
L_00195300:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_00195304:;
    {
        cpu->r[14] = 0x00195308u; fn_0018ba20(cpu);
    }
L_00195308:;
    {
        uint32_t base = cpu->r[7];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[2] = v0;
        cpu->r[3] = v1;
    }
L_0019530c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00195310:;
    {
        cpu->r[1] = 0x0000000cu;
    }
L_00195314:;
    {
        wr32(cpu->r[2] + + 0x4u, cpu->r[3]);
    }
L_00195318:;
    {
        wr32(cpu->r[3], cpu->r[2]);
    }
L_0019531c:;
    {
        cpu->r[14] = 0x00195320u; fn_002082a8(cpu);
    }
L_00195320:;
    {
        cpu->r[0] = rd32(cpu->r[13] + + 0x1cu);
    }
L_00195324:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00195328:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001951b0;
        }
    }
L_0019532c:;
    {
        cpu->r[14] = 0x00195330u; fn_0018ba20(cpu);
    }
L_00195330:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00195334:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00195338:;
    {
        wr32(cpu->r[13] + + 0x1cu, cpu->r[3]);
    }
L_0019533c:;
    {
        goto L_001951b0;
    }
L_00195340:;
    {
        cpu->r[0] = rd32(0x00195348u + + 0x5cu);
    }
L_00195344:;
    {
        cpu->r[0] = add_flags(cpu, 0x0019534cu, cpu->r[0], 0, 0);
    }
L_00195348:;
    {
        cpu->r[14] = 0x0019534cu; fn_001d0ac4(cpu);
    }
L_0019534c:;
    {
        goto L_00194f94;
    }
L_00195350:;
    {
        cpu->r[1] = 0x00000002u;
    }
L_00195354:;
    {
        cpu->r[14] = 0x00195358u; fn_001c467c(cpu);
    }
L_00195358:;
    {
        goto L_00195140;
    }
L_0019535c:;
    {
        cpu->r[0] = rd32(0x00195364u + + 0x44u);
    }
L_00195360:;
    {
        cpu->r[0] = add_flags(cpu, 0x00195368u, cpu->r[0], 0, 0);
    }
L_00195364:;
    {
        cpu->r[14] = 0x00195368u; fn_001d0ac4(cpu);
    }
L_00195368:;
    {
        goto L_001951ac;
    }
L_0019536c:;
    {
        cpu->r[0] = rd32(0x00195374u + + 0x38u);
    }
L_00195370:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[6], 0x0001ec00u, 0, 0);
    }
L_00195374:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x000000b0u, 0, 0);
    }
L_00195378:;
    {
        cpu->r[0] = add_flags(cpu, 0x00195380u, cpu->r[0], 0, 0);
    }
L_0019537c:;
    {
        cpu->r[14] = 0x00195380u; fn_001d0ac4(cpu);
    }
L_00195380:;
    {
        goto L_00194998;
    }
L_00195384:;
    {
        cpu->r[14] = 0x00195388u; imp___stack_chk_fail(cpu); /* __stack_chk_fail */
    }
L_00195388:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[11] & shifter(cpu->r[4], 2, 24u, &shc); cpu->r[5] = v;
        }
    }
L_0019538c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[0], 3, 7u, &shc); cpu->r[0] = v;
        }
    }
L_00195390:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[12], 1, 10u, &shc); cpu->r[0] = v;
        }
    }
L_00195394:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[8], 2, 13u, &shc); cpu->r[0] = v;
        }
    }
L_00195398:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[0] & shifter(cpu->r[12], 1, 17u, &shc); cpu->r[0] = v;
        }
    }
L_0019539c:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[9] + (-cpu->r[4]);
        wr16(cpu->r[9], cpu->r[10]);
        cpu->r[9] = wb_tmp;
        }
    }
L_001953a0:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[9] + (-cpu->r[8]);
        wr64(cpu->r[9], ((uint64_t)cpu->r[10] << 32) | cpu->r[9]);
        cpu->r[9] = wb_tmp;
        }
    }
L_001953a4:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[8] * cpu->r[13]; cpu->r[9] = v;
        }
    }
L_001953a8:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t v = cpu->r[9] & shifter(cpu->r[12], 3, 27u, &shc); cpu->r[9] = v;
        }
    }
L_001953ac:;
    {
        if (cond_test(cpu, 1)) {
        uint32_t wb_tmp = cpu->r[9] + (-cpu->r[0]);
        uint64_t v = rd64(cpu->r[9]);
        cpu->r[9] = (uint32_t)v;
        cpu->r[10] = (uint32_t)(v >> 32);
        cpu->r[9] = wb_tmp;
        }
    }
}

/* _ZNSt4priv10_List_baseIPN4Game6_LOBBYESaIS3_EE5clearEv @ 001953b0 (arm) */
void fn_001953b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001953b0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001953b4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001953b8:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_001953bc:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[5], 1, 1);
    }
L_001953c0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001953e0;
        }
    }
L_001953c4:;
    {
        cpu->r[4] = rd32(cpu->r[0]);
    }
L_001953c8:;
    {
        cpu->r[1] = 0x0000000cu;
    }
L_001953cc:;
    {
        cpu->r[14] = 0x001953d0u; fn_002082a8(cpu);
    }
L_001953d0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[5], 1, 1);
    }
L_001953d4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001953d8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001953c4;
        }
    }
L_001953dc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001953e0:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[0]);
    }
L_001953e4:;
    {
        wr32(cpu->r[5], cpu->r[0]);
    }
L_001953e8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001953ecu)) return;
    }
}

/* _ZN4Game35OnMPListSessionSuccessWithGameParamEP10DataPacket @ 001953ec (arm) */
void fn_001953ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001953ec:;
    {
        cpu->r[3] = 0x0000e770u;
    }
L_001953f0:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_001953f4:;
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
L_001953f8:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], 0x0001e400u, 0, 0);
    }
L_001953fc:;
    {
        cpu->r[7] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00195400:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[10], 0x00000370u, 0, 0);
    }
L_00195404:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_00195408:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_0019540c:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[10], 1, 1);
    }
L_00195410:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00195414:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00195418:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00195498;
        }
    }
L_0019541c:;
    {
        cpu->r[5] = rd32(cpu->r[7] + + 0x8u);
    }
L_00195420:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x4u);
    }
L_00195424:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00195428:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00195434;
        }
    }
L_0019542c:;
    {
        cpu->r[14] = 0x00195430u; fn_0018ba20(cpu);
    }
L_00195430:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[6]);
    }
L_00195434:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x8u);
    }
L_00195438:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0019543c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00195448;
        }
    }
L_00195440:;
    {
        cpu->r[14] = 0x00195444u; fn_0018ba20(cpu);
    }
L_00195444:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[6]);
    }
L_00195448:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x4u);
    }
L_0019544c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00195450:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0019545c;
        }
    }
L_00195454:;
    {
        cpu->r[14] = 0x00195458u; fn_0018ba20(cpu);
    }
L_00195458:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[6]);
    }
L_0019545c:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0x8u);
    }
L_00195460:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00195464:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00195470;
        }
    }
L_00195468:;
    {
        cpu->r[14] = 0x0019546cu; fn_0018ba20(cpu);
    }
L_0019546c:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[6]);
    }
L_00195470:;
    {
        cpu->r[0] = rd32(cpu->r[5] + + 0xcu);
    }
L_00195474:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00195478:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00195484;
        }
    }
L_0019547c:;
    {
        cpu->r[14] = 0x00195480u; fn_0018ba20(cpu);
    }
L_00195480:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[6]);
    }
L_00195484:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00195488:;
    {
        cpu->r[14] = 0x0019548cu; fn_0018ba20(cpu);
    }
L_0019548c:;
    {
        cpu->r[7] = rd32(cpu->r[7]);
    }
L_00195490:;
    {
        sub_flags(cpu, cpu->r[7], cpu->r[10], 1, 1);
    }
L_00195494:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0019541c;
        }
    }
L_00195498:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_0019549c:;
    {
        cpu->r[9] = 0x00000000u;
    }
L_001954a0:;
    {
        cpu->r[14] = 0x001954a4u; fn_001953b0(cpu);
    }
L_001954a4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_001954a8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001954ac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001954b0:;
    {
        uint32_t wb_tmp = cpu->r[1] + - 0x8u;
        wr32(cpu->r[1] + - 0x8u, cpu->r[9]);
        cpu->r[1] = wb_tmp;
    }
L_001954b4:;
    {
        cpu->r[14] = 0x001954bcu;
    }
L_001954b8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001954bcu)) return;
    }
L_001954bc:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x10u);
    }
L_001954c0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[9], 1, 1);
    }
L_001954c4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00195640;
        }
    }
L_001954c8:;
    {
        cpu->r[10] = 0x0000e774u;
    }
L_001954cc:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x00000016u, 0, 0);
    }
L_001954d0:;
    {
        cpu->r[10] = (cpu->r[10] & 0xffffu) | (0x0001u << 16);
    }
L_001954d4:;
    {
        cpu->r[6] = cpu->r[9];
    }
L_001954d8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001954dc:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_001954e0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001954e4:;
    {
        wr32(cpu->r[13], cpu->r[3]);
    }
L_001954e8:;
    {
        cpu->r[0] = 0x0000001cu;
    }
L_001954ec:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001954f0:;
    {
        wr16(cpu->r[13] + + 0x16u, cpu->r[3]);
    }
L_001954f4:;
    {
        cpu->r[14] = 0x001954f8u; fn_0018ba6c(cpu);
    }
L_001954f8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001954fc:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[9], 0x00000001u, 0, 0);
    }
L_00195500:;
    {
        cpu->r[9] = (uint32_t)((uint8_t)cpu->r[9]);
    }
L_00195504:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00195508:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0019550c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00195510:;
    {
        wr8(cpu->r[5] + + 0x10u, cpu->r[3]);
    }
L_00195514:;
    {
        wr8(cpu->r[5] + + 0x11u, cpu->r[6]);
    }
L_00195518:;
    {
        wr32(cpu->r[5] + + 0x4u, cpu->r[6]);
    }
L_0019551c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00195520:;
    {
        wr32(cpu->r[5] + + 0xcu, cpu->r[6]);
    }
L_00195524:;
    {
        wr32(cpu->r[5] + + 0x8u, cpu->r[6]);
    }
L_00195528:;
    {
        wr32(cpu->r[5], cpu->r[6]);
    }
L_0019552c:;
    {
        cpu->r[14] = 0x00195534u;
    }
L_00195530:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00195534u)) return;
    }
L_00195534:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_00195538:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_0019553c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00195540:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00195544:;
    {
        cpu->r[14] = 0x0019554cu;
    }
L_00195548:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019554cu)) return;
    }
L_0019554c:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_00195550:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000008u, 0, 0);
    }
L_00195554:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00195558:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0019555c:;
    {
        cpu->r[14] = 0x00195564u;
    }
L_00195560:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x40u);
        if (guest_pc_write(cpu, t, entry_lr, 0x00195564u)) return;
    }
L_00195564:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000010u, 0, 0);
    }
L_00195568:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0019556c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00195570:;
    {
        cpu->r[14] = 0x00195578u;
    }
L_00195574:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00195578u)) return;
    }
L_00195578:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000011u, 0, 0);
    }
L_0019557c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00195580:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00195584:;
    {
        cpu->r[14] = 0x0019558cu;
    }
L_00195588:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x0019558cu)) return;
    }
L_0019558c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000012u, 0, 0);
    }
L_00195590:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00195594:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00195598:;
    {
        cpu->r[14] = 0x001955a0u;
    }
L_0019559c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001955a0u)) return;
    }
L_001955a0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000013u, 0, 0);
    }
L_001955a4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001955a8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001955ac:;
    {
        cpu->r[14] = 0x001955b4u;
    }
L_001955b0:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0xcu);
        if (guest_pc_write(cpu, t, entry_lr, 0x001955b4u)) return;
    }
L_001955b4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000014u, 0, 0);
    }
L_001955b8:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001955bc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001955c0:;
    {
        cpu->r[14] = 0x001955c8u;
    }
L_001955c4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001955c8u)) return;
    }
L_001955c8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000018u, 0, 0);
    }
L_001955cc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001955d0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001955d4:;
    {
        cpu->r[14] = 0x001955dcu;
    }
L_001955d8:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x14u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001955dcu)) return;
    }
L_001955dc:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_001955e0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x0000000cu, 0, 0);
    }
L_001955e4:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001955e8:;
    {
        wr16(cpu->r[13] + + 0x14u, cpu->r[6]);
    }
L_001955ec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001955f0:;
    {
        cpu->r[14] = 0x001955f8u;
    }
L_001955f4:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x50u);
        if (guest_pc_write(cpu, t, entry_lr, 0x001955f8u)) return;
    }
L_001955f8:;
    {
        cpu->r[0] = rd32(cpu->r[13]);
    }
L_001955fc:;
    {
        cpu->r[3] = 0x0000000cu;
    }
L_00195600:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00195604:;
    {
        cpu->r[14] = 0x00195608u; fn_00208278(cpu);
    }
L_00195608:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x10u);
    }
L_0019560c:;
    {
        cpu->r[3] = rd32(cpu->r[8] + cpu->r[10]);
    }
L_00195610:;
    {
        sub_flags(cpu, cpu->r[9], cpu->r[2], 1, 1);
    }
L_00195614:;
    {
        wr32(cpu->r[0], cpu->r[7]);
    }
L_00195618:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base + 4;
        wr32(ea + 0u, cpu->r[3]);
        wr32(ea + 4u, cpu->r[5]);
    }
L_0019561c:;
    {
        wr32(cpu->r[3], cpu->r[0]);
    }
L_00195620:;
    {
        wr32(cpu->r[8] + cpu->r[10], cpu->r[0]);
    }
L_00195624:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001954e8;
        }
    }
L_00195628:;
    {
        cpu->r[2] = 0x0000e770u;
    }
L_0019562c:;
    {
        cpu->r[3] = 0x0000e778u;
    }
L_00195630:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x0001u << 16);
    }
L_00195634:;
    {
        cpu->r[3] = (cpu->r[3] & 0xffffu) | (0x0001u << 16);
    }
L_00195638:;
    {
        cpu->r[2] = rd32(cpu->r[8] + cpu->r[2]);
    }
L_0019563c:;
    {
        wr32(cpu->r[8] + cpu->r[3], cpu->r[2]);
    }
L_00195640:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00195644:;
    {
        cpu->r[1] = 0x00000008u;
    }
L_00195648:;
    {
        cpu->r[14] = 0x0019564cu; fn_001933d4(cpu);
    }
L_0019564c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_00195650:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00195654u)) return;
    }
}
