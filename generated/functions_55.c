#include "functions.h"

/* _ZN7CMatrix16DefRotateX_XPoseEf @ 00154570 (arm) */
void fn_00154570(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00154570:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00154574:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00154578:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0015457c:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00154580:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00154584:;
    {
        cpu->r[14] = 0x00154588u; imp_sinf(cpu); /* sinf */
    }
L_00154588:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[0];
    }
L_0015458c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00154590:;
    {
        cpu->r[14] = 0x00154594u; imp_cosf(cpu); /* cosf */
    }
L_00154594:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_00154598:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001545a0u + + 0x7cu);
    }
L_0015459c:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 14));
        cpu->r[3] = ea + 4u;
    }
L_001545a0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001545a4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001545acu + + 0x74u);
    }
L_001545a8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_001545ac:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001545b0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_001545b4:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001545b8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_001545bc:;
    {
        *(uint32_t*)G(cpu->r[7] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001545c0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_001545c4:;
    {
        *(uint32_t*)G(cpu->r[12] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001545c8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_001545cc:;
    {
        vfp_vneg(cpu, 13, 16);
    }
L_001545d0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_001545d4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_001545d8:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[0]);
    }
L_001545dc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_001545e0:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001545e4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_001545e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_001545ec:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001545f0:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001545f4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_001545f8:;
    {
        wr32(cpu->r[12] + + 0x4u, cpu->r[0]);
    }
L_001545fc:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154600:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154604:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154608:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0015460c:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00154610:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154614:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00154618:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015461cu)) return;
    }
}

/* _ZN7CMatrix14RotateX_XPosedEf @ 00154624 (arm) */
void fn_00154624(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00154624:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_00154628:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x40u);
    }
L_0015462c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00154630:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00154634:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00154638:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00154658;
        }
    }
L_0015463c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00154640:;
    {
        cpu->r[14] = 0x00154644u; fn_00154570(cpu);
    }
L_00154644:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00154648:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x40u);
    }
L_0015464c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00154650:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_00154654:;
    {
        return fn_00153478(cpu);
    }
L_00154658:;
    {
        cpu->r[0] = 0x00000044u;
    }
L_0015465c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_00154660:;
    {
        cpu->r[14] = 0x00154664u; fn_0018ba6c(cpu);
    }
L_00154664:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00154668:;
    {
        wr32(cpu->r[0] + + 0x40u, cpu->r[3]);
    }
L_0015466c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00154670:;
    {
        cpu->r[14] = 0x00154674u; fn_001535e0(cpu);
    }
L_00154674:;
    {
        wr32(cpu->r[5] + + 0x40u, cpu->r[4]);
    }
L_00154678:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_0015467c:;
    {
        goto L_0015463c;
    }
}

/* _ZN7CMatrix10DefRotateXEf @ 00154680 (arm) */
void fn_00154680(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00154680:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00154684:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00154688:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0015468c:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00154690:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00154694:;
    {
        cpu->r[14] = 0x00154698u; imp_sinf(cpu); /* sinf */
    }
L_00154698:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[0];
    }
L_0015469c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001546a0:;
    {
        cpu->r[14] = 0x001546a4u; imp_cosf(cpu); /* cosf */
    }
L_001546a4:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_001546a8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001546b0u + + 0x7cu);
    }
L_001546ac:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 14));
        cpu->r[3] = ea + 4u;
    }
L_001546b0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001546b4:;
    {
        vfp_vneg(cpu, 13, 16);
    }
L_001546b8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_001546bc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001546c4u + + 0x6cu);
    }
L_001546c0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_001546c4:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001546c8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_001546cc:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001546d0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_001546d4:;
    {
        *(uint32_t*)G(cpu->r[7] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001546d8:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_001546dc:;
    {
        *(uint32_t*)G(cpu->r[12] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001546e0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_001546e4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_001546e8:;
    {
        wr32(cpu->r[1] + + 0x4u, cpu->r[0]);
    }
L_001546ec:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_001546f0:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_001546f4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_001546f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_001546fc:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154700:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154704:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00154708:;
    {
        wr32(cpu->r[12] + + 0x4u, cpu->r[0]);
    }
L_0015470c:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154710:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154714:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154718:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0015471c:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00154720:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154724:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00154728:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015472cu)) return;
    }
}

/* _ZN7CMatrix7RotateXEf @ 00154734 (arm) */
void fn_00154734(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00154734:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_00154738:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x40u);
    }
L_0015473c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00154740:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00154744:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00154748:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00154768;
        }
    }
L_0015474c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00154750:;
    {
        cpu->r[14] = 0x00154754u; fn_00154680(cpu);
    }
L_00154754:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00154758:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x40u);
    }
L_0015475c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00154760:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[14] = v2;
        cpu->r[13] += 12u;
    }
L_00154764:;
    {
        return fn_00153478(cpu);
    }
L_00154768:;
    {
        cpu->r[0] = 0x00000044u;
    }
L_0015476c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_00154770:;
    {
        cpu->r[14] = 0x00154774u; fn_0018ba6c(cpu);
    }
L_00154774:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00154778:;
    {
        wr32(cpu->r[0] + + 0x40u, cpu->r[3]);
    }
L_0015477c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00154780:;
    {
        cpu->r[14] = 0x00154784u; fn_001535e0(cpu);
    }
L_00154784:;
    {
        wr32(cpu->r[5] + + 0x40u, cpu->r[4]);
    }
L_00154788:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_0015478c:;
    {
        goto L_0015474c;
    }
}

/* _ZN7CMatrix6DefRotER8Vector3df @ 00154790 (arm) */
void fn_00154790(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00154790:;
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
L_00154794:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00154798:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_0015479c:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001547a0:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001547a4:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_001547a8:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_001547ac:;
    {
        cpu->r[14] = 0x001547b0u; imp_sinf(cpu); /* sinf */
    }
L_001547b0:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[0];
    }
L_001547b4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001547b8:;
    {
        cpu->r[14] = 0x001547bcu; imp_cosf(cpu); /* cosf */
    }
L_001547bc:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_001547c0:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[4] + + 0x8u);
    }
L_001547c4:;
    {
        vfp_vmul(cpu, 8, 11, 11);
    }
L_001547c8:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x001547d0u + + 0x128u);
    }
L_001547cc:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[4]);
    }
L_001547d0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_001547d4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001547dcu + + 0x120u);
    }
L_001547d8:;
    {
        vfp_vmul(cpu, 5, 12, 12);
    }
L_001547dc:;
    {
        vfp_vadd(cpu, 9, 8, 5);
    }
L_001547e0:;
    {
        *(uint32_t*)vfp_s(cpu,3) = cpu->r[0];
    }
L_001547e4:;
    {
        vfp_vsub(cpu, 14, 13, 3);
    }
L_001547e8:;
    {
        *vfp_s(cpu,6) = *vfp_s(cpu,13);
    }
L_001547ec:;
    {
        vfp_vmls(cpu, 6, 9, 14);
    }
L_001547f0:;
    {
        vfp_vmul(cpu, 7, 10, 11);
    }
L_001547f4:;
    {
        *vfp_s(cpu,9) = *vfp_s(cpu,6);
    }
L_001547f8:;
    {
        vfp_vmul(cpu, 6, 14, 7);
    }
L_001547fc:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 9));
        cpu->r[3] = ea + 4u;
    }
L_00154800:;
    {
        *vfp_s(cpu, 4) = *(float*)G(cpu->r[4] + + 0x8u);
    }
L_00154804:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00154808:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_0015480c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[10], 0x00000004u, 0, 0);
    }
L_00154810:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_00154814:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_00154818:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_0015481c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_00154820:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_00154824:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_00154828:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_0015482c:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_00154830:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0xcu);
    }
L_00154834:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[11], 0x00000004u, 0, 0);
    }
L_00154838:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_0015483c:;
    {
        vfp_vneg(cpu, 9, 16);
    }
L_00154840:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_00154844:;
    {
        *vfp_s(cpu,3) = *vfp_s(cpu,6);
    }
L_00154848:;
    {
        vfp_vmul(cpu, 7, 10, 12);
    }
L_0015484c:;
    {
        vfp_vmla(cpu, 3, 9, 4);
    }
L_00154850:;
    {
        vfp_vmul(cpu, 7, 14, 7);
    }
L_00154854:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 3);
    }
L_00154858:;
    {
        *vfp_s(cpu, 4) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_0015485c:;
    {
        cpu->r[1] = rd32(cpu->r[13] + + 0x4u);
    }
L_00154860:;
    {
        *vfp_s(cpu,3) = *vfp_s(cpu,7);
    }
L_00154864:;
    {
        vfp_vmul(cpu, 10, 10, 10);
    }
L_00154868:;
    {
        vfp_vmla(cpu, 3, 16, 4);
    }
L_0015486c:;
    {
        vfp_vadd(cpu, 5, 10, 5);
    }
L_00154870:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 3);
    }
L_00154874:;
    {
        *(uint32_t*)G(cpu->r[9] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154878:;
    {
        *vfp_s(cpu, 4) = *(float*)G(cpu->r[4] + + 0x8u);
    }
L_0015487c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_00154880:;
    {
        vfp_vmul(cpu, 12, 11, 12);
    }
L_00154884:;
    {
        *vfp_s(cpu,11) = *vfp_s(cpu,13);
    }
L_00154888:;
    {
        vfp_vmla(cpu, 6, 16, 4);
    }
L_0015488c:;
    {
        vfp_vmls(cpu, 11, 5, 14);
    }
L_00154890:;
    {
        *(uint32_t*)G(cpu->r[10] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 6);
    }
L_00154894:;
    {
        vfp_vmul(cpu, 12, 14, 12);
    }
L_00154898:;
    {
        *(uint32_t*)G(cpu->r[8] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_0015489c:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[4]);
    }
L_001548a0:;
    {
        *vfp_s(cpu,3) = *vfp_s(cpu,12);
    }
L_001548a4:;
    {
        vfp_vmla(cpu, 3, 9, 11);
    }
L_001548a8:;
    {
        *(uint32_t*)G(cpu->r[7] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 3);
    }
L_001548ac:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001548b0:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_001548b4:;
    {
        vfp_vmla(cpu, 7, 9, 11);
    }
L_001548b8:;
    {
        vfp_vadd(cpu, 8, 10, 8);
    }
L_001548bc:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 7);
    }
L_001548c0:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[4]);
    }
L_001548c4:;
    {
        *vfp_s(cpu,6) = *vfp_s(cpu,13);
    }
L_001548c8:;
    {
        vfp_vmla(cpu, 12, 16, 11);
    }
L_001548cc:;
    {
        vfp_vmls(cpu, 6, 8, 14);
    }
L_001548d0:;
    {
        *(uint32_t*)G(cpu->r[12] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_001548d4:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 6);
    }
L_001548d8:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001548dc:;
    {
        *(uint32_t*)G(cpu->r[11] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001548e0:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001548e4:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_001548e8:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001548ec:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001548f0:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001548f4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001548f8u)) return;
    }
}

/* _ZN7CMatrix6RotXYZEfff @ 00154900 (arm) */
void fn_00154900(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00154900:;
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
L_00154904:;
    {
        cpu->r[13] -= 24u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
        wr64(cpu->r[13] + 16u, *(uint64_t*)vfp_d(cpu, 10));
    }
L_00154908:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_0015490c:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_00154910:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_00154914:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[0]);
    }
L_00154918:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_0015491c:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00154920:;
    {
        cpu->r[14] = 0x00154924u; imp_sinf(cpu); /* sinf */
    }
L_00154924:;
    {
        *(uint32_t*)vfp_s(cpu,20) = cpu->r[0];
    }
L_00154928:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015492c:;
    {
        cpu->r[14] = 0x00154930u; imp_cosf(cpu); /* cosf */
    }
L_00154930:;
    {
        *(uint32_t*)vfp_s(cpu,18) = cpu->r[0];
    }
L_00154934:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00154938:;
    {
        cpu->r[14] = 0x0015493cu; imp_sinf(cpu); /* sinf */
    }
L_0015493c:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[0];
    }
L_00154940:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00154944:;
    {
        cpu->r[14] = 0x00154948u; imp_cosf(cpu); /* cosf */
    }
L_00154948:;
    {
        *(uint32_t*)vfp_s(cpu,17) = cpu->r[0];
    }
L_0015494c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00154950:;
    {
        cpu->r[14] = 0x00154954u; imp_sinf(cpu); /* sinf */
    }
L_00154954:;
    {
        *(uint32_t*)vfp_s(cpu,19) = cpu->r[0];
    }
L_00154958:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0015495c:;
    {
        cpu->r[14] = 0x00154960u; imp_cosf(cpu); /* cosf */
    }
L_00154960:;
    {
        vfp_vmul(cpu, 11, 18, 19);
    }
L_00154964:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00154968:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00154970u + + 0xc4u);
    }
L_0015496c:;
    {
        vfp_vmul(cpu, 13, 20, 19);
    }
L_00154970:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00154974:;
    {
        vfp_vmul(cpu, 12, 18, 14);
    }
L_00154978:;
    {
        vfp_vmul(cpu, 10, 20, 14);
    }
L_0015497c:;
    {
        *vfp_s(cpu,8) = *vfp_s(cpu,12);
    }
L_00154980:;
    {
        *vfp_s(cpu,9) = *vfp_s(cpu,10);
    }
L_00154984:;
    {
        vfp_vmul(cpu, 14, 17, 14);
    }
L_00154988:;
    {
        vfp_vmla(cpu, 8, 13, 16);
    }
L_0015498c:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 14));
        cpu->r[3] = ea + 4u;
    }
L_00154990:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00154994:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_00154998:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[10], 0x00000004u, 0, 0);
    }
L_0015499c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_001549a0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_001549a4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_001549a8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_001549ac:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_001549b0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_001549b4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_001549b8:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_001549bc:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[11], 0x00000004u, 0, 0);
    }
L_001549c0:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_001549c4:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_001549c8:;
    {
        vfp_vmla(cpu, 13, 12, 16);
    }
L_001549cc:;
    {
        vfp_vnmls(cpu, 9, 11, 16);
    }
L_001549d0:;
    {
        vfp_vnmls(cpu, 11, 10, 16);
    }
L_001549d4:;
    {
        vfp_vmul(cpu, 14, 18, 17);
    }
L_001549d8:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_001549dc:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_001549e0:;
    {
        *(uint32_t*)G(cpu->r[9] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001549e4:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001549e8:;
    {
        vfp_vmul(cpu, 12, 17, 19);
    }
L_001549ec:;
    {
        vfp_vmul(cpu, 13, 20, 17);
    }
L_001549f0:;
    {
        *(uint32_t*)G(cpu->r[10] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_001549f4:;
    {
        *(uint32_t*)G(cpu->r[8] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 8);
    }
L_001549f8:;
    {
        *(uint32_t*)G(cpu->r[7] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 9);
    }
L_001549fc:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154a00:;
    {
        vfp_vneg(cpu, 16, 16);
    }
L_00154a04:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00154a08:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00154a0c:;
    {
        *(uint32_t*)G(cpu->r[12] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00154a10:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154a14:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00154a1cu + + 0x1cu);
    }
L_00154a18:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154a1c:;
    {
        *(uint32_t*)G(cpu->r[11] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154a20:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00154a24:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154a28:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00154a2c:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        *(uint64_t*)vfp_d(cpu, 10) = rd64(cpu->r[13] + 16u);
        cpu->r[13] += 24u;
    }
L_00154a30:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00154a34u)) return;
    }
}

/* _ZN7CMatrix15LookAtForCameraEfffffffff @ 00154a3c (arm) */
void fn_00154a3c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00154a3c:;
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
L_00154a40:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_00154a44:;
    {
        *(uint32_t*)vfp_s(cpu,17) = cpu->r[1];
    }
L_00154a48:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000030u, 1, 0);
    }
L_00154a4c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x60u);
    }
L_00154a50:;
    {
        vfp_vsub(cpu, 15, 17, 15);
    }
L_00154a54:;
    {
        *(uint32_t*)vfp_s(cpu,18) = cpu->r[3];
    }
L_00154a58:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[2];
    }
L_00154a5c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x64u);
    }
L_00154a60:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_00154a64:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00154a68:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00154a6c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00154a70:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_00154a74:;
    {
        cpu->r[5] = cpu->r[13];
    }
L_00154a78:;
    {
        vfp_vsub(cpu, 14, 16, 14);
    }
L_00154a7c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154a80:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x68u);
    }
L_00154a84:;
    {
        vfp_vsub(cpu, 15, 18, 15);
    }
L_00154a88:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00154a8c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154a90:;
    {
        cpu->r[14] = 0x00154a94u; fn_00155f80(cpu);
    }
L_00154a94:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00154a98:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00154a9c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00154aa0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x6cu);
    }
L_00154aa4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154aa8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x70u);
    }
L_00154aac:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154ab0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x74u);
    }
L_00154ab4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154ab8:;
    {
        cpu->r[14] = 0x00154abcu; fn_00155a0c(cpu);
    }
L_00154abc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00154ac0:;
    {
        cpu->r[14] = 0x00154ac4u; fn_00155f80(cpu);
    }
L_00154ac4:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00154ac8:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00154acc:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_00154ad0:;
    {
        cpu->r[14] = 0x00154ad4u; fn_00155a0c(cpu);
    }
L_00154ad4:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_00154ad8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x10u);
    }
L_00154adc:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[13] + + 0x28u);
    }
L_00154ae0:;
    {
        *vfp_s(cpu, 4) = *(float*)G(cpu->r[13] + + 0xcu);
    }
L_00154ae4:;
    {
        cpu->r[3] = cpu->r[8];
    }
L_00154ae8:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 4));
        cpu->r[3] = ea + 4u;
    }
L_00154aec:;
    {
        vfp_vmul(cpu, 13, 16, 15);
    }
L_00154af0:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[13] + + 0x24u);
    }
L_00154af4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00154af8:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_00154afc:;
    {
        *(uint32_t*)G(cpu->r[8] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154b00:;
    {
        *vfp_s(cpu, 7) = *(float*)G(cpu->r[13] + + 0x1cu);
    }
L_00154b04:;
    {
        *vfp_s(cpu, 6) = *(float*)G(cpu->r[13] + + 0x18u);
    }
L_00154b08:;
    {
        *vfp_s(cpu, 5) = *(float*)G(cpu->r[13] + + 0x14u);
    }
L_00154b0c:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[13] + + 0x20u);
    }
L_00154b10:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[13] + + 0x2cu);
    }
L_00154b14:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[10], 0x00000004u, 0, 0);
    }
L_00154b18:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_00154b1c:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 5);
    }
L_00154b20:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_00154b24:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x00154b2cu + + 0x8cu);
    }
L_00154b28:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_00154b2c:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_00154b30:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_00154b34:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_00154b38:;
    {
        vfp_vmul(cpu, 15, 16, 10);
    }
L_00154b3c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_00154b40:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_00154b44:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_00154b48:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_00154b4c:;
    {
        vfp_vmul(cpu, 14, 16, 7);
    }
L_00154b50:;
    {
        vfp_vmla(cpu, 15, 17, 9);
    }
L_00154b54:;
    {
        vfp_vmla(cpu, 13, 17, 4);
    }
L_00154b58:;
    {
        vfp_vmla(cpu, 14, 17, 6);
    }
L_00154b5c:;
    {
        vfp_vmla(cpu, 15, 18, 11);
    }
L_00154b60:;
    {
        vfp_vmla(cpu, 13, 18, 5);
    }
L_00154b64:;
    {
        vfp_vmla(cpu, 14, 18, 8);
    }
L_00154b68:;
    {
        vfp_vneg(cpu, 15, 15);
    }
L_00154b6c:;
    {
        vfp_vneg(cpu, 13, 13);
    }
L_00154b70:;
    {
        vfp_vneg(cpu, 14, 14);
    }
L_00154b74:;
    {
        *(uint32_t*)G(cpu->r[10] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00154b78:;
    {
        *(uint32_t*)G(cpu->r[8] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 6);
    }
L_00154b7c:;
    {
        *(uint32_t*)G(cpu->r[7] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 7);
    }
L_00154b80:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 8);
    }
L_00154b84:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00154b88:;
    {
        *(uint32_t*)G(cpu->r[9] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 9);
    }
L_00154b8c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 10);
    }
L_00154b90:;
    {
        *(uint32_t*)G(cpu->r[12] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_00154b94:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154b98:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00154b9c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00154ba4u + + 0x18u);
    }
L_00154ba0:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00154ba4:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154ba8:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00154bac:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000030u, 0, 0);
    }
L_00154bb0:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_00154bb4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00154bb8u)) return;
    }
}

/* _ZN7CMatrix19SetLightPerspectiveEffff @ 00154bc0 (arm) */
void fn_00154bc0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00154bc0:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[1];
    }
L_00154bc4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00154bccu + + 0xccu);
    }
L_00154bc8:;
    {
        vfp_vmul(cpu, 14, 12, 15);
    }
L_00154bcc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00154bd4u + + 0xc8u);
    }
L_00154bd0:;
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
L_00154bd4:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00154bd8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00154bdc:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[3];
    }
L_00154be0:;
    {
        *(uint32_t*)vfp_s(cpu,17) = cpu->r[2];
    }
L_00154be4:;
    {
        vfp_vmul(cpu, 13, 14, 15);
    }
L_00154be8:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,13);
    }
L_00154bec:;
    {
        cpu->r[14] = 0x00154bf0u; imp_tanf(cpu); /* tanf */
    }
L_00154bf0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00154bf8u + + 0xa8u);
    }
L_00154bf4:;
    {
        vfp_vdiv(cpu, 13, 14, 17);
    }
L_00154bf8:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_00154bfc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00154c04u + + 0xa0u);
    }
L_00154c00:;
    {
        *(uint32_t*)vfp_s(cpu,12) = cpu->r[0];
    }
L_00154c04:;
    {
        vfp_vdiv(cpu, 14, 14, 12);
    }
L_00154c08:;
    {
        vfp_vmul(cpu, 13, 13, 14);
    }
L_00154c0c:;
    {
        vfp_vmul(cpu, 12, 13, 16);
    }
L_00154c10:;
    {
        vfp_vmul(cpu, 13, 14, 16);
    }
L_00154c14:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 12));
        cpu->r[3] = ea + 4u;
    }
L_00154c18:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00154c1c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154c20:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_00154c24:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x30u);
    }
L_00154c28:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[10], 0x00000004u, 0, 0);
    }
L_00154c2c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_00154c30:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_00154c34:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_00154c38:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_00154c3c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_00154c40:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_00154c44:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_00154c48:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_00154c4c:;
    {
        vfp_vneg(cpu, 14, 14);
    }
L_00154c50:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[11], 0x00000004u, 0, 0);
    }
L_00154c54:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00154c58:;
    {
        *(uint32_t*)G(cpu->r[9] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154c5c:;
    {
        *(uint32_t*)G(cpu->r[10] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154c60:;
    {
        *(uint32_t*)G(cpu->r[8] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00154c64:;
    {
        *(uint32_t*)G(cpu->r[7] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00154c68:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154c6c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00154c74u + + 0x34u);
    }
L_00154c70:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154c74:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154c78:;
    {
        *(uint32_t*)G(cpu->r[12] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00154c7c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154c80:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154c84:;
    {
        *(uint32_t*)G(cpu->r[11] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154c88:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154c8c:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154c90:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00154c94:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00154c98u)) return;
    }
}

/* _ZN7CMatrix14SetPerspectiveEffff @ 00154cb0 (arm) */
void fn_00154cb0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00154cb0:;
    {
        cpu->r[12] = rd32(0x00154cb8u + + 0x170u);
    }
L_00154cb4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00154cbcu + + 0x154u);
    }
L_00154cb8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00154cbc:;
    {
        cpu->r[13] -= 24u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
        wr64(cpu->r[13] + 16u, *(uint64_t*)vfp_d(cpu, 10));
    }
L_00154cc0:;
    {
        *(uint32_t*)vfp_s(cpu,18) = cpu->r[3];
    }
L_00154cc4:;
    {
        cpu->r[3] = rd32(0x00154cccu + + 0x160u);
    }
L_00154cc8:;
    {
        cpu->r[12] = add_flags(cpu, 0x00154cd0u, cpu->r[12], 0, 0);
    }
L_00154ccc:;
    {
        cpu->r[4] = rd32(0x00154cd4u + + 0x15cu);
    }
L_00154cd0:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00154cd4:;
    {
        *(uint32_t*)vfp_s(cpu,20) = cpu->r[1];
    }
L_00154cd8:;
    {
        cpu->r[3] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_00154cdc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3]);
    }
L_00154ce0:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_00154ce4:;
    {
        cpu->r[4] = add_flags(cpu, 0x00154cecu, cpu->r[4], 0, 0);
    }
L_00154ce8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4]);
    }
L_00154cec:;
    {
        cpu->r[3] = rd32(0x00154cf4u + + 0x140u);
    }
L_00154cf0:;
    {
        *(uint32_t*)vfp_s(cpu,21) = cpu->r[2];
    }
L_00154cf4:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[13] + + 0x28u);
    }
L_00154cf8:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x00154d00u + + 0x114u);
    }
L_00154cfc:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[3]);
    }
L_00154d00:;
    {
        cpu->r[3] = 0x0000001eu;
    }
L_00154d04:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_00154d08:;
    {
        *(int32_t*)vfp_s(cpu,14) = (int32_t)*vfp_s(cpu,14);
    }
L_00154d0c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00154d10:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00154d14:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00154d18:;
    {
        cpu->r[14] = 0x00154d1cu; fn_0009702c(cpu);
    }
L_00154d1c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00154d20:;
    {
        *vfp_d(cpu,6) = (double)*(int32_t*)vfp_s(cpu,14);
    }
L_00154d24:;
    {
        *vfp_d(cpu, 7) = *(double*)G(0x00154d2cu + + 0xdcu);
    }
L_00154d28:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 6) / *vfp_d(cpu, 7);
    }
L_00154d2c:;
    {
        *vfp_s(cpu,15) = (float)*vfp_d(cpu,7);
    }
L_00154d30:;
    {
        vfp_vadd(cpu, 19, 15, 16);
    }
L_00154d34:;
    {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154d38:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00154d40u + + 0xd8u);
    }
L_00154d3c:;
    {
        vfp_vmul(cpu, 14, 19, 20);
    }
L_00154d40:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_00154d44:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00154d4cu + + 0xd0u);
    }
L_00154d48:;
    {
        vfp_vmul(cpu, 13, 14, 15);
    }
L_00154d4c:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,13);
    }
L_00154d50:;
    {
        cpu->r[14] = 0x00154d54u; imp_tanf(cpu); /* tanf */
    }
L_00154d54:;
    {
        vfp_vmul(cpu, 14, 19, 21);
    }
L_00154d58:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_00154d5c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00154d64u + + 0xbcu);
    }
L_00154d60:;
    {
        vfp_vdiv(cpu, 11, 16, 14);
    }
L_00154d64:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00154d68:;
    {
        vfp_vdiv(cpu, 13, 16, 14);
    }
L_00154d6c:;
    {
        vfp_vsub(cpu, 14, 18, 17);
    }
L_00154d70:;
    {
        vfp_vdiv(cpu, 14, 16, 14);
    }
L_00154d74:;
    {
        vfp_vadd(cpu, 12, 17, 17);
    }
L_00154d78:;
    {
        vfp_vmul(cpu, 11, 11, 13);
    }
L_00154d7c:;
    {
        vfp_vmul(cpu, 12, 12, 18);
    }
L_00154d80:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 11));
        cpu->r[3] = ea + 4u;
    }
L_00154d84:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00154d88:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154d8c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_00154d90:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154d94:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_00154d98:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154d9c:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154da0:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00154da4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_00154da8:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154dac:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00154db0:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154db4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_00154db8:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154dbc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_00154dc0:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154dc4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00154dc8:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_00154dcc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_00154dd0:;
    {
        vfp_vadd(cpu, 17, 17, 18);
    }
L_00154dd4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_00154dd8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_00154ddc:;
    {
        vfp_vmul(cpu, 13, 12, 14);
    }
L_00154de0:;
    {
        vfp_vmul(cpu, 14, 17, 14);
    }
L_00154de4:;
    {
        *(uint32_t*)G(cpu->r[12] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00154de8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00154dec:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154df0:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154df4:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154df8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00154e00u + + 0x24u);
    }
L_00154dfc:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154e00:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        *(uint64_t*)vfp_d(cpu, 10) = rd64(cpu->r[13] + 16u);
        cpu->r[13] += 24u;
    }
L_00154e04:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00154e08u)) return;
    }
}

/* _ZN7CMatrix13GetQuaternionER4Quat @ 00154e38 (arm) */
void fn_00154e38(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
    /* CMatrix::GetQuaternion robust extraction. */
    guest_cmatrix_get_quaternion(cpu); return;
L_00154e38:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00154e3c:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_00154e40:;
    {
        *vfp_s(cpu, 19) = *(float*)G(cpu->r[0]);
    }
L_00154e44:;
    {
        *vfp_s(cpu, 18) = *(float*)G(0x00154e4cu + + 0x1acu);
    }
L_00154e48:;
    {
        vfp_vadd(cpu, 18, 19, 18);
    }
L_00154e4c:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[0] + + 0x14u);
    }
L_00154e50:;
    {
        *vfp_s(cpu, 17) = *(float*)G(cpu->r[0] + + 0x28u);
    }
L_00154e54:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00154e5cu + + 0x1a0u);
    }
L_00154e58:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00154e5c:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00154e60:;
    {
        vfp_vadd(cpu, 15, 18, 16);
    }
L_00154e64:;
    {
        vfp_vadd(cpu, 15, 15, 17);
    }
L_00154e68:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_00154e6c:;
    {
        vfp_sync_flags(cpu);
    }
L_00154e70:;
    {
        if (cond_test(cpu, 5)) {
        *vfp_s(cpu,15) = *vfp_s(cpu,14);
        }
    }
L_00154e74:;
    {
        vfp_vsqrt(cpu, 14, 15);
    }
L_00154e78:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,14));
    }
L_00154e7c:;
    {
        vfp_sync_flags(cpu);
    }
L_00154e80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00154e90;
        }
    }
L_00154e84:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00154e88:;
    {
        cpu->r[14] = 0x00154e8cu; imp_sqrtf(cpu); /* sqrtf */
    }
L_00154e8c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00154e90:;
    {
        vfp_vsub(cpu, 18, 18, 16);
    }
L_00154e94:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00154e9cu + + 0x160u);
    }
L_00154e98:;
    {
        vfp_vsub(cpu, 18, 18, 17);
    }
L_00154e9c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,18), 0.0f);
    }
L_00154ea0:;
    {
        vfp_sync_flags(cpu);
    }
L_00154ea4:;
    {
        if (cond_test(cpu, 5)) {
        *vfp_s(cpu,18) = *vfp_s(cpu,15);
        }
    }
L_00154ea8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00154eb0u + + 0x150u);
    }
L_00154eac:;
    {
        vfp_vsqrt(cpu, 13, 18);
    }
L_00154eb0:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_00154eb4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,13), *vfp_s(cpu,13));
    }
L_00154eb8:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154ebc:;
    {
        vfp_sync_flags(cpu);
    }
L_00154ec0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00154ed0;
        }
    }
L_00154ec4:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,18);
    }
L_00154ec8:;
    {
        cpu->r[14] = 0x00154eccu; imp_sqrtf(cpu); /* sqrtf */
    }
L_00154ecc:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[0];
    }
L_00154ed0:;
    {
        *vfp_s(cpu, 18) = *(float*)G(0x00154ed8u + + 0x120u);
    }
L_00154ed4:;
    {
        vfp_vsub(cpu, 18, 18, 19);
    }
L_00154ed8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00154ee0u + + 0x11cu);
    }
L_00154edc:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x00154ee4u + + 0x11cu);
    }
L_00154ee0:;
    {
        vfp_vadd(cpu, 15, 18, 16);
    }
L_00154ee4:;
    {
        vfp_vsub(cpu, 15, 15, 17);
    }
L_00154ee8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_00154eec:;
    {
        vfp_sync_flags(cpu);
    }
L_00154ef0:;
    {
        if (cond_test(cpu, 5)) {
        *vfp_s(cpu,15) = *vfp_s(cpu,14);
        }
    }
L_00154ef4:;
    {
        vfp_vsqrt(cpu, 14, 15);
    }
L_00154ef8:;
    {
        vfp_vmul(cpu, 13, 13, 12);
    }
L_00154efc:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,14));
    }
L_00154f00:;
    {
        *(uint32_t*)G(cpu->r[5]) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00154f04:;
    {
        vfp_sync_flags(cpu);
    }
L_00154f08:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00154f18;
        }
    }
L_00154f0c:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00154f10:;
    {
        cpu->r[14] = 0x00154f14u; imp_sqrtf(cpu); /* sqrtf */
    }
L_00154f14:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[0];
    }
L_00154f18:;
    {
        vfp_vsub(cpu, 16, 18, 16);
    }
L_00154f1c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00154f24u + + 0xd8u);
    }
L_00154f20:;
    {
        *vfp_s(cpu, 13) = *(float*)G(0x00154f28u + + 0xd8u);
    }
L_00154f24:;
    {
        vfp_vadd(cpu, 17, 16, 17);
    }
L_00154f28:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,17), 0.0f);
    }
L_00154f2c:;
    {
        vfp_sync_flags(cpu);
    }
L_00154f30:;
    {
        if (cond_test(cpu, 5)) {
        *vfp_s(cpu,17) = *vfp_s(cpu,15);
        }
    }
L_00154f34:;
    {
        vfp_vsqrt(cpu, 15, 17);
    }
L_00154f38:;
    {
        vfp_vmul(cpu, 14, 14, 13);
    }
L_00154f3c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,15));
    }
L_00154f40:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00154f44:;
    {
        vfp_sync_flags(cpu);
    }
L_00154f48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00154f58;
        }
    }
L_00154f4c:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,17);
    }
L_00154f50:;
    {
        cpu->r[14] = 0x00154f54u; imp_sqrtf(cpu); /* sqrtf */
    }
L_00154f54:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_00154f58:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00154f60u + + 0xa0u);
    }
L_00154f5c:;
    {
        vfp_vmul(cpu, 14, 15, 14);
    }
L_00154f60:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[5]);
    }
L_00154f64:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00154f68:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0x24u);
    }
L_00154f6c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x18u);
    }
L_00154f70:;
    {
        vfp_vsub(cpu, 15, 13, 15);
    }
L_00154f74:;
    {
        *vfp_d(cpu,6) = (double)*vfp_s(cpu,12);
    }
L_00154f78:;
    {
        *vfp_d(cpu,5) = (double)*vfp_s(cpu,15);
    }
L_00154f7c:;
    {
        *vfp_d(cpu,6) = fabs(*vfp_d(cpu,6));
    }
L_00154f80:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,5); cpu->r[2]= (uint32_t)v; cpu->r[3]=(uint32_t)(v>>32);
    }
L_00154f84:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00154f88:;
    {
        if (cond_test(cpu, 12)) {
        *vfp_d(cpu,6) = -*vfp_d(cpu,6);
        }
    }
L_00154f8c:;
    {
        *vfp_s(cpu,15) = (float)*vfp_d(cpu,6);
    }
L_00154f90:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[5] + + 0x4u);
    }
L_00154f94:;
    {
        *(uint32_t*)G(cpu->r[5]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00154f98:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0x8u);
    }
L_00154f9c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x20u);
    }
L_00154fa0:;
    {
        vfp_vsub(cpu, 15, 13, 15);
    }
L_00154fa4:;
    {
        *vfp_d(cpu,6) = (double)*vfp_s(cpu,12);
    }
L_00154fa8:;
    {
        *vfp_d(cpu,5) = (double)*vfp_s(cpu,15);
    }
L_00154fac:;
    {
        *vfp_d(cpu,6) = fabs(*vfp_d(cpu,6));
    }
L_00154fb0:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,5); cpu->r[2]= (uint32_t)v; cpu->r[3]=(uint32_t)(v>>32);
    }
L_00154fb4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00154fb8:;
    {
        if (cond_test(cpu, 12)) {
        *vfp_d(cpu,6) = -*vfp_d(cpu,6);
        }
    }
L_00154fbc:;
    {
        *vfp_s(cpu,12) = (float)*vfp_d(cpu,6);
    }
L_00154fc0:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00154fc4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[4] + + 0x10u);
    }
L_00154fc8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_00154fcc:;
    {
        vfp_vsub(cpu, 15, 13, 15);
    }
L_00154fd0:;
    {
        *vfp_d(cpu,6) = (double)*vfp_s(cpu,15);
    }
L_00154fd4:;
    {
        *vfp_d(cpu,7) = (double)*vfp_s(cpu,14);
    }
L_00154fd8:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,6); cpu->r[2]= (uint32_t)v; cpu->r[3]=(uint32_t)(v>>32);
    }
L_00154fdc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00154fe0:;
    {
        *vfp_d(cpu,7) = fabs(*vfp_d(cpu,7));
    }
L_00154fe4:;
    {
        if (cond_test(cpu, 12)) {
        *vfp_d(cpu,7) = -*vfp_d(cpu,7);
        }
    }
L_00154fe8:;
    {
        *vfp_s(cpu,14) = (float)*vfp_d(cpu,7);
    }
L_00154fec:;
    {
        *(uint32_t*)G(cpu->r[5] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00154ff0:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_00154ff4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00154ff8u)) return;
    }
}

/* _ZN7CMatrix15LookAtForObjectEfffffffff @ 00155004 (arm) */
void fn_00155004(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00155004:;
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
L_00155008:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_0015500c:;
    {
        *(uint32_t*)vfp_s(cpu,17) = cpu->r[2];
    }
L_00155010:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000007cu, 1, 0);
    }
L_00155014:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0xb4u);
    }
L_00155018:;
    {
        vfp_vsub(cpu, 13, 13, 17);
    }
L_0015501c:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[1];
    }
L_00155020:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0xb0u);
    }
L_00155024:;
    {
        *(uint32_t*)vfp_s(cpu,18) = cpu->r[3];
    }
L_00155028:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0xb8u);
    }
L_0015502c:;
    {
        *vfp_s(cpu, 11) = *(float*)G(0x00155034u + + 0x174u);
    }
L_00155030:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00155034:;
    {
        vfp_vmul(cpu, 15, 13, 13);
    }
L_00155038:;
    {
        vfp_vsub(cpu, 12, 12, 16);
    }
L_0015503c:;
    {
        vfp_vmla(cpu, 15, 12, 12);
    }
L_00155040:;
    {
        vfp_vsub(cpu, 14, 14, 18);
    }
L_00155044:;
    {
        vfp_vmla(cpu, 15, 14, 14);
    }
L_00155048:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,11));
    }
L_0015504c:;
    {
        vfp_sync_flags(cpu);
    }
L_00155050:;
    {
        if (cond_test(cpu, 5)) {
        goto L_0015519c;
        }
    }
L_00155054:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x0000006cu, 0, 0);
    }
L_00155058:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000054u, 0, 0);
    }
L_0015505c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00155060:;
    {
        cpu->r[11] = add_flags(cpu, cpu->r[13], 0x00000060u, 0, 0);
    }
L_00155064:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x6cu) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00155068:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x70u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0015506c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x74u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00155070:;
    {
        cpu->r[14] = 0x00155074u; fn_00155f80(cpu);
    }
L_00155074:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00155078:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_0015507c:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00155080:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000048u, 0, 0);
    }
L_00155084:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0xbcu);
    }
L_00155088:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x60u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015508c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0xc0u);
    }
L_00155090:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x64u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00155094:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0xc4u);
    }
L_00155098:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x68u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015509c:;
    {
        cpu->r[14] = 0x001550a0u; fn_00155a0c(cpu);
    }
L_001550a0:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_001550a4:;
    {
        cpu->r[14] = 0x001550a8u; fn_00155f80(cpu);
    }
L_001550a8:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001550ac:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001550b0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001550b4:;
    {
        cpu->r[14] = 0x001550b8u; fn_00155a0c(cpu);
    }
L_001550b8:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001550bc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x6cu);
    }
L_001550c0:;
    {
        uint32_t base = cpu->r[2];
        uint32_t ea = base;
        wr32(ea + 0u, *(uint32_t*)vfp_s(cpu, 15));
        cpu->r[2] = ea + 4u;
    }
L_001550c4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_001550c8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x70u);
    }
L_001550cc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_001550d0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001550d4:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_001550d8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x74u);
    }
L_001550dc:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_001550e0:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001550e4:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_001550e8:;
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
L_001550ec:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_001550f0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x54u);
    }
L_001550f4:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[14], 0x00000004u, 0, 0);
    }
L_001550f8:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001550fc:;
    {
        cpu->r[9] = add_flags(cpu, cpu->r[10], 0x00000004u, 0, 0);
    }
L_00155100:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x58u);
    }
L_00155104:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[9], 0x00000004u, 0, 0);
    }
L_00155108:;
    {
        *(uint32_t*)G(cpu->r[8] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0015510c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x5cu);
    }
L_00155110:;
    {
        uint32_t base = cpu->r[11];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_00155114:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_00155118:;
    {
        *(uint32_t*)G(cpu->r[7] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0015511c:;
    {
        *(uint32_t*)G(cpu->r[14] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 17);
    }
L_00155120:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[12], 0x00000004u, 0, 0);
    }
L_00155124:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x60u);
    }
L_00155128:;
    {
        *(uint32_t*)G(cpu->r[10] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0015512c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x64u);
    }
L_00155130:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_00155134:;
    {
        *(uint32_t*)G(cpu->r[9] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00155138:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0015513c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x68u);
    }
L_00155140:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00155148u + + 0x64u);
    }
L_00155144:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00155148:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_0015514c:;
    {
        *(uint32_t*)G(cpu->r[12] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 18);
    }
L_00155150:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00155158u + + 0x58u);
    }
L_00155154:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00155158:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0015515c:;
    {
        *(uint32_t*)G(cpu->r[8] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00155160:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00155164:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00155168:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0015516c:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[3]);
    }
L_00155170:;
    {
        cpu->r[14] = 0x00155174u; fn_001535e0(cpu);
    }
L_00155174:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00155178:;
    {
        cpu->r[14] = 0x0015517cu; fn_00153600(cpu);
    }
L_0015517c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x18u);
    }
L_00155180:;
    {
        vfp_vneg(cpu, 15, 15);
    }
L_00155184:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00155188:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_0015518c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00155190:;
    {
        cpu->r[14] = 0x00155194u; fn_00153478(cpu);
    }
L_00155194:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00155198:;
    {
        cpu->r[14] = 0x0015519cu; fn_000b2bc8(cpu);
    }
L_0015519c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000007cu, 0, 0);
    }
L_001551a0:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_001551a4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001551a8u)) return;
    }
}

/* _ZN15GenericMtxStack15LoadCrtMtxInGPUEv @ 001551b4 (arm) */
void fn_001551b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001551b4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15GenericMtxStackC2Ev @ 001551b8 (arm) */
void fn_001551b8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001551b8:;
    {
        cpu->r[2] = rd32(0x001551c0u + + 0x24u);
    }
L_001551bc:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001551c0:;
    {
        cpu->r[1] = rd32(0x001551c8u + + 0x20u);
    }
L_001551c4:;
    {
        cpu->r[2] = add_flags(cpu, 0x001551ccu, cpu->r[2], 0, 0);
    }
L_001551c8:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[12]);
    }
L_001551cc:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[12]);
    }
L_001551d0:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_001551d4:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[12]);
    }
L_001551d8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_001551dc:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_001551e0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15GenericMtxStackC1Ev @ 001551ec (arm) */
void fn_001551ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001551ec:;
    {
        cpu->r[2] = rd32(0x001551f4u + + 0x24u);
    }
L_001551f0:;
    {
        cpu->r[12] = 0x00000000u;
    }
L_001551f4:;
    {
        cpu->r[1] = rd32(0x001551fcu + + 0x20u);
    }
L_001551f8:;
    {
        cpu->r[2] = add_flags(cpu, 0x00155200u, cpu->r[2], 0, 0);
    }
L_001551fc:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[12]);
    }
L_00155200:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[12]);
    }
L_00155204:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_00155208:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[12]);
    }
L_0015520c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_00155210:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_00155214:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN11TexMtxStack15LoadCrtMtxInGPUEv @ 00155220 (arm) */
void fn_00155220(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00155220:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN12ProjMtxStackC2Ev @ 00155224 (arm) */
void fn_00155224(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00155224:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00155228:;
    {
        cpu->r[5] = rd32(0x00155230u + + 0x2cu);
    }
L_0015522c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00155230:;
    {
        cpu->r[14] = 0x00155234u; fn_001551b8(cpu);
    }
L_00155234:;
    {
        cpu->r[3] = rd32(0x0015523cu + + 0x24u);
    }
L_00155238:;
    {
        cpu->r[5] = add_flags(cpu, 0x00155240u, cpu->r[5], 0, 0);
    }
L_0015523c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00155240:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00155244:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[2]);
    }
L_00155248:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0015524c:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[2]);
    }
L_00155250:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00155254:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00155258:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015525cu)) return;
    }
}

/* _ZN12ProjMtxStackC1Ev @ 00155264 (arm) */
void fn_00155264(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00155264:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00155268:;
    {
        cpu->r[5] = rd32(0x00155270u + + 0x2cu);
    }
L_0015526c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00155270:;
    {
        cpu->r[14] = 0x00155274u; fn_001551b8(cpu);
    }
L_00155274:;
    {
        cpu->r[3] = rd32(0x0015527cu + + 0x24u);
    }
L_00155278:;
    {
        cpu->r[5] = add_flags(cpu, 0x00155280u, cpu->r[5], 0, 0);
    }
L_0015527c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00155280:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00155284:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[2]);
    }
L_00155288:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0015528c:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[2]);
    }
L_00155290:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_00155294:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00155298:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015529cu)) return;
    }
}

/* _ZN15GenericMtxStack4LoadEP7CMatrix @ 001552a4 (arm) */
void fn_001552a4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001552a4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_001552a8:;
    {
        return fn_00153624(cpu);
    }
}

/* _ZN15GenericMtxStack10PushMatrixEP7CMatrixi @ 001552ac (arm) */
void fn_001552ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001552ac:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001552b0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001552b4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_001552b8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_001552bc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000044u, 0, 0);
    }
L_001552c0:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_001552c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001552c8:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_001552cc:;
    {
        cpu->r[14] = 0x001552d0u; fn_00153624(cpu);
    }
L_001552d0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_001552d4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001552d8u)) return;
    }
}

/* _ZN12ProjMtxStack10PushMatrixEP7CMatrixi @ 001552d8 (arm) */
void fn_001552d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001552d8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001552dc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001552e0:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001552e4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001552e8:;
    {
        cpu->r[14] = 0x001552ecu; fn_001552ac(cpu);
    }
L_001552ec:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1cu);
    }
L_001552f0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x18u);
    }
L_001552f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001552f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001552fc:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[3]);
    }
L_00155300:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[5]);
    }
L_00155304:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00155308:;
    {
        cpu->r[14] = 0x00155310u;
    }
L_0015530c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00155310u)) return;
    }
L_00155310:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_00155314:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00155318u)) return;
    }
}

/* _ZN11PosMtxStack15LoadCrtMtxInGPUEv @ 00155318 (arm) */
void fn_00155318(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00155318:;
    {
        cpu->r[12] = rd32(0x00155320u + + 0x1cu);
    }
L_0015531c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00155320:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8u);
    }
L_00155324:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x10u);
    }
L_00155328:;
    {
        cpu->r[12] = add_flags(cpu, 0x00155330u, cpu->r[12], 0, 0);
    }
L_0015532c:;
    {
        cpu->r[0] = rd32(0x00155334u + + 0xcu);
    }
L_00155330:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_00155334:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_00155338:;
    {
        return fn_0012f078(cpu);
    }
}

/* _ZN15GenericMtxStack10ResetStackEv @ 00155344 (arm) */
void fn_00155344(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00155344:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_00155348:;
    {
        cpu->r[2] = (~0x00000000u);
    }
L_0015534c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00155350:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00155354:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_00155358:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_0015535c:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_00155360:;
    {
        cpu->r[14] = 0x00155364u; fn_00153600(cpu);
    }
L_00155364:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_00155368:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0015536cu)) return;
    }
}

/* _ZN12ProjMtxStack10ResetStackEv @ 0015536c (arm) */
void fn_0015536c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015536c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00155370:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00155374:;
    {
        cpu->r[14] = 0x00155378u; fn_00155344(cpu);
    }
L_00155378:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015537c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00155380:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[3]);
    }
L_00155384:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00155388:;
    {
        cpu->r[14] = 0x00155390u;
    }
L_0015538c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00155390u)) return;
    }
L_00155390:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_00155394:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00155398u)) return;
    }
}

/* _ZN15GenericMtxStack9PopMatrixEv @ 00155398 (arm) */
void fn_00155398(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00155398:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[1] = v0;
        cpu->r[3] = v1;
    }
L_0015539c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x14u);
    }
L_001553a0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 0);
    }
L_001553a4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000043u, 1, 1);
    }
L_001553a8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_001553ac:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001553b0:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_001553b4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_001553b8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001553bc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001553f8;
        }
    }
L_001553c0:;
    {
        cpu->r[1] = rd32(0x001553c8u + + 0x40u);
    }
L_001553c4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001553c8:;
    {
        cpu->r[2] = rd32(0x001553d0u + + 0x3cu);
    }
L_001553cc:;
    {
        cpu->r[14] = 0x00000059u;
    }
L_001553d0:;
    {
        cpu->r[3] = rd32(0x001553d8u + + 0x38u);
    }
L_001553d4:;
    {
        cpu->r[1] = add_flags(cpu, 0x001553dcu, cpu->r[1], 0, 0);
    }
L_001553d8:;
    {
        cpu->r[12] = rd32(0x001553e0u + + 0x34u);
    }
L_001553dc:;
    {
        cpu->r[2] = add_flags(cpu, 0x001553e4u, cpu->r[2], 0, 0);
    }
L_001553e0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001553e8u, cpu->r[3], 0, 0);
    }
L_001553e4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_001553e8:;
    {
        cpu->r[12] = add_flags(cpu, 0x001553f0u, cpu->r[12], 0, 0);
    }
L_001553ec:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001553f0:;
    {
        cpu->r[14] = 0x001553f4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001553f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001553f8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000044u, 1, 0);
    }
L_001553fc:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_00155400:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00155404:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00155408u)) return;
    }
}

/* _ZN12ProjMtxStack9PopMatrixEv @ 00155418 (arm) */
void fn_00155418(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00155418:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0015541c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00155420:;
    {
        cpu->r[14] = 0x00155424u; fn_00155398(cpu);
    }
L_00155424:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00155428:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x1cu);
    }
L_0015542c:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00155430:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_00155434:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[2]);
    }
L_00155438:;
    {
        cpu->r[14] = 0x00155440u;
    }
L_0015543c:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00155440u)) return;
    }
L_00155440:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00155444u)) return;
    }
}

/* _ZN15GenericMtxStack10PushMatrixEv @ 00155444 (arm) */
void fn_00155444(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00155444:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x8u);
    }
L_00155448:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_0015544c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00155450:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_00155454:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00155458:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xcu);
    }
L_0015545c:;
    {
        uint32_t v = shifter(cpu->r[3], 1, 2u, &shc); cpu->r[3] = v;
    }
L_00155460:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00155464:;
    {
        cpu->r[2] = sub_flags(cpu, shifter(cpu->r[3], 2, 4u, &shc), cpu->r[3], 1, 0);
    }
L_00155468:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 8u, &shc), 0, 0);
    }
L_0015546c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], shifter(cpu->r[2], 2, 16u, &shc), 0, 0);
    }
L_00155470:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 4u, &shc), 0, 0);
    }
L_00155474:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[0], 1, 1);
    }
L_00155478:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001554b4;
        }
    }
L_0015547c:;
    {
        cpu->r[1] = rd32(0x00155484u + + 0x58u);
    }
L_00155480:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00155484:;
    {
        cpu->r[12] = rd32(0x0015548cu + + 0x54u);
    }
L_00155488:;
    {
        cpu->r[14] = 0x00000034u;
    }
L_0015548c:;
    {
        cpu->r[2] = rd32(0x00155494u + + 0x50u);
    }
L_00155490:;
    {
        cpu->r[1] = add_flags(cpu, 0x00155498u, cpu->r[1], 0, 0);
    }
L_00155494:;
    {
        cpu->r[3] = rd32(0x0015549cu + + 0x4cu);
    }
L_00155498:;
    {
        cpu->r[12] = add_flags(cpu, 0x001554a0u, cpu->r[12], 0, 0);
    }
L_0015549c:;
    {
        cpu->r[2] = add_flags(cpu, 0x001554a4u, cpu->r[2], 0, 0);
    }
L_001554a0:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000000cu, 0, 0);
    }
L_001554a4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001554acu, cpu->r[3], 0, 0);
    }
L_001554a8:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_001554ac:;
    {
        cpu->r[14] = 0x001554b0u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001554b0:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x8u);
    }
L_001554b4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x14u);
    }
L_001554b8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[1], 0x00000044u, 0, 0);
    }
L_001554bc:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001554c0:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_001554c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001554c8:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_001554cc:;
    {
        cpu->r[14] = 0x001554d0u; fn_00153624(cpu);
    }
L_001554d0:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_001554d4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_001554d8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001554dcu)) return;
    }
}

/* _ZN12ProjMtxStack10PushMatrixEv @ 001554ec (arm) */
void fn_001554ec(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001554ec:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001554f0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001554f4:;
    {
        cpu->r[14] = 0x001554f8u; fn_00155444(cpu);
    }
L_001554f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001554fc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1cu);
    }
L_00155500:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x18u);
    }
L_00155504:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00155508:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[3]);
    }
L_0015550c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_00155510:;
    {
        cpu->r[1] = rd8(cpu->r[1] + - 0x1u);
    }
L_00155514:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_00155518:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_0015551c:;
    {
        cpu->r[14] = 0x00155524u;
    }
L_00155520:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00155524u)) return;
    }
L_00155524:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_00155528:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x0015552cu)) return;
    }
}

/* _ZN15GenericMtxStack9MulMatrixEP7CMatrix @ 0015552c (arm) */
void fn_0015552c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015552c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_00155530:;
    {
        return fn_00153478(cpu);
    }
}

/* _ZN15GenericMtxStack15InitMatrixStackEii @ 00155534 (arm) */
void fn_00155534(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00155534:;
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
L_00155538:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0015553c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 4u, &shc), 0, 0);
    }
L_00155540:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00155544:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[1]);
    }
L_00155548:;
    {
        cpu->r[9] = cpu->r[2];
    }
L_0015554c:;
    {
        uint32_t v = shifter(cpu->r[0], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00155550:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_00155554:;
    {
        cpu->r[14] = 0x00155558u; imp__Znaj(cpu); /* _Znaj */
    }
L_00155558:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0015555c:;
    {
        cpu->r[3] = 0x00000044u;
    }
L_00155560:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[0], 0x00000008u, 0, 0);
    }
L_00155564:;
    {
        uint32_t base = cpu->r[0];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[3]);
        wr32(ea + 4u, cpu->r[5]);
    }
L_00155568:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00155594;
        }
    }
L_0015556c:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_00155570:;
    {
        cpu->r[6] = cpu->r[10];
    }
L_00155574:;
    {
        cpu->r[8] = cpu->r[7];
    }
L_00155578:;
    {
        wr32(cpu->r[6] + + 0x40u, cpu->r[8]);
    }
L_0015557c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00155580:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000001u, 0, 0);
    }
L_00155584:;
    {
        cpu->r[14] = 0x00155588u; fn_001535e0(cpu);
    }
L_00155588:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[7], 1, 1);
    }
L_0015558c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000044u, 0, 0);
    }
L_00155590:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00155578;
        }
    }
L_00155594:;
    {
        sub_flags(cpu, cpu->r[10], 0x00000000u, 1, 1);
    }
L_00155598:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[10]);
    }
L_0015559c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_001555a0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001555a4u)) return;
        }
    }
L_001555a4:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[10]);
    }
L_001555a8:;
    {
        cpu->r[0] = cpu->r[10];
    }
L_001555ac:;
    {
        cpu->r[14] = 0x001555b0u; fn_00153600(cpu);
    }
L_001555b0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001555b4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001555b8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001555e4;
        }
    }
L_001555bc:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001555c0:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_001555c4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_001555c8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_001555cc:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[5], 0, 0);
    }
L_001555d0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000044u, 0, 0);
    }
L_001555d4:;
    {
        cpu->r[14] = 0x001555d8u; fn_00153efc(cpu);
    }
L_001555d8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xcu);
    }
L_001555dc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[6], 1, 1);
    }
L_001555e0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001555c4;
        }
    }
L_001555e4:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_001555e8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001555ec:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[9]);
    }
L_001555f0:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_001555f4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001555f8u)) return;
    }
}

/* _ZN12ProjMtxStack15InitMatrixStackEii @ 001555f8 (arm) */
void fn_001555f8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001555f8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001555fc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00155600:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_00155604:;
    {
        cpu->r[14] = 0x00155608u; fn_00155534(cpu);
    }
L_00155608:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0015560c:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = (~0x00000000u);
        }
    }
L_00155610:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00155614u)) return;
        }
    }
L_00155614:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00155618:;
    {
        cpu->r[14] = 0x0015561cu; imp__Znaj(cpu); /* _Znaj */
    }
L_0015561c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00155620:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[0]);
    }
L_00155624:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = (~0x00000001u);
        }
    }
L_00155628:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_0015562c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00155630u)) return;
    }
}

/* _ZN15GenericMtxStackD2Ev @ 00155630 (arm) */
void fn_00155630(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00155630:;
    {
        cpu->r[2] = rd32(0x00155638u + + 0x80u);
    }
L_00155634:;
    {
        cpu->r[1] = rd32(0x0015563cu + + 0x80u);
    }
L_00155638:;
    {
        cpu->r[2] = add_flags(cpu, 0x00155640u, cpu->r[2], 0, 0);
    }
L_0015563c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_00155640:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00155644:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_00155648:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015564c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00155650:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_00155654:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_00155658:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001556b0;
        }
    }
L_0015565c:;
    {
        cpu->r[4] = rd32(cpu->r[3] + - 0x4u);
    }
L_00155660:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_00155664:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 4u, &shc), 0, 0);
    }
L_00155668:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[3], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_0015566c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_00155670:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001556a0;
        }
    }
L_00155674:;
    {
        cpu->r[5] = rd32(cpu->r[4] + - 0x4u);
    }
L_00155678:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_0015567c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00155694;
        }
    }
L_00155680:;
    {
        cpu->r[14] = 0x00155684u; fn_000b2bc8(cpu);
    }
L_00155684:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00155688:;
    {
        cpu->r[14] = 0x0015568cu; fn_0018ba20(cpu);
    }
L_0015568c:;
    {
        wr32(cpu->r[4] + - 0x4u, cpu->r[7]);
    }
L_00155690:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_00155694:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000044u, 1, 0);
    }
L_00155698:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_0015569c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00155674;
        }
    }
L_001556a0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 0);
    }
L_001556a4:;
    {
        cpu->r[14] = 0x001556a8u; fn_0018ba60(cpu);
    }
L_001556a8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001556ac:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[3]);
    }
L_001556b0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001556b4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001556b8u)) return;
    }
}

/* _ZN12ProjMtxStackD1Ev @ 001556c0 (arm) */
void fn_001556c0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001556c0:;
    {
        cpu->r[3] = rd32(0x001556c8u + + 0x40u);
    }
L_001556c4:;
    {
        cpu->r[2] = rd32(0x001556ccu + + 0x40u);
    }
L_001556c8:;
    {
        cpu->r[3] = add_flags(cpu, 0x001556d0u, cpu->r[3], 0, 0);
    }
L_001556cc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001556d0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001556d4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x18u);
    }
L_001556d8:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_001556dc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001556e0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_001556e4:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001556e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001556f8;
        }
    }
L_001556ec:;
    {
        cpu->r[14] = 0x001556f0u; fn_0018ba60(cpu);
    }
L_001556f0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001556f4:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_001556f8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001556fc:;
    {
        cpu->r[14] = 0x00155700u; fn_00155630(cpu);
    }
L_00155700:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00155704:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00155708u)) return;
    }
}

/* _ZN12ProjMtxStackD2Ev @ 00155710 (arm) */
void fn_00155710(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00155710:;
    {
        cpu->r[3] = rd32(0x00155718u + + 0x40u);
    }
L_00155714:;
    {
        cpu->r[2] = rd32(0x0015571cu + + 0x40u);
    }
L_00155718:;
    {
        cpu->r[3] = add_flags(cpu, 0x00155720u, cpu->r[3], 0, 0);
    }
L_0015571c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00155720:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00155724:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x18u);
    }
L_00155728:;
    {
        cpu->r[2] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0015572c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00155730:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00155734:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_00155738:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00155748;
        }
    }
L_0015573c:;
    {
        cpu->r[14] = 0x00155740u; fn_0018ba60(cpu);
    }
L_00155740:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00155744:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_00155748:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015574c:;
    {
        cpu->r[14] = 0x00155750u; fn_00155630(cpu);
    }
L_00155750:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00155754:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00155758u)) return;
    }
}

/* _ZN15GenericMtxStackD1Ev @ 00155760 (arm) */
void fn_00155760(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00155760:;
    {
        cpu->r[2] = rd32(0x00155768u + + 0x80u);
    }
L_00155764:;
    {
        cpu->r[1] = rd32(0x0015576cu + + 0x80u);
    }
L_00155768:;
    {
        cpu->r[2] = add_flags(cpu, 0x00155770u, cpu->r[2], 0, 0);
    }
L_0015576c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x4u);
    }
L_00155770:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00155774:;
    {
        cpu->r[1] = rd32(cpu->r[2] + cpu->r[1]);
    }
L_00155778:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015577c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00155780:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_00155784:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_00155788:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001557e0;
        }
    }
L_0015578c:;
    {
        cpu->r[4] = rd32(cpu->r[3] + - 0x4u);
    }
L_00155790:;
    {
        cpu->r[7] = 0x00000000u;
    }
L_00155794:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 4u, &shc), 0, 0);
    }
L_00155798:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[3], shifter(cpu->r[4], 2, 2u, &shc), 0, 0);
    }
L_0015579c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_001557a0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001557d0;
        }
    }
L_001557a4:;
    {
        cpu->r[5] = rd32(cpu->r[4] + - 0x4u);
    }
L_001557a8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001557ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001557c4;
        }
    }
L_001557b0:;
    {
        cpu->r[14] = 0x001557b4u; fn_000b2bc8(cpu);
    }
L_001557b4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001557b8:;
    {
        cpu->r[14] = 0x001557bcu; fn_0018ba20(cpu);
    }
L_001557bc:;
    {
        wr32(cpu->r[4] + - 0x4u, cpu->r[7]);
    }
L_001557c0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x4u);
    }
L_001557c4:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000044u, 1, 0);
    }
L_001557c8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_001557cc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001557a4;
        }
    }
L_001557d0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000008u, 1, 0);
    }
L_001557d4:;
    {
        cpu->r[14] = 0x001557d8u; fn_0018ba60(cpu);
    }
L_001557d8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001557dc:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[3]);
    }
L_001557e0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001557e4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001557e8u)) return;
    }
}

/* _ZN12ProjMtxStack15LoadCrtMtxInGPUEv @ 001557f0 (arm) */
void fn_001557f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001557f0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001557f4:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_001557f8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000048u, 1, 0);
    }
L_001557fc:;
    {
        cpu->r[14] = 0x00155800u; fn_00153efc(cpu);
    }
L_00155800:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_00155804:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00155808:;
    {
        wr32(cpu->r[13] + + 0x44u, cpu->r[3]);
    }
L_0015580c:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00155810:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00155814:;
    {
        cpu->r[14] = 0x00155818u; fn_00153624(cpu);
    }
L_00155818:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015581c:;
    {
        cpu->r[14] = 0x00155820u; imp_glLoadMatrixf(cpu); /* glLoadMatrixf */
    }
L_00155820:;
    {
        cpu->r[4] = rd32(cpu->r[13] + + 0x44u);
    }
L_00155824:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00155828:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015583c;
        }
    }
L_0015582c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00155830:;
    {
        cpu->r[14] = 0x00155834u; fn_000b2bc8(cpu);
    }
L_00155834:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00155838:;
    {
        cpu->r[14] = 0x0015583cu; fn_0018ba20(cpu);
    }
L_0015583c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000048u, 0, 0);
    }
L_00155840:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00155844u)) return;
    }
}

/* _ZN8Vector2d5CrossERS_S0_ @ 00155844 (arm) */
void fn_00155844(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00155844:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_00155848:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_0015584c:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_00155850:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0]);
    }
L_00155854:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_00155858:;
    {
        vfp_vnmls(cpu, 15, 13, 14);
    }
L_0015585c:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00155860:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8Vector2d12SegIntersectERS_S0_S0_S0_S0_ @ 00155864 (arm) */
void fn_00155864(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00155864:;
    {
        *vfp_s(cpu, 6) = *(float*)G(cpu->r[3]);
    }
L_00155868:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_0015586c:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_00155870:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[2]);
    }
L_00155874:;
    {
        vfp_vsub(cpu, 8, 8, 12);
    }
L_00155878:;
    {
        *vfp_s(cpu, 5) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_0015587c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_00155880:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[0]);
    }
L_00155884:;
    {
        *vfp_s(cpu, 7) = *(float*)G(cpu->r[1]);
    }
L_00155888:;
    {
        *vfp_s(cpu, 4) = *(float*)G(0x00155890u + + 0xd8u);
    }
L_0015588c:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_00155890:;
    {
        vfp_vsub(cpu, 9, 13, 6);
    }
L_00155894:;
    {
        vfp_vmul(cpu, 15, 9, 8);
    }
L_00155898:;
    {
        vfp_vsub(cpu, 7, 7, 11);
    }
L_0015589c:;
    {
        vfp_vsub(cpu, 10, 14, 5);
    }
L_001558a0:;
    {
        vfp_vnmls(cpu, 15, 7, 10);
    }
L_001558a4:;
    {
        vfp_vabs(cpu, 3, 15);
    }
L_001558a8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,3), *vfp_s(cpu,4));
    }
L_001558ac:;
    {
        vfp_sync_flags(cpu);
    }
L_001558b0:;
    {
        if (cond_test(cpu, 5)) {
        goto L_00155948;
        }
    }
L_001558b4:;
    {
        vfp_vsub(cpu, 2, 14, 12);
    }
L_001558b8:;
    {
        *vfp_s(cpu, 3) = *(float*)G(0x001558c0u + + 0xacu);
    }
L_001558bc:;
    {
        *vfp_s(cpu, 4) = *(float*)G(0x001558c4u + + 0xacu);
    }
L_001558c0:;
    {
        vfp_vdiv(cpu, 3, 3, 15);
    }
L_001558c4:;
    {
        vfp_vmul(cpu, 15, 9, 2);
    }
L_001558c8:;
    {
        vfp_vsub(cpu, 9, 13, 11);
    }
L_001558cc:;
    {
        vfp_vnmls(cpu, 15, 10, 9);
    }
L_001558d0:;
    {
        vfp_vmul(cpu, 15, 15, 3);
    }
L_001558d4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,4));
    }
L_001558d8:;
    {
        vfp_sync_flags(cpu);
    }
L_001558dc:;
    {
        if (cond_test(cpu, 5)) {
        goto L_00155948;
        }
    }
L_001558e0:;
    {
        *vfp_s(cpu, 1) = *(float*)G(0x001558e8u + + 0x8cu);
    }
L_001558e4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,1));
    }
L_001558e8:;
    {
        vfp_sync_flags(cpu);
    }
L_001558ec:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00155948;
        }
    }
L_001558f0:;
    {
        vfp_vmul(cpu, 10, 8, 9);
    }
L_001558f4:;
    {
        vfp_vnmls(cpu, 10, 7, 2);
    }
L_001558f8:;
    {
        vfp_vmul(cpu, 10, 10, 3);
    }
L_001558fc:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,10), *vfp_s(cpu,4));
    }
L_00155900:;
    {
        vfp_sync_flags(cpu);
    }
L_00155904:;
    {
        if (cond_test(cpu, 5)) {
        goto L_00155948;
        }
    }
L_00155908:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,10), *vfp_s(cpu,1));
    }
L_0015590c:;
    {
        vfp_sync_flags(cpu);
    }
L_00155910:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00155948;
        }
    }
L_00155914:;
    {
        vfp_vabs(cpu, 10, 10);
    }
L_00155918:;
    {
        vfp_vabs(cpu, 9, 15);
    }
L_0015591c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,9), *vfp_s(cpu,10));
    }
L_00155920:;
    {
        vfp_sync_flags(cpu);
    }
L_00155924:;
    {
        if (cond_test(cpu, 5)) {
        goto L_00155950;
        }
    }
L_00155928:;
    {
        vfp_vsub(cpu, 5, 5, 14);
    }
L_0015592c:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00155930:;
    {
        vfp_vsub(cpu, 6, 6, 13);
    }
L_00155934:;
    {
        vfp_vmla(cpu, 14, 15, 5);
    }
L_00155938:;
    {
        vfp_vmla(cpu, 13, 15, 6);
    }
L_0015593c:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00155940:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00155944:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00155948:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_0015594c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00155950:;
    {
        vfp_vmla(cpu, 11, 7, 15);
    }
L_00155954:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00155958:;
    {
        vfp_vmla(cpu, 12, 8, 15);
    }
L_0015595c:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_00155960:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00155964:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8Vector2d9TranslateERS_S_ @ 00155978 (arm) */
void fn_00155978(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00155978:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0]);
    }
L_0015597c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_00155980:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1]);
    }
L_00155984:;
    {
        vfp_vadd(cpu, 14, 13, 14);
    }
L_00155988:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_0015598c:;
    {
        vfp_vadd(cpu, 15, 13, 15);
    }
L_00155990:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00155994:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00155998:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8Vector3dC2ERK8Vector2d @ 0015599c (arm) */
void fn_0015599c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015599c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_001559a0:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001559a4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_001559a8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001559ac:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001559b4u + + 0x4u);
    }
L_001559b0:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001559b4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8Vector3dC1ERK8Vector2d @ 001559bc (arm) */
void fn_001559bc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001559bc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_001559c0:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001559c4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_001559c8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001559cc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001559d4u + + 0x4u);
    }
L_001559d0:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001559d4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8Vector2d4SwapERS_ @ 001559dc (arm) */
void fn_001559dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001559dc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0]);
    }
L_001559e0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_001559e4:;
    {
        *(uint32_t*)G(cpu->r[1]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001559e8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_001559ec:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001559f0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_001559f4:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001559f8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001559fc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8Vector3d14computeDeltaXYEff @ 00155a00 (arm) */
void fn_00155a00(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00155a00:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8Vector3d12computeDeltaERS_ii @ 00155a04 (arm) */
void fn_00155a04(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00155a04:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8Vector3d13computeAnglesERS_RiS1_ @ 00155a08 (arm) */
void fn_00155a08(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00155a08:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8Vector3d12CrossProductERS_S0_ @ 00155a0c (arm) */
void fn_00155a0c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00155a0c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00155a14u + + 0x4cu);
    }
L_00155a10:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00155a14:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00155a18:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_00155a1c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[1] + + 0x8u);
    }
L_00155a20:;
    {
        vfp_vmul(cpu, 15, 12, 15);
    }
L_00155a24:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_00155a28:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_00155a2c:;
    {
        vfp_vnmls(cpu, 15, 13, 14);
    }
L_00155a30:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00155a34:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1]);
    }
L_00155a38:;
    {
        vfp_vmul(cpu, 15, 13, 14);
    }
L_00155a3c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[2]);
    }
L_00155a40:;
    {
        vfp_vnmls(cpu, 15, 12, 13);
    }
L_00155a44:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00155a48:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_00155a4c:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_00155a50:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_00155a54:;
    {
        vfp_vnmls(cpu, 15, 14, 13);
    }
L_00155a58:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00155a5c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4QuatC2Ev @ 00155a64 (arm) */
void fn_00155a64(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00155a64:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00155a6cu + + 0x10u);
    }
L_00155a68:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00155a6c:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00155a70:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00155a74:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00155a78:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4QuatC1Ev @ 00155a80 (arm) */
void fn_00155a80(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00155a80:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00155a88u + + 0x10u);
    }
L_00155a84:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00155a88:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00155a8c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00155a90:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00155a94:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4QuatC2Effff @ 00155a9c (arm) */
void fn_00155a9c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00155a9c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13]);
    }
L_00155aa0:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_00155aa4:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00155aa8:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_00155aac:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_00155ab0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4QuatC1Effff @ 00155ab4 (arm) */
void fn_00155ab4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00155ab4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13]);
    }
L_00155ab8:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_00155abc:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00155ac0:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_00155ac4:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_00155ac8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN4QuatmLEf @ 00155acc (arm) */
void fn_00155acc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00155acc:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[2];
    }
L_00155ad0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1]);
    }
L_00155ad4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1] + + 0x8u);
    }
L_00155ad8:;
    {
        vfp_vmul(cpu, 11, 14, 15);
    }
L_00155adc:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[1] + + 0xcu);
    }
L_00155ae0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_00155ae4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00155ae8:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_00155aec:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00155af0:;
    {
        vfp_vmul(cpu, 12, 12, 15);
    }
L_00155af4:;
    {
        *(uint32_t*)G(cpu->r[1]) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_00155af8:;
    {
        vfp_vmul(cpu, 14, 14, 15);
    }
L_00155afc:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00155b00:;
    {
        vfp_vmul(cpu, 15, 13, 15);
    }
L_00155b04:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00155b08:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00155b0c:;
    {
        cpu->r[14] = 0x00155b10u; imp_memmove(cpu); /* memmove */
    }
L_00155b10:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00155b14:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00155b18u)) return;
    }
}

/* _ZdvRK4Quatf @ 00155b18 (arm) */
void fn_00155b18(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00155b18:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[2];
    }
L_00155b1c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0xcu);
    }
L_00155b20:;
    {
        vfp_vdiv(cpu, 12, 14, 15);
    }
L_00155b24:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1]);
    }
L_00155b28:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00155b2c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_00155b30:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[1] + + 0x8u);
    }
L_00155b34:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00155b38:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00155b3c:;
    {
        vfp_vdiv(cpu, 10, 11, 15);
    }
L_00155b40:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00155b44:;
    {
        vfp_vdiv(cpu, 12, 13, 15);
    }
L_00155b48:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,10);
    }
L_00155b4c:;
    {
        vfp_vdiv(cpu, 13, 14, 15);
    }
L_00155b50:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,12);
    }
L_00155b54:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,13);
    }
L_00155b58:;
    {
        cpu->r[14] = 0x00155b5cu; fn_00155ab4(cpu);
    }
L_00155b5c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00155b60:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00155b64:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00155b68u)) return;
    }
}

/* _ZN4QuatdVEf @ 00155b68 (arm) */
void fn_00155b68(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00155b68:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[2];
    }
L_00155b6c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1]);
    }
L_00155b70:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1] + + 0x8u);
    }
L_00155b74:;
    {
        vfp_vdiv(cpu, 11, 14, 15);
    }
L_00155b78:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[1] + + 0xcu);
    }
L_00155b7c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_00155b80:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00155b84:;
    {
        cpu->r[2] = 0x00000010u;
    }
L_00155b88:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00155b8c:;
    {
        vfp_vdiv(cpu, 12, 12, 15);
    }
L_00155b90:;
    {
        *(uint32_t*)G(cpu->r[1]) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_00155b94:;
    {
        vfp_vdiv(cpu, 14, 14, 15);
    }
L_00155b98:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00155b9c:;
    {
        vfp_vdiv(cpu, 15, 13, 15);
    }
L_00155ba0:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00155ba4:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00155ba8:;
    {
        cpu->r[14] = 0x00155bacu; imp_memmove(cpu); /* memmove */
    }
L_00155bac:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00155bb0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00155bb4u)) return;
    }
}

/* _ZcoRK4Quat @ 00155bb4 (arm) */
void fn_00155bb4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00155bb4:;
    {
        cpu->r[12] = cpu->r[1];
    }
L_00155bb8:;
    {
        cpu->r[1] = rd32(cpu->r[1]);
    }
L_00155bbc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00155bc0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[12] + + 0xcu);
    }
L_00155bc4:;
    {
        cpu->r[2] = rd32(cpu->r[12] + + 0x4u);
    }
L_00155bc8:;
    {
        cpu->r[3] = rd32(cpu->r[12] + + 0x8u);
    }
L_00155bcc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00155bd0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00155bd4:;
    {
        uint32_t v = cpu->r[1] ^ 0x80000000u; cpu->r[1] = v;
    }
L_00155bd8:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00155bdc:;
    {
        uint32_t v = cpu->r[2] ^ 0x80000000u; cpu->r[2] = v;
    }
L_00155be0:;
    {
        uint32_t v = cpu->r[3] ^ 0x80000000u; cpu->r[3] = v;
    }
L_00155be4:;
    {
        cpu->r[14] = 0x00155be8u; fn_00155ab4(cpu);
    }
L_00155be8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00155bec:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00155bf0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00155bf4u)) return;
    }
}

/* _ZmlRK4QuatS1_ @ 00155bf4 (arm) */
void fn_00155bf4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00155bf4:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[1]);
    }
L_00155bf8:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[2]);
    }
L_00155bfc:;
    {
        vfp_vmul(cpu, 15, 10, 8);
    }
L_00155c00:;
    {
        *vfp_s(cpu, 5) = *(float*)G(cpu->r[1] + + 0xcu);
    }
L_00155c04:;
    {
        *vfp_s(cpu, 6) = *(float*)G(cpu->r[1] + + 0x8u);
    }
L_00155c08:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_00155c0c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2] + + 0xcu);
    }
L_00155c10:;
    {
        *vfp_s(cpu, 7) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_00155c14:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_00155c18:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00155c1c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00155c20:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00155c24:;
    {
        vfp_vnmls(cpu, 15, 5, 14);
    }
L_00155c28:;
    {
        vfp_vmul(cpu, 12, 8, 14);
    }
L_00155c2c:;
    {
        vfp_vmul(cpu, 13, 14, 11);
    }
L_00155c30:;
    {
        vfp_vmul(cpu, 14, 14, 6);
    }
L_00155c34:;
    {
        vfp_vmla(cpu, 12, 5, 10);
    }
L_00155c38:;
    {
        vfp_vmla(cpu, 13, 5, 7);
    }
L_00155c3c:;
    {
        vfp_vmla(cpu, 14, 5, 9);
    }
L_00155c40:;
    {
        vfp_vmla(cpu, 12, 11, 9);
    }
L_00155c44:;
    {
        vfp_vmla(cpu, 13, 10, 6);
    }
L_00155c48:;
    {
        vfp_vmla(cpu, 14, 8, 7);
    }
L_00155c4c:;
    {
        vfp_vmls(cpu, 15, 11, 7);
    }
L_00155c50:;
    {
        vfp_vmls(cpu, 12, 6, 7);
    }
L_00155c54:;
    {
        vfp_vmls(cpu, 13, 8, 9);
    }
L_00155c58:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,12);
    }
L_00155c5c:;
    {
        vfp_vmls(cpu, 14, 10, 11);
    }
L_00155c60:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,13);
    }
L_00155c64:;
    {
        vfp_vmls(cpu, 15, 9, 6);
    }
L_00155c68:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,14);
    }
L_00155c6c:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00155c70:;
    {
        cpu->r[14] = 0x00155c74u; fn_00155ab4(cpu);
    }
L_00155c74:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00155c78:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00155c7c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00155c80u)) return;
    }
}

/* _ZmlRK4QuatRK8Vector3d @ 00155c80 (arm) */
void fn_00155c80(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00155c80:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_00155c84:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_00155c88:;
    {
        vfp_vmul(cpu, 15, 11, 12);
    }
L_00155c8c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2]);
    }
L_00155c90:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_00155c94:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[1]);
    }
L_00155c98:;
    {
        *vfp_s(cpu, 7) = *(float*)G(cpu->r[1] + + 0x8u);
    }
L_00155c9c:;
    {
        *vfp_s(cpu, 5) = *(float*)G(cpu->r[1] + + 0xcu);
    }
L_00155ca0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00155ca4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00155ca8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00155cac:;
    {
        vfp_vmul(cpu, 6, 11, 13);
    }
L_00155cb0:;
    {
        vfp_vmul(cpu, 8, 14, 7);
    }
L_00155cb4:;
    {
        vfp_vmul(cpu, 10, 12, 9);
    }
L_00155cb8:;
    {
        vfp_vmla(cpu, 15, 14, 9);
    }
L_00155cbc:;
    {
        vfp_vmla(cpu, 10, 5, 13);
    }
L_00155cc0:;
    {
        vfp_vmla(cpu, 6, 5, 14);
    }
L_00155cc4:;
    {
        vfp_vmla(cpu, 8, 5, 12);
    }
L_00155cc8:;
    {
        vfp_vmla(cpu, 15, 13, 7);
    }
L_00155ccc:;
    {
        vfp_vmls(cpu, 6, 7, 12);
    }
L_00155cd0:;
    {
        vfp_vmls(cpu, 8, 13, 9);
    }
L_00155cd4:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,6);
    }
L_00155cd8:;
    {
        vfp_vmls(cpu, 10, 14, 11);
    }
L_00155cdc:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,8);
    }
L_00155ce0:;
    {
        vfp_vneg(cpu, 15, 15);
    }
L_00155ce4:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,10);
    }
L_00155ce8:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00155cec:;
    {
        cpu->r[14] = 0x00155cf0u; fn_00155ab4(cpu);
    }
L_00155cf0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00155cf4:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00155cf8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00155cfcu)) return;
    }
}

/* _ZmlRK8Vector3dRK4Quat @ 00155cfc (arm) */
void fn_00155cfc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00155cfc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_00155d00:;
    {
        *vfp_s(cpu, 7) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_00155d04:;
    {
        vfp_vmul(cpu, 15, 14, 7);
    }
L_00155d08:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1]);
    }
L_00155d0c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[1] + + 0x8u);
    }
L_00155d10:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[2]);
    }
L_00155d14:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_00155d18:;
    {
        *vfp_s(cpu, 5) = *(float*)G(cpu->r[2] + + 0xcu);
    }
L_00155d1c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00155d20:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00155d24:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00155d28:;
    {
        vfp_vmul(cpu, 6, 9, 14);
    }
L_00155d2c:;
    {
        vfp_vmul(cpu, 8, 12, 11);
    }
L_00155d30:;
    {
        vfp_vmul(cpu, 10, 13, 7);
    }
L_00155d34:;
    {
        vfp_vmla(cpu, 15, 13, 11);
    }
L_00155d38:;
    {
        vfp_vmla(cpu, 10, 5, 12);
    }
L_00155d3c:;
    {
        vfp_vmla(cpu, 6, 5, 13);
    }
L_00155d40:;
    {
        vfp_vmla(cpu, 8, 5, 14);
    }
L_00155d44:;
    {
        vfp_vmla(cpu, 15, 9, 12);
    }
L_00155d48:;
    {
        vfp_vmls(cpu, 6, 7, 12);
    }
L_00155d4c:;
    {
        vfp_vmls(cpu, 8, 13, 9);
    }
L_00155d50:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,6);
    }
L_00155d54:;
    {
        vfp_vmls(cpu, 10, 14, 11);
    }
L_00155d58:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,8);
    }
L_00155d5c:;
    {
        vfp_vneg(cpu, 15, 15);
    }
L_00155d60:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,10);
    }
L_00155d64:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00155d68:;
    {
        cpu->r[14] = 0x00155d6cu; fn_00155ab4(cpu);
    }
L_00155d6c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00155d70:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00155d74:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00155d78u)) return;
    }
}

/* _ZN4Quat6rotateERKS_ @ 00155d78 (arm) */
void fn_00155d78(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00155d78:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_00155d7c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_00155d80:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_00155d84:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00155d88:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_00155d8c:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00155d90:;
    {
        cpu->r[14] = 0x00155d94u; fn_00155bf4(cpu);
    }
L_00155d94:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00155d98:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_00155d9c:;
    {
        cpu->r[5] = cpu->r[13];
    }
L_00155da0:;
    {
        cpu->r[14] = 0x00155da4u; fn_00155bb4(cpu);
    }
L_00155da4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00155da8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00155dac:;
    {
        cpu->r[2] = cpu->r[13];
    }
L_00155db0:;
    {
        cpu->r[14] = 0x00155db4u; fn_00155bf4(cpu);
    }
L_00155db4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00155db8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_00155dbc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00155dc0u)) return;
    }
}

/* _ZN4Quat6rotateER8Vector3d @ 00155dc0 (arm) */
void fn_00155dc0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00155dc0:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_00155dc4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000034u, 1, 0);
    }
L_00155dc8:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_00155dcc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00155dd0:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_00155dd4:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00155dd8:;
    {
        cpu->r[14] = 0x00155ddcu; fn_00155c80(cpu);
    }
L_00155ddc:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00155de0:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_00155de4:;
    {
        cpu->r[5] = cpu->r[13];
    }
L_00155de8:;
    {
        cpu->r[14] = 0x00155decu; fn_00155bb4(cpu);
    }
L_00155dec:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_00155df0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00155df4:;
    {
        cpu->r[2] = cpu->r[13];
    }
L_00155df8:;
    {
        cpu->r[14] = 0x00155dfcu; fn_00155bf4(cpu);
    }
L_00155dfc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x24u);
    }
L_00155e00:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00155e04:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00155e08:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x28u);
    }
L_00155e0c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00155e10:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x20u);
    }
L_00155e14:;
    {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00155e18:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000034u, 0, 0);
    }
L_00155e1c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00155e20u)) return;
    }
}

/* _ZN8Vector3d20PointSegmentDistanceERS_S0_S0_S0_ @ 00155e20 (arm) */
void fn_00155e20(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00155e20:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_00155e24:;
    {
        *vfp_s(cpu, 6) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_00155e28:;
    {
        *vfp_s(cpu, 1) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_00155e2c:;
    {
        vfp_vsub(cpu, 14, 6, 10);
    }
L_00155e30:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[0]);
    }
L_00155e34:;
    {
        *vfp_s(cpu, 7) = *(float*)G(cpu->r[2]);
    }
L_00155e38:;
    {
        *vfp_s(cpu, 2) = *(float*)G(cpu->r[1]);
    }
L_00155e3c:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[0] + + 0x8u);
    }
L_00155e40:;
    {
        *vfp_s(cpu, 5) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_00155e44:;
    {
        *vfp_s(cpu, 0) = *(float*)G(cpu->r[1] + + 0x8u);
    }
L_00155e48:;
    {
        vfp_vsub(cpu, 13, 10, 1);
    }
L_00155e4c:;
    {
        vfp_vmul(cpu, 15, 14, 13);
    }
L_00155e50:;
    {
        vfp_vsub(cpu, 3, 7, 8);
    }
L_00155e54:;
    {
        vfp_vsub(cpu, 11, 8, 2);
    }
L_00155e58:;
    {
        vfp_vmla(cpu, 15, 3, 11);
    }
L_00155e5c:;
    {
        vfp_vsub(cpu, 4, 5, 9);
    }
L_00155e60:;
    {
        vfp_vsub(cpu, 12, 9, 0);
    }
L_00155e64:;
    {
        vfp_vmla(cpu, 15, 4, 12);
    }
L_00155e68:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_00155e6c:;
    {
        vfp_sync_flags(cpu);
    }
L_00155e70:;
    {
        if (cond_test(cpu, 11)) {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 3);
        }
    }
L_00155e74:;
    {
        if (cond_test(cpu, 11)) {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 4);
        }
    }
L_00155e78:;
    {
        if (cond_test(cpu, 11)) {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
        }
    }
L_00155e7c:;
    {
        if (cond_test(cpu, 11)) {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
        }
    }
L_00155e80:;
    {
        vfp_vmul(cpu, 14, 13, 13);
    }
L_00155e84:;
    {
        vfp_vmla(cpu, 14, 11, 11);
    }
L_00155e88:;
    {
        vfp_vmla(cpu, 14, 12, 12);
    }
L_00155e8c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_00155e90:;
    {
        vfp_sync_flags(cpu);
    }
L_00155e94:;
    {
        if (cond_test(cpu, 10)) {
        goto L_00155ec4;
        }
    }
L_00155e98:;
    {
        vfp_vdiv(cpu, 15, 15, 14);
    }
L_00155e9c:;
    {
        vfp_vmla(cpu, 8, 15, 11);
    }
L_00155ea0:;
    {
        vfp_vmla(cpu, 9, 15, 12);
    }
L_00155ea4:;
    {
        vfp_vmla(cpu, 10, 15, 13);
    }
L_00155ea8:;
    {
        vfp_vsub(cpu, 5, 5, 9);
    }
L_00155eac:;
    {
        vfp_vsub(cpu, 6, 6, 10);
    }
L_00155eb0:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 5);
    }
L_00155eb4:;
    {
        vfp_vsub(cpu, 7, 7, 8);
    }
L_00155eb8:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 6);
    }
L_00155ebc:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 7);
    }
L_00155ec0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00155ec4:;
    {
        vfp_vsub(cpu, 5, 5, 0);
    }
L_00155ec8:;
    {
        vfp_vsub(cpu, 6, 6, 1);
    }
L_00155ecc:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 5);
    }
L_00155ed0:;
    {
        vfp_vsub(cpu, 7, 7, 2);
    }
L_00155ed4:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 6);
    }
L_00155ed8:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 7);
    }
L_00155edc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8Vector3d17PointLineDistanceERS_S0_S0_ @ 00155ee0 (arm) */
void fn_00155ee0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00155ee0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_00155ee4:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_00155ee8:;
    {
        vfp_vsub(cpu, 12, 11, 14);
    }
L_00155eec:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[0]);
    }
L_00155ef0:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[1]);
    }
L_00155ef4:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[0] + + 0x8u);
    }
L_00155ef8:;
    {
        *vfp_s(cpu, 5) = *(float*)G(cpu->r[1] + + 0x8u);
    }
L_00155efc:;
    {
        *vfp_s(cpu, 6) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_00155f00:;
    {
        *vfp_s(cpu, 7) = *(float*)G(cpu->r[2]);
    }
L_00155f04:;
    {
        vfp_vmul(cpu, 15, 12, 12);
    }
L_00155f08:;
    {
        vfp_vsub(cpu, 13, 9, 10);
    }
L_00155f0c:;
    {
        vfp_vmla(cpu, 15, 13, 13);
    }
L_00155f10:;
    {
        vfp_vsub(cpu, 8, 5, 8);
    }
L_00155f14:;
    {
        vfp_vmla(cpu, 15, 8, 8);
    }
L_00155f18:;
    {
        vfp_vmul(cpu, 14, 9, 14);
    }
L_00155f1c:;
    {
        vfp_vmul(cpu, 13, 13, 6);
    }
L_00155f20:;
    {
        vfp_vsqrt(cpu, 15, 15);
    }
L_00155f24:;
    {
        vfp_vmls(cpu, 13, 12, 7);
    }
L_00155f28:;
    {
        vfp_vnmls(cpu, 14, 10, 11);
    }
L_00155f2c:;
    {
        vfp_vadd(cpu, 14, 13, 14);
    }
L_00155f30:;
    {
        vfp_vdiv(cpu, 13, 14, 15);
    }
L_00155f34:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,13);
    }
L_00155f38:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8Vector3d10NormalizedEv @ 00155f3c (arm) */
void fn_00155f3c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00155f3c:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_00155f40:;
    {
        vfp_vmul(cpu, 15, 13, 13);
    }
L_00155f44:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[1]);
    }
L_00155f48:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[1] + + 0x8u);
    }
L_00155f4c:;
    {
        *vfp_s(cpu, 11) = *(float*)G(0x00155f54u + + 0x28u);
    }
L_00155f50:;
    {
        vfp_vmla(cpu, 15, 12, 12);
    }
L_00155f54:;
    {
        vfp_vmla(cpu, 15, 14, 14);
    }
L_00155f58:;
    {
        vfp_vsqrt(cpu, 15, 15);
    }
L_00155f5c:;
    {
        vfp_vdiv(cpu, 15, 11, 15);
    }
L_00155f60:;
    {
        vfp_vmul(cpu, 12, 12, 15);
    }
L_00155f64:;
    {
        vfp_vmul(cpu, 13, 15, 13);
    }
L_00155f68:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00155f6c:;
    {
        vfp_vmul(cpu, 15, 15, 14);
    }
L_00155f70:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00155f74:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00155f78:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8Vector3d9NormalizeEv @ 00155f80 (arm) */
void fn_00155f80(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00155f80:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_00155f84:;
    {
        vfp_vmul(cpu, 15, 14, 14);
    }
L_00155f88:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0]);
    }
L_00155f8c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0] + + 0x8u);
    }
L_00155f90:;
    {
        vfp_vmla(cpu, 15, 13, 13);
    }
L_00155f94:;
    {
        vfp_vmla(cpu, 15, 12, 12);
    }
L_00155f98:;
    {
        vfp_vsqrt(cpu, 15, 15);
    }
L_00155f9c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_00155fa0:;
    {
        vfp_sync_flags(cpu);
    }
L_00155fa4:;
    {
        if (cond_test(cpu, 6)) {
        goto L_00155fe4;
        }
    }
L_00155fa8:;
    {
        *vfp_s(cpu, 11) = *(float*)G(0x00155fb0u + + 0x4cu);
    }
L_00155fac:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,11));
    }
L_00155fb0:;
    {
        vfp_sync_flags(cpu);
    }
L_00155fb4:;
    {
        if (cond_test(cpu, 6)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00155fb8:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_00155fbc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00155fc0:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu, 11) = *(float*)G(0x00155fc8u + + 0x38u);
        }
    }
L_00155fc4:;
    {
        if (cond_test(cpu, 2)) {
        vfp_vdiv(cpu, 15, 11, 15);
        }
    }
L_00155fc8:;
    {
        vfp_vmul(cpu, 12, 12, 15);
    }
L_00155fcc:;
    {
        vfp_vmul(cpu, 13, 13, 15);
    }
L_00155fd0:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00155fd4:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_00155fd8:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00155fdc:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00155fe0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00155fe4:;
    {
        *vfp_s(cpu, 11) = *(float*)G(0x00155fecu + + 0x18u);
    }
L_00155fe8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,11));
    }
L_00155fec:;
    {
        vfp_sync_flags(cpu);
    }
L_00155ff0:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00155ff4:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_00155ff8:;
    {
        goto L_00155fbc;
    }
}

/* _ZN4Quat6ModuleEv @ 00156008 (arm) */
void fn_00156008(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00156008:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_0015600c:;
    {
        vfp_vmul(cpu, 15, 15, 15);
    }
L_00156010:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0]);
    }
L_00156014:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x8u);
    }
L_00156018:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0xcu);
    }
L_0015601c:;
    {
        vfp_vmla(cpu, 15, 12, 12);
    }
L_00156020:;
    {
        vfp_vmla(cpu, 15, 13, 13);
    }
L_00156024:;
    {
        vfp_vmla(cpu, 15, 14, 14);
    }
L_00156028:;
    {
        vfp_vsqrt(cpu, 15, 15);
    }
L_0015602c:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00156030:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN8Vector2d9NormalizeEv @ 00156034 (arm) */
void fn_00156034(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00156034:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_00156038:;
    {
        vfp_vmul(cpu, 15, 13, 13);
    }
L_0015603c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0]);
    }
L_00156040:;
    {
        vfp_vmla(cpu, 15, 14, 14);
    }
L_00156044:;
    {
        vfp_vsqrt(cpu, 15, 15);
    }
L_00156048:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_0015604c:;
    {
        vfp_sync_flags(cpu);
    }
L_00156050:;
    {
        if (cond_test(cpu, 6)) {
        goto L_00156088;
        }
    }
L_00156054:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x0015605cu + + 0x44u);
    }
L_00156058:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,12));
    }
L_0015605c:;
    {
        vfp_sync_flags(cpu);
    }
L_00156060:;
    {
        if (cond_test(cpu, 6)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00156064:;
    {
        if (cond_test(cpu, 5)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_00156068:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015606c:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu, 12) = *(float*)G(0x00156074u + + 0x30u);
        }
    }
L_00156070:;
    {
        if (cond_test(cpu, 2)) {
        vfp_vdiv(cpu, 15, 12, 15);
        }
    }
L_00156074:;
    {
        vfp_vmul(cpu, 13, 13, 15);
    }
L_00156078:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_0015607c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00156080:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00156084:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00156088:;
    {
        *vfp_s(cpu, 12) = *(float*)G(0x00156090u + + 0x18u);
    }
L_0015608c:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,12));
    }
L_00156090:;
    {
        vfp_sync_flags(cpu);
    }
L_00156094:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00156098:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_0015609c:;
    {
        goto L_00156068;
    }
}

/* _ZN4Quat7getRollEv @ 001560ac (arm) */
void fn_001560ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001560ac:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[0]);
    }
L_001560b0:;
    {
        vfp_vmul(cpu, 15, 11, 11);
    }
L_001560b4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0xcu);
    }
L_001560b8:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0] + + 0x8u);
    }
L_001560bc:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_001560c0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001560c4:;
    {
        vfp_vmla(cpu, 15, 14, 14);
    }
L_001560c8:;
    {
        vfp_vmls(cpu, 15, 12, 12);
    }
L_001560cc:;
    {
        vfp_vmul(cpu, 14, 14, 13);
    }
L_001560d0:;
    {
        vfp_vmla(cpu, 14, 11, 12);
    }
L_001560d4:;
    {
        vfp_vmls(cpu, 15, 13, 13);
    }
L_001560d8:;
    {
        vfp_vadd(cpu, 14, 14, 14);
    }
L_001560dc:;
    {
        *vfp_d(cpu,6) = (double)*vfp_s(cpu,15);
    }
L_001560e0:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,6); cpu->r[2]= (uint32_t)v; cpu->r[3]=(uint32_t)(v>>32);
    }
L_001560e4:;
    {
        *vfp_d(cpu,6) = (double)*vfp_s(cpu,14);
    }
L_001560e8:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,6); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_001560ec:;
    {
        cpu->r[14] = 0x001560f0u; imp_atan2(cpu); /* atan2 */
    }
L_001560f0:;
    {
        *(uint64_t*)vfp_d(cpu,7) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_001560f4:;
    {
        *vfp_s(cpu,15) = (float)*vfp_d(cpu,7);
    }
L_001560f8:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001560fc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00156100u)) return;
    }
}

/* _ZN4Quat8getPitchEv @ 00156100 (arm) */
void fn_00156100(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00156100:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0]);
    }
L_00156104:;
    {
        vfp_vmul(cpu, 15, 14, 14);
    }
L_00156108:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[0] + + 0xcu);
    }
L_0015610c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[0] + + 0x8u);
    }
L_00156110:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_00156114:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00156118:;
    {
        vfp_vnmls(cpu, 15, 11, 11);
    }
L_0015611c:;
    {
        vfp_vmls(cpu, 15, 12, 12);
    }
L_00156120:;
    {
        vfp_vmul(cpu, 14, 11, 14);
    }
L_00156124:;
    {
        vfp_vmla(cpu, 14, 13, 12);
    }
L_00156128:;
    {
        vfp_vmla(cpu, 15, 13, 13);
    }
L_0015612c:;
    {
        vfp_vadd(cpu, 14, 14, 14);
    }
L_00156130:;
    {
        *vfp_d(cpu,6) = (double)*vfp_s(cpu,15);
    }
L_00156134:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,6); cpu->r[2]= (uint32_t)v; cpu->r[3]=(uint32_t)(v>>32);
    }
L_00156138:;
    {
        *vfp_d(cpu,6) = (double)*vfp_s(cpu,14);
    }
L_0015613c:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,6); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_00156140:;
    {
        cpu->r[14] = 0x00156144u; imp_atan2(cpu); /* atan2 */
    }
L_00156144:;
    {
        *(uint64_t*)vfp_d(cpu,7) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_00156148:;
    {
        *vfp_s(cpu,15) = (float)*vfp_d(cpu,7);
    }
L_0015614c:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00156150:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00156154u)) return;
    }
}

/* _ZN4Quat6getYawEv @ 00156154 (arm) */
void fn_00156154(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00156154:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0xcu);
    }
L_00156158:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[0] + + 0x8u);
    }
L_0015615c:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_00156160:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[0]);
    }
L_00156164:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_00156168:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_0015616c:;
    {
        vfp_vnmls(cpu, 15, 13, 14);
    }
L_00156170:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00156178u + + 0x1cu);
    }
L_00156174:;
    {
        vfp_vmul(cpu, 15, 15, 14);
    }
L_00156178:;
    {
        *vfp_d(cpu,6) = (double)*vfp_s(cpu,15);
    }
L_0015617c:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,6); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_00156180:;
    {
        cpu->r[14] = 0x00156184u; imp_asin(cpu); /* asin */
    }
L_00156184:;
    {
        *(uint64_t*)vfp_d(cpu,7) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_00156188:;
    {
        *vfp_s(cpu,15) = (float)*vfp_d(cpu,7);
    }
L_0015618c:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00156190:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00156194u)) return;
    }
}

/* _ZN4Quat4LerpEbRS_S0_fS0_ @ 00156198 (arm) */
void fn_00156198(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00156198:;
    {
        cpu->r[13] -= 20u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[14]);
    }
L_0015619c:;
    {
        cpu->r[13] -= 16u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
    }
L_001561a0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000024u, 1, 0);
    }
L_001561a4:;
    {
        *(uint32_t*)vfp_s(cpu,17) = cpu->r[3];
    }
L_001561a8:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_001561ac:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001561b0:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001561b4:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001561b8:;
    {
        cpu->r[6] = rd32(cpu->r[13] + + 0x48u);
    }
L_001561bc:;
    {
        cpu->r[14] = 0x001561c0u; fn_00155a80(cpu);
    }
L_001561c0:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_001561c4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[7] + + 0x4u);
    }
L_001561c8:;
    {
        vfp_vmul(cpu, 15, 11, 13);
    }
L_001561cc:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[4]);
    }
L_001561d0:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[7]);
    }
L_001561d4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[7] + + 0x8u);
    }
L_001561d8:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[4] + + 0x8u);
    }
L_001561dc:;
    {
        *vfp_s(cpu, 7) = *(float*)G(cpu->r[7] + + 0xcu);
    }
L_001561e0:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[4] + + 0xcu);
    }
L_001561e4:;
    {
        vfp_vmla(cpu, 15, 10, 12);
    }
L_001561e8:;
    {
        vfp_vmla(cpu, 15, 8, 14);
    }
L_001561ec:;
    {
        vfp_vmla(cpu, 15, 7, 9);
    }
L_001561f0:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_001561f4:;
    {
        vfp_sync_flags(cpu);
    }
L_001561f8:;
    {
        if (cond_test(cpu, 6)) {
        goto L_00156264;
        }
    }
L_001561fc:;
    {
        vfp_vneg(cpu, 7, 7);
    }
L_00156200:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00156204:;
    {
        vfp_vneg(cpu, 12, 12);
    }
L_00156208:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 7);
    }
L_0015620c:;
    {
        vfp_vneg(cpu, 13, 13);
    }
L_00156210:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00156214:;
    {
        vfp_vneg(cpu, 14, 14);
    }
L_00156218:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_0015621c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00156220:;
    {
        vfp_vneg(cpu, 15, 15);
    }
L_00156224:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015627c;
        }
    }
L_00156228:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_0015622c:;
    {
        *vfp_d(cpu, 6) = *(double*)G(0x00156234u + + 0x13cu);
    }
L_00156230:;
    {
        vfp_sync_flags(cpu);
    }
L_00156234:;
    {
        if (cond_test(cpu, 6)) {
        *vfp_s(cpu,6) = *vfp_s(cpu,15);
        }
    }
L_00156238:;
    {
        if (cond_test(cpu, 5)) {
        vfp_vneg(cpu, 6, 15);
        }
    }
L_0015623c:;
    {
        *vfp_d(cpu,3) = (double)*vfp_s(cpu,6);
    }
L_00156240:;
    {
        *vfp_d(cpu, 3) = *vfp_d(cpu, 6) - *vfp_d(cpu, 3);
    }
L_00156244:;
    {
        *vfp_d(cpu, 6) = *(double*)G(0x0015624cu + + 0x12cu);
    }
L_00156248:;
    {
        vfp_set_cmp(cpu, *vfp_d(cpu,3), *vfp_d(cpu,6));
    }
L_0015624c:;
    {
        vfp_sync_flags(cpu);
    }
L_00156250:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001562ec;
        }
    }
L_00156254:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x0015625cu + + 0x124u);
    }
L_00156258:;
    {
        *vfp_s(cpu,15) = *vfp_s(cpu,17);
    }
L_0015625c:;
    {
        vfp_vsub(cpu, 16, 16, 17);
    }
L_00156260:;
    {
        goto L_00156288;
    }
L_00156264:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00156268:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 7);
    }
L_0015626c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00156270:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00156274:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00156278:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00156228;
        }
    }
L_0015627c:;
    {
        *vfp_s(cpu, 16) = *(float*)G(0x00156284u + + 0xfcu);
    }
L_00156280:;
    {
        vfp_vsub(cpu, 16, 16, 17);
    }
L_00156284:;
    {
        *vfp_s(cpu,15) = *vfp_s(cpu,17);
    }
L_00156288:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x1cu);
    }
L_0015628c:;
    {
        *vfp_s(cpu, 7) = *(float*)G(cpu->r[13] + + 0x14u);
    }
L_00156290:;
    {
        vfp_vmul(cpu, 13, 15, 14);
    }
L_00156294:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x18u);
    }
L_00156298:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0015629c:;
    {
        vfp_vmul(cpu, 12, 15, 14);
    }
L_001562a0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x10u);
    }
L_001562a4:;
    {
        vfp_vmul(cpu, 14, 15, 14);
    }
L_001562a8:;
    {
        vfp_vmul(cpu, 15, 15, 7);
    }
L_001562ac:;
    {
        vfp_vmla(cpu, 12, 16, 8);
    }
L_001562b0:;
    {
        vfp_vmla(cpu, 13, 16, 9);
    }
L_001562b4:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_001562b8:;
    {
        vfp_vmla(cpu, 14, 16, 10);
    }
L_001562bc:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_001562c0:;
    {
        vfp_vmla(cpu, 15, 16, 11);
    }
L_001562c4:;
    {
        *(uint32_t*)G(cpu->r[6]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001562c8:;
    {
        *(uint32_t*)G(cpu->r[6] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001562cc:;
    {
        cpu->r[14] = 0x001562d0u; fn_00156008(cpu);
    }
L_001562d0:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001562d4:;
    {
        cpu->r[2] = cpu->r[0];
    }
L_001562d8:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_001562dc:;
    {
        cpu->r[14] = 0x001562e0u; fn_00155b68(cpu);
    }
L_001562e0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000024u, 0, 0);
    }
L_001562e4:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        cpu->r[13] += 16u;
    }
L_001562e8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001562ecu)) return;
    }
L_001562ec:;
    {
        *vfp_d(cpu,6) = (double)*vfp_s(cpu,15);
    }
L_001562f0:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,6); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_001562f4:;
    {
        cpu->r[14] = 0x001562f8u; imp_acos(cpu); /* acos */
    }
L_001562f8:;
    {
        *(uint64_t*)vfp_d(cpu,7) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_001562fc:;
    {
        *vfp_s(cpu,16) = (float)*vfp_d(cpu,7);
    }
L_00156300:;
    {
        *vfp_d(cpu,6) = (double)*vfp_s(cpu,16);
    }
L_00156304:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,6); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_00156308:;
    {
        cpu->r[14] = 0x0015630cu; imp_sin(cpu); /* sin */
    }
L_0015630c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00156314u + + 0x6cu);
    }
L_00156310:;
    {
        vfp_vsub(cpu, 15, 15, 17);
    }
L_00156314:;
    {
        vfp_vmul(cpu, 15, 15, 16);
    }
L_00156318:;
    {
        *vfp_d(cpu,6) = (double)*vfp_s(cpu,15);
    }
L_0015631c:;
    {
        *(uint64_t*)vfp_d(cpu,9) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_00156320:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,6); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_00156324:;
    {
        cpu->r[14] = 0x00156328u; imp_sin(cpu); /* sin */
    }
L_00156328:;
    {
        *vfp_s(cpu,18) = (float)*vfp_d(cpu,9);
    }
L_0015632c:;
    {
        vfp_vmul(cpu, 15, 17, 16);
    }
L_00156330:;
    {
        *vfp_d(cpu,9) = (double)*vfp_s(cpu,18);
    }
L_00156334:;
    {
        *(uint64_t*)vfp_d(cpu,6) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_00156338:;
    {
        *vfp_d(cpu, 8) = *vfp_d(cpu, 6) / *vfp_d(cpu, 9);
    }
L_0015633c:;
    {
        *vfp_d(cpu,6) = (double)*vfp_s(cpu,15);
    }
L_00156340:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,6); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_00156344:;
    {
        *vfp_s(cpu,16) = (float)*vfp_d(cpu,8);
    }
L_00156348:;
    {
        cpu->r[14] = 0x0015634cu; imp_sin(cpu); /* sin */
    }
L_0015634c:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[4] + + 0xcu);
    }
L_00156350:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[4]);
    }
L_00156354:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_00156358:;
    {
        *vfp_s(cpu, 8) = *(float*)G(cpu->r[4] + + 0x8u);
    }
L_0015635c:;
    {
        *(uint64_t*)vfp_d(cpu,6) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_00156360:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 6) / *vfp_d(cpu, 9);
    }
L_00156364:;
    {
        *vfp_s(cpu,15) = (float)*vfp_d(cpu,7);
    }
L_00156368:;
    {
        goto L_00156288;
    }
}

/* _ZN4QuatC1ERK8Vector3df @ 00156388 (arm) */
void fn_00156388(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00156388:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_0015638c:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[2];
    }
L_00156390:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00156394:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0015639cu + + 0x7cu);
    }
L_00156398:;
    {
        vfp_vmul(cpu, 16, 14, 15);
    }
L_0015639c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_001563a0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001563a4:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001563a8:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,16);
    }
L_001563ac:;
    {
        cpu->r[14] = 0x001563b0u; imp_cosf(cpu); /* cosf */
    }
L_001563b0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001563b4:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_001563b8:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_001563bc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x8u);
    }
L_001563c0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001563c4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5]);
    }
L_001563c8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001563cc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x4u);
    }
L_001563d0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001563d4:;
    {
        cpu->r[14] = 0x001563d8u; fn_00155f3c(cpu);
    }
L_001563d8:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,16);
    }
L_001563dc:;
    {
        cpu->r[14] = 0x001563e0u; imp_sinf(cpu); /* sinf */
    }
L_001563e0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x4u);
    }
L_001563e4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x8u);
    }
L_001563e8:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_001563ec:;
    {
        vfp_vmul(cpu, 12, 15, 14);
    }
L_001563f0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13]);
    }
L_001563f4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001563f8:;
    {
        vfp_vmul(cpu, 14, 15, 14);
    }
L_001563fc:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00156400:;
    {
        vfp_vmul(cpu, 15, 15, 13);
    }
L_00156404:;
    {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00156408:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015640c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_00156410:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00156414:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00156418u)) return;
    }
}

/* _ZN4QuatC2ERK8Vector3df @ 0015641c (arm) */
void fn_0015641c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015641c:;
    {
        cpu->r[13] -= 12u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[14]);
    }
L_00156420:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[2];
    }
L_00156424:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00156428:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00156430u + + 0x7cu);
    }
L_0015642c:;
    {
        vfp_vmul(cpu, 16, 14, 15);
    }
L_00156430:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000001cu, 1, 0);
    }
L_00156434:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00156438:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0015643c:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,16);
    }
L_00156440:;
    {
        cpu->r[14] = 0x00156444u; imp_cosf(cpu); /* cosf */
    }
L_00156444:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00156448:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[0]);
    }
L_0015644c:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_00156450:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x8u);
    }
L_00156454:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00156458:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5]);
    }
L_0015645c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00156460:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x4u);
    }
L_00156464:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00156468:;
    {
        cpu->r[14] = 0x0015646cu; fn_00155f3c(cpu);
    }
L_0015646c:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,16);
    }
L_00156470:;
    {
        cpu->r[14] = 0x00156474u; imp_sinf(cpu); /* sinf */
    }
L_00156474:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x4u);
    }
L_00156478:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[13] + + 0x8u);
    }
L_0015647c:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[0];
    }
L_00156480:;
    {
        vfp_vmul(cpu, 12, 15, 14);
    }
L_00156484:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13]);
    }
L_00156488:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015648c:;
    {
        vfp_vmul(cpu, 14, 15, 14);
    }
L_00156490:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00156494:;
    {
        vfp_vmul(cpu, 15, 15, 13);
    }
L_00156498:;
    {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0015649c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001564a0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001564a4:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_001564a8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        uint32_t v2 = rd32(cpu->r[13] + 8u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        uint32_t t = v2;
        cpu->r[13] += 12u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001564acu)) return;
    }
}

/* _ZN8Vector3d7SetRandEff @ 001564b0 (arm) */
void fn_001564b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001564b0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001564b4:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_001564b8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001564bc:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001564c0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001564c4:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001564c8:;
    {
        cpu->r[14] = 0x001564ccu; fn_00096514(cpu);
    }
L_001564cc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001564d0:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_001564d4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001564d8:;
    {
        cpu->r[14] = 0x001564dcu; fn_00096514(cpu);
    }
L_001564dc:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001564e0:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_001564e4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001564e8:;
    {
        cpu->r[14] = 0x001564ecu; fn_00096514(cpu);
    }
L_001564ec:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_001564f0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001564f4u)) return;
    }
}

/* _ZN8Vector3d11InitFromRotEfff @ 001564f4 (arm) */
void fn_001564f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001564f4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001564f8:;
    {
        *(uint32_t*)vfp_s(cpu,10) = cpu->r[1];
    }
L_001564fc:;
    {
        cpu->r[13] -= 32u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
        wr64(cpu->r[13] + 16u, *(uint64_t*)vfp_d(cpu, 10));
        wr64(cpu->r[13] + 24u, *(uint64_t*)vfp_d(cpu, 11));
    }
L_00156500:;
    {
        *vfp_d(cpu,9) = (double)*vfp_s(cpu,10);
    }
L_00156504:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00156508:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[3];
    }
L_0015650c:;
    {
        *(uint32_t*)vfp_s(cpu,20) = cpu->r[2];
    }
L_00156510:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,9); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_00156514:;
    {
        *vfp_d(cpu,11) = (double)*vfp_s(cpu,16);
    }
L_00156518:;
    {
        cpu->r[14] = 0x0015651cu; imp_sin(cpu); /* sin */
    }
L_0015651c:;
    {
        *vfp_d(cpu,10) = (double)*vfp_s(cpu,20);
    }
L_00156520:;
    {
        *(uint64_t*)vfp_d(cpu,7) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_00156524:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,9); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_00156528:;
    {
        *vfp_s(cpu,16) = (float)*vfp_d(cpu,7);
    }
L_0015652c:;
    {
        cpu->r[14] = 0x00156530u; imp_cos(cpu); /* cos */
    }
L_00156530:;
    {
        *(uint64_t*)vfp_d(cpu,5) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_00156534:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,10); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_00156538:;
    {
        *vfp_s(cpu,18) = (float)*vfp_d(cpu,5);
    }
L_0015653c:;
    {
        cpu->r[14] = 0x00156540u; imp_sin(cpu); /* sin */
    }
L_00156540:;
    {
        *(uint64_t*)vfp_d(cpu,7) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_00156544:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,10); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_00156548:;
    {
        *vfp_s(cpu,19) = (float)*vfp_d(cpu,7);
    }
L_0015654c:;
    {
        cpu->r[14] = 0x00156550u; imp_cos(cpu); /* cos */
    }
L_00156550:;
    {
        *(uint64_t*)vfp_d(cpu,10) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_00156554:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,11); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_00156558:;
    {
        cpu->r[14] = 0x0015655cu; imp_sin(cpu); /* sin */
    }
L_0015655c:;
    {
        *vfp_s(cpu,20) = (float)*vfp_d(cpu,10);
    }
L_00156560:;
    {
        *(uint64_t*)vfp_d(cpu,5) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_00156564:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,11); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_00156568:;
    {
        *vfp_s(cpu,17) = (float)*vfp_d(cpu,5);
    }
L_0015656c:;
    {
        cpu->r[14] = 0x00156570u; imp_cos(cpu); /* cos */
    }
L_00156570:;
    {
        vfp_vmul(cpu, 12, 16, 17);
    }
L_00156574:;
    {
        vfp_vmul(cpu, 15, 18, 17);
    }
L_00156578:;
    {
        *(uint64_t*)vfp_d(cpu,5) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_0015657c:;
    {
        *vfp_s(cpu,13) = (float)*vfp_d(cpu,5);
    }
L_00156580:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00156584:;
    {
        vfp_vmul(cpu, 14, 18, 13);
    }
L_00156588:;
    {
        vfp_vmul(cpu, 13, 16, 13);
    }
L_0015658c:;
    {
        vfp_vmla(cpu, 14, 12, 19);
    }
L_00156590:;
    {
        vfp_vnmls(cpu, 15, 13, 19);
    }
L_00156594:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00156598:;
    {
        vfp_vmul(cpu, 14, 20, 16);
    }
L_0015659c:;
    {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001565a0:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001565a4:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        *(uint64_t*)vfp_d(cpu, 10) = rd64(cpu->r[13] + 16u);
        *(uint64_t*)vfp_d(cpu, 11) = rd64(cpu->r[13] + 24u);
        cpu->r[13] += 32u;
    }
L_001565a8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_001565ac:;
    {
        return fn_00155f80(cpu);
    }
}

/* _ZN8Vector2d13RotateAsPointERS_f @ 001565b0 (arm) */
void fn_001565b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001565b0:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[1];
    }
L_001565b4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001565b8:;
    {
        cpu->r[13] -= 32u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
        wr64(cpu->r[13] + 8u, *(uint64_t*)vfp_d(cpu, 9));
        wr64(cpu->r[13] + 16u, *(uint64_t*)vfp_d(cpu, 10));
        wr64(cpu->r[13] + 24u, *(uint64_t*)vfp_d(cpu, 11));
    }
L_001565bc:;
    {
        *vfp_d(cpu,8) = (double)*vfp_s(cpu,15);
    }
L_001565c0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001565c4:;
    {
        *vfp_s(cpu, 18) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_001565c8:;
    {
        *vfp_s(cpu, 20) = *(float*)G(cpu->r[0]);
    }
L_001565cc:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,8); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_001565d0:;
    {
        *vfp_d(cpu,9) = (double)*vfp_s(cpu,18);
    }
L_001565d4:;
    {
        cpu->r[14] = 0x001565d8u; imp_cos(cpu); /* cos */
    }
L_001565d8:;
    {
        *vfp_d(cpu,10) = (double)*vfp_s(cpu,20);
    }
L_001565dc:;
    {
        *(uint64_t*)vfp_d(cpu,11) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_001565e0:;
    {
        uint64_t v = *(uint64_t*)vfp_d(cpu,8); cpu->r[0]= (uint32_t)v; cpu->r[1]=(uint32_t)(v>>32);
    }
L_001565e4:;
    {
        cpu->r[14] = 0x001565e8u; imp_sin(cpu); /* sin */
    }
L_001565e8:;
    {
        *vfp_d(cpu, 6) = *vfp_d(cpu, 11) * *vfp_d(cpu, 9);
    }
L_001565ec:;
    {
        *(uint64_t*)vfp_d(cpu,5) = ((uint64_t)cpu->r[1]<<32)|cpu->r[0];
    }
L_001565f0:;
    {
        *vfp_d(cpu, 7) = *vfp_d(cpu, 9) * *vfp_d(cpu, 5);
    }
L_001565f4:;
    {
        *vfp_d(cpu, 6) = *vfp_d(cpu, 6) + *vfp_d(cpu, 10) * *vfp_d(cpu, 5);
    }
L_001565f8:;
    {
        *vfp_d(cpu, 7) = -(*vfp_d(cpu, 7) - *vfp_d(cpu, 10) * *vfp_d(cpu, 11));
    }
L_001565fc:;
    {
        *vfp_s(cpu,12) = (float)*vfp_d(cpu,6);
    }
L_00156600:;
    {
        *vfp_s(cpu,14) = (float)*vfp_d(cpu,7);
    }
L_00156604:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00156608:;
    {
        *(uint32_t*)G(cpu->r[4]) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0015660c:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        *(uint64_t*)vfp_d(cpu, 9) = rd64(cpu->r[13] + 8u);
        *(uint64_t*)vfp_d(cpu, 10) = rd64(cpu->r[13] + 16u);
        *(uint64_t*)vfp_d(cpu, 11) = rd64(cpu->r[13] + 24u);
        cpu->r[13] += 32u;
    }
L_00156610:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00156614u)) return;
    }
}

/* _ZN8Vector3d13ReverseEndianEv @ 00156614 (arm) */
void fn_00156614(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00156614:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00156618:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0015661c:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_00156620:;
    {
        cpu->r[14] = 0x00156624u; fn_000963bc(cpu);
    }
L_00156624:;
    {
        wr32(cpu->r[4], cpu->r[0]);
    }
L_00156628:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4u);
    }
L_0015662c:;
    {
        cpu->r[14] = 0x00156630u; fn_000963bc(cpu);
    }
L_00156630:;
    {
        wr32(cpu->r[4] + + 0x4u, cpu->r[0]);
    }
L_00156634:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_00156638:;
    {
        cpu->r[14] = 0x0015663cu; fn_000963bc(cpu);
    }
L_0015663c:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_00156640:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00156644u)) return;
    }
}

/* _ZN8Vector3d4LoadEP8LZMAFile @ 00156644 (arm) */
void fn_00156644(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00156644:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00156648:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0015664c:;
    {
        cpu->r[2] = 0x0000000cu;
    }
L_00156650:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_00156654:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00156658:;
    {
        cpu->r[14] = 0x0015665cu; fn_000fc5f4(cpu);
    }
L_0015665c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00156660:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_00156664:;
    {
        return fn_00156614(cpu);
    }
}

/* _ZN8Vector2d12AngleBetweenERS_S0_ @ 00156668 (arm) */
void fn_00156668(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00156668:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_0015666c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00156670:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x4u);
    }
L_00156674:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00156678:;
    {
        vfp_vmul(cpu, 16, 14, 15);
    }
L_0015667c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_00156680:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0]);
    }
L_00156684:;
    {
        vfp_vmla(cpu, 16, 14, 15);
    }
L_00156688:;
    {
        cpu->r[14] = 0x0015668cu; fn_00155844(cpu);
    }
L_0015668c:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,16);
    }
L_00156690:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00156694:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_00156698:;
    {
        imp_atan2f(cpu); /* tail atan2f */ return;
    }
}

/* _ZN6CTrailC2Ev @ 0015669c (arm) */
void fn_0015669c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015669c:;
    {
        cpu->r[1] = 0x00008080u;
    }
L_001566a0:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001566a4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001566acu + + 0x64u);
    }
L_001566a8:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x8080u << 16);
    }
L_001566ac:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001566b0:;
    {
        wr32(cpu->r[0] + + 0x4cu, cpu->r[1]);
    }
L_001566b4:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001566b8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001566bc:;
    {
        cpu->r[1] = 0x000001c2u;
    }
L_001566c0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001566c8u + + 0x4cu);
    }
L_001566c4:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_001566c8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001566cc:;
    {
        cpu->r[1] = 0x000078c9u;
    }
L_001566d0:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[2]);
    }
L_001566d4:;
    {
        wr32(cpu->r[0] + + 0x3cu, cpu->r[1]);
    }
L_001566d8:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_001566dc:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_001566e0:;
    {
        wr32(cpu->r[0] + + 0x40u, cpu->r[1]);
    }
L_001566e4:;
    {
        cpu->r[1] = 0x00000012u;
    }
L_001566e8:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_001566ec:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_001566f0:;
    {
        wr32(cpu->r[0] + + 0x44u, cpu->r[1]);
    }
L_001566f4:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_001566f8:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[2]);
    }
L_001566fc:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[2]);
    }
L_00156700:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[2]);
    }
L_00156704:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[2]);
    }
L_00156708:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[2]);
    }
L_0015670c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6CTrailC1Ev @ 00156718 (arm) */
void fn_00156718(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00156718:;
    {
        cpu->r[1] = 0x00008080u;
    }
L_0015671c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00156720:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00156728u + + 0x64u);
    }
L_00156724:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x8080u << 16);
    }
L_00156728:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x38u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015672c:;
    {
        wr32(cpu->r[0] + + 0x4cu, cpu->r[1]);
    }
L_00156730:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00156734:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00156738:;
    {
        cpu->r[1] = 0x000001c2u;
    }
L_0015673c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00156744u + + 0x4cu);
    }
L_00156740:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_00156744:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00156748:;
    {
        cpu->r[1] = 0x000078c9u;
    }
L_0015674c:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[2]);
    }
L_00156750:;
    {
        wr32(cpu->r[0] + + 0x3cu, cpu->r[1]);
    }
L_00156754:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_00156758:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_0015675c:;
    {
        wr32(cpu->r[0] + + 0x40u, cpu->r[1]);
    }
L_00156760:;
    {
        cpu->r[1] = 0x00000012u;
    }
L_00156764:;
    {
        wr32(cpu->r[0] + + 0xcu, cpu->r[2]);
    }
L_00156768:;
    {
        wr32(cpu->r[0] + + 0x10u, cpu->r[2]);
    }
L_0015676c:;
    {
        wr32(cpu->r[0] + + 0x44u, cpu->r[1]);
    }
L_00156770:;
    {
        wr32(cpu->r[0] + + 0x14u, cpu->r[2]);
    }
L_00156774:;
    {
        wr32(cpu->r[0] + + 0x18u, cpu->r[2]);
    }
L_00156778:;
    {
        wr32(cpu->r[0] + + 0x1cu, cpu->r[2]);
    }
L_0015677c:;
    {
        wr32(cpu->r[0] + + 0x20u, cpu->r[2]);
    }
L_00156780:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[2]);
    }
L_00156784:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[2]);
    }
L_00156788:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6CTrail19SetRenderParametersEifiii @ 00156794 (arm) */
void fn_00156794(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00156794:;
    {
        wr32(cpu->r[0] + + 0x44u, cpu->r[3]);
    }
L_00156798:;
    {
        cpu->r[3] = rd32(cpu->r[13]);
    }
L_0015679c:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_001567a0:;
    {
        wr32(cpu->r[0], cpu->r[1]);
    }
L_001567a4:;
    {
        wr32(cpu->r[0] + + 0x3cu, cpu->r[3]);
    }
L_001567a8:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_001567ac:;
    {
        wr32(cpu->r[0] + + 0x40u, cpu->r[3]);
    }
L_001567b0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN6CTrail6UpdateEv @ 001567b4 (arm) */
void fn_001567b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001567b4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
    }
L_001567b8:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x8u);
    }
L_001567bc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001567c0:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[1]);
    }
L_001567c4:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[1], 1, 1);
    }
L_001567c8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0015681c;
        }
    }
L_001567cc:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x1cu);
    }
L_001567d0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_001567d4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_001567d8:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = cpu->r[4];
        }
    }
L_001567dc:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[12] = 0x0000001cu;
        }
    }
L_001567e0:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00156814;
        }
    }
L_001567e4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000001u, 0, 0);
    }
L_001567e8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_001567ec:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[1], 1, 1);
    }
L_001567f0:;
    {
        wr32(cpu->r[2] + + 0x18u, cpu->r[3]);
    }
L_001567f4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], cpu->r[12], 0, 0);
    }
L_001567f8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000001cu, 0, 0);
    }
L_001567fc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00156824;
        }
    }
L_00156800:;
    {
        cpu->r[3] = rd32(cpu->r[2] + + 0x18u);
    }
L_00156804:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00156808:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001567e4;
        }
    }
L_0015680c:;
    {
        cpu->r[4] = cpu->r[2];
    }
L_00156810:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[1]);
    }
L_00156814:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00156818:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_0015681c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[13] += 8u;
    }
L_00156820:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00156824:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[1]);
    }
L_00156828:;
    {
        goto L_0015681c;
    }
}

/* _ZN6CTrail10ModifyLifeEf @ 0015682c (arm) */
void fn_0015682c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015682c:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
    }
L_00156830:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[1];
    }
L_00156834:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x8u);
    }
L_00156838:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0015683c:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[3]);
    }
L_00156840:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_00156844:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001568a0;
        }
    }
L_00156848:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x1cu);
    }
L_0015684c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_00156850:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00156854:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[1] = cpu->r[4];
        }
    }
L_00156858:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[12] = 0x0000001cu;
        }
    }
L_0015685c:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_00156860:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0015687c;
        }
    }
L_00156864:;
    {
        goto L_001568a0;
    }
L_00156868:;
    {
        cpu->r[3] = rd32(cpu->r[1] + + 0x18u);
    }
L_0015686c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00156870:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x0000001cu, 0, 0);
    }
L_00156874:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00156878:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001568a8;
        }
    }
L_0015687c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[3];
    }
L_00156880:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_00156884:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_00156888:;
    {
        vfp_vmul(cpu, 15, 15, 14);
    }
L_0015688c:;
    {
        *(int32_t*)vfp_s(cpu,15) = (int32_t)*vfp_s(cpu,15);
    }
L_00156890:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00156894:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], cpu->r[12], 0, 0);
    }
L_00156898:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00156868;
        }
    }
L_0015689c:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[2]);
    }
L_001568a0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[5] = v1;
        cpu->r[13] += 8u;
    }
L_001568a4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001568a8:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_001568ac:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[2]);
    }
L_001568b0:;
    {
        goto L_001568a0;
    }
}

/* _ZN6CTrail5ResetEv @ 001568b4 (arm) */
void fn_001568b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001568b4:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001568b8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001568bc:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001568c0:;
    {
        cpu->r[14] = 0x001568c4u; fn_0015682c(cpu);
    }
L_001568c4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001568c8:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        cpu->r[14] = v1;
        cpu->r[13] += 8u;
    }
L_001568cc:;
    {
        return fn_001567b4(cpu);
    }
}

/* _ZN6CTrail10BuildPointEi @ 001568d0 (arm) */
void fn_001568d0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001568d0:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001568d4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001568dcu + + 0x230u);
    }
L_001568d8:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001568dc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000018u, 1, 0);
    }
L_001568e0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001568e4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001568e8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001568ec:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001568f0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00156ab0;
        }
    }
L_001568f4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x1cu);
    }
L_001568f8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x1cu);
    }
L_001568fc:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_00156900:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[3]);
    }
L_00156904:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x0000001cu, 0, 0);
    }
L_00156908:;
    {
        vfp_vsub(cpu, 12, 12, 15);
    }
L_0015690c:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_00156910:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_00156914:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_00156918:;
    {
        cpu->r[6] = cpu->r[5];
    }
L_0015691c:;
    {
        vfp_vsub(cpu, 14, 11, 14);
    }
L_00156920:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00156924:;
    {
        vfp_vsub(cpu, 15, 13, 15);
    }
L_00156928:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0015692c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00156930:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00156934:;
    {
        cpu->r[14] = 0x00156938u; fn_00155f80(cpu);
    }
L_00156938:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1cu);
    }
L_0015693c:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[13] + + 0x14u);
    }
L_00156940:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[13] + + 0x10u);
    }
L_00156944:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_00156948:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[3] + + 0x10u);
    }
L_0015694c:;
    {
        vfp_vmul(cpu, 15, 12, 10);
    }
L_00156950:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + + 0x14u);
    }
L_00156954:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[13] + + 0xcu);
    }
L_00156958:;
    {
        cpu->r[0] = cpu->r[13];
    }
L_0015695c:;
    {
        vfp_vnmls(cpu, 15, 14, 13);
    }
L_00156960:;
    {
        *(uint32_t*)G(cpu->r[13]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00156964:;
    {
        vfp_vmul(cpu, 15, 13, 11);
    }
L_00156968:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + + 0xcu);
    }
L_0015696c:;
    {
        vfp_vmul(cpu, 14, 14, 13);
    }
L_00156970:;
    {
        vfp_vnmls(cpu, 15, 12, 13);
    }
L_00156974:;
    {
        vfp_vnmls(cpu, 14, 10, 11);
    }
L_00156978:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015697c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00156980:;
    {
        cpu->r[14] = 0x00156984u; fn_00155f80(cpu);
    }
L_00156984:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x4u);
    }
L_00156988:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00156990u + + 0x180u);
    }
L_0015698c:;
    {
        vfp_vmul(cpu, 15, 14, 15);
    }
L_00156990:;
    {
        *vfp_s(cpu, 9) = *(float*)G(cpu->r[13] + + 0x4u);
    }
L_00156994:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[13] + + 0x8u);
    }
L_00156998:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[13]);
    }
L_0015699c:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001569a0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1cu);
    }
L_001569a4:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[5], 1, 1);
    }
L_001569a8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_001569ac:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_001569b0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[2]);
    }
L_001569b4:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_001569b8:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001569bc:;
    {
        vfp_vmul(cpu, 11, 15, 11);
    }
L_001569c0:;
    {
        vfp_vmul(cpu, 10, 15, 10);
    }
L_001569c4:;
    {
        vfp_vmul(cpu, 15, 15, 9);
    }
L_001569c8:;
    {
        vfp_vadd(cpu, 7, 10, 13);
    }
L_001569cc:;
    {
        vfp_vadd(cpu, 9, 11, 14);
    }
L_001569d0:;
    {
        vfp_vadd(cpu, 8, 15, 12);
    }
L_001569d4:;
    {
        vfp_vsub(cpu, 10, 13, 10);
    }
L_001569d8:;
    {
        vfp_vsub(cpu, 6, 12, 15);
    }
L_001569dc:;
    {
        vfp_vsub(cpu, 11, 14, 11);
    }
L_001569e0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00156b04;
        }
    }
L_001569e4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001569e8:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 5u, &shc); cpu->r[1] = v;
    }
L_001569ec:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], shifter(cpu->r[2], 2, 2u, &shc), 1, 0);
    }
L_001569f0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_001569f4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_001569f8:;
    {
        vfp_vsub(cpu, 12, 12, 15);
    }
L_001569fc:;
    {
        *vfp_s(cpu, 4) = *(float*)G(cpu->r[2]);
    }
L_00156a00:;
    {
        *vfp_s(cpu, 5) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_00156a04:;
    {
        vfp_vmul(cpu, 15, 12, 12);
    }
L_00156a08:;
    {
        vfp_vsub(cpu, 13, 13, 4);
    }
L_00156a0c:;
    {
        vfp_vmla(cpu, 15, 13, 13);
    }
L_00156a10:;
    {
        vfp_vsub(cpu, 14, 14, 5);
    }
L_00156a14:;
    {
        vfp_vmla(cpu, 15, 14, 14);
    }
L_00156a18:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00156a20u + + 0xecu);
    }
L_00156a1c:;
    {
        vfp_vsqrt(cpu, 15, 15);
    }
L_00156a20:;
    {
        vfp_vadd(cpu, 15, 15, 14);
    }
L_00156a24:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00156a28:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 14) = *(float*)G(0x00156a30u + + 0xe4u);
        }
    }
L_00156a2c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 1u, &shc), 0, 0);
    }
L_00156a30:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu, 14) = *(float*)G(0x00156a38u + + 0xd4u);
        }
    }
L_00156a34:;
    {
        if (cond_test(cpu, 1)) {
        vfp_vdiv(cpu, 15, 15, 14);
        }
    }
L_00156a38:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
        }
    }
L_00156a3c:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3] + + 0x3cu);
        }
    }
L_00156a40:;
    {
        if (cond_test(cpu, 1)) {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0x54u);
        }
    }
L_00156a44:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
        }
    }
L_00156a48:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 4u, &shc); cpu->r[1] = v;
    }
L_00156a4c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x4cu);
    }
L_00156a50:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[1], 0x00000018u, 0, 0);
    }
L_00156a54:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,10);
    }
L_00156a58:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[1], 0, 0);
    }
L_00156a5c:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[5], 2, 4u, &shc), cpu->r[2]);
    }
L_00156a60:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[12], 0, 0);
    }
L_00156a64:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 6);
    }
L_00156a68:;
    {
        cpu->r[4] = *(uint32_t*)vfp_s(cpu,7);
    }
L_00156a6c:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 11);
    }
L_00156a70:;
    {
        wr32(cpu->r[1] + + 0x14u, cpu->r[0]);
    }
L_00156a74:;
    {
        wr32(cpu->r[3] + cpu->r[12], cpu->r[4]);
    }
L_00156a78:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 8);
    }
L_00156a7c:;
    {
        wr32(cpu->r[2] + + 0x14u, cpu->r[0]);
    }
L_00156a80:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 9);
    }
L_00156a84:;
    {
        if (cond_test(cpu, 1)) {
        vfp_vadd(cpu, 14, 15, 14);
        }
    }
L_00156a88:;
    {
        if (cond_test(cpu, 1)) {
        vfp_vadd(cpu, 13, 15, 13);
        }
    }
L_00156a8c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00156a94u + + 0x78u);
    }
L_00156a90:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00156a94:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00156a9cu + + 0x7cu);
    }
L_00156a98:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00156a9c:;
    {
        if (cond_test(cpu, 2)) {
        *vfp_s(cpu,13) = *vfp_s(cpu,14);
        }
    }
L_00156aa0:;
    {
        *(uint32_t*)G(cpu->r[1] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 13);
    }
L_00156aa4:;
    {
        *(uint32_t*)G(cpu->r[2] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00156aa8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_00156aac:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00156ab0u)) return;
    }
L_00156ab0:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 0);
    }
L_00156ab4:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x1cu);
    }
L_00156ab8:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 5u, &shc); cpu->r[6] = v;
    }
L_00156abc:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 5u, &shc); cpu->r[0] = v;
    }
L_00156ac0:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], shifter(cpu->r[5], 2, 2u, &shc), 1, 0);
    }
L_00156ac4:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[1], 2, 2u, &shc), 1, 0);
    }
L_00156ac8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], cpu->r[6], 0, 0);
    }
L_00156acc:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], cpu->r[0], 0, 0);
    }
L_00156ad0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_00156ad4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[2]);
    }
L_00156ad8:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[1] + + 0x8u);
    }
L_00156adc:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[1]);
    }
L_00156ae0:;
    {
        vfp_vsub(cpu, 12, 12, 15);
    }
L_00156ae4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_00156ae8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_00156aec:;
    {
        vfp_vsub(cpu, 14, 11, 14);
    }
L_00156af0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 12);
    }
L_00156af4:;
    {
        vfp_vsub(cpu, 15, 13, 15);
    }
L_00156af8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00156afc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00156b00:;
    {
        goto L_00156930;
    }
L_00156b04:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00156b0cu);
    }
L_00156b08:;
    {
        goto L_00156a24;
    }
}

/* _ZN6CTrail8AddPointER8Vector3dS1_ @ 00156b1c (arm) */
void fn_00156b1c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00156b1c:;
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
L_00156b20:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_00156b24:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000030u, 0, 0);
    }
L_00156b28:;
    {
        cpu->r[9] = rd32(cpu->r[0] + + 0x8u);
    }
L_00156b2c:;
    {
        cpu->r[11] = cpu->r[0];
    }
L_00156b30:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[1]);
    }
L_00156b34:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_00156b38:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[9], 0x00000001u, 1, 0);
    }
L_00156b3c:;
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
L_00156b40:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00156b44:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_00156b48:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00156c5c;
        }
    }
L_00156b4c:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[9], 0x00000002u, 1, 0);
    }
L_00156b50:;
    {
        cpu->r[3] = rd32(cpu->r[11] + + 0x24u);
    }
L_00156b54:;
    {
        uint32_t v = shifter(cpu->r[9], 2, 5u, &shc); cpu->r[6] = v;
    }
L_00156b58:;
    {
        cpu->r[12] = rd32(cpu->r[11] + + 0x1cu);
    }
L_00156b5c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], shifter(cpu->r[4], 2, 1u, &shc), 0, 0);
    }
L_00156b60:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], shifter(cpu->r[5], 2, 1u, &shc), 0, 0);
    }
L_00156b64:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[6], shifter(cpu->r[9], 2, 2u, &shc), 1, 0);
    }
L_00156b68:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[3], shifter(cpu->r[4], 2, 4u, &shc), 0, 0);
    }
L_00156b6c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[3], shifter(cpu->r[5], 2, 4u, &shc), 0, 0);
    }
L_00156b70:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[12], cpu->r[6], 0, 0);
    }
L_00156b74:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000018u, 0, 0);
    }
L_00156b78:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[12]);
    }
L_00156b7c:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[6], 0x00000038u, 1, 0);
    }
L_00156b80:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[6], 0x0000001cu, 1, 0);
    }
L_00156b84:;
    {
        cpu->r[6] = cpu->r[12];
    }
L_00156b88:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[4], 0x00000018u, 1, 0);
    }
L_00156b8c:;
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
L_00156b90:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[5], 0x00000018u, 0, 0);
    }
L_00156b94:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[9], 0x00000001u, 1, 0);
    }
L_00156b98:;
    {
        sub_flags(cpu, cpu->r[9], 0x00000001u, 1, 1);
    }
L_00156b9c:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[12] = base + 16u;
    }
L_00156ba0:;
    {
        uint32_t base = cpu->r[7];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_00156ba4:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_00156ba8:;
    {
        cpu->r[12] = cpu->r[5];
    }
L_00156bac:;
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
L_00156bb0:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000030u, 1, 0);
    }
L_00156bb4:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[12] = base + 16u;
    }
L_00156bb8:;
    {
        uint32_t base = cpu->r[8];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_00156bbc:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_00156bc0:;
    {
        cpu->r[12] = cpu->r[4];
    }
L_00156bc4:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000030u, 1, 0);
    }
L_00156bc8:;
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
L_00156bcc:;
    {
        uint32_t base = cpu->r[10];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
        wr32(ea + 12u, cpu->r[3]);
        cpu->r[10] = base + 16u;
    }
L_00156bd0:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
    }
L_00156bd4:;
    {
        uint32_t base = cpu->r[10];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
    }
L_00156bd8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00156b7c;
        }
    }
L_00156bdc:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base + 4;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        cpu->r[3] = v0;
        cpu->r[4] = v1;
    }
L_00156be0:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_00156be4:;
    {
        cpu->r[3] = rd32(cpu->r[11]);
    }
L_00156be8:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], 0x0000000cu, 0, 0);
    }
L_00156bec:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_00156bf0:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0xcu);
    }
L_00156bf4:;
    {
        uint32_t base = cpu->r[4];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_00156bf8:;
    {
        cpu->r[4] = rd32(cpu->r[11] + + 0x2cu);
    }
L_00156bfc:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_00156c00:;
    {
        cpu->r[3] = rd32(cpu->r[11] + + 0x8u);
    }
L_00156c04:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00156c08:;
    {
        wr32(cpu->r[11] + + 0x2cu, cpu->r[4]);
    }
L_00156c0c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_00156c10:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[3] = cpu->r[4];
        }
    }
L_00156c14:;
    {
        if (cond_test(cpu, 13)) {
        wr32(cpu->r[11] + + 0x2cu, cpu->r[3]);
        }
    }
L_00156c18:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000002u, 1, 1);
    }
L_00156c1c:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_00156c20:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00156c48;
        }
    }
L_00156c24:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_00156c28:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00156c40;
        }
    }
L_00156c2c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00156c30:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00156c34:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00156c38:;
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
L_00156c3c:;
    {
        return fn_001568d0(cpu);
    }
L_00156c40:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00156c44:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00156c48u)) return;
    }
L_00156c48:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00156c4c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00156c50:;
    {
        cpu->r[14] = 0x00156c54u; fn_001568d0(cpu);
    }
L_00156c54:;
    {
        cpu->r[3] = rd32(cpu->r[11] + + 0x2cu);
    }
L_00156c58:;
    {
        goto L_00156c24;
    }
L_00156c5c:;
    {
        cpu->r[2] = rd32(cpu->r[11] + + 0x1cu);
    }
L_00156c60:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[2]);
    }
L_00156c64:;
    {
        goto L_00156bdc;
    }
}

/* _ZN6CTrail6UpdateER8Vector3dS1_b @ 00156c68 (arm) */
void fn_00156c68(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00156c68:;
    {
        cpu->r[12] = rd32(0x00156c70u + + 0x10cu);
    }
L_00156c6c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00156c70:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00156c74:;
    {
        cpu->r[0] = rd32(0x00156c7cu + + 0x104u);
    }
L_00156c78:;
    {
        cpu->r[12] = add_flags(cpu, 0x00156c80u, cpu->r[12], 0, 0);
    }
L_00156c7c:;
    {
        cpu->r[5] = 0x00008c50u;
    }
L_00156c80:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000008u, 1, 0);
    }
L_00156c84:;
    {
        cpu->r[5] = (cpu->r[5] & 0xffffu) | (0x0001u << 16);
    }
L_00156c88:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_00156c8c:;
    {
        cpu->r[12] = cpu->r[2];
    }
L_00156c90:;
    {
        cpu->r[2] = 0x00001bc8u;
    }
L_00156c94:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_00156c98:;
    {
        cpu->r[0] = rd32(cpu->r[0] + cpu->r[2]);
    }
L_00156c9c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[5]);
    }
L_00156ca0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x8u);
    }
L_00156ca4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00006300u, 0, 0);
    }
L_00156ca8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000001eu, 0, 0);
    }
L_00156cac:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_00156cb0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x4u);
    }
L_00156cb4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00156cb8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00156cd0;
        }
    }
L_00156cbc:;
    {
        cpu->r[0] = 0x00001788u;
    }
L_00156cc0:;
    {
        cpu->r[2] = rd32(cpu->r[2] + cpu->r[0]);
    }
L_00156cc4:;
    {
        { uint32_t v = cpu->r[2] & 0x00000008u; set_nz(cpu, v); }
    }
L_00156cc8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00156ccc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00156d0c;
        }
    }
L_00156cd0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x2cu);
    }
L_00156cd4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 1);
    }
L_00156cd8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00156cfc;
        }
    }
L_00156cdc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00156ce0:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[1]);
    }
L_00156ce4:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[4] + + 0x30u);
    }
L_00156ce8:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[1] + + 0x4u);
    }
L_00156cec:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x34u);
    }
L_00156cf0:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[1] + + 0x8u);
    }
L_00156cf4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x38u);
    }
L_00156cf8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00156d14;
        }
    }
L_00156cfc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00156d00:;
    {
        cpu->r[2] = cpu->r[12];
    }
L_00156d04:;
    {
        cpu->r[14] = 0x00156d08u; fn_00156b1c(cpu);
    }
L_00156d08:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00156d0c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000008u, 0, 0);
    }
L_00156d10:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00156d14u)) return;
    }
L_00156d14:;
    {
        vfp_vsub(cpu, 15, 10, 15);
    }
L_00156d18:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[4] + + 0x48u);
    }
L_00156d1c:;
    {
        vfp_vmul(cpu, 15, 15, 15);
    }
L_00156d20:;
    {
        vfp_vsub(cpu, 12, 11, 12);
    }
L_00156d24:;
    {
        vfp_vmla(cpu, 15, 12, 12);
    }
L_00156d28:;
    {
        vfp_vsub(cpu, 14, 13, 14);
    }
L_00156d2c:;
    {
        vfp_vmla(cpu, 15, 14, 14);
    }
L_00156d30:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,10);
    }
L_00156d34:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_00156d38:;
    {
        vfp_sync_flags(cpu);
    }
L_00156d3c:;
    {
        if (cond_test(cpu, 5)) {
        goto L_00156cfc;
        }
    }
L_00156d40:;
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
L_00156d44:;
    {
        cpu->r[14] = rd32(cpu->r[4] + + 0x1cu);
    }
L_00156d48:;
    {
        cpu->r[6] = rd32(cpu->r[4]);
    }
L_00156d4c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[14], 0x0000000cu, 0, 0);
    }
L_00156d50:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[3]);
    }
L_00156d54:;
    {
        uint32_t base = cpu->r[14];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_00156d58:;
    {
        wr32(cpu->r[14] + + 0x18u, cpu->r[6]);
    }
L_00156d5c:;
    {
        uint32_t base = cpu->r[12];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_00156d60:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_00156d64:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00156d68:;
    {
        cpu->r[1] = cpu->r[3];
    }
L_00156d6c:;
    {
        cpu->r[14] = 0x00156d70u; fn_001568d0(cpu);
    }
L_00156d70:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x4u);
    }
L_00156d74:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00156d78:;
    {
        goto L_00156d0c;
    }
}

/* _ZN6CTrail6RenderEv @ 00156d84 (arm) */
void fn_00156d84(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00156d84:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00156d88:;
    {
        cpu->r[5] = rd32(0x00156d90u + + 0x2a8u);
    }
L_00156d8c:;
    {
        cpu->r[7] = rd32(0x00156d94u + + 0x2a8u);
    }
L_00156d90:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00156d94:;
    {
        cpu->r[5] = add_flags(cpu, 0x00156d9cu, cpu->r[5], 0, 0);
    }
L_00156d98:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
    }
L_00156d9c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00156da0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00156da4:;
    {
        cpu->r[6] = rd32(cpu->r[3]);
    }
L_00156da8:;
    {
        cpu->r[3] = 0x00001314u;
    }
L_00156dac:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_00156db0:;
    {
        *vfp_s(cpu, 10) = *(float*)G(cpu->r[3] + + 0xc0u);
    }
L_00156db4:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[3] + + 0x48u);
    }
L_00156db8:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[3] + + 0x84u);
    }
L_00156dbc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00156dc0u)) return;
        }
    }
L_00156dc0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x1cu);
    }
L_00156dc4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00156dc8:;
    {
        *vfp_s(cpu, 9) = *(float*)G(0x00156dd0u + + 0x264u);
    }
L_00156dcc:;
    {
        cpu->r[1] = rd32(cpu->r[3] + + 0x18u);
    }
L_00156dd0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00156dd4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00156dd8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00156e0c;
        }
    }
L_00156ddc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3] + + 0x4u);
    }
L_00156de0:;
    {
        vfp_vsub(cpu, 15, 15, 11);
    }
L_00156de4:;
    {
        *vfp_s(cpu, 13) = *(float*)G(cpu->r[3]);
    }
L_00156de8:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3] + + 0x8u);
    }
L_00156dec:;
    {
        vfp_vmul(cpu, 15, 15, 15);
    }
L_00156df0:;
    {
        vfp_vsub(cpu, 13, 13, 12);
    }
L_00156df4:;
    {
        vfp_vmla(cpu, 15, 13, 13);
    }
L_00156df8:;
    {
        vfp_vsub(cpu, 14, 14, 10);
    }
L_00156dfc:;
    {
        vfp_vmla(cpu, 15, 14, 14);
    }
L_00156e00:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,9));
    }
L_00156e04:;
    {
        vfp_sync_flags(cpu);
    }
L_00156e08:;
    {
        if (cond_test(cpu, 5)) {
        goto L_00156e1c;
        }
    }
L_00156e0c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[0], 1, 1);
    }
L_00156e10:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001cu, 0, 0);
    }
L_00156e14:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00156dcc;
        }
    }
L_00156e18:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00156e1cu)) return;
    }
L_00156e1c:;
    {
        cpu->r[2] = 0x0000128cu;
    }
L_00156e20:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x44u);
    }
L_00156e24:;
    {
        cpu->r[8] = 0x00001288u;
    }
L_00156e28:;
    {
        cpu->r[1] = rd32(cpu->r[6] + cpu->r[2]);
    }
L_00156e2c:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_00156e30:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00156e34:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = cpu->r[3];
        }
    }
L_00156e38:;
    {
        cpu->r[14] = 0x00156e3cu; fn_0014814c(cpu);
    }
L_00156e3c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_00156e40:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0xcu);
    }
L_00156e44:;
    {
        cpu->r[14] = 0x00156e48u; fn_00147a48(cpu);
    }
L_00156e48:;
    {
        cpu->r[3] = 0x000011e8u;
    }
L_00156e4c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + cpu->r[3]);
    }
L_00156e50:;
    {
        cpu->r[8] = cpu->r[0];
    }
L_00156e54:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00156e58:;
    {
        cpu->r[3] = rd32(cpu->r[3]);
    }
L_00156e5c:;
    {
        cpu->r[14] = 0x00156e64u;
    }
L_00156e60:;
    {
        uint32_t t = rd32(cpu->r[3] + + 0x1cu);
        if (guest_pc_write(cpu, t, entry_lr, 0x00156e64u)) return;
    }
L_00156e64:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x3cu);
    }
L_00156e68:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00156e6c:;
    {
        if (cond_test(cpu, 11)) {
        sub_flags(cpu, cpu->r[8], 0x00000000u, 1, 1);
        }
    }
L_00156e70:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00156fb8;
        }
    }
L_00156e74:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x40u);
    }
L_00156e78:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00156e7c:;
    {
        if (cond_test(cpu, 11)) {
        sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 1);
        }
    }
L_00156e80:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00156ffc;
        }
    }
L_00156e84:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x2cu);
    }
L_00156e88:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00156e8c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00156e90:;
    {
        cpu->r[6] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00156e94:;
    {
        cpu->r[14] = 0x00156e98u; fn_0012e824(cpu);
    }
L_00156e98:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], shifter(cpu->r[6], 2, 1u, &shc), 0, 0);
    }
L_00156e9c:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 1u, &shc); cpu->r[6] = v;
    }
L_00156ea0:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_00156ea4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00156ea8u)) return;
        }
    }
L_00156ea8:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00156eac:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00156eb0:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_00156eb4:;
    {
        cpu->r[14] = 0x00156eb8u; fn_0012e1c8(cpu);
    }
L_00156eb8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_00156ebc:;
    {
        cpu->r[0] = 0x00000003u;
    }
L_00156ec0:;
    {
        cpu->r[1] = 0x00001406u;
    }
L_00156ec4:;
    {
        cpu->r[2] = 0x00000018u;
    }
L_00156ec8:;
    {
        cpu->r[14] = 0x00156eccu; imp_glVertexPointer(cpu); /* glVertexPointer */
    }
L_00156ecc:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x3cu);
    }
L_00156ed0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00156ed4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00156f08;
        }
    }
L_00156ed8:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_00156edc:;
    {
        cpu->r[1] = 0x000084c0u;
    }
L_00156ee0:;
    {
        cpu->r[14] = 0x00156ee4u; fn_0012e124(cpu);
    }
L_00156ee4:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_00156ee8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00156eec:;
    {
        cpu->r[14] = 0x00156ef0u; fn_0012e150(cpu);
    }
L_00156ef0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_00156ef4:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_00156ef8:;
    {
        cpu->r[1] = 0x00001406u;
    }
L_00156efc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_00156f00:;
    {
        cpu->r[2] = 0x00000018u;
    }
L_00156f04:;
    {
        cpu->r[14] = 0x00156f08u; imp_glTexCoordPointer(cpu); /* glTexCoordPointer */
    }
L_00156f08:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x40u);
    }
L_00156f0c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00156f10:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00156f48;
        }
    }
L_00156f14:;
    {
        cpu->r[8] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00156f18:;
    {
        cpu->r[1] = 0x000084c1u;
    }
L_00156f1c:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_00156f20:;
    {
        cpu->r[14] = 0x00156f24u; fn_0012e124(cpu);
    }
L_00156f24:;
    {
        cpu->r[0] = rd32(cpu->r[8]);
    }
L_00156f28:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00156f2c:;
    {
        cpu->r[14] = 0x00156f30u; fn_0012e150(cpu);
    }
L_00156f30:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_00156f34:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_00156f38:;
    {
        cpu->r[1] = 0x00001406u;
    }
L_00156f3c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_00156f40:;
    {
        cpu->r[2] = 0x00000018u;
    }
L_00156f44:;
    {
        cpu->r[14] = 0x00156f48u; imp_glTexCoordPointer(cpu); /* glTexCoordPointer */
    }
L_00156f48:;
    {
        cpu->r[5] = rd32(cpu->r[5] + cpu->r[7]);
    }
L_00156f4c:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00156f50:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_00156f54:;
    {
        cpu->r[14] = 0x00156f58u; fn_0012e19c(cpu);
    }
L_00156f58:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x24u);
    }
L_00156f5c:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_00156f60:;
    {
        cpu->r[1] = 0x00001401u;
    }
L_00156f64:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000014u, 0, 0);
    }
L_00156f68:;
    {
        cpu->r[2] = 0x00000018u;
    }
L_00156f6c:;
    {
        cpu->r[14] = 0x00156f70u; imp_glColorPointer(cpu); /* glColorPointer */
    }
L_00156f70:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x28u);
    }
L_00156f74:;
    {
        cpu->r[2] = 0x00001403u;
    }
L_00156f78:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_00156f7c:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_00156f80:;
    {
        cpu->r[14] = 0x00156f84u; imp_glDrawElements(cpu); /* glDrawElements */
    }
L_00156f84:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_00156f88:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00156f8c:;
    {
        cpu->r[14] = 0x00156f90u; fn_0012e1c8(cpu);
    }
L_00156f90:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_00156f94:;
    {
        cpu->r[1] = 0x000084c0u;
    }
L_00156f98:;
    {
        cpu->r[14] = 0x00156f9cu; fn_0012e124(cpu);
    }
L_00156f9c:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_00156fa0:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00156fa4:;
    {
        cpu->r[14] = 0x00156fa8u; fn_0012e150(cpu);
    }
L_00156fa8:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_00156fac:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00156fb0:;
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
L_00156fb4:;
    {
        return fn_0012e19c(cpu);
    }
L_00156fb8:;
    {
        cpu->r[3] = rd32(0x00156fc0u + + 0x80u);
    }
L_00156fbc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00156fc0:;
    {
        cpu->r[1] = (uint32_t)((uint16_t)cpu->r[1]);
    }
L_00156fc4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00156fc8:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00156fcc:;
    {
        cpu->r[14] = 0x00156fd0u; fn_00135cf4(cpu);
    }
L_00156fd0:;
    {
        cpu->r[2] = rd32(cpu->r[0]);
    }
L_00156fd4:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00156fd8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00156e74;
        }
    }
L_00156fdc:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00156fe0:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00156fe4:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_00156fe8:;
    {
        cpu->r[14] = 0x00156fecu; fn_0012f12c(cpu);
    }
L_00156fec:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x40u);
    }
L_00156ff0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00156ff4:;
    {
        if (cond_test(cpu, 11)) {
        sub_flags(cpu, cpu->r[8], 0x00000001u, 1, 1);
        }
    }
L_00156ff8:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00156e84;
        }
    }
L_00156ffc:;
    {
        cpu->r[3] = rd32(0x00157004u + + 0x3cu);
    }
L_00157000:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00157004:;
    {
        cpu->r[1] = (uint32_t)((uint16_t)cpu->r[1]);
    }
L_00157008:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0015700c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00157010:;
    {
        cpu->r[14] = 0x00157014u; fn_00135cf4(cpu);
    }
L_00157014:;
    {
        cpu->r[2] = rd32(cpu->r[0]);
    }
L_00157018:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0015701c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00156e84;
        }
    }
L_00157020:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00157024:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00157028:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0015702c:;
    {
        cpu->r[14] = 0x00157030u; fn_0012f12c(cpu);
    }
L_00157030:;
    {
        goto L_00156e84;
    }
}

/* _ZN6CTrail7CleanUpEv @ 00157044 (arm) */
void fn_00157044(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00157044:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00157048:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0015704c:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x1cu);
    }
L_00157050:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00157054:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00157064;
        }
    }
L_00157058:;
    {
        cpu->r[14] = 0x0015705cu; fn_0018ba60(cpu);
    }
L_0015705c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00157060:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[3]);
    }
L_00157064:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x24u);
    }
L_00157068:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0015706c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015707c;
        }
    }
L_00157070:;
    {
        cpu->r[14] = 0x00157074u; fn_0018ba60(cpu);
    }
L_00157074:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00157078:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[3]);
    }
L_0015707c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x28u);
    }
L_00157080:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00157084:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00157094;
        }
    }
L_00157088:;
    {
        cpu->r[14] = 0x0015708cu; fn_0018ba60(cpu);
    }
L_0015708c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00157090:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[3]);
    }
L_00157094:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00157098:;
    {
        cpu->r[2] = 0x000001c2u;
    }
L_0015709c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001570a4u + + 0x24u);
    }
L_001570a0:;
    {
        wr32(cpu->r[4] + + 0x2cu, cpu->r[3]);
    }
L_001570a4:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_001570a8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001570ac:;
    {
        wr32(cpu->r[4], cpu->r[2]);
    }
L_001570b0:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_001570b4:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_001570b8:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_001570bc:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[3]);
    }
L_001570c0:;
    {
        wr32(cpu->r[4] + + 0x20u, cpu->r[3]);
    }
L_001570c4:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001570c8u)) return;
    }
}

/* _ZN6CTrailD1Ev @ 001570cc (arm) */
void fn_001570cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001570cc:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001570d0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001570d4:;
    {
        cpu->r[14] = 0x001570d8u; fn_00157044(cpu);
    }
L_001570d8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001570dc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001570e0u)) return;
    }
}

/* _ZN6CTrailD2Ev @ 001570e0 (arm) */
void fn_001570e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001570e0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_001570e4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001570e8:;
    {
        cpu->r[14] = 0x001570ecu; fn_00157044(cpu);
    }
L_001570ec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001570f0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x001570f4u)) return;
    }
}

/* _ZN6CTrail4InitEiiiifii @ 001570f4 (arm) */
void fn_001570f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001570f4:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001570f8:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x24u);
    }
L_001570fc:;
    {
        cpu->r[7] = rd32(cpu->r[13] + + 0x20u);
    }
L_00157100:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00157104:;
    {
        cpu->r[6] = rd32(0x0015710cu + + 0x174u);
    }
L_00157108:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_0015710c:;
    {
        uint32_t v = cpu->r[12] * cpu->r[12]; cpu->r[12] = v;
    }
L_00157110:;
    {
        cpu->r[6] = add_flags(cpu, 0x00157118u, cpu->r[6], 0, 0);
    }
L_00157114:;
    {
        wr32(cpu->r[0] + + 0x44u, cpu->r[2]);
    }
L_00157118:;
    {
        cpu->r[5] = cpu->r[1];
    }
L_0015711c:;
    {
        wr32(cpu->r[0] + + 0x3cu, cpu->r[3]);
    }
L_00157120:;
    {
        wr32(cpu->r[0] + + 0x40u, cpu->r[7]);
    }
L_00157124:;
    {
        wr32(cpu->r[0] + + 0x48u, cpu->r[12]);
    }
L_00157128:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00157148;
        }
    }
L_0015712c:;
    {
        cpu->r[0] = rd32(0x00157134u + + 0x150u);
    }
L_00157130:;
    {
        cpu->r[1] = (uint32_t)((uint16_t)cpu->r[3]);
    }
L_00157134:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_00157138:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0015713c:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[0]);
    }
L_00157140:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_00157144:;
    {
        cpu->r[14] = 0x00157148u; fn_00135d9c(cpu);
    }
L_00157148:;
    {
        sub_flags(cpu, cpu->r[7], 0x00000000u, 1, 1);
    }
L_0015714c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0015716c;
        }
    }
L_00157150:;
    {
        cpu->r[0] = rd32(0x00157158u + + 0x12cu);
    }
L_00157154:;
    {
        cpu->r[1] = (uint32_t)((uint16_t)cpu->r[7]);
    }
L_00157158:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_0015715c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00157160:;
    {
        cpu->r[0] = rd32(cpu->r[6] + cpu->r[0]);
    }
L_00157164:;
    {
        cpu->r[0] = rd32(cpu->r[0]);
    }
L_00157168:;
    {
        cpu->r[14] = 0x0015716cu; fn_00135d9c(cpu);
    }
L_0015716c:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x18u);
    }
L_00157170:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 0);
    }
L_00157174:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 5u, &shc); cpu->r[0] = v;
    }
L_00157178:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x1cu);
    }
L_0015717c:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[5]);
    }
L_00157180:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00157184:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00157188:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 1u, &shc); cpu->r[3] = v;
    }
L_0015718c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[2], 2, 2u, &shc), 0, 0);
    }
L_00157190:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_00157194:;
    {
        wr32(cpu->r[4] + + 0x18u, cpu->r[1]);
    }
L_00157198:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 1u, &shc); cpu->r[3] = v;
    }
L_0015719c:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[2]);
    }
L_001571a0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[0], shifter(cpu->r[5], 2, 2u, &shc), 1, 0);
    }
L_001571a4:;
    {
        wr32(cpu->r[4] + + 0x14u, cpu->r[3]);
    }
L_001571a8:;
    {
        cpu->r[14] = 0x001571acu; imp__Znaj(cpu); /* _Znaj */
    }
L_001571ac:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001571b0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001571f0;
        }
    }
L_001571b4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001571b8:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001571bc:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_001571c0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001571c8u + + 0xb4u);
    }
L_001571c4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001571c8:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001571cc:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_001571d0:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001571d4:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001571d8:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001571dc:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001571e0:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001571e4:;
    {
        wr32(cpu->r[3] + + 0x18u, cpu->r[1]);
    }
L_001571e8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000001cu, 0, 0);
    }
L_001571ec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001571c4;
        }
    }
L_001571f0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x14u);
    }
L_001571f4:;
    {
        wr32(cpu->r[4] + + 0x1cu, cpu->r[0]);
    }
L_001571f8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_001571fc:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 3u, &shc); cpu->r[0] = v;
    }
L_00157200:;
    {
        cpu->r[14] = 0x00157204u; imp__Znaj(cpu); /* _Znaj */
    }
L_00157204:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x18u);
    }
L_00157208:;
    {
        wr32(cpu->r[4] + + 0x24u, cpu->r[0]);
    }
L_0015720c:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[0] = v;
    }
L_00157210:;
    {
        cpu->r[14] = 0x00157214u; imp__Znaj(cpu); /* _Znaj */
    }
L_00157214:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_00157218:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 1);
    }
L_0015721c:;
    {
        wr32(cpu->r[4] + + 0x28u, cpu->r[0]);
    }
L_00157220:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00157274;
        }
    }
L_00157224:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 1u, &shc), 0, 0);
    }
L_00157228:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0015722c:;
    {
        uint32_t v = shifter(cpu->r[12], 2, 2u, &shc); cpu->r[12] = v;
    }
L_00157230:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x0000000cu, 1, 0);
    }
L_00157234:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[0], cpu->r[12], 0, 0);
    }
L_00157238:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x00000002u, 0, 0);
    }
L_0015723c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00157240:;
    {
        wr16(cpu->r[0], cpu->r[3]);
    }
L_00157244:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000003u, 0, 0);
    }
L_00157248:;
    {
        cpu->r[2] = (uint32_t)((uint16_t)cpu->r[2]);
    }
L_0015724c:;
    {
        wr16(cpu->r[0] + + 0x6u, cpu->r[3]);
    }
L_00157250:;
    {
        wr16(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_00157254:;
    {
        cpu->r[3] = (uint32_t)((uint16_t)cpu->r[1]);
    }
L_00157258:;
    {
        wr16(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_0015725c:;
    {
        wr16(cpu->r[0] + + 0xau, cpu->r[3]);
    }
L_00157260:;
    {
        wr16(cpu->r[0] + + 0x2u, cpu->r[3]);
    }
L_00157264:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_00157268:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[12], 1, 1);
    }
L_0015726c:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_00157270:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00157238;
        }
    }
L_00157274:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_00157278:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015727cu)) return;
    }
}

/* _ZN13CTrailManagerC2Ev @ 00157288 (arm) */
void fn_00157288(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00157288:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_0015728c:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_00157290:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_00157294:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_00157298:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CTrailManagerC1Ev @ 0015729c (arm) */
void fn_0015729c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015729c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001572a0:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[2]);
    }
L_001572a4:;
    {
        wr32(cpu->r[0], cpu->r[2]);
    }
L_001572a8:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[2]);
    }
L_001572ac:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN13CTrailManager14AllocTrailListEPP6CTraili @ 001572b0 (arm) */
void fn_001572b0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001572b0:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[10]);
    }
L_001572b4:;
    {
        cpu->r[6] = rd32(cpu->r[0]);
    }
L_001572b8:;
    {
        sub_flags(cpu, cpu->r[6], 0x00000000u, 1, 1);
    }
L_001572bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015737c;
        }
    }
L_001572c0:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0x8u);
    }
L_001572c4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001572c8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[8] = 0x00000000u;
        }
    }
L_001572cc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00157320;
        }
    }
L_001572d0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001572d4:;
    {
        cpu->r[10] = 0x00000001u;
    }
L_001572d8:;
    {
        cpu->r[8] = cpu->r[3];
    }
L_001572dc:;
    {
        cpu->r[4] = rd32(cpu->r[6] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_001572e0:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_001572e4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00157314;
        }
    }
L_001572e8:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x4u);
    }
L_001572ec:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[12], cpu->r[3], 0, 0);
    }
L_001572f0:;
    {
        cpu->r[12] = rd8(cpu->r[12] + cpu->r[3]);
    }
L_001572f4:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001572f8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00157314;
        }
    }
L_001572fc:;
    {
        cpu->r[12] = rd32(cpu->r[4] + + 0x1cu);
    }
L_00157300:;
    {
        cpu->r[12] = rd32(cpu->r[12] + + 0x18u);
    }
L_00157304:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00157308:;
    {
        if (cond_test(cpu, 14)) {
        wr32(cpu->r[1] + shifter(cpu->r[8], 2, 2u, &shc), cpu->r[4]);
        }
    }
L_0015730c:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000001u, 0, 0);
        }
    }
L_00157310:;
    {
        if (cond_test(cpu, 14)) {
        wr8(cpu->r[7], cpu->r[10]);
        }
    }
L_00157314:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00157318:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0015731c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001572dc;
        }
    }
L_00157320:;
    {
        sub_flags(cpu, cpu->r[8], cpu->r[2], 1, 1);
    }
L_00157324:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00157328:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00157380;
        }
    }
L_0015732c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00157330:;
    {
        if (cond_test(cpu, 13)) {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
        }
    }
L_00157334:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0015737c;
        }
    }
L_00157338:;
    {
        cpu->r[4] = rd32(cpu->r[1]);
    }
L_0015733c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00157340:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_00157344:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[12] = cpu->r[3];
        }
    }
L_00157348:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[8] = cpu->r[3];
        }
    }
L_0015734c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00157360;
        }
    }
L_00157350:;
    {
        goto L_0015737c;
    }
L_00157354:;
    {
        cpu->r[4] = rd32(cpu->r[1] + shifter(cpu->r[12], 2, 2u, &shc));
    }
L_00157358:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_0015735c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015737c;
        }
    }
L_00157360:;
    {
        cpu->r[7] = rd32(cpu->r[6] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_00157364:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[7], 1, 1);
    }
L_00157368:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00157388;
        }
    }
L_0015736c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00157370:;
    {
        sub_flags(cpu, cpu->r[12], cpu->r[2], 1, 1);
    }
L_00157374:;
    {
        if (cond_test(cpu, 12)) {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
        }
    }
L_00157378:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00157354;
        }
    }
L_0015737c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00157380:;
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
L_00157384:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00157388:;
    {
        cpu->r[4] = rd32(cpu->r[0] + + 0x4u);
    }
L_0015738c:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[12], 0x00000001u, 0, 0);
    }
L_00157390:;
    {
        wr8(cpu->r[4] + cpu->r[3], cpu->r[8]);
    }
L_00157394:;
    {
        goto L_0015736c;
    }
}

/* _ZN13CTrailManager9FreeTrailEP6CTrail @ 00157398 (arm) */
void fn_00157398(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00157398:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x8u);
    }
L_0015739c:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_001573a0:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001573a4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001573dc;
        }
    }
L_001573a8:;
    {
        cpu->r[4] = rd32(cpu->r[0]);
    }
L_001573ac:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001573b0:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001573b4:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[3] = 0x00000000u;
        }
    }
L_001573b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001573e4;
        }
    }
L_001573bc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001573c0:;
    {
        goto L_001573d0;
    }
L_001573c4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_001573c8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_001573cc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001573e4;
        }
    }
L_001573d0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001573d4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_001573d8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001573c4;
        }
    }
L_001573dc:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_001573e0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_001573e4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x4u);
    }
L_001573e8:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001573ec:;
    {
        wr8(cpu->r[2] + cpu->r[3], cpu->r[1]);
    }
L_001573f0:;
    {
        goto L_001573dc;
    }
}

/* _ZN13CTrailManager6RenderEv @ 001573f4 (arm) */
void fn_001573f4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001573f4:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8u);
    }
L_001573f8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001573fc:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00157400:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00157404:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00157408u)) return;
        }
    }
L_00157408:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0015740c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00157410:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_00157414:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00157418:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015741c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00157438;
        }
    }
L_00157420:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x1cu);
    }
L_00157424:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x18u);
    }
L_00157428:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015742c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00157438;
        }
    }
L_00157430:;
    {
        cpu->r[14] = 0x00157434u; fn_00156d84(cpu);
    }
L_00157434:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x8u);
    }
L_00157438:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_0015743c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0015740c;
        }
    }
L_00157440:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00157444u)) return;
    }
}

/* _ZN13CTrailManager6UpdateEv @ 00157444 (arm) */
void fn_00157444(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00157444:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8u);
    }
L_00157448:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0015744c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00157450:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00157454:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00157458u)) return;
        }
    }
L_00157458:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0015745c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00157460:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_00157464:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00157468:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015746c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00157478;
        }
    }
L_00157470:;
    {
        cpu->r[14] = 0x00157474u; fn_001567b4(cpu);
    }
L_00157474:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x8u);
    }
L_00157478:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_0015747c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0015745c;
        }
    }
L_00157480:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00157484u)) return;
    }
}

/* _ZN13CTrailManager5ResetEv @ 00157484 (arm) */
void fn_00157484(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00157484:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x8u);
    }
L_00157488:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0015748c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00157490:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00157494:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00157498u)) return;
        }
    }
L_00157498:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0015749c:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_001574a0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001574a4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001574a8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001574ac:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001574c8;
        }
    }
L_001574b0:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x1cu);
    }
L_001574b4:;
    {
        cpu->r[3] = rd32(cpu->r[3] + + 0x18u);
    }
L_001574b8:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001574bc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001574c8;
        }
    }
L_001574c0:;
    {
        cpu->r[14] = 0x001574c4u; fn_001568b4(cpu);
    }
L_001574c4:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x8u);
    }
L_001574c8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_001574cc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0015749c;
        }
    }
L_001574d0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001574d4u)) return;
    }
}

/* _ZN13CTrailManager10AllocTrailEb @ 001574d4 (arm) */
void fn_001574d4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001574d4:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x8u);
    }
L_001574d8:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001574dc:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001574e0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001574e4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_0015753c;
        }
    }
L_001574e8:;
    {
        cpu->r[5] = rd32(cpu->r[0]);
    }
L_001574ec:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001574f0:;
    {
        goto L_00157500;
    }
L_001574f4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001574f8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_001574fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015753c;
        }
    }
L_00157500:;
    {
        cpu->r[0] = rd32(cpu->r[5] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_00157504:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00157508:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001574f4;
        }
    }
L_0015750c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x4u);
    }
L_00157510:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_00157514:;
    {
        cpu->r[2] = rd8(cpu->r[2] + cpu->r[3]);
    }
L_00157518:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0015751c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001574f4;
        }
    }
L_00157520:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x1cu);
    }
L_00157524:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x18u);
    }
L_00157528:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0015752c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001574f4;
        }
    }
L_00157530:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00157534:;
    {
        wr8(cpu->r[6], cpu->r[3]);
    }
L_00157538:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015753cu)) return;
    }
L_0015753c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00157540:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015754c;
        }
    }
L_00157544:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00157548:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015754cu)) return;
    }
L_0015754c:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00157550:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00157544;
        }
    }
L_00157554:;
    {
        cpu->r[1] = 0x0000423fu;
    }
L_00157558:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_0015755c:;
    {
        cpu->r[1] = (cpu->r[1] & 0xffffu) | (0x000fu << 16);
    }
L_00157560:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00157564:;
    {
        cpu->r[5] = (~0x00000000u);
    }
L_00157568:;
    {
        cpu->r[2] = rd32(cpu->r[0] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_0015756c:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x1cu);
    }
L_00157570:;
    {
        cpu->r[2] = rd32(cpu->r[2] + + 0x18u);
    }
L_00157574:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_00157578:;
    {
        if (cond_test(cpu, 13)) {
        cpu->r[5] = cpu->r[3];
        }
    }
L_0015757c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00157580:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[2] = cpu->r[1];
        }
    }
L_00157584:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[12], 1, 1);
    }
L_00157588:;
    {
        cpu->r[1] = cpu->r[2];
    }
L_0015758c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00157568;
        }
    }
L_00157590:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00157594:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00157544;
        }
    }
L_00157598:;
    {
        cpu->r[0] = rd32(cpu->r[0] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_0015759c:;
    {
        cpu->r[14] = 0x001575a0u; fn_001568b4(cpu);
    }
L_001575a0:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_001575a4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_001575a8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001575acu)) return;
    }
}

/* _ZN13CTrailManager4InitEiiiiifii @ 001575ac (arm) */
void fn_001575ac(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001575ac:;
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
L_001575b0:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_001575b4:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_001575b8:;
    {
        *vfp_s(cpu, 16) = *(float*)G(cpu->r[13] + + 0x48u);
    }
L_001575bc:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001575c0:;
    {
        cpu->r[0] = cpu->r[1];
    }
L_001575c4:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_001575c8:;
    {
        cpu->r[7] = cpu->r[3];
    }
L_001575cc:;
    {
        uint32_t v = shifter(cpu->r[1], 2, 2u, &shc); cpu->r[5] = v;
    }
L_001575d0:;
    {
        cpu->r[8] = cpu->r[2];
    }
L_001575d4:;
    {
        cpu->r[9] = rd32(cpu->r[13] + + 0x40u);
    }
L_001575d8:;
    {
        cpu->r[11] = rd32(cpu->r[13] + + 0x4cu);
    }
L_001575dc:;
    {
        cpu->r[10] = rd32(cpu->r[13] + + 0x50u);
    }
L_001575e0:;
    {
        cpu->r[14] = 0x001575e4u; imp__Znaj(cpu); /* _Znaj */
    }
L_001575e4:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_001575e8:;
    {
        cpu->r[2] = cpu->r[4];
    }
L_001575ec:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[0]);
    }
L_001575f0:;
    {
        cpu->r[14] = 0x001575f4u; imp_memset(cpu); /* memset */
    }
L_001575f4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001575f8:;
    {
        cpu->r[14] = 0x001575fcu; imp__Znaj(cpu); /* _Znaj */
    }
L_001575fc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00157600:;
    {
        wr32(cpu->r[6], cpu->r[0]);
    }
L_00157604:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00157690;
        }
    }
L_00157608:;
    {
        wr32(cpu->r[6] + + 0x8u, cpu->r[4]);
    }
L_0015760c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00157610:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00157614:;
    {
        cpu->r[14] = 0x00157618u; imp_memset(cpu); /* memset */
    }
L_00157618:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_0015761c:;
    {
        wr32(cpu->r[6] + + 0xcu, cpu->r[10]);
    }
L_00157620:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00157624:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001576a0;
        }
    }
L_00157628:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0015762c:;
    {
        goto L_0015765c;
    }
L_00157630:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0x44u);
    }
L_00157634:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 16);
    }
L_00157638:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[11]);
    }
L_0015763c:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[10]);
    }
L_00157640:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00157644:;
    {
        cpu->r[14] = 0x00157648u; fn_001570f4(cpu);
    }
L_00157648:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0015764c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00157690;
        }
    }
L_00157650:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x8u);
    }
L_00157654:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_00157658:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001576a0;
        }
    }
L_0015765c:;
    {
        cpu->r[0] = 0x00000050u;
    }
L_00157660:;
    {
        cpu->r[14] = 0x00157664u; fn_0018ba6c(cpu);
    }
L_00157664:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00157668:;
    {
        cpu->r[14] = 0x0015766cu; fn_00156718(cpu);
    }
L_0015766c:;
    {
        cpu->r[12] = rd32(cpu->r[6]);
    }
L_00157670:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00157674:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00157678:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_0015767c:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00157680:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_00157684:;
    {
        wr32(cpu->r[12] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[5]);
    }
L_00157688:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0015768c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00157630;
        }
    }
L_00157690:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00157694:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00157698:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_0015769c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001576a0u)) return;
    }
L_001576a0:;
    {
        cpu->r[0] = 0x00000001u;
    }
L_001576a4:;
    {
        goto L_00157694;
    }
}

/* _ZN13CTrailManagerD1Ev @ 001576a8 (arm) */
void fn_001576a8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001576a8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001576ac:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001576b0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_001576b4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001576b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001576c8;
        }
    }
L_001576bc:;
    {
        cpu->r[14] = 0x001576c0u; fn_0018ba60(cpu);
    }
L_001576c0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001576c4:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[3]);
    }
L_001576c8:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_001576cc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001576d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00157730;
        }
    }
L_001576d4:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x8u);
    }
L_001576d8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001576dc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00157720;
        }
    }
L_001576e0:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001576e4:;
    {
        cpu->r[7] = cpu->r[4];
    }
L_001576e8:;
    {
        cpu->r[5] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_001576ec:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001576f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015770c;
        }
    }
L_001576f4:;
    {
        cpu->r[14] = 0x001576f8u; fn_001570cc(cpu);
    }
L_001576f8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001576fc:;
    {
        cpu->r[14] = 0x00157700u; fn_0018ba20(cpu);
    }
L_00157700:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_00157704:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x8u);
    }
L_00157708:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[7]);
    }
L_0015770c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00157710:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_00157714:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001576e8;
        }
    }
L_00157718:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015771c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00157728;
        }
    }
L_00157720:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00157724:;
    {
        cpu->r[14] = 0x00157728u; fn_0018ba60(cpu);
    }
L_00157728:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0015772c:;
    {
        wr32(cpu->r[6], cpu->r[3]);
    }
L_00157730:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00157734:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00157738:;
    {
        wr32(cpu->r[6] + + 0x8u, cpu->r[3]);
    }
L_0015773c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00157740u)) return;
    }
}

/* _ZN13CTrailManagerD2Ev @ 00157740 (arm) */
void fn_00157740(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00157740:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00157744:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00157748:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_0015774c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00157750:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00157760;
        }
    }
L_00157754:;
    {
        cpu->r[14] = 0x00157758u; fn_0018ba60(cpu);
    }
L_00157758:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0015775c:;
    {
        wr32(cpu->r[6] + + 0x4u, cpu->r[3]);
    }
L_00157760:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_00157764:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00157768:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001577c8;
        }
    }
L_0015776c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x8u);
    }
L_00157770:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00157774:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001577b8;
        }
    }
L_00157778:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_0015777c:;
    {
        cpu->r[7] = cpu->r[4];
    }
L_00157780:;
    {
        cpu->r[5] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_00157784:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00157788:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001577a4;
        }
    }
L_0015778c:;
    {
        cpu->r[14] = 0x00157790u; fn_001570cc(cpu);
    }
L_00157790:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00157794:;
    {
        cpu->r[14] = 0x00157798u; fn_0018ba20(cpu);
    }
L_00157798:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_0015779c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x8u);
    }
L_001577a0:;
    {
        wr32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc), cpu->r[7]);
    }
L_001577a4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001577a8:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_001577ac:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00157780;
        }
    }
L_001577b0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001577b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001577c0;
        }
    }
L_001577b8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_001577bc:;
    {
        cpu->r[14] = 0x001577c0u; fn_0018ba60(cpu);
    }
L_001577c0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001577c4:;
    {
        wr32(cpu->r[6], cpu->r[3]);
    }
L_001577c8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001577cc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001577d0:;
    {
        wr32(cpu->r[6] + + 0x8u, cpu->r[3]);
    }
L_001577d4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001577d8u)) return;
    }
}

/* _ZN15ParticleEmitter14isSystemActiveEv @ 001577d8 (arm) */
void fn_001577d8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001577d8:;
    {
        cpu->r[0] = rd8(cpu->r[0] + + 0xa00u);
    }
L_001577dc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15ParticleEmitter15isRestartActiveEv @ 001577e0 (arm) */
void fn_001577e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001577e0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xa10u);
    }
L_001577e4:;
    {
        cpu->r[0] = (~cpu->r[0]);
    }
L_001577e8:;
    {
        uint32_t v = shifter(cpu->r[0], 3, 31u, &shc); cpu->r[0] = v;
    }
L_001577ec:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15ParticleEmitter16getVerticesCountEv @ 001577f0 (arm) */
void fn_001577f0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001577f0:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x658u);
    }
L_001577f4:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15ParticleEmitter16setVerticesCountEi @ 001577f8 (arm) */
void fn_001577f8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001577f8:;
    {
        wr32(cpu->r[0] + + 0x658u, cpu->r[1]);
    }
L_001577fc:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15ParticleEmitter20setParticuleParamsIDEi @ 00157800 (arm) */
void fn_00157800(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00157800:;
    {
        wr32(cpu->r[0] + + 0xa0cu, cpu->r[1]);
    }
L_00157804:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15ParticleEmitter20getParticuleParamsIDEv @ 00157808 (arm) */
void fn_00157808(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00157808:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xa0cu);
    }
L_0015780c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15ParticleEmitter11setPositionE8Vector3d @ 00157810 (arm) */
void fn_00157810(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00157810:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x000009e0u, 0, 0);
    }
L_00157814:;
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
L_00157818:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_0015781c:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_00157820:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15ParticleEmitter11getPositionEv @ 00157824 (arm) */
void fn_00157824(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00157824:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x000009e0u, 0, 0);
    }
L_00157828:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x0000000cu, 0, 0);
    }
L_0015782c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_00157830:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[1], 0x000009e0u, 0, 0);
    }
L_00157834:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x000009e0u, 0, 0);
    }
L_00157838:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015783c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_00157840:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000008u, 0, 0);
    }
L_00157844:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_00157848:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015784c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[1]);
    }
L_00157850:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00157854:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15ParticleEmitter9setParentEP11SceneObject @ 00157858 (arm) */
void fn_00157858(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00157858:;
    {
        wr32(cpu->r[0] + + 0xae0u, cpu->r[1]);
    }
L_0015785c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15ParticleEmitter9getParentEv @ 00157860 (arm) */
void fn_00157860(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00157860:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xae0u);
    }
L_00157864:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15ParticleEmitter22setParentPlaceHolderIDEi @ 00157868 (arm) */
void fn_00157868(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00157868:;
    {
        wr32(cpu->r[0] + + 0xae4u, cpu->r[1]);
    }
L_0015786c:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15ParticleEmitter22getParentPlaceHolderIDEv @ 00157870 (arm) */
void fn_00157870(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00157870:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0xae4u);
    }
L_00157874:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15ParticleEmitter14setOrientationE8Vector3d @ 00157878 (arm) */
void fn_00157878(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00157878:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x000009f0u, 0, 0);
    }
L_0015787c:;
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
L_00157880:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_00157884:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15ParticleEmitter11startSystemEv @ 00157888 (arm) */
void fn_00157888(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00157888:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0xa00u);
    }
L_0015788c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00157890:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[2] = 0x00000001u;
        }
    }
L_00157894:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0xa08u, cpu->r[3]);
        }
    }
L_00157898:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[0] + + 0xa00u, cpu->r[2]);
        }
    }
L_0015789c:;
    {
        if (cond_test(cpu, 1)) {
        wr32(cpu->r[0] + + 0xa04u, cpu->r[3]);
        }
    }
L_001578a0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15ParticleEmitter11startSystemEP18ParticleParameters8Vector3d @ 001578a4 (arm) */
void fn_001578a4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001578a4:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001578a8:;
    {
        uint32_t wb_tmp = cpu->r[13] + - 0x4u;
        wr32(cpu->r[13] + - 0x4u, cpu->r[4]);
        cpu->r[13] = wb_tmp;
    }
L_001578ac:;
    {
        cpu->r[12] = rd8(cpu->r[3] + + 0xa00u);
    }
L_001578b0:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_001578b4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00157904;
        }
    }
L_001578b8:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001578bc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00157904;
        }
    }
L_001578c0:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], 0x00000a10u, 0, 0);
    }
L_001578c4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_001578c8:;
    {
        wr32(cpu->r[3] + + 0xa08u, cpu->r[12]);
    }
L_001578cc:;
    {
        cpu->r[4] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001578d0:;
    {
        wr32(cpu->r[3] + + 0xa04u, cpu->r[12]);
    }
L_001578d4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_001578d8:;
    {
        cpu->r[12] = 0x00000001u;
    }
L_001578dc:;
    {
        wr32(cpu->r[3] + + 0x9ecu, cpu->r[4]);
    }
L_001578e0:;
    {
        wr8(cpu->r[3] + + 0xa00u, cpu->r[12]);
    }
L_001578e4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_001578e8:;
    {
        cpu->r[12] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001578ec:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_001578f0:;
    {
        wr32(cpu->r[3] + + 0x9e4u, cpu->r[12]);
    }
L_001578f4:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001578f8:;
    {
        wr32(cpu->r[3] + + 0x9e8u, cpu->r[2]);
    }
L_001578fc:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_00157900:;
    {
        return fn_0015ae24(cpu);
    }
L_00157904:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        cpu->r[4] = v0;
        cpu->r[13] = base + 4u;
    }
L_00157908:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15ParticleEmitter9isVisibleEv @ 0015790c (arm) */
void fn_0015790c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015790c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x000009e0u, 0, 0);
    }
L_00157910:;
    {
        cpu->r[3] = rd32(0x00157918u + + 0xe0u);
    }
L_00157914:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_00157918:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_0015791c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[0], 0x000009e0u, 0, 0);
    }
L_00157920:;
    {
        cpu->r[3] = add_flags(cpu, 0x00157928u, cpu->r[3], 0, 0);
    }
L_00157924:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000008u, 0, 0);
    }
L_00157928:;
    {
        *vfp_s(cpu, 12) = *(float*)G(cpu->r[2]);
    }
L_0015792c:;
    {
        cpu->r[2] = rd32(0x00157934u + + 0xc8u);
    }
L_00157930:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00157934:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00157938:;
    {
        cpu->r[5] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0015793c:;
    {
        cpu->r[2] = 0x00001314u;
    }
L_00157940:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_00157944:;
    {
        cpu->r[3] = rd32(cpu->r[5]);
    }
L_00157948:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_0015794c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[0] + + 0x48u);
    }
L_00157950:;
    {
        vfp_vsub(cpu, 14, 14, 15);
    }
L_00157954:;
    {
        cpu->r[2] = 0x00001310u;
    }
L_00157958:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], cpu->r[3], 0, 0);
    }
L_0015795c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_00157960:;
    {
        *vfp_s(cpu, 11) = *(float*)G(cpu->r[0] + + 0x84u);
    }
L_00157964:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_00157968:;
    {
        vfp_sync_flags(cpu);
    }
L_0015796c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001579e8;
        }
    }
L_00157970:;
    {
        vfp_vneg(cpu, 13, 15);
    }
L_00157974:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,13));
    }
L_00157978:;
    {
        vfp_sync_flags(cpu);
    }
L_0015797c:;
    {
        if (cond_test(cpu, 5)) {
        goto L_001579e8;
        }
    }
L_00157980:;
    {
        vfp_vsub(cpu, 12, 11, 12);
    }
L_00157984:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,12), *vfp_s(cpu,15));
    }
L_00157988:;
    {
        vfp_sync_flags(cpu);
    }
L_0015798c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001579e8;
        }
    }
L_00157990:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,12), *vfp_s(cpu,13));
    }
L_00157994:;
    {
        vfp_sync_flags(cpu);
    }
L_00157998:;
    {
        if (cond_test(cpu, 5)) {
        goto L_001579e8;
        }
    }
L_0015799c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001579a0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[4], 0x000009e0u, 0, 0);
    }
L_001579a4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001579a8:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000004u, 0, 0);
    }
L_001579ac:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001579b4u + + 0x40u);
    }
L_001579b0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001579b4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001579b8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001579bc:;
    {
        cpu->r[14] = 0x001579c0u; fn_001533e4(cpu);
    }
L_001579c0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xa1cu);
    }
L_001579c4:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001579c8:;
    {
        cpu->r[0] = rd32(cpu->r[5]);
    }
L_001579cc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], shifter(cpu->r[3], 2, 2u, &shc), 0, 0);
    }
L_001579d0:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 1u, &shc); cpu->r[3] = v;
    }
L_001579d4:;
    {
        *(uint32_t*)vfp_s(cpu,15) = cpu->r[3];
    }
L_001579d8:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,15);
    }
L_001579dc:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001579e0:;
    {
        cpu->r[14] = 0x001579e4u; fn_0012de90(cpu);
    }
L_001579e4:;
    {
        goto L_001579ec;
    }
L_001579e8:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_001579ec:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001579f0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001579f4u)) return;
    }
}

/* _ZN15ParticleEmitter12renderSystemEv @ 00157a00 (arm) */
void fn_00157a00(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00157a00:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0xa00u);
    }
L_00157a04:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00157a08:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00157a0c:;
    {
        cpu->r[4] = rd32(0x00157a14u + + 0x120u);
    }
L_00157a10:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00157a14:;
    {
        cpu->r[4] = add_flags(cpu, 0x00157a1cu, cpu->r[4], 0, 0);
    }
L_00157a18:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00157a1cu)) return;
        }
    }
L_00157a1c:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0x9e0u);
    }
L_00157a20:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00157a24:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00157a28u)) return;
        }
    }
L_00157a28:;
    {
        cpu->r[3] = rd32(0x00157a30u + + 0x108u);
    }
L_00157a2c:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00157a30:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0xa88u);
    }
L_00157a34:;
    {
        cpu->r[3] = rd32(cpu->r[4] + cpu->r[3]);
    }
L_00157a38:;
    {
        cpu->r[1] = (uint32_t)((uint16_t)cpu->r[1]);
    }
L_00157a3c:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_00157a40:;
    {
        cpu->r[14] = 0x00157a44u; fn_00135cf4(cpu);
    }
L_00157a44:;
    {
        cpu->r[2] = rd32(0x00157a4cu + + 0xf0u);
    }
L_00157a48:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00157a4c:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_00157a50:;
    {
        cpu->r[6] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00157a54:;
    {
        cpu->r[2] = rd32(cpu->r[0]);
    }
L_00157a58:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_00157a5c:;
    {
        cpu->r[14] = 0x00157a60u; fn_0012f12c(cpu);
    }
L_00157a60:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0xa8cu);
    }
L_00157a64:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00157a68:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00157b10;
        }
    }
L_00157a6c:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_00157a70:;
    {
        cpu->r[2] = 0x0000128cu;
    }
L_00157a74:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00157a78:;
    {
        cpu->r[2] = 0x00001288u;
    }
L_00157a7c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00157a80:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00157a84:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = 0x0000002bu;
        }
    }
L_00157a88:;
    {
        cpu->r[14] = 0x00157a8cu; fn_0014814c(cpu);
    }
L_00157a8c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_00157a90:;
    {
        cpu->r[0] = 0x00000002u;
    }
L_00157a94:;
    {
        cpu->r[1] = 0x00001406u;
    }
L_00157a98:;
    {
        cpu->r[2] = 0x00000018u;
    }
L_00157a9c:;
    {
        cpu->r[14] = 0x00157aa0u; imp_glTexCoordPointer(cpu); /* glTexCoordPointer */
    }
L_00157aa0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x0000000cu, 0, 0);
    }
L_00157aa4:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_00157aa8:;
    {
        cpu->r[1] = 0x00001401u;
    }
L_00157aac:;
    {
        cpu->r[2] = 0x00000018u;
    }
L_00157ab0:;
    {
        cpu->r[14] = 0x00157ab4u; imp_glColorPointer(cpu); /* glColorPointer */
    }
L_00157ab4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000010u, 0, 0);
    }
L_00157ab8:;
    {
        cpu->r[0] = 0x00000003u;
    }
L_00157abc:;
    {
        cpu->r[1] = 0x00001406u;
    }
L_00157ac0:;
    {
        cpu->r[2] = 0x00000018u;
    }
L_00157ac4:;
    {
        cpu->r[14] = 0x00157ac8u; imp_glVertexPointer(cpu); /* glVertexPointer */
    }
L_00157ac8:;
    {
        cpu->r[2] = rd32(0x00157ad0u + + 0x70u);
    }
L_00157acc:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x658u);
    }
L_00157ad0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[5], 0x00000740u, 0, 0);
    }
L_00157ad4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_00157ad8:;
    {
        cpu->r[0] = 0x00000004u;
    }
L_00157adc:;
    {
        cpu->r[4] = rd32(cpu->r[4] + cpu->r[2]);
    }
L_00157ae0:;
    {
        cpu->r[2] = 0x00001403u;
    }
L_00157ae4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_00157ae8:;
    {
        { int32_t v = (int32_t)(cpu->r[1] << 1); cpu->r[12] = (uint32_t)(v >> 2); }
    }
L_00157aec:;
    {
        cpu->r[1] = rd32(cpu->r[4]);
    }
L_00157af0:;
    {
        cpu->r[4] = rd32(cpu->r[1]);
    }
L_00157af4:;
    {
        cpu->r[12] = add_flags(cpu, cpu->r[4], cpu->r[12], 0, 0);
    }
L_00157af8:;
    {
        wr32(cpu->r[1], cpu->r[12]);
    }
L_00157afc:;
    {
        cpu->r[1] = rd32(cpu->r[5] + + 0x658u);
    }
L_00157b00:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], shifter(cpu->r[1], 2, 1u, &shc), 0, 0);
    }
L_00157b04:;
    {
        { int32_t v = (int32_t)(cpu->r[1] << 1); cpu->r[1] = (uint32_t)(v >> 2); }
    }
L_00157b08:;
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
L_00157b0c:;
    {
        imp_glDrawElements(cpu); /* tail glDrawElements */ return;
    }
L_00157b10:;
    {
        cpu->r[3] = rd32(cpu->r[6]);
    }
L_00157b14:;
    {
        cpu->r[2] = 0x0000128cu;
    }
L_00157b18:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00157b1c:;
    {
        cpu->r[2] = 0x00001288u;
    }
L_00157b20:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00157b24:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00157b28:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = 0x0000000fu;
        }
    }
L_00157b2c:;
    {
        cpu->r[14] = 0x00157b30u; fn_0014814c(cpu);
    }
L_00157b30:;
    {
        goto L_00157a8c;
    }
}

/* _ZN15ParticleEmitter5resetEv @ 00157b44 (arm) */
void fn_00157b44(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00157b44:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00157b48:;
    {
        cpu->r[2] = 0x00000064u;
    }
L_00157b4c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00157b50:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00157b58u + + 0x5cu);
    }
L_00157b54:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00157b58:;
    {
        cpu->r[0] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00157b5c:;
    {
        cpu->r[4] = cpu->r[3];
    }
L_00157b60:;
    {
        cpu->r[1] = (~0x00000000u);
    }
L_00157b64:;
    {
        wr32(cpu->r[5] + + 0x9f0u, cpu->r[0]);
    }
L_00157b68:;
    {
        wr32(cpu->r[5] + + 0xa18u, cpu->r[2]);
    }
L_00157b6c:;
    {
        wr32(cpu->r[5] + + 0xae4u, cpu->r[1]);
    }
L_00157b70:;
    {
        wr8(cpu->r[5] + + 0xa00u, cpu->r[3]);
    }
L_00157b74:;
    {
        wr8(cpu->r[5] + + 0x9e0u, cpu->r[3]);
    }
L_00157b78:;
    {
        wr32(cpu->r[5] + + 0x9f8u, cpu->r[0]);
    }
L_00157b7c:;
    {
        wr32(cpu->r[5] + + 0x9f4u, cpu->r[0]);
    }
L_00157b80:;
    {
        wr32(cpu->r[5] + + 0xa10u, cpu->r[2]);
    }
L_00157b84:;
    {
        wr32(cpu->r[5] + + 0xa14u, cpu->r[2]);
    }
L_00157b88:;
    {
        wr32(cpu->r[5] + + 0xa0cu, cpu->r[1]);
    }
L_00157b8c:;
    {
        wr32(cpu->r[5] + + 0xae0u, cpu->r[3]);
    }
L_00157b90:;
    {
        wr32(cpu->r[5] + + 0x658u, cpu->r[3]);
    }
L_00157b94:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x9fcu);
    }
L_00157b98:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00157b9c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_00157ba0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_00157ba4:;
    {
        cpu->r[14] = 0x00157ba8u; fn_001598dc(cpu);
    }
L_00157ba8:;
    {
        sub_flags(cpu, cpu->r[4], 0x0000003cu, 1, 1);
    }
L_00157bac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00157b94;
        }
    }
L_00157bb0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00157bb4u)) return;
    }
}

/* _ZN15ParticleEmitterD1Ev @ 00157bb8 (arm) */
void fn_00157bb8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00157bb8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x9fcu);
    }
L_00157bbc:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00157bc0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00157bc4:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00157bc8:;
    {
        cpu->r[5] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_00157bcc:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_00157bd0:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00157bd4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00157be8;
        }
    }
L_00157bd8:;
    {
        cpu->r[14] = 0x00157bdcu; fn_0015ade8(cpu);
    }
L_00157bdc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00157be0:;
    {
        cpu->r[14] = 0x00157be4u; fn_0018ba20(cpu);
    }
L_00157be4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x9fcu);
    }
L_00157be8:;
    {
        sub_flags(cpu, cpu->r[4], 0x0000003cu, 1, 1);
    }
L_00157bec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00157bc8;
        }
    }
L_00157bf0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00157bf4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00157c00;
        }
    }
L_00157bf8:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00157bfc:;
    {
        cpu->r[14] = 0x00157c00u; fn_0018ba60(cpu);
    }
L_00157c00:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00157c04:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00157c08u)) return;
    }
}

/* _ZN15ParticleEmitterD2Ev @ 00157c08 (arm) */
void fn_00157c08(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00157c08:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x9fcu);
    }
L_00157c0c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00157c10:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00157c14:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00157c18:;
    {
        cpu->r[5] = rd32(cpu->r[3] + cpu->r[4]);
    }
L_00157c1c:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_00157c20:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00157c24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00157c38;
        }
    }
L_00157c28:;
    {
        cpu->r[14] = 0x00157c2cu; fn_0015ade8(cpu);
    }
L_00157c2c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00157c30:;
    {
        cpu->r[14] = 0x00157c34u; fn_0018ba20(cpu);
    }
L_00157c34:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x9fcu);
    }
L_00157c38:;
    {
        sub_flags(cpu, cpu->r[4], 0x0000003cu, 1, 1);
    }
L_00157c3c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00157c18;
        }
    }
L_00157c40:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00157c44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00157c50;
        }
    }
L_00157c48:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00157c4c:;
    {
        cpu->r[14] = 0x00157c50u; fn_0018ba60(cpu);
    }
L_00157c50:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00157c54:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00157c58u)) return;
    }
}

/* _ZN15ParticleEmitterC1Ev @ 00157c58 (arm) */
void fn_00157c58(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00157c58:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x000005a0u, 0, 0);
    }
L_00157c5c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00157c64u + + 0x9cu);
    }
L_00157c60:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00157c64:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x000000b8u, 0, 0);
    }
L_00157c68:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00157c6c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00157c70:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00157c74:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00157c78:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00157c7c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_00157c80:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00157c84:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00157c70;
        }
    }
L_00157c88:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000a10u, 0, 0);
    }
L_00157c8c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00157c90:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_00157c94:;
    {
        wr32(cpu->r[5] + + 0x9f8u, cpu->r[3]);
    }
L_00157c98:;
    {
        wr32(cpu->r[5] + + 0x9e4u, cpu->r[3]);
    }
L_00157c9c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00157ca0:;
    {
        wr32(cpu->r[5] + + 0x9e8u, cpu->r[3]);
    }
L_00157ca4:;
    {
        cpu->r[4] = cpu->r[6];
    }
L_00157ca8:;
    {
        wr32(cpu->r[5] + + 0x9ecu, cpu->r[3]);
    }
L_00157cac:;
    {
        wr32(cpu->r[5] + + 0x9f0u, cpu->r[3]);
    }
L_00157cb0:;
    {
        wr32(cpu->r[5] + + 0x9f4u, cpu->r[3]);
    }
L_00157cb4:;
    {
        cpu->r[14] = 0x00157cb8u; fn_0015ae20(cpu);
    }
L_00157cb8:;
    {
        wr8(cpu->r[5] + + 0xae8u, cpu->r[6]);
    }
L_00157cbc:;
    {
        cpu->r[0] = 0x0000003cu;
    }
L_00157cc0:;
    {
        cpu->r[14] = 0x00157cc4u; imp__Znaj(cpu); /* _Znaj */
    }
L_00157cc4:;
    {
        wr32(cpu->r[5] + + 0x9fcu, cpu->r[0]);
    }
L_00157cc8:;
    {
        cpu->r[0] = 0x000000dcu;
    }
L_00157ccc:;
    {
        cpu->r[14] = 0x00157cd0u; fn_0018ba6c(cpu);
    }
L_00157cd0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00157cd4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00157cd8:;
    {
        cpu->r[14] = 0x00157cdcu; fn_00159d6c(cpu);
    }
L_00157cdc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x9fcu);
    }
L_00157ce0:;
    {
        wr32(cpu->r[3] + cpu->r[4], cpu->r[6]);
    }
L_00157ce4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_00157ce8:;
    {
        sub_flags(cpu, cpu->r[4], 0x0000003cu, 1, 1);
    }
L_00157cec:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00157cc8;
        }
    }
L_00157cf0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00157cf4:;
    {
        cpu->r[14] = 0x00157cf8u; fn_00157b44(cpu);
    }
L_00157cf8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00157cfc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00157d00u)) return;
    }
}

/* _ZN15ParticleEmitterC2Ev @ 00157d04 (arm) */
void fn_00157d04(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00157d04:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x000005a0u, 0, 0);
    }
L_00157d08:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00157d10u + + 0x9cu);
    }
L_00157d0c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00157d10:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[3], 0x000000b8u, 0, 0);
    }
L_00157d14:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00157d18:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00157d1c:;
    {
        *(uint32_t*)G(cpu->r[3]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00157d20:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00157d24:;
    {
        *(uint32_t*)G(cpu->r[3] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00157d28:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x0000000cu, 0, 0);
    }
L_00157d2c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00157d30:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00157d1c;
        }
    }
L_00157d34:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[5], 0x00000a10u, 0, 0);
    }
L_00157d38:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00157d3c:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], 0x0000000cu, 0, 0);
    }
L_00157d40:;
    {
        wr32(cpu->r[5] + + 0x9f8u, cpu->r[3]);
    }
L_00157d44:;
    {
        wr32(cpu->r[5] + + 0x9e4u, cpu->r[3]);
    }
L_00157d48:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00157d4c:;
    {
        wr32(cpu->r[5] + + 0x9e8u, cpu->r[3]);
    }
L_00157d50:;
    {
        cpu->r[4] = cpu->r[6];
    }
L_00157d54:;
    {
        wr32(cpu->r[5] + + 0x9ecu, cpu->r[3]);
    }
L_00157d58:;
    {
        wr32(cpu->r[5] + + 0x9f0u, cpu->r[3]);
    }
L_00157d5c:;
    {
        wr32(cpu->r[5] + + 0x9f4u, cpu->r[3]);
    }
L_00157d60:;
    {
        cpu->r[14] = 0x00157d64u; fn_0015ae20(cpu);
    }
L_00157d64:;
    {
        wr8(cpu->r[5] + + 0xae8u, cpu->r[6]);
    }
L_00157d68:;
    {
        cpu->r[0] = 0x0000003cu;
    }
L_00157d6c:;
    {
        cpu->r[14] = 0x00157d70u; imp__Znaj(cpu); /* _Znaj */
    }
L_00157d70:;
    {
        wr32(cpu->r[5] + + 0x9fcu, cpu->r[0]);
    }
L_00157d74:;
    {
        cpu->r[0] = 0x000000dcu;
    }
L_00157d78:;
    {
        cpu->r[14] = 0x00157d7cu; fn_0018ba6c(cpu);
    }
L_00157d7c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00157d80:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00157d84:;
    {
        cpu->r[14] = 0x00157d88u; fn_00159d6c(cpu);
    }
L_00157d88:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x9fcu);
    }
L_00157d8c:;
    {
        wr32(cpu->r[3] + cpu->r[4], cpu->r[6]);
    }
L_00157d90:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_00157d94:;
    {
        sub_flags(cpu, cpu->r[4], 0x0000003cu, 1, 1);
    }
L_00157d98:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00157d74;
        }
    }
L_00157d9c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00157da0:;
    {
        cpu->r[14] = 0x00157da4u; fn_00157b44(cpu);
    }
L_00157da4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00157da8:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00157dacu)) return;
    }
}

/* _ZN15ParticleEmitter12updateSystemEiP8Vector3d @ 00157db0 (arm) */
void fn_00157db0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00157db0:;
    {
        cpu->r[3] = rd8(cpu->r[0] + + 0xa00u);
    }
L_00157db4:;
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
L_00157db8:;
    {
        cpu->r[13] -= 8u;
        wr64(cpu->r[13] + 0u, *(uint64_t*)vfp_d(cpu, 8));
    }
L_00157dbc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00157dc0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x000000a4u, 1, 0);
    }
L_00157dc4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00157dc8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00157e50;
        }
    }
L_00157dcc:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xa88u);
    }
L_00157dd0:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00157dd4:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00157e44;
        }
    }
L_00157dd8:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xa10u);
    }
L_00157ddc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00157de0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00157e44;
        }
    }
L_00157de4:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_00157de8:;
    {
        wr32(cpu->r[0] + + 0xa10u, cpu->r[3]);
    }
L_00157dec:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00157df0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00157e44;
        }
    }
L_00157df4:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0xa18u);
    }
L_00157df8:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00157dfc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00157e3c;
        }
    }
L_00157e00:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0xa14u);
    }
L_00157e04:;
    {
        *(uint32_t*)vfp_s(cpu,16) = cpu->r[3];
    }
L_00157e08:;
    {
        cpu->r[14] = 0x00157e0cu; imp_lrand48(cpu); /* lrand48 */
    }
L_00157e0c:;
    {
        *vfp_d(cpu,8) = (double)*(int32_t*)vfp_s(cpu,16);
    }
L_00157e10:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[5];
    }
L_00157e14:;
    {
        *vfp_d(cpu,6) = (double)*(int32_t*)vfp_s(cpu,11);
    }
L_00157e18:;
    {
        *vfp_d(cpu, 6) = *vfp_d(cpu, 6) - *vfp_d(cpu, 8);
    }
L_00157e1c:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[0];
    }
L_00157e20:;
    {
        *vfp_d(cpu,7) = (double)*(int32_t*)vfp_s(cpu,11);
    }
L_00157e24:;
    {
        *vfp_d(cpu, 6) = *vfp_d(cpu, 6) * *vfp_d(cpu, 7);
    }
L_00157e28:;
    {
        *vfp_d(cpu, 7) = *(double*)G(0x00157e30u + + 0x2e8u);
    }
L_00157e2c:;
    {
        *vfp_d(cpu, 8) = *vfp_d(cpu, 8) + *vfp_d(cpu, 6) * *vfp_d(cpu, 7);
    }
L_00157e30:;
    {
        *(int32_t*)vfp_s(cpu,16) = (int32_t)*vfp_d(cpu,8);
    }
L_00157e34:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,16);
    }
L_00157e38:;
    {
        wr32(cpu->r[4] + + 0xa10u, cpu->r[3]);
    }
L_00157e3c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00157e40:;
    {
        cpu->r[14] = 0x00157e44u; fn_00157888(cpu);
    }
L_00157e44:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x000000a4u, 0, 0);
    }
L_00157e48:;
    {
        *(uint64_t*)vfp_d(cpu, 8) = rd64(cpu->r[13] + 0u);
        cpu->r[13] += 8u;
    }
L_00157e4c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00157e50u)) return;
    }
L_00157e50:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00157e54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00157f8c;
        }
    }
L_00157e58:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x8u);
    }
L_00157e5c:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00157e60:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2]);
    }
L_00157e64:;
    {
        wr32(cpu->r[0] + + 0x9ecu, cpu->r[3]);
    }
L_00157e68:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00157e6c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[2] + + 0x4u);
    }
L_00157e70:;
    {
        wr32(cpu->r[0] + + 0x9e4u, cpu->r[3]);
    }
L_00157e74:;
    {
        cpu->r[3] = *(uint32_t*)vfp_s(cpu,15);
    }
L_00157e78:;
    {
        wr32(cpu->r[0] + + 0x9e8u, cpu->r[3]);
    }
L_00157e7c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00157e80:;
    {
        cpu->r[14] = 0x00157e84u; fn_0015790c(cpu);
    }
L_00157e84:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00157e88:;
    {
        wr8(cpu->r[4] + + 0x9e0u, cpu->r[0]);
    }
L_00157e8c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00157e44;
        }
    }
L_00157e90:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xa04u);
    }
L_00157e94:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00157e98:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xaccu);
    }
L_00157e9c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00157ea0:;
    {
        wr8(cpu->r[4] + + 0xa00u, cpu->r[5]);
    }
L_00157ea4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00157ea8:;
    {
        wr32(cpu->r[4] + + 0xa04u, cpu->r[3]);
    }
L_00157eac:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[3] = 0x00000001u;
        }
    }
L_00157eb0:;
    {
        if (cond_test(cpu, 12)) {
        wr8(cpu->r[4] + + 0xa00u, cpu->r[3]);
        }
    }
L_00157eb4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00157e44;
        }
    }
L_00157eb8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00157ebc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00157ec0:;
    {
        cpu->r[14] = 0x00157ec4u; fn_001577f8(cpu);
    }
L_00157ec4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xa04u);
    }
L_00157ec8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xaccu);
    }
L_00157ecc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[4], 0x00000a10u, 0, 0);
    }
L_00157ed0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0xaacu);
    }
L_00157ed4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[4], 0x000009e0u, 0, 0);
    }
L_00157ed8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[1], cpu->r[3], 1, 0);
    }
L_00157edc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00157ee4u + + 0x23cu);
    }
L_00157ee0:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x0000000cu, 0, 0);
    }
L_00157ee4:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[7], 0x00000004u, 0, 0);
    }
L_00157ee8:;
    {
        uint32_t v = cpu->r[2] * cpu->r[3]; cpu->r[2] = v;
    }
L_00157eec:;
    {
        *(uint32_t*)vfp_s(cpu,14) = cpu->r[2];
    }
L_00157ef0:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,14);
    }
L_00157ef4:;
    {
        cpu->r[6] = 0x00000001u;
    }
L_00157ef8:;
    {
        vfp_vdiv(cpu, 16, 14, 15);
    }
L_00157efc:;
    {
        goto L_00157f64;
    }
L_00157f00:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0xa08u);
    }
L_00157f04:;
    {
        *(uint32_t*)vfp_s(cpu,11) = cpu->r[0];
    }
L_00157f08:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,11);
    }
L_00157f0c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xab4u);
    }
L_00157f10:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00157f14:;
    {
        if (cond_test(cpu, 1)) {
        wr8(cpu->r[4] + + 0xa00u, cpu->r[6]);
        }
    }
L_00157f18:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,16));
    }
L_00157f1c:;
    {
        vfp_sync_flags(cpu);
    }
L_00157f20:;
    {
        if (cond_test(cpu, 9)) {
        goto L_00157f58;
        }
    }
L_00157f24:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00157f28:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00157f2c:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_00157f30:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00157f3c;
        }
    }
L_00157f34:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[3], 1, 1);
    }
L_00157f38:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00157f58;
        }
    }
L_00157f3c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x9fcu);
    }
L_00157f40:;
    {
        wr8(cpu->r[4] + + 0xa00u, cpu->r[6]);
    }
L_00157f44:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_00157f48:;
    {
        cpu->r[14] = 0x00157f4cu; fn_0015a418(cpu);
    }
L_00157f4c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xa08u);
    }
L_00157f50:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00157f54:;
    {
        wr32(cpu->r[4] + + 0xa08u, cpu->r[3]);
    }
L_00157f58:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_00157f5c:;
    {
        sub_flags(cpu, cpu->r[5], 0x0000003cu, 1, 1);
    }
L_00157f60:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00157e44;
        }
    }
L_00157f64:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x9fcu);
    }
L_00157f68:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_00157f6c:;
    {
        cpu->r[14] = 0x00157f70u; fn_00159c1c(cpu);
    }
L_00157f70:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00157f74:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00157f00;
        }
    }
L_00157f78:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x9fcu);
    }
L_00157f7c:;
    {
        wr8(cpu->r[4] + + 0xa00u, cpu->r[6]);
    }
L_00157f80:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_00157f84:;
    {
        cpu->r[14] = 0x00157f88u; fn_0015a9fc(cpu);
    }
L_00157f88:;
    {
        goto L_00157f58;
    }
L_00157f8c:;
    {
        cpu->r[5] = rd32(cpu->r[0] + + 0xae0u);
    }
L_00157f90:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00157f94:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001580ec;
        }
    }
L_00157f98:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000050u, 0, 0);
    }
L_00157f9c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_00157fa0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00157fa4:;
    {
        wr32(cpu->r[13] + + 0x90u, cpu->r[2]);
    }
L_00157fa8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[2]);
    }
L_00157fac:;
    {
        cpu->r[14] = 0x00157fb0u; fn_00153624(cpu);
    }
L_00157fb0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0xae0u);
    }
L_00157fb4:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xae4u);
    }
L_00157fb8:;
    {
        cpu->r[0] = sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00157fbc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[0] = 0x00000001u;
        }
    }
L_00157fc0:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0x4u);
    }
L_00157fc4:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00157fc8:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00157fcc:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00157fd0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001580c8;
        }
    }
L_00157fd4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[4], 0x000009e0u, 0, 0);
    }
L_00157fd8:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00157fdc:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_00157fe0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00157fe4:;
    {
        cpu->r[14] = 0x00157fe8u; fn_0015365c(cpu);
    }
L_00157fe8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00157ff0u + + 0x134u);
    }
L_00157fec:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x000009f0u, 0, 0);
    }
L_00157ff0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[3]);
    }
L_00157ff4:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,14), *vfp_s(cpu,15));
    }
L_00157ff8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x9cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00157ffc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x94u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00158000:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x98u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00158004:;
    {
        vfp_sync_flags(cpu);
    }
L_00158008:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00158040;
        }
    }
L_0015800c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x000009f0u, 0, 0);
    }
L_00158010:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00158014:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_00158018:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_0015801c:;
    {
        vfp_sync_flags(cpu);
    }
L_00158020:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00158040;
        }
    }
L_00158024:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x000009f0u, 0, 0);
    }
L_00158028:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000008u, 0, 0);
    }
L_0015802c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[3]);
    }
L_00158030:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_00158034:;
    {
        vfp_sync_flags(cpu);
    }
L_00158038:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[6] = 0x00000000u;
        }
    }
L_0015803c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00158098;
        }
    }
L_00158040:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xae0u);
    }
L_00158044:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_00158048:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_0015804c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00158050:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_00158054:;
    {
        wr32(cpu->r[13] + + 0x4cu, cpu->r[3]);
    }
L_00158058:;
    {
        cpu->r[14] = 0x0015805cu; fn_00153624(cpu);
    }
L_0015805c:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00158060:;
    {
        cpu->r[3] = cpu->r[1];
    }
L_00158064:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00158068:;
    {
        cpu->r[2] = cpu->r[1];
    }
L_0015806c:;
    {
        cpu->r[10] = add_flags(cpu, cpu->r[13], 0x00000094u, 0, 0);
    }
L_00158070:;
    {
        cpu->r[14] = 0x00158074u; fn_0015364c(cpu);
    }
L_00158074:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x000009f0u, 0, 0);
    }
L_00158078:;
    {
        cpu->r[6] = cpu->r[10];
    }
L_0015807c:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_00158080:;
    {
        uint32_t base = cpu->r[10];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_00158084:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00158088:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_0015808c:;
    {
        cpu->r[14] = 0x00158090u; fn_00153c38(cpu);
    }
L_00158090:;
    {
        cpu->r[0] = cpu->r[8];
    }
L_00158094:;
    {
        cpu->r[14] = 0x00158098u; fn_000b2bc8(cpu);
    }
L_00158098:;
    {
        cpu->r[8] = 0x00000000u;
    }
L_0015809c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x9fcu);
    }
L_001580a0:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001580a4:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_001580a8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[8]);
    }
L_001580ac:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[8], 0x00000004u, 0, 0);
    }
L_001580b0:;
    {
        cpu->r[14] = 0x001580b4u; fn_00159c24(cpu);
    }
L_001580b4:;
    {
        sub_flags(cpu, cpu->r[8], 0x0000003cu, 1, 1);
    }
L_001580b8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015809c;
        }
    }
L_001580bc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001580c0:;
    {
        cpu->r[14] = 0x001580c4u; fn_000b2bc8(cpu);
    }
L_001580c4:;
    {
        goto L_00157e7c;
    }
L_001580c8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0x17cu);
    }
L_001580cc:;
    {
        cpu->r[3] = cpu->r[2];
    }
L_001580d0:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001580d4:;
    {
        cpu->r[14] = 0x001580d8u; fn_0013c510(cpu);
    }
L_001580d8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xae0u);
    }
L_001580dc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001580e0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x00000004u, 0, 0);
    }
L_001580e4:;
    {
        cpu->r[14] = 0x001580e8u; fn_001534f0(cpu);
    }
L_001580e8:;
    {
        goto L_00157fd4;
    }
L_001580ec:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[0], 0x000009e0u, 0, 0);
    }
L_001580f0:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000004u, 0, 0);
    }
L_001580f4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x9fcu);
    }
L_001580f8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001580fc:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00158100:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_00158104:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_00158108:;
    {
        cpu->r[14] = 0x0015810cu; fn_00159c24(cpu);
    }
L_0015810c:;
    {
        sub_flags(cpu, cpu->r[5], 0x0000003cu, 1, 1);
    }
L_00158110:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001580f4;
        }
    }
L_00158114:;
    {
        goto L_00157e7c;
    }
}

/* _ZN20ParticleEmitterGroup4InitEi8Vector3d @ 00158128 (arm) */
void fn_00158128(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00158128:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000014u, 0, 0);
    }
L_0015812c:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_00158130:;
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
L_00158134:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_00158138:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN20ParticleEmitterGroup4InitEiP11SceneObjecti @ 0015813c (arm) */
void fn_0015813c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015813c:;
    {
        wr32(cpu->r[0] + + 0x30u, cpu->r[3]);
    }
L_00158140:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_00158144:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[2]);
    }
L_00158148:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN20ParticleEmitterGroup14setOrientationE8Vector3d @ 0015814c (arm) */
void fn_0015814c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015814c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[0], 0x00000020u, 0, 0);
    }
L_00158150:;
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
L_00158154:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_00158158:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN20ParticleEmitterGroup20setParticuleParamsIDEi @ 0015815c (arm) */
void fn_0015815c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015815c:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[1]);
    }
L_00158160:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN20ParticleEmitterGroup20getParticuleParamsIDEv @ 00158164 (arm) */
void fn_00158164(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00158164:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x4u);
    }
L_00158168:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN20ParticleEmitterGroup4InitEP18ParticleParameters8Vector3d @ 0015816c (arm) */
void fn_0015816c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015816c:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00158170:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_00158174:;
    {
        cpu->r[2] = rd32(cpu->r[1] + + 0xb8u);
    }
L_00158178:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_0015817c:;
    {
        cpu->r[6] = cpu->r[1];
    }
L_00158180:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00158184:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00158188:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00158248;
        }
    }
L_0015818c:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0xbcu);
    }
L_00158190:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xc0u);
    }
L_00158194:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[2];
    }
L_00158198:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_0015819c:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[1];
    }
L_001581a0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001581a4:;
    {
        *vfp_s(cpu,14) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_001581a8:;
    {
        cpu->r[2] = *(uint32_t*)vfp_s(cpu,15);
    }
L_001581ac:;
    {
        *(uint32_t*)vfp_s(cpu,13) = cpu->r[3];
    }
L_001581b0:;
    {
        uint32_t wb_tmp = cpu->r[0] + + 0x20u;
        wr32(cpu->r[0] + + 0x20u, cpu->r[2]);
        cpu->r[0] = wb_tmp;
    }
L_001581b4:;
    {
        *vfp_s(cpu,15) = (float)*(int32_t*)vfp_s(cpu,13);
    }
L_001581b8:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001581bc:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001581c0:;
    {
        cpu->r[14] = 0x001581c4u; fn_00155f80(cpu);
    }
L_001581c4:;
    {
        cpu->r[14] = 0x001581c8u; fn_00158e28(cpu);
    }
L_001581c8:;
    {
        cpu->r[14] = 0x001581ccu; fn_00158c04(cpu);
    }
L_001581cc:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001581d0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015823c;
        }
    }
L_001581d4:;
    {
        cpu->r[14] = 0x001581d8u; fn_00157b44(cpu);
    }
L_001581d8:;
    {
        uint32_t base = cpu->r[5];
        uint32_t ea = base;
        uint32_t v0 = rd32(ea + 0u);
        uint32_t v1 = rd32(ea + 4u);
        uint32_t v2 = rd32(ea + 8u);
        cpu->r[0] = v0;
        cpu->r[1] = v1;
        cpu->r[2] = v2;
    }
L_001581dc:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[4], 0x00000014u, 0, 0);
    }
L_001581e0:;
    {
        uint32_t base = cpu->r[3];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[0]);
        wr32(ea + 4u, cpu->r[1]);
        wr32(ea + 8u, cpu->r[2]);
    }
L_001581e4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5]);
    }
L_001581e8:;
    {
        cpu->r[1] = cpu->r[6];
    }
L_001581ec:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[5] + + 0x8u);
    }
L_001581f0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001581f4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001581f8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001581fc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_00158200:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x4u);
    }
L_00158204:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00158208:;
    {
        cpu->r[14] = 0x0015820cu; fn_001578a4(cpu);
    }
L_0015820c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10u);
    }
L_00158210:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0xcu);
    }
L_00158214:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00158218:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_0015821c:;
    {
        wr8(cpu->r[4], cpu->r[3]);
    }
L_00158220:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_00158224:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00158268;
        }
    }
L_00158228:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_0015822c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[5] = v;
    }
L_00158230:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00158234:;
    {
        wr32(cpu->r[3] + cpu->r[5], cpu->r[7]);
    }
L_00158238:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[2]);
    }
L_0015823c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00158240:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_00158244:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00158248u)) return;
    }
L_00158248:;
    {
        cpu->r[1] = rd32(cpu->r[1] + + 0xbcu);
    }
L_0015824c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00158250:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = rd32(cpu->r[6] + + 0xc0u);
        }
    }
L_00158254:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00158194;
        }
    }
L_00158258:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0xc0u);
    }
L_0015825c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00158260:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001581c4;
        }
    }
L_00158264:;
    {
        goto L_00158194;
    }
L_00158268:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0015826c:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[6], shifter(cpu->r[2], 1, 1u, &shc), 0, 1);
    }
L_00158270:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001582c0;
        }
    }
L_00158274:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_00158278:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_0015827c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015830c;
        }
    }
L_00158280:;
    {
        cpu->r[14] = 0x00158284u; fn_0018ba60(cpu);
    }
L_00158284:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00158288:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000000u, cpu->r[5], 1, 0);
    }
L_0015828c:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[8]);
    }
L_00158290:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[8]);
    }
L_00158294:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[8]);
    }
L_00158298:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0015829c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00158304;
        }
    }
L_001582a0:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[5] = v;
    }
L_001582a4:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], shifter(cpu->r[6], 2, 2u, &shc), 0, 0);
    }
L_001582a8:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_001582ac:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[5], 0, 0);
    }
L_001582b0:;
    {
        cpu->r[14] = 0x001582b4u; imp_memcpy(cpu); /* memcpy */
    }
L_001582b4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001582b8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10u);
    }
L_001582bc:;
    {
        goto L_00158230;
    }
L_001582c0:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001582c4:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_001582c8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001582dc;
        }
    }
L_001582cc:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[8], 1, 1);
    }
L_001582d0:;
    {
        if (cond_test(cpu, 11)) {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[5] = v;
        }
    }
L_001582d4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0015823c;
        }
    }
L_001582d8:;
    {
        goto L_00158230;
    }
L_001582dc:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001582e0:;
    {
        cpu->r[14] = 0x001582e4u; imp__Znaj(cpu); /* _Znaj */
    }
L_001582e4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001582e8:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001582ec:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_001582f0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015823c;
        }
    }
L_001582f4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10u);
    }
L_001582f8:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[8]);
    }
L_001582fc:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 0);
    }
L_00158300:;
    {
        goto L_00158298;
    }
L_00158304:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10u);
    }
L_00158308:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_0015830c:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[5] = v;
    }
L_00158310:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00158314:;
    {
        goto L_00158230;
    }
}

/* _ZN20ParticleEmitterGroup6RenderEv @ 00158318 (arm) */
void fn_00158318(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00158318:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x10u);
    }
L_0015831c:;
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
L_00158320:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00158324:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00158328:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_0015832c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001583c8;
        }
    }
L_00158330:;
    {
        cpu->r[8] = rd32(0x00158338u + + 0x98u);
    }
L_00158334:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00158338:;
    {
        cpu->r[10] = rd32(0x00158340u + + 0x94u);
    }
L_0015833c:;
    {
        cpu->r[7] = 0x0000006au;
    }
L_00158340:;
    {
        cpu->r[9] = rd32(0x00158348u + + 0x90u);
    }
L_00158344:;
    {
        cpu->r[8] = add_flags(cpu, 0x0015834cu, cpu->r[8], 0, 0);
    }
L_00158348:;
    {
        cpu->r[11] = rd32(0x00158350u + + 0x8cu);
    }
L_0015834c:;
    {
        cpu->r[10] = add_flags(cpu, 0x00158354u, cpu->r[10], 0, 0);
    }
L_00158350:;
    {
        cpu->r[9] = add_flags(cpu, 0x00158358u, cpu->r[9], 0, 0);
    }
L_00158354:;
    {
        cpu->r[11] = add_flags(cpu, 0x0015835cu, cpu->r[11], 0, 0);
    }
L_00158358:;
    {
        goto L_0015836c;
    }
L_0015835c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x10u);
    }
L_00158360:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00158364:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_00158368:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001583c8;
        }
    }
L_0015836c:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_00158370:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 2u, &shc); cpu->r[6] = v;
    }
L_00158374:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_00158378:;
    {
        cpu->r[14] = 0x0015837cu; fn_001577d8(cpu);
    }
L_0015837c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00158380:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015835c;
        }
    }
L_00158384:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x10u);
    }
L_00158388:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[4], 1, 1);
    }
L_0015838c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001583ac;
        }
    }
L_00158390:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00158394:;
    {
        cpu->r[2] = cpu->r[10];
    }
L_00158398:;
    {
        cpu->r[3] = cpu->r[9];
    }
L_0015839c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001583a0:;
    {
        wr32(cpu->r[13], cpu->r[11]);
    }
L_001583a4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_001583a8:;
    {
        cpu->r[14] = 0x001583acu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001583ac:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x8u);
    }
L_001583b0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001583b4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_001583b8:;
    {
        cpu->r[14] = 0x001583bcu; fn_00157a00(cpu);
    }
L_001583bc:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x10u);
    }
L_001583c0:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[3], 1, 1);
    }
L_001583c4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0015836c;
        }
    }
L_001583c8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001583cc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001583d0u)) return;
    }
}

/* _ZN20ParticleEmitterGroup5resetEv @ 001583e0 (arm) */
void fn_001583e0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001583e0:;
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
L_001583e4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001583ecu + + 0xccu);
    }
L_001583e8:;
    {
        cpu->r[7] = rd32(0x001583f0u + + 0xccu);
    }
L_001583ec:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001583f0:;
    {
        cpu->r[6] = rd32(0x001583f8u + + 0xc8u);
    }
L_001583f4:;
    {
        cpu->r[2] = 0x00000001u;
    }
L_001583f8:;
    {
        cpu->r[5] = rd32(0x00158400u + + 0xc4u);
    }
L_001583fc:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000000cu, 1, 0);
    }
L_00158400:;
    {
        cpu->r[8] = rd32(0x00158408u + + 0xc0u);
    }
L_00158404:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00158408:;
    {
        wr8(cpu->r[0], cpu->r[2]);
    }
L_0015840c:;
    {
        cpu->r[7] = add_flags(cpu, 0x00158414u, cpu->r[7], 0, 0);
    }
L_00158410:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x10u);
    }
L_00158414:;
    {
        cpu->r[6] = add_flags(cpu, 0x0015841cu, cpu->r[6], 0, 0);
    }
L_00158418:;
    {
        cpu->r[5] = add_flags(cpu, 0x00158420u, cpu->r[5], 0, 0);
    }
L_0015841c:;
    {
        cpu->r[8] = add_flags(cpu, 0x00158424u, cpu->r[8], 0, 0);
    }
L_00158420:;
    {
        cpu->r[10] = 0x0000006au;
    }
L_00158424:;
    {
        cpu->r[3] = (~0x00000000u);
    }
L_00158428:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015842c:;
    {
        wr32(cpu->r[0] + + 0x30u, cpu->r[3]);
    }
L_00158430:;
    {
        wr32(cpu->r[0] + + 0x4u, cpu->r[3]);
    }
L_00158434:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00158438:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0015843c:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00158440:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00158444:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00158448:;
    {
        wr32(cpu->r[0] + + 0x34u, cpu->r[3]);
    }
L_0015844c:;
    {
        wr32(cpu->r[0] + + 0x2cu, cpu->r[3]);
    }
L_00158450:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00158454:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001584b0;
        }
    }
L_00158458:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00158478;
        }
    }
L_0015845c:;
    {
        cpu->r[2] = cpu->r[6];
    }
L_00158460:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00158464:;
    {
        cpu->r[3] = cpu->r[5];
    }
L_00158468:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_0015846c:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[8]);
        wr32(ea + 4u, cpu->r[10]);
    }
L_00158470:;
    {
        cpu->r[14] = 0x00158474u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00158474:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10u);
    }
L_00158478:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_0015847c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00158480:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00158484:;
    {
        cpu->r[3] = rd32(cpu->r[0]);
    }
L_00158488:;
    {
        wr8(cpu->r[3] + + 0xae8u, cpu->r[1]);
    }
L_0015848c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00158450;
        }
    }
L_00158490:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_00158494:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_00158498:;
    {
        cpu->r[14] = 0x0015849cu; imp_memcpy(cpu); /* memcpy */
    }
L_0015849c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x10u);
    }
L_001584a0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], 0x00000001u, 1, 0);
    }
L_001584a4:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[2]);
    }
L_001584a8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001584ac:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00158458;
        }
    }
L_001584b0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001584b4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001584b8u)) return;
    }
}

/* _ZN20ParticleEmitterGroup6UpdateEv @ 001584cc (arm) */
void fn_001584cc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001584cc:;
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
L_001584d0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000003cu, 1, 0);
    }
L_001584d4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001584d8:;
    {
        cpu->r[14] = 0x001584dcu; fn_00158164(cpu);
    }
L_001584dc:;
    {
        cpu->r[3] = rd32(0x001584e4u + + 0x32cu);
    }
L_001584e0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001584e8u, cpu->r[3], 0, 0);
    }
L_001584e4:;
    {
        add_flags(cpu, cpu->r[0], 0x00000001u, 0, 1);
    }
L_001584e8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001584f8;
        }
    }
L_001584ec:;
    {
        cpu->r[5] = rd8(cpu->r[4]);
    }
L_001584f0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001584f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00158748;
        }
    }
L_001584f8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001584fc:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00158500:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00158804;
        }
    }
L_00158504:;
    {
        cpu->r[3] = rd32(0x0015850cu + + 0x308u);
    }
L_00158508:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_0015850c:;
    {
        cpu->r[10] = rd32(0x00158514u + + 0x304u);
    }
L_00158510:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[13], 0x00000020u, 0, 0);
    }
L_00158514:;
    {
        cpu->r[3] = add_flags(cpu, 0x0015851cu, cpu->r[3], 0, 0);
    }
L_00158518:;
    {
        cpu->r[9] = rd32(0x00158520u + + 0x2fcu);
    }
L_0015851c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_00158520:;
    {
        cpu->r[10] = add_flags(cpu, 0x00158528u, cpu->r[10], 0, 0);
    }
L_00158524:;
    {
        cpu->r[3] = rd32(0x0015852cu + + 0x2f4u);
    }
L_00158528:;
    {
        cpu->r[9] = add_flags(cpu, 0x00158530u, cpu->r[9], 0, 0);
    }
L_0015852c:;
    {
        cpu->r[11] = rd32(0x00158534u + + 0x2f0u);
    }
L_00158530:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00158534:;
    {
        cpu->r[3] = add_flags(cpu, 0x0015853cu, cpu->r[3], 0, 0);
    }
L_00158538:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_0015853c:;
    {
        goto L_00158550;
    }
L_00158540:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_00158544:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00158548:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_0015854c:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00158738;
        }
    }
L_00158550:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_00158554:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00158558:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x20u);
    }
L_0015855c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00158560:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x24u);
    }
L_00158564:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00158568:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_0015856c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x28u);
    }
L_00158570:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00158574:;
    {
        cpu->r[14] = 0x00158578u; fn_00157878(cpu);
    }
L_00158578:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_0015857c:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[6] = v;
    }
L_00158580:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00158584:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001585ac;
        }
    }
L_00158588:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_0015858c:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00158590:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00158594:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_00158598:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_0015859c:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001585a0:;
    {
        cpu->r[12] = 0x0000006au;
    }
L_001585a4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_001585a8:;
    {
        cpu->r[14] = 0x001585acu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001585ac:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001585b0:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001585b4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x14u);
    }
L_001585b8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001585bc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x18u);
    }
L_001585c0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001585c4:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_001585c8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x1cu);
    }
L_001585cc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001585d0:;
    {
        cpu->r[14] = 0x001585d4u; fn_00157810(cpu);
    }
L_001585d4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001585d8:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001585dc:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0015860c;
        }
    }
L_001585e0:;
    {
        cpu->r[2] = rd32(0x001585e8u + + 0x240u);
    }
L_001585e4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001585e8:;
    {
        cpu->r[3] = rd32(0x001585f0u + + 0x23cu);
    }
L_001585ec:;
    {
        cpu->r[1] = add_flags(cpu, 0x001585f4u, cpu->r[11], 0, 0);
    }
L_001585f0:;
    {
        cpu->r[12] = rd32(0x001585f8u + + 0x238u);
    }
L_001585f4:;
    {
        cpu->r[2] = add_flags(cpu, 0x001585fcu, cpu->r[2], 0, 0);
    }
L_001585f8:;
    {
        cpu->r[3] = add_flags(cpu, 0x00158600u, cpu->r[3], 0, 0);
    }
L_001585fc:;
    {
        cpu->r[14] = 0x0000006au;
    }
L_00158600:;
    {
        cpu->r[12] = add_flags(cpu, 0x00158608u, cpu->r[12], 0, 0);
    }
L_00158604:;
    {
        uint32_t base = cpu->r[13];
        uint32_t ea = base;
        wr32(ea + 0u, cpu->r[12]);
        wr32(ea + 4u, cpu->r[14]);
    }
L_00158608:;
    {
        cpu->r[14] = 0x0015860cu; imp___android_log_print(cpu); /* __android_log_print */
    }
L_0015860c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_00158610:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00158614:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00158618:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_0015861c:;
    {
        cpu->r[14] = 0x00158620u; fn_00157db0(cpu);
    }
L_00158620:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_00158624:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00158628:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00158660;
        }
    }
L_0015862c:;
    {
        cpu->r[1] = rd32(0x00158634u + + 0x200u);
    }
L_00158630:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00158634:;
    {
        cpu->r[2] = rd32(0x0015863cu + + 0x1fcu);
    }
L_00158638:;
    {
        cpu->r[14] = 0x0000006au;
    }
L_0015863c:;
    {
        cpu->r[3] = rd32(0x00158644u + + 0x1f8u);
    }
L_00158640:;
    {
        cpu->r[1] = add_flags(cpu, 0x00158648u, cpu->r[1], 0, 0);
    }
L_00158644:;
    {
        cpu->r[12] = rd32(0x0015864cu + + 0x1f4u);
    }
L_00158648:;
    {
        cpu->r[2] = add_flags(cpu, 0x00158650u, cpu->r[2], 0, 0);
    }
L_0015864c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00158654u, cpu->r[3], 0, 0);
    }
L_00158650:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_00158654:;
    {
        cpu->r[12] = add_flags(cpu, 0x0015865cu, cpu->r[12], 0, 0);
    }
L_00158658:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_0015865c:;
    {
        cpu->r[14] = 0x00158660u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00158660:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_00158664:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_00158668:;
    {
        cpu->r[14] = 0x0015866cu; fn_001577d8(cpu);
    }
L_0015866c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00158670:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00158540;
        }
    }
L_00158674:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_00158678:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_0015867c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_001586b4;
        }
    }
L_00158680:;
    {
        cpu->r[1] = rd32(0x00158688u + + 0x1bcu);
    }
L_00158684:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00158688:;
    {
        cpu->r[2] = rd32(0x00158690u + + 0x1b8u);
    }
L_0015868c:;
    {
        cpu->r[14] = 0x0000006au;
    }
L_00158690:;
    {
        cpu->r[3] = rd32(0x00158698u + + 0x1b4u);
    }
L_00158694:;
    {
        cpu->r[1] = add_flags(cpu, 0x0015869cu, cpu->r[1], 0, 0);
    }
L_00158698:;
    {
        cpu->r[12] = rd32(0x001586a0u + + 0x1b0u);
    }
L_0015869c:;
    {
        cpu->r[2] = add_flags(cpu, 0x001586a4u, cpu->r[2], 0, 0);
    }
L_001586a0:;
    {
        cpu->r[3] = add_flags(cpu, 0x001586a8u, cpu->r[3], 0, 0);
    }
L_001586a4:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_001586a8:;
    {
        cpu->r[12] = add_flags(cpu, 0x001586b0u, cpu->r[12], 0, 0);
    }
L_001586ac:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001586b0:;
    {
        cpu->r[14] = 0x001586b4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001586b4:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_001586b8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_001586bc:;
    {
        cpu->r[14] = 0x001586c0u; fn_001577e0(cpu);
    }
L_001586c0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001586c4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00158540;
        }
    }
L_001586c8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001586cc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_001586d0:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00158708;
        }
    }
L_001586d4:;
    {
        cpu->r[1] = rd32(0x001586dcu + + 0x178u);
    }
L_001586d8:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001586dc:;
    {
        cpu->r[2] = rd32(0x001586e4u + + 0x174u);
    }
L_001586e0:;
    {
        cpu->r[14] = 0x0000006au;
    }
L_001586e4:;
    {
        cpu->r[3] = rd32(0x001586ecu + + 0x170u);
    }
L_001586e8:;
    {
        cpu->r[1] = add_flags(cpu, 0x001586f0u, cpu->r[1], 0, 0);
    }
L_001586ec:;
    {
        cpu->r[12] = rd32(0x001586f4u + + 0x16cu);
    }
L_001586f0:;
    {
        cpu->r[2] = add_flags(cpu, 0x001586f8u, cpu->r[2], 0, 0);
    }
L_001586f4:;
    {
        cpu->r[3] = add_flags(cpu, 0x001586fcu, cpu->r[3], 0, 0);
    }
L_001586f8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[14]);
    }
L_001586fc:;
    {
        cpu->r[12] = add_flags(cpu, 0x00158704u, cpu->r[12], 0, 0);
    }
L_00158700:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00158704:;
    {
        cpu->r[14] = 0x00158708u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00158708:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_0015870c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00158710:;
    {
        cpu->r[6] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_00158714:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00158718:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_0015871c:;
    {
        wr8(cpu->r[6] + + 0xae8u, cpu->r[3]);
    }
L_00158720:;
    {
        cpu->r[14] = 0x00158724u; fn_00157bb8(cpu);
    }
L_00158724:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00158728:;
    {
        cpu->r[14] = 0x0015872cu; fn_0018ba20(cpu);
    }
L_0015872c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_00158730:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_00158734:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00158550;
        }
    }
L_00158738:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015873c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00158804;
        }
    }
L_00158740:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000003cu, 0, 0);
    }
L_00158744:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00158748u)) return;
    }
L_00158748:;
    {
        cpu->r[2] = rd32(0x00158750u + + 0x114u);
    }
L_0015874c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00158750:;
    {
        cpu->r[6] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00158754:;
    {
        cpu->r[7] = rd32(cpu->r[6]);
    }
L_00158758:;
    {
        cpu->r[14] = 0x0015875cu; fn_00158164(cpu);
    }
L_0015875c:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_00158760:;
    {
        cpu->r[1] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_00158764:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00158768:;
    {
        cpu->r[14] = 0x0015876cu; fn_00132cdc(cpu);
    }
L_0015876c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00158770:;
    {
        cpu->r[6] = rd32(cpu->r[6]);
    }
L_00158774:;
    {
        cpu->r[14] = 0x00158778u; fn_00158164(cpu);
    }
L_00158778:;
    {
        cpu->r[2] = cpu->r[5];
    }
L_0015877c:;
    {
        cpu->r[1] = (uint32_t)((uint16_t)cpu->r[0]);
    }
L_00158780:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00158784:;
    {
        cpu->r[14] = 0x00158788u; fn_001328e8(cpu);
    }
L_00158788:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x18u);
    }
L_0015878c:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00158790:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00158794:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001584f8;
        }
    }
L_00158798:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_0015879c:;
    {
        cpu->r[7] = 0x000000c4u;
    }
L_001587a0:;
    {
        cpu->r[10] = 0x00000001u;
    }
L_001587a4:;
    {
        uint32_t v = cpu->r[7] * cpu->r[5] + cpu->r[6]; cpu->r[1] = v;
    }
L_001587a8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x18u);
    }
L_001587ac:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_001587b0:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x14u);
    }
L_001587b4:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_001587b8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x30u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001587bc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x2cu) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_001587c0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x1cu);
    }
L_001587c4:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000001cu, 0, 0);
    }
L_001587c8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x34u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001587cc:;
    {
        cpu->r[14] = 0x001587d0u; fn_0015816c(cpu);
    }
L_001587d0:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_001587d4:;
    {
        cpu->r[9] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001587d8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001587f4;
        }
    }
L_001587dc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x2cu);
    }
L_001587e0:;
    {
        cpu->r[14] = 0x001587e4u; fn_00157858(cpu);
    }
L_001587e4:;
    {
        cpu->r[0] = cpu->r[9];
    }
L_001587e8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x30u);
    }
L_001587ec:;
    {
        cpu->r[14] = 0x001587f0u; fn_00157868(cpu);
    }
L_001587f0:;
    {
        wr8(cpu->r[9] + + 0xa00u, cpu->r[10]);
    }
L_001587f4:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x18u);
    }
L_001587f8:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_001587fc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001587a4;
        }
    }
L_00158800:;
    {
        goto L_001584f8;
    }
L_00158804:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00158808:;
    {
        wr8(cpu->r[4], cpu->r[3]);
    }
L_0015880c:;
    {
        goto L_00158740;
    }
}

/* _ZN20ParticleEmitterGroup11LoadEmitterEi @ 00158868 (arm) */
void fn_00158868(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00158868:;
    {
        cpu->r[3] = rd32(0x00158870u + + 0x1fcu);
    }
L_0015886c:;
    {
        add_flags(cpu, cpu->r[1], 0x00000001u, 0, 1);
    }
L_00158870:;
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
L_00158874:;
    {
        cpu->r[3] = add_flags(cpu, 0x0015887cu, cpu->r[3], 0, 0);
    }
L_00158878:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x0000002cu, 1, 0);
    }
L_0015887c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00158880:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00158a64;
        }
    }
L_00158884:;
    {
        cpu->r[0] = rd32(0x0015888cu + + 0x1e4u);
    }
L_00158888:;
    {
        cpu->r[5] = (uint32_t)((uint16_t)cpu->r[1]);
    }
L_0015888c:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_00158890:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00158894:;
    {
        cpu->r[6] = rd32(cpu->r[3] + cpu->r[0]);
    }
L_00158898:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_0015889c:;
    {
        cpu->r[14] = 0x001588a0u; fn_00132cdc(cpu);
    }
L_001588a0:;
    {
        cpu->r[0] = rd32(cpu->r[6]);
    }
L_001588a4:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_001588a8:;
    {
        cpu->r[1] = cpu->r[5];
    }
L_001588ac:;
    {
        cpu->r[14] = 0x001588b0u; fn_001328e8(cpu);
    }
L_001588b0:;
    {
        cpu->r[2] = rd32(cpu->r[0] + + 0x18u);
    }
L_001588b4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001588b8:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_001588bc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00158990;
        }
    }
L_001588c0:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_001588c4:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x0000001cu, 0, 0);
    }
L_001588c8:;
    {
        cpu->r[7] = 0x000000c4u;
    }
L_001588cc:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001588d0:;
    {
        cpu->r[10] = 0x00000001u;
    }
L_001588d4:;
    {
        cpu->r[9] = cpu->r[5];
    }
L_001588d8:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_001588dc:;
    {
        goto L_0015892c;
    }
L_001588e0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x14u);
    }
L_001588e4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x10u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001588e8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x18u);
    }
L_001588ec:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001588f0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x1cu);
    }
L_001588f4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001588f8:;
    {
        cpu->r[14] = 0x001588fcu; fn_0015816c(cpu);
    }
L_001588fc:;
    {
        cpu->r[11] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00158900:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015891c;
        }
    }
L_00158904:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x2cu);
    }
L_00158908:;
    {
        cpu->r[14] = 0x0015890cu; fn_00157858(cpu);
    }
L_0015890c:;
    {
        cpu->r[0] = cpu->r[11];
    }
L_00158910:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x30u);
    }
L_00158914:;
    {
        cpu->r[14] = 0x00158918u; fn_00157868(cpu);
    }
L_00158918:;
    {
        wr8(cpu->r[11] + + 0xa00u, cpu->r[10]);
    }
L_0015891c:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x18u);
    }
L_00158920:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00158924:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_00158928:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00158990;
        }
    }
L_0015892c:;
    {
        uint32_t v = cpu->r[7] * cpu->r[5] + cpu->r[6]; cpu->r[1] = v;
    }
L_00158930:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_00158934:;
    {
        cpu->r[2] = cpu->r[8];
    }
L_00158938:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_0015893c:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00158940:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000001cu, 0, 0);
    }
L_00158944:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001588e0;
        }
    }
L_00158948:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x8u);
    }
L_0015894c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x14u);
    }
L_00158950:;
    {
        uint32_t v = cpu->r[7] * cpu->r[5] + cpu->r[6]; cpu->r[1] = v;
    }
L_00158954:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00158958:;
    {
        cpu->r[2] = rd32(cpu->r[13] + + 0xcu);
    }
L_0015895c:;
    {
        *vfp_s(cpu, 14) = *(float*)G(cpu->r[4] + + 0x18u);
    }
L_00158960:;
    {
        cpu->r[3] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_00158964:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[4] + + 0x1cu);
    }
L_00158968:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 14);
    }
L_0015896c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00158970:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00158974:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], 0x0000001cu, 0, 0);
    }
L_00158978:;
    {
        wr8(cpu->r[3] + + 0xa00u, cpu->r[9]);
    }
L_0015897c:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_00158980:;
    {
        cpu->r[14] = 0x00158984u; fn_001578a4(cpu);
    }
L_00158984:;
    {
        cpu->r[2] = rd32(cpu->r[6] + + 0x18u);
    }
L_00158988:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_0015898c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0015892c;
        }
    }
L_00158990:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_00158994:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[2], 1, 1);
    }
L_00158998:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00158a64;
        }
    }
L_0015899c:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_001589a0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[2], 1, 1);
    }
L_001589a4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00158a64;
        }
    }
L_001589a8:;
    {
        cpu->r[10] = rd32(0x001589b0u + + 0xc4u);
    }
L_001589ac:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[7] = v;
    }
L_001589b0:;
    {
        cpu->r[9] = rd32(0x001589b8u + + 0xc0u);
    }
L_001589b4:;
    {
        uint32_t v = shifter(cpu->r[3], 2, 2u, &shc); cpu->r[8] = v;
    }
L_001589b8:;
    {
        cpu->r[11] = rd32(0x001589c0u + + 0xbcu);
    }
L_001589bc:;
    {
        cpu->r[10] = add_flags(cpu, 0x001589c4u, cpu->r[10], 0, 0);
    }
L_001589c0:;
    {
        cpu->r[2] = rd32(0x001589c8u + + 0xb8u);
    }
L_001589c4:;
    {
        cpu->r[9] = add_flags(cpu, 0x001589ccu, cpu->r[9], 0, 0);
    }
L_001589c8:;
    {
        cpu->r[11] = add_flags(cpu, 0x001589d0u, cpu->r[11], 0, 0);
    }
L_001589cc:;
    {
        cpu->r[2] = add_flags(cpu, 0x001589d4u, cpu->r[2], 0, 0);
    }
L_001589d0:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[2]);
    }
L_001589d4:;
    {
        goto L_001589fc;
    }
L_001589d8:;
    {
        cpu->r[3] = sub_flags(cpu, cpu->r[3], 0x00000001u, 1, 0);
    }
L_001589dc:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_001589e0:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x18u);
    }
L_001589e4:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000001u, 1, 0);
    }
L_001589e8:;
    {
        cpu->r[7] = sub_flags(cpu, cpu->r[7], 0x00000004u, 1, 0);
    }
L_001589ec:;
    {
        cpu->r[8] = sub_flags(cpu, cpu->r[8], 0x00000004u, 1, 0);
    }
L_001589f0:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_001589f4:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00158a64;
        }
    }
L_001589f8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_001589fc:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00158a00:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00158a2c;
        }
    }
L_00158a04:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_00158a08:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_00158a0c:;
    {
        cpu->r[1] = cpu->r[10];
    }
L_00158a10:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_00158a14:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00158a18:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00158a1c:;
    {
        cpu->r[12] = 0x0000006au;
    }
L_00158a20:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[12]);
    }
L_00158a24:;
    {
        cpu->r[14] = 0x00158a28u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00158a28:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_00158a2c:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_00158a30:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00158a34:;
    {
        cpu->r[1] = 0x00000000u;
    }
L_00158a38:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[7]);
    }
L_00158a3c:;
    {
        wr8(cpu->r[2] + + 0xae8u, cpu->r[1]);
    }
L_00158a40:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001589e0;
        }
    }
L_00158a44:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[3], cpu->r[5], 1, 1);
    }
L_00158a48:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001589d8;
        }
    }
L_00158a4c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], cpu->r[8], 0, 0);
    }
L_00158a50:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_00158a54:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[0], cpu->r[7], 0, 0);
    }
L_00158a58:;
    {
        cpu->r[14] = 0x00158a5cu; imp_memcpy(cpu); /* memcpy */
    }
L_00158a5c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x10u);
    }
L_00158a60:;
    {
        goto L_001589d8;
    }
L_00158a64:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x0000002cu, 0, 0);
    }
L_00158a68:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00158a6cu)) return;
    }
}

/* _ZN20ParticleEmitterGroupC2Ev @ 00158a84 (arm) */
void fn_00158a84(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00158a84:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00158a88:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00158a90u + + 0x54u);
    }
L_00158a8c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00158a90:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00158a94:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00158a98:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00158a9c:;
    {
        wr8(cpu->r[0] + + 0x38u, cpu->r[3]);
    }
L_00158aa0:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00158aa4:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_00158aa8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00158aac:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00158ab0:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00158ab4:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_00158ab8:;
    {
        cpu->r[0] = 0x00000190u;
    }
L_00158abc:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_00158ac0:;
    {
        cpu->r[14] = 0x00158ac4u; imp__Znaj(cpu); /* _Znaj */
    }
L_00158ac4:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00158ac8:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_00158acc:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000064u;
        }
    }
L_00158ad0:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00158ad4:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
        }
    }
L_00158ad8:;
    {
        cpu->r[14] = 0x00158adcu; fn_001583e0(cpu);
    }
L_00158adc:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00158ae0:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00158ae4u)) return;
    }
}

/* _ZN20ParticleEmitterGroupD1Ev @ 00158ae8 (arm) */
void fn_00158ae8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00158ae8:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x10u);
    }
L_00158aec:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00158af0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00158af4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00158af8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
        }
    }
L_00158afc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00158b20;
        }
    }
L_00158b00:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00158b04:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_00158b08:;
    {
        cpu->r[12] = cpu->r[3];
    }
L_00158b0c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_00158b10:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00158b14:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00158b18:;
    {
        wr8(cpu->r[2] + + 0xae8u, cpu->r[12]);
    }
L_00158b1c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00158b0c;
        }
    }
L_00158b20:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00158b24:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00158b3c;
        }
    }
L_00158b28:;
    {
        cpu->r[14] = 0x00158b2cu; fn_0018ba60(cpu);
    }
L_00158b2c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00158b30:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_00158b34:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_00158b38:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_00158b3c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00158b40:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00158b44u)) return;
    }
}

/* _ZN20ParticleEmitterGroupD2Ev @ 00158b44 (arm) */
void fn_00158b44(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00158b44:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x10u);
    }
L_00158b48:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00158b4c:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00158b50:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00158b54:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = rd32(cpu->r[0] + + 0x8u);
        }
    }
L_00158b58:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00158b7c;
        }
    }
L_00158b5c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00158b60:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x8u);
    }
L_00158b64:;
    {
        cpu->r[12] = cpu->r[3];
    }
L_00158b68:;
    {
        cpu->r[2] = rd32(cpu->r[0] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_00158b6c:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00158b70:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00158b74:;
    {
        wr8(cpu->r[2] + + 0xae8u, cpu->r[12]);
    }
L_00158b78:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00158b68;
        }
    }
L_00158b7c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00158b80:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00158b98;
        }
    }
L_00158b84:;
    {
        cpu->r[14] = 0x00158b88u; fn_0018ba60(cpu);
    }
L_00158b88:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00158b8c:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_00158b90:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[3]);
    }
L_00158b94:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_00158b98:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00158b9c:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00158ba0u)) return;
    }
}

/* _ZN20ParticleEmitterGroupC1Ev @ 00158ba0 (arm) */
void fn_00158ba0(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00158ba0:;
    {
        cpu->r[13] -= 8u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[14]);
    }
L_00158ba4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00158bacu + + 0x54u);
    }
L_00158ba8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00158bac:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x28u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00158bb0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00158bb4:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00158bb8:;
    {
        wr8(cpu->r[0] + + 0x38u, cpu->r[3]);
    }
L_00158bbc:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00158bc0:;
    {
        wr32(cpu->r[0] + + 0x8u, cpu->r[3]);
    }
L_00158bc4:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00158bc8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00158bcc:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x24u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00158bd0:;
    {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
    }
L_00158bd4:;
    {
        cpu->r[0] = 0x00000190u;
    }
L_00158bd8:;
    {
        wr32(cpu->r[4] + + 0x10u, cpu->r[3]);
    }
L_00158bdc:;
    {
        cpu->r[14] = 0x00158be0u; imp__Znaj(cpu); /* _Znaj */
    }
L_00158be0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00158be4:;
    {
        wr32(cpu->r[4] + + 0x8u, cpu->r[0]);
    }
L_00158be8:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x00000064u;
        }
    }
L_00158bec:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00158bf0:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0xcu, cpu->r[3]);
        }
    }
L_00158bf4:;
    {
        cpu->r[14] = 0x00158bf8u; fn_001583e0(cpu);
    }
L_00158bf8:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00158bfc:;
    {
        uint32_t v0 = rd32(cpu->r[13] + 0u);
        uint32_t v1 = rd32(cpu->r[13] + 4u);
        cpu->r[4] = v0;
        uint32_t t = v1;
        cpu->r[13] += 8u;
        if (guest_pc_write(cpu, t, entry_lr, 0x00158c00u)) return;
    }
}

/* _ZN20CParticleEmitterPool19GetAvailableEmitterEv @ 00158c04 (arm) */
void fn_00158c04(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00158c04:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00158c08:;
    {
        goto L_00158c14;
    }
L_00158c0c:;
    {
        sub_flags(cpu, cpu->r[3], 0x000000a0u, 1, 1);
    }
L_00158c10:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00158c38;
        }
    }
L_00158c14:;
    {
        cpu->r[2] = rd32(cpu->r[0] + cpu->r[3]);
    }
L_00158c18:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00158c1c:;
    {
        cpu->r[1] = rd8(cpu->r[2] + + 0xae8u);
    }
L_00158c20:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00158c24:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00158c0c;
        }
    }
L_00158c28:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00158c2c:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00158c30:;
    {
        wr8(cpu->r[2] + + 0xae8u, cpu->r[3]);
    }
L_00158c34:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00158c38:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00158c3c:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00158c40:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN20CParticleEmitterPool24GetAvailableEmitterGroupEv @ 00158c44 (arm) */
void fn_00158c44(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00158c44:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00158c48:;
    {
        cpu->r[2] = 0x00000000u;
    }
L_00158c4c:;
    {
        goto L_00158c58;
    }
L_00158c50:;
    {
        sub_flags(cpu, cpu->r[2], 0x0000001eu, 1, 1);
    }
L_00158c54:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00158c7c;
        }
    }
L_00158c58:;
    {
        cpu->r[0] = rd32(cpu->r[3] + + 0xa0u);
    }
L_00158c5c:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00158c60:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000004u, 0, 0);
    }
L_00158c64:;
    {
        cpu->r[1] = rd8(cpu->r[0] + + 0x38u);
    }
L_00158c68:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00158c6c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00158c50;
        }
    }
L_00158c70:;
    {
        cpu->r[3] = 0x00000001u;
    }
L_00158c74:;
    {
        wr8(cpu->r[0] + + 0x38u, cpu->r[3]);
    }
L_00158c78:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
L_00158c7c:;
    {
        cpu->r[0] = 0x00000000u;
    }
L_00158c80:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN20CParticleEmitterPoolD1Ev @ 00158c84 (arm) */
void fn_00158c84(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00158c84:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00158c88:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00158c8c:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00158c90:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00158c94:;
    {
        cpu->r[8] = cpu->r[6];
    }
L_00158c98:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0xa0u);
    }
L_00158c9c:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00158ca0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00158ca4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00158ca8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00158cbc;
        }
    }
L_00158cac:;
    {
        cpu->r[14] = 0x00158cb0u; fn_00158ae8(cpu);
    }
L_00158cb0:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00158cb4:;
    {
        cpu->r[14] = 0x00158cb8u; fn_0018ba20(cpu);
    }
L_00158cb8:;
    {
        wr32(cpu->r[4] + + 0xa0u, cpu->r[8]);
    }
L_00158cbc:;
    {
        sub_flags(cpu, cpu->r[6], 0x0000001eu, 1, 1);
    }
L_00158cc0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_00158cc4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00158c98;
        }
    }
L_00158cc8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00158ccc:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_00158cd0:;
    {
        cpu->r[5] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_00158cd4:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00158cd8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00158cdc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00158cf0;
        }
    }
L_00158ce0:;
    {
        cpu->r[14] = 0x00158ce4u; fn_00157bb8(cpu);
    }
L_00158ce4:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00158ce8:;
    {
        cpu->r[14] = 0x00158cecu; fn_0018ba20(cpu);
    }
L_00158cec:;
    {
        wr32(cpu->r[7] + cpu->r[4], cpu->r[6]);
    }
L_00158cf0:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_00158cf4:;
    {
        sub_flags(cpu, cpu->r[4], 0x000000a0u, 1, 1);
    }
L_00158cf8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00158cd0;
        }
    }
L_00158cfc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00158d00:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00158d04u)) return;
    }
}

/* _ZN20CParticleEmitterPool7DestroyEv @ 00158d04 (arm) */
void fn_00158d04(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00158d04:;
    {
        cpu->r[3] = rd32(0x00158d0cu + + 0x34u);
    }
L_00158d08:;
    {
        cpu->r[2] = rd32(0x00158d10u + + 0x34u);
    }
L_00158d0c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00158d14u, cpu->r[3], 0, 0);
    }
L_00158d10:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00158d14:;
    {
        cpu->r[5] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00158d18:;
    {
        cpu->r[4] = rd32(cpu->r[5]);
    }
L_00158d1c:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00158d20:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00158d24u)) return;
        }
    }
L_00158d24:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00158d28:;
    {
        cpu->r[14] = 0x00158d2cu; fn_00158c84(cpu);
    }
L_00158d2c:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00158d30:;
    {
        cpu->r[14] = 0x00158d34u; fn_0018ba20(cpu);
    }
L_00158d34:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00158d38:;
    {
        wr32(cpu->r[5], cpu->r[3]);
    }
L_00158d3c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00158d40u)) return;
    }
}

/* _ZN20CParticleEmitterPoolD2Ev @ 00158d48 (arm) */
void fn_00158d48(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00158d48:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00158d4c:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00158d50:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00158d54:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00158d58:;
    {
        cpu->r[8] = cpu->r[6];
    }
L_00158d5c:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0xa0u);
    }
L_00158d60:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[6], 0x00000001u, 0, 0);
    }
L_00158d64:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00158d68:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00158d6c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00158d80;
        }
    }
L_00158d70:;
    {
        cpu->r[14] = 0x00158d74u; fn_00158ae8(cpu);
    }
L_00158d74:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00158d78:;
    {
        cpu->r[14] = 0x00158d7cu; fn_0018ba20(cpu);
    }
L_00158d7c:;
    {
        wr32(cpu->r[4] + + 0xa0u, cpu->r[8]);
    }
L_00158d80:;
    {
        sub_flags(cpu, cpu->r[6], 0x0000001eu, 1, 1);
    }
L_00158d84:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_00158d88:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00158d5c;
        }
    }
L_00158d8c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00158d90:;
    {
        cpu->r[6] = cpu->r[4];
    }
L_00158d94:;
    {
        cpu->r[5] = rd32(cpu->r[7] + cpu->r[4]);
    }
L_00158d98:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00158d9c:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00158da0:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00158db4;
        }
    }
L_00158da4:;
    {
        cpu->r[14] = 0x00158da8u; fn_00157bb8(cpu);
    }
L_00158da8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00158dac:;
    {
        cpu->r[14] = 0x00158db0u; fn_0018ba20(cpu);
    }
L_00158db0:;
    {
        wr32(cpu->r[7] + cpu->r[4], cpu->r[6]);
    }
L_00158db4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_00158db8:;
    {
        sub_flags(cpu, cpu->r[4], 0x000000a0u, 1, 1);
    }
L_00158dbc:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00158d94;
        }
    }
L_00158dc0:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00158dc4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00158dc8u)) return;
    }
}

/* _ZN20CParticleEmitterPoolC1Ev @ 00158dc8 (arm) */
void fn_00158dc8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00158dc8:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00158dcc:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00158dd0:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00158dd4:;
    {
        cpu->r[0] = 0x00000aecu;
    }
L_00158dd8:;
    {
        cpu->r[14] = 0x00158ddcu; fn_0018ba6c(cpu);
    }
L_00158ddc:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00158de0:;
    {
        cpu->r[14] = 0x00158de4u; fn_00157c58(cpu);
    }
L_00158de4:;
    {
        wr32(cpu->r[7] + cpu->r[4], cpu->r[5]);
    }
L_00158de8:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_00158dec:;
    {
        sub_flags(cpu, cpu->r[4], 0x000000a0u, 1, 1);
    }
L_00158df0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00158dd4;
        }
    }
L_00158df4:;
    {
        cpu->r[5] = cpu->r[7];
    }
L_00158df8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00158dfc:;
    {
        cpu->r[0] = 0x0000003cu;
    }
L_00158e00:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00158e04:;
    {
        cpu->r[14] = 0x00158e08u; fn_0018ba6c(cpu);
    }
L_00158e08:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00158e0c:;
    {
        cpu->r[14] = 0x00158e10u; fn_00158ba0(cpu);
    }
L_00158e10:;
    {
        sub_flags(cpu, cpu->r[4], 0x0000001eu, 1, 1);
    }
L_00158e14:;
    {
        wr32(cpu->r[5] + + 0xa0u, cpu->r[6]);
    }
L_00158e18:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_00158e1c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00158dfc;
        }
    }
L_00158e20:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00158e24:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00158e28u)) return;
    }
}

/* _ZN20CParticleEmitterPool11GetInstanceEv @ 00158e28 (arm) */
void fn_00158e28(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00158e28:;
    {
        cpu->r[3] = rd32(0x00158e30u + + 0x3cu);
    }
L_00158e2c:;
    {
        cpu->r[2] = rd32(0x00158e34u + + 0x3cu);
    }
L_00158e30:;
    {
        cpu->r[3] = add_flags(cpu, 0x00158e38u, cpu->r[3], 0, 0);
    }
L_00158e34:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00158e38:;
    {
        cpu->r[5] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00158e3c:;
    {
        cpu->r[4] = rd32(cpu->r[5]);
    }
L_00158e40:;
    {
        sub_flags(cpu, cpu->r[4], 0x00000000u, 1, 1);
    }
L_00158e44:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00158e50;
        }
    }
L_00158e48:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00158e4c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00158e50u)) return;
    }
L_00158e50:;
    {
        cpu->r[0] = 0x00000118u;
    }
L_00158e54:;
    {
        cpu->r[14] = 0x00158e58u; fn_0018ba6c(cpu);
    }
L_00158e58:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00158e5c:;
    {
        cpu->r[14] = 0x00158e60u; fn_00158dc8(cpu);
    }
L_00158e60:;
    {
        wr32(cpu->r[5], cpu->r[4]);
    }
L_00158e64:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00158e68:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00158e6cu)) return;
    }
}

/* _ZN20CParticleEmitterPoolC2Ev @ 00158e74 (arm) */
void fn_00158e74(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00158e74:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00158e78:;
    {
        cpu->r[7] = cpu->r[0];
    }
L_00158e7c:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00158e80:;
    {
        cpu->r[0] = 0x00000aecu;
    }
L_00158e84:;
    {
        cpu->r[14] = 0x00158e88u; fn_0018ba6c(cpu);
    }
L_00158e88:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00158e8c:;
    {
        cpu->r[14] = 0x00158e90u; fn_00157c58(cpu);
    }
L_00158e90:;
    {
        wr32(cpu->r[7] + cpu->r[4], cpu->r[5]);
    }
L_00158e94:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_00158e98:;
    {
        sub_flags(cpu, cpu->r[4], 0x000000a0u, 1, 1);
    }
L_00158e9c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00158e80;
        }
    }
L_00158ea0:;
    {
        cpu->r[5] = cpu->r[7];
    }
L_00158ea4:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_00158ea8:;
    {
        cpu->r[0] = 0x0000003cu;
    }
L_00158eac:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00158eb0:;
    {
        cpu->r[14] = 0x00158eb4u; fn_0018ba6c(cpu);
    }
L_00158eb4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00158eb8:;
    {
        cpu->r[14] = 0x00158ebcu; fn_00158ba0(cpu);
    }
L_00158ebc:;
    {
        sub_flags(cpu, cpu->r[4], 0x0000001eu, 1, 1);
    }
L_00158ec0:;
    {
        wr32(cpu->r[5] + + 0xa0u, cpu->r[6]);
    }
L_00158ec4:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000004u, 0, 0);
    }
L_00158ec8:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00158ea8;
        }
    }
L_00158ecc:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00158ed0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00158ed4u)) return;
    }
}

/* _ZN15ParticleManager8SetAngleEf @ 00158ed4 (arm) */
void fn_00158ed4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00158ed4:;
    {
        wr32(cpu->r[0] + + 0x54u, cpu->r[1]);
    }
L_00158ed8:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15ParticleManager8GetAngleEv @ 00158edc (arm) */
void fn_00158edc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00158edc:;
    {
        cpu->r[0] = rd32(cpu->r[0] + + 0x54u);
    }
L_00158ee0:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}

/* _ZN15ParticleManager17RemoveAllEmittersEv @ 00158ee4 (arm) */
void fn_00158ee4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00158ee4:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x50u);
    }
L_00158ee8:;
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
L_00158eec:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 1);
    }
L_00158ef0:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_00158ef4:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_00158ef8:;
    {
        if (cond_test(cpu, 5)) {
        goto L_00158fb8;
        }
    }
L_00158efc:;
    {
        cpu->r[8] = rd32(0x00158f04u + + 0xd4u);
    }
L_00158f00:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 2u, &shc); cpu->r[5] = v;
    }
L_00158f04:;
    {
        cpu->r[9] = rd32(0x00158f0cu + + 0xd0u);
    }
L_00158f08:;
    {
        cpu->r[7] = 0x0000006au;
    }
L_00158f0c:;
    {
        cpu->r[11] = rd32(0x00158f14u + + 0xccu);
    }
L_00158f10:;
    {
        cpu->r[8] = add_flags(cpu, 0x00158f18u, cpu->r[8], 0, 0);
    }
L_00158f14:;
    {
        cpu->r[3] = rd32(0x00158f1cu + + 0xc8u);
    }
L_00158f18:;
    {
        cpu->r[9] = add_flags(cpu, 0x00158f20u, cpu->r[9], 0, 0);
    }
L_00158f1c:;
    {
        cpu->r[11] = add_flags(cpu, 0x00158f24u, cpu->r[11], 0, 0);
    }
L_00158f20:;
    {
        cpu->r[3] = add_flags(cpu, 0x00158f28u, cpu->r[3], 0, 0);
    }
L_00158f24:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00158f28:;
    {
        goto L_00158f60;
    }
L_00158f2c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x48u);
    }
L_00158f30:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_00158f34:;
    {
        cpu->r[10] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_00158f38:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_00158f3c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00158fc0;
        }
    }
L_00158f40:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 0);
    }
L_00158f44:;
    {
        cpu->r[1] = sub_flags(cpu, cpu->r[1], 0x00000001u, 1, 0);
    }
L_00158f48:;
    {
        add_flags(cpu, cpu->r[4], 0x00000001u, 0, 1);
    }
L_00158f4c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00158f50:;
    {
        wr32(cpu->r[6] + + 0x50u, cpu->r[1]);
    }
L_00158f54:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 0);
    }
L_00158f58:;
    {
        wr8(cpu->r[10] + + 0x38u, cpu->r[3]);
    }
L_00158f5c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00158fb8;
        }
    }
L_00158f60:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 1);
    }
L_00158f64:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00158f2c;
        }
    }
L_00158f68:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_00158f6c:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00158f70:;
    {
        cpu->r[3] = cpu->r[11];
    }
L_00158f74:;
    {
        cpu->r[2] = cpu->r[9];
    }
L_00158f78:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_00158f7c:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[7]);
    }
L_00158f80:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_00158f84:;
    {
        cpu->r[14] = 0x00158f88u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_00158f88:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x50u);
    }
L_00158f8c:;
    {
        cpu->r[3] = rd32(cpu->r[6] + + 0x48u);
    }
L_00158f90:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_00158f94:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], cpu->r[5], 0, 0);
    }
L_00158f98:;
    {
        cpu->r[10] = rd32(cpu->r[3] + cpu->r[5]);
    }
L_00158f9c:;
    {
        if (cond_test(cpu, 13)) {
        goto L_00158f38;
        }
    }
L_00158fa0:;
    {
        cpu->r[4] = sub_flags(cpu, cpu->r[4], 0x00000001u, 1, 0);
    }
L_00158fa4:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00158fa8:;
    {
        add_flags(cpu, cpu->r[4], 0x00000001u, 0, 1);
    }
L_00158fac:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[5], 0x00000004u, 1, 0);
    }
L_00158fb0:;
    {
        wr8(cpu->r[10] + + 0x38u, cpu->r[3]);
    }
L_00158fb4:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00158f60;
        }
    }
L_00158fb8:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00158fbc:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00158fc0u)) return;
    }
L_00158fc0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_00158fc4:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_00158fc8:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00158fcc:;
    {
        cpu->r[14] = 0x00158fd0u; imp_memcpy(cpu); /* memcpy */
    }
L_00158fd0:;
    {
        cpu->r[1] = rd32(cpu->r[6] + + 0x50u);
    }
L_00158fd4:;
    {
        goto L_00158f40;
    }
}

/* _ZN15ParticleManager13RemoveEmitterEP20ParticleEmitterGroup @ 00158fe8 (arm) */
void fn_00158fe8(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00158fe8:;
    {
        cpu->r[12] = rd32(cpu->r[0] + + 0x50u);
    }
L_00158fec:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00158ff0:;
    {
        sub_flags(cpu, cpu->r[12], 0x00000000u, 1, 1);
    }
L_00158ff4:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00158ff8:;
    {
        cpu->r[4] = cpu->r[1];
    }
L_00158ffc:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00159034;
        }
    }
L_00159000:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x48u);
    }
L_00159004:;
    {
        cpu->r[2] = rd32(cpu->r[3]);
    }
L_00159008:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[2], 1, 1);
    }
L_0015900c:;
    {
        if (cond_test(cpu, 1)) {
        cpu->r[0] = 0x00000000u;
        }
    }
L_00159010:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[2] = 0x00000000u;
        }
    }
L_00159014:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00159028;
        }
    }
L_00159018:;
    {
        goto L_00159044;
    }
L_0015901c:;
    {
        cpu->r[1] = rd32(cpu->r[3] + shifter(cpu->r[2], 2, 2u, &shc));
    }
L_00159020:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[1], 1, 1);
    }
L_00159024:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00159040;
        }
    }
L_00159028:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_0015902c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[12], 1, 1);
    }
L_00159030:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015901c;
        }
    }
L_00159034:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00159038:;
    {
        wr8(cpu->r[4] + + 0x38u, cpu->r[3]);
    }
L_0015903c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00159040u)) return;
    }
L_00159040:;
    {
        cpu->r[0] = cpu->r[2];
    }
L_00159044:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[12], cpu->r[0], 1, 1);
    }
L_00159048:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00159060;
        }
    }
L_0015904c:;
    {
        cpu->r[12] = sub_flags(cpu, cpu->r[12], 0x00000001u, 1, 0);
    }
L_00159050:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00159054:;
    {
        wr32(cpu->r[5] + + 0x50u, cpu->r[12]);
    }
L_00159058:;
    {
        wr8(cpu->r[4] + + 0x38u, cpu->r[3]);
    }
L_0015905c:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00159060u)) return;
    }
L_00159060:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[0], 0x00000001u, 0, 0);
    }
L_00159064:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_00159068:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[3], shifter(cpu->r[0], 2, 2u, &shc), 0, 0);
    }
L_0015906c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[3], shifter(cpu->r[1], 2, 2u, &shc), 0, 0);
    }
L_00159070:;
    {
        cpu->r[14] = 0x00159074u; imp_memcpy(cpu); /* memcpy */
    }
L_00159074:;
    {
        cpu->r[12] = rd32(cpu->r[5] + + 0x50u);
    }
L_00159078:;
    {
        goto L_0015904c;
    }
}

/* _ZN15ParticleManager6RenderEv @ 0015907c (arm) */
void fn_0015907c(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_0015907c:;
    {
        cpu->r[3] = rd32(cpu->r[0] + + 0x50u);
    }
L_00159080:;
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
L_00159084:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00159088:;
    {
        cpu->r[6] = rd32(0x00159090u + + 0x1b0u);
    }
L_0015908c:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000014u, 1, 0);
    }
L_00159090:;
    {
        cpu->r[5] = cpu->r[0];
    }
L_00159094:;
    {
        cpu->r[6] = add_flags(cpu, 0x0015909cu, cpu->r[6], 0, 0);
    }
L_00159098:;
    {
        if (cond_test(cpu, 2)) {
        goto L_001590a4;
        }
    }
L_0015909c:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001590a0:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001590a4u)) return;
    }
L_001590a4:;
    {
        cpu->r[8] = rd32(0x001590acu + + 0x198u);
    }
L_001590a8:;
    {
        cpu->r[4] = 0x00000000u;
    }
L_001590ac:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_001590b0:;
    {
        wr32(cpu->r[0], cpu->r[4]);
    }
L_001590b4:;
    {
        cpu->r[7] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_001590b8:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_001590bc:;
    {
        cpu->r[14] = 0x001590c0u; fn_0012e824(cpu);
    }
L_001590c0:;
    {
        cpu->r[2] = 0x00000203u;
    }
L_001590c4:;
    {
        cpu->r[3] = cpu->r[4];
    }
L_001590c8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001590cc:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_001590d0:;
    {
        cpu->r[14] = 0x001590d4u; fn_0012e9c4(cpu);
    }
L_001590d4:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_001590d8:;
    {
        cpu->r[14] = 0x001590dcu; fn_0012e11c(cpu);
    }
L_001590dc:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_001590e0:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001590e4:;
    {
        cpu->r[14] = 0x001590e8u; fn_0012e150(cpu);
    }
L_001590e8:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_001590ec:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001590f0:;
    {
        cpu->r[14] = 0x001590f4u; fn_0012e1c8(cpu);
    }
L_001590f4:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_001590f8:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_001590fc:;
    {
        cpu->r[14] = 0x00159100u; fn_0012e19c(cpu);
    }
L_00159100:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_00159104:;
    {
        cpu->r[1] = cpu->r[4];
    }
L_00159108:;
    {
        cpu->r[14] = 0x0015910cu; fn_0012e170(cpu);
    }
L_0015910c:;
    {
        cpu->r[0] = rd32(cpu->r[7]);
    }
L_00159110:;
    {
        cpu->r[1] = 0x000084c0u;
    }
L_00159114:;
    {
        cpu->r[14] = 0x00159118u; fn_0012e124(cpu);
    }
L_00159118:;
    {
        cpu->r[3] = rd32(cpu->r[7]);
    }
L_0015911c:;
    {
        cpu->r[2] = 0x0000128cu;
    }
L_00159120:;
    {
        cpu->r[1] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00159124:;
    {
        cpu->r[2] = 0x00001288u;
    }
L_00159128:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[4], 1, 1);
    }
L_0015912c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[2]);
    }
L_00159130:;
    {
        if (cond_test(cpu, 12)) {
        cpu->r[1] = 0x0000002bu;
        }
    }
L_00159134:;
    {
        cpu->r[14] = 0x00159138u; fn_0014814c(cpu);
    }
L_00159138:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x50u);
    }
L_0015913c:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[4], 1, 1);
    }
L_00159140:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001591e4;
        }
    }
L_00159144:;
    {
        cpu->r[3] = rd32(0x0015914cu + + 0xfcu);
    }
L_00159148:;
    {
        cpu->r[10] = 0x0000006au;
    }
L_0015914c:;
    {
        cpu->r[9] = rd32(0x00159154u + + 0xf8u);
    }
L_00159150:;
    {
        cpu->r[7] = cpu->r[6];
    }
L_00159154:;
    {
        cpu->r[3] = add_flags(cpu, 0x0015915cu, cpu->r[3], 0, 0);
    }
L_00159158:;
    {
        cpu->r[11] = rd32(0x00159160u + + 0xf0u);
    }
L_0015915c:;
    {
        wr32(cpu->r[13] + + 0x8u, cpu->r[3]);
    }
L_00159160:;
    {
        cpu->r[9] = add_flags(cpu, 0x00159168u, cpu->r[9], 0, 0);
    }
L_00159164:;
    {
        cpu->r[3] = rd32(0x0015916cu + + 0xe8u);
    }
L_00159168:;
    {
        cpu->r[11] = add_flags(cpu, 0x00159170u, cpu->r[11], 0, 0);
    }
L_0015916c:;
    {
        cpu->r[3] = add_flags(cpu, 0x00159174u, cpu->r[3], 0, 0);
    }
L_00159170:;
    {
        wr32(cpu->r[13] + + 0xcu, cpu->r[3]);
    }
L_00159174:;
    {
        goto L_00159184;
    }
L_00159178:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_0015917c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_00159180:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001591e0;
        }
    }
L_00159184:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x48u);
    }
L_00159188:;
    {
        uint32_t v = shifter(cpu->r[4], 2, 2u, &shc); cpu->r[6] = v;
    }
L_0015918c:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[4], 2, 2u, &shc));
    }
L_00159190:;
    {
        cpu->r[3] = rd8(cpu->r[0]);
    }
L_00159194:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00159198:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00159178;
        }
    }
L_0015919c:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_001591a0:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001591cc;
        }
    }
L_001591a4:;
    {
        cpu->r[12] = rd32(cpu->r[13] + + 0xcu);
    }
L_001591a8:;
    {
        cpu->r[1] = cpu->r[9];
    }
L_001591ac:;
    {
        cpu->r[3] = rd32(cpu->r[13] + + 0x8u);
    }
L_001591b0:;
    {
        cpu->r[2] = cpu->r[11];
    }
L_001591b4:;
    {
        cpu->r[0] = 0x00000006u;
    }
L_001591b8:;
    {
        wr32(cpu->r[13] + + 0x4u, cpu->r[10]);
    }
L_001591bc:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001591c0:;
    {
        cpu->r[14] = 0x001591c4u; imp___android_log_print(cpu); /* __android_log_print */
    }
L_001591c4:;
    {
        cpu->r[3] = rd32(cpu->r[5] + + 0x48u);
    }
L_001591c8:;
    {
        cpu->r[0] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_001591cc:;
    {
        cpu->r[14] = 0x001591d0u; fn_00158318(cpu);
    }
L_001591d0:;
    {
        cpu->r[2] = rd32(cpu->r[5] + + 0x50u);
    }
L_001591d4:;
    {
        cpu->r[4] = add_flags(cpu, cpu->r[4], 0x00000001u, 0, 0);
    }
L_001591d8:;
    {
        sub_flags(cpu, cpu->r[4], cpu->r[2], 1, 1);
    }
L_001591dc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00159184;
        }
    }
L_001591e0:;
    {
        cpu->r[6] = cpu->r[7];
    }
L_001591e4:;
    {
        cpu->r[4] = rd32(cpu->r[6] + cpu->r[8]);
    }
L_001591e8:;
    {
        cpu->r[6] = 0x0000173cu;
    }
L_001591ec:;
    {
        cpu->r[14] = rd32(cpu->r[5]);
    }
L_001591f0:;
    {
        cpu->r[2] = 0x00005556u;
    }
L_001591f4:;
    {
        cpu->r[2] = (cpu->r[2] & 0xffffu) | (0x5555u << 16);
    }
L_001591f8:;
    {
        cpu->r[12] = 0x00001738u;
    }
L_001591fc:;
    {
        cpu->r[3] = rd32(cpu->r[4]);
    }
L_00159200:;
    {
        cpu->r[1] = 0x00000001u;
    }
L_00159204:;
    {
        cpu->r[0] = cpu->r[3];
    }
L_00159208:;
    {
        cpu->r[8] = rd32(cpu->r[3] + cpu->r[6]);
    }
L_0015920c:;
    {
        cpu->r[7] = rd32(cpu->r[3] + cpu->r[12]);
    }
L_00159210:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[8], cpu->r[14], 0, 0);
    }
L_00159214:;
    {
        wr32(cpu->r[3] + cpu->r[6], cpu->r[14]);
    }
L_00159218:;
    {
        cpu->r[14] = rd32(cpu->r[5]);
    }
L_0015921c:;
    {
        { int64_t v = (int64_t)(int32_t)cpu->r[2] * (int64_t)(int32_t)cpu->r[14]; cpu->r[5] = (uint32_t)v; cpu->r[2] = (uint32_t)(v >> 32); }
    }
L_00159220:;
    {
        cpu->r[14] = sub_flags(cpu, cpu->r[2], shifter(cpu->r[14], 1, 31u, &shc), 1, 0);
    }
L_00159224:;
    {
        cpu->r[14] = add_flags(cpu, cpu->r[14], cpu->r[7], 0, 0);
    }
L_00159228:;
    {
        wr32(cpu->r[3] + cpu->r[12], cpu->r[14]);
    }
L_0015922c:;
    {
        cpu->r[14] = 0x00159230u; fn_0012e824(cpu);
    }
L_00159230:;
    {
        cpu->r[0] = rd32(cpu->r[4]);
    }
L_00159234:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_00159238:;
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
L_0015923c:;
    {
        return fn_0012e0e8(cpu);
    }
}

/* _ZN15ParticleManager6UpdateEv @ 00159258 (arm) */
void fn_00159258(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00159258:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_0015925c:;
    {
        cpu->r[5] = rd32(0x00159264u + + 0x100u);
    }
L_00159260:;
    {
        cpu->r[3] = rd32(0x00159268u + + 0x100u);
    }
L_00159264:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000018u, 1, 0);
    }
L_00159268:;
    {
        cpu->r[5] = add_flags(cpu, 0x00159270u, cpu->r[5], 0, 0);
    }
L_0015926c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00159270:;
    {
        cpu->r[1] = 0x00000006u;
    }
L_00159274:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_00159278:;
    {
        cpu->r[0] = rd32(cpu->r[3]);
    }
L_0015927c:;
    {
        cpu->r[14] = 0x00159280u; fn_000f3430(cpu);
    }
L_00159280:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00159284:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00159294;
        }
    }
L_00159288:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x50u);
    }
L_0015928c:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00159290:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015929c;
        }
    }
L_00159294:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000018u, 0, 0);
    }
L_00159298:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015929cu)) return;
    }
L_0015929c:;
    {
        cpu->r[0] = rd32(0x001592a4u + + 0xc8u);
    }
L_001592a0:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[13], 0x0000000cu, 0, 0);
    }
L_001592a4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001592a8:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[13], 0x00000014u, 0, 0);
    }
L_001592ac:;
    {
        cpu->r[6] = add_flags(cpu, cpu->r[4], 0x00000004u, 0, 0);
    }
L_001592b0:;
    {
        cpu->r[0] = rd32(cpu->r[5] + cpu->r[0]);
    }
L_001592b4:;
    {
        cpu->r[12] = rd32(cpu->r[0]);
    }
L_001592b8:;
    {
        cpu->r[0] = 0x00001314u;
    }
L_001592bc:;
    {
        cpu->r[0] = rd32(cpu->r[12] + cpu->r[0]);
    }
L_001592c0:;
    {
        cpu->r[12] = 0x00000015u;
    }
L_001592c4:;
    {
        wr32(cpu->r[13], cpu->r[12]);
    }
L_001592c8:;
    {
        cpu->r[14] = 0x001592ccu; fn_00154038(cpu);
    }
L_001592cc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001592d0:;
    {
        cpu->r[14] = 0x001592d4u; fn_00153600(cpu);
    }
L_001592d4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[13] + + 0x14u);
    }
L_001592d8:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_001592dc:;
    {
        vfp_sync_flags(cpu);
    }
L_001592e0:;
    {
        if (cond_test(cpu, 6)) {
        goto L_001592fc;
        }
    }
L_001592e4:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x001592ecu + + 0x74u);
    }
L_001592e8:;
    {
        vfp_vadd(cpu, 15, 15, 14);
    }
L_001592ec:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), 0.0f);
    }
L_001592f0:;
    {
        vfp_sync_flags(cpu);
    }
L_001592f4:;
    {
        if (cond_test(cpu, 5)) {
        goto L_001592e8;
        }
    }
L_001592f8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001592fc:;
    {
        *vfp_s(cpu, 14) = *(float*)G(0x00159304u + + 0x5cu);
    }
L_00159300:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_00159304:;
    {
        vfp_sync_flags(cpu);
    }
L_00159308:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00159320;
        }
    }
L_0015930c:;
    {
        vfp_vsub(cpu, 15, 15, 14);
    }
L_00159310:;
    {
        vfp_set_cmp32(cpu, *vfp_s(cpu,15), *vfp_s(cpu,14));
    }
L_00159314:;
    {
        vfp_sync_flags(cpu);
    }
L_00159318:;
    {
        if (cond_test(cpu, 13)) {
        goto L_0015930c;
        }
    }
L_0015931c:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x14u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00159320:;
    {
        vfp_vneg(cpu, 15, 15);
    }
L_00159324:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00159328:;
    {
        cpu->r[1] = *(uint32_t*)vfp_s(cpu,15);
    }
L_0015932c:;
    {
        cpu->r[14] = 0x00159330u; fn_00154350(cpu);
    }
L_00159330:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x50u);
    }
L_00159334:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00159338:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00159294;
        }
    }
L_0015933c:;
    {
        cpu->r[5] = 0x00000000u;
    }
L_00159340:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x48u);
    }
L_00159344:;
    {
        cpu->r[0] = rd32(cpu->r[3] + shifter(cpu->r[5], 2, 2u, &shc));
    }
L_00159348:;
    {
        cpu->r[5] = add_flags(cpu, cpu->r[5], 0x00000001u, 0, 0);
    }
L_0015934c:;
    {
        cpu->r[14] = 0x00159350u; fn_001584cc(cpu);
    }
L_00159350:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x50u);
    }
L_00159354:;
    {
        sub_flags(cpu, cpu->r[5], cpu->r[3], 1, 1);
    }
L_00159358:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00159340;
        }
    }
L_0015935c:;
    {
        goto L_00159294;
    }
}

/* _ZN15ParticleManager10AddEmitterEP18ParticleParameters8Vector3d @ 00159370 (arm) */
void fn_00159370(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00159370:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_00159374:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_00159378:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_0015937c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00159380:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_00159384:;
    {
        cpu->r[14] = 0x00159388u; fn_00158e28(cpu);
    }
L_00159388:;
    {
        cpu->r[14] = 0x0015938cu; fn_00158c44(cpu);
    }
L_0015938c:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_00159390:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_00159394:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x8u);
    }
L_00159398:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015939c:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5]);
    }
L_001593a0:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001593a4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x4u);
    }
L_001593a8:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001593ac:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001593b0:;
    {
        cpu->r[14] = 0x001593b4u; fn_0015816c(cpu);
    }
L_001593b4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x50u);
    }
L_001593b8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4cu);
    }
L_001593bc:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001593c0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_001593c4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_001593e8;
        }
    }
L_001593c8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x48u);
    }
L_001593cc:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[5] = v;
    }
L_001593d0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001593d4:;
    {
        wr32(cpu->r[3] + cpu->r[5], cpu->r[6]);
    }
L_001593d8:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[2]);
    }
L_001593dc:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_001593e0:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_001593e4:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x001593e8u)) return;
    }
L_001593e8:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001593ec:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[7], shifter(cpu->r[2], 1, 1u, &shc), 0, 1);
    }
L_001593f0:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00159440;
        }
    }
L_001593f4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x48u);
    }
L_001593f8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001593fc:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015948c;
        }
    }
L_00159400:;
    {
        cpu->r[14] = 0x00159404u; fn_0018ba60(cpu);
    }
L_00159404:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00159408:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000000u, cpu->r[5], 1, 0);
    }
L_0015940c:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[8]);
    }
L_00159410:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[8]);
    }
L_00159414:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[8]);
    }
L_00159418:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_0015941c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00159484;
        }
    }
L_00159420:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[5] = v;
    }
L_00159424:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], shifter(cpu->r[7], 2, 2u, &shc), 0, 0);
    }
L_00159428:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_0015942c:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[5], 0, 0);
    }
L_00159430:;
    {
        cpu->r[14] = 0x00159434u; imp_memcpy(cpu); /* memcpy */
    }
L_00159434:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x48u);
    }
L_00159438:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x50u);
    }
L_0015943c:;
    {
        goto L_001593d0;
    }
L_00159440:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x48u);
    }
L_00159444:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00159448:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015945c;
        }
    }
L_0015944c:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[8], 1, 1);
    }
L_00159450:;
    {
        if (cond_test(cpu, 11)) {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[5] = v;
        }
    }
L_00159454:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001593dc;
        }
    }
L_00159458:;
    {
        goto L_001593d0;
    }
L_0015945c:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 2u, &shc); cpu->r[0] = v;
    }
L_00159460:;
    {
        cpu->r[14] = 0x00159464u; imp__Znaj(cpu); /* _Znaj */
    }
L_00159464:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00159468:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_0015946c:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[0]);
    }
L_00159470:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001593dc;
        }
    }
L_00159474:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x50u);
    }
L_00159478:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[8]);
    }
L_0015947c:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 0);
    }
L_00159480:;
    {
        goto L_00159418;
    }
L_00159484:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x50u);
    }
L_00159488:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x48u);
    }
L_0015948c:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[5] = v;
    }
L_00159490:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_00159494:;
    {
        goto L_001593d0;
    }
}

/* _ZN15ParticleManagerC1Ev @ 00159498 (arm) */
void fn_00159498(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00159498:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0015949c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001594a0:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_001594a4:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_001594a8:;
    {
        wr32(cpu->r[0] + + 0x44u, cpu->r[6]);
    }
L_001594ac:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001594b0:;
    {
        cpu->r[14] = 0x001594b4u; fn_001535e0(cpu);
    }
L_001594b4:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001594bcu + + 0x50u);
    }
L_001594b8:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[6]);
    }
L_001594bc:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x54u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001594c0:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[6]);
    }
L_001594c4:;
    {
        cpu->r[0] = 0x00000078u;
    }
L_001594c8:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[6]);
    }
L_001594cc:;
    {
        cpu->r[14] = 0x001594d0u; imp__Znaj(cpu); /* _Znaj */
    }
L_001594d0:;
    {
        cpu->r[5] = rd32(0x001594d8u + + 0x38u);
    }
L_001594d4:;
    {
        cpu->r[5] = add_flags(cpu, 0x001594dcu, cpu->r[5], 0, 0);
    }
L_001594d8:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 1);
    }
L_001594dc:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[0]);
    }
L_001594e0:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x0000001eu;
        }
    }
L_001594e4:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
        }
    }
L_001594e8:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001594ec:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_001594f0:;
    {
        cpu->r[3] = rd32(0x001594f8u + + 0x1cu);
    }
L_001594f4:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_001594f8:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_001594fc:;
    {
        wr32(cpu->r[3], cpu->r[4]);
    }
L_00159500:;
    {
        cpu->r[14] = 0x00159504u; fn_00153efc(cpu);
    }
L_00159504:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00159508:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015950cu)) return;
    }
}

/* _ZN15ParticleManagerC2Ev @ 00159518 (arm) */
void fn_00159518(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00159518:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0015951c:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00159520:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[0], 0x00000004u, 0, 0);
    }
L_00159524:;
    {
        cpu->r[6] = 0x00000000u;
    }
L_00159528:;
    {
        wr32(cpu->r[0] + + 0x44u, cpu->r[6]);
    }
L_0015952c:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00159530:;
    {
        cpu->r[14] = 0x00159534u; fn_001535e0(cpu);
    }
L_00159534:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x0015953cu + + 0x50u);
    }
L_00159538:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[6]);
    }
L_0015953c:;
    {
        *(uint32_t*)G(cpu->r[4] + + 0x54u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_00159540:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[6]);
    }
L_00159544:;
    {
        cpu->r[0] = 0x00000078u;
    }
L_00159548:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[6]);
    }
L_0015954c:;
    {
        cpu->r[14] = 0x00159550u; imp__Znaj(cpu); /* _Znaj */
    }
L_00159550:;
    {
        cpu->r[5] = rd32(0x00159558u + + 0x38u);
    }
L_00159554:;
    {
        cpu->r[5] = add_flags(cpu, 0x0015955cu, cpu->r[5], 0, 0);
    }
L_00159558:;
    {
        sub_flags(cpu, cpu->r[0], cpu->r[6], 1, 1);
    }
L_0015955c:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[0]);
    }
L_00159560:;
    {
        if (cond_test(cpu, 2)) {
        cpu->r[3] = 0x0000001eu;
        }
    }
L_00159564:;
    {
        if (cond_test(cpu, 2)) {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
        }
    }
L_00159568:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0015956c:;
    {
        wr32(cpu->r[4], cpu->r[3]);
    }
L_00159570:;
    {
        cpu->r[3] = rd32(0x00159578u + + 0x1cu);
    }
L_00159574:;
    {
        cpu->r[0] = cpu->r[7];
    }
L_00159578:;
    {
        cpu->r[3] = rd32(cpu->r[5] + cpu->r[3]);
    }
L_0015957c:;
    {
        wr32(cpu->r[3], cpu->r[4]);
    }
L_00159580:;
    {
        cpu->r[14] = 0x00159584u; fn_00153efc(cpu);
    }
L_00159584:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00159588:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015958cu)) return;
    }
}

/* _ZN15ParticleManagerD1Ev @ 00159598 (arm) */
void fn_00159598(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00159598:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x50u);
    }
L_0015959c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_001595a0:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_001595a4:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001595a8:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = rd32(cpu->r[0] + + 0x48u);
        }
    }
L_001595ac:;
    {
        if (cond_test(cpu, 14)) {
        goto L_001595d0;
        }
    }
L_001595b0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001595b4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x48u);
    }
L_001595b8:;
    {
        cpu->r[12] = cpu->r[3];
    }
L_001595bc:;
    {
        cpu->r[2] = rd32(cpu->r[0] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_001595c0:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_001595c4:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_001595c8:;
    {
        wr8(cpu->r[2] + + 0x38u, cpu->r[12]);
    }
L_001595cc:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001595bc;
        }
    }
L_001595d0:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001595d4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001595ec;
        }
    }
L_001595d8:;
    {
        cpu->r[14] = 0x001595dcu; fn_0018ba60(cpu);
    }
L_001595dc:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001595e0:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[3]);
    }
L_001595e4:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[3]);
    }
L_001595e8:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
    }
L_001595ec:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x44u);
    }
L_001595f0:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_001595f4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00159610;
        }
    }
L_001595f8:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001595fc:;
    {
        cpu->r[14] = 0x00159600u; fn_000b2bc8(cpu);
    }
L_00159600:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00159604:;
    {
        cpu->r[14] = 0x00159608u; fn_0018ba20(cpu);
    }
L_00159608:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0015960c:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[3]);
    }
L_00159610:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00159614:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00159618u)) return;
    }
}

/* _ZN15ParticleManagerD2Ev @ 00159618 (arm) */
void fn_00159618(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00159618:;
    {
        cpu->r[1] = rd32(cpu->r[0] + + 0x50u);
    }
L_0015961c:;
    {
        cpu->r[13] -= 16u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[14]);
    }
L_00159620:;
    {
        sub_flags(cpu, cpu->r[1], 0x00000000u, 1, 1);
    }
L_00159624:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_00159628:;
    {
        if (cond_test(cpu, 14)) {
        cpu->r[0] = rd32(cpu->r[0] + + 0x48u);
        }
    }
L_0015962c:;
    {
        if (cond_test(cpu, 14)) {
        goto L_00159650;
        }
    }
L_00159630:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00159634:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x48u);
    }
L_00159638:;
    {
        cpu->r[12] = cpu->r[3];
    }
L_0015963c:;
    {
        cpu->r[2] = rd32(cpu->r[0] + shifter(cpu->r[3], 2, 2u, &shc));
    }
L_00159640:;
    {
        cpu->r[3] = add_flags(cpu, cpu->r[3], 0x00000001u, 0, 0);
    }
L_00159644:;
    {
        sub_flags(cpu, cpu->r[3], cpu->r[1], 1, 1);
    }
L_00159648:;
    {
        wr8(cpu->r[2] + + 0x38u, cpu->r[12]);
    }
L_0015964c:;
    {
        if (cond_test(cpu, 12)) {
        goto L_0015963c;
        }
    }
L_00159650:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00159654:;
    {
        if (cond_test(cpu, 1)) {
        goto L_0015966c;
        }
    }
L_00159658:;
    {
        cpu->r[14] = 0x0015965cu; fn_0018ba60(cpu);
    }
L_0015965c:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_00159660:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[3]);
    }
L_00159664:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[3]);
    }
L_00159668:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[3]);
    }
L_0015966c:;
    {
        cpu->r[5] = rd32(cpu->r[4] + + 0x44u);
    }
L_00159670:;
    {
        sub_flags(cpu, cpu->r[5], 0x00000000u, 1, 1);
    }
L_00159674:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00159690;
        }
    }
L_00159678:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_0015967c:;
    {
        cpu->r[14] = 0x00159680u; fn_000b2bc8(cpu);
    }
L_00159680:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00159684:;
    {
        cpu->r[14] = 0x00159688u; fn_0018ba20(cpu);
    }
L_00159688:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_0015968c:;
    {
        wr32(cpu->r[4] + + 0x44u, cpu->r[3]);
    }
L_00159690:;
    {
        cpu->r[0] = cpu->r[4];
    }
L_00159694:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00159698u)) return;
    }
}

/* _ZN15ParticleManager10AddEmitterEiP11SceneObjecti @ 00159698 (arm) */
void fn_00159698(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_00159698:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_0015969c:;
    {
        cpu->r[8] = cpu->r[1];
    }
L_001596a0:;
    {
        cpu->r[7] = cpu->r[2];
    }
L_001596a4:;
    {
        cpu->r[6] = cpu->r[3];
    }
L_001596a8:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001596ac:;
    {
        cpu->r[14] = 0x001596b0u; fn_00158e28(cpu);
    }
L_001596b0:;
    {
        cpu->r[14] = 0x001596b4u; fn_00158c44(cpu);
    }
L_001596b4:;
    {
        cpu->r[5] = sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001596b8:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001596fc;
        }
    }
L_001596bc:;
    {
        cpu->r[14] = 0x001596c0u; fn_001583e0(cpu);
    }
L_001596c0:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_001596c4:;
    {
        cpu->r[2] = cpu->r[7];
    }
L_001596c8:;
    {
        cpu->r[3] = cpu->r[6];
    }
L_001596cc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_001596d0:;
    {
        cpu->r[14] = 0x001596d4u; fn_0015813c(cpu);
    }
L_001596d4:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x50u);
    }
L_001596d8:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4cu);
    }
L_001596dc:;
    {
        cpu->r[6] = cpu->r[2];
    }
L_001596e0:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_001596e4:;
    {
        if (cond_test(cpu, 11)) {
        goto L_00159704;
        }
    }
L_001596e8:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x48u);
    }
L_001596ec:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[6] = v;
    }
L_001596f0:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_001596f4:;
    {
        wr32(cpu->r[3] + cpu->r[6], cpu->r[5]);
    }
L_001596f8:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[2]);
    }
L_001596fc:;
    {
        cpu->r[0] = cpu->r[5];
    }
L_00159700:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x00159704u)) return;
    }
L_00159704:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00159708:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[7], shifter(cpu->r[2], 1, 1u, &shc), 0, 1);
    }
L_0015970c:;
    {
        if (cond_test(cpu, 2)) {
        goto L_0015975c;
        }
    }
L_00159710:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x48u);
    }
L_00159714:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00159718:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001597a8;
        }
    }
L_0015971c:;
    {
        cpu->r[14] = 0x00159720u; fn_0018ba60(cpu);
    }
L_00159720:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_00159724:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000000u, cpu->r[6], 1, 0);
    }
L_00159728:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[8]);
    }
L_0015972c:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[8]);
    }
L_00159730:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[8]);
    }
L_00159734:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00159738:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001597a0;
        }
    }
L_0015973c:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 2u, &shc); cpu->r[6] = v;
    }
L_00159740:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], shifter(cpu->r[7], 2, 2u, &shc), 0, 0);
    }
L_00159744:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_00159748:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[6], 0, 0);
    }
L_0015974c:;
    {
        cpu->r[14] = 0x00159750u; imp_memcpy(cpu); /* memcpy */
    }
L_00159750:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x48u);
    }
L_00159754:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x50u);
    }
L_00159758:;
    {
        goto L_001596f0;
    }
L_0015975c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x48u);
    }
L_00159760:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_00159764:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00159778;
        }
    }
L_00159768:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[8], 1, 1);
    }
L_0015976c:;
    {
        if (cond_test(cpu, 11)) {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[6] = v;
        }
    }
L_00159770:;
    {
        if (cond_test(cpu, 12)) {
        goto L_001596fc;
        }
    }
L_00159774:;
    {
        goto L_001596f0;
    }
L_00159778:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 2u, &shc); cpu->r[0] = v;
    }
L_0015977c:;
    {
        cpu->r[14] = 0x00159780u; imp__Znaj(cpu); /* _Znaj */
    }
L_00159780:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00159784:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_00159788:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[0]);
    }
L_0015978c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001596fc;
        }
    }
L_00159790:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x50u);
    }
L_00159794:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[8]);
    }
L_00159798:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[6], 1, 0);
    }
L_0015979c:;
    {
        goto L_00159734;
    }
L_001597a0:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x50u);
    }
L_001597a4:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x48u);
    }
L_001597a8:;
    {
        uint32_t v = shifter(cpu->r[6], 2, 2u, &shc); cpu->r[6] = v;
    }
L_001597ac:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001597b0:;
    {
        goto L_001596f0;
    }
}

/* _ZN15ParticleManager10AddEmitterEi8Vector3d @ 001597b4 (arm) */
void fn_001597b4(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001597b4:;
    {
        cpu->r[13] -= 24u;
        wr32(cpu->r[13] + 0u, cpu->r[4]);
        wr32(cpu->r[13] + 4u, cpu->r[5]);
        wr32(cpu->r[13] + 8u, cpu->r[6]);
        wr32(cpu->r[13] + 12u, cpu->r[7]);
        wr32(cpu->r[13] + 16u, cpu->r[8]);
        wr32(cpu->r[13] + 20u, cpu->r[14]);
    }
L_001597b8:;
    {
        cpu->r[13] = sub_flags(cpu, cpu->r[13], 0x00000010u, 1, 0);
    }
L_001597bc:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_001597c0:;
    {
        cpu->r[4] = cpu->r[0];
    }
L_001597c4:;
    {
        cpu->r[7] = cpu->r[1];
    }
L_001597c8:;
    {
        cpu->r[14] = 0x001597ccu; fn_00158e28(cpu);
    }
L_001597cc:;
    {
        cpu->r[14] = 0x001597d0u; fn_00158c44(cpu);
    }
L_001597d0:;
    {
        cpu->r[1] = cpu->r[7];
    }
L_001597d4:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[13], 0x00000004u, 0, 0);
    }
L_001597d8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x8u);
    }
L_001597dc:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0xcu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001597e0:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5]);
    }
L_001597e4:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001597e8:;
    {
        *vfp_s(cpu, 15) = *(float*)G(cpu->r[5] + + 0x4u);
    }
L_001597ec:;
    {
        *(uint32_t*)G(cpu->r[13] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001597f0:;
    {
        cpu->r[6] = cpu->r[0];
    }
L_001597f4:;
    {
        cpu->r[14] = 0x001597f8u; fn_00158128(cpu);
    }
L_001597f8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x50u);
    }
L_001597fc:;
    {
        cpu->r[1] = rd32(cpu->r[4] + + 0x4cu);
    }
L_00159800:;
    {
        cpu->r[5] = cpu->r[2];
    }
L_00159804:;
    {
        sub_flags(cpu, cpu->r[2], cpu->r[1], 1, 1);
    }
L_00159808:;
    {
        if (cond_test(cpu, 11)) {
        goto L_0015982c;
        }
    }
L_0015980c:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x48u);
    }
L_00159810:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[5] = v;
    }
L_00159814:;
    {
        cpu->r[2] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00159818:;
    {
        wr32(cpu->r[3] + cpu->r[5], cpu->r[6]);
    }
L_0015981c:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[2]);
    }
L_00159820:;
    {
        cpu->r[0] = cpu->r[6];
    }
L_00159824:;
    {
        cpu->r[13] = add_flags(cpu, cpu->r[13], 0x00000010u, 0, 0);
    }
L_00159828:;
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
        if (guest_pc_write(cpu, t, entry_lr, 0x0015982cu)) return;
    }
L_0015982c:;
    {
        cpu->r[7] = add_flags(cpu, cpu->r[2], 0x00000001u, 0, 0);
    }
L_00159830:;
    {
        cpu->r[8] = add_flags(cpu, cpu->r[7], shifter(cpu->r[2], 1, 1u, &shc), 0, 1);
    }
L_00159834:;
    {
        if (cond_test(cpu, 2)) {
        goto L_00159884;
        }
    }
L_00159838:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x48u);
    }
L_0015983c:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_00159840:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001598d0;
        }
    }
L_00159844:;
    {
        cpu->r[14] = 0x00159848u; fn_0018ba60(cpu);
    }
L_00159848:;
    {
        cpu->r[1] = cpu->r[8];
    }
L_0015984c:;
    {
        cpu->r[2] = sub_flags(cpu, 0x00000000u, cpu->r[5], 1, 0);
    }
L_00159850:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[8]);
    }
L_00159854:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[8]);
    }
L_00159858:;
    {
        wr32(cpu->r[4] + + 0x50u, cpu->r[8]);
    }
L_0015985c:;
    {
        sub_flags(cpu, cpu->r[2], 0x00000000u, 1, 1);
    }
L_00159860:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001598c8;
        }
    }
L_00159864:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[5] = v;
    }
L_00159868:;
    {
        cpu->r[0] = add_flags(cpu, cpu->r[1], shifter(cpu->r[7], 2, 2u, &shc), 0, 0);
    }
L_0015986c:;
    {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[2] = v;
    }
L_00159870:;
    {
        cpu->r[1] = add_flags(cpu, cpu->r[1], cpu->r[5], 0, 0);
    }
L_00159874:;
    {
        cpu->r[14] = 0x00159878u; imp_memcpy(cpu); /* memcpy */
    }
L_00159878:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x48u);
    }
L_0015987c:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x50u);
    }
L_00159880:;
    {
        goto L_00159814;
    }
L_00159884:;
    {
        cpu->r[3] = rd32(cpu->r[4] + + 0x48u);
    }
L_00159888:;
    {
        sub_flags(cpu, cpu->r[3], 0x00000000u, 1, 1);
    }
L_0015988c:;
    {
        if (cond_test(cpu, 1)) {
        goto L_001598a0;
        }
    }
L_00159890:;
    {
        sub_flags(cpu, cpu->r[1], cpu->r[8], 1, 1);
    }
L_00159894:;
    {
        if (cond_test(cpu, 11)) {
        uint32_t v = shifter(cpu->r[2], 2, 2u, &shc); cpu->r[5] = v;
        }
    }
L_00159898:;
    {
        if (cond_test(cpu, 12)) {
        goto L_00159820;
        }
    }
L_0015989c:;
    {
        goto L_00159814;
    }
L_001598a0:;
    {
        uint32_t v = shifter(cpu->r[8], 2, 2u, &shc); cpu->r[0] = v;
    }
L_001598a4:;
    {
        cpu->r[14] = 0x001598a8u; imp__Znaj(cpu); /* _Znaj */
    }
L_001598a8:;
    {
        sub_flags(cpu, cpu->r[0], 0x00000000u, 1, 1);
    }
L_001598ac:;
    {
        cpu->r[1] = cpu->r[0];
    }
L_001598b0:;
    {
        wr32(cpu->r[4] + + 0x48u, cpu->r[0]);
    }
L_001598b4:;
    {
        if (cond_test(cpu, 1)) {
        goto L_00159820;
        }
    }
L_001598b8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x50u);
    }
L_001598bc:;
    {
        wr32(cpu->r[4] + + 0x4cu, cpu->r[8]);
    }
L_001598c0:;
    {
        cpu->r[2] = sub_flags(cpu, cpu->r[2], cpu->r[5], 1, 0);
    }
L_001598c4:;
    {
        goto L_0015985c;
    }
L_001598c8:;
    {
        cpu->r[2] = rd32(cpu->r[4] + + 0x50u);
    }
L_001598cc:;
    {
        cpu->r[0] = rd32(cpu->r[4] + + 0x48u);
    }
L_001598d0:;
    {
        uint32_t v = shifter(cpu->r[5], 2, 2u, &shc); cpu->r[5] = v;
    }
L_001598d4:;
    {
        cpu->r[3] = cpu->r[0];
    }
L_001598d8:;
    {
        goto L_00159814;
    }
}

/* _ZN17ParticleOptimized5resetEP15ParticleEmitter @ 001598dc (arm) */
void fn_001598dc(CPU *cpu)
{
    const uint32_t entry_lr = cpu->r[14];
    uint32_t shc = 0; (void)shc; (void)entry_lr;
L_001598dc:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x001598e4u + + 0x30u);
    }
L_001598e0:;
    {
        cpu->r[3] = 0x00000000u;
    }
L_001598e4:;
    {
        *(uint32_t*)G(cpu->r[0]) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001598e8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x20u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001598ec:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x1cu) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001598f0:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x18u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001598f4:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x8u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001598f8:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x4u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_001598fc:;
    {
        wr32(cpu->r[0] + + 0x24u, cpu->r[1]);
    }
L_00159900:;
    {
        *vfp_s(cpu, 15) = *(float*)G(0x00159908u + + 0x10u);
    }
L_00159904:;
    {
        wr32(cpu->r[0] + + 0x28u, cpu->r[3]);
    }
L_00159908:;
    {
        *(uint32_t*)G(cpu->r[0] + + 0x90u) = *(uint32_t*)vfp_s(cpu, 15);
    }
L_0015990c:;
    {
        wr8(cpu->r[0] + + 0x64u, cpu->r[3]);
    }
L_00159910:;
    {
        guest_return_or_jump(cpu, cpu->r[14], entry_lr); return;
    }
}
